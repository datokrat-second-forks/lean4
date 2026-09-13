// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: public import Lean.Meta.InferType import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_Level_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t l_Lean_Meta_instBEqInfoCacheKey_beq(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
uint8_t l_Lean_FVarIdSet_isEmpty(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_object* l_Lean_Meta_mkInfoCacheKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
uint8_t l_Lean_Environment_areRealizationsEnabledForConst(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_set_heartbeats(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
lean_object* l_Lean_Meta_instBEqInfoCacheKey_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "FunInfo"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(112, 52, 23, 53, 37, 12, 118, 217)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(73, 147, 169, 8, 188, 234, 221, 232)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(140, 0, 92, 209, 70, 2, 10, 135)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(176, 237, 136, 34, 252, 176, 16, 86)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "FunInfoEnvCacheKey"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(77, 18, 248, 164, 207, 212, 124, 226)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hasMVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInfoCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.FunInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "_private.Lean.Meta.FunInfo.0.Lean.Meta.getFunInfoAux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__0;
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "trying to realize `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__0 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__0_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "` value but `enableRealizationsForConst` must be called for '"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__1 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__1_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' first"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__2 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__2_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Environment.realizeConst: `realizedImportedConsts` is empty"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__3 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__3_value;
static const lean_ctor_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__3_value)}};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__4 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__2;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Meta.Basic"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.realizeValue"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_nat_dec_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_13_) == 0)
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_15_; 
v___x_15_ = 1;
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
}
else
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
else
{
lean_object* v_head_18_; lean_object* v_tail_19_; lean_object* v_head_20_; lean_object* v_tail_21_; uint8_t v___x_22_; 
v_head_18_ = lean_ctor_get(v_x_13_, 0);
v_tail_19_ = lean_ctor_get(v_x_13_, 1);
v_head_20_ = lean_ctor_get(v_x_14_, 0);
v_tail_21_ = lean_ctor_get(v_x_14_, 1);
v___x_22_ = lean_level_eq(v_head_18_, v_head_20_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
v_x_13_ = v_tail_19_;
v_x_14_ = v_tail_21_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
lean_dec(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
lean_object* v_c_30_; lean_object* v_ls_31_; lean_object* v_maxArgs_x3f_32_; lean_object* v_c_33_; lean_object* v_ls_34_; lean_object* v_maxArgs_x3f_35_; uint8_t v___x_36_; 
v_c_30_ = lean_ctor_get(v_x_28_, 0);
v_ls_31_ = lean_ctor_get(v_x_28_, 1);
v_maxArgs_x3f_32_ = lean_ctor_get(v_x_28_, 2);
v_c_33_ = lean_ctor_get(v_x_29_, 0);
v_ls_34_ = lean_ctor_get(v_x_29_, 1);
v_maxArgs_x3f_35_ = lean_ctor_get(v_x_29_, 2);
v___x_36_ = lean_name_eq(v_c_30_, v_c_33_);
if (v___x_36_ == 0)
{
return v___x_36_;
}
else
{
uint8_t v___x_37_; 
v___x_37_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_ls_31_, v_ls_34_);
if (v___x_37_ == 0)
{
return v___x_37_;
}
else
{
uint8_t v___x_38_; 
v___x_38_ = l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_maxArgs_x3f_32_, v_maxArgs_x3f_35_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_39_, v_x_40_);
lean_dec_ref(v_x_40_);
lean_dec_ref(v_x_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t v_x_45_, lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
return v_x_45_;
}
else
{
lean_object* v_head_47_; lean_object* v_tail_48_; uint64_t v___x_49_; uint64_t v___x_50_; 
v_head_47_ = lean_ctor_get(v_x_46_, 0);
v_tail_48_ = lean_ctor_get(v_x_46_, 1);
v___x_49_ = l_Lean_Level_hash(v_head_47_);
v___x_50_ = lean_uint64_mix_hash(v_x_45_, v___x_49_);
v_x_45_ = v___x_50_;
v_x_46_ = v_tail_48_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
uint64_t v_x_108__boxed_54_; uint64_t v_res_55_; lean_object* v_r_56_; 
v_x_108__boxed_54_ = lean_unbox_uint64(v_x_52_);
lean_dec_ref(v_x_52_);
v_res_55_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v_x_108__boxed_54_, v_x_53_);
lean_dec(v_x_53_);
v_r_56_ = lean_box_uint64(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object* v_x_57_){
_start:
{
lean_object* v_c_58_; lean_object* v_ls_59_; lean_object* v_maxArgs_x3f_60_; uint64_t v___x_61_; uint64_t v___y_63_; 
v_c_58_ = lean_ctor_get(v_x_57_, 0);
v_ls_59_ = lean_ctor_get(v_x_57_, 1);
v_maxArgs_x3f_60_ = lean_ctor_get(v_x_57_, 2);
v___x_61_ = 0ULL;
if (lean_obj_tag(v_c_58_) == 0)
{
uint64_t v___x_75_; 
v___x_75_ = 1723ULL;
v___y_63_ = v___x_75_;
goto v___jp_62_;
}
else
{
uint64_t v_hash_76_; 
v_hash_76_ = lean_ctor_get_uint64(v_c_58_, sizeof(void*)*2);
v___y_63_ = v_hash_76_;
goto v___jp_62_;
}
v___jp_62_:
{
uint64_t v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; 
v___x_64_ = lean_uint64_mix_hash(v___x_61_, v___y_63_);
v___x_65_ = 7ULL;
v___x_66_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v___x_65_, v_ls_59_);
v___x_67_ = lean_uint64_mix_hash(v___x_64_, v___x_66_);
if (lean_obj_tag(v_maxArgs_x3f_60_) == 0)
{
uint64_t v___x_68_; uint64_t v___x_69_; 
v___x_68_ = 11ULL;
v___x_69_ = lean_uint64_mix_hash(v___x_67_, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; 
v_val_70_ = lean_ctor_get(v_maxArgs_x3f_60_, 0);
v___x_71_ = lean_uint64_of_nat(v_val_70_);
v___x_72_ = 13ULL;
v___x_73_ = lean_uint64_mix_hash(v___x_71_, v___x_72_);
v___x_74_ = lean_uint64_mix_hash(v___x_67_, v___x_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object* v_x_77_){
_start:
{
uint64_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_77_);
lean_dec_ref(v_x_77_);
v_r_79_ = lean_box_uint64(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object* v_fn_116_, lean_object* v_maxArgs_x3f_117_, lean_object* v_k_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v___f_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___f_124_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0));
v___x_125_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1));
v___x_126_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2));
v___x_127_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0));
v___x_128_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0));
v___x_129_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_130_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_inc(v_maxArgs_x3f_117_);
lean_inc_ref(v_fn_116_);
v___x_131_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_116_, v_maxArgs_x3f_117_, v_a_119_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_192_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_192_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_192_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_192_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_finfo_137_; lean_object* v___y_138_; lean_object* v___x_170_; lean_object* v_cache_171_; lean_object* v_funInfo_172_; lean_object* v___x_173_; 
v___x_170_ = lean_st_ref_get(v_a_120_);
v_cache_171_ = lean_ctor_get(v___x_170_, 1);
lean_inc_ref(v_cache_171_);
lean_dec(v___x_170_);
v_funInfo_172_ = lean_ctor_get(v_cache_171_, 1);
lean_inc_ref(v_funInfo_172_);
lean_dec_ref(v_cache_171_);
lean_inc(v_a_132_);
v___x_173_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_125_, v___x_126_, v_funInfo_172_, v_a_132_);
lean_dec_ref(v_funInfo_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
if (lean_obj_tag(v_fn_116_) == 4)
{
lean_object* v_declName_174_; lean_object* v_us_175_; uint8_t v___x_176_; 
v_declName_174_ = lean_ctor_get(v_fn_116_, 0);
lean_inc(v_declName_174_);
v_us_175_ = lean_ctor_get(v_fn_116_, 1);
lean_inc_n(v_us_175_, 2);
lean_dec_ref_known(v_fn_116_, 2);
v___x_176_ = l_List_any___redArg(v_us_175_, v___f_124_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_inc(v_declName_174_);
v___x_177_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_177_, 0, v_declName_174_);
lean_ctor_set(v___x_177_, 1, v_us_175_);
lean_ctor_set(v___x_177_, 2, v_maxArgs_x3f_117_);
v___x_178_ = l_Lean_Meta_realizeValue___redArg(v___x_127_, v___x_128_, v___x_129_, v___x_130_, v_declName_174_, v___x_177_, v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
v_finfo_137_ = v_a_179_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_178_;
}
}
else
{
lean_object* v___x_180_; 
lean_dec(v_us_175_);
lean_dec(v_declName_174_);
lean_dec(v_maxArgs_x3f_117_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_180_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
v_finfo_137_ = v_a_181_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_180_;
}
}
}
else
{
lean_object* v___x_182_; 
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_182_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_183_);
lean_dec_ref_known(v___x_182_, 1);
v_finfo_137_ = v_a_183_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_182_;
}
}
}
else
{
lean_object* v_val_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_val_184_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_173_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_val_184_);
lean_dec(v___x_173_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set_tag(v___x_186_, 0);
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_val_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
v___jp_136_:
{
lean_object* v___x_139_; lean_object* v_cache_140_; lean_object* v_mctx_141_; lean_object* v_zetaDeltaFVarIds_142_; lean_object* v_postponed_143_; lean_object* v_diag_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_169_; 
v___x_139_ = lean_st_ref_take(v___y_138_);
v_cache_140_ = lean_ctor_get(v___x_139_, 1);
v_mctx_141_ = lean_ctor_get(v___x_139_, 0);
v_zetaDeltaFVarIds_142_ = lean_ctor_get(v___x_139_, 2);
v_postponed_143_ = lean_ctor_get(v___x_139_, 3);
v_diag_144_ = lean_ctor_get(v___x_139_, 4);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_169_ == 0)
{
v___x_146_ = v___x_139_;
v_isShared_147_ = v_isSharedCheck_169_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_diag_144_);
lean_inc(v_postponed_143_);
lean_inc(v_zetaDeltaFVarIds_142_);
lean_inc(v_cache_140_);
lean_inc(v_mctx_141_);
lean_dec(v___x_139_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_169_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v_inferType_148_; lean_object* v_funInfo_149_; lean_object* v_synthInstance_150_; lean_object* v_whnf_151_; lean_object* v_defEqTrans_152_; lean_object* v_defEqPerm_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_168_; 
v_inferType_148_ = lean_ctor_get(v_cache_140_, 0);
v_funInfo_149_ = lean_ctor_get(v_cache_140_, 1);
v_synthInstance_150_ = lean_ctor_get(v_cache_140_, 2);
v_whnf_151_ = lean_ctor_get(v_cache_140_, 3);
v_defEqTrans_152_ = lean_ctor_get(v_cache_140_, 4);
v_defEqPerm_153_ = lean_ctor_get(v_cache_140_, 5);
v_isSharedCheck_168_ = !lean_is_exclusive(v_cache_140_);
if (v_isSharedCheck_168_ == 0)
{
v___x_155_ = v_cache_140_;
v_isShared_156_ = v_isSharedCheck_168_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_defEqPerm_153_);
lean_inc(v_defEqTrans_152_);
lean_inc(v_whnf_151_);
lean_inc(v_synthInstance_150_);
lean_inc(v_funInfo_149_);
lean_inc(v_inferType_148_);
lean_dec(v_cache_140_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_168_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_157_; lean_object* v___x_159_; 
lean_inc_ref(v_finfo_137_);
v___x_157_ = l_Lean_PersistentHashMap_insert___redArg(v___x_125_, v___x_126_, v_funInfo_149_, v_a_132_, v_finfo_137_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v___x_157_);
v___x_159_ = v___x_155_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_inferType_148_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_157_);
lean_ctor_set(v_reuseFailAlloc_167_, 2, v_synthInstance_150_);
lean_ctor_set(v_reuseFailAlloc_167_, 3, v_whnf_151_);
lean_ctor_set(v_reuseFailAlloc_167_, 4, v_defEqTrans_152_);
lean_ctor_set(v_reuseFailAlloc_167_, 5, v_defEqPerm_153_);
v___x_159_ = v_reuseFailAlloc_167_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_161_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 1, v___x_159_);
v___x_161_ = v___x_146_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_mctx_141_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_166_, 2, v_zetaDeltaFVarIds_142_);
lean_ctor_set(v_reuseFailAlloc_166_, 3, v_postponed_143_);
lean_ctor_set(v_reuseFailAlloc_166_, 4, v_diag_144_);
v___x_161_ = v_reuseFailAlloc_166_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = lean_st_ref_put(v___y_138_, v___x_161_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v_finfo_137_);
v___x_164_ = v___x_134_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_finfo_137_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
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
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_a_193_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_131_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_131_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object* v_fn_201_, lean_object* v_maxArgs_x3f_202_, lean_object* v_k_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(v_fn_201_, v_maxArgs_x3f_202_, v_k_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
lean_dec(v_a_205_);
lean_dec_ref(v_a_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object* v_e_210_, lean_object* v_deps_211_, lean_object* v_k_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = l_Lean_Expr_hasFVar(v_e_210_);
if (v___x_213_ == 0)
{
lean_dec(v_k_212_);
return v_deps_211_;
}
else
{
lean_object* v___x_214_; 
v___x_214_ = lean_apply_1(v_k_212_, v_deps_211_);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object* v_e_215_, lean_object* v_deps_216_, lean_object* v_k_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(v_e_215_, v_deps_216_, v_k_217_);
lean_dec_ref(v_e_215_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object* v_00_u03b1_219_, lean_object* v_e_220_, lean_object* v_deps_221_, lean_object* v_k_222_){
_start:
{
uint8_t v___x_223_; 
v___x_223_ = l_Lean_Expr_hasFVar(v_e_220_);
if (v___x_223_ == 0)
{
lean_dec(v_k_222_);
return v_deps_221_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = lean_apply_1(v_k_222_, v_deps_221_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object* v_00_u03b1_225_, lean_object* v_e_226_, lean_object* v_deps_227_, lean_object* v_k_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(v_00_u03b1_225_, v_e_226_, v_deps_227_, v_k_228_);
lean_dec_ref(v_e_226_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object* v_xs_230_, lean_object* v_v_231_, lean_object* v_i_232_){
_start:
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = lean_array_get_size(v_xs_230_);
v___x_234_ = lean_nat_dec_lt(v_i_232_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; 
lean_dec(v_i_232_);
v___x_235_ = lean_box(0);
return v___x_235_;
}
else
{
lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_236_ = lean_array_fget_borrowed(v_xs_230_, v_i_232_);
v___x_237_ = lean_expr_eqv(v___x_236_, v_v_231_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = lean_nat_add(v_i_232_, v___x_238_);
lean_dec(v_i_232_);
v_i_232_ = v___x_239_;
goto _start;
}
else
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_241_, 0, v_i_232_);
return v___x_241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_242_, lean_object* v_v_243_, lean_object* v_i_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_242_, v_v_243_, v_i_244_);
lean_dec_ref(v_v_243_);
lean_dec_ref(v_xs_242_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object* v_xs_246_, lean_object* v_v_247_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(0u);
v___x_249_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_246_, v_v_247_, v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object* v_xs_250_, lean_object* v_v_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_250_, v_v_251_);
lean_dec_ref(v_v_251_);
lean_dec_ref(v_xs_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object* v_xs_253_, lean_object* v_v_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_253_, v_v_254_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v___x_256_; 
v___x_256_ = lean_box(0);
return v___x_256_;
}
else
{
lean_object* v_val_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
v_val_257_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_255_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_val_257_);
lean_dec(v___x_255_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_val_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object* v_xs_265_, lean_object* v_v_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_xs_265_, v_v_266_);
lean_dec_ref(v_v_266_);
lean_dec_ref(v_xs_265_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object* v_a_268_, lean_object* v_as_269_, size_t v_i_270_, size_t v_stop_271_){
_start:
{
uint8_t v___x_272_; 
v___x_272_ = lean_usize_dec_eq(v_i_270_, v_stop_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_array_uget_borrowed(v_as_269_, v_i_270_);
v___x_274_ = lean_nat_dec_eq(v_a_268_, v___x_273_);
if (v___x_274_ == 0)
{
size_t v___x_275_; size_t v___x_276_; 
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_add(v_i_270_, v___x_275_);
v_i_270_ = v___x_276_;
goto _start;
}
else
{
return v___x_274_;
}
}
else
{
uint8_t v___x_278_; 
v___x_278_ = 0;
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object* v_a_279_, lean_object* v_as_280_, lean_object* v_i_281_, lean_object* v_stop_282_){
_start:
{
size_t v_i_boxed_283_; size_t v_stop_boxed_284_; uint8_t v_res_285_; lean_object* v_r_286_; 
v_i_boxed_283_ = lean_unbox_usize(v_i_281_);
lean_dec(v_i_281_);
v_stop_boxed_284_ = lean_unbox_usize(v_stop_282_);
lean_dec(v_stop_282_);
v_res_285_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_279_, v_as_280_, v_i_boxed_283_, v_stop_boxed_284_);
lean_dec_ref(v_as_280_);
lean_dec(v_a_279_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object* v_as_287_, lean_object* v_a_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_array_get_size(v_as_287_);
v___x_291_ = lean_nat_dec_lt(v___x_289_, v___x_290_);
if (v___x_291_ == 0)
{
return v___x_291_;
}
else
{
if (v___x_291_ == 0)
{
return v___x_291_;
}
else
{
size_t v___x_292_; size_t v___x_293_; uint8_t v___x_294_; 
v___x_292_ = ((size_t)0ULL);
v___x_293_ = lean_usize_of_nat(v___x_290_);
v___x_294_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_288_, v_as_287_, v___x_292_, v___x_293_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object* v_as_295_, lean_object* v_a_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_as_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_as_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object* v_fvars_299_, lean_object* v_e_300_, lean_object* v_deps_301_){
_start:
{
lean_object* v_d_303_; lean_object* v_b_304_; 
switch(lean_obj_tag(v_e_300_))
{
case 5:
{
lean_object* v_fn_308_; lean_object* v_arg_309_; uint8_t v___x_310_; 
v_fn_308_ = lean_ctor_get(v_e_300_, 0);
v_arg_309_ = lean_ctor_get(v_e_300_, 1);
v___x_310_ = l_Lean_Expr_hasFVar(v_e_300_);
if (v___x_310_ == 0)
{
return v_deps_301_;
}
else
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_fn_308_, v_deps_301_);
v_e_300_ = v_arg_309_;
v_deps_301_ = v___x_311_;
goto _start;
}
}
case 7:
{
lean_object* v_binderType_313_; lean_object* v_body_314_; 
v_binderType_313_ = lean_ctor_get(v_e_300_, 1);
v_body_314_ = lean_ctor_get(v_e_300_, 2);
v_d_303_ = v_binderType_313_;
v_b_304_ = v_body_314_;
goto v___jp_302_;
}
case 6:
{
lean_object* v_binderType_315_; lean_object* v_body_316_; 
v_binderType_315_ = lean_ctor_get(v_e_300_, 1);
v_body_316_ = lean_ctor_get(v_e_300_, 2);
v_d_303_ = v_binderType_315_;
v_b_304_ = v_body_316_;
goto v___jp_302_;
}
case 8:
{
lean_object* v_type_317_; lean_object* v_value_318_; lean_object* v_body_319_; uint8_t v___x_320_; 
v_type_317_ = lean_ctor_get(v_e_300_, 1);
v_value_318_ = lean_ctor_get(v_e_300_, 2);
v_body_319_ = lean_ctor_get(v_e_300_, 3);
v___x_320_ = l_Lean_Expr_hasFVar(v_e_300_);
if (v___x_320_ == 0)
{
return v_deps_301_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_type_317_, v_deps_301_);
v___x_322_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_value_318_, v___x_321_);
v_e_300_ = v_body_319_;
v_deps_301_ = v___x_322_;
goto _start;
}
}
case 11:
{
lean_object* v_struct_324_; 
v_struct_324_ = lean_ctor_get(v_e_300_, 2);
v_e_300_ = v_struct_324_;
goto _start;
}
case 10:
{
lean_object* v_expr_326_; 
v_expr_326_ = lean_ctor_get(v_e_300_, 1);
v_e_300_ = v_expr_326_;
goto _start;
}
case 1:
{
lean_object* v___x_328_; 
v___x_328_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_299_, v_e_300_);
if (lean_obj_tag(v___x_328_) == 0)
{
return v_deps_301_;
}
else
{
lean_object* v_val_329_; uint8_t v___x_330_; 
v_val_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_val_329_);
lean_dec_ref_known(v___x_328_, 1);
v___x_330_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_deps_301_, v_val_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = lean_array_push(v_deps_301_, v_val_329_);
return v___x_331_;
}
else
{
lean_dec(v_val_329_);
return v_deps_301_;
}
}
}
default: 
{
return v_deps_301_;
}
}
v___jp_302_:
{
uint8_t v___x_305_; 
v___x_305_ = l_Lean_Expr_hasFVar(v_e_300_);
if (v___x_305_ == 0)
{
return v_deps_301_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_d_303_, v_deps_301_);
v_e_300_ = v_b_304_;
v_deps_301_ = v___x_306_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object* v_fvars_332_, lean_object* v_e_333_, lean_object* v_deps_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_332_, v_e_333_, v_deps_334_);
lean_dec_ref(v_e_333_);
lean_dec_ref(v_fvars_332_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object* v_hi_336_, lean_object* v_pivot_337_, lean_object* v_as_338_, lean_object* v_i_339_, lean_object* v_k_340_){
_start:
{
uint8_t v___x_341_; 
v___x_341_ = lean_nat_dec_lt(v_k_340_, v_hi_336_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v_k_340_);
v___x_342_ = lean_array_fswap(v_as_338_, v_i_339_, v_hi_336_);
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v_i_339_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_array_fget_borrowed(v_as_338_, v_k_340_);
v___x_345_ = lean_nat_dec_lt(v___x_344_, v_pivot_337_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_add(v_k_340_, v___x_346_);
lean_dec(v_k_340_);
v_k_340_ = v___x_347_;
goto _start;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_349_ = lean_array_fswap(v_as_338_, v_i_339_, v_k_340_);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_add(v_i_339_, v___x_350_);
lean_dec(v_i_339_);
v___x_352_ = lean_nat_add(v_k_340_, v___x_350_);
lean_dec(v_k_340_);
v_as_338_ = v___x_349_;
v_i_339_ = v___x_351_;
v_k_340_ = v___x_352_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_354_, lean_object* v_pivot_355_, lean_object* v_as_356_, lean_object* v_i_357_, lean_object* v_k_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_354_, v_pivot_355_, v_as_356_, v_i_357_, v_k_358_);
lean_dec(v_pivot_355_);
lean_dec(v_hi_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object* v_n_360_, lean_object* v_as_361_, lean_object* v_lo_362_, lean_object* v_hi_363_){
_start:
{
lean_object* v___y_365_; uint8_t v___x_375_; 
v___x_375_ = lean_nat_dec_lt(v_lo_362_, v_hi_363_);
if (v___x_375_ == 0)
{
lean_dec(v_lo_362_);
return v_as_361_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_mid_378_; lean_object* v___y_380_; lean_object* v___y_386_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_376_ = lean_nat_add(v_lo_362_, v_hi_363_);
v___x_377_ = lean_unsigned_to_nat(1u);
v_mid_378_ = lean_nat_shiftr(v___x_376_, v___x_377_);
lean_dec(v___x_376_);
v___x_391_ = lean_array_fget_borrowed(v_as_361_, v_mid_378_);
v___x_392_ = lean_array_fget_borrowed(v_as_361_, v_lo_362_);
v___x_393_ = lean_nat_dec_lt(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
v___y_386_ = v_as_361_;
goto v___jp_385_;
}
else
{
lean_object* v___x_394_; 
v___x_394_ = lean_array_fswap(v_as_361_, v_lo_362_, v_mid_378_);
v___y_386_ = v___x_394_;
goto v___jp_385_;
}
v___jp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_381_ = lean_array_fget_borrowed(v___y_380_, v_mid_378_);
v___x_382_ = lean_array_fget_borrowed(v___y_380_, v_hi_363_);
v___x_383_ = lean_nat_dec_lt(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v_mid_378_);
v___y_365_ = v___y_380_;
goto v___jp_364_;
}
else
{
lean_object* v___x_384_; 
v___x_384_ = lean_array_fswap(v___y_380_, v_mid_378_, v_hi_363_);
lean_dec(v_mid_378_);
v___y_365_ = v___x_384_;
goto v___jp_364_;
}
}
v___jp_385_:
{
lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_387_ = lean_array_fget_borrowed(v___y_386_, v_hi_363_);
v___x_388_ = lean_array_fget_borrowed(v___y_386_, v_lo_362_);
v___x_389_ = lean_nat_dec_lt(v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
v___y_380_ = v___y_386_;
goto v___jp_379_;
}
else
{
lean_object* v___x_390_; 
v___x_390_ = lean_array_fswap(v___y_386_, v_lo_362_, v_hi_363_);
v___y_380_ = v___x_390_;
goto v___jp_379_;
}
}
}
v___jp_364_:
{
lean_object* v_pivot_366_; lean_object* v___x_367_; lean_object* v_fst_368_; lean_object* v_snd_369_; uint8_t v___x_370_; 
v_pivot_366_ = lean_array_fget(v___y_365_, v_hi_363_);
lean_inc_n(v_lo_362_, 2);
v___x_367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_363_, v_pivot_366_, v___y_365_, v_lo_362_, v_lo_362_);
lean_dec(v_pivot_366_);
v_fst_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_fst_368_);
v_snd_369_ = lean_ctor_get(v___x_367_, 1);
lean_inc(v_snd_369_);
lean_dec_ref(v___x_367_);
v___x_370_ = lean_nat_dec_le(v_hi_363_, v_fst_368_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_360_, v_snd_369_, v_lo_362_, v_fst_368_);
v___x_372_ = lean_unsigned_to_nat(1u);
v___x_373_ = lean_nat_add(v_fst_368_, v___x_372_);
lean_dec(v_fst_368_);
v_as_361_ = v___x_371_;
v_lo_362_ = v___x_373_;
goto _start;
}
else
{
lean_dec(v_fst_368_);
lean_dec(v_lo_362_);
return v_snd_369_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object* v_n_395_, lean_object* v_as_396_, lean_object* v_lo_397_, lean_object* v_hi_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_395_, v_as_396_, v_lo_397_, v_hi_398_);
lean_dec(v_hi_398_);
lean_dec(v_n_395_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object* v_fvars_402_, lean_object* v_e_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v_deps_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0));
v_deps_406_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_402_, v_e_403_, v___x_405_);
v___x_407_ = lean_array_get_size(v_deps_406_);
v___x_408_ = lean_nat_dec_eq(v___x_407_, v___x_404_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___y_412_; uint8_t v___x_416_; 
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_nat_sub(v___x_407_, v___x_409_);
v___x_416_ = lean_nat_dec_le(v___x_404_, v___x_410_);
if (v___x_416_ == 0)
{
lean_inc(v___x_410_);
v___y_412_ = v___x_410_;
goto v___jp_411_;
}
else
{
v___y_412_ = v___x_404_;
goto v___jp_411_;
}
v___jp_411_:
{
uint8_t v___x_413_; 
v___x_413_ = lean_nat_dec_le(v___y_412_, v___x_410_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; 
lean_dec(v___x_410_);
lean_inc(v___y_412_);
v___x_414_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_407_, v_deps_406_, v___y_412_, v___y_412_);
lean_dec(v___y_412_);
return v___x_414_;
}
else
{
lean_object* v___x_415_; 
v___x_415_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_407_, v_deps_406_, v___y_412_, v___x_410_);
lean_dec(v___x_410_);
return v___x_415_;
}
}
}
else
{
return v_deps_406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object* v_fvars_417_, lean_object* v_e_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_417_, v_e_418_);
lean_dec_ref(v_e_418_);
lean_dec_ref(v_fvars_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object* v_n_420_, lean_object* v_as_421_, lean_object* v_lo_422_, lean_object* v_hi_423_, lean_object* v_w_424_, lean_object* v_hlo_425_, lean_object* v_hhi_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_420_, v_as_421_, v_lo_422_, v_hi_423_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object* v_n_428_, lean_object* v_as_429_, lean_object* v_lo_430_, lean_object* v_hi_431_, lean_object* v_w_432_, lean_object* v_hlo_433_, lean_object* v_hhi_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(v_n_428_, v_as_429_, v_lo_430_, v_hi_431_, v_w_432_, v_hlo_433_, v_hhi_434_);
lean_dec(v_hi_431_);
lean_dec(v_n_428_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object* v_n_436_, lean_object* v_lo_437_, lean_object* v_hi_438_, lean_object* v_hhi_439_, lean_object* v_pivot_440_, lean_object* v_as_441_, lean_object* v_i_442_, lean_object* v_k_443_, lean_object* v_ilo_444_, lean_object* v_ik_445_, lean_object* v_w_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_438_, v_pivot_440_, v_as_441_, v_i_442_, v_k_443_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object* v_n_448_, lean_object* v_lo_449_, lean_object* v_hi_450_, lean_object* v_hhi_451_, lean_object* v_pivot_452_, lean_object* v_as_453_, lean_object* v_i_454_, lean_object* v_k_455_, lean_object* v_ilo_456_, lean_object* v_ik_457_, lean_object* v_w_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(v_n_448_, v_lo_449_, v_hi_450_, v_hhi_451_, v_pivot_452_, v_as_453_, v_i_454_, v_k_455_, v_ilo_456_, v_ik_457_, v_w_458_);
lean_dec(v_pivot_452_);
lean_dec(v_hi_450_);
lean_dec(v_lo_449_);
lean_dec(v_n_448_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object* v_backDeps_460_, size_t v_sz_461_, size_t v_i_462_, lean_object* v_bs_463_){
_start:
{
uint8_t v___x_464_; 
v___x_464_ = lean_usize_dec_lt(v_i_462_, v_sz_461_);
if (v___x_464_ == 0)
{
return v_bs_463_;
}
else
{
lean_object* v_v_465_; uint8_t v_binderInfo_466_; uint8_t v_hasFwdDeps_467_; lean_object* v_backDeps_468_; uint8_t v_isProp_469_; uint8_t v_isDecInst_470_; uint8_t v_isInstance_471_; uint8_t v_higherOrderOutParam_472_; uint8_t v_dependsOnHigherOrderOutParam_473_; lean_object* v___x_474_; lean_object* v_bs_x27_475_; lean_object* v___y_477_; 
v_v_465_ = lean_array_uget(v_bs_463_, v_i_462_);
v_binderInfo_466_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1);
v_hasFwdDeps_467_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 1);
v_backDeps_468_ = lean_ctor_get(v_v_465_, 0);
v_isProp_469_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 2);
v_isDecInst_470_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 3);
v_isInstance_471_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 4);
v_higherOrderOutParam_472_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 5);
v_dependsOnHigherOrderOutParam_473_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 6);
v___x_474_ = lean_unsigned_to_nat(0u);
v_bs_x27_475_ = lean_array_uset(v_bs_463_, v_i_462_, v___x_474_);
if (v_hasFwdDeps_467_ == 0)
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_usize_to_nat(v_i_462_);
v___x_483_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_backDeps_460_, v___x_482_);
lean_dec(v___x_482_);
if (v___x_483_ == 0)
{
v___y_477_ = v_v_465_;
goto v___jp_476_;
}
else
{
lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
lean_inc_ref(v_backDeps_468_);
v_isSharedCheck_490_ = !lean_is_exclusive(v_v_465_);
if (v_isSharedCheck_490_ == 0)
{
lean_object* v_unused_491_; 
v_unused_491_ = lean_ctor_get(v_v_465_, 0);
lean_dec(v_unused_491_);
v___x_485_ = v_v_465_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_dec(v_v_465_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_backDeps_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1, v_binderInfo_466_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 2, v_isProp_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 3, v_isDecInst_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 4, v_isInstance_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 5, v_higherOrderOutParam_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_473_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*1 + 1, v___x_483_);
v___y_477_ = v___x_488_;
goto v___jp_476_;
}
}
}
}
else
{
v___y_477_ = v_v_465_;
goto v___jp_476_;
}
v___jp_476_:
{
size_t v___x_478_; size_t v___x_479_; lean_object* v___x_480_; 
v___x_478_ = ((size_t)1ULL);
v___x_479_ = lean_usize_add(v_i_462_, v___x_478_);
v___x_480_ = lean_array_uset(v_bs_x27_475_, v_i_462_, v___y_477_);
v_i_462_ = v___x_479_;
v_bs_463_ = v___x_480_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object* v_backDeps_492_, lean_object* v_sz_493_, lean_object* v_i_494_, lean_object* v_bs_495_){
_start:
{
size_t v_sz_boxed_496_; size_t v_i_boxed_497_; lean_object* v_res_498_; 
v_sz_boxed_496_ = lean_unbox_usize(v_sz_493_);
lean_dec(v_sz_493_);
v_i_boxed_497_ = lean_unbox_usize(v_i_494_);
lean_dec(v_i_494_);
v_res_498_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_492_, v_sz_boxed_496_, v_i_boxed_497_, v_bs_495_);
lean_dec_ref(v_backDeps_492_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object* v_pinfo_499_, lean_object* v_backDeps_500_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_501_ = lean_array_get_size(v_backDeps_500_);
v___x_502_ = lean_unsigned_to_nat(0u);
v___x_503_ = lean_nat_dec_eq(v___x_501_, v___x_502_);
if (v___x_503_ == 0)
{
size_t v_sz_504_; size_t v___x_505_; lean_object* v___x_506_; 
v_sz_504_ = lean_array_size(v_pinfo_499_);
v___x_505_ = ((size_t)0ULL);
v___x_506_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_500_, v_sz_504_, v___x_505_, v_pinfo_499_);
return v___x_506_;
}
else
{
return v_pinfo_499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object* v_pinfo_507_, lean_object* v_backDeps_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_pinfo_507_, v_backDeps_508_);
lean_dec_ref(v_backDeps_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object* v_backDeps_510_, lean_object* v_as_511_, size_t v_sz_512_, size_t v_i_513_, lean_object* v_bs_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_510_, v_sz_512_, v_i_513_, v_bs_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object* v_backDeps_516_, lean_object* v_as_517_, lean_object* v_sz_518_, lean_object* v_i_519_, lean_object* v_bs_520_){
_start:
{
size_t v_sz_boxed_521_; size_t v_i_boxed_522_; lean_object* v_res_523_; 
v_sz_boxed_521_ = lean_unbox_usize(v_sz_518_);
lean_dec(v_sz_518_);
v_i_boxed_522_ = lean_unbox_usize(v_i_519_);
lean_dec(v_i_519_);
v_res_523_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(v_backDeps_516_, v_as_517_, v_sz_boxed_521_, v_i_boxed_522_, v_bs_520_);
lean_dec_ref(v_as_517_);
lean_dec_ref(v_backDeps_516_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0(lean_object* v_k_524_, lean_object* v_b_525_, lean_object* v_c_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; 
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
v___x_532_ = lean_apply_7(v_k_524_, v_b_525_, v_c_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, lean_box(0));
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0___boxed(lean_object* v_k_533_, lean_object* v_b_534_, lean_object* v_c_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0(v_k_533_, v_b_534_, v_c_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object* v_type_542_, lean_object* v_k_543_, uint8_t v_cleanupAnnotations_544_, uint8_t v_whnfType_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___f_551_; lean_object* v___x_552_; 
v___f_551_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_551_, 0, v_k_543_);
v___x_552_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_542_, v___f_551_, v_cleanupAnnotations_544_, v_whnfType_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_a_561_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_552_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_552_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object* v_type_569_, lean_object* v_k_570_, lean_object* v_cleanupAnnotations_571_, lean_object* v_whnfType_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_578_; uint8_t v_whnfType_boxed_579_; lean_object* v_res_580_; 
v_cleanupAnnotations_boxed_578_ = lean_unbox(v_cleanupAnnotations_571_);
v_whnfType_boxed_579_ = lean_unbox(v_whnfType_572_);
v_res_580_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_type_569_, v_k_570_, v_cleanupAnnotations_boxed_578_, v_whnfType_boxed_579_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object* v_00_u03b1_581_, lean_object* v_type_582_, lean_object* v_k_583_, uint8_t v_cleanupAnnotations_584_, uint8_t v_whnfType_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_type_582_, v_k_583_, v_cleanupAnnotations_584_, v_whnfType_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object* v_00_u03b1_592_, lean_object* v_type_593_, lean_object* v_k_594_, lean_object* v_cleanupAnnotations_595_, lean_object* v_whnfType_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_602_; uint8_t v_whnfType_boxed_603_; lean_object* v_res_604_; 
v_cleanupAnnotations_boxed_602_ = lean_unbox(v_cleanupAnnotations_595_);
v_whnfType_boxed_603_ = lean_unbox(v_whnfType_596_);
v_res_604_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(v_00_u03b1_592_, v_type_593_, v_k_594_, v_cleanupAnnotations_boxed_602_, v_whnfType_boxed_603_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object* v_msg_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v___f_612_; lean_object* v___x_8250__overap_613_; lean_object* v___x_614_; 
v___f_612_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___closed__0));
v___x_8250__overap_613_ = lean_panic_fn_borrowed(v___f_612_, v_msg_606_);
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
lean_inc(v___y_608_);
lean_inc_ref(v___y_607_);
v___x_614_ = lean_apply_5(v___x_8250__overap_613_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, lean_box(0));
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object* v_msg_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(v_msg_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object* v_type_622_, lean_object* v_maxFVars_x3f_623_, lean_object* v_k_624_, uint8_t v_cleanupAnnotations_625_, uint8_t v_whnfType_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v___f_632_; lean_object* v___x_633_; 
v___f_632_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_632_, 0, v_k_624_);
v___x_633_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_622_, v_maxFVars_x3f_623_, v___f_632_, v_cleanupAnnotations_625_, v_whnfType_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
v_a_642_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_633_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_633_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object* v_type_650_, lean_object* v_maxFVars_x3f_651_, lean_object* v_k_652_, lean_object* v_cleanupAnnotations_653_, lean_object* v_whnfType_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_660_; uint8_t v_whnfType_boxed_661_; lean_object* v_res_662_; 
v_cleanupAnnotations_boxed_660_ = lean_unbox(v_cleanupAnnotations_653_);
v_whnfType_boxed_661_ = lean_unbox(v_whnfType_654_);
v_res_662_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_type_650_, v_maxFVars_x3f_651_, v_k_652_, v_cleanupAnnotations_boxed_660_, v_whnfType_boxed_661_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object* v_00_u03b1_663_, lean_object* v_type_664_, lean_object* v_maxFVars_x3f_665_, lean_object* v_k_666_, uint8_t v_cleanupAnnotations_667_, uint8_t v_whnfType_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_type_664_, v_maxFVars_x3f_665_, v_k_666_, v_cleanupAnnotations_667_, v_whnfType_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object* v_00_u03b1_675_, lean_object* v_type_676_, lean_object* v_maxFVars_x3f_677_, lean_object* v_k_678_, lean_object* v_cleanupAnnotations_679_, lean_object* v_whnfType_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_686_; uint8_t v_whnfType_boxed_687_; lean_object* v_res_688_; 
v_cleanupAnnotations_boxed_686_ = lean_unbox(v_cleanupAnnotations_679_);
v_whnfType_boxed_687_ = lean_unbox(v_whnfType_680_);
v_res_688_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(v_00_u03b1_675_, v_type_676_, v_maxFVars_x3f_677_, v_k_678_, v_cleanupAnnotations_boxed_686_, v_whnfType_boxed_687_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object* v_upperBound_689_, lean_object* v_val_690_, lean_object* v___x_691_, lean_object* v_fvars_692_, lean_object* v_next_693_, lean_object* v_upperBound_694_, lean_object* v_a_695_, lean_object* v_b_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_a_703_; uint8_t v___x_707_; 
v___x_707_ = lean_nat_dec_lt(v_a_695_, v_upperBound_689_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
lean_dec(v_a_695_);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_b_696_);
return v___x_708_;
}
else
{
lean_object* v_fst_709_; lean_object* v_snd_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_774_; 
v_fst_709_ = lean_ctor_get(v_b_696_, 0);
v_snd_710_ = lean_ctor_get(v_b_696_, 1);
v_isSharedCheck_774_ = !lean_is_exclusive(v_b_696_);
if (v_isSharedCheck_774_ == 0)
{
v___x_712_ = v_b_696_;
v_isShared_713_ = v_isSharedCheck_774_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snd_710_);
lean_inc(v_fst_709_);
lean_dec(v_b_696_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_774_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
uint8_t v___x_714_; 
v___x_714_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_val_690_, v_a_695_);
if (v___x_714_ == 0)
{
lean_object* v___x_716_; 
if (v_isShared_713_ == 0)
{
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_snd_710_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
v_a_703_ = v___x_716_;
goto v___jp_702_;
}
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_array_fget_borrowed(v___x_691_, v_a_695_);
v___x_719_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_692_, v___x_718_);
if (lean_obj_tag(v___x_719_) == 1)
{
lean_object* v_val_720_; uint8_t v___x_721_; lean_object* v___x_722_; 
v_val_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_val_720_);
lean_dec_ref_known(v___x_719_, 1);
v___x_721_ = lean_nat_dec_lt(v_next_693_, v_upperBound_694_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc(v___y_698_);
lean_inc_ref(v___y_697_);
lean_inc(v___x_718_);
v___x_722_ = lean_infer_type(v___x_718_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_724_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_a_723_);
lean_dec_ref_known(v___x_722_, 1);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc(v___y_698_);
lean_inc_ref(v___y_697_);
v___x_724_ = lean_whnf(v_a_723_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___y_727_; uint8_t v___x_733_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
v___x_733_ = l_Lean_Expr_isForall(v_a_725_);
lean_dec(v_a_725_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; 
lean_dec(v_val_720_);
lean_del_object(v___x_712_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v_fst_709_);
lean_ctor_set(v___x_734_, 1, v_snd_710_);
v_a_703_ = v___x_734_;
goto v___jp_702_;
}
else
{
lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_735_ = lean_array_get_size(v_fst_709_);
v___x_736_ = lean_nat_dec_lt(v_val_720_, v___x_735_);
if (v___x_736_ == 0)
{
lean_dec(v_val_720_);
v___y_727_ = v_fst_709_;
goto v___jp_726_;
}
else
{
lean_object* v_v_737_; uint8_t v_binderInfo_738_; uint8_t v_hasFwdDeps_739_; lean_object* v_backDeps_740_; uint8_t v_isProp_741_; uint8_t v_isDecInst_742_; uint8_t v_isInstance_743_; uint8_t v_dependsOnHigherOrderOutParam_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_754_; 
v_v_737_ = lean_array_fget(v_fst_709_, v_val_720_);
v_binderInfo_738_ = lean_ctor_get_uint8(v_v_737_, sizeof(void*)*1);
v_hasFwdDeps_739_ = lean_ctor_get_uint8(v_v_737_, sizeof(void*)*1 + 1);
v_backDeps_740_ = lean_ctor_get(v_v_737_, 0);
v_isProp_741_ = lean_ctor_get_uint8(v_v_737_, sizeof(void*)*1 + 2);
v_isDecInst_742_ = lean_ctor_get_uint8(v_v_737_, sizeof(void*)*1 + 3);
v_isInstance_743_ = lean_ctor_get_uint8(v_v_737_, sizeof(void*)*1 + 4);
v_dependsOnHigherOrderOutParam_744_ = lean_ctor_get_uint8(v_v_737_, sizeof(void*)*1 + 6);
v_isSharedCheck_754_ = !lean_is_exclusive(v_v_737_);
if (v_isSharedCheck_754_ == 0)
{
v___x_746_ = v_v_737_;
v_isShared_747_ = v_isSharedCheck_754_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_backDeps_740_);
lean_dec(v_v_737_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_754_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v_xs_x27_749_; lean_object* v___x_751_; 
v___x_748_ = lean_box(0);
v_xs_x27_749_ = lean_array_fset(v_fst_709_, v_val_720_, v___x_748_);
if (v_isShared_747_ == 0)
{
v___x_751_ = v___x_746_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_backDeps_740_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*1, v_binderInfo_738_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*1 + 1, v_hasFwdDeps_739_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*1 + 2, v_isProp_741_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*1 + 3, v_isDecInst_742_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*1 + 4, v_isInstance_743_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_744_);
v___x_751_ = v_reuseFailAlloc_753_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_752_; 
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*1 + 5, v___x_721_);
v___x_752_ = lean_array_fset(v_xs_x27_749_, v_val_720_, v___x_751_);
lean_dec(v_val_720_);
v___y_727_ = v___x_752_;
goto v___jp_726_;
}
}
}
}
v___jp_726_:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_728_ = l_Lean_Expr_fvarId_x21(v___x_718_);
v___x_729_ = l_Lean_FVarIdSet_insert(v_snd_710_, v___x_728_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 1, v___x_729_);
lean_ctor_set(v___x_712_, 0, v___y_727_);
v___x_731_ = v___x_712_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___y_727_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
v_a_703_ = v___x_731_;
goto v___jp_702_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v_val_720_);
lean_del_object(v___x_712_);
lean_dec(v_snd_710_);
lean_dec(v_fst_709_);
lean_dec(v_a_695_);
v_a_755_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_724_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_724_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_val_720_);
lean_del_object(v___x_712_);
lean_dec(v_snd_710_);
lean_dec(v_fst_709_);
lean_dec(v_a_695_);
v_a_763_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_722_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_722_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
else
{
lean_object* v___x_772_; 
lean_dec(v___x_719_);
if (v_isShared_713_ == 0)
{
v___x_772_ = v___x_712_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_snd_710_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
v_a_703_ = v___x_772_;
goto v___jp_702_;
}
}
}
}
}
v___jp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_unsigned_to_nat(1u);
v___x_705_ = lean_nat_add(v_a_695_, v___x_704_);
lean_dec(v_a_695_);
v_a_695_ = v___x_705_;
v_b_696_ = v_a_703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object* v_upperBound_775_, lean_object* v_val_776_, lean_object* v___x_777_, lean_object* v_fvars_778_, lean_object* v_next_779_, lean_object* v_upperBound_780_, lean_object* v_a_781_, lean_object* v_b_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_upperBound_775_, v_val_776_, v___x_777_, v_fvars_778_, v_next_779_, v_upperBound_780_, v_a_781_, v_b_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v_upperBound_780_);
lean_dec(v_next_779_);
lean_dec_ref(v_fvars_778_);
lean_dec_ref(v___x_777_);
lean_dec_ref(v_val_776_);
lean_dec(v_upperBound_775_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0(lean_object* v_x_792_, lean_object* v_type_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___x_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_799_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___closed__1));
v___x_800_ = l_Lean_Expr_isAppOf(v_type_793_, v___x_799_);
v___x_801_ = lean_box(v___x_800_);
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0___boxed(lean_object* v_x_803_, lean_object* v_type_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__0(v_x_803_, v_type_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec_ref(v_type_804_);
lean_dec_ref(v_x_803_);
return v_res_810_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__1(lean_object* v_snd_811_, lean_object* v_e_812_){
_start:
{
uint8_t v___x_813_; 
v___x_813_ = l_Lean_Expr_isFVar(v_e_812_);
if (v___x_813_ == 0)
{
return v___x_813_;
}
else
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = l_Lean_Expr_fvarId_x21(v_e_812_);
v___x_815_ = l_Lean_FVarIdSet_contains(v_snd_811_, v___x_814_);
lean_dec(v___x_814_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__1___boxed(lean_object* v_snd_816_, lean_object* v_e_817_){
_start:
{
uint8_t v_res_818_; lean_object* v_r_819_; 
v_res_818_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__1(v_snd_816_, v_e_817_);
lean_dec_ref(v_e_817_);
lean_dec(v_snd_816_);
v_r_819_ = lean_box(v_res_818_);
return v_r_819_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_821_; lean_object* v_dummy_822_; 
v___x_821_ = lean_box(0);
v_dummy_822_ = l_Lean_Expr_sort___override(v___x_821_);
return v_dummy_822_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_826_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__4));
v___x_827_ = lean_unsigned_to_nat(47u);
v___x_828_ = lean_unsigned_to_nat(121u);
v___x_829_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__3));
v___x_830_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__2));
v___x_831_ = l_mkPanicMessageWithDecl(v___x_830_, v___x_829_, v___x_828_, v___x_827_, v___x_826_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg(lean_object* v_upperBound_832_, lean_object* v_fvars_833_, lean_object* v_a_834_, lean_object* v_b_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_a_842_; uint8_t v___x_846_; 
v___x_846_ = lean_nat_dec_lt(v_a_834_, v_upperBound_832_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
lean_dec(v_a_834_);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v_b_835_);
return v___x_847_;
}
else
{
lean_object* v_fst_848_; lean_object* v_snd_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_969_; 
v_fst_848_ = lean_ctor_get(v_b_835_, 0);
v_snd_849_ = lean_ctor_get(v_b_835_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_b_835_);
if (v_isSharedCheck_969_ == 0)
{
v___x_851_ = v_b_835_;
v_isShared_852_ = v_isSharedCheck_969_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_snd_849_);
lean_inc(v_fst_848_);
lean_dec(v_b_835_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_969_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___f_853_; lean_object* v___f_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___f_853_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__0));
lean_inc(v_snd_849_);
v___f_854_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_854_, 0, v_snd_849_);
v___x_855_ = lean_array_fget_borrowed(v_fvars_833_, v_a_834_);
v___x_856_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_855_, v___y_836_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___y_861_; uint8_t v___y_862_; uint8_t v___y_863_; uint8_t v___y_943_; uint8_t v___x_958_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
v___x_858_ = l_Lean_LocalDecl_type(v_a_857_);
v___x_859_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_833_, v___x_858_);
v___x_958_ = l_Lean_FVarIdSet_isEmpty(v_snd_849_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
v___x_959_ = lean_find_expr(v___f_854_, v___x_858_);
lean_dec_ref(v___f_854_);
if (lean_obj_tag(v___x_959_) == 0)
{
v___y_943_ = v___x_958_;
goto v___jp_942_;
}
else
{
lean_dec_ref_known(v___x_959_, 1);
v___y_943_ = v___x_846_;
goto v___jp_942_;
}
}
else
{
uint8_t v___x_960_; 
lean_dec_ref(v___f_854_);
v___x_960_ = 0;
v___y_943_ = v___x_960_;
goto v___jp_942_;
}
v___jp_860_:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_848_, v___x_859_);
lean_inc_ref(v___x_858_);
v___x_865_ = l_Lean_Meta_isProp(v___x_858_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; uint8_t v___x_867_; lean_object* v___x_868_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = 0;
lean_inc_ref(v___x_858_);
v___x_868_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v___x_858_, v___f_853_, v___x_867_, v___x_867_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; uint8_t v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; uint8_t v___x_873_; lean_object* v___x_874_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = l_Lean_LocalDecl_binderInfo(v_a_857_);
lean_dec(v_a_857_);
v___x_871_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v___x_871_, 0, v___x_859_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1, v___x_870_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1 + 1, v___x_867_);
v___x_872_ = lean_unbox(v_a_866_);
lean_dec(v_a_866_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1 + 2, v___x_872_);
v___x_873_ = lean_unbox(v_a_869_);
lean_dec(v_a_869_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1 + 3, v___x_873_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1 + 4, v___y_863_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1 + 5, v___x_867_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1 + 6, v___y_862_);
v___x_874_ = lean_array_push(v___x_864_, v___x_871_);
if (v___y_863_ == 0)
{
lean_object* v___x_876_; 
lean_dec(v___y_861_);
lean_dec_ref(v___x_858_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_874_);
v___x_876_ = v___x_851_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_snd_849_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
v_a_842_ = v___x_876_;
goto v___jp_841_;
}
}
else
{
if (lean_obj_tag(v___y_861_) == 1)
{
lean_object* v_val_878_; lean_object* v___x_879_; lean_object* v_env_880_; lean_object* v___x_881_; 
v_val_878_ = lean_ctor_get(v___y_861_, 0);
lean_inc(v_val_878_);
lean_dec_ref_known(v___y_861_, 1);
v___x_879_ = lean_st_ref_get(v___y_839_);
v_env_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc_ref(v_env_880_);
lean_dec(v___x_879_);
v___x_881_ = l_Lean_getOutParamPositions_x3f(v_env_880_, v_val_878_);
lean_dec(v_val_878_);
if (lean_obj_tag(v___x_881_) == 1)
{
lean_object* v_val_882_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v_val_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_val_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = lean_array_get_size(v_val_882_);
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = lean_nat_dec_eq(v___x_883_, v___x_884_);
if (v___x_885_ == 0)
{
lean_object* v_dummy_886_; lean_object* v_nargs_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v_dummy_886_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__1);
v_nargs_887_ = l_Lean_Expr_getAppNumArgs(v___x_858_);
lean_inc(v_nargs_887_);
v___x_888_ = lean_mk_array(v_nargs_887_, v_dummy_886_);
v___x_889_ = lean_unsigned_to_nat(1u);
v___x_890_ = lean_nat_sub(v_nargs_887_, v___x_889_);
lean_dec(v_nargs_887_);
v___x_891_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_858_, v___x_888_, v___x_890_);
v___x_892_ = lean_array_get_size(v___x_891_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_874_);
v___x_894_ = v___x_851_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_snd_849_);
v___x_894_ = v_reuseFailAlloc_906_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_895_; 
v___x_895_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v___x_892_, v_val_882_, v___x_891_, v_fvars_833_, v_a_834_, v_upperBound_832_, v___x_884_, v___x_894_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
lean_dec_ref(v___x_891_);
lean_dec(v_val_882_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v_fst_897_; lean_object* v_snd_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v_fst_897_ = lean_ctor_get(v_a_896_, 0);
v_snd_898_ = lean_ctor_get(v_a_896_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v_a_896_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v_a_896_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_snd_898_);
lean_inc(v_fst_897_);
lean_dec(v_a_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_fst_897_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_snd_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
v_a_842_ = v___x_903_;
goto v___jp_841_;
}
}
}
else
{
lean_dec(v_a_834_);
return v___x_895_;
}
}
}
else
{
lean_object* v___x_908_; 
lean_dec(v_val_882_);
lean_dec_ref(v___x_858_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_874_);
v___x_908_ = v___x_851_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_snd_849_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
v_a_842_ = v___x_908_;
goto v___jp_841_;
}
}
}
else
{
lean_object* v___x_911_; 
lean_dec(v___x_881_);
lean_dec_ref(v___x_858_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_874_);
v___x_911_ = v___x_851_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v_snd_849_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
v_a_842_ = v___x_911_;
goto v___jp_841_;
}
}
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec(v___y_861_);
lean_dec_ref(v___x_858_);
v___x_913_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__5);
v___x_914_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(v___x_913_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v___x_916_; 
lean_dec_ref_known(v___x_914_, 1);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_874_);
v___x_916_ = v___x_851_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v_snd_849_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
v_a_842_ = v___x_916_;
goto v___jp_841_;
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v___x_874_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_dec(v_a_834_);
v_a_918_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_914_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_914_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
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
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec(v_a_866_);
lean_dec_ref(v___x_864_);
lean_dec(v___y_861_);
lean_dec_ref(v___x_859_);
lean_dec_ref(v___x_858_);
lean_dec(v_a_857_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_dec(v_a_834_);
v_a_926_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_868_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_868_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec_ref(v___x_864_);
lean_dec(v___y_861_);
lean_dec_ref(v___x_859_);
lean_dec_ref(v___x_858_);
lean_dec(v_a_857_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_dec(v_a_834_);
v_a_934_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_865_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_865_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
v___jp_942_:
{
lean_object* v___x_944_; 
lean_inc_ref(v___x_858_);
v___x_944_ = l_Lean_Meta_isClass_x3f(v___x_858_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
if (lean_obj_tag(v_a_945_) == 0)
{
uint8_t v___x_946_; 
v___x_946_ = 0;
v___y_861_ = v_a_945_;
v___y_862_ = v___y_943_;
v___y_863_ = v___x_946_;
goto v___jp_860_;
}
else
{
uint8_t v___x_947_; uint8_t v___x_948_; 
v___x_947_ = l_Lean_LocalDecl_binderInfo(v_a_857_);
v___x_948_ = l_Lean_BinderInfo_isExplicit(v___x_947_);
if (v___x_948_ == 0)
{
v___y_861_ = v_a_945_;
v___y_862_ = v___y_943_;
v___y_863_ = v___x_846_;
goto v___jp_860_;
}
else
{
uint8_t v___x_949_; 
v___x_949_ = 0;
v___y_861_ = v_a_945_;
v___y_862_ = v___y_943_;
v___y_863_ = v___x_949_;
goto v___jp_860_;
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec_ref(v___x_859_);
lean_dec_ref(v___x_858_);
lean_dec(v_a_857_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_dec(v_fst_848_);
lean_dec(v_a_834_);
v_a_950_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_944_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_944_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v___f_854_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_dec(v_fst_848_);
lean_dec(v_a_834_);
v_a_961_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_856_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_856_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
v___jp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_unsigned_to_nat(1u);
v___x_844_ = lean_nat_add(v_a_834_, v___x_843_);
lean_dec(v_a_834_);
v_a_834_ = v___x_844_;
v_b_835_ = v_a_842_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___boxed(lean_object* v_upperBound_970_, lean_object* v_fvars_971_, lean_object* v_a_972_, lean_object* v_b_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg(v_upperBound_970_, v_fvars_971_, v_a_972_, v_b_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec_ref(v_fvars_971_);
lean_dec(v_upperBound_970_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object* v_fvars_985_, lean_object* v_type_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_992_ = lean_array_get_size(v_fvars_985_);
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__1));
v___x_995_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg(v___x_992_, v_fvars_985_, v___x_993_, v___x_994_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1014_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_998_ = v___x_995_;
v_isShared_999_ = v_isSharedCheck_1014_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_995_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1014_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v_fst_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1012_; 
v_fst_1000_ = lean_ctor_get(v_a_996_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v_a_996_);
if (v_isSharedCheck_1012_ == 0)
{
lean_object* v_unused_1013_; 
v_unused_1013_ = lean_ctor_get(v_a_996_, 1);
lean_dec(v_unused_1013_);
v___x_1002_ = v_a_996_;
v_isShared_1003_ = v_isSharedCheck_1012_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_fst_1000_);
lean_dec(v_a_996_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1012_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_1004_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_985_, v_type_986_);
v___x_1005_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_1000_, v___x_1004_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v___x_1004_);
lean_ctor_set(v___x_1002_, 0, v___x_1005_);
v___x_1007_ = v___x_1002_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v___x_1004_);
v___x_1007_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
lean_object* v___x_1009_; 
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v___x_1007_);
v___x_1009_ = v___x_998_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_a_1015_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_995_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_995_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object* v_fvars_1023_, lean_object* v_type_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(v_fvars_1023_, v_type_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_type_1024_);
lean_dec_ref(v_fvars_1023_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object* v_fn_1031_, lean_object* v_maxArgs_x3f_1032_, lean_object* v___f_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
lean_object* v___y_1040_; lean_object* v___x_1057_; 
lean_inc(v___y_1037_);
lean_inc_ref(v___y_1036_);
lean_inc(v___y_1035_);
lean_inc_ref(v___y_1034_);
v___x_1057_ = lean_infer_type(v_fn_1031_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v___x_1059_; uint8_t v_transparency_1060_; uint8_t v___x_1061_; uint8_t v___x_1062_; uint8_t v___x_1063_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v___x_1059_ = l_Lean_Meta_Context_config(v___y_1034_);
v_transparency_1060_ = lean_ctor_get_uint8(v___x_1059_, 9);
lean_dec_ref(v___x_1059_);
v___x_1061_ = 1;
v___x_1062_ = 0;
v___x_1063_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1060_, v___x_1061_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_a_1058_, v_maxArgs_x3f_1032_, v___f_1033_, v___x_1062_, v___x_1062_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
v___y_1040_ = v___x_1064_;
goto v___jp_1039_;
}
else
{
lean_object* v_keyedConfig_1065_; uint8_t v_trackZetaDelta_1066_; lean_object* v_zetaDeltaSet_1067_; lean_object* v_lctx_1068_; lean_object* v_localInstances_1069_; lean_object* v_defEqCtx_x3f_1070_; lean_object* v_synthPendingDepth_1071_; lean_object* v_customCanUnfoldPredicate_x3f_1072_; uint8_t v_univApprox_1073_; uint8_t v_inTypeClassResolution_1074_; uint8_t v_cacheInferType_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1084_; 
v_keyedConfig_1065_ = lean_ctor_get(v___y_1034_, 0);
v_trackZetaDelta_1066_ = lean_ctor_get_uint8(v___y_1034_, sizeof(void*)*7);
v_zetaDeltaSet_1067_ = lean_ctor_get(v___y_1034_, 1);
v_lctx_1068_ = lean_ctor_get(v___y_1034_, 2);
v_localInstances_1069_ = lean_ctor_get(v___y_1034_, 3);
v_defEqCtx_x3f_1070_ = lean_ctor_get(v___y_1034_, 4);
v_synthPendingDepth_1071_ = lean_ctor_get(v___y_1034_, 5);
v_customCanUnfoldPredicate_x3f_1072_ = lean_ctor_get(v___y_1034_, 6);
v_univApprox_1073_ = lean_ctor_get_uint8(v___y_1034_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1074_ = lean_ctor_get_uint8(v___y_1034_, sizeof(void*)*7 + 2);
v_cacheInferType_1075_ = lean_ctor_get_uint8(v___y_1034_, sizeof(void*)*7 + 3);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___y_1034_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1077_ = v___y_1034_;
v_isShared_1078_ = v_isSharedCheck_1084_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1072_);
lean_inc(v_synthPendingDepth_1071_);
lean_inc(v_defEqCtx_x3f_1070_);
lean_inc(v_localInstances_1069_);
lean_inc(v_lctx_1068_);
lean_inc(v_zetaDeltaSet_1067_);
lean_inc(v_keyedConfig_1065_);
lean_dec(v___y_1034_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1084_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1079_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1061_, v_keyedConfig_1065_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1079_);
v___x_1081_ = v___x_1077_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1079_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_zetaDeltaSet_1067_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v_lctx_1068_);
lean_ctor_set(v_reuseFailAlloc_1083_, 3, v_localInstances_1069_);
lean_ctor_set(v_reuseFailAlloc_1083_, 4, v_defEqCtx_x3f_1070_);
lean_ctor_set(v_reuseFailAlloc_1083_, 5, v_synthPendingDepth_1071_);
lean_ctor_set(v_reuseFailAlloc_1083_, 6, v_customCanUnfoldPredicate_x3f_1072_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*7, v_trackZetaDelta_1066_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*7 + 1, v_univApprox_1073_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1074_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*7 + 3, v_cacheInferType_1075_);
v___x_1081_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_a_1058_, v_maxArgs_x3f_1032_, v___f_1033_, v___x_1062_, v___x_1062_, v___x_1081_, v___y_1035_, v___y_1036_, v___y_1037_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___x_1081_);
v___y_1040_ = v___x_1082_;
goto v___jp_1039_;
}
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec_ref(v___f_1033_);
lean_dec(v_maxArgs_x3f_1032_);
v_a_1085_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1057_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1057_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
v___jp_1039_:
{
if (lean_obj_tag(v___y_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
v_a_1041_ = lean_ctor_get(v___y_1040_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___y_1040_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___y_1040_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___y_1040_);
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
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
v_a_1049_ = lean_ctor_get(v___y_1040_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___y_1040_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___y_1040_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___y_1040_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object* v_fn_1093_, lean_object* v_maxArgs_x3f_1094_, lean_object* v___f_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1093_, v_maxArgs_x3f_1094_, v___f_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object* v_x_1102_){
_start:
{
if (lean_obj_tag(v_x_1102_) == 0)
{
uint8_t v___x_1103_; 
v___x_1103_ = 0;
return v___x_1103_;
}
else
{
lean_object* v_head_1104_; lean_object* v_tail_1105_; uint8_t v___x_1106_; 
v_head_1104_ = lean_ctor_get(v_x_1102_, 0);
v_tail_1105_ = lean_ctor_get(v_x_1102_, 1);
v___x_1106_ = l_Lean_Level_hasMVar(v_head_1104_);
if (v___x_1106_ == 0)
{
v_x_1102_ = v_tail_1105_;
goto _start;
}
else
{
return v___x_1106_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object* v_x_1108_){
_start:
{
uint8_t v_res_1109_; lean_object* v_r_1110_; 
v_res_1109_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(v_x_1108_);
lean_dec(v_x_1108_);
v_r_1110_ = lean_box(v_res_1109_);
return v_r_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg(lean_object* v_keys_1111_, lean_object* v_vals_1112_, lean_object* v_i_1113_, lean_object* v_k_1114_){
_start:
{
lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1115_ = lean_array_get_size(v_keys_1111_);
v___x_1116_ = lean_nat_dec_lt(v_i_1113_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
lean_dec(v_i_1113_);
v___x_1117_ = lean_box(0);
return v___x_1117_;
}
else
{
lean_object* v_k_x27_1118_; uint8_t v___x_1119_; 
v_k_x27_1118_ = lean_array_fget_borrowed(v_keys_1111_, v_i_1113_);
v___x_1119_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_k_1114_, v_k_x27_1118_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = lean_unsigned_to_nat(1u);
v___x_1121_ = lean_nat_add(v_i_1113_, v___x_1120_);
lean_dec(v_i_1113_);
v_i_1113_ = v___x_1121_;
goto _start;
}
else
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = lean_array_fget_borrowed(v_vals_1112_, v_i_1113_);
lean_dec(v_i_1113_);
lean_inc(v___x_1123_);
v___x_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg___boxed(lean_object* v_keys_1125_, lean_object* v_vals_1126_, lean_object* v_i_1127_, lean_object* v_k_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg(v_keys_1125_, v_vals_1126_, v_i_1127_, v_k_1128_);
lean_dec_ref(v_k_1128_);
lean_dec_ref(v_vals_1126_);
lean_dec_ref(v_keys_1125_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg(lean_object* v_x_1130_, size_t v_x_1131_, lean_object* v_x_1132_){
_start:
{
if (lean_obj_tag(v_x_1130_) == 0)
{
lean_object* v_es_1133_; lean_object* v___x_1134_; size_t v___x_1135_; size_t v___x_1136_; lean_object* v_j_1137_; lean_object* v___x_1138_; 
v_es_1133_ = lean_ctor_get(v_x_1130_, 0);
v___x_1134_ = lean_box(2);
v___x_1135_ = ((size_t)31ULL);
v___x_1136_ = lean_usize_land(v_x_1131_, v___x_1135_);
v_j_1137_ = lean_usize_to_nat(v___x_1136_);
v___x_1138_ = lean_array_get_borrowed(v___x_1134_, v_es_1133_, v_j_1137_);
lean_dec(v_j_1137_);
switch(lean_obj_tag(v___x_1138_))
{
case 0:
{
lean_object* v_key_1139_; lean_object* v_val_1140_; uint8_t v___x_1141_; 
v_key_1139_ = lean_ctor_get(v___x_1138_, 0);
v_val_1140_ = lean_ctor_get(v___x_1138_, 1);
v___x_1141_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1132_, v_key_1139_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_box(0);
return v___x_1142_;
}
else
{
lean_object* v___x_1143_; 
lean_inc(v_val_1140_);
v___x_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_val_1140_);
return v___x_1143_;
}
}
case 1:
{
lean_object* v_node_1144_; size_t v___x_1145_; size_t v___x_1146_; 
v_node_1144_ = lean_ctor_get(v___x_1138_, 0);
v___x_1145_ = ((size_t)5ULL);
v___x_1146_ = lean_usize_shift_right(v_x_1131_, v___x_1145_);
v_x_1130_ = v_node_1144_;
v_x_1131_ = v___x_1146_;
goto _start;
}
default: 
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_box(0);
return v___x_1148_;
}
}
}
else
{
lean_object* v_ks_1149_; lean_object* v_vs_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v_ks_1149_ = lean_ctor_get(v_x_1130_, 0);
v_vs_1150_ = lean_ctor_get(v_x_1130_, 1);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg(v_ks_1149_, v_vs_1150_, v___x_1151_, v_x_1132_);
return v___x_1152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg___boxed(lean_object* v_x_1153_, lean_object* v_x_1154_, lean_object* v_x_1155_){
_start:
{
size_t v_x_11418__boxed_1156_; lean_object* v_res_1157_; 
v_x_11418__boxed_1156_ = lean_unbox_usize(v_x_1154_);
lean_dec(v_x_1154_);
v_res_1157_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg(v_x_1153_, v_x_11418__boxed_1156_, v_x_1155_);
lean_dec_ref(v_x_1155_);
lean_dec_ref(v_x_1153_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object* v_x_1158_, lean_object* v_x_1159_){
_start:
{
uint64_t v_configKey_1160_; lean_object* v_expr_1161_; lean_object* v_nargs_x3f_1162_; uint64_t v___x_1163_; uint64_t v___y_1165_; 
v_configKey_1160_ = lean_ctor_get_uint64(v_x_1159_, sizeof(void*)*2);
v_expr_1161_ = lean_ctor_get(v_x_1159_, 0);
v_nargs_x3f_1162_ = lean_ctor_get(v_x_1159_, 1);
v___x_1163_ = l_Lean_Expr_hash(v_expr_1161_);
if (lean_obj_tag(v_nargs_x3f_1162_) == 0)
{
uint64_t v___x_1170_; 
v___x_1170_ = 11ULL;
v___y_1165_ = v___x_1170_;
goto v___jp_1164_;
}
else
{
lean_object* v_val_1171_; uint64_t v___x_1172_; uint64_t v___x_1173_; uint64_t v___x_1174_; 
v_val_1171_ = lean_ctor_get(v_nargs_x3f_1162_, 0);
v___x_1172_ = lean_uint64_of_nat(v_val_1171_);
v___x_1173_ = 13ULL;
v___x_1174_ = lean_uint64_mix_hash(v___x_1172_, v___x_1173_);
v___y_1165_ = v___x_1174_;
goto v___jp_1164_;
}
v___jp_1164_:
{
uint64_t v___x_1166_; uint64_t v___x_1167_; size_t v___x_1168_; lean_object* v___x_1169_; 
v___x_1166_ = lean_uint64_mix_hash(v___x_1163_, v___y_1165_);
v___x_1167_ = lean_uint64_mix_hash(v_configKey_1160_, v___x_1166_);
v___x_1168_ = lean_uint64_to_usize(v___x_1167_);
v___x_1169_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg(v_x_1158_, v___x_1168_, v_x_1159_);
return v___x_1169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg___boxed(lean_object* v_x_1175_, lean_object* v_x_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_x_1175_, v_x_1176_);
lean_dec_ref(v_x_1176_);
lean_dec_ref(v_x_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg(lean_object* v_msg_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v___f_1184_; lean_object* v___x_9680__overap_1185_; lean_object* v___x_1186_; 
v___f_1184_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___closed__0));
v___x_9680__overap_1185_ = lean_panic_fn_borrowed(v___f_1184_, v_msg_1178_);
lean_inc(v___y_1182_);
lean_inc_ref(v___y_1181_);
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v___x_1186_ = lean_apply_5(v___x_9680__overap_1185_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, lean_box(0));
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg___boxed(lean_object* v_msg_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg(v_msg_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg(lean_object* v_keys_1194_, lean_object* v_vals_1195_, lean_object* v_i_1196_, lean_object* v_k_1197_){
_start:
{
lean_object* v___x_1198_; uint8_t v___x_1199_; 
v___x_1198_ = lean_array_get_size(v_keys_1194_);
v___x_1199_ = lean_nat_dec_lt(v_i_1196_, v___x_1198_);
if (v___x_1199_ == 0)
{
lean_object* v___x_1200_; 
lean_dec(v_i_1196_);
v___x_1200_ = lean_box(0);
return v___x_1200_;
}
else
{
lean_object* v_k_x27_1201_; uint8_t v___x_1202_; 
v_k_x27_1201_ = lean_array_fget_borrowed(v_keys_1194_, v_i_1196_);
v___x_1202_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_k_1197_, v_k_x27_1201_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = lean_nat_add(v_i_1196_, v___x_1203_);
lean_dec(v_i_1196_);
v_i_1196_ = v___x_1204_;
goto _start;
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = lean_array_fget_borrowed(v_vals_1195_, v_i_1196_);
lean_dec(v_i_1196_);
lean_inc(v___x_1206_);
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg___boxed(lean_object* v_keys_1208_, lean_object* v_vals_1209_, lean_object* v_i_1210_, lean_object* v_k_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg(v_keys_1208_, v_vals_1209_, v_i_1210_, v_k_1211_);
lean_dec_ref(v_k_1211_);
lean_dec_ref(v_vals_1209_);
lean_dec_ref(v_keys_1208_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg(lean_object* v_x_1213_, size_t v_x_1214_, lean_object* v_x_1215_){
_start:
{
if (lean_obj_tag(v_x_1213_) == 0)
{
lean_object* v_es_1216_; lean_object* v___x_1217_; size_t v___x_1218_; size_t v___x_1219_; lean_object* v_j_1220_; lean_object* v___x_1221_; 
v_es_1216_ = lean_ctor_get(v_x_1213_, 0);
v___x_1217_ = lean_box(2);
v___x_1218_ = ((size_t)31ULL);
v___x_1219_ = lean_usize_land(v_x_1214_, v___x_1218_);
v_j_1220_ = lean_usize_to_nat(v___x_1219_);
v___x_1221_ = lean_array_get_borrowed(v___x_1217_, v_es_1216_, v_j_1220_);
lean_dec(v_j_1220_);
switch(lean_obj_tag(v___x_1221_))
{
case 0:
{
lean_object* v_key_1222_; lean_object* v_val_1223_; uint8_t v___x_1224_; 
v_key_1222_ = lean_ctor_get(v___x_1221_, 0);
v_val_1223_ = lean_ctor_get(v___x_1221_, 1);
v___x_1224_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1215_, v_key_1222_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_box(0);
return v___x_1225_;
}
else
{
lean_object* v___x_1226_; 
lean_inc(v_val_1223_);
v___x_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_val_1223_);
return v___x_1226_;
}
}
case 1:
{
lean_object* v_node_1227_; size_t v___x_1228_; size_t v___x_1229_; 
v_node_1227_ = lean_ctor_get(v___x_1221_, 0);
v___x_1228_ = ((size_t)5ULL);
v___x_1229_ = lean_usize_shift_right(v_x_1214_, v___x_1228_);
v_x_1213_ = v_node_1227_;
v_x_1214_ = v___x_1229_;
goto _start;
}
default: 
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_box(0);
return v___x_1231_;
}
}
}
else
{
lean_object* v_ks_1232_; lean_object* v_vs_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_ks_1232_ = lean_ctor_get(v_x_1213_, 0);
v_vs_1233_ = lean_ctor_get(v_x_1213_, 1);
v___x_1234_ = lean_unsigned_to_nat(0u);
v___x_1235_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg(v_ks_1232_, v_vs_1233_, v___x_1234_, v_x_1215_);
return v___x_1235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg___boxed(lean_object* v_x_1236_, lean_object* v_x_1237_, lean_object* v_x_1238_){
_start:
{
size_t v_x_11539__boxed_1239_; lean_object* v_res_1240_; 
v_x_11539__boxed_1239_ = lean_unbox_usize(v_x_1237_);
lean_dec(v_x_1237_);
v_res_1240_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg(v_x_1236_, v_x_11539__boxed_1239_, v_x_1238_);
lean_dec_ref(v_x_1238_);
lean_dec_ref(v_x_1236_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg(lean_object* v_x_1241_, lean_object* v_x_1242_){
_start:
{
uint64_t v___x_1243_; size_t v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1242_);
v___x_1244_ = lean_uint64_to_usize(v___x_1243_);
v___x_1245_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg(v_x_1241_, v___x_1244_, v_x_1242_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg___boxed(lean_object* v_x_1246_, lean_object* v_x_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg(v_x_1246_, v_x_1247_);
lean_dec_ref(v_x_1247_);
lean_dec_ref(v_x_1246_);
return v_res_1248_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg(lean_object* v_a_1249_, lean_object* v_x_1250_){
_start:
{
if (lean_obj_tag(v_x_1250_) == 0)
{
uint8_t v___x_1251_; 
v___x_1251_ = 0;
return v___x_1251_;
}
else
{
lean_object* v_key_1252_; lean_object* v_tail_1253_; uint8_t v___x_1254_; 
v_key_1252_ = lean_ctor_get(v_x_1250_, 0);
v_tail_1253_ = lean_ctor_get(v_x_1250_, 2);
v___x_1254_ = lean_name_eq(v_key_1252_, v_a_1249_);
if (v___x_1254_ == 0)
{
v_x_1250_ = v_tail_1253_;
goto _start;
}
else
{
return v___x_1254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg___boxed(lean_object* v_a_1256_, lean_object* v_x_1257_){
_start:
{
uint8_t v_res_1258_; lean_object* v_r_1259_; 
v_res_1258_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg(v_a_1256_, v_x_1257_);
lean_dec(v_x_1257_);
lean_dec(v_a_1256_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg(lean_object* v_m_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v_buckets_1262_; lean_object* v___x_1263_; uint64_t v___y_1265_; 
v_buckets_1262_ = lean_ctor_get(v_m_1260_, 1);
v___x_1263_ = lean_array_get_size(v_buckets_1262_);
if (lean_obj_tag(v_a_1261_) == 0)
{
uint64_t v___x_1279_; 
v___x_1279_ = 1723ULL;
v___y_1265_ = v___x_1279_;
goto v___jp_1264_;
}
else
{
uint64_t v_hash_1280_; 
v_hash_1280_ = lean_ctor_get_uint64(v_a_1261_, sizeof(void*)*2);
v___y_1265_ = v_hash_1280_;
goto v___jp_1264_;
}
v___jp_1264_:
{
uint64_t v___x_1266_; uint64_t v___x_1267_; uint64_t v_fold_1268_; uint64_t v___x_1269_; uint64_t v___x_1270_; uint64_t v___x_1271_; size_t v___x_1272_; size_t v___x_1273_; size_t v___x_1274_; size_t v___x_1275_; size_t v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; 
v___x_1266_ = 32ULL;
v___x_1267_ = lean_uint64_shift_right(v___y_1265_, v___x_1266_);
v_fold_1268_ = lean_uint64_xor(v___y_1265_, v___x_1267_);
v___x_1269_ = 16ULL;
v___x_1270_ = lean_uint64_shift_right(v_fold_1268_, v___x_1269_);
v___x_1271_ = lean_uint64_xor(v_fold_1268_, v___x_1270_);
v___x_1272_ = lean_uint64_to_usize(v___x_1271_);
v___x_1273_ = lean_usize_of_nat(v___x_1263_);
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_sub(v___x_1273_, v___x_1274_);
v___x_1276_ = lean_usize_land(v___x_1272_, v___x_1275_);
v___x_1277_ = lean_array_uget_borrowed(v_buckets_1262_, v___x_1276_);
v___x_1278_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg(v_a_1261_, v___x_1277_);
return v___x_1278_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg___boxed(lean_object* v_m_1281_, lean_object* v_a_1282_){
_start:
{
uint8_t v_res_1283_; lean_object* v_r_1284_; 
v_res_1283_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg(v_m_1281_, v_a_1282_);
lean_dec(v_a_1282_);
lean_dec_ref(v_m_1281_);
v_r_1284_ = lean_box(v_res_1283_);
return v_r_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21_spec__23___redArg(lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_, lean_object* v_x_1288_){
_start:
{
lean_object* v_ks_1289_; lean_object* v_vs_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1314_; 
v_ks_1289_ = lean_ctor_get(v_x_1285_, 0);
v_vs_1290_ = lean_ctor_get(v_x_1285_, 1);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1285_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1292_ = v_x_1285_;
v_isShared_1293_ = v_isSharedCheck_1314_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_vs_1290_);
lean_inc(v_ks_1289_);
lean_dec(v_x_1285_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1314_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1294_ = lean_array_get_size(v_ks_1289_);
v___x_1295_ = lean_nat_dec_lt(v_x_1286_, v___x_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1299_; 
lean_dec(v_x_1286_);
v___x_1296_ = lean_array_push(v_ks_1289_, v_x_1287_);
v___x_1297_ = lean_array_push(v_vs_1290_, v_x_1288_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 1, v___x_1297_);
lean_ctor_set(v___x_1292_, 0, v___x_1296_);
v___x_1299_ = v___x_1292_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v___x_1296_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v___x_1297_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
else
{
lean_object* v_k_x27_1301_; uint8_t v___x_1302_; 
v_k_x27_1301_ = lean_array_fget_borrowed(v_ks_1289_, v_x_1286_);
v___x_1302_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1287_, v_k_x27_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1304_; 
if (v_isShared_1293_ == 0)
{
v___x_1304_ = v___x_1292_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_ks_1289_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_vs_1290_);
v___x_1304_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = lean_unsigned_to_nat(1u);
v___x_1306_ = lean_nat_add(v_x_1286_, v___x_1305_);
lean_dec(v_x_1286_);
v_x_1285_ = v___x_1304_;
v_x_1286_ = v___x_1306_;
goto _start;
}
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1312_; 
v___x_1309_ = lean_array_fset(v_ks_1289_, v_x_1286_, v_x_1287_);
v___x_1310_ = lean_array_fset(v_vs_1290_, v_x_1286_, v_x_1288_);
lean_dec(v_x_1286_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 1, v___x_1310_);
lean_ctor_set(v___x_1292_, 0, v___x_1309_);
v___x_1312_ = v___x_1292_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1309_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v___x_1310_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21___redArg(lean_object* v_n_1315_, lean_object* v_k_1316_, lean_object* v_v_1317_){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_unsigned_to_nat(0u);
v___x_1319_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21_spec__23___redArg(v_n_1315_, v___x_1318_, v_k_1316_, v_v_1317_);
return v___x_1319_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(lean_object* v_x_1321_, size_t v_x_1322_, size_t v_x_1323_, lean_object* v_x_1324_, lean_object* v_x_1325_){
_start:
{
if (lean_obj_tag(v_x_1321_) == 0)
{
lean_object* v_es_1326_; size_t v___x_1327_; size_t v___x_1328_; lean_object* v_j_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
v_es_1326_ = lean_ctor_get(v_x_1321_, 0);
v___x_1327_ = ((size_t)31ULL);
v___x_1328_ = lean_usize_land(v_x_1322_, v___x_1327_);
v_j_1329_ = lean_usize_to_nat(v___x_1328_);
v___x_1330_ = lean_array_get_size(v_es_1326_);
v___x_1331_ = lean_nat_dec_lt(v_j_1329_, v___x_1330_);
if (v___x_1331_ == 0)
{
lean_dec(v_j_1329_);
lean_dec(v_x_1325_);
lean_dec_ref(v_x_1324_);
return v_x_1321_;
}
else
{
lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1370_; 
lean_inc_ref(v_es_1326_);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_x_1321_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v_x_1321_, 0);
lean_dec(v_unused_1371_);
v___x_1333_ = v_x_1321_;
v_isShared_1334_ = v_isSharedCheck_1370_;
goto v_resetjp_1332_;
}
else
{
lean_dec(v_x_1321_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1370_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v_v_1335_; lean_object* v___x_1336_; lean_object* v_xs_x27_1337_; lean_object* v___y_1339_; 
v_v_1335_ = lean_array_fget(v_es_1326_, v_j_1329_);
v___x_1336_ = lean_box(0);
v_xs_x27_1337_ = lean_array_fset(v_es_1326_, v_j_1329_, v___x_1336_);
switch(lean_obj_tag(v_v_1335_))
{
case 0:
{
lean_object* v_key_1344_; lean_object* v_val_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1355_; 
v_key_1344_ = lean_ctor_get(v_v_1335_, 0);
v_val_1345_ = lean_ctor_get(v_v_1335_, 1);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_v_1335_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1347_ = v_v_1335_;
v_isShared_1348_ = v_isSharedCheck_1355_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_val_1345_);
lean_inc(v_key_1344_);
lean_dec(v_v_1335_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1355_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
uint8_t v___x_1349_; 
v___x_1349_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1324_, v_key_1344_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_del_object(v___x_1347_);
v___x_1350_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1344_, v_val_1345_, v_x_1324_, v_x_1325_);
v___x_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1350_);
v___y_1339_ = v___x_1351_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1353_; 
lean_dec(v_val_1345_);
lean_dec(v_key_1344_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 1, v_x_1325_);
lean_ctor_set(v___x_1347_, 0, v_x_1324_);
v___x_1353_ = v___x_1347_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_x_1324_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v_x_1325_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
v___y_1339_ = v___x_1353_;
goto v___jp_1338_;
}
}
}
}
case 1:
{
lean_object* v_node_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1368_; 
v_node_1356_ = lean_ctor_get(v_v_1335_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_v_1335_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1358_ = v_v_1335_;
v_isShared_1359_ = v_isSharedCheck_1368_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_node_1356_);
lean_dec(v_v_1335_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1368_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
size_t v___x_1360_; size_t v___x_1361_; size_t v___x_1362_; size_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1366_; 
v___x_1360_ = ((size_t)5ULL);
v___x_1361_ = lean_usize_shift_right(v_x_1322_, v___x_1360_);
v___x_1362_ = ((size_t)1ULL);
v___x_1363_ = lean_usize_add(v_x_1323_, v___x_1362_);
v___x_1364_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(v_node_1356_, v___x_1361_, v___x_1363_, v_x_1324_, v_x_1325_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1364_);
v___x_1366_ = v___x_1358_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
v___y_1339_ = v___x_1366_;
goto v___jp_1338_;
}
}
}
default: 
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1369_, 0, v_x_1324_);
lean_ctor_set(v___x_1369_, 1, v_x_1325_);
v___y_1339_ = v___x_1369_;
goto v___jp_1338_;
}
}
v___jp_1338_:
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
v___x_1340_ = lean_array_fset(v_xs_x27_1337_, v_j_1329_, v___y_1339_);
lean_dec(v_j_1329_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1340_);
v___x_1342_ = v___x_1333_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
}
else
{
lean_object* v_ks_1372_; lean_object* v_vs_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1391_; 
v_ks_1372_ = lean_ctor_get(v_x_1321_, 0);
v_vs_1373_ = lean_ctor_get(v_x_1321_, 1);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_x_1321_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1375_ = v_x_1321_;
v_isShared_1376_ = v_isSharedCheck_1391_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_vs_1373_);
lean_inc(v_ks_1372_);
lean_dec(v_x_1321_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1391_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_ks_1372_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_vs_1373_);
v___x_1378_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v_newNode_1379_; size_t v___x_1380_; uint8_t v___x_1381_; 
v_newNode_1379_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21___redArg(v___x_1378_, v_x_1324_, v_x_1325_);
v___x_1380_ = ((size_t)7ULL);
v___x_1381_ = lean_usize_dec_le(v___x_1380_, v_x_1323_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1382_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1379_);
v___x_1383_ = lean_unsigned_to_nat(4u);
v___x_1384_ = lean_nat_dec_lt(v___x_1382_, v___x_1383_);
lean_dec(v___x_1382_);
if (v___x_1384_ == 0)
{
lean_object* v_ks_1385_; lean_object* v_vs_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v_ks_1385_ = lean_ctor_get(v_newNode_1379_, 0);
lean_inc_ref(v_ks_1385_);
v_vs_1386_ = lean_ctor_get(v_newNode_1379_, 1);
lean_inc_ref(v_vs_1386_);
lean_dec_ref(v_newNode_1379_);
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0);
v___x_1389_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg(v_x_1323_, v_ks_1385_, v_vs_1386_, v___x_1387_, v___x_1388_);
lean_dec_ref(v_vs_1386_);
lean_dec_ref(v_ks_1385_);
return v___x_1389_;
}
else
{
return v_newNode_1379_;
}
}
else
{
return v_newNode_1379_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg(size_t v_depth_1392_, lean_object* v_keys_1393_, lean_object* v_vals_1394_, lean_object* v_i_1395_, lean_object* v_entries_1396_){
_start:
{
lean_object* v___x_1397_; uint8_t v___x_1398_; 
v___x_1397_ = lean_array_get_size(v_keys_1393_);
v___x_1398_ = lean_nat_dec_lt(v_i_1395_, v___x_1397_);
if (v___x_1398_ == 0)
{
lean_dec(v_i_1395_);
return v_entries_1396_;
}
else
{
lean_object* v_k_1399_; lean_object* v_v_1400_; uint64_t v___x_1401_; size_t v_h_1402_; size_t v___x_1403_; lean_object* v___x_1404_; size_t v___x_1405_; size_t v___x_1406_; size_t v___x_1407_; size_t v_h_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v_k_1399_ = lean_array_fget_borrowed(v_keys_1393_, v_i_1395_);
v_v_1400_ = lean_array_fget_borrowed(v_vals_1394_, v_i_1395_);
v___x_1401_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_k_1399_);
v_h_1402_ = lean_uint64_to_usize(v___x_1401_);
v___x_1403_ = ((size_t)5ULL);
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = ((size_t)1ULL);
v___x_1406_ = lean_usize_sub(v_depth_1392_, v___x_1405_);
v___x_1407_ = lean_usize_mul(v___x_1403_, v___x_1406_);
v_h_1408_ = lean_usize_shift_right(v_h_1402_, v___x_1407_);
v___x_1409_ = lean_nat_add(v_i_1395_, v___x_1404_);
lean_dec(v_i_1395_);
lean_inc(v_v_1400_);
lean_inc(v_k_1399_);
v___x_1410_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(v_entries_1396_, v_h_1408_, v_depth_1392_, v_k_1399_, v_v_1400_);
v_i_1395_ = v___x_1409_;
v_entries_1396_ = v___x_1410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg___boxed(lean_object* v_depth_1412_, lean_object* v_keys_1413_, lean_object* v_vals_1414_, lean_object* v_i_1415_, lean_object* v_entries_1416_){
_start:
{
size_t v_depth_boxed_1417_; lean_object* v_res_1418_; 
v_depth_boxed_1417_ = lean_unbox_usize(v_depth_1412_);
lean_dec(v_depth_1412_);
v_res_1418_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg(v_depth_boxed_1417_, v_keys_1413_, v_vals_1414_, v_i_1415_, v_entries_1416_);
lean_dec_ref(v_vals_1414_);
lean_dec_ref(v_keys_1413_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___boxed(lean_object* v_x_1419_, lean_object* v_x_1420_, lean_object* v_x_1421_, lean_object* v_x_1422_, lean_object* v_x_1423_){
_start:
{
size_t v_x_11723__boxed_1424_; size_t v_x_11724__boxed_1425_; lean_object* v_res_1426_; 
v_x_11723__boxed_1424_ = lean_unbox_usize(v_x_1420_);
lean_dec(v_x_1420_);
v_x_11724__boxed_1425_ = lean_unbox_usize(v_x_1421_);
lean_dec(v_x_1421_);
v_res_1426_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(v_x_1419_, v_x_11723__boxed_1424_, v_x_11724__boxed_1425_, v_x_1422_, v_x_1423_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15___redArg(lean_object* v_x_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_){
_start:
{
uint64_t v___x_1430_; size_t v___x_1431_; size_t v___x_1432_; lean_object* v___x_1433_; 
v___x_1430_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1428_);
v___x_1431_ = lean_uint64_to_usize(v___x_1430_);
v___x_1432_ = ((size_t)1ULL);
v___x_1433_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(v_x_1427_, v___x_1431_, v___x_1432_, v_x_1428_, v_x_1429_);
return v___x_1433_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1434_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__0, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__0_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__0);
v___x_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0(lean_object* v_realizeMapRef_1437_, lean_object* v_env_1438_, lean_object* v_forConst_1439_, lean_object* v_ctx_1440_, lean_object* v_importRealizationCtx_x3f_1441_, lean_object* v_realize_1442_, lean_object* v_opts_1443_, lean_object* v_key_1444_, lean_object* v_inst_1445_, lean_object* v_____r_1446_){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v_fst_1451_; lean_object* v_snd_1452_; lean_object* v___y_1484_; lean_object* v___x_1489_; 
v___x_1448_ = lean_io_promise_new();
v___x_1449_ = lean_st_ref_take(v_realizeMapRef_1437_);
v___x_1489_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1449_, v_inst_1445_);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__1, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__1_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___closed__1);
v___y_1484_ = v___x_1490_;
goto v___jp_1483_;
}
else
{
lean_object* v_val_1491_; 
v_val_1491_ = lean_ctor_get(v___x_1489_, 0);
lean_inc(v_val_1491_);
lean_dec_ref_known(v___x_1489_, 1);
v___y_1484_ = v_val_1491_;
goto v___jp_1483_;
}
v___jp_1450_:
{
lean_object* v___x_1453_; 
v___x_1453_ = lean_st_ref_put(v_realizeMapRef_1437_, v_snd_1452_);
if (lean_obj_tag(v_fst_1451_) == 1)
{
lean_object* v_val_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1462_; 
lean_dec(v___x_1448_);
lean_dec_ref(v_opts_1443_);
lean_dec_ref(v_realize_1442_);
lean_dec(v_importRealizationCtx_x3f_1441_);
lean_dec_ref(v_ctx_1440_);
lean_dec(v_forConst_1439_);
lean_dec(v_env_1438_);
v_val_1454_ = lean_ctor_get(v_fst_1451_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v_fst_1451_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1456_ = v_fst_1451_;
v_isShared_1457_ = v_isSharedCheck_1462_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_val_1454_);
lean_dec(v_fst_1451_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1462_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = lean_task_get_own(v_val_1454_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set_tag(v___x_1456_, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1458_);
v___x_1460_ = v___x_1456_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v___x_1458_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
else
{
lean_object* v_base_1463_; lean_object* v_serverBaseExts_1464_; lean_object* v_checked_1465_; lean_object* v_asyncConstsMap_1466_; lean_object* v_asyncCtx_x3f_1467_; lean_object* v_localRealizationCtxMap_1468_; lean_object* v_allRealizations_1469_; uint8_t v_isExporting_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1481_; 
lean_dec(v_fst_1451_);
v_base_1463_ = lean_ctor_get(v_env_1438_, 0);
v_serverBaseExts_1464_ = lean_ctor_get(v_env_1438_, 1);
v_checked_1465_ = lean_ctor_get(v_env_1438_, 2);
v_asyncConstsMap_1466_ = lean_ctor_get(v_env_1438_, 3);
v_asyncCtx_x3f_1467_ = lean_ctor_get(v_env_1438_, 4);
v_localRealizationCtxMap_1468_ = lean_ctor_get(v_env_1438_, 6);
v_allRealizations_1469_ = lean_ctor_get(v_env_1438_, 7);
v_isExporting_1470_ = lean_ctor_get_uint8(v_env_1438_, sizeof(void*)*8);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_env_1438_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; 
v_unused_1482_ = lean_ctor_get(v_env_1438_, 5);
lean_dec(v_unused_1482_);
v___x_1472_ = v_env_1438_;
v_isShared_1473_ = v_isSharedCheck_1481_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_allRealizations_1469_);
lean_inc(v_localRealizationCtxMap_1468_);
lean_inc(v_asyncCtx_x3f_1467_);
lean_inc(v_asyncConstsMap_1466_);
lean_inc(v_checked_1465_);
lean_inc(v_serverBaseExts_1464_);
lean_inc(v_base_1463_);
lean_dec(v_env_1438_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1481_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
v___x_1474_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_forConst_1439_, v_ctx_1440_, v_localRealizationCtxMap_1468_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 6, v___x_1474_);
lean_ctor_set(v___x_1472_, 5, v_importRealizationCtx_x3f_1441_);
v___x_1476_ = v___x_1472_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_base_1463_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_serverBaseExts_1464_);
lean_ctor_set(v_reuseFailAlloc_1480_, 2, v_checked_1465_);
lean_ctor_set(v_reuseFailAlloc_1480_, 3, v_asyncConstsMap_1466_);
lean_ctor_set(v_reuseFailAlloc_1480_, 4, v_asyncCtx_x3f_1467_);
lean_ctor_set(v_reuseFailAlloc_1480_, 5, v_importRealizationCtx_x3f_1441_);
lean_ctor_set(v_reuseFailAlloc_1480_, 6, v___x_1474_);
lean_ctor_set(v_reuseFailAlloc_1480_, 7, v_allRealizations_1469_);
lean_ctor_set_uint8(v_reuseFailAlloc_1480_, sizeof(void*)*8, v_isExporting_1470_);
v___x_1476_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = lean_apply_3(v_realize_1442_, v___x_1476_, v_opts_1443_, lean_box(0));
lean_inc(v___x_1477_);
v___x_1478_ = lean_io_promise_resolve(v___x_1477_, v___x_1448_);
lean_dec(v___x_1448_);
v___x_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1477_);
return v___x_1479_;
}
}
}
}
v___jp_1483_:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg(v___y_1484_, v_key_1444_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1486_ = l_IO_Promise_result_x21___redArg(v___x_1448_);
v___x_1487_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15___redArg(v___y_1484_, v_key_1444_, v___x_1486_);
v___x_1488_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_inst_1445_, v___x_1487_, v___x_1449_);
v_fst_1451_ = v___x_1485_;
v_snd_1452_ = v___x_1488_;
goto v___jp_1450_;
}
else
{
lean_dec_ref(v___y_1484_);
lean_dec(v_inst_1445_);
lean_dec_ref(v_key_1444_);
v_fst_1451_ = v___x_1485_;
v_snd_1452_ = v___x_1449_;
goto v___jp_1450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0___boxed(lean_object* v_realizeMapRef_1492_, lean_object* v_env_1493_, lean_object* v_forConst_1494_, lean_object* v_ctx_1495_, lean_object* v_importRealizationCtx_x3f_1496_, lean_object* v_realize_1497_, lean_object* v_opts_1498_, lean_object* v_key_1499_, lean_object* v_inst_1500_, lean_object* v_____r_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0(v_realizeMapRef_1492_, v_env_1493_, v_forConst_1494_, v_ctx_1495_, v_importRealizationCtx_x3f_1496_, v_realize_1497_, v_opts_1498_, v_key_1499_, v_inst_1500_, v_____r_1501_);
lean_dec(v_realizeMapRef_1492_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10(lean_object* v_inst_1510_, lean_object* v_env_1511_, lean_object* v_forConst_1512_, lean_object* v_key_1513_, lean_object* v_realize_1514_){
_start:
{
lean_object* v___x_1516_; lean_object* v_a_1518_; lean_object* v___y_1522_; lean_object* v_base_1524_; lean_object* v_importRealizationCtx_x3f_1525_; lean_object* v_localRealizationCtxMap_1526_; uint8_t v_isExporting_1527_; lean_object* v_ctx_1529_; lean_object* v___y_1544_; 
v___x_1516_ = lean_io_get_num_heartbeats();
v_base_1524_ = lean_ctor_get(v_env_1511_, 0);
lean_inc_ref(v_base_1524_);
v_importRealizationCtx_x3f_1525_ = lean_ctor_get(v_env_1511_, 5);
lean_inc(v_importRealizationCtx_x3f_1525_);
v_localRealizationCtxMap_1526_ = lean_ctor_get(v_env_1511_, 6);
lean_inc(v_localRealizationCtxMap_1526_);
v_isExporting_1527_ = lean_ctor_get_uint8(v_env_1511_, sizeof(void*)*8);
lean_dec_ref(v_env_1511_);
if (v_isExporting_1527_ == 0)
{
lean_object* v_private_1564_; 
v_private_1564_ = lean_ctor_get(v_base_1524_, 0);
lean_inc(v_private_1564_);
lean_dec_ref(v_base_1524_);
v___y_1544_ = v_private_1564_;
goto v___jp_1543_;
}
else
{
lean_object* v_public_1565_; 
v_public_1565_ = lean_ctor_get(v_base_1524_, 1);
lean_inc(v_public_1565_);
lean_dec_ref(v_base_1524_);
v___y_1544_ = v_public_1565_;
goto v___jp_1543_;
}
v___jp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_io_set_heartbeats(v___x_1516_);
v___x_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1520_, 0, v_a_1518_);
return v___x_1520_;
}
v___jp_1521_:
{
lean_object* v_a_1523_; 
v_a_1523_ = lean_ctor_get(v___y_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref(v___y_1522_);
v_a_1518_ = v_a_1523_;
goto v___jp_1517_;
}
v___jp_1528_:
{
lean_object* v_env_1530_; lean_object* v_opts_1531_; lean_object* v_realizeMapRef_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v_env_1530_ = lean_ctor_get(v_ctx_1529_, 0);
lean_inc(v_env_1530_);
v_opts_1531_ = lean_ctor_get(v_ctx_1529_, 1);
lean_inc_ref(v_opts_1531_);
v_realizeMapRef_1532_ = lean_ctor_get(v_ctx_1529_, 2);
lean_inc(v_realizeMapRef_1532_);
v___x_1533_ = lean_st_ref_get(v_realizeMapRef_1532_);
v___x_1534_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1533_, v_inst_1510_);
lean_dec(v___x_1533_);
if (lean_obj_tag(v___x_1534_) == 1)
{
lean_object* v_val_1535_; lean_object* v___x_1536_; 
v_val_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_val_1535_);
lean_dec_ref_known(v___x_1534_, 1);
v___x_1536_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg(v_val_1535_, v_key_1513_);
lean_dec(v_val_1535_);
if (lean_obj_tag(v___x_1536_) == 1)
{
lean_object* v_val_1537_; lean_object* v___x_1538_; 
lean_dec(v_realizeMapRef_1532_);
lean_dec_ref(v_opts_1531_);
lean_dec(v_env_1530_);
lean_dec_ref(v_ctx_1529_);
lean_dec(v_importRealizationCtx_x3f_1525_);
lean_dec_ref(v_realize_1514_);
lean_dec_ref(v_key_1513_);
lean_dec(v_forConst_1512_);
lean_dec(v_inst_1510_);
v_val_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1538_ = lean_task_get_own(v_val_1537_);
v_a_1518_ = v___x_1538_;
goto v___jp_1517_;
}
else
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_dec(v___x_1536_);
v___x_1539_ = lean_box(0);
v___x_1540_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0(v_realizeMapRef_1532_, v_env_1530_, v_forConst_1512_, v_ctx_1529_, v_importRealizationCtx_x3f_1525_, v_realize_1514_, v_opts_1531_, v_key_1513_, v_inst_1510_, v___x_1539_);
lean_dec(v_realizeMapRef_1532_);
v___y_1522_ = v___x_1540_;
goto v___jp_1521_;
}
}
else
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_dec(v___x_1534_);
v___x_1541_ = lean_box(0);
v___x_1542_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___lam__0(v_realizeMapRef_1532_, v_env_1530_, v_forConst_1512_, v_ctx_1529_, v_importRealizationCtx_x3f_1525_, v_realize_1514_, v_opts_1531_, v_key_1513_, v_inst_1510_, v___x_1541_);
lean_dec(v_realizeMapRef_1532_);
v___y_1522_ = v___x_1542_;
goto v___jp_1521_;
}
}
v___jp_1543_:
{
lean_object* v_const2ModIdx_1545_; uint8_t v___x_1546_; 
v_const2ModIdx_1545_ = lean_ctor_get(v___y_1544_, 2);
lean_inc_ref(v_const2ModIdx_1545_);
lean_dec_ref(v___y_1544_);
v___x_1546_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg(v_const2ModIdx_1545_, v_forConst_1512_);
lean_dec_ref(v_const2ModIdx_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_localRealizationCtxMap_1526_, v_forConst_1512_);
lean_dec(v_localRealizationCtxMap_1526_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v___x_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
lean_dec(v_importRealizationCtx_x3f_1525_);
lean_dec(v___x_1516_);
lean_dec_ref(v_realize_1514_);
lean_dec_ref(v_key_1513_);
v___x_1548_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__0));
v___x_1549_ = 1;
v___x_1550_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_1510_, v___x_1549_);
v___x_1551_ = lean_string_append(v___x_1548_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v___x_1552_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__1));
v___x_1553_ = lean_string_append(v___x_1551_, v___x_1552_);
v___x_1554_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_forConst_1512_, v___x_1549_);
v___x_1555_ = lean_string_append(v___x_1553_, v___x_1554_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__2));
v___x_1557_ = lean_string_append(v___x_1555_, v___x_1556_);
v___x_1558_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
else
{
lean_object* v_val_1560_; 
v_val_1560_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_val_1560_);
lean_dec_ref_known(v___x_1547_, 1);
v_ctx_1529_ = v_val_1560_;
goto v___jp_1528_;
}
}
else
{
lean_dec(v_localRealizationCtxMap_1526_);
if (lean_obj_tag(v_importRealizationCtx_x3f_1525_) == 0)
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_dec(v___x_1516_);
lean_dec_ref(v_realize_1514_);
lean_dec_ref(v_key_1513_);
lean_dec(v_forConst_1512_);
lean_dec(v_inst_1510_);
v___x_1561_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___closed__4));
v___x_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
return v___x_1562_;
}
else
{
lean_object* v_val_1563_; 
v_val_1563_ = lean_ctor_get(v_importRealizationCtx_x3f_1525_, 0);
lean_inc(v_val_1563_);
v_ctx_1529_ = v_val_1563_;
goto v___jp_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10___boxed(lean_object* v_inst_1566_, lean_object* v_env_1567_, lean_object* v_forConst_1568_, lean_object* v_key_1569_, lean_object* v_realize_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10(v_inst_1566_, v_env_1567_, v_forConst_1568_, v_key_1569_, v_realize_1570_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___lam__0(lean_object* v_realize_1573_, lean_object* v_inst_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v___x_1580_; 
lean_inc(v___y_1578_);
lean_inc_ref(v___y_1577_);
lean_inc(v___y_1576_);
v___x_1580_ = lean_apply_5(v_realize_1573_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, lean_box(0));
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1589_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1589_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1589_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1585_, 0, v_inst_1574_);
lean_ctor_set(v___x_1585_, 1, v_a_1581_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1585_);
v___x_1587_ = v___x_1583_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec(v_inst_1574_);
v_a_1590_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1580_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1580_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___lam__0___boxed(lean_object* v_realize_1598_, lean_object* v_inst_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___lam__0(v_realize_1598_, v_inst_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
return v_res_1605_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = l_Lean_Options_empty;
v___x_1607_ = l_Lean_Core_getMaxHeartbeats(v___x_1606_);
return v___x_1607_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1608_ = lean_box(0);
v___x_1609_ = lean_unsigned_to_nat(16u);
v___x_1610_ = lean_mk_array(v___x_1609_, v___x_1608_);
return v___x_1610_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1611_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__1, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__1_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__1);
v___x_1612_ = lean_unsigned_to_nat(0u);
v___x_1613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
lean_ctor_set(v___x_1613_, 1, v___x_1611_);
return v___x_1613_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1616_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__4));
v___x_1617_ = lean_unsigned_to_nat(36u);
v___x_1618_ = lean_unsigned_to_nat(2665u);
v___x_1619_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__4));
v___x_1620_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__3));
v___x_1621_ = l_mkPanicMessageWithDecl(v___x_1620_, v___x_1619_, v___x_1618_, v___x_1617_, v___x_1616_);
return v___x_1621_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__6(void){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1622_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg___closed__4));
v___x_1623_ = lean_unsigned_to_nat(48u);
v___x_1624_ = lean_unsigned_to_nat(2656u);
v___x_1625_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__4));
v___x_1626_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__3));
v___x_1627_ = l_mkPanicMessageWithDecl(v___x_1626_, v___x_1625_, v___x_1624_, v___x_1623_, v___x_1622_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg(lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_forConst_1630_, lean_object* v_key_1631_, lean_object* v_realize_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v___f_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v_env_1641_; uint8_t v___x_1642_; 
lean_inc(v_inst_1629_);
lean_inc_ref(v_realize_1632_);
v___f_1638_ = lean_alloc_closure((void*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1638_, 0, v_realize_1632_);
lean_closure_set(v___f_1638_, 1, v_inst_1629_);
v___x_1639_ = l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
v___x_1640_ = lean_st_ref_get(v_a_1636_);
v_env_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc_ref(v_env_1641_);
lean_dec(v___x_1640_);
v___x_1642_ = l_Lean_Environment_areRealizationsEnabledForConst(v_env_1641_, v_forConst_1630_);
if (v___x_1642_ == 0)
{
lean_object* v___x_1643_; 
lean_dec_ref(v_env_1641_);
lean_dec_ref(v___f_1638_);
lean_dec_ref(v_key_1631_);
lean_dec(v_forConst_1630_);
lean_dec(v_inst_1629_);
lean_dec(v_inst_1628_);
lean_inc(v_a_1636_);
lean_inc_ref(v_a_1635_);
lean_inc(v_a_1634_);
lean_inc_ref(v_a_1633_);
v___x_1643_ = lean_apply_5(v_realize_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, lean_box(0));
return v___x_1643_;
}
else
{
uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v_toCold_1646_; lean_object* v_ref_1647_; lean_object* v_fileName_1648_; lean_object* v_fileMap_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
lean_dec_ref(v_realize_1632_);
v___x_1644_ = 0;
v___x_1645_ = lean_io_get_num_heartbeats();
v_toCold_1646_ = lean_ctor_get(v_a_1635_, 0);
v_ref_1647_ = lean_ctor_get(v_a_1635_, 2);
v_fileName_1648_ = lean_ctor_get(v_toCold_1646_, 0);
v_fileMap_1649_ = lean_ctor_get(v_toCold_1646_, 1);
v___x_1650_ = l_Lean_Options_empty;
v___x_1651_ = lean_unsigned_to_nat(1000u);
v___x_1652_ = lean_box(0);
v___x_1653_ = lean_box(0);
v___x_1654_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__0, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__0_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__0);
v___x_1655_ = l_Lean_firstFrontendMacroScope;
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_unsigned_to_nat(0u);
v___x_1658_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__2, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__2_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__2);
lean_inc_ref(v_fileMap_1649_);
lean_inc_ref(v_fileName_1648_);
v___x_1659_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1659_, 0, v_fileName_1648_);
lean_ctor_set(v___x_1659_, 1, v_fileMap_1649_);
lean_ctor_set(v___x_1659_, 2, v___x_1650_);
lean_ctor_set(v___x_1659_, 3, v___x_1651_);
lean_ctor_set(v___x_1659_, 4, v___x_1652_);
lean_ctor_set(v___x_1659_, 5, v___x_1653_);
lean_ctor_set(v___x_1659_, 6, v___x_1645_);
lean_ctor_set(v___x_1659_, 7, v___x_1654_);
lean_ctor_set(v___x_1659_, 8, v___x_1652_);
lean_ctor_set(v___x_1659_, 9, v___x_1655_);
lean_ctor_set(v___x_1659_, 10, v___x_1656_);
lean_ctor_set(v___x_1659_, 11, v___x_1658_);
v___x_1660_ = lean_box(0);
v___x_1661_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1657_);
lean_ctor_set(v___x_1661_, 2, v___x_1660_);
lean_ctor_set_uint8(v___x_1661_, sizeof(void*)*3, v___x_1644_);
lean_ctor_set_uint8(v___x_1661_, sizeof(void*)*3 + 1, v___x_1644_);
v___x_1662_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed), 5, 2);
lean_closure_set(v___x_1662_, 0, v___f_1638_);
lean_closure_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10(v_inst_1628_, v_env_1641_, v_forConst_1630_, v_key_1631_, v___x_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1715_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1666_ = v___x_1663_;
v_isShared_1667_ = v_isSharedCheck_1715_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1663_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1715_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; 
v___x_1668_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1664_, v___x_1639_);
lean_dec(v_a_1664_);
if (lean_obj_tag(v___x_1668_) == 1)
{
lean_object* v_val_1669_; lean_object* v_res_x3f_1670_; lean_object* v_snap_x3f_1671_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v_snap_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; 
v_val_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_val_1669_);
lean_dec_ref_known(v___x_1668_, 1);
v_res_x3f_1670_ = lean_ctor_get(v_val_1669_, 0);
lean_inc_ref(v_res_x3f_1670_);
v_snap_x3f_1671_ = lean_ctor_get(v_val_1669_, 1);
lean_inc(v_snap_x3f_1671_);
lean_dec(v_val_1669_);
if (lean_obj_tag(v_snap_x3f_1671_) == 1)
{
lean_object* v_val_1705_; lean_object* v___x_1706_; 
v_val_1705_ = lean_ctor_get(v_snap_x3f_1671_, 0);
lean_inc(v_val_1705_);
lean_dec_ref_known(v_snap_x3f_1671_, 1);
v___x_1706_ = l_Lean_Syntax_getRange_x3f(v_ref_1647_, v___x_1644_);
if (lean_obj_tag(v___x_1706_) == 1)
{
lean_object* v_val_1707_; lean_object* v_start_1708_; lean_object* v_stop_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v_val_1707_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_val_1707_);
lean_dec_ref_known(v___x_1706_, 1);
v_start_1708_ = lean_ctor_get(v_val_1707_, 0);
lean_inc(v_start_1708_);
v_stop_1709_ = lean_ctor_get(v_val_1707_, 1);
lean_inc(v_stop_1709_);
lean_dec(v_val_1707_);
lean_inc_ref_n(v_fileMap_1649_, 2);
v___x_1710_ = l_Lean_FileMap_toPosition(v_fileMap_1649_, v_start_1708_);
lean_dec(v_start_1708_);
v___x_1711_ = l_Lean_FileMap_toPosition(v_fileMap_1649_, v_stop_1709_);
lean_dec(v_stop_1709_);
v___x_1712_ = l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(v_val_1705_, v___x_1710_, v___x_1711_);
v_snap_1690_ = v___x_1712_;
v___y_1691_ = v_a_1633_;
v___y_1692_ = v_a_1634_;
v___y_1693_ = v_a_1635_;
v___y_1694_ = v_a_1636_;
goto v___jp_1689_;
}
else
{
lean_dec(v___x_1706_);
v_snap_1690_ = v_val_1705_;
v___y_1691_ = v_a_1633_;
v___y_1692_ = v_a_1634_;
v___y_1693_ = v_a_1635_;
v___y_1694_ = v_a_1636_;
goto v___jp_1689_;
}
}
else
{
lean_dec(v_snap_x3f_1671_);
v___y_1673_ = v_a_1633_;
v___y_1674_ = v_a_1634_;
v___y_1675_ = v_a_1635_;
v___y_1676_ = v_a_1636_;
goto v___jp_1672_;
}
v___jp_1672_:
{
if (lean_obj_tag(v_res_x3f_1670_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1679_; 
lean_dec(v_inst_1629_);
v_a_1677_ = lean_ctor_get(v_res_x3f_1670_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v_res_x3f_1670_, 1);
if (v_isShared_1667_ == 0)
{
lean_ctor_set_tag(v___x_1666_, 1);
lean_ctor_set(v___x_1666_, 0, v_a_1677_);
v___x_1679_ = v___x_1666_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1682_; 
v_a_1681_ = lean_ctor_get(v_res_x3f_1670_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v_res_x3f_1670_, 1);
v___x_1682_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1681_, v_inst_1629_);
lean_dec(v_inst_1629_);
lean_dec(v_a_1681_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_del_object(v___x_1666_);
v___x_1683_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__5, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__5_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__5);
v___x_1684_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg(v___x_1683_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_);
return v___x_1684_;
}
else
{
lean_object* v_val_1685_; lean_object* v___x_1687_; 
v_val_1685_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_val_1685_);
lean_dec_ref_known(v___x_1682_, 1);
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 0, v_val_1685_);
v___x_1687_ = v___x_1666_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_val_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
v___jp_1689_:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1695_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1656_, v_snap_1690_);
v___x_1696_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1695_, v___y_1694_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_dec_ref_known(v___x_1696_, 1);
v___y_1673_ = v___y_1691_;
v___y_1674_ = v___y_1692_;
v___y_1675_ = v___y_1693_;
v___y_1676_ = v___y_1694_;
goto v___jp_1672_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec_ref(v_res_x3f_1670_);
lean_del_object(v___x_1666_);
lean_dec(v_inst_1629_);
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
else
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
lean_dec(v___x_1668_);
lean_del_object(v___x_1666_);
lean_dec(v_inst_1629_);
v___x_1713_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__6, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__6_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___closed__6);
v___x_1714_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg(v___x_1713_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
return v___x_1714_;
}
}
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1727_; 
lean_dec(v_inst_1629_);
v_a_1716_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1718_ = v___x_1663_;
v_isShared_1719_ = v_isSharedCheck_1727_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1663_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1727_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1720_ = lean_io_error_to_string(v_a_1716_);
v___x_1721_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
v___x_1722_ = l_Lean_MessageData_ofFormat(v___x_1721_);
lean_inc(v_ref_1647_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v_ref_1647_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1723_);
v___x_1725_ = v___x_1718_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg___boxed(lean_object* v_inst_1728_, lean_object* v_inst_1729_, lean_object* v_forConst_1730_, lean_object* v_key_1731_, lean_object* v_realize_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg(v_inst_1728_, v_inst_1729_, v_forConst_1730_, v_key_1731_, v_realize_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6_spec__11___redArg(lean_object* v_x_1739_, lean_object* v_x_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_){
_start:
{
lean_object* v_ks_1743_; lean_object* v_vs_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1768_; 
v_ks_1743_ = lean_ctor_get(v_x_1739_, 0);
v_vs_1744_ = lean_ctor_get(v_x_1739_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_x_1739_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1746_ = v_x_1739_;
v_isShared_1747_ = v_isSharedCheck_1768_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_vs_1744_);
lean_inc(v_ks_1743_);
lean_dec(v_x_1739_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1768_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = lean_array_get_size(v_ks_1743_);
v___x_1749_ = lean_nat_dec_lt(v_x_1740_, v___x_1748_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1753_; 
lean_dec(v_x_1740_);
v___x_1750_ = lean_array_push(v_ks_1743_, v_x_1741_);
v___x_1751_ = lean_array_push(v_vs_1744_, v_x_1742_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 1, v___x_1751_);
lean_ctor_set(v___x_1746_, 0, v___x_1750_);
v___x_1753_ = v___x_1746_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v___x_1751_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
else
{
lean_object* v_k_x27_1755_; uint8_t v___x_1756_; 
v_k_x27_1755_ = lean_array_fget_borrowed(v_ks_1743_, v_x_1740_);
v___x_1756_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1741_, v_k_x27_1755_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1758_; 
if (v_isShared_1747_ == 0)
{
v___x_1758_ = v___x_1746_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_ks_1743_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_vs_1744_);
v___x_1758_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1759_ = lean_unsigned_to_nat(1u);
v___x_1760_ = lean_nat_add(v_x_1740_, v___x_1759_);
lean_dec(v_x_1740_);
v_x_1739_ = v___x_1758_;
v_x_1740_ = v___x_1760_;
goto _start;
}
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1763_ = lean_array_fset(v_ks_1743_, v_x_1740_, v_x_1741_);
v___x_1764_ = lean_array_fset(v_vs_1744_, v_x_1740_, v_x_1742_);
lean_dec(v_x_1740_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 1, v___x_1764_);
lean_ctor_set(v___x_1746_, 0, v___x_1763_);
v___x_1766_ = v___x_1746_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6___redArg(lean_object* v_n_1769_, lean_object* v_k_1770_, lean_object* v_v_1771_){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_unsigned_to_nat(0u);
v___x_1773_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6_spec__11___redArg(v_n_1769_, v___x_1772_, v_k_1770_, v_v_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(lean_object* v_x_1774_, size_t v_x_1775_, size_t v_x_1776_, lean_object* v_x_1777_, lean_object* v_x_1778_){
_start:
{
if (lean_obj_tag(v_x_1774_) == 0)
{
lean_object* v_es_1779_; size_t v___x_1780_; size_t v___x_1781_; lean_object* v_j_1782_; lean_object* v___x_1783_; uint8_t v___x_1784_; 
v_es_1779_ = lean_ctor_get(v_x_1774_, 0);
v___x_1780_ = ((size_t)31ULL);
v___x_1781_ = lean_usize_land(v_x_1775_, v___x_1780_);
v_j_1782_ = lean_usize_to_nat(v___x_1781_);
v___x_1783_ = lean_array_get_size(v_es_1779_);
v___x_1784_ = lean_nat_dec_lt(v_j_1782_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_dec(v_j_1782_);
lean_dec(v_x_1778_);
lean_dec_ref(v_x_1777_);
return v_x_1774_;
}
else
{
lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1823_; 
lean_inc_ref(v_es_1779_);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_x_1774_);
if (v_isSharedCheck_1823_ == 0)
{
lean_object* v_unused_1824_; 
v_unused_1824_ = lean_ctor_get(v_x_1774_, 0);
lean_dec(v_unused_1824_);
v___x_1786_ = v_x_1774_;
v_isShared_1787_ = v_isSharedCheck_1823_;
goto v_resetjp_1785_;
}
else
{
lean_dec(v_x_1774_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1823_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_v_1788_; lean_object* v___x_1789_; lean_object* v_xs_x27_1790_; lean_object* v___y_1792_; 
v_v_1788_ = lean_array_fget(v_es_1779_, v_j_1782_);
v___x_1789_ = lean_box(0);
v_xs_x27_1790_ = lean_array_fset(v_es_1779_, v_j_1782_, v___x_1789_);
switch(lean_obj_tag(v_v_1788_))
{
case 0:
{
lean_object* v_key_1797_; lean_object* v_val_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1808_; 
v_key_1797_ = lean_ctor_get(v_v_1788_, 0);
v_val_1798_ = lean_ctor_get(v_v_1788_, 1);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_v_1788_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1800_ = v_v_1788_;
v_isShared_1801_ = v_isSharedCheck_1808_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_val_1798_);
lean_inc(v_key_1797_);
lean_dec(v_v_1788_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1808_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
uint8_t v___x_1802_; 
v___x_1802_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1777_, v_key_1797_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_del_object(v___x_1800_);
v___x_1803_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1797_, v_val_1798_, v_x_1777_, v_x_1778_);
v___x_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
v___y_1792_ = v___x_1804_;
goto v___jp_1791_;
}
else
{
lean_object* v___x_1806_; 
lean_dec(v_val_1798_);
lean_dec(v_key_1797_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v_x_1778_);
lean_ctor_set(v___x_1800_, 0, v_x_1777_);
v___x_1806_ = v___x_1800_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_x_1777_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v_x_1778_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
v___y_1792_ = v___x_1806_;
goto v___jp_1791_;
}
}
}
}
case 1:
{
lean_object* v_node_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1821_; 
v_node_1809_ = lean_ctor_get(v_v_1788_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_v_1788_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1811_ = v_v_1788_;
v_isShared_1812_ = v_isSharedCheck_1821_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_node_1809_);
lean_dec(v_v_1788_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1821_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
size_t v___x_1813_; size_t v___x_1814_; size_t v___x_1815_; size_t v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1813_ = ((size_t)5ULL);
v___x_1814_ = lean_usize_shift_right(v_x_1775_, v___x_1813_);
v___x_1815_ = ((size_t)1ULL);
v___x_1816_ = lean_usize_add(v_x_1776_, v___x_1815_);
v___x_1817_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(v_node_1809_, v___x_1814_, v___x_1816_, v_x_1777_, v_x_1778_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 0, v___x_1817_);
v___x_1819_ = v___x_1811_;
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
v___y_1792_ = v___x_1819_;
goto v___jp_1791_;
}
}
}
default: 
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1822_, 0, v_x_1777_);
lean_ctor_set(v___x_1822_, 1, v_x_1778_);
v___y_1792_ = v___x_1822_;
goto v___jp_1791_;
}
}
v___jp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1793_ = lean_array_fset(v_xs_x27_1790_, v_j_1782_, v___y_1792_);
lean_dec(v_j_1782_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v___x_1793_);
v___x_1795_ = v___x_1786_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
}
else
{
lean_object* v_ks_1825_; lean_object* v_vs_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1844_; 
v_ks_1825_ = lean_ctor_get(v_x_1774_, 0);
v_vs_1826_ = lean_ctor_get(v_x_1774_, 1);
v_isSharedCheck_1844_ = !lean_is_exclusive(v_x_1774_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1828_ = v_x_1774_;
v_isShared_1829_ = v_isSharedCheck_1844_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_vs_1826_);
lean_inc(v_ks_1825_);
lean_dec(v_x_1774_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1844_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_ks_1825_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_vs_1826_);
v___x_1831_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
lean_object* v_newNode_1832_; size_t v___x_1833_; uint8_t v___x_1834_; 
v_newNode_1832_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6___redArg(v___x_1831_, v_x_1777_, v_x_1778_);
v___x_1833_ = ((size_t)7ULL);
v___x_1834_ = lean_usize_dec_le(v___x_1833_, v_x_1776_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1835_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1832_);
v___x_1836_ = lean_unsigned_to_nat(4u);
v___x_1837_ = lean_nat_dec_lt(v___x_1835_, v___x_1836_);
lean_dec(v___x_1835_);
if (v___x_1837_ == 0)
{
lean_object* v_ks_1838_; lean_object* v_vs_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v_ks_1838_ = lean_ctor_get(v_newNode_1832_, 0);
lean_inc_ref(v_ks_1838_);
v_vs_1839_ = lean_ctor_get(v_newNode_1832_, 1);
lean_inc_ref(v_vs_1839_);
lean_dec_ref(v_newNode_1832_);
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg___closed__0);
v___x_1842_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg(v_x_1776_, v_ks_1838_, v_vs_1839_, v___x_1840_, v___x_1841_);
lean_dec_ref(v_vs_1839_);
lean_dec_ref(v_ks_1838_);
return v___x_1842_;
}
else
{
return v_newNode_1832_;
}
}
else
{
return v_newNode_1832_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg(size_t v_depth_1845_, lean_object* v_keys_1846_, lean_object* v_vals_1847_, lean_object* v_i_1848_, lean_object* v_entries_1849_){
_start:
{
lean_object* v___x_1850_; uint8_t v___x_1851_; 
v___x_1850_ = lean_array_get_size(v_keys_1846_);
v___x_1851_ = lean_nat_dec_lt(v_i_1848_, v___x_1850_);
if (v___x_1851_ == 0)
{
lean_dec(v_i_1848_);
return v_entries_1849_;
}
else
{
lean_object* v_k_1852_; uint64_t v_configKey_1853_; lean_object* v_expr_1854_; lean_object* v_nargs_x3f_1855_; lean_object* v_v_1856_; uint64_t v___x_1857_; uint64_t v___y_1859_; 
v_k_1852_ = lean_array_fget_borrowed(v_keys_1846_, v_i_1848_);
v_configKey_1853_ = lean_ctor_get_uint64(v_k_1852_, sizeof(void*)*2);
v_expr_1854_ = lean_ctor_get(v_k_1852_, 0);
v_nargs_x3f_1855_ = lean_ctor_get(v_k_1852_, 1);
v_v_1856_ = lean_array_fget_borrowed(v_vals_1847_, v_i_1848_);
v___x_1857_ = l_Lean_Expr_hash(v_expr_1854_);
if (lean_obj_tag(v_nargs_x3f_1855_) == 0)
{
uint64_t v___x_1872_; 
v___x_1872_ = 11ULL;
v___y_1859_ = v___x_1872_;
goto v___jp_1858_;
}
else
{
lean_object* v_val_1873_; uint64_t v___x_1874_; uint64_t v___x_1875_; uint64_t v___x_1876_; 
v_val_1873_ = lean_ctor_get(v_nargs_x3f_1855_, 0);
v___x_1874_ = lean_uint64_of_nat(v_val_1873_);
v___x_1875_ = 13ULL;
v___x_1876_ = lean_uint64_mix_hash(v___x_1874_, v___x_1875_);
v___y_1859_ = v___x_1876_;
goto v___jp_1858_;
}
v___jp_1858_:
{
uint64_t v___x_1860_; uint64_t v___x_1861_; size_t v_h_1862_; size_t v___x_1863_; lean_object* v___x_1864_; size_t v___x_1865_; size_t v___x_1866_; size_t v___x_1867_; size_t v_h_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1860_ = lean_uint64_mix_hash(v___x_1857_, v___y_1859_);
v___x_1861_ = lean_uint64_mix_hash(v_configKey_1853_, v___x_1860_);
v_h_1862_ = lean_uint64_to_usize(v___x_1861_);
v___x_1863_ = ((size_t)5ULL);
v___x_1864_ = lean_unsigned_to_nat(1u);
v___x_1865_ = ((size_t)1ULL);
v___x_1866_ = lean_usize_sub(v_depth_1845_, v___x_1865_);
v___x_1867_ = lean_usize_mul(v___x_1863_, v___x_1866_);
v_h_1868_ = lean_usize_shift_right(v_h_1862_, v___x_1867_);
v___x_1869_ = lean_nat_add(v_i_1848_, v___x_1864_);
lean_dec(v_i_1848_);
lean_inc(v_v_1856_);
lean_inc(v_k_1852_);
v___x_1870_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(v_entries_1849_, v_h_1868_, v_depth_1845_, v_k_1852_, v_v_1856_);
v_i_1848_ = v___x_1869_;
v_entries_1849_ = v___x_1870_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg___boxed(lean_object* v_depth_1877_, lean_object* v_keys_1878_, lean_object* v_vals_1879_, lean_object* v_i_1880_, lean_object* v_entries_1881_){
_start:
{
size_t v_depth_boxed_1882_; lean_object* v_res_1883_; 
v_depth_boxed_1882_ = lean_unbox_usize(v_depth_1877_);
lean_dec(v_depth_1877_);
v_res_1883_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg(v_depth_boxed_1882_, v_keys_1878_, v_vals_1879_, v_i_1880_, v_entries_1881_);
lean_dec_ref(v_vals_1879_);
lean_dec_ref(v_keys_1878_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg___boxed(lean_object* v_x_1884_, lean_object* v_x_1885_, lean_object* v_x_1886_, lean_object* v_x_1887_, lean_object* v_x_1888_){
_start:
{
size_t v_x_12464__boxed_1889_; size_t v_x_12465__boxed_1890_; lean_object* v_res_1891_; 
v_x_12464__boxed_1889_ = lean_unbox_usize(v_x_1885_);
lean_dec(v_x_1885_);
v_x_12465__boxed_1890_ = lean_unbox_usize(v_x_1886_);
lean_dec(v_x_1886_);
v_res_1891_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(v_x_1884_, v_x_12464__boxed_1889_, v_x_12465__boxed_1890_, v_x_1887_, v_x_1888_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object* v_x_1892_, lean_object* v_x_1893_, lean_object* v_x_1894_){
_start:
{
uint64_t v_configKey_1895_; lean_object* v_expr_1896_; lean_object* v_nargs_x3f_1897_; uint64_t v___x_1898_; uint64_t v___y_1900_; 
v_configKey_1895_ = lean_ctor_get_uint64(v_x_1893_, sizeof(void*)*2);
v_expr_1896_ = lean_ctor_get(v_x_1893_, 0);
v_nargs_x3f_1897_ = lean_ctor_get(v_x_1893_, 1);
v___x_1898_ = l_Lean_Expr_hash(v_expr_1896_);
if (lean_obj_tag(v_nargs_x3f_1897_) == 0)
{
uint64_t v___x_1906_; 
v___x_1906_ = 11ULL;
v___y_1900_ = v___x_1906_;
goto v___jp_1899_;
}
else
{
lean_object* v_val_1907_; uint64_t v___x_1908_; uint64_t v___x_1909_; uint64_t v___x_1910_; 
v_val_1907_ = lean_ctor_get(v_nargs_x3f_1897_, 0);
v___x_1908_ = lean_uint64_of_nat(v_val_1907_);
v___x_1909_ = 13ULL;
v___x_1910_ = lean_uint64_mix_hash(v___x_1908_, v___x_1909_);
v___y_1900_ = v___x_1910_;
goto v___jp_1899_;
}
v___jp_1899_:
{
uint64_t v___x_1901_; uint64_t v___x_1902_; size_t v___x_1903_; size_t v___x_1904_; lean_object* v___x_1905_; 
v___x_1901_ = lean_uint64_mix_hash(v___x_1898_, v___y_1900_);
v___x_1902_ = lean_uint64_mix_hash(v_configKey_1895_, v___x_1901_);
v___x_1903_ = lean_uint64_to_usize(v___x_1902_);
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(v_x_1892_, v___x_1903_, v___x_1904_, v_x_1893_, v_x_1894_);
return v___x_1905_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object* v_fn_1912_, lean_object* v_maxArgs_x3f_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v___f_1919_; lean_object* v___f_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___f_1919_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0));
lean_inc_n(v_maxArgs_x3f_1913_, 2);
lean_inc_ref_n(v_fn_1912_, 2);
v___f_1920_ = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed), 8, 3);
lean_closure_set(v___f_1920_, 0, v_fn_1912_);
lean_closure_set(v___f_1920_, 1, v_maxArgs_x3f_1913_);
lean_closure_set(v___f_1920_, 2, v___f_1919_);
v___x_1921_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_1922_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
v___x_1923_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_1912_, v_maxArgs_x3f_1913_, v_a_1914_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1984_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1926_ = v___x_1923_;
v_isShared_1927_ = v_isSharedCheck_1984_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1923_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1984_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v_finfo_1929_; lean_object* v___y_1930_; lean_object* v___x_1962_; lean_object* v_cache_1963_; lean_object* v_funInfo_1964_; lean_object* v___x_1965_; 
v___x_1962_ = lean_st_ref_get(v_a_1915_);
v_cache_1963_ = lean_ctor_get(v___x_1962_, 1);
lean_inc_ref(v_cache_1963_);
lean_dec(v___x_1962_);
v_funInfo_1964_ = lean_ctor_get(v_cache_1963_, 1);
lean_inc_ref(v_funInfo_1964_);
lean_dec_ref(v_cache_1963_);
v___x_1965_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_funInfo_1964_, v_a_1924_);
lean_dec_ref(v_funInfo_1964_);
if (lean_obj_tag(v___x_1965_) == 0)
{
if (lean_obj_tag(v_fn_1912_) == 4)
{
lean_object* v_declName_1966_; lean_object* v_us_1967_; uint8_t v___x_1968_; 
v_declName_1966_ = lean_ctor_get(v_fn_1912_, 0);
v_us_1967_ = lean_ctor_get(v_fn_1912_, 1);
v___x_1968_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(v_us_1967_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
lean_inc(v_us_1967_);
lean_inc_n(v_declName_1966_, 2);
lean_dec_ref_known(v_fn_1912_, 2);
v___x_1969_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1969_, 0, v_declName_1966_);
lean_ctor_set(v___x_1969_, 1, v_us_1967_);
lean_ctor_set(v___x_1969_, 2, v_maxArgs_x3f_1913_);
v___x_1970_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg(v___x_1921_, v___x_1922_, v_declName_1966_, v___x_1969_, v___f_1920_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v_finfo_1929_ = v_a_1971_;
v___y_1930_ = v_a_1915_;
goto v___jp_1928_;
}
else
{
lean_del_object(v___x_1926_);
lean_dec(v_a_1924_);
return v___x_1970_;
}
}
else
{
lean_object* v___x_1972_; 
lean_dec_ref(v___f_1920_);
lean_inc(v_a_1917_);
lean_inc_ref(v_a_1916_);
lean_inc(v_a_1915_);
lean_inc_ref(v_a_1914_);
v___x_1972_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1912_, v_maxArgs_x3f_1913_, v___f_1919_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v_finfo_1929_ = v_a_1973_;
v___y_1930_ = v_a_1915_;
goto v___jp_1928_;
}
else
{
lean_del_object(v___x_1926_);
lean_dec(v_a_1924_);
return v___x_1972_;
}
}
}
else
{
lean_object* v___x_1974_; 
lean_dec_ref(v___f_1920_);
lean_inc(v_a_1917_);
lean_inc_ref(v_a_1916_);
lean_inc(v_a_1915_);
lean_inc_ref(v_a_1914_);
v___x_1974_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1912_, v_maxArgs_x3f_1913_, v___f_1919_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc(v_a_1975_);
lean_dec_ref_known(v___x_1974_, 1);
v_finfo_1929_ = v_a_1975_;
v___y_1930_ = v_a_1915_;
goto v___jp_1928_;
}
else
{
lean_del_object(v___x_1926_);
lean_dec(v_a_1924_);
return v___x_1974_;
}
}
}
else
{
lean_object* v_val_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_del_object(v___x_1926_);
lean_dec(v_a_1924_);
lean_dec_ref(v___f_1920_);
lean_dec(v_maxArgs_x3f_1913_);
lean_dec_ref(v_fn_1912_);
v_val_1976_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1965_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_val_1976_);
lean_dec(v___x_1965_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
lean_ctor_set_tag(v___x_1978_, 0);
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_val_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
v___jp_1928_:
{
lean_object* v___x_1931_; lean_object* v_cache_1932_; lean_object* v_mctx_1933_; lean_object* v_zetaDeltaFVarIds_1934_; lean_object* v_postponed_1935_; lean_object* v_diag_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1961_; 
v___x_1931_ = lean_st_ref_take(v___y_1930_);
v_cache_1932_ = lean_ctor_get(v___x_1931_, 1);
v_mctx_1933_ = lean_ctor_get(v___x_1931_, 0);
v_zetaDeltaFVarIds_1934_ = lean_ctor_get(v___x_1931_, 2);
v_postponed_1935_ = lean_ctor_get(v___x_1931_, 3);
v_diag_1936_ = lean_ctor_get(v___x_1931_, 4);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1938_ = v___x_1931_;
v_isShared_1939_ = v_isSharedCheck_1961_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_diag_1936_);
lean_inc(v_postponed_1935_);
lean_inc(v_zetaDeltaFVarIds_1934_);
lean_inc(v_cache_1932_);
lean_inc(v_mctx_1933_);
lean_dec(v___x_1931_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1961_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v_inferType_1940_; lean_object* v_funInfo_1941_; lean_object* v_synthInstance_1942_; lean_object* v_whnf_1943_; lean_object* v_defEqTrans_1944_; lean_object* v_defEqPerm_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1960_; 
v_inferType_1940_ = lean_ctor_get(v_cache_1932_, 0);
v_funInfo_1941_ = lean_ctor_get(v_cache_1932_, 1);
v_synthInstance_1942_ = lean_ctor_get(v_cache_1932_, 2);
v_whnf_1943_ = lean_ctor_get(v_cache_1932_, 3);
v_defEqTrans_1944_ = lean_ctor_get(v_cache_1932_, 4);
v_defEqPerm_1945_ = lean_ctor_get(v_cache_1932_, 5);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_cache_1932_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1947_ = v_cache_1932_;
v_isShared_1948_ = v_isSharedCheck_1960_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_defEqPerm_1945_);
lean_inc(v_defEqTrans_1944_);
lean_inc(v_whnf_1943_);
lean_inc(v_synthInstance_1942_);
lean_inc(v_funInfo_1941_);
lean_inc(v_inferType_1940_);
lean_dec(v_cache_1932_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1960_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
lean_inc_ref(v_finfo_1929_);
v___x_1949_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_funInfo_1941_, v_a_1924_, v_finfo_1929_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 1, v___x_1949_);
v___x_1951_ = v___x_1947_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_inferType_1940_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v___x_1949_);
lean_ctor_set(v_reuseFailAlloc_1959_, 2, v_synthInstance_1942_);
lean_ctor_set(v_reuseFailAlloc_1959_, 3, v_whnf_1943_);
lean_ctor_set(v_reuseFailAlloc_1959_, 4, v_defEqTrans_1944_);
lean_ctor_set(v_reuseFailAlloc_1959_, 5, v_defEqPerm_1945_);
v___x_1951_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
lean_object* v___x_1953_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 1, v___x_1951_);
v___x_1953_ = v___x_1938_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_mctx_1933_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v___x_1951_);
lean_ctor_set(v_reuseFailAlloc_1958_, 2, v_zetaDeltaFVarIds_1934_);
lean_ctor_set(v_reuseFailAlloc_1958_, 3, v_postponed_1935_);
lean_ctor_set(v_reuseFailAlloc_1958_, 4, v_diag_1936_);
v___x_1953_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1956_; 
v___x_1954_ = lean_st_ref_put(v___y_1930_, v___x_1953_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v_finfo_1929_);
v___x_1956_ = v___x_1926_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_finfo_1929_);
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
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec_ref(v___f_1920_);
lean_dec(v_maxArgs_x3f_1913_);
lean_dec_ref(v_fn_1912_);
v_a_1985_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1923_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1923_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object* v_fn_1993_, lean_object* v_maxArgs_x3f_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_1993_, v_maxArgs_x3f_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_);
lean_dec(v_a_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_a_1996_);
lean_dec_ref(v_a_1995_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object* v_upperBound_2001_, lean_object* v_val_2002_, lean_object* v___x_2003_, lean_object* v_fvars_2004_, lean_object* v_next_2005_, lean_object* v_upperBound_2006_, lean_object* v_inst_2007_, lean_object* v_R_2008_, lean_object* v_a_2009_, lean_object* v_b_2010_, lean_object* v_c_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_upperBound_2001_, v_val_2002_, v___x_2003_, v_fvars_2004_, v_next_2005_, v_upperBound_2006_, v_a_2009_, v_b_2010_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object* v_upperBound_2018_, lean_object* v_val_2019_, lean_object* v___x_2020_, lean_object* v_fvars_2021_, lean_object* v_next_2022_, lean_object* v_upperBound_2023_, lean_object* v_inst_2024_, lean_object* v_R_2025_, lean_object* v_a_2026_, lean_object* v_b_2027_, lean_object* v_c_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(v_upperBound_2018_, v_val_2019_, v___x_2020_, v_fvars_2021_, v_next_2022_, v_upperBound_2023_, v_inst_2024_, v_R_2025_, v_a_2026_, v_b_2027_, v_c_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v_upperBound_2023_);
lean_dec(v_next_2022_);
lean_dec_ref(v_fvars_2021_);
lean_dec_ref(v___x_2020_);
lean_dec_ref(v_val_2019_);
lean_dec(v_upperBound_2018_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object* v_upperBound_2035_, lean_object* v_fvars_2036_, lean_object* v_inst_2037_, lean_object* v_R_2038_, lean_object* v_a_2039_, lean_object* v_b_2040_, lean_object* v_c_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v___x_2047_; 
v___x_2047_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___redArg(v_upperBound_2035_, v_fvars_2036_, v_a_2039_, v_b_2040_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object* v_upperBound_2048_, lean_object* v_fvars_2049_, lean_object* v_inst_2050_, lean_object* v_R_2051_, lean_object* v_a_2052_, lean_object* v_b_2053_, lean_object* v_c_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v_upperBound_2048_, v_fvars_2049_, v_inst_2050_, v_R_2051_, v_a_2052_, v_b_2053_, v_c_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec_ref(v_fvars_2049_);
lean_dec(v_upperBound_2048_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object* v_00_u03b2_2061_, lean_object* v_x_2062_, lean_object* v_x_2063_, lean_object* v_x_2064_){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_x_2062_, v_x_2063_, v_x_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object* v_00_u03b2_2066_, lean_object* v_x_2067_, lean_object* v_x_2068_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_x_2067_, v_x_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___boxed(lean_object* v_00_u03b2_2070_, lean_object* v_x_2071_, lean_object* v_x_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(v_00_u03b2_2070_, v_x_2071_, v_x_2072_);
lean_dec_ref(v_x_2072_);
lean_dec_ref(v_x_2071_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11(lean_object* v_00_u03b2_2074_, lean_object* v_msg_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___redArg(v_msg_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2082_, lean_object* v_msg_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__11(v_00_u03b2_2082_, v_msg_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
lean_dec(v___y_2087_);
lean_dec_ref(v___y_2086_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object* v_00_u03b2_2090_, lean_object* v_inst_2091_, lean_object* v_inst_2092_, lean_object* v_forConst_2093_, lean_object* v_key_2094_, lean_object* v_realize_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v___x_2101_; 
v___x_2101_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___redArg(v_inst_2091_, v_inst_2092_, v_forConst_2093_, v_key_2094_, v_realize_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object* v_00_u03b2_2102_, lean_object* v_inst_2103_, lean_object* v_inst_2104_, lean_object* v_forConst_2105_, lean_object* v_key_2106_, lean_object* v_realize_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_00_u03b2_2102_, v_inst_2103_, v_inst_2104_, v_forConst_2105_, v_key_2106_, v_realize_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_);
lean_dec(v_a_2111_);
lean_dec_ref(v_a_2110_);
lean_dec(v_a_2109_);
lean_dec_ref(v_a_2108_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5(lean_object* v_00_u03b2_2114_, lean_object* v_x_2115_, size_t v_x_2116_, size_t v_x_2117_, lean_object* v_x_2118_, lean_object* v_x_2119_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___redArg(v_x_2115_, v_x_2116_, v_x_2117_, v_x_2118_, v_x_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5___boxed(lean_object* v_00_u03b2_2121_, lean_object* v_x_2122_, lean_object* v_x_2123_, lean_object* v_x_2124_, lean_object* v_x_2125_, lean_object* v_x_2126_){
_start:
{
size_t v_x_12893__boxed_2127_; size_t v_x_12894__boxed_2128_; lean_object* v_res_2129_; 
v_x_12893__boxed_2127_ = lean_unbox_usize(v_x_2123_);
lean_dec(v_x_2123_);
v_x_12894__boxed_2128_ = lean_unbox_usize(v_x_2124_);
lean_dec(v_x_2124_);
v_res_2129_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5(v_00_u03b2_2121_, v_x_2122_, v_x_12893__boxed_2127_, v_x_12894__boxed_2128_, v_x_2125_, v_x_2126_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7(lean_object* v_00_u03b2_2130_, lean_object* v_x_2131_, size_t v_x_2132_, lean_object* v_x_2133_){
_start:
{
lean_object* v___x_2134_; 
v___x_2134_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___redArg(v_x_2131_, v_x_2132_, v_x_2133_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7___boxed(lean_object* v_00_u03b2_2135_, lean_object* v_x_2136_, lean_object* v_x_2137_, lean_object* v_x_2138_){
_start:
{
size_t v_x_12910__boxed_2139_; lean_object* v_res_2140_; 
v_x_12910__boxed_2139_ = lean_unbox_usize(v_x_2137_);
lean_dec(v_x_2137_);
v_res_2140_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7(v_00_u03b2_2135_, v_x_2136_, v_x_12910__boxed_2139_, v_x_2138_);
lean_dec_ref(v_x_2138_);
lean_dec_ref(v_x_2136_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6(lean_object* v_00_u03b2_2141_, lean_object* v_n_2142_, lean_object* v_k_2143_, lean_object* v_v_2144_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6___redArg(v_n_2142_, v_k_2143_, v_v_2144_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7(lean_object* v_00_u03b2_2146_, size_t v_depth_2147_, lean_object* v_keys_2148_, lean_object* v_vals_2149_, lean_object* v_heq_2150_, lean_object* v_i_2151_, lean_object* v_entries_2152_){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___redArg(v_depth_2147_, v_keys_2148_, v_vals_2149_, v_i_2151_, v_entries_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7___boxed(lean_object* v_00_u03b2_2154_, lean_object* v_depth_2155_, lean_object* v_keys_2156_, lean_object* v_vals_2157_, lean_object* v_heq_2158_, lean_object* v_i_2159_, lean_object* v_entries_2160_){
_start:
{
size_t v_depth_boxed_2161_; lean_object* v_res_2162_; 
v_depth_boxed_2161_ = lean_unbox_usize(v_depth_2155_);
lean_dec(v_depth_2155_);
v_res_2162_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__7(v_00_u03b2_2154_, v_depth_boxed_2161_, v_keys_2156_, v_vals_2157_, v_heq_2158_, v_i_2159_, v_entries_2160_);
lean_dec_ref(v_vals_2157_);
lean_dec_ref(v_keys_2156_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10(lean_object* v_00_u03b2_2163_, lean_object* v_keys_2164_, lean_object* v_vals_2165_, lean_object* v_heq_2166_, lean_object* v_i_2167_, lean_object* v_k_2168_){
_start:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___redArg(v_keys_2164_, v_vals_2165_, v_i_2167_, v_k_2168_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10___boxed(lean_object* v_00_u03b2_2170_, lean_object* v_keys_2171_, lean_object* v_vals_2172_, lean_object* v_heq_2173_, lean_object* v_i_2174_, lean_object* v_k_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__7_spec__10(v_00_u03b2_2170_, v_keys_2171_, v_vals_2172_, v_heq_2173_, v_i_2174_, v_k_2175_);
lean_dec_ref(v_k_2175_);
lean_dec_ref(v_vals_2172_);
lean_dec_ref(v_keys_2171_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14(lean_object* v_00_u03b2_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_){
_start:
{
lean_object* v___x_2180_; 
v___x_2180_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___redArg(v_x_2178_, v_x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14___boxed(lean_object* v_00_u03b2_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14(v_00_u03b2_2181_, v_x_2182_, v_x_2183_);
lean_dec_ref(v_x_2183_);
lean_dec_ref(v_x_2182_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15(lean_object* v_00_u03b2_2185_, lean_object* v_x_2186_, lean_object* v_x_2187_, lean_object* v_x_2188_){
_start:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15___redArg(v_x_2186_, v_x_2187_, v_x_2188_);
return v___x_2189_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16(lean_object* v_00_u03b2_2190_, lean_object* v_m_2191_, lean_object* v_a_2192_){
_start:
{
uint8_t v___x_2193_; 
v___x_2193_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___redArg(v_m_2191_, v_a_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16___boxed(lean_object* v_00_u03b2_2194_, lean_object* v_m_2195_, lean_object* v_a_2196_){
_start:
{
uint8_t v_res_2197_; lean_object* v_r_2198_; 
v_res_2197_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16(v_00_u03b2_2194_, v_m_2195_, v_a_2196_);
lean_dec(v_a_2196_);
lean_dec_ref(v_m_2195_);
v_r_2198_ = lean_box(v_res_2197_);
return v_r_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6_spec__11(lean_object* v_00_u03b2_2199_, lean_object* v_x_2200_, lean_object* v_x_2201_, lean_object* v_x_2202_, lean_object* v_x_2203_){
_start:
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5_spec__5_spec__6_spec__11___redArg(v_x_2200_, v_x_2201_, v_x_2202_, v_x_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17(lean_object* v_00_u03b2_2205_, lean_object* v_x_2206_, size_t v_x_2207_, lean_object* v_x_2208_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___redArg(v_x_2206_, v_x_2207_, v_x_2208_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17___boxed(lean_object* v_00_u03b2_2210_, lean_object* v_x_2211_, lean_object* v_x_2212_, lean_object* v_x_2213_){
_start:
{
size_t v_x_12955__boxed_2214_; lean_object* v_res_2215_; 
v_x_12955__boxed_2214_ = lean_unbox_usize(v_x_2212_);
lean_dec(v_x_2212_);
v_res_2215_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17(v_00_u03b2_2210_, v_x_2211_, v_x_12955__boxed_2214_, v_x_2213_);
lean_dec_ref(v_x_2213_);
lean_dec_ref(v_x_2211_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19(lean_object* v_00_u03b2_2216_, lean_object* v_x_2217_, size_t v_x_2218_, size_t v_x_2219_, lean_object* v_x_2220_, lean_object* v_x_2221_){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___redArg(v_x_2217_, v_x_2218_, v_x_2219_, v_x_2220_, v_x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19___boxed(lean_object* v_00_u03b2_2223_, lean_object* v_x_2224_, lean_object* v_x_2225_, lean_object* v_x_2226_, lean_object* v_x_2227_, lean_object* v_x_2228_){
_start:
{
size_t v_x_12966__boxed_2229_; size_t v_x_12967__boxed_2230_; lean_object* v_res_2231_; 
v_x_12966__boxed_2229_ = lean_unbox_usize(v_x_2225_);
lean_dec(v_x_2225_);
v_x_12967__boxed_2230_ = lean_unbox_usize(v_x_2226_);
lean_dec(v_x_2226_);
v_res_2231_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19(v_00_u03b2_2223_, v_x_2224_, v_x_12966__boxed_2229_, v_x_12967__boxed_2230_, v_x_2227_, v_x_2228_);
return v_res_2231_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21(lean_object* v_00_u03b2_2232_, lean_object* v_a_2233_, lean_object* v_x_2234_){
_start:
{
uint8_t v___x_2235_; 
v___x_2235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___redArg(v_a_2233_, v_x_2234_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21___boxed(lean_object* v_00_u03b2_2236_, lean_object* v_a_2237_, lean_object* v_x_2238_){
_start:
{
uint8_t v_res_2239_; lean_object* v_r_2240_; 
v_res_2239_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__16_spec__21(v_00_u03b2_2236_, v_a_2237_, v_x_2238_);
lean_dec(v_x_2238_);
lean_dec(v_a_2237_);
v_r_2240_ = lean_box(v_res_2239_);
return v_r_2240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18(lean_object* v_00_u03b2_2241_, lean_object* v_keys_2242_, lean_object* v_vals_2243_, lean_object* v_heq_2244_, lean_object* v_i_2245_, lean_object* v_k_2246_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___redArg(v_keys_2242_, v_vals_2243_, v_i_2245_, v_k_2246_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18___boxed(lean_object* v_00_u03b2_2248_, lean_object* v_keys_2249_, lean_object* v_vals_2250_, lean_object* v_heq_2251_, lean_object* v_i_2252_, lean_object* v_k_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__14_spec__17_spec__18(v_00_u03b2_2248_, v_keys_2249_, v_vals_2250_, v_heq_2251_, v_i_2252_, v_k_2253_);
lean_dec_ref(v_k_2253_);
lean_dec_ref(v_vals_2250_);
lean_dec_ref(v_keys_2249_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21(lean_object* v_00_u03b2_2255_, lean_object* v_n_2256_, lean_object* v_k_2257_, lean_object* v_v_2258_){
_start:
{
lean_object* v___x_2259_; 
v___x_2259_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21___redArg(v_n_2256_, v_k_2257_, v_v_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22(lean_object* v_00_u03b2_2260_, size_t v_depth_2261_, lean_object* v_keys_2262_, lean_object* v_vals_2263_, lean_object* v_heq_2264_, lean_object* v_i_2265_, lean_object* v_entries_2266_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___redArg(v_depth_2261_, v_keys_2262_, v_vals_2263_, v_i_2265_, v_entries_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22___boxed(lean_object* v_00_u03b2_2268_, lean_object* v_depth_2269_, lean_object* v_keys_2270_, lean_object* v_vals_2271_, lean_object* v_heq_2272_, lean_object* v_i_2273_, lean_object* v_entries_2274_){
_start:
{
size_t v_depth_boxed_2275_; lean_object* v_res_2276_; 
v_depth_boxed_2275_ = lean_unbox_usize(v_depth_2269_);
lean_dec(v_depth_2269_);
v_res_2276_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__22(v_00_u03b2_2268_, v_depth_boxed_2275_, v_keys_2270_, v_vals_2271_, v_heq_2272_, v_i_2273_, v_entries_2274_);
lean_dec_ref(v_vals_2271_);
lean_dec_ref(v_keys_2270_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21_spec__23(lean_object* v_00_u03b2_2277_, lean_object* v_x_2278_, lean_object* v_x_2279_, lean_object* v_x_2280_, lean_object* v_x_2281_){
_start:
{
lean_object* v___x_2282_; 
v___x_2282_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8_spec__10_spec__15_spec__19_spec__21_spec__23___redArg(v_x_2278_, v_x_2279_, v_x_2280_, v_x_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object* v_fn_2283_, lean_object* v_maxArgs_x3f_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2283_, v_maxArgs_x3f_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object* v_fn_2291_, lean_object* v_maxArgs_x3f_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_Lean_Meta_getFunInfo(v_fn_2291_, v_maxArgs_x3f_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
lean_dec(v_a_2296_);
lean_dec_ref(v_a_2295_);
lean_dec(v_a_2294_);
lean_dec_ref(v_a_2293_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* v_fn_2299_, lean_object* v_nargs_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_nargs_2300_);
v___x_2307_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2299_, v___x_2306_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object* v_fn_2308_, lean_object* v_nargs_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lean_Meta_getFunInfoNArgs(v_fn_2308_, v_nargs_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_);
lean_dec(v_a_2313_);
lean_dec_ref(v_a_2312_);
lean_dec(v_a_2311_);
lean_dec_ref(v_a_2310_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object* v_info_2316_){
_start:
{
lean_object* v_paramInfo_2317_; lean_object* v___x_2318_; 
v_paramInfo_2317_ = lean_ctor_get(v_info_2316_, 0);
v___x_2318_ = lean_array_get_size(v_paramInfo_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object* v_info_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lean_Meta_FunInfo_getArity(v_info_2319_);
lean_dec_ref(v_info_2319_);
return v_res_2320_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_FunInfo(builtin);
}
#ifdef __cplusplus
}
#endif
