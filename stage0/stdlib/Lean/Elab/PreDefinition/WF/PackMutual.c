// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.PackMutual
// Imports: public import Lean.Meta.ArgsPacker public import Lean.Elab.PreDefinition.WF.Eqns
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
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_curryProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_Meta_ArgsPacker_numFuncs(lean_object*);
uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
uint8_t l_Lean_Meta_ArgsPacker_onlyOneUnary(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_withAppN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Failed to eta-expand partial application"};
static const lean_object* l_Lean_Elab_WF_withAppN___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_withAppN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_withAppN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_withAppN___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_withAppN___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_withAppN___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_WF_packCalls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_packCalls___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Elab.PreDefinition.WF.PackMutual"};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_packCalls___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Elab.WF.packCalls"};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__2___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_packCalls___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "assertion violation: fidx < fixedParamPerms.perms.size\n      "};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_packCalls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_packCalls___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_packCalls___closed__0 = (const lean_object*)&l_Lean_Elab_WF_packCalls___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___closed__1;
static const lean_string_object l_Lean_Elab_WF_packCalls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Not a forall: "};
static const lean_object* l_Lean_Elab_WF_packCalls___closed__2 = (const lean_object*)&l_Lean_Elab_WF_packCalls___closed__2_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___closed__3;
static const lean_string_object l_Lean_Elab_WF_packCalls___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_WF_packCalls___closed__4 = (const lean_object*)&l_Lean_Elab_WF_packCalls___closed__4_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mutualName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_unary"};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_mutualName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mutualName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 103, 179, 87, 16, 42, 175, 175)}};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_mutualName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_mutual"};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__2_value;
static const lean_ctor_object l_Lean_Elab_WF_mutualName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mutualName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(60, 96, 167, 116, 153, 200, 47, 59)}};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.WF.varyingVarNames"};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: xs.size = arity\n    "};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2;
static const lean_string_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "assertion violation: fixedParamPerms.perms[preDefIdx]!.size = arity\n    "};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4;
static const lean_array_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_varyingVarNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_varyingVarNames___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_varyingVarNames___closed__0 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.WF.preDefsFromUnaryNonRec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: arity = params.size\n        "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(lean_object* v_type_19_, lean_object* v_maxFVars_x3f_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, uint8_t v_whnfType_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v___f_29_; lean_object* v___x_30_; 
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_29_, 0, v_k_21_);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_19_, v_maxFVars_x3f_20_, v___f_29_, v_cleanupAnnotations_22_, v_whnfType_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_maxFVars_x3f_48_, lean_object* v_k_49_, lean_object* v_cleanupAnnotations_50_, lean_object* v_whnfType_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_57_; uint8_t v_whnfType_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_57_ = lean_unbox(v_cleanupAnnotations_50_);
v_whnfType_boxed_58_ = lean_unbox(v_whnfType_51_);
v_res_59_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_47_, v_maxFVars_x3f_48_, v_k_49_, v_cleanupAnnotations_boxed_57_, v_whnfType_boxed_58_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_type_61_, lean_object* v_maxFVars_x3f_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, uint8_t v_whnfType_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_61_, v_maxFVars_x3f_62_, v_k_63_, v_cleanupAnnotations_64_, v_whnfType_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_type_73_, lean_object* v_maxFVars_x3f_74_, lean_object* v_k_75_, lean_object* v_cleanupAnnotations_76_, lean_object* v_whnfType_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_83_; uint8_t v_whnfType_boxed_84_; lean_object* v_res_85_; 
v_cleanupAnnotations_boxed_83_ = lean_unbox(v_cleanupAnnotations_76_);
v_whnfType_boxed_84_ = lean_unbox(v_whnfType_77_);
v_res_85_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1(v_00_u03b1_72_, v_type_73_, v_maxFVars_x3f_74_, v_k_75_, v_cleanupAnnotations_boxed_83_, v_whnfType_boxed_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(lean_object* v_msgData_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v_env_93_; lean_object* v___x_94_; lean_object* v_toCold_95_; lean_object* v_mctx_96_; lean_object* v_lctx_97_; lean_object* v_options_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_92_ = lean_st_ref_get(v___y_90_);
v_env_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_ref(v_env_93_);
lean_dec(v___x_92_);
v___x_94_ = lean_st_ref_get(v___y_88_);
v_toCold_95_ = lean_ctor_get(v___y_89_, 0);
v_mctx_96_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_96_);
lean_dec(v___x_94_);
v_lctx_97_ = lean_ctor_get(v___y_87_, 2);
v_options_98_ = lean_ctor_get(v_toCold_95_, 2);
lean_inc_ref(v_options_98_);
lean_inc_ref(v_lctx_97_);
v___x_99_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_99_, 0, v_env_93_);
lean_ctor_set(v___x_99_, 1, v_mctx_96_);
lean_ctor_set(v___x_99_, 2, v_lctx_97_);
lean_ctor_set(v___x_99_, 3, v_options_98_);
v___x_100_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v_msgData_86_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0___boxed(lean_object* v_msgData_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(v_msgData_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_ref_115_; lean_object* v___x_116_; lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_125_; 
v_ref_115_ = lean_ctor_get(v___y_112_, 2);
v___x_116_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(v_msg_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_125_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
lean_inc(v_ref_115_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_ref_115_);
lean_ctor_set(v___x_121_, 1, v_a_117_);
if (v_isShared_120_ == 0)
{
lean_ctor_set_tag(v___x_119_, 1);
lean_ctor_set(v___x_119_, 0, v___x_121_);
v___x_123_ = v___x_119_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg___boxed(lean_object* v_msg_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v_msg_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_132_;
}
}
static lean_object* _init_l_Lean_Elab_WF_withAppN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(l_Lean_Elab_WF_withAppN___lam__0___closed__0));
v___x_135_ = l_Lean_stringToMessageData(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0(lean_object* v_args_136_, lean_object* v_k_137_, uint8_t v___x_138_, lean_object* v_missing_139_, lean_object* v_xs_140_, lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = lean_array_get_size(v_xs_140_);
v___x_155_ = lean_nat_dec_lt(v___x_154_, v_missing_139_);
if (v___x_155_ == 0)
{
goto v___jp_147_;
}
else
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec_ref(v_k_137_);
lean_dec_ref(v_args_136_);
v___x_156_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___lam__0___closed__1, &l_Lean_Elab_WF_withAppN___lam__0___closed__1_once, _init_l_Lean_Elab_WF_withAppN___lam__0___closed__1);
v___x_157_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v___x_156_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
v___jp_147_:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = l_Array_append___redArg(v_args_136_, v_xs_140_);
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_143_);
lean_inc_ref(v___y_142_);
v___x_149_ = lean_apply_6(v_k_137_, v___x_148_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, lean_box(0));
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; uint8_t v___x_151_; uint8_t v___x_152_; lean_object* v___x_153_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = 1;
v___x_152_ = 1;
v___x_153_ = l_Lean_Meta_mkLambdaFVars(v_xs_140_, v_a_150_, v___x_138_, v___x_151_, v___x_138_, v___x_151_, v___x_152_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
return v___x_153_;
}
else
{
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0___boxed(lean_object* v_args_166_, lean_object* v_k_167_, lean_object* v___x_168_, lean_object* v_missing_169_, lean_object* v_xs_170_, lean_object* v_x_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
uint8_t v___x_2277__boxed_177_; lean_object* v_res_178_; 
v___x_2277__boxed_177_ = lean_unbox(v___x_168_);
v_res_178_ = l_Lean_Elab_WF_withAppN___lam__0(v_args_166_, v_k_167_, v___x_2277__boxed_177_, v_missing_169_, v_xs_170_, v_x_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec_ref(v_x_171_);
lean_dec_ref(v_xs_170_);
lean_dec(v_missing_169_);
return v_res_178_;
}
}
static lean_object* _init_l_Lean_Elab_WF_withAppN___closed__0(void){
_start:
{
lean_object* v___x_179_; lean_object* v_dummy_180_; 
v___x_179_ = lean_box(0);
v_dummy_180_ = l_Lean_Expr_sort___override(v___x_179_);
return v_dummy_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN(lean_object* v_n_181_, lean_object* v_e_182_, lean_object* v_k_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_dummy_189_; lean_object* v_nargs_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v_args_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v_dummy_189_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___closed__0, &l_Lean_Elab_WF_withAppN___closed__0_once, _init_l_Lean_Elab_WF_withAppN___closed__0);
v_nargs_190_ = l_Lean_Expr_getAppNumArgs(v_e_182_);
lean_inc(v_nargs_190_);
v___x_191_ = lean_mk_array(v_nargs_190_, v_dummy_189_);
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_nat_sub(v_nargs_190_, v___x_192_);
lean_dec(v_nargs_190_);
lean_inc_ref(v_e_182_);
v_args_194_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_182_, v___x_191_, v___x_193_);
v___x_195_ = lean_array_get_size(v_args_194_);
v___x_196_ = lean_nat_dec_le(v_n_181_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v_missing_197_; lean_object* v___x_198_; lean_object* v___f_199_; lean_object* v___x_200_; 
v_missing_197_ = lean_nat_sub(v_n_181_, v___x_195_);
lean_dec(v_n_181_);
v___x_198_ = lean_box(v___x_196_);
lean_inc(v_missing_197_);
v___f_199_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_withAppN___lam__0___boxed), 11, 4);
lean_closure_set(v___f_199_, 0, v_args_194_);
lean_closure_set(v___f_199_, 1, v_k_183_);
lean_closure_set(v___f_199_, 2, v___x_198_);
lean_closure_set(v___f_199_, 3, v_missing_197_);
lean_inc(v___y_187_);
lean_inc_ref(v___y_186_);
lean_inc(v___y_185_);
lean_inc_ref(v___y_184_);
v___x_200_ = lean_infer_type(v_e_182_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_209_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_209_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 1);
lean_ctor_set(v___x_203_, 0, v_missing_197_);
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_missing_197_);
v___x_206_ = v_reuseFailAlloc_208_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_a_201_, v___x_206_, v___f_199_, v___x_196_, v___x_196_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
return v___x_207_;
}
}
}
else
{
lean_dec_ref(v___f_199_);
lean_dec(v_missing_197_);
return v___x_200_;
}
}
else
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec_ref(v_e_182_);
v___x_210_ = lean_unsigned_to_nat(0u);
lean_inc(v_n_181_);
lean_inc_ref(v_args_194_);
v___x_211_ = l_Array_toSubarray___redArg(v_args_194_, v___x_210_, v_n_181_);
v___x_212_ = l_Subarray_copy___redArg(v___x_211_);
lean_inc(v___y_187_);
lean_inc_ref(v___y_186_);
lean_inc(v___y_185_);
lean_inc_ref(v___y_184_);
v___x_213_ = lean_apply_6(v_k_183_, v___x_212_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, lean_box(0));
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_228_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_228_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_228_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_228_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v_lower_219_; lean_object* v_upper_220_; uint8_t v___x_227_; 
v___x_227_ = lean_nat_dec_le(v_n_181_, v___x_210_);
if (v___x_227_ == 0)
{
v_lower_219_ = v_n_181_;
v_upper_220_ = v___x_195_;
goto v___jp_218_;
}
else
{
lean_dec(v_n_181_);
v_lower_219_ = v___x_210_;
v_upper_220_ = v___x_195_;
goto v___jp_218_;
}
v___jp_218_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_221_ = l_Array_toSubarray___redArg(v_args_194_, v_lower_219_, v_upper_220_);
v___x_222_ = l_Subarray_copy___redArg(v___x_221_);
v___x_223_ = l_Lean_mkAppN(v_a_214_, v___x_222_);
lean_dec_ref(v___x_222_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_223_);
v___x_225_ = v___x_216_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
else
{
lean_dec_ref(v_args_194_);
lean_dec(v_n_181_);
return v___x_213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___boxed(lean_object* v_n_229_, lean_object* v_e_230_, lean_object* v_k_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Elab_WF_withAppN(v_n_229_, v_e_230_, v_k_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0(lean_object* v_00_u03b1_238_, lean_object* v_msg_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v_msg_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___boxed(lean_object* v_00_u03b1_246_, lean_object* v_msg_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0(v_00_u03b1_246_, v_msg_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
return v_res_253_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Lean_Meta_instInhabitedMetaM___redArg();
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1(lean_object* v_msg_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_1528__overap_262_; lean_object* v___x_263_; 
v___x_261_ = lean_obj_once(&l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0, &l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0_once, _init_l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0);
v___x_1528__overap_262_ = lean_panic_fn_borrowed(v___x_261_, v_msg_255_);
lean_inc(v___y_259_);
lean_inc_ref(v___y_258_);
lean_inc(v___y_257_);
lean_inc_ref(v___y_256_);
v___x_263_ = lean_apply_5(v___x_1528__overap_262_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, lean_box(0));
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1___boxed(lean_object* v_msg_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_panic___at___00Lean_Elab_WF_packCalls_spec__1(v_msg_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0(lean_object* v_x_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__0___closed__0));
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0___boxed(lean_object* v_x_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Elab_WF_packCalls___lam__0(v_x_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec_ref(v_x_281_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1(lean_object* v___x_288_, lean_object* v_argsPacker_289_, lean_object* v___x_290_, lean_object* v_val_291_, lean_object* v_newF_292_, lean_object* v_args_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v___x_288_, v_args_293_);
v___x_300_ = l_Lean_Meta_ArgsPacker_pack(v_argsPacker_289_, v___x_290_, v_val_291_, v___x_299_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec_ref(v___x_299_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_309_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_309_ == 0)
{
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_305_ = l_Lean_Expr_app___override(v_newF_292_, v_a_301_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_305_);
v___x_307_ = v___x_303_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
else
{
lean_dec_ref(v_newF_292_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1___boxed(lean_object* v___x_310_, lean_object* v_argsPacker_311_, lean_object* v___x_312_, lean_object* v_val_313_, lean_object* v_newF_314_, lean_object* v_args_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_Elab_WF_packCalls___lam__1(v___x_310_, v_argsPacker_311_, v___x_312_, v_val_313_, v_newF_314_, v_args_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
lean_dec_ref(v_args_315_);
lean_dec_ref(v_argsPacker_311_);
lean_dec_ref(v___x_310_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(lean_object* v_xs_322_, lean_object* v_v_323_, lean_object* v_i_324_){
_start:
{
lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_325_ = lean_array_get_size(v_xs_322_);
v___x_326_ = lean_nat_dec_lt(v_i_324_, v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; 
lean_dec(v_i_324_);
v___x_327_ = lean_box(0);
return v___x_327_;
}
else
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = lean_array_fget_borrowed(v_xs_322_, v_i_324_);
v___x_329_ = lean_name_eq(v___x_328_, v_v_323_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_unsigned_to_nat(1u);
v___x_331_ = lean_nat_add(v_i_324_, v___x_330_);
lean_dec(v_i_324_);
v_i_324_ = v___x_331_;
goto _start;
}
else
{
lean_object* v___x_333_; 
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v_i_324_);
return v___x_333_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2___boxed(lean_object* v_xs_334_, lean_object* v_v_335_, lean_object* v_i_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(v_xs_334_, v_v_335_, v_i_336_);
lean_dec(v_v_335_);
lean_dec_ref(v_xs_334_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(lean_object* v_xs_338_, lean_object* v_v_339_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(v_xs_338_, v_v_339_, v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0___boxed(lean_object* v_xs_342_, lean_object* v_v_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(v_xs_342_, v_v_343_);
lean_dec(v_v_343_);
lean_dec_ref(v_xs_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(lean_object* v_xs_345_, lean_object* v_v_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(v_xs_345_, v_v_346_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_box(0);
return v___x_348_;
}
else
{
lean_object* v_val_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_356_; 
v_val_349_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_356_ == 0)
{
v___x_351_ = v___x_347_;
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_val_349_);
lean_dec(v___x_347_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_val_349_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0___boxed(lean_object* v_xs_357_, lean_object* v_v_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(v_xs_357_, v_v_358_);
lean_dec(v_v_358_);
lean_dec_ref(v_xs_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(lean_object* v_val_360_, lean_object* v___x_361_, size_t v_sz_362_, size_t v_i_363_, lean_object* v_bs_364_){
_start:
{
uint8_t v___x_365_; 
v___x_365_ = lean_usize_dec_lt(v_i_363_, v_sz_362_);
if (v___x_365_ == 0)
{
return v_bs_364_;
}
else
{
lean_object* v_v_366_; lean_object* v___x_367_; lean_object* v_bs_x27_368_; uint8_t v___y_370_; 
v_v_366_ = lean_array_uget(v_bs_364_, v_i_363_);
v___x_367_ = lean_unsigned_to_nat(0u);
v_bs_x27_368_ = lean_array_uset(v_bs_364_, v_i_363_, v___x_367_);
if (lean_obj_tag(v_v_366_) == 0)
{
uint8_t v___x_376_; 
v___x_376_ = 0;
v___y_370_ = v___x_376_;
goto v___jp_369_;
}
else
{
uint8_t v___x_377_; 
lean_dec_ref_known(v_v_366_, 1);
v___x_377_ = lean_nat_dec_lt(v_val_360_, v___x_361_);
v___y_370_ = v___x_377_;
goto v___jp_369_;
}
v___jp_369_:
{
size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_371_ = ((size_t)1ULL);
v___x_372_ = lean_usize_add(v_i_363_, v___x_371_);
v___x_373_ = lean_box(v___y_370_);
v___x_374_ = lean_array_uset(v_bs_x27_368_, v_i_363_, v___x_373_);
v_i_363_ = v___x_372_;
v_bs_364_ = v___x_374_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2___boxed(lean_object* v_val_378_, lean_object* v___x_379_, lean_object* v_sz_380_, lean_object* v_i_381_, lean_object* v_bs_382_){
_start:
{
size_t v_sz_boxed_383_; size_t v_i_boxed_384_; lean_object* v_res_385_; 
v_sz_boxed_383_ = lean_unbox_usize(v_sz_380_);
lean_dec(v_sz_380_);
v_i_boxed_384_ = lean_unbox_usize(v_i_381_);
lean_dec(v_i_381_);
v_res_385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(v_val_378_, v___x_379_, v_sz_boxed_383_, v_i_boxed_384_, v_bs_382_);
lean_dec(v___x_379_);
lean_dec(v_val_378_);
return v_res_385_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___lam__2___closed__3(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_389_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__2));
v___x_390_ = lean_unsigned_to_nat(6u);
v___x_391_ = lean_unsigned_to_nat(55u);
v___x_392_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__1));
v___x_393_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_394_ = l_mkPanicMessageWithDecl(v___x_393_, v___x_392_, v___x_391_, v___x_390_, v___x_389_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2(lean_object* v_funNames_395_, lean_object* v_fixedParamPerms_396_, lean_object* v___x_397_, lean_object* v_argsPacker_398_, lean_object* v___x_399_, lean_object* v_newF_400_, lean_object* v_e_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = l_Lean_Expr_getAppFn(v_e_401_);
v___x_408_ = l_Lean_Expr_isConst(v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec_ref(v___x_407_);
lean_dec_ref(v_newF_400_);
lean_dec_ref(v___x_399_);
lean_dec_ref(v_argsPacker_398_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v_e_401_);
v___x_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
return v___x_410_;
}
else
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = l_Lean_Expr_constName_x21(v___x_407_);
lean_dec_ref(v___x_407_);
v___x_412_ = l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(v_funNames_395_, v___x_411_);
lean_dec(v___x_411_);
if (lean_obj_tag(v___x_412_) == 1)
{
lean_object* v_val_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_448_; 
v_val_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_448_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_448_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_val_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_448_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v_perms_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v_perms_417_ = lean_ctor_get(v_fixedParamPerms_396_, 1);
v___x_418_ = lean_array_get_size(v_perms_417_);
v___x_419_ = lean_nat_dec_lt(v_val_413_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; lean_object* v___x_421_; 
lean_del_object(v___x_415_);
lean_dec(v_val_413_);
lean_dec_ref(v_e_401_);
lean_dec_ref(v_newF_400_);
lean_dec_ref(v___x_399_);
lean_dec_ref(v_argsPacker_398_);
v___x_420_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___lam__2___closed__3, &l_Lean_Elab_WF_packCalls___lam__2___closed__3_once, _init_l_Lean_Elab_WF_packCalls___lam__2___closed__3);
v___x_421_ = l_panic___at___00Lean_Elab_WF_packCalls_spec__1(v___x_420_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
return v___x_421_;
}
else
{
lean_object* v___x_422_; lean_object* v___f_423_; size_t v_sz_424_; size_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_422_ = lean_array_get_borrowed(v___x_397_, v_perms_417_, v_val_413_);
lean_inc(v_val_413_);
lean_inc_n(v___x_422_, 2);
v___f_423_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_packCalls___lam__1___boxed), 11, 5);
lean_closure_set(v___f_423_, 0, v___x_422_);
lean_closure_set(v___f_423_, 1, v_argsPacker_398_);
lean_closure_set(v___f_423_, 2, v___x_399_);
lean_closure_set(v___f_423_, 3, v_val_413_);
lean_closure_set(v___f_423_, 4, v_newF_400_);
v_sz_424_ = lean_array_size(v___x_422_);
v___x_425_ = ((size_t)0ULL);
v___x_426_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(v_val_413_, v___x_418_, v_sz_424_, v___x_425_, v___x_422_);
lean_dec(v_val_413_);
v___x_427_ = lean_array_get_size(v___x_426_);
lean_dec_ref(v___x_426_);
v___x_428_ = l_Lean_Elab_WF_withAppN(v___x_427_, v_e_401_, v___f_423_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_439_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_439_ == 0)
{
v___x_431_ = v___x_428_;
v_isShared_432_ = v_isSharedCheck_439_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_428_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_439_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_416_ == 0)
{
lean_ctor_set_tag(v___x_415_, 0);
lean_ctor_set(v___x_415_, 0, v_a_429_);
v___x_434_ = v___x_415_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_438_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
lean_object* v___x_436_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_434_);
v___x_436_ = v___x_431_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_del_object(v___x_415_);
v_a_440_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_428_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_428_);
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
}
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec(v___x_412_);
lean_dec_ref(v_newF_400_);
lean_dec_ref(v___x_399_);
lean_dec_ref(v_argsPacker_398_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v_e_401_);
v___x_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
return v___x_450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2___boxed(lean_object* v_funNames_451_, lean_object* v_fixedParamPerms_452_, lean_object* v___x_453_, lean_object* v_argsPacker_454_, lean_object* v___x_455_, lean_object* v_newF_456_, lean_object* v_e_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Elab_WF_packCalls___lam__2(v_funNames_451_, v_fixedParamPerms_452_, v___x_453_, v_argsPacker_454_, v___x_455_, v_newF_456_, v_e_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec_ref(v___x_453_);
lean_dec_ref(v_fixedParamPerms_452_);
lean_dec_ref(v_funNames_451_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_object* v_00_u03b1_464_, lean_object* v_x_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_apply_1(v_x_465_, lean_box(0));
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0___boxed(lean_object* v_00_u03b1_473_, lean_object* v_x_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(v_00_u03b1_473_, v_x_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
return v_res_480_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = l_Lean_maxRecDepthErrorMessage;
v___x_487_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3);
v___x_489_ = l_Lean_MessageData_ofFormat(v___x_488_);
return v___x_489_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4);
v___x_491_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2));
v___x_492_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_490_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(lean_object* v_ref_493_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v_ref_493_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___boxed(lean_object* v_ref_498_, lean_object* v___y_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(v_ref_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(lean_object* v_x_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___y_509_; lean_object* v_toCold_518_; lean_object* v_currRecDepth_519_; lean_object* v_ref_520_; uint8_t v_diag_521_; uint8_t v_suppressElabErrors_522_; lean_object* v_maxRecDepth_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v_toCold_518_ = lean_ctor_get(v___y_505_, 0);
v_currRecDepth_519_ = lean_ctor_get(v___y_505_, 1);
v_ref_520_ = lean_ctor_get(v___y_505_, 2);
v_diag_521_ = lean_ctor_get_uint8(v___y_505_, sizeof(void*)*3);
v_suppressElabErrors_522_ = lean_ctor_get_uint8(v___y_505_, sizeof(void*)*3 + 1);
v_maxRecDepth_528_ = lean_ctor_get(v_toCold_518_, 3);
v___x_529_ = lean_unsigned_to_nat(0u);
v___x_530_ = lean_nat_dec_eq(v_maxRecDepth_528_, v___x_529_);
if (v___x_530_ == 0)
{
uint8_t v___x_531_; 
v___x_531_ = lean_nat_dec_eq(v_currRecDepth_519_, v_maxRecDepth_528_);
if (v___x_531_ == 0)
{
goto v___jp_523_;
}
else
{
lean_object* v___x_532_; 
lean_dec_ref(v_x_501_);
lean_inc(v_ref_520_);
v___x_532_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(v_ref_520_);
v___y_509_ = v___x_532_;
goto v___jp_508_;
}
}
else
{
goto v___jp_523_;
}
v___jp_508_:
{
if (lean_obj_tag(v___y_509_) == 0)
{
return v___y_509_;
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
v_a_510_ = lean_ctor_get(v___y_509_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___y_509_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___y_509_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___y_509_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
v___jp_523_:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = lean_nat_add(v_currRecDepth_519_, v___x_524_);
lean_inc(v_ref_520_);
lean_inc_ref(v_toCold_518_);
v___x_526_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_526_, 0, v_toCold_518_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
lean_ctor_set(v___x_526_, 2, v_ref_520_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*3, v_diag_521_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*3 + 1, v_suppressElabErrors_522_);
lean_inc(v___y_506_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
v___x_527_ = lean_apply_6(v_x_501_, v___y_502_, v___y_503_, v___y_504_, v___x_526_, v___y_506_, lean_box(0));
v___y_509_ = v___x_527_;
goto v___jp_508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg___boxed(lean_object* v_x_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(v_x_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0(lean_object* v_k_541_, lean_object* v___y_542_, lean_object* v_b_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v___x_549_; 
lean_inc(v___y_547_);
lean_inc_ref(v___y_546_);
lean_inc(v___y_545_);
lean_inc_ref(v___y_544_);
lean_inc(v___y_542_);
v___x_549_ = lean_apply_7(v_k_541_, v_b_543_, v___y_542_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, lean_box(0));
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed(lean_object* v_k_550_, lean_object* v___y_551_, lean_object* v_b_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0(v_k_550_, v___y_551_, v_b_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_551_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(lean_object* v_name_559_, lean_object* v_type_560_, lean_object* v_val_561_, lean_object* v_k_562_, uint8_t v_nondep_563_, uint8_t v_kind_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___f_571_; lean_object* v___x_572_; 
lean_inc(v___y_565_);
v___f_571_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_571_, 0, v_k_562_);
lean_closure_set(v___f_571_, 1, v___y_565_);
v___x_572_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_559_, v_type_560_, v_val_561_, v___f_571_, v_nondep_563_, v_kind_564_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
if (lean_obj_tag(v___x_572_) == 0)
{
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg___boxed(lean_object* v_name_581_, lean_object* v_type_582_, lean_object* v_val_583_, lean_object* v_k_584_, lean_object* v_nondep_585_, lean_object* v_kind_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
uint8_t v_nondep_boxed_593_; uint8_t v_kind_boxed_594_; lean_object* v_res_595_; 
v_nondep_boxed_593_ = lean_unbox(v_nondep_585_);
v_kind_boxed_594_ = lean_unbox(v_kind_586_);
v_res_595_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(v_name_581_, v_type_582_, v_val_583_, v_k_584_, v_nondep_boxed_593_, v_kind_boxed_594_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(lean_object* v_name_596_, uint8_t v_bi_597_, lean_object* v_type_598_, lean_object* v_k_599_, uint8_t v_kind_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v___f_607_; lean_object* v___x_608_; 
lean_inc(v___y_601_);
v___f_607_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_607_, 0, v_k_599_);
lean_closure_set(v___f_607_, 1, v___y_601_);
v___x_608_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_596_, v_bi_597_, v_type_598_, v___f_607_, v_kind_600_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_608_) == 0)
{
return v___x_608_;
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_608_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_608_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___boxed(lean_object* v_name_617_, lean_object* v_bi_618_, lean_object* v_type_619_, lean_object* v_k_620_, lean_object* v_kind_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
uint8_t v_bi_boxed_628_; uint8_t v_kind_boxed_629_; lean_object* v_res_630_; 
v_bi_boxed_628_ = lean_unbox(v_bi_618_);
v_kind_boxed_629_ = lean_unbox(v_kind_621_);
v_res_630_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_name_617_, v_bi_boxed_628_, v_type_619_, v_k_620_, v_kind_boxed_629_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_object* v_00_u03b1_631_, lean_object* v_x_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_apply_1(v_x_632_, lean_box(0));
v___x_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0___boxed(lean_object* v_00_u03b1_640_, lean_object* v_x_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(v_00_u03b1_640_, v_x_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(lean_object* v_a_648_, lean_object* v_x_649_){
_start:
{
if (lean_obj_tag(v_x_649_) == 0)
{
lean_object* v___x_650_; 
v___x_650_ = lean_box(0);
return v___x_650_;
}
else
{
lean_object* v_key_651_; lean_object* v_value_652_; lean_object* v_tail_653_; uint8_t v___x_654_; 
v_key_651_ = lean_ctor_get(v_x_649_, 0);
v_value_652_ = lean_ctor_get(v_x_649_, 1);
v_tail_653_ = lean_ctor_get(v_x_649_, 2);
v___x_654_ = l_Lean_ExprStructEq_beq(v_key_651_, v_a_648_);
if (v___x_654_ == 0)
{
v_x_649_ = v_tail_653_;
goto _start;
}
else
{
lean_object* v___x_656_; 
lean_inc(v_value_652_);
v___x_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_656_, 0, v_value_652_);
return v___x_656_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg___boxed(lean_object* v_a_657_, lean_object* v_x_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(v_a_657_, v_x_658_);
lean_dec(v_x_658_);
lean_dec_ref(v_a_657_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(lean_object* v_m_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_buckets_662_; lean_object* v___x_663_; uint64_t v___x_664_; uint64_t v___x_665_; uint64_t v___x_666_; uint64_t v_fold_667_; uint64_t v___x_668_; uint64_t v___x_669_; uint64_t v___x_670_; size_t v___x_671_; size_t v___x_672_; size_t v___x_673_; size_t v___x_674_; size_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v_buckets_662_ = lean_ctor_get(v_m_660_, 1);
v___x_663_ = lean_array_get_size(v_buckets_662_);
v___x_664_ = l_Lean_ExprStructEq_hash(v_a_661_);
v___x_665_ = 32ULL;
v___x_666_ = lean_uint64_shift_right(v___x_664_, v___x_665_);
v_fold_667_ = lean_uint64_xor(v___x_664_, v___x_666_);
v___x_668_ = 16ULL;
v___x_669_ = lean_uint64_shift_right(v_fold_667_, v___x_668_);
v___x_670_ = lean_uint64_xor(v_fold_667_, v___x_669_);
v___x_671_ = lean_uint64_to_usize(v___x_670_);
v___x_672_ = lean_usize_of_nat(v___x_663_);
v___x_673_ = ((size_t)1ULL);
v___x_674_ = lean_usize_sub(v___x_672_, v___x_673_);
v___x_675_ = lean_usize_land(v___x_671_, v___x_674_);
v___x_676_ = lean_array_uget_borrowed(v_buckets_662_, v___x_675_);
v___x_677_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(v_a_661_, v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg___boxed(lean_object* v_m_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(v_m_678_, v_a_679_);
lean_dec_ref(v_a_679_);
lean_dec_ref(v_m_678_);
return v_res_680_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(lean_object* v_a_681_, lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
uint8_t v___x_683_; 
v___x_683_ = 0;
return v___x_683_;
}
else
{
lean_object* v_key_684_; lean_object* v_tail_685_; uint8_t v___x_686_; 
v_key_684_ = lean_ctor_get(v_x_682_, 0);
v_tail_685_ = lean_ctor_get(v_x_682_, 2);
v___x_686_ = l_Lean_ExprStructEq_beq(v_key_684_, v_a_681_);
if (v___x_686_ == 0)
{
v_x_682_ = v_tail_685_;
goto _start;
}
else
{
return v___x_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg___boxed(lean_object* v_a_688_, lean_object* v_x_689_){
_start:
{
uint8_t v_res_690_; lean_object* v_r_691_; 
v_res_690_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(v_a_688_, v_x_689_);
lean_dec(v_x_689_);
lean_dec_ref(v_a_688_);
v_r_691_ = lean_box(v_res_690_);
return v_r_691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(lean_object* v_x_692_, lean_object* v_x_693_){
_start:
{
if (lean_obj_tag(v_x_693_) == 0)
{
return v_x_692_;
}
else
{
lean_object* v_key_694_; lean_object* v_value_695_; lean_object* v_tail_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_719_; 
v_key_694_ = lean_ctor_get(v_x_693_, 0);
v_value_695_ = lean_ctor_get(v_x_693_, 1);
v_tail_696_ = lean_ctor_get(v_x_693_, 2);
v_isSharedCheck_719_ = !lean_is_exclusive(v_x_693_);
if (v_isSharedCheck_719_ == 0)
{
v___x_698_ = v_x_693_;
v_isShared_699_ = v_isSharedCheck_719_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_tail_696_);
lean_inc(v_value_695_);
lean_inc(v_key_694_);
lean_dec(v_x_693_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_719_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; uint64_t v___x_701_; uint64_t v___x_702_; uint64_t v___x_703_; uint64_t v_fold_704_; uint64_t v___x_705_; uint64_t v___x_706_; uint64_t v___x_707_; size_t v___x_708_; size_t v___x_709_; size_t v___x_710_; size_t v___x_711_; size_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_700_ = lean_array_get_size(v_x_692_);
v___x_701_ = l_Lean_ExprStructEq_hash(v_key_694_);
v___x_702_ = 32ULL;
v___x_703_ = lean_uint64_shift_right(v___x_701_, v___x_702_);
v_fold_704_ = lean_uint64_xor(v___x_701_, v___x_703_);
v___x_705_ = 16ULL;
v___x_706_ = lean_uint64_shift_right(v_fold_704_, v___x_705_);
v___x_707_ = lean_uint64_xor(v_fold_704_, v___x_706_);
v___x_708_ = lean_uint64_to_usize(v___x_707_);
v___x_709_ = lean_usize_of_nat(v___x_700_);
v___x_710_ = ((size_t)1ULL);
v___x_711_ = lean_usize_sub(v___x_709_, v___x_710_);
v___x_712_ = lean_usize_land(v___x_708_, v___x_711_);
v___x_713_ = lean_array_uget_borrowed(v_x_692_, v___x_712_);
lean_inc(v___x_713_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 2, v___x_713_);
v___x_715_ = v___x_698_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_key_694_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_value_695_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v___x_713_);
v___x_715_ = v_reuseFailAlloc_718_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_716_; 
v___x_716_ = lean_array_uset(v_x_692_, v___x_712_, v___x_715_);
v_x_692_ = v___x_716_;
v_x_693_ = v_tail_696_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(lean_object* v_i_720_, lean_object* v_source_721_, lean_object* v_target_722_){
_start:
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = lean_array_get_size(v_source_721_);
v___x_724_ = lean_nat_dec_lt(v_i_720_, v___x_723_);
if (v___x_724_ == 0)
{
lean_dec_ref(v_source_721_);
lean_dec(v_i_720_);
return v_target_722_;
}
else
{
lean_object* v_es_725_; lean_object* v___x_726_; lean_object* v_source_727_; lean_object* v_target_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_es_725_ = lean_array_fget(v_source_721_, v_i_720_);
v___x_726_ = lean_box(0);
v_source_727_ = lean_array_fset(v_source_721_, v_i_720_, v___x_726_);
v_target_728_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(v_target_722_, v_es_725_);
v___x_729_ = lean_unsigned_to_nat(1u);
v___x_730_ = lean_nat_add(v_i_720_, v___x_729_);
lean_dec(v_i_720_);
v_i_720_ = v___x_730_;
v_source_721_ = v_source_727_;
v_target_722_ = v_target_728_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(lean_object* v_data_732_){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_nbuckets_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_733_ = lean_array_get_size(v_data_732_);
v___x_734_ = lean_unsigned_to_nat(2u);
v_nbuckets_735_ = lean_nat_mul(v___x_733_, v___x_734_);
v___x_736_ = lean_unsigned_to_nat(0u);
v___x_737_ = lean_box(0);
v___x_738_ = lean_mk_array(v_nbuckets_735_, v___x_737_);
v___x_739_ = lean_array_propagate_mark(v_data_732_, v___x_738_);
v___x_740_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(v___x_736_, v_data_732_, v___x_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(lean_object* v_a_741_, lean_object* v_b_742_, lean_object* v_x_743_){
_start:
{
if (lean_obj_tag(v_x_743_) == 0)
{
lean_dec(v_b_742_);
lean_dec_ref(v_a_741_);
return v_x_743_;
}
else
{
lean_object* v_key_744_; lean_object* v_value_745_; lean_object* v_tail_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_758_; 
v_key_744_ = lean_ctor_get(v_x_743_, 0);
v_value_745_ = lean_ctor_get(v_x_743_, 1);
v_tail_746_ = lean_ctor_get(v_x_743_, 2);
v_isSharedCheck_758_ = !lean_is_exclusive(v_x_743_);
if (v_isSharedCheck_758_ == 0)
{
v___x_748_ = v_x_743_;
v_isShared_749_ = v_isSharedCheck_758_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_tail_746_);
lean_inc(v_value_745_);
lean_inc(v_key_744_);
lean_dec(v_x_743_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_758_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
uint8_t v___x_750_; 
v___x_750_ = l_Lean_ExprStructEq_beq(v_key_744_, v_a_741_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_751_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(v_a_741_, v_b_742_, v_tail_746_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 2, v___x_751_);
v___x_753_ = v___x_748_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_key_744_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_value_745_);
lean_ctor_set(v_reuseFailAlloc_754_, 2, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
else
{
lean_object* v___x_756_; 
lean_dec(v_value_745_);
lean_dec(v_key_744_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v_b_742_);
lean_ctor_set(v___x_748_, 0, v_a_741_);
v___x_756_ = v___x_748_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_741_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_b_742_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_tail_746_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(lean_object* v_m_759_, lean_object* v_a_760_, lean_object* v_b_761_){
_start:
{
lean_object* v_size_762_; lean_object* v_buckets_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_806_; 
v_size_762_ = lean_ctor_get(v_m_759_, 0);
v_buckets_763_ = lean_ctor_get(v_m_759_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_m_759_);
if (v_isSharedCheck_806_ == 0)
{
v___x_765_ = v_m_759_;
v_isShared_766_ = v_isSharedCheck_806_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_buckets_763_);
lean_inc(v_size_762_);
lean_dec(v_m_759_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_806_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_767_; uint64_t v___x_768_; uint64_t v___x_769_; uint64_t v___x_770_; uint64_t v_fold_771_; uint64_t v___x_772_; uint64_t v___x_773_; uint64_t v___x_774_; size_t v___x_775_; size_t v___x_776_; size_t v___x_777_; size_t v___x_778_; size_t v___x_779_; lean_object* v_bkt_780_; uint8_t v___x_781_; 
v___x_767_ = lean_array_get_size(v_buckets_763_);
v___x_768_ = l_Lean_ExprStructEq_hash(v_a_760_);
v___x_769_ = 32ULL;
v___x_770_ = lean_uint64_shift_right(v___x_768_, v___x_769_);
v_fold_771_ = lean_uint64_xor(v___x_768_, v___x_770_);
v___x_772_ = 16ULL;
v___x_773_ = lean_uint64_shift_right(v_fold_771_, v___x_772_);
v___x_774_ = lean_uint64_xor(v_fold_771_, v___x_773_);
v___x_775_ = lean_uint64_to_usize(v___x_774_);
v___x_776_ = lean_usize_of_nat(v___x_767_);
v___x_777_ = ((size_t)1ULL);
v___x_778_ = lean_usize_sub(v___x_776_, v___x_777_);
v___x_779_ = lean_usize_land(v___x_775_, v___x_778_);
v_bkt_780_ = lean_array_uget_borrowed(v_buckets_763_, v___x_779_);
v___x_781_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(v_a_760_, v_bkt_780_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; lean_object* v_size_x27_783_; lean_object* v___x_784_; lean_object* v_buckets_x27_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_782_ = lean_unsigned_to_nat(1u);
v_size_x27_783_ = lean_nat_add(v_size_762_, v___x_782_);
lean_dec(v_size_762_);
lean_inc(v_bkt_780_);
v___x_784_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_784_, 0, v_a_760_);
lean_ctor_set(v___x_784_, 1, v_b_761_);
lean_ctor_set(v___x_784_, 2, v_bkt_780_);
v_buckets_x27_785_ = lean_array_uset(v_buckets_763_, v___x_779_, v___x_784_);
v___x_786_ = lean_unsigned_to_nat(4u);
v___x_787_ = lean_nat_mul(v_size_x27_783_, v___x_786_);
v___x_788_ = lean_unsigned_to_nat(3u);
v___x_789_ = lean_nat_div(v___x_787_, v___x_788_);
lean_dec(v___x_787_);
v___x_790_ = lean_array_get_size(v_buckets_x27_785_);
v___x_791_ = lean_nat_dec_le(v___x_789_, v___x_790_);
lean_dec(v___x_789_);
if (v___x_791_ == 0)
{
lean_object* v_val_792_; lean_object* v___x_794_; 
v_val_792_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(v_buckets_x27_785_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v_val_792_);
lean_ctor_set(v___x_765_, 0, v_size_x27_783_);
v___x_794_ = v___x_765_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_size_x27_783_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_val_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
else
{
lean_object* v___x_797_; 
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v_buckets_x27_785_);
lean_ctor_set(v___x_765_, 0, v_size_x27_783_);
v___x_797_ = v___x_765_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_size_x27_783_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v_buckets_x27_785_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
else
{
lean_object* v___x_799_; lean_object* v_buckets_x27_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
lean_inc(v_bkt_780_);
v___x_799_ = lean_box(0);
v_buckets_x27_800_ = lean_array_uset(v_buckets_763_, v___x_779_, v___x_799_);
v___x_801_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(v_a_760_, v_b_761_, v_bkt_780_);
v___x_802_ = lean_array_uset(v_buckets_x27_800_, v___x_779_, v___x_801_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v___x_802_);
v___x_804_ = v___x_765_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_size_762_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2(lean_object* v___y_807_, lean_object* v_e_808_, lean_object* v_a_809_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_811_ = lean_st_ref_take(v___y_807_);
v___x_812_ = lean_box(0);
v___x_813_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(v___x_811_, v_e_808_, v_a_809_);
v___x_814_ = lean_st_ref_put(v___y_807_, v___x_813_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2___boxed(lean_object* v___y_815_, lean_object* v_e_816_, lean_object* v_a_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2(v___y_815_, v_e_816_, v_a_817_);
lean_dec(v___y_815_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0___boxed(lean_object* v_fvars_820_, lean_object* v_pre_821_, lean_object* v_post_822_, lean_object* v_usedLetOnly_823_, lean_object* v_skipConstInApp_824_, lean_object* v_skipInstances_825_, lean_object* v_body_826_, lean_object* v_x_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
uint8_t v_usedLetOnly_boxed_834_; uint8_t v_skipConstInApp_boxed_835_; uint8_t v_skipInstances_boxed_836_; lean_object* v_res_837_; 
v_usedLetOnly_boxed_834_ = lean_unbox(v_usedLetOnly_823_);
v_skipConstInApp_boxed_835_ = lean_unbox(v_skipConstInApp_824_);
v_skipInstances_boxed_836_ = lean_unbox(v_skipInstances_825_);
v_res_837_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0(v_fvars_820_, v_pre_821_, v_post_822_, v_usedLetOnly_boxed_834_, v_skipConstInApp_boxed_835_, v_skipInstances_boxed_836_, v_body_826_, v_x_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0(lean_object* v_fvars_841_, lean_object* v_pre_842_, lean_object* v_post_843_, uint8_t v_usedLetOnly_844_, uint8_t v_skipConstInApp_845_, uint8_t v_skipInstances_846_, lean_object* v_body_847_, lean_object* v_x_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_array_push(v_fvars_841_, v_x_848_);
v___x_856_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(v_pre_842_, v_post_843_, v_usedLetOnly_844_, v_skipConstInApp_845_, v_skipInstances_846_, v___x_855_, v_body_847_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0___boxed(lean_object* v_fvars_857_, lean_object* v_pre_858_, lean_object* v_post_859_, lean_object* v_usedLetOnly_860_, lean_object* v_skipConstInApp_861_, lean_object* v_skipInstances_862_, lean_object* v_body_863_, lean_object* v_x_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
uint8_t v_usedLetOnly_boxed_871_; uint8_t v_skipConstInApp_boxed_872_; uint8_t v_skipInstances_boxed_873_; lean_object* v_res_874_; 
v_usedLetOnly_boxed_871_ = lean_unbox(v_usedLetOnly_860_);
v_skipConstInApp_boxed_872_ = lean_unbox(v_skipConstInApp_861_);
v_skipInstances_boxed_873_ = lean_unbox(v_skipInstances_862_);
v_res_874_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0(v_fvars_857_, v_pre_858_, v_post_859_, v_usedLetOnly_boxed_871_, v_skipConstInApp_boxed_872_, v_skipInstances_boxed_873_, v_body_863_, v_x_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(lean_object* v_pre_875_, lean_object* v_post_876_, uint8_t v_usedLetOnly_877_, uint8_t v_skipConstInApp_878_, uint8_t v_skipInstances_879_, lean_object* v_e_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v___x_887_; 
lean_inc_ref(v_post_876_);
lean_inc(v___y_885_);
lean_inc_ref(v___y_884_);
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
lean_inc_ref(v_e_880_);
v___x_887_ = lean_apply_6(v_post_876_, v_e_880_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, lean_box(0));
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_906_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_906_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_906_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_906_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
switch(lean_obj_tag(v_a_888_))
{
case 0:
{
lean_object* v_e_892_; lean_object* v___x_894_; 
lean_dec_ref(v_e_880_);
lean_dec_ref(v_post_876_);
lean_dec_ref(v_pre_875_);
v_e_892_ = lean_ctor_get(v_a_888_, 0);
lean_inc_ref(v_e_892_);
lean_dec_ref_known(v_a_888_, 1);
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v_e_892_);
v___x_894_ = v___x_890_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_e_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
case 1:
{
lean_object* v_e_896_; lean_object* v___x_897_; 
lean_del_object(v___x_890_);
lean_dec_ref(v_e_880_);
v_e_896_ = lean_ctor_get(v_a_888_, 0);
lean_inc_ref(v_e_896_);
lean_dec_ref_known(v_a_888_, 1);
v___x_897_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_875_, v_post_876_, v_usedLetOnly_877_, v_skipConstInApp_878_, v_skipInstances_879_, v_e_896_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
return v___x_897_;
}
default: 
{
lean_object* v_e_x3f_898_; 
lean_dec_ref(v_post_876_);
lean_dec_ref(v_pre_875_);
v_e_x3f_898_ = lean_ctor_get(v_a_888_, 0);
lean_inc(v_e_x3f_898_);
lean_dec_ref_known(v_a_888_, 1);
if (lean_obj_tag(v_e_x3f_898_) == 0)
{
lean_object* v___x_900_; 
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v_e_880_);
v___x_900_ = v___x_890_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_e_880_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
else
{
lean_object* v_val_902_; lean_object* v___x_904_; 
lean_dec_ref(v_e_880_);
v_val_902_ = lean_ctor_get(v_e_x3f_898_, 0);
lean_inc(v_val_902_);
lean_dec_ref_known(v_e_x3f_898_, 1);
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v_val_902_);
v___x_904_ = v___x_890_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_val_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v_e_880_);
lean_dec_ref(v_post_876_);
lean_dec_ref(v_pre_875_);
v_a_907_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_887_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_887_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(lean_object* v_pre_915_, lean_object* v_post_916_, uint8_t v_usedLetOnly_917_, uint8_t v_skipConstInApp_918_, uint8_t v_skipInstances_919_, lean_object* v_fvars_920_, lean_object* v_e_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
if (lean_obj_tag(v_e_921_) == 6)
{
lean_object* v_binderName_928_; lean_object* v_binderType_929_; lean_object* v_body_930_; uint8_t v_binderInfo_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___f_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v_binderName_928_ = lean_ctor_get(v_e_921_, 0);
lean_inc(v_binderName_928_);
v_binderType_929_ = lean_ctor_get(v_e_921_, 1);
lean_inc_ref(v_binderType_929_);
v_body_930_ = lean_ctor_get(v_e_921_, 2);
lean_inc_ref(v_body_930_);
v_binderInfo_931_ = lean_ctor_get_uint8(v_e_921_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_921_, 3);
v___x_932_ = lean_box(v_usedLetOnly_917_);
v___x_933_ = lean_box(v_skipConstInApp_918_);
v___x_934_ = lean_box(v_skipInstances_919_);
lean_inc_ref(v_post_916_);
lean_inc_ref(v_pre_915_);
lean_inc_ref(v_fvars_920_);
v___f_935_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0___boxed), 14, 7);
lean_closure_set(v___f_935_, 0, v_fvars_920_);
lean_closure_set(v___f_935_, 1, v_pre_915_);
lean_closure_set(v___f_935_, 2, v_post_916_);
lean_closure_set(v___f_935_, 3, v___x_932_);
lean_closure_set(v___f_935_, 4, v___x_933_);
lean_closure_set(v___f_935_, 5, v___x_934_);
lean_closure_set(v___f_935_, 6, v_body_930_);
v___x_936_ = lean_expr_instantiate_rev(v_binderType_929_, v_fvars_920_);
lean_dec_ref(v_fvars_920_);
lean_dec_ref(v_binderType_929_);
v___x_937_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_915_, v_post_916_, v_usedLetOnly_917_, v_skipConstInApp_918_, v_skipInstances_919_, v___x_936_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; uint8_t v___x_939_; lean_object* v___x_940_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = 0;
v___x_940_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_binderName_928_, v_binderInfo_931_, v_a_938_, v___f_935_, v___x_939_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
return v___x_940_;
}
else
{
lean_dec_ref(v___f_935_);
lean_dec(v_binderName_928_);
return v___x_937_;
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = lean_expr_instantiate_rev(v_e_921_, v_fvars_920_);
lean_dec_ref(v_e_921_);
lean_inc_ref(v_post_916_);
lean_inc_ref(v_pre_915_);
v___x_942_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_915_, v_post_916_, v_usedLetOnly_917_, v_skipConstInApp_918_, v_skipInstances_919_, v___x_941_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; uint8_t v___x_944_; uint8_t v___x_945_; uint8_t v___x_946_; lean_object* v___x_947_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v___x_942_, 1);
v___x_944_ = 0;
v___x_945_ = 1;
v___x_946_ = 1;
v___x_947_ = l_Lean_Meta_mkLambdaFVars(v_fvars_920_, v_a_943_, v___x_944_, v_usedLetOnly_917_, v___x_944_, v___x_945_, v___x_946_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
lean_dec_ref(v_fvars_920_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
v___x_949_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_915_, v_post_916_, v_usedLetOnly_917_, v_skipConstInApp_918_, v_skipInstances_919_, v_a_948_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
return v___x_949_;
}
else
{
lean_dec_ref(v_post_916_);
lean_dec_ref(v_pre_915_);
return v___x_947_;
}
}
else
{
lean_dec_ref(v_fvars_920_);
lean_dec_ref(v_post_916_);
lean_dec_ref(v_pre_915_);
return v___x_942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0(lean_object* v_fvars_950_, lean_object* v_pre_951_, lean_object* v_post_952_, uint8_t v_usedLetOnly_953_, uint8_t v_skipConstInApp_954_, uint8_t v_skipInstances_955_, lean_object* v_body_956_, lean_object* v_x_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = lean_array_push(v_fvars_950_, v_x_957_);
v___x_965_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(v_pre_951_, v_post_952_, v_usedLetOnly_953_, v_skipConstInApp_954_, v_skipInstances_955_, v___x_964_, v_body_956_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0___boxed(lean_object* v_fvars_966_, lean_object* v_pre_967_, lean_object* v_post_968_, lean_object* v_usedLetOnly_969_, lean_object* v_skipConstInApp_970_, lean_object* v_skipInstances_971_, lean_object* v_body_972_, lean_object* v_x_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
uint8_t v_usedLetOnly_boxed_980_; uint8_t v_skipConstInApp_boxed_981_; uint8_t v_skipInstances_boxed_982_; lean_object* v_res_983_; 
v_usedLetOnly_boxed_980_ = lean_unbox(v_usedLetOnly_969_);
v_skipConstInApp_boxed_981_ = lean_unbox(v_skipConstInApp_970_);
v_skipInstances_boxed_982_ = lean_unbox(v_skipInstances_971_);
v_res_983_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0(v_fvars_966_, v_pre_967_, v_post_968_, v_usedLetOnly_boxed_980_, v_skipConstInApp_boxed_981_, v_skipInstances_boxed_982_, v_body_972_, v_x_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(lean_object* v_pre_984_, lean_object* v_post_985_, uint8_t v_usedLetOnly_986_, uint8_t v_skipConstInApp_987_, uint8_t v_skipInstances_988_, lean_object* v_fvars_989_, lean_object* v_e_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
if (lean_obj_tag(v_e_990_) == 8)
{
lean_object* v_declName_997_; lean_object* v_type_998_; lean_object* v_value_999_; lean_object* v_body_1000_; uint8_t v_nondep_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_declName_997_ = lean_ctor_get(v_e_990_, 0);
lean_inc(v_declName_997_);
v_type_998_ = lean_ctor_get(v_e_990_, 1);
lean_inc_ref(v_type_998_);
v_value_999_ = lean_ctor_get(v_e_990_, 2);
lean_inc_ref(v_value_999_);
v_body_1000_ = lean_ctor_get(v_e_990_, 3);
lean_inc_ref(v_body_1000_);
v_nondep_1001_ = lean_ctor_get_uint8(v_e_990_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_990_, 4);
v___x_1002_ = lean_box(v_usedLetOnly_986_);
v___x_1003_ = lean_box(v_skipConstInApp_987_);
v___x_1004_ = lean_box(v_skipInstances_988_);
lean_inc_ref_n(v_post_985_, 2);
lean_inc_ref_n(v_pre_984_, 2);
lean_inc_ref(v_fvars_989_);
v___f_1005_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1005_, 0, v_fvars_989_);
lean_closure_set(v___f_1005_, 1, v_pre_984_);
lean_closure_set(v___f_1005_, 2, v_post_985_);
lean_closure_set(v___f_1005_, 3, v___x_1002_);
lean_closure_set(v___f_1005_, 4, v___x_1003_);
lean_closure_set(v___f_1005_, 5, v___x_1004_);
lean_closure_set(v___f_1005_, 6, v_body_1000_);
v___x_1006_ = lean_expr_instantiate_rev(v_type_998_, v_fvars_989_);
lean_dec_ref(v_type_998_);
v___x_1007_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_984_, v_post_985_, v_usedLetOnly_986_, v_skipConstInApp_987_, v_skipInstances_988_, v___x_1006_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v___x_1009_ = lean_expr_instantiate_rev(v_value_999_, v_fvars_989_);
lean_dec_ref(v_fvars_989_);
lean_dec_ref(v_value_999_);
v___x_1010_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_984_, v_post_985_, v_usedLetOnly_986_, v_skipConstInApp_987_, v_skipInstances_988_, v___x_1009_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = 0;
v___x_1013_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(v_declName_997_, v_a_1008_, v_a_1011_, v___f_1005_, v_nondep_1001_, v___x_1012_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
return v___x_1013_;
}
else
{
lean_dec(v_a_1008_);
lean_dec_ref(v___f_1005_);
lean_dec(v_declName_997_);
return v___x_1010_;
}
}
else
{
lean_dec_ref(v___f_1005_);
lean_dec_ref(v_value_999_);
lean_dec(v_declName_997_);
lean_dec_ref(v_fvars_989_);
lean_dec_ref(v_post_985_);
lean_dec_ref(v_pre_984_);
return v___x_1007_;
}
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = lean_expr_instantiate_rev(v_e_990_, v_fvars_989_);
lean_dec_ref(v_e_990_);
lean_inc_ref(v_post_985_);
lean_inc_ref(v_pre_984_);
v___x_1015_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_984_, v_post_985_, v_usedLetOnly_986_, v_skipConstInApp_987_, v_skipInstances_988_, v___x_1014_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; uint8_t v___x_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1016_);
lean_dec_ref_known(v___x_1015_, 1);
v___x_1017_ = 0;
v___x_1018_ = 1;
v___x_1019_ = l_Lean_Meta_mkLetFVars(v_fvars_989_, v_a_1016_, v_usedLetOnly_986_, v___x_1017_, v___x_1018_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
lean_dec_ref(v_fvars_989_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1021_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_984_, v_post_985_, v_usedLetOnly_986_, v_skipConstInApp_987_, v_skipInstances_988_, v_a_1020_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
return v___x_1021_;
}
else
{
lean_dec_ref(v_post_985_);
lean_dec_ref(v_pre_984_);
return v___x_1019_;
}
}
else
{
lean_dec_ref(v_fvars_989_);
lean_dec_ref(v_post_985_);
lean_dec_ref(v_pre_984_);
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(lean_object* v_pre_1022_, lean_object* v_post_1023_, uint8_t v_usedLetOnly_1024_, uint8_t v_skipConstInApp_1025_, uint8_t v_skipInstances_1026_, size_t v_sz_1027_, size_t v_i_1028_, lean_object* v_bs_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
uint8_t v___x_1036_; 
v___x_1036_ = lean_usize_dec_lt(v_i_1028_, v_sz_1027_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; 
lean_dec_ref(v_post_1023_);
lean_dec_ref(v_pre_1022_);
v___x_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1037_, 0, v_bs_1029_);
return v___x_1037_;
}
else
{
lean_object* v_v_1038_; lean_object* v___x_1039_; lean_object* v_bs_x27_1040_; lean_object* v___x_1041_; 
v_v_1038_ = lean_array_uget(v_bs_1029_, v_i_1028_);
v___x_1039_ = lean_unsigned_to_nat(0u);
v_bs_x27_1040_ = lean_array_uset(v_bs_1029_, v_i_1028_, v___x_1039_);
lean_inc_ref(v_post_1023_);
lean_inc_ref(v_pre_1022_);
v___x_1041_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1022_, v_post_1023_, v_usedLetOnly_1024_, v_skipConstInApp_1025_, v_skipInstances_1026_, v_v_1038_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; size_t v___x_1043_; size_t v___x_1044_; lean_object* v___x_1045_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref_known(v___x_1041_, 1);
v___x_1043_ = ((size_t)1ULL);
v___x_1044_ = lean_usize_add(v_i_1028_, v___x_1043_);
v___x_1045_ = lean_array_uset(v_bs_x27_1040_, v_i_1028_, v_a_1042_);
v_i_1028_ = v___x_1044_;
v_bs_1029_ = v___x_1045_;
goto _start;
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec_ref(v_bs_x27_1040_);
lean_dec_ref(v_post_1023_);
lean_dec_ref(v_pre_1022_);
v_a_1047_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1041_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1041_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(lean_object* v_upperBound_1055_, lean_object* v___x_1056_, lean_object* v_pre_1057_, lean_object* v_post_1058_, uint8_t v_usedLetOnly_1059_, uint8_t v_skipConstInApp_1060_, uint8_t v_skipInstances_1061_, lean_object* v_a_1062_, lean_object* v_b_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_a_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; uint8_t v___x_1079_; 
v___x_1079_ = lean_nat_dec_lt(v_a_1062_, v_upperBound_1055_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; 
lean_dec(v_a_1062_);
lean_dec_ref(v_post_1058_);
lean_dec_ref(v_pre_1057_);
v___x_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1080_, 0, v_b_1063_);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1081_ = lean_array_fget_borrowed(v_b_1063_, v_a_1062_);
v___x_1082_ = lean_array_get_size(v___x_1056_);
v___x_1083_ = lean_nat_dec_lt(v_a_1062_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; 
lean_inc(v___x_1081_);
lean_inc_ref(v_post_1058_);
lean_inc_ref(v_pre_1057_);
v___x_1084_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1057_, v_post_1058_, v_usedLetOnly_1059_, v_skipConstInApp_1060_, v_skipInstances_1061_, v___x_1081_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1086_ = lean_array_fset(v_b_1063_, v_a_1062_, v_a_1085_);
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = lean_nat_add(v_a_1062_, v___x_1087_);
lean_dec(v_a_1062_);
v_a_1062_ = v___x_1088_;
v_b_1063_ = v___x_1086_;
goto _start;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v_b_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_post_1058_);
lean_dec_ref(v_pre_1057_);
v_a_1090_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1084_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1084_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
else
{
lean_object* v___x_1098_; uint8_t v_isInstance_1099_; 
v___x_1098_ = lean_array_fget_borrowed(v___x_1056_, v_a_1062_);
v_isInstance_1099_ = lean_ctor_get_uint8(v___x_1098_, sizeof(void*)*1 + 4);
if (v_isInstance_1099_ == 0)
{
lean_object* v___x_1100_; 
lean_inc(v___x_1081_);
lean_inc_ref(v_post_1058_);
lean_inc_ref(v_pre_1057_);
v___x_1100_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1057_, v_post_1058_, v_usedLetOnly_1059_, v_skipConstInApp_1060_, v_skipInstances_1061_, v___x_1081_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1102_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
lean_dec_ref_known(v___x_1100_, 1);
v___x_1102_ = lean_array_fset(v_b_1063_, v_a_1062_, v_a_1101_);
v_a_1071_ = v___x_1102_;
v___y_1072_ = v___y_1065_;
v___y_1073_ = v___y_1066_;
v___y_1074_ = v___y_1067_;
v___y_1075_ = v___y_1068_;
goto v___jp_1070_;
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec_ref(v_b_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_post_1058_);
lean_dec_ref(v_pre_1057_);
v_a_1103_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1100_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1100_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
v_a_1071_ = v_b_1063_;
v___y_1072_ = v___y_1065_;
v___y_1073_ = v___y_1066_;
v___y_1074_ = v___y_1067_;
v___y_1075_ = v___y_1068_;
goto v___jp_1070_;
}
}
}
v___jp_1070_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = lean_unsigned_to_nat(1u);
v___x_1077_ = lean_nat_add(v_a_1062_, v___x_1076_);
lean_dec(v_a_1062_);
v_a_1062_ = v___x_1077_;
v_b_1063_ = v_a_1071_;
v___y_1065_ = v___y_1072_;
v___y_1066_ = v___y_1073_;
v___y_1067_ = v___y_1074_;
v___y_1068_ = v___y_1075_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(uint8_t v_skipInstances_1111_, lean_object* v_pre_1112_, lean_object* v_post_1113_, uint8_t v_usedLetOnly_1114_, uint8_t v_skipConstInApp_1115_, lean_object* v_x_1116_, lean_object* v_x_1117_, lean_object* v_x_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v_f_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; 
if (lean_obj_tag(v_x_1116_) == 5)
{
lean_object* v_fn_1174_; lean_object* v_arg_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_fn_1174_ = lean_ctor_get(v_x_1116_, 0);
lean_inc_ref(v_fn_1174_);
v_arg_1175_ = lean_ctor_get(v_x_1116_, 1);
lean_inc_ref(v_arg_1175_);
lean_dec_ref_known(v_x_1116_, 2);
v___x_1176_ = lean_array_set(v_x_1117_, v_x_1118_, v_arg_1175_);
v___x_1177_ = lean_unsigned_to_nat(1u);
v___x_1178_ = lean_nat_sub(v_x_1118_, v___x_1177_);
lean_dec(v_x_1118_);
v_x_1116_ = v_fn_1174_;
v_x_1117_ = v___x_1176_;
v_x_1118_ = v___x_1178_;
goto _start;
}
else
{
lean_dec(v_x_1118_);
if (v_skipConstInApp_1115_ == 0)
{
goto v___jp_1171_;
}
else
{
uint8_t v___x_1180_; 
v___x_1180_ = l_Lean_Expr_isConst(v_x_1116_);
if (v___x_1180_ == 0)
{
goto v___jp_1171_;
}
else
{
v_f_1126_ = v_x_1116_;
v___y_1127_ = v___y_1119_;
v___y_1128_ = v___y_1120_;
v___y_1129_ = v___y_1121_;
v___y_1130_ = v___y_1122_;
v___y_1131_ = v___y_1123_;
goto v___jp_1125_;
}
}
}
v___jp_1125_:
{
if (v_skipInstances_1111_ == 0)
{
size_t v_sz_1132_; size_t v___x_1133_; lean_object* v___x_1134_; 
v_sz_1132_ = lean_array_size(v_x_1117_);
v___x_1133_ = ((size_t)0ULL);
lean_inc_ref(v_post_1113_);
lean_inc_ref(v_pre_1112_);
v___x_1134_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(v_pre_1112_, v_post_1113_, v_usedLetOnly_1114_, v_skipConstInApp_1115_, v_skipInstances_1111_, v_sz_1132_, v___x_1133_, v_x_1117_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref_known(v___x_1134_, 1);
v___x_1136_ = l_Lean_mkAppN(v_f_1126_, v_a_1135_);
lean_dec(v_a_1135_);
v___x_1137_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1112_, v_post_1113_, v_usedLetOnly_1114_, v_skipConstInApp_1115_, v_skipInstances_1111_, v___x_1136_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1137_;
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
lean_dec_ref(v_f_1126_);
lean_dec_ref(v_post_1113_);
lean_dec_ref(v_pre_1112_);
v_a_1138_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1134_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1134_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = lean_array_get_size(v_x_1117_);
lean_inc_ref(v_f_1126_);
v___x_1147_ = l_Lean_Meta_getFunInfoNArgs(v_f_1126_, v___x_1146_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v_paramInfo_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v_paramInfo_1149_ = lean_ctor_get(v_a_1148_, 0);
lean_inc_ref(v_paramInfo_1149_);
lean_dec(v_a_1148_);
v___x_1150_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1113_);
lean_inc_ref(v_pre_1112_);
v___x_1151_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(v___x_1146_, v_paramInfo_1149_, v_pre_1112_, v_post_1113_, v_usedLetOnly_1114_, v_skipConstInApp_1115_, v_skipInstances_1111_, v___x_1150_, v_x_1117_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec_ref(v_paramInfo_1149_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1153_ = l_Lean_mkAppN(v_f_1126_, v_a_1152_);
lean_dec(v_a_1152_);
v___x_1154_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1112_, v_post_1113_, v_usedLetOnly_1114_, v_skipConstInApp_1115_, v_skipInstances_1111_, v___x_1153_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1154_;
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1162_; 
lean_dec_ref(v_f_1126_);
lean_dec_ref(v_post_1113_);
lean_dec_ref(v_pre_1112_);
v_a_1155_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1157_ = v___x_1151_;
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1151_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1160_; 
if (v_isShared_1158_ == 0)
{
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
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_dec_ref(v_f_1126_);
lean_dec_ref(v_x_1117_);
lean_dec_ref(v_post_1113_);
lean_dec_ref(v_pre_1112_);
v_a_1163_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1147_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1147_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_1171_:
{
lean_object* v___x_1172_; 
lean_inc_ref(v_post_1113_);
lean_inc_ref(v_pre_1112_);
v___x_1172_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1112_, v_post_1113_, v_usedLetOnly_1114_, v_skipConstInApp_1115_, v_skipInstances_1111_, v_x_1116_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v_f_1126_ = v_a_1173_;
v___y_1127_ = v___y_1119_;
v___y_1128_ = v___y_1120_;
v___y_1129_ = v___y_1121_;
v___y_1130_ = v___y_1122_;
v___y_1131_ = v___y_1123_;
goto v___jp_1125_;
}
else
{
lean_dec_ref(v_x_1117_);
lean_dec_ref(v_post_1113_);
lean_dec_ref(v_pre_1112_);
return v___x_1172_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1(lean_object* v___x_1181_, lean_object* v_pre_1182_, lean_object* v_e_1183_, lean_object* v_post_1184_, uint8_t v_usedLetOnly_1185_, uint8_t v_skipConstInApp_1186_, uint8_t v_skipInstances_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Core_checkSystem(v___x_1181_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v___x_1195_; 
lean_dec_ref_known(v___x_1194_, 1);
lean_inc_ref(v_pre_1182_);
lean_inc(v___y_1192_);
lean_inc_ref(v___y_1191_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc_ref(v_e_1183_);
v___x_1195_ = lean_apply_6(v_pre_1182_, v_e_1183_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, lean_box(0));
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1244_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1198_ = v___x_1195_;
v_isShared_1199_ = v_isSharedCheck_1244_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1195_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1244_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___y_1201_; 
switch(lean_obj_tag(v_a_1196_))
{
case 0:
{
lean_object* v_e_1236_; lean_object* v___x_1238_; 
lean_dec_ref(v_post_1184_);
lean_dec_ref(v_e_1183_);
lean_dec_ref(v_pre_1182_);
v_e_1236_ = lean_ctor_get(v_a_1196_, 0);
lean_inc_ref(v_e_1236_);
lean_dec_ref_known(v_a_1196_, 1);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 0, v_e_1236_);
v___x_1238_ = v___x_1198_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_e_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
case 1:
{
lean_object* v_e_1240_; lean_object* v___x_1241_; 
lean_del_object(v___x_1198_);
lean_dec_ref(v_e_1183_);
v_e_1240_ = lean_ctor_get(v_a_1196_, 0);
lean_inc_ref(v_e_1240_);
lean_dec_ref_known(v_a_1196_, 1);
v___x_1241_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v_e_1240_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1241_;
}
default: 
{
lean_object* v_e_x3f_1242_; 
lean_del_object(v___x_1198_);
v_e_x3f_1242_ = lean_ctor_get(v_a_1196_, 0);
lean_inc(v_e_x3f_1242_);
lean_dec_ref_known(v_a_1196_, 1);
if (lean_obj_tag(v_e_x3f_1242_) == 0)
{
v___y_1201_ = v_e_1183_;
goto v___jp_1200_;
}
else
{
lean_object* v_val_1243_; 
lean_dec_ref(v_e_1183_);
v_val_1243_ = lean_ctor_get(v_e_x3f_1242_, 0);
lean_inc(v_val_1243_);
lean_dec_ref_known(v_e_x3f_1242_, 1);
v___y_1201_ = v_val_1243_;
goto v___jp_1200_;
}
}
}
v___jp_1200_:
{
switch(lean_obj_tag(v___y_1201_))
{
case 7:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0));
v___x_1203_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___x_1202_, v___y_1201_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1203_;
}
case 6:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0));
v___x_1205_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___x_1204_, v___y_1201_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1205_;
}
case 8:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0));
v___x_1207_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___x_1206_, v___y_1201_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1207_;
}
case 5:
{
lean_object* v_dummy_1208_; lean_object* v_nargs_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_dummy_1208_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___closed__0, &l_Lean_Elab_WF_withAppN___closed__0_once, _init_l_Lean_Elab_WF_withAppN___closed__0);
v_nargs_1209_ = l_Lean_Expr_getAppNumArgs(v___y_1201_);
lean_inc(v_nargs_1209_);
v___x_1210_ = lean_mk_array(v_nargs_1209_, v_dummy_1208_);
v___x_1211_ = lean_unsigned_to_nat(1u);
v___x_1212_ = lean_nat_sub(v_nargs_1209_, v___x_1211_);
lean_dec(v_nargs_1209_);
v___x_1213_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(v_skipInstances_1187_, v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v___y_1201_, v___x_1210_, v___x_1212_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1213_;
}
case 10:
{
lean_object* v_data_1214_; lean_object* v_expr_1215_; lean_object* v___x_1216_; 
v_data_1214_ = lean_ctor_get(v___y_1201_, 0);
v_expr_1215_ = lean_ctor_get(v___y_1201_, 1);
lean_inc_ref(v_expr_1215_);
lean_inc_ref(v_post_1184_);
lean_inc_ref(v_pre_1182_);
v___x_1216_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v_expr_1215_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; size_t v___x_1218_; size_t v___x_1219_; uint8_t v___x_1220_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1216_, 1);
v___x_1218_ = lean_ptr_addr(v_expr_1215_);
v___x_1219_ = lean_ptr_addr(v_a_1217_);
v___x_1220_ = lean_usize_dec_eq(v___x_1218_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
lean_inc(v_data_1214_);
lean_dec_ref_known(v___y_1201_, 2);
v___x_1221_ = l_Lean_Expr_mdata___override(v_data_1214_, v_a_1217_);
v___x_1222_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___x_1221_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1222_;
}
else
{
lean_object* v___x_1223_; 
lean_dec(v_a_1217_);
v___x_1223_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___y_1201_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1223_;
}
}
else
{
lean_dec_ref_known(v___y_1201_, 2);
lean_dec_ref(v_post_1184_);
lean_dec_ref(v_pre_1182_);
return v___x_1216_;
}
}
case 11:
{
lean_object* v_typeName_1224_; lean_object* v_idx_1225_; lean_object* v_struct_1226_; lean_object* v___x_1227_; 
v_typeName_1224_ = lean_ctor_get(v___y_1201_, 0);
v_idx_1225_ = lean_ctor_get(v___y_1201_, 1);
v_struct_1226_ = lean_ctor_get(v___y_1201_, 2);
lean_inc_ref(v_struct_1226_);
lean_inc_ref(v_post_1184_);
lean_inc_ref(v_pre_1182_);
v___x_1227_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v_struct_1226_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; size_t v___x_1229_; size_t v___x_1230_; uint8_t v___x_1231_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref_known(v___x_1227_, 1);
v___x_1229_ = lean_ptr_addr(v_struct_1226_);
v___x_1230_ = lean_ptr_addr(v_a_1228_);
v___x_1231_ = lean_usize_dec_eq(v___x_1229_, v___x_1230_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_inc(v_idx_1225_);
lean_inc(v_typeName_1224_);
lean_dec_ref_known(v___y_1201_, 3);
v___x_1232_ = l_Lean_Expr_proj___override(v_typeName_1224_, v_idx_1225_, v_a_1228_);
v___x_1233_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___x_1232_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1233_;
}
else
{
lean_object* v___x_1234_; 
lean_dec(v_a_1228_);
v___x_1234_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___y_1201_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1234_;
}
}
else
{
lean_dec_ref_known(v___y_1201_, 3);
lean_dec_ref(v_post_1184_);
lean_dec_ref(v_pre_1182_);
return v___x_1227_;
}
}
default: 
{
lean_object* v___x_1235_; 
v___x_1235_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1182_, v_post_1184_, v_usedLetOnly_1185_, v_skipConstInApp_1186_, v_skipInstances_1187_, v___y_1201_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1235_;
}
}
}
}
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec_ref(v_post_1184_);
lean_dec_ref(v_e_1183_);
lean_dec_ref(v_pre_1182_);
v_a_1245_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1195_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1195_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v_post_1184_);
lean_dec_ref(v_e_1183_);
lean_dec_ref(v_pre_1182_);
v_a_1253_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1194_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1194_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___boxed(lean_object* v___x_1261_, lean_object* v_pre_1262_, lean_object* v_e_1263_, lean_object* v_post_1264_, lean_object* v_usedLetOnly_1265_, lean_object* v_skipConstInApp_1266_, lean_object* v_skipInstances_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
uint8_t v_usedLetOnly_boxed_1274_; uint8_t v_skipConstInApp_boxed_1275_; uint8_t v_skipInstances_boxed_1276_; lean_object* v_res_1277_; 
v_usedLetOnly_boxed_1274_ = lean_unbox(v_usedLetOnly_1265_);
v_skipConstInApp_boxed_1275_ = lean_unbox(v_skipConstInApp_1266_);
v_skipInstances_boxed_1276_ = lean_unbox(v_skipInstances_1267_);
v_res_1277_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1(v___x_1261_, v_pre_1262_, v_e_1263_, v_post_1264_, v_usedLetOnly_boxed_1274_, v_skipConstInApp_boxed_1275_, v_skipInstances_boxed_1276_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(lean_object* v_pre_1278_, lean_object* v_post_1279_, uint8_t v_usedLetOnly_1280_, uint8_t v_skipConstInApp_1281_, uint8_t v_skipInstances_1282_, lean_object* v_e_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_inc(v___y_1284_);
v___x_1290_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1290_, 0, lean_box(0));
lean_closure_set(v___x_1290_, 1, lean_box(0));
lean_closure_set(v___x_1290_, 2, v___y_1284_);
v___x_1291_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_box(0), v___x_1290_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1326_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1326_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1326_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(v_a_1292_, v_e_1283_);
lean_dec(v_a_1292_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; 
lean_del_object(v___x_1294_);
v___x_1297_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0));
v___x_1298_ = lean_box(v_usedLetOnly_1280_);
v___x_1299_ = lean_box(v_skipConstInApp_1281_);
v___x_1300_ = lean_box(v_skipInstances_1282_);
lean_inc_ref(v_e_1283_);
v___f_1301_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___boxed), 13, 7);
lean_closure_set(v___f_1301_, 0, v___x_1297_);
lean_closure_set(v___f_1301_, 1, v_pre_1278_);
lean_closure_set(v___f_1301_, 2, v_e_1283_);
lean_closure_set(v___f_1301_, 3, v_post_1279_);
lean_closure_set(v___f_1301_, 4, v___x_1298_);
lean_closure_set(v___f_1301_, 5, v___x_1299_);
lean_closure_set(v___f_1301_, 6, v___x_1300_);
v___x_1302_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(v___f_1301_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___f_1304_; lean_object* v___x_1305_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc_n(v_a_1303_, 2);
lean_dec_ref_known(v___x_1302_, 1);
lean_inc(v___y_1284_);
v___f_1304_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1304_, 0, v___y_1284_);
lean_closure_set(v___f_1304_, 1, v_e_1283_);
lean_closure_set(v___f_1304_, 2, v_a_1303_);
v___x_1305_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_box(0), v___f_1304_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1312_ == 0)
{
lean_object* v_unused_1313_; 
v_unused_1313_ = lean_ctor_get(v___x_1305_, 0);
lean_dec(v_unused_1313_);
v___x_1307_ = v___x_1305_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_dec(v___x_1305_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v_a_1303_);
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_a_1303_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec(v_a_1303_);
v_a_1314_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1305_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1305_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
else
{
lean_dec_ref(v_e_1283_);
return v___x_1302_;
}
}
else
{
lean_object* v_val_1322_; lean_object* v___x_1324_; 
lean_dec_ref(v_e_1283_);
lean_dec_ref(v_post_1279_);
lean_dec_ref(v_pre_1278_);
v_val_1322_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_val_1322_);
lean_dec_ref_known(v___x_1296_, 1);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v_val_1322_);
v___x_1324_ = v___x_1294_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_val_1322_);
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
lean_dec_ref(v_e_1283_);
lean_dec_ref(v_post_1279_);
lean_dec_ref(v_pre_1278_);
v_a_1327_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1291_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1291_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(lean_object* v_pre_1335_, lean_object* v_post_1336_, uint8_t v_usedLetOnly_1337_, uint8_t v_skipConstInApp_1338_, uint8_t v_skipInstances_1339_, lean_object* v_fvars_1340_, lean_object* v_e_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
if (lean_obj_tag(v_e_1341_) == 7)
{
lean_object* v_binderName_1348_; lean_object* v_binderType_1349_; lean_object* v_body_1350_; uint8_t v_binderInfo_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___f_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_binderName_1348_ = lean_ctor_get(v_e_1341_, 0);
lean_inc(v_binderName_1348_);
v_binderType_1349_ = lean_ctor_get(v_e_1341_, 1);
lean_inc_ref(v_binderType_1349_);
v_body_1350_ = lean_ctor_get(v_e_1341_, 2);
lean_inc_ref(v_body_1350_);
v_binderInfo_1351_ = lean_ctor_get_uint8(v_e_1341_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1341_, 3);
v___x_1352_ = lean_box(v_usedLetOnly_1337_);
v___x_1353_ = lean_box(v_skipConstInApp_1338_);
v___x_1354_ = lean_box(v_skipInstances_1339_);
lean_inc_ref(v_post_1336_);
lean_inc_ref(v_pre_1335_);
lean_inc_ref(v_fvars_1340_);
v___f_1355_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1355_, 0, v_fvars_1340_);
lean_closure_set(v___f_1355_, 1, v_pre_1335_);
lean_closure_set(v___f_1355_, 2, v_post_1336_);
lean_closure_set(v___f_1355_, 3, v___x_1352_);
lean_closure_set(v___f_1355_, 4, v___x_1353_);
lean_closure_set(v___f_1355_, 5, v___x_1354_);
lean_closure_set(v___f_1355_, 6, v_body_1350_);
v___x_1356_ = lean_expr_instantiate_rev(v_binderType_1349_, v_fvars_1340_);
lean_dec_ref(v_fvars_1340_);
lean_dec_ref(v_binderType_1349_);
v___x_1357_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1335_, v_post_1336_, v_usedLetOnly_1337_, v_skipConstInApp_1338_, v_skipInstances_1339_, v___x_1356_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; uint8_t v___x_1359_; lean_object* v___x_1360_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1359_ = 0;
v___x_1360_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_binderName_1348_, v_binderInfo_1351_, v_a_1358_, v___f_1355_, v___x_1359_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
return v___x_1360_;
}
else
{
lean_dec_ref(v___f_1355_);
lean_dec(v_binderName_1348_);
return v___x_1357_;
}
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_expr_instantiate_rev(v_e_1341_, v_fvars_1340_);
lean_dec_ref(v_e_1341_);
lean_inc_ref(v_post_1336_);
lean_inc_ref(v_pre_1335_);
v___x_1362_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1335_, v_post_1336_, v_usedLetOnly_1337_, v_skipConstInApp_1338_, v_skipInstances_1339_, v___x_1361_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; uint8_t v___x_1364_; uint8_t v___x_1365_; uint8_t v___x_1366_; lean_object* v___x_1367_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1362_, 1);
v___x_1364_ = 0;
v___x_1365_ = 1;
v___x_1366_ = 1;
v___x_1367_ = l_Lean_Meta_mkForallFVars(v_fvars_1340_, v_a_1363_, v___x_1364_, v_usedLetOnly_1337_, v___x_1365_, v___x_1366_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec_ref(v_fvars_1340_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1369_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref_known(v___x_1367_, 1);
v___x_1369_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1335_, v_post_1336_, v_usedLetOnly_1337_, v_skipConstInApp_1338_, v_skipInstances_1339_, v_a_1368_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
return v___x_1369_;
}
else
{
lean_dec_ref(v_post_1336_);
lean_dec_ref(v_pre_1335_);
return v___x_1367_;
}
}
else
{
lean_dec_ref(v_fvars_1340_);
lean_dec_ref(v_post_1336_);
lean_dec_ref(v_pre_1335_);
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0(lean_object* v_fvars_1370_, lean_object* v_pre_1371_, lean_object* v_post_1372_, uint8_t v_usedLetOnly_1373_, uint8_t v_skipConstInApp_1374_, uint8_t v_skipInstances_1375_, lean_object* v_body_1376_, lean_object* v_x_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_array_push(v_fvars_1370_, v_x_1377_);
v___x_1385_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(v_pre_1371_, v_post_1372_, v_usedLetOnly_1373_, v_skipConstInApp_1374_, v_skipInstances_1375_, v___x_1384_, v_body_1376_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7___boxed(lean_object* v_pre_1386_, lean_object* v_post_1387_, lean_object* v_usedLetOnly_1388_, lean_object* v_skipConstInApp_1389_, lean_object* v_skipInstances_1390_, lean_object* v_e_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
uint8_t v_usedLetOnly_boxed_1398_; uint8_t v_skipConstInApp_boxed_1399_; uint8_t v_skipInstances_boxed_1400_; lean_object* v_res_1401_; 
v_usedLetOnly_boxed_1398_ = lean_unbox(v_usedLetOnly_1388_);
v_skipConstInApp_boxed_1399_ = lean_unbox(v_skipConstInApp_1389_);
v_skipInstances_boxed_1400_ = lean_unbox(v_skipInstances_1390_);
v_res_1401_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1386_, v_post_1387_, v_usedLetOnly_boxed_1398_, v_skipConstInApp_boxed_1399_, v_skipInstances_boxed_1400_, v_e_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6___boxed(lean_object* v_pre_1402_, lean_object* v_post_1403_, lean_object* v_usedLetOnly_1404_, lean_object* v_skipConstInApp_1405_, lean_object* v_skipInstances_1406_, lean_object* v_sz_1407_, lean_object* v_i_1408_, lean_object* v_bs_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v_usedLetOnly_boxed_1416_; uint8_t v_skipConstInApp_boxed_1417_; uint8_t v_skipInstances_boxed_1418_; size_t v_sz_boxed_1419_; size_t v_i_boxed_1420_; lean_object* v_res_1421_; 
v_usedLetOnly_boxed_1416_ = lean_unbox(v_usedLetOnly_1404_);
v_skipConstInApp_boxed_1417_ = lean_unbox(v_skipConstInApp_1405_);
v_skipInstances_boxed_1418_ = lean_unbox(v_skipInstances_1406_);
v_sz_boxed_1419_ = lean_unbox_usize(v_sz_1407_);
lean_dec(v_sz_1407_);
v_i_boxed_1420_ = lean_unbox_usize(v_i_1408_);
lean_dec(v_i_1408_);
v_res_1421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(v_pre_1402_, v_post_1403_, v_usedLetOnly_boxed_1416_, v_skipConstInApp_boxed_1417_, v_skipInstances_boxed_1418_, v_sz_boxed_1419_, v_i_boxed_1420_, v_bs_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___boxed(lean_object* v_pre_1422_, lean_object* v_post_1423_, lean_object* v_usedLetOnly_1424_, lean_object* v_skipConstInApp_1425_, lean_object* v_skipInstances_1426_, lean_object* v_e_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
uint8_t v_usedLetOnly_boxed_1434_; uint8_t v_skipConstInApp_boxed_1435_; uint8_t v_skipInstances_boxed_1436_; lean_object* v_res_1437_; 
v_usedLetOnly_boxed_1434_ = lean_unbox(v_usedLetOnly_1424_);
v_skipConstInApp_boxed_1435_ = lean_unbox(v_skipConstInApp_1425_);
v_skipInstances_boxed_1436_ = lean_unbox(v_skipInstances_1426_);
v_res_1437_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1422_, v_post_1423_, v_usedLetOnly_boxed_1434_, v_skipConstInApp_boxed_1435_, v_skipInstances_boxed_1436_, v_e_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___boxed(lean_object* v_pre_1438_, lean_object* v_post_1439_, lean_object* v_usedLetOnly_1440_, lean_object* v_skipConstInApp_1441_, lean_object* v_skipInstances_1442_, lean_object* v_fvars_1443_, lean_object* v_e_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
uint8_t v_usedLetOnly_boxed_1451_; uint8_t v_skipConstInApp_boxed_1452_; uint8_t v_skipInstances_boxed_1453_; lean_object* v_res_1454_; 
v_usedLetOnly_boxed_1451_ = lean_unbox(v_usedLetOnly_1440_);
v_skipConstInApp_boxed_1452_ = lean_unbox(v_skipConstInApp_1441_);
v_skipInstances_boxed_1453_ = lean_unbox(v_skipInstances_1442_);
v_res_1454_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(v_pre_1438_, v_post_1439_, v_usedLetOnly_boxed_1451_, v_skipConstInApp_boxed_1452_, v_skipInstances_boxed_1453_, v_fvars_1443_, v_e_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___boxed(lean_object* v_pre_1455_, lean_object* v_post_1456_, lean_object* v_usedLetOnly_1457_, lean_object* v_skipConstInApp_1458_, lean_object* v_skipInstances_1459_, lean_object* v_fvars_1460_, lean_object* v_e_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
uint8_t v_usedLetOnly_boxed_1468_; uint8_t v_skipConstInApp_boxed_1469_; uint8_t v_skipInstances_boxed_1470_; lean_object* v_res_1471_; 
v_usedLetOnly_boxed_1468_ = lean_unbox(v_usedLetOnly_1457_);
v_skipConstInApp_boxed_1469_ = lean_unbox(v_skipConstInApp_1458_);
v_skipInstances_boxed_1470_ = lean_unbox(v_skipInstances_1459_);
v_res_1471_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(v_pre_1455_, v_post_1456_, v_usedLetOnly_boxed_1468_, v_skipConstInApp_boxed_1469_, v_skipInstances_boxed_1470_, v_fvars_1460_, v_e_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___boxed(lean_object* v_pre_1472_, lean_object* v_post_1473_, lean_object* v_usedLetOnly_1474_, lean_object* v_skipConstInApp_1475_, lean_object* v_skipInstances_1476_, lean_object* v_fvars_1477_, lean_object* v_e_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
uint8_t v_usedLetOnly_boxed_1485_; uint8_t v_skipConstInApp_boxed_1486_; uint8_t v_skipInstances_boxed_1487_; lean_object* v_res_1488_; 
v_usedLetOnly_boxed_1485_ = lean_unbox(v_usedLetOnly_1474_);
v_skipConstInApp_boxed_1486_ = lean_unbox(v_skipConstInApp_1475_);
v_skipInstances_boxed_1487_ = lean_unbox(v_skipInstances_1476_);
v_res_1488_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(v_pre_1472_, v_post_1473_, v_usedLetOnly_boxed_1485_, v_skipConstInApp_boxed_1486_, v_skipInstances_boxed_1487_, v_fvars_1477_, v_e_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___boxed(lean_object* v_upperBound_1489_, lean_object* v___x_1490_, lean_object* v_pre_1491_, lean_object* v_post_1492_, lean_object* v_usedLetOnly_1493_, lean_object* v_skipConstInApp_1494_, lean_object* v_skipInstances_1495_, lean_object* v_a_1496_, lean_object* v_b_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
uint8_t v_usedLetOnly_boxed_1504_; uint8_t v_skipConstInApp_boxed_1505_; uint8_t v_skipInstances_boxed_1506_; lean_object* v_res_1507_; 
v_usedLetOnly_boxed_1504_ = lean_unbox(v_usedLetOnly_1493_);
v_skipConstInApp_boxed_1505_ = lean_unbox(v_skipConstInApp_1494_);
v_skipInstances_boxed_1506_ = lean_unbox(v_skipInstances_1495_);
v_res_1507_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(v_upperBound_1489_, v___x_1490_, v_pre_1491_, v_post_1492_, v_usedLetOnly_boxed_1504_, v_skipConstInApp_boxed_1505_, v_skipInstances_boxed_1506_, v_a_1496_, v_b_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___x_1490_);
lean_dec(v_upperBound_1489_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed(lean_object* v_skipInstances_1508_, lean_object* v_pre_1509_, lean_object* v_post_1510_, lean_object* v_usedLetOnly_1511_, lean_object* v_skipConstInApp_1512_, lean_object* v_x_1513_, lean_object* v_x_1514_, lean_object* v_x_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
uint8_t v_skipInstances_boxed_1522_; uint8_t v_usedLetOnly_boxed_1523_; uint8_t v_skipConstInApp_boxed_1524_; lean_object* v_res_1525_; 
v_skipInstances_boxed_1522_ = lean_unbox(v_skipInstances_1508_);
v_usedLetOnly_boxed_1523_ = lean_unbox(v_usedLetOnly_1511_);
v_skipConstInApp_boxed_1524_ = lean_unbox(v_skipConstInApp_1512_);
v_res_1525_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(v_skipInstances_boxed_1522_, v_pre_1509_, v_post_1510_, v_usedLetOnly_boxed_1523_, v_skipConstInApp_boxed_1524_, v_x_1513_, v_x_1514_, v_x_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
return v_res_1525_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1526_ = lean_box(0);
v___x_1527_ = lean_unsigned_to_nat(16u);
v___x_1528_ = lean_mk_array(v___x_1527_, v___x_1526_);
return v___x_1528_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0);
v___x_1530_ = lean_unsigned_to_nat(0u);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v___x_1529_);
return v___x_1531_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1, &l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1);
v___x_1533_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1533_, 0, lean_box(0));
lean_closure_set(v___x_1533_, 1, lean_box(0));
lean_closure_set(v___x_1533_, 2, v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(lean_object* v_input_1534_, lean_object* v_pre_1535_, lean_object* v_post_1536_, uint8_t v_usedLetOnly_1537_, uint8_t v_skipConstInApp_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
uint8_t v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v_a_1547_; lean_object* v___x_1548_; 
v___x_1544_ = 0;
v___x_1545_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2, &l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2);
v___x_1546_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_box(0), v___x_1545_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
lean_inc(v_a_1547_);
lean_dec_ref(v___x_1546_);
v___x_1548_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1535_, v_post_1536_, v_usedLetOnly_1537_, v_skipConstInApp_1538_, v___x_1544_, v_input_1534_, v_a_1547_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v___x_1550_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1550_, 0, lean_box(0));
lean_closure_set(v___x_1550_, 1, lean_box(0));
lean_closure_set(v___x_1550_, 2, v_a_1547_);
v___x_1551_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_box(0), v___x_1550_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1558_ == 0)
{
lean_object* v_unused_1559_; 
v_unused_1559_ = lean_ctor_get(v___x_1551_, 0);
lean_dec(v_unused_1559_);
v___x_1553_ = v___x_1551_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_dec(v___x_1551_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v_a_1549_);
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1549_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
else
{
lean_dec(v_a_1547_);
return v___x_1548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___boxed(lean_object* v_input_1560_, lean_object* v_pre_1561_, lean_object* v_post_1562_, lean_object* v_usedLetOnly_1563_, lean_object* v_skipConstInApp_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
uint8_t v_usedLetOnly_boxed_1570_; uint8_t v_skipConstInApp_boxed_1571_; lean_object* v_res_1572_; 
v_usedLetOnly_boxed_1570_ = lean_unbox(v_usedLetOnly_1563_);
v_skipConstInApp_boxed_1571_ = lean_unbox(v_skipConstInApp_1564_);
v_res_1572_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(v_input_1560_, v_pre_1561_, v_post_1562_, v_usedLetOnly_boxed_1570_, v_skipConstInApp_boxed_1571_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
return v_res_1572_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___closed__1(void){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Array_instInhabited___redArg();
return v___x_1574_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___closed__3(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___closed__2));
v___x_1577_ = l_Lean_stringToMessageData(v___x_1576_);
return v___x_1577_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___closed__5(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___closed__4));
v___x_1580_ = l_Lean_stringToMessageData(v___x_1579_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls(lean_object* v_fixedParamPerms_1581_, lean_object* v_argsPacker_1582_, lean_object* v_funNames_1583_, lean_object* v_newF_1584_, lean_object* v_e_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v___f_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___f_1591_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___closed__0));
v___x_1592_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
lean_inc(v___y_1589_);
lean_inc_ref(v___y_1588_);
lean_inc(v___y_1587_);
lean_inc_ref(v___y_1586_);
lean_inc_ref(v_newF_1584_);
v___x_1593_ = lean_infer_type(v_newF_1584_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___y_1596_; lean_object* v___y_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; uint8_t v___x_1605_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___x_1605_ = l_Lean_Expr_isForall(v_a_1594_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_dec_ref(v_e_1585_);
lean_dec_ref(v_funNames_1583_);
lean_dec_ref(v_argsPacker_1582_);
lean_dec_ref(v_fixedParamPerms_1581_);
v___x_1606_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__3, &l_Lean_Elab_WF_packCalls___closed__3_once, _init_l_Lean_Elab_WF_packCalls___closed__3);
v___x_1607_ = l_Lean_MessageData_ofExpr(v_newF_1584_);
v___x_1608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__5, &l_Lean_Elab_WF_packCalls___closed__5_once, _init_l_Lean_Elab_WF_packCalls___closed__5);
v___x_1610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1608_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
v___x_1611_ = l_Lean_MessageData_ofExpr(v_a_1594_);
v___x_1612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1610_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v___x_1612_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
else
{
v___y_1596_ = v___y_1586_;
v___y_1597_ = v___y_1587_;
v___y_1598_ = v___y_1588_;
v___y_1599_ = v___y_1589_;
goto v___jp_1595_;
}
v___jp_1595_:
{
lean_object* v___x_1600_; lean_object* v___f_1601_; uint8_t v___x_1602_; uint8_t v___x_1603_; lean_object* v___x_1604_; 
v___x_1600_ = l_Lean_Expr_bindingDomain_x21(v_a_1594_);
lean_dec(v_a_1594_);
v___f_1601_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_packCalls___lam__2___boxed), 12, 6);
lean_closure_set(v___f_1601_, 0, v_funNames_1583_);
lean_closure_set(v___f_1601_, 1, v_fixedParamPerms_1581_);
lean_closure_set(v___f_1601_, 2, v___x_1592_);
lean_closure_set(v___f_1601_, 3, v_argsPacker_1582_);
lean_closure_set(v___f_1601_, 4, v___x_1600_);
lean_closure_set(v___f_1601_, 5, v_newF_1584_);
v___x_1602_ = 0;
v___x_1603_ = 1;
v___x_1604_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(v_e_1585_, v___f_1591_, v___f_1601_, v___x_1602_, v___x_1603_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
return v___x_1604_;
}
}
else
{
lean_dec_ref(v_e_1585_);
lean_dec_ref(v_newF_1584_);
lean_dec_ref(v_funNames_1583_);
lean_dec_ref(v_argsPacker_1582_);
lean_dec_ref(v_fixedParamPerms_1581_);
return v___x_1593_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___boxed(lean_object* v_fixedParamPerms_1622_, lean_object* v_argsPacker_1623_, lean_object* v_funNames_1624_, lean_object* v_newF_1625_, lean_object* v_e_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Elab_WF_packCalls(v_fixedParamPerms_1622_, v_argsPacker_1623_, v_funNames_1624_, v_newF_1625_, v_e_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8(lean_object* v_upperBound_1633_, lean_object* v___x_1634_, lean_object* v_pre_1635_, lean_object* v_post_1636_, uint8_t v_usedLetOnly_1637_, uint8_t v_skipConstInApp_1638_, uint8_t v_skipInstances_1639_, lean_object* v___x_1640_, lean_object* v_inst_1641_, lean_object* v_R_1642_, lean_object* v_a_1643_, lean_object* v_b_1644_, lean_object* v_c_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(v_upperBound_1633_, v___x_1634_, v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v_a_1643_, v_b_1644_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_1653_ = _args[0];
lean_object* v___x_1654_ = _args[1];
lean_object* v_pre_1655_ = _args[2];
lean_object* v_post_1656_ = _args[3];
lean_object* v_usedLetOnly_1657_ = _args[4];
lean_object* v_skipConstInApp_1658_ = _args[5];
lean_object* v_skipInstances_1659_ = _args[6];
lean_object* v___x_1660_ = _args[7];
lean_object* v_inst_1661_ = _args[8];
lean_object* v_R_1662_ = _args[9];
lean_object* v_a_1663_ = _args[10];
lean_object* v_b_1664_ = _args[11];
lean_object* v_c_1665_ = _args[12];
lean_object* v___y_1666_ = _args[13];
lean_object* v___y_1667_ = _args[14];
lean_object* v___y_1668_ = _args[15];
lean_object* v___y_1669_ = _args[16];
lean_object* v___y_1670_ = _args[17];
lean_object* v___y_1671_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_1672_; uint8_t v_skipConstInApp_boxed_1673_; uint8_t v_skipInstances_boxed_1674_; lean_object* v_res_1675_; 
v_usedLetOnly_boxed_1672_ = lean_unbox(v_usedLetOnly_1657_);
v_skipConstInApp_boxed_1673_ = lean_unbox(v_skipConstInApp_1658_);
v_skipInstances_boxed_1674_ = lean_unbox(v_skipInstances_1659_);
v_res_1675_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8(v_upperBound_1653_, v___x_1654_, v_pre_1655_, v_post_1656_, v_usedLetOnly_boxed_1672_, v_skipConstInApp_boxed_1673_, v_skipInstances_boxed_1674_, v___x_1660_, v_inst_1661_, v_R_1662_, v_a_1663_, v_b_1664_, v_c_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec(v___y_1666_);
lean_dec(v___x_1660_);
lean_dec_ref(v___x_1654_);
lean_dec(v_upperBound_1653_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_1676_, lean_object* v_m_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(v_m_1677_, v_a_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___boxed(lean_object* v_00_u03b2_1680_, lean_object* v_m_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9(v_00_u03b2_1680_, v_m_1681_, v_a_1682_);
lean_dec_ref(v_a_1682_);
lean_dec_ref(v_m_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12(lean_object* v_00_u03b1_1684_, lean_object* v_name_1685_, uint8_t v_bi_1686_, lean_object* v_type_1687_, lean_object* v_k_1688_, uint8_t v_kind_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_name_1685_, v_bi_1686_, v_type_1687_, v_k_1688_, v_kind_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___boxed(lean_object* v_00_u03b1_1697_, lean_object* v_name_1698_, lean_object* v_bi_1699_, lean_object* v_type_1700_, lean_object* v_k_1701_, lean_object* v_kind_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
uint8_t v_bi_boxed_1709_; uint8_t v_kind_boxed_1710_; lean_object* v_res_1711_; 
v_bi_boxed_1709_ = lean_unbox(v_bi_1699_);
v_kind_boxed_1710_ = lean_unbox(v_kind_1702_);
v_res_1711_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12(v_00_u03b1_1697_, v_name_1698_, v_bi_boxed_1709_, v_type_1700_, v_k_1701_, v_kind_boxed_1710_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15(lean_object* v_00_u03b1_1712_, lean_object* v_name_1713_, lean_object* v_type_1714_, lean_object* v_val_1715_, lean_object* v_k_1716_, uint8_t v_nondep_1717_, uint8_t v_kind_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(v_name_1713_, v_type_1714_, v_val_1715_, v_k_1716_, v_nondep_1717_, v_kind_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___boxed(lean_object* v_00_u03b1_1726_, lean_object* v_name_1727_, lean_object* v_type_1728_, lean_object* v_val_1729_, lean_object* v_k_1730_, lean_object* v_nondep_1731_, lean_object* v_kind_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
uint8_t v_nondep_boxed_1739_; uint8_t v_kind_boxed_1740_; lean_object* v_res_1741_; 
v_nondep_boxed_1739_ = lean_unbox(v_nondep_1731_);
v_kind_boxed_1740_ = lean_unbox(v_kind_1732_);
v_res_1741_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15(v_00_u03b1_1726_, v_name_1727_, v_type_1728_, v_val_1729_, v_k_1730_, v_nondep_boxed_1739_, v_kind_boxed_1740_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v___y_1733_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18(lean_object* v_00_u03b1_1742_, lean_object* v_ref_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(v_ref_1743_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___boxed(lean_object* v_00_u03b1_1750_, lean_object* v_ref_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18(v_00_u03b1_1750_, v_ref_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14(lean_object* v_00_u03b1_1758_, lean_object* v_x_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(v_x_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___boxed(lean_object* v_00_u03b1_1767_, lean_object* v_x_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14(v_00_u03b1_1767_, v_x_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15(lean_object* v_00_u03b2_1776_, lean_object* v_m_1777_, lean_object* v_a_1778_, lean_object* v_b_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(v_m_1777_, v_a_1778_, v_b_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10(lean_object* v_00_u03b2_1781_, lean_object* v_a_1782_, lean_object* v_x_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(v_a_1782_, v_x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___boxed(lean_object* v_00_u03b2_1785_, lean_object* v_a_1786_, lean_object* v_x_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10(v_00_u03b2_1785_, v_a_1786_, v_x_1787_);
lean_dec(v_x_1787_);
lean_dec_ref(v_a_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20(lean_object* v_00_u03b2_1789_, lean_object* v_a_1790_, lean_object* v_x_1791_){
_start:
{
uint8_t v___x_1792_; 
v___x_1792_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(v_a_1790_, v_x_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___boxed(lean_object* v_00_u03b2_1793_, lean_object* v_a_1794_, lean_object* v_x_1795_){
_start:
{
uint8_t v_res_1796_; lean_object* v_r_1797_; 
v_res_1796_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20(v_00_u03b2_1793_, v_a_1794_, v_x_1795_);
lean_dec(v_x_1795_);
lean_dec_ref(v_a_1794_);
v_r_1797_ = lean_box(v_res_1796_);
return v_r_1797_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21(lean_object* v_00_u03b2_1798_, lean_object* v_data_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(v_data_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22(lean_object* v_00_u03b2_1801_, lean_object* v_a_1802_, lean_object* v_b_1803_, lean_object* v_x_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(v_a_1802_, v_b_1803_, v_x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22(lean_object* v_00_u03b2_1806_, lean_object* v_i_1807_, lean_object* v_source_1808_, lean_object* v_target_1809_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(v_i_1807_, v_source_1808_, v_target_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23(lean_object* v_00_u03b2_1811_, lean_object* v_x_1812_, lean_object* v_x_1813_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(v_x_1812_, v_x_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName(lean_object* v_fixedParamPerms_1821_, lean_object* v_argsPacker_1822_, lean_object* v_preDefs_1823_){
_start:
{
lean_object* v___x_1824_; uint8_t v___y_1826_; uint8_t v___x_1843_; 
v___x_1824_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_1843_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_1821_);
if (v___x_1843_ == 0)
{
v___y_1826_ = v___x_1843_;
goto v___jp_1825_;
}
else
{
uint8_t v___x_1844_; 
v___x_1844_ = l_Lean_Meta_ArgsPacker_onlyOneUnary(v_argsPacker_1822_);
v___y_1826_ = v___x_1844_;
goto v___jp_1825_;
}
v___jp_1825_:
{
if (v___y_1826_ == 0)
{
lean_object* v___x_1827_; lean_object* v___x_1828_; uint8_t v___x_1829_; 
v___x_1827_ = lean_unsigned_to_nat(1u);
v___x_1828_ = l_Lean_Meta_ArgsPacker_numFuncs(v_argsPacker_1822_);
v___x_1829_ = lean_nat_dec_lt(v___x_1827_, v___x_1828_);
lean_dec(v___x_1828_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v_declName_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1830_ = lean_unsigned_to_nat(0u);
v___x_1831_ = lean_array_get_borrowed(v___x_1824_, v_preDefs_1823_, v___x_1830_);
v_declName_1832_ = lean_ctor_get(v___x_1831_, 3);
v___x_1833_ = ((lean_object*)(l_Lean_Elab_WF_mutualName___closed__1));
lean_inc(v_declName_1832_);
v___x_1834_ = l_Lean_Name_append(v_declName_1832_, v___x_1833_);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v_declName_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1835_ = lean_unsigned_to_nat(0u);
v___x_1836_ = lean_array_get_borrowed(v___x_1824_, v_preDefs_1823_, v___x_1835_);
v_declName_1837_ = lean_ctor_get(v___x_1836_, 3);
v___x_1838_ = ((lean_object*)(l_Lean_Elab_WF_mutualName___closed__3));
lean_inc(v_declName_1837_);
v___x_1839_ = l_Lean_Name_append(v_declName_1837_, v___x_1838_);
return v___x_1839_;
}
}
else
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v_declName_1842_; 
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = lean_array_get_borrowed(v___x_1824_, v_preDefs_1823_, v___x_1840_);
v_declName_1842_ = lean_ctor_get(v___x_1841_, 3);
lean_inc(v_declName_1842_);
return v_declName_1842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName___boxed(lean_object* v_fixedParamPerms_1845_, lean_object* v_argsPacker_1846_, lean_object* v_preDefs_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_Elab_WF_mutualName(v_fixedParamPerms_1845_, v_argsPacker_1846_, v_preDefs_1847_);
lean_dec_ref(v_preDefs_1847_);
lean_dec_ref(v_argsPacker_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0(lean_object* v_k_1849_, lean_object* v_b_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___x_1856_; 
lean_inc(v___y_1854_);
lean_inc_ref(v___y_1853_);
lean_inc(v___y_1852_);
lean_inc_ref(v___y_1851_);
v___x_1856_ = lean_apply_6(v_k_1849_, v_b_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, lean_box(0));
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0___boxed(lean_object* v_k_1857_, lean_object* v_b_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0(v_k_1857_, v_b_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(lean_object* v_perm_1865_, lean_object* v_type_1866_, lean_object* v_k_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v___f_1873_; lean_object* v___x_1874_; 
v___f_1873_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1873_, 0, v_k_1867_);
v___x_1874_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_box(0), v_perm_1865_, v_type_1866_, v___f_1873_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
v_a_1883_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1874_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1874_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___boxed(lean_object* v_perm_1891_, lean_object* v_type_1892_, lean_object* v_k_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(v_perm_1891_, v_type_1892_, v_k_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4(lean_object* v_00_u03b1_1900_, lean_object* v_perm_1901_, lean_object* v_type_1902_, lean_object* v_k_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(v_perm_1901_, v_type_1902_, v_k_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___boxed(lean_object* v_00_u03b1_1910_, lean_object* v_perm_1911_, lean_object* v_type_1912_, lean_object* v_k_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4(v_00_u03b1_1910_, v_perm_1911_, v_type_1912_, v_k_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(lean_object* v___x_1920_, lean_object* v_ys_1921_, size_t v_sz_1922_, size_t v_i_1923_, lean_object* v_bs_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
uint8_t v___x_1930_; 
v___x_1930_ = lean_usize_dec_lt(v_i_1923_, v_sz_1922_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; 
lean_dec_ref(v_ys_1921_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_bs_1924_);
return v___x_1931_;
}
else
{
lean_object* v_v_1932_; lean_object* v_value_1933_; lean_object* v___x_1934_; lean_object* v_bs_x27_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_v_1932_ = lean_array_uget_borrowed(v_bs_1924_, v_i_1923_);
v_value_1933_ = lean_ctor_get(v_v_1932_, 7);
lean_inc_ref(v_value_1933_);
v___x_1934_ = lean_unsigned_to_nat(0u);
v_bs_x27_1935_ = lean_array_uset(v_bs_1924_, v_i_1923_, v___x_1934_);
v___x_1936_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_1937_ = lean_usize_to_nat(v_i_1923_);
v___x_1938_ = lean_array_get_borrowed(v___x_1936_, v___x_1920_, v___x_1937_);
lean_dec(v___x_1937_);
lean_inc_ref(v_ys_1921_);
lean_inc(v___x_1938_);
v___x_1939_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_1938_, v_value_1933_, v_ys_1921_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; size_t v___x_1941_; size_t v___x_1942_; lean_object* v___x_1943_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1941_ = ((size_t)1ULL);
v___x_1942_ = lean_usize_add(v_i_1923_, v___x_1941_);
v___x_1943_ = lean_array_uset(v_bs_x27_1935_, v_i_1923_, v_a_1940_);
v_i_1923_ = v___x_1942_;
v_bs_1924_ = v___x_1943_;
goto _start;
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec_ref(v_bs_x27_1935_);
lean_dec_ref(v_ys_1921_);
v_a_1945_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1939_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1939_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg___boxed(lean_object* v___x_1953_, lean_object* v_ys_1954_, lean_object* v_sz_1955_, lean_object* v_i_1956_, lean_object* v_bs_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
size_t v_sz_boxed_1963_; size_t v_i_boxed_1964_; lean_object* v_res_1965_; 
v_sz_boxed_1963_ = lean_unbox_usize(v_sz_1955_);
lean_dec(v_sz_1955_);
v_i_boxed_1964_ = lean_unbox_usize(v_i_1956_);
lean_dec(v_i_1956_);
v_res_1965_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(v___x_1953_, v_ys_1954_, v_sz_boxed_1963_, v_i_boxed_1964_, v_bs_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec_ref(v___x_1953_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(lean_object* v___x_1966_, lean_object* v_ys_1967_, size_t v_sz_1968_, size_t v_i_1969_, lean_object* v_bs_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
uint8_t v___x_1976_; 
v___x_1976_ = lean_usize_dec_lt(v_i_1969_, v_sz_1968_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; 
lean_dec_ref(v_ys_1967_);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v_bs_1970_);
return v___x_1977_;
}
else
{
lean_object* v_v_1978_; lean_object* v_type_1979_; lean_object* v___x_1980_; lean_object* v_bs_x27_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_v_1978_ = lean_array_uget_borrowed(v_bs_1970_, v_i_1969_);
v_type_1979_ = lean_ctor_get(v_v_1978_, 6);
lean_inc_ref(v_type_1979_);
v___x_1980_ = lean_unsigned_to_nat(0u);
v_bs_x27_1981_ = lean_array_uset(v_bs_1970_, v_i_1969_, v___x_1980_);
v___x_1982_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_1983_ = lean_usize_to_nat(v_i_1969_);
v___x_1984_ = lean_array_get_borrowed(v___x_1982_, v___x_1966_, v___x_1983_);
lean_dec(v___x_1983_);
lean_inc_ref(v_ys_1967_);
lean_inc(v___x_1984_);
v___x_1985_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v___x_1984_, v_type_1979_, v_ys_1967_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; size_t v___x_1987_; size_t v___x_1988_; lean_object* v___x_1989_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1985_, 1);
v___x_1987_ = ((size_t)1ULL);
v___x_1988_ = lean_usize_add(v_i_1969_, v___x_1987_);
v___x_1989_ = lean_array_uset(v_bs_x27_1981_, v_i_1969_, v_a_1986_);
v_i_1969_ = v___x_1988_;
v_bs_1970_ = v___x_1989_;
goto _start;
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
lean_dec_ref(v_bs_x27_1981_);
lean_dec_ref(v_ys_1967_);
v_a_1991_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1985_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1985_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg___boxed(lean_object* v___x_1999_, lean_object* v_ys_2000_, lean_object* v_sz_2001_, lean_object* v_i_2002_, lean_object* v_bs_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
size_t v_sz_boxed_2009_; size_t v_i_boxed_2010_; lean_object* v_res_2011_; 
v_sz_boxed_2009_ = lean_unbox_usize(v_sz_2001_);
lean_dec(v_sz_2001_);
v_i_boxed_2010_ = lean_unbox_usize(v_i_2002_);
lean_dec(v_i_2002_);
v_res_2011_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(v___x_1999_, v_ys_2000_, v_sz_boxed_2009_, v_i_boxed_2010_, v_bs_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec_ref(v___x_1999_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(lean_object* v_a_2012_, lean_object* v_a_2013_){
_start:
{
if (lean_obj_tag(v_a_2012_) == 0)
{
lean_object* v___x_2014_; 
v___x_2014_ = l_List_reverse___redArg(v_a_2013_);
return v___x_2014_;
}
else
{
lean_object* v_head_2015_; lean_object* v_tail_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2025_; 
v_head_2015_ = lean_ctor_get(v_a_2012_, 0);
v_tail_2016_ = lean_ctor_get(v_a_2012_, 1);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_a_2012_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2018_ = v_a_2012_;
v_isShared_2019_ = v_isSharedCheck_2025_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_tail_2016_);
lean_inc(v_head_2015_);
lean_dec(v_a_2012_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2025_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2022_; 
v___x_2020_ = l_Lean_mkLevelParam(v_head_2015_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 1, v_a_2013_);
lean_ctor_set(v___x_2018_, 0, v___x_2020_);
v___x_2022_ = v___x_2018_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2020_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v_a_2013_);
v___x_2022_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
v_a_2012_ = v_tail_2016_;
v_a_2013_ = v___x_2022_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(size_t v_sz_2026_, size_t v_i_2027_, lean_object* v_bs_2028_){
_start:
{
uint8_t v___x_2029_; 
v___x_2029_ = lean_usize_dec_lt(v_i_2027_, v_sz_2026_);
if (v___x_2029_ == 0)
{
return v_bs_2028_;
}
else
{
lean_object* v_v_2030_; lean_object* v_declName_2031_; lean_object* v___x_2032_; lean_object* v_bs_x27_2033_; size_t v___x_2034_; size_t v___x_2035_; lean_object* v___x_2036_; 
v_v_2030_ = lean_array_uget_borrowed(v_bs_2028_, v_i_2027_);
v_declName_2031_ = lean_ctor_get(v_v_2030_, 3);
lean_inc(v_declName_2031_);
v___x_2032_ = lean_unsigned_to_nat(0u);
v_bs_x27_2033_ = lean_array_uset(v_bs_2028_, v_i_2027_, v___x_2032_);
v___x_2034_ = ((size_t)1ULL);
v___x_2035_ = lean_usize_add(v_i_2027_, v___x_2034_);
v___x_2036_ = lean_array_uset(v_bs_x27_2033_, v_i_2027_, v_declName_2031_);
v_i_2027_ = v___x_2035_;
v_bs_2028_ = v___x_2036_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3___boxed(lean_object* v_sz_2038_, lean_object* v_i_2039_, lean_object* v_bs_2040_){
_start:
{
size_t v_sz_boxed_2041_; size_t v_i_boxed_2042_; lean_object* v_res_2043_; 
v_sz_boxed_2041_ = lean_unbox_usize(v_sz_2038_);
lean_dec(v_sz_2038_);
v_i_boxed_2042_ = lean_unbox_usize(v_i_2039_);
lean_dec(v_i_2039_);
v_res_2043_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(v_sz_boxed_2041_, v_i_boxed_2042_, v_bs_2040_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0(lean_object* v_preDefs_2044_, lean_object* v_perms_2045_, lean_object* v_argsPacker_2046_, uint8_t v___x_2047_, lean_object* v_ref_2048_, uint8_t v_kind_2049_, lean_object* v_levelParams_2050_, lean_object* v_modifiers_2051_, lean_object* v_newFn_2052_, lean_object* v_binders_2053_, lean_object* v_numSectionVars_2054_, lean_object* v_value_2055_, lean_object* v_termination_2056_, lean_object* v_fixedParamPerms_2057_, lean_object* v_ys_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
size_t v_sz_2064_; size_t v___x_2065_; lean_object* v___x_2066_; 
v_sz_2064_ = lean_array_size(v_preDefs_2044_);
v___x_2065_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_2044_);
lean_inc_ref(v_ys_2058_);
v___x_2066_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(v_perms_2045_, v_ys_2058_, v_sz_2064_, v___x_2065_, v_preDefs_2044_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2068_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2067_);
lean_dec_ref_known(v___x_2066_, 1);
lean_inc_ref(v_preDefs_2044_);
lean_inc_ref(v_ys_2058_);
v___x_2068_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(v_perms_2045_, v_ys_2058_, v_sz_2064_, v___x_2065_, v_preDefs_2044_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v_a_2069_; lean_object* v___x_2070_; 
v_a_2069_ = lean_ctor_get(v___x_2068_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2068_, 1);
v___x_2070_ = l_Lean_Meta_ArgsPacker_uncurryType(v_argsPacker_2046_, v_a_2067_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec(v_a_2067_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v_a_2071_; uint8_t v___x_2072_; uint8_t v___x_2073_; lean_object* v___x_2074_; 
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_a_2071_);
lean_dec_ref_known(v___x_2070_, 1);
v___x_2072_ = 1;
v___x_2073_ = 1;
v___x_2074_ = l_Lean_Meta_mkForallFVars(v_ys_2058_, v_a_2071_, v___x_2047_, v___x_2072_, v___x_2072_, v___x_2073_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc_n(v_a_2075_, 2);
lean_dec_ref_known(v___x_2074_, 1);
lean_inc_ref(v_termination_2056_);
lean_inc(v_numSectionVars_2054_);
lean_inc(v_binders_2053_);
lean_inc(v_newFn_2052_);
lean_inc_ref(v_modifiers_2051_);
lean_inc(v_levelParams_2050_);
lean_inc(v_ref_2048_);
v___x_2076_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2076_, 0, v_ref_2048_);
lean_ctor_set(v___x_2076_, 1, v_levelParams_2050_);
lean_ctor_set(v___x_2076_, 2, v_modifiers_2051_);
lean_ctor_set(v___x_2076_, 3, v_newFn_2052_);
lean_ctor_set(v___x_2076_, 4, v_binders_2053_);
lean_ctor_set(v___x_2076_, 5, v_numSectionVars_2054_);
lean_ctor_set(v___x_2076_, 6, v_a_2075_);
lean_ctor_set(v___x_2076_, 7, v_value_2055_);
lean_ctor_set(v___x_2076_, 8, v_termination_2056_);
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*9, v_kind_2049_);
v___x_2077_ = l_Lean_Elab_addAsAxiom___redArg(v___x_2076_, v___y_2061_, v___y_2062_);
lean_dec_ref_known(v___x_2076_, 9);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
lean_dec_ref_known(v___x_2077_, 1);
v___x_2078_ = lean_box(0);
lean_inc(v_levelParams_2050_);
v___x_2079_ = l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(v_levelParams_2050_, v___x_2078_);
lean_inc(v_newFn_2052_);
v___x_2080_ = l_Lean_mkConst(v_newFn_2052_, v___x_2079_);
v___x_2081_ = l_Lean_mkAppN(v___x_2080_, v_ys_2058_);
v___x_2082_ = l_Lean_Meta_ArgsPacker_uncurry(v_argsPacker_2046_, v_a_2069_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec(v_a_2069_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
v___x_2084_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(v_sz_2064_, v___x_2065_, v_preDefs_2044_);
v___x_2085_ = l_Lean_Elab_WF_packCalls(v_fixedParamPerms_2057_, v_argsPacker_2046_, v___x_2084_, v___x_2081_, v_a_2083_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2087_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
lean_dec_ref_known(v___x_2085_, 1);
v___x_2087_ = l_Lean_Meta_mkLambdaFVars(v_ys_2058_, v_a_2086_, v___x_2047_, v___x_2072_, v___x_2047_, v___x_2072_, v___x_2073_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec_ref(v_ys_2058_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2090_ = v___x_2087_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2087_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2092_, 0, v_ref_2048_);
lean_ctor_set(v___x_2092_, 1, v_levelParams_2050_);
lean_ctor_set(v___x_2092_, 2, v_modifiers_2051_);
lean_ctor_set(v___x_2092_, 3, v_newFn_2052_);
lean_ctor_set(v___x_2092_, 4, v_binders_2053_);
lean_ctor_set(v___x_2092_, 5, v_numSectionVars_2054_);
lean_ctor_set(v___x_2092_, 6, v_a_2075_);
lean_ctor_set(v___x_2092_, 7, v_a_2088_);
lean_ctor_set(v___x_2092_, 8, v_termination_2056_);
lean_ctor_set_uint8(v___x_2092_, sizeof(void*)*9, v_kind_2049_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 0, v___x_2092_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec(v_a_2075_);
lean_dec_ref(v_termination_2056_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
v_a_2097_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2087_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2087_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec(v_a_2075_);
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_termination_2056_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
v_a_2105_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2085_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2085_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec_ref(v___x_2081_);
lean_dec(v_a_2075_);
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_fixedParamPerms_2057_);
lean_dec_ref(v_termination_2056_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
lean_dec_ref(v_argsPacker_2046_);
lean_dec_ref(v_preDefs_2044_);
v_a_2113_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2082_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2082_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_a_2075_);
lean_dec(v_a_2069_);
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_fixedParamPerms_2057_);
lean_dec_ref(v_termination_2056_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
lean_dec_ref(v_argsPacker_2046_);
lean_dec_ref(v_preDefs_2044_);
v_a_2121_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2077_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2077_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec(v_a_2069_);
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_fixedParamPerms_2057_);
lean_dec_ref(v_termination_2056_);
lean_dec_ref(v_value_2055_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
lean_dec_ref(v_argsPacker_2046_);
lean_dec_ref(v_preDefs_2044_);
v_a_2129_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2074_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2074_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec(v_a_2069_);
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_fixedParamPerms_2057_);
lean_dec_ref(v_termination_2056_);
lean_dec_ref(v_value_2055_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
lean_dec_ref(v_argsPacker_2046_);
lean_dec_ref(v_preDefs_2044_);
v_a_2137_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2070_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2070_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec(v_a_2067_);
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_fixedParamPerms_2057_);
lean_dec_ref(v_termination_2056_);
lean_dec_ref(v_value_2055_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
lean_dec_ref(v_argsPacker_2046_);
lean_dec_ref(v_preDefs_2044_);
v_a_2145_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2068_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2068_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
lean_dec_ref(v_ys_2058_);
lean_dec_ref(v_fixedParamPerms_2057_);
lean_dec_ref(v_termination_2056_);
lean_dec_ref(v_value_2055_);
lean_dec(v_numSectionVars_2054_);
lean_dec(v_binders_2053_);
lean_dec(v_newFn_2052_);
lean_dec_ref(v_modifiers_2051_);
lean_dec(v_levelParams_2050_);
lean_dec(v_ref_2048_);
lean_dec_ref(v_argsPacker_2046_);
lean_dec_ref(v_preDefs_2044_);
v_a_2153_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2066_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2066_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0___boxed(lean_object** _args){
lean_object* v_preDefs_2161_ = _args[0];
lean_object* v_perms_2162_ = _args[1];
lean_object* v_argsPacker_2163_ = _args[2];
lean_object* v___x_2164_ = _args[3];
lean_object* v_ref_2165_ = _args[4];
lean_object* v_kind_2166_ = _args[5];
lean_object* v_levelParams_2167_ = _args[6];
lean_object* v_modifiers_2168_ = _args[7];
lean_object* v_newFn_2169_ = _args[8];
lean_object* v_binders_2170_ = _args[9];
lean_object* v_numSectionVars_2171_ = _args[10];
lean_object* v_value_2172_ = _args[11];
lean_object* v_termination_2173_ = _args[12];
lean_object* v_fixedParamPerms_2174_ = _args[13];
lean_object* v_ys_2175_ = _args[14];
lean_object* v___y_2176_ = _args[15];
lean_object* v___y_2177_ = _args[16];
lean_object* v___y_2178_ = _args[17];
lean_object* v___y_2179_ = _args[18];
lean_object* v___y_2180_ = _args[19];
_start:
{
uint8_t v___x_2579__boxed_2181_; uint8_t v_kind_boxed_2182_; lean_object* v_res_2183_; 
v___x_2579__boxed_2181_ = lean_unbox(v___x_2164_);
v_kind_boxed_2182_ = lean_unbox(v_kind_2166_);
v_res_2183_ = l_Lean_Elab_WF_packMutual___lam__0(v_preDefs_2161_, v_perms_2162_, v_argsPacker_2163_, v___x_2579__boxed_2181_, v_ref_2165_, v_kind_boxed_2182_, v_levelParams_2167_, v_modifiers_2168_, v_newFn_2169_, v_binders_2170_, v_numSectionVars_2171_, v_value_2172_, v_termination_2173_, v_fixedParamPerms_2174_, v_ys_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec_ref(v_perms_2162_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual(lean_object* v_fixedParamPerms_2184_, lean_object* v_argsPacker_2185_, lean_object* v_preDefs_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v_ref_2195_; uint8_t v_kind_2196_; lean_object* v_levelParams_2197_; lean_object* v_modifiers_2198_; lean_object* v_declName_2199_; lean_object* v_binders_2200_; lean_object* v_numSectionVars_2201_; lean_object* v_type_2202_; lean_object* v_value_2203_; lean_object* v_termination_2204_; lean_object* v_newFn_2205_; uint8_t v___x_2206_; 
v___x_2192_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_2193_ = lean_unsigned_to_nat(0u);
v___x_2194_ = lean_array_get_borrowed(v___x_2192_, v_preDefs_2186_, v___x_2193_);
v_ref_2195_ = lean_ctor_get(v___x_2194_, 0);
v_kind_2196_ = lean_ctor_get_uint8(v___x_2194_, sizeof(void*)*9);
v_levelParams_2197_ = lean_ctor_get(v___x_2194_, 1);
v_modifiers_2198_ = lean_ctor_get(v___x_2194_, 2);
v_declName_2199_ = lean_ctor_get(v___x_2194_, 3);
v_binders_2200_ = lean_ctor_get(v___x_2194_, 4);
v_numSectionVars_2201_ = lean_ctor_get(v___x_2194_, 5);
v_type_2202_ = lean_ctor_get(v___x_2194_, 6);
v_value_2203_ = lean_ctor_get(v___x_2194_, 7);
v_termination_2204_ = lean_ctor_get(v___x_2194_, 8);
lean_inc_ref(v_fixedParamPerms_2184_);
v_newFn_2205_ = l_Lean_Elab_WF_mutualName(v_fixedParamPerms_2184_, v_argsPacker_2185_, v_preDefs_2186_);
v___x_2206_ = lean_name_eq(v_newFn_2205_, v_declName_2199_);
if (v___x_2206_ == 0)
{
lean_object* v_perms_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___f_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
lean_inc_ref(v_termination_2204_);
lean_inc_ref(v_value_2203_);
lean_inc_ref(v_type_2202_);
lean_inc(v_numSectionVars_2201_);
lean_inc(v_binders_2200_);
lean_inc_ref(v_modifiers_2198_);
lean_inc(v_levelParams_2197_);
lean_inc(v_ref_2195_);
v_perms_2207_ = lean_ctor_get(v_fixedParamPerms_2184_, 1);
lean_inc_ref_n(v_perms_2207_, 2);
v___x_2208_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2209_ = lean_box(v___x_2206_);
v___x_2210_ = lean_box(v_kind_2196_);
v___f_2211_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_packMutual___lam__0___boxed), 20, 14);
lean_closure_set(v___f_2211_, 0, v_preDefs_2186_);
lean_closure_set(v___f_2211_, 1, v_perms_2207_);
lean_closure_set(v___f_2211_, 2, v_argsPacker_2185_);
lean_closure_set(v___f_2211_, 3, v___x_2209_);
lean_closure_set(v___f_2211_, 4, v_ref_2195_);
lean_closure_set(v___f_2211_, 5, v___x_2210_);
lean_closure_set(v___f_2211_, 6, v_levelParams_2197_);
lean_closure_set(v___f_2211_, 7, v_modifiers_2198_);
lean_closure_set(v___f_2211_, 8, v_newFn_2205_);
lean_closure_set(v___f_2211_, 9, v_binders_2200_);
lean_closure_set(v___f_2211_, 10, v_numSectionVars_2201_);
lean_closure_set(v___f_2211_, 11, v_value_2203_);
lean_closure_set(v___f_2211_, 12, v_termination_2204_);
lean_closure_set(v___f_2211_, 13, v_fixedParamPerms_2184_);
v___x_2212_ = lean_array_get(v___x_2208_, v_perms_2207_, v___x_2193_);
lean_dec_ref(v_perms_2207_);
v___x_2213_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(v___x_2212_, v_type_2202_, v___f_2211_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_);
return v___x_2213_;
}
else
{
lean_object* v___x_2214_; 
lean_inc(v___x_2194_);
lean_dec(v_newFn_2205_);
lean_dec_ref(v_preDefs_2186_);
lean_dec_ref(v_argsPacker_2185_);
lean_dec_ref(v_fixedParamPerms_2184_);
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2194_);
return v___x_2214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___boxed(lean_object* v_fixedParamPerms_2215_, lean_object* v_argsPacker_2216_, lean_object* v_preDefs_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lean_Elab_WF_packMutual(v_fixedParamPerms_2215_, v_argsPacker_2216_, v_preDefs_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0(lean_object* v___x_2224_, lean_object* v_ys_2225_, lean_object* v_as_2226_, size_t v_sz_2227_, size_t v_i_2228_, lean_object* v_bs_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(v___x_2224_, v_ys_2225_, v_sz_2227_, v_i_2228_, v_bs_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___boxed(lean_object* v___x_2236_, lean_object* v_ys_2237_, lean_object* v_as_2238_, lean_object* v_sz_2239_, lean_object* v_i_2240_, lean_object* v_bs_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
size_t v_sz_boxed_2247_; size_t v_i_boxed_2248_; lean_object* v_res_2249_; 
v_sz_boxed_2247_ = lean_unbox_usize(v_sz_2239_);
lean_dec(v_sz_2239_);
v_i_boxed_2248_ = lean_unbox_usize(v_i_2240_);
lean_dec(v_i_2240_);
v_res_2249_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0(v___x_2236_, v_ys_2237_, v_as_2238_, v_sz_boxed_2247_, v_i_boxed_2248_, v_bs_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec_ref(v_as_2238_);
lean_dec_ref(v___x_2236_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1(lean_object* v___x_2250_, lean_object* v_ys_2251_, lean_object* v_as_2252_, size_t v_sz_2253_, size_t v_i_2254_, lean_object* v_bs_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(v___x_2250_, v_ys_2251_, v_sz_2253_, v_i_2254_, v_bs_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___boxed(lean_object* v___x_2262_, lean_object* v_ys_2263_, lean_object* v_as_2264_, lean_object* v_sz_2265_, lean_object* v_i_2266_, lean_object* v_bs_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
size_t v_sz_boxed_2273_; size_t v_i_boxed_2274_; lean_object* v_res_2275_; 
v_sz_boxed_2273_ = lean_unbox_usize(v_sz_2265_);
lean_dec(v_sz_2265_);
v_i_boxed_2274_ = lean_unbox_usize(v_i_2266_);
lean_dec(v_i_2266_);
v_res_2275_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1(v___x_2262_, v_ys_2263_, v_as_2264_, v_sz_boxed_2273_, v_i_boxed_2274_, v_bs_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec(v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec_ref(v_as_2264_);
lean_dec_ref(v___x_2262_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(lean_object* v_e_2276_, lean_object* v_k_2277_, uint8_t v_cleanupAnnotations_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v___f_2284_; uint8_t v___x_2285_; uint8_t v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___f_2284_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2284_, 0, v_k_2277_);
v___x_2285_ = 1;
v___x_2286_ = 0;
v___x_2287_ = lean_box(0);
v___x_2288_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2276_, v___x_2285_, v___x_2286_, v___x_2285_, v___x_2286_, v___x_2287_, v___f_2284_, v_cleanupAnnotations_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2288_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2288_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
v_a_2297_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2288_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2288_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg___boxed(lean_object* v_e_2305_, lean_object* v_k_2306_, lean_object* v_cleanupAnnotations_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2313_; lean_object* v_res_2314_; 
v_cleanupAnnotations_boxed_2313_ = lean_unbox(v_cleanupAnnotations_2307_);
v_res_2314_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(v_e_2305_, v_k_2306_, v_cleanupAnnotations_boxed_2313_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0(lean_object* v_00_u03b1_2315_, lean_object* v_e_2316_, lean_object* v_k_2317_, uint8_t v_cleanupAnnotations_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v___x_2324_; 
v___x_2324_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(v_e_2316_, v_k_2317_, v_cleanupAnnotations_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___boxed(lean_object* v_00_u03b1_2325_, lean_object* v_e_2326_, lean_object* v_k_2327_, lean_object* v_cleanupAnnotations_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2334_; lean_object* v_res_2335_; 
v_cleanupAnnotations_boxed_2334_ = lean_unbox(v_cleanupAnnotations_2328_);
v_res_2335_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0(v_00_u03b1_2325_, v_e_2326_, v_k_2327_, v_cleanupAnnotations_boxed_2334_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_);
lean_dec(v___y_2332_);
lean_dec_ref(v___y_2331_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(lean_object* v_msg_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2068__overap_2343_; lean_object* v___x_2344_; 
v___x_2342_ = lean_obj_once(&l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0, &l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0_once, _init_l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0);
v___x_2068__overap_2343_ = lean_panic_fn_borrowed(v___x_2342_, v_msg_2336_);
lean_inc(v___y_2340_);
lean_inc_ref(v___y_2339_);
lean_inc(v___y_2338_);
lean_inc_ref(v___y_2337_);
v___x_2344_ = lean_apply_5(v___x_2068__overap_2343_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, lean_box(0));
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1___boxed(lean_object* v_msg_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(v_msg_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0(lean_object* v_xs_2352_, lean_object* v_x_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2359_ = lean_array_get_size(v_xs_2352_);
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0___boxed(lean_object* v_xs_2361_, lean_object* v_x_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lean_Elab_WF_varyingVarNames___lam__0(v_xs_2361_, v_x_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
lean_dec_ref(v_x_2362_);
lean_dec_ref(v_xs_2361_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(lean_object* v_as_2369_, size_t v_sz_2370_, size_t v_i_2371_, lean_object* v_b_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_a_2378_; uint8_t v___x_2382_; 
v___x_2382_ = lean_usize_dec_lt(v_i_2371_, v_sz_2370_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; 
v___x_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2383_, 0, v_b_2372_);
return v___x_2383_;
}
else
{
lean_object* v_snd_2384_; lean_object* v_fst_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2429_; 
v_snd_2384_ = lean_ctor_get(v_b_2372_, 1);
v_fst_2385_ = lean_ctor_get(v_b_2372_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v_b_2372_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2387_ = v_b_2372_;
v_isShared_2388_ = v_isSharedCheck_2429_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_snd_2384_);
lean_inc(v_fst_2385_);
lean_dec(v_b_2372_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2429_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v_array_2389_; lean_object* v_start_2390_; lean_object* v_stop_2391_; uint8_t v___x_2392_; 
v_array_2389_ = lean_ctor_get(v_snd_2384_, 0);
v_start_2390_ = lean_ctor_get(v_snd_2384_, 1);
v_stop_2391_ = lean_ctor_get(v_snd_2384_, 2);
v___x_2392_ = lean_nat_dec_lt(v_start_2390_, v_stop_2391_);
if (v___x_2392_ == 0)
{
lean_object* v___x_2394_; 
if (v_isShared_2388_ == 0)
{
v___x_2394_ = v___x_2387_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_fst_2385_);
lean_ctor_set(v_reuseFailAlloc_2396_, 1, v_snd_2384_);
v___x_2394_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
}
else
{
lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2425_; 
lean_inc(v_stop_2391_);
lean_inc(v_start_2390_);
lean_inc_ref(v_array_2389_);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_snd_2384_);
if (v_isSharedCheck_2425_ == 0)
{
lean_object* v_unused_2426_; lean_object* v_unused_2427_; lean_object* v_unused_2428_; 
v_unused_2426_ = lean_ctor_get(v_snd_2384_, 2);
lean_dec(v_unused_2426_);
v_unused_2427_ = lean_ctor_get(v_snd_2384_, 1);
lean_dec(v_unused_2427_);
v_unused_2428_ = lean_ctor_get(v_snd_2384_, 0);
lean_dec(v_unused_2428_);
v___x_2398_ = v_snd_2384_;
v_isShared_2399_ = v_isSharedCheck_2425_;
goto v_resetjp_2397_;
}
else
{
lean_dec(v_snd_2384_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2425_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2404_; 
v___x_2400_ = lean_array_fget(v_array_2389_, v_start_2390_);
v___x_2401_ = lean_unsigned_to_nat(1u);
v___x_2402_ = lean_nat_add(v_start_2390_, v___x_2401_);
lean_dec(v_start_2390_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 1, v___x_2402_);
v___x_2404_ = v___x_2398_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_array_2389_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v___x_2402_);
lean_ctor_set(v_reuseFailAlloc_2424_, 2, v_stop_2391_);
v___x_2404_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v_a_2405_ = lean_array_uget_borrowed(v_as_2369_, v_i_2371_);
v___x_2406_ = l_Lean_Expr_fvarId_x21(v_a_2405_);
v___x_2407_ = l_Lean_FVarId_getUserName___redArg(v___x_2406_, v___y_2373_, v___y_2374_, v___y_2375_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = lean_array_push(v_fst_2385_, v_a_2408_);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_2404_);
lean_ctor_set(v___x_2387_, 0, v___x_2409_);
v___x_2411_ = v___x_2387_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v___x_2409_);
lean_ctor_set(v_reuseFailAlloc_2412_, 1, v___x_2404_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
v_a_2378_ = v___x_2411_;
goto v___jp_2377_;
}
}
else
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
lean_dec_ref(v___x_2404_);
lean_del_object(v___x_2387_);
lean_dec(v_fst_2385_);
v_a_2413_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2415_ = v___x_2407_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2407_);
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
else
{
lean_object* v___x_2422_; 
lean_dec_ref_known(v___x_2400_, 1);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_2404_);
v___x_2422_ = v___x_2387_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_fst_2385_);
lean_ctor_set(v_reuseFailAlloc_2423_, 1, v___x_2404_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
v_a_2378_ = v___x_2422_;
goto v___jp_2377_;
}
}
}
}
}
}
}
v___jp_2377_:
{
size_t v___x_2379_; size_t v___x_2380_; 
v___x_2379_ = ((size_t)1ULL);
v___x_2380_ = lean_usize_add(v_i_2371_, v___x_2379_);
v_i_2371_ = v___x_2380_;
v_b_2372_ = v_a_2378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg___boxed(lean_object* v_as_2430_, lean_object* v_sz_2431_, lean_object* v_i_2432_, lean_object* v_b_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
size_t v_sz_boxed_2438_; size_t v_i_boxed_2439_; lean_object* v_res_2440_; 
v_sz_boxed_2438_ = lean_unbox_usize(v_sz_2431_);
lean_dec(v_sz_2431_);
v_i_boxed_2439_ = lean_unbox_usize(v_i_2432_);
lean_dec(v_i_2432_);
v_res_2440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(v_as_2430_, v_sz_boxed_2438_, v_i_boxed_2439_, v_b_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec_ref(v_as_2430_);
return v_res_2440_;
}
}
static lean_object* _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2443_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1));
v___x_2444_ = lean_unsigned_to_nat(4u);
v___x_2445_ = lean_unsigned_to_nat(119u);
v___x_2446_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0));
v___x_2447_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_2448_ = l_mkPanicMessageWithDecl(v___x_2447_, v___x_2446_, v___x_2445_, v___x_2444_, v___x_2443_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2450_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3));
v___x_2451_ = lean_unsigned_to_nat(4u);
v___x_2452_ = lean_unsigned_to_nat(120u);
v___x_2453_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0));
v___x_2454_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_2455_ = l_mkPanicMessageWithDecl(v___x_2454_, v___x_2453_, v___x_2452_, v___x_2451_, v___x_2450_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1(lean_object* v_a_2458_, lean_object* v_fixedParamPerms_2459_, lean_object* v___x_2460_, lean_object* v_preDefIdx_2461_, lean_object* v_xs_2462_, lean_object* v_x_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2469_ = lean_array_get_size(v_xs_2462_);
v___x_2470_ = lean_nat_dec_eq(v___x_2469_, v_a_2458_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_obj_once(&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2, &l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2_once, _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2);
v___x_2472_ = l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(v___x_2471_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
return v___x_2472_;
}
else
{
lean_object* v_perms_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; uint8_t v___x_2476_; 
v_perms_2473_ = lean_ctor_get(v_fixedParamPerms_2459_, 1);
v___x_2474_ = lean_array_get_borrowed(v___x_2460_, v_perms_2473_, v_preDefIdx_2461_);
v___x_2475_ = lean_array_get_size(v___x_2474_);
v___x_2476_ = lean_nat_dec_eq(v___x_2475_, v_a_2458_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2477_ = lean_obj_once(&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4, &l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4_once, _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4);
v___x_2478_ = l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(v___x_2477_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
return v___x_2478_;
}
else
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; size_t v_sz_2483_; size_t v___x_2484_; lean_object* v___x_2485_; 
v___x_2479_ = lean_unsigned_to_nat(0u);
v___x_2480_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5));
lean_inc(v___x_2474_);
v___x_2481_ = l_Array_toSubarray___redArg(v___x_2474_, v___x_2479_, v___x_2475_);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v_sz_2483_ = lean_array_size(v_xs_2462_);
v___x_2484_ = ((size_t)0ULL);
v___x_2485_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(v_xs_2462_, v_sz_2483_, v___x_2484_, v___x_2482_, v___y_2464_, v___y_2466_, v___y_2467_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2494_; 
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2488_ = v___x_2485_;
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v_fst_2490_; lean_object* v___x_2492_; 
v_fst_2490_ = lean_ctor_get(v_a_2486_, 0);
lean_inc(v_fst_2490_);
lean_dec(v_a_2486_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v_fst_2490_);
v___x_2492_ = v___x_2488_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_fst_2490_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
v_a_2495_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2485_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2485_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___boxed(lean_object* v_a_2503_, lean_object* v_fixedParamPerms_2504_, lean_object* v___x_2505_, lean_object* v_preDefIdx_2506_, lean_object* v_xs_2507_, lean_object* v_x_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l_Lean_Elab_WF_varyingVarNames___lam__1(v_a_2503_, v_fixedParamPerms_2504_, v___x_2505_, v_preDefIdx_2506_, v_xs_2507_, v_x_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec_ref(v_x_2508_);
lean_dec_ref(v_xs_2507_);
lean_dec(v_preDefIdx_2506_);
lean_dec_ref(v___x_2505_);
lean_dec_ref(v_fixedParamPerms_2504_);
lean_dec(v_a_2503_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object* v_fixedParamPerms_2516_, lean_object* v_preDefIdx_2517_, lean_object* v_preDef_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v_type_2524_; lean_object* v_value_2525_; lean_object* v___f_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; lean_object* v___x_2529_; 
v_type_2524_ = lean_ctor_get(v_preDef_2518_, 6);
lean_inc_ref(v_type_2524_);
v_value_2525_ = lean_ctor_get(v_preDef_2518_, 7);
lean_inc_ref(v_value_2525_);
lean_dec_ref(v_preDef_2518_);
v___f_2526_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___closed__0));
v___x_2527_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2528_ = 0;
v___x_2529_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(v_value_2525_, v___f_2526_, v___x_2528_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; lean_object* v___f_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
lean_inc_n(v_a_2530_, 2);
lean_dec_ref_known(v___x_2529_, 1);
v___f_2531_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_varyingVarNames___lam__1___boxed), 11, 4);
lean_closure_set(v___f_2531_, 0, v_a_2530_);
lean_closure_set(v___f_2531_, 1, v_fixedParamPerms_2516_);
lean_closure_set(v___f_2531_, 2, v___x_2527_);
lean_closure_set(v___f_2531_, 3, v_preDefIdx_2517_);
v___x_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2532_, 0, v_a_2530_);
v___x_2533_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_2524_, v___x_2532_, v___f_2531_, v___x_2528_, v___x_2528_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
return v___x_2533_;
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
lean_dec_ref(v_type_2524_);
lean_dec(v_preDefIdx_2517_);
lean_dec_ref(v_fixedParamPerms_2516_);
v_a_2534_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___x_2529_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2529_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2534_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___boxed(lean_object* v_fixedParamPerms_2542_, lean_object* v_preDefIdx_2543_, lean_object* v_preDef_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lean_Elab_WF_varyingVarNames(v_fixedParamPerms_2542_, v_preDefIdx_2543_, v_preDef_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2(lean_object* v_as_2551_, size_t v_sz_2552_, size_t v_i_2553_, lean_object* v_b_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(v_as_2551_, v_sz_2552_, v_i_2553_, v_b_2554_, v___y_2555_, v___y_2557_, v___y_2558_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___boxed(lean_object* v_as_2561_, lean_object* v_sz_2562_, lean_object* v_i_2563_, lean_object* v_b_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
size_t v_sz_boxed_2570_; size_t v_i_boxed_2571_; lean_object* v_res_2572_; 
v_sz_boxed_2570_ = lean_unbox_usize(v_sz_2562_);
lean_dec(v_sz_2562_);
v_i_boxed_2571_ = lean_unbox_usize(v_i_2563_);
lean_dec(v_i_2563_);
v_res_2572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2(v_as_2561_, v_sz_boxed_2570_, v_i_boxed_2571_, v_b_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec_ref(v_as_2561_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(lean_object* v_msg_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v___x_2579_; lean_object* v___x_1632__overap_2580_; lean_object* v___x_2581_; 
v___x_2579_ = lean_obj_once(&l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0, &l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0_once, _init_l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0);
v___x_1632__overap_2580_ = lean_panic_fn_borrowed(v___x_2579_, v_msg_2573_);
lean_inc(v___y_2577_);
lean_inc_ref(v___y_2576_);
lean_inc(v___y_2575_);
lean_inc_ref(v___y_2574_);
v___x_2581_ = lean_apply_5(v___x_1632__overap_2580_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, lean_box(0));
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0___boxed(lean_object* v_msg_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(v_msg_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
return v_res_2588_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2589_; double v___x_2590_; 
v___x_2589_ = lean_unsigned_to_nat(0u);
v___x_2590_ = lean_float_of_nat(v___x_2589_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(lean_object* v_cls_2594_, lean_object* v_msg_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_ref_2601_; lean_object* v___x_2602_; lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2647_; 
v_ref_2601_ = lean_ctor_get(v___y_2598_, 2);
v___x_2602_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(v_msg_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2647_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2647_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2607_; lean_object* v_traceState_2608_; lean_object* v_env_2609_; lean_object* v_nextMacroScope_2610_; lean_object* v_ngen_2611_; lean_object* v_auxDeclNGen_2612_; lean_object* v_cache_2613_; lean_object* v_messages_2614_; lean_object* v_infoState_2615_; lean_object* v_snapshotTasks_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2646_; 
v___x_2607_ = lean_st_ref_take(v___y_2599_);
v_traceState_2608_ = lean_ctor_get(v___x_2607_, 4);
v_env_2609_ = lean_ctor_get(v___x_2607_, 0);
v_nextMacroScope_2610_ = lean_ctor_get(v___x_2607_, 1);
v_ngen_2611_ = lean_ctor_get(v___x_2607_, 2);
v_auxDeclNGen_2612_ = lean_ctor_get(v___x_2607_, 3);
v_cache_2613_ = lean_ctor_get(v___x_2607_, 5);
v_messages_2614_ = lean_ctor_get(v___x_2607_, 6);
v_infoState_2615_ = lean_ctor_get(v___x_2607_, 7);
v_snapshotTasks_2616_ = lean_ctor_get(v___x_2607_, 8);
v_isSharedCheck_2646_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2618_ = v___x_2607_;
v_isShared_2619_ = v_isSharedCheck_2646_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_snapshotTasks_2616_);
lean_inc(v_infoState_2615_);
lean_inc(v_messages_2614_);
lean_inc(v_cache_2613_);
lean_inc(v_traceState_2608_);
lean_inc(v_auxDeclNGen_2612_);
lean_inc(v_ngen_2611_);
lean_inc(v_nextMacroScope_2610_);
lean_inc(v_env_2609_);
lean_dec(v___x_2607_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2646_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
uint64_t v_tid_2620_; lean_object* v_traces_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2645_; 
v_tid_2620_ = lean_ctor_get_uint64(v_traceState_2608_, sizeof(void*)*1);
v_traces_2621_ = lean_ctor_get(v_traceState_2608_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_traceState_2608_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2623_ = v_traceState_2608_;
v_isShared_2624_ = v_isSharedCheck_2645_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_traces_2621_);
lean_dec(v_traceState_2608_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2645_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; double v___x_2627_; uint8_t v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2636_; 
v___x_2625_ = lean_box(0);
v___x_2626_ = lean_box(0);
v___x_2627_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0);
v___x_2628_ = 0;
v___x_2629_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1));
v___x_2630_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2630_, 0, v_cls_2594_);
lean_ctor_set(v___x_2630_, 1, v___x_2626_);
lean_ctor_set(v___x_2630_, 2, v___x_2629_);
lean_ctor_set_float(v___x_2630_, sizeof(void*)*3, v___x_2627_);
lean_ctor_set_float(v___x_2630_, sizeof(void*)*3 + 8, v___x_2627_);
lean_ctor_set_uint8(v___x_2630_, sizeof(void*)*3 + 16, v___x_2628_);
v___x_2631_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2));
v___x_2632_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2630_);
lean_ctor_set(v___x_2632_, 1, v_a_2603_);
lean_ctor_set(v___x_2632_, 2, v___x_2631_);
lean_inc(v_ref_2601_);
v___x_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2633_, 0, v_ref_2601_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
v___x_2634_ = l_Lean_PersistentArray_push___redArg(v_traces_2621_, v___x_2633_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v___x_2634_);
v___x_2636_ = v___x_2623_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___x_2634_);
lean_ctor_set_uint64(v_reuseFailAlloc_2644_, sizeof(void*)*1, v_tid_2620_);
v___x_2636_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
lean_object* v___x_2638_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2636_);
v___x_2638_ = v___x_2618_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_env_2609_);
lean_ctor_set(v_reuseFailAlloc_2643_, 1, v_nextMacroScope_2610_);
lean_ctor_set(v_reuseFailAlloc_2643_, 2, v_ngen_2611_);
lean_ctor_set(v_reuseFailAlloc_2643_, 3, v_auxDeclNGen_2612_);
lean_ctor_set(v_reuseFailAlloc_2643_, 4, v___x_2636_);
lean_ctor_set(v_reuseFailAlloc_2643_, 5, v_cache_2613_);
lean_ctor_set(v_reuseFailAlloc_2643_, 6, v_messages_2614_);
lean_ctor_set(v_reuseFailAlloc_2643_, 7, v_infoState_2615_);
lean_ctor_set(v_reuseFailAlloc_2643_, 8, v_snapshotTasks_2616_);
v___x_2638_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2639_ = lean_st_ref_put(v___y_2599_, v___x_2638_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_2625_);
v___x_2641_ = v___x_2605_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2625_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___boxed(lean_object* v_cls_2648_, lean_object* v_msg_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(v_cls_2648_, v_msg_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
return v_res_2655_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2658_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1));
v___x_2659_ = lean_unsigned_to_nat(8u);
v___x_2660_ = lean_unsigned_to_nat(135u);
v___x_2661_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0));
v___x_2662_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_2663_ = l_mkPanicMessageWithDecl(v___x_2662_, v___x_2661_, v___x_2660_, v___x_2659_, v___x_2658_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0(lean_object* v___x_2664_, lean_object* v_unaryPreDefNonRec_2665_, lean_object* v___x_2666_, lean_object* v_us_2667_, lean_object* v_argsPacker_2668_, lean_object* v___x_2669_, lean_object* v_params_2670_, lean_object* v_x_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v___x_2677_; uint8_t v___x_2678_; 
v___x_2677_ = lean_array_get_size(v_params_2670_);
v___x_2678_ = lean_nat_dec_eq(v___x_2664_, v___x_2677_);
if (v___x_2678_ == 0)
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
lean_dec(v___x_2669_);
lean_dec(v_us_2667_);
lean_dec_ref(v_unaryPreDefNonRec_2665_);
v___x_2679_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2);
v___x_2680_ = l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(v___x_2679_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
return v___x_2680_;
}
else
{
lean_object* v_declName_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v_declName_2681_ = lean_ctor_get(v_unaryPreDefNonRec_2665_, 3);
lean_inc(v_declName_2681_);
lean_dec_ref(v_unaryPreDefNonRec_2665_);
v___x_2682_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v___x_2666_, v_params_2670_);
v___x_2683_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v___x_2666_, v_params_2670_);
v___x_2684_ = l_Lean_mkConst(v_declName_2681_, v_us_2667_);
v___x_2685_ = l_Lean_mkAppN(v___x_2684_, v___x_2682_);
lean_dec_ref(v___x_2682_);
v___x_2686_ = l_Lean_Meta_ArgsPacker_curryProj(v_argsPacker_2668_, v___x_2685_, v___x_2669_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___x_2688_; uint8_t v___x_2689_; uint8_t v___x_2690_; lean_object* v___x_2691_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2686_, 1);
v___x_2688_ = l_Lean_Expr_beta(v_a_2687_, v___x_2683_);
v___x_2689_ = 0;
v___x_2690_ = 1;
v___x_2691_ = l_Lean_Meta_mkLambdaFVars(v_params_2670_, v___x_2688_, v___x_2689_, v___x_2678_, v___x_2689_, v___x_2678_, v___x_2690_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
return v___x_2691_;
}
else
{
lean_dec_ref(v___x_2683_);
return v___x_2686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___boxed(lean_object* v___x_2692_, lean_object* v_unaryPreDefNonRec_2693_, lean_object* v___x_2694_, lean_object* v_us_2695_, lean_object* v_argsPacker_2696_, lean_object* v___x_2697_, lean_object* v_params_2698_, lean_object* v_x_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0(v___x_2692_, v_unaryPreDefNonRec_2693_, v___x_2694_, v_us_2695_, v_argsPacker_2696_, v___x_2697_, v_params_2698_, v_x_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec_ref(v_x_2699_);
lean_dec_ref(v_params_2698_);
lean_dec_ref(v_argsPacker_2696_);
lean_dec_ref(v___x_2694_);
lean_dec(v___x_2692_);
return v_res_2705_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3));
v___x_2717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5));
v___x_2718_ = l_Lean_Name_append(v___x_2717_, v___x_2716_);
return v___x_2718_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7));
v___x_2721_ = l_Lean_stringToMessageData(v___x_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(lean_object* v_fixedParamPerms_2722_, lean_object* v_unaryPreDefNonRec_2723_, lean_object* v_us_2724_, lean_object* v_argsPacker_2725_, size_t v_sz_2726_, size_t v_i_2727_, lean_object* v_bs_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
uint8_t v___x_2734_; 
v___x_2734_ = lean_usize_dec_lt(v_i_2727_, v_sz_2726_);
if (v___x_2734_ == 0)
{
lean_object* v___x_2735_; 
lean_dec_ref(v_argsPacker_2725_);
lean_dec(v_us_2724_);
lean_dec_ref(v_unaryPreDefNonRec_2723_);
v___x_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2735_, 0, v_bs_2728_);
return v___x_2735_;
}
else
{
lean_object* v_v_2736_; lean_object* v_perms_2737_; lean_object* v_ref_2738_; uint8_t v_kind_2739_; lean_object* v_levelParams_2740_; lean_object* v_modifiers_2741_; lean_object* v_declName_2742_; lean_object* v_binders_2743_; lean_object* v_numSectionVars_2744_; lean_object* v_type_2745_; lean_object* v_termination_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2798_; 
v_v_2736_ = lean_array_uget(v_bs_2728_, v_i_2727_);
v_perms_2737_ = lean_ctor_get(v_fixedParamPerms_2722_, 1);
v_ref_2738_ = lean_ctor_get(v_v_2736_, 0);
v_kind_2739_ = lean_ctor_get_uint8(v_v_2736_, sizeof(void*)*9);
v_levelParams_2740_ = lean_ctor_get(v_v_2736_, 1);
v_modifiers_2741_ = lean_ctor_get(v_v_2736_, 2);
v_declName_2742_ = lean_ctor_get(v_v_2736_, 3);
v_binders_2743_ = lean_ctor_get(v_v_2736_, 4);
v_numSectionVars_2744_ = lean_ctor_get(v_v_2736_, 5);
v_type_2745_ = lean_ctor_get(v_v_2736_, 6);
v_termination_2746_ = lean_ctor_get(v_v_2736_, 8);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_v_2736_);
if (v_isSharedCheck_2798_ == 0)
{
lean_object* v_unused_2799_; 
v_unused_2799_ = lean_ctor_get(v_v_2736_, 7);
lean_dec(v_unused_2799_);
v___x_2748_ = v_v_2736_;
v_isShared_2749_ = v_isSharedCheck_2798_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_termination_2746_);
lean_inc(v_type_2745_);
lean_inc(v_numSectionVars_2744_);
lean_inc(v_binders_2743_);
lean_inc(v_declName_2742_);
lean_inc(v_modifiers_2741_);
lean_inc(v_levelParams_2740_);
lean_inc(v_ref_2738_);
lean_dec(v_v_2736_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2798_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2750_; lean_object* v_bs_x27_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___f_2756_; lean_object* v___x_2757_; uint8_t v___x_2758_; lean_object* v___x_2759_; 
v___x_2750_ = lean_unsigned_to_nat(0u);
v_bs_x27_2751_ = lean_array_uset(v_bs_2728_, v_i_2727_, v___x_2750_);
v___x_2752_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2753_ = lean_usize_to_nat(v_i_2727_);
v___x_2754_ = lean_array_get_borrowed(v___x_2752_, v_perms_2737_, v___x_2753_);
v___x_2755_ = lean_array_get_size(v___x_2754_);
lean_inc_ref(v_argsPacker_2725_);
lean_inc(v_us_2724_);
lean_inc(v___x_2754_);
lean_inc_ref(v_unaryPreDefNonRec_2723_);
v___f_2756_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_2756_, 0, v___x_2755_);
lean_closure_set(v___f_2756_, 1, v_unaryPreDefNonRec_2723_);
lean_closure_set(v___f_2756_, 2, v___x_2754_);
lean_closure_set(v___f_2756_, 3, v_us_2724_);
lean_closure_set(v___f_2756_, 4, v_argsPacker_2725_);
lean_closure_set(v___f_2756_, 5, v___x_2753_);
v___x_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2755_);
v___x_2758_ = 0;
lean_inc_ref(v_type_2745_);
v___x_2759_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_2745_, v___x_2757_, v___f_2756_, v___x_2758_, v___x_2758_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; lean_object* v_toCold_2769_; lean_object* v_options_2770_; uint8_t v_hasTrace_2771_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_a_2760_);
lean_dec_ref_known(v___x_2759_, 1);
v_toCold_2769_ = lean_ctor_get(v___y_2731_, 0);
v_options_2770_ = lean_ctor_get(v_toCold_2769_, 2);
v_hasTrace_2771_ = lean_ctor_get_uint8(v_options_2770_, sizeof(void*)*1);
if (v_hasTrace_2771_ == 0)
{
goto v___jp_2761_;
}
else
{
lean_object* v_inheritedTraceOptions_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; 
v_inheritedTraceOptions_2772_ = lean_ctor_get(v_toCold_2769_, 11);
v___x_2773_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3));
v___x_2774_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6);
v___x_2775_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2772_, v_options_2770_, v___x_2774_);
if (v___x_2775_ == 0)
{
goto v___jp_2761_;
}
else
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
lean_inc(v_declName_2742_);
v___x_2776_ = l_Lean_MessageData_ofName(v_declName_2742_);
v___x_2777_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8);
v___x_2778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2776_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
lean_inc(v_a_2760_);
v___x_2779_ = l_Lean_MessageData_ofExpr(v_a_2760_);
v___x_2780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2778_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(v___x_2773_, v___x_2780_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_dec_ref_known(v___x_2781_, 1);
goto v___jp_2761_;
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v_a_2760_);
lean_dec_ref(v_bs_x27_2751_);
lean_del_object(v___x_2748_);
lean_dec_ref(v_termination_2746_);
lean_dec_ref(v_type_2745_);
lean_dec(v_numSectionVars_2744_);
lean_dec(v_binders_2743_);
lean_dec(v_declName_2742_);
lean_dec_ref(v_modifiers_2741_);
lean_dec(v_levelParams_2740_);
lean_dec(v_ref_2738_);
lean_dec_ref(v_argsPacker_2725_);
lean_dec(v_us_2724_);
lean_dec_ref(v_unaryPreDefNonRec_2723_);
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2781_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2781_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
}
v___jp_2761_:
{
lean_object* v___x_2763_; 
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 7, v_a_2760_);
v___x_2763_ = v___x_2748_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_ref_2738_);
lean_ctor_set(v_reuseFailAlloc_2768_, 1, v_levelParams_2740_);
lean_ctor_set(v_reuseFailAlloc_2768_, 2, v_modifiers_2741_);
lean_ctor_set(v_reuseFailAlloc_2768_, 3, v_declName_2742_);
lean_ctor_set(v_reuseFailAlloc_2768_, 4, v_binders_2743_);
lean_ctor_set(v_reuseFailAlloc_2768_, 5, v_numSectionVars_2744_);
lean_ctor_set(v_reuseFailAlloc_2768_, 6, v_type_2745_);
lean_ctor_set(v_reuseFailAlloc_2768_, 7, v_a_2760_);
lean_ctor_set(v_reuseFailAlloc_2768_, 8, v_termination_2746_);
lean_ctor_set_uint8(v_reuseFailAlloc_2768_, sizeof(void*)*9, v_kind_2739_);
v___x_2763_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
size_t v___x_2764_; size_t v___x_2765_; lean_object* v___x_2766_; 
v___x_2764_ = ((size_t)1ULL);
v___x_2765_ = lean_usize_add(v_i_2727_, v___x_2764_);
v___x_2766_ = lean_array_uset(v_bs_x27_2751_, v_i_2727_, v___x_2763_);
v_i_2727_ = v___x_2765_;
v_bs_2728_ = v___x_2766_;
goto _start;
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_dec_ref(v_bs_x27_2751_);
lean_del_object(v___x_2748_);
lean_dec_ref(v_termination_2746_);
lean_dec_ref(v_type_2745_);
lean_dec(v_numSectionVars_2744_);
lean_dec(v_binders_2743_);
lean_dec(v_declName_2742_);
lean_dec_ref(v_modifiers_2741_);
lean_dec(v_levelParams_2740_);
lean_dec(v_ref_2738_);
lean_dec_ref(v_argsPacker_2725_);
lean_dec(v_us_2724_);
lean_dec_ref(v_unaryPreDefNonRec_2723_);
v_a_2790_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2759_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2759_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___boxed(lean_object* v_fixedParamPerms_2800_, lean_object* v_unaryPreDefNonRec_2801_, lean_object* v_us_2802_, lean_object* v_argsPacker_2803_, lean_object* v_sz_2804_, lean_object* v_i_2805_, lean_object* v_bs_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_){
_start:
{
size_t v_sz_boxed_2812_; size_t v_i_boxed_2813_; lean_object* v_res_2814_; 
v_sz_boxed_2812_ = lean_unbox_usize(v_sz_2804_);
lean_dec(v_sz_2804_);
v_i_boxed_2813_ = lean_unbox_usize(v_i_2805_);
lean_dec(v_i_2805_);
v_res_2814_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(v_fixedParamPerms_2800_, v_unaryPreDefNonRec_2801_, v_us_2802_, v_argsPacker_2803_, v_sz_boxed_2812_, v_i_boxed_2813_, v_bs_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec_ref(v_fixedParamPerms_2800_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0(lean_object* v_unaryPreDefNonRec_2815_, lean_object* v_preDefs_2816_, lean_object* v_fixedParamPerms_2817_, lean_object* v_us_2818_, lean_object* v_argsPacker_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v___x_2825_; 
v___x_2825_ = l_Lean_Elab_addAsAxiom___redArg(v_unaryPreDefNonRec_2815_, v___y_2822_, v___y_2823_);
if (lean_obj_tag(v___x_2825_) == 0)
{
size_t v_sz_2826_; size_t v___x_2827_; lean_object* v___x_2828_; 
lean_dec_ref_known(v___x_2825_, 1);
v_sz_2826_ = lean_array_size(v_preDefs_2816_);
v___x_2827_ = ((size_t)0ULL);
v___x_2828_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(v_fixedParamPerms_2817_, v_unaryPreDefNonRec_2815_, v_us_2818_, v_argsPacker_2819_, v_sz_2826_, v___x_2827_, v_preDefs_2816_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
return v___x_2828_;
}
else
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
lean_dec_ref(v_argsPacker_2819_);
lean_dec(v_us_2818_);
lean_dec_ref(v_preDefs_2816_);
lean_dec_ref(v_unaryPreDefNonRec_2815_);
v_a_2829_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2831_ = v___x_2825_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2825_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
return v___x_2834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0___boxed(lean_object* v_unaryPreDefNonRec_2837_, lean_object* v_preDefs_2838_, lean_object* v_fixedParamPerms_2839_, lean_object* v_us_2840_, lean_object* v_argsPacker_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0(v_unaryPreDefNonRec_2837_, v_preDefs_2838_, v_fixedParamPerms_2839_, v_us_2840_, v_argsPacker_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec_ref(v_fixedParamPerms_2839_);
return v_res_2847_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2848_; 
v___x_2848_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2848_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2849_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0);
v___x_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2849_);
return v___x_2850_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
return v___x_2852_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2853_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1);
v___x_2854_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
lean_ctor_set(v___x_2854_, 2, v___x_2853_);
lean_ctor_set(v___x_2854_, 3, v___x_2853_);
lean_ctor_set(v___x_2854_, 4, v___x_2853_);
lean_ctor_set(v___x_2854_, 5, v___x_2853_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(lean_object* v_env_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v___x_2859_; lean_object* v_nextMacroScope_2860_; lean_object* v_ngen_2861_; lean_object* v_auxDeclNGen_2862_; lean_object* v_traceState_2863_; lean_object* v_messages_2864_; lean_object* v_infoState_2865_; lean_object* v_snapshotTasks_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2892_; 
v___x_2859_ = lean_st_ref_take(v___y_2857_);
v_nextMacroScope_2860_ = lean_ctor_get(v___x_2859_, 1);
v_ngen_2861_ = lean_ctor_get(v___x_2859_, 2);
v_auxDeclNGen_2862_ = lean_ctor_get(v___x_2859_, 3);
v_traceState_2863_ = lean_ctor_get(v___x_2859_, 4);
v_messages_2864_ = lean_ctor_get(v___x_2859_, 6);
v_infoState_2865_ = lean_ctor_get(v___x_2859_, 7);
v_snapshotTasks_2866_ = lean_ctor_get(v___x_2859_, 8);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2892_ == 0)
{
lean_object* v_unused_2893_; lean_object* v_unused_2894_; 
v_unused_2893_ = lean_ctor_get(v___x_2859_, 5);
lean_dec(v_unused_2893_);
v_unused_2894_ = lean_ctor_get(v___x_2859_, 0);
lean_dec(v_unused_2894_);
v___x_2868_ = v___x_2859_;
v_isShared_2869_ = v_isSharedCheck_2892_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_snapshotTasks_2866_);
lean_inc(v_infoState_2865_);
lean_inc(v_messages_2864_);
lean_inc(v_traceState_2863_);
lean_inc(v_auxDeclNGen_2862_);
lean_inc(v_ngen_2861_);
lean_inc(v_nextMacroScope_2860_);
lean_dec(v___x_2859_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2892_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2870_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 5, v___x_2870_);
lean_ctor_set(v___x_2868_, 0, v_env_2855_);
v___x_2872_ = v___x_2868_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_env_2855_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v_nextMacroScope_2860_);
lean_ctor_set(v_reuseFailAlloc_2891_, 2, v_ngen_2861_);
lean_ctor_set(v_reuseFailAlloc_2891_, 3, v_auxDeclNGen_2862_);
lean_ctor_set(v_reuseFailAlloc_2891_, 4, v_traceState_2863_);
lean_ctor_set(v_reuseFailAlloc_2891_, 5, v___x_2870_);
lean_ctor_set(v_reuseFailAlloc_2891_, 6, v_messages_2864_);
lean_ctor_set(v_reuseFailAlloc_2891_, 7, v_infoState_2865_);
lean_ctor_set(v_reuseFailAlloc_2891_, 8, v_snapshotTasks_2866_);
v___x_2872_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v_mctx_2875_; lean_object* v_zetaDeltaFVarIds_2876_; lean_object* v_postponed_2877_; lean_object* v_diag_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2889_; 
v___x_2873_ = lean_st_ref_put(v___y_2857_, v___x_2872_);
v___x_2874_ = lean_st_ref_take(v___y_2856_);
v_mctx_2875_ = lean_ctor_get(v___x_2874_, 0);
v_zetaDeltaFVarIds_2876_ = lean_ctor_get(v___x_2874_, 2);
v_postponed_2877_ = lean_ctor_get(v___x_2874_, 3);
v_diag_2878_ = lean_ctor_get(v___x_2874_, 4);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2889_ == 0)
{
lean_object* v_unused_2890_; 
v_unused_2890_ = lean_ctor_get(v___x_2874_, 1);
lean_dec(v_unused_2890_);
v___x_2880_ = v___x_2874_;
v_isShared_2881_ = v_isSharedCheck_2889_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_diag_2878_);
lean_inc(v_postponed_2877_);
lean_inc(v_zetaDeltaFVarIds_2876_);
lean_inc(v_mctx_2875_);
lean_dec(v___x_2874_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2889_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2885_; 
v___x_2882_ = lean_box(0);
v___x_2883_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 1, v___x_2883_);
v___x_2885_ = v___x_2880_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_mctx_2875_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v___x_2883_);
lean_ctor_set(v_reuseFailAlloc_2888_, 2, v_zetaDeltaFVarIds_2876_);
lean_ctor_set(v_reuseFailAlloc_2888_, 3, v_postponed_2877_);
lean_ctor_set(v_reuseFailAlloc_2888_, 4, v_diag_2878_);
v___x_2885_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2886_ = lean_st_ref_put(v___y_2856_, v___x_2885_);
v___x_2887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2882_);
return v___x_2887_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___boxed(lean_object* v_env_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_2895_, v___y_2896_, v___y_2897_);
lean_dec(v___y_2897_);
lean_dec(v___y_2896_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(lean_object* v_env_2900_, lean_object* v_x_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
lean_object* v___x_2907_; lean_object* v_env_2908_; lean_object* v_a_2910_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2907_ = lean_st_ref_get(v___y_2905_);
v_env_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc_ref(v_env_2908_);
lean_dec(v___x_2907_);
v___x_2920_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_2900_, v___y_2903_, v___y_2905_);
lean_dec_ref(v___x_2920_);
lean_inc(v___y_2905_);
lean_inc_ref(v___y_2904_);
lean_inc(v___y_2903_);
lean_inc_ref(v___y_2902_);
v___x_2921_ = lean_apply_5(v_x_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, lean_box(0));
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2930_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2921_, 1);
v___x_2923_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_2908_, v___y_2903_, v___y_2905_);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2930_ == 0)
{
lean_object* v_unused_2931_; 
v_unused_2931_ = lean_ctor_get(v___x_2923_, 0);
lean_dec(v_unused_2931_);
v___x_2925_ = v___x_2923_;
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
else
{
lean_dec(v___x_2923_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 0, v_a_2922_);
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2922_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
else
{
lean_object* v_a_2932_; 
v_a_2932_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___x_2921_, 1);
v_a_2910_ = v_a_2932_;
goto v___jp_2909_;
}
v___jp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
v___x_2911_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_2908_, v___y_2903_, v___y_2905_);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2918_ == 0)
{
lean_object* v_unused_2919_; 
v_unused_2919_ = lean_ctor_get(v___x_2911_, 0);
lean_dec(v_unused_2919_);
v___x_2913_ = v___x_2911_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_dec(v___x_2911_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
lean_ctor_set_tag(v___x_2913_, 1);
lean_ctor_set(v___x_2913_, 0, v_a_2910_);
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2910_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg___boxed(lean_object* v_env_2933_, lean_object* v_x_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(v_env_2933_, v_x_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object* v_fixedParamPerms_2941_, lean_object* v_argsPacker_2942_, lean_object* v_preDefs_2943_, lean_object* v_unaryPreDefNonRec_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_levelParams_2950_; lean_object* v___x_2951_; lean_object* v_us_2952_; lean_object* v___f_2953_; lean_object* v___x_2954_; lean_object* v_env_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_levelParams_2950_ = lean_ctor_get(v_unaryPreDefNonRec_2944_, 1);
v___x_2951_ = lean_box(0);
lean_inc(v_levelParams_2950_);
v_us_2952_ = l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(v_levelParams_2950_, v___x_2951_);
v___f_2953_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2953_, 0, v_unaryPreDefNonRec_2944_);
lean_closure_set(v___f_2953_, 1, v_preDefs_2943_);
lean_closure_set(v___f_2953_, 2, v_fixedParamPerms_2941_);
lean_closure_set(v___f_2953_, 3, v_us_2952_);
lean_closure_set(v___f_2953_, 4, v_argsPacker_2942_);
v___x_2954_ = lean_st_ref_get(v___y_2948_);
v_env_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc_ref(v_env_2955_);
lean_dec(v___x_2954_);
v___x_2956_ = l_Lean_Environment_unlockAsync(v_env_2955_);
v___x_2957_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(v___x_2956_, v___f_2953_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___boxed(lean_object* v_fixedParamPerms_2958_, lean_object* v_argsPacker_2959_, lean_object* v_preDefs_2960_, lean_object* v_unaryPreDefNonRec_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fixedParamPerms_2958_, v_argsPacker_2959_, v_preDefs_2960_, v_unaryPreDefNonRec_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2(lean_object* v_fixedParamPerms_2968_, lean_object* v_unaryPreDefNonRec_2969_, lean_object* v_us_2970_, lean_object* v_argsPacker_2971_, lean_object* v_as_2972_, size_t v_sz_2973_, size_t v_i_2974_, lean_object* v_bs_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v___x_2981_; 
v___x_2981_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(v_fixedParamPerms_2968_, v_unaryPreDefNonRec_2969_, v_us_2970_, v_argsPacker_2971_, v_sz_2973_, v_i_2974_, v_bs_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___boxed(lean_object* v_fixedParamPerms_2982_, lean_object* v_unaryPreDefNonRec_2983_, lean_object* v_us_2984_, lean_object* v_argsPacker_2985_, lean_object* v_as_2986_, lean_object* v_sz_2987_, lean_object* v_i_2988_, lean_object* v_bs_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_){
_start:
{
size_t v_sz_boxed_2995_; size_t v_i_boxed_2996_; lean_object* v_res_2997_; 
v_sz_boxed_2995_ = lean_unbox_usize(v_sz_2987_);
lean_dec(v_sz_2987_);
v_i_boxed_2996_ = lean_unbox_usize(v_i_2988_);
lean_dec(v_i_2988_);
v_res_2997_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2(v_fixedParamPerms_2982_, v_unaryPreDefNonRec_2983_, v_us_2984_, v_argsPacker_2985_, v_as_2986_, v_sz_boxed_2995_, v_i_boxed_2996_, v_bs_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_);
lean_dec(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2990_);
lean_dec_ref(v_as_2986_);
lean_dec_ref(v_fixedParamPerms_2982_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3(lean_object* v_env_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v___x_3004_; 
v___x_3004_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_2998_, v___y_3000_, v___y_3002_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___boxed(lean_object* v_env_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3(v_env_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_);
lean_dec(v___y_3009_);
lean_dec_ref(v___y_3008_);
lean_dec(v___y_3007_);
lean_dec_ref(v___y_3006_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3(lean_object* v_00_u03b1_3012_, lean_object* v_env_3013_, lean_object* v_x_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v___x_3020_; 
v___x_3020_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(v_env_3013_, v_x_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___boxed(lean_object* v_00_u03b1_3021_, lean_object* v_env_3022_, lean_object* v_x_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3(v_00_u03b1_3021_, v_env_3022_, v_x_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_);
lean_dec(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec(v___y_3025_);
lean_dec_ref(v___y_3024_);
return v_res_3029_;
}
}
lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
}
#ifdef __cplusplus
}
#endif
