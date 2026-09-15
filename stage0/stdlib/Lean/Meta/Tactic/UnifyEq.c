// Lean compiler output
// Module: Lean.Meta.Tactic.UnifyEq
// Imports: public import Lean.Meta.Tactic.Injection import Init.Data.Nat.Internal.Linear import Lean.Structure import Lean.ProjFns import Lean.Meta.VirtualStructure
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
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_getStructureInfo_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_getProjFnForField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
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
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
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
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getVirtualCtorInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getVirtualProjInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_of_nat(lean_object*);
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
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_injectionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_Bijection_inv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "z"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 196, 150, 181, 147, 170, 254, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(lean_object* v_mvarId_1_, lean_object* v_eqDecl_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; lean_object* v___x_11_; 
v___x_8_ = l_Lean_LocalDecl_fvarId(v_eqDecl_2_);
lean_inc(v___x_8_);
v___x_9_ = l_Lean_mkFVar(v___x_8_);
v___x_10_ = 1;
v___x_11_ = l_Lean_Meta_mkEqOfHEq(v___x_9_, v___x_10_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_13_; 
v_a_12_ = lean_ctor_get(v___x_11_, 0);
lean_inc_n(v_a_12_, 2);
lean_dec_ref_known(v___x_11_, 1);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_13_ = lean_infer_type(v_a_12_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v___x_13_, 1);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_15_ = lean_whnf(v_a_14_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v___x_15_, 1);
v___x_17_ = l_Lean_LocalDecl_userName(v_eqDecl_2_);
v___x_18_ = l_Lean_MVarId_assert(v_mvarId_1_, v___x_17_, v_a_16_, v_a_12_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_20_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_a_19_);
lean_dec_ref_known(v___x_18_, 1);
v___x_20_ = l_Lean_MVarId_clear(v_a_19_, v___x_8_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27___boxed(lean_object* v_mvarId_45_, lean_object* v_eqDecl_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(v_mvarId_45_, v_eqDecl_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(lean_object* v_e_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v___x_61_; 
lean_inc_ref(v_e_55_);
v___x_61_ = l_Lean_Meta_evalNat(v_e_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
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
v___x_66_ = l_Lean_Meta_isOffset_x3f(v_e_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___boxed(lean_object* v_e_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_e_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_Bijection_inv(lean_object* v_b_96_, lean_object* v_e_97_){
_start:
{
lean_object* v___y_99_; uint8_t v___y_100_; lean_object* v_fst_104_; lean_object* v_snd_105_; uint8_t v_isCtor_109_; 
v_isCtor_109_ = lean_ctor_get_uint8(v_b_96_, sizeof(void*)*2);
if (v_isCtor_109_ == 0)
{
lean_object* v_ctor_110_; lean_object* v_proj_111_; 
v_ctor_110_ = lean_ctor_get(v_b_96_, 0);
lean_inc_ref(v_ctor_110_);
v_proj_111_ = lean_ctor_get(v_b_96_, 1);
lean_inc_ref(v_proj_111_);
lean_dec_ref(v_b_96_);
v_fst_104_ = v_proj_111_;
v_snd_105_ = v_ctor_110_;
goto v___jp_103_;
}
else
{
lean_object* v_ctor_112_; lean_object* v_proj_113_; 
v_ctor_112_ = lean_ctor_get(v_b_96_, 0);
lean_inc_ref(v_ctor_112_);
v_proj_113_ = lean_ctor_get(v_b_96_, 1);
lean_inc_ref(v_proj_113_);
lean_dec_ref(v_b_96_);
v_fst_104_ = v_ctor_112_;
v_snd_105_ = v_proj_113_;
goto v___jp_103_;
}
v___jp_98_:
{
if (v___y_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Expr_app___override(v___y_99_, v_e_97_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; 
lean_dec_ref(v___y_99_);
v___x_102_ = l_Lean_Expr_appArg_x21(v_e_97_);
lean_dec_ref(v_e_97_);
return v___x_102_;
}
}
v___jp_103_:
{
uint8_t v___x_106_; 
v___x_106_ = l_Lean_Expr_isApp(v_e_97_);
if (v___x_106_ == 0)
{
lean_dec_ref(v_fst_104_);
v___y_99_ = v_snd_105_;
v___y_100_ = v___x_106_;
goto v___jp_98_;
}
else
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = l_Lean_Expr_appFn_x21(v_e_97_);
v___x_108_ = lean_expr_eqv(v___x_107_, v_fst_104_);
lean_dec_ref(v_fst_104_);
lean_dec_ref(v___x_107_);
v___y_99_ = v_snd_105_;
v___y_100_ = v___x_108_;
goto v___jp_98_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(lean_object* v_structName_114_, lean_object* v_us_115_, lean_object* v_params_116_, lean_object* v___y_117_){
_start:
{
lean_object* v___x_122_; lean_object* v_env_123_; uint8_t v___x_124_; lean_object* v___x_125_; 
v___x_122_ = lean_st_ref_get(v___y_117_);
v_env_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc_ref_n(v_env_123_, 2);
lean_dec(v___x_122_);
v___x_124_ = 0;
lean_inc(v_structName_114_);
v___x_125_ = l_Lean_Environment_find_x3f(v_env_123_, v_structName_114_, v___x_124_);
if (lean_obj_tag(v___x_125_) == 1)
{
lean_object* v_val_126_; 
v_val_126_ = lean_ctor_get(v___x_125_, 0);
lean_inc(v_val_126_);
lean_dec_ref_known(v___x_125_, 1);
if (lean_obj_tag(v_val_126_) == 5)
{
lean_object* v_val_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_192_; 
v_val_127_ = lean_ctor_get(v_val_126_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v_val_126_);
if (v_isSharedCheck_192_ == 0)
{
v___x_129_ = v_val_126_;
v_isShared_130_ = v_isSharedCheck_192_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_val_127_);
lean_dec(v_val_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_192_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_numParams_131_; lean_object* v_numIndices_132_; lean_object* v_ctors_133_; uint8_t v_isRec_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v_numParams_131_ = lean_ctor_get(v_val_127_, 1);
lean_inc(v_numParams_131_);
v_numIndices_132_ = lean_ctor_get(v_val_127_, 2);
lean_inc(v_numIndices_132_);
v_ctors_133_ = lean_ctor_get(v_val_127_, 4);
lean_inc(v_ctors_133_);
v_isRec_134_ = lean_ctor_get_uint8(v_val_127_, sizeof(void*)*6);
lean_dec_ref(v_val_127_);
v___x_135_ = lean_unsigned_to_nat(0u);
v___x_136_ = lean_nat_dec_eq(v_numIndices_132_, v___x_135_);
lean_dec(v_numIndices_132_);
if (v___x_136_ == 0)
{
lean_dec(v_ctors_133_);
lean_dec(v_numParams_131_);
lean_del_object(v___x_129_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
goto v___jp_119_;
}
else
{
if (lean_obj_tag(v_ctors_133_) == 1)
{
lean_object* v_tail_137_; 
v_tail_137_ = lean_ctor_get(v_ctors_133_, 1);
if (lean_obj_tag(v_tail_137_) == 0)
{
if (v_isRec_134_ == 0)
{
lean_object* v_head_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_190_; 
v_head_138_ = lean_ctor_get(v_ctors_133_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v_ctors_133_);
if (v_isSharedCheck_190_ == 0)
{
lean_object* v_unused_191_; 
v_unused_191_ = lean_ctor_get(v_ctors_133_, 1);
lean_dec(v_unused_191_);
v___x_140_ = v_ctors_133_;
v_isShared_141_ = v_isSharedCheck_190_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_head_138_);
lean_dec(v_ctors_133_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_190_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; 
lean_inc(v_structName_114_);
lean_inc_ref(v_env_123_);
v___x_142_ = l_Lean_getStructureInfo_x3f(v_env_123_, v_structName_114_);
if (lean_obj_tag(v___x_142_) == 1)
{
lean_object* v_val_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_185_; 
lean_del_object(v___x_129_);
v_val_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_185_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_185_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_val_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_185_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v_fieldNames_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v_fieldNames_147_ = lean_ctor_get(v_val_143_, 1);
lean_inc_ref(v_fieldNames_147_);
lean_dec(v_val_143_);
v___x_148_ = lean_array_get_size(v_fieldNames_147_);
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_dec_eq(v___x_148_, v___x_149_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_153_; 
lean_dec_ref(v_fieldNames_147_);
lean_del_object(v___x_140_);
lean_dec(v_head_138_);
lean_dec(v_numParams_131_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
v___x_151_ = lean_box(0);
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 0);
lean_ctor_set(v___x_145_, 0, v___x_151_);
v___x_153_ = v___x_145_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_array_fget(v_fieldNames_147_, v___x_135_);
lean_dec_ref(v_fieldNames_147_);
v___x_156_ = l_Lean_getProjFnForField_x3f(v_env_123_, v_structName_114_, v___x_155_);
if (lean_obj_tag(v___x_156_) == 1)
{
lean_object* v_val_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_180_; 
v_val_157_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_180_ == 0)
{
v___x_159_ = v___x_156_;
v_isShared_160_ = v_isSharedCheck_180_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_val_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_180_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_array_get_size(v_params_116_);
v___x_162_ = lean_nat_dec_eq(v___x_161_, v_numParams_131_);
lean_dec(v_numParams_131_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_165_; 
lean_del_object(v___x_159_);
lean_dec(v_val_157_);
lean_del_object(v___x_140_);
lean_dec(v_head_138_);
lean_dec(v_us_115_);
v___x_163_ = lean_box(0);
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 0);
lean_ctor_set(v___x_145_, 0, v___x_163_);
v___x_165_ = v___x_145_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
lean_inc(v_us_115_);
v___x_167_ = l_Lean_mkConst(v_head_138_, v_us_115_);
v___x_168_ = l_Lean_mkAppN(v___x_167_, v_params_116_);
v___x_169_ = l_Lean_mkConst(v_val_157_, v_us_115_);
v___x_170_ = l_Lean_mkAppN(v___x_169_, v_params_116_);
if (v_isShared_141_ == 0)
{
lean_ctor_set_tag(v___x_140_, 0);
lean_ctor_set(v___x_140_, 1, v___x_170_);
lean_ctor_set(v___x_140_, 0, v___x_168_);
v___x_172_ = v___x_140_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v___x_170_);
v___x_172_ = v_reuseFailAlloc_179_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_174_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v___x_172_);
v___x_174_ = v___x_159_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_178_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_176_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 0);
lean_ctor_set(v___x_145_, 0, v___x_174_);
v___x_176_ = v___x_145_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
}
else
{
lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec(v___x_156_);
lean_del_object(v___x_140_);
lean_dec(v_head_138_);
lean_dec(v_numParams_131_);
lean_dec(v_us_115_);
v___x_181_ = lean_box(0);
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 0);
lean_ctor_set(v___x_145_, 0, v___x_181_);
v___x_183_ = v___x_145_;
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
}
else
{
lean_object* v___x_186_; lean_object* v___x_188_; 
lean_dec(v___x_142_);
lean_del_object(v___x_140_);
lean_dec(v_head_138_);
lean_dec(v_numParams_131_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
v___x_186_ = lean_box(0);
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 0);
lean_ctor_set(v___x_129_, 0, v___x_186_);
v___x_188_ = v___x_129_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_133_, 2);
lean_dec(v_numParams_131_);
lean_del_object(v___x_129_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
goto v___jp_119_;
}
}
else
{
lean_dec_ref_known(v_ctors_133_, 2);
lean_dec(v_numParams_131_);
lean_del_object(v___x_129_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
goto v___jp_119_;
}
}
else
{
lean_dec(v_ctors_133_);
lean_dec(v_numParams_131_);
lean_del_object(v___x_129_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
goto v___jp_119_;
}
}
}
}
else
{
lean_dec(v_val_126_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
goto v___jp_119_;
}
}
else
{
lean_dec(v___x_125_);
lean_dec_ref(v_env_123_);
lean_dec(v_us_115_);
lean_dec(v_structName_114_);
goto v___jp_119_;
}
v___jp_119_:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_box(0);
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg___boxed(lean_object* v_structName_193_, lean_object* v_us_194_, lean_object* v_params_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(v_structName_193_, v_us_194_, v_params_195_, v___y_196_);
lean_dec(v___y_196_);
lean_dec_ref(v_params_195_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f(lean_object* v_structName_199_, lean_object* v_us_200_, lean_object* v_params_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(v_structName_199_, v_us_200_, v_params_201_, v___y_205_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___boxed(lean_object* v_structName_208_, lean_object* v_us_209_, lean_object* v_params_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f(v_structName_208_, v_us_209_, v_params_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec_ref(v_params_210_);
return v_res_216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0(void){
_start:
{
lean_object* v___x_217_; lean_object* v_dummy_218_; 
v___x_217_ = lean_box(0);
v_dummy_218_ = l_Lean_Expr_sort___override(v___x_217_);
return v_dummy_218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f(lean_object* v_e_219_, lean_object* v_outer_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
uint8_t v_isCtor_230_; lean_object* v_fst_231_; lean_object* v_snd_232_; lean_object* v_arg_233_; lean_object* v___y_234_; lean_object* v___y_235_; lean_object* v___y_236_; lean_object* v___y_237_; uint8_t v_isCtor_242_; lean_object* v_ctorProj_x3f_243_; lean_object* v_arg_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v_e_257_; 
v_e_257_ = l_Lean_Expr_consumeMData(v_e_219_);
lean_dec_ref(v_e_219_);
switch(lean_obj_tag(v_e_257_))
{
case 1:
{
lean_object* v_fvarId_258_; uint8_t v___x_259_; 
v_fvarId_258_ = lean_ctor_get(v_e_257_, 0);
lean_inc(v_fvarId_258_);
lean_dec_ref_known(v_e_257_, 1);
v___x_259_ = l_List_isEmpty___redArg(v_outer_220_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_fvarId_258_);
lean_ctor_set(v___x_260_, 1, v_outer_220_);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v_fvarId_258_);
lean_dec(v_outer_220_);
v___x_263_ = lean_box(0);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
return v___x_264_;
}
}
case 11:
{
lean_object* v_typeName_265_; lean_object* v_idx_266_; lean_object* v_struct_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v_typeName_265_ = lean_ctor_get(v_e_257_, 0);
lean_inc(v_typeName_265_);
v_idx_266_ = lean_ctor_get(v_e_257_, 1);
lean_inc(v_idx_266_);
v_struct_267_ = lean_ctor_get(v_e_257_, 2);
lean_inc_ref(v_struct_267_);
lean_dec_ref_known(v_e_257_, 3);
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = lean_nat_dec_eq(v_idx_266_, v___x_268_);
lean_dec(v_idx_266_);
if (v___x_269_ == 0)
{
lean_dec_ref(v_struct_267_);
lean_dec(v_typeName_265_);
lean_dec(v_outer_220_);
goto v___jp_226_;
}
else
{
lean_object* v___x_270_; 
lean_inc(v___y_224_);
lean_inc_ref(v___y_223_);
lean_inc(v___y_222_);
lean_inc_ref(v___y_221_);
lean_inc_ref(v_struct_267_);
v___x_270_ = lean_infer_type(v_struct_267_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
lean_inc(v___y_224_);
lean_inc_ref(v___y_223_);
lean_inc(v___y_222_);
lean_inc_ref(v___y_221_);
v___x_272_ = lean_whnf(v_a_271_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_300_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_300_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_300_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_300_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lean_Expr_getAppFn(v_a_273_);
if (lean_obj_tag(v___x_277_) == 4)
{
lean_object* v_us_278_; lean_object* v_dummy_279_; lean_object* v_nargs_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
lean_del_object(v___x_275_);
v_us_278_ = lean_ctor_get(v___x_277_, 1);
lean_inc(v_us_278_);
lean_dec_ref_known(v___x_277_, 2);
v_dummy_279_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0);
v_nargs_280_ = l_Lean_Expr_getAppNumArgs(v_a_273_);
lean_inc(v_nargs_280_);
v___x_281_ = lean_mk_array(v_nargs_280_, v_dummy_279_);
v___x_282_ = lean_unsigned_to_nat(1u);
v___x_283_ = lean_nat_sub(v_nargs_280_, v___x_282_);
lean_dec(v_nargs_280_);
v___x_284_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_273_, v___x_281_, v___x_283_);
v___x_285_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(v_typeName_265_, v_us_278_, v___x_284_, v___y_224_);
lean_dec_ref(v___x_284_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; uint8_t v___x_287_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref_known(v___x_285_, 1);
v___x_287_ = 0;
v_isCtor_242_ = v___x_287_;
v_ctorProj_x3f_243_ = v_a_286_;
v_arg_244_ = v_struct_267_;
v___y_245_ = v___y_221_;
v___y_246_ = v___y_222_;
v___y_247_ = v___y_223_;
v___y_248_ = v___y_224_;
goto v___jp_241_;
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec_ref(v_struct_267_);
lean_dec(v_outer_220_);
v_a_288_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_285_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_285_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
else
{
lean_object* v___x_296_; lean_object* v___x_298_; 
lean_dec_ref(v___x_277_);
lean_dec(v_a_273_);
lean_dec_ref(v_struct_267_);
lean_dec(v_typeName_265_);
lean_dec(v_outer_220_);
v___x_296_ = lean_box(0);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_296_);
v___x_298_ = v___x_275_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec_ref(v_struct_267_);
lean_dec(v_typeName_265_);
lean_dec(v_outer_220_);
v_a_301_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_272_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_272_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec_ref(v_struct_267_);
lean_dec(v_typeName_265_);
lean_dec(v_outer_220_);
v_a_309_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_270_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_270_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
case 5:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lean_Expr_getAppFn(v_e_257_);
if (lean_obj_tag(v___x_317_) == 4)
{
lean_object* v_declName_318_; lean_object* v_us_319_; lean_object* v___x_320_; lean_object* v_dummy_321_; lean_object* v_nargs_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v_args_326_; lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; uint8_t v_fst_332_; lean_object* v_snd_333_; lean_object* v___x_349_; lean_object* v_env_350_; lean_object* v___y_352_; lean_object* v___y_353_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___x_364_; 
v_declName_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc_n(v_declName_318_, 2);
v_us_319_ = lean_ctor_get(v___x_317_, 1);
lean_inc(v_us_319_);
lean_dec_ref_known(v___x_317_, 2);
v___x_320_ = l_Lean_instInhabitedExpr;
v_dummy_321_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___closed__0);
v_nargs_322_ = l_Lean_Expr_getAppNumArgs(v_e_257_);
lean_inc(v_nargs_322_);
v___x_323_ = lean_mk_array(v_nargs_322_, v_dummy_321_);
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = lean_nat_sub(v_nargs_322_, v___x_324_);
lean_dec(v_nargs_322_);
v_args_326_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_257_, v___x_323_, v___x_325_);
v___x_349_ = lean_st_ref_get(v___y_224_);
v_env_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc_ref_n(v_env_350_, 2);
lean_dec(v___x_349_);
v___x_364_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_350_, v_declName_318_);
if (lean_obj_tag(v___x_364_) == 1)
{
lean_object* v_val_365_; lean_object* v_ctorName_366_; lean_object* v_numParams_367_; uint8_t v___x_368_; lean_object* v___x_369_; 
lean_dec(v_declName_318_);
v_val_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_val_365_);
lean_dec_ref_known(v___x_364_, 1);
v_ctorName_366_ = lean_ctor_get(v_val_365_, 0);
lean_inc(v_ctorName_366_);
v_numParams_367_ = lean_ctor_get(v_val_365_, 1);
lean_inc(v_numParams_367_);
lean_dec(v_val_365_);
v___x_368_ = 0;
v___x_369_ = l_Lean_Environment_find_x3f(v_env_350_, v_ctorName_366_, v___x_368_);
if (lean_obj_tag(v___x_369_) == 1)
{
lean_object* v_val_370_; 
v_val_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_val_370_);
lean_dec_ref_known(v___x_369_, 1);
if (lean_obj_tag(v_val_370_) == 6)
{
lean_object* v_val_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_396_; 
v_val_371_ = lean_ctor_get(v_val_370_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v_val_370_);
if (v_isSharedCheck_396_ == 0)
{
v___x_373_ = v_val_370_;
v_isShared_374_ = v_isSharedCheck_396_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_val_371_);
lean_dec(v_val_370_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_396_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_375_ = lean_array_get_size(v_args_326_);
v___x_376_ = lean_nat_add(v_numParams_367_, v___x_324_);
v___x_377_ = lean_nat_dec_eq(v___x_375_, v___x_376_);
lean_dec(v___x_376_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_380_; 
lean_dec_ref(v_val_371_);
lean_dec(v_numParams_367_);
lean_dec_ref(v_args_326_);
lean_dec(v_us_319_);
lean_dec(v_outer_220_);
v___x_378_ = lean_box(0);
if (v_isShared_374_ == 0)
{
lean_ctor_set_tag(v___x_373_, 0);
lean_ctor_set(v___x_373_, 0, v___x_378_);
v___x_380_ = v___x_373_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
else
{
lean_object* v_induct_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
lean_del_object(v___x_373_);
v_induct_382_ = lean_ctor_get(v_val_371_, 1);
lean_inc(v_induct_382_);
lean_dec_ref(v_val_371_);
v___x_383_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_367_);
v___x_384_ = l_Array_extract___redArg(v_args_326_, v___x_383_, v_numParams_367_);
v___x_385_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(v_induct_382_, v_us_319_, v___x_384_, v___y_224_);
lean_dec_ref(v___x_384_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_387_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_385_, 1);
v___x_387_ = lean_array_get(v___x_320_, v_args_326_, v_numParams_367_);
lean_dec(v_numParams_367_);
lean_dec_ref(v_args_326_);
v_isCtor_242_ = v___x_368_;
v_ctorProj_x3f_243_ = v_a_386_;
v_arg_244_ = v___x_387_;
v___y_245_ = v___y_221_;
v___y_246_ = v___y_222_;
v___y_247_ = v___y_223_;
v___y_248_ = v___y_224_;
goto v___jp_241_;
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
lean_dec(v_numParams_367_);
lean_dec_ref(v_args_326_);
lean_dec(v_outer_220_);
v_a_388_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_385_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_385_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
}
else
{
lean_dec(v_val_370_);
lean_dec(v_numParams_367_);
lean_dec_ref(v_args_326_);
lean_dec(v_us_319_);
lean_dec(v_outer_220_);
goto v___jp_254_;
}
}
else
{
lean_dec(v___x_369_);
lean_dec(v_numParams_367_);
lean_dec_ref(v_args_326_);
lean_dec(v_us_319_);
lean_dec(v_outer_220_);
goto v___jp_254_;
}
}
else
{
uint8_t v___x_397_; lean_object* v___x_398_; 
lean_dec(v___x_364_);
v___x_397_ = 0;
lean_inc(v_declName_318_);
lean_inc_ref(v_env_350_);
v___x_398_ = l_Lean_Environment_find_x3f(v_env_350_, v_declName_318_, v___x_397_);
if (lean_obj_tag(v___x_398_) == 1)
{
lean_object* v_val_399_; 
v_val_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_val_399_);
lean_dec_ref_known(v___x_398_, 1);
if (lean_obj_tag(v_val_399_) == 6)
{
lean_object* v_val_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_426_; 
lean_dec_ref(v_env_350_);
lean_dec(v_declName_318_);
v_val_400_ = lean_ctor_get(v_val_399_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v_val_399_);
if (v_isSharedCheck_426_ == 0)
{
v___x_402_ = v_val_399_;
v_isShared_403_ = v_isSharedCheck_426_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_val_400_);
lean_dec(v_val_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_426_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v_induct_404_; lean_object* v_numParams_405_; lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v_induct_404_ = lean_ctor_get(v_val_400_, 1);
lean_inc(v_induct_404_);
v_numParams_405_ = lean_ctor_get(v_val_400_, 3);
lean_inc(v_numParams_405_);
lean_dec_ref(v_val_400_);
v___x_406_ = lean_array_get_size(v_args_326_);
v___x_407_ = lean_nat_add(v_numParams_405_, v___x_324_);
v___x_408_ = lean_nat_dec_eq(v___x_406_, v___x_407_);
lean_dec(v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_411_; 
lean_dec(v_numParams_405_);
lean_dec(v_induct_404_);
lean_dec_ref(v_args_326_);
lean_dec(v_us_319_);
lean_dec(v_outer_220_);
v___x_409_ = lean_box(0);
if (v_isShared_403_ == 0)
{
lean_ctor_set_tag(v___x_402_, 0);
lean_ctor_set(v___x_402_, 0, v___x_409_);
v___x_411_ = v___x_402_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
lean_del_object(v___x_402_);
v___x_413_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_405_);
v___x_414_ = l_Array_extract___redArg(v_args_326_, v___x_413_, v_numParams_405_);
v___x_415_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_structCtorProj_x3f___redArg(v_induct_404_, v_us_319_, v___x_414_, v___y_224_);
lean_dec_ref(v___x_414_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v___x_415_, 1);
v___x_417_ = lean_array_get(v___x_320_, v_args_326_, v_numParams_405_);
lean_dec(v_numParams_405_);
lean_dec_ref(v_args_326_);
v_isCtor_242_ = v___x_408_;
v_ctorProj_x3f_243_ = v_a_416_;
v_arg_244_ = v___x_417_;
v___y_245_ = v___y_221_;
v___y_246_ = v___y_222_;
v___y_247_ = v___y_223_;
v___y_248_ = v___y_224_;
goto v___jp_241_;
}
else
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
lean_dec(v_numParams_405_);
lean_dec_ref(v_args_326_);
lean_dec(v_outer_220_);
v_a_418_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_425_ == 0)
{
v___x_420_ = v___x_415_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_415_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_a_418_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
}
}
else
{
lean_dec(v_val_399_);
v___y_352_ = v___y_221_;
v___y_353_ = v___y_222_;
v___y_354_ = v___y_223_;
v___y_355_ = v___y_224_;
goto v___jp_351_;
}
}
else
{
lean_dec(v___x_398_);
v___y_352_ = v___y_221_;
v___y_353_ = v___y_222_;
v___y_354_ = v___y_223_;
v___y_355_ = v___y_224_;
goto v___jp_351_;
}
}
v___jp_327_:
{
lean_object* v_ctorName_334_; lean_object* v_projName_335_; lean_object* v_numParams_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_ctorName_334_ = lean_ctor_get(v_snd_333_, 1);
lean_inc(v_ctorName_334_);
v_projName_335_ = lean_ctor_get(v_snd_333_, 2);
lean_inc(v_projName_335_);
v_numParams_336_ = lean_ctor_get(v_snd_333_, 3);
lean_inc(v_numParams_336_);
lean_dec_ref(v_snd_333_);
v___x_337_ = lean_array_get_size(v_args_326_);
v___x_338_ = lean_nat_add(v_numParams_336_, v___x_324_);
v___x_339_ = lean_nat_dec_eq(v___x_337_, v___x_338_);
lean_dec(v___x_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v_numParams_336_);
lean_dec(v_projName_335_);
lean_dec(v_ctorName_334_);
lean_dec_ref(v_args_326_);
lean_dec(v_us_319_);
lean_dec(v_outer_220_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_342_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_336_);
v___x_343_ = l_Array_extract___redArg(v_args_326_, v___x_342_, v_numParams_336_);
lean_inc(v_us_319_);
v___x_344_ = l_Lean_mkConst(v_ctorName_334_, v_us_319_);
v___x_345_ = l_Lean_mkAppN(v___x_344_, v___x_343_);
v___x_346_ = l_Lean_mkConst(v_projName_335_, v_us_319_);
v___x_347_ = l_Lean_mkAppN(v___x_346_, v___x_343_);
lean_dec_ref(v___x_343_);
v___x_348_ = lean_array_get(v___x_320_, v_args_326_, v_numParams_336_);
lean_dec(v_numParams_336_);
lean_dec_ref(v_args_326_);
v_isCtor_230_ = v_fst_332_;
v_fst_231_ = v___x_345_;
v_snd_232_ = v___x_347_;
v_arg_233_ = v___x_348_;
v___y_234_ = v___y_328_;
v___y_235_ = v___y_330_;
v___y_236_ = v___y_331_;
v___y_237_ = v___y_329_;
goto v___jp_229_;
}
}
v___jp_351_:
{
lean_object* v___x_356_; 
lean_inc(v_declName_318_);
lean_inc_ref(v_env_350_);
v___x_356_ = l_Lean_Environment_getVirtualCtorInfo_x3f(v_env_350_, v_declName_318_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_Environment_getVirtualProjInfo_x3f(v_env_350_, v_declName_318_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_dec_ref(v_args_326_);
lean_dec(v_us_319_);
lean_dec(v_outer_220_);
v___x_358_ = lean_box(0);
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
else
{
lean_object* v_val_360_; uint8_t v___x_361_; 
v_val_360_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_val_360_);
lean_dec_ref_known(v___x_357_, 1);
v___x_361_ = 0;
v___y_328_ = v___y_352_;
v___y_329_ = v___y_355_;
v___y_330_ = v___y_353_;
v___y_331_ = v___y_354_;
v_fst_332_ = v___x_361_;
v_snd_333_ = v_val_360_;
goto v___jp_327_;
}
}
else
{
lean_object* v_val_362_; uint8_t v___x_363_; 
lean_dec_ref(v_env_350_);
lean_dec(v_declName_318_);
v_val_362_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_val_362_);
lean_dec_ref_known(v___x_356_, 1);
v___x_363_ = 1;
v___y_328_ = v___y_352_;
v___y_329_ = v___y_355_;
v___y_330_ = v___y_353_;
v___y_331_ = v___y_354_;
v_fst_332_ = v___x_363_;
v_snd_333_ = v_val_362_;
goto v___jp_327_;
}
}
}
else
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec_ref(v___x_317_);
lean_dec_ref_known(v_e_257_, 2);
lean_dec(v_outer_220_);
v___x_427_ = lean_box(0);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
}
default: 
{
lean_dec_ref(v_e_257_);
lean_dec(v_outer_220_);
goto v___jp_226_;
}
}
v___jp_226_:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_box(0);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
return v___x_228_;
}
v___jp_229_:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_238_, 0, v_fst_231_);
lean_ctor_set(v___x_238_, 1, v_snd_232_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*2, v_isCtor_230_);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v_outer_220_);
v_e_219_ = v_arg_233_;
v_outer_220_ = v___x_239_;
v___y_221_ = v___y_234_;
v___y_222_ = v___y_235_;
v___y_223_ = v___y_236_;
v___y_224_ = v___y_237_;
goto _start;
}
v___jp_241_:
{
if (lean_obj_tag(v_ctorProj_x3f_243_) == 1)
{
lean_object* v_val_249_; lean_object* v_fst_250_; lean_object* v_snd_251_; 
v_val_249_ = lean_ctor_get(v_ctorProj_x3f_243_, 0);
lean_inc(v_val_249_);
lean_dec_ref_known(v_ctorProj_x3f_243_, 1);
v_fst_250_ = lean_ctor_get(v_val_249_, 0);
lean_inc(v_fst_250_);
v_snd_251_ = lean_ctor_get(v_val_249_, 1);
lean_inc(v_snd_251_);
lean_dec(v_val_249_);
v_isCtor_230_ = v_isCtor_242_;
v_fst_231_ = v_fst_250_;
v_snd_232_ = v_snd_251_;
v_arg_233_ = v_arg_244_;
v___y_234_ = v___y_245_;
v___y_235_ = v___y_246_;
v___y_236_ = v___y_247_;
v___y_237_ = v___y_248_;
goto v___jp_229_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref(v_arg_244_);
lean_dec(v_ctorProj_x3f_243_);
lean_dec(v_outer_220_);
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
v___jp_254_:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_box(0);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f___boxed(lean_object* v_e_429_, lean_object* v_outer_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f(v_e_429_, v_outer_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0_spec__0(lean_object* v_as_437_, size_t v_i_438_, size_t v_stop_439_, lean_object* v_b_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = lean_usize_dec_eq(v_i_438_, v_stop_439_);
if (v___x_441_ == 0)
{
size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_442_ = ((size_t)1ULL);
v___x_443_ = lean_usize_sub(v_i_438_, v___x_442_);
v___x_444_ = lean_array_uget_borrowed(v_as_437_, v___x_443_);
lean_inc(v___x_444_);
v___x_445_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_Bijection_inv(v___x_444_, v_b_440_);
v_i_438_ = v___x_443_;
v_b_440_ = v___x_445_;
goto _start;
}
else
{
return v_b_440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0_spec__0___boxed(lean_object* v_as_447_, lean_object* v_i_448_, lean_object* v_stop_449_, lean_object* v_b_450_){
_start:
{
size_t v_i_boxed_451_; size_t v_stop_boxed_452_; lean_object* v_res_453_; 
v_i_boxed_451_ = lean_unbox_usize(v_i_448_);
lean_dec(v_i_448_);
v_stop_boxed_452_ = lean_unbox_usize(v_stop_449_);
lean_dec(v_stop_449_);
v_res_453_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0_spec__0(v_as_447_, v_i_boxed_451_, v_stop_boxed_452_, v_b_450_);
lean_dec_ref(v_as_447_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0(lean_object* v_init_454_, lean_object* v_l_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_456_ = lean_array_mk(v_l_455_);
v___x_457_ = lean_array_get_size(v___x_456_);
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_459_ = lean_nat_dec_lt(v___x_458_, v___x_457_);
if (v___x_459_ == 0)
{
lean_dec_ref(v___x_456_);
return v_init_454_;
}
else
{
size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_usize_of_nat(v___x_457_);
v___x_461_ = ((size_t)0ULL);
v___x_462_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0_spec__0(v___x_456_, v___x_460_, v___x_461_, v_init_454_);
lean_dec_ref(v___x_456_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__0(lean_object* v_snd_463_, uint8_t v___y_464_, uint8_t v___x_465_, lean_object* v_z_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; 
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = lean_mk_empty_array_with_capacity(v___x_472_);
lean_inc_ref(v_z_466_);
v___x_474_ = lean_array_push(v___x_473_, v_z_466_);
v___x_475_ = l_List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0(v_z_466_, v_snd_463_);
v___x_476_ = 1;
v___x_477_ = l_Lean_Meta_mkLambdaFVars(v___x_474_, v___x_475_, v___y_464_, v___x_465_, v___y_464_, v___x_465_, v___x_476_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
lean_dec_ref(v___x_474_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__0___boxed(lean_object* v_snd_478_, lean_object* v___y_479_, lean_object* v___x_480_, lean_object* v_z_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
uint8_t v___y_2780__boxed_487_; uint8_t v___x_2781__boxed_488_; lean_object* v_res_489_; 
v___y_2780__boxed_487_ = lean_unbox(v___y_479_);
v___x_2781__boxed_488_ = lean_unbox(v___x_480_);
v_res_489_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__0(v_snd_478_, v___y_2780__boxed_487_, v___x_2781__boxed_488_, v_z_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___lam__0(lean_object* v_k_490_, lean_object* v_b_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v___x_497_; 
lean_inc(v___y_495_);
lean_inc_ref(v___y_494_);
lean_inc(v___y_493_);
lean_inc_ref(v___y_492_);
v___x_497_ = lean_apply_6(v_k_490_, v_b_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, lean_box(0));
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_k_498_, lean_object* v_b_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___lam__0(v_k_498_, v_b_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg(lean_object* v_name_506_, uint8_t v_bi_507_, lean_object* v_type_508_, lean_object* v_k_509_, uint8_t v_kind_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___f_516_; lean_object* v___x_517_; 
v___f_516_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_516_, 0, v_k_509_);
v___x_517_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_506_, v_bi_507_, v_type_508_, v___f_516_, v_kind_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_517_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_517_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_517_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_name_534_, lean_object* v_bi_535_, lean_object* v_type_536_, lean_object* v_k_537_, lean_object* v_kind_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
uint8_t v_bi_boxed_544_; uint8_t v_kind_boxed_545_; lean_object* v_res_546_; 
v_bi_boxed_544_ = lean_unbox(v_bi_535_);
v_kind_boxed_545_ = lean_unbox(v_kind_538_);
v_res_546_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg(v_name_534_, v_bi_boxed_544_, v_type_536_, v_k_537_, v_kind_boxed_545_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg(lean_object* v_name_547_, lean_object* v_type_548_, lean_object* v_k_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
uint8_t v___x_555_; uint8_t v___x_556_; lean_object* v___x_557_; 
v___x_555_ = 0;
v___x_556_ = 0;
v___x_557_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg(v_name_547_, v___x_555_, v_type_548_, v_k_549_, v___x_556_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg___boxed(lean_object* v_name_558_, lean_object* v_type_559_, lean_object* v_k_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg(v_name_558_, v_type_559_, v_k_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1(lean_object* v_00_u03b1_570_, lean_object* v_eqDecl_571_, lean_object* v_mvarId_572_, lean_object* v_subst_573_, lean_object* v_bx_574_, lean_object* v_t_575_, uint8_t v_symm_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = lean_box(0);
v___x_583_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_bijectionChain_x3f(v_bx_574_, v___x_582_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_710_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_710_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_710_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_710_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
if (lean_obj_tag(v_a_584_) == 1)
{
lean_object* v_val_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_705_; 
lean_del_object(v___x_586_);
v_val_588_ = lean_ctor_get(v_a_584_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v_a_584_);
if (v_isSharedCheck_705_ == 0)
{
v___x_590_ = v_a_584_;
v_isShared_591_ = v_isSharedCheck_705_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_val_588_);
lean_dec(v_a_584_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_705_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v_fst_592_; lean_object* v_snd_593_; lean_object* v___y_595_; lean_object* v_prf_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___x_668_; 
v_fst_592_ = lean_ctor_get(v_val_588_, 0);
lean_inc_n(v_fst_592_, 2);
v_snd_593_ = lean_ctor_get(v_val_588_, 1);
lean_inc(v_snd_593_);
lean_dec(v_val_588_);
v___x_668_ = l_Lean_FVarId_getDecl___redArg(v_fst_592_, v___y_577_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_696_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_696_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_696_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_696_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
uint8_t v___y_674_; uint8_t v___x_694_; 
v___x_694_ = l_Lean_Expr_containsFVar(v_t_575_, v_fst_592_);
if (v___x_694_ == 0)
{
uint8_t v___x_695_; 
v___x_695_ = l_Lean_LocalDecl_isLet(v_a_669_, v___x_694_);
lean_dec(v_a_669_);
v___y_674_ = v___x_695_;
goto v___jp_673_;
}
else
{
lean_dec(v_a_669_);
v___y_674_ = v___x_694_;
goto v___jp_673_;
}
v___jp_673_:
{
if (v___y_674_ == 0)
{
uint8_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___f_678_; lean_object* v___x_679_; 
lean_del_object(v___x_671_);
v___x_675_ = 1;
v___x_676_ = lean_box(v___y_674_);
v___x_677_ = lean_box(v___x_675_);
lean_inc(v_snd_593_);
v___f_678_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__0___boxed), 9, 3);
lean_closure_set(v___f_678_, 0, v_snd_593_);
lean_closure_set(v___f_678_, 1, v___x_676_);
lean_closure_set(v___f_678_, 2, v___x_677_);
lean_inc_ref(v_eqDecl_571_);
v___x_679_ = l_Lean_LocalDecl_toExpr(v_eqDecl_571_);
if (v_symm_576_ == 0)
{
v___y_595_ = v___f_678_;
v_prf_596_ = v___x_679_;
v___y_597_ = v___y_577_;
v___y_598_ = v___y_578_;
v___y_599_ = v___y_579_;
v___y_600_ = v___y_580_;
goto v___jp_594_;
}
else
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Meta_mkEqSymm(v___x_679_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v___y_595_ = v___f_678_;
v_prf_596_ = v_a_681_;
v___y_597_ = v___y_577_;
v___y_598_ = v___y_578_;
v___y_599_ = v___y_579_;
v___y_600_ = v___y_580_;
goto v___jp_594_;
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref(v___f_678_);
lean_dec(v_snd_593_);
lean_dec(v_fst_592_);
lean_del_object(v___x_590_);
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
lean_dec_ref(v_00_u03b1_570_);
v_a_682_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_680_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_680_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
else
{
lean_object* v___x_690_; lean_object* v___x_692_; 
lean_dec(v_snd_593_);
lean_dec(v_fst_592_);
lean_del_object(v___x_590_);
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
lean_dec_ref(v_00_u03b1_570_);
v___x_690_ = lean_box(0);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_690_);
v___x_692_ = v___x_671_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
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
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
lean_dec(v_snd_593_);
lean_dec(v_fst_592_);
lean_del_object(v___x_590_);
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
lean_dec_ref(v_00_u03b1_570_);
v_a_697_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_668_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_668_);
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
v___jp_594_:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___closed__1));
v___x_602_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg(v___x_601_, v_00_u03b1_570_, v___y_595_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_604_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v___x_604_ = l_Lean_Meta_mkCongrArg(v_a_603_, v_prf_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_604_, 1);
v___x_606_ = l_Lean_mkFVar(v_fst_592_);
v___x_607_ = l_List_foldrTR___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__0(v_t_575_, v_snd_593_);
v___x_608_ = l_Lean_Meta_mkEq(v___x_606_, v___x_607_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_608_, 1);
v___x_610_ = l_Lean_LocalDecl_userName(v_eqDecl_571_);
v___x_611_ = l_Lean_MVarId_assert(v_mvarId_572_, v___x_610_, v_a_609_, v_a_605_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___x_613_ = l_Lean_LocalDecl_fvarId(v_eqDecl_571_);
lean_dec_ref(v_eqDecl_571_);
v___x_614_ = l_Lean_MVarId_clear(v_a_612_, v___x_613_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_627_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_627_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_627_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_627_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_619_ = lean_unsigned_to_nat(1u);
v___x_620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_620_, 0, v_a_615_);
lean_ctor_set(v___x_620_, 1, v_subst_573_);
lean_ctor_set(v___x_620_, 2, v___x_619_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v___x_620_);
v___x_622_ = v___x_590_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_626_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_624_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_622_);
v___x_624_ = v___x_617_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_622_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_del_object(v___x_590_);
lean_dec(v_subst_573_);
v_a_628_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_614_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_614_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
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
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_del_object(v___x_590_);
lean_dec(v_subst_573_);
lean_dec_ref(v_eqDecl_571_);
v_a_636_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_611_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_611_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec(v_a_605_);
lean_del_object(v___x_590_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
v_a_644_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_608_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_608_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
lean_dec(v_snd_593_);
lean_dec(v_fst_592_);
lean_del_object(v___x_590_);
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
v_a_652_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_604_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_604_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
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
lean_dec_ref(v_prf_596_);
lean_dec(v_snd_593_);
lean_dec(v_fst_592_);
lean_del_object(v___x_590_);
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
v_a_660_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_602_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_602_);
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
}
}
else
{
lean_object* v___x_706_; lean_object* v___x_708_; 
lean_dec(v_a_584_);
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
lean_dec_ref(v_00_u03b1_570_);
v___x_706_ = lean_box(0);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_706_);
v___x_708_ = v___x_586_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec_ref(v_t_575_);
lean_dec(v_subst_573_);
lean_dec(v_mvarId_572_);
lean_dec_ref(v_eqDecl_571_);
lean_dec_ref(v_00_u03b1_570_);
v_a_711_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_583_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_583_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1___boxed(lean_object* v_00_u03b1_719_, lean_object* v_eqDecl_720_, lean_object* v_mvarId_721_, lean_object* v_subst_722_, lean_object* v_bx_723_, lean_object* v_t_724_, lean_object* v_symm_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
uint8_t v_symm_boxed_731_; lean_object* v_res_732_; 
v_symm_boxed_731_ = lean_unbox(v_symm_725_);
v_res_732_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1(v_00_u03b1_719_, v_eqDecl_720_, v_mvarId_721_, v_subst_722_, v_bx_723_, v_t_724_, v_symm_boxed_731_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f(lean_object* v_mvarId_733_, lean_object* v_eqDecl_734_, lean_object* v_subst_735_, lean_object* v_00_u03b1_736_, lean_object* v_a_737_, lean_object* v_b_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
uint8_t v___x_744_; lean_object* v___x_745_; 
v___x_744_ = 0;
lean_inc_ref(v_b_738_);
lean_inc_ref(v_a_737_);
lean_inc(v_subst_735_);
lean_inc(v_mvarId_733_);
lean_inc_ref(v_eqDecl_734_);
lean_inc_ref(v_00_u03b1_736_);
v___x_745_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1(v_00_u03b1_736_, v_eqDecl_734_, v_mvarId_733_, v_subst_735_, v_a_737_, v_b_738_, v___x_744_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
if (lean_obj_tag(v_a_746_) == 1)
{
lean_dec_ref_known(v_a_746_, 1);
lean_dec_ref(v_b_738_);
lean_dec_ref(v_a_737_);
lean_dec_ref(v_00_u03b1_736_);
lean_dec(v_subst_735_);
lean_dec_ref(v_eqDecl_734_);
lean_dec(v_mvarId_733_);
return v___x_745_;
}
else
{
uint8_t v___x_747_; lean_object* v___x_748_; 
lean_dec_ref_known(v___x_745_, 1);
lean_dec(v_a_746_);
v___x_747_ = 1;
v___x_748_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___lam__1(v_00_u03b1_736_, v_eqDecl_734_, v_mvarId_733_, v_subst_735_, v_b_738_, v_a_737_, v___x_747_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
return v___x_748_;
}
}
else
{
lean_dec_ref(v_b_738_);
lean_dec_ref(v_a_737_);
lean_dec_ref(v_00_u03b1_736_);
lean_dec(v_subst_735_);
lean_dec_ref(v_eqDecl_734_);
lean_dec(v_mvarId_733_);
return v___x_745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f___boxed(lean_object* v_mvarId_749_, lean_object* v_eqDecl_750_, lean_object* v_subst_751_, lean_object* v_00_u03b1_752_, lean_object* v_a_753_, lean_object* v_b_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f(v_mvarId_749_, v_eqDecl_750_, v_subst_751_, v_00_u03b1_752_, v_a_753_, v_b_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2(lean_object* v_00_u03b1_761_, lean_object* v_name_762_, uint8_t v_bi_763_, lean_object* v_type_764_, lean_object* v_k_765_, uint8_t v_kind_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___redArg(v_name_762_, v_bi_763_, v_type_764_, v_k_765_, v_kind_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b1_773_, lean_object* v_name_774_, lean_object* v_bi_775_, lean_object* v_type_776_, lean_object* v_k_777_, lean_object* v_kind_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
uint8_t v_bi_boxed_784_; uint8_t v_kind_boxed_785_; lean_object* v_res_786_; 
v_bi_boxed_784_ = lean_unbox(v_bi_775_);
v_kind_boxed_785_ = lean_unbox(v_kind_778_);
v_res_786_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1_spec__2(v_00_u03b1_773_, v_name_774_, v_bi_boxed_784_, v_type_776_, v_k_777_, v_kind_boxed_785_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1(lean_object* v_00_u03b1_787_, lean_object* v_name_788_, lean_object* v_type_789_, lean_object* v_k_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___redArg(v_name_788_, v_type_789_, v_k_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1___boxed(lean_object* v_00_u03b1_797_, lean_object* v_name_798_, lean_object* v_type_799_, lean_object* v_k_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f_spec__1(v_00_u03b1_797_, v_name_798_, v_type_799_, v_k_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(lean_object* v_x_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_Meta_saveState___redArg(v___y_809_, v___y_811_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
lean_inc(v___y_811_);
lean_inc_ref(v___y_810_);
lean_inc(v___y_809_);
lean_inc_ref(v___y_808_);
v___x_815_ = lean_apply_5(v_x_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, lean_box(0));
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_824_; 
lean_dec(v_a_814_);
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_824_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_820_, 0, v_a_816_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_820_);
v___x_822_ = v___x_818_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_854_; 
v_a_825_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_854_ == 0)
{
v___x_827_ = v___x_815_;
v_isShared_828_ = v_isSharedCheck_854_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_815_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_854_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
uint8_t v___y_830_; uint8_t v___x_852_; 
v___x_852_ = l_Lean_Exception_isInterrupt(v_a_825_);
if (v___x_852_ == 0)
{
uint8_t v___x_853_; 
lean_inc(v_a_825_);
v___x_853_ = l_Lean_Exception_isRuntime(v_a_825_);
v___y_830_ = v___x_853_;
goto v___jp_829_;
}
else
{
v___y_830_ = v___x_852_;
goto v___jp_829_;
}
v___jp_829_:
{
if (v___y_830_ == 0)
{
lean_object* v___x_831_; 
lean_del_object(v___x_827_);
lean_dec(v_a_825_);
v___x_831_ = l_Lean_Meta_SavedState_restore___redArg(v_a_814_, v___y_809_, v___y_811_);
lean_dec(v_a_814_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_839_; 
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; 
v_unused_840_ = lean_ctor_get(v___x_831_, 0);
lean_dec(v_unused_840_);
v___x_833_ = v___x_831_;
v_isShared_834_ = v_isSharedCheck_839_;
goto v_resetjp_832_;
}
else
{
lean_dec(v___x_831_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_839_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_835_ = lean_box(0);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 0, v___x_835_);
v___x_837_ = v___x_833_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
v_a_841_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_831_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_831_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
else
{
lean_object* v___x_850_; 
lean_dec(v_a_814_);
if (v_isShared_828_ == 0)
{
v___x_850_ = v___x_827_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_825_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec_ref(v_x_807_);
v_a_855_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_813_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_813_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg___boxed(lean_object* v_x_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v_x_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(lean_object* v_00_u03b1_870_, lean_object* v_x_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v_x_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___boxed(lean_object* v_00_u03b1_878_, lean_object* v_x_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(v_00_u03b1_878_, v_x_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(lean_object* v_msgData_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
lean_object* v___x_892_; lean_object* v_env_893_; lean_object* v___x_894_; lean_object* v_toCold_895_; lean_object* v_mctx_896_; lean_object* v_lctx_897_; lean_object* v_options_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_892_ = lean_st_ref_get(v___y_890_);
v_env_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc_ref(v_env_893_);
lean_dec(v___x_892_);
v___x_894_ = lean_st_ref_get(v___y_888_);
v_toCold_895_ = lean_ctor_get(v___y_889_, 0);
v_mctx_896_ = lean_ctor_get(v___x_894_, 0);
lean_inc_ref(v_mctx_896_);
lean_dec(v___x_894_);
v_lctx_897_ = lean_ctor_get(v___y_887_, 2);
v_options_898_ = lean_ctor_get(v_toCold_895_, 2);
lean_inc_ref(v_options_898_);
lean_inc_ref(v_lctx_897_);
v___x_899_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_899_, 0, v_env_893_);
lean_ctor_set(v___x_899_, 1, v_mctx_896_);
lean_ctor_set(v___x_899_, 2, v_lctx_897_);
lean_ctor_set(v___x_899_, 3, v_options_898_);
v___x_900_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v_msgData_886_);
v___x_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1___boxed(lean_object* v_msgData_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(v_msgData_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(lean_object* v_msg_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_ref_915_; lean_object* v___x_916_; lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_925_; 
v_ref_915_ = lean_ctor_get(v___y_912_, 2);
v___x_916_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(v_msg_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_925_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
lean_inc(v_ref_915_);
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v_ref_915_);
lean_ctor_set(v___x_921_, 1, v_a_917_);
if (v_isShared_920_ == 0)
{
lean_ctor_set_tag(v___x_919_, 1);
lean_ctor_set(v___x_919_, 0, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg___boxed(lean_object* v_msg_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v_msg_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
return v_res_932_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0));
v___x_935_ = l_Lean_stringToMessageData(v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(lean_object* v_mvarId_936_, lean_object* v_eqFVarId_937_, lean_object* v_subst_938_, lean_object* v_acyclic_939_, lean_object* v_eqDecl_940_, lean_object* v_a_941_, lean_object* v_b_942_, uint8_t v_symm_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
uint8_t v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_949_ = 1;
v___x_950_ = lean_box(v_symm_943_);
v___x_951_ = lean_box(v___x_949_);
v___x_952_ = lean_box(v___x_949_);
lean_inc(v_subst_938_);
lean_inc(v_eqFVarId_937_);
lean_inc(v_mvarId_936_);
v___x_953_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_953_, 0, v_mvarId_936_);
lean_closure_set(v___x_953_, 1, v_eqFVarId_937_);
lean_closure_set(v___x_953_, 2, v___x_950_);
lean_closure_set(v___x_953_, 3, v_subst_938_);
lean_closure_set(v___x_953_, 4, v___x_951_);
lean_closure_set(v___x_953_, 5, v___x_952_);
v___x_954_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v___x_953_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_1030_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_1030_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_1030_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
if (lean_obj_tag(v_a_955_) == 1)
{
lean_object* v_val_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_973_; 
lean_dec_ref(v_b_942_);
lean_dec_ref(v_a_941_);
lean_dec_ref(v_acyclic_939_);
lean_dec(v_subst_938_);
lean_dec(v_eqFVarId_937_);
lean_dec(v_mvarId_936_);
v_val_959_ = lean_ctor_get(v_a_955_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v_a_955_);
if (v_isSharedCheck_973_ == 0)
{
v___x_961_ = v_a_955_;
v_isShared_962_ = v_isSharedCheck_973_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_val_959_);
lean_dec(v_a_955_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_973_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v_fst_963_; lean_object* v_snd_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v_fst_963_ = lean_ctor_get(v_val_959_, 0);
lean_inc(v_fst_963_);
v_snd_964_ = lean_ctor_get(v_val_959_, 1);
lean_inc(v_snd_964_);
lean_dec(v_val_959_);
v___x_965_ = lean_unsigned_to_nat(0u);
v___x_966_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_966_, 0, v_snd_964_);
lean_ctor_set(v___x_966_, 1, v_fst_963_);
lean_ctor_set(v___x_966_, 2, v___x_965_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 0, v___x_966_);
v___x_968_ = v___x_961_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_966_);
v___x_968_ = v_reuseFailAlloc_972_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_970_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_968_);
v___x_970_ = v___x_957_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
else
{
lean_object* v___x_974_; 
lean_del_object(v___x_957_);
lean_dec(v_a_955_);
v___x_974_ = l_Lean_Meta_isExprDefEq(v_a_941_, v_b_942_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; uint8_t v___x_976_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = lean_unbox(v_a_975_);
lean_dec(v_a_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; 
lean_dec(v_subst_938_);
v___x_977_ = l_Lean_mkFVar(v_eqFVarId_937_);
lean_inc(v___y_947_);
lean_inc_ref(v___y_946_);
lean_inc(v___y_945_);
lean_inc_ref(v___y_944_);
v___x_978_ = lean_apply_7(v_acyclic_939_, v_mvarId_936_, v___x_977_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, lean_box(0));
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_993_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_993_ == 0)
{
v___x_981_ = v___x_978_;
v_isShared_982_ = v_isSharedCheck_993_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_978_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_993_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
uint8_t v___x_983_; 
v___x_983_ = lean_unbox(v_a_979_);
lean_dec(v_a_979_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
lean_del_object(v___x_981_);
v___x_984_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_985_ = l_Lean_LocalDecl_type(v_eqDecl_940_);
v___x_986_ = l_Lean_indentExpr(v___x_985_);
v___x_987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_984_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_987_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_988_;
}
else
{
lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_989_ = lean_box(0);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 0, v___x_989_);
v___x_991_ = v___x_981_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_989_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
v_a_994_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_978_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_978_);
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
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_1002_; 
lean_dec_ref(v_acyclic_939_);
v___x_1002_ = l_Lean_MVarId_clear(v_mvarId_936_, v_eqFVarId_937_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1013_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1013_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1013_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1007_ = lean_unsigned_to_nat(0u);
v___x_1008_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1008_, 0, v_a_1003_);
lean_ctor_set(v___x_1008_, 1, v_subst_938_);
lean_ctor_set(v___x_1008_, 2, v___x_1007_);
v___x_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1009_);
v___x_1011_ = v___x_1005_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec(v_subst_938_);
v_a_1014_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1002_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1002_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec_ref(v_acyclic_939_);
lean_dec(v_subst_938_);
lean_dec(v_eqFVarId_937_);
lean_dec(v_mvarId_936_);
v_a_1022_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_974_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_974_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec_ref(v_b_942_);
lean_dec_ref(v_a_941_);
lean_dec_ref(v_acyclic_939_);
lean_dec(v_subst_938_);
lean_dec(v_eqFVarId_937_);
lean_dec(v_mvarId_936_);
v_a_1031_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_954_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_954_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___boxed(lean_object* v_mvarId_1039_, lean_object* v_eqFVarId_1040_, lean_object* v_subst_1041_, lean_object* v_acyclic_1042_, lean_object* v_eqDecl_1043_, lean_object* v_a_1044_, lean_object* v_b_1045_, lean_object* v_symm_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
uint8_t v_symm_boxed_1052_; lean_object* v_res_1053_; 
v_symm_boxed_1052_ = lean_unbox(v_symm_1046_);
v_res_1053_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1039_, v_eqFVarId_1040_, v_subst_1041_, v_acyclic_1042_, v_eqDecl_1043_, v_a_1044_, v_b_1045_, v_symm_boxed_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec_ref(v_eqDecl_1043_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(lean_object* v_00_u03b1_1054_, lean_object* v_msg_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v_msg_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_msg_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(v_00_u03b1_1062_, v_msg_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
return v_res_1069_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0));
v___x_1072_ = l_Lean_stringToMessageData(v___x_1071_);
return v___x_1072_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3(void){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2));
v___x_1075_ = l_Lean_stringToMessageData(v___x_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(lean_object* v_mvarId_1076_, lean_object* v_eqFVarId_1077_, lean_object* v_subst_1078_, lean_object* v_caseName_x3f_1079_, lean_object* v_eqDecl_1080_, lean_object* v_00_u03b1_1081_, lean_object* v_injectionOffset_x3f_1082_, lean_object* v_a_1083_, lean_object* v_b_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1136_; lean_object* v___x_1214_; 
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc_ref(v_b_1084_);
lean_inc_ref(v_a_1083_);
v___x_1214_ = lean_apply_7(v_injectionOffset_x3f_1082_, v_a_1083_, v_b_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, lean_box(0));
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1236_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1217_ = v___x_1214_;
v_isShared_1218_ = v_isSharedCheck_1236_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1236_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
if (lean_obj_tag(v_a_1215_) == 1)
{
lean_object* v_val_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1231_; 
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
lean_dec(v_eqFVarId_1077_);
lean_dec(v_mvarId_1076_);
v_val_1219_ = lean_ctor_get(v_a_1215_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_a_1215_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1221_ = v_a_1215_;
v_isShared_1222_ = v_isSharedCheck_1231_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_val_1219_);
lean_dec(v_a_1215_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1231_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1223_ = lean_unsigned_to_nat(1u);
v___x_1224_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1224_, 0, v_val_1219_);
lean_ctor_set(v___x_1224_, 1, v_subst_1078_);
lean_ctor_set(v___x_1224_, 2, v___x_1223_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 0, v___x_1224_);
v___x_1226_ = v___x_1221_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1228_; 
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1226_);
v___x_1228_ = v___x_1217_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
else
{
lean_object* v___x_1232_; 
lean_del_object(v___x_1217_);
lean_dec(v_a_1215_);
lean_inc_ref(v_a_1083_);
v___x_1232_ = l_Lean_Meta_isConstructorApp(v_a_1083_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; uint8_t v___x_1234_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
v___x_1234_ = lean_unbox(v_a_1233_);
lean_dec(v_a_1233_);
if (v___x_1234_ == 0)
{
v___y_1136_ = v___x_1232_;
goto v___jp_1135_;
}
else
{
lean_object* v___x_1235_; 
lean_dec_ref_known(v___x_1232_, 1);
lean_inc_ref(v_b_1084_);
v___x_1235_ = l_Lean_Meta_isConstructorApp(v_b_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
v___y_1136_ = v___x_1235_;
goto v___jp_1135_;
}
}
else
{
v___y_1136_ = v___x_1232_;
goto v___jp_1135_;
}
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
lean_dec(v_subst_1078_);
lean_dec(v_eqFVarId_1077_);
lean_dec(v_mvarId_1076_);
v_a_1237_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1214_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1214_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
v___jp_1090_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
lean_inc(v_eqFVarId_1077_);
v___x_1093_ = l_Lean_mkFVar(v_eqFVarId_1077_);
v___x_1094_ = l_Lean_Meta_mkEq(v___y_1091_, v___y_1092_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1096_ = l_Lean_LocalDecl_userName(v_eqDecl_1080_);
lean_dec_ref(v_eqDecl_1080_);
v___x_1097_ = l_Lean_MVarId_assert(v_mvarId_1076_, v___x_1096_, v_a_1095_, v___x_1093_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1099_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1099_ = l_Lean_MVarId_clear(v_a_1098_, v_eqFVarId_1077_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1110_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1110_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1110_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1104_ = lean_unsigned_to_nat(1u);
v___x_1105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1105_, 0, v_a_1100_);
lean_ctor_set(v___x_1105_, 1, v_subst_1078_);
lean_ctor_set(v___x_1105_, 2, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1106_);
v___x_1108_ = v___x_1102_;
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
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_subst_1078_);
v_a_1111_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1099_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1099_);
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
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec(v_subst_1078_);
lean_dec(v_eqFVarId_1077_);
v_a_1119_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1097_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1097_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec_ref(v___x_1093_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_subst_1078_);
lean_dec(v_eqFVarId_1077_);
lean_dec(v_mvarId_1076_);
v_a_1127_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1094_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1094_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
v___jp_1135_:
{
if (lean_obj_tag(v___y_1136_) == 0)
{
lean_object* v_a_1137_; uint8_t v___x_1138_; 
v_a_1137_ = lean_ctor_get(v___y_1136_, 0);
lean_inc(v_a_1137_);
lean_dec_ref_known(v___y_1136_, 1);
v___x_1138_ = lean_unbox(v_a_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc_ref(v_a_1083_);
v___x_1139_ = lean_whnf(v_a_1083_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1141_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc_ref(v_b_1084_);
v___x_1141_ = lean_whnf(v_b_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; uint8_t v___x_1143_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v___x_1143_ = lean_expr_eqv(v_a_1140_, v_a_1083_);
if (v___x_1143_ == 0)
{
lean_dec(v_a_1137_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec(v_caseName_x3f_1079_);
v___y_1091_ = v_a_1140_;
v___y_1092_ = v_a_1142_;
goto v___jp_1090_;
}
else
{
uint8_t v___x_1144_; 
v___x_1144_ = lean_expr_eqv(v_a_1142_, v_b_1084_);
if (v___x_1144_ == 0)
{
lean_dec(v_a_1137_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec(v_caseName_x3f_1079_);
v___y_1091_ = v_a_1140_;
v___y_1092_ = v_a_1142_;
goto v___jp_1090_;
}
else
{
lean_object* v___x_1145_; 
lean_dec(v_a_1142_);
lean_dec(v_a_1140_);
lean_dec(v_eqFVarId_1077_);
lean_inc_ref(v_eqDecl_1080_);
v___x_1145_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_changeOfVariables_x3f(v_mvarId_1076_, v_eqDecl_1080_, v_subst_1078_, v_00_u03b1_1081_, v_a_1083_, v_b_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
lean_inc(v_a_1146_);
if (lean_obj_tag(v_a_1146_) == 1)
{
lean_dec_ref_known(v_a_1146_, 1);
lean_dec(v_a_1137_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
return v___x_1145_;
}
else
{
lean_dec_ref_known(v___x_1145_, 1);
lean_dec(v_a_1146_);
if (lean_obj_tag(v_caseName_x3f_1079_) == 0)
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_dec(v_a_1137_);
v___x_1147_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_1148_ = l_Lean_LocalDecl_type(v_eqDecl_1080_);
lean_dec_ref(v_eqDecl_1080_);
v___x_1149_ = l_Lean_indentExpr(v___x_1148_);
v___x_1150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1147_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_1150_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
return v___x_1151_;
}
else
{
lean_object* v_val_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; uint8_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v_val_1152_ = lean_ctor_get(v_caseName_x3f_1079_, 0);
lean_inc(v_val_1152_);
lean_dec_ref_known(v_caseName_x3f_1079_, 1);
v___x_1153_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_1154_ = l_Lean_LocalDecl_type(v_eqDecl_1080_);
lean_dec_ref(v_eqDecl_1080_);
v___x_1155_ = l_Lean_indentExpr(v___x_1154_);
v___x_1156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1153_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
v___x_1157_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1);
v___x_1158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = lean_unbox(v_a_1137_);
lean_dec(v_a_1137_);
v___x_1160_ = l_Lean_MessageData_ofConstName(v_val_1152_, v___x_1159_);
v___x_1161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1158_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___x_1162_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3);
v___x_1163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
v___x_1164_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_1163_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
return v___x_1164_;
}
}
}
else
{
lean_dec(v_a_1137_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
return v___x_1145_;
}
}
}
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
lean_dec(v_a_1140_);
lean_dec(v_a_1137_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
lean_dec(v_subst_1078_);
lean_dec(v_eqFVarId_1077_);
lean_dec(v_mvarId_1076_);
v_a_1165_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1141_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1141_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
lean_dec(v_a_1137_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
lean_dec(v_subst_1078_);
lean_dec(v_eqFVarId_1077_);
lean_dec(v_mvarId_1076_);
v_a_1173_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1139_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1139_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
else
{
lean_object* v___x_1181_; 
lean_dec(v_a_1137_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
v___x_1181_ = l_Lean_Meta_injectionCore(v_mvarId_1076_, v_eqFVarId_1077_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1197_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1197_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1197_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
if (lean_obj_tag(v_a_1182_) == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
lean_dec(v_subst_1078_);
v___x_1186_ = lean_box(0);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1186_);
v___x_1188_ = v___x_1184_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
else
{
lean_object* v_mvarId_1190_; lean_object* v_numNewEqs_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1195_; 
v_mvarId_1190_ = lean_ctor_get(v_a_1182_, 0);
lean_inc(v_mvarId_1190_);
v_numNewEqs_1191_ = lean_ctor_get(v_a_1182_, 1);
lean_inc(v_numNewEqs_1191_);
lean_dec_ref_known(v_a_1182_, 2);
v___x_1192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1192_, 0, v_mvarId_1190_);
lean_ctor_set(v___x_1192_, 1, v_subst_1078_);
lean_ctor_set(v___x_1192_, 2, v_numNewEqs_1191_);
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1193_);
v___x_1195_ = v___x_1184_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1193_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec(v_subst_1078_);
v_a_1198_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1181_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1181_);
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
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_a_1083_);
lean_dec_ref(v_00_u03b1_1081_);
lean_dec_ref(v_eqDecl_1080_);
lean_dec(v_caseName_x3f_1079_);
lean_dec(v_subst_1078_);
lean_dec(v_eqFVarId_1077_);
lean_dec(v_mvarId_1076_);
v_a_1206_ = lean_ctor_get(v___y_1136_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___y_1136_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___y_1136_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___y_1136_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___boxed(lean_object* v_mvarId_1245_, lean_object* v_eqFVarId_1246_, lean_object* v_subst_1247_, lean_object* v_caseName_x3f_1248_, lean_object* v_eqDecl_1249_, lean_object* v_00_u03b1_1250_, lean_object* v_injectionOffset_x3f_1251_, lean_object* v_a_1252_, lean_object* v_b_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(v_mvarId_1245_, v_eqFVarId_1246_, v_subst_1247_, v_caseName_x3f_1248_, v_eqDecl_1249_, v_00_u03b1_1250_, v_injectionOffset_x3f_1251_, v_a_1252_, v_b_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(lean_object* v_e_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___x_1263_; 
v___x_1263_ = l_Lean_Expr_hasMVar(v_e_1260_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v_e_1260_);
return v___x_1264_;
}
else
{
lean_object* v___x_1265_; lean_object* v_mctx_1266_; lean_object* v___x_1267_; lean_object* v_fst_1268_; lean_object* v_snd_1269_; lean_object* v___x_1270_; lean_object* v_cache_1271_; lean_object* v_zetaDeltaFVarIds_1272_; lean_object* v_postponed_1273_; lean_object* v_diag_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1283_; 
v___x_1265_ = lean_st_ref_get(v___y_1261_);
v_mctx_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc_ref(v_mctx_1266_);
lean_dec(v___x_1265_);
v___x_1267_ = l_Lean_instantiateMVarsCore(v_mctx_1266_, v_e_1260_);
v_fst_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_fst_1268_);
v_snd_1269_ = lean_ctor_get(v___x_1267_, 1);
lean_inc(v_snd_1269_);
lean_dec_ref(v___x_1267_);
v___x_1270_ = lean_st_ref_take(v___y_1261_);
v_cache_1271_ = lean_ctor_get(v___x_1270_, 1);
v_zetaDeltaFVarIds_1272_ = lean_ctor_get(v___x_1270_, 2);
v_postponed_1273_ = lean_ctor_get(v___x_1270_, 3);
v_diag_1274_ = lean_ctor_get(v___x_1270_, 4);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1283_ == 0)
{
lean_object* v_unused_1284_; 
v_unused_1284_ = lean_ctor_get(v___x_1270_, 0);
lean_dec(v_unused_1284_);
v___x_1276_ = v___x_1270_;
v_isShared_1277_ = v_isSharedCheck_1283_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_diag_1274_);
lean_inc(v_postponed_1273_);
lean_inc(v_zetaDeltaFVarIds_1272_);
lean_inc(v_cache_1271_);
lean_dec(v___x_1270_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1283_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v_snd_1269_);
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_snd_1269_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_cache_1271_);
lean_ctor_set(v_reuseFailAlloc_1282_, 2, v_zetaDeltaFVarIds_1272_);
lean_ctor_set(v_reuseFailAlloc_1282_, 3, v_postponed_1273_);
lean_ctor_set(v_reuseFailAlloc_1282_, 4, v_diag_1274_);
v___x_1279_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_st_ref_put(v___y_1261_, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v_fst_1268_);
return v___x_1281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg___boxed(lean_object* v_e_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v_e_1285_, v___y_1286_);
lean_dec(v___y_1286_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(lean_object* v_e_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v_e_1289_, v___y_1291_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___boxed(lean_object* v_e_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(v_e_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(lean_object* v_mvarId_1303_, lean_object* v_x_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1303_, v_x_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
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
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
v_a_1319_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1310_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1310_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg___boxed(lean_object* v_mvarId_1327_, lean_object* v_x_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1327_, v_x_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(lean_object* v_00_u03b1_1335_, lean_object* v_mvarId_1336_, lean_object* v_x_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1336_, v_x_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___boxed(lean_object* v_00_u03b1_1344_, lean_object* v_mvarId_1345_, lean_object* v_x_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(v_00_u03b1_1344_, v_mvarId_1345_, v_x_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1353_, lean_object* v_x_1354_, lean_object* v_x_1355_, lean_object* v_x_1356_){
_start:
{
lean_object* v_ks_1357_; lean_object* v_vs_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1382_; 
v_ks_1357_ = lean_ctor_get(v_x_1353_, 0);
v_vs_1358_ = lean_ctor_get(v_x_1353_, 1);
v_isSharedCheck_1382_ = !lean_is_exclusive(v_x_1353_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1360_ = v_x_1353_;
v_isShared_1361_ = v_isSharedCheck_1382_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_vs_1358_);
lean_inc(v_ks_1357_);
lean_dec(v_x_1353_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1382_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1362_ = lean_array_get_size(v_ks_1357_);
v___x_1363_ = lean_nat_dec_lt(v_x_1354_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1367_; 
lean_dec(v_x_1354_);
v___x_1364_ = lean_array_push(v_ks_1357_, v_x_1355_);
v___x_1365_ = lean_array_push(v_vs_1358_, v_x_1356_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 1, v___x_1365_);
lean_ctor_set(v___x_1360_, 0, v___x_1364_);
v___x_1367_ = v___x_1360_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1364_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
else
{
lean_object* v_k_x27_1369_; uint8_t v___x_1370_; 
v_k_x27_1369_ = lean_array_fget_borrowed(v_ks_1357_, v_x_1354_);
v___x_1370_ = l_Lean_instBEqMVarId_beq(v_x_1355_, v_k_x27_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1372_; 
if (v_isShared_1361_ == 0)
{
v___x_1372_ = v___x_1360_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_ks_1357_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_vs_1358_);
v___x_1372_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_unsigned_to_nat(1u);
v___x_1374_ = lean_nat_add(v_x_1354_, v___x_1373_);
lean_dec(v_x_1354_);
v_x_1353_ = v___x_1372_;
v_x_1354_ = v___x_1374_;
goto _start;
}
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1380_; 
v___x_1377_ = lean_array_fset(v_ks_1357_, v_x_1354_, v_x_1355_);
v___x_1378_ = lean_array_fset(v_vs_1358_, v_x_1354_, v_x_1356_);
lean_dec(v_x_1354_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 1, v___x_1378_);
lean_ctor_set(v___x_1360_, 0, v___x_1377_);
v___x_1380_ = v___x_1360_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1377_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_n_1383_, lean_object* v_k_1384_, lean_object* v_v_1385_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_unsigned_to_nat(0u);
v___x_1387_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(v_n_1383_, v___x_1386_, v_k_1384_, v_v_1385_);
return v___x_1387_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(lean_object* v_x_1389_, size_t v_x_1390_, size_t v_x_1391_, lean_object* v_x_1392_, lean_object* v_x_1393_){
_start:
{
if (lean_obj_tag(v_x_1389_) == 0)
{
lean_object* v_es_1394_; size_t v___x_1395_; size_t v___x_1396_; lean_object* v_j_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v_es_1394_ = lean_ctor_get(v_x_1389_, 0);
v___x_1395_ = ((size_t)31ULL);
v___x_1396_ = lean_usize_land(v_x_1390_, v___x_1395_);
v_j_1397_ = lean_usize_to_nat(v___x_1396_);
v___x_1398_ = lean_array_get_size(v_es_1394_);
v___x_1399_ = lean_nat_dec_lt(v_j_1397_, v___x_1398_);
if (v___x_1399_ == 0)
{
lean_dec(v_j_1397_);
lean_dec(v_x_1393_);
lean_dec(v_x_1392_);
return v_x_1389_;
}
else
{
lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1438_; 
lean_inc_ref(v_es_1394_);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_x_1389_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; 
v_unused_1439_ = lean_ctor_get(v_x_1389_, 0);
lean_dec(v_unused_1439_);
v___x_1401_ = v_x_1389_;
v_isShared_1402_ = v_isSharedCheck_1438_;
goto v_resetjp_1400_;
}
else
{
lean_dec(v_x_1389_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1438_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v_v_1403_; lean_object* v___x_1404_; lean_object* v_xs_x27_1405_; lean_object* v___y_1407_; 
v_v_1403_ = lean_array_fget(v_es_1394_, v_j_1397_);
v___x_1404_ = lean_box(0);
v_xs_x27_1405_ = lean_array_fset(v_es_1394_, v_j_1397_, v___x_1404_);
switch(lean_obj_tag(v_v_1403_))
{
case 0:
{
lean_object* v_key_1412_; lean_object* v_val_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1423_; 
v_key_1412_ = lean_ctor_get(v_v_1403_, 0);
v_val_1413_ = lean_ctor_get(v_v_1403_, 1);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_v_1403_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1415_ = v_v_1403_;
v_isShared_1416_ = v_isSharedCheck_1423_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_val_1413_);
lean_inc(v_key_1412_);
lean_dec(v_v_1403_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1423_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
uint8_t v___x_1417_; 
v___x_1417_ = l_Lean_instBEqMVarId_beq(v_x_1392_, v_key_1412_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_del_object(v___x_1415_);
v___x_1418_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1412_, v_val_1413_, v_x_1392_, v_x_1393_);
v___x_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
v___y_1407_ = v___x_1419_;
goto v___jp_1406_;
}
else
{
lean_object* v___x_1421_; 
lean_dec(v_val_1413_);
lean_dec(v_key_1412_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v_x_1393_);
lean_ctor_set(v___x_1415_, 0, v_x_1392_);
v___x_1421_ = v___x_1415_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_x_1392_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v_x_1393_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
v___y_1407_ = v___x_1421_;
goto v___jp_1406_;
}
}
}
}
case 1:
{
lean_object* v_node_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1436_; 
v_node_1424_ = lean_ctor_get(v_v_1403_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v_v_1403_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1426_ = v_v_1403_;
v_isShared_1427_ = v_isSharedCheck_1436_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_node_1424_);
lean_dec(v_v_1403_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1436_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
size_t v___x_1428_; size_t v___x_1429_; size_t v___x_1430_; size_t v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
v___x_1428_ = ((size_t)5ULL);
v___x_1429_ = lean_usize_shift_right(v_x_1390_, v___x_1428_);
v___x_1430_ = ((size_t)1ULL);
v___x_1431_ = lean_usize_add(v_x_1391_, v___x_1430_);
v___x_1432_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_node_1424_, v___x_1429_, v___x_1431_, v_x_1392_, v_x_1393_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1432_);
v___x_1434_ = v___x_1426_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
v___y_1407_ = v___x_1434_;
goto v___jp_1406_;
}
}
}
default: 
{
lean_object* v___x_1437_; 
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v_x_1392_);
lean_ctor_set(v___x_1437_, 1, v_x_1393_);
v___y_1407_ = v___x_1437_;
goto v___jp_1406_;
}
}
v___jp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1408_ = lean_array_fset(v_xs_x27_1405_, v_j_1397_, v___y_1407_);
lean_dec(v_j_1397_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 0, v___x_1408_);
v___x_1410_ = v___x_1401_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
}
else
{
lean_object* v_ks_1440_; lean_object* v_vs_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1459_; 
v_ks_1440_ = lean_ctor_get(v_x_1389_, 0);
v_vs_1441_ = lean_ctor_get(v_x_1389_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_x_1389_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1443_ = v_x_1389_;
v_isShared_1444_ = v_isSharedCheck_1459_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_vs_1441_);
lean_inc(v_ks_1440_);
lean_dec(v_x_1389_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1459_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_ks_1440_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v_vs_1441_);
v___x_1446_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v_newNode_1447_; size_t v___x_1448_; uint8_t v___x_1449_; 
v_newNode_1447_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(v___x_1446_, v_x_1392_, v_x_1393_);
v___x_1448_ = ((size_t)7ULL);
v___x_1449_ = lean_usize_dec_le(v___x_1448_, v_x_1391_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1451_; uint8_t v___x_1452_; 
v___x_1450_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1447_);
v___x_1451_ = lean_unsigned_to_nat(4u);
v___x_1452_ = lean_nat_dec_lt(v___x_1450_, v___x_1451_);
lean_dec(v___x_1450_);
if (v___x_1452_ == 0)
{
lean_object* v_ks_1453_; lean_object* v_vs_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_ks_1453_ = lean_ctor_get(v_newNode_1447_, 0);
lean_inc_ref(v_ks_1453_);
v_vs_1454_ = lean_ctor_get(v_newNode_1447_, 1);
lean_inc_ref(v_vs_1454_);
lean_dec_ref(v_newNode_1447_);
v___x_1455_ = lean_unsigned_to_nat(0u);
v___x_1456_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_1457_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_x_1391_, v_ks_1453_, v_vs_1454_, v___x_1455_, v___x_1456_);
lean_dec_ref(v_vs_1454_);
lean_dec_ref(v_ks_1453_);
return v___x_1457_;
}
else
{
return v_newNode_1447_;
}
}
else
{
return v_newNode_1447_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(size_t v_depth_1460_, lean_object* v_keys_1461_, lean_object* v_vals_1462_, lean_object* v_i_1463_, lean_object* v_entries_1464_){
_start:
{
lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1465_ = lean_array_get_size(v_keys_1461_);
v___x_1466_ = lean_nat_dec_lt(v_i_1463_, v___x_1465_);
if (v___x_1466_ == 0)
{
lean_dec(v_i_1463_);
return v_entries_1464_;
}
else
{
lean_object* v_k_1467_; lean_object* v_v_1468_; uint64_t v___x_1469_; size_t v_h_1470_; size_t v___x_1471_; lean_object* v___x_1472_; size_t v___x_1473_; size_t v___x_1474_; size_t v___x_1475_; size_t v_h_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v_k_1467_ = lean_array_fget_borrowed(v_keys_1461_, v_i_1463_);
v_v_1468_ = lean_array_fget_borrowed(v_vals_1462_, v_i_1463_);
v___x_1469_ = l_Lean_instHashableMVarId_hash(v_k_1467_);
v_h_1470_ = lean_uint64_to_usize(v___x_1469_);
v___x_1471_ = ((size_t)5ULL);
v___x_1472_ = lean_unsigned_to_nat(1u);
v___x_1473_ = ((size_t)1ULL);
v___x_1474_ = lean_usize_sub(v_depth_1460_, v___x_1473_);
v___x_1475_ = lean_usize_mul(v___x_1471_, v___x_1474_);
v_h_1476_ = lean_usize_shift_right(v_h_1470_, v___x_1475_);
v___x_1477_ = lean_nat_add(v_i_1463_, v___x_1472_);
lean_dec(v_i_1463_);
lean_inc(v_v_1468_);
lean_inc(v_k_1467_);
v___x_1478_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_entries_1464_, v_h_1476_, v_depth_1460_, v_k_1467_, v_v_1468_);
v_i_1463_ = v___x_1477_;
v_entries_1464_ = v___x_1478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_depth_1480_, lean_object* v_keys_1481_, lean_object* v_vals_1482_, lean_object* v_i_1483_, lean_object* v_entries_1484_){
_start:
{
size_t v_depth_boxed_1485_; lean_object* v_res_1486_; 
v_depth_boxed_1485_ = lean_unbox_usize(v_depth_1480_);
lean_dec(v_depth_1480_);
v_res_1486_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_depth_boxed_1485_, v_keys_1481_, v_vals_1482_, v_i_1483_, v_entries_1484_);
lean_dec_ref(v_vals_1482_);
lean_dec_ref(v_keys_1481_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_1487_, lean_object* v_x_1488_, lean_object* v_x_1489_, lean_object* v_x_1490_, lean_object* v_x_1491_){
_start:
{
size_t v_x_8440__boxed_1492_; size_t v_x_8441__boxed_1493_; lean_object* v_res_1494_; 
v_x_8440__boxed_1492_ = lean_unbox_usize(v_x_1488_);
lean_dec(v_x_1488_);
v_x_8441__boxed_1493_ = lean_unbox_usize(v_x_1489_);
lean_dec(v_x_1489_);
v_res_1494_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1487_, v_x_8440__boxed_1492_, v_x_8441__boxed_1493_, v_x_1490_, v_x_1491_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(lean_object* v_x_1495_, lean_object* v_x_1496_, lean_object* v_x_1497_){
_start:
{
uint64_t v___x_1498_; size_t v___x_1499_; size_t v___x_1500_; lean_object* v___x_1501_; 
v___x_1498_ = l_Lean_instHashableMVarId_hash(v_x_1496_);
v___x_1499_ = lean_uint64_to_usize(v___x_1498_);
v___x_1500_ = ((size_t)1ULL);
v___x_1501_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1495_, v___x_1499_, v___x_1500_, v_x_1496_, v_x_1497_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(lean_object* v_mvarId_1502_, lean_object* v_val_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v___x_1506_; lean_object* v_mctx_1507_; lean_object* v_cache_1508_; lean_object* v_zetaDeltaFVarIds_1509_; lean_object* v_postponed_1510_; lean_object* v_diag_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1540_; 
v___x_1506_ = lean_st_ref_take(v___y_1504_);
v_mctx_1507_ = lean_ctor_get(v___x_1506_, 0);
v_cache_1508_ = lean_ctor_get(v___x_1506_, 1);
v_zetaDeltaFVarIds_1509_ = lean_ctor_get(v___x_1506_, 2);
v_postponed_1510_ = lean_ctor_get(v___x_1506_, 3);
v_diag_1511_ = lean_ctor_get(v___x_1506_, 4);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1513_ = v___x_1506_;
v_isShared_1514_ = v_isSharedCheck_1540_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_diag_1511_);
lean_inc(v_postponed_1510_);
lean_inc(v_zetaDeltaFVarIds_1509_);
lean_inc(v_cache_1508_);
lean_inc(v_mctx_1507_);
lean_dec(v___x_1506_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1540_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v_depth_1515_; lean_object* v_levelAssignDepth_1516_; lean_object* v_lmvarCounter_1517_; lean_object* v_mvarCounter_1518_; lean_object* v_lDecls_1519_; lean_object* v_decls_1520_; lean_object* v_userNames_1521_; lean_object* v_lAssignment_1522_; lean_object* v_eAssignment_1523_; lean_object* v_dAssignment_1524_; lean_object* v_instanceTypedMVars_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1539_; 
v_depth_1515_ = lean_ctor_get(v_mctx_1507_, 0);
v_levelAssignDepth_1516_ = lean_ctor_get(v_mctx_1507_, 1);
v_lmvarCounter_1517_ = lean_ctor_get(v_mctx_1507_, 2);
v_mvarCounter_1518_ = lean_ctor_get(v_mctx_1507_, 3);
v_lDecls_1519_ = lean_ctor_get(v_mctx_1507_, 4);
v_decls_1520_ = lean_ctor_get(v_mctx_1507_, 5);
v_userNames_1521_ = lean_ctor_get(v_mctx_1507_, 6);
v_lAssignment_1522_ = lean_ctor_get(v_mctx_1507_, 7);
v_eAssignment_1523_ = lean_ctor_get(v_mctx_1507_, 8);
v_dAssignment_1524_ = lean_ctor_get(v_mctx_1507_, 9);
v_instanceTypedMVars_1525_ = lean_ctor_get(v_mctx_1507_, 10);
v_isSharedCheck_1539_ = !lean_is_exclusive(v_mctx_1507_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1527_ = v_mctx_1507_;
v_isShared_1528_ = v_isSharedCheck_1539_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_instanceTypedMVars_1525_);
lean_inc(v_dAssignment_1524_);
lean_inc(v_eAssignment_1523_);
lean_inc(v_lAssignment_1522_);
lean_inc(v_userNames_1521_);
lean_inc(v_decls_1520_);
lean_inc(v_lDecls_1519_);
lean_inc(v_mvarCounter_1518_);
lean_inc(v_lmvarCounter_1517_);
lean_inc(v_levelAssignDepth_1516_);
lean_inc(v_depth_1515_);
lean_dec(v_mctx_1507_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1539_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1529_ = lean_box(0);
v___x_1530_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(v_eAssignment_1523_, v_mvarId_1502_, v_val_1503_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 8, v___x_1530_);
v___x_1532_ = v___x_1527_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_depth_1515_);
lean_ctor_set(v_reuseFailAlloc_1538_, 1, v_levelAssignDepth_1516_);
lean_ctor_set(v_reuseFailAlloc_1538_, 2, v_lmvarCounter_1517_);
lean_ctor_set(v_reuseFailAlloc_1538_, 3, v_mvarCounter_1518_);
lean_ctor_set(v_reuseFailAlloc_1538_, 4, v_lDecls_1519_);
lean_ctor_set(v_reuseFailAlloc_1538_, 5, v_decls_1520_);
lean_ctor_set(v_reuseFailAlloc_1538_, 6, v_userNames_1521_);
lean_ctor_set(v_reuseFailAlloc_1538_, 7, v_lAssignment_1522_);
lean_ctor_set(v_reuseFailAlloc_1538_, 8, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1538_, 9, v_dAssignment_1524_);
lean_ctor_set(v_reuseFailAlloc_1538_, 10, v_instanceTypedMVars_1525_);
v___x_1532_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1532_);
v___x_1534_ = v___x_1513_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1532_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v_cache_1508_);
lean_ctor_set(v_reuseFailAlloc_1537_, 2, v_zetaDeltaFVarIds_1509_);
lean_ctor_set(v_reuseFailAlloc_1537_, 3, v_postponed_1510_);
lean_ctor_set(v_reuseFailAlloc_1537_, 4, v_diag_1511_);
v___x_1534_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_st_ref_put(v___y_1504_, v___x_1534_);
v___x_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1529_);
return v___x_1536_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_1541_, lean_object* v_val_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1541_, v_val_1542_, v___y_1543_);
lean_dec(v___y_1543_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0(uint8_t v___x_1553_, lean_object* v_mvarId_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_b_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v___x_1563_; lean_object* v_env_1564_; lean_object* v___x_1565_; lean_object* v_fst_1567_; lean_object* v_fst_1568_; lean_object* v_snd_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; uint8_t v___x_1676_; 
v___x_1563_ = lean_st_ref_get(v___y_1561_);
v_env_1564_ = lean_ctor_get(v___x_1563_, 0);
lean_inc_ref(v_env_1564_);
lean_dec(v___x_1563_);
v___x_1565_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__0___closed__3));
v___x_1676_ = l_Lean_Environment_contains(v_env_1564_, v___x_1565_, v___x_1553_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
lean_dec_ref(v_b_1557_);
lean_dec_ref(v_a_1556_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v___x_1677_ = lean_box(0);
v___x_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
return v___x_1678_;
}
else
{
lean_object* v___x_1679_; 
v___x_1679_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_a_1556_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1746_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1746_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1746_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
if (lean_obj_tag(v_a_1680_) == 1)
{
lean_object* v_val_1684_; lean_object* v_fst_1685_; lean_object* v_snd_1686_; lean_object* v___x_1687_; 
v_val_1684_ = lean_ctor_get(v_a_1680_, 0);
lean_inc(v_val_1684_);
lean_dec_ref_known(v_a_1680_, 1);
v_fst_1685_ = lean_ctor_get(v_val_1684_, 0);
lean_inc(v_fst_1685_);
v_snd_1686_ = lean_ctor_get(v_val_1684_, 1);
lean_inc(v_snd_1686_);
lean_dec(v_val_1684_);
v___x_1687_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_b_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1733_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1690_ = v___x_1687_;
v_isShared_1691_ = v_isSharedCheck_1733_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1687_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1733_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
if (lean_obj_tag(v_a_1688_) == 1)
{
lean_object* v_val_1697_; lean_object* v_fst_1698_; lean_object* v_snd_1699_; lean_object* v___x_1700_; uint8_t v___x_1701_; 
lean_del_object(v___x_1682_);
v_val_1697_ = lean_ctor_get(v_a_1688_, 0);
lean_inc(v_val_1697_);
lean_dec_ref_known(v_a_1688_, 1);
v_fst_1698_ = lean_ctor_get(v_val_1697_, 0);
lean_inc(v_fst_1698_);
v_snd_1699_ = lean_ctor_get(v_val_1697_, 1);
lean_inc(v_snd_1699_);
lean_dec(v_val_1697_);
v___x_1700_ = lean_unsigned_to_nat(0u);
v___x_1701_ = lean_nat_dec_eq(v_snd_1686_, v___x_1700_);
if (v___x_1701_ == 0)
{
uint8_t v___x_1702_; 
v___x_1702_ = lean_nat_dec_eq(v_snd_1699_, v___x_1700_);
if (v___x_1702_ == 0)
{
uint8_t v___x_1703_; 
lean_del_object(v___x_1690_);
v___x_1703_ = lean_nat_dec_lt(v_snd_1686_, v_snd_1699_);
if (v___x_1703_ == 0)
{
uint8_t v___x_1704_; 
v___x_1704_ = lean_nat_dec_eq(v_snd_1686_, v_snd_1699_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1705_ = lean_nat_sub(v_snd_1686_, v_snd_1699_);
lean_dec(v_snd_1686_);
v___x_1706_ = l_Lean_mkNatLit(v___x_1705_);
v___x_1707_ = l_Lean_Meta_mkAdd(v_fst_1685_, v___x_1706_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; 
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_a_1708_);
lean_dec_ref_known(v___x_1707_, 1);
v_fst_1567_ = v_a_1708_;
v_fst_1568_ = v_fst_1698_;
v_snd_1569_ = v_snd_1699_;
v___y_1570_ = v___y_1558_;
v___y_1571_ = v___y_1559_;
v___y_1572_ = v___y_1560_;
v___y_1573_ = v___y_1561_;
goto v___jp_1566_;
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
lean_dec(v_snd_1699_);
lean_dec(v_fst_1698_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1709_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v___x_1707_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1707_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
else
{
lean_dec(v_snd_1699_);
v_fst_1567_ = v_fst_1685_;
v_fst_1568_ = v_fst_1698_;
v_snd_1569_ = v_snd_1686_;
v___y_1570_ = v___y_1558_;
v___y_1571_ = v___y_1559_;
v___y_1572_ = v___y_1560_;
v___y_1573_ = v___y_1561_;
goto v___jp_1566_;
}
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1717_ = lean_nat_sub(v_snd_1699_, v_snd_1686_);
lean_dec(v_snd_1699_);
v___x_1718_ = l_Lean_mkNatLit(v___x_1717_);
v___x_1719_ = l_Lean_Meta_mkAdd(v_fst_1698_, v___x_1718_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1719_, 1);
v_fst_1567_ = v_fst_1685_;
v_fst_1568_ = v_a_1720_;
v_snd_1569_ = v_snd_1686_;
v___y_1570_ = v___y_1558_;
v___y_1571_ = v___y_1559_;
v___y_1572_ = v___y_1560_;
v___y_1573_ = v___y_1561_;
goto v___jp_1566_;
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec(v_snd_1686_);
lean_dec(v_fst_1685_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1721_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1719_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1719_);
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
else
{
lean_dec(v_snd_1699_);
lean_dec(v_fst_1698_);
lean_dec(v_snd_1686_);
lean_dec(v_fst_1685_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
goto v___jp_1692_;
}
}
else
{
lean_dec(v_snd_1699_);
lean_dec(v_fst_1698_);
lean_dec(v_snd_1686_);
lean_dec(v_fst_1685_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
goto v___jp_1692_;
}
}
else
{
lean_object* v___x_1729_; lean_object* v___x_1731_; 
lean_del_object(v___x_1690_);
lean_dec(v_a_1688_);
lean_dec(v_snd_1686_);
lean_dec(v_fst_1685_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v___x_1729_ = lean_box(0);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1729_);
v___x_1731_ = v___x_1682_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1729_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
v___jp_1692_:
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1693_ = lean_box(0);
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 0, v___x_1693_);
v___x_1695_ = v___x_1690_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec(v_snd_1686_);
lean_dec(v_fst_1685_);
lean_del_object(v___x_1682_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1734_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1687_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1687_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
else
{
lean_object* v___x_1742_; lean_object* v___x_1744_; 
lean_dec(v_a_1680_);
lean_dec_ref(v_b_1557_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v___x_1742_ = lean_box(0);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1742_);
v___x_1744_ = v___x_1682_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
else
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
lean_dec_ref(v_b_1557_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1747_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1679_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1679_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
v___jp_1566_:
{
lean_object* v___x_1574_; 
lean_inc(v_mvarId_1554_);
v___x_1574_ = l_Lean_MVarId_getType(v_mvarId_1554_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1576_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc_n(v_a_1575_, 2);
lean_dec_ref_known(v___x_1574_, 1);
v___x_1576_ = l_Lean_Meta_getLevel(v_a_1575_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
lean_inc_ref(v_fst_1568_);
lean_inc_ref(v_fst_1567_);
v___x_1578_ = l_Lean_Meta_mkEq(v_fst_1567_, v_fst_1568_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1580_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
lean_inc(v_a_1575_);
v___x_1580_ = l_Lean_mkArrow(v_a_1579_, v_a_1575_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1582_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
lean_inc(v_mvarId_1554_);
v___x_1582_ = l_Lean_MVarId_getTag(v_mvarId_1554_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1584_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1582_, 1);
v___x_1584_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1581_, v_a_1583_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1626_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc_n(v_a_1585_, 2);
lean_dec_ref_known(v___x_1584_, 1);
v___x_1586_ = lean_box(0);
v___x_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1587_, 0, v_a_1577_);
lean_ctor_set(v___x_1587_, 1, v___x_1586_);
v___x_1588_ = l_Lean_mkConst(v___x_1565_, v___x_1587_);
v___x_1589_ = l_Lean_mkNatLit(v_snd_1569_);
lean_inc_ref(v_a_1555_);
v___x_1590_ = l_Lean_LocalDecl_toExpr(v_a_1555_);
v___x_1591_ = lean_unsigned_to_nat(6u);
v___x_1592_ = lean_mk_empty_array_with_capacity(v___x_1591_);
v___x_1593_ = lean_array_push(v___x_1592_, v_a_1575_);
v___x_1594_ = lean_array_push(v___x_1593_, v_fst_1567_);
v___x_1595_ = lean_array_push(v___x_1594_, v_fst_1568_);
v___x_1596_ = lean_array_push(v___x_1595_, v___x_1589_);
v___x_1597_ = lean_array_push(v___x_1596_, v___x_1590_);
v___x_1598_ = lean_array_push(v___x_1597_, v_a_1585_);
v___x_1599_ = l_Lean_mkAppN(v___x_1588_, v___x_1598_);
lean_dec_ref(v___x_1598_);
v___x_1600_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1554_, v___x_1599_, v___y_1571_);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1626_ == 0)
{
lean_object* v_unused_1627_; 
v_unused_1627_ = lean_ctor_get(v___x_1600_, 0);
lean_dec(v_unused_1627_);
v___x_1602_ = v___x_1600_;
v_isShared_1603_ = v_isSharedCheck_1626_;
goto v_resetjp_1601_;
}
else
{
lean_dec(v___x_1600_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1626_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1604_ = l_Lean_Expr_mvarId_x21(v_a_1585_);
lean_dec(v_a_1585_);
v___x_1605_ = l_Lean_LocalDecl_fvarId(v_a_1555_);
lean_dec_ref(v_a_1555_);
v___x_1606_ = l_Lean_MVarId_tryClear(v___x_1604_, v___x_1605_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1617_; 
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1617_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1617_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1603_ == 0)
{
lean_ctor_set_tag(v___x_1602_, 1);
lean_ctor_set(v___x_1602_, 0, v_a_1607_);
v___x_1612_ = v___x_1602_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1614_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v___x_1612_);
v___x_1614_ = v___x_1609_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_del_object(v___x_1602_);
v_a_1618_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1606_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1606_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec(v_a_1577_);
lean_dec(v_a_1575_);
lean_dec(v_snd_1569_);
lean_dec_ref(v_fst_1568_);
lean_dec_ref(v_fst_1567_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1628_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1584_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1584_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v_a_1581_);
lean_dec(v_a_1577_);
lean_dec(v_a_1575_);
lean_dec(v_snd_1569_);
lean_dec_ref(v_fst_1568_);
lean_dec_ref(v_fst_1567_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1636_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1582_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1582_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
lean_dec(v_a_1577_);
lean_dec(v_a_1575_);
lean_dec(v_snd_1569_);
lean_dec_ref(v_fst_1568_);
lean_dec_ref(v_fst_1567_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1644_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1580_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1580_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec(v_a_1577_);
lean_dec(v_a_1575_);
lean_dec(v_snd_1569_);
lean_dec_ref(v_fst_1568_);
lean_dec_ref(v_fst_1567_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1652_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1578_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1578_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec(v_a_1575_);
lean_dec(v_snd_1569_);
lean_dec_ref(v_fst_1568_);
lean_dec_ref(v_fst_1567_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1660_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1576_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1576_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec(v_snd_1569_);
lean_dec_ref(v_fst_1568_);
lean_dec_ref(v_fst_1567_);
lean_dec_ref(v_a_1555_);
lean_dec(v_mvarId_1554_);
v_a_1668_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1574_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1574_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___boxed(lean_object* v___x_1755_, lean_object* v_mvarId_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_b_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
uint8_t v___x_8663__boxed_1765_; lean_object* v_res_1766_; 
v___x_8663__boxed_1765_ = lean_unbox(v___x_1755_);
v_res_1766_ = l_Lean_Meta_unifyEq_x3f___lam__0(v___x_8663__boxed_1765_, v_mvarId_1756_, v_a_1757_, v_a_1758_, v_b_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1766_;
}
}
static lean_object* _init_l_Lean_Meta_unifyEq_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1771_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__1___closed__2));
v___x_1772_ = l_Lean_stringToMessageData(v___x_1771_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1(lean_object* v_eqFVarId_1773_, lean_object* v_mvarId_1774_, lean_object* v_subst_1775_, lean_object* v_acyclic_1776_, lean_object* v_caseName_x3f_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v___x_1783_; 
lean_inc(v_eqFVarId_1773_);
v___x_1783_ = l_Lean_FVarId_getDecl___redArg(v_eqFVarId_1773_, v___y_1778_, v___y_1780_, v___y_1781_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1784_);
lean_dec_ref_known(v___x_1783_, 1);
v___x_1785_ = l_Lean_LocalDecl_type(v_a_1784_);
v___x_1786_ = l_Lean_Expr_isHEq(v___x_1785_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1787_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__1___closed__1));
v___x_1788_ = lean_unsigned_to_nat(3u);
v___x_1789_ = l_Lean_Expr_isAppOfArity(v___x_1785_, v___x_1787_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
lean_dec(v_a_1784_);
lean_dec(v_caseName_x3f_1777_);
lean_dec_ref(v_acyclic_1776_);
lean_dec(v_subst_1775_);
lean_dec(v_mvarId_1774_);
lean_dec(v_eqFVarId_1773_);
v___x_1790_ = lean_obj_once(&l_Lean_Meta_unifyEq_x3f___lam__1___closed__3, &l_Lean_Meta_unifyEq_x3f___lam__1___closed__3_once, _init_l_Lean_Meta_unifyEq_x3f___lam__1___closed__3);
v___x_1791_ = l_Lean_indentExpr(v___x_1785_);
v___x_1792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_1792_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
return v___x_1793_;
}
else
{
lean_object* v___x_1794_; lean_object* v___f_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v_a_1802_; lean_object* v___x_1803_; 
v___x_1794_ = lean_box(v___x_1789_);
lean_inc(v_a_1784_);
lean_inc(v_mvarId_1774_);
v___f_1795_ = lean_alloc_closure((void*)(l_Lean_Meta_unifyEq_x3f___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1795_, 0, v___x_1794_);
lean_closure_set(v___f_1795_, 1, v_mvarId_1774_);
lean_closure_set(v___f_1795_, 2, v_a_1784_);
v___x_1796_ = l_Lean_Expr_appFn_x21(v___x_1785_);
v___x_1797_ = l_Lean_Expr_appFn_x21(v___x_1796_);
v___x_1798_ = l_Lean_Expr_appArg_x21(v___x_1797_);
lean_dec_ref(v___x_1797_);
v___x_1799_ = l_Lean_Expr_appArg_x21(v___x_1796_);
lean_dec_ref(v___x_1796_);
v___x_1800_ = l_Lean_Expr_appArg_x21(v___x_1785_);
lean_dec_ref(v___x_1785_);
lean_inc_ref(v___x_1799_);
v___x_1801_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v___x_1799_, v___y_1779_);
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref(v___x_1801_);
lean_inc_ref(v___x_1800_);
v___x_1803_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v___x_1800_, v___y_1779_);
if (lean_obj_tag(v_a_1802_) == 1)
{
lean_object* v_a_1804_; 
lean_dec_ref(v___x_1798_);
lean_dec_ref(v___f_1795_);
lean_dec(v_caseName_x3f_1777_);
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref(v___x_1803_);
if (lean_obj_tag(v_a_1804_) == 1)
{
lean_object* v_fvarId_1805_; lean_object* v_fvarId_1806_; lean_object* v___x_1807_; 
v_fvarId_1805_ = lean_ctor_get(v_a_1802_, 0);
lean_inc(v_fvarId_1805_);
lean_dec_ref_known(v_a_1802_, 1);
v_fvarId_1806_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_fvarId_1806_);
lean_dec_ref_known(v_a_1804_, 1);
v___x_1807_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1805_, v___y_1778_, v___y_1780_, v___y_1781_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1809_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v___x_1809_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1806_, v___y_1778_, v___y_1780_, v___y_1781_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; lean_object* v___x_1814_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1809_, 1);
v___x_1811_ = l_Lean_LocalDecl_index(v_a_1808_);
lean_dec(v_a_1808_);
v___x_1812_ = l_Lean_LocalDecl_index(v_a_1810_);
lean_dec(v_a_1810_);
v___x_1813_ = lean_nat_dec_lt(v___x_1811_, v___x_1812_);
lean_dec(v___x_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1774_, v_eqFVarId_1773_, v_subst_1775_, v_acyclic_1776_, v_a_1784_, v___x_1799_, v___x_1800_, v___x_1813_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v_a_1784_);
return v___x_1814_;
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
lean_dec(v_a_1808_);
lean_dec_ref(v___x_1800_);
lean_dec_ref(v___x_1799_);
lean_dec(v_a_1784_);
lean_dec_ref(v_acyclic_1776_);
lean_dec(v_subst_1775_);
lean_dec(v_mvarId_1774_);
lean_dec(v_eqFVarId_1773_);
v_a_1815_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1809_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1809_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
lean_dec(v_fvarId_1806_);
lean_dec_ref(v___x_1800_);
lean_dec_ref(v___x_1799_);
lean_dec(v_a_1784_);
lean_dec_ref(v_acyclic_1776_);
lean_dec(v_subst_1775_);
lean_dec(v_mvarId_1774_);
lean_dec(v_eqFVarId_1773_);
v_a_1823_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1807_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1807_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
else
{
lean_object* v___x_1831_; 
lean_dec(v_a_1804_);
lean_dec_ref_known(v_a_1802_, 1);
v___x_1831_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1774_, v_eqFVarId_1773_, v_subst_1775_, v_acyclic_1776_, v_a_1784_, v___x_1799_, v___x_1800_, v___x_1786_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v_a_1784_);
return v___x_1831_;
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1871_; 
v_a_1832_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1834_ = v___x_1803_;
v_isShared_1835_ = v_isSharedCheck_1871_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1803_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1871_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
if (lean_obj_tag(v_a_1832_) == 1)
{
lean_object* v___x_1836_; 
lean_dec_ref_known(v_a_1832_, 1);
lean_del_object(v___x_1834_);
lean_dec(v_a_1802_);
lean_dec_ref(v___x_1798_);
lean_dec_ref(v___f_1795_);
lean_dec(v_caseName_x3f_1777_);
v___x_1836_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1774_, v_eqFVarId_1773_, v_subst_1775_, v_acyclic_1776_, v_a_1784_, v___x_1799_, v___x_1800_, v___x_1789_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v_a_1784_);
return v___x_1836_;
}
else
{
lean_object* v___x_1837_; 
lean_dec_ref(v___x_1800_);
lean_dec_ref(v___x_1799_);
lean_dec_ref(v_acyclic_1776_);
lean_inc(v_a_1832_);
lean_inc(v_a_1802_);
v___x_1837_ = l_Lean_Meta_isExprDefEq(v_a_1802_, v_a_1832_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; uint8_t v___x_1839_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = lean_unbox(v_a_1838_);
lean_dec(v_a_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; 
lean_del_object(v___x_1834_);
v___x_1840_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(v_mvarId_1774_, v_eqFVarId_1773_, v_subst_1775_, v_caseName_x3f_1777_, v_a_1784_, v___x_1798_, v___f_1795_, v_a_1802_, v_a_1832_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
return v___x_1840_;
}
else
{
lean_object* v___x_1841_; 
lean_dec(v_a_1832_);
lean_dec(v_a_1802_);
lean_dec_ref(v___x_1798_);
lean_dec_ref(v___f_1795_);
lean_dec(v_a_1784_);
lean_dec(v_caseName_x3f_1777_);
v___x_1841_ = l_Lean_MVarId_clear(v_mvarId_1774_, v_eqFVarId_1773_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1854_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1844_ = v___x_1841_;
v_isShared_1845_ = v_isSharedCheck_1854_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1841_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1854_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1847_, 0, v_a_1842_);
lean_ctor_set(v___x_1847_, 1, v_subst_1775_);
lean_ctor_set(v___x_1847_, 2, v___x_1846_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set_tag(v___x_1834_, 1);
lean_ctor_set(v___x_1834_, 0, v___x_1847_);
v___x_1849_ = v___x_1834_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1851_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 0, v___x_1849_);
v___x_1851_ = v___x_1844_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1849_);
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
else
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
lean_del_object(v___x_1834_);
lean_dec(v_subst_1775_);
v_a_1855_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1841_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1841_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_del_object(v___x_1834_);
lean_dec(v_a_1832_);
lean_dec(v_a_1802_);
lean_dec_ref(v___x_1798_);
lean_dec_ref(v___f_1795_);
lean_dec(v_a_1784_);
lean_dec(v_caseName_x3f_1777_);
lean_dec(v_subst_1775_);
lean_dec(v_mvarId_1774_);
lean_dec(v_eqFVarId_1773_);
v_a_1863_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1837_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1837_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
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
lean_object* v___x_1872_; 
lean_dec_ref(v___x_1785_);
lean_dec(v_caseName_x3f_1777_);
lean_dec_ref(v_acyclic_1776_);
lean_dec(v_eqFVarId_1773_);
v___x_1872_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(v_mvarId_1774_, v_a_1784_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v_a_1784_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1883_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1883_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1883_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1881_; 
v___x_1877_ = lean_unsigned_to_nat(1u);
v___x_1878_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1878_, 0, v_a_1873_);
lean_ctor_set(v___x_1878_, 1, v_subst_1775_);
lean_ctor_set(v___x_1878_, 2, v___x_1877_);
v___x_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1878_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v___x_1879_);
v___x_1881_ = v___x_1875_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec(v_subst_1775_);
v_a_1884_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1872_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1872_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1899_; 
lean_dec(v_caseName_x3f_1777_);
lean_dec_ref(v_acyclic_1776_);
lean_dec(v_subst_1775_);
lean_dec(v_mvarId_1774_);
lean_dec(v_eqFVarId_1773_);
v_a_1892_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1894_ = v___x_1783_;
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1783_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1897_; 
if (v_isShared_1895_ == 0)
{
v___x_1897_ = v___x_1894_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1892_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___boxed(lean_object* v_eqFVarId_1900_, lean_object* v_mvarId_1901_, lean_object* v_subst_1902_, lean_object* v_acyclic_1903_, lean_object* v_caseName_x3f_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_Meta_unifyEq_x3f___lam__1(v_eqFVarId_1900_, v_mvarId_1901_, v_subst_1902_, v_acyclic_1903_, v_caseName_x3f_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f(lean_object* v_mvarId_1911_, lean_object* v_eqFVarId_1912_, lean_object* v_subst_1913_, lean_object* v_acyclic_1914_, lean_object* v_caseName_x3f_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v___f_1921_; lean_object* v___x_1922_; 
lean_inc(v_mvarId_1911_);
v___f_1921_ = lean_alloc_closure((void*)(l_Lean_Meta_unifyEq_x3f___lam__1___boxed), 10, 5);
lean_closure_set(v___f_1921_, 0, v_eqFVarId_1912_);
lean_closure_set(v___f_1921_, 1, v_mvarId_1911_);
lean_closure_set(v___f_1921_, 2, v_subst_1913_);
lean_closure_set(v___f_1921_, 3, v_acyclic_1914_);
lean_closure_set(v___f_1921_, 4, v_caseName_x3f_1915_);
v___x_1922_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1911_, v___f_1921_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___boxed(lean_object* v_mvarId_1923_, lean_object* v_eqFVarId_1924_, lean_object* v_subst_1925_, lean_object* v_acyclic_1926_, lean_object* v_caseName_x3f_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lean_Meta_unifyEq_x3f(v_mvarId_1923_, v_eqFVarId_1924_, v_subst_1925_, v_acyclic_1926_, v_caseName_x3f_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(lean_object* v_mvarId_1934_, lean_object* v_val_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v___x_1941_; 
v___x_1941_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1934_, v_val_1935_, v___y_1937_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___boxed(lean_object* v_mvarId_1942_, lean_object* v_val_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(v_mvarId_1942_, v_val_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1950_, lean_object* v_x_1951_, lean_object* v_x_1952_, lean_object* v_x_1953_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(v_x_1951_, v_x_1952_, v_x_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1955_, lean_object* v_x_1956_, size_t v_x_1957_, size_t v_x_1958_, lean_object* v_x_1959_, lean_object* v_x_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1956_, v_x_1957_, v_x_1958_, v_x_1959_, v_x_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1962_, lean_object* v_x_1963_, lean_object* v_x_1964_, lean_object* v_x_1965_, lean_object* v_x_1966_, lean_object* v_x_1967_){
_start:
{
size_t v_x_9390__boxed_1968_; size_t v_x_9391__boxed_1969_; lean_object* v_res_1970_; 
v_x_9390__boxed_1968_ = lean_unbox_usize(v_x_1964_);
lean_dec(v_x_1964_);
v_x_9391__boxed_1969_ = lean_unbox_usize(v_x_1965_);
lean_dec(v_x_1965_);
v_res_1970_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(v_00_u03b2_1962_, v_x_1963_, v_x_9390__boxed_1968_, v_x_9391__boxed_1969_, v_x_1966_, v_x_1967_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1971_, lean_object* v_n_1972_, lean_object* v_k_1973_, lean_object* v_v_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(v_n_1972_, v_k_1973_, v_v_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(lean_object* v_00_u03b2_1976_, size_t v_depth_1977_, lean_object* v_keys_1978_, lean_object* v_vals_1979_, lean_object* v_heq_1980_, lean_object* v_i_1981_, lean_object* v_entries_1982_){
_start:
{
lean_object* v___x_1983_; 
v___x_1983_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_depth_1977_, v_keys_1978_, v_vals_1979_, v_i_1981_, v_entries_1982_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1984_, lean_object* v_depth_1985_, lean_object* v_keys_1986_, lean_object* v_vals_1987_, lean_object* v_heq_1988_, lean_object* v_i_1989_, lean_object* v_entries_1990_){
_start:
{
size_t v_depth_boxed_1991_; lean_object* v_res_1992_; 
v_depth_boxed_1991_ = lean_unbox_usize(v_depth_1985_);
lean_dec(v_depth_1985_);
v_res_1992_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(v_00_u03b2_1984_, v_depth_boxed_1991_, v_keys_1986_, v_vals_1987_, v_heq_1988_, v_i_1989_, v_entries_1990_);
lean_dec_ref(v_vals_1987_);
lean_dec_ref(v_keys_1986_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1993_, lean_object* v_x_1994_, lean_object* v_x_1995_, lean_object* v_x_1996_, lean_object* v_x_1997_){
_start:
{
lean_object* v___x_1998_; 
v___x_1998_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(v_x_1994_, v_x_1995_, v_x_1996_, v_x_1997_);
return v___x_1998_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
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
res = runtime_initialize_Lean_Meta_VirtualStructure(builtin);
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
lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
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
res = initialize_Lean_Meta_VirtualStructure(builtin);
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
