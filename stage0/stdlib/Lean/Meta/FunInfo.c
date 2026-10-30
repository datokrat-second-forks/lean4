// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: public import Lean.Meta.InferType import Init.Data.Range.Polymorphic.Iterators import Init.UDecidable
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
uint8_t l_Lean_Meta_instBEqInfoCacheKey_beq(lean_object*, lean_object*);
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
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_areRealizationsEnabledForConst(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_mk_array(lean_object*, lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_set_heartbeats(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t l_Lean_Environment_isImportedConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_find_expr(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_object* l_Lean_Meta_mkInfoCacheKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
lean_object* l_Lean_Meta_instBEqInfoCacheKey_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.FunInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "_private.Lean.Meta.FunInfo.0.Lean.Meta.getFunInfoAux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0;
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "trying to realize `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "` value but `enableRealizationsForConst` must be called for `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` first"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Environment.realizeConst: `realizedImportedConsts` is empty"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value;
static const lean_ctor_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value)}};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Meta.Basic"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.realizeValue"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object* v_x_1_, lean_object* v_x_2_){
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
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_x_9_, v_x_10_);
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
v___x_38_ = l_instBEqOption_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_maxArgs_x3f_32_, v_maxArgs_x3f_35_);
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
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_193_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_193_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_193_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_193_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_finfo_137_; lean_object* v___y_138_; lean_object* v___x_171_; lean_object* v_cache_172_; lean_object* v_funInfo_173_; lean_object* v___x_174_; 
v___x_171_ = lean_st_ref_get(v_a_120_);
v_cache_172_ = lean_ctor_get(v___x_171_, 1);
lean_inc_ref(v_cache_172_);
lean_dec(v___x_171_);
v_funInfo_173_ = lean_ctor_get(v_cache_172_, 1);
lean_inc_ref(v_funInfo_173_);
lean_dec_ref(v_cache_172_);
lean_inc(v_a_132_);
v___x_174_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_125_, v___x_126_, v_funInfo_173_, v_a_132_);
lean_dec_ref(v_funInfo_173_);
if (lean_obj_tag(v___x_174_) == 0)
{
if (lean_obj_tag(v_fn_116_) == 4)
{
lean_object* v_declName_175_; lean_object* v_us_176_; uint8_t v___x_177_; 
v_declName_175_ = lean_ctor_get(v_fn_116_, 0);
lean_inc(v_declName_175_);
v_us_176_ = lean_ctor_get(v_fn_116_, 1);
lean_inc_n(v_us_176_, 2);
lean_dec_ref_known(v_fn_116_, 2);
v___x_177_ = l_List_any___redArg(v_us_176_, v___f_124_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; 
lean_inc(v_declName_175_);
v___x_178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_178_, 0, v_declName_175_);
lean_ctor_set(v___x_178_, 1, v_us_176_);
lean_ctor_set(v___x_178_, 2, v_maxArgs_x3f_117_);
v___x_179_ = l_Lean_Meta_realizeValue___redArg(v___x_127_, v___x_128_, v___x_129_, v___x_130_, v_declName_175_, v___x_178_, v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_179_, 1);
v_finfo_137_ = v_a_180_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_179_;
}
}
else
{
lean_object* v___x_181_; 
lean_dec(v_us_176_);
lean_dec(v_declName_175_);
lean_dec(v_maxArgs_x3f_117_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_181_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v_finfo_137_ = v_a_182_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_181_;
}
}
}
else
{
lean_object* v___x_183_; 
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_183_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
v_finfo_137_ = v_a_184_;
v___y_138_ = v_a_120_;
goto v___jp_136_;
}
else
{
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
return v___x_183_;
}
}
}
else
{
lean_object* v_val_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
lean_del_object(v___x_134_);
lean_dec(v_a_132_);
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_val_185_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_174_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_val_185_);
lean_dec(v___x_174_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
lean_ctor_set_tag(v___x_187_, 0);
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_val_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
v___jp_136_:
{
lean_object* v___x_139_; lean_object* v_cache_140_; lean_object* v_mctx_141_; lean_object* v_zetaDeltaFVarIds_142_; lean_object* v_postponed_143_; lean_object* v_diag_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_170_; 
v___x_139_ = lean_st_ref_take(v___y_138_);
v_cache_140_ = lean_ctor_get(v___x_139_, 1);
v_mctx_141_ = lean_ctor_get(v___x_139_, 0);
v_zetaDeltaFVarIds_142_ = lean_ctor_get(v___x_139_, 2);
v_postponed_143_ = lean_ctor_get(v___x_139_, 3);
v_diag_144_ = lean_ctor_get(v___x_139_, 4);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_170_ == 0)
{
v___x_146_ = v___x_139_;
v_isShared_147_ = v_isSharedCheck_170_;
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
v_isShared_147_ = v_isSharedCheck_170_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v_inferType_148_; lean_object* v_funInfo_149_; lean_object* v_synthInstance_150_; lean_object* v_whnf_151_; lean_object* v_defEqTrans_152_; lean_object* v_defEqPerm_153_; lean_object* v_isUnitLike_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_169_; 
v_inferType_148_ = lean_ctor_get(v_cache_140_, 0);
v_funInfo_149_ = lean_ctor_get(v_cache_140_, 1);
v_synthInstance_150_ = lean_ctor_get(v_cache_140_, 2);
v_whnf_151_ = lean_ctor_get(v_cache_140_, 3);
v_defEqTrans_152_ = lean_ctor_get(v_cache_140_, 4);
v_defEqPerm_153_ = lean_ctor_get(v_cache_140_, 5);
v_isUnitLike_154_ = lean_ctor_get(v_cache_140_, 6);
v_isSharedCheck_169_ = !lean_is_exclusive(v_cache_140_);
if (v_isSharedCheck_169_ == 0)
{
v___x_156_ = v_cache_140_;
v_isShared_157_ = v_isSharedCheck_169_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_isUnitLike_154_);
lean_inc(v_defEqPerm_153_);
lean_inc(v_defEqTrans_152_);
lean_inc(v_whnf_151_);
lean_inc(v_synthInstance_150_);
lean_inc(v_funInfo_149_);
lean_inc(v_inferType_148_);
lean_dec(v_cache_140_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_169_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
lean_inc_ref(v_finfo_137_);
v___x_158_ = l_Lean_PersistentHashMap_insert___redArg(v___x_125_, v___x_126_, v_funInfo_149_, v_a_132_, v_finfo_137_);
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 1, v___x_158_);
v___x_160_ = v___x_156_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_inferType_148_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v_synthInstance_150_);
lean_ctor_set(v_reuseFailAlloc_168_, 3, v_whnf_151_);
lean_ctor_set(v_reuseFailAlloc_168_, 4, v_defEqTrans_152_);
lean_ctor_set(v_reuseFailAlloc_168_, 5, v_defEqPerm_153_);
lean_ctor_set(v_reuseFailAlloc_168_, 6, v_isUnitLike_154_);
v___x_160_ = v_reuseFailAlloc_168_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_162_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 1, v___x_160_);
v___x_162_ = v___x_146_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_mctx_141_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_167_, 2, v_zetaDeltaFVarIds_142_);
lean_ctor_set(v_reuseFailAlloc_167_, 3, v_postponed_143_);
lean_ctor_set(v_reuseFailAlloc_167_, 4, v_diag_144_);
v___x_162_ = v_reuseFailAlloc_167_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; lean_object* v___x_165_; 
v___x_163_ = lean_st_ref_put(v___y_138_, v___x_162_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v_finfo_137_);
v___x_165_ = v___x_134_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_finfo_137_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
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
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_a_194_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_131_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_131_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object* v_fn_202_, lean_object* v_maxArgs_x3f_203_, lean_object* v_k_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(v_fn_202_, v_maxArgs_x3f_203_, v_k_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object* v_e_211_, lean_object* v_deps_212_, lean_object* v_k_213_){
_start:
{
uint8_t v___x_214_; 
v___x_214_ = l_Lean_Expr_hasFVar(v_e_211_);
if (v___x_214_ == 0)
{
lean_dec(v_k_213_);
return v_deps_212_;
}
else
{
lean_object* v___x_215_; 
v___x_215_ = lean_apply_1(v_k_213_, v_deps_212_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object* v_e_216_, lean_object* v_deps_217_, lean_object* v_k_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(v_e_216_, v_deps_217_, v_k_218_);
lean_dec_ref(v_e_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object* v_00_u03b1_220_, lean_object* v_e_221_, lean_object* v_deps_222_, lean_object* v_k_223_){
_start:
{
uint8_t v___x_224_; 
v___x_224_ = l_Lean_Expr_hasFVar(v_e_221_);
if (v___x_224_ == 0)
{
lean_dec(v_k_223_);
return v_deps_222_;
}
else
{
lean_object* v___x_225_; 
v___x_225_ = lean_apply_1(v_k_223_, v_deps_222_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object* v_00_u03b1_226_, lean_object* v_e_227_, lean_object* v_deps_228_, lean_object* v_k_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(v_00_u03b1_226_, v_e_227_, v_deps_228_, v_k_229_);
lean_dec_ref(v_e_227_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object* v_xs_231_, lean_object* v_v_232_, lean_object* v_i_233_){
_start:
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = lean_array_get_size(v_xs_231_);
v___x_235_ = lean_nat_dec_lt(v_i_233_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; 
lean_dec(v_i_233_);
v___x_236_ = lean_box(0);
return v___x_236_;
}
else
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = lean_array_fget_borrowed(v_xs_231_, v_i_233_);
v___x_238_ = lean_expr_eqv(v___x_237_, v_v_232_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = lean_nat_add(v_i_233_, v___x_239_);
lean_dec(v_i_233_);
v_i_233_ = v___x_240_;
goto _start;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v_i_233_);
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_243_, lean_object* v_v_244_, lean_object* v_i_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_243_, v_v_244_, v_i_245_);
lean_dec_ref(v_v_244_);
lean_dec_ref(v_xs_243_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object* v_xs_247_, lean_object* v_v_248_){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_247_, v_v_248_, v___x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object* v_xs_251_, lean_object* v_v_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_251_, v_v_252_);
lean_dec_ref(v_v_252_);
lean_dec_ref(v_xs_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object* v_xs_254_, lean_object* v_v_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_254_, v_v_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v___x_257_; 
v___x_257_ = lean_box(0);
return v___x_257_;
}
else
{
lean_object* v_val_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
v_val_258_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_256_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_val_258_);
lean_dec(v___x_256_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_val_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object* v_xs_266_, lean_object* v_v_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_xs_266_, v_v_267_);
lean_dec_ref(v_v_267_);
lean_dec_ref(v_xs_266_);
return v_res_268_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object* v_a_269_, lean_object* v_as_270_, size_t v_i_271_, size_t v_stop_272_){
_start:
{
uint8_t v___x_273_; 
v___x_273_ = lean_usize_dec_eq(v_i_271_, v_stop_272_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_array_uget_borrowed(v_as_270_, v_i_271_);
v___x_275_ = lean_nat_dec_eq(v_a_269_, v___x_274_);
if (v___x_275_ == 0)
{
size_t v___x_276_; size_t v___x_277_; 
v___x_276_ = ((size_t)1ULL);
v___x_277_ = lean_usize_add(v_i_271_, v___x_276_);
v_i_271_ = v___x_277_;
goto _start;
}
else
{
return v___x_275_;
}
}
else
{
uint8_t v___x_279_; 
v___x_279_ = 0;
return v___x_279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object* v_a_280_, lean_object* v_as_281_, lean_object* v_i_282_, lean_object* v_stop_283_){
_start:
{
size_t v_i_boxed_284_; size_t v_stop_boxed_285_; uint8_t v_res_286_; lean_object* v_r_287_; 
v_i_boxed_284_ = lean_unbox_usize(v_i_282_);
lean_dec(v_i_282_);
v_stop_boxed_285_ = lean_unbox_usize(v_stop_283_);
lean_dec(v_stop_283_);
v_res_286_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_280_, v_as_281_, v_i_boxed_284_, v_stop_boxed_285_);
lean_dec_ref(v_as_281_);
lean_dec(v_a_280_);
v_r_287_ = lean_box(v_res_286_);
return v_r_287_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object* v_as_288_, lean_object* v_a_289_){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = lean_array_get_size(v_as_288_);
v___x_292_ = lean_nat_dec_lt(v___x_290_, v___x_291_);
if (v___x_292_ == 0)
{
return v___x_292_;
}
else
{
size_t v___x_293_; size_t v___x_294_; uint8_t v___x_295_; 
v___x_293_ = ((size_t)0ULL);
v___x_294_ = lean_usize_of_nat(v___x_291_);
v___x_295_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_289_, v_as_288_, v___x_293_, v___x_294_);
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object* v_as_296_, lean_object* v_a_297_){
_start:
{
uint8_t v_res_298_; lean_object* v_r_299_; 
v_res_298_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_as_296_, v_a_297_);
lean_dec(v_a_297_);
lean_dec_ref(v_as_296_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object* v_fvars_300_, lean_object* v_e_301_, lean_object* v_deps_302_){
_start:
{
lean_object* v_d_304_; lean_object* v_b_305_; 
switch(lean_obj_tag(v_e_301_))
{
case 5:
{
lean_object* v_fn_309_; lean_object* v_arg_310_; uint8_t v___x_311_; 
v_fn_309_ = lean_ctor_get(v_e_301_, 0);
v_arg_310_ = lean_ctor_get(v_e_301_, 1);
v___x_311_ = l_Lean_Expr_hasFVar(v_e_301_);
if (v___x_311_ == 0)
{
return v_deps_302_;
}
else
{
lean_object* v___x_312_; 
v___x_312_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_300_, v_fn_309_, v_deps_302_);
v_e_301_ = v_arg_310_;
v_deps_302_ = v___x_312_;
goto _start;
}
}
case 7:
{
lean_object* v_binderType_314_; lean_object* v_body_315_; 
v_binderType_314_ = lean_ctor_get(v_e_301_, 1);
v_body_315_ = lean_ctor_get(v_e_301_, 2);
v_d_304_ = v_binderType_314_;
v_b_305_ = v_body_315_;
goto v___jp_303_;
}
case 6:
{
lean_object* v_binderType_316_; lean_object* v_body_317_; 
v_binderType_316_ = lean_ctor_get(v_e_301_, 1);
v_body_317_ = lean_ctor_get(v_e_301_, 2);
v_d_304_ = v_binderType_316_;
v_b_305_ = v_body_317_;
goto v___jp_303_;
}
case 8:
{
lean_object* v_type_318_; lean_object* v_value_319_; lean_object* v_body_320_; uint8_t v___x_321_; 
v_type_318_ = lean_ctor_get(v_e_301_, 1);
v_value_319_ = lean_ctor_get(v_e_301_, 2);
v_body_320_ = lean_ctor_get(v_e_301_, 3);
v___x_321_ = l_Lean_Expr_hasFVar(v_e_301_);
if (v___x_321_ == 0)
{
return v_deps_302_;
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_300_, v_type_318_, v_deps_302_);
v___x_323_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_300_, v_value_319_, v___x_322_);
v_e_301_ = v_body_320_;
v_deps_302_ = v___x_323_;
goto _start;
}
}
case 11:
{
lean_object* v_struct_325_; 
v_struct_325_ = lean_ctor_get(v_e_301_, 2);
v_e_301_ = v_struct_325_;
goto _start;
}
case 10:
{
lean_object* v_expr_327_; 
v_expr_327_ = lean_ctor_get(v_e_301_, 1);
v_e_301_ = v_expr_327_;
goto _start;
}
case 1:
{
lean_object* v___x_329_; 
v___x_329_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_300_, v_e_301_);
if (lean_obj_tag(v___x_329_) == 0)
{
return v_deps_302_;
}
else
{
lean_object* v_val_330_; uint8_t v___x_331_; 
v_val_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_val_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_deps_302_, v_val_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; 
v___x_332_ = lean_array_push(v_deps_302_, v_val_330_);
return v___x_332_;
}
else
{
lean_dec(v_val_330_);
return v_deps_302_;
}
}
}
default: 
{
return v_deps_302_;
}
}
v___jp_303_:
{
uint8_t v___x_306_; 
v___x_306_ = l_Lean_Expr_hasFVar(v_e_301_);
if (v___x_306_ == 0)
{
return v_deps_302_;
}
else
{
lean_object* v___x_307_; 
v___x_307_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_300_, v_d_304_, v_deps_302_);
v_e_301_ = v_b_305_;
v_deps_302_ = v___x_307_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object* v_fvars_333_, lean_object* v_e_334_, lean_object* v_deps_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_333_, v_e_334_, v_deps_335_);
lean_dec_ref(v_e_334_);
lean_dec_ref(v_fvars_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object* v_hi_337_, lean_object* v_pivot_338_, lean_object* v_as_339_, lean_object* v_i_340_, lean_object* v_k_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = lean_nat_dec_lt(v_k_341_, v_hi_337_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v_k_341_);
v___x_343_ = lean_array_fswap(v_as_339_, v_i_340_, v_hi_337_);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v_i_340_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
return v___x_344_;
}
else
{
lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_345_ = lean_array_fget_borrowed(v_as_339_, v_k_341_);
v___x_346_ = lean_nat_dec_lt(v___x_345_, v_pivot_338_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_nat_add(v_k_341_, v___x_347_);
lean_dec(v_k_341_);
v_k_341_ = v___x_348_;
goto _start;
}
else
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_350_ = lean_array_fswap(v_as_339_, v_i_340_, v_k_341_);
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_nat_add(v_i_340_, v___x_351_);
lean_dec(v_i_340_);
v___x_353_ = lean_nat_add(v_k_341_, v___x_351_);
lean_dec(v_k_341_);
v_as_339_ = v___x_350_;
v_i_340_ = v___x_352_;
v_k_341_ = v___x_353_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_355_, lean_object* v_pivot_356_, lean_object* v_as_357_, lean_object* v_i_358_, lean_object* v_k_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_355_, v_pivot_356_, v_as_357_, v_i_358_, v_k_359_);
lean_dec(v_pivot_356_);
lean_dec(v_hi_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object* v_n_361_, lean_object* v_as_362_, lean_object* v_lo_363_, lean_object* v_hi_364_){
_start:
{
lean_object* v___y_366_; uint8_t v___x_376_; 
v___x_376_ = lean_nat_dec_lt(v_lo_363_, v_hi_364_);
if (v___x_376_ == 0)
{
lean_dec(v_lo_363_);
return v_as_362_;
}
else
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v_mid_379_; lean_object* v___y_381_; lean_object* v___y_387_; lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_377_ = lean_nat_add(v_lo_363_, v_hi_364_);
v___x_378_ = lean_unsigned_to_nat(1u);
v_mid_379_ = lean_nat_shiftr(v___x_377_, v___x_378_);
lean_dec(v___x_377_);
v___x_392_ = lean_array_fget_borrowed(v_as_362_, v_mid_379_);
v___x_393_ = lean_array_fget_borrowed(v_as_362_, v_lo_363_);
v___x_394_ = lean_nat_dec_lt(v___x_392_, v___x_393_);
if (v___x_394_ == 0)
{
v___y_387_ = v_as_362_;
goto v___jp_386_;
}
else
{
lean_object* v___x_395_; 
v___x_395_ = lean_array_fswap(v_as_362_, v_lo_363_, v_mid_379_);
v___y_387_ = v___x_395_;
goto v___jp_386_;
}
v___jp_380_:
{
lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lean_array_fget_borrowed(v___y_381_, v_mid_379_);
v___x_383_ = lean_array_fget_borrowed(v___y_381_, v_hi_364_);
v___x_384_ = lean_nat_dec_lt(v___x_382_, v___x_383_);
if (v___x_384_ == 0)
{
lean_dec(v_mid_379_);
v___y_366_ = v___y_381_;
goto v___jp_365_;
}
else
{
lean_object* v___x_385_; 
v___x_385_ = lean_array_fswap(v___y_381_, v_mid_379_, v_hi_364_);
lean_dec(v_mid_379_);
v___y_366_ = v___x_385_;
goto v___jp_365_;
}
}
v___jp_386_:
{
lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_388_ = lean_array_fget_borrowed(v___y_387_, v_hi_364_);
v___x_389_ = lean_array_fget_borrowed(v___y_387_, v_lo_363_);
v___x_390_ = lean_nat_dec_lt(v___x_388_, v___x_389_);
if (v___x_390_ == 0)
{
v___y_381_ = v___y_387_;
goto v___jp_380_;
}
else
{
lean_object* v___x_391_; 
v___x_391_ = lean_array_fswap(v___y_387_, v_lo_363_, v_hi_364_);
v___y_381_ = v___x_391_;
goto v___jp_380_;
}
}
}
v___jp_365_:
{
lean_object* v_pivot_367_; lean_object* v___x_368_; lean_object* v_fst_369_; lean_object* v_snd_370_; uint8_t v___x_371_; 
v_pivot_367_ = lean_array_fget(v___y_366_, v_hi_364_);
lean_inc_n(v_lo_363_, 2);
v___x_368_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_364_, v_pivot_367_, v___y_366_, v_lo_363_, v_lo_363_);
lean_dec(v_pivot_367_);
v_fst_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_fst_369_);
v_snd_370_ = lean_ctor_get(v___x_368_, 1);
lean_inc(v_snd_370_);
lean_dec_ref(v___x_368_);
v___x_371_ = lean_nat_dec_le(v_hi_364_, v_fst_369_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_361_, v_snd_370_, v_lo_363_, v_fst_369_);
v___x_373_ = lean_unsigned_to_nat(1u);
v___x_374_ = lean_nat_add(v_fst_369_, v___x_373_);
lean_dec(v_fst_369_);
v_as_362_ = v___x_372_;
v_lo_363_ = v___x_374_;
goto _start;
}
else
{
lean_dec(v_fst_369_);
lean_dec(v_lo_363_);
return v_snd_370_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object* v_n_396_, lean_object* v_as_397_, lean_object* v_lo_398_, lean_object* v_hi_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_396_, v_as_397_, v_lo_398_, v_hi_399_);
lean_dec(v_hi_399_);
lean_dec(v_n_396_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object* v_fvars_403_, lean_object* v_e_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v_deps_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0));
v_deps_407_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_403_, v_e_404_, v___x_406_);
v___x_408_ = lean_array_get_size(v_deps_407_);
v___x_409_ = lean_nat_dec_eq(v___x_408_, v___x_405_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___y_413_; uint8_t v___x_417_; 
v___x_410_ = lean_unsigned_to_nat(1u);
v___x_411_ = lean_nat_sub(v___x_408_, v___x_410_);
v___x_417_ = lean_nat_dec_le(v___x_405_, v___x_411_);
if (v___x_417_ == 0)
{
lean_inc(v___x_411_);
v___y_413_ = v___x_411_;
goto v___jp_412_;
}
else
{
v___y_413_ = v___x_405_;
goto v___jp_412_;
}
v___jp_412_:
{
uint8_t v___x_414_; 
v___x_414_ = lean_nat_dec_le(v___y_413_, v___x_411_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; 
lean_dec(v___x_411_);
lean_inc(v___y_413_);
v___x_415_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_408_, v_deps_407_, v___y_413_, v___y_413_);
lean_dec(v___y_413_);
return v___x_415_;
}
else
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_408_, v_deps_407_, v___y_413_, v___x_411_);
lean_dec(v___x_411_);
return v___x_416_;
}
}
}
else
{
return v_deps_407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object* v_fvars_418_, lean_object* v_e_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_418_, v_e_419_);
lean_dec_ref(v_e_419_);
lean_dec_ref(v_fvars_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object* v_n_421_, lean_object* v_as_422_, lean_object* v_lo_423_, lean_object* v_hi_424_, lean_object* v_w_425_, lean_object* v_hlo_426_, lean_object* v_hhi_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_421_, v_as_422_, v_lo_423_, v_hi_424_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object* v_n_429_, lean_object* v_as_430_, lean_object* v_lo_431_, lean_object* v_hi_432_, lean_object* v_w_433_, lean_object* v_hlo_434_, lean_object* v_hhi_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(v_n_429_, v_as_430_, v_lo_431_, v_hi_432_, v_w_433_, v_hlo_434_, v_hhi_435_);
lean_dec(v_hi_432_);
lean_dec(v_n_429_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object* v_n_437_, lean_object* v_lo_438_, lean_object* v_hi_439_, lean_object* v_hhi_440_, lean_object* v_pivot_441_, lean_object* v_as_442_, lean_object* v_i_443_, lean_object* v_k_444_, lean_object* v_ilo_445_, lean_object* v_ik_446_, lean_object* v_w_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_439_, v_pivot_441_, v_as_442_, v_i_443_, v_k_444_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object* v_n_449_, lean_object* v_lo_450_, lean_object* v_hi_451_, lean_object* v_hhi_452_, lean_object* v_pivot_453_, lean_object* v_as_454_, lean_object* v_i_455_, lean_object* v_k_456_, lean_object* v_ilo_457_, lean_object* v_ik_458_, lean_object* v_w_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(v_n_449_, v_lo_450_, v_hi_451_, v_hhi_452_, v_pivot_453_, v_as_454_, v_i_455_, v_k_456_, v_ilo_457_, v_ik_458_, v_w_459_);
lean_dec(v_pivot_453_);
lean_dec(v_hi_451_);
lean_dec(v_lo_450_);
lean_dec(v_n_449_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object* v_backDeps_461_, size_t v_sz_462_, size_t v_i_463_, lean_object* v_bs_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = lean_usize_dec_lt(v_i_463_, v_sz_462_);
if (v___x_465_ == 0)
{
return v_bs_464_;
}
else
{
lean_object* v_v_466_; uint8_t v_binderInfo_467_; uint8_t v_hasFwdDeps_468_; lean_object* v_backDeps_469_; uint8_t v_isProp_470_; uint8_t v_isDecInst_471_; uint8_t v_isUDecInst_472_; uint8_t v_isInstance_473_; uint8_t v_higherOrderOutParam_474_; uint8_t v_dependsOnHigherOrderOutParam_475_; lean_object* v___x_476_; lean_object* v_bs_x27_477_; lean_object* v___y_479_; 
v_v_466_ = lean_array_uget(v_bs_464_, v_i_463_);
v_binderInfo_467_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1);
v_hasFwdDeps_468_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 1);
v_backDeps_469_ = lean_ctor_get(v_v_466_, 0);
v_isProp_470_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 2);
v_isDecInst_471_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 3);
v_isUDecInst_472_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 4);
v_isInstance_473_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 5);
v_higherOrderOutParam_474_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 6);
v_dependsOnHigherOrderOutParam_475_ = lean_ctor_get_uint8(v_v_466_, sizeof(void*)*1 + 7);
v___x_476_ = lean_unsigned_to_nat(0u);
v_bs_x27_477_ = lean_array_uset(v_bs_464_, v_i_463_, v___x_476_);
if (v_hasFwdDeps_468_ == 0)
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = lean_usize_to_nat(v_i_463_);
v___x_485_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_backDeps_461_, v___x_484_);
lean_dec(v___x_484_);
if (v___x_485_ == 0)
{
v___y_479_ = v_v_466_;
goto v___jp_478_;
}
else
{
lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_inc_ref(v_backDeps_469_);
v_isSharedCheck_492_ = !lean_is_exclusive(v_v_466_);
if (v_isSharedCheck_492_ == 0)
{
lean_object* v_unused_493_; 
v_unused_493_ = lean_ctor_get(v_v_466_, 0);
lean_dec(v_unused_493_);
v___x_487_ = v_v_466_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_dec(v_v_466_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_backDeps_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1, v_binderInfo_467_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 2, v_isProp_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 3, v_isDecInst_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 4, v_isUDecInst_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 5, v_isInstance_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 6, v_higherOrderOutParam_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*1 + 7, v_dependsOnHigherOrderOutParam_475_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_ctor_set_uint8(v___x_490_, sizeof(void*)*1 + 1, v___x_485_);
v___y_479_ = v___x_490_;
goto v___jp_478_;
}
}
}
}
else
{
v___y_479_ = v_v_466_;
goto v___jp_478_;
}
v___jp_478_:
{
size_t v___x_480_; size_t v___x_481_; lean_object* v___x_482_; 
v___x_480_ = ((size_t)1ULL);
v___x_481_ = lean_usize_add(v_i_463_, v___x_480_);
v___x_482_ = lean_array_uset(v_bs_x27_477_, v_i_463_, v___y_479_);
v_i_463_ = v___x_481_;
v_bs_464_ = v___x_482_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object* v_backDeps_494_, lean_object* v_sz_495_, lean_object* v_i_496_, lean_object* v_bs_497_){
_start:
{
size_t v_sz_boxed_498_; size_t v_i_boxed_499_; lean_object* v_res_500_; 
v_sz_boxed_498_ = lean_unbox_usize(v_sz_495_);
lean_dec(v_sz_495_);
v_i_boxed_499_ = lean_unbox_usize(v_i_496_);
lean_dec(v_i_496_);
v_res_500_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_494_, v_sz_boxed_498_, v_i_boxed_499_, v_bs_497_);
lean_dec_ref(v_backDeps_494_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object* v_pinfo_501_, lean_object* v_backDeps_502_){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_503_ = lean_array_get_size(v_backDeps_502_);
v___x_504_ = lean_unsigned_to_nat(0u);
v___x_505_ = lean_nat_dec_eq(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
size_t v_sz_506_; size_t v___x_507_; lean_object* v___x_508_; 
v_sz_506_ = lean_array_size(v_pinfo_501_);
v___x_507_ = ((size_t)0ULL);
v___x_508_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_502_, v_sz_506_, v___x_507_, v_pinfo_501_);
return v___x_508_;
}
else
{
return v_pinfo_501_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object* v_pinfo_509_, lean_object* v_backDeps_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_pinfo_509_, v_backDeps_510_);
lean_dec_ref(v_backDeps_510_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object* v_backDeps_512_, lean_object* v_as_513_, size_t v_sz_514_, size_t v_i_515_, lean_object* v_bs_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_512_, v_sz_514_, v_i_515_, v_bs_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object* v_backDeps_518_, lean_object* v_as_519_, lean_object* v_sz_520_, lean_object* v_i_521_, lean_object* v_bs_522_){
_start:
{
size_t v_sz_boxed_523_; size_t v_i_boxed_524_; lean_object* v_res_525_; 
v_sz_boxed_523_ = lean_unbox_usize(v_sz_520_);
lean_dec(v_sz_520_);
v_i_boxed_524_ = lean_unbox_usize(v_i_521_);
lean_dec(v_i_521_);
v_res_525_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(v_backDeps_518_, v_as_519_, v_sz_boxed_523_, v_i_boxed_524_, v_bs_522_);
lean_dec_ref(v_as_519_);
lean_dec_ref(v_backDeps_518_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object* v_k_526_, lean_object* v_b_527_, lean_object* v_c_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; 
lean_inc(v___y_532_);
lean_inc_ref(v___y_531_);
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
v___x_534_ = lean_apply_7(v_k_526_, v_b_527_, v_c_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, lean_box(0));
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_535_, lean_object* v_b_536_, lean_object* v_c_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(v_k_535_, v_b_536_, v_c_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object* v_type_544_, lean_object* v_k_545_, uint8_t v_cleanupAnnotations_546_, uint8_t v_whnfType_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___f_553_; lean_object* v___x_554_; 
v___f_553_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_553_, 0, v_k_545_);
v___x_554_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_544_, v___f_553_, v_cleanupAnnotations_546_, v_whnfType_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_a_563_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_554_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_554_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object* v_type_571_, lean_object* v_k_572_, lean_object* v_cleanupAnnotations_573_, lean_object* v_whnfType_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_580_; uint8_t v_whnfType_boxed_581_; lean_object* v_res_582_; 
v_cleanupAnnotations_boxed_580_ = lean_unbox(v_cleanupAnnotations_573_);
v_whnfType_boxed_581_ = lean_unbox(v_whnfType_574_);
v_res_582_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_571_, v_k_572_, v_cleanupAnnotations_boxed_580_, v_whnfType_boxed_581_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object* v_00_u03b1_583_, lean_object* v_type_584_, lean_object* v_k_585_, uint8_t v_cleanupAnnotations_586_, uint8_t v_whnfType_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_584_, v_k_585_, v_cleanupAnnotations_586_, v_whnfType_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object* v_00_u03b1_594_, lean_object* v_type_595_, lean_object* v_k_596_, lean_object* v_cleanupAnnotations_597_, lean_object* v_whnfType_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_604_; uint8_t v_whnfType_boxed_605_; lean_object* v_res_606_; 
v_cleanupAnnotations_boxed_604_ = lean_unbox(v_cleanupAnnotations_597_);
v_whnfType_boxed_605_ = lean_unbox(v_whnfType_598_);
v_res_606_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(v_00_u03b1_594_, v_type_595_, v_k_596_, v_cleanupAnnotations_boxed_604_, v_whnfType_boxed_605_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object* v_msg_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
lean_object* v___f_614_; lean_object* v___x_9255__overap_615_; lean_object* v___x_616_; 
v___f_614_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_9255__overap_615_ = lean_panic_fn_borrowed(v___f_614_, v_msg_608_);
lean_inc(v___y_612_);
lean_inc_ref(v___y_611_);
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
v___x_616_ = lean_apply_5(v___x_9255__overap_615_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, lean_box(0));
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object* v_msg_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v_msg_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object* v_type_624_, lean_object* v_maxFVars_x3f_625_, lean_object* v_k_626_, uint8_t v_cleanupAnnotations_627_, uint8_t v_whnfType_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___f_634_; lean_object* v___x_635_; 
v___f_634_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_634_, 0, v_k_626_);
v___x_635_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_624_, v_maxFVars_x3f_625_, v___f_634_, v_cleanupAnnotations_627_, v_whnfType_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
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
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v_a_644_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_635_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_635_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object* v_type_652_, lean_object* v_maxFVars_x3f_653_, lean_object* v_k_654_, lean_object* v_cleanupAnnotations_655_, lean_object* v_whnfType_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_662_; uint8_t v_whnfType_boxed_663_; lean_object* v_res_664_; 
v_cleanupAnnotations_boxed_662_ = lean_unbox(v_cleanupAnnotations_655_);
v_whnfType_boxed_663_ = lean_unbox(v_whnfType_656_);
v_res_664_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_652_, v_maxFVars_x3f_653_, v_k_654_, v_cleanupAnnotations_boxed_662_, v_whnfType_boxed_663_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object* v_00_u03b1_665_, lean_object* v_type_666_, lean_object* v_maxFVars_x3f_667_, lean_object* v_k_668_, uint8_t v_cleanupAnnotations_669_, uint8_t v_whnfType_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_666_, v_maxFVars_x3f_667_, v_k_668_, v_cleanupAnnotations_669_, v_whnfType_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object* v_00_u03b1_677_, lean_object* v_type_678_, lean_object* v_maxFVars_x3f_679_, lean_object* v_k_680_, lean_object* v_cleanupAnnotations_681_, lean_object* v_whnfType_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_688_; uint8_t v_whnfType_boxed_689_; lean_object* v_res_690_; 
v_cleanupAnnotations_boxed_688_ = lean_unbox(v_cleanupAnnotations_681_);
v_whnfType_boxed_689_ = lean_unbox(v_whnfType_682_);
v_res_690_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(v_00_u03b1_677_, v_type_678_, v_maxFVars_x3f_679_, v_k_680_, v_cleanupAnnotations_boxed_688_, v_whnfType_boxed_689_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object* v_upperBound_691_, lean_object* v_val_692_, lean_object* v___x_693_, lean_object* v_fvars_694_, lean_object* v_next_695_, lean_object* v_upperBound_696_, lean_object* v_a_697_, lean_object* v_b_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_a_705_; uint8_t v___x_709_; 
v___x_709_ = lean_nat_dec_lt(v_a_697_, v_upperBound_691_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
lean_dec(v_a_697_);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v_b_698_);
return v___x_710_;
}
else
{
lean_object* v_fst_711_; lean_object* v_snd_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_777_; 
v_fst_711_ = lean_ctor_get(v_b_698_, 0);
v_snd_712_ = lean_ctor_get(v_b_698_, 1);
v_isSharedCheck_777_ = !lean_is_exclusive(v_b_698_);
if (v_isSharedCheck_777_ == 0)
{
v___x_714_ = v_b_698_;
v_isShared_715_ = v_isSharedCheck_777_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_snd_712_);
lean_inc(v_fst_711_);
lean_dec(v_b_698_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_777_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
uint8_t v___x_716_; 
v___x_716_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_val_692_, v_a_697_);
if (v___x_716_ == 0)
{
lean_object* v___x_718_; 
if (v_isShared_715_ == 0)
{
v___x_718_ = v___x_714_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_fst_711_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_snd_712_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
v_a_705_ = v___x_718_;
goto v___jp_704_;
}
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_array_fget_borrowed(v___x_693_, v_a_697_);
v___x_721_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_694_, v___x_720_);
if (lean_obj_tag(v___x_721_) == 1)
{
lean_object* v_val_722_; uint8_t v___x_723_; lean_object* v___x_724_; 
v_val_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v___x_721_, 1);
v___x_723_ = lean_nat_dec_lt(v_next_695_, v_upperBound_696_);
lean_inc(v___y_702_);
lean_inc_ref(v___y_701_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc(v___x_720_);
v___x_724_ = lean_infer_type(v___x_720_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
lean_inc(v___y_702_);
lean_inc_ref(v___y_701_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
v___x_726_ = lean_whnf(v_a_725_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___y_729_; uint8_t v___x_735_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_735_ = l_Lean_Expr_isForall(v_a_727_);
lean_dec(v_a_727_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
lean_dec(v_val_722_);
lean_del_object(v___x_714_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v_fst_711_);
lean_ctor_set(v___x_736_, 1, v_snd_712_);
v_a_705_ = v___x_736_;
goto v___jp_704_;
}
else
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = lean_array_get_size(v_fst_711_);
v___x_738_ = lean_nat_dec_lt(v_val_722_, v___x_737_);
if (v___x_738_ == 0)
{
lean_dec(v_val_722_);
v___y_729_ = v_fst_711_;
goto v___jp_728_;
}
else
{
lean_object* v_v_739_; uint8_t v_binderInfo_740_; uint8_t v_hasFwdDeps_741_; lean_object* v_backDeps_742_; uint8_t v_isProp_743_; uint8_t v_isDecInst_744_; uint8_t v_isUDecInst_745_; uint8_t v_isInstance_746_; uint8_t v_dependsOnHigherOrderOutParam_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_757_; 
v_v_739_ = lean_array_fget(v_fst_711_, v_val_722_);
v_binderInfo_740_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1);
v_hasFwdDeps_741_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1 + 1);
v_backDeps_742_ = lean_ctor_get(v_v_739_, 0);
v_isProp_743_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1 + 2);
v_isDecInst_744_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1 + 3);
v_isUDecInst_745_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1 + 4);
v_isInstance_746_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1 + 5);
v_dependsOnHigherOrderOutParam_747_ = lean_ctor_get_uint8(v_v_739_, sizeof(void*)*1 + 7);
v_isSharedCheck_757_ = !lean_is_exclusive(v_v_739_);
if (v_isSharedCheck_757_ == 0)
{
v___x_749_ = v_v_739_;
v_isShared_750_ = v_isSharedCheck_757_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_backDeps_742_);
lean_dec(v_v_739_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_757_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_751_; lean_object* v_xs_x27_752_; lean_object* v___x_754_; 
v___x_751_ = lean_box(0);
v_xs_x27_752_ = lean_array_fset(v_fst_711_, v_val_722_, v___x_751_);
if (v_isShared_750_ == 0)
{
v___x_754_ = v___x_749_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_backDeps_742_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1, v_binderInfo_740_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1 + 1, v_hasFwdDeps_741_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1 + 2, v_isProp_743_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1 + 3, v_isDecInst_744_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1 + 4, v_isUDecInst_745_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1 + 5, v_isInstance_746_);
lean_ctor_set_uint8(v_reuseFailAlloc_756_, sizeof(void*)*1 + 7, v_dependsOnHigherOrderOutParam_747_);
v___x_754_ = v_reuseFailAlloc_756_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_755_; 
lean_ctor_set_uint8(v___x_754_, sizeof(void*)*1 + 6, v___x_723_);
v___x_755_ = lean_array_fset(v_xs_x27_752_, v_val_722_, v___x_754_);
lean_dec(v_val_722_);
v___y_729_ = v___x_755_;
goto v___jp_728_;
}
}
}
}
v___jp_728_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_730_ = l_Lean_Expr_fvarId_x21(v___x_720_);
v___x_731_ = l_Lean_FVarIdSet_insert(v_snd_712_, v___x_730_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 1, v___x_731_);
lean_ctor_set(v___x_714_, 0, v___y_729_);
v___x_733_ = v___x_714_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___y_729_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_a_705_ = v___x_733_;
goto v___jp_704_;
}
}
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec(v_val_722_);
lean_del_object(v___x_714_);
lean_dec(v_snd_712_);
lean_dec(v_fst_711_);
lean_dec(v_a_697_);
v_a_758_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_726_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_726_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec(v_val_722_);
lean_del_object(v___x_714_);
lean_dec(v_snd_712_);
lean_dec(v_fst_711_);
lean_dec(v_a_697_);
v_a_766_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_724_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_724_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
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
lean_object* v___x_775_; 
lean_dec(v___x_721_);
if (v_isShared_715_ == 0)
{
v___x_775_ = v___x_714_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_fst_711_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_snd_712_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
v_a_705_ = v___x_775_;
goto v___jp_704_;
}
}
}
}
}
v___jp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_unsigned_to_nat(1u);
v___x_707_ = lean_nat_add(v_a_697_, v___x_706_);
lean_dec(v_a_697_);
v_a_697_ = v___x_707_;
v_b_698_ = v_a_705_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object* v_upperBound_778_, lean_object* v_val_779_, lean_object* v___x_780_, lean_object* v_fvars_781_, lean_object* v_next_782_, lean_object* v_upperBound_783_, lean_object* v_a_784_, lean_object* v_b_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_778_, v_val_779_, v___x_780_, v_fvars_781_, v_next_782_, v_upperBound_783_, v_a_784_, v_b_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v_upperBound_783_);
lean_dec(v_next_782_);
lean_dec_ref(v_fvars_781_);
lean_dec_ref(v___x_780_);
lean_dec_ref(v_val_779_);
lean_dec(v_upperBound_778_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object* v_x_795_, lean_object* v_type_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; uint8_t v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_802_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1));
v___x_803_ = l_Lean_Expr_isAppOf(v_type_796_, v___x_802_);
v___x_804_ = lean_box(v___x_803_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object* v_x_806_, lean_object* v_type_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(v_x_806_, v_type_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec_ref(v_type_807_);
lean_dec_ref(v_x_806_);
return v_res_813_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object* v_k_814_, lean_object* v_t_815_){
_start:
{
if (lean_obj_tag(v_t_815_) == 0)
{
lean_object* v_k_816_; lean_object* v_l_817_; lean_object* v_r_818_; uint8_t v___x_819_; 
v_k_816_ = lean_ctor_get(v_t_815_, 1);
v_l_817_ = lean_ctor_get(v_t_815_, 3);
v_r_818_ = lean_ctor_get(v_t_815_, 4);
v___x_819_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_814_, v_k_816_);
switch(v___x_819_)
{
case 0:
{
v_t_815_ = v_l_817_;
goto _start;
}
case 1:
{
uint8_t v___x_821_; 
v___x_821_ = 1;
return v___x_821_;
}
default: 
{
v_t_815_ = v_r_818_;
goto _start;
}
}
}
else
{
uint8_t v___x_823_; 
v___x_823_ = 0;
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object* v_k_824_, lean_object* v_t_825_){
_start:
{
uint8_t v_res_826_; lean_object* v_r_827_; 
v_res_826_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_824_, v_t_825_);
lean_dec(v_t_825_);
lean_dec(v_k_824_);
v_r_827_ = lean_box(v_res_826_);
return v_r_827_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__2(lean_object* v_snd_828_, lean_object* v_e_829_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = l_Lean_Expr_isFVar(v_e_829_);
if (v___x_830_ == 0)
{
return v___x_830_;
}
else
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = l_Lean_Expr_fvarId_x21(v_e_829_);
v___x_832_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v___x_831_, v_snd_828_);
lean_dec(v___x_831_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__2___boxed(lean_object* v_snd_833_, lean_object* v_e_834_){
_start:
{
uint8_t v_res_835_; lean_object* v_r_836_; 
v_res_835_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__2(v_snd_833_, v_e_834_);
lean_dec_ref(v_e_834_);
lean_dec(v_snd_833_);
v_r_836_ = lean_box(v_res_835_);
return v_r_836_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object* v_x_840_, lean_object* v_type_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; uint8_t v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_847_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___closed__1));
v___x_848_ = l_Lean_Expr_isAppOf(v_type_841_, v___x_847_);
v___x_849_ = lean_box(v___x_848_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object* v_x_851_, lean_object* v_type_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(v_x_851_, v_type_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec_ref(v_type_852_);
lean_dec_ref(v_x_851_);
return v_res_858_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_861_; lean_object* v_dummy_862_; 
v___x_861_ = lean_box(0);
v_dummy_862_ = l_Lean_Expr_sort___override(v___x_861_);
return v_dummy_862_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_866_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5));
v___x_867_ = lean_unsigned_to_nat(47u);
v___x_868_ = lean_unsigned_to_nat(124u);
v___x_869_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_870_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3));
v___x_871_ = l_mkPanicMessageWithDecl(v___x_870_, v___x_869_, v___x_868_, v___x_867_, v___x_866_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object* v_upperBound_872_, lean_object* v_fvars_873_, lean_object* v_a_874_, lean_object* v_b_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v_a_882_; uint8_t v___x_886_; 
v___x_886_ = lean_nat_dec_lt(v_a_874_, v_upperBound_872_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; 
lean_dec(v_a_874_);
v___x_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_887_, 0, v_b_875_);
return v___x_887_;
}
else
{
lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_1021_; 
v_fst_888_ = lean_ctor_get(v_b_875_, 0);
v_snd_889_ = lean_ctor_get(v_b_875_, 1);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_b_875_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_891_ = v_b_875_;
v_isShared_892_ = v_isSharedCheck_1021_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_snd_889_);
lean_inc(v_fst_888_);
lean_dec(v_b_875_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_1021_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___f_893_; lean_object* v___f_894_; lean_object* v___f_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___f_893_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0));
v___f_894_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1));
lean_inc(v_snd_889_);
v___f_895_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_895_, 0, v_snd_889_);
v___x_896_ = lean_array_fget_borrowed(v_fvars_873_, v_a_874_);
v___x_897_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_896_, v___y_876_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___y_902_; lean_object* v___y_903_; uint8_t v___y_904_; uint8_t v___y_995_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_897_, 1);
v___x_899_ = l_Lean_LocalDecl_type(v_a_898_);
v___x_900_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_873_, v___x_899_);
if (lean_obj_tag(v_snd_889_) == 0)
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_find_expr(v___f_895_, v___x_899_);
lean_dec_ref(v___f_895_);
if (lean_obj_tag(v___x_1010_) == 0)
{
uint8_t v___x_1011_; 
v___x_1011_ = 0;
v___y_995_ = v___x_1011_;
goto v___jp_994_;
}
else
{
lean_dec_ref_known(v___x_1010_, 1);
v___y_995_ = v___x_886_;
goto v___jp_994_;
}
}
else
{
uint8_t v___x_1012_; 
lean_dec_ref(v___f_895_);
v___x_1012_ = 0;
v___y_995_ = v___x_1012_;
goto v___jp_994_;
}
v___jp_901_:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_888_, v___x_900_);
lean_inc_ref(v___x_899_);
v___x_906_ = l_Lean_Meta_isProp(v___x_899_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; uint8_t v___x_908_; lean_object* v___x_909_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v___x_908_ = 0;
lean_inc_ref(v___x_899_);
v___x_909_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v___x_899_, v___f_894_, v___x_908_, v___x_908_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
lean_inc_ref(v___x_899_);
v___x_911_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v___x_899_, v___f_893_, v___x_908_, v___x_908_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; uint8_t v___x_913_; lean_object* v___x_914_; uint8_t v___x_915_; uint8_t v___x_916_; uint8_t v___x_917_; lean_object* v___x_918_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = l_Lean_LocalDecl_binderInfo(v_a_898_);
lean_dec(v_a_898_);
v___x_914_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_914_, 0, v___x_900_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1, v___x_913_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 1, v___x_908_);
v___x_915_ = lean_unbox(v_a_907_);
lean_dec(v_a_907_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 2, v___x_915_);
v___x_916_ = lean_unbox(v_a_910_);
lean_dec(v_a_910_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 3, v___x_916_);
v___x_917_ = lean_unbox(v_a_912_);
lean_dec(v_a_912_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 4, v___x_917_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 5, v___y_904_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 6, v___x_908_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1 + 7, v___y_902_);
v___x_918_ = lean_array_push(v___x_905_, v___x_914_);
if (v___y_904_ == 0)
{
lean_object* v___x_920_; 
lean_dec(v___y_903_);
lean_dec_ref(v___x_899_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_918_);
v___x_920_ = v___x_891_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_snd_889_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
v_a_882_ = v___x_920_;
goto v___jp_881_;
}
}
else
{
if (lean_obj_tag(v___y_903_) == 1)
{
lean_object* v_val_922_; lean_object* v___x_923_; lean_object* v_env_924_; lean_object* v___x_925_; 
v_val_922_ = lean_ctor_get(v___y_903_, 0);
lean_inc(v_val_922_);
lean_dec_ref_known(v___y_903_, 1);
v___x_923_ = lean_st_ref_get(v___y_879_);
v_env_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc_ref(v_env_924_);
lean_dec(v___x_923_);
v___x_925_ = l_Lean_getOutParamPositions_x3f(v_env_924_, v_val_922_);
lean_dec(v_val_922_);
if (lean_obj_tag(v___x_925_) == 1)
{
lean_object* v_val_926_; lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v_val_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_val_926_);
lean_dec_ref_known(v___x_925_, 1);
v___x_927_ = lean_array_get_size(v_val_926_);
v___x_928_ = lean_unsigned_to_nat(0u);
v___x_929_ = lean_nat_dec_eq(v___x_927_, v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v_dummy_930_; lean_object* v_nargs_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_938_; 
v_dummy_930_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2);
v_nargs_931_ = l_Lean_Expr_getAppNumArgs(v___x_899_);
lean_inc(v_nargs_931_);
v___x_932_ = lean_mk_array(v_nargs_931_, v_dummy_930_);
v___x_933_ = lean_unsigned_to_nat(1u);
v___x_934_ = lean_nat_sub(v_nargs_931_, v___x_933_);
lean_dec(v_nargs_931_);
v___x_935_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_899_, v___x_932_, v___x_934_);
v___x_936_ = lean_array_get_size(v___x_935_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_918_);
v___x_938_ = v___x_891_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v_snd_889_);
v___x_938_ = v_reuseFailAlloc_950_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_939_; 
v___x_939_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v___x_936_, v_val_926_, v___x_935_, v_fvars_873_, v_a_874_, v_upperBound_872_, v___x_928_, v___x_938_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec_ref(v___x_935_);
lean_dec(v_val_926_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v_fst_941_; lean_object* v_snd_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
v_fst_941_ = lean_ctor_get(v_a_940_, 0);
v_snd_942_ = lean_ctor_get(v_a_940_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_a_940_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v_a_940_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_snd_942_);
lean_inc(v_fst_941_);
lean_dec(v_a_940_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_fst_941_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_snd_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
v_a_882_ = v___x_947_;
goto v___jp_881_;
}
}
}
else
{
lean_dec(v_a_874_);
return v___x_939_;
}
}
}
else
{
lean_object* v___x_952_; 
lean_dec(v_val_926_);
lean_dec_ref(v___x_899_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_918_);
v___x_952_ = v___x_891_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_snd_889_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
v_a_882_ = v___x_952_;
goto v___jp_881_;
}
}
}
else
{
lean_object* v___x_955_; 
lean_dec(v___x_925_);
lean_dec_ref(v___x_899_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_918_);
v___x_955_ = v___x_891_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_snd_889_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
v_a_882_ = v___x_955_;
goto v___jp_881_;
}
}
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; 
lean_dec(v___y_903_);
lean_dec_ref(v___x_899_);
v___x_957_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6);
v___x_958_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v___x_957_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v___x_960_; 
lean_dec_ref_known(v___x_958_, 1);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_918_);
v___x_960_ = v___x_891_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_snd_889_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
v_a_882_ = v___x_960_;
goto v___jp_881_;
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref(v___x_918_);
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_a_874_);
v_a_962_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_958_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_958_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec(v_a_910_);
lean_dec(v_a_907_);
lean_dec_ref(v___x_905_);
lean_dec(v___y_903_);
lean_dec_ref(v___x_900_);
lean_dec_ref(v___x_899_);
lean_dec(v_a_898_);
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_a_874_);
v_a_970_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_911_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_911_);
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
lean_dec(v_a_907_);
lean_dec_ref(v___x_905_);
lean_dec(v___y_903_);
lean_dec_ref(v___x_900_);
lean_dec_ref(v___x_899_);
lean_dec(v_a_898_);
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_a_874_);
v_a_978_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_909_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_909_);
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
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec_ref(v___x_905_);
lean_dec(v___y_903_);
lean_dec_ref(v___x_900_);
lean_dec_ref(v___x_899_);
lean_dec(v_a_898_);
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_a_874_);
v_a_986_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_906_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_906_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
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
v___jp_994_:
{
lean_object* v___x_996_; 
lean_inc_ref(v___x_899_);
v___x_996_ = l_Lean_Meta_isClass_x3f(v___x_899_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 1);
if (lean_obj_tag(v_a_997_) == 0)
{
uint8_t v___x_998_; 
v___x_998_ = 0;
v___y_902_ = v___y_995_;
v___y_903_ = v_a_997_;
v___y_904_ = v___x_998_;
goto v___jp_901_;
}
else
{
uint8_t v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = l_Lean_LocalDecl_binderInfo(v_a_898_);
v___x_1000_ = l_Lean_BinderInfo_isExplicit(v___x_999_);
if (v___x_1000_ == 0)
{
v___y_902_ = v___y_995_;
v___y_903_ = v_a_997_;
v___y_904_ = v___x_886_;
goto v___jp_901_;
}
else
{
uint8_t v___x_1001_; 
v___x_1001_ = 0;
v___y_902_ = v___y_995_;
v___y_903_ = v_a_997_;
v___y_904_ = v___x_1001_;
goto v___jp_901_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec_ref(v___x_900_);
lean_dec_ref(v___x_899_);
lean_dec(v_a_898_);
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_fst_888_);
lean_dec(v_a_874_);
v_a_1002_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_996_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_996_);
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
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec_ref(v___f_895_);
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_fst_888_);
lean_dec(v_a_874_);
v_a_1013_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_897_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_897_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
v___jp_881_:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = lean_unsigned_to_nat(1u);
v___x_884_ = lean_nat_add(v_a_874_, v___x_883_);
lean_dec(v_a_874_);
v_a_874_ = v___x_884_;
v_b_875_ = v_a_882_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object* v_upperBound_1022_, lean_object* v_fvars_1023_, lean_object* v_a_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_1022_, v_fvars_1023_, v_a_1024_, v_b_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v_fvars_1023_);
lean_dec(v_upperBound_1022_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object* v___x_1034_, lean_object* v_fvars_1035_, lean_object* v_type_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1042_ = lean_array_get_size(v_fvars_1035_);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0));
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v___x_1034_);
v___x_1046_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v___x_1042_, v_fvars_1035_, v___x_1043_, v___x_1045_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1065_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1065_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1065_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_fst_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1063_; 
v_fst_1051_ = lean_ctor_get(v_a_1047_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_a_1047_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_a_1047_, 1);
lean_dec(v_unused_1064_);
v___x_1053_ = v_a_1047_;
v_isShared_1054_ = v_isSharedCheck_1063_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_fst_1051_);
lean_dec(v_a_1047_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1063_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1055_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_1035_, v_type_1036_);
v___x_1056_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_1051_, v___x_1055_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 1, v___x_1055_);
lean_ctor_set(v___x_1053_, 0, v___x_1056_);
v___x_1058_ = v___x_1053_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v___x_1055_);
v___x_1058_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1060_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v___x_1058_);
v___x_1060_ = v___x_1049_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
v_a_1066_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1046_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1046_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object* v___x_1074_, lean_object* v_fvars_1075_, lean_object* v_type_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(v___x_1074_, v_fvars_1075_, v_type_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec_ref(v_type_1076_);
lean_dec_ref(v_fvars_1075_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object* v_fn_1083_, lean_object* v_maxArgs_x3f_1084_, lean_object* v___f_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v___y_1092_; lean_object* v___x_1109_; 
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
lean_inc_ref(v___y_1086_);
v___x_1109_ = lean_infer_type(v_fn_1083_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v_a_1110_; lean_object* v___x_1111_; uint8_t v_transparency_1112_; uint8_t v___x_1113_; uint8_t v___x_1114_; uint8_t v___x_1115_; 
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref_known(v___x_1109_, 1);
v___x_1111_ = l_Lean_Meta_Context_config(v___y_1086_);
v_transparency_1112_ = lean_ctor_get_uint8(v___x_1111_, 9);
lean_dec_ref(v___x_1111_);
v___x_1113_ = 1;
v___x_1114_ = 0;
v___x_1115_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1112_, v___x_1113_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; 
v___x_1116_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1110_, v_maxArgs_x3f_1084_, v___f_1085_, v___x_1114_, v___x_1114_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
v___y_1092_ = v___x_1116_;
goto v___jp_1091_;
}
else
{
lean_object* v_keyedConfig_1117_; uint8_t v_trackZetaDelta_1118_; lean_object* v_zetaDeltaSet_1119_; lean_object* v_lctx_1120_; lean_object* v_localInstances_1121_; lean_object* v_defEqCtx_x3f_1122_; lean_object* v_synthPendingDepth_1123_; lean_object* v_customCanUnfoldPredicate_x3f_1124_; uint8_t v_univApprox_1125_; uint8_t v_inTypeClassResolution_1126_; uint8_t v_cacheInferType_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1136_; 
v_keyedConfig_1117_ = lean_ctor_get(v___y_1086_, 0);
v_trackZetaDelta_1118_ = lean_ctor_get_uint8(v___y_1086_, sizeof(void*)*7);
v_zetaDeltaSet_1119_ = lean_ctor_get(v___y_1086_, 1);
v_lctx_1120_ = lean_ctor_get(v___y_1086_, 2);
v_localInstances_1121_ = lean_ctor_get(v___y_1086_, 3);
v_defEqCtx_x3f_1122_ = lean_ctor_get(v___y_1086_, 4);
v_synthPendingDepth_1123_ = lean_ctor_get(v___y_1086_, 5);
v_customCanUnfoldPredicate_x3f_1124_ = lean_ctor_get(v___y_1086_, 6);
v_univApprox_1125_ = lean_ctor_get_uint8(v___y_1086_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1126_ = lean_ctor_get_uint8(v___y_1086_, sizeof(void*)*7 + 2);
v_cacheInferType_1127_ = lean_ctor_get_uint8(v___y_1086_, sizeof(void*)*7 + 3);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___y_1086_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1129_ = v___y_1086_;
v_isShared_1130_ = v_isSharedCheck_1136_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1124_);
lean_inc(v_synthPendingDepth_1123_);
lean_inc(v_defEqCtx_x3f_1122_);
lean_inc(v_localInstances_1121_);
lean_inc(v_lctx_1120_);
lean_inc(v_zetaDeltaSet_1119_);
lean_inc(v_keyedConfig_1117_);
lean_dec(v___y_1086_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1136_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1131_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1113_, v_keyedConfig_1117_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1131_);
v___x_1133_ = v___x_1129_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1131_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_zetaDeltaSet_1119_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_lctx_1120_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v_localInstances_1121_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_defEqCtx_x3f_1122_);
lean_ctor_set(v_reuseFailAlloc_1135_, 5, v_synthPendingDepth_1123_);
lean_ctor_set(v_reuseFailAlloc_1135_, 6, v_customCanUnfoldPredicate_x3f_1124_);
lean_ctor_set_uint8(v_reuseFailAlloc_1135_, sizeof(void*)*7, v_trackZetaDelta_1118_);
lean_ctor_set_uint8(v_reuseFailAlloc_1135_, sizeof(void*)*7 + 1, v_univApprox_1125_);
lean_ctor_set_uint8(v_reuseFailAlloc_1135_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1126_);
lean_ctor_set_uint8(v_reuseFailAlloc_1135_, sizeof(void*)*7 + 3, v_cacheInferType_1127_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1110_, v_maxArgs_x3f_1084_, v___f_1085_, v___x_1114_, v___x_1114_, v___x_1133_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___x_1133_);
v___y_1092_ = v___x_1134_;
goto v___jp_1091_;
}
}
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v___f_1085_);
lean_dec(v_maxArgs_x3f_1084_);
v_a_1137_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1109_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1109_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
v___jp_1091_:
{
if (lean_obj_tag(v___y_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
v_a_1093_ = lean_ctor_get(v___y_1092_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___y_1092_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___y_1092_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___y_1092_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
else
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
v_a_1101_ = lean_ctor_get(v___y_1092_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___y_1092_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___y_1092_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___y_1092_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object* v_fn_1145_, lean_object* v_maxArgs_x3f_1146_, lean_object* v___f_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1145_, v_maxArgs_x3f_1146_, v___f_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object* v_keys_1154_, lean_object* v_vals_1155_, lean_object* v_i_1156_, lean_object* v_k_1157_){
_start:
{
lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = lean_array_get_size(v_keys_1154_);
v___x_1159_ = lean_nat_dec_lt(v_i_1156_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
lean_dec(v_i_1156_);
v___x_1160_ = lean_box(0);
return v___x_1160_;
}
else
{
lean_object* v_k_x27_1161_; uint8_t v___x_1162_; 
v_k_x27_1161_ = lean_array_fget_borrowed(v_keys_1154_, v_i_1156_);
v___x_1162_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_k_1157_, v_k_x27_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = lean_nat_add(v_i_1156_, v___x_1163_);
lean_dec(v_i_1156_);
v_i_1156_ = v___x_1164_;
goto _start;
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = lean_array_fget_borrowed(v_vals_1155_, v_i_1156_);
lean_dec(v_i_1156_);
lean_inc(v___x_1166_);
v___x_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
return v___x_1167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object* v_keys_1168_, lean_object* v_vals_1169_, lean_object* v_i_1170_, lean_object* v_k_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_1168_, v_vals_1169_, v_i_1170_, v_k_1171_);
lean_dec_ref(v_k_1171_);
lean_dec_ref(v_vals_1169_);
lean_dec_ref(v_keys_1168_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object* v_x_1173_, size_t v_x_1174_, lean_object* v_x_1175_){
_start:
{
if (lean_obj_tag(v_x_1173_) == 0)
{
lean_object* v_es_1176_; lean_object* v___x_1177_; size_t v___x_1178_; size_t v___x_1179_; lean_object* v_j_1180_; lean_object* v___x_1181_; 
v_es_1176_ = lean_ctor_get(v_x_1173_, 0);
v___x_1177_ = lean_box(2);
v___x_1178_ = ((size_t)31ULL);
v___x_1179_ = lean_usize_land(v_x_1174_, v___x_1178_);
v_j_1180_ = lean_usize_to_nat(v___x_1179_);
v___x_1181_ = lean_array_get_borrowed(v___x_1177_, v_es_1176_, v_j_1180_);
lean_dec(v_j_1180_);
switch(lean_obj_tag(v___x_1181_))
{
case 0:
{
lean_object* v_key_1182_; lean_object* v_val_1183_; uint8_t v___x_1184_; 
v_key_1182_ = lean_ctor_get(v___x_1181_, 0);
v_val_1183_ = lean_ctor_get(v___x_1181_, 1);
v___x_1184_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1175_, v_key_1182_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_box(0);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; 
lean_inc(v_val_1183_);
v___x_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1186_, 0, v_val_1183_);
return v___x_1186_;
}
}
case 1:
{
lean_object* v_node_1187_; size_t v___x_1188_; size_t v___x_1189_; 
v_node_1187_ = lean_ctor_get(v___x_1181_, 0);
v___x_1188_ = ((size_t)5ULL);
v___x_1189_ = lean_usize_shift_right(v_x_1174_, v___x_1188_);
v_x_1173_ = v_node_1187_;
v_x_1174_ = v___x_1189_;
goto _start;
}
default: 
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_box(0);
return v___x_1191_;
}
}
}
else
{
lean_object* v_ks_1192_; lean_object* v_vs_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v_ks_1192_ = lean_ctor_get(v_x_1173_, 0);
v_vs_1193_ = lean_ctor_get(v_x_1173_, 1);
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_ks_1192_, v_vs_1193_, v___x_1194_, v_x_1175_);
return v___x_1195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object* v_x_1196_, lean_object* v_x_1197_, lean_object* v_x_1198_){
_start:
{
size_t v_x_12482__boxed_1199_; lean_object* v_res_1200_; 
v_x_12482__boxed_1199_ = lean_unbox_usize(v_x_1197_);
lean_dec(v_x_1197_);
v_res_1200_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1196_, v_x_12482__boxed_1199_, v_x_1198_);
lean_dec_ref(v_x_1198_);
lean_dec_ref(v_x_1196_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object* v_x_1201_, lean_object* v_x_1202_){
_start:
{
uint64_t v___x_1203_; size_t v___x_1204_; lean_object* v___x_1205_; 
v___x_1203_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1202_);
v___x_1204_ = lean_uint64_to_usize(v___x_1203_);
v___x_1205_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1201_, v___x_1204_, v_x_1202_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object* v_x_1206_, lean_object* v_x_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_1206_, v_x_1207_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_x_1206_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(lean_object* v_x_1209_, lean_object* v_x_1210_, lean_object* v_x_1211_, lean_object* v_x_1212_){
_start:
{
lean_object* v_ks_1213_; lean_object* v_vs_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1238_; 
v_ks_1213_ = lean_ctor_get(v_x_1209_, 0);
v_vs_1214_ = lean_ctor_get(v_x_1209_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_x_1209_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1216_ = v_x_1209_;
v_isShared_1217_ = v_isSharedCheck_1238_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_vs_1214_);
lean_inc(v_ks_1213_);
lean_dec(v_x_1209_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1238_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1218_ = lean_array_get_size(v_ks_1213_);
v___x_1219_ = lean_nat_dec_lt(v_x_1210_, v___x_1218_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1223_; 
lean_dec(v_x_1210_);
v___x_1220_ = lean_array_push(v_ks_1213_, v_x_1211_);
v___x_1221_ = lean_array_push(v_vs_1214_, v_x_1212_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 1, v___x_1221_);
lean_ctor_set(v___x_1216_, 0, v___x_1220_);
v___x_1223_ = v___x_1216_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
else
{
lean_object* v_k_x27_1225_; uint8_t v___x_1226_; 
v_k_x27_1225_ = lean_array_fget_borrowed(v_ks_1213_, v_x_1210_);
v___x_1226_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1211_, v_k_x27_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1228_; 
if (v_isShared_1217_ == 0)
{
v___x_1228_ = v___x_1216_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_ks_1213_);
lean_ctor_set(v_reuseFailAlloc_1232_, 1, v_vs_1214_);
v___x_1228_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = lean_unsigned_to_nat(1u);
v___x_1230_ = lean_nat_add(v_x_1210_, v___x_1229_);
lean_dec(v_x_1210_);
v_x_1209_ = v___x_1228_;
v_x_1210_ = v___x_1230_;
goto _start;
}
}
else
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1233_ = lean_array_fset(v_ks_1213_, v_x_1210_, v_x_1211_);
v___x_1234_ = lean_array_fset(v_vs_1214_, v_x_1210_, v_x_1212_);
lean_dec(v_x_1210_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 1, v___x_1234_);
lean_ctor_set(v___x_1216_, 0, v___x_1233_);
v___x_1236_ = v___x_1216_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object* v_n_1239_, lean_object* v_k_1240_, lean_object* v_v_1241_){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = lean_unsigned_to_nat(0u);
v___x_1243_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(v_n_1239_, v___x_1242_, v_k_1240_, v_v_1241_);
return v___x_1243_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object* v_x_1245_, size_t v_x_1246_, size_t v_x_1247_, lean_object* v_x_1248_, lean_object* v_x_1249_){
_start:
{
if (lean_obj_tag(v_x_1245_) == 0)
{
lean_object* v_es_1250_; size_t v___x_1251_; size_t v___x_1252_; lean_object* v_j_1253_; lean_object* v___x_1254_; uint8_t v___x_1255_; 
v_es_1250_ = lean_ctor_get(v_x_1245_, 0);
v___x_1251_ = ((size_t)31ULL);
v___x_1252_ = lean_usize_land(v_x_1246_, v___x_1251_);
v_j_1253_ = lean_usize_to_nat(v___x_1252_);
v___x_1254_ = lean_array_get_size(v_es_1250_);
v___x_1255_ = lean_nat_dec_lt(v_j_1253_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_dec(v_j_1253_);
lean_dec(v_x_1249_);
lean_dec_ref(v_x_1248_);
return v_x_1245_;
}
else
{
lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1294_; 
lean_inc_ref(v_es_1250_);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_x_1245_);
if (v_isSharedCheck_1294_ == 0)
{
lean_object* v_unused_1295_; 
v_unused_1295_ = lean_ctor_get(v_x_1245_, 0);
lean_dec(v_unused_1295_);
v___x_1257_ = v_x_1245_;
v_isShared_1258_ = v_isSharedCheck_1294_;
goto v_resetjp_1256_;
}
else
{
lean_dec(v_x_1245_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1294_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v_v_1259_; lean_object* v___x_1260_; lean_object* v_xs_x27_1261_; lean_object* v___y_1263_; 
v_v_1259_ = lean_array_fget(v_es_1250_, v_j_1253_);
v___x_1260_ = lean_box(0);
v_xs_x27_1261_ = lean_array_fset(v_es_1250_, v_j_1253_, v___x_1260_);
switch(lean_obj_tag(v_v_1259_))
{
case 0:
{
lean_object* v_key_1268_; lean_object* v_val_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1279_; 
v_key_1268_ = lean_ctor_get(v_v_1259_, 0);
v_val_1269_ = lean_ctor_get(v_v_1259_, 1);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_v_1259_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1271_ = v_v_1259_;
v_isShared_1272_ = v_isSharedCheck_1279_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_val_1269_);
lean_inc(v_key_1268_);
lean_dec(v_v_1259_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1279_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
uint8_t v___x_1273_; 
v___x_1273_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1248_, v_key_1268_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_del_object(v___x_1271_);
v___x_1274_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1268_, v_val_1269_, v_x_1248_, v_x_1249_);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
v___y_1263_ = v___x_1275_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1277_; 
lean_dec(v_val_1269_);
lean_dec(v_key_1268_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 1, v_x_1249_);
lean_ctor_set(v___x_1271_, 0, v_x_1248_);
v___x_1277_ = v___x_1271_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_x_1248_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v_x_1249_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
v___y_1263_ = v___x_1277_;
goto v___jp_1262_;
}
}
}
}
case 1:
{
lean_object* v_node_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1292_; 
v_node_1280_ = lean_ctor_get(v_v_1259_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_v_1259_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1282_ = v_v_1259_;
v_isShared_1283_ = v_isSharedCheck_1292_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_node_1280_);
lean_dec(v_v_1259_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1292_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
size_t v___x_1284_; size_t v___x_1285_; size_t v___x_1286_; size_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___x_1284_ = ((size_t)5ULL);
v___x_1285_ = lean_usize_shift_right(v_x_1246_, v___x_1284_);
v___x_1286_ = ((size_t)1ULL);
v___x_1287_ = lean_usize_add(v_x_1247_, v___x_1286_);
v___x_1288_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_node_1280_, v___x_1285_, v___x_1287_, v_x_1248_, v_x_1249_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1288_);
v___x_1290_ = v___x_1282_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
v___y_1263_ = v___x_1290_;
goto v___jp_1262_;
}
}
}
default: 
{
lean_object* v___x_1293_; 
v___x_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1293_, 0, v_x_1248_);
lean_ctor_set(v___x_1293_, 1, v_x_1249_);
v___y_1263_ = v___x_1293_;
goto v___jp_1262_;
}
}
v___jp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = lean_array_fset(v_xs_x27_1261_, v_j_1253_, v___y_1263_);
lean_dec(v_j_1253_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v___x_1264_);
v___x_1266_ = v___x_1257_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
else
{
lean_object* v_ks_1296_; lean_object* v_vs_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1315_; 
v_ks_1296_ = lean_ctor_get(v_x_1245_, 0);
v_vs_1297_ = lean_ctor_get(v_x_1245_, 1);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_x_1245_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1299_ = v_x_1245_;
v_isShared_1300_ = v_isSharedCheck_1315_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_vs_1297_);
lean_inc(v_ks_1296_);
lean_dec(v_x_1245_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1315_;
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
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_ks_1296_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v_vs_1297_);
v___x_1302_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v_newNode_1303_; size_t v___x_1304_; uint8_t v___x_1305_; 
v_newNode_1303_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v___x_1302_, v_x_1248_, v_x_1249_);
v___x_1304_ = ((size_t)7ULL);
v___x_1305_ = lean_usize_dec_le(v___x_1304_, v_x_1247_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v___x_1306_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1303_);
v___x_1307_ = lean_unsigned_to_nat(4u);
v___x_1308_ = lean_nat_dec_lt(v___x_1306_, v___x_1307_);
lean_dec(v___x_1306_);
if (v___x_1308_ == 0)
{
lean_object* v_ks_1309_; lean_object* v_vs_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_ks_1309_ = lean_ctor_get(v_newNode_1303_, 0);
lean_inc_ref(v_ks_1309_);
v_vs_1310_ = lean_ctor_get(v_newNode_1303_, 1);
lean_inc_ref(v_vs_1310_);
lean_dec_ref(v_newNode_1303_);
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1313_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_x_1247_, v_ks_1309_, v_vs_1310_, v___x_1311_, v___x_1312_);
lean_dec_ref(v_vs_1310_);
lean_dec_ref(v_ks_1309_);
return v___x_1313_;
}
else
{
return v_newNode_1303_;
}
}
else
{
return v_newNode_1303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t v_depth_1316_, lean_object* v_keys_1317_, lean_object* v_vals_1318_, lean_object* v_i_1319_, lean_object* v_entries_1320_){
_start:
{
lean_object* v___x_1321_; uint8_t v___x_1322_; 
v___x_1321_ = lean_array_get_size(v_keys_1317_);
v___x_1322_ = lean_nat_dec_lt(v_i_1319_, v___x_1321_);
if (v___x_1322_ == 0)
{
lean_dec(v_i_1319_);
return v_entries_1320_;
}
else
{
lean_object* v_k_1323_; lean_object* v_v_1324_; uint64_t v___x_1325_; size_t v_h_1326_; size_t v___x_1327_; lean_object* v___x_1328_; size_t v___x_1329_; size_t v___x_1330_; size_t v___x_1331_; size_t v_h_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v_k_1323_ = lean_array_fget_borrowed(v_keys_1317_, v_i_1319_);
v_v_1324_ = lean_array_fget_borrowed(v_vals_1318_, v_i_1319_);
v___x_1325_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_k_1323_);
v_h_1326_ = lean_uint64_to_usize(v___x_1325_);
v___x_1327_ = ((size_t)5ULL);
v___x_1328_ = lean_unsigned_to_nat(1u);
v___x_1329_ = ((size_t)1ULL);
v___x_1330_ = lean_usize_sub(v_depth_1316_, v___x_1329_);
v___x_1331_ = lean_usize_mul(v___x_1327_, v___x_1330_);
v_h_1332_ = lean_usize_shift_right(v_h_1326_, v___x_1331_);
v___x_1333_ = lean_nat_add(v_i_1319_, v___x_1328_);
lean_dec(v_i_1319_);
lean_inc(v_v_1324_);
lean_inc(v_k_1323_);
v___x_1334_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_entries_1320_, v_h_1332_, v_depth_1316_, v_k_1323_, v_v_1324_);
v_i_1319_ = v___x_1333_;
v_entries_1320_ = v___x_1334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object* v_depth_1336_, lean_object* v_keys_1337_, lean_object* v_vals_1338_, lean_object* v_i_1339_, lean_object* v_entries_1340_){
_start:
{
size_t v_depth_boxed_1341_; lean_object* v_res_1342_; 
v_depth_boxed_1341_ = lean_unbox_usize(v_depth_1336_);
lean_dec(v_depth_1336_);
v_res_1342_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_boxed_1341_, v_keys_1337_, v_vals_1338_, v_i_1339_, v_entries_1340_);
lean_dec_ref(v_vals_1338_);
lean_dec_ref(v_keys_1337_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object* v_x_1343_, lean_object* v_x_1344_, lean_object* v_x_1345_, lean_object* v_x_1346_, lean_object* v_x_1347_){
_start:
{
size_t v_x_12617__boxed_1348_; size_t v_x_12618__boxed_1349_; lean_object* v_res_1350_; 
v_x_12617__boxed_1348_ = lean_unbox_usize(v_x_1344_);
lean_dec(v_x_1344_);
v_x_12618__boxed_1349_ = lean_unbox_usize(v_x_1345_);
lean_dec(v_x_1345_);
v_res_1350_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1343_, v_x_12617__boxed_1348_, v_x_12618__boxed_1349_, v_x_1346_, v_x_1347_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object* v_x_1351_, lean_object* v_x_1352_, lean_object* v_x_1353_){
_start:
{
uint64_t v___x_1354_; size_t v___x_1355_; size_t v___x_1356_; lean_object* v___x_1357_; 
v___x_1354_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1352_);
v___x_1355_ = lean_uint64_to_usize(v___x_1354_);
v___x_1356_ = ((size_t)1ULL);
v___x_1357_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1351_, v___x_1355_, v___x_1356_, v_x_1352_, v_x_1353_);
return v___x_1357_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1358_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0);
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object* v_realizeMapRef_1361_, lean_object* v_env_1362_, lean_object* v_env_1363_, lean_object* v_forConst_1364_, lean_object* v_ctx_1365_, lean_object* v_realize_1366_, lean_object* v_opts_1367_, lean_object* v_key_1368_, lean_object* v_inst_1369_, lean_object* v_____r_1370_){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v_fst_1375_; lean_object* v_snd_1376_; lean_object* v___y_1426_; lean_object* v___x_1431_; 
v___x_1372_ = lean_io_promise_new();
v___x_1373_ = lean_st_ref_take(v_realizeMapRef_1361_);
v___x_1431_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1373_, v_inst_1369_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1);
v___y_1426_ = v___x_1432_;
goto v___jp_1425_;
}
else
{
lean_object* v_val_1433_; 
v_val_1433_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_val_1433_);
lean_dec_ref_known(v___x_1431_, 1);
v___y_1426_ = v_val_1433_;
goto v___jp_1425_;
}
v___jp_1374_:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_st_ref_put(v_realizeMapRef_1361_, v_snd_1376_);
if (lean_obj_tag(v_fst_1375_) == 1)
{
lean_object* v_val_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1386_; 
lean_dec(v___x_1372_);
lean_dec_ref(v_opts_1367_);
lean_dec_ref(v_realize_1366_);
lean_dec_ref(v_ctx_1365_);
lean_dec(v_forConst_1364_);
lean_dec_ref(v_env_1363_);
lean_dec(v_env_1362_);
v_val_1378_ = lean_ctor_get(v_fst_1375_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_fst_1375_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1380_ = v_fst_1375_;
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_val_1378_);
lean_dec(v_fst_1375_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
v___x_1382_ = lean_task_get_own(v_val_1378_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set_tag(v___x_1380_, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1382_);
v___x_1384_ = v___x_1380_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
else
{
lean_object* v_base_1387_; lean_object* v_serverBaseExts_1388_; lean_object* v_checked_1389_; lean_object* v_asyncConstsMap_1390_; lean_object* v_asyncCtx_x3f_1391_; lean_object* v_localRealizationCtxMap_1392_; lean_object* v_allRealizations_1393_; uint8_t v_isExporting_1394_; uint8_t v_isRecordingDeps_1395_; lean_object* v_synthCacheRaw_x3f_1396_; lean_object* v_declChangeLog_1397_; lean_object* v_recordingConstGen_1398_; lean_object* v_constAddedGens_1399_; lean_object* v_constGen_1400_; lean_object* v_importRealizationCtx_x3f_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1412_; 
lean_dec(v_fst_1375_);
v_base_1387_ = lean_ctor_get(v_env_1362_, 0);
lean_inc_ref(v_base_1387_);
v_serverBaseExts_1388_ = lean_ctor_get(v_env_1362_, 1);
lean_inc_ref(v_serverBaseExts_1388_);
v_checked_1389_ = lean_ctor_get(v_env_1362_, 2);
lean_inc_ref(v_checked_1389_);
v_asyncConstsMap_1390_ = lean_ctor_get(v_env_1362_, 3);
lean_inc_ref(v_asyncConstsMap_1390_);
v_asyncCtx_x3f_1391_ = lean_ctor_get(v_env_1362_, 4);
lean_inc(v_asyncCtx_x3f_1391_);
v_localRealizationCtxMap_1392_ = lean_ctor_get(v_env_1362_, 6);
lean_inc(v_localRealizationCtxMap_1392_);
v_allRealizations_1393_ = lean_ctor_get(v_env_1362_, 7);
lean_inc_ref(v_allRealizations_1393_);
v_isExporting_1394_ = lean_ctor_get_uint8(v_env_1362_, sizeof(void*)*13);
v_isRecordingDeps_1395_ = lean_ctor_get_uint8(v_env_1362_, sizeof(void*)*13 + 1);
v_synthCacheRaw_x3f_1396_ = lean_ctor_get(v_env_1362_, 8);
lean_inc(v_synthCacheRaw_x3f_1396_);
v_declChangeLog_1397_ = lean_ctor_get(v_env_1362_, 9);
lean_inc_ref(v_declChangeLog_1397_);
v_recordingConstGen_1398_ = lean_ctor_get(v_env_1362_, 10);
lean_inc(v_recordingConstGen_1398_);
v_constAddedGens_1399_ = lean_ctor_get(v_env_1362_, 11);
lean_inc_ref(v_constAddedGens_1399_);
v_constGen_1400_ = lean_ctor_get(v_env_1362_, 12);
lean_inc(v_constGen_1400_);
lean_dec(v_env_1362_);
v_importRealizationCtx_x3f_1401_ = lean_ctor_get(v_env_1363_, 5);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_env_1363_);
if (v_isSharedCheck_1412_ == 0)
{
lean_object* v_unused_1413_; lean_object* v_unused_1414_; lean_object* v_unused_1415_; lean_object* v_unused_1416_; lean_object* v_unused_1417_; lean_object* v_unused_1418_; lean_object* v_unused_1419_; lean_object* v_unused_1420_; lean_object* v_unused_1421_; lean_object* v_unused_1422_; lean_object* v_unused_1423_; lean_object* v_unused_1424_; 
v_unused_1413_ = lean_ctor_get(v_env_1363_, 12);
lean_dec(v_unused_1413_);
v_unused_1414_ = lean_ctor_get(v_env_1363_, 11);
lean_dec(v_unused_1414_);
v_unused_1415_ = lean_ctor_get(v_env_1363_, 10);
lean_dec(v_unused_1415_);
v_unused_1416_ = lean_ctor_get(v_env_1363_, 9);
lean_dec(v_unused_1416_);
v_unused_1417_ = lean_ctor_get(v_env_1363_, 8);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_env_1363_, 7);
lean_dec(v_unused_1418_);
v_unused_1419_ = lean_ctor_get(v_env_1363_, 6);
lean_dec(v_unused_1419_);
v_unused_1420_ = lean_ctor_get(v_env_1363_, 4);
lean_dec(v_unused_1420_);
v_unused_1421_ = lean_ctor_get(v_env_1363_, 3);
lean_dec(v_unused_1421_);
v_unused_1422_ = lean_ctor_get(v_env_1363_, 2);
lean_dec(v_unused_1422_);
v_unused_1423_ = lean_ctor_get(v_env_1363_, 1);
lean_dec(v_unused_1423_);
v_unused_1424_ = lean_ctor_get(v_env_1363_, 0);
lean_dec(v_unused_1424_);
v___x_1403_ = v_env_1363_;
v_isShared_1404_ = v_isSharedCheck_1412_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_importRealizationCtx_x3f_1401_);
lean_dec(v_env_1363_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1412_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1405_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_forConst_1364_, v_ctx_1365_, v_localRealizationCtxMap_1392_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 12, v_constGen_1400_);
lean_ctor_set(v___x_1403_, 11, v_constAddedGens_1399_);
lean_ctor_set(v___x_1403_, 10, v_recordingConstGen_1398_);
lean_ctor_set(v___x_1403_, 9, v_declChangeLog_1397_);
lean_ctor_set(v___x_1403_, 8, v_synthCacheRaw_x3f_1396_);
lean_ctor_set(v___x_1403_, 7, v_allRealizations_1393_);
lean_ctor_set(v___x_1403_, 6, v___x_1405_);
lean_ctor_set(v___x_1403_, 4, v_asyncCtx_x3f_1391_);
lean_ctor_set(v___x_1403_, 3, v_asyncConstsMap_1390_);
lean_ctor_set(v___x_1403_, 2, v_checked_1389_);
lean_ctor_set(v___x_1403_, 1, v_serverBaseExts_1388_);
lean_ctor_set(v___x_1403_, 0, v_base_1387_);
v___x_1407_ = v___x_1403_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_base_1387_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_serverBaseExts_1388_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_checked_1389_);
lean_ctor_set(v_reuseFailAlloc_1411_, 3, v_asyncConstsMap_1390_);
lean_ctor_set(v_reuseFailAlloc_1411_, 4, v_asyncCtx_x3f_1391_);
lean_ctor_set(v_reuseFailAlloc_1411_, 5, v_importRealizationCtx_x3f_1401_);
lean_ctor_set(v_reuseFailAlloc_1411_, 6, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1411_, 7, v_allRealizations_1393_);
lean_ctor_set(v_reuseFailAlloc_1411_, 8, v_synthCacheRaw_x3f_1396_);
lean_ctor_set(v_reuseFailAlloc_1411_, 9, v_declChangeLog_1397_);
lean_ctor_set(v_reuseFailAlloc_1411_, 10, v_recordingConstGen_1398_);
lean_ctor_set(v_reuseFailAlloc_1411_, 11, v_constAddedGens_1399_);
lean_ctor_set(v_reuseFailAlloc_1411_, 12, v_constGen_1400_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
lean_ctor_set_uint8(v___x_1407_, sizeof(void*)*13, v_isExporting_1394_);
lean_ctor_set_uint8(v___x_1407_, sizeof(void*)*13 + 1, v_isRecordingDeps_1395_);
v___x_1408_ = lean_apply_3(v_realize_1366_, v___x_1407_, v_opts_1367_, lean_box(0));
lean_inc(v___x_1408_);
v___x_1409_ = lean_io_promise_resolve(v___x_1408_, v___x_1372_);
lean_dec(v___x_1372_);
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1408_);
return v___x_1410_;
}
}
}
}
v___jp_1425_:
{
lean_object* v___x_1427_; 
v___x_1427_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v___y_1426_, v_key_1368_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = l_IO_Promise_result_x21___redArg(v___x_1372_);
v___x_1429_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v___y_1426_, v_key_1368_, v___x_1428_);
v___x_1430_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_inst_1369_, v___x_1429_, v___x_1373_);
v_fst_1375_ = v___x_1427_;
v_snd_1376_ = v___x_1430_;
goto v___jp_1374_;
}
else
{
lean_dec_ref(v___y_1426_);
lean_dec(v_inst_1369_);
lean_dec_ref(v_key_1368_);
v_fst_1375_ = v___x_1427_;
v_snd_1376_ = v___x_1373_;
goto v___jp_1374_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object* v_realizeMapRef_1434_, lean_object* v_env_1435_, lean_object* v_env_1436_, lean_object* v_forConst_1437_, lean_object* v_ctx_1438_, lean_object* v_realize_1439_, lean_object* v_opts_1440_, lean_object* v_key_1441_, lean_object* v_inst_1442_, lean_object* v_____r_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1434_, v_env_1435_, v_env_1436_, v_forConst_1437_, v_ctx_1438_, v_realize_1439_, v_opts_1440_, v_key_1441_, v_inst_1442_, v_____r_1443_);
lean_dec(v_realizeMapRef_1434_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object* v_inst_1452_, lean_object* v_env_1453_, lean_object* v_forConst_1454_, lean_object* v_key_1455_, lean_object* v_realize_1456_){
_start:
{
lean_object* v___x_1458_; lean_object* v_a_1460_; lean_object* v___y_1464_; lean_object* v_ctx_1467_; uint8_t v___x_1481_; 
v___x_1458_ = lean_io_get_num_heartbeats();
v___x_1481_ = l_Lean_Environment_isImportedConst(v_env_1453_, v_forConst_1454_);
if (v___x_1481_ == 0)
{
lean_object* v_localRealizationCtxMap_1482_; lean_object* v___x_1483_; 
v_localRealizationCtxMap_1482_ = lean_ctor_get(v_env_1453_, 6);
v___x_1483_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_localRealizationCtxMap_1482_, v_forConst_1454_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v___x_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_dec(v___x_1458_);
lean_dec_ref(v_realize_1456_);
lean_dec_ref(v_key_1455_);
lean_dec_ref(v_env_1453_);
v___x_1484_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0));
v___x_1485_ = 1;
v___x_1486_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_1452_, v___x_1485_);
v___x_1487_ = lean_string_append(v___x_1484_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_forConst_1454_, v___x_1485_);
v___x_1491_ = lean_string_append(v___x_1489_, v___x_1490_);
lean_dec_ref(v___x_1490_);
v___x_1492_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2));
v___x_1493_ = lean_string_append(v___x_1491_, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
v___x_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1494_);
return v___x_1495_;
}
else
{
lean_object* v_val_1496_; 
v_val_1496_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_val_1496_);
lean_dec_ref_known(v___x_1483_, 1);
v_ctx_1467_ = v_val_1496_;
goto v___jp_1466_;
}
}
else
{
lean_object* v_importRealizationCtx_x3f_1497_; 
v_importRealizationCtx_x3f_1497_ = lean_ctor_get(v_env_1453_, 5);
if (lean_obj_tag(v_importRealizationCtx_x3f_1497_) == 0)
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
lean_dec(v___x_1458_);
lean_dec_ref(v_realize_1456_);
lean_dec_ref(v_key_1455_);
lean_dec(v_forConst_1454_);
lean_dec_ref(v_env_1453_);
lean_dec(v_inst_1452_);
v___x_1498_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4));
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
else
{
lean_object* v_val_1500_; 
v_val_1500_ = lean_ctor_get(v_importRealizationCtx_x3f_1497_, 0);
lean_inc(v_val_1500_);
v_ctx_1467_ = v_val_1500_;
goto v___jp_1466_;
}
}
v___jp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = lean_io_set_heartbeats(v___x_1458_);
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v_a_1460_);
return v___x_1462_;
}
v___jp_1463_:
{
lean_object* v_a_1465_; 
v_a_1465_ = lean_ctor_get(v___y_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref(v___y_1464_);
v_a_1460_ = v_a_1465_;
goto v___jp_1459_;
}
v___jp_1466_:
{
lean_object* v_env_1468_; lean_object* v_opts_1469_; lean_object* v_realizeMapRef_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v_env_1468_ = lean_ctor_get(v_ctx_1467_, 0);
lean_inc(v_env_1468_);
v_opts_1469_ = lean_ctor_get(v_ctx_1467_, 1);
lean_inc_ref(v_opts_1469_);
v_realizeMapRef_1470_ = lean_ctor_get(v_ctx_1467_, 2);
lean_inc(v_realizeMapRef_1470_);
v___x_1471_ = lean_st_ref_get(v_realizeMapRef_1470_);
v___x_1472_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1471_, v_inst_1452_);
lean_dec(v___x_1471_);
if (lean_obj_tag(v___x_1472_) == 1)
{
lean_object* v_val_1473_; lean_object* v___x_1474_; 
v_val_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_val_1473_);
lean_dec_ref_known(v___x_1472_, 1);
v___x_1474_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_val_1473_, v_key_1455_);
lean_dec(v_val_1473_);
if (lean_obj_tag(v___x_1474_) == 1)
{
lean_object* v_val_1475_; lean_object* v___x_1476_; 
lean_dec(v_realizeMapRef_1470_);
lean_dec_ref(v_opts_1469_);
lean_dec(v_env_1468_);
lean_dec_ref(v_ctx_1467_);
lean_dec_ref(v_realize_1456_);
lean_dec_ref(v_key_1455_);
lean_dec(v_forConst_1454_);
lean_dec_ref(v_env_1453_);
lean_dec(v_inst_1452_);
v_val_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v___x_1474_, 1);
v___x_1476_ = lean_task_get_own(v_val_1475_);
v_a_1460_ = v___x_1476_;
goto v___jp_1459_;
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v___x_1478_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1470_, v_env_1468_, v_env_1453_, v_forConst_1454_, v_ctx_1467_, v_realize_1456_, v_opts_1469_, v_key_1455_, v_inst_1452_, v___x_1477_);
lean_dec(v_realizeMapRef_1470_);
v___y_1464_ = v___x_1478_;
goto v___jp_1463_;
}
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
lean_dec(v___x_1472_);
v___x_1479_ = lean_box(0);
v___x_1480_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1470_, v_env_1468_, v_env_1453_, v_forConst_1454_, v_ctx_1467_, v_realize_1456_, v_opts_1469_, v_key_1455_, v_inst_1452_, v___x_1479_);
lean_dec(v_realizeMapRef_1470_);
v___y_1464_ = v___x_1480_;
goto v___jp_1463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object* v_inst_1501_, lean_object* v_env_1502_, lean_object* v_forConst_1503_, lean_object* v_key_1504_, lean_object* v_realize_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1501_, v_env_1502_, v_forConst_1503_, v_key_1504_, v_realize_1505_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object* v_msg_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___f_1514_; lean_object* v___x_10734__overap_1515_; lean_object* v___x_1516_; 
v___f_1514_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_10734__overap_1515_ = lean_panic_fn_borrowed(v___f_1514_, v_msg_1508_);
lean_inc(v___y_1512_);
lean_inc_ref(v___y_1511_);
lean_inc(v___y_1510_);
lean_inc_ref(v___y_1509_);
v___x_1516_ = lean_apply_5(v___x_10734__overap_1515_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, lean_box(0));
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object* v_msg_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object* v_realize_1524_, lean_object* v_inst_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v___x_1531_; 
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
lean_inc(v___y_1527_);
v___x_1531_ = lean_apply_5(v_realize_1524_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, lean_box(0));
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1540_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1540_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1540_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v_inst_1525_);
lean_ctor_set(v___x_1536_, 1, v_a_1532_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1536_);
v___x_1538_ = v___x_1534_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
lean_dec(v_inst_1525_);
v_a_1541_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1531_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1531_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object* v_realize_1549_, lean_object* v_inst_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(v_realize_1549_, v_inst_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
return v_res_1556_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = l_Lean_Options_empty;
v___x_1558_ = l_Lean_Core_getMaxHeartbeats(v___x_1557_);
return v___x_1558_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1559_ = lean_box(0);
v___x_1560_ = lean_unsigned_to_nat(16u);
v___x_1561_ = lean_mk_array(v___x_1560_, v___x_1559_);
return v___x_1561_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1562_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1);
v___x_1563_ = lean_unsigned_to_nat(0u);
v___x_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
lean_ctor_set(v___x_1564_, 1, v___x_1562_);
return v___x_1564_;
}
}
static uint16_t _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_1565_; uint16_t v___x_1566_; 
v___x_1565_ = l_Lean_Options_empty;
v___x_1566_ = l_Lean_OptionFlags_ofOptions(v___x_1565_);
return v___x_1566_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1569_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5));
v___x_1570_ = lean_unsigned_to_nat(36u);
v___x_1571_ = lean_unsigned_to_nat(2857u);
v___x_1572_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5));
v___x_1573_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1574_ = l_mkPanicMessageWithDecl(v___x_1573_, v___x_1572_, v___x_1571_, v___x_1570_, v___x_1569_);
return v___x_1574_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1575_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5));
v___x_1576_ = lean_unsigned_to_nat(48u);
v___x_1577_ = lean_unsigned_to_nat(2848u);
v___x_1578_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5));
v___x_1579_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1580_ = l_mkPanicMessageWithDecl(v___x_1579_, v___x_1578_, v___x_1577_, v___x_1576_, v___x_1575_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object* v_inst_1581_, lean_object* v_inst_1582_, lean_object* v_forConst_1583_, lean_object* v_key_1584_, lean_object* v_realize_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v___f_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v_env_1594_; uint8_t v___x_1595_; 
lean_inc(v_inst_1582_);
lean_inc_ref(v_realize_1585_);
v___f_1591_ = lean_alloc_closure((void*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1591_, 0, v_realize_1585_);
lean_closure_set(v___f_1591_, 1, v_inst_1582_);
v___x_1592_ = l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
v___x_1593_ = lean_st_ref_get(v_a_1589_);
v_env_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc_ref(v_env_1594_);
lean_dec(v___x_1593_);
v___x_1595_ = l_Lean_Environment_areRealizationsEnabledForConst(v_env_1594_, v_forConst_1583_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; 
lean_dec_ref(v_env_1594_);
lean_dec_ref(v___f_1591_);
lean_dec_ref(v_key_1584_);
lean_dec(v_forConst_1583_);
lean_dec(v_inst_1582_);
lean_dec(v_inst_1581_);
lean_inc(v_a_1589_);
lean_inc_ref(v_a_1588_);
lean_inc(v_a_1587_);
lean_inc_ref(v_a_1586_);
v___x_1596_ = lean_apply_5(v_realize_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_, lean_box(0));
return v___x_1596_;
}
else
{
uint8_t v___x_1597_; lean_object* v___x_1598_; lean_object* v_toCold_1599_; lean_object* v_ref_1600_; lean_object* v_fileName_1601_; lean_object* v_fileMap_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; uint16_t v___x_1614_; uint8_t v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_dec_ref(v_realize_1585_);
v___x_1597_ = 0;
v___x_1598_ = lean_io_get_num_heartbeats();
v_toCold_1599_ = lean_ctor_get(v_a_1588_, 0);
v_ref_1600_ = lean_ctor_get(v_a_1588_, 2);
v_fileName_1601_ = lean_ctor_get(v_toCold_1599_, 0);
v_fileMap_1602_ = lean_ctor_get(v_toCold_1599_, 1);
v___x_1603_ = l_Lean_Options_empty;
v___x_1604_ = lean_unsigned_to_nat(1000u);
v___x_1605_ = lean_box(0);
v___x_1606_ = lean_box(0);
v___x_1607_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0);
v___x_1608_ = l_Lean_firstFrontendMacroScope;
v___x_1609_ = lean_box(0);
v___x_1610_ = lean_unsigned_to_nat(0u);
v___x_1611_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2);
lean_inc_ref(v_fileMap_1602_);
lean_inc_ref(v_fileName_1601_);
v___x_1612_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1612_, 0, v_fileName_1601_);
lean_ctor_set(v___x_1612_, 1, v_fileMap_1602_);
lean_ctor_set(v___x_1612_, 2, v___x_1603_);
lean_ctor_set(v___x_1612_, 3, v___x_1604_);
lean_ctor_set(v___x_1612_, 4, v___x_1605_);
lean_ctor_set(v___x_1612_, 5, v___x_1606_);
lean_ctor_set(v___x_1612_, 6, v___x_1598_);
lean_ctor_set(v___x_1612_, 7, v___x_1607_);
lean_ctor_set(v___x_1612_, 8, v___x_1605_);
lean_ctor_set(v___x_1612_, 9, v___x_1608_);
lean_ctor_set(v___x_1612_, 10, v___x_1609_);
lean_ctor_set(v___x_1612_, 11, v___x_1611_);
v___x_1613_ = lean_box(0);
v___x_1614_ = lean_uint16_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3);
v___x_1615_ = 0;
v___x_1616_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1616_, 0, v___x_1612_);
lean_ctor_set(v___x_1616_, 1, v___x_1610_);
lean_ctor_set(v___x_1616_, 2, v___x_1613_);
lean_ctor_set_uint16(v___x_1616_, sizeof(void*)*3, v___x_1614_);
lean_ctor_set_uint8(v___x_1616_, sizeof(void*)*3 + 2, v___x_1597_);
lean_ctor_set_uint8(v___x_1616_, sizeof(void*)*3 + 3, v___x_1615_);
lean_ctor_set_uint8(v___x_1616_, sizeof(void*)*3 + 4, v___x_1597_);
v___x_1617_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed), 5, 2);
lean_closure_set(v___x_1617_, 0, v___f_1591_);
lean_closure_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1581_, v_env_1594_, v_forConst_1583_, v_key_1584_, v___x_1617_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1670_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1621_ = v___x_1618_;
v_isShared_1622_ = v_isSharedCheck_1670_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1618_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1670_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; 
v___x_1623_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1619_, v___x_1592_);
lean_dec(v_a_1619_);
if (lean_obj_tag(v___x_1623_) == 1)
{
lean_object* v_val_1624_; lean_object* v_res_x3f_1625_; lean_object* v_snap_x3f_1626_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v_snap_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; 
v_val_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_val_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v_res_x3f_1625_ = lean_ctor_get(v_val_1624_, 0);
lean_inc_ref(v_res_x3f_1625_);
v_snap_x3f_1626_ = lean_ctor_get(v_val_1624_, 1);
lean_inc(v_snap_x3f_1626_);
lean_dec(v_val_1624_);
if (lean_obj_tag(v_snap_x3f_1626_) == 1)
{
lean_object* v_val_1660_; lean_object* v___x_1661_; 
v_val_1660_ = lean_ctor_get(v_snap_x3f_1626_, 0);
lean_inc(v_val_1660_);
lean_dec_ref_known(v_snap_x3f_1626_, 1);
v___x_1661_ = l_Lean_Syntax_getRange_x3f(v_ref_1600_, v___x_1597_);
if (lean_obj_tag(v___x_1661_) == 1)
{
lean_object* v_val_1662_; lean_object* v_start_1663_; lean_object* v_stop_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_val_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v_start_1663_ = lean_ctor_get(v_val_1662_, 0);
lean_inc(v_start_1663_);
v_stop_1664_ = lean_ctor_get(v_val_1662_, 1);
lean_inc(v_stop_1664_);
lean_dec(v_val_1662_);
lean_inc_ref_n(v_fileMap_1602_, 2);
v___x_1665_ = l_Lean_FileMap_toPosition(v_fileMap_1602_, v_start_1663_);
lean_dec(v_start_1663_);
v___x_1666_ = l_Lean_FileMap_toPosition(v_fileMap_1602_, v_stop_1664_);
lean_dec(v_stop_1664_);
v___x_1667_ = l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(v_val_1660_, v___x_1665_, v___x_1666_);
v_snap_1645_ = v___x_1667_;
v___y_1646_ = v_a_1586_;
v___y_1647_ = v_a_1587_;
v___y_1648_ = v_a_1588_;
v___y_1649_ = v_a_1589_;
goto v___jp_1644_;
}
else
{
lean_dec(v___x_1661_);
v_snap_1645_ = v_val_1660_;
v___y_1646_ = v_a_1586_;
v___y_1647_ = v_a_1587_;
v___y_1648_ = v_a_1588_;
v___y_1649_ = v_a_1589_;
goto v___jp_1644_;
}
}
else
{
lean_dec(v_snap_x3f_1626_);
v___y_1628_ = v_a_1586_;
v___y_1629_ = v_a_1587_;
v___y_1630_ = v_a_1588_;
v___y_1631_ = v_a_1589_;
goto v___jp_1627_;
}
v___jp_1627_:
{
if (lean_obj_tag(v_res_x3f_1625_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1634_; 
lean_dec(v_inst_1582_);
v_a_1632_ = lean_ctor_get(v_res_x3f_1625_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v_res_x3f_1625_, 1);
if (v_isShared_1622_ == 0)
{
lean_ctor_set_tag(v___x_1621_, 1);
lean_ctor_set(v___x_1621_, 0, v_a_1632_);
v___x_1634_ = v___x_1621_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1632_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1637_; 
v_a_1636_ = lean_ctor_get(v_res_x3f_1625_, 0);
lean_inc(v_a_1636_);
lean_dec_ref_known(v_res_x3f_1625_, 1);
v___x_1637_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1636_, v_inst_1582_);
lean_dec(v_inst_1582_);
lean_dec(v_a_1636_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_del_object(v___x_1621_);
v___x_1638_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6);
v___x_1639_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1638_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
return v___x_1639_;
}
else
{
lean_object* v_val_1640_; lean_object* v___x_1642_; 
v_val_1640_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_val_1640_);
lean_dec_ref_known(v___x_1637_, 1);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 0, v_val_1640_);
v___x_1642_ = v___x_1621_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_val_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
v___jp_1644_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1609_, v_snap_1645_);
v___x_1651_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1650_, v___y_1649_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_dec_ref_known(v___x_1651_, 1);
v___y_1628_ = v___y_1646_;
v___y_1629_ = v___y_1647_;
v___y_1630_ = v___y_1648_;
v___y_1631_ = v___y_1649_;
goto v___jp_1627_;
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v_res_x3f_1625_);
lean_del_object(v___x_1621_);
lean_dec(v_inst_1582_);
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1651_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1651_);
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
}
else
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
lean_dec(v___x_1623_);
lean_del_object(v___x_1621_);
lean_dec(v_inst_1582_);
v___x_1668_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__7);
v___x_1669_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1668_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
return v___x_1669_;
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_inst_1582_);
v_a_1671_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1673_ = v___x_1618_;
v_isShared_1674_ = v_isSharedCheck_1682_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1618_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1682_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1680_; 
v___x_1675_ = lean_io_error_to_string(v_a_1671_);
v___x_1676_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
v___x_1677_ = l_Lean_MessageData_ofFormat(v___x_1676_);
lean_inc(v_ref_1600_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v_ref_1600_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1678_);
v___x_1680_ = v___x_1673_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object* v_inst_1683_, lean_object* v_inst_1684_, lean_object* v_forConst_1685_, lean_object* v_key_1686_, lean_object* v_realize_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_1683_, v_inst_1684_, v_forConst_1685_, v_key_1686_, v_realize_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_);
lean_dec(v_a_1691_);
lean_dec_ref(v_a_1690_);
lean_dec(v_a_1689_);
lean_dec_ref(v_a_1688_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object* v_keys_1694_, lean_object* v_vals_1695_, lean_object* v_i_1696_, lean_object* v_k_1697_){
_start:
{
lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1698_ = lean_array_get_size(v_keys_1694_);
v___x_1699_ = lean_nat_dec_lt(v_i_1696_, v___x_1698_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; 
lean_dec(v_i_1696_);
v___x_1700_ = lean_box(0);
return v___x_1700_;
}
else
{
lean_object* v_k_x27_1701_; uint8_t v___x_1702_; 
v_k_x27_1701_ = lean_array_fget_borrowed(v_keys_1694_, v_i_1696_);
v___x_1702_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_k_1697_, v_k_x27_1701_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = lean_unsigned_to_nat(1u);
v___x_1704_ = lean_nat_add(v_i_1696_, v___x_1703_);
lean_dec(v_i_1696_);
v_i_1696_ = v___x_1704_;
goto _start;
}
else
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_array_fget_borrowed(v_vals_1695_, v_i_1696_);
lean_dec(v_i_1696_);
lean_inc(v___x_1706_);
v___x_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
return v___x_1707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_keys_1708_, lean_object* v_vals_1709_, lean_object* v_i_1710_, lean_object* v_k_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_1708_, v_vals_1709_, v_i_1710_, v_k_1711_);
lean_dec_ref(v_k_1711_);
lean_dec_ref(v_vals_1709_);
lean_dec_ref(v_keys_1708_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object* v_x_1713_, size_t v_x_1714_, lean_object* v_x_1715_){
_start:
{
if (lean_obj_tag(v_x_1713_) == 0)
{
lean_object* v_es_1716_; lean_object* v___x_1717_; size_t v___x_1718_; size_t v___x_1719_; lean_object* v_j_1720_; lean_object* v___x_1721_; 
v_es_1716_ = lean_ctor_get(v_x_1713_, 0);
v___x_1717_ = lean_box(2);
v___x_1718_ = ((size_t)31ULL);
v___x_1719_ = lean_usize_land(v_x_1714_, v___x_1718_);
v_j_1720_ = lean_usize_to_nat(v___x_1719_);
v___x_1721_ = lean_array_get_borrowed(v___x_1717_, v_es_1716_, v_j_1720_);
lean_dec(v_j_1720_);
switch(lean_obj_tag(v___x_1721_))
{
case 0:
{
lean_object* v_key_1722_; lean_object* v_val_1723_; uint8_t v___x_1724_; 
v_key_1722_ = lean_ctor_get(v___x_1721_, 0);
v_val_1723_ = lean_ctor_get(v___x_1721_, 1);
v___x_1724_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1715_, v_key_1722_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_box(0);
return v___x_1725_;
}
else
{
lean_object* v___x_1726_; 
lean_inc(v_val_1723_);
v___x_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1726_, 0, v_val_1723_);
return v___x_1726_;
}
}
case 1:
{
lean_object* v_node_1727_; size_t v___x_1728_; size_t v___x_1729_; 
v_node_1727_ = lean_ctor_get(v___x_1721_, 0);
v___x_1728_ = ((size_t)5ULL);
v___x_1729_ = lean_usize_shift_right(v_x_1714_, v___x_1728_);
v_x_1713_ = v_node_1727_;
v_x_1714_ = v___x_1729_;
goto _start;
}
default: 
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_box(0);
return v___x_1731_;
}
}
}
else
{
lean_object* v_ks_1732_; lean_object* v_vs_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v_ks_1732_ = lean_ctor_get(v_x_1713_, 0);
v_vs_1733_ = lean_ctor_get(v_x_1713_, 1);
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_ks_1732_, v_vs_1733_, v___x_1734_, v_x_1715_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object* v_x_1736_, lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
size_t v_x_13337__boxed_1739_; lean_object* v_res_1740_; 
v_x_13337__boxed_1739_ = lean_unbox_usize(v_x_1737_);
lean_dec(v_x_1737_);
v_res_1740_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1736_, v_x_13337__boxed_1739_, v_x_1738_);
lean_dec_ref(v_x_1738_);
lean_dec_ref(v_x_1736_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object* v_x_1741_, lean_object* v_x_1742_){
_start:
{
uint64_t v_configKey_1743_; lean_object* v_expr_1744_; lean_object* v_nargs_x3f_1745_; uint64_t v___x_1746_; uint64_t v___y_1748_; 
v_configKey_1743_ = lean_ctor_get_uint64(v_x_1742_, sizeof(void*)*2);
v_expr_1744_ = lean_ctor_get(v_x_1742_, 0);
v_nargs_x3f_1745_ = lean_ctor_get(v_x_1742_, 1);
v___x_1746_ = l_Lean_Expr_hash(v_expr_1744_);
if (lean_obj_tag(v_nargs_x3f_1745_) == 0)
{
uint64_t v___x_1753_; 
v___x_1753_ = 11ULL;
v___y_1748_ = v___x_1753_;
goto v___jp_1747_;
}
else
{
lean_object* v_val_1754_; uint64_t v___x_1755_; uint64_t v___x_1756_; uint64_t v___x_1757_; 
v_val_1754_ = lean_ctor_get(v_nargs_x3f_1745_, 0);
v___x_1755_ = lean_uint64_of_nat(v_val_1754_);
v___x_1756_ = 13ULL;
v___x_1757_ = lean_uint64_mix_hash(v___x_1755_, v___x_1756_);
v___y_1748_ = v___x_1757_;
goto v___jp_1747_;
}
v___jp_1747_:
{
uint64_t v___x_1749_; uint64_t v___x_1750_; size_t v___x_1751_; lean_object* v___x_1752_; 
v___x_1749_ = lean_uint64_mix_hash(v___x_1746_, v___y_1748_);
v___x_1750_ = lean_uint64_mix_hash(v_configKey_1743_, v___x_1749_);
v___x_1751_ = lean_uint64_to_usize(v___x_1750_);
v___x_1752_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1741_, v___x_1751_, v_x_1742_);
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object* v_x_1758_, lean_object* v_x_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_1758_, v_x_1759_);
lean_dec_ref(v_x_1759_);
lean_dec_ref(v_x_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object* v_x_1761_, lean_object* v_x_1762_, lean_object* v_x_1763_, lean_object* v_x_1764_){
_start:
{
lean_object* v_ks_1765_; lean_object* v_vs_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1790_; 
v_ks_1765_ = lean_ctor_get(v_x_1761_, 0);
v_vs_1766_ = lean_ctor_get(v_x_1761_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_x_1761_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1768_ = v_x_1761_;
v_isShared_1769_ = v_isSharedCheck_1790_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_vs_1766_);
lean_inc(v_ks_1765_);
lean_dec(v_x_1761_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1790_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; uint8_t v___x_1771_; 
v___x_1770_ = lean_array_get_size(v_ks_1765_);
v___x_1771_ = lean_nat_dec_lt(v_x_1762_, v___x_1770_);
if (v___x_1771_ == 0)
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
lean_dec(v_x_1762_);
v___x_1772_ = lean_array_push(v_ks_1765_, v_x_1763_);
v___x_1773_ = lean_array_push(v_vs_1766_, v_x_1764_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 1, v___x_1773_);
lean_ctor_set(v___x_1768_, 0, v___x_1772_);
v___x_1775_ = v___x_1768_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v___x_1773_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
else
{
lean_object* v_k_x27_1777_; uint8_t v___x_1778_; 
v_k_x27_1777_ = lean_array_fget_borrowed(v_ks_1765_, v_x_1762_);
v___x_1778_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1763_, v_k_x27_1777_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1780_; 
if (v_isShared_1769_ == 0)
{
v___x_1780_ = v___x_1768_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_ks_1765_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v_vs_1766_);
v___x_1780_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = lean_unsigned_to_nat(1u);
v___x_1782_ = lean_nat_add(v_x_1762_, v___x_1781_);
lean_dec(v_x_1762_);
v_x_1761_ = v___x_1780_;
v_x_1762_ = v___x_1782_;
goto _start;
}
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1788_; 
v___x_1785_ = lean_array_fset(v_ks_1765_, v_x_1762_, v_x_1763_);
v___x_1786_ = lean_array_fset(v_vs_1766_, v_x_1762_, v_x_1764_);
lean_dec(v_x_1762_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 1, v___x_1786_);
lean_ctor_set(v___x_1768_, 0, v___x_1785_);
v___x_1788_ = v___x_1768_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v___x_1785_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v___x_1786_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object* v_n_1791_, lean_object* v_k_1792_, lean_object* v_v_1793_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_unsigned_to_nat(0u);
v___x_1795_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_n_1791_, v___x_1794_, v_k_1792_, v_v_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object* v_x_1796_, size_t v_x_1797_, size_t v_x_1798_, lean_object* v_x_1799_, lean_object* v_x_1800_){
_start:
{
if (lean_obj_tag(v_x_1796_) == 0)
{
lean_object* v_es_1801_; size_t v___x_1802_; size_t v___x_1803_; lean_object* v_j_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
v_es_1801_ = lean_ctor_get(v_x_1796_, 0);
v___x_1802_ = ((size_t)31ULL);
v___x_1803_ = lean_usize_land(v_x_1797_, v___x_1802_);
v_j_1804_ = lean_usize_to_nat(v___x_1803_);
v___x_1805_ = lean_array_get_size(v_es_1801_);
v___x_1806_ = lean_nat_dec_lt(v_j_1804_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_dec(v_j_1804_);
lean_dec(v_x_1800_);
lean_dec_ref(v_x_1799_);
return v_x_1796_;
}
else
{
lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1845_; 
lean_inc_ref(v_es_1801_);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_x_1796_);
if (v_isSharedCheck_1845_ == 0)
{
lean_object* v_unused_1846_; 
v_unused_1846_ = lean_ctor_get(v_x_1796_, 0);
lean_dec(v_unused_1846_);
v___x_1808_ = v_x_1796_;
v_isShared_1809_ = v_isSharedCheck_1845_;
goto v_resetjp_1807_;
}
else
{
lean_dec(v_x_1796_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1845_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v_v_1810_; lean_object* v___x_1811_; lean_object* v_xs_x27_1812_; lean_object* v___y_1814_; 
v_v_1810_ = lean_array_fget(v_es_1801_, v_j_1804_);
v___x_1811_ = lean_box(0);
v_xs_x27_1812_ = lean_array_fset(v_es_1801_, v_j_1804_, v___x_1811_);
switch(lean_obj_tag(v_v_1810_))
{
case 0:
{
lean_object* v_key_1819_; lean_object* v_val_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1830_; 
v_key_1819_ = lean_ctor_get(v_v_1810_, 0);
v_val_1820_ = lean_ctor_get(v_v_1810_, 1);
v_isSharedCheck_1830_ = !lean_is_exclusive(v_v_1810_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1822_ = v_v_1810_;
v_isShared_1823_ = v_isSharedCheck_1830_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_val_1820_);
lean_inc(v_key_1819_);
lean_dec(v_v_1810_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1830_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
uint8_t v___x_1824_; 
v___x_1824_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1799_, v_key_1819_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_del_object(v___x_1822_);
v___x_1825_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1819_, v_val_1820_, v_x_1799_, v_x_1800_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
v___y_1814_ = v___x_1826_;
goto v___jp_1813_;
}
else
{
lean_object* v___x_1828_; 
lean_dec(v_val_1820_);
lean_dec(v_key_1819_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 1, v_x_1800_);
lean_ctor_set(v___x_1822_, 0, v_x_1799_);
v___x_1828_ = v___x_1822_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_x_1799_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v_x_1800_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
v___y_1814_ = v___x_1828_;
goto v___jp_1813_;
}
}
}
}
case 1:
{
lean_object* v_node_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1843_; 
v_node_1831_ = lean_ctor_get(v_v_1810_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v_v_1810_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1833_ = v_v_1810_;
v_isShared_1834_ = v_isSharedCheck_1843_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_node_1831_);
lean_dec(v_v_1810_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1843_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
size_t v___x_1835_; size_t v___x_1836_; size_t v___x_1837_; size_t v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1835_ = ((size_t)5ULL);
v___x_1836_ = lean_usize_shift_right(v_x_1797_, v___x_1835_);
v___x_1837_ = ((size_t)1ULL);
v___x_1838_ = lean_usize_add(v_x_1798_, v___x_1837_);
v___x_1839_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_node_1831_, v___x_1836_, v___x_1838_, v_x_1799_, v_x_1800_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 0, v___x_1839_);
v___x_1841_ = v___x_1833_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
v___y_1814_ = v___x_1841_;
goto v___jp_1813_;
}
}
}
default: 
{
lean_object* v___x_1844_; 
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v_x_1799_);
lean_ctor_set(v___x_1844_, 1, v_x_1800_);
v___y_1814_ = v___x_1844_;
goto v___jp_1813_;
}
}
v___jp_1813_:
{
lean_object* v___x_1815_; lean_object* v___x_1817_; 
v___x_1815_ = lean_array_fset(v_xs_x27_1812_, v_j_1804_, v___y_1814_);
lean_dec(v_j_1804_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 0, v___x_1815_);
v___x_1817_ = v___x_1808_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
else
{
lean_object* v_ks_1847_; lean_object* v_vs_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1866_; 
v_ks_1847_ = lean_ctor_get(v_x_1796_, 0);
v_vs_1848_ = lean_ctor_get(v_x_1796_, 1);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_x_1796_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1850_ = v_x_1796_;
v_isShared_1851_ = v_isSharedCheck_1866_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_vs_1848_);
lean_inc(v_ks_1847_);
lean_dec(v_x_1796_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1866_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_ks_1847_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v_vs_1848_);
v___x_1853_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v_newNode_1854_; size_t v___x_1855_; uint8_t v___x_1856_; 
v_newNode_1854_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v___x_1853_, v_x_1799_, v_x_1800_);
v___x_1855_ = ((size_t)7ULL);
v___x_1856_ = lean_usize_dec_le(v___x_1855_, v_x_1798_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; lean_object* v___x_1858_; uint8_t v___x_1859_; 
v___x_1857_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1854_);
v___x_1858_ = lean_unsigned_to_nat(4u);
v___x_1859_ = lean_nat_dec_lt(v___x_1857_, v___x_1858_);
lean_dec(v___x_1857_);
if (v___x_1859_ == 0)
{
lean_object* v_ks_1860_; lean_object* v_vs_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_ks_1860_ = lean_ctor_get(v_newNode_1854_, 0);
lean_inc_ref(v_ks_1860_);
v_vs_1861_ = lean_ctor_get(v_newNode_1854_, 1);
lean_inc_ref(v_vs_1861_);
lean_dec_ref(v_newNode_1854_);
v___x_1862_ = lean_unsigned_to_nat(0u);
v___x_1863_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1864_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_x_1798_, v_ks_1860_, v_vs_1861_, v___x_1862_, v___x_1863_);
lean_dec_ref(v_vs_1861_);
lean_dec_ref(v_ks_1860_);
return v___x_1864_;
}
else
{
return v_newNode_1854_;
}
}
else
{
return v_newNode_1854_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t v_depth_1867_, lean_object* v_keys_1868_, lean_object* v_vals_1869_, lean_object* v_i_1870_, lean_object* v_entries_1871_){
_start:
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = lean_array_get_size(v_keys_1868_);
v___x_1873_ = lean_nat_dec_lt(v_i_1870_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_dec(v_i_1870_);
return v_entries_1871_;
}
else
{
lean_object* v_k_1874_; uint64_t v_configKey_1875_; lean_object* v_expr_1876_; lean_object* v_nargs_x3f_1877_; lean_object* v_v_1878_; uint64_t v___x_1879_; uint64_t v___y_1881_; 
v_k_1874_ = lean_array_fget_borrowed(v_keys_1868_, v_i_1870_);
v_configKey_1875_ = lean_ctor_get_uint64(v_k_1874_, sizeof(void*)*2);
v_expr_1876_ = lean_ctor_get(v_k_1874_, 0);
v_nargs_x3f_1877_ = lean_ctor_get(v_k_1874_, 1);
v_v_1878_ = lean_array_fget_borrowed(v_vals_1869_, v_i_1870_);
v___x_1879_ = l_Lean_Expr_hash(v_expr_1876_);
if (lean_obj_tag(v_nargs_x3f_1877_) == 0)
{
uint64_t v___x_1894_; 
v___x_1894_ = 11ULL;
v___y_1881_ = v___x_1894_;
goto v___jp_1880_;
}
else
{
lean_object* v_val_1895_; uint64_t v___x_1896_; uint64_t v___x_1897_; uint64_t v___x_1898_; 
v_val_1895_ = lean_ctor_get(v_nargs_x3f_1877_, 0);
v___x_1896_ = lean_uint64_of_nat(v_val_1895_);
v___x_1897_ = 13ULL;
v___x_1898_ = lean_uint64_mix_hash(v___x_1896_, v___x_1897_);
v___y_1881_ = v___x_1898_;
goto v___jp_1880_;
}
v___jp_1880_:
{
uint64_t v___x_1882_; uint64_t v___x_1883_; size_t v_h_1884_; size_t v___x_1885_; lean_object* v___x_1886_; size_t v___x_1887_; size_t v___x_1888_; size_t v___x_1889_; size_t v_h_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1882_ = lean_uint64_mix_hash(v___x_1879_, v___y_1881_);
v___x_1883_ = lean_uint64_mix_hash(v_configKey_1875_, v___x_1882_);
v_h_1884_ = lean_uint64_to_usize(v___x_1883_);
v___x_1885_ = ((size_t)5ULL);
v___x_1886_ = lean_unsigned_to_nat(1u);
v___x_1887_ = ((size_t)1ULL);
v___x_1888_ = lean_usize_sub(v_depth_1867_, v___x_1887_);
v___x_1889_ = lean_usize_mul(v___x_1885_, v___x_1888_);
v_h_1890_ = lean_usize_shift_right(v_h_1884_, v___x_1889_);
v___x_1891_ = lean_nat_add(v_i_1870_, v___x_1886_);
lean_dec(v_i_1870_);
lean_inc(v_v_1878_);
lean_inc(v_k_1874_);
v___x_1892_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_entries_1871_, v_h_1890_, v_depth_1867_, v_k_1874_, v_v_1878_);
v_i_1870_ = v___x_1891_;
v_entries_1871_ = v___x_1892_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object* v_depth_1899_, lean_object* v_keys_1900_, lean_object* v_vals_1901_, lean_object* v_i_1902_, lean_object* v_entries_1903_){
_start:
{
size_t v_depth_boxed_1904_; lean_object* v_res_1905_; 
v_depth_boxed_1904_ = lean_unbox_usize(v_depth_1899_);
lean_dec(v_depth_1899_);
v_res_1905_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_boxed_1904_, v_keys_1900_, v_vals_1901_, v_i_1902_, v_entries_1903_);
lean_dec_ref(v_vals_1901_);
lean_dec_ref(v_keys_1900_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object* v_x_1906_, lean_object* v_x_1907_, lean_object* v_x_1908_, lean_object* v_x_1909_, lean_object* v_x_1910_){
_start:
{
size_t v_x_13507__boxed_1911_; size_t v_x_13508__boxed_1912_; lean_object* v_res_1913_; 
v_x_13507__boxed_1911_ = lean_unbox_usize(v_x_1907_);
lean_dec(v_x_1907_);
v_x_13508__boxed_1912_ = lean_unbox_usize(v_x_1908_);
lean_dec(v_x_1908_);
v_res_1913_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1906_, v_x_13507__boxed_1911_, v_x_13508__boxed_1912_, v_x_1909_, v_x_1910_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object* v_x_1914_, lean_object* v_x_1915_, lean_object* v_x_1916_){
_start:
{
uint64_t v_configKey_1917_; lean_object* v_expr_1918_; lean_object* v_nargs_x3f_1919_; uint64_t v___x_1920_; uint64_t v___y_1922_; 
v_configKey_1917_ = lean_ctor_get_uint64(v_x_1915_, sizeof(void*)*2);
v_expr_1918_ = lean_ctor_get(v_x_1915_, 0);
v_nargs_x3f_1919_ = lean_ctor_get(v_x_1915_, 1);
v___x_1920_ = l_Lean_Expr_hash(v_expr_1918_);
if (lean_obj_tag(v_nargs_x3f_1919_) == 0)
{
uint64_t v___x_1928_; 
v___x_1928_ = 11ULL;
v___y_1922_ = v___x_1928_;
goto v___jp_1921_;
}
else
{
lean_object* v_val_1929_; uint64_t v___x_1930_; uint64_t v___x_1931_; uint64_t v___x_1932_; 
v_val_1929_ = lean_ctor_get(v_nargs_x3f_1919_, 0);
v___x_1930_ = lean_uint64_of_nat(v_val_1929_);
v___x_1931_ = 13ULL;
v___x_1932_ = lean_uint64_mix_hash(v___x_1930_, v___x_1931_);
v___y_1922_ = v___x_1932_;
goto v___jp_1921_;
}
v___jp_1921_:
{
uint64_t v___x_1923_; uint64_t v___x_1924_; size_t v___x_1925_; size_t v___x_1926_; lean_object* v___x_1927_; 
v___x_1923_ = lean_uint64_mix_hash(v___x_1920_, v___y_1922_);
v___x_1924_ = lean_uint64_mix_hash(v_configKey_1917_, v___x_1923_);
v___x_1925_ = lean_uint64_to_usize(v___x_1924_);
v___x_1926_ = ((size_t)1ULL);
v___x_1927_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1914_, v___x_1925_, v___x_1926_, v_x_1915_, v_x_1916_);
return v___x_1927_;
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object* v_x_1933_){
_start:
{
if (lean_obj_tag(v_x_1933_) == 0)
{
uint8_t v___x_1934_; 
v___x_1934_ = 0;
return v___x_1934_;
}
else
{
lean_object* v_head_1935_; lean_object* v_tail_1936_; uint8_t v___x_1937_; 
v_head_1935_ = lean_ctor_get(v_x_1933_, 0);
v_tail_1936_ = lean_ctor_get(v_x_1933_, 1);
v___x_1937_ = l_Lean_Level_hasMVar(v_head_1935_);
if (v___x_1937_ == 0)
{
v_x_1933_ = v_tail_1936_;
goto _start;
}
else
{
return v___x_1937_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object* v_x_1939_){
_start:
{
uint8_t v_res_1940_; lean_object* v_r_1941_; 
v_res_1940_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_x_1939_);
lean_dec(v_x_1939_);
v_r_1941_ = lean_box(v_res_1940_);
return v_r_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object* v_fn_1944_, lean_object* v_maxArgs_x3f_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v___f_1951_; lean_object* v___f_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___f_1951_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0));
lean_inc_n(v_maxArgs_x3f_1945_, 2);
lean_inc_ref_n(v_fn_1944_, 2);
v___f_1952_ = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed), 8, 3);
lean_closure_set(v___f_1952_, 0, v_fn_1944_);
lean_closure_set(v___f_1952_, 1, v_maxArgs_x3f_1945_);
lean_closure_set(v___f_1952_, 2, v___f_1951_);
v___x_1953_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_1954_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
v___x_1955_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_1944_, v_maxArgs_x3f_1945_, v_a_1946_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_2017_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1958_ = v___x_1955_;
v_isShared_1959_ = v_isSharedCheck_2017_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1955_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_2017_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v_finfo_1961_; lean_object* v___y_1962_; lean_object* v___x_1995_; lean_object* v_cache_1996_; lean_object* v_funInfo_1997_; lean_object* v___x_1998_; 
v___x_1995_ = lean_st_ref_get(v_a_1947_);
v_cache_1996_ = lean_ctor_get(v___x_1995_, 1);
lean_inc_ref(v_cache_1996_);
lean_dec(v___x_1995_);
v_funInfo_1997_ = lean_ctor_get(v_cache_1996_, 1);
lean_inc_ref(v_funInfo_1997_);
lean_dec_ref(v_cache_1996_);
v___x_1998_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_funInfo_1997_, v_a_1956_);
lean_dec_ref(v_funInfo_1997_);
if (lean_obj_tag(v___x_1998_) == 0)
{
if (lean_obj_tag(v_fn_1944_) == 4)
{
lean_object* v_declName_1999_; lean_object* v_us_2000_; uint8_t v___x_2001_; 
v_declName_1999_ = lean_ctor_get(v_fn_1944_, 0);
v_us_2000_ = lean_ctor_get(v_fn_1944_, 1);
v___x_2001_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_us_2000_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
lean_inc(v_us_2000_);
lean_inc_n(v_declName_1999_, 2);
lean_dec_ref_known(v_fn_1944_, 2);
v___x_2002_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2002_, 0, v_declName_1999_);
lean_ctor_set(v___x_2002_, 1, v_us_2000_);
lean_ctor_set(v___x_2002_, 2, v_maxArgs_x3f_1945_);
v___x_2003_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v___x_1953_, v___x_1954_, v_declName_1999_, v___x_2002_, v___f_1952_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2004_);
lean_dec_ref_known(v___x_2003_, 1);
v_finfo_1961_ = v_a_2004_;
v___y_1962_ = v_a_1947_;
goto v___jp_1960_;
}
else
{
lean_del_object(v___x_1958_);
lean_dec(v_a_1956_);
return v___x_2003_;
}
}
else
{
lean_object* v___x_2005_; 
lean_dec_ref(v___f_1952_);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2005_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1944_, v_maxArgs_x3f_1945_, v___f_1951_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_a_2006_);
lean_dec_ref_known(v___x_2005_, 1);
v_finfo_1961_ = v_a_2006_;
v___y_1962_ = v_a_1947_;
goto v___jp_1960_;
}
else
{
lean_del_object(v___x_1958_);
lean_dec(v_a_1956_);
return v___x_2005_;
}
}
}
else
{
lean_object* v___x_2007_; 
lean_dec_ref(v___f_1952_);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2007_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1944_, v_maxArgs_x3f_1945_, v___f_1951_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_2007_, 1);
v_finfo_1961_ = v_a_2008_;
v___y_1962_ = v_a_1947_;
goto v___jp_1960_;
}
else
{
lean_del_object(v___x_1958_);
lean_dec(v_a_1956_);
return v___x_2007_;
}
}
}
else
{
lean_object* v_val_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_del_object(v___x_1958_);
lean_dec(v_a_1956_);
lean_dec_ref(v___f_1952_);
lean_dec(v_maxArgs_x3f_1945_);
lean_dec_ref(v_fn_1944_);
v_val_2009_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_1998_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_val_2009_);
lean_dec(v___x_1998_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set_tag(v___x_2011_, 0);
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_val_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
v___jp_1960_:
{
lean_object* v___x_1963_; lean_object* v_cache_1964_; lean_object* v_mctx_1965_; lean_object* v_zetaDeltaFVarIds_1966_; lean_object* v_postponed_1967_; lean_object* v_diag_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1994_; 
v___x_1963_ = lean_st_ref_take(v___y_1962_);
v_cache_1964_ = lean_ctor_get(v___x_1963_, 1);
v_mctx_1965_ = lean_ctor_get(v___x_1963_, 0);
v_zetaDeltaFVarIds_1966_ = lean_ctor_get(v___x_1963_, 2);
v_postponed_1967_ = lean_ctor_get(v___x_1963_, 3);
v_diag_1968_ = lean_ctor_get(v___x_1963_, 4);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1970_ = v___x_1963_;
v_isShared_1971_ = v_isSharedCheck_1994_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_diag_1968_);
lean_inc(v_postponed_1967_);
lean_inc(v_zetaDeltaFVarIds_1966_);
lean_inc(v_cache_1964_);
lean_inc(v_mctx_1965_);
lean_dec(v___x_1963_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1994_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v_inferType_1972_; lean_object* v_funInfo_1973_; lean_object* v_synthInstance_1974_; lean_object* v_whnf_1975_; lean_object* v_defEqTrans_1976_; lean_object* v_defEqPerm_1977_; lean_object* v_isUnitLike_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1993_; 
v_inferType_1972_ = lean_ctor_get(v_cache_1964_, 0);
v_funInfo_1973_ = lean_ctor_get(v_cache_1964_, 1);
v_synthInstance_1974_ = lean_ctor_get(v_cache_1964_, 2);
v_whnf_1975_ = lean_ctor_get(v_cache_1964_, 3);
v_defEqTrans_1976_ = lean_ctor_get(v_cache_1964_, 4);
v_defEqPerm_1977_ = lean_ctor_get(v_cache_1964_, 5);
v_isUnitLike_1978_ = lean_ctor_get(v_cache_1964_, 6);
v_isSharedCheck_1993_ = !lean_is_exclusive(v_cache_1964_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1980_ = v_cache_1964_;
v_isShared_1981_ = v_isSharedCheck_1993_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_isUnitLike_1978_);
lean_inc(v_defEqPerm_1977_);
lean_inc(v_defEqTrans_1976_);
lean_inc(v_whnf_1975_);
lean_inc(v_synthInstance_1974_);
lean_inc(v_funInfo_1973_);
lean_inc(v_inferType_1972_);
lean_dec(v_cache_1964_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1993_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1982_; lean_object* v___x_1984_; 
lean_inc_ref(v_finfo_1961_);
v___x_1982_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_funInfo_1973_, v_a_1956_, v_finfo_1961_);
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 1, v___x_1982_);
v___x_1984_ = v___x_1980_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_inferType_1972_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v___x_1982_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_synthInstance_1974_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_whnf_1975_);
lean_ctor_set(v_reuseFailAlloc_1992_, 4, v_defEqTrans_1976_);
lean_ctor_set(v_reuseFailAlloc_1992_, 5, v_defEqPerm_1977_);
lean_ctor_set(v_reuseFailAlloc_1992_, 6, v_isUnitLike_1978_);
v___x_1984_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1986_; 
if (v_isShared_1971_ == 0)
{
lean_ctor_set(v___x_1970_, 1, v___x_1984_);
v___x_1986_ = v___x_1970_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_mctx_1965_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v___x_1984_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v_zetaDeltaFVarIds_1966_);
lean_ctor_set(v_reuseFailAlloc_1991_, 3, v_postponed_1967_);
lean_ctor_set(v_reuseFailAlloc_1991_, 4, v_diag_1968_);
v___x_1986_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
lean_object* v___x_1987_; lean_object* v___x_1989_; 
v___x_1987_ = lean_st_ref_put(v___y_1962_, v___x_1986_);
if (v_isShared_1959_ == 0)
{
lean_ctor_set(v___x_1958_, 0, v_finfo_1961_);
v___x_1989_ = v___x_1958_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_finfo_1961_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
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
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
lean_dec_ref(v___f_1952_);
lean_dec(v_maxArgs_x3f_1945_);
lean_dec_ref(v_fn_1944_);
v_a_2018_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v___x_1955_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_1955_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object* v_fn_2026_, lean_object* v_maxArgs_x3f_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2026_, v_maxArgs_x3f_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
lean_dec(v_a_2029_);
lean_dec_ref(v_a_2028_);
return v_res_2033_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object* v_00_u03b2_2034_, lean_object* v_k_2035_, lean_object* v_t_2036_){
_start:
{
uint8_t v___x_2037_; 
v___x_2037_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_2035_, v_t_2036_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object* v_00_u03b2_2038_, lean_object* v_k_2039_, lean_object* v_t_2040_){
_start:
{
uint8_t v_res_2041_; lean_object* v_r_2042_; 
v_res_2041_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(v_00_u03b2_2038_, v_k_2039_, v_t_2040_);
lean_dec(v_t_2040_);
lean_dec(v_k_2039_);
v_r_2042_ = lean_box(v_res_2041_);
return v_r_2042_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object* v_upperBound_2043_, lean_object* v_val_2044_, lean_object* v___x_2045_, lean_object* v_fvars_2046_, lean_object* v_next_2047_, lean_object* v_upperBound_2048_, lean_object* v_inst_2049_, lean_object* v_R_2050_, lean_object* v_a_2051_, lean_object* v_b_2052_, lean_object* v_c_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_2043_, v_val_2044_, v___x_2045_, v_fvars_2046_, v_next_2047_, v_upperBound_2048_, v_a_2051_, v_b_2052_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object* v_upperBound_2060_, lean_object* v_val_2061_, lean_object* v___x_2062_, lean_object* v_fvars_2063_, lean_object* v_next_2064_, lean_object* v_upperBound_2065_, lean_object* v_inst_2066_, lean_object* v_R_2067_, lean_object* v_a_2068_, lean_object* v_b_2069_, lean_object* v_c_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(v_upperBound_2060_, v_val_2061_, v___x_2062_, v_fvars_2063_, v_next_2064_, v_upperBound_2065_, v_inst_2066_, v_R_2067_, v_a_2068_, v_b_2069_, v_c_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v_upperBound_2065_);
lean_dec(v_next_2064_);
lean_dec_ref(v_fvars_2063_);
lean_dec_ref(v___x_2062_);
lean_dec_ref(v_val_2061_);
lean_dec(v_upperBound_2060_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object* v_upperBound_2077_, lean_object* v_fvars_2078_, lean_object* v_inst_2079_, lean_object* v_R_2080_, lean_object* v_a_2081_, lean_object* v_b_2082_, lean_object* v_c_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v___x_2089_; 
v___x_2089_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_2077_, v_fvars_2078_, v_a_2081_, v_b_2082_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object* v_upperBound_2090_, lean_object* v_fvars_2091_, lean_object* v_inst_2092_, lean_object* v_R_2093_, lean_object* v_a_2094_, lean_object* v_b_2095_, lean_object* v_c_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(v_upperBound_2090_, v_fvars_2091_, v_inst_2092_, v_R_2093_, v_a_2094_, v_b_2095_, v_c_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec_ref(v_fvars_2091_);
lean_dec(v_upperBound_2090_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object* v_00_u03b2_2103_, lean_object* v_x_2104_, lean_object* v_x_2105_, lean_object* v_x_2106_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_x_2104_, v_x_2105_, v_x_2106_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object* v_00_u03b2_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
lean_object* v___x_2111_; 
v___x_2111_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_2109_, v_x_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object* v_00_u03b2_2112_, lean_object* v_x_2113_, lean_object* v_x_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(v_00_u03b2_2112_, v_x_2113_, v_x_2114_);
lean_dec_ref(v_x_2114_);
lean_dec_ref(v_x_2113_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object* v_00_u03b2_2116_, lean_object* v_msg_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v___x_2123_; 
v___x_2123_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object* v_00_u03b2_2124_, lean_object* v_msg_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(v_00_u03b2_2124_, v_msg_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object* v_00_u03b2_2132_, lean_object* v_inst_2133_, lean_object* v_inst_2134_, lean_object* v_forConst_2135_, lean_object* v_key_2136_, lean_object* v_realize_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_2133_, v_inst_2134_, v_forConst_2135_, v_key_2136_, v_realize_2137_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object* v_00_u03b2_2144_, lean_object* v_inst_2145_, lean_object* v_inst_2146_, lean_object* v_forConst_2147_, lean_object* v_key_2148_, lean_object* v_realize_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(v_00_u03b2_2144_, v_inst_2145_, v_inst_2146_, v_forConst_2147_, v_key_2148_, v_realize_2149_, v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_);
lean_dec(v_a_2153_);
lean_dec_ref(v_a_2152_);
lean_dec(v_a_2151_);
lean_dec_ref(v_a_2150_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object* v_00_u03b2_2156_, lean_object* v_x_2157_, size_t v_x_2158_, size_t v_x_2159_, lean_object* v_x_2160_, lean_object* v_x_2161_){
_start:
{
lean_object* v___x_2162_; 
v___x_2162_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_2157_, v_x_2158_, v_x_2159_, v_x_2160_, v_x_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object* v_00_u03b2_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_, lean_object* v_x_2166_, lean_object* v_x_2167_, lean_object* v_x_2168_){
_start:
{
size_t v_x_13954__boxed_2169_; size_t v_x_13955__boxed_2170_; lean_object* v_res_2171_; 
v_x_13954__boxed_2169_ = lean_unbox_usize(v_x_2165_);
lean_dec(v_x_2165_);
v_x_13955__boxed_2170_ = lean_unbox_usize(v_x_2166_);
lean_dec(v_x_2166_);
v_res_2171_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(v_00_u03b2_2163_, v_x_2164_, v_x_13954__boxed_2169_, v_x_13955__boxed_2170_, v_x_2167_, v_x_2168_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object* v_00_u03b2_2172_, lean_object* v_x_2173_, size_t v_x_2174_, lean_object* v_x_2175_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_2173_, v_x_2174_, v_x_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object* v_00_u03b2_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
size_t v_x_13971__boxed_2181_; lean_object* v_res_2182_; 
v_x_13971__boxed_2181_ = lean_unbox_usize(v_x_2179_);
lean_dec(v_x_2179_);
v_res_2182_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(v_00_u03b2_2177_, v_x_2178_, v_x_13971__boxed_2181_, v_x_2180_);
lean_dec_ref(v_x_2180_);
lean_dec_ref(v_x_2178_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object* v_00_u03b2_2183_, lean_object* v_n_2184_, lean_object* v_k_2185_, lean_object* v_v_2186_){
_start:
{
lean_object* v___x_2187_; 
v___x_2187_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v_n_2184_, v_k_2185_, v_v_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object* v_00_u03b2_2188_, size_t v_depth_2189_, lean_object* v_keys_2190_, lean_object* v_vals_2191_, lean_object* v_heq_2192_, lean_object* v_i_2193_, lean_object* v_entries_2194_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_2189_, v_keys_2190_, v_vals_2191_, v_i_2193_, v_entries_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object* v_00_u03b2_2196_, lean_object* v_depth_2197_, lean_object* v_keys_2198_, lean_object* v_vals_2199_, lean_object* v_heq_2200_, lean_object* v_i_2201_, lean_object* v_entries_2202_){
_start:
{
size_t v_depth_boxed_2203_; lean_object* v_res_2204_; 
v_depth_boxed_2203_ = lean_unbox_usize(v_depth_2197_);
lean_dec(v_depth_2197_);
v_res_2204_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(v_00_u03b2_2196_, v_depth_boxed_2203_, v_keys_2198_, v_vals_2199_, v_heq_2200_, v_i_2201_, v_entries_2202_);
lean_dec_ref(v_vals_2199_);
lean_dec_ref(v_keys_2198_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object* v_00_u03b2_2205_, lean_object* v_keys_2206_, lean_object* v_vals_2207_, lean_object* v_heq_2208_, lean_object* v_i_2209_, lean_object* v_k_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_2206_, v_vals_2207_, v_i_2209_, v_k_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2212_, lean_object* v_keys_2213_, lean_object* v_vals_2214_, lean_object* v_heq_2215_, lean_object* v_i_2216_, lean_object* v_k_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(v_00_u03b2_2212_, v_keys_2213_, v_vals_2214_, v_heq_2215_, v_i_2216_, v_k_2217_);
lean_dec_ref(v_k_2217_);
lean_dec_ref(v_vals_2214_);
lean_dec_ref(v_keys_2213_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object* v_00_u03b2_2219_, lean_object* v_x_2220_, lean_object* v_x_2221_){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_2220_, v_x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object* v_00_u03b2_2223_, lean_object* v_x_2224_, lean_object* v_x_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(v_00_u03b2_2223_, v_x_2224_, v_x_2225_);
lean_dec_ref(v_x_2225_);
lean_dec_ref(v_x_2224_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object* v_00_u03b2_2227_, lean_object* v_x_2228_, lean_object* v_x_2229_, lean_object* v_x_2230_){
_start:
{
lean_object* v___x_2231_; 
v___x_2231_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v_x_2228_, v_x_2229_, v_x_2230_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object* v_00_u03b2_2232_, lean_object* v_x_2233_, lean_object* v_x_2234_, lean_object* v_x_2235_, lean_object* v_x_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_x_2233_, v_x_2234_, v_x_2235_, v_x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object* v_00_u03b2_2238_, lean_object* v_x_2239_, size_t v_x_2240_, lean_object* v_x_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_2239_, v_x_2240_, v_x_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object* v_00_u03b2_2243_, lean_object* v_x_2244_, lean_object* v_x_2245_, lean_object* v_x_2246_){
_start:
{
size_t v_x_14014__boxed_2247_; lean_object* v_res_2248_; 
v_x_14014__boxed_2247_ = lean_unbox_usize(v_x_2245_);
lean_dec(v_x_2245_);
v_res_2248_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(v_00_u03b2_2243_, v_x_2244_, v_x_14014__boxed_2247_, v_x_2246_);
lean_dec_ref(v_x_2246_);
lean_dec_ref(v_x_2244_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object* v_00_u03b2_2249_, lean_object* v_x_2250_, size_t v_x_2251_, size_t v_x_2252_, lean_object* v_x_2253_, lean_object* v_x_2254_){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_2250_, v_x_2251_, v_x_2252_, v_x_2253_, v_x_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object* v_00_u03b2_2256_, lean_object* v_x_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_, lean_object* v_x_2260_, lean_object* v_x_2261_){
_start:
{
size_t v_x_14025__boxed_2262_; size_t v_x_14026__boxed_2263_; lean_object* v_res_2264_; 
v_x_14025__boxed_2262_ = lean_unbox_usize(v_x_2258_);
lean_dec(v_x_2258_);
v_x_14026__boxed_2263_ = lean_unbox_usize(v_x_2259_);
lean_dec(v_x_2259_);
v_res_2264_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(v_00_u03b2_2256_, v_x_2257_, v_x_14025__boxed_2262_, v_x_14026__boxed_2263_, v_x_2260_, v_x_2261_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object* v_00_u03b2_2265_, lean_object* v_keys_2266_, lean_object* v_vals_2267_, lean_object* v_heq_2268_, lean_object* v_i_2269_, lean_object* v_k_2270_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_2266_, v_vals_2267_, v_i_2269_, v_k_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object* v_00_u03b2_2272_, lean_object* v_keys_2273_, lean_object* v_vals_2274_, lean_object* v_heq_2275_, lean_object* v_i_2276_, lean_object* v_k_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(v_00_u03b2_2272_, v_keys_2273_, v_vals_2274_, v_heq_2275_, v_i_2276_, v_k_2277_);
lean_dec_ref(v_k_2277_);
lean_dec_ref(v_vals_2274_);
lean_dec_ref(v_keys_2273_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object* v_00_u03b2_2279_, lean_object* v_n_2280_, lean_object* v_k_2281_, lean_object* v_v_2282_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v_n_2280_, v_k_2281_, v_v_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object* v_00_u03b2_2284_, size_t v_depth_2285_, lean_object* v_keys_2286_, lean_object* v_vals_2287_, lean_object* v_heq_2288_, lean_object* v_i_2289_, lean_object* v_entries_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_2285_, v_keys_2286_, v_vals_2287_, v_i_2289_, v_entries_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object* v_00_u03b2_2292_, lean_object* v_depth_2293_, lean_object* v_keys_2294_, lean_object* v_vals_2295_, lean_object* v_heq_2296_, lean_object* v_i_2297_, lean_object* v_entries_2298_){
_start:
{
size_t v_depth_boxed_2299_; lean_object* v_res_2300_; 
v_depth_boxed_2299_ = lean_unbox_usize(v_depth_2293_);
lean_dec(v_depth_2293_);
v_res_2300_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(v_00_u03b2_2292_, v_depth_boxed_2299_, v_keys_2294_, v_vals_2295_, v_heq_2296_, v_i_2297_, v_entries_2298_);
lean_dec_ref(v_vals_2295_);
lean_dec_ref(v_keys_2294_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23(lean_object* v_00_u03b2_2301_, lean_object* v_x_2302_, lean_object* v_x_2303_, lean_object* v_x_2304_, lean_object* v_x_2305_){
_start:
{
lean_object* v___x_2306_; 
v___x_2306_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(v_x_2302_, v_x_2303_, v_x_2304_, v_x_2305_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object* v_fn_2307_, lean_object* v_maxArgs_x3f_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v___x_2314_; 
v___x_2314_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2307_, v_maxArgs_x3f_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_);
return v___x_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object* v_fn_2315_, lean_object* v_maxArgs_x3f_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_Meta_getFunInfo(v_fn_2315_, v_maxArgs_x3f_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_);
lean_dec(v_a_2320_);
lean_dec_ref(v_a_2319_);
lean_dec(v_a_2318_);
lean_dec_ref(v_a_2317_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* v_fn_2323_, lean_object* v_nargs_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2330_, 0, v_nargs_2324_);
v___x_2331_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2323_, v___x_2330_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object* v_fn_2332_, lean_object* v_nargs_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lean_Meta_getFunInfoNArgs(v_fn_2332_, v_nargs_2333_, v_a_2334_, v_a_2335_, v_a_2336_, v_a_2337_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
lean_dec(v_a_2335_);
lean_dec_ref(v_a_2334_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object* v_info_2340_){
_start:
{
lean_object* v_paramInfo_2341_; lean_object* v___x_2342_; 
v_paramInfo_2341_ = lean_ctor_get(v_info_2340_, 0);
v___x_2342_ = lean_array_get_size(v_paramInfo_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object* v_info_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l_Lean_Meta_FunInfo_getArity(v_info_2343_);
lean_dec_ref(v_info_2343_);
return v_res_2344_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
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
res = runtime_initialize_Init_UDecidable(builtin);
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
lean_object* initialize_Init_UDecidable(uint8_t builtin);
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
res = initialize_Init_UDecidable(builtin);
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
