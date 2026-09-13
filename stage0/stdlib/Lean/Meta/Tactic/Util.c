// Lean compiler output
// Module: Lean.Meta.Tactic.Util
// Imports: public import Lean.Util.ForEachExprWhere public import Lean.Meta.PPGoal import Lean.Meta.AppBuilder
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdHashSet_erase(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_hasValue(lean_object*, uint8_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
extern lean_object* l_Lean_ForEachExprWhere_initCache;
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_FVarIdHashSet_isEmpty(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_mkLabeledSorry(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_MetavarContext_setMVarUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_kind(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "terminalTacticsAsSorry"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(232, 90, 215, 151, 242, 202, 226, 151)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 139, .m_capacity = 139, .m_length = 138, .m_data = "when enabled, terminal tactics such as `grind` and `omega` are replaced with `sorry`. Useful for debugging and fixing bootstrapping issues"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(69, 233, 55, 94, 186, 188, 252, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(137, 217, 134, 189, 91, 246, 107, 44)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_debug_terminalTacticsAsSorry;
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkTacticExMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Tactic `"};
static const lean_object* l_Lean_Meta_mkTacticExMsg___closed__0 = (const lean_object*)&l_Lean_Meta_mkTacticExMsg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkTacticExMsg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTacticExMsg___closed__1;
static const lean_string_object l_Lean_Meta_mkTacticExMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` failed: "};
static const lean_object* l_Lean_Meta_mkTacticExMsg___closed__2 = (const lean_object*)&l_Lean_Meta_mkTacticExMsg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkTacticExMsg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTacticExMsg___closed__3;
static const lean_string_object l_Lean_Meta_mkTacticExMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_Meta_mkTacticExMsg___closed__4 = (const lean_object*)&l_Lean_Meta_mkTacticExMsg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkTacticExMsg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTacticExMsg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkTacticExMsg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwTacticEx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` failed\n\n"};
static const lean_object* l_Lean_Meta_throwTacticEx___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwTacticEx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwTacticEx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwTacticEx___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwNestedTacticEx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` failed with a nested error:\n"};
static const lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwNestedTacticEx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__1;
static const lean_string_object l_Lean_Meta_throwNestedTacticEx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nested"};
static const lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_throwNestedTacticEx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 50, 115, 245, 92, 68, 45, 137)}};
static const lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_checkNotAssigned___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "The metavariable below has already been assigned"};
static const lean_object* l_Lean_MVarId_checkNotAssigned___closed__0 = (const lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__1;
static const lean_string_object l_Lean_MVarId_checkNotAssigned___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "This likely indicates an internal error in this tactic or a prior one"};
static const lean_object* l_Lean_MVarId_checkNotAssigned___closed__2 = (const lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_checkNotAssigned___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__2_value)}};
static const lean_object* l_Lean_MVarId_checkNotAssigned___closed__3 = (const lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__3_value;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__4;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__5;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__6;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__7;
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 80, 134, 96, 135, 241, 87, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(12, 105, 212, 82, 205, 98, 36, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(141, 108, 151, 68, 40, 185, 49, 39)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(69, 35, 20, 40, 241, 13, 114, 59)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(76, 161, 8, 73, 13, 24, 41, 207)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 240, 21, 38, 82, 97, 50, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(240, 251, 182, 143, 63, 208, 115, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(124, 226, 182, 237, 212, 141, 147, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 251, 116, 130, 175, 2, 54, 62)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 96, 175, 63, 15, 15, 160, 172)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1901113268) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(57, 118, 41, 237, 158, 247, 69, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(170, 149, 39, 205, 173, 64, 129, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 101, 131, 162, 224, 178, 204, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(23, 46, 117, 252, 169, 255, 192, 57)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_admit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "admit"};
static const lean_object* l_Lean_MVarId_admit___closed__0 = (const lean_object*)&l_Lean_MVarId_admit___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_admit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_admit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 138, 207, 107, 141, 184, 85, 68)}};
static const lean_object* l_Lean_MVarId_admit___closed__1 = (const lean_object*)&l_Lean_MVarId_admit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isFVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MVarId_getNondepPropHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_getNondepPropHyps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_getNondepPropHyps___closed__0 = (const lean_object*)&l_Lean_MVarId_getNondepPropHyps___closed__0_value;
static const lean_closure_object l_Lean_MVarId_getNondepPropHyps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_getNondepPropHyps___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_getNondepPropHyps___closed__1 = (const lean_object*)&l_Lean_MVarId_getNondepPropHyps___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_getNondepPropHyps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_getNondepPropHyps___closed__2;
static lean_once_cell_t l_Lean_MVarId_getNondepPropHyps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_getNondepPropHyps___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19_spec__22(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_saturate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_saturate___closed__0 = (const lean_object*)&l_Lean_Meta_saturate___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_saturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_saturate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_inferInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "`infer_instance` tactic failed to assign instance"};
static const lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_inferInstance___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_inferInstance___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_inferInstance___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_inferInstance___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_inferInstance___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_inferInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_inferInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "infer_instance"};
static const lean_object* l_Lean_MVarId_inferInstance___closed__0 = (const lean_object*)&l_Lean_MVarId_inferInstance___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_inferInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_inferInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 181, 58, 140, 126, 222, 16, 71)}};
static const lean_object* l_Lean_MVarId_inferInstance___closed__1 = (const lean_object*)&l_Lean_MVarId_inferInstance___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_isSubsingleton___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l_Lean_MVarId_isSubsingleton___closed__0 = (const lean_object*)&l_Lean_MVarId_isSubsingleton___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_isSubsingleton___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_isSubsingleton___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_object* l_Lean_MVarId_isSubsingleton___closed__1 = (const lean_object*)&l_Lean_MVarId_isSubsingleton___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "skipAssignedInstances"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 172, 231, 36, 182, 217, 37, 75)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 113, .m_capacity = 113, .m_length = 112, .m_data = "in the `rw` and `simp` tactics, if an instance implicit argument is assigned, do not try to synthesize instance."};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 82, 89, 96, 183, 68, 254, 125)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(199, 5, 107, 131, 111, 226, 218, 126)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_tactic_skipAssignedInstances;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
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
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag(lean_object* v_mvarId_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_MVarId_getDecl(v_mvarId_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v_userName_70_; lean_object* v___x_72_; 
v_userName_70_ = lean_ctor_get(v_a_66_, 0);
lean_inc(v_userName_70_);
lean_dec(v_a_66_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v_userName_70_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_userName_70_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
else
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_a_75_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_65_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_65_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag___boxed(lean_object* v_mvarId_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_MVarId_getTag(v_mvarId_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_);
lean_dec(v_a_87_);
lean_dec_ref(v_a_86_);
lean_dec(v_a_85_);
lean_dec_ref(v_a_84_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg(lean_object* v_mvarId_90_, lean_object* v_tag_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_mctx_95_; lean_object* v_cache_96_; lean_object* v_zetaDeltaFVarIds_97_; lean_object* v_postponed_98_; lean_object* v_diag_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_110_; 
v___x_94_ = lean_st_ref_take(v_a_92_);
v_mctx_95_ = lean_ctor_get(v___x_94_, 0);
v_cache_96_ = lean_ctor_get(v___x_94_, 1);
v_zetaDeltaFVarIds_97_ = lean_ctor_get(v___x_94_, 2);
v_postponed_98_ = lean_ctor_get(v___x_94_, 3);
v_diag_99_ = lean_ctor_get(v___x_94_, 4);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_110_ == 0)
{
v___x_101_ = v___x_94_;
v_isShared_102_ = v_isSharedCheck_110_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_diag_99_);
lean_inc(v_postponed_98_);
lean_inc(v_zetaDeltaFVarIds_97_);
lean_inc(v_cache_96_);
lean_inc(v_mctx_95_);
lean_dec(v___x_94_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_110_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_103_ = lean_box(0);
v___x_104_ = l_Lean_MetavarContext_setMVarUserName(v_mctx_95_, v_mvarId_90_, v_tag_91_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_cache_96_);
lean_ctor_set(v_reuseFailAlloc_109_, 2, v_zetaDeltaFVarIds_97_);
lean_ctor_set(v_reuseFailAlloc_109_, 3, v_postponed_98_);
lean_ctor_set(v_reuseFailAlloc_109_, 4, v_diag_99_);
v___x_106_ = v_reuseFailAlloc_109_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_st_ref_put(v_a_92_, v___x_106_);
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_103_);
return v___x_108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg___boxed(lean_object* v_mvarId_111_, lean_object* v_tag_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_MVarId_setTag___redArg(v_mvarId_111_, v_tag_112_, v_a_113_);
lean_dec(v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag(lean_object* v_mvarId_116_, lean_object* v_tag_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_MVarId_setTag___redArg(v_mvarId_116_, v_tag_117_, v_a_119_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___boxed(lean_object* v_mvarId_124_, lean_object* v_tag_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_MVarId_setTag(v_mvarId_124_, v_tag_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0(lean_object* v_suffix_132_, lean_object* v_x_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = l_Lean_Name_eraseMacroScopes(v_suffix_132_);
v___x_135_ = l_Lean_Name_append(v_x_133_, v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0___boxed(lean_object* v_suffix_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Meta_appendTag___lam__0(v_suffix_136_, v_x_137_);
lean_dec(v_suffix_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag(lean_object* v_tag_139_, lean_object* v_suffix_140_){
_start:
{
uint8_t v___x_141_; 
v___x_141_ = l_Lean_Name_hasMacroScopes(v_tag_139_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Meta_appendTag___lam__0(v_suffix_140_, v_tag_139_);
return v___x_142_;
}
else
{
lean_object* v_view_143_; lean_object* v_name_144_; lean_object* v_imported_145_; lean_object* v_ctx_146_; lean_object* v_scopes_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_156_; 
v_view_143_ = l_Lean_extractMacroScopes(v_tag_139_);
v_name_144_ = lean_ctor_get(v_view_143_, 0);
v_imported_145_ = lean_ctor_get(v_view_143_, 1);
v_ctx_146_ = lean_ctor_get(v_view_143_, 2);
v_scopes_147_ = lean_ctor_get(v_view_143_, 3);
v_isSharedCheck_156_ = !lean_is_exclusive(v_view_143_);
if (v_isSharedCheck_156_ == 0)
{
v___x_149_ = v_view_143_;
v_isShared_150_ = v_isSharedCheck_156_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_scopes_147_);
lean_inc(v_ctx_146_);
lean_inc(v_imported_145_);
lean_inc(v_name_144_);
lean_dec(v_view_143_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_156_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = l_Lean_Meta_appendTag___lam__0(v_suffix_140_, v_name_144_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_imported_145_);
lean_ctor_set(v_reuseFailAlloc_155_, 2, v_ctx_146_);
lean_ctor_set(v_reuseFailAlloc_155_, 3, v_scopes_147_);
v___x_153_ = v_reuseFailAlloc_155_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_MacroScopesView_review(v___x_153_);
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___boxed(lean_object* v_tag_157_, lean_object* v_suffix_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Meta_appendTag(v_tag_157_, v_suffix_158_);
lean_dec(v_suffix_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix(lean_object* v_mvarId_160_, lean_object* v_suffix_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v___x_167_; 
lean_inc(v_mvarId_160_);
v___x_167_ = l_Lean_MVarId_getTag(v_mvarId_160_, v_a_162_, v_a_163_, v_a_164_, v_a_165_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v___x_169_ = l_Lean_Meta_appendTag(v_a_168_, v_suffix_161_);
v___x_170_ = l_Lean_MVarId_setTag___redArg(v_mvarId_160_, v___x_169_, v_a_163_);
return v___x_170_;
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
lean_dec(v_mvarId_160_);
v_a_171_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_167_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_167_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix___boxed(lean_object* v_mvarId_179_, lean_object* v_suffix_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Meta_appendTagSuffix(v_mvarId_179_, v_suffix_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_suffix_180_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object* v_type_187_, lean_object* v_tag_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v_type_187_);
v___x_195_ = 2;
v___x_196_ = l_Lean_Meta_mkFreshExprMVar(v___x_194_, v___x_195_, v_tag_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar___boxed(lean_object* v_type_197_, lean_object* v_tag_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_197_, v_tag_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
lean_dec(v_a_202_);
lean_dec_ref(v_a_201_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
return v_res_204_;
}
}
static lean_object* _init_l_Lean_Meta_mkTacticExMsg___closed__1(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l_Lean_Meta_mkTacticExMsg___closed__0));
v___x_207_ = l_Lean_stringToMessageData(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_Meta_mkTacticExMsg___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_Meta_mkTacticExMsg___closed__2));
v___x_210_ = l_Lean_stringToMessageData(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Meta_mkTacticExMsg___closed__5(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l_Lean_Meta_mkTacticExMsg___closed__4));
v___x_213_ = l_Lean_stringToMessageData(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTacticExMsg(lean_object* v_tacticName_214_, lean_object* v_mvarId_215_, lean_object* v_msg_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_217_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__1, &l_Lean_Meta_mkTacticExMsg___closed__1_once, _init_l_Lean_Meta_mkTacticExMsg___closed__1);
v___x_218_ = l_Lean_MessageData_ofName(v_tacticName_214_);
v___x_219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__3, &l_Lean_Meta_mkTacticExMsg___closed__3_once, _init_l_Lean_Meta_mkTacticExMsg___closed__3);
v___x_221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v_msg_216_);
v___x_223_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__5, &l_Lean_Meta_mkTacticExMsg___closed__5_once, _init_l_Lean_Meta_mkTacticExMsg___closed__5);
v___x_224_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v_mvarId_215_);
v___x_226_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(lean_object* v_msgData_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v___x_233_; lean_object* v_env_234_; lean_object* v___x_235_; lean_object* v_toCold_236_; lean_object* v_mctx_237_; lean_object* v_lctx_238_; lean_object* v_options_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_233_ = lean_st_ref_get(v___y_231_);
v_env_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc_ref(v_env_234_);
lean_dec(v___x_233_);
v___x_235_ = lean_st_ref_get(v___y_229_);
v_toCold_236_ = lean_ctor_get(v___y_230_, 0);
v_mctx_237_ = lean_ctor_get(v___x_235_, 0);
lean_inc_ref(v_mctx_237_);
lean_dec(v___x_235_);
v_lctx_238_ = lean_ctor_get(v___y_228_, 2);
v_options_239_ = lean_ctor_get(v_toCold_236_, 2);
lean_inc_ref(v_options_239_);
lean_inc_ref(v_lctx_238_);
v___x_240_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_240_, 0, v_env_234_);
lean_ctor_set(v___x_240_, 1, v_mctx_237_);
lean_ctor_set(v___x_240_, 2, v_lctx_238_);
lean_ctor_set(v___x_240_, 3, v_options_239_);
v___x_241_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v_msgData_227_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0___boxed(lean_object* v_msgData_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(v_msgData_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(lean_object* v_msg_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_ref_256_; lean_object* v___x_257_; lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_266_; 
v_ref_256_ = lean_ctor_get(v___y_253_, 2);
v___x_257_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(v_msg_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_266_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_266_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_266_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_264_; 
lean_inc(v_ref_256_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v_ref_256_);
lean_ctor_set(v___x_262_, 1, v_a_258_);
if (v_isShared_261_ == 0)
{
lean_ctor_set_tag(v___x_260_, 1);
lean_ctor_set(v___x_260_, 0, v___x_262_);
v___x_264_ = v___x_260_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg___boxed(lean_object* v_msg_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
return v_res_273_;
}
}
static lean_object* _init_l_Lean_Meta_throwTacticEx___redArg___closed__1(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l_Lean_Meta_throwTacticEx___redArg___closed__0));
v___x_276_ = l_Lean_stringToMessageData(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object* v_tacticName_277_, lean_object* v_mvarId_278_, lean_object* v_msg_x3f_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
if (lean_obj_tag(v_msg_x3f_279_) == 0)
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_285_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__1, &l_Lean_Meta_mkTacticExMsg___closed__1_once, _init_l_Lean_Meta_mkTacticExMsg___closed__1);
v___x_286_ = l_Lean_MessageData_ofName(v_tacticName_277_);
v___x_287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lean_obj_once(&l_Lean_Meta_throwTacticEx___redArg___closed__1, &l_Lean_Meta_throwTacticEx___redArg___closed__1_once, _init_l_Lean_Meta_throwTacticEx___redArg___closed__1);
v___x_289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v_mvarId_278_);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v___x_291_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
return v___x_292_;
}
else
{
lean_object* v_val_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_val_293_ = lean_ctor_get(v_msg_x3f_279_, 0);
lean_inc(v_val_293_);
lean_dec_ref_known(v_msg_x3f_279_, 1);
v___x_294_ = l_Lean_Meta_mkTacticExMsg(v_tacticName_277_, v_mvarId_278_, v_val_293_);
v___x_295_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v___x_294_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg___boxed(lean_object* v_tacticName_296_, lean_object* v_mvarId_297_, lean_object* v_msg_x3f_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_296_, v_mvarId_297_, v_msg_x3f_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx(lean_object* v_00_u03b1_305_, lean_object* v_tacticName_306_, lean_object* v_mvarId_307_, lean_object* v_msg_x3f_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_306_, v_mvarId_307_, v_msg_x3f_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___boxed(lean_object* v_00_u03b1_315_, lean_object* v_tacticName_316_, lean_object* v_mvarId_317_, lean_object* v_msg_x3f_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_throwTacticEx(v_00_u03b1_315_, v_tacticName_316_, v_mvarId_317_, v_msg_x3f_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0(lean_object* v_00_u03b1_325_, lean_object* v_msg_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___boxed(lean_object* v_00_u03b1_333_, lean_object* v_msg_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0(v_00_u03b1_333_, v_msg_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_340_;
}
}
static lean_object* _init_l_Lean_Meta_throwNestedTacticEx___redArg___closed__1(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = ((lean_object*)(l_Lean_Meta_throwNestedTacticEx___redArg___closed__0));
v___x_343_ = l_Lean_stringToMessageData(v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object* v_tacticName_347_, lean_object* v_ex_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_nestedMsg_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_msg_360_; lean_object* v_kind_361_; uint8_t v___x_362_; 
v_nestedMsg_354_ = l_Lean_Exception_toMessageData(v_ex_348_);
v___x_355_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__1, &l_Lean_Meta_mkTacticExMsg___closed__1_once, _init_l_Lean_Meta_mkTacticExMsg___closed__1);
v___x_356_ = l_Lean_MessageData_ofName(v_tacticName_347_);
v___x_357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_355_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
v___x_358_ = lean_obj_once(&l_Lean_Meta_throwNestedTacticEx___redArg___closed__1, &l_Lean_Meta_throwNestedTacticEx___redArg___closed__1_once, _init_l_Lean_Meta_throwNestedTacticEx___redArg___closed__1);
v___x_359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_357_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
lean_inc_ref(v_nestedMsg_354_);
v_msg_360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_360_, 0, v___x_359_);
lean_ctor_set(v_msg_360_, 1, v_nestedMsg_354_);
v_kind_361_ = l_Lean_MessageData_kind(v_nestedMsg_354_);
lean_dec_ref(v_nestedMsg_354_);
v___x_362_ = l_Lean_Name_isAnonymous(v_kind_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_363_ = ((lean_object*)(l_Lean_Meta_throwNestedTacticEx___redArg___closed__3));
v___x_364_ = l_Lean_Name_append(v___x_363_, v_kind_361_);
v___x_365_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v_msg_360_);
v___x_366_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v___x_365_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
return v___x_366_;
}
else
{
lean_object* v___x_367_; 
lean_dec(v_kind_361_);
v___x_367_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_360_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___boxed(lean_object* v_tacticName_368_, lean_object* v_ex_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_Meta_throwNestedTacticEx___redArg(v_tacticName_368_, v_ex_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
lean_dec(v_a_371_);
lean_dec_ref(v_a_370_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx(lean_object* v_00_u03b1_376_, lean_object* v_tacticName_377_, lean_object* v_ex_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lean_Meta_throwNestedTacticEx___redArg(v_tacticName_377_, v_ex_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___boxed(lean_object* v_00_u03b1_385_, lean_object* v_tacticName_386_, lean_object* v_ex_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Meta_throwNestedTacticEx(v_00_u03b1_385_, v_tacticName_386_, v_ex_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
return v_res_393_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_394_, lean_object* v_i_395_, lean_object* v_k_396_){
_start:
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_array_get_size(v_keys_394_);
v___x_398_ = lean_nat_dec_lt(v_i_395_, v___x_397_);
if (v___x_398_ == 0)
{
lean_dec(v_i_395_);
return v___x_398_;
}
else
{
lean_object* v_k_x27_399_; uint8_t v___x_400_; 
v_k_x27_399_ = lean_array_fget_borrowed(v_keys_394_, v_i_395_);
v___x_400_ = l_Lean_instBEqMVarId_beq(v_k_396_, v_k_x27_399_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_unsigned_to_nat(1u);
v___x_402_ = lean_nat_add(v_i_395_, v___x_401_);
lean_dec(v_i_395_);
v_i_395_ = v___x_402_;
goto _start;
}
else
{
lean_dec(v_i_395_);
return v___x_398_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_404_, lean_object* v_i_405_, lean_object* v_k_406_){
_start:
{
uint8_t v_res_407_; lean_object* v_r_408_; 
v_res_407_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_404_, v_i_405_, v_k_406_);
lean_dec(v_k_406_);
lean_dec_ref(v_keys_404_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(lean_object* v_x_409_, size_t v_x_410_, lean_object* v_x_411_){
_start:
{
if (lean_obj_tag(v_x_409_) == 0)
{
lean_object* v_es_412_; lean_object* v___x_413_; size_t v___x_414_; size_t v___x_415_; lean_object* v_j_416_; lean_object* v___x_417_; 
v_es_412_ = lean_ctor_get(v_x_409_, 0);
v___x_413_ = lean_box(2);
v___x_414_ = ((size_t)31ULL);
v___x_415_ = lean_usize_land(v_x_410_, v___x_414_);
v_j_416_ = lean_usize_to_nat(v___x_415_);
v___x_417_ = lean_array_get_borrowed(v___x_413_, v_es_412_, v_j_416_);
lean_dec(v_j_416_);
switch(lean_obj_tag(v___x_417_))
{
case 0:
{
lean_object* v_key_418_; uint8_t v___x_419_; 
v_key_418_ = lean_ctor_get(v___x_417_, 0);
v___x_419_ = l_Lean_instBEqMVarId_beq(v_x_411_, v_key_418_);
return v___x_419_;
}
case 1:
{
lean_object* v_node_420_; size_t v___x_421_; size_t v___x_422_; 
v_node_420_ = lean_ctor_get(v___x_417_, 0);
v___x_421_ = ((size_t)5ULL);
v___x_422_ = lean_usize_shift_right(v_x_410_, v___x_421_);
v_x_409_ = v_node_420_;
v_x_410_ = v___x_422_;
goto _start;
}
default: 
{
uint8_t v___x_424_; 
v___x_424_ = 0;
return v___x_424_;
}
}
}
else
{
lean_object* v_ks_425_; lean_object* v___x_426_; uint8_t v___x_427_; 
v_ks_425_ = lean_ctor_get(v_x_409_, 0);
v___x_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_425_, v___x_426_, v_x_411_);
return v___x_427_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_428_, lean_object* v_x_429_, lean_object* v_x_430_){
_start:
{
size_t v_x_546__boxed_431_; uint8_t v_res_432_; lean_object* v_r_433_; 
v_x_546__boxed_431_ = lean_unbox_usize(v_x_429_);
lean_dec(v_x_429_);
v_res_432_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(v_x_428_, v_x_546__boxed_431_, v_x_430_);
lean_dec(v_x_430_);
lean_dec_ref(v_x_428_);
v_r_433_ = lean_box(v_res_432_);
return v_r_433_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(lean_object* v_x_434_, lean_object* v_x_435_){
_start:
{
uint64_t v___x_436_; size_t v___x_437_; uint8_t v___x_438_; 
v___x_436_ = l_Lean_instHashableMVarId_hash(v_x_435_);
v___x_437_ = lean_uint64_to_usize(v___x_436_);
v___x_438_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(v_x_434_, v___x_437_, v_x_435_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg___boxed(lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
uint8_t v_res_441_; lean_object* v_r_442_; 
v_res_441_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(v_x_439_, v_x_440_);
lean_dec(v_x_440_);
lean_dec_ref(v_x_439_);
v_r_442_ = lean_box(v_res_441_);
return v_r_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(lean_object* v_mvarId_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; lean_object* v_mctx_447_; lean_object* v_eAssignment_448_; uint8_t v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_446_ = lean_st_ref_get(v___y_444_);
v_mctx_447_ = lean_ctor_get(v___x_446_, 0);
lean_inc_ref(v_mctx_447_);
lean_dec(v___x_446_);
v_eAssignment_448_ = lean_ctor_get(v_mctx_447_, 8);
lean_inc_ref(v_eAssignment_448_);
lean_dec_ref(v_mctx_447_);
v___x_449_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(v_eAssignment_448_, v_mvarId_443_);
lean_dec_ref(v_eAssignment_448_);
v___x_450_ = lean_box(v___x_449_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg___boxed(lean_object* v_mvarId_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(v_mvarId_452_, v___y_453_);
lean_dec(v___y_453_);
lean_dec(v_mvarId_452_);
return v_res_455_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__1(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = ((lean_object*)(l_Lean_MVarId_checkNotAssigned___closed__0));
v___x_458_ = l_Lean_stringToMessageData(v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__4(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(l_Lean_MVarId_checkNotAssigned___closed__3));
v___x_463_ = l_Lean_MessageData_ofFormat(v___x_462_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__5(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__4, &l_Lean_MVarId_checkNotAssigned___closed__4_once, _init_l_Lean_MVarId_checkNotAssigned___closed__4);
v___x_465_ = l_Lean_MessageData_note(v___x_464_);
return v___x_465_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__6(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_466_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__5, &l_Lean_MVarId_checkNotAssigned___closed__5_once, _init_l_Lean_MVarId_checkNotAssigned___closed__5);
v___x_467_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__1, &l_Lean_MVarId_checkNotAssigned___closed__1_once, _init_l_Lean_MVarId_checkNotAssigned___closed__1);
v___x_468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
return v___x_468_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__7(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__6, &l_Lean_MVarId_checkNotAssigned___closed__6_once, _init_l_Lean_MVarId_checkNotAssigned___closed__6);
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned(lean_object* v_mvarId_471_, lean_object* v_tacticName_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v___x_478_; lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_490_; 
v___x_478_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(v_mvarId_471_, v_a_474_);
v_a_479_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_490_ == 0)
{
v___x_481_ = v___x_478_;
v_isShared_482_ = v_isSharedCheck_490_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_478_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_490_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
uint8_t v___x_483_; 
v___x_483_ = lean_unbox(v_a_479_);
lean_dec(v_a_479_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_486_; 
lean_dec(v_tacticName_472_);
lean_dec(v_mvarId_471_);
v___x_484_ = lean_box(0);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v___x_484_);
v___x_486_ = v___x_481_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_del_object(v___x_481_);
v___x_488_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__7, &l_Lean_MVarId_checkNotAssigned___closed__7_once, _init_l_Lean_MVarId_checkNotAssigned___closed__7);
v___x_489_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_472_, v_mvarId_471_, v___x_488_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned___boxed(lean_object* v_mvarId_491_, lean_object* v_tacticName_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_491_, v_tacticName_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0(lean_object* v_mvarId_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(v_mvarId_499_, v___y_501_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___boxed(lean_object* v_mvarId_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0(v_mvarId_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v_mvarId_506_);
return v_res_512_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0(lean_object* v_00_u03b2_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(v_x_514_, v_x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___boxed(lean_object* v_00_u03b2_517_, lean_object* v_x_518_, lean_object* v_x_519_){
_start:
{
uint8_t v_res_520_; lean_object* v_r_521_; 
v_res_520_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0(v_00_u03b2_517_, v_x_518_, v_x_519_);
lean_dec(v_x_519_);
lean_dec_ref(v_x_518_);
v_r_521_ = lean_box(v_res_520_);
return v_r_521_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_522_, lean_object* v_x_523_, size_t v_x_524_, lean_object* v_x_525_){
_start:
{
uint8_t v___x_526_; 
v___x_526_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(v_x_523_, v_x_524_, v_x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_527_, lean_object* v_x_528_, lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
size_t v_x_713__boxed_531_; uint8_t v_res_532_; lean_object* v_r_533_; 
v_x_713__boxed_531_ = lean_unbox_usize(v_x_529_);
lean_dec(v_x_529_);
v_res_532_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1(v_00_u03b2_527_, v_x_528_, v_x_713__boxed_531_, v_x_530_);
lean_dec(v_x_530_);
lean_dec_ref(v_x_528_);
v_r_533_ = lean_box(v_res_532_);
return v_r_533_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_534_, lean_object* v_keys_535_, lean_object* v_vals_536_, lean_object* v_heq_537_, lean_object* v_i_538_, lean_object* v_k_539_){
_start:
{
uint8_t v___x_540_; 
v___x_540_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_535_, v_i_538_, v_k_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_541_, lean_object* v_keys_542_, lean_object* v_vals_543_, lean_object* v_heq_544_, lean_object* v_i_545_, lean_object* v_k_546_){
_start:
{
uint8_t v_res_547_; lean_object* v_r_548_; 
v_res_547_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_541_, v_keys_542_, v_vals_543_, v_heq_544_, v_i_545_, v_k_546_);
lean_dec(v_k_546_);
lean_dec_ref(v_vals_543_);
lean_dec_ref(v_keys_542_);
v_r_548_ = lean_box(v_res_547_);
return v_r_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType(lean_object* v_mvarId_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l_Lean_MVarId_getDecl(v_mvarId_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_564_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_564_ == 0)
{
v___x_558_ = v___x_555_;
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_555_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_type_560_; lean_object* v___x_562_; 
v_type_560_ = lean_ctor_get(v_a_556_, 2);
lean_inc_ref(v_type_560_);
lean_dec(v_a_556_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v_type_560_);
v___x_562_ = v___x_558_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_type_560_);
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
v_a_565_ = lean_ctor_get(v___x_555_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_555_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_555_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_getType___boxed(lean_object* v_mvarId_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_MVarId_getType(v_mvarId_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(lean_object* v_e_580_, lean_object* v___y_581_){
_start:
{
uint8_t v___x_583_; 
v___x_583_ = l_Lean_Expr_hasMVar(v_e_580_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; 
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v_e_580_);
return v___x_584_;
}
else
{
lean_object* v___x_585_; lean_object* v_mctx_586_; lean_object* v___x_587_; lean_object* v_fst_588_; lean_object* v_snd_589_; lean_object* v___x_590_; lean_object* v_cache_591_; lean_object* v_zetaDeltaFVarIds_592_; lean_object* v_postponed_593_; lean_object* v_diag_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_603_; 
v___x_585_ = lean_st_ref_get(v___y_581_);
v_mctx_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc_ref(v_mctx_586_);
lean_dec(v___x_585_);
v___x_587_ = l_Lean_instantiateMVarsCore(v_mctx_586_, v_e_580_);
v_fst_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_fst_588_);
v_snd_589_ = lean_ctor_get(v___x_587_, 1);
lean_inc(v_snd_589_);
lean_dec_ref(v___x_587_);
v___x_590_ = lean_st_ref_take(v___y_581_);
v_cache_591_ = lean_ctor_get(v___x_590_, 1);
v_zetaDeltaFVarIds_592_ = lean_ctor_get(v___x_590_, 2);
v_postponed_593_ = lean_ctor_get(v___x_590_, 3);
v_diag_594_ = lean_ctor_get(v___x_590_, 4);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v___x_590_, 0);
lean_dec(v_unused_604_);
v___x_596_ = v___x_590_;
v_isShared_597_ = v_isSharedCheck_603_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_diag_594_);
lean_inc(v_postponed_593_);
lean_inc(v_zetaDeltaFVarIds_592_);
lean_inc(v_cache_591_);
lean_dec(v___x_590_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_603_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v_snd_589_);
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_snd_589_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_cache_591_);
lean_ctor_set(v_reuseFailAlloc_602_, 2, v_zetaDeltaFVarIds_592_);
lean_ctor_set(v_reuseFailAlloc_602_, 3, v_postponed_593_);
lean_ctor_set(v_reuseFailAlloc_602_, 4, v_diag_594_);
v___x_599_ = v_reuseFailAlloc_602_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_st_ref_put(v___y_581_, v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v_fst_588_);
return v___x_601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg___boxed(lean_object* v_e_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_e_605_, v___y_606_);
lean_dec(v___y_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0(lean_object* v_e_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_e_609_, v___y_611_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___boxed(lean_object* v_e_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0(v_e_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27(lean_object* v_mvarId_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_MVarId_getType(v_mvarId_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_631_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_a_630_);
lean_dec_ref_known(v___x_629_, 1);
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
lean_inc(v_a_625_);
lean_inc_ref(v_a_624_);
v___x_631_ = lean_whnf(v_a_630_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_633_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_a_632_, v_a_625_);
return v___x_633_;
}
else
{
return v___x_631_;
}
}
else
{
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27___boxed(lean_object* v_mvarId_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_MVarId_getType_x27(v_mvarId_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_);
lean_dec(v_a_638_);
lean_dec_ref(v_a_637_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_706_; uint8_t v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_706_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_));
v___x_707_ = 0;
v___x_708_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_));
v___x_709_ = l_Lean_registerTraceClass(v___x_706_, v___x_707_, v___x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2____boxed(lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_();
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(lean_object* v_mvarId_712_, lean_object* v_x_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_712_, v_x_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_719_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_719_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
v_a_728_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_719_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_719_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg___boxed(lean_object* v_mvarId_736_, lean_object* v_x_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_736_, v_x_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1(lean_object* v_00_u03b1_744_, lean_object* v_mvarId_745_, lean_object* v_x_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_745_, v_x_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___boxed(lean_object* v_00_u03b1_753_, lean_object* v_mvarId_754_, lean_object* v_x_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1(v_00_u03b1_753_, v_mvarId_754_, v_x_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
lean_object* v_ks_766_; lean_object* v_vs_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_791_; 
v_ks_766_ = lean_ctor_get(v_x_762_, 0);
v_vs_767_ = lean_ctor_get(v_x_762_, 1);
v_isSharedCheck_791_ = !lean_is_exclusive(v_x_762_);
if (v_isSharedCheck_791_ == 0)
{
v___x_769_ = v_x_762_;
v_isShared_770_ = v_isSharedCheck_791_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_vs_767_);
lean_inc(v_ks_766_);
lean_dec(v_x_762_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_791_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_771_ = lean_array_get_size(v_ks_766_);
v___x_772_ = lean_nat_dec_lt(v_x_763_, v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
lean_dec(v_x_763_);
v___x_773_ = lean_array_push(v_ks_766_, v_x_764_);
v___x_774_ = lean_array_push(v_vs_767_, v_x_765_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v___x_774_);
lean_ctor_set(v___x_769_, 0, v___x_773_);
v___x_776_ = v___x_769_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
else
{
lean_object* v_k_x27_778_; uint8_t v___x_779_; 
v_k_x27_778_ = lean_array_fget_borrowed(v_ks_766_, v_x_763_);
v___x_779_ = l_Lean_instBEqMVarId_beq(v_x_764_, v_k_x27_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_781_; 
if (v_isShared_770_ == 0)
{
v___x_781_ = v___x_769_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_ks_766_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_vs_767_);
v___x_781_ = v_reuseFailAlloc_785_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_unsigned_to_nat(1u);
v___x_783_ = lean_nat_add(v_x_763_, v___x_782_);
lean_dec(v_x_763_);
v_x_762_ = v___x_781_;
v_x_763_ = v___x_783_;
goto _start;
}
}
else
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_786_ = lean_array_fset(v_ks_766_, v_x_763_, v_x_764_);
v___x_787_ = lean_array_fset(v_vs_767_, v_x_763_, v_x_765_);
lean_dec(v_x_763_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v___x_787_);
lean_ctor_set(v___x_769_, 0, v___x_786_);
v___x_789_ = v___x_769_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_n_792_, lean_object* v_k_793_, lean_object* v_v_794_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_unsigned_to_nat(0u);
v___x_796_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_n_792_, v___x_795_, v_k_793_, v_v_794_);
return v___x_796_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(lean_object* v_x_798_, size_t v_x_799_, size_t v_x_800_, lean_object* v_x_801_, lean_object* v_x_802_){
_start:
{
if (lean_obj_tag(v_x_798_) == 0)
{
lean_object* v_es_803_; size_t v___x_804_; size_t v___x_805_; lean_object* v_j_806_; lean_object* v___x_807_; uint8_t v___x_808_; 
v_es_803_ = lean_ctor_get(v_x_798_, 0);
v___x_804_ = ((size_t)31ULL);
v___x_805_ = lean_usize_land(v_x_799_, v___x_804_);
v_j_806_ = lean_usize_to_nat(v___x_805_);
v___x_807_ = lean_array_get_size(v_es_803_);
v___x_808_ = lean_nat_dec_lt(v_j_806_, v___x_807_);
if (v___x_808_ == 0)
{
lean_dec(v_j_806_);
lean_dec(v_x_802_);
lean_dec(v_x_801_);
return v_x_798_;
}
else
{
lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_847_; 
lean_inc_ref(v_es_803_);
v_isSharedCheck_847_ = !lean_is_exclusive(v_x_798_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v_x_798_, 0);
lean_dec(v_unused_848_);
v___x_810_ = v_x_798_;
v_isShared_811_ = v_isSharedCheck_847_;
goto v_resetjp_809_;
}
else
{
lean_dec(v_x_798_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_847_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_v_812_; lean_object* v___x_813_; lean_object* v_xs_x27_814_; lean_object* v___y_816_; 
v_v_812_ = lean_array_fget(v_es_803_, v_j_806_);
v___x_813_ = lean_box(0);
v_xs_x27_814_ = lean_array_fset(v_es_803_, v_j_806_, v___x_813_);
switch(lean_obj_tag(v_v_812_))
{
case 0:
{
lean_object* v_key_821_; lean_object* v_val_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_832_; 
v_key_821_ = lean_ctor_get(v_v_812_, 0);
v_val_822_ = lean_ctor_get(v_v_812_, 1);
v_isSharedCheck_832_ = !lean_is_exclusive(v_v_812_);
if (v_isSharedCheck_832_ == 0)
{
v___x_824_ = v_v_812_;
v_isShared_825_ = v_isSharedCheck_832_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_val_822_);
lean_inc(v_key_821_);
lean_dec(v_v_812_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_832_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
uint8_t v___x_826_; 
v___x_826_ = l_Lean_instBEqMVarId_beq(v_x_801_, v_key_821_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; lean_object* v___x_828_; 
lean_del_object(v___x_824_);
v___x_827_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_821_, v_val_822_, v_x_801_, v_x_802_);
v___x_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___y_816_ = v___x_828_;
goto v___jp_815_;
}
else
{
lean_object* v___x_830_; 
lean_dec(v_val_822_);
lean_dec(v_key_821_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 1, v_x_802_);
lean_ctor_set(v___x_824_, 0, v_x_801_);
v___x_830_ = v___x_824_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_x_801_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_x_802_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
v___y_816_ = v___x_830_;
goto v___jp_815_;
}
}
}
}
case 1:
{
lean_object* v_node_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_845_; 
v_node_833_ = lean_ctor_get(v_v_812_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v_v_812_);
if (v_isSharedCheck_845_ == 0)
{
v___x_835_ = v_v_812_;
v_isShared_836_ = v_isSharedCheck_845_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_node_833_);
lean_dec(v_v_812_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_845_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
size_t v___x_837_; size_t v___x_838_; size_t v___x_839_; size_t v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_837_ = ((size_t)5ULL);
v___x_838_ = lean_usize_shift_right(v_x_799_, v___x_837_);
v___x_839_ = ((size_t)1ULL);
v___x_840_ = lean_usize_add(v_x_800_, v___x_839_);
v___x_841_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_node_833_, v___x_838_, v___x_840_, v_x_801_, v_x_802_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_841_);
v___x_843_ = v___x_835_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
v___y_816_ = v___x_843_;
goto v___jp_815_;
}
}
}
default: 
{
lean_object* v___x_846_; 
v___x_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_846_, 0, v_x_801_);
lean_ctor_set(v___x_846_, 1, v_x_802_);
v___y_816_ = v___x_846_;
goto v___jp_815_;
}
}
v___jp_815_:
{
lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_817_ = lean_array_fset(v_xs_x27_814_, v_j_806_, v___y_816_);
lean_dec(v_j_806_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_817_);
v___x_819_ = v___x_810_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
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
else
{
lean_object* v_ks_849_; lean_object* v_vs_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_868_; 
v_ks_849_ = lean_ctor_get(v_x_798_, 0);
v_vs_850_ = lean_ctor_get(v_x_798_, 1);
v_isSharedCheck_868_ = !lean_is_exclusive(v_x_798_);
if (v_isSharedCheck_868_ == 0)
{
v___x_852_ = v_x_798_;
v_isShared_853_ = v_isSharedCheck_868_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_vs_850_);
lean_inc(v_ks_849_);
lean_dec(v_x_798_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_868_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_ks_849_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_vs_850_);
v___x_855_ = v_reuseFailAlloc_867_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v_newNode_856_; size_t v___x_857_; uint8_t v___x_858_; 
v_newNode_856_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(v___x_855_, v_x_801_, v_x_802_);
v___x_857_ = ((size_t)7ULL);
v___x_858_ = lean_usize_dec_le(v___x_857_, v_x_800_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_859_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_856_);
v___x_860_ = lean_unsigned_to_nat(4u);
v___x_861_ = lean_nat_dec_lt(v___x_859_, v___x_860_);
lean_dec(v___x_859_);
if (v___x_861_ == 0)
{
lean_object* v_ks_862_; lean_object* v_vs_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_ks_862_ = lean_ctor_get(v_newNode_856_, 0);
lean_inc_ref(v_ks_862_);
v_vs_863_ = lean_ctor_get(v_newNode_856_, 1);
lean_inc_ref(v_vs_863_);
lean_dec_ref(v_newNode_856_);
v___x_864_ = lean_unsigned_to_nat(0u);
v___x_865_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_866_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(v_x_800_, v_ks_862_, v_vs_863_, v___x_864_, v___x_865_);
lean_dec_ref(v_vs_863_);
lean_dec_ref(v_ks_862_);
return v___x_866_;
}
else
{
return v_newNode_856_;
}
}
else
{
return v_newNode_856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(size_t v_depth_869_, lean_object* v_keys_870_, lean_object* v_vals_871_, lean_object* v_i_872_, lean_object* v_entries_873_){
_start:
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = lean_array_get_size(v_keys_870_);
v___x_875_ = lean_nat_dec_lt(v_i_872_, v___x_874_);
if (v___x_875_ == 0)
{
lean_dec(v_i_872_);
return v_entries_873_;
}
else
{
lean_object* v_k_876_; lean_object* v_v_877_; uint64_t v___x_878_; size_t v_h_879_; size_t v___x_880_; lean_object* v___x_881_; size_t v___x_882_; size_t v___x_883_; size_t v___x_884_; size_t v_h_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_k_876_ = lean_array_fget_borrowed(v_keys_870_, v_i_872_);
v_v_877_ = lean_array_fget_borrowed(v_vals_871_, v_i_872_);
v___x_878_ = l_Lean_instHashableMVarId_hash(v_k_876_);
v_h_879_ = lean_uint64_to_usize(v___x_878_);
v___x_880_ = ((size_t)5ULL);
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = ((size_t)1ULL);
v___x_883_ = lean_usize_sub(v_depth_869_, v___x_882_);
v___x_884_ = lean_usize_mul(v___x_880_, v___x_883_);
v_h_885_ = lean_usize_shift_right(v_h_879_, v___x_884_);
v___x_886_ = lean_nat_add(v_i_872_, v___x_881_);
lean_dec(v_i_872_);
lean_inc(v_v_877_);
lean_inc(v_k_876_);
v___x_887_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_entries_873_, v_h_885_, v_depth_869_, v_k_876_, v_v_877_);
v_i_872_ = v___x_886_;
v_entries_873_ = v___x_887_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_depth_889_, lean_object* v_keys_890_, lean_object* v_vals_891_, lean_object* v_i_892_, lean_object* v_entries_893_){
_start:
{
size_t v_depth_boxed_894_; lean_object* v_res_895_; 
v_depth_boxed_894_ = lean_unbox_usize(v_depth_889_);
lean_dec(v_depth_889_);
v_res_895_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_boxed_894_, v_keys_890_, v_vals_891_, v_i_892_, v_entries_893_);
lean_dec_ref(v_vals_891_);
lean_dec_ref(v_keys_890_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_896_, lean_object* v_x_897_, lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
size_t v_x_1018__boxed_901_; size_t v_x_1019__boxed_902_; lean_object* v_res_903_; 
v_x_1018__boxed_901_ = lean_unbox_usize(v_x_897_);
lean_dec(v_x_897_);
v_x_1019__boxed_902_ = lean_unbox_usize(v_x_898_);
lean_dec(v_x_898_);
v_res_903_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_x_896_, v_x_1018__boxed_901_, v_x_1019__boxed_902_, v_x_899_, v_x_900_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(lean_object* v_x_904_, lean_object* v_x_905_, lean_object* v_x_906_){
_start:
{
uint64_t v___x_907_; size_t v___x_908_; size_t v___x_909_; lean_object* v___x_910_; 
v___x_907_ = l_Lean_instHashableMVarId_hash(v_x_905_);
v___x_908_ = lean_uint64_to_usize(v___x_907_);
v___x_909_ = ((size_t)1ULL);
v___x_910_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_x_904_, v___x_908_, v___x_909_, v_x_905_, v_x_906_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(lean_object* v_mvarId_911_, lean_object* v_val_912_, lean_object* v___y_913_){
_start:
{
lean_object* v___x_915_; lean_object* v_mctx_916_; lean_object* v_cache_917_; lean_object* v_zetaDeltaFVarIds_918_; lean_object* v_postponed_919_; lean_object* v_diag_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_949_; 
v___x_915_ = lean_st_ref_take(v___y_913_);
v_mctx_916_ = lean_ctor_get(v___x_915_, 0);
v_cache_917_ = lean_ctor_get(v___x_915_, 1);
v_zetaDeltaFVarIds_918_ = lean_ctor_get(v___x_915_, 2);
v_postponed_919_ = lean_ctor_get(v___x_915_, 3);
v_diag_920_ = lean_ctor_get(v___x_915_, 4);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_949_ == 0)
{
v___x_922_ = v___x_915_;
v_isShared_923_ = v_isSharedCheck_949_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_diag_920_);
lean_inc(v_postponed_919_);
lean_inc(v_zetaDeltaFVarIds_918_);
lean_inc(v_cache_917_);
lean_inc(v_mctx_916_);
lean_dec(v___x_915_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_949_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v_depth_924_; lean_object* v_levelAssignDepth_925_; lean_object* v_lmvarCounter_926_; lean_object* v_mvarCounter_927_; lean_object* v_lDecls_928_; lean_object* v_decls_929_; lean_object* v_userNames_930_; lean_object* v_lAssignment_931_; lean_object* v_eAssignment_932_; lean_object* v_dAssignment_933_; lean_object* v_instanceTypedMVars_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_948_; 
v_depth_924_ = lean_ctor_get(v_mctx_916_, 0);
v_levelAssignDepth_925_ = lean_ctor_get(v_mctx_916_, 1);
v_lmvarCounter_926_ = lean_ctor_get(v_mctx_916_, 2);
v_mvarCounter_927_ = lean_ctor_get(v_mctx_916_, 3);
v_lDecls_928_ = lean_ctor_get(v_mctx_916_, 4);
v_decls_929_ = lean_ctor_get(v_mctx_916_, 5);
v_userNames_930_ = lean_ctor_get(v_mctx_916_, 6);
v_lAssignment_931_ = lean_ctor_get(v_mctx_916_, 7);
v_eAssignment_932_ = lean_ctor_get(v_mctx_916_, 8);
v_dAssignment_933_ = lean_ctor_get(v_mctx_916_, 9);
v_instanceTypedMVars_934_ = lean_ctor_get(v_mctx_916_, 10);
v_isSharedCheck_948_ = !lean_is_exclusive(v_mctx_916_);
if (v_isSharedCheck_948_ == 0)
{
v___x_936_ = v_mctx_916_;
v_isShared_937_ = v_isSharedCheck_948_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_instanceTypedMVars_934_);
lean_inc(v_dAssignment_933_);
lean_inc(v_eAssignment_932_);
lean_inc(v_lAssignment_931_);
lean_inc(v_userNames_930_);
lean_inc(v_decls_929_);
lean_inc(v_lDecls_928_);
lean_inc(v_mvarCounter_927_);
lean_inc(v_lmvarCounter_926_);
lean_inc(v_levelAssignDepth_925_);
lean_inc(v_depth_924_);
lean_dec(v_mctx_916_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_948_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_938_ = lean_box(0);
v___x_939_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(v_eAssignment_932_, v_mvarId_911_, v_val_912_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 8, v___x_939_);
v___x_941_ = v___x_936_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_depth_924_);
lean_ctor_set(v_reuseFailAlloc_947_, 1, v_levelAssignDepth_925_);
lean_ctor_set(v_reuseFailAlloc_947_, 2, v_lmvarCounter_926_);
lean_ctor_set(v_reuseFailAlloc_947_, 3, v_mvarCounter_927_);
lean_ctor_set(v_reuseFailAlloc_947_, 4, v_lDecls_928_);
lean_ctor_set(v_reuseFailAlloc_947_, 5, v_decls_929_);
lean_ctor_set(v_reuseFailAlloc_947_, 6, v_userNames_930_);
lean_ctor_set(v_reuseFailAlloc_947_, 7, v_lAssignment_931_);
lean_ctor_set(v_reuseFailAlloc_947_, 8, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_947_, 9, v_dAssignment_933_);
lean_ctor_set(v_reuseFailAlloc_947_, 10, v_instanceTypedMVars_934_);
v___x_941_ = v_reuseFailAlloc_947_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_943_; 
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 0, v___x_941_);
v___x_943_ = v___x_922_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_941_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_cache_917_);
lean_ctor_set(v_reuseFailAlloc_946_, 2, v_zetaDeltaFVarIds_918_);
lean_ctor_set(v_reuseFailAlloc_946_, 3, v_postponed_919_);
lean_ctor_set(v_reuseFailAlloc_946_, 4, v_diag_920_);
v___x_943_ = v_reuseFailAlloc_946_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_st_ref_put(v___y_913_, v___x_943_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_938_);
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg___boxed(lean_object* v_mvarId_950_, lean_object* v_val_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(v_mvarId_950_, v_val_951_, v___y_952_);
lean_dec(v___y_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0(lean_object* v_mvarId_955_, lean_object* v___x_956_, uint8_t v_synthetic_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v___x_963_; 
lean_inc(v_mvarId_955_);
v___x_963_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_955_, v___x_956_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v___x_964_; 
lean_dec_ref_known(v___x_963_, 1);
lean_inc(v_mvarId_955_);
v___x_964_ = l_Lean_MVarId_getType(v_mvarId_955_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; uint8_t v___x_966_; lean_object* v___x_967_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v___x_966_ = 1;
v___x_967_ = l_Lean_Meta_mkLabeledSorry(v_a_965_, v_synthetic_957_, v___x_966_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(v_mvarId_955_, v_a_968_, v___y_959_);
return v___x_969_;
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec(v_mvarId_955_);
v_a_970_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_967_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_967_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_mvarId_955_);
v_a_978_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_964_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_964_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
else
{
lean_dec(v_mvarId_955_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0___boxed(lean_object* v_mvarId_986_, lean_object* v___x_987_, lean_object* v_synthetic_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
uint8_t v_synthetic_boxed_994_; lean_object* v_res_995_; 
v_synthetic_boxed_994_ = lean_unbox(v_synthetic_988_);
v_res_995_ = l_Lean_MVarId_admit___lam__0(v_mvarId_986_, v___x_987_, v_synthetic_boxed_994_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit(lean_object* v_mvarId_999_, uint8_t v_synthetic_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; 
v___x_1006_ = ((lean_object*)(l_Lean_MVarId_admit___closed__1));
v___x_1007_ = lean_box(v_synthetic_1000_);
lean_inc(v_mvarId_999_);
v___f_1008_ = lean_alloc_closure((void*)(l_Lean_MVarId_admit___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1008_, 0, v_mvarId_999_);
lean_closure_set(v___f_1008_, 1, v___x_1006_);
lean_closure_set(v___f_1008_, 2, v___x_1007_);
v___x_1009_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_999_, v___f_1008_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___boxed(lean_object* v_mvarId_1010_, lean_object* v_synthetic_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
uint8_t v_synthetic_boxed_1017_; lean_object* v_res_1018_; 
v_synthetic_boxed_1017_ = lean_unbox(v_synthetic_1011_);
v_res_1018_ = l_Lean_MVarId_admit(v_mvarId_1010_, v_synthetic_boxed_1017_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_);
lean_dec(v_a_1015_);
lean_dec_ref(v_a_1014_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0(lean_object* v_mvarId_1019_, lean_object* v_val_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(v_mvarId_1019_, v_val_1020_, v___y_1022_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___boxed(lean_object* v_mvarId_1027_, lean_object* v_val_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0(v_mvarId_1027_, v_val_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0(lean_object* v_00_u03b2_1035_, lean_object* v_x_1036_, lean_object* v_x_1037_, lean_object* v_x_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(v_x_1036_, v_x_1037_, v_x_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1040_, lean_object* v_x_1041_, size_t v_x_1042_, size_t v_x_1043_, lean_object* v_x_1044_, lean_object* v_x_1045_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_x_1041_, v_x_1042_, v_x_1043_, v_x_1044_, v_x_1045_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1047_, lean_object* v_x_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_){
_start:
{
size_t v_x_1339__boxed_1053_; size_t v_x_1340__boxed_1054_; lean_object* v_res_1055_; 
v_x_1339__boxed_1053_ = lean_unbox_usize(v_x_1049_);
lean_dec(v_x_1049_);
v_x_1340__boxed_1054_ = lean_unbox_usize(v_x_1050_);
lean_dec(v_x_1050_);
v_res_1055_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2(v_00_u03b2_1047_, v_x_1048_, v_x_1339__boxed_1053_, v_x_1340__boxed_1054_, v_x_1051_, v_x_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_1056_, lean_object* v_n_1057_, lean_object* v_k_1058_, lean_object* v_v_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(v_n_1057_, v_k_1058_, v_v_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1061_, size_t v_depth_1062_, lean_object* v_keys_1063_, lean_object* v_vals_1064_, lean_object* v_heq_1065_, lean_object* v_i_1066_, lean_object* v_entries_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_1062_, v_keys_1063_, v_vals_1064_, v_i_1066_, v_entries_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1069_, lean_object* v_depth_1070_, lean_object* v_keys_1071_, lean_object* v_vals_1072_, lean_object* v_heq_1073_, lean_object* v_i_1074_, lean_object* v_entries_1075_){
_start:
{
size_t v_depth_boxed_1076_; lean_object* v_res_1077_; 
v_depth_boxed_1076_ = lean_unbox_usize(v_depth_1070_);
lean_dec(v_depth_1070_);
v_res_1077_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_1069_, v_depth_boxed_1076_, v_keys_1071_, v_vals_1072_, v_heq_1073_, v_i_1074_, v_entries_1075_);
lean_dec_ref(v_vals_1072_);
lean_dec_ref(v_keys_1071_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1078_, lean_object* v_x_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_x_1079_, v_x_1080_, v_x_1081_, v_x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType(lean_object* v_mvarId_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v___x_1090_; 
lean_inc(v_mvarId_1084_);
v___x_1090_ = l_Lean_MVarId_getType(v_mvarId_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = l_Lean_Expr_headBeta(v_a_1091_);
v___x_1093_ = l_Lean_MVarId_setType___redArg(v_mvarId_1084_, v___x_1092_, v_a_1086_);
return v___x_1093_;
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
lean_dec(v_mvarId_1084_);
v_a_1094_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1090_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1090_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType___boxed(lean_object* v_mvarId_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_MVarId_headBetaType(v_mvarId_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0(lean_object* v_e_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1116_ = lean_st_ref_take(v___y_1110_);
v___x_1117_ = lean_box(0);
v___x_1118_ = l_Lean_Expr_fvarId_x21(v_e_1109_);
v___x_1119_ = l_Lean_FVarIdHashSet_erase(v___x_1116_, v___x_1118_);
lean_dec(v___x_1118_);
v___x_1120_ = lean_st_ref_put(v___y_1110_, v___x_1119_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1117_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0___boxed(lean_object* v_e_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_MVarId_getNondepPropHyps___lam__0(v_e_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v_e_1122_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1(lean_object* v_____r_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_st_ref_get(v___y_1131_);
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1___boxed(lean_object* v_____r_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_MVarId_getNondepPropHyps___lam__1(v_____r_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg(lean_object* v_e_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v_visited_1151_; size_t v___x_1152_; size_t v___x_1153_; size_t v___x_1154_; lean_object* v___x_1155_; size_t v___x_1156_; uint8_t v___x_1157_; 
v___x_1150_ = lean_st_ref_get(v_a_1148_);
v_visited_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc_ref(v_visited_1151_);
lean_dec(v___x_1150_);
v___x_1152_ = lean_ptr_addr(v_e_1147_);
v___x_1153_ = ((size_t)8191ULL);
v___x_1154_ = lean_usize_mod(v___x_1152_, v___x_1153_);
v___x_1155_ = lean_array_uget(v_visited_1151_, v___x_1154_);
lean_dec_ref(v_visited_1151_);
v___x_1156_ = lean_ptr_addr(v___x_1155_);
lean_dec(v___x_1155_);
v___x_1157_ = lean_usize_dec_eq(v___x_1156_, v___x_1152_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; lean_object* v_visited_1159_; lean_object* v_checked_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1171_; 
v___x_1158_ = lean_st_ref_take(v_a_1148_);
v_visited_1159_ = lean_ctor_get(v___x_1158_, 0);
v_checked_1160_ = lean_ctor_get(v___x_1158_, 1);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1162_ = v___x_1158_;
v_isShared_1163_ = v_isSharedCheck_1171_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_checked_1160_);
lean_inc(v_visited_1159_);
lean_dec(v___x_1158_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1171_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1164_ = lean_array_uset(v_visited_1159_, v___x_1154_, v_e_1147_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1164_);
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_checked_1160_);
v___x_1166_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1167_ = lean_st_ref_put(v_a_1148_, v___x_1166_);
v___x_1168_ = lean_box(v___x_1157_);
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
return v___x_1169_;
}
}
}
else
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_dec_ref(v_e_1147_);
v___x_1172_ = lean_box(v___x_1157_);
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_e_1174_, lean_object* v_a_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg(v_e_1174_, v_a_1175_);
lean_dec(v_a_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg(lean_object* v_a_1178_, lean_object* v_x_1179_){
_start:
{
if (lean_obj_tag(v_x_1179_) == 0)
{
uint8_t v___x_1180_; 
v___x_1180_ = 0;
return v___x_1180_;
}
else
{
lean_object* v_key_1181_; lean_object* v_tail_1182_; uint8_t v___x_1183_; 
v_key_1181_ = lean_ctor_get(v_x_1179_, 0);
v_tail_1182_ = lean_ctor_get(v_x_1179_, 2);
v___x_1183_ = lean_expr_eqv(v_key_1181_, v_a_1178_);
if (v___x_1183_ == 0)
{
v_x_1179_ = v_tail_1182_;
goto _start;
}
else
{
return v___x_1183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg___boxed(lean_object* v_a_1185_, lean_object* v_x_1186_){
_start:
{
uint8_t v_res_1187_; lean_object* v_r_1188_; 
v_res_1187_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg(v_a_1185_, v_x_1186_);
lean_dec(v_x_1186_);
lean_dec_ref(v_a_1185_);
v_r_1188_ = lean_box(v_res_1187_);
return v_r_1188_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_m_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_buckets_1191_; lean_object* v___x_1192_; uint64_t v___x_1193_; uint64_t v___x_1194_; uint64_t v___x_1195_; uint64_t v_fold_1196_; uint64_t v___x_1197_; uint64_t v___x_1198_; uint64_t v___x_1199_; size_t v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; size_t v___x_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v_buckets_1191_ = lean_ctor_get(v_m_1189_, 1);
v___x_1192_ = lean_array_get_size(v_buckets_1191_);
v___x_1193_ = l_Lean_Expr_hash(v_a_1190_);
v___x_1194_ = 32ULL;
v___x_1195_ = lean_uint64_shift_right(v___x_1193_, v___x_1194_);
v_fold_1196_ = lean_uint64_xor(v___x_1193_, v___x_1195_);
v___x_1197_ = 16ULL;
v___x_1198_ = lean_uint64_shift_right(v_fold_1196_, v___x_1197_);
v___x_1199_ = lean_uint64_xor(v_fold_1196_, v___x_1198_);
v___x_1200_ = lean_uint64_to_usize(v___x_1199_);
v___x_1201_ = lean_usize_of_nat(v___x_1192_);
v___x_1202_ = ((size_t)1ULL);
v___x_1203_ = lean_usize_sub(v___x_1201_, v___x_1202_);
v___x_1204_ = lean_usize_land(v___x_1200_, v___x_1203_);
v___x_1205_ = lean_array_uget_borrowed(v_buckets_1191_, v___x_1204_);
v___x_1206_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg(v_a_1190_, v___x_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_m_1207_, lean_object* v_a_1208_){
_start:
{
uint8_t v_res_1209_; lean_object* v_r_1210_; 
v_res_1209_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg(v_m_1207_, v_a_1208_);
lean_dec_ref(v_a_1208_);
lean_dec_ref(v_m_1207_);
v_r_1210_ = lean_box(v_res_1209_);
return v_r_1210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19_spec__22___redArg(lean_object* v_x_1211_, lean_object* v_x_1212_){
_start:
{
if (lean_obj_tag(v_x_1212_) == 0)
{
return v_x_1211_;
}
else
{
lean_object* v_key_1213_; lean_object* v_value_1214_; lean_object* v_tail_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1238_; 
v_key_1213_ = lean_ctor_get(v_x_1212_, 0);
v_value_1214_ = lean_ctor_get(v_x_1212_, 1);
v_tail_1215_ = lean_ctor_get(v_x_1212_, 2);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1217_ = v_x_1212_;
v_isShared_1218_ = v_isSharedCheck_1238_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_tail_1215_);
lean_inc(v_value_1214_);
lean_inc(v_key_1213_);
lean_dec(v_x_1212_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1238_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; uint64_t v___x_1220_; uint64_t v___x_1221_; uint64_t v___x_1222_; uint64_t v_fold_1223_; uint64_t v___x_1224_; uint64_t v___x_1225_; uint64_t v___x_1226_; size_t v___x_1227_; size_t v___x_1228_; size_t v___x_1229_; size_t v___x_1230_; size_t v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1234_; 
v___x_1219_ = lean_array_get_size(v_x_1211_);
v___x_1220_ = l_Lean_Expr_hash(v_key_1213_);
v___x_1221_ = 32ULL;
v___x_1222_ = lean_uint64_shift_right(v___x_1220_, v___x_1221_);
v_fold_1223_ = lean_uint64_xor(v___x_1220_, v___x_1222_);
v___x_1224_ = 16ULL;
v___x_1225_ = lean_uint64_shift_right(v_fold_1223_, v___x_1224_);
v___x_1226_ = lean_uint64_xor(v_fold_1223_, v___x_1225_);
v___x_1227_ = lean_uint64_to_usize(v___x_1226_);
v___x_1228_ = lean_usize_of_nat(v___x_1219_);
v___x_1229_ = ((size_t)1ULL);
v___x_1230_ = lean_usize_sub(v___x_1228_, v___x_1229_);
v___x_1231_ = lean_usize_land(v___x_1227_, v___x_1230_);
v___x_1232_ = lean_array_uget_borrowed(v_x_1211_, v___x_1231_);
lean_inc(v___x_1232_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 2, v___x_1232_);
v___x_1234_ = v___x_1217_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_key_1213_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_value_1214_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_array_uset(v_x_1211_, v___x_1231_, v___x_1234_);
v_x_1211_ = v___x_1235_;
v_x_1212_ = v_tail_1215_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19___redArg(lean_object* v_i_1239_, lean_object* v_source_1240_, lean_object* v_target_1241_){
_start:
{
lean_object* v___x_1242_; uint8_t v___x_1243_; 
v___x_1242_ = lean_array_get_size(v_source_1240_);
v___x_1243_ = lean_nat_dec_lt(v_i_1239_, v___x_1242_);
if (v___x_1243_ == 0)
{
lean_dec_ref(v_source_1240_);
lean_dec(v_i_1239_);
return v_target_1241_;
}
else
{
lean_object* v_es_1244_; lean_object* v___x_1245_; lean_object* v_source_1246_; lean_object* v_target_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_es_1244_ = lean_array_fget(v_source_1240_, v_i_1239_);
v___x_1245_ = lean_box(0);
v_source_1246_ = lean_array_fset(v_source_1240_, v_i_1239_, v___x_1245_);
v_target_1247_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19_spec__22___redArg(v_target_1241_, v_es_1244_);
v___x_1248_ = lean_unsigned_to_nat(1u);
v___x_1249_ = lean_nat_add(v_i_1239_, v___x_1248_);
lean_dec(v_i_1239_);
v_i_1239_ = v___x_1249_;
v_source_1240_ = v_source_1246_;
v_target_1241_ = v_target_1247_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(lean_object* v_data_1251_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v_nbuckets_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1252_ = lean_array_get_size(v_data_1251_);
v___x_1253_ = lean_unsigned_to_nat(2u);
v_nbuckets_1254_ = lean_nat_mul(v___x_1252_, v___x_1253_);
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1256_ = lean_box(0);
v___x_1257_ = lean_mk_array(v_nbuckets_1254_, v___x_1256_);
v___x_1258_ = lean_array_propagate_mark(v_data_1251_, v___x_1257_);
v___x_1259_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19___redArg(v___x_1255_, v_data_1251_, v___x_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_m_1260_, lean_object* v_a_1261_, lean_object* v_b_1262_){
_start:
{
lean_object* v_size_1263_; lean_object* v_buckets_1264_; lean_object* v___x_1265_; uint64_t v___x_1266_; uint64_t v___x_1267_; uint64_t v___x_1268_; uint64_t v_fold_1269_; uint64_t v___x_1270_; uint64_t v___x_1271_; uint64_t v___x_1272_; size_t v___x_1273_; size_t v___x_1274_; size_t v___x_1275_; size_t v___x_1276_; size_t v___x_1277_; lean_object* v_bkt_1278_; uint8_t v___x_1279_; 
v_size_1263_ = lean_ctor_get(v_m_1260_, 0);
v_buckets_1264_ = lean_ctor_get(v_m_1260_, 1);
v___x_1265_ = lean_array_get_size(v_buckets_1264_);
v___x_1266_ = l_Lean_Expr_hash(v_a_1261_);
v___x_1267_ = 32ULL;
v___x_1268_ = lean_uint64_shift_right(v___x_1266_, v___x_1267_);
v_fold_1269_ = lean_uint64_xor(v___x_1266_, v___x_1268_);
v___x_1270_ = 16ULL;
v___x_1271_ = lean_uint64_shift_right(v_fold_1269_, v___x_1270_);
v___x_1272_ = lean_uint64_xor(v_fold_1269_, v___x_1271_);
v___x_1273_ = lean_uint64_to_usize(v___x_1272_);
v___x_1274_ = lean_usize_of_nat(v___x_1265_);
v___x_1275_ = ((size_t)1ULL);
v___x_1276_ = lean_usize_sub(v___x_1274_, v___x_1275_);
v___x_1277_ = lean_usize_land(v___x_1273_, v___x_1276_);
v_bkt_1278_ = lean_array_uget_borrowed(v_buckets_1264_, v___x_1277_);
v___x_1279_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg(v_a_1261_, v_bkt_1278_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1300_; 
lean_inc_ref(v_buckets_1264_);
lean_inc(v_size_1263_);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_m_1260_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; lean_object* v_unused_1302_; 
v_unused_1301_ = lean_ctor_get(v_m_1260_, 1);
lean_dec(v_unused_1301_);
v_unused_1302_ = lean_ctor_get(v_m_1260_, 0);
lean_dec(v_unused_1302_);
v___x_1281_ = v_m_1260_;
v_isShared_1282_ = v_isSharedCheck_1300_;
goto v_resetjp_1280_;
}
else
{
lean_dec(v_m_1260_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1300_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v_size_x27_1284_; lean_object* v___x_1285_; lean_object* v_buckets_x27_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1283_ = lean_unsigned_to_nat(1u);
v_size_x27_1284_ = lean_nat_add(v_size_1263_, v___x_1283_);
lean_dec(v_size_1263_);
lean_inc(v_bkt_1278_);
v___x_1285_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1285_, 0, v_a_1261_);
lean_ctor_set(v___x_1285_, 1, v_b_1262_);
lean_ctor_set(v___x_1285_, 2, v_bkt_1278_);
v_buckets_x27_1286_ = lean_array_uset(v_buckets_1264_, v___x_1277_, v___x_1285_);
v___x_1287_ = lean_unsigned_to_nat(4u);
v___x_1288_ = lean_nat_mul(v_size_x27_1284_, v___x_1287_);
v___x_1289_ = lean_unsigned_to_nat(3u);
v___x_1290_ = lean_nat_div(v___x_1288_, v___x_1289_);
lean_dec(v___x_1288_);
v___x_1291_ = lean_array_get_size(v_buckets_x27_1286_);
v___x_1292_ = lean_nat_dec_le(v___x_1290_, v___x_1291_);
lean_dec(v___x_1290_);
if (v___x_1292_ == 0)
{
lean_object* v_val_1293_; lean_object* v___x_1295_; 
v_val_1293_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(v_buckets_x27_1286_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 1, v_val_1293_);
lean_ctor_set(v___x_1281_, 0, v_size_x27_1284_);
v___x_1295_ = v___x_1281_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_size_x27_1284_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_val_1293_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
else
{
lean_object* v___x_1298_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 1, v_buckets_x27_1286_);
lean_ctor_set(v___x_1281_, 0, v_size_x27_1284_);
v___x_1298_ = v___x_1281_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_size_x27_1284_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_buckets_x27_1286_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
else
{
lean_dec(v_b_1262_);
lean_dec_ref(v_a_1261_);
return v_m_1260_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg(lean_object* v_e_1303_, lean_object* v_a_1304_){
_start:
{
lean_object* v___x_1306_; lean_object* v_checked_1307_; uint8_t v___x_1308_; 
v___x_1306_ = lean_st_ref_get(v_a_1304_);
v_checked_1307_ = lean_ctor_get(v___x_1306_, 1);
lean_inc_ref(v_checked_1307_);
lean_dec(v___x_1306_);
v___x_1308_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg(v_checked_1307_, v_e_1303_);
lean_dec_ref(v_checked_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v_visited_1310_; lean_object* v_checked_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1323_; 
v___x_1309_ = lean_st_ref_take(v_a_1304_);
v_visited_1310_ = lean_ctor_get(v___x_1309_, 0);
v_checked_1311_ = lean_ctor_get(v___x_1309_, 1);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1313_ = v___x_1309_;
v_isShared_1314_ = v_isSharedCheck_1323_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_checked_1311_);
lean_inc(v_visited_1310_);
lean_dec(v___x_1309_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1323_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1318_; 
v___x_1315_ = lean_box(0);
v___x_1316_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6___redArg(v_checked_1311_, v_e_1303_, v___x_1315_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v___x_1316_);
v___x_1318_ = v___x_1313_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_visited_1310_);
lean_ctor_set(v_reuseFailAlloc_1322_, 1, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = lean_st_ref_put(v_a_1304_, v___x_1318_);
v___x_1320_ = lean_box(v___x_1308_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec_ref(v_e_1303_);
v___x_1324_ = lean_box(v___x_1308_);
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
return v___x_1325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_e_1326_, lean_object* v_a_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg(v_e_1326_, v_a_1327_);
lean_dec(v_a_1327_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(lean_object* v_p_1330_, lean_object* v_f_1331_, uint8_t v_stopWhenVisited_1332_, lean_object* v_e_1333_, lean_object* v_a_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v_d_1347_; lean_object* v_b_1348_; lean_object* v___y_1349_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___x_1379_; 
lean_inc_ref(v_e_1333_);
v___x_1379_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg(v_e_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1412_; 
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1382_ = v___x_1379_;
v_isShared_1383_ = v_isSharedCheck_1412_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1379_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1412_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
uint8_t v___x_1384_; 
v___x_1384_ = lean_unbox(v_a_1380_);
lean_dec(v_a_1380_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; uint8_t v___x_1386_; 
lean_del_object(v___x_1382_);
lean_inc_ref(v_p_1330_);
lean_inc_ref(v_e_1333_);
v___x_1385_ = lean_apply_1(v_p_1330_, v_e_1333_);
v___x_1386_ = lean_unbox(v___x_1385_);
if (v___x_1386_ == 0)
{
v___y_1353_ = v_a_1334_;
v___y_1354_ = v___y_1335_;
v___y_1355_ = v___y_1336_;
v___y_1356_ = v___y_1337_;
v___y_1357_ = v___y_1338_;
v___y_1358_ = v___y_1339_;
goto v___jp_1352_;
}
else
{
lean_object* v___x_1387_; 
lean_inc_ref(v_e_1333_);
v___x_1387_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg(v_e_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; uint8_t v___x_1389_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1387_, 1);
v___x_1389_ = lean_unbox(v_a_1388_);
lean_dec(v_a_1388_);
if (v___x_1389_ == 0)
{
lean_object* v___x_1390_; 
lean_inc_ref(v_f_1331_);
lean_inc(v___y_1339_);
lean_inc_ref(v___y_1338_);
lean_inc(v___y_1337_);
lean_inc_ref(v___y_1336_);
lean_inc(v___y_1335_);
lean_inc_ref(v_e_1333_);
v___x_1390_ = lean_apply_7(v_f_1331_, v_e_1333_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, lean_box(0));
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1398_; 
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1398_ == 0)
{
lean_object* v_unused_1399_; 
v_unused_1399_ = lean_ctor_get(v___x_1390_, 0);
lean_dec(v_unused_1399_);
v___x_1392_ = v___x_1390_;
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
else
{
lean_dec(v___x_1390_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
if (v_stopWhenVisited_1332_ == 0)
{
lean_del_object(v___x_1392_);
v___y_1353_ = v_a_1334_;
v___y_1354_ = v___y_1335_;
v___y_1355_ = v___y_1336_;
v___y_1356_ = v___y_1337_;
v___y_1357_ = v___y_1338_;
v___y_1358_ = v___y_1339_;
goto v___jp_1352_;
}
else
{
lean_object* v___x_1394_; lean_object* v___x_1396_; 
lean_dec_ref(v_e_1333_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
v___x_1394_ = lean_box(0);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1394_);
v___x_1396_ = v___x_1392_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
else
{
lean_dec_ref(v_e_1333_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
return v___x_1390_;
}
}
else
{
v___y_1353_ = v_a_1334_;
v___y_1354_ = v___y_1335_;
v___y_1355_ = v___y_1336_;
v___y_1356_ = v___y_1337_;
v___y_1357_ = v___y_1338_;
v___y_1358_ = v___y_1339_;
goto v___jp_1352_;
}
}
else
{
lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1407_; 
lean_dec_ref(v_e_1333_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
v_a_1400_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1402_ = v___x_1387_;
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_dec(v___x_1387_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1405_; 
if (v_isShared_1403_ == 0)
{
v___x_1405_ = v___x_1402_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_a_1400_);
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
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1410_; 
lean_dec_ref(v_e_1333_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
v___x_1408_ = lean_box(0);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 0, v___x_1408_);
v___x_1410_ = v___x_1382_;
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
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec_ref(v_e_1333_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
v_a_1413_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1379_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1379_);
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
v___jp_1341_:
{
lean_object* v___x_1350_; 
lean_inc_ref(v_f_1331_);
lean_inc_ref(v_p_1330_);
v___x_1350_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_p_1330_, v_f_1331_, v_stopWhenVisited_1332_, v_d_1347_, v___y_1349_, v___y_1345_, v___y_1346_, v___y_1343_, v___y_1342_, v___y_1344_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_dec_ref_known(v___x_1350_, 1);
v_e_1333_ = v_b_1348_;
v_a_1334_ = v___y_1349_;
v___y_1335_ = v___y_1345_;
v___y_1336_ = v___y_1346_;
v___y_1337_ = v___y_1343_;
v___y_1338_ = v___y_1342_;
v___y_1339_ = v___y_1344_;
goto _start;
}
else
{
lean_dec_ref(v_b_1348_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
return v___x_1350_;
}
}
v___jp_1352_:
{
switch(lean_obj_tag(v_e_1333_))
{
case 7:
{
lean_object* v_binderType_1359_; lean_object* v_body_1360_; 
v_binderType_1359_ = lean_ctor_get(v_e_1333_, 1);
lean_inc_ref(v_binderType_1359_);
v_body_1360_ = lean_ctor_get(v_e_1333_, 2);
lean_inc_ref(v_body_1360_);
lean_dec_ref_known(v_e_1333_, 3);
v___y_1342_ = v___y_1357_;
v___y_1343_ = v___y_1356_;
v___y_1344_ = v___y_1358_;
v___y_1345_ = v___y_1354_;
v___y_1346_ = v___y_1355_;
v_d_1347_ = v_binderType_1359_;
v_b_1348_ = v_body_1360_;
v___y_1349_ = v___y_1353_;
goto v___jp_1341_;
}
case 6:
{
lean_object* v_binderType_1361_; lean_object* v_body_1362_; 
v_binderType_1361_ = lean_ctor_get(v_e_1333_, 1);
lean_inc_ref(v_binderType_1361_);
v_body_1362_ = lean_ctor_get(v_e_1333_, 2);
lean_inc_ref(v_body_1362_);
lean_dec_ref_known(v_e_1333_, 3);
v___y_1342_ = v___y_1357_;
v___y_1343_ = v___y_1356_;
v___y_1344_ = v___y_1358_;
v___y_1345_ = v___y_1354_;
v___y_1346_ = v___y_1355_;
v_d_1347_ = v_binderType_1361_;
v_b_1348_ = v_body_1362_;
v___y_1349_ = v___y_1353_;
goto v___jp_1341_;
}
case 8:
{
lean_object* v_type_1363_; lean_object* v_value_1364_; lean_object* v_body_1365_; lean_object* v___x_1366_; 
v_type_1363_ = lean_ctor_get(v_e_1333_, 1);
lean_inc_ref(v_type_1363_);
v_value_1364_ = lean_ctor_get(v_e_1333_, 2);
lean_inc_ref(v_value_1364_);
v_body_1365_ = lean_ctor_get(v_e_1333_, 3);
lean_inc_ref(v_body_1365_);
lean_dec_ref_known(v_e_1333_, 4);
lean_inc_ref(v_f_1331_);
lean_inc_ref(v_p_1330_);
v___x_1366_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_p_1330_, v_f_1331_, v_stopWhenVisited_1332_, v_type_1363_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v___x_1367_; 
lean_dec_ref_known(v___x_1366_, 1);
lean_inc_ref(v_f_1331_);
lean_inc_ref(v_p_1330_);
v___x_1367_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_p_1330_, v_f_1331_, v_stopWhenVisited_1332_, v_value_1364_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_dec_ref_known(v___x_1367_, 1);
v_e_1333_ = v_body_1365_;
v_a_1334_ = v___y_1353_;
v___y_1335_ = v___y_1354_;
v___y_1336_ = v___y_1355_;
v___y_1337_ = v___y_1356_;
v___y_1338_ = v___y_1357_;
v___y_1339_ = v___y_1358_;
goto _start;
}
else
{
lean_dec_ref(v_body_1365_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
return v___x_1367_;
}
}
else
{
lean_dec_ref(v_body_1365_);
lean_dec_ref(v_value_1364_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
return v___x_1366_;
}
}
case 5:
{
lean_object* v_fn_1369_; lean_object* v_arg_1370_; lean_object* v___x_1371_; 
v_fn_1369_ = lean_ctor_get(v_e_1333_, 0);
lean_inc_ref(v_fn_1369_);
v_arg_1370_ = lean_ctor_get(v_e_1333_, 1);
lean_inc_ref(v_arg_1370_);
lean_dec_ref_known(v_e_1333_, 2);
lean_inc_ref(v_f_1331_);
lean_inc_ref(v_p_1330_);
v___x_1371_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_p_1330_, v_f_1331_, v_stopWhenVisited_1332_, v_fn_1369_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_dec_ref_known(v___x_1371_, 1);
v_e_1333_ = v_arg_1370_;
v_a_1334_ = v___y_1353_;
v___y_1335_ = v___y_1354_;
v___y_1336_ = v___y_1355_;
v___y_1337_ = v___y_1356_;
v___y_1338_ = v___y_1357_;
v___y_1339_ = v___y_1358_;
goto _start;
}
else
{
lean_dec_ref(v_arg_1370_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
return v___x_1371_;
}
}
case 10:
{
lean_object* v_expr_1373_; 
v_expr_1373_ = lean_ctor_get(v_e_1333_, 1);
lean_inc_ref(v_expr_1373_);
lean_dec_ref_known(v_e_1333_, 2);
v_e_1333_ = v_expr_1373_;
v_a_1334_ = v___y_1353_;
v___y_1335_ = v___y_1354_;
v___y_1336_ = v___y_1355_;
v___y_1337_ = v___y_1356_;
v___y_1338_ = v___y_1357_;
v___y_1339_ = v___y_1358_;
goto _start;
}
case 11:
{
lean_object* v_struct_1375_; 
v_struct_1375_ = lean_ctor_get(v_e_1333_, 2);
lean_inc_ref(v_struct_1375_);
lean_dec_ref_known(v_e_1333_, 3);
v_e_1333_ = v_struct_1375_;
v_a_1334_ = v___y_1353_;
v___y_1335_ = v___y_1354_;
v___y_1336_ = v___y_1355_;
v___y_1337_ = v___y_1356_;
v___y_1338_ = v___y_1357_;
v___y_1339_ = v___y_1358_;
goto _start;
}
default: 
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_dec_ref(v_e_1333_);
lean_dec_ref(v_f_1331_);
lean_dec_ref(v_p_1330_);
v___x_1377_ = lean_box(0);
v___x_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
return v___x_1378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___boxed(lean_object* v_p_1421_, lean_object* v_f_1422_, lean_object* v_stopWhenVisited_1423_, lean_object* v_e_1424_, lean_object* v_a_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1432_; lean_object* v_res_1433_; 
v_stopWhenVisited_boxed_1432_ = lean_unbox(v_stopWhenVisited_1423_);
v_res_1433_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_p_1421_, v_f_1422_, v_stopWhenVisited_boxed_1432_, v_e_1424_, v_a_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec(v_a_1425_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0(lean_object* v_p_1434_, lean_object* v_f_1435_, lean_object* v_e_1436_, uint8_t v_stopWhenVisited_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1444_ = l_Lean_ForEachExprWhere_initCache;
v___x_1445_ = lean_st_mk_ref(v___x_1444_);
v___x_1446_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_p_1434_, v_f_1435_, v_stopWhenVisited_1437_, v_e_1436_, v___x_1445_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1455_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = lean_st_ref_get(v___x_1445_);
lean_dec(v___x_1445_);
lean_dec(v___x_1451_);
if (v_isShared_1450_ == 0)
{
v___x_1453_ = v___x_1449_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1447_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
else
{
lean_dec(v___x_1445_);
return v___x_1446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0___boxed(lean_object* v_p_1456_, lean_object* v_f_1457_, lean_object* v_e_1458_, lean_object* v_stopWhenVisited_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1466_; lean_object* v_res_1467_; 
v_stopWhenVisited_boxed_1466_ = lean_unbox(v_stopWhenVisited_1459_);
v_res_1467_ = l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0(v_p_1456_, v_f_1457_, v_e_1458_, v_stopWhenVisited_boxed_1466_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(lean_object* v___f_1469_, lean_object* v___f_1470_, uint8_t v___x_1471_, lean_object* v_e_1472_, lean_object* v_candidates_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_e_1472_, v___y_1475_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; uint8_t v___x_1481_; lean_object* v___x_1482_; lean_object* v___y_1484_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc(v_a_1480_);
lean_dec_ref_known(v___x_1479_, 1);
v___x_1481_ = l_Lean_Expr_hasFVar(v_a_1480_);
v___x_1482_ = lean_st_mk_ref(v_candidates_1473_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_dec(v_a_1480_);
lean_dec_ref(v___f_1470_);
v___x_1494_ = lean_box(0);
lean_inc(v___y_1477_);
lean_inc_ref(v___y_1476_);
lean_inc(v___y_1475_);
lean_inc_ref(v___y_1474_);
lean_inc(v___x_1482_);
v___x_1495_ = lean_apply_7(v___f_1469_, v___x_1494_, v___x_1482_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, lean_box(0));
v___y_1484_ = v___x_1495_;
goto v___jp_1483_;
}
else
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___closed__0));
v___x_1497_ = l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0(v___x_1496_, v___f_1470_, v_a_1480_, v___x_1471_, v___x_1482_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
lean_inc(v___y_1477_);
lean_inc_ref(v___y_1476_);
lean_inc(v___y_1475_);
lean_inc_ref(v___y_1474_);
lean_inc(v___x_1482_);
v___x_1499_ = lean_apply_7(v___f_1469_, v_a_1498_, v___x_1482_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, lean_box(0));
v___y_1484_ = v___x_1499_;
goto v___jp_1483_;
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec(v___x_1482_);
lean_dec_ref(v___f_1469_);
v_a_1500_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1497_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1497_);
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
v___jp_1483_:
{
if (lean_obj_tag(v___y_1484_) == 0)
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1493_; 
v_a_1485_ = lean_ctor_get(v___y_1484_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___y_1484_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1487_ = v___y_1484_;
v_isShared_1488_ = v_isSharedCheck_1493_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___y_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1493_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1489_ = lean_st_ref_get(v___x_1482_);
lean_dec(v___x_1482_);
lean_dec(v___x_1489_);
if (v_isShared_1488_ == 0)
{
v___x_1491_ = v___x_1487_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1485_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
else
{
lean_dec(v___x_1482_);
return v___y_1484_;
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec_ref(v_candidates_1473_);
lean_dec_ref(v___f_1470_);
lean_dec_ref(v___f_1469_);
v_a_1508_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1479_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1479_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___boxed(lean_object* v___f_1516_, lean_object* v___f_1517_, lean_object* v___x_1518_, lean_object* v_e_1519_, lean_object* v_candidates_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
uint8_t v___x_15810__boxed_1526_; lean_object* v_res_1527_; 
v___x_15810__boxed_1526_ = lean_unbox(v___x_1518_);
v_res_1527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1516_, v___f_1517_, v___x_15810__boxed_1526_, v_e_1519_, v_candidates_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__1(lean_object* v_e_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1535_ = lean_st_ref_take(v___y_1529_);
v___x_1536_ = lean_box(0);
v___x_1537_ = l_Lean_Expr_fvarId_x21(v_e_1528_);
v___x_1538_ = l_Lean_FVarIdHashSet_erase(v___x_1535_, v___x_1537_);
lean_dec(v___x_1537_);
v___x_1539_ = lean_st_ref_put(v___y_1529_, v___x_1538_);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1536_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__1___boxed(lean_object* v_e_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__1(v_e_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v_e_1541_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__0(lean_object* v_____r_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = lean_st_ref_get(v___y_1550_);
v___x_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__0___boxed(lean_object* v_____r_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__0(v_____r_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8(lean_object* v_as_1568_, size_t v_sz_1569_, size_t v_i_1570_, lean_object* v_b_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
uint8_t v___x_1577_; 
v___x_1577_ = lean_usize_dec_lt(v_i_1570_, v_sz_1569_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1578_, 0, v_b_1571_);
return v___x_1578_;
}
else
{
lean_object* v_snd_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1645_; 
v_snd_1579_ = lean_ctor_get(v_b_1571_, 1);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_b_1571_);
if (v_isSharedCheck_1645_ == 0)
{
lean_object* v_unused_1646_; 
v_unused_1646_ = lean_ctor_get(v_b_1571_, 0);
lean_dec(v_unused_1646_);
v___x_1581_ = v_b_1571_;
v_isShared_1582_ = v_isSharedCheck_1645_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_snd_1579_);
lean_dec(v_b_1571_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1645_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v_a_1585_; lean_object* v_a_1592_; 
v___x_1583_ = lean_box(0);
v_a_1592_ = lean_array_uget_borrowed(v_as_1568_, v_i_1570_);
if (lean_obj_tag(v_a_1592_) == 0)
{
v_a_1585_ = v_snd_1579_;
goto v___jp_1584_;
}
else
{
lean_object* v_val_1593_; lean_object* v___y_1595_; lean_object* v___y_1599_; uint8_t v___y_1600_; uint8_t v___x_1601_; 
v_val_1593_ = lean_ctor_get(v_a_1592_, 0);
v___x_1601_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1593_);
if (v___x_1601_ == 0)
{
lean_object* v___f_1602_; lean_object* v___f_1603_; lean_object* v___x_1604_; lean_object* v_candidates_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___x_1623_; 
v___f_1602_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0));
v___f_1603_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1));
v___x_1604_ = l_Lean_LocalDecl_type(v_val_1593_);
lean_inc_ref(v___x_1604_);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1602_, v___f_1603_, v___x_1601_, v___x_1604_, v_snd_1579_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1625_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = l_Lean_LocalDecl_value_x3f(v_val_1593_, v___x_1601_);
if (lean_obj_tag(v___x_1625_) == 0)
{
v_candidates_1606_ = v_a_1624_;
v___y_1607_ = v___y_1572_;
v___y_1608_ = v___y_1573_;
v___y_1609_ = v___y_1574_;
v___y_1610_ = v___y_1575_;
goto v___jp_1605_;
}
else
{
lean_object* v_val_1626_; lean_object* v___x_1627_; 
v_val_1626_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_val_1626_);
lean_dec_ref_known(v___x_1625_, 1);
v___x_1627_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1602_, v___f_1603_, v___x_1601_, v_val_1626_, v_a_1624_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v_candidates_1606_ = v_a_1628_;
v___y_1607_ = v___y_1572_;
v___y_1608_ = v___y_1573_;
v___y_1609_ = v___y_1574_;
v___y_1610_ = v___y_1575_;
goto v___jp_1605_;
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec_ref(v___x_1604_);
lean_del_object(v___x_1581_);
v_a_1629_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1627_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1627_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec_ref(v___x_1604_);
lean_del_object(v___x_1581_);
v_a_1637_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1623_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1623_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
v___jp_1605_:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_Meta_isProp(v___x_1604_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; uint8_t v___x_1613_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1613_ = lean_unbox(v_a_1612_);
lean_dec(v_a_1612_);
if (v___x_1613_ == 0)
{
v___y_1599_ = v_candidates_1606_;
v___y_1600_ = v___x_1601_;
goto v___jp_1598_;
}
else
{
uint8_t v___x_1614_; 
v___x_1614_ = l_Lean_LocalDecl_hasValue(v_val_1593_, v___x_1601_);
if (v___x_1614_ == 0)
{
v___y_1595_ = v_candidates_1606_;
goto v___jp_1594_;
}
else
{
v___y_1599_ = v_candidates_1606_;
v___y_1600_ = v___x_1601_;
goto v___jp_1598_;
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
lean_dec_ref(v_candidates_1606_);
lean_del_object(v___x_1581_);
v_a_1615_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1611_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1611_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
}
else
{
v_a_1585_ = v_snd_1579_;
goto v___jp_1584_;
}
v___jp_1594_:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1596_ = l_Lean_LocalDecl_fvarId(v_val_1593_);
v___x_1597_ = l_Lean_FVarIdHashSet_insert(v___y_1595_, v___x_1596_);
v_a_1585_ = v___x_1597_;
goto v___jp_1584_;
}
v___jp_1598_:
{
if (v___y_1600_ == 0)
{
v_a_1585_ = v___y_1599_;
goto v___jp_1584_;
}
else
{
v___y_1595_ = v___y_1599_;
goto v___jp_1594_;
}
}
}
v___jp_1584_:
{
lean_object* v___x_1587_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 1, v_a_1585_);
lean_ctor_set(v___x_1581_, 0, v___x_1583_);
v___x_1587_ = v___x_1581_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_a_1585_);
v___x_1587_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
size_t v___x_1588_; size_t v___x_1589_; 
v___x_1588_ = ((size_t)1ULL);
v___x_1589_ = lean_usize_add(v_i_1570_, v___x_1588_);
v_i_1570_ = v___x_1589_;
v_b_1571_ = v___x_1587_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___boxed(lean_object* v_as_1647_, lean_object* v_sz_1648_, lean_object* v_i_1649_, lean_object* v_b_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
size_t v_sz_boxed_1656_; size_t v_i_boxed_1657_; lean_object* v_res_1658_; 
v_sz_boxed_1656_ = lean_unbox_usize(v_sz_1648_);
lean_dec(v_sz_1648_);
v_i_boxed_1657_ = lean_unbox_usize(v_i_1649_);
lean_dec(v_i_1649_);
v_res_1658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8(v_as_1647_, v_sz_boxed_1656_, v_i_boxed_1657_, v_b_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec_ref(v_as_1647_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(lean_object* v_as_1659_, size_t v_sz_1660_, size_t v_i_1661_, lean_object* v_b_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
uint8_t v___x_1668_; 
v___x_1668_ = lean_usize_dec_lt(v_i_1661_, v_sz_1660_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_b_1662_);
return v___x_1669_;
}
else
{
lean_object* v_snd_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1736_; 
v_snd_1670_ = lean_ctor_get(v_b_1662_, 1);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_b_1662_);
if (v_isSharedCheck_1736_ == 0)
{
lean_object* v_unused_1737_; 
v_unused_1737_ = lean_ctor_get(v_b_1662_, 0);
lean_dec(v_unused_1737_);
v___x_1672_ = v_b_1662_;
v_isShared_1673_ = v_isSharedCheck_1736_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_snd_1670_);
lean_dec(v_b_1662_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1736_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1674_; lean_object* v_a_1676_; lean_object* v_a_1683_; 
v___x_1674_ = lean_box(0);
v_a_1683_ = lean_array_uget_borrowed(v_as_1659_, v_i_1661_);
if (lean_obj_tag(v_a_1683_) == 0)
{
v_a_1676_ = v_snd_1670_;
goto v___jp_1675_;
}
else
{
lean_object* v_val_1684_; lean_object* v___y_1686_; lean_object* v___y_1690_; uint8_t v___y_1691_; uint8_t v___x_1692_; 
v_val_1684_ = lean_ctor_get(v_a_1683_, 0);
v___x_1692_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1684_);
if (v___x_1692_ == 0)
{
lean_object* v___f_1693_; lean_object* v___f_1694_; lean_object* v___x_1695_; lean_object* v_candidates_1697_; lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___x_1714_; 
v___f_1693_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0));
v___f_1694_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1));
v___x_1695_ = l_Lean_LocalDecl_type(v_val_1684_);
lean_inc_ref(v___x_1695_);
v___x_1714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1693_, v___f_1694_, v___x_1692_, v___x_1695_, v_snd_1670_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1716_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = l_Lean_LocalDecl_value_x3f(v_val_1684_, v___x_1692_);
if (lean_obj_tag(v___x_1716_) == 0)
{
v_candidates_1697_ = v_a_1715_;
v___y_1698_ = v___y_1663_;
v___y_1699_ = v___y_1664_;
v___y_1700_ = v___y_1665_;
v___y_1701_ = v___y_1666_;
goto v___jp_1696_;
}
else
{
lean_object* v_val_1717_; lean_object* v___x_1718_; 
v_val_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_val_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v___x_1718_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1693_, v___f_1694_, v___x_1692_, v_val_1717_, v_a_1715_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v_a_1719_; 
v_a_1719_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_a_1719_);
lean_dec_ref_known(v___x_1718_, 1);
v_candidates_1697_ = v_a_1719_;
v___y_1698_ = v___y_1663_;
v___y_1699_ = v___y_1664_;
v___y_1700_ = v___y_1665_;
v___y_1701_ = v___y_1666_;
goto v___jp_1696_;
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref(v___x_1695_);
lean_del_object(v___x_1672_);
v_a_1720_ = lean_ctor_get(v___x_1718_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1718_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1718_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1718_);
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
}
else
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1735_; 
lean_dec_ref(v___x_1695_);
lean_del_object(v___x_1672_);
v_a_1728_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1730_ = v___x_1714_;
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1714_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
v___jp_1696_:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_Meta_isProp(v___x_1695_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; uint8_t v___x_1704_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
v___x_1704_ = lean_unbox(v_a_1703_);
lean_dec(v_a_1703_);
if (v___x_1704_ == 0)
{
v___y_1690_ = v_candidates_1697_;
v___y_1691_ = v___x_1692_;
goto v___jp_1689_;
}
else
{
uint8_t v___x_1705_; 
v___x_1705_ = l_Lean_LocalDecl_hasValue(v_val_1684_, v___x_1692_);
if (v___x_1705_ == 0)
{
v___y_1686_ = v_candidates_1697_;
goto v___jp_1685_;
}
else
{
v___y_1690_ = v_candidates_1697_;
v___y_1691_ = v___x_1692_;
goto v___jp_1689_;
}
}
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec_ref(v_candidates_1697_);
lean_del_object(v___x_1672_);
v_a_1706_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1702_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1702_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
else
{
v_a_1676_ = v_snd_1670_;
goto v___jp_1675_;
}
v___jp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = l_Lean_LocalDecl_fvarId(v_val_1684_);
v___x_1688_ = l_Lean_FVarIdHashSet_insert(v___y_1686_, v___x_1687_);
v_a_1676_ = v___x_1688_;
goto v___jp_1675_;
}
v___jp_1689_:
{
if (v___y_1691_ == 0)
{
v_a_1676_ = v___y_1690_;
goto v___jp_1675_;
}
else
{
v___y_1686_ = v___y_1690_;
goto v___jp_1685_;
}
}
}
v___jp_1675_:
{
lean_object* v___x_1678_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v_a_1676_);
lean_ctor_set(v___x_1672_, 0, v___x_1674_);
v___x_1678_ = v___x_1672_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1674_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v_a_1676_);
v___x_1678_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
size_t v___x_1679_; size_t v___x_1680_; lean_object* v___x_1681_; 
v___x_1679_ = ((size_t)1ULL);
v___x_1680_ = lean_usize_add(v_i_1661_, v___x_1679_);
v___x_1681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8(v_as_1659_, v_sz_1660_, v___x_1680_, v___x_1678_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
return v___x_1681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___boxed(lean_object* v_as_1738_, lean_object* v_sz_1739_, lean_object* v_i_1740_, lean_object* v_b_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
size_t v_sz_boxed_1747_; size_t v_i_boxed_1748_; lean_object* v_res_1749_; 
v_sz_boxed_1747_ = lean_unbox_usize(v_sz_1739_);
lean_dec(v_sz_1739_);
v_i_boxed_1748_ = lean_unbox_usize(v_i_1740_);
lean_dec(v_i_1740_);
v_res_1749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_as_1738_, v_sz_boxed_1747_, v_i_boxed_1748_, v_b_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec_ref(v_as_1738_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6_spec__10(lean_object* v_as_1750_, size_t v_sz_1751_, size_t v_i_1752_, lean_object* v_b_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_){
_start:
{
uint8_t v___x_1759_; 
v___x_1759_ = lean_usize_dec_lt(v_i_1752_, v_sz_1751_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v_b_1753_);
return v___x_1760_;
}
else
{
lean_object* v_snd_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1827_; 
v_snd_1761_ = lean_ctor_get(v_b_1753_, 1);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_b_1753_);
if (v_isSharedCheck_1827_ == 0)
{
lean_object* v_unused_1828_; 
v_unused_1828_ = lean_ctor_get(v_b_1753_, 0);
lean_dec(v_unused_1828_);
v___x_1763_ = v_b_1753_;
v_isShared_1764_ = v_isSharedCheck_1827_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_snd_1761_);
lean_dec(v_b_1753_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1827_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1765_; lean_object* v_a_1767_; lean_object* v_a_1774_; 
v___x_1765_ = lean_box(0);
v_a_1774_ = lean_array_uget_borrowed(v_as_1750_, v_i_1752_);
if (lean_obj_tag(v_a_1774_) == 0)
{
v_a_1767_ = v_snd_1761_;
goto v___jp_1766_;
}
else
{
lean_object* v_val_1775_; lean_object* v___y_1777_; lean_object* v___y_1781_; uint8_t v___y_1782_; uint8_t v___x_1783_; 
v_val_1775_ = lean_ctor_get(v_a_1774_, 0);
v___x_1783_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1775_);
if (v___x_1783_ == 0)
{
lean_object* v___f_1784_; lean_object* v___f_1785_; lean_object* v___x_1786_; lean_object* v_candidates_1788_; lean_object* v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1792_; lean_object* v___x_1805_; 
v___f_1784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0));
v___f_1785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1));
v___x_1786_ = l_Lean_LocalDecl_type(v_val_1775_);
lean_inc_ref(v___x_1786_);
v___x_1805_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1784_, v___f_1785_, v___x_1783_, v___x_1786_, v_snd_1761_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1807_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1805_, 1);
v___x_1807_ = l_Lean_LocalDecl_value_x3f(v_val_1775_, v___x_1783_);
if (lean_obj_tag(v___x_1807_) == 0)
{
v_candidates_1788_ = v_a_1806_;
v___y_1789_ = v___y_1754_;
v___y_1790_ = v___y_1755_;
v___y_1791_ = v___y_1756_;
v___y_1792_ = v___y_1757_;
goto v___jp_1787_;
}
else
{
lean_object* v_val_1808_; lean_object* v___x_1809_; 
v_val_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_val_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v___x_1809_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1784_, v___f_1785_, v___x_1783_, v_val_1808_, v_a_1806_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1809_, 1);
v_candidates_1788_ = v_a_1810_;
v___y_1789_ = v___y_1754_;
v___y_1790_ = v___y_1755_;
v___y_1791_ = v___y_1756_;
v___y_1792_ = v___y_1757_;
goto v___jp_1787_;
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
lean_dec_ref(v___x_1786_);
lean_del_object(v___x_1763_);
v_a_1811_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1809_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1809_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
}
else
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
lean_dec_ref(v___x_1786_);
lean_del_object(v___x_1763_);
v_a_1819_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1805_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1805_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1819_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
v___jp_1787_:
{
lean_object* v___x_1793_; 
v___x_1793_ = l_Lean_Meta_isProp(v___x_1786_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; uint8_t v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1793_, 1);
v___x_1795_ = lean_unbox(v_a_1794_);
lean_dec(v_a_1794_);
if (v___x_1795_ == 0)
{
v___y_1781_ = v_candidates_1788_;
v___y_1782_ = v___x_1783_;
goto v___jp_1780_;
}
else
{
uint8_t v___x_1796_; 
v___x_1796_ = l_Lean_LocalDecl_hasValue(v_val_1775_, v___x_1783_);
if (v___x_1796_ == 0)
{
v___y_1777_ = v_candidates_1788_;
goto v___jp_1776_;
}
else
{
v___y_1781_ = v_candidates_1788_;
v___y_1782_ = v___x_1783_;
goto v___jp_1780_;
}
}
}
else
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1804_; 
lean_dec_ref(v_candidates_1788_);
lean_del_object(v___x_1763_);
v_a_1797_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1799_ = v___x_1793_;
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1793_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1802_; 
if (v_isShared_1800_ == 0)
{
v___x_1802_ = v___x_1799_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_a_1797_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
}
else
{
v_a_1767_ = v_snd_1761_;
goto v___jp_1766_;
}
v___jp_1776_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = l_Lean_LocalDecl_fvarId(v_val_1775_);
v___x_1779_ = l_Lean_FVarIdHashSet_insert(v___y_1777_, v___x_1778_);
v_a_1767_ = v___x_1779_;
goto v___jp_1766_;
}
v___jp_1780_:
{
if (v___y_1782_ == 0)
{
v_a_1767_ = v___y_1781_;
goto v___jp_1766_;
}
else
{
v___y_1777_ = v___y_1781_;
goto v___jp_1776_;
}
}
}
v___jp_1766_:
{
lean_object* v___x_1769_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 1, v_a_1767_);
lean_ctor_set(v___x_1763_, 0, v___x_1765_);
v___x_1769_ = v___x_1763_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1765_);
lean_ctor_set(v_reuseFailAlloc_1773_, 1, v_a_1767_);
v___x_1769_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
size_t v___x_1770_; size_t v___x_1771_; 
v___x_1770_ = ((size_t)1ULL);
v___x_1771_ = lean_usize_add(v_i_1752_, v___x_1770_);
v_i_1752_ = v___x_1771_;
v_b_1753_ = v___x_1769_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6_spec__10___boxed(lean_object* v_as_1829_, lean_object* v_sz_1830_, lean_object* v_i_1831_, lean_object* v_b_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
size_t v_sz_boxed_1838_; size_t v_i_boxed_1839_; lean_object* v_res_1840_; 
v_sz_boxed_1838_ = lean_unbox_usize(v_sz_1830_);
lean_dec(v_sz_1830_);
v_i_boxed_1839_ = lean_unbox_usize(v_i_1831_);
lean_dec(v_i_1831_);
v_res_1840_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6_spec__10(v_as_1829_, v_sz_boxed_1838_, v_i_boxed_1839_, v_b_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v_as_1829_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6(lean_object* v_as_1841_, size_t v_sz_1842_, size_t v_i_1843_, lean_object* v_b_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
uint8_t v___x_1850_; 
v___x_1850_ = lean_usize_dec_lt(v_i_1843_, v_sz_1842_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1851_; 
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v_b_1844_);
return v___x_1851_;
}
else
{
lean_object* v_snd_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1918_; 
v_snd_1852_ = lean_ctor_get(v_b_1844_, 1);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_b_1844_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; 
v_unused_1919_ = lean_ctor_get(v_b_1844_, 0);
lean_dec(v_unused_1919_);
v___x_1854_ = v_b_1844_;
v_isShared_1855_ = v_isSharedCheck_1918_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_snd_1852_);
lean_dec(v_b_1844_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1918_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; lean_object* v_a_1858_; lean_object* v_a_1865_; 
v___x_1856_ = lean_box(0);
v_a_1865_ = lean_array_uget_borrowed(v_as_1841_, v_i_1843_);
if (lean_obj_tag(v_a_1865_) == 0)
{
v_a_1858_ = v_snd_1852_;
goto v___jp_1857_;
}
else
{
lean_object* v_val_1866_; lean_object* v___y_1868_; lean_object* v___y_1872_; uint8_t v___y_1873_; uint8_t v___x_1874_; 
v_val_1866_ = lean_ctor_get(v_a_1865_, 0);
v___x_1874_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1866_);
if (v___x_1874_ == 0)
{
lean_object* v___f_1875_; lean_object* v___f_1876_; lean_object* v___x_1877_; lean_object* v_candidates_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___x_1896_; 
v___f_1875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__0));
v___f_1876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__8___closed__1));
v___x_1877_ = l_Lean_LocalDecl_type(v_val_1866_);
lean_inc_ref(v___x_1877_);
v___x_1896_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1875_, v___f_1876_, v___x_1874_, v___x_1877_, v_snd_1852_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = l_Lean_LocalDecl_value_x3f(v_val_1866_, v___x_1874_);
if (lean_obj_tag(v___x_1898_) == 0)
{
v_candidates_1879_ = v_a_1897_;
v___y_1880_ = v___y_1845_;
v___y_1881_ = v___y_1846_;
v___y_1882_ = v___y_1847_;
v___y_1883_ = v___y_1848_;
goto v___jp_1878_;
}
else
{
lean_object* v_val_1899_; lean_object* v___x_1900_; 
v_val_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_val_1899_);
lean_dec_ref_known(v___x_1898_, 1);
v___x_1900_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2(v___f_1875_, v___f_1876_, v___x_1874_, v_val_1899_, v_a_1897_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v_candidates_1879_ = v_a_1901_;
v___y_1880_ = v___y_1845_;
v___y_1881_ = v___y_1846_;
v___y_1882_ = v___y_1847_;
v___y_1883_ = v___y_1848_;
goto v___jp_1878_;
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_dec_ref(v___x_1877_);
lean_del_object(v___x_1854_);
v_a_1902_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1900_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1900_);
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
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v___x_1877_);
lean_del_object(v___x_1854_);
v_a_1910_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1896_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1896_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
v___jp_1878_:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Lean_Meta_isProp(v___x_1877_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; uint8_t v___x_1886_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1886_ = lean_unbox(v_a_1885_);
lean_dec(v_a_1885_);
if (v___x_1886_ == 0)
{
v___y_1872_ = v_candidates_1879_;
v___y_1873_ = v___x_1874_;
goto v___jp_1871_;
}
else
{
uint8_t v___x_1887_; 
v___x_1887_ = l_Lean_LocalDecl_hasValue(v_val_1866_, v___x_1874_);
if (v___x_1887_ == 0)
{
v___y_1868_ = v_candidates_1879_;
goto v___jp_1867_;
}
else
{
v___y_1872_ = v_candidates_1879_;
v___y_1873_ = v___x_1874_;
goto v___jp_1871_;
}
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
lean_dec_ref(v_candidates_1879_);
lean_del_object(v___x_1854_);
v_a_1888_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1884_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1884_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
}
else
{
v_a_1858_ = v_snd_1852_;
goto v___jp_1857_;
}
v___jp_1867_:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = l_Lean_LocalDecl_fvarId(v_val_1866_);
v___x_1870_ = l_Lean_FVarIdHashSet_insert(v___y_1868_, v___x_1869_);
v_a_1858_ = v___x_1870_;
goto v___jp_1857_;
}
v___jp_1871_:
{
if (v___y_1873_ == 0)
{
v_a_1858_ = v___y_1872_;
goto v___jp_1857_;
}
else
{
v___y_1868_ = v___y_1872_;
goto v___jp_1867_;
}
}
}
v___jp_1857_:
{
lean_object* v___x_1860_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 1, v_a_1858_);
lean_ctor_set(v___x_1854_, 0, v___x_1856_);
v___x_1860_ = v___x_1854_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_a_1858_);
v___x_1860_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
size_t v___x_1861_; size_t v___x_1862_; lean_object* v___x_1863_; 
v___x_1861_ = ((size_t)1ULL);
v___x_1862_ = lean_usize_add(v_i_1843_, v___x_1861_);
v___x_1863_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6_spec__10(v_as_1841_, v_sz_1842_, v___x_1862_, v___x_1860_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
return v___x_1863_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6___boxed(lean_object* v_as_1920_, lean_object* v_sz_1921_, lean_object* v_i_1922_, lean_object* v_b_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
size_t v_sz_boxed_1929_; size_t v_i_boxed_1930_; lean_object* v_res_1931_; 
v_sz_boxed_1929_ = lean_unbox_usize(v_sz_1921_);
lean_dec(v_sz_1921_);
v_i_boxed_1930_ = lean_unbox_usize(v_i_1922_);
lean_dec(v_i_1922_);
v_res_1931_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6(v_as_1920_, v_sz_boxed_1929_, v_i_boxed_1930_, v_b_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec_ref(v_as_1920_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2(lean_object* v_init_1932_, lean_object* v_n_1933_, lean_object* v_b_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
if (lean_obj_tag(v_n_1933_) == 0)
{
lean_object* v_cs_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; size_t v_sz_1943_; size_t v___x_1944_; lean_object* v___x_1945_; 
v_cs_1940_ = lean_ctor_get(v_n_1933_, 0);
v___x_1941_ = lean_box(0);
v___x_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1941_);
lean_ctor_set(v___x_1942_, 1, v_b_1934_);
v_sz_1943_ = lean_array_size(v_cs_1940_);
v___x_1944_ = ((size_t)0ULL);
v___x_1945_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__5(v_init_1932_, v_cs_1940_, v_sz_1943_, v___x_1944_, v___x_1942_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1960_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1948_ = v___x_1945_;
v_isShared_1949_ = v_isSharedCheck_1960_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1945_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1960_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v_fst_1950_; 
v_fst_1950_ = lean_ctor_get(v_a_1946_, 0);
if (lean_obj_tag(v_fst_1950_) == 0)
{
lean_object* v_snd_1951_; lean_object* v___x_1952_; lean_object* v___x_1954_; 
v_snd_1951_ = lean_ctor_get(v_a_1946_, 1);
lean_inc(v_snd_1951_);
lean_dec(v_a_1946_);
v___x_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1952_, 0, v_snd_1951_);
if (v_isShared_1949_ == 0)
{
lean_ctor_set(v___x_1948_, 0, v___x_1952_);
v___x_1954_ = v___x_1948_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v___x_1952_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
else
{
lean_object* v_val_1956_; lean_object* v___x_1958_; 
lean_inc_ref(v_fst_1950_);
lean_dec(v_a_1946_);
v_val_1956_ = lean_ctor_get(v_fst_1950_, 0);
lean_inc(v_val_1956_);
lean_dec_ref_known(v_fst_1950_, 1);
if (v_isShared_1949_ == 0)
{
lean_ctor_set(v___x_1948_, 0, v_val_1956_);
v___x_1958_ = v___x_1948_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_val_1956_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
v_a_1961_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1945_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1945_);
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
else
{
lean_object* v_vs_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; size_t v_sz_1972_; size_t v___x_1973_; lean_object* v___x_1974_; 
v_vs_1969_ = lean_ctor_get(v_n_1933_, 0);
v___x_1970_ = lean_box(0);
v___x_1971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
lean_ctor_set(v___x_1971_, 1, v_b_1934_);
v_sz_1972_ = lean_array_size(v_vs_1969_);
v___x_1973_ = ((size_t)0ULL);
v___x_1974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__6(v_vs_1969_, v_sz_1972_, v___x_1973_, v___x_1971_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1989_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1977_ = v___x_1974_;
v_isShared_1978_ = v_isSharedCheck_1989_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1974_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1989_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v_fst_1979_; 
v_fst_1979_ = lean_ctor_get(v_a_1975_, 0);
if (lean_obj_tag(v_fst_1979_) == 0)
{
lean_object* v_snd_1980_; lean_object* v___x_1981_; lean_object* v___x_1983_; 
v_snd_1980_ = lean_ctor_get(v_a_1975_, 1);
lean_inc(v_snd_1980_);
lean_dec(v_a_1975_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_snd_1980_);
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 0, v___x_1981_);
v___x_1983_ = v___x_1977_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1981_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
else
{
lean_object* v_val_1985_; lean_object* v___x_1987_; 
lean_inc_ref(v_fst_1979_);
lean_dec(v_a_1975_);
v_val_1985_ = lean_ctor_get(v_fst_1979_, 0);
lean_inc(v_val_1985_);
lean_dec_ref_known(v_fst_1979_, 1);
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 0, v_val_1985_);
v___x_1987_ = v___x_1977_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_val_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
v_a_1990_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1974_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1974_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__5(lean_object* v_init_1998_, lean_object* v_as_1999_, size_t v_sz_2000_, size_t v_i_2001_, lean_object* v_b_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
uint8_t v___x_2008_; 
v___x_2008_ = lean_usize_dec_lt(v_i_2001_, v_sz_2000_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_b_2002_);
return v___x_2009_;
}
else
{
lean_object* v_snd_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2044_; 
v_snd_2010_ = lean_ctor_get(v_b_2002_, 1);
v_isSharedCheck_2044_ = !lean_is_exclusive(v_b_2002_);
if (v_isSharedCheck_2044_ == 0)
{
lean_object* v_unused_2045_; 
v_unused_2045_ = lean_ctor_get(v_b_2002_, 0);
lean_dec(v_unused_2045_);
v___x_2012_ = v_b_2002_;
v_isShared_2013_ = v_isSharedCheck_2044_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_snd_2010_);
lean_dec(v_b_2002_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2044_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; lean_object* v_a_2015_; lean_object* v___x_2016_; 
v___x_2014_ = lean_box(0);
v_a_2015_ = lean_array_uget_borrowed(v_as_1999_, v_i_2001_);
lean_inc(v_snd_2010_);
v___x_2016_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2(v_init_1998_, v_a_2015_, v_snd_2010_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2035_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2035_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2035_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
if (lean_obj_tag(v_a_2017_) == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2021_, 0, v_a_2017_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 0, v___x_2021_);
v___x_2023_ = v___x_2012_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v_snd_2010_);
v___x_2023_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
lean_object* v___x_2025_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2023_);
v___x_2025_ = v___x_2019_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; 
lean_del_object(v___x_2019_);
lean_dec(v_snd_2010_);
v_a_2028_ = lean_ctor_get(v_a_2017_, 0);
lean_inc(v_a_2028_);
lean_dec_ref_known(v_a_2017_, 1);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v_a_2028_);
lean_ctor_set(v___x_2012_, 0, v___x_2014_);
v___x_2030_ = v___x_2012_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v___x_2014_);
lean_ctor_set(v_reuseFailAlloc_2034_, 1, v_a_2028_);
v___x_2030_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
size_t v___x_2031_; size_t v___x_2032_; 
v___x_2031_ = ((size_t)1ULL);
v___x_2032_ = lean_usize_add(v_i_2001_, v___x_2031_);
v_i_2001_ = v___x_2032_;
v_b_2002_ = v___x_2030_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
lean_del_object(v___x_2012_);
lean_dec(v_snd_2010_);
v_a_2036_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v___x_2016_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_2016_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__5___boxed(lean_object* v_init_2046_, lean_object* v_as_2047_, lean_object* v_sz_2048_, lean_object* v_i_2049_, lean_object* v_b_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
size_t v_sz_boxed_2056_; size_t v_i_boxed_2057_; lean_object* v_res_2058_; 
v_sz_boxed_2056_ = lean_unbox_usize(v_sz_2048_);
lean_dec(v_sz_2048_);
v_i_boxed_2057_ = lean_unbox_usize(v_i_2049_);
lean_dec(v_i_2049_);
v_res_2058_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2_spec__5(v_init_2046_, v_as_2047_, v_sz_boxed_2056_, v_i_boxed_2057_, v_b_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec_ref(v_as_2047_);
lean_dec_ref(v_init_2046_);
return v_res_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2___boxed(lean_object* v_init_2059_, lean_object* v_n_2060_, lean_object* v_b_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2(v_init_2059_, v_n_2060_, v_b_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec_ref(v_n_2060_);
lean_dec_ref(v_init_2059_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1(lean_object* v_t_2068_, lean_object* v_init_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_root_2075_; lean_object* v_tail_2076_; lean_object* v___x_2077_; 
v_root_2075_ = lean_ctor_get(v_t_2068_, 0);
v_tail_2076_ = lean_ctor_get(v_t_2068_, 1);
lean_inc_ref(v_init_2069_);
v___x_2077_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__2(v_init_2069_, v_root_2075_, v_init_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
lean_dec_ref(v_init_2069_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2114_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2080_ = v___x_2077_;
v_isShared_2081_ = v_isSharedCheck_2114_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2077_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2114_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
if (lean_obj_tag(v_a_2078_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2084_; 
v_a_2082_ = lean_ctor_get(v_a_2078_, 0);
lean_inc(v_a_2082_);
lean_dec_ref_known(v_a_2078_, 1);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v_a_2082_);
v___x_2084_ = v___x_2080_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2082_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; size_t v_sz_2089_; size_t v___x_2090_; lean_object* v___x_2091_; 
lean_del_object(v___x_2080_);
v_a_2086_ = lean_ctor_get(v_a_2078_, 0);
lean_inc(v_a_2086_);
lean_dec_ref_known(v_a_2078_, 1);
v___x_2087_ = lean_box(0);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
lean_ctor_set(v___x_2088_, 1, v_a_2086_);
v_sz_2089_ = lean_array_size(v_tail_2076_);
v___x_2090_ = ((size_t)0ULL);
v___x_2091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_tail_2076_, v_sz_2089_, v___x_2090_, v___x_2088_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2105_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2105_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2105_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v_fst_2096_; 
v_fst_2096_ = lean_ctor_get(v_a_2092_, 0);
if (lean_obj_tag(v_fst_2096_) == 0)
{
lean_object* v_snd_2097_; lean_object* v___x_2099_; 
v_snd_2097_ = lean_ctor_get(v_a_2092_, 1);
lean_inc(v_snd_2097_);
lean_dec(v_a_2092_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v_snd_2097_);
v___x_2099_ = v___x_2094_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_snd_2097_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
else
{
lean_object* v_val_2101_; lean_object* v___x_2103_; 
lean_inc_ref(v_fst_2096_);
lean_dec(v_a_2092_);
v_val_2101_ = lean_ctor_get(v_fst_2096_, 0);
lean_inc(v_val_2101_);
lean_dec_ref_known(v_fst_2096_, 1);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v_val_2101_);
v___x_2103_ = v___x_2094_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_val_2101_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
v_a_2106_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2091_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2091_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
v_a_2115_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2077_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2077_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1___boxed(lean_object* v_t_2123_, lean_object* v_init_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v_res_2130_; 
v_res_2130_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1(v_t_2123_, v_init_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec_ref(v_t_2123_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg(lean_object* v_a_2131_, lean_object* v_as_2132_, size_t v_sz_2133_, size_t v_i_2134_, lean_object* v_b_2135_){
_start:
{
uint8_t v___x_2137_; 
v___x_2137_ = lean_usize_dec_lt(v_i_2134_, v_sz_2133_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v_b_2135_);
return v___x_2138_;
}
else
{
lean_object* v_snd_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2157_; 
v_snd_2139_ = lean_ctor_get(v_b_2135_, 1);
v_isSharedCheck_2157_ = !lean_is_exclusive(v_b_2135_);
if (v_isSharedCheck_2157_ == 0)
{
lean_object* v_unused_2158_; 
v_unused_2158_ = lean_ctor_get(v_b_2135_, 0);
lean_dec(v_unused_2158_);
v___x_2141_ = v_b_2135_;
v_isShared_2142_ = v_isSharedCheck_2157_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_snd_2139_);
lean_dec(v_b_2135_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2157_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v_a_2145_; lean_object* v_a_2152_; 
v___x_2143_ = lean_box(0);
v_a_2152_ = lean_array_uget_borrowed(v_as_2132_, v_i_2134_);
if (lean_obj_tag(v_a_2152_) == 0)
{
v_a_2145_ = v_snd_2139_;
goto v___jp_2144_;
}
else
{
lean_object* v_val_2153_; lean_object* v___x_2154_; uint8_t v___x_2155_; 
v_val_2153_ = lean_ctor_get(v_a_2152_, 0);
v___x_2154_ = l_Lean_LocalDecl_fvarId(v_val_2153_);
v___x_2155_ = l_Lean_FVarIdHashSet_contains(v_a_2131_, v___x_2154_);
if (v___x_2155_ == 0)
{
lean_dec(v___x_2154_);
v_a_2145_ = v_snd_2139_;
goto v___jp_2144_;
}
else
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_array_push(v_snd_2139_, v___x_2154_);
v_a_2145_ = v___x_2156_;
goto v___jp_2144_;
}
}
v___jp_2144_:
{
lean_object* v___x_2147_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 1, v_a_2145_);
lean_ctor_set(v___x_2141_, 0, v___x_2143_);
v___x_2147_ = v___x_2141_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_a_2145_);
v___x_2147_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
size_t v___x_2148_; size_t v___x_2149_; 
v___x_2148_ = ((size_t)1ULL);
v___x_2149_ = lean_usize_add(v_i_2134_, v___x_2148_);
v_i_2134_ = v___x_2149_;
v_b_2135_ = v___x_2147_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg___boxed(lean_object* v_a_2159_, lean_object* v_as_2160_, lean_object* v_sz_2161_, lean_object* v_i_2162_, lean_object* v_b_2163_, lean_object* v___y_2164_){
_start:
{
size_t v_sz_boxed_2165_; size_t v_i_boxed_2166_; lean_object* v_res_2167_; 
v_sz_boxed_2165_ = lean_unbox_usize(v_sz_2161_);
lean_dec(v_sz_2161_);
v_i_boxed_2166_ = lean_unbox_usize(v_i_2162_);
lean_dec(v_i_2162_);
v_res_2167_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg(v_a_2159_, v_as_2160_, v_sz_boxed_2165_, v_i_boxed_2166_, v_b_2163_);
lean_dec_ref(v_as_2160_);
lean_dec_ref(v_a_2159_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6(lean_object* v_a_2168_, lean_object* v_as_2169_, size_t v_sz_2170_, size_t v_i_2171_, lean_object* v_b_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_){
_start:
{
uint8_t v___x_2178_; 
v___x_2178_ = lean_usize_dec_lt(v_i_2171_, v_sz_2170_);
if (v___x_2178_ == 0)
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2179_, 0, v_b_2172_);
return v___x_2179_;
}
else
{
lean_object* v_snd_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2198_; 
v_snd_2180_ = lean_ctor_get(v_b_2172_, 1);
v_isSharedCheck_2198_ = !lean_is_exclusive(v_b_2172_);
if (v_isSharedCheck_2198_ == 0)
{
lean_object* v_unused_2199_; 
v_unused_2199_ = lean_ctor_get(v_b_2172_, 0);
lean_dec(v_unused_2199_);
v___x_2182_ = v_b_2172_;
v_isShared_2183_ = v_isSharedCheck_2198_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_snd_2180_);
lean_dec(v_b_2172_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2198_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; lean_object* v_a_2186_; lean_object* v_a_2193_; 
v___x_2184_ = lean_box(0);
v_a_2193_ = lean_array_uget_borrowed(v_as_2169_, v_i_2171_);
if (lean_obj_tag(v_a_2193_) == 0)
{
v_a_2186_ = v_snd_2180_;
goto v___jp_2185_;
}
else
{
lean_object* v_val_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v_val_2194_ = lean_ctor_get(v_a_2193_, 0);
v___x_2195_ = l_Lean_LocalDecl_fvarId(v_val_2194_);
v___x_2196_ = l_Lean_FVarIdHashSet_contains(v_a_2168_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_dec(v___x_2195_);
v_a_2186_ = v_snd_2180_;
goto v___jp_2185_;
}
else
{
lean_object* v___x_2197_; 
v___x_2197_ = lean_array_push(v_snd_2180_, v___x_2195_);
v_a_2186_ = v___x_2197_;
goto v___jp_2185_;
}
}
v___jp_2185_:
{
lean_object* v___x_2188_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 1, v_a_2186_);
lean_ctor_set(v___x_2182_, 0, v___x_2184_);
v___x_2188_ = v___x_2182_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2184_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_a_2186_);
v___x_2188_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
size_t v___x_2189_; size_t v___x_2190_; lean_object* v___x_2191_; 
v___x_2189_ = ((size_t)1ULL);
v___x_2190_ = lean_usize_add(v_i_2171_, v___x_2189_);
v___x_2191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg(v_a_2168_, v_as_2169_, v_sz_2170_, v___x_2190_, v___x_2188_);
return v___x_2191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6___boxed(lean_object* v_a_2200_, lean_object* v_as_2201_, lean_object* v_sz_2202_, lean_object* v_i_2203_, lean_object* v_b_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
size_t v_sz_boxed_2210_; size_t v_i_boxed_2211_; lean_object* v_res_2212_; 
v_sz_boxed_2210_ = lean_unbox_usize(v_sz_2202_);
lean_dec(v_sz_2202_);
v_i_boxed_2211_ = lean_unbox_usize(v_i_2203_);
lean_dec(v_i_2203_);
v_res_2212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6(v_a_2200_, v_as_2201_, v_sz_boxed_2210_, v_i_boxed_2211_, v_b_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec_ref(v_as_2201_);
lean_dec_ref(v_a_2200_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg(lean_object* v_a_2213_, lean_object* v_as_2214_, size_t v_sz_2215_, size_t v_i_2216_, lean_object* v_b_2217_){
_start:
{
uint8_t v___x_2219_; 
v___x_2219_ = lean_usize_dec_lt(v_i_2216_, v_sz_2215_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2220_, 0, v_b_2217_);
return v___x_2220_;
}
else
{
lean_object* v_snd_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2239_; 
v_snd_2221_ = lean_ctor_get(v_b_2217_, 1);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_b_2217_);
if (v_isSharedCheck_2239_ == 0)
{
lean_object* v_unused_2240_; 
v_unused_2240_ = lean_ctor_get(v_b_2217_, 0);
lean_dec(v_unused_2240_);
v___x_2223_ = v_b_2217_;
v_isShared_2224_ = v_isSharedCheck_2239_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_snd_2221_);
lean_dec(v_b_2217_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2239_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2225_; lean_object* v_a_2227_; lean_object* v_a_2234_; 
v___x_2225_ = lean_box(0);
v_a_2234_ = lean_array_uget_borrowed(v_as_2214_, v_i_2216_);
if (lean_obj_tag(v_a_2234_) == 0)
{
v_a_2227_ = v_snd_2221_;
goto v___jp_2226_;
}
else
{
lean_object* v_val_2235_; lean_object* v___x_2236_; uint8_t v___x_2237_; 
v_val_2235_ = lean_ctor_get(v_a_2234_, 0);
v___x_2236_ = l_Lean_LocalDecl_fvarId(v_val_2235_);
v___x_2237_ = l_Lean_FVarIdHashSet_contains(v_a_2213_, v___x_2236_);
if (v___x_2237_ == 0)
{
lean_dec(v___x_2236_);
v_a_2227_ = v_snd_2221_;
goto v___jp_2226_;
}
else
{
lean_object* v___x_2238_; 
v___x_2238_ = lean_array_push(v_snd_2221_, v___x_2236_);
v_a_2227_ = v___x_2238_;
goto v___jp_2226_;
}
}
v___jp_2226_:
{
lean_object* v___x_2229_; 
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 1, v_a_2227_);
lean_ctor_set(v___x_2223_, 0, v___x_2225_);
v___x_2229_ = v___x_2223_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v___x_2225_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_a_2227_);
v___x_2229_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
size_t v___x_2230_; size_t v___x_2231_; 
v___x_2230_ = ((size_t)1ULL);
v___x_2231_ = lean_usize_add(v_i_2216_, v___x_2230_);
v_i_2216_ = v___x_2231_;
v_b_2217_ = v___x_2229_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg___boxed(lean_object* v_a_2241_, lean_object* v_as_2242_, lean_object* v_sz_2243_, lean_object* v_i_2244_, lean_object* v_b_2245_, lean_object* v___y_2246_){
_start:
{
size_t v_sz_boxed_2247_; size_t v_i_boxed_2248_; lean_object* v_res_2249_; 
v_sz_boxed_2247_ = lean_unbox_usize(v_sz_2243_);
lean_dec(v_sz_2243_);
v_i_boxed_2248_ = lean_unbox_usize(v_i_2244_);
lean_dec(v_i_2244_);
v_res_2249_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg(v_a_2241_, v_as_2242_, v_sz_boxed_2247_, v_i_boxed_2248_, v_b_2245_);
lean_dec_ref(v_as_2242_);
lean_dec_ref(v_a_2241_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12(lean_object* v_a_2250_, lean_object* v_as_2251_, size_t v_sz_2252_, size_t v_i_2253_, lean_object* v_b_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
uint8_t v___x_2260_; 
v___x_2260_ = lean_usize_dec_lt(v_i_2253_, v_sz_2252_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v_b_2254_);
return v___x_2261_;
}
else
{
lean_object* v_snd_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2280_; 
v_snd_2262_ = lean_ctor_get(v_b_2254_, 1);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_b_2254_);
if (v_isSharedCheck_2280_ == 0)
{
lean_object* v_unused_2281_; 
v_unused_2281_ = lean_ctor_get(v_b_2254_, 0);
lean_dec(v_unused_2281_);
v___x_2264_ = v_b_2254_;
v_isShared_2265_ = v_isSharedCheck_2280_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_snd_2262_);
lean_dec(v_b_2254_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2280_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v_a_2268_; lean_object* v_a_2275_; 
v___x_2266_ = lean_box(0);
v_a_2275_ = lean_array_uget_borrowed(v_as_2251_, v_i_2253_);
if (lean_obj_tag(v_a_2275_) == 0)
{
v_a_2268_ = v_snd_2262_;
goto v___jp_2267_;
}
else
{
lean_object* v_val_2276_; lean_object* v___x_2277_; uint8_t v___x_2278_; 
v_val_2276_ = lean_ctor_get(v_a_2275_, 0);
v___x_2277_ = l_Lean_LocalDecl_fvarId(v_val_2276_);
v___x_2278_ = l_Lean_FVarIdHashSet_contains(v_a_2250_, v___x_2277_);
if (v___x_2278_ == 0)
{
lean_dec(v___x_2277_);
v_a_2268_ = v_snd_2262_;
goto v___jp_2267_;
}
else
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_array_push(v_snd_2262_, v___x_2277_);
v_a_2268_ = v___x_2279_;
goto v___jp_2267_;
}
}
v___jp_2267_:
{
lean_object* v___x_2270_; 
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 1, v_a_2268_);
lean_ctor_set(v___x_2264_, 0, v___x_2266_);
v___x_2270_ = v___x_2264_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2266_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_a_2268_);
v___x_2270_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
size_t v___x_2271_; size_t v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = ((size_t)1ULL);
v___x_2272_ = lean_usize_add(v_i_2253_, v___x_2271_);
v___x_2273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg(v_a_2250_, v_as_2251_, v_sz_2252_, v___x_2272_, v___x_2270_);
return v___x_2273_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12___boxed(lean_object* v_a_2282_, lean_object* v_as_2283_, lean_object* v_sz_2284_, lean_object* v_i_2285_, lean_object* v_b_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_){
_start:
{
size_t v_sz_boxed_2292_; size_t v_i_boxed_2293_; lean_object* v_res_2294_; 
v_sz_boxed_2292_ = lean_unbox_usize(v_sz_2284_);
lean_dec(v_sz_2284_);
v_i_boxed_2293_ = lean_unbox_usize(v_i_2285_);
lean_dec(v_i_2285_);
v_res_2294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12(v_a_2282_, v_as_2283_, v_sz_boxed_2292_, v_i_boxed_2293_, v_b_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_);
lean_dec(v___y_2290_);
lean_dec_ref(v___y_2289_);
lean_dec(v___y_2288_);
lean_dec_ref(v___y_2287_);
lean_dec_ref(v_as_2283_);
lean_dec_ref(v_a_2282_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(lean_object* v_init_2295_, lean_object* v_a_2296_, lean_object* v_n_2297_, lean_object* v_b_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
if (lean_obj_tag(v_n_2297_) == 0)
{
lean_object* v_cs_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; size_t v_sz_2307_; size_t v___x_2308_; lean_object* v___x_2309_; 
v_cs_2304_ = lean_ctor_get(v_n_2297_, 0);
v___x_2305_ = lean_box(0);
v___x_2306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
lean_ctor_set(v___x_2306_, 1, v_b_2298_);
v_sz_2307_ = lean_array_size(v_cs_2304_);
v___x_2308_ = ((size_t)0ULL);
v___x_2309_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__11(v_init_2295_, v_a_2296_, v_cs_2304_, v_sz_2307_, v___x_2308_, v___x_2306_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2324_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2312_ = v___x_2309_;
v_isShared_2313_ = v_isSharedCheck_2324_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2309_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2324_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v_fst_2314_; 
v_fst_2314_ = lean_ctor_get(v_a_2310_, 0);
if (lean_obj_tag(v_fst_2314_) == 0)
{
lean_object* v_snd_2315_; lean_object* v___x_2316_; lean_object* v___x_2318_; 
v_snd_2315_ = lean_ctor_get(v_a_2310_, 1);
lean_inc(v_snd_2315_);
lean_dec(v_a_2310_);
v___x_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2316_, 0, v_snd_2315_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2316_);
v___x_2318_ = v___x_2312_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
else
{
lean_object* v_val_2320_; lean_object* v___x_2322_; 
lean_inc_ref(v_fst_2314_);
lean_dec(v_a_2310_);
v_val_2320_ = lean_ctor_get(v_fst_2314_, 0);
lean_inc(v_val_2320_);
lean_dec_ref_known(v_fst_2314_, 1);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v_val_2320_);
v___x_2322_ = v___x_2312_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_val_2320_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
v_a_2325_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2309_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2309_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v_vs_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; size_t v_sz_2336_; size_t v___x_2337_; lean_object* v___x_2338_; 
v_vs_2333_ = lean_ctor_get(v_n_2297_, 0);
v___x_2334_ = lean_box(0);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
lean_ctor_set(v___x_2335_, 1, v_b_2298_);
v_sz_2336_ = lean_array_size(v_vs_2333_);
v___x_2337_ = ((size_t)0ULL);
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12(v_a_2296_, v_vs_2333_, v_sz_2336_, v___x_2337_, v___x_2335_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2353_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2341_ = v___x_2338_;
v_isShared_2342_ = v_isSharedCheck_2353_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2353_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v_fst_2343_; 
v_fst_2343_ = lean_ctor_get(v_a_2339_, 0);
if (lean_obj_tag(v_fst_2343_) == 0)
{
lean_object* v_snd_2344_; lean_object* v___x_2345_; lean_object* v___x_2347_; 
v_snd_2344_ = lean_ctor_get(v_a_2339_, 1);
lean_inc(v_snd_2344_);
lean_dec(v_a_2339_);
v___x_2345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2345_, 0, v_snd_2344_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2345_);
v___x_2347_ = v___x_2341_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v___x_2345_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
else
{
lean_object* v_val_2349_; lean_object* v___x_2351_; 
lean_inc_ref(v_fst_2343_);
lean_dec(v_a_2339_);
v_val_2349_ = lean_ctor_get(v_fst_2343_, 0);
lean_inc(v_val_2349_);
lean_dec_ref_known(v_fst_2343_, 1);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v_val_2349_);
v___x_2351_ = v___x_2341_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_val_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
v_a_2354_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2338_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2338_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__11(lean_object* v_init_2362_, lean_object* v_a_2363_, lean_object* v_as_2364_, size_t v_sz_2365_, size_t v_i_2366_, lean_object* v_b_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
uint8_t v___x_2373_; 
v___x_2373_ = lean_usize_dec_lt(v_i_2366_, v_sz_2365_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_b_2367_);
return v___x_2374_;
}
else
{
lean_object* v_snd_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2409_; 
v_snd_2375_ = lean_ctor_get(v_b_2367_, 1);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_b_2367_);
if (v_isSharedCheck_2409_ == 0)
{
lean_object* v_unused_2410_; 
v_unused_2410_ = lean_ctor_get(v_b_2367_, 0);
lean_dec(v_unused_2410_);
v___x_2377_ = v_b_2367_;
v_isShared_2378_ = v_isSharedCheck_2409_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_snd_2375_);
lean_dec(v_b_2367_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2409_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2379_; lean_object* v_a_2380_; lean_object* v___x_2381_; 
v___x_2379_ = lean_box(0);
v_a_2380_ = lean_array_uget_borrowed(v_as_2364_, v_i_2366_);
lean_inc(v_snd_2375_);
v___x_2381_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(v_init_2362_, v_a_2363_, v_a_2380_, v_snd_2375_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2400_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2384_ = v___x_2381_;
v_isShared_2385_ = v_isSharedCheck_2400_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2381_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2400_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
if (lean_obj_tag(v_a_2382_) == 0)
{
lean_object* v___x_2386_; lean_object* v___x_2388_; 
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_a_2382_);
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 0, v___x_2386_);
v___x_2388_ = v___x_2377_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v___x_2386_);
lean_ctor_set(v_reuseFailAlloc_2392_, 1, v_snd_2375_);
v___x_2388_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
lean_object* v___x_2390_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v___x_2388_);
v___x_2390_ = v___x_2384_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; 
lean_del_object(v___x_2384_);
lean_dec(v_snd_2375_);
v_a_2393_ = lean_ctor_get(v_a_2382_, 0);
lean_inc(v_a_2393_);
lean_dec_ref_known(v_a_2382_, 1);
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 1, v_a_2393_);
lean_ctor_set(v___x_2377_, 0, v___x_2379_);
v___x_2395_ = v___x_2377_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2379_);
lean_ctor_set(v_reuseFailAlloc_2399_, 1, v_a_2393_);
v___x_2395_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
size_t v___x_2396_; size_t v___x_2397_; 
v___x_2396_ = ((size_t)1ULL);
v___x_2397_ = lean_usize_add(v_i_2366_, v___x_2396_);
v_i_2366_ = v___x_2397_;
v_b_2367_ = v___x_2395_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
lean_del_object(v___x_2377_);
lean_dec(v_snd_2375_);
v_a_2401_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2381_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2381_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__11___boxed(lean_object* v_init_2411_, lean_object* v_a_2412_, lean_object* v_as_2413_, lean_object* v_sz_2414_, lean_object* v_i_2415_, lean_object* v_b_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_){
_start:
{
size_t v_sz_boxed_2422_; size_t v_i_boxed_2423_; lean_object* v_res_2424_; 
v_sz_boxed_2422_ = lean_unbox_usize(v_sz_2414_);
lean_dec(v_sz_2414_);
v_i_boxed_2423_ = lean_unbox_usize(v_i_2415_);
lean_dec(v_i_2415_);
v_res_2424_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__11(v_init_2411_, v_a_2412_, v_as_2413_, v_sz_boxed_2422_, v_i_boxed_2423_, v_b_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
lean_dec_ref(v_as_2413_);
lean_dec_ref(v_a_2412_);
lean_dec_ref(v_init_2411_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5___boxed(lean_object* v_init_2425_, lean_object* v_a_2426_, lean_object* v_n_2427_, lean_object* v_b_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(v_init_2425_, v_a_2426_, v_n_2427_, v_b_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec_ref(v_n_2427_);
lean_dec_ref(v_a_2426_);
lean_dec_ref(v_init_2425_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2(lean_object* v_a_2435_, lean_object* v_t_2436_, lean_object* v_init_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_root_2443_; lean_object* v_tail_2444_; lean_object* v___x_2445_; 
v_root_2443_ = lean_ctor_get(v_t_2436_, 0);
v_tail_2444_ = lean_ctor_get(v_t_2436_, 1);
lean_inc_ref(v_init_2437_);
v___x_2445_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(v_init_2437_, v_a_2435_, v_root_2443_, v_init_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec_ref(v_init_2437_);
if (lean_obj_tag(v___x_2445_) == 0)
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2482_; 
v_a_2446_ = lean_ctor_get(v___x_2445_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2445_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2448_ = v___x_2445_;
v_isShared_2449_ = v_isSharedCheck_2482_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2445_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2482_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
if (lean_obj_tag(v_a_2446_) == 0)
{
lean_object* v_a_2450_; lean_object* v___x_2452_; 
v_a_2450_ = lean_ctor_get(v_a_2446_, 0);
lean_inc(v_a_2450_);
lean_dec_ref_known(v_a_2446_, 1);
if (v_isShared_2449_ == 0)
{
lean_ctor_set(v___x_2448_, 0, v_a_2450_);
v___x_2452_ = v___x_2448_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2450_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; size_t v_sz_2457_; size_t v___x_2458_; lean_object* v___x_2459_; 
lean_del_object(v___x_2448_);
v_a_2454_ = lean_ctor_get(v_a_2446_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v_a_2446_, 1);
v___x_2455_ = lean_box(0);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
lean_ctor_set(v___x_2456_, 1, v_a_2454_);
v_sz_2457_ = lean_array_size(v_tail_2444_);
v___x_2458_ = ((size_t)0ULL);
v___x_2459_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6(v_a_2435_, v_tail_2444_, v_sz_2457_, v___x_2458_, v___x_2456_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2473_; 
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2462_ = v___x_2459_;
v_isShared_2463_ = v_isSharedCheck_2473_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2459_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2473_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v_fst_2464_; 
v_fst_2464_ = lean_ctor_get(v_a_2460_, 0);
if (lean_obj_tag(v_fst_2464_) == 0)
{
lean_object* v_snd_2465_; lean_object* v___x_2467_; 
v_snd_2465_ = lean_ctor_get(v_a_2460_, 1);
lean_inc(v_snd_2465_);
lean_dec(v_a_2460_);
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 0, v_snd_2465_);
v___x_2467_ = v___x_2462_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_snd_2465_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
else
{
lean_object* v_val_2469_; lean_object* v___x_2471_; 
lean_inc_ref(v_fst_2464_);
lean_dec(v_a_2460_);
v_val_2469_ = lean_ctor_get(v_fst_2464_, 0);
lean_inc(v_val_2469_);
lean_dec_ref_known(v_fst_2464_, 1);
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 0, v_val_2469_);
v___x_2471_ = v___x_2462_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_val_2469_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
v_a_2474_ = lean_ctor_get(v___x_2459_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2459_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2459_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2445_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2445_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2445_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2445_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2___boxed(lean_object* v_a_2491_, lean_object* v_t_2492_, lean_object* v_init_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2(v_a_2491_, v_t_2492_, v_init_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec_ref(v_t_2492_);
lean_dec_ref(v_a_2491_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2(lean_object* v_candidates_2500_, lean_object* v_mvarId_2501_, lean_object* v___x_2502_, lean_object* v___f_2503_, lean_object* v___f_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_lctx_2510_; lean_object* v_decls_2511_; lean_object* v___x_2512_; 
v_lctx_2510_ = lean_ctor_get(v___y_2505_, 2);
v_decls_2511_ = lean_ctor_get(v_lctx_2510_, 1);
lean_inc_ref(v_decls_2511_);
v___x_2512_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1(v_decls_2511_, v_candidates_2500_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2514_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2512_, 1);
v___x_2514_ = l_Lean_MVarId_getType(v_mvarId_2501_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2516_; lean_object* v_a_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; lean_object* v___y_2521_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v___x_2516_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_a_2515_, v___y_2506_);
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_a_2517_);
lean_dec_ref(v___x_2516_);
v___x_2518_ = l_Lean_Expr_hasFVar(v_a_2517_);
v___x_2519_ = lean_st_mk_ref(v_a_2513_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec(v_a_2517_);
lean_dec_ref(v___f_2504_);
v___x_2543_ = lean_box(0);
lean_inc(v___y_2508_);
lean_inc_ref(v___y_2507_);
lean_inc(v___y_2506_);
lean_inc_ref(v___y_2505_);
lean_inc(v___x_2519_);
v___x_2544_ = lean_apply_7(v___f_2503_, v___x_2543_, v___x_2519_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, lean_box(0));
v___y_2521_ = v___x_2544_;
goto v___jp_2520_;
}
else
{
lean_object* v___x_2545_; uint8_t v___x_2546_; lean_object* v___x_2547_; 
v___x_2545_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___lam__2___closed__0));
v___x_2546_ = 0;
v___x_2547_ = l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0(v___x_2545_, v___f_2504_, v_a_2517_, v___x_2546_, v___x_2519_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
lean_inc(v___y_2508_);
lean_inc_ref(v___y_2507_);
lean_inc(v___y_2506_);
lean_inc_ref(v___y_2505_);
lean_inc(v___x_2519_);
v___x_2549_ = lean_apply_7(v___f_2503_, v_a_2548_, v___x_2519_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, lean_box(0));
v___y_2521_ = v___x_2549_;
goto v___jp_2520_;
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec(v___x_2519_);
lean_dec_ref(v_decls_2511_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec_ref(v___f_2503_);
v_a_2550_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2547_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2547_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
v___jp_2520_:
{
if (lean_obj_tag(v___y_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2534_; 
v_a_2522_ = lean_ctor_get(v___y_2521_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___y_2521_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2524_ = v___y_2521_;
v_isShared_2525_ = v_isSharedCheck_2534_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___y_2521_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2534_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2526_; uint8_t v___x_2527_; 
v___x_2526_ = lean_st_ref_get(v___x_2519_);
lean_dec(v___x_2519_);
lean_dec(v___x_2526_);
v___x_2527_ = l_Lean_FVarIdHashSet_isEmpty(v_a_2522_);
if (v___x_2527_ == 0)
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
lean_del_object(v___x_2524_);
v___x_2528_ = lean_mk_empty_array_with_capacity(v___x_2502_);
v___x_2529_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2(v_a_2522_, v_decls_2511_, v___x_2528_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec_ref(v_decls_2511_);
lean_dec(v_a_2522_);
return v___x_2529_;
}
else
{
lean_object* v___x_2530_; lean_object* v___x_2532_; 
lean_dec(v_a_2522_);
lean_dec_ref(v_decls_2511_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
v___x_2530_ = lean_mk_empty_array_with_capacity(v___x_2502_);
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 0, v___x_2530_);
v___x_2532_ = v___x_2524_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec(v___x_2519_);
lean_dec_ref(v_decls_2511_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
v_a_2535_ = lean_ctor_get(v___y_2521_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___y_2521_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___y_2521_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___y_2521_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_dec(v_a_2513_);
lean_dec_ref(v_decls_2511_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec_ref(v___f_2504_);
lean_dec_ref(v___f_2503_);
v_a_2558_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2514_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2514_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
lean_dec_ref(v_decls_2511_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec_ref(v___f_2504_);
lean_dec_ref(v___f_2503_);
lean_dec(v_mvarId_2501_);
v_a_2566_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2512_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2512_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2___boxed(lean_object* v_candidates_2574_, lean_object* v_mvarId_2575_, lean_object* v___x_2576_, lean_object* v___f_2577_, lean_object* v___f_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lean_MVarId_getNondepPropHyps___lam__2(v_candidates_2574_, v_mvarId_2575_, v___x_2576_, v___f_2577_, v___f_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
lean_dec(v___x_2576_);
return v_res_2584_;
}
}
static lean_object* _init_l_Lean_MVarId_getNondepPropHyps___closed__2(void){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = lean_box(0);
v___x_2588_ = lean_unsigned_to_nat(16u);
v___x_2589_ = lean_mk_array(v___x_2588_, v___x_2587_);
return v___x_2589_;
}
}
static lean_object* _init_l_Lean_MVarId_getNondepPropHyps___closed__3(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v_candidates_2592_; 
v___x_2590_ = lean_obj_once(&l_Lean_MVarId_getNondepPropHyps___closed__2, &l_Lean_MVarId_getNondepPropHyps___closed__2_once, _init_l_Lean_MVarId_getNondepPropHyps___closed__2);
v___x_2591_ = lean_unsigned_to_nat(0u);
v_candidates_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_candidates_2592_, 0, v___x_2591_);
lean_ctor_set(v_candidates_2592_, 1, v___x_2590_);
return v_candidates_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object* v_mvarId_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_){
_start:
{
lean_object* v___f_2599_; lean_object* v___f_2600_; lean_object* v___x_2601_; lean_object* v_candidates_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; 
v___f_2599_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___closed__0));
v___f_2600_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___closed__1));
v___x_2601_ = lean_unsigned_to_nat(0u);
v_candidates_2602_ = lean_obj_once(&l_Lean_MVarId_getNondepPropHyps___closed__3, &l_Lean_MVarId_getNondepPropHyps___closed__3_once, _init_l_Lean_MVarId_getNondepPropHyps___closed__3);
lean_inc(v_mvarId_2593_);
v___f_2603_ = lean_alloc_closure((void*)(l_Lean_MVarId_getNondepPropHyps___lam__2___boxed), 10, 5);
lean_closure_set(v___f_2603_, 0, v_candidates_2602_);
lean_closure_set(v___f_2603_, 1, v_mvarId_2593_);
lean_closure_set(v___f_2603_, 2, v___x_2601_);
lean_closure_set(v___f_2603_, 3, v___f_2600_);
lean_closure_set(v___f_2603_, 4, v___f_2599_);
v___x_2604_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_2593_, v___f_2603_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___boxed(lean_object* v_mvarId_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l_Lean_MVarId_getNondepPropHyps(v_mvarId_2605_, v_a_2606_, v_a_2607_, v_a_2608_, v_a_2609_);
lean_dec(v_a_2609_);
lean_dec_ref(v_a_2608_);
lean_dec(v_a_2607_);
lean_dec_ref(v_a_2606_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1(lean_object* v_e_2612_, lean_object* v_a_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_){
_start:
{
lean_object* v___x_2620_; 
v___x_2620_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___redArg(v_e_2612_, v_a_2613_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1___boxed(lean_object* v_e_2621_, lean_object* v_a_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__1(v_e_2621_, v_a_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec(v_a_2622_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2(lean_object* v_e_2630_, lean_object* v_a_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___redArg(v_e_2630_, v_a_2631_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2___boxed(lean_object* v_e_2639_, lean_object* v_a_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2(v_e_2639_, v_a_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec(v_a_2640_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14(lean_object* v_a_2648_, lean_object* v_as_2649_, size_t v_sz_2650_, size_t v_i_2651_, lean_object* v_b_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v___x_2658_; 
v___x_2658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___redArg(v_a_2648_, v_as_2649_, v_sz_2650_, v_i_2651_, v_b_2652_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14___boxed(lean_object* v_a_2659_, lean_object* v_as_2660_, lean_object* v_sz_2661_, lean_object* v_i_2662_, lean_object* v_b_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
size_t v_sz_boxed_2669_; size_t v_i_boxed_2670_; lean_object* v_res_2671_; 
v_sz_boxed_2669_ = lean_unbox_usize(v_sz_2661_);
lean_dec(v_sz_2661_);
v_i_boxed_2670_ = lean_unbox_usize(v_i_2662_);
lean_dec(v_i_2662_);
v_res_2671_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__6_spec__14(v_a_2659_, v_as_2660_, v_sz_boxed_2669_, v_i_boxed_2670_, v_b_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec_ref(v_as_2660_);
lean_dec_ref(v_a_2659_);
return v_res_2671_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2672_, lean_object* v_m_2673_, lean_object* v_a_2674_){
_start:
{
uint8_t v___x_2675_; 
v___x_2675_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___redArg(v_m_2673_, v_a_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2676_, lean_object* v_m_2677_, lean_object* v_a_2678_){
_start:
{
uint8_t v_res_2679_; lean_object* v_r_2680_; 
v_res_2679_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_2676_, v_m_2677_, v_a_2678_);
lean_dec_ref(v_a_2678_);
lean_dec_ref(v_m_2677_);
v_r_2680_ = lean_box(v_res_2679_);
return v_r_2680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2681_, lean_object* v_m_2682_, lean_object* v_a_2683_, lean_object* v_b_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6___redArg(v_m_2682_, v_a_2683_, v_b_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16(lean_object* v_a_2686_, lean_object* v_as_2687_, size_t v_sz_2688_, size_t v_i_2689_, lean_object* v_b_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v___x_2696_; 
v___x_2696_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___redArg(v_a_2686_, v_as_2687_, v_sz_2688_, v_i_2689_, v_b_2690_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16___boxed(lean_object* v_a_2697_, lean_object* v_as_2698_, lean_object* v_sz_2699_, lean_object* v_i_2700_, lean_object* v_b_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
size_t v_sz_boxed_2707_; size_t v_i_boxed_2708_; lean_object* v_res_2709_; 
v_sz_boxed_2707_ = lean_unbox_usize(v_sz_2699_);
lean_dec(v_sz_2699_);
v_i_boxed_2708_ = lean_unbox_usize(v_i_2700_);
lean_dec(v_i_2700_);
v_res_2709_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__12_spec__16(v_a_2697_, v_as_2698_, v_sz_boxed_2707_, v_i_boxed_2708_, v_b_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec_ref(v_as_2698_);
lean_dec_ref(v_a_2697_);
return v_res_2709_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object* v_00_u03b2_2710_, lean_object* v_a_2711_, lean_object* v_x_2712_){
_start:
{
uint8_t v___x_2713_; 
v___x_2713_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___redArg(v_a_2711_, v_x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10___boxed(lean_object* v_00_u03b2_2714_, lean_object* v_a_2715_, lean_object* v_x_2716_){
_start:
{
uint8_t v_res_2717_; lean_object* v_r_2718_; 
v_res_2717_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__5_spec__10(v_00_u03b2_2714_, v_a_2715_, v_x_2716_);
lean_dec(v_x_2716_);
lean_dec_ref(v_a_2715_);
v_r_2718_ = lean_box(v_res_2717_);
return v_r_2718_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12(lean_object* v_00_u03b2_2719_, lean_object* v_data_2720_){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12___redArg(v_data_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19(lean_object* v_00_u03b2_2722_, lean_object* v_i_2723_, lean_object* v_source_2724_, lean_object* v_target_2725_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19___redArg(v_i_2723_, v_source_2724_, v_target_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19_spec__22(lean_object* v_00_u03b2_2727_, lean_object* v_x_2728_, lean_object* v_x_2729_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0_spec__2_spec__6_spec__12_spec__19_spec__22___redArg(v_x_2728_, v_x_2729_);
return v___x_2730_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = l_Lean_maxRecDepthErrorMessage;
v___x_2737_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2736_);
return v___x_2737_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2738_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3);
v___x_2739_ = l_Lean_MessageData_ofFormat(v___x_2738_);
return v___x_2739_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2740_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4);
v___x_2741_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2));
v___x_2742_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2741_);
lean_ctor_set(v___x_2742_, 1, v___x_2740_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(lean_object* v_ref_2743_){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2745_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5);
v___x_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2746_, 0, v_ref_2743_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___boxed(lean_object* v_ref_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(v_ref_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1(lean_object* v_00_u03b1_2751_, lean_object* v_ref_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(v_ref_2752_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___boxed(lean_object* v_00_u03b1_2760_, lean_object* v_ref_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1(v_00_u03b1_2760_, v_ref_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
lean_dec(v___y_2762_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(lean_object* v_x_2769_, lean_object* v_mvarId_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_toCold_2777_; lean_object* v_currRecDepth_2778_; lean_object* v_ref_2779_; uint8_t v_diag_2780_; uint8_t v_suppressElabErrors_2781_; lean_object* v_maxRecDepth_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; 
v_toCold_2777_ = lean_ctor_get(v_a_2774_, 0);
v_currRecDepth_2778_ = lean_ctor_get(v_a_2774_, 1);
v_ref_2779_ = lean_ctor_get(v_a_2774_, 2);
v_diag_2780_ = lean_ctor_get_uint8(v_a_2774_, sizeof(void*)*3);
v_suppressElabErrors_2781_ = lean_ctor_get_uint8(v_a_2774_, sizeof(void*)*3 + 1);
v_maxRecDepth_2809_ = lean_ctor_get(v_toCold_2777_, 3);
v___x_2810_ = lean_unsigned_to_nat(0u);
v___x_2811_ = lean_nat_dec_eq(v_maxRecDepth_2809_, v___x_2810_);
if (v___x_2811_ == 0)
{
uint8_t v___x_2812_; 
v___x_2812_ = lean_nat_dec_eq(v_currRecDepth_2778_, v_maxRecDepth_2809_);
if (v___x_2812_ == 0)
{
goto v___jp_2782_;
}
else
{
lean_object* v___x_2813_; 
lean_dec(v_mvarId_2770_);
lean_dec_ref(v_x_2769_);
lean_inc(v_ref_2779_);
v___x_2813_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(v_ref_2779_);
return v___x_2813_;
}
}
else
{
goto v___jp_2782_;
}
v___jp_2782_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2783_ = lean_unsigned_to_nat(1u);
v___x_2784_ = lean_nat_add(v_currRecDepth_2778_, v___x_2783_);
lean_inc(v_ref_2779_);
lean_inc_ref(v_toCold_2777_);
v___x_2785_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2785_, 0, v_toCold_2777_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
lean_ctor_set(v___x_2785_, 2, v_ref_2779_);
lean_ctor_set_uint8(v___x_2785_, sizeof(void*)*3, v_diag_2780_);
lean_ctor_set_uint8(v___x_2785_, sizeof(void*)*3 + 1, v_suppressElabErrors_2781_);
lean_inc_ref(v_x_2769_);
lean_inc(v_a_2775_);
lean_inc_ref(v___x_2785_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
lean_inc(v_mvarId_2770_);
v___x_2786_ = lean_apply_6(v_x_2769_, v_mvarId_2770_, v_a_2772_, v_a_2773_, v___x_2785_, v_a_2775_, lean_box(0));
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2800_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2789_ = v___x_2786_;
v_isShared_2790_ = v_isSharedCheck_2800_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2786_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2800_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
if (lean_obj_tag(v_a_2787_) == 0)
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2796_; 
lean_dec_ref_known(v___x_2785_, 3);
lean_dec_ref(v_x_2769_);
v___x_2791_ = lean_st_ref_take(v_a_2771_);
v___x_2792_ = lean_box(0);
v___x_2793_ = lean_array_push(v___x_2791_, v_mvarId_2770_);
v___x_2794_ = lean_st_ref_put(v_a_2771_, v___x_2793_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v___x_2792_);
v___x_2796_ = v___x_2789_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v___x_2792_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
else
{
lean_object* v_val_2798_; lean_object* v___x_2799_; 
lean_del_object(v___x_2789_);
lean_dec(v_mvarId_2770_);
v_val_2798_ = lean_ctor_get(v_a_2787_, 0);
lean_inc(v_val_2798_);
lean_dec_ref_known(v_a_2787_, 1);
v___x_2799_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(v_x_2769_, v_val_2798_, v_a_2771_, v_a_2772_, v_a_2773_, v___x_2785_, v_a_2775_);
lean_dec_ref_known(v___x_2785_, 3);
return v___x_2799_;
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
lean_dec_ref_known(v___x_2785_, 3);
lean_dec(v_mvarId_2770_);
lean_dec_ref(v_x_2769_);
v_a_2801_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2786_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2786_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(lean_object* v_x_2814_, lean_object* v_as_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
if (lean_obj_tag(v_as_2815_) == 0)
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_dec_ref(v_x_2814_);
v___x_2822_ = lean_box(0);
v___x_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
return v___x_2823_;
}
else
{
lean_object* v_head_2824_; lean_object* v_tail_2825_; lean_object* v___x_2826_; 
v_head_2824_ = lean_ctor_get(v_as_2815_, 0);
lean_inc(v_head_2824_);
v_tail_2825_ = lean_ctor_get(v_as_2815_, 1);
lean_inc(v_tail_2825_);
lean_dec_ref_known(v_as_2815_, 2);
lean_inc_ref(v_x_2814_);
v___x_2826_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(v_x_2814_, v_head_2824_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_dec_ref_known(v___x_2826_, 1);
v_as_2815_ = v_tail_2825_;
goto _start;
}
else
{
lean_dec(v_tail_2825_);
lean_dec_ref(v_x_2814_);
return v___x_2826_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0___boxed(lean_object* v_x_2828_, lean_object* v_as_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(v_x_2828_, v_as_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go___boxed(lean_object* v_x_2837_, lean_object* v_mvarId_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(v_x_2837_, v_mvarId_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_);
lean_dec(v_a_2843_);
lean_dec_ref(v_a_2842_);
lean_dec(v_a_2841_);
lean_dec_ref(v_a_2840_);
lean_dec(v_a_2839_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saturate(lean_object* v_mvarId_2848_, lean_object* v_x_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2855_ = ((lean_object*)(l_Lean_Meta_saturate___closed__0));
v___x_2856_ = lean_st_mk_ref(v___x_2855_);
v___x_2857_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(v_x_2849_, v_mvarId_2848_, v___x_2856_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2866_; 
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2866_ == 0)
{
lean_object* v_unused_2867_; 
v_unused_2867_ = lean_ctor_get(v___x_2857_, 0);
lean_dec(v_unused_2867_);
v___x_2859_ = v___x_2857_;
v_isShared_2860_ = v_isSharedCheck_2866_;
goto v_resetjp_2858_;
}
else
{
lean_dec(v___x_2857_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2866_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2864_; 
v___x_2861_ = lean_st_ref_get(v___x_2856_);
lean_dec(v___x_2856_);
v___x_2862_ = lean_array_to_list(v___x_2861_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 0, v___x_2862_);
v___x_2864_ = v___x_2859_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
lean_dec(v___x_2856_);
v_a_2868_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2857_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2857_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saturate___boxed(lean_object* v_mvarId_2876_, lean_object* v_x_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lean_Meta_saturate(v_mvarId_2876_, v_x_2877_, v_a_2878_, v_a_2879_, v_a_2880_, v_a_2881_);
lean_dec(v_a_2881_);
lean_dec_ref(v_a_2880_);
lean_dec(v_a_2879_);
lean_dec_ref(v_a_2878_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne(lean_object* v_mvarIds_2884_, lean_object* v_msg_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_){
_start:
{
if (lean_obj_tag(v_mvarIds_2884_) == 1)
{
lean_object* v_tail_2891_; 
v_tail_2891_ = lean_ctor_get(v_mvarIds_2884_, 1);
if (lean_obj_tag(v_tail_2891_) == 0)
{
lean_object* v_head_2892_; lean_object* v___x_2893_; 
lean_dec_ref(v_msg_2885_);
v_head_2892_ = lean_ctor_get(v_mvarIds_2884_, 0);
lean_inc(v_head_2892_);
v___x_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2893_, 0, v_head_2892_);
return v___x_2893_;
}
else
{
lean_object* v___x_2894_; 
v___x_2894_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
return v___x_2894_;
}
}
else
{
lean_object* v___x_2895_; 
v___x_2895_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
return v___x_2895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne___boxed(lean_object* v_mvarIds_2896_, lean_object* v_msg_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lean_Meta_exactlyOne(v_mvarIds_2896_, v_msg_2897_, v_a_2898_, v_a_2899_, v_a_2900_, v_a_2901_);
lean_dec(v_a_2901_);
lean_dec_ref(v_a_2900_);
lean_dec(v_a_2899_);
lean_dec_ref(v_a_2898_);
lean_dec(v_mvarIds_2896_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne(lean_object* v_mvarIds_2904_, lean_object* v_msg_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_){
_start:
{
if (lean_obj_tag(v_mvarIds_2904_) == 0)
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
lean_dec_ref(v_msg_2905_);
v___x_2911_ = lean_box(0);
v___x_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
return v___x_2912_;
}
else
{
lean_object* v_tail_2913_; 
v_tail_2913_ = lean_ctor_get(v_mvarIds_2904_, 1);
if (lean_obj_tag(v_tail_2913_) == 0)
{
lean_object* v_head_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
lean_dec_ref(v_msg_2905_);
v_head_2914_ = lean_ctor_get(v_mvarIds_2904_, 0);
lean_inc(v_head_2914_);
v___x_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2915_, 0, v_head_2914_);
v___x_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
return v___x_2916_;
}
else
{
lean_object* v___x_2917_; 
v___x_2917_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_);
return v___x_2917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne___boxed(lean_object* v_mvarIds_2918_, lean_object* v_msg_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_Lean_Meta_ensureAtMostOne(v_mvarIds_2918_, v_msg_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
lean_dec(v_a_2923_);
lean_dec_ref(v_a_2922_);
lean_dec(v_a_2921_);
lean_dec_ref(v_a_2920_);
lean_dec(v_mvarIds_2918_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_2926_, size_t v_sz_2927_, size_t v_i_2928_, lean_object* v_b_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
uint8_t v___x_2935_; 
v___x_2935_ = lean_usize_dec_lt(v_i_2928_, v_sz_2927_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; 
v___x_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2936_, 0, v_b_2929_);
return v___x_2936_;
}
else
{
lean_object* v_snd_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2967_; 
v_snd_2937_ = lean_ctor_get(v_b_2929_, 1);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_b_2929_);
if (v_isSharedCheck_2967_ == 0)
{
lean_object* v_unused_2968_; 
v_unused_2968_ = lean_ctor_get(v_b_2929_, 0);
lean_dec(v_unused_2968_);
v___x_2939_ = v_b_2929_;
v_isShared_2940_ = v_isSharedCheck_2967_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_snd_2937_);
lean_dec(v_b_2929_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2967_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v_a_2943_; lean_object* v_a_2950_; 
v___x_2941_ = lean_box(0);
v_a_2950_ = lean_array_uget_borrowed(v_as_2926_, v_i_2928_);
if (lean_obj_tag(v_a_2950_) == 0)
{
v_a_2943_ = v_snd_2937_;
goto v___jp_2942_;
}
else
{
lean_object* v_val_2951_; uint8_t v___x_2952_; 
v_val_2951_ = lean_ctor_get(v_a_2950_, 0);
v___x_2952_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2951_);
if (v___x_2952_ == 0)
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = l_Lean_LocalDecl_type(v_val_2951_);
v___x_2954_ = l_Lean_Meta_isProp(v___x_2953_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; uint8_t v___x_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
v___x_2956_ = lean_unbox(v_a_2955_);
lean_dec(v_a_2955_);
if (v___x_2956_ == 0)
{
v_a_2943_ = v_snd_2937_;
goto v___jp_2942_;
}
else
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2957_ = l_Lean_LocalDecl_fvarId(v_val_2951_);
v___x_2958_ = lean_array_push(v_snd_2937_, v___x_2957_);
v_a_2943_ = v___x_2958_;
goto v___jp_2942_;
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
lean_del_object(v___x_2939_);
lean_dec(v_snd_2937_);
v_a_2959_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2954_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2954_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
}
else
{
v_a_2943_ = v_snd_2937_;
goto v___jp_2942_;
}
}
v___jp_2942_:
{
lean_object* v___x_2945_; 
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 1, v_a_2943_);
lean_ctor_set(v___x_2939_, 0, v___x_2941_);
v___x_2945_ = v___x_2939_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2941_);
lean_ctor_set(v_reuseFailAlloc_2949_, 1, v_a_2943_);
v___x_2945_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
size_t v___x_2946_; size_t v___x_2947_; 
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_add(v_i_2928_, v___x_2946_);
v_i_2928_ = v___x_2947_;
v_b_2929_ = v___x_2945_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_2969_, lean_object* v_sz_2970_, lean_object* v_i_2971_, lean_object* v_b_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
size_t v_sz_boxed_2978_; size_t v_i_boxed_2979_; lean_object* v_res_2980_; 
v_sz_boxed_2978_ = lean_unbox_usize(v_sz_2970_);
lean_dec(v_sz_2970_);
v_i_boxed_2979_ = lean_unbox_usize(v_i_2971_);
lean_dec(v_i_2971_);
v_res_2980_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(v_as_2969_, v_sz_boxed_2978_, v_i_boxed_2979_, v_b_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_);
lean_dec(v___y_2976_);
lean_dec_ref(v___y_2975_);
lean_dec(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec_ref(v_as_2969_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(lean_object* v_as_2981_, size_t v_sz_2982_, size_t v_i_2983_, lean_object* v_b_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
uint8_t v___x_2990_; 
v___x_2990_ = lean_usize_dec_lt(v_i_2983_, v_sz_2982_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; 
v___x_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2991_, 0, v_b_2984_);
return v___x_2991_;
}
else
{
lean_object* v_snd_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3022_; 
v_snd_2992_ = lean_ctor_get(v_b_2984_, 1);
v_isSharedCheck_3022_ = !lean_is_exclusive(v_b_2984_);
if (v_isSharedCheck_3022_ == 0)
{
lean_object* v_unused_3023_; 
v_unused_3023_ = lean_ctor_get(v_b_2984_, 0);
lean_dec(v_unused_3023_);
v___x_2994_ = v_b_2984_;
v_isShared_2995_ = v_isSharedCheck_3022_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_snd_2992_);
lean_dec(v_b_2984_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3022_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2996_; lean_object* v_a_2998_; lean_object* v_a_3005_; 
v___x_2996_ = lean_box(0);
v_a_3005_ = lean_array_uget_borrowed(v_as_2981_, v_i_2983_);
if (lean_obj_tag(v_a_3005_) == 0)
{
v_a_2998_ = v_snd_2992_;
goto v___jp_2997_;
}
else
{
lean_object* v_val_3006_; uint8_t v___x_3007_; 
v_val_3006_ = lean_ctor_get(v_a_3005_, 0);
v___x_3007_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3006_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3008_; lean_object* v___x_3009_; 
v___x_3008_ = l_Lean_LocalDecl_type(v_val_3006_);
v___x_3009_ = l_Lean_Meta_isProp(v___x_3008_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v_a_3010_; uint8_t v___x_3011_; 
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v___x_3009_, 1);
v___x_3011_ = lean_unbox(v_a_3010_);
lean_dec(v_a_3010_);
if (v___x_3011_ == 0)
{
v_a_2998_ = v_snd_2992_;
goto v___jp_2997_;
}
else
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = l_Lean_LocalDecl_fvarId(v_val_3006_);
v___x_3013_ = lean_array_push(v_snd_2992_, v___x_3012_);
v_a_2998_ = v___x_3013_;
goto v___jp_2997_;
}
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_del_object(v___x_2994_);
lean_dec(v_snd_2992_);
v_a_3014_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_3009_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_3009_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
else
{
v_a_2998_ = v_snd_2992_;
goto v___jp_2997_;
}
}
v___jp_2997_:
{
lean_object* v___x_3000_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 1, v_a_2998_);
lean_ctor_set(v___x_2994_, 0, v___x_2996_);
v___x_3000_ = v___x_2994_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_2996_);
lean_ctor_set(v_reuseFailAlloc_3004_, 1, v_a_2998_);
v___x_3000_ = v_reuseFailAlloc_3004_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
size_t v___x_3001_; size_t v___x_3002_; lean_object* v___x_3003_; 
v___x_3001_ = ((size_t)1ULL);
v___x_3002_ = lean_usize_add(v_i_2983_, v___x_3001_);
v___x_3003_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(v_as_2981_, v_sz_2982_, v___x_3002_, v___x_3000_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_);
return v___x_3003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3024_, lean_object* v_sz_3025_, lean_object* v_i_3026_, lean_object* v_b_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
size_t v_sz_boxed_3033_; size_t v_i_boxed_3034_; lean_object* v_res_3035_; 
v_sz_boxed_3033_ = lean_unbox_usize(v_sz_3025_);
lean_dec(v_sz_3025_);
v_i_boxed_3034_ = lean_unbox_usize(v_i_3026_);
lean_dec(v_i_3026_);
v_res_3035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(v_as_3024_, v_sz_boxed_3033_, v_i_boxed_3034_, v_b_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3029_);
lean_dec_ref(v___y_3028_);
lean_dec_ref(v_as_3024_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(lean_object* v_init_3036_, lean_object* v_n_3037_, lean_object* v_b_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
if (lean_obj_tag(v_n_3037_) == 0)
{
lean_object* v_cs_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; size_t v_sz_3047_; size_t v___x_3048_; lean_object* v___x_3049_; 
v_cs_3044_ = lean_ctor_get(v_n_3037_, 0);
v___x_3045_ = lean_box(0);
v___x_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set(v___x_3046_, 1, v_b_3038_);
v_sz_3047_ = lean_array_size(v_cs_3044_);
v___x_3048_ = ((size_t)0ULL);
v___x_3049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(v_init_3036_, v_cs_3044_, v_sz_3047_, v___x_3048_, v___x_3046_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3064_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3052_ = v___x_3049_;
v_isShared_3053_ = v_isSharedCheck_3064_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3049_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3064_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v_fst_3054_; 
v_fst_3054_ = lean_ctor_get(v_a_3050_, 0);
if (lean_obj_tag(v_fst_3054_) == 0)
{
lean_object* v_snd_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v_snd_3055_ = lean_ctor_get(v_a_3050_, 1);
lean_inc(v_snd_3055_);
lean_dec(v_a_3050_);
v___x_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3056_, 0, v_snd_3055_);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 0, v___x_3056_);
v___x_3058_ = v___x_3052_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
else
{
lean_object* v_val_3060_; lean_object* v___x_3062_; 
lean_inc_ref(v_fst_3054_);
lean_dec(v_a_3050_);
v_val_3060_ = lean_ctor_get(v_fst_3054_, 0);
lean_inc(v_val_3060_);
lean_dec_ref_known(v_fst_3054_, 1);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 0, v_val_3060_);
v___x_3062_ = v___x_3052_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_val_3060_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
v_a_3065_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_3049_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3049_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
else
{
lean_object* v_vs_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; size_t v_sz_3076_; size_t v___x_3077_; lean_object* v___x_3078_; 
v_vs_3073_ = lean_ctor_get(v_n_3037_, 0);
v___x_3074_ = lean_box(0);
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
lean_ctor_set(v___x_3075_, 1, v_b_3038_);
v_sz_3076_ = lean_array_size(v_vs_3073_);
v___x_3077_ = ((size_t)0ULL);
v___x_3078_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(v_vs_3073_, v_sz_3076_, v___x_3077_, v___x_3075_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3093_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3081_ = v___x_3078_;
v_isShared_3082_ = v_isSharedCheck_3093_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3078_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3093_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v_fst_3083_; 
v_fst_3083_ = lean_ctor_get(v_a_3079_, 0);
if (lean_obj_tag(v_fst_3083_) == 0)
{
lean_object* v_snd_3084_; lean_object* v___x_3085_; lean_object* v___x_3087_; 
v_snd_3084_ = lean_ctor_get(v_a_3079_, 1);
lean_inc(v_snd_3084_);
lean_dec(v_a_3079_);
v___x_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3085_, 0, v_snd_3084_);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 0, v___x_3085_);
v___x_3087_ = v___x_3081_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3085_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
else
{
lean_object* v_val_3089_; lean_object* v___x_3091_; 
lean_inc_ref(v_fst_3083_);
lean_dec(v_a_3079_);
v_val_3089_ = lean_ctor_get(v_fst_3083_, 0);
lean_inc(v_val_3089_);
lean_dec_ref_known(v_fst_3083_, 1);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 0, v_val_3089_);
v___x_3091_ = v___x_3081_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_val_3089_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
v_a_3094_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3078_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3078_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(lean_object* v_init_3102_, lean_object* v_as_3103_, size_t v_sz_3104_, size_t v_i_3105_, lean_object* v_b_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
uint8_t v___x_3112_; 
v___x_3112_ = lean_usize_dec_lt(v_i_3105_, v_sz_3104_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; 
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_b_3106_);
return v___x_3113_;
}
else
{
lean_object* v_snd_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3148_; 
v_snd_3114_ = lean_ctor_get(v_b_3106_, 1);
v_isSharedCheck_3148_ = !lean_is_exclusive(v_b_3106_);
if (v_isSharedCheck_3148_ == 0)
{
lean_object* v_unused_3149_; 
v_unused_3149_ = lean_ctor_get(v_b_3106_, 0);
lean_dec(v_unused_3149_);
v___x_3116_ = v_b_3106_;
v_isShared_3117_ = v_isSharedCheck_3148_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_snd_3114_);
lean_dec(v_b_3106_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3148_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v_a_3119_; lean_object* v___x_3120_; 
v___x_3118_ = lean_box(0);
v_a_3119_ = lean_array_uget_borrowed(v_as_3103_, v_i_3105_);
lean_inc(v_snd_3114_);
v___x_3120_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(v_init_3102_, v_a_3119_, v_snd_3114_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3139_; 
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3123_ = v___x_3120_;
v_isShared_3124_ = v_isSharedCheck_3139_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3120_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3139_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
if (lean_obj_tag(v_a_3121_) == 0)
{
lean_object* v___x_3125_; lean_object* v___x_3127_; 
v___x_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3125_, 0, v_a_3121_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 0, v___x_3125_);
v___x_3127_ = v___x_3116_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v___x_3125_);
lean_ctor_set(v_reuseFailAlloc_3131_, 1, v_snd_3114_);
v___x_3127_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
lean_object* v___x_3129_; 
if (v_isShared_3124_ == 0)
{
lean_ctor_set(v___x_3123_, 0, v___x_3127_);
v___x_3129_ = v___x_3123_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; 
lean_del_object(v___x_3123_);
lean_dec(v_snd_3114_);
v_a_3132_ = lean_ctor_get(v_a_3121_, 0);
lean_inc(v_a_3132_);
lean_dec_ref_known(v_a_3121_, 1);
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 1, v_a_3132_);
lean_ctor_set(v___x_3116_, 0, v___x_3118_);
v___x_3134_ = v___x_3116_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v___x_3118_);
lean_ctor_set(v_reuseFailAlloc_3138_, 1, v_a_3132_);
v___x_3134_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
size_t v___x_3135_; size_t v___x_3136_; 
v___x_3135_ = ((size_t)1ULL);
v___x_3136_ = lean_usize_add(v_i_3105_, v___x_3135_);
v_i_3105_ = v___x_3136_;
v_b_3106_ = v___x_3134_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_del_object(v___x_3116_);
lean_dec(v_snd_3114_);
v_a_3140_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3120_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3120_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3150_, lean_object* v_as_3151_, lean_object* v_sz_3152_, lean_object* v_i_3153_, lean_object* v_b_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
size_t v_sz_boxed_3160_; size_t v_i_boxed_3161_; lean_object* v_res_3162_; 
v_sz_boxed_3160_ = lean_unbox_usize(v_sz_3152_);
lean_dec(v_sz_3152_);
v_i_boxed_3161_ = lean_unbox_usize(v_i_3153_);
lean_dec(v_i_3153_);
v_res_3162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(v_init_3150_, v_as_3151_, v_sz_boxed_3160_, v_i_boxed_3161_, v_b_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v_as_3151_);
lean_dec_ref(v_init_3150_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0___boxed(lean_object* v_init_3163_, lean_object* v_n_3164_, lean_object* v_b_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(v_init_3163_, v_n_3164_, v_b_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec_ref(v_n_3164_);
lean_dec_ref(v_init_3163_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(lean_object* v_as_3172_, size_t v_sz_3173_, size_t v_i_3174_, lean_object* v_b_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_){
_start:
{
uint8_t v___x_3181_; 
v___x_3181_ = lean_usize_dec_lt(v_i_3174_, v_sz_3173_);
if (v___x_3181_ == 0)
{
lean_object* v___x_3182_; 
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v_b_3175_);
return v___x_3182_;
}
else
{
lean_object* v_snd_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3213_; 
v_snd_3183_ = lean_ctor_get(v_b_3175_, 1);
v_isSharedCheck_3213_ = !lean_is_exclusive(v_b_3175_);
if (v_isSharedCheck_3213_ == 0)
{
lean_object* v_unused_3214_; 
v_unused_3214_ = lean_ctor_get(v_b_3175_, 0);
lean_dec(v_unused_3214_);
v___x_3185_ = v_b_3175_;
v_isShared_3186_ = v_isSharedCheck_3213_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_snd_3183_);
lean_dec(v_b_3175_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3213_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3187_; lean_object* v_a_3189_; lean_object* v_a_3196_; 
v___x_3187_ = lean_box(0);
v_a_3196_ = lean_array_uget_borrowed(v_as_3172_, v_i_3174_);
if (lean_obj_tag(v_a_3196_) == 0)
{
v_a_3189_ = v_snd_3183_;
goto v___jp_3188_;
}
else
{
lean_object* v_val_3197_; uint8_t v___x_3198_; 
v_val_3197_ = lean_ctor_get(v_a_3196_, 0);
v___x_3198_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3197_);
if (v___x_3198_ == 0)
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3199_ = l_Lean_LocalDecl_type(v_val_3197_);
v___x_3200_ = l_Lean_Meta_isProp(v___x_3199_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; uint8_t v___x_3202_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3200_, 1);
v___x_3202_ = lean_unbox(v_a_3201_);
lean_dec(v_a_3201_);
if (v___x_3202_ == 0)
{
v_a_3189_ = v_snd_3183_;
goto v___jp_3188_;
}
else
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = l_Lean_LocalDecl_fvarId(v_val_3197_);
v___x_3204_ = lean_array_push(v_snd_3183_, v___x_3203_);
v_a_3189_ = v___x_3204_;
goto v___jp_3188_;
}
}
else
{
lean_object* v_a_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3212_; 
lean_del_object(v___x_3185_);
lean_dec(v_snd_3183_);
v_a_3205_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3207_ = v___x_3200_;
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_a_3205_);
lean_dec(v___x_3200_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3210_; 
if (v_isShared_3208_ == 0)
{
v___x_3210_ = v___x_3207_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3205_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
}
else
{
v_a_3189_ = v_snd_3183_;
goto v___jp_3188_;
}
}
v___jp_3188_:
{
lean_object* v___x_3191_; 
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 1, v_a_3189_);
lean_ctor_set(v___x_3185_, 0, v___x_3187_);
v___x_3191_ = v___x_3185_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v___x_3187_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v_a_3189_);
v___x_3191_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
size_t v___x_3192_; size_t v___x_3193_; 
v___x_3192_ = ((size_t)1ULL);
v___x_3193_ = lean_usize_add(v_i_3174_, v___x_3192_);
v_i_3174_ = v___x_3193_;
v_b_3175_ = v___x_3191_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4___boxed(lean_object* v_as_3215_, lean_object* v_sz_3216_, lean_object* v_i_3217_, lean_object* v_b_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
size_t v_sz_boxed_3224_; size_t v_i_boxed_3225_; lean_object* v_res_3226_; 
v_sz_boxed_3224_ = lean_unbox_usize(v_sz_3216_);
lean_dec(v_sz_3216_);
v_i_boxed_3225_ = lean_unbox_usize(v_i_3217_);
lean_dec(v_i_3217_);
v_res_3226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(v_as_3215_, v_sz_boxed_3224_, v_i_boxed_3225_, v_b_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_);
lean_dec(v___y_3222_);
lean_dec_ref(v___y_3221_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec_ref(v_as_3215_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(lean_object* v_as_3227_, size_t v_sz_3228_, size_t v_i_3229_, lean_object* v_b_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
uint8_t v___x_3236_; 
v___x_3236_ = lean_usize_dec_lt(v_i_3229_, v_sz_3228_);
if (v___x_3236_ == 0)
{
lean_object* v___x_3237_; 
v___x_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3237_, 0, v_b_3230_);
return v___x_3237_;
}
else
{
lean_object* v_snd_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3268_; 
v_snd_3238_ = lean_ctor_get(v_b_3230_, 1);
v_isSharedCheck_3268_ = !lean_is_exclusive(v_b_3230_);
if (v_isSharedCheck_3268_ == 0)
{
lean_object* v_unused_3269_; 
v_unused_3269_ = lean_ctor_get(v_b_3230_, 0);
lean_dec(v_unused_3269_);
v___x_3240_ = v_b_3230_;
v_isShared_3241_ = v_isSharedCheck_3268_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_snd_3238_);
lean_dec(v_b_3230_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3268_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3242_; lean_object* v_a_3244_; lean_object* v_a_3251_; 
v___x_3242_ = lean_box(0);
v_a_3251_ = lean_array_uget_borrowed(v_as_3227_, v_i_3229_);
if (lean_obj_tag(v_a_3251_) == 0)
{
v_a_3244_ = v_snd_3238_;
goto v___jp_3243_;
}
else
{
lean_object* v_val_3252_; uint8_t v___x_3253_; 
v_val_3252_ = lean_ctor_get(v_a_3251_, 0);
v___x_3253_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3252_);
if (v___x_3253_ == 0)
{
lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3254_ = l_Lean_LocalDecl_type(v_val_3252_);
v___x_3255_ = l_Lean_Meta_isProp(v___x_3254_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; uint8_t v___x_3257_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3257_ = lean_unbox(v_a_3256_);
lean_dec(v_a_3256_);
if (v___x_3257_ == 0)
{
v_a_3244_ = v_snd_3238_;
goto v___jp_3243_;
}
else
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = l_Lean_LocalDecl_fvarId(v_val_3252_);
v___x_3259_ = lean_array_push(v_snd_3238_, v___x_3258_);
v_a_3244_ = v___x_3259_;
goto v___jp_3243_;
}
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
lean_del_object(v___x_3240_);
lean_dec(v_snd_3238_);
v_a_3260_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3262_ = v___x_3255_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v___x_3255_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
else
{
v_a_3244_ = v_snd_3238_;
goto v___jp_3243_;
}
}
v___jp_3243_:
{
lean_object* v___x_3246_; 
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 1, v_a_3244_);
lean_ctor_set(v___x_3240_, 0, v___x_3242_);
v___x_3246_ = v___x_3240_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3242_);
lean_ctor_set(v_reuseFailAlloc_3250_, 1, v_a_3244_);
v___x_3246_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
size_t v___x_3247_; size_t v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = ((size_t)1ULL);
v___x_3248_ = lean_usize_add(v_i_3229_, v___x_3247_);
v___x_3249_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(v_as_3227_, v_sz_3228_, v___x_3248_, v___x_3246_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
return v___x_3249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1___boxed(lean_object* v_as_3270_, lean_object* v_sz_3271_, lean_object* v_i_3272_, lean_object* v_b_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_){
_start:
{
size_t v_sz_boxed_3279_; size_t v_i_boxed_3280_; lean_object* v_res_3281_; 
v_sz_boxed_3279_ = lean_unbox_usize(v_sz_3271_);
lean_dec(v_sz_3271_);
v_i_boxed_3280_ = lean_unbox_usize(v_i_3272_);
lean_dec(v_i_3272_);
v_res_3281_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(v_as_3270_, v_sz_boxed_3279_, v_i_boxed_3280_, v_b_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec_ref(v_as_3270_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(lean_object* v_t_3282_, lean_object* v_init_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_){
_start:
{
lean_object* v_root_3289_; lean_object* v_tail_3290_; lean_object* v___x_3291_; 
v_root_3289_ = lean_ctor_get(v_t_3282_, 0);
v_tail_3290_ = lean_ctor_get(v_t_3282_, 1);
lean_inc_ref(v_init_3283_);
v___x_3291_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(v_init_3283_, v_root_3289_, v_init_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_);
lean_dec_ref(v_init_3283_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3328_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3294_ = v___x_3291_;
v_isShared_3295_ = v_isSharedCheck_3328_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___x_3291_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3328_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
if (lean_obj_tag(v_a_3292_) == 0)
{
lean_object* v_a_3296_; lean_object* v___x_3298_; 
v_a_3296_ = lean_ctor_get(v_a_3292_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v_a_3292_, 1);
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 0, v_a_3296_);
v___x_3298_ = v___x_3294_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3296_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; size_t v_sz_3303_; size_t v___x_3304_; lean_object* v___x_3305_; 
lean_del_object(v___x_3294_);
v_a_3300_ = lean_ctor_get(v_a_3292_, 0);
lean_inc(v_a_3300_);
lean_dec_ref_known(v_a_3292_, 1);
v___x_3301_ = lean_box(0);
v___x_3302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3301_);
lean_ctor_set(v___x_3302_, 1, v_a_3300_);
v_sz_3303_ = lean_array_size(v_tail_3290_);
v___x_3304_ = ((size_t)0ULL);
v___x_3305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(v_tail_3290_, v_sz_3303_, v___x_3304_, v___x_3302_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_);
if (lean_obj_tag(v___x_3305_) == 0)
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3319_; 
v_a_3306_ = lean_ctor_get(v___x_3305_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3305_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3308_ = v___x_3305_;
v_isShared_3309_ = v_isSharedCheck_3319_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v___x_3305_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3319_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v_fst_3310_; 
v_fst_3310_ = lean_ctor_get(v_a_3306_, 0);
if (lean_obj_tag(v_fst_3310_) == 0)
{
lean_object* v_snd_3311_; lean_object* v___x_3313_; 
v_snd_3311_ = lean_ctor_get(v_a_3306_, 1);
lean_inc(v_snd_3311_);
lean_dec(v_a_3306_);
if (v_isShared_3309_ == 0)
{
lean_ctor_set(v___x_3308_, 0, v_snd_3311_);
v___x_3313_ = v___x_3308_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_snd_3311_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
else
{
lean_object* v_val_3315_; lean_object* v___x_3317_; 
lean_inc_ref(v_fst_3310_);
lean_dec(v_a_3306_);
v_val_3315_ = lean_ctor_get(v_fst_3310_, 0);
lean_inc(v_val_3315_);
lean_dec_ref_known(v_fst_3310_, 1);
if (v_isShared_3309_ == 0)
{
lean_ctor_set(v___x_3308_, 0, v_val_3315_);
v___x_3317_ = v___x_3308_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_val_3315_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3327_; 
v_a_3320_ = lean_ctor_get(v___x_3305_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3305_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3322_ = v___x_3305_;
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3305_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3325_; 
if (v_isShared_3323_ == 0)
{
v___x_3325_ = v___x_3322_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3320_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
}
}
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
v_a_3329_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3291_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3291_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0___boxed(lean_object* v_t_3337_, lean_object* v_init_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(v_t_3337_, v_init_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v_t_3337_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps(lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_){
_start:
{
lean_object* v_lctx_3350_; lean_object* v_decls_3351_; lean_object* v_result_3352_; lean_object* v___x_3353_; 
v_lctx_3350_ = lean_ctor_get(v_a_3345_, 2);
v_decls_3351_ = lean_ctor_get(v_lctx_3350_, 1);
v_result_3352_ = ((lean_object*)(l_Lean_Meta_saturate___closed__0));
v___x_3353_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(v_decls_3351_, v_result_3352_, v_a_3345_, v_a_3346_, v_a_3347_, v_a_3348_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps___boxed(lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Lean_Meta_getPropHyps(v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_);
lean_dec(v_a_3357_);
lean_dec_ref(v_a_3356_);
lean_dec(v_a_3355_);
lean_dec_ref(v_a_3354_);
return v_res_3359_;
}
}
static lean_object* _init_l_Lean_MVarId_inferInstance___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3363_ = ((lean_object*)(l_Lean_MVarId_inferInstance___lam__0___closed__1));
v___x_3364_ = l_Lean_MessageData_ofFormat(v___x_3363_);
return v___x_3364_;
}
}
static lean_object* _init_l_Lean_MVarId_inferInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3365_ = lean_obj_once(&l_Lean_MVarId_inferInstance___lam__0___closed__2, &l_Lean_MVarId_inferInstance___lam__0___closed__2_once, _init_l_Lean_MVarId_inferInstance___lam__0___closed__2);
v___x_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3365_);
return v___x_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0(lean_object* v_mvarId_3367_, lean_object* v___x_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_){
_start:
{
lean_object* v___x_3374_; 
lean_inc(v___x_3368_);
lean_inc(v_mvarId_3367_);
v___x_3374_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3367_, v___x_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v___x_3375_; 
lean_dec_ref_known(v___x_3374_, 1);
lean_inc(v_mvarId_3367_);
v___x_3375_ = l_Lean_MVarId_getType(v_mvarId_3367_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref_known(v___x_3375_, 1);
v___x_3377_ = lean_box(0);
v___x_3378_ = l_Lean_Meta_synthInstance(v_a_3376_, v___x_3377_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
lean_dec_ref_known(v___x_3378_, 1);
lean_inc(v_mvarId_3367_);
v___x_3380_ = l_Lean_mkMVar(v_mvarId_3367_);
v___x_3381_ = l_Lean_Meta_isExprDefEq(v___x_3380_, v_a_3379_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3393_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3384_ = v___x_3381_;
v_isShared_3385_ = v_isSharedCheck_3393_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3381_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3393_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
uint8_t v___x_3386_; 
v___x_3386_ = lean_unbox(v_a_3382_);
lean_dec(v_a_3382_);
if (v___x_3386_ == 0)
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
lean_del_object(v___x_3384_);
v___x_3387_ = lean_obj_once(&l_Lean_MVarId_inferInstance___lam__0___closed__3, &l_Lean_MVarId_inferInstance___lam__0___closed__3_once, _init_l_Lean_MVarId_inferInstance___lam__0___closed__3);
v___x_3388_ = l_Lean_Meta_throwTacticEx___redArg(v___x_3368_, v_mvarId_3367_, v___x_3387_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
return v___x_3388_;
}
else
{
lean_object* v___x_3389_; lean_object* v___x_3391_; 
lean_dec(v___x_3368_);
lean_dec(v_mvarId_3367_);
v___x_3389_ = lean_box(0);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3389_);
v___x_3391_ = v___x_3384_;
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
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec(v___x_3368_);
lean_dec(v_mvarId_3367_);
v_a_3394_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3381_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3381_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v___x_3368_);
lean_dec(v_mvarId_3367_);
v_a_3402_ = lean_ctor_get(v___x_3378_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3378_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3378_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec(v___x_3368_);
lean_dec(v_mvarId_3367_);
v_a_3410_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3375_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3375_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
else
{
lean_dec(v___x_3368_);
lean_dec(v_mvarId_3367_);
return v___x_3374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0___boxed(lean_object* v_mvarId_3418_, lean_object* v___x_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lean_MVarId_inferInstance___lam__0(v_mvarId_3418_, v___x_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3420_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance(lean_object* v_mvarId_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_){
_start:
{
lean_object* v___x_3435_; lean_object* v___f_3436_; lean_object* v___x_3437_; 
v___x_3435_ = ((lean_object*)(l_Lean_MVarId_inferInstance___closed__1));
lean_inc(v_mvarId_3429_);
v___f_3436_ = lean_alloc_closure((void*)(l_Lean_MVarId_inferInstance___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3436_, 0, v_mvarId_3429_);
lean_closure_set(v___f_3436_, 1, v___x_3435_);
v___x_3437_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_3429_, v___f_3436_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___boxed(lean_object* v_mvarId_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l_Lean_MVarId_inferInstance(v_mvarId_3438_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_);
lean_dec(v_a_3442_);
lean_dec_ref(v_a_3441_);
lean_dec(v_a_3440_);
lean_dec_ref(v_a_3439_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx(lean_object* v_x_3445_){
_start:
{
switch(lean_obj_tag(v_x_3445_))
{
case 0:
{
lean_object* v___x_3446_; 
v___x_3446_ = lean_unsigned_to_nat(0u);
return v___x_3446_;
}
case 1:
{
lean_object* v___x_3447_; 
v___x_3447_ = lean_unsigned_to_nat(1u);
return v___x_3447_;
}
default: 
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_unsigned_to_nat(2u);
return v___x_3448_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx___boxed(lean_object* v_x_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l_Lean_Meta_TacticResultCNM_ctorIdx(v_x_3449_);
lean_dec(v_x_3449_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___redArg(lean_object* v_t_3451_, lean_object* v_k_3452_){
_start:
{
if (lean_obj_tag(v_t_3451_) == 2)
{
lean_object* v_mvarId_3453_; lean_object* v___x_3454_; 
v_mvarId_3453_ = lean_ctor_get(v_t_3451_, 0);
lean_inc(v_mvarId_3453_);
lean_dec_ref_known(v_t_3451_, 1);
v___x_3454_ = lean_apply_1(v_k_3452_, v_mvarId_3453_);
return v___x_3454_;
}
else
{
lean_dec(v_t_3451_);
return v_k_3452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim(lean_object* v_motive_3455_, lean_object* v_ctorIdx_3456_, lean_object* v_t_3457_, lean_object* v_h_3458_, lean_object* v_k_3459_){
_start:
{
lean_object* v___x_3460_; 
v___x_3460_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3457_, v_k_3459_);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___boxed(lean_object* v_motive_3461_, lean_object* v_ctorIdx_3462_, lean_object* v_t_3463_, lean_object* v_h_3464_, lean_object* v_k_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lean_Meta_TacticResultCNM_ctorElim(v_motive_3461_, v_ctorIdx_3462_, v_t_3463_, v_h_3464_, v_k_3465_);
lean_dec(v_ctorIdx_3462_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim___redArg(lean_object* v_t_3467_, lean_object* v_closed_3468_){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3467_, v_closed_3468_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim(lean_object* v_motive_3470_, lean_object* v_t_3471_, lean_object* v_h_3472_, lean_object* v_closed_3473_){
_start:
{
lean_object* v___x_3474_; 
v___x_3474_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3471_, v_closed_3473_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim___redArg(lean_object* v_t_3475_, lean_object* v_noChange_3476_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3475_, v_noChange_3476_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim(lean_object* v_motive_3478_, lean_object* v_t_3479_, lean_object* v_h_3480_, lean_object* v_noChange_3481_){
_start:
{
lean_object* v___x_3482_; 
v___x_3482_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3479_, v_noChange_3481_);
return v___x_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim___redArg(lean_object* v_t_3483_, lean_object* v_modified_3484_){
_start:
{
lean_object* v___x_3485_; 
v___x_3485_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3483_, v_modified_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim(lean_object* v_motive_3486_, lean_object* v_t_3487_, lean_object* v_h_3488_, lean_object* v_modified_3489_){
_start:
{
lean_object* v___x_3490_; 
v___x_3490_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3487_, v_modified_3489_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton(lean_object* v_g_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_){
_start:
{
lean_object* v___y_3501_; uint8_t v___y_3502_; lean_object* v_a_3507_; lean_object* v___x_3510_; 
v___x_3510_ = l_Lean_MVarId_getType(v_g_3494_, v_a_3495_, v_a_3496_, v_a_3497_, v_a_3498_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v___x_3512_ = ((lean_object*)(l_Lean_MVarId_isSubsingleton___closed__1));
v___x_3513_ = lean_unsigned_to_nat(1u);
v___x_3514_ = lean_mk_empty_array_with_capacity(v___x_3513_);
v___x_3515_ = lean_array_push(v___x_3514_, v_a_3511_);
v___x_3516_ = l_Lean_Meta_mkAppM(v___x_3512_, v___x_3515_, v_a_3495_, v_a_3496_, v_a_3497_, v_a_3498_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref_known(v___x_3516_, 1);
v___x_3518_ = lean_box(0);
v___x_3519_ = l_Lean_Meta_synthInstance(v_a_3517_, v___x_3518_, v_a_3495_, v_a_3496_, v_a_3497_, v_a_3498_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3528_; 
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3528_ == 0)
{
lean_object* v_unused_3529_; 
v_unused_3529_ = lean_ctor_get(v___x_3519_, 0);
lean_dec(v_unused_3529_);
v___x_3521_ = v___x_3519_;
v_isShared_3522_ = v_isSharedCheck_3528_;
goto v_resetjp_3520_;
}
else
{
lean_dec(v___x_3519_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3528_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
uint8_t v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3526_; 
v___x_3523_ = 1;
v___x_3524_ = lean_box(v___x_3523_);
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 0, v___x_3524_);
v___x_3526_ = v___x_3521_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v___x_3524_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
else
{
lean_object* v_a_3530_; 
v_a_3530_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3519_, 1);
v_a_3507_ = v_a_3530_;
goto v___jp_3506_;
}
}
else
{
lean_object* v_a_3531_; 
v_a_3531_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3516_, 1);
v_a_3507_ = v_a_3531_;
goto v___jp_3506_;
}
}
else
{
lean_object* v_a_3532_; 
v_a_3532_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3532_);
lean_dec_ref_known(v___x_3510_, 1);
v_a_3507_ = v_a_3532_;
goto v___jp_3506_;
}
v___jp_3500_:
{
if (v___y_3502_ == 0)
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_dec_ref(v___y_3501_);
v___x_3503_ = lean_box(v___y_3502_);
v___x_3504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
return v___x_3504_;
}
else
{
lean_object* v___x_3505_; 
v___x_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___y_3501_);
return v___x_3505_;
}
}
v___jp_3506_:
{
uint8_t v___x_3508_; 
v___x_3508_ = l_Lean_Exception_isInterrupt(v_a_3507_);
if (v___x_3508_ == 0)
{
uint8_t v___x_3509_; 
lean_inc_ref(v_a_3507_);
v___x_3509_ = l_Lean_Exception_isRuntime(v_a_3507_);
v___y_3501_ = v_a_3507_;
v___y_3502_ = v___x_3509_;
goto v___jp_3500_;
}
else
{
v___y_3501_ = v_a_3507_;
v___y_3502_ = v___x_3508_;
goto v___jp_3500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton___boxed(lean_object* v_g_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l_Lean_MVarId_isSubsingleton(v_g_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_);
lean_dec(v_a_3537_);
lean_dec_ref(v_a_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_a_3534_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3557_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_));
v___x_3558_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_));
v___x_3559_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_));
v___x_3560_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(v___x_3557_, v___x_3558_, v___x_3559_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4____boxed(lean_object* v_a_3561_){
_start:
{
lean_object* v_res_3562_; 
v_res_3562_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_();
return v_res_3562_;
}
}
lean_object* runtime_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_debug_terminalTacticsAsSorry = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_debug_terminalTacticsAsSorry);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_tactic_skipAssignedInstances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_tactic_skipAssignedInstances);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Util(builtin);
}
#ifdef __cplusplus
}
#endif
