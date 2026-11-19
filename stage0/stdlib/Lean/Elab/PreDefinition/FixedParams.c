// Lean compiler output
// Module: Lean.Elab.PreDefinition.FixedParams
// Imports: public import Lean.Elab.PreDefinition.Basic import Init.Omega
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
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "❌"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object*);
static const lean_closure_object l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_FixedParams_Info_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_getParamRevDeps___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getParamRevDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getParamRevDeps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getParamRevDeps___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0 = (const lean_object*)&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_value;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 131, 105, 217, 25, 82, 145, 102)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "getFixedParams: notFixed "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ":\nIn "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\ntoo few arguments for "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =/= "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " not matched"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.PreDefinition.FixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamsInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 185, .m_capacity = 185, .m_length = 184, .m_data = "assertion violation: params.size = arities[callerIdx]!\n\n      -- TODO: transform is overkill, a simple visit-all-subexpression that takes applications\n      -- as whole suffices\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getFixedParams:"};
static const lean_object* l_Lean_Elab_getFixedParamsInfo___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamsInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numFixed"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "perms"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "revDeps"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprFixedParamPerms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprFixedParamPerms_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprFixedParamPerms___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprFixedParamPerms = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamPerms"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: firstPerm[firstParamIdx]!.isSome\n            "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Incomplete paramInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: paramInfo[0]! = some paramIdx\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "assertion violation: xs.size = paramInfos.size\n\n    "};
static const lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.forallTelescopeImpl.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: type.isForall\n      "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "assertion violation: xs'.size = 1\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < xs.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "assertion violation: !( __do_lift._@.Lean.Elab.PreDefinition.FixedParams.75993854._hygCtx._hyg.102.0 ).hasLooseBVars\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateForall.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: ys.size = 1\n          "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateForall"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: xs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateLambda.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "assertion violation: ys.size = 1\n            "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateLambda"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.pickFixed.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < ys.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.pickFixed"};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: xs.size = perm.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2;
static const lean_array_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.buildArgs.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "FixedParams.buildArgs: too few fixed args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "FixedParams.buildArgs: too few varying args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.buildArgs"};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: fixedArgs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.FixedParamPerms.erase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: paramIdx < mapping.size\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: fixedParamPerms.numFixed  = xs.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__1;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "assertion violation: toErase.size = fixedParamPerms.perms.size\n  -- Calculate a mask on the fixed parameters of variables to erase\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__2 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__2_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__3;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 41, .m_data = "assertion violation: xs.all (·.isFVar)\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__4 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__4_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "FixedParams"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 87, 32, 251, 113, 133, 158, 252)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(140, 135, 17, 208, 62, 57, 192, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 225, 135, 56, 213, 49, 154, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 208, 124, 62, 167, 39, 159, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 118, 73, 0, 78, 121, 48, 169)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 144, 90, 0, 164, 70, 155, 205)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(80, 80, 200, 145, 119, 202, 92, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 27, 9, 206, 200, 16, 168, 251)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(791000795) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(47, 149, 235, 94, 82, 130, 210, 117)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 33, 115, 184, 239, 184, 190, 148)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 81, 13, 137, 134, 8, 99, 98)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(225, 58, 56, 207, 96, 242, 57, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object* v_revDeps_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_bs_4_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; size_t v___x_15_; size_t v___x_16_; lean_object* v___x_17_; 
v_v_6_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_7_);
v___x_9_ = lean_array_get_size(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = lean_array_get_size(v_revDeps_1_);
v___x_11_ = lean_box(0);
v___x_12_ = lean_mk_array(v___x_10_, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_mk_array(v___x_9_, v___x_13_);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_3_, v___x_15_);
v___x_17_ = lean_array_uset(v_bs_x27_8_, v_i_3_, v___x_14_);
v_i_3_ = v___x_16_;
v_bs_4_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object* v_revDeps_19_, lean_object* v_sz_20_, lean_object* v_i_21_, lean_object* v_bs_22_){
_start:
{
size_t v_sz_boxed_23_; size_t v_i_boxed_24_; lean_object* v_res_25_; 
v_sz_boxed_23_ = lean_unbox_usize(v_sz_20_);
lean_dec(v_sz_20_);
v_i_boxed_24_ = lean_unbox_usize(v_i_21_);
lean_dec(v_i_21_);
v_res_25_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_19_, v_sz_boxed_23_, v_i_boxed_24_, v_bs_22_);
lean_dec_ref(v_revDeps_19_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object* v_revDeps_26_){
_start:
{
size_t v_sz_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_sz_27_ = lean_array_size(v_revDeps_26_);
v___x_28_ = ((size_t)0ULL);
lean_inc_ref(v_revDeps_26_);
v___x_29_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_26_, v_sz_27_, v___x_28_, v_revDeps_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v_revDeps_26_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object* v_i_31_, size_t v_sz_32_, size_t v_i_33_, lean_object* v_bs_34_){
_start:
{
uint8_t v___x_35_; 
v___x_35_ = lean_usize_dec_lt(v_i_33_, v_sz_32_);
if (v___x_35_ == 0)
{
return v_bs_34_;
}
else
{
lean_object* v_v_36_; lean_object* v___x_37_; lean_object* v_bs_x27_38_; lean_object* v___y_40_; 
v_v_36_ = lean_array_uget(v_bs_34_, v_i_33_);
v___x_37_ = lean_unsigned_to_nat(0u);
v_bs_x27_38_ = lean_array_uset(v_bs_34_, v_i_33_, v___x_37_);
if (lean_obj_tag(v_v_36_) == 0)
{
v___y_40_ = v_v_36_;
goto v___jp_39_;
}
else
{
lean_object* v_val_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_55_; 
v_val_45_ = lean_ctor_get(v_v_36_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_v_36_);
if (v_isSharedCheck_55_ == 0)
{
v___x_47_ = v_v_36_;
v_isShared_48_ = v_isSharedCheck_55_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_val_45_);
lean_dec(v_v_36_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_55_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lean_usize_to_nat(v_i_33_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_51_ = v___x_47_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_49_);
v___x_51_ = v_reuseFailAlloc_54_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_array_set(v_val_45_, v_i_31_, v___x_51_);
v___x_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___y_40_ = v___x_53_;
goto v___jp_39_;
}
}
}
v___jp_39_:
{
size_t v___x_41_; size_t v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_33_, v___x_41_);
v___x_43_ = lean_array_uset(v_bs_x27_38_, v_i_33_, v___y_40_);
v_i_33_ = v___x_42_;
v_bs_34_ = v___x_43_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object* v_i_56_, lean_object* v_sz_57_, lean_object* v_i_58_, lean_object* v_bs_59_){
_start:
{
size_t v_sz_boxed_60_; size_t v_i_boxed_61_; lean_object* v_res_62_; 
v_sz_boxed_60_ = lean_unbox_usize(v_sz_57_);
lean_dec(v_sz_57_);
v_i_boxed_61_ = lean_unbox_usize(v_i_58_);
lean_dec(v_i_58_);
v_res_62_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_56_, v_sz_boxed_60_, v_i_boxed_61_, v_bs_59_);
lean_dec(v_i_56_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t v_sz_63_, size_t v_i_64_, lean_object* v_bs_65_){
_start:
{
uint8_t v___x_66_; 
v___x_66_ = lean_usize_dec_lt(v_i_64_, v_sz_63_);
if (v___x_66_ == 0)
{
return v_bs_65_;
}
else
{
lean_object* v_v_67_; lean_object* v___x_68_; lean_object* v_bs_x27_69_; lean_object* v___x_70_; size_t v_sz_71_; size_t v___x_72_; lean_object* v___x_73_; size_t v___x_74_; size_t v___x_75_; lean_object* v___x_76_; 
v_v_67_ = lean_array_uget(v_bs_65_, v_i_64_);
v___x_68_ = lean_unsigned_to_nat(0u);
v_bs_x27_69_ = lean_array_uset(v_bs_65_, v_i_64_, v___x_68_);
v___x_70_ = lean_usize_to_nat(v_i_64_);
v_sz_71_ = lean_array_size(v_v_67_);
v___x_72_ = ((size_t)0ULL);
v___x_73_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v___x_70_, v_sz_71_, v___x_72_, v_v_67_);
lean_dec(v___x_70_);
v___x_74_ = ((size_t)1ULL);
v___x_75_ = lean_usize_add(v_i_64_, v___x_74_);
v___x_76_ = lean_array_uset(v_bs_x27_69_, v_i_64_, v___x_73_);
v_i_64_ = v___x_75_;
v_bs_65_ = v___x_76_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object* v_sz_78_, lean_object* v_i_79_, lean_object* v_bs_80_){
_start:
{
size_t v_sz_boxed_81_; size_t v_i_boxed_82_; lean_object* v_res_83_; 
v_sz_boxed_81_ = lean_unbox_usize(v_sz_78_);
lean_dec(v_sz_78_);
v_i_boxed_82_ = lean_unbox_usize(v_i_79_);
lean_dec(v_i_79_);
v_res_83_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_boxed_81_, v_i_boxed_82_, v_bs_80_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object* v_info_84_){
_start:
{
lean_object* v_graph_85_; lean_object* v_revDeps_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_96_; 
v_graph_85_ = lean_ctor_get(v_info_84_, 0);
v_revDeps_86_ = lean_ctor_get(v_info_84_, 1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_info_84_);
if (v_isSharedCheck_96_ == 0)
{
v___x_88_ = v_info_84_;
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_revDeps_86_);
lean_inc(v_graph_85_);
lean_dec(v_info_84_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
size_t v_sz_90_; size_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v_sz_90_ = lean_array_size(v_graph_85_);
v___x_91_ = ((size_t)0ULL);
v___x_92_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_90_, v___x_91_, v_graph_85_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_92_);
v___x_94_ = v___x_88_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v_revDeps_86_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object* v_i_97_, lean_object* v_as_98_, size_t v_sz_99_, size_t v_i_100_, lean_object* v_bs_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_97_, v_sz_99_, v_i_100_, v_bs_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object* v_i_103_, lean_object* v_as_104_, lean_object* v_sz_105_, lean_object* v_i_106_, lean_object* v_bs_107_){
_start:
{
size_t v_sz_boxed_108_; size_t v_i_boxed_109_; lean_object* v_res_110_; 
v_sz_boxed_108_ = lean_unbox_usize(v_sz_105_);
lean_dec(v_sz_105_);
v_i_boxed_109_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(v_i_103_, v_as_104_, v_sz_boxed_108_, v_i_boxed_109_, v_bs_107_);
lean_dec_ref(v_as_104_);
lean_dec(v_i_103_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object* v_as_111_, size_t v_sz_112_, size_t v_i_113_, lean_object* v_bs_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_112_, v_i_113_, v_bs_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object* v_as_116_, lean_object* v_sz_117_, lean_object* v_i_118_, lean_object* v_bs_119_){
_start:
{
size_t v_sz_boxed_120_; size_t v_i_boxed_121_; lean_object* v_res_122_; 
v_sz_boxed_120_ = lean_unbox_usize(v_sz_117_);
lean_dec(v_sz_117_);
v_i_boxed_121_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(v_as_116_, v_sz_boxed_120_, v_i_boxed_121_, v_bs_119_);
lean_dec_ref(v_as_116_);
return v_res_122_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Array_instInhabited___redArg();
return v___x_123_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object* v_callerIdx_124_, lean_object* v_paramIdx_125_, lean_object* v_info_126_){
_start:
{
lean_object* v_graph_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_graph_127_ = lean_ctor_get(v_info_126_, 0);
v___x_128_ = lean_box(0);
v___x_129_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_130_ = lean_array_get_borrowed(v___x_129_, v_graph_127_, v_callerIdx_124_);
v___x_131_ = lean_array_get_borrowed(v___x_128_, v___x_130_, v_paramIdx_125_);
if (lean_obj_tag(v___x_131_) == 0)
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = 1;
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object* v_callerIdx_134_, lean_object* v_paramIdx_135_, lean_object* v_info_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_134_, v_paramIdx_135_, v_info_136_);
lean_dec_ref(v_info_136_);
lean_dec(v_paramIdx_135_);
lean_dec(v_callerIdx_134_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object* v_upperBound_139_, lean_object* v_next_140_, lean_object* v_funIdx_141_, lean_object* v_paramIdx_142_, lean_object* v_a_143_, lean_object* v_b_144_){
_start:
{
lean_object* v_a_146_; uint8_t v___x_150_; 
v___x_150_ = lean_nat_dec_lt(v_a_143_, v_upperBound_139_);
if (v___x_150_ == 0)
{
lean_dec(v_a_143_);
lean_dec(v_paramIdx_142_);
return v_b_144_;
}
else
{
lean_object* v_graph_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_graph_151_ = lean_ctor_get(v_b_144_, 0);
v___x_152_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_153_ = lean_box(0);
v___x_154_ = lean_array_get_borrowed(v___x_152_, v_graph_151_, v_next_140_);
v___x_155_ = lean_array_get(v___x_153_, v___x_154_, v_a_143_);
if (lean_obj_tag(v___x_155_) == 1)
{
lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_167_; 
v_val_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_160_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_161_ = lean_array_get(v___x_153_, v_val_156_, v_funIdx_141_);
lean_dec(v_val_156_);
lean_inc(v_paramIdx_142_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v_paramIdx_142_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_paramIdx_142_);
v___x_163_ = v_reuseFailAlloc_166_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
uint8_t v___x_164_; 
v___x_164_ = l_Option_instDecidableEq___redArg(v___x_160_, v___x_161_, v___x_163_);
if (v___x_164_ == 0)
{
v_a_146_ = v_b_144_;
goto v___jp_145_;
}
else
{
lean_object* v___x_165_; 
lean_inc(v_a_143_);
v___x_165_ = l_Lean_Elab_FixedParams_Info_setVarying(v_next_140_, v_a_143_, v_b_144_);
v_a_146_ = v___x_165_;
goto v___jp_145_;
}
}
}
}
else
{
lean_dec(v___x_155_);
v_a_146_ = v_b_144_;
goto v___jp_145_;
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_add(v_a_143_, v___x_147_);
lean_dec(v_a_143_);
v_a_143_ = v___x_148_;
v_b_144_ = v_a_146_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object* v_upperBound_168_, lean_object* v_funIdx_169_, lean_object* v_paramIdx_170_, lean_object* v_a_171_, lean_object* v_b_172_){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = lean_nat_dec_lt(v_a_171_, v_upperBound_168_);
if (v___x_173_ == 0)
{
lean_dec(v_a_171_);
lean_dec(v_paramIdx_170_);
return v_b_172_;
}
else
{
lean_object* v_graph_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_graph_174_ = lean_ctor_get(v_b_172_, 0);
v___x_175_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_176_ = lean_array_get_borrowed(v___x_175_, v_graph_174_, v_a_171_);
v___x_177_ = lean_array_get_size(v___x_176_);
v___x_178_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_170_);
v___x_179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v___x_177_, v_a_171_, v_funIdx_169_, v_paramIdx_170_, v___x_178_, v_b_172_);
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_add(v_a_171_, v___x_180_);
lean_dec(v_a_171_);
v_a_171_ = v___x_181_;
v_b_172_ = v___x_179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object* v_funIdx_183_, lean_object* v_paramIdx_184_, lean_object* v_info_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_funIdx_183_, v_paramIdx_184_, v_info_185_);
if (v___x_186_ == 0)
{
lean_dec(v_paramIdx_184_);
return v_info_185_;
}
else
{
lean_object* v_graph_187_; lean_object* v_revDeps_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_graph_187_ = lean_ctor_get(v_info_185_, 0);
v_revDeps_188_ = lean_ctor_get(v_info_185_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_info_185_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_info_185_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_revDeps_188_);
lean_inc(v_graph_187_);
lean_dec(v_info_185_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___y_194_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_192_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_207_ = lean_array_get_size(v_graph_187_);
v___x_208_ = lean_nat_dec_lt(v_funIdx_183_, v___x_207_);
if (v___x_208_ == 0)
{
v___y_194_ = v_graph_187_;
goto v___jp_193_;
}
else
{
lean_object* v_v_209_; lean_object* v___x_210_; lean_object* v_xs_x27_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_v_209_ = lean_array_fget(v_graph_187_, v_funIdx_183_);
v___x_210_ = lean_box(0);
v_xs_x27_211_ = lean_array_fset(v_graph_187_, v_funIdx_183_, v___x_210_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_array_set(v_v_209_, v_paramIdx_184_, v___x_212_);
v___x_214_ = lean_array_fset(v_xs_x27_211_, v_funIdx_183_, v___x_213_);
v___y_194_ = v___x_214_;
goto v___jp_193_;
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v_info_198_; 
v___x_195_ = lean_array_get_size(v___y_194_);
v___x_196_ = lean_unsigned_to_nat(0u);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___y_194_);
v_info_198_ = v___x_190_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___y_194_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_revDeps_188_);
v_info_198_ = v_reuseFailAlloc_206_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_199_; lean_object* v_revDeps_200_; lean_object* v___x_201_; lean_object* v___x_202_; size_t v_sz_203_; size_t v___x_204_; lean_object* v___x_205_; 
lean_inc(v_paramIdx_184_);
v___x_199_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v___x_195_, v_funIdx_183_, v_paramIdx_184_, v___x_196_, v_info_198_);
v_revDeps_200_ = lean_ctor_get(v___x_199_, 1);
v___x_201_ = lean_array_get_borrowed(v___x_192_, v_revDeps_200_, v_funIdx_183_);
v___x_202_ = lean_array_get(v___x_192_, v___x_201_, v_paramIdx_184_);
lean_dec(v_paramIdx_184_);
v_sz_203_ = lean_array_size(v___x_202_);
v___x_204_ = ((size_t)0ULL);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_183_, v___x_202_, v_sz_203_, v___x_204_, v___x_199_);
lean_dec(v___x_202_);
return v___x_205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object* v_funIdx_216_, lean_object* v_as_217_, size_t v_sz_218_, size_t v_i_219_, lean_object* v_b_220_){
_start:
{
uint8_t v___x_221_; 
v___x_221_ = lean_usize_dec_lt(v_i_219_, v_sz_218_);
if (v___x_221_ == 0)
{
return v_b_220_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; 
v_a_222_ = lean_array_uget_borrowed(v_as_217_, v_i_219_);
lean_inc(v_a_222_);
v___x_223_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_216_, v_a_222_, v_b_220_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_i_219_, v___x_224_);
v_i_219_ = v___x_225_;
v_b_220_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object* v_funIdx_227_, lean_object* v_as_228_, lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_b_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_227_, v_as_228_, v_sz_boxed_232_, v_i_boxed_233_, v_b_231_);
lean_dec_ref(v_as_228_);
lean_dec(v_funIdx_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object* v_upperBound_235_, lean_object* v_funIdx_236_, lean_object* v_paramIdx_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_235_, v_funIdx_236_, v_paramIdx_237_, v_a_238_, v_b_239_);
lean_dec(v_funIdx_236_);
lean_dec(v_upperBound_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object* v_upperBound_241_, lean_object* v_next_242_, lean_object* v_funIdx_243_, lean_object* v_paramIdx_244_, lean_object* v_a_245_, lean_object* v_b_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_241_, v_next_242_, v_funIdx_243_, v_paramIdx_244_, v_a_245_, v_b_246_);
lean_dec(v_funIdx_243_);
lean_dec(v_next_242_);
lean_dec(v_upperBound_241_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object* v_funIdx_248_, lean_object* v_paramIdx_249_, lean_object* v_info_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_248_, v_paramIdx_249_, v_info_250_);
lean_dec(v_funIdx_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object* v_upperBound_252_, lean_object* v_next_253_, lean_object* v_funIdx_254_, lean_object* v_paramIdx_255_, lean_object* v_inst_256_, lean_object* v_R_257_, lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_c_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_252_, v_next_253_, v_funIdx_254_, v_paramIdx_255_, v_a_258_, v_b_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object* v_upperBound_262_, lean_object* v_next_263_, lean_object* v_funIdx_264_, lean_object* v_paramIdx_265_, lean_object* v_inst_266_, lean_object* v_R_267_, lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v_c_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(v_upperBound_262_, v_next_263_, v_funIdx_264_, v_paramIdx_265_, v_inst_266_, v_R_267_, v_a_268_, v_b_269_, v_c_270_);
lean_dec(v_funIdx_264_);
lean_dec(v_next_263_);
lean_dec(v_upperBound_262_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object* v_upperBound_272_, lean_object* v_funIdx_273_, lean_object* v_paramIdx_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_272_, v_funIdx_273_, v_paramIdx_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object* v_upperBound_281_, lean_object* v_funIdx_282_, lean_object* v_paramIdx_283_, lean_object* v_inst_284_, lean_object* v_R_285_, lean_object* v_a_286_, lean_object* v_b_287_, lean_object* v_c_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(v_upperBound_281_, v_funIdx_282_, v_paramIdx_283_, v_inst_284_, v_R_285_, v_a_286_, v_b_287_, v_c_288_);
lean_dec(v_funIdx_282_);
lean_dec(v_upperBound_281_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object* v_calleeIdx_290_, lean_object* v_argIdx_291_, lean_object* v_callerIdx_292_, lean_object* v_info_293_){
_start:
{
lean_object* v_graph_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_graph_294_ = lean_ctor_get(v_info_293_, 0);
v___x_295_ = lean_box(0);
v___x_296_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_297_ = lean_array_get_borrowed(v___x_296_, v_graph_294_, v_calleeIdx_290_);
v___x_298_ = lean_array_get_borrowed(v___x_295_, v___x_297_, v_argIdx_291_);
if (lean_obj_tag(v___x_298_) == 0)
{
return v___x_295_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_300_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
v___x_300_ = lean_array_get_borrowed(v___x_295_, v_val_299_, v_callerIdx_292_);
lean_inc(v___x_300_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object* v_calleeIdx_301_, lean_object* v_argIdx_302_, lean_object* v_callerIdx_303_, lean_object* v_info_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_301_, v_argIdx_302_, v_callerIdx_303_, v_info_304_);
lean_dec_ref(v_info_304_);
lean_dec(v_callerIdx_303_);
lean_dec(v_argIdx_302_);
lean_dec(v_calleeIdx_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object* v_upperBound_306_, lean_object* v_val_307_, lean_object* v_calleeIdx_308_, lean_object* v_argIdx_309_, lean_object* v_a_310_, lean_object* v_b_311_){
_start:
{
lean_object* v_a_313_; uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v_a_310_, v_upperBound_306_);
if (v___x_317_ == 0)
{
lean_dec(v_a_310_);
lean_dec(v_argIdx_309_);
return v_b_311_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_array_fget_borrowed(v_val_307_, v_a_310_);
if (lean_obj_tag(v___x_318_) == 1)
{
lean_object* v_val_319_; lean_object* v___x_320_; 
v_val_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_319_);
lean_inc(v_argIdx_309_);
v___x_320_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_308_, v_argIdx_309_, v_a_310_, v_val_319_, v_b_311_);
v_a_313_ = v___x_320_;
goto v___jp_312_;
}
else
{
v_a_313_ = v_b_311_;
goto v___jp_312_;
}
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_a_310_, v___x_314_);
lean_dec(v_a_310_);
v_a_310_ = v___x_315_;
v_b_311_ = v_a_313_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object* v_calleeIdx_321_, lean_object* v_argIdx_322_, lean_object* v_callerIdx_323_, lean_object* v_paramIdx_324_, lean_object* v_info_325_){
_start:
{
lean_object* v_info_327_; lean_object* v_graph_328_; uint8_t v___x_332_; 
v___x_332_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
if (v___x_332_ == 0)
{
lean_dec(v_paramIdx_324_);
lean_dec(v_argIdx_322_);
return v_info_325_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_323_, v_paramIdx_324_, v_info_325_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_paramIdx_324_);
v___x_334_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_info_325_);
if (lean_obj_tag(v___x_335_) == 1)
{
lean_object* v_val_336_; uint8_t v___x_337_; 
v_val_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_336_);
lean_dec_ref_known(v___x_335_, 1);
v___x_337_ = lean_nat_dec_eq(v_paramIdx_324_, v_val_336_);
lean_dec(v_val_336_);
lean_dec(v_paramIdx_324_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_338_;
}
else
{
lean_dec(v_argIdx_322_);
return v_info_325_;
}
}
else
{
lean_object* v_graph_339_; lean_object* v_revDeps_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_383_; 
lean_dec(v___x_335_);
v_graph_339_ = lean_ctor_get(v_info_325_, 0);
v_revDeps_340_ = lean_ctor_get(v_info_325_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_info_325_);
if (v_isSharedCheck_383_ == 0)
{
v___x_342_ = v_info_325_;
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_revDeps_340_);
lean_inc(v_graph_339_);
lean_dec(v_info_325_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___y_347_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_344_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_345_ = lean_box(0);
v___x_358_ = lean_array_get_size(v_graph_339_);
v___x_359_ = lean_nat_dec_lt(v_calleeIdx_321_, v___x_358_);
if (v___x_359_ == 0)
{
v___y_347_ = v_graph_339_;
goto v___jp_346_;
}
else
{
lean_object* v_v_360_; lean_object* v___x_361_; lean_object* v_xs_x27_362_; lean_object* v___y_364_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_v_360_ = lean_array_fget(v_graph_339_, v_calleeIdx_321_);
v___x_361_ = lean_box(0);
v_xs_x27_362_ = lean_array_fset(v_graph_339_, v_calleeIdx_321_, v___x_361_);
v___x_366_ = lean_array_get_size(v_v_360_);
v___x_367_ = lean_nat_dec_lt(v_argIdx_322_, v___x_366_);
if (v___x_367_ == 0)
{
v___y_364_ = v_v_360_;
goto v___jp_363_;
}
else
{
lean_object* v_v_368_; lean_object* v_xs_x27_369_; lean_object* v___y_371_; 
v_v_368_ = lean_array_fget(v_v_360_, v_argIdx_322_);
v_xs_x27_369_ = lean_array_fset(v_v_360_, v_argIdx_322_, v___x_361_);
if (lean_obj_tag(v_v_368_) == 0)
{
v___y_371_ = v_v_368_;
goto v___jp_370_;
}
else
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v_val_373_ = lean_ctor_get(v_v_368_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_v_368_);
if (v_isSharedCheck_382_ == 0)
{
v___x_375_ = v_v_368_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v_v_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
lean_inc(v_paramIdx_324_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_paramIdx_324_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_paramIdx_324_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_array_set(v_val_373_, v_callerIdx_323_, v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___y_371_ = v___x_380_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_array_fset(v_xs_x27_369_, v_argIdx_322_, v___y_371_);
v___y_364_ = v___x_372_;
goto v___jp_363_;
}
}
v___jp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_array_fset(v_xs_x27_362_, v_calleeIdx_321_, v___y_364_);
v___y_347_ = v___x_365_;
goto v___jp_346_;
}
}
v___jp_346_:
{
lean_object* v_info_349_; 
lean_inc_ref(v___y_347_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___y_347_);
v_info_349_ = v___x_342_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___y_347_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_revDeps_340_);
v_info_349_ = v_reuseFailAlloc_357_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_array_get_borrowed(v___x_344_, v___y_347_, v_callerIdx_323_);
v___x_351_ = lean_array_get_borrowed(v___x_345_, v___x_350_, v_paramIdx_324_);
if (lean_obj_tag(v___x_351_) == 1)
{
lean_object* v_val_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_graph_356_; 
lean_inc_ref(v___x_351_);
lean_dec_ref(v___y_347_);
v_val_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_val_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = lean_array_get_size(v_val_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
lean_inc(v_argIdx_322_);
v___x_355_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v___x_353_, v_val_352_, v_calleeIdx_321_, v_argIdx_322_, v___x_354_, v_info_349_);
lean_dec(v_val_352_);
v_graph_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_graph_356_);
v_info_327_ = v___x_355_;
v_graph_328_ = v_graph_356_;
goto v___jp_326_;
}
else
{
v_info_327_ = v_info_349_;
v_graph_328_ = v___y_347_;
goto v___jp_326_;
}
}
}
}
}
}
}
v___jp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_array_get_size(v_graph_328_);
lean_dec_ref(v_graph_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v___x_329_, v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_paramIdx_324_, v___x_330_, v_info_327_);
lean_dec(v_argIdx_322_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object* v_upperBound_384_, lean_object* v_next_385_, lean_object* v_calleeIdx_386_, lean_object* v_argIdx_387_, lean_object* v_callerIdx_388_, lean_object* v_paramIdx_389_, lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_lt(v_a_390_, v_upperBound_384_);
if (v___x_397_ == 0)
{
lean_dec(v_a_390_);
lean_dec(v_paramIdx_389_);
return v_b_391_;
}
else
{
lean_object* v_graph_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_graph_398_ = lean_ctor_get(v_b_391_, 0);
v___x_399_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_400_ = lean_box(0);
v___x_401_ = lean_array_get_borrowed(v___x_399_, v_graph_398_, v_next_385_);
v___x_402_ = lean_array_get_borrowed(v___x_400_, v___x_401_, v_a_390_);
if (lean_obj_tag(v___x_402_) == 1)
{
lean_object* v_val_403_; lean_object* v___x_404_; 
v_val_403_ = lean_ctor_get(v___x_402_, 0);
v___x_404_ = lean_array_get_borrowed(v___x_400_, v_val_403_, v_calleeIdx_386_);
if (lean_obj_tag(v___x_404_) == 1)
{
lean_object* v_val_405_; uint8_t v___x_406_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
v___x_406_ = lean_nat_dec_eq(v_val_405_, v_argIdx_387_);
if (v___x_406_ == 0)
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
else
{
lean_object* v___x_407_; 
lean_inc(v_paramIdx_389_);
lean_inc(v_a_390_);
v___x_407_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_next_385_, v_a_390_, v_callerIdx_388_, v_paramIdx_389_, v_b_391_);
v_a_393_ = v___x_407_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_a_390_, v___x_394_);
lean_dec(v_a_390_);
v_a_390_ = v___x_395_;
v_b_391_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object* v_upperBound_408_, lean_object* v_calleeIdx_409_, lean_object* v_argIdx_410_, lean_object* v_callerIdx_411_, lean_object* v_paramIdx_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_a_413_, v_upperBound_408_);
if (v___x_415_ == 0)
{
lean_dec(v_a_413_);
lean_dec(v_paramIdx_412_);
return v_b_414_;
}
else
{
lean_object* v_graph_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_graph_416_ = lean_ctor_get(v_b_414_, 0);
v___x_417_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_418_ = lean_array_get_borrowed(v___x_417_, v_graph_416_, v_a_413_);
v___x_419_ = lean_array_get_size(v___x_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_412_);
v___x_421_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v___x_419_, v_a_413_, v_calleeIdx_409_, v_argIdx_410_, v_callerIdx_411_, v_paramIdx_412_, v___x_420_, v_b_414_);
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v_a_413_, v___x_422_);
lean_dec(v_a_413_);
v_a_413_ = v___x_423_;
v_b_414_ = v___x_421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object* v_upperBound_425_, lean_object* v_calleeIdx_426_, lean_object* v_argIdx_427_, lean_object* v_callerIdx_428_, lean_object* v_paramIdx_429_, lean_object* v_a_430_, lean_object* v_b_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_425_, v_calleeIdx_426_, v_argIdx_427_, v_callerIdx_428_, v_paramIdx_429_, v_a_430_, v_b_431_);
lean_dec(v_callerIdx_428_);
lean_dec(v_argIdx_427_);
lean_dec(v_calleeIdx_426_);
lean_dec(v_upperBound_425_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object* v_upperBound_433_, lean_object* v_val_434_, lean_object* v_calleeIdx_435_, lean_object* v_argIdx_436_, lean_object* v_a_437_, lean_object* v_b_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_433_, v_val_434_, v_calleeIdx_435_, v_argIdx_436_, v_a_437_, v_b_438_);
lean_dec(v_calleeIdx_435_);
lean_dec_ref(v_val_434_);
lean_dec(v_upperBound_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object* v_upperBound_440_, lean_object* v_next_441_, lean_object* v_calleeIdx_442_, lean_object* v_argIdx_443_, lean_object* v_callerIdx_444_, lean_object* v_paramIdx_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_440_, v_next_441_, v_calleeIdx_442_, v_argIdx_443_, v_callerIdx_444_, v_paramIdx_445_, v_a_446_, v_b_447_);
lean_dec(v_callerIdx_444_);
lean_dec(v_argIdx_443_);
lean_dec(v_calleeIdx_442_);
lean_dec(v_next_441_);
lean_dec(v_upperBound_440_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object* v_calleeIdx_449_, lean_object* v_argIdx_450_, lean_object* v_callerIdx_451_, lean_object* v_paramIdx_452_, lean_object* v_info_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_449_, v_argIdx_450_, v_callerIdx_451_, v_paramIdx_452_, v_info_453_);
lean_dec(v_callerIdx_451_);
lean_dec(v_calleeIdx_449_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object* v_upperBound_455_, lean_object* v_next_456_, lean_object* v_calleeIdx_457_, lean_object* v_argIdx_458_, lean_object* v_callerIdx_459_, lean_object* v_paramIdx_460_, lean_object* v_inst_461_, lean_object* v_R_462_, lean_object* v_a_463_, lean_object* v_b_464_, lean_object* v_c_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_455_, v_next_456_, v_calleeIdx_457_, v_argIdx_458_, v_callerIdx_459_, v_paramIdx_460_, v_a_463_, v_b_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object* v_upperBound_467_, lean_object* v_next_468_, lean_object* v_calleeIdx_469_, lean_object* v_argIdx_470_, lean_object* v_callerIdx_471_, lean_object* v_paramIdx_472_, lean_object* v_inst_473_, lean_object* v_R_474_, lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_c_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(v_upperBound_467_, v_next_468_, v_calleeIdx_469_, v_argIdx_470_, v_callerIdx_471_, v_paramIdx_472_, v_inst_473_, v_R_474_, v_a_475_, v_b_476_, v_c_477_);
lean_dec(v_callerIdx_471_);
lean_dec(v_argIdx_470_);
lean_dec(v_calleeIdx_469_);
lean_dec(v_next_468_);
lean_dec(v_upperBound_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object* v_upperBound_479_, lean_object* v_calleeIdx_480_, lean_object* v_argIdx_481_, lean_object* v_callerIdx_482_, lean_object* v_paramIdx_483_, lean_object* v_inst_484_, lean_object* v_R_485_, lean_object* v_a_486_, lean_object* v_b_487_, lean_object* v_c_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_479_, v_calleeIdx_480_, v_argIdx_481_, v_callerIdx_482_, v_paramIdx_483_, v_a_486_, v_b_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object* v_upperBound_490_, lean_object* v_calleeIdx_491_, lean_object* v_argIdx_492_, lean_object* v_callerIdx_493_, lean_object* v_paramIdx_494_, lean_object* v_inst_495_, lean_object* v_R_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v_c_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(v_upperBound_490_, v_calleeIdx_491_, v_argIdx_492_, v_callerIdx_493_, v_paramIdx_494_, v_inst_495_, v_R_496_, v_a_497_, v_b_498_, v_c_499_);
lean_dec(v_callerIdx_493_);
lean_dec(v_argIdx_492_);
lean_dec(v_calleeIdx_491_);
lean_dec(v_upperBound_490_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object* v_upperBound_501_, lean_object* v_val_502_, lean_object* v_calleeIdx_503_, lean_object* v_argIdx_504_, lean_object* v_inst_505_, lean_object* v_R_506_, lean_object* v_a_507_, lean_object* v_b_508_, lean_object* v_c_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_501_, v_val_502_, v_calleeIdx_503_, v_argIdx_504_, v_a_507_, v_b_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object* v_upperBound_511_, lean_object* v_val_512_, lean_object* v_calleeIdx_513_, lean_object* v_argIdx_514_, lean_object* v_inst_515_, lean_object* v_R_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v_c_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(v_upperBound_511_, v_val_512_, v_calleeIdx_513_, v_argIdx_514_, v_inst_515_, v_R_516_, v_a_517_, v_b_518_, v_c_519_);
lean_dec(v_calleeIdx_513_);
lean_dec_ref(v_val_512_);
lean_dec(v_upperBound_511_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object* v_a_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_nat_to_int(v_a_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
if (lean_obj_tag(v_x_525_) == 0)
{
lean_dec(v_x_523_);
return v_x_524_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_head_526_ = lean_ctor_get(v_x_525_, 0);
v_tail_527_ = lean_ctor_get(v_x_525_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_525_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_525_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_tail_527_);
lean_inc(v_head_526_);
lean_dec(v_x_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
lean_inc(v_x_523_);
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 5);
lean_ctor_set(v___x_529_, 1, v_x_523_);
lean_ctor_set(v___x_529_, 0, v_x_524_);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_x_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_x_523_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_head_526_);
v_x_524_ = v___x_533_;
v_x_525_ = v_tail_527_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
lean_object* v___x_539_; 
lean_dec(v_x_538_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v_tail_540_; 
v_tail_540_ = lean_ctor_get(v_x_537_, 1);
if (lean_obj_tag(v_tail_540_) == 0)
{
lean_object* v_head_541_; 
lean_dec(v_x_538_);
v_head_541_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_541_);
lean_dec_ref_known(v_x_537_, 2);
return v_head_541_;
}
else
{
lean_object* v_head_542_; lean_object* v___x_543_; 
lean_inc(v_tail_540_);
v_head_542_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_542_);
lean_dec_ref_known(v_x_537_, 2);
v___x_543_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(v_x_538_, v_head_542_, v_tail_540_);
return v___x_543_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_552_; 
v___x_552_ = l_List_reverse___redArg(v_a_551_);
return v___x_552_;
}
else
{
lean_object* v_head_553_; lean_object* v_tail_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_578_; 
v_head_553_ = lean_ctor_get(v_a_550_, 0);
v_tail_554_ = lean_ctor_get(v_a_550_, 1);
v_isSharedCheck_578_ = !lean_is_exclusive(v_a_550_);
if (v_isSharedCheck_578_ == 0)
{
v___x_556_ = v_a_550_;
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_tail_554_);
lean_inc(v_head_553_);
lean_dec(v_a_550_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___y_559_; 
if (lean_obj_tag(v_head_553_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1));
v___y_559_ = v___x_564_;
goto v___jp_558_;
}
else
{
lean_object* v_val_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_577_; 
v_val_565_ = lean_ctor_get(v_head_553_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_head_553_);
if (v_isSharedCheck_577_ == 0)
{
v___x_567_ = v_head_553_;
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_val_565_);
lean_dec(v_head_553_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_569_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3));
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_val_565_, v___x_570_);
lean_dec(v_val_565_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 3);
lean_ctor_set(v___x_567_, 0, v___x_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_569_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___y_559_ = v___x_575_;
goto v___jp_558_;
}
}
}
v___jp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 1, v_a_551_);
lean_ctor_set(v___x_556_, 0, v___y_559_);
v___x_561_ = v___x_556_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___y_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_551_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v_a_550_ = v_tail_554_;
v_a_551_ = v___x_561_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4));
v___x_588_ = lean_string_length(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6);
v___x_590_ = lean_nat_to_int(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
if (lean_obj_tag(v_a_595_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = l_List_reverse___redArg(v_a_596_);
return v___x_597_;
}
else
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_624_; 
v_head_598_ = lean_ctor_get(v_a_595_, 0);
v_tail_599_ = lean_ctor_get(v_a_595_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_a_595_);
if (v_isSharedCheck_624_ == 0)
{
v___x_601_ = v_a_595_;
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_tail_599_);
lean_inc(v_head_598_);
lean_dec(v_a_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___y_604_; 
if (lean_obj_tag(v_head_598_) == 0)
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1));
v___y_604_ = v___x_609_;
goto v___jp_603_;
}
else
{
lean_object* v_val_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; 
v_val_610_ = lean_ctor_get(v_head_598_, 0);
lean_inc(v_val_610_);
lean_dec_ref_known(v_head_598_, 1);
v___x_611_ = lean_array_to_list(v_val_610_);
v___x_612_ = lean_box(0);
v___x_613_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(v___x_611_, v___x_612_);
v___x_614_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_615_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_613_, v___x_614_);
v___x_616_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7);
v___x_617_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8));
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_615_);
v___x_619_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_616_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = 0;
v___x_623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set_uint8(v___x_623_, sizeof(void*)*1, v___x_622_);
v___y_604_ = v___x_623_;
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v_a_596_);
lean_ctor_set(v___x_601_, 0, v___y_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___y_604_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_a_596_);
v___x_606_ = v_reuseFailAlloc_608_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
v_a_595_ = v_tail_599_;
v_a_596_ = v___x_606_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
if (lean_obj_tag(v_a_628_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = l_List_reverse___redArg(v_a_629_);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_647_; 
v_head_631_ = lean_ctor_get(v_a_628_, 0);
v_tail_632_ = lean_ctor_get(v_a_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_634_ = v_a_628_;
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_tail_632_);
lean_inc(v_head_631_);
lean_dec(v_a_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_636_ = lean_array_to_list(v_head_631_);
v___x_637_ = lean_box(0);
v___x_638_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(v___x_636_, v___x_637_);
v___x_639_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_640_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_638_, v___x_639_);
v___x_641_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1));
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_629_);
lean_ctor_set(v___x_634_, 0, v___x_642_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_a_629_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
v_a_628_ = v_tail_632_;
v_a_629_ = v___x_644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object* v_info_648_){
_start:
{
lean_object* v_graph_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_graph_649_ = lean_ctor_get(v_info_648_, 0);
lean_inc_ref(v_graph_649_);
lean_dec_ref(v_info_648_);
v___x_650_ = lean_array_to_list(v_graph_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(v___x_650_, v___x_651_);
v___x_653_ = lean_box(1);
v___x_654_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_652_, v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object* v_x_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object* v_x_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(v_x_659_);
lean_dec(v_x_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object* v_fvarId_662_, lean_object* v_x_663_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = l_Lean_instBEqFVarId_beq(v_fvarId_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_665_, lean_object* v_x_666_){
_start:
{
uint8_t v_res_667_; lean_object* v_r_668_; 
v_res_667_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(v_fvarId_665_, v_x_666_);
lean_dec(v_x_666_);
lean_dec(v_fvarId_665_);
v_r_668_ = lean_box(v_res_667_);
return v_r_668_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_box(0);
v___x_671_ = lean_unsigned_to_nat(16u);
v___x_672_ = lean_mk_array(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object* v_e_676_, lean_object* v_fvarId_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___f_680_; lean_object* v___f_681_; lean_object* v___x_682_; uint8_t v_fst_684_; lean_object* v_mctx_685_; lean_object* v___y_703_; lean_object* v_mctx_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___f_680_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0));
v___f_681_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_681_, 0, v_fvarId_677_);
v___x_682_ = lean_st_ref_get(v___y_678_);
v_mctx_708_ = lean_ctor_get(v___x_682_, 0);
lean_inc_ref_n(v_mctx_708_, 2);
lean_dec(v___x_682_);
v___x_709_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
lean_ctor_set(v___x_710_, 1, v_mctx_708_);
v___x_711_ = l_Lean_Expr_hasFVar(v_e_676_);
if (v___x_711_ == 0)
{
uint8_t v___x_712_; 
v___x_712_ = l_Lean_Expr_hasMVar(v_e_676_);
if (v___x_712_ == 0)
{
lean_dec_ref_known(v___x_710_, 2);
lean_dec_ref(v___f_681_);
lean_dec_ref(v_e_676_);
v_fst_684_ = v___x_712_;
v_mctx_685_ = v_mctx_708_;
goto v___jp_683_;
}
else
{
lean_object* v___x_713_; 
lean_dec_ref(v_mctx_708_);
v___x_713_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_681_, v___f_680_, v_e_676_, v___x_710_);
v___y_703_ = v___x_713_;
goto v___jp_702_;
}
}
else
{
lean_object* v___x_714_; 
lean_dec_ref(v_mctx_708_);
v___x_714_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_681_, v___f_680_, v_e_676_, v___x_710_);
v___y_703_ = v___x_714_;
goto v___jp_702_;
}
v___jp_683_:
{
lean_object* v___x_686_; lean_object* v_cache_687_; lean_object* v_zetaDeltaFVarIds_688_; lean_object* v_postponed_689_; lean_object* v_diag_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_700_; 
v___x_686_ = lean_st_ref_take(v___y_678_);
v_cache_687_ = lean_ctor_get(v___x_686_, 1);
v_zetaDeltaFVarIds_688_ = lean_ctor_get(v___x_686_, 2);
v_postponed_689_ = lean_ctor_get(v___x_686_, 3);
v_diag_690_ = lean_ctor_get(v___x_686_, 4);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_700_ == 0)
{
lean_object* v_unused_701_; 
v_unused_701_ = lean_ctor_get(v___x_686_, 0);
lean_dec(v_unused_701_);
v___x_692_ = v___x_686_;
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_diag_690_);
lean_inc(v_postponed_689_);
lean_inc(v_zetaDeltaFVarIds_688_);
lean_inc(v_cache_687_);
lean_dec(v___x_686_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v_mctx_685_);
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_mctx_685_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_cache_687_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_zetaDeltaFVarIds_688_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_postponed_689_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v_diag_690_);
v___x_695_ = v_reuseFailAlloc_699_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_st_ref_put(v___y_678_, v___x_695_);
v___x_697_ = lean_box(v_fst_684_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
v___jp_702_:
{
lean_object* v_snd_704_; lean_object* v_fst_705_; lean_object* v_mctx_706_; uint8_t v___x_707_; 
v_snd_704_ = lean_ctor_get(v___y_703_, 1);
lean_inc(v_snd_704_);
v_fst_705_ = lean_ctor_get(v___y_703_, 0);
lean_inc(v_fst_705_);
lean_dec_ref(v___y_703_);
v_mctx_706_ = lean_ctor_get(v_snd_704_, 1);
lean_inc_ref(v_mctx_706_);
lean_dec(v_snd_704_);
v___x_707_ = lean_unbox(v_fst_705_);
lean_dec(v_fst_705_);
v_fst_684_ = v___x_707_;
v_mctx_685_ = v_mctx_706_;
goto v___jp_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object* v_e_715_, lean_object* v_fvarId_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_715_, v_fvarId_716_, v___y_717_);
lean_dec(v___y_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object* v_e_720_, lean_object* v_fvarId_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_720_, v_fvarId_721_, v___y_723_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object* v_e_728_, lean_object* v_fvarId_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(v_e_728_, v_fvarId_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object* v_k_736_, lean_object* v_b_737_, lean_object* v_c_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
v___x_744_ = lean_apply_7(v_k_736_, v_b_737_, v_c_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, lean_box(0));
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object* v_k_745_, lean_object* v_b_746_, lean_object* v_c_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(v_k_745_, v_b_746_, v_c_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object* v_e_754_, lean_object* v_k_755_, uint8_t v_cleanupAnnotations_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___f_762_; uint8_t v___x_763_; uint8_t v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___f_762_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_762_, 0, v_k_755_);
v___x_763_ = 1;
v___x_764_ = 0;
v___x_765_ = lean_box(0);
v___x_766_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_754_, v___x_763_, v___x_764_, v___x_763_, v___x_764_, v___x_765_, v___f_762_, v_cleanupAnnotations_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_766_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_766_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object* v_e_783_, lean_object* v_k_784_, lean_object* v_cleanupAnnotations_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_791_; lean_object* v_res_792_; 
v_cleanupAnnotations_boxed_791_ = lean_unbox(v_cleanupAnnotations_785_);
v_res_792_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_783_, v_k_784_, v_cleanupAnnotations_boxed_791_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object* v_00_u03b1_793_, lean_object* v_e_794_, lean_object* v_k_795_, uint8_t v_cleanupAnnotations_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_794_, v_k_795_, v_cleanupAnnotations_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object* v_00_u03b1_803_, lean_object* v_e_804_, lean_object* v_k_805_, lean_object* v_cleanupAnnotations_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_812_; lean_object* v_res_813_; 
v_cleanupAnnotations_boxed_812_ = lean_unbox(v_cleanupAnnotations_806_);
v_res_813_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(v_00_u03b1_803_, v_e_804_, v_k_805_, v_cleanupAnnotations_boxed_812_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object* v_upperBound_814_, lean_object* v_xs_815_, lean_object* v_next_816_, lean_object* v_a_817_, lean_object* v_b_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_a_825_; uint8_t v___x_829_; 
v___x_829_ = lean_nat_dec_lt(v_a_817_, v_upperBound_814_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; 
lean_dec(v_a_817_);
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v_b_818_);
return v___x_830_;
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_array_fget_borrowed(v_xs_815_, v_a_817_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___x_831_);
v___x_832_ = lean_infer_type(v___x_831_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_832_, 1);
v___x_834_ = lean_array_fget_borrowed(v_xs_815_, v_next_816_);
v___x_835_ = l_Lean_Expr_fvarId_x21(v___x_834_);
v___x_836_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_a_833_, v___x_835_, v___y_820_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; uint8_t v___x_838_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
v___x_838_ = lean_unbox(v_a_837_);
lean_dec(v_a_837_);
if (v___x_838_ == 0)
{
v_a_825_ = v_b_818_;
goto v___jp_824_;
}
else
{
lean_object* v___x_839_; 
lean_inc(v_a_817_);
v___x_839_ = lean_array_push(v_b_818_, v_a_817_);
v_a_825_ = v___x_839_;
goto v___jp_824_;
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec_ref(v_b_818_);
lean_dec(v_a_817_);
v_a_840_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_836_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_836_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec_ref(v_b_818_);
lean_dec(v_a_817_);
v_a_848_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_832_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_832_);
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
v___jp_824_:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_unsigned_to_nat(1u);
v___x_827_ = lean_nat_add(v_a_817_, v___x_826_);
lean_dec(v_a_817_);
v_a_817_ = v___x_827_;
v_b_818_ = v_a_825_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object* v_upperBound_856_, lean_object* v_xs_857_, lean_object* v_next_858_, lean_object* v_a_859_, lean_object* v_b_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_856_, v_xs_857_, v_next_858_, v_a_859_, v_b_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v_next_858_);
lean_dec_ref(v_xs_857_);
lean_dec(v_upperBound_856_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object* v_upperBound_869_, lean_object* v___x_870_, lean_object* v_xs_871_, lean_object* v_a_872_, lean_object* v_b_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v___x_879_; 
v___x_879_ = lean_nat_dec_lt(v_a_872_, v_upperBound_869_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; 
lean_dec(v_a_872_);
v___x_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_880_, 0, v_b_873_);
return v___x_880_;
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_nat_add(v_a_872_, v___x_881_);
v___x_883_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0));
lean_inc(v___x_882_);
v___x_884_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v___x_870_, v_xs_871_, v_a_872_, v___x_882_, v___x_883_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v_a_872_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = lean_array_push(v_b_873_, v_a_885_);
v_a_872_ = v___x_882_;
v_b_873_ = v___x_886_;
goto _start;
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v___x_882_);
lean_dec_ref(v_b_873_);
v_a_888_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_884_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_884_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object* v_upperBound_896_, lean_object* v___x_897_, lean_object* v_xs_898_, lean_object* v_a_899_, lean_object* v_b_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_896_, v___x_897_, v_xs_898_, v_a_899_, v_b_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_xs_898_);
lean_dec(v___x_897_);
lean_dec(v_upperBound_896_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object* v_xs_909_, lean_object* v_x_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v_revDeps_918_; lean_object* v___x_919_; 
v___x_916_ = lean_array_get_size(v_xs_909_);
v___x_917_ = lean_unsigned_to_nat(0u);
v_revDeps_918_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___lam__0___closed__0));
v___x_919_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v___x_916_, v___x_916_, v_xs_909_, v___x_917_, v_revDeps_918_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object* v_xs_920_, lean_object* v_x_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Elab_getParamRevDeps___lam__0(v_xs_920_, v_x_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec_ref(v_x_921_);
lean_dec_ref(v_xs_920_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v___f_935_; uint8_t v___x_936_; lean_object* v___x_937_; 
v___f_935_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___closed__0));
v___x_936_ = 1;
v___x_937_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_929_, v___f_935_, v___x_936_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_getParamRevDeps(v_value_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object* v_upperBound_945_, lean_object* v_xs_946_, lean_object* v_next_947_, lean_object* v_inst_948_, lean_object* v_R_949_, lean_object* v_a_950_, lean_object* v_b_951_, lean_object* v_c_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_945_, v_xs_946_, v_next_947_, v_a_950_, v_b_951_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object* v_upperBound_959_, lean_object* v_xs_960_, lean_object* v_next_961_, lean_object* v_inst_962_, lean_object* v_R_963_, lean_object* v_a_964_, lean_object* v_b_965_, lean_object* v_c_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(v_upperBound_959_, v_xs_960_, v_next_961_, v_inst_962_, v_R_963_, v_a_964_, v_b_965_, v_c_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v_next_961_);
lean_dec_ref(v_xs_960_);
lean_dec(v_upperBound_959_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object* v_upperBound_973_, lean_object* v___x_974_, lean_object* v_xs_975_, lean_object* v_inst_976_, lean_object* v_R_977_, lean_object* v_a_978_, lean_object* v_b_979_, lean_object* v_c_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_973_, v___x_974_, v_xs_975_, v_a_978_, v_b_979_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object* v_upperBound_987_, lean_object* v___x_988_, lean_object* v_xs_989_, lean_object* v_inst_990_, lean_object* v_R_991_, lean_object* v_a_992_, lean_object* v_b_993_, lean_object* v_c_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(v_upperBound_987_, v___x_988_, v_xs_989_, v_inst_990_, v_R_991_, v_a_992_, v_b_993_, v_c_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec_ref(v_xs_989_);
lean_dec(v___x_988_);
lean_dec(v_upperBound_987_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_msg_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___f_1008_; lean_object* v___x_27266__overap_1009_; lean_object* v___x_1010_; 
v___f_1008_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_27266__overap_1009_ = lean_panic_fn_borrowed(v___f_1008_, v_msg_1002_);
lean_inc(v___y_1006_);
lean_inc_ref(v___y_1005_);
lean_inc(v___y_1004_);
lean_inc_ref(v___y_1003_);
v___x_1010_ = lean_apply_5(v___x_27266__overap_1009_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, lean_box(0));
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object* v_msg_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_msg_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t v_sz_1018_, size_t v_i_1019_, lean_object* v_bs_1020_){
_start:
{
uint8_t v___x_1021_; 
v___x_1021_ = lean_usize_dec_lt(v_i_1019_, v_sz_1018_);
if (v___x_1021_ == 0)
{
return v_bs_1020_;
}
else
{
lean_object* v_v_1022_; lean_object* v___x_1023_; lean_object* v_bs_x27_1024_; lean_object* v___x_1025_; size_t v___x_1026_; size_t v___x_1027_; lean_object* v___x_1028_; 
v_v_1022_ = lean_array_uget(v_bs_1020_, v_i_1019_);
v___x_1023_ = lean_unsigned_to_nat(0u);
v_bs_x27_1024_ = lean_array_uset(v_bs_1020_, v_i_1019_, v___x_1023_);
v___x_1025_ = lean_array_get_size(v_v_1022_);
lean_dec(v_v_1022_);
v___x_1026_ = ((size_t)1ULL);
v___x_1027_ = lean_usize_add(v_i_1019_, v___x_1026_);
v___x_1028_ = lean_array_uset(v_bs_x27_1024_, v_i_1019_, v___x_1025_);
v_i_1019_ = v___x_1027_;
v_bs_1020_ = v___x_1028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object* v_sz_1030_, lean_object* v_i_1031_, lean_object* v_bs_1032_){
_start:
{
size_t v_sz_boxed_1033_; size_t v_i_boxed_1034_; lean_object* v_res_1035_; 
v_sz_boxed_1033_ = lean_unbox_usize(v_sz_1030_);
lean_dec(v_sz_1030_);
v_i_boxed_1034_ = lean_unbox_usize(v_i_1031_);
lean_dec(v_i_1031_);
v_res_1035_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_boxed_1033_, v_i_boxed_1034_, v_bs_1032_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t v_sz_1036_, size_t v_i_1037_, lean_object* v_bs_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_usize_dec_lt(v_i_1037_, v_sz_1036_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_bs_1038_);
return v___x_1045_;
}
else
{
lean_object* v_v_1046_; lean_object* v_value_1047_; lean_object* v___x_1048_; lean_object* v_bs_x27_1049_; lean_object* v___x_1050_; 
v_v_1046_ = lean_array_uget_borrowed(v_bs_1038_, v_i_1037_);
v_value_1047_ = lean_ctor_get(v_v_1046_, 7);
lean_inc_ref(v_value_1047_);
v___x_1048_ = lean_unsigned_to_nat(0u);
v_bs_x27_1049_ = lean_array_uset(v_bs_1038_, v_i_1037_, v___x_1048_);
v___x_1050_ = l_Lean_Elab_getParamRevDeps(v_value_1047_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; size_t v___x_1052_; size_t v___x_1053_; lean_object* v___x_1054_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1052_ = ((size_t)1ULL);
v___x_1053_ = lean_usize_add(v_i_1037_, v___x_1052_);
v___x_1054_ = lean_array_uset(v_bs_x27_1049_, v_i_1037_, v_a_1051_);
v_i_1037_ = v___x_1053_;
v_bs_1038_ = v___x_1054_;
goto _start;
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec_ref(v_bs_x27_1049_);
v_a_1056_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1050_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1050_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object* v_sz_1064_, lean_object* v_i_1065_, lean_object* v_bs_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
size_t v_sz_boxed_1072_; size_t v_i_boxed_1073_; lean_object* v_res_1074_; 
v_sz_boxed_1072_ = lean_unbox_usize(v_sz_1064_);
lean_dec(v_sz_1064_);
v_i_boxed_1073_ = lean_unbox_usize(v_i_1065_);
lean_dec(v_i_1065_);
v_res_1074_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_boxed_1072_, v_i_boxed_1073_, v_bs_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object* v_msgData_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; lean_object* v_env_1082_; uint8_t v___x_1083_; lean_object* v_env_1084_; lean_object* v___x_1085_; lean_object* v_toCold_1086_; lean_object* v_mctx_1087_; lean_object* v_lctx_1088_; lean_object* v_options_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1081_ = lean_st_ref_get(v___y_1079_);
v_env_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc_ref(v_env_1082_);
lean_dec(v___x_1081_);
v___x_1083_ = 0;
v_env_1084_ = l_Lean_Environment_setRecordingDeps(v_env_1082_, v___x_1083_);
v___x_1085_ = lean_st_ref_get(v___y_1077_);
v_toCold_1086_ = lean_ctor_get(v___y_1078_, 0);
v_mctx_1087_ = lean_ctor_get(v___x_1085_, 0);
lean_inc_ref(v_mctx_1087_);
lean_dec(v___x_1085_);
v_lctx_1088_ = lean_ctor_get(v___y_1076_, 2);
v_options_1089_ = lean_ctor_get(v_toCold_1086_, 2);
lean_inc_ref(v_options_1089_);
lean_inc_ref(v_lctx_1088_);
v___x_1090_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1090_, 0, v_env_1084_);
lean_ctor_set(v___x_1090_, 1, v_mctx_1087_);
lean_ctor_set(v___x_1090_, 2, v_lctx_1088_);
lean_ctor_set(v___x_1090_, 3, v_options_1089_);
v___x_1091_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v_msgData_1075_);
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
return v_res_1099_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1100_; double v___x_1101_; 
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = lean_float_of_nat(v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_1105_, lean_object* v_msg_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_ref_1112_; lean_object* v___x_1113_; lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1159_; 
v_ref_1112_ = lean_ctor_get(v___y_1109_, 2);
v___x_1113_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1116_ = v___x_1113_;
v_isShared_1117_ = v_isSharedCheck_1159_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1113_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1159_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v_traceState_1119_; lean_object* v_env_1120_; lean_object* v_nextMacroScope_1121_; lean_object* v_ngen_1122_; lean_object* v_auxDeclNGen_1123_; lean_object* v_cache_1124_; lean_object* v_recordedDeps_1125_; lean_object* v_messages_1126_; lean_object* v_infoState_1127_; lean_object* v_snapshotTasks_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1158_; 
v___x_1118_ = lean_st_ref_take(v___y_1110_);
v_traceState_1119_ = lean_ctor_get(v___x_1118_, 4);
v_env_1120_ = lean_ctor_get(v___x_1118_, 0);
v_nextMacroScope_1121_ = lean_ctor_get(v___x_1118_, 1);
v_ngen_1122_ = lean_ctor_get(v___x_1118_, 2);
v_auxDeclNGen_1123_ = lean_ctor_get(v___x_1118_, 3);
v_cache_1124_ = lean_ctor_get(v___x_1118_, 5);
v_recordedDeps_1125_ = lean_ctor_get(v___x_1118_, 6);
v_messages_1126_ = lean_ctor_get(v___x_1118_, 7);
v_infoState_1127_ = lean_ctor_get(v___x_1118_, 8);
v_snapshotTasks_1128_ = lean_ctor_get(v___x_1118_, 9);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1130_ = v___x_1118_;
v_isShared_1131_ = v_isSharedCheck_1158_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_snapshotTasks_1128_);
lean_inc(v_infoState_1127_);
lean_inc(v_messages_1126_);
lean_inc(v_recordedDeps_1125_);
lean_inc(v_cache_1124_);
lean_inc(v_traceState_1119_);
lean_inc(v_auxDeclNGen_1123_);
lean_inc(v_ngen_1122_);
lean_inc(v_nextMacroScope_1121_);
lean_inc(v_env_1120_);
lean_dec(v___x_1118_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1158_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
uint64_t v_tid_1132_; lean_object* v_traces_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1157_; 
v_tid_1132_ = lean_ctor_get_uint64(v_traceState_1119_, sizeof(void*)*1);
v_traces_1133_ = lean_ctor_get(v_traceState_1119_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_traceState_1119_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1135_ = v_traceState_1119_;
v_isShared_1136_ = v_isSharedCheck_1157_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_traces_1133_);
lean_dec(v_traceState_1119_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1157_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; double v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1137_ = lean_box(0);
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_1140_ = 0;
v___x_1141_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1));
v___x_1142_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1142_, 0, v_cls_1105_);
lean_ctor_set(v___x_1142_, 1, v___x_1138_);
lean_ctor_set(v___x_1142_, 2, v___x_1141_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*3, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*3 + 8, v___x_1139_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*3 + 16, v___x_1140_);
v___x_1143_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2));
v___x_1144_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v_a_1114_);
lean_ctor_set(v___x_1144_, 2, v___x_1143_);
lean_inc(v_ref_1112_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_ref_1112_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = l_Lean_PersistentArray_push___redArg(v_traces_1133_, v___x_1145_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1146_);
v___x_1148_ = v___x_1135_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1146_);
lean_ctor_set_uint64(v_reuseFailAlloc_1156_, sizeof(void*)*1, v_tid_1132_);
v___x_1148_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1150_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v___x_1148_);
v___x_1150_ = v___x_1130_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_env_1120_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_nextMacroScope_1121_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v_ngen_1122_);
lean_ctor_set(v_reuseFailAlloc_1155_, 3, v_auxDeclNGen_1123_);
lean_ctor_set(v_reuseFailAlloc_1155_, 4, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1155_, 5, v_cache_1124_);
lean_ctor_set(v_reuseFailAlloc_1155_, 6, v_recordedDeps_1125_);
lean_ctor_set(v_reuseFailAlloc_1155_, 7, v_messages_1126_);
lean_ctor_set(v_reuseFailAlloc_1155_, 8, v_infoState_1127_);
lean_ctor_set(v_reuseFailAlloc_1155_, 9, v_snapshotTasks_1128_);
v___x_1150_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_st_ref_put(v___y_1110_, v___x_1150_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 0, v___x_1137_);
v___x_1153_ = v___x_1116_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1137_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_1160_, lean_object* v_msg_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_1160_, v_msg_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object* v_00_u03b1_1168_, lean_object* v_x_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_apply_1(v_x_1169_, lean_box(0));
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object* v_00_u03b1_1177_, lean_object* v_x_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(v_00_u03b1_1177_, v_x_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__1(lean_object* v_x_1185_, lean_object* v_e_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_e_1186_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__1___boxed(lean_object* v_x_1193_, lean_object* v_e_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__1(v_x_1193_, v_e_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec_ref(v_x_1193_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object* v_x_1201_, lean_object* v_x_1202_){
_start:
{
if (lean_obj_tag(v_x_1202_) == 0)
{
return v_x_1201_;
}
else
{
lean_object* v_key_1203_; lean_object* v_value_1204_; lean_object* v_tail_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1228_; 
v_key_1203_ = lean_ctor_get(v_x_1202_, 0);
v_value_1204_ = lean_ctor_get(v_x_1202_, 1);
v_tail_1205_ = lean_ctor_get(v_x_1202_, 2);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_x_1202_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1207_ = v_x_1202_;
v_isShared_1208_ = v_isSharedCheck_1228_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_tail_1205_);
lean_inc(v_value_1204_);
lean_inc(v_key_1203_);
lean_dec(v_x_1202_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1228_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; uint64_t v___x_1210_; uint64_t v___x_1211_; uint64_t v___x_1212_; uint64_t v_fold_1213_; uint64_t v___x_1214_; uint64_t v___x_1215_; uint64_t v___x_1216_; size_t v___x_1217_; size_t v___x_1218_; size_t v___x_1219_; size_t v___x_1220_; size_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1224_; 
v___x_1209_ = lean_array_get_size(v_x_1201_);
v___x_1210_ = l_Lean_ExprStructEq_hash(v_key_1203_);
v___x_1211_ = 32ULL;
v___x_1212_ = lean_uint64_shift_right(v___x_1210_, v___x_1211_);
v_fold_1213_ = lean_uint64_xor(v___x_1210_, v___x_1212_);
v___x_1214_ = 16ULL;
v___x_1215_ = lean_uint64_shift_right(v_fold_1213_, v___x_1214_);
v___x_1216_ = lean_uint64_xor(v_fold_1213_, v___x_1215_);
v___x_1217_ = lean_uint64_to_usize(v___x_1216_);
v___x_1218_ = lean_usize_of_nat(v___x_1209_);
v___x_1219_ = ((size_t)1ULL);
v___x_1220_ = lean_usize_sub(v___x_1218_, v___x_1219_);
v___x_1221_ = lean_usize_land(v___x_1217_, v___x_1220_);
v___x_1222_ = lean_array_uget_borrowed(v_x_1201_, v___x_1221_);
lean_inc(v___x_1222_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 2, v___x_1222_);
v___x_1224_ = v___x_1207_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_key_1203_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_value_1204_);
lean_ctor_set(v_reuseFailAlloc_1227_, 2, v___x_1222_);
v___x_1224_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_array_uset(v_x_1201_, v___x_1221_, v___x_1224_);
v_x_1201_ = v___x_1225_;
v_x_1202_ = v_tail_1205_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object* v_i_1229_, lean_object* v_source_1230_, lean_object* v_target_1231_){
_start:
{
lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1232_ = lean_array_get_size(v_source_1230_);
v___x_1233_ = lean_nat_dec_lt(v_i_1229_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_dec_ref(v_source_1230_);
lean_dec(v_i_1229_);
return v_target_1231_;
}
else
{
lean_object* v_es_1234_; lean_object* v___x_1235_; lean_object* v_source_1236_; lean_object* v_target_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_es_1234_ = lean_array_fget(v_source_1230_, v_i_1229_);
v___x_1235_ = lean_box(0);
v_source_1236_ = lean_array_fset(v_source_1230_, v_i_1229_, v___x_1235_);
v_target_1237_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_target_1231_, v_es_1234_);
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_nat_add(v_i_1229_, v___x_1238_);
lean_dec(v_i_1229_);
v_i_1229_ = v___x_1239_;
v_source_1230_ = v_source_1236_;
v_target_1231_ = v_target_1237_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object* v_data_1241_){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v_nbuckets_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1242_ = lean_array_get_size(v_data_1241_);
v___x_1243_ = lean_unsigned_to_nat(2u);
v_nbuckets_1244_ = lean_nat_mul(v___x_1242_, v___x_1243_);
v___x_1245_ = lean_unsigned_to_nat(0u);
v___x_1246_ = lean_box(0);
v___x_1247_ = lean_mk_array(v_nbuckets_1244_, v___x_1246_);
v___x_1248_ = lean_array_propagate_mark(v_data_1241_, v___x_1247_);
v___x_1249_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v___x_1245_, v_data_1241_, v___x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object* v_a_1250_, lean_object* v_b_1251_, lean_object* v_x_1252_){
_start:
{
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_dec(v_b_1251_);
lean_dec_ref(v_a_1250_);
return v_x_1252_;
}
else
{
lean_object* v_key_1253_; lean_object* v_value_1254_; lean_object* v_tail_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1267_; 
v_key_1253_ = lean_ctor_get(v_x_1252_, 0);
v_value_1254_ = lean_ctor_get(v_x_1252_, 1);
v_tail_1255_ = lean_ctor_get(v_x_1252_, 2);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_x_1252_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1257_ = v_x_1252_;
v_isShared_1258_ = v_isSharedCheck_1267_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_tail_1255_);
lean_inc(v_value_1254_);
lean_inc(v_key_1253_);
lean_dec(v_x_1252_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1267_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
uint8_t v___x_1259_; 
v___x_1259_ = l_Lean_ExprStructEq_beq(v_key_1253_, v_a_1250_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; lean_object* v___x_1262_; 
v___x_1260_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1250_, v_b_1251_, v_tail_1255_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 2, v___x_1260_);
v___x_1262_ = v___x_1257_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_key_1253_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_value_1254_);
lean_ctor_set(v_reuseFailAlloc_1263_, 2, v___x_1260_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
else
{
lean_object* v___x_1265_; 
lean_dec(v_value_1254_);
lean_dec(v_key_1253_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v_b_1251_);
lean_ctor_set(v___x_1257_, 0, v_a_1250_);
v___x_1265_ = v___x_1257_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1250_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_b_1251_);
lean_ctor_set(v_reuseFailAlloc_1266_, 2, v_tail_1255_);
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
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object* v_a_1268_, lean_object* v_x_1269_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
uint8_t v___x_1270_; 
v___x_1270_ = 0;
return v___x_1270_;
}
else
{
lean_object* v_key_1271_; lean_object* v_tail_1272_; uint8_t v___x_1273_; 
v_key_1271_ = lean_ctor_get(v_x_1269_, 0);
v_tail_1272_ = lean_ctor_get(v_x_1269_, 2);
v___x_1273_ = l_Lean_ExprStructEq_beq(v_key_1271_, v_a_1268_);
if (v___x_1273_ == 0)
{
v_x_1269_ = v_tail_1272_;
goto _start;
}
else
{
return v___x_1273_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object* v_a_1275_, lean_object* v_x_1276_){
_start:
{
uint8_t v_res_1277_; lean_object* v_r_1278_; 
v_res_1277_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1275_, v_x_1276_);
lean_dec(v_x_1276_);
lean_dec_ref(v_a_1275_);
v_r_1278_ = lean_box(v_res_1277_);
return v_r_1278_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object* v_m_1279_, lean_object* v_a_1280_, lean_object* v_b_1281_){
_start:
{
lean_object* v_size_1282_; lean_object* v_buckets_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1326_; 
v_size_1282_ = lean_ctor_get(v_m_1279_, 0);
v_buckets_1283_ = lean_ctor_get(v_m_1279_, 1);
v_isSharedCheck_1326_ = !lean_is_exclusive(v_m_1279_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1285_ = v_m_1279_;
v_isShared_1286_ = v_isSharedCheck_1326_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_buckets_1283_);
lean_inc(v_size_1282_);
lean_dec(v_m_1279_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1326_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; uint64_t v___x_1288_; uint64_t v___x_1289_; uint64_t v___x_1290_; uint64_t v_fold_1291_; uint64_t v___x_1292_; uint64_t v___x_1293_; uint64_t v___x_1294_; size_t v___x_1295_; size_t v___x_1296_; size_t v___x_1297_; size_t v___x_1298_; size_t v___x_1299_; lean_object* v_bkt_1300_; uint8_t v___x_1301_; 
v___x_1287_ = lean_array_get_size(v_buckets_1283_);
v___x_1288_ = l_Lean_ExprStructEq_hash(v_a_1280_);
v___x_1289_ = 32ULL;
v___x_1290_ = lean_uint64_shift_right(v___x_1288_, v___x_1289_);
v_fold_1291_ = lean_uint64_xor(v___x_1288_, v___x_1290_);
v___x_1292_ = 16ULL;
v___x_1293_ = lean_uint64_shift_right(v_fold_1291_, v___x_1292_);
v___x_1294_ = lean_uint64_xor(v_fold_1291_, v___x_1293_);
v___x_1295_ = lean_uint64_to_usize(v___x_1294_);
v___x_1296_ = lean_usize_of_nat(v___x_1287_);
v___x_1297_ = ((size_t)1ULL);
v___x_1298_ = lean_usize_sub(v___x_1296_, v___x_1297_);
v___x_1299_ = lean_usize_land(v___x_1295_, v___x_1298_);
v_bkt_1300_ = lean_array_uget_borrowed(v_buckets_1283_, v___x_1299_);
v___x_1301_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1280_, v_bkt_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v_size_x27_1303_; lean_object* v___x_1304_; lean_object* v_buckets_x27_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v___x_1302_ = lean_unsigned_to_nat(1u);
v_size_x27_1303_ = lean_nat_add(v_size_1282_, v___x_1302_);
lean_dec(v_size_1282_);
lean_inc(v_bkt_1300_);
v___x_1304_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1304_, 0, v_a_1280_);
lean_ctor_set(v___x_1304_, 1, v_b_1281_);
lean_ctor_set(v___x_1304_, 2, v_bkt_1300_);
v_buckets_x27_1305_ = lean_array_uset(v_buckets_1283_, v___x_1299_, v___x_1304_);
v___x_1306_ = lean_unsigned_to_nat(4u);
v___x_1307_ = lean_nat_mul(v_size_x27_1303_, v___x_1306_);
v___x_1308_ = lean_unsigned_to_nat(3u);
v___x_1309_ = lean_nat_div(v___x_1307_, v___x_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_array_get_size(v_buckets_x27_1305_);
v___x_1311_ = lean_nat_dec_le(v___x_1309_, v___x_1310_);
lean_dec(v___x_1309_);
if (v___x_1311_ == 0)
{
lean_object* v_val_1312_; lean_object* v___x_1314_; 
v_val_1312_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_buckets_x27_1305_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 1, v_val_1312_);
lean_ctor_set(v___x_1285_, 0, v_size_x27_1303_);
v___x_1314_ = v___x_1285_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_size_x27_1303_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_val_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
else
{
lean_object* v___x_1317_; 
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 1, v_buckets_x27_1305_);
lean_ctor_set(v___x_1285_, 0, v_size_x27_1303_);
v___x_1317_ = v___x_1285_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_size_x27_1303_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_buckets_x27_1305_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
else
{
lean_object* v___x_1319_; lean_object* v_buckets_x27_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1324_; 
lean_inc(v_bkt_1300_);
v___x_1319_ = lean_box(0);
v_buckets_x27_1320_ = lean_array_uset(v_buckets_1283_, v___x_1299_, v___x_1319_);
v___x_1321_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1280_, v_b_1281_, v_bkt_1300_);
v___x_1322_ = lean_array_uset(v_buckets_x27_1320_, v___x_1299_, v___x_1321_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 1, v___x_1322_);
v___x_1324_ = v___x_1285_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_size_1282_);
lean_ctor_set(v_reuseFailAlloc_1325_, 1, v___x_1322_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object* v_a_1327_, lean_object* v_e_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1331_ = lean_st_ref_take(v_a_1327_);
v___x_1332_ = lean_box(0);
v___x_1333_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v___x_1331_, v_e_1328_, v_a_1329_);
v___x_1334_ = lean_st_ref_put(v_a_1327_, v___x_1333_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object* v_a_1335_, lean_object* v_e_1336_, lean_object* v_a_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(v_a_1335_, v_e_1336_, v_a_1337_);
lean_dec(v_a_1335_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object* v_k_1340_, lean_object* v___y_1341_, lean_object* v_b_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v___x_1348_; 
lean_inc(v___y_1346_);
lean_inc_ref(v___y_1345_);
lean_inc(v___y_1344_);
lean_inc_ref(v___y_1343_);
lean_inc(v___y_1341_);
v___x_1348_ = lean_apply_7(v_k_1340_, v_b_1342_, v___y_1341_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, lean_box(0));
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object* v_k_1349_, lean_object* v___y_1350_, lean_object* v_b_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(v_k_1349_, v___y_1350_, v_b_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec(v___y_1350_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object* v_name_1358_, uint8_t v_bi_1359_, lean_object* v_type_1360_, lean_object* v_k_1361_, uint8_t v_kind_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v___f_1369_; lean_object* v___x_1370_; 
lean_inc(v___y_1363_);
v___f_1369_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1369_, 0, v_k_1361_);
lean_closure_set(v___f_1369_, 1, v___y_1363_);
v___x_1370_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1358_, v_bi_1359_, v_type_1360_, v___f_1369_, v_kind_1362_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
if (lean_obj_tag(v___x_1370_) == 0)
{
return v___x_1370_;
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1370_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object* v_name_1379_, lean_object* v_bi_1380_, lean_object* v_type_1381_, lean_object* v_k_1382_, lean_object* v_kind_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
uint8_t v_bi_boxed_1390_; uint8_t v_kind_boxed_1391_; lean_object* v_res_1392_; 
v_bi_boxed_1390_ = lean_unbox(v_bi_1380_);
v_kind_boxed_1391_ = lean_unbox(v_kind_1383_);
v_res_1392_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_1379_, v_bi_boxed_1390_, v_type_1381_, v_k_1382_, v_kind_boxed_1391_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__2(lean_object* v___x_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1393_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__2___boxed(lean_object* v___x_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__2(v___x_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object* v_name_1407_, lean_object* v_type_1408_, lean_object* v_val_1409_, lean_object* v_k_1410_, uint8_t v_nondep_1411_, uint8_t v_kind_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v___f_1419_; lean_object* v___x_1420_; 
lean_inc(v___y_1413_);
v___f_1419_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1419_, 0, v_k_1410_);
lean_closure_set(v___f_1419_, 1, v___y_1413_);
v___x_1420_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1407_, v_type_1408_, v_val_1409_, v___f_1419_, v_nondep_1411_, v_kind_1412_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
if (lean_obj_tag(v___x_1420_) == 0)
{
return v___x_1420_;
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1420_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1420_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_name_1429_, lean_object* v_type_1430_, lean_object* v_val_1431_, lean_object* v_k_1432_, lean_object* v_nondep_1433_, lean_object* v_kind_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
uint8_t v_nondep_boxed_1441_; uint8_t v_kind_boxed_1442_; lean_object* v_res_1443_; 
v_nondep_boxed_1441_ = lean_unbox(v_nondep_1433_);
v_kind_boxed_1442_ = lean_unbox(v_kind_1434_);
v_res_1443_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_1429_, v_type_1430_, v_val_1431_, v_k_1432_, v_nondep_boxed_1441_, v_kind_boxed_1442_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg(lean_object* v_a_1444_, lean_object* v_x_1445_){
_start:
{
if (lean_obj_tag(v_x_1445_) == 0)
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_box(0);
return v___x_1446_;
}
else
{
lean_object* v_key_1447_; lean_object* v_value_1448_; lean_object* v_tail_1449_; uint8_t v___x_1450_; 
v_key_1447_ = lean_ctor_get(v_x_1445_, 0);
v_value_1448_ = lean_ctor_get(v_x_1445_, 1);
v_tail_1449_ = lean_ctor_get(v_x_1445_, 2);
v___x_1450_ = l_Lean_ExprStructEq_beq(v_key_1447_, v_a_1444_);
if (v___x_1450_ == 0)
{
v_x_1445_ = v_tail_1449_;
goto _start;
}
else
{
lean_object* v___x_1452_; 
lean_inc(v_value_1448_);
v___x_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1452_, 0, v_value_1448_);
return v___x_1452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg___boxed(lean_object* v_a_1453_, lean_object* v_x_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg(v_a_1453_, v_x_1454_);
lean_dec(v_x_1454_);
lean_dec_ref(v_a_1453_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg(lean_object* v_m_1456_, lean_object* v_a_1457_){
_start:
{
lean_object* v_buckets_1458_; lean_object* v___x_1459_; uint64_t v___x_1460_; uint64_t v___x_1461_; uint64_t v___x_1462_; uint64_t v_fold_1463_; uint64_t v___x_1464_; uint64_t v___x_1465_; uint64_t v___x_1466_; size_t v___x_1467_; size_t v___x_1468_; size_t v___x_1469_; size_t v___x_1470_; size_t v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_buckets_1458_ = lean_ctor_get(v_m_1456_, 1);
v___x_1459_ = lean_array_get_size(v_buckets_1458_);
v___x_1460_ = l_Lean_ExprStructEq_hash(v_a_1457_);
v___x_1461_ = 32ULL;
v___x_1462_ = lean_uint64_shift_right(v___x_1460_, v___x_1461_);
v_fold_1463_ = lean_uint64_xor(v___x_1460_, v___x_1462_);
v___x_1464_ = 16ULL;
v___x_1465_ = lean_uint64_shift_right(v_fold_1463_, v___x_1464_);
v___x_1466_ = lean_uint64_xor(v_fold_1463_, v___x_1465_);
v___x_1467_ = lean_uint64_to_usize(v___x_1466_);
v___x_1468_ = lean_usize_of_nat(v___x_1459_);
v___x_1469_ = ((size_t)1ULL);
v___x_1470_ = lean_usize_sub(v___x_1468_, v___x_1469_);
v___x_1471_ = lean_usize_land(v___x_1467_, v___x_1470_);
v___x_1472_ = lean_array_uget_borrowed(v_buckets_1458_, v___x_1471_);
v___x_1473_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg(v_a_1457_, v___x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_m_1474_, lean_object* v_a_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg(v_m_1474_, v_a_1475_);
lean_dec_ref(v_a_1475_);
lean_dec_ref(v_m_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object* v_00_u03b1_1477_, lean_object* v_x_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = lean_apply_1(v_x_1478_, lean_box(0));
v___x_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object* v_00_u03b1_1486_, lean_object* v_x_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(v_00_u03b1_1486_, v_x_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
return v_res_1493_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = l_Lean_maxRecDepthErrorMessage;
v___x_1500_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
return v___x_1500_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3);
v___x_1502_ = l_Lean_MessageData_ofFormat(v___x_1501_);
return v___x_1502_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1503_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4);
v___x_1504_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2));
v___x_1505_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
lean_ctor_set(v___x_1505_, 1, v___x_1503_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object* v_ref_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1508_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v_ref_1506_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_ref_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object* v_x_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___y_1522_; lean_object* v_toCold_1531_; lean_object* v_currRecDepth_1532_; lean_object* v_ref_1533_; uint16_t v_optionFlags_1534_; uint8_t v_suppressElabErrors_1535_; uint8_t v_checkDeprecated_1536_; uint8_t v_isRecordingDeps_1537_; lean_object* v_maxRecDepth_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; 
v_toCold_1531_ = lean_ctor_get(v___y_1518_, 0);
v_currRecDepth_1532_ = lean_ctor_get(v___y_1518_, 1);
v_ref_1533_ = lean_ctor_get(v___y_1518_, 2);
v_optionFlags_1534_ = lean_ctor_get_uint16(v___y_1518_, sizeof(void*)*3);
v_suppressElabErrors_1535_ = lean_ctor_get_uint8(v___y_1518_, sizeof(void*)*3 + 2);
v_checkDeprecated_1536_ = lean_ctor_get_uint8(v___y_1518_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1537_ = lean_ctor_get_uint8(v___y_1518_, sizeof(void*)*3 + 4);
v_maxRecDepth_1543_ = lean_ctor_get(v_toCold_1531_, 3);
v___x_1544_ = lean_unsigned_to_nat(0u);
v___x_1545_ = lean_nat_dec_eq(v_maxRecDepth_1543_, v___x_1544_);
if (v___x_1545_ == 0)
{
uint8_t v___x_1546_; 
v___x_1546_ = lean_nat_dec_eq(v_currRecDepth_1532_, v_maxRecDepth_1543_);
if (v___x_1546_ == 0)
{
goto v___jp_1538_;
}
else
{
lean_object* v___x_1547_; 
lean_dec_ref(v_x_1514_);
lean_inc(v_ref_1533_);
v___x_1547_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1533_);
v___y_1522_ = v___x_1547_;
goto v___jp_1521_;
}
}
else
{
goto v___jp_1538_;
}
v___jp_1521_:
{
if (lean_obj_tag(v___y_1522_) == 0)
{
return v___y_1522_;
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
v_a_1523_ = lean_ctor_get(v___y_1522_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___y_1522_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___y_1522_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___y_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
v___jp_1538_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1539_ = lean_unsigned_to_nat(1u);
v___x_1540_ = lean_nat_add(v_currRecDepth_1532_, v___x_1539_);
lean_inc(v_ref_1533_);
lean_inc_ref(v_toCold_1531_);
v___x_1541_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1541_, 0, v_toCold_1531_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
lean_ctor_set(v___x_1541_, 2, v_ref_1533_);
lean_ctor_set_uint16(v___x_1541_, sizeof(void*)*3, v_optionFlags_1534_);
lean_ctor_set_uint8(v___x_1541_, sizeof(void*)*3 + 2, v_suppressElabErrors_1535_);
lean_ctor_set_uint8(v___x_1541_, sizeof(void*)*3 + 3, v_checkDeprecated_1536_);
lean_ctor_set_uint8(v___x_1541_, sizeof(void*)*3 + 4, v_isRecordingDeps_1537_);
lean_inc(v___y_1519_);
lean_inc(v___y_1517_);
lean_inc_ref(v___y_1516_);
lean_inc(v___y_1515_);
v___x_1542_ = lean_apply_6(v_x_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___x_1541_, v___y_1519_, lean_box(0));
v___y_1522_ = v___x_1542_;
goto v___jp_1521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object* v_x_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_1556_, lean_object* v_pre_1557_, lean_object* v_post_1558_, lean_object* v_usedLetOnly_1559_, lean_object* v_skipConstInApp_1560_, lean_object* v_skipInstances_1561_, lean_object* v_postApp_1562_, lean_object* v_body_1563_, lean_object* v_x_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
uint8_t v_usedLetOnly_boxed_1571_; uint8_t v_skipConstInApp_boxed_1572_; uint8_t v_skipInstances_boxed_1573_; lean_object* v_res_1574_; 
v_usedLetOnly_boxed_1571_ = lean_unbox(v_usedLetOnly_1559_);
v_skipConstInApp_boxed_1572_ = lean_unbox(v_skipConstInApp_1560_);
v_skipInstances_boxed_1573_ = lean_unbox(v_skipInstances_1561_);
v_res_1574_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(v_fvars_1556_, v_pre_1557_, v_post_1558_, v_usedLetOnly_boxed_1571_, v_skipConstInApp_boxed_1572_, v_skipInstances_boxed_1573_, v_postApp_1562_, v_body_1563_, v_x_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object* v_fvars_1578_, lean_object* v_pre_1579_, lean_object* v_post_1580_, uint8_t v_usedLetOnly_1581_, uint8_t v_skipConstInApp_1582_, uint8_t v_skipInstances_1583_, lean_object* v_postApp_1584_, lean_object* v_body_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = lean_array_push(v_fvars_1578_, v_x_1586_);
v___x_1594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1579_, v_post_1580_, v_usedLetOnly_1581_, v_skipConstInApp_1582_, v_skipInstances_1583_, v_postApp_1584_, v___x_1593_, v_body_1585_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object* v_fvars_1595_, lean_object* v_pre_1596_, lean_object* v_post_1597_, lean_object* v_usedLetOnly_1598_, lean_object* v_skipConstInApp_1599_, lean_object* v_skipInstances_1600_, lean_object* v_postApp_1601_, lean_object* v_body_1602_, lean_object* v_x_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
uint8_t v_usedLetOnly_boxed_1610_; uint8_t v_skipConstInApp_boxed_1611_; uint8_t v_skipInstances_boxed_1612_; lean_object* v_res_1613_; 
v_usedLetOnly_boxed_1610_ = lean_unbox(v_usedLetOnly_1598_);
v_skipConstInApp_boxed_1611_ = lean_unbox(v_skipConstInApp_1599_);
v_skipInstances_boxed_1612_ = lean_unbox(v_skipInstances_1600_);
v_res_1613_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(v_fvars_1595_, v_pre_1596_, v_post_1597_, v_usedLetOnly_boxed_1610_, v_skipConstInApp_boxed_1611_, v_skipInstances_boxed_1612_, v_postApp_1601_, v_body_1602_, v_x_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object* v_pre_1614_, lean_object* v_post_1615_, uint8_t v_usedLetOnly_1616_, uint8_t v_skipConstInApp_1617_, uint8_t v_skipInstances_1618_, lean_object* v_postApp_1619_, lean_object* v_e_1620_, lean_object* v_a_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; 
lean_inc_ref(v_post_1615_);
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc(v___y_1623_);
lean_inc_ref(v___y_1622_);
lean_inc_ref(v_e_1620_);
v___x_1627_ = lean_apply_6(v_post_1615_, v_e_1620_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, lean_box(0));
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1646_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1646_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1646_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
switch(lean_obj_tag(v_a_1628_))
{
case 0:
{
lean_object* v_e_1632_; lean_object* v___x_1634_; 
lean_dec_ref(v_e_1620_);
lean_dec_ref(v_postApp_1619_);
lean_dec_ref(v_post_1615_);
lean_dec_ref(v_pre_1614_);
v_e_1632_ = lean_ctor_get(v_a_1628_, 0);
lean_inc_ref(v_e_1632_);
lean_dec_ref_known(v_a_1628_, 1);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v_e_1632_);
v___x_1634_ = v___x_1630_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_e_1632_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
case 1:
{
lean_object* v_e_1636_; lean_object* v___x_1637_; 
lean_del_object(v___x_1630_);
lean_dec_ref(v_e_1620_);
v_e_1636_ = lean_ctor_get(v_a_1628_, 0);
lean_inc_ref(v_e_1636_);
lean_dec_ref_known(v_a_1628_, 1);
v___x_1637_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1614_, v_post_1615_, v_usedLetOnly_1616_, v_skipConstInApp_1617_, v_skipInstances_1618_, v_postApp_1619_, v_e_1636_, v_a_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
return v___x_1637_;
}
default: 
{
lean_object* v_e_x3f_1638_; 
lean_dec_ref(v_postApp_1619_);
lean_dec_ref(v_post_1615_);
lean_dec_ref(v_pre_1614_);
v_e_x3f_1638_ = lean_ctor_get(v_a_1628_, 0);
lean_inc(v_e_x3f_1638_);
lean_dec_ref_known(v_a_1628_, 1);
if (lean_obj_tag(v_e_x3f_1638_) == 0)
{
lean_object* v___x_1640_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v_e_1620_);
v___x_1640_ = v___x_1630_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_e_1620_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
else
{
lean_object* v_val_1642_; lean_object* v___x_1644_; 
lean_dec_ref(v_e_1620_);
v_val_1642_ = lean_ctor_get(v_e_x3f_1638_, 0);
lean_inc(v_val_1642_);
lean_dec_ref_known(v_e_x3f_1638_, 1);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v_val_1642_);
v___x_1644_ = v___x_1630_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_val_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec_ref(v_e_1620_);
lean_dec_ref(v_postApp_1619_);
lean_dec_ref(v_post_1615_);
lean_dec_ref(v_pre_1614_);
v_a_1647_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1627_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1627_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object* v_pre_1655_, lean_object* v_post_1656_, uint8_t v_usedLetOnly_1657_, uint8_t v_skipConstInApp_1658_, uint8_t v_skipInstances_1659_, lean_object* v_postApp_1660_, lean_object* v_fvars_1661_, lean_object* v_e_1662_, lean_object* v_a_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
if (lean_obj_tag(v_e_1662_) == 6)
{
lean_object* v_binderName_1669_; lean_object* v_binderType_1670_; lean_object* v_body_1671_; uint8_t v_binderInfo_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___f_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_binderName_1669_ = lean_ctor_get(v_e_1662_, 0);
lean_inc(v_binderName_1669_);
v_binderType_1670_ = lean_ctor_get(v_e_1662_, 1);
lean_inc_ref(v_binderType_1670_);
v_body_1671_ = lean_ctor_get(v_e_1662_, 2);
lean_inc_ref(v_body_1671_);
v_binderInfo_1672_ = lean_ctor_get_uint8(v_e_1662_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1662_, 3);
v___x_1673_ = lean_box(v_usedLetOnly_1657_);
v___x_1674_ = lean_box(v_skipConstInApp_1658_);
v___x_1675_ = lean_box(v_skipInstances_1659_);
lean_inc_ref(v_postApp_1660_);
lean_inc_ref(v_post_1656_);
lean_inc_ref(v_pre_1655_);
lean_inc_ref(v_fvars_1661_);
v___f_1676_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed), 15, 8);
lean_closure_set(v___f_1676_, 0, v_fvars_1661_);
lean_closure_set(v___f_1676_, 1, v_pre_1655_);
lean_closure_set(v___f_1676_, 2, v_post_1656_);
lean_closure_set(v___f_1676_, 3, v___x_1673_);
lean_closure_set(v___f_1676_, 4, v___x_1674_);
lean_closure_set(v___f_1676_, 5, v___x_1675_);
lean_closure_set(v___f_1676_, 6, v_postApp_1660_);
lean_closure_set(v___f_1676_, 7, v_body_1671_);
v___x_1677_ = lean_expr_instantiate_rev(v_binderType_1670_, v_fvars_1661_);
lean_dec_ref(v_fvars_1661_);
lean_dec_ref(v_binderType_1670_);
v___x_1678_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1655_, v_post_1656_, v_usedLetOnly_1657_, v_skipConstInApp_1658_, v_skipInstances_1659_, v_postApp_1660_, v___x_1677_, v_a_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; uint8_t v___x_1680_; lean_object* v___x_1681_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1678_, 1);
v___x_1680_ = 0;
v___x_1681_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_1669_, v_binderInfo_1672_, v_a_1679_, v___f_1676_, v___x_1680_, v_a_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
return v___x_1681_;
}
else
{
lean_dec_ref(v___f_1676_);
lean_dec(v_binderName_1669_);
return v___x_1678_;
}
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = lean_expr_instantiate_rev(v_e_1662_, v_fvars_1661_);
lean_dec_ref(v_e_1662_);
lean_inc_ref(v_postApp_1660_);
lean_inc_ref(v_post_1656_);
lean_inc_ref(v_pre_1655_);
v___x_1683_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1655_, v_post_1656_, v_usedLetOnly_1657_, v_skipConstInApp_1658_, v_skipInstances_1659_, v_postApp_1660_, v___x_1682_, v_a_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; uint8_t v___x_1685_; uint8_t v___x_1686_; uint8_t v___x_1687_; lean_object* v___x_1688_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = 0;
v___x_1686_ = 1;
v___x_1687_ = 1;
v___x_1688_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1661_, v_a_1684_, v___x_1685_, v_usedLetOnly_1657_, v___x_1685_, v___x_1686_, v___x_1687_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec_ref(v_fvars_1661_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1690_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1688_, 1);
v___x_1690_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1655_, v_post_1656_, v_usedLetOnly_1657_, v_skipConstInApp_1658_, v_skipInstances_1659_, v_postApp_1660_, v_a_1689_, v_a_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
return v___x_1690_;
}
else
{
lean_dec_ref(v_postApp_1660_);
lean_dec_ref(v_post_1656_);
lean_dec_ref(v_pre_1655_);
return v___x_1688_;
}
}
else
{
lean_dec_ref(v_fvars_1661_);
lean_dec_ref(v_postApp_1660_);
lean_dec_ref(v_post_1656_);
lean_dec_ref(v_pre_1655_);
return v___x_1683_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object* v_fvars_1691_, lean_object* v_pre_1692_, lean_object* v_post_1693_, uint8_t v_usedLetOnly_1694_, uint8_t v_skipConstInApp_1695_, uint8_t v_skipInstances_1696_, lean_object* v_postApp_1697_, lean_object* v_body_1698_, lean_object* v_x_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_array_push(v_fvars_1691_, v_x_1699_);
v___x_1707_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1692_, v_post_1693_, v_usedLetOnly_1694_, v_skipConstInApp_1695_, v_skipInstances_1696_, v_postApp_1697_, v___x_1706_, v_body_1698_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object* v_fvars_1708_, lean_object* v_pre_1709_, lean_object* v_post_1710_, lean_object* v_usedLetOnly_1711_, lean_object* v_skipConstInApp_1712_, lean_object* v_skipInstances_1713_, lean_object* v_postApp_1714_, lean_object* v_body_1715_, lean_object* v_x_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
uint8_t v_usedLetOnly_boxed_1723_; uint8_t v_skipConstInApp_boxed_1724_; uint8_t v_skipInstances_boxed_1725_; lean_object* v_res_1726_; 
v_usedLetOnly_boxed_1723_ = lean_unbox(v_usedLetOnly_1711_);
v_skipConstInApp_boxed_1724_ = lean_unbox(v_skipConstInApp_1712_);
v_skipInstances_boxed_1725_ = lean_unbox(v_skipInstances_1713_);
v_res_1726_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(v_fvars_1708_, v_pre_1709_, v_post_1710_, v_usedLetOnly_boxed_1723_, v_skipConstInApp_boxed_1724_, v_skipInstances_boxed_1725_, v_postApp_1714_, v_body_1715_, v_x_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object* v_pre_1727_, lean_object* v_post_1728_, uint8_t v_usedLetOnly_1729_, uint8_t v_skipConstInApp_1730_, uint8_t v_skipInstances_1731_, lean_object* v_postApp_1732_, lean_object* v_fvars_1733_, lean_object* v_e_1734_, lean_object* v_a_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
if (lean_obj_tag(v_e_1734_) == 8)
{
lean_object* v_declName_1741_; lean_object* v_type_1742_; lean_object* v_value_1743_; lean_object* v_body_1744_; uint8_t v_nondep_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___f_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_declName_1741_ = lean_ctor_get(v_e_1734_, 0);
lean_inc(v_declName_1741_);
v_type_1742_ = lean_ctor_get(v_e_1734_, 1);
lean_inc_ref(v_type_1742_);
v_value_1743_ = lean_ctor_get(v_e_1734_, 2);
lean_inc_ref(v_value_1743_);
v_body_1744_ = lean_ctor_get(v_e_1734_, 3);
lean_inc_ref(v_body_1744_);
v_nondep_1745_ = lean_ctor_get_uint8(v_e_1734_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1734_, 4);
v___x_1746_ = lean_box(v_usedLetOnly_1729_);
v___x_1747_ = lean_box(v_skipConstInApp_1730_);
v___x_1748_ = lean_box(v_skipInstances_1731_);
lean_inc_ref_n(v_postApp_1732_, 2);
lean_inc_ref_n(v_post_1728_, 2);
lean_inc_ref_n(v_pre_1727_, 2);
lean_inc_ref(v_fvars_1733_);
v___f_1749_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed), 15, 8);
lean_closure_set(v___f_1749_, 0, v_fvars_1733_);
lean_closure_set(v___f_1749_, 1, v_pre_1727_);
lean_closure_set(v___f_1749_, 2, v_post_1728_);
lean_closure_set(v___f_1749_, 3, v___x_1746_);
lean_closure_set(v___f_1749_, 4, v___x_1747_);
lean_closure_set(v___f_1749_, 5, v___x_1748_);
lean_closure_set(v___f_1749_, 6, v_postApp_1732_);
lean_closure_set(v___f_1749_, 7, v_body_1744_);
v___x_1750_ = lean_expr_instantiate_rev(v_type_1742_, v_fvars_1733_);
lean_dec_ref(v_type_1742_);
v___x_1751_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1727_, v_post_1728_, v_usedLetOnly_1729_, v_skipConstInApp_1730_, v_skipInstances_1731_, v_postApp_1732_, v___x_1750_, v_a_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1751_, 1);
v___x_1753_ = lean_expr_instantiate_rev(v_value_1743_, v_fvars_1733_);
lean_dec_ref(v_fvars_1733_);
lean_dec_ref(v_value_1743_);
v___x_1754_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1727_, v_post_1728_, v_usedLetOnly_1729_, v_skipConstInApp_1730_, v_skipInstances_1731_, v_postApp_1732_, v___x_1753_, v_a_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v___x_1756_ = 0;
v___x_1757_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_declName_1741_, v_a_1752_, v_a_1755_, v___f_1749_, v_nondep_1745_, v___x_1756_, v_a_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
return v___x_1757_;
}
else
{
lean_dec(v_a_1752_);
lean_dec_ref(v___f_1749_);
lean_dec(v_declName_1741_);
return v___x_1754_;
}
}
else
{
lean_dec_ref(v___f_1749_);
lean_dec_ref(v_value_1743_);
lean_dec(v_declName_1741_);
lean_dec_ref(v_fvars_1733_);
lean_dec_ref(v_postApp_1732_);
lean_dec_ref(v_post_1728_);
lean_dec_ref(v_pre_1727_);
return v___x_1751_;
}
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_expr_instantiate_rev(v_e_1734_, v_fvars_1733_);
lean_dec_ref(v_e_1734_);
lean_inc_ref(v_postApp_1732_);
lean_inc_ref(v_post_1728_);
lean_inc_ref(v_pre_1727_);
v___x_1759_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1727_, v_post_1728_, v_usedLetOnly_1729_, v_skipConstInApp_1730_, v_skipInstances_1731_, v_postApp_1732_, v___x_1758_, v_a_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; uint8_t v___x_1761_; uint8_t v___x_1762_; lean_object* v___x_1763_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref_known(v___x_1759_, 1);
v___x_1761_ = 0;
v___x_1762_ = 1;
v___x_1763_ = l_Lean_Meta_mkLetFVars(v_fvars_1733_, v_a_1760_, v_usedLetOnly_1729_, v___x_1761_, v___x_1762_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
lean_dec_ref(v_fvars_1733_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1765_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1727_, v_post_1728_, v_usedLetOnly_1729_, v_skipConstInApp_1730_, v_skipInstances_1731_, v_postApp_1732_, v_a_1764_, v_a_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
return v___x_1765_;
}
else
{
lean_dec_ref(v_postApp_1732_);
lean_dec_ref(v_post_1728_);
lean_dec_ref(v_pre_1727_);
return v___x_1763_;
}
}
else
{
lean_dec_ref(v_fvars_1733_);
lean_dec_ref(v_postApp_1732_);
lean_dec_ref(v_post_1728_);
lean_dec_ref(v_pre_1727_);
return v___x_1759_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1766_; lean_object* v_dummy_1767_; 
v___x_1766_ = lean_box(0);
v_dummy_1767_ = l_Lean_Expr_sort___override(v___x_1766_);
return v_dummy_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object* v_pre_1768_, lean_object* v_post_1769_, uint8_t v_usedLetOnly_1770_, uint8_t v_skipConstInApp_1771_, uint8_t v_skipInstances_1772_, lean_object* v_postApp_1773_, size_t v_sz_1774_, size_t v_i_1775_, lean_object* v_bs_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
uint8_t v___x_1783_; 
v___x_1783_ = lean_usize_dec_lt(v_i_1775_, v_sz_1774_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; 
lean_dec_ref(v_postApp_1773_);
lean_dec_ref(v_post_1769_);
lean_dec_ref(v_pre_1768_);
v___x_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1784_, 0, v_bs_1776_);
return v___x_1784_;
}
else
{
lean_object* v_v_1785_; lean_object* v___x_1786_; lean_object* v_bs_x27_1787_; lean_object* v___x_1788_; 
v_v_1785_ = lean_array_uget(v_bs_1776_, v_i_1775_);
v___x_1786_ = lean_unsigned_to_nat(0u);
v_bs_x27_1787_ = lean_array_uset(v_bs_1776_, v_i_1775_, v___x_1786_);
lean_inc_ref(v_postApp_1773_);
lean_inc_ref(v_post_1769_);
lean_inc_ref(v_pre_1768_);
v___x_1788_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1768_, v_post_1769_, v_usedLetOnly_1770_, v_skipConstInApp_1771_, v_skipInstances_1772_, v_postApp_1773_, v_v_1785_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; size_t v___x_1790_; size_t v___x_1791_; lean_object* v___x_1792_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
v___x_1790_ = ((size_t)1ULL);
v___x_1791_ = lean_usize_add(v_i_1775_, v___x_1790_);
v___x_1792_ = lean_array_uset(v_bs_x27_1787_, v_i_1775_, v_a_1789_);
v_i_1775_ = v___x_1791_;
v_bs_1776_ = v___x_1792_;
goto _start;
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v_bs_x27_1787_);
lean_dec_ref(v_postApp_1773_);
lean_dec_ref(v_post_1769_);
lean_dec_ref(v_pre_1768_);
v_a_1794_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1788_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1788_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0(lean_object* v_pre_1802_, lean_object* v_post_1803_, uint8_t v_usedLetOnly_1804_, uint8_t v_skipConstInApp_1805_, uint8_t v_skipInstances_1806_, lean_object* v_postApp_1807_, lean_object* v___x_1808_, lean_object* v___y_1809_, lean_object* v_b_1810_, lean_object* v_a_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1802_, v_post_1803_, v_usedLetOnly_1804_, v_skipConstInApp_1805_, v_skipInstances_1806_, v_postApp_1807_, v___x_1808_, v___y_1809_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1827_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1820_ = v___x_1817_;
v_isShared_1821_ = v_isSharedCheck_1827_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1817_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1827_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1825_; 
v___x_1822_ = lean_array_fset(v_b_1810_, v_a_1811_, v_a_1818_);
v___x_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v___x_1823_);
v___x_1825_ = v___x_1820_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
lean_dec_ref(v_b_1810_);
v_a_1828_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1817_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1817_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0___boxed(lean_object* v_pre_1836_, lean_object* v_post_1837_, lean_object* v_usedLetOnly_1838_, lean_object* v_skipConstInApp_1839_, lean_object* v_skipInstances_1840_, lean_object* v_postApp_1841_, lean_object* v___x_1842_, lean_object* v___y_1843_, lean_object* v_b_1844_, lean_object* v_a_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
uint8_t v_usedLetOnly_boxed_1851_; uint8_t v_skipConstInApp_boxed_1852_; uint8_t v_skipInstances_boxed_1853_; lean_object* v_res_1854_; 
v_usedLetOnly_boxed_1851_ = lean_unbox(v_usedLetOnly_1838_);
v_skipConstInApp_boxed_1852_ = lean_unbox(v_skipConstInApp_1839_);
v_skipInstances_boxed_1853_ = lean_unbox(v_skipInstances_1840_);
v_res_1854_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0(v_pre_1836_, v_post_1837_, v_usedLetOnly_boxed_1851_, v_skipConstInApp_boxed_1852_, v_skipInstances_boxed_1853_, v_postApp_1841_, v___x_1842_, v___y_1843_, v_b_1844_, v_a_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v_a_1845_);
lean_dec(v___y_1843_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object* v_upperBound_1855_, lean_object* v___x_1856_, lean_object* v_pre_1857_, lean_object* v_post_1858_, uint8_t v_usedLetOnly_1859_, uint8_t v_skipConstInApp_1860_, uint8_t v_skipInstances_1861_, lean_object* v_postApp_1862_, lean_object* v_a_1863_, lean_object* v_b_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v___y_1872_; uint8_t v___x_1895_; 
v___x_1895_ = lean_nat_dec_lt(v_a_1863_, v_upperBound_1855_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; 
lean_dec(v_a_1863_);
lean_dec_ref(v_postApp_1862_);
lean_dec_ref(v_post_1858_);
lean_dec_ref(v_pre_1857_);
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v_b_1864_);
return v___x_1896_;
}
else
{
lean_object* v___x_1897_; lean_object* v___x_1898_; uint8_t v___x_1899_; 
v___x_1897_ = lean_array_fget_borrowed(v_b_1864_, v_a_1863_);
v___x_1898_ = lean_array_get_size(v___x_1856_);
v___x_1899_ = lean_nat_dec_lt(v_a_1863_, v___x_1898_);
if (v___x_1899_ == 0)
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___f_1903_; 
lean_inc(v___x_1897_);
v___x_1900_ = lean_box(v_usedLetOnly_1859_);
v___x_1901_ = lean_box(v_skipConstInApp_1860_);
v___x_1902_ = lean_box(v_skipInstances_1861_);
lean_inc(v_a_1863_);
lean_inc(v___y_1865_);
lean_inc_ref(v_postApp_1862_);
lean_inc_ref(v_post_1858_);
lean_inc_ref(v_pre_1857_);
v___f_1903_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0___boxed), 15, 10);
lean_closure_set(v___f_1903_, 0, v_pre_1857_);
lean_closure_set(v___f_1903_, 1, v_post_1858_);
lean_closure_set(v___f_1903_, 2, v___x_1900_);
lean_closure_set(v___f_1903_, 3, v___x_1901_);
lean_closure_set(v___f_1903_, 4, v___x_1902_);
lean_closure_set(v___f_1903_, 5, v_postApp_1862_);
lean_closure_set(v___f_1903_, 6, v___x_1897_);
lean_closure_set(v___f_1903_, 7, v___y_1865_);
lean_closure_set(v___f_1903_, 8, v_b_1864_);
lean_closure_set(v___f_1903_, 9, v_a_1863_);
v___y_1872_ = v___f_1903_;
goto v___jp_1871_;
}
else
{
lean_object* v___x_1904_; uint8_t v_isInstance_1905_; 
v___x_1904_ = lean_array_fget_borrowed(v___x_1856_, v_a_1863_);
v_isInstance_1905_ = lean_ctor_get_uint8(v___x_1904_, sizeof(void*)*1 + 4);
if (v_isInstance_1905_ == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___f_1909_; 
lean_inc(v___x_1897_);
v___x_1906_ = lean_box(v_usedLetOnly_1859_);
v___x_1907_ = lean_box(v_skipConstInApp_1860_);
v___x_1908_ = lean_box(v_skipInstances_1861_);
lean_inc(v_a_1863_);
lean_inc(v___y_1865_);
lean_inc_ref(v_postApp_1862_);
lean_inc_ref(v_post_1858_);
lean_inc_ref(v_pre_1857_);
v___f_1909_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__0___boxed), 15, 10);
lean_closure_set(v___f_1909_, 0, v_pre_1857_);
lean_closure_set(v___f_1909_, 1, v_post_1858_);
lean_closure_set(v___f_1909_, 2, v___x_1906_);
lean_closure_set(v___f_1909_, 3, v___x_1907_);
lean_closure_set(v___f_1909_, 4, v___x_1908_);
lean_closure_set(v___f_1909_, 5, v_postApp_1862_);
lean_closure_set(v___f_1909_, 6, v___x_1897_);
lean_closure_set(v___f_1909_, 7, v___y_1865_);
lean_closure_set(v___f_1909_, 8, v_b_1864_);
lean_closure_set(v___f_1909_, 9, v_a_1863_);
v___y_1872_ = v___f_1909_;
goto v___jp_1871_;
}
else
{
lean_object* v___x_1910_; lean_object* v___f_1911_; 
v___x_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1910_, 0, v_b_1864_);
v___f_1911_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1911_, 0, v___x_1910_);
v___y_1872_ = v___f_1911_;
goto v___jp_1871_;
}
}
}
v___jp_1871_:
{
lean_object* v___x_1873_; 
lean_inc(v___y_1869_);
lean_inc_ref(v___y_1868_);
lean_inc(v___y_1867_);
lean_inc_ref(v___y_1866_);
v___x_1873_ = lean_apply_5(v___y_1872_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_, lean_box(0));
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1886_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1886_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1886_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
if (lean_obj_tag(v_a_1874_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1880_; 
lean_dec(v_a_1863_);
lean_dec_ref(v_postApp_1862_);
lean_dec_ref(v_post_1858_);
lean_dec_ref(v_pre_1857_);
v_a_1878_ = lean_ctor_get(v_a_1874_, 0);
lean_inc(v_a_1878_);
lean_dec_ref_known(v_a_1874_, 1);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v_a_1878_);
v___x_1880_ = v___x_1876_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
else
{
lean_object* v_a_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
lean_del_object(v___x_1876_);
v_a_1882_ = lean_ctor_get(v_a_1874_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v_a_1874_, 1);
v___x_1883_ = lean_unsigned_to_nat(1u);
v___x_1884_ = lean_nat_add(v_a_1863_, v___x_1883_);
lean_dec(v_a_1863_);
v_a_1863_ = v___x_1884_;
v_b_1864_ = v_a_1882_;
goto _start;
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_dec(v_a_1863_);
lean_dec_ref(v_postApp_1862_);
lean_dec_ref(v_post_1858_);
lean_dec_ref(v_pre_1857_);
v_a_1887_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1873_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1873_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t v_skipInstances_1912_, lean_object* v_pre_1913_, lean_object* v_post_1914_, uint8_t v_usedLetOnly_1915_, uint8_t v_skipConstInApp_1916_, lean_object* v_postApp_1917_, lean_object* v___y_1918_, lean_object* v_x_1919_, lean_object* v_x_1920_, lean_object* v_x_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v_f_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; 
if (lean_obj_tag(v_x_1919_) == 5)
{
lean_object* v_fn_1981_; lean_object* v_arg_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_fn_1981_ = lean_ctor_get(v_x_1919_, 0);
lean_inc_ref(v_fn_1981_);
v_arg_1982_ = lean_ctor_get(v_x_1919_, 1);
lean_inc_ref(v_arg_1982_);
lean_dec_ref_known(v_x_1919_, 2);
v___x_1983_ = lean_array_set(v_x_1920_, v_x_1921_, v_arg_1982_);
v___x_1984_ = lean_unsigned_to_nat(1u);
v___x_1985_ = lean_nat_sub(v_x_1921_, v___x_1984_);
lean_dec(v_x_1921_);
v_x_1919_ = v_fn_1981_;
v_x_1920_ = v___x_1983_;
v_x_1921_ = v___x_1985_;
goto _start;
}
else
{
lean_dec(v_x_1921_);
if (v_skipConstInApp_1916_ == 0)
{
goto v___jp_1978_;
}
else
{
uint8_t v___x_1987_; 
v___x_1987_ = l_Lean_Expr_isConst(v_x_1919_);
if (v___x_1987_ == 0)
{
goto v___jp_1978_;
}
else
{
v_f_1929_ = v_x_1919_;
v___y_1930_ = v___y_1922_;
v___y_1931_ = v___y_1923_;
v___y_1932_ = v___y_1924_;
v___y_1933_ = v___y_1925_;
v___y_1934_ = v___y_1926_;
goto v___jp_1928_;
}
}
}
v___jp_1928_:
{
if (v_skipInstances_1912_ == 0)
{
size_t v_sz_1935_; size_t v___x_1936_; lean_object* v___x_1937_; 
v_sz_1935_ = lean_array_size(v_x_1920_);
v___x_1936_ = ((size_t)0ULL);
lean_inc_ref(v_postApp_1917_);
lean_inc_ref(v_post_1914_);
lean_inc_ref(v_pre_1913_);
v___x_1937_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1913_, v_post_1914_, v_usedLetOnly_1915_, v_skipConstInApp_1916_, v_skipInstances_1912_, v_postApp_1917_, v_sz_1935_, v___x_1936_, v_x_1920_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v_a_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_a_1938_);
lean_dec_ref_known(v___x_1937_, 1);
v___x_1939_ = l_Lean_mkAppN(v_f_1929_, v_a_1938_);
lean_dec(v_a_1938_);
lean_inc_ref(v_postApp_1917_);
lean_inc(v___y_1934_);
lean_inc_ref(v___y_1933_);
lean_inc(v___y_1932_);
lean_inc_ref(v___y_1931_);
v___x_1940_ = lean_apply_7(v_postApp_1917_, v___y_1918_, v___x_1939_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, lean_box(0));
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1942_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1942_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1913_, v_post_1914_, v_usedLetOnly_1915_, v_skipConstInApp_1916_, v_skipInstances_1912_, v_postApp_1917_, v_a_1941_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
return v___x_1942_;
}
else
{
lean_dec_ref(v_postApp_1917_);
lean_dec_ref(v_post_1914_);
lean_dec_ref(v_pre_1913_);
return v___x_1940_;
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec_ref(v_f_1929_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v_postApp_1917_);
lean_dec_ref(v_post_1914_);
lean_dec_ref(v_pre_1913_);
v_a_1943_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1937_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1937_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
else
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = lean_array_get_size(v_x_1920_);
lean_inc_ref(v_f_1929_);
v___x_1952_ = l_Lean_Meta_getFunInfoNArgs(v_f_1929_, v___x_1951_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v_paramInfo_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref_known(v___x_1952_, 1);
v_paramInfo_1954_ = lean_ctor_get(v_a_1953_, 0);
lean_inc_ref(v_paramInfo_1954_);
lean_dec(v_a_1953_);
v___x_1955_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_postApp_1917_);
lean_inc_ref(v_post_1914_);
lean_inc_ref(v_pre_1913_);
v___x_1956_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v___x_1951_, v_paramInfo_1954_, v_pre_1913_, v_post_1914_, v_usedLetOnly_1915_, v_skipConstInApp_1916_, v_skipInstances_1912_, v_postApp_1917_, v___x_1955_, v_x_1920_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
lean_dec_ref(v_paramInfo_1954_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_a_1957_);
lean_dec_ref_known(v___x_1956_, 1);
v___x_1958_ = l_Lean_mkAppN(v_f_1929_, v_a_1957_);
lean_dec(v_a_1957_);
lean_inc_ref(v_postApp_1917_);
lean_inc(v___y_1934_);
lean_inc_ref(v___y_1933_);
lean_inc(v___y_1932_);
lean_inc_ref(v___y_1931_);
v___x_1959_ = lean_apply_7(v_postApp_1917_, v___y_1918_, v___x_1958_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, lean_box(0));
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1961_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1961_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1913_, v_post_1914_, v_usedLetOnly_1915_, v_skipConstInApp_1916_, v_skipInstances_1912_, v_postApp_1917_, v_a_1960_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
return v___x_1961_;
}
else
{
lean_dec_ref(v_postApp_1917_);
lean_dec_ref(v_post_1914_);
lean_dec_ref(v_pre_1913_);
return v___x_1959_;
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec_ref(v_f_1929_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v_postApp_1917_);
lean_dec_ref(v_post_1914_);
lean_dec_ref(v_pre_1913_);
v_a_1962_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1956_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1956_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
lean_dec_ref(v_f_1929_);
lean_dec_ref(v_x_1920_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v_postApp_1917_);
lean_dec_ref(v_post_1914_);
lean_dec_ref(v_pre_1913_);
v_a_1970_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1952_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1952_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
}
v___jp_1978_:
{
lean_object* v___x_1979_; 
lean_inc_ref(v_postApp_1917_);
lean_inc_ref(v_post_1914_);
lean_inc_ref(v_pre_1913_);
v___x_1979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1913_, v_post_1914_, v_usedLetOnly_1915_, v_skipConstInApp_1916_, v_skipInstances_1912_, v_postApp_1917_, v_x_1919_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref_known(v___x_1979_, 1);
v_f_1929_ = v_a_1980_;
v___y_1930_ = v___y_1922_;
v___y_1931_ = v___y_1923_;
v___y_1932_ = v___y_1924_;
v___y_1933_ = v___y_1925_;
v___y_1934_ = v___y_1926_;
goto v___jp_1928_;
}
else
{
lean_dec_ref(v_x_1920_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v_postApp_1917_);
lean_dec_ref(v_post_1914_);
lean_dec_ref(v_pre_1913_);
return v___x_1979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object* v___x_1988_, lean_object* v_pre_1989_, lean_object* v_e_1990_, lean_object* v_post_1991_, uint8_t v_usedLetOnly_1992_, uint8_t v_skipConstInApp_1993_, uint8_t v_skipInstances_1994_, lean_object* v_postApp_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; 
v___x_2002_ = l_Lean_Core_checkSystem(v___x_1988_, v___y_1999_, v___y_2000_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v___x_2003_; 
lean_dec_ref_known(v___x_2002_, 1);
lean_inc_ref(v_pre_1989_);
lean_inc(v___y_2000_);
lean_inc_ref(v___y_1999_);
lean_inc(v___y_1998_);
lean_inc_ref(v___y_1997_);
lean_inc_ref(v_e_1990_);
v___x_2003_ = lean_apply_6(v_pre_1989_, v_e_1990_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, lean_box(0));
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2052_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2052_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2052_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___y_2009_; 
switch(lean_obj_tag(v_a_2004_))
{
case 0:
{
lean_object* v_e_2044_; lean_object* v___x_2046_; 
lean_dec_ref(v_postApp_1995_);
lean_dec_ref(v_post_1991_);
lean_dec_ref(v_e_1990_);
lean_dec_ref(v_pre_1989_);
v_e_2044_ = lean_ctor_get(v_a_2004_, 0);
lean_inc_ref(v_e_2044_);
lean_dec_ref_known(v_a_2004_, 1);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v_e_2044_);
v___x_2046_ = v___x_2006_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_e_2044_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
case 1:
{
lean_object* v_e_2048_; lean_object* v___x_2049_; 
lean_del_object(v___x_2006_);
lean_dec_ref(v_e_1990_);
v_e_2048_ = lean_ctor_get(v_a_2004_, 0);
lean_inc_ref(v_e_2048_);
lean_dec_ref_known(v_a_2004_, 1);
v___x_2049_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v_e_2048_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2049_;
}
default: 
{
lean_object* v_e_x3f_2050_; 
lean_del_object(v___x_2006_);
v_e_x3f_2050_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_e_x3f_2050_);
lean_dec_ref_known(v_a_2004_, 1);
if (lean_obj_tag(v_e_x3f_2050_) == 0)
{
v___y_2009_ = v_e_1990_;
goto v___jp_2008_;
}
else
{
lean_object* v_val_2051_; 
lean_dec_ref(v_e_1990_);
v_val_2051_ = lean_ctor_get(v_e_x3f_2050_, 0);
lean_inc(v_val_2051_);
lean_dec_ref_known(v_e_x3f_2050_, 1);
v___y_2009_ = v_val_2051_;
goto v___jp_2008_;
}
}
}
v___jp_2008_:
{
switch(lean_obj_tag(v___y_2009_))
{
case 7:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2010_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_2011_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___x_2010_, v___y_2009_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2011_;
}
case 6:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_2013_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___x_2012_, v___y_2009_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2013_;
}
case 8:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_2015_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___x_2014_, v___y_2009_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2015_;
}
case 5:
{
lean_object* v_dummy_2016_; lean_object* v_nargs_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v_dummy_2016_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_2017_ = l_Lean_Expr_getAppNumArgs(v___y_2009_);
lean_inc(v_nargs_2017_);
v___x_2018_ = lean_mk_array(v_nargs_2017_, v_dummy_2016_);
v___x_2019_ = lean_unsigned_to_nat(1u);
v___x_2020_ = lean_nat_sub(v_nargs_2017_, v___x_2019_);
lean_dec(v_nargs_2017_);
lean_inc_ref(v___y_2009_);
v___x_2021_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_1994_, v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_postApp_1995_, v___y_2009_, v___y_2009_, v___x_2018_, v___x_2020_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2021_;
}
case 10:
{
lean_object* v_data_2022_; lean_object* v_expr_2023_; lean_object* v___x_2024_; 
v_data_2022_ = lean_ctor_get(v___y_2009_, 0);
v_expr_2023_ = lean_ctor_get(v___y_2009_, 1);
lean_inc_ref(v_expr_2023_);
lean_inc_ref(v_postApp_1995_);
lean_inc_ref(v_post_1991_);
lean_inc_ref(v_pre_1989_);
v___x_2024_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v_expr_2023_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_a_2025_; size_t v___x_2026_; size_t v___x_2027_; uint8_t v___x_2028_; 
v_a_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_a_2025_);
lean_dec_ref_known(v___x_2024_, 1);
v___x_2026_ = lean_ptr_addr(v_expr_2023_);
v___x_2027_ = lean_ptr_addr(v_a_2025_);
v___x_2028_ = lean_usize_dec_eq(v___x_2026_, v___x_2027_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
lean_inc(v_data_2022_);
lean_dec_ref_known(v___y_2009_, 2);
v___x_2029_ = l_Lean_Expr_mdata___override(v_data_2022_, v_a_2025_);
v___x_2030_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___x_2029_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2030_;
}
else
{
lean_object* v___x_2031_; 
lean_dec(v_a_2025_);
v___x_2031_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___y_2009_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2031_;
}
}
else
{
lean_dec_ref_known(v___y_2009_, 2);
lean_dec_ref(v_postApp_1995_);
lean_dec_ref(v_post_1991_);
lean_dec_ref(v_pre_1989_);
return v___x_2024_;
}
}
case 11:
{
lean_object* v_typeName_2032_; lean_object* v_idx_2033_; lean_object* v_struct_2034_; lean_object* v___x_2035_; 
v_typeName_2032_ = lean_ctor_get(v___y_2009_, 0);
v_idx_2033_ = lean_ctor_get(v___y_2009_, 1);
v_struct_2034_ = lean_ctor_get(v___y_2009_, 2);
lean_inc_ref(v_struct_2034_);
lean_inc_ref(v_postApp_1995_);
lean_inc_ref(v_post_1991_);
lean_inc_ref(v_pre_1989_);
v___x_2035_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v_struct_2034_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; size_t v___x_2037_; size_t v___x_2038_; uint8_t v___x_2039_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref_known(v___x_2035_, 1);
v___x_2037_ = lean_ptr_addr(v_struct_2034_);
v___x_2038_ = lean_ptr_addr(v_a_2036_);
v___x_2039_ = lean_usize_dec_eq(v___x_2037_, v___x_2038_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_inc(v_idx_2033_);
lean_inc(v_typeName_2032_);
lean_dec_ref_known(v___y_2009_, 3);
v___x_2040_ = l_Lean_Expr_proj___override(v_typeName_2032_, v_idx_2033_, v_a_2036_);
v___x_2041_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___x_2040_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2041_;
}
else
{
lean_object* v___x_2042_; 
lean_dec(v_a_2036_);
v___x_2042_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___y_2009_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2042_;
}
}
else
{
lean_dec_ref_known(v___y_2009_, 3);
lean_dec_ref(v_postApp_1995_);
lean_dec_ref(v_post_1991_);
lean_dec_ref(v_pre_1989_);
return v___x_2035_;
}
}
default: 
{
lean_object* v___x_2043_; 
v___x_2043_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_1989_, v_post_1991_, v_usedLetOnly_1992_, v_skipConstInApp_1993_, v_skipInstances_1994_, v_postApp_1995_, v___y_2009_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2043_;
}
}
}
}
}
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
lean_dec_ref(v_postApp_1995_);
lean_dec_ref(v_post_1991_);
lean_dec_ref(v_e_1990_);
lean_dec_ref(v_pre_1989_);
v_a_2053_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_2003_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2003_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
lean_dec_ref(v_postApp_1995_);
lean_dec_ref(v_post_1991_);
lean_dec_ref(v_e_1990_);
lean_dec_ref(v_pre_1989_);
v_a_2061_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2002_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2002_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object* v___x_2069_, lean_object* v_pre_2070_, lean_object* v_e_2071_, lean_object* v_post_2072_, lean_object* v_usedLetOnly_2073_, lean_object* v_skipConstInApp_2074_, lean_object* v_skipInstances_2075_, lean_object* v_postApp_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
uint8_t v_usedLetOnly_boxed_2083_; uint8_t v_skipConstInApp_boxed_2084_; uint8_t v_skipInstances_boxed_2085_; lean_object* v_res_2086_; 
v_usedLetOnly_boxed_2083_ = lean_unbox(v_usedLetOnly_2073_);
v_skipConstInApp_boxed_2084_ = lean_unbox(v_skipConstInApp_2074_);
v_skipInstances_boxed_2085_ = lean_unbox(v_skipInstances_2075_);
v_res_2086_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(v___x_2069_, v_pre_2070_, v_e_2071_, v_post_2072_, v_usedLetOnly_boxed_2083_, v_skipConstInApp_boxed_2084_, v_skipInstances_boxed_2085_, v_postApp_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v___y_2077_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object* v_pre_2087_, lean_object* v_post_2088_, uint8_t v_usedLetOnly_2089_, uint8_t v_skipConstInApp_2090_, uint8_t v_skipInstances_2091_, lean_object* v_postApp_2092_, lean_object* v_e_2093_, lean_object* v_a_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
lean_inc(v_a_2094_);
v___x_2100_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2100_, 0, lean_box(0));
lean_closure_set(v___x_2100_, 1, lean_box(0));
lean_closure_set(v___x_2100_, 2, v_a_2094_);
v___x_2101_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___x_2100_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2136_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2136_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2136_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2106_; 
v___x_2106_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg(v_a_2102_, v_e_2093_);
lean_dec(v_a_2102_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___f_2111_; lean_object* v___x_2112_; 
lean_del_object(v___x_2104_);
v___x_2107_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0));
v___x_2108_ = lean_box(v_usedLetOnly_2089_);
v___x_2109_ = lean_box(v_skipConstInApp_2090_);
v___x_2110_ = lean_box(v_skipInstances_2091_);
lean_inc_ref(v_e_2093_);
v___f_2111_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed), 14, 8);
lean_closure_set(v___f_2111_, 0, v___x_2107_);
lean_closure_set(v___f_2111_, 1, v_pre_2087_);
lean_closure_set(v___f_2111_, 2, v_e_2093_);
lean_closure_set(v___f_2111_, 3, v_post_2088_);
lean_closure_set(v___f_2111_, 4, v___x_2108_);
lean_closure_set(v___f_2111_, 5, v___x_2109_);
lean_closure_set(v___f_2111_, 6, v___x_2110_);
lean_closure_set(v___f_2111_, 7, v_postApp_2092_);
v___x_2112_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v___f_2111_, v_a_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___f_2114_; lean_object* v___x_2115_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc_n(v_a_2113_, 2);
lean_dec_ref_known(v___x_2112_, 1);
lean_inc(v_a_2094_);
v___f_2114_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2114_, 0, v_a_2094_);
lean_closure_set(v___f_2114_, 1, v_e_2093_);
lean_closure_set(v___f_2114_, 2, v_a_2113_);
v___x_2115_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___f_2114_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2122_ == 0)
{
lean_object* v_unused_2123_; 
v_unused_2123_ = lean_ctor_get(v___x_2115_, 0);
lean_dec(v_unused_2123_);
v___x_2117_ = v___x_2115_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_dec(v___x_2115_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 0, v_a_2113_);
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2113_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec(v_a_2113_);
v_a_2124_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2115_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2115_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_dec_ref(v_e_2093_);
return v___x_2112_;
}
}
else
{
lean_object* v_val_2132_; lean_object* v___x_2134_; 
lean_dec_ref(v_e_2093_);
lean_dec_ref(v_postApp_2092_);
lean_dec_ref(v_post_2088_);
lean_dec_ref(v_pre_2087_);
v_val_2132_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_val_2132_);
lean_dec_ref_known(v___x_2106_, 1);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v_val_2132_);
v___x_2134_ = v___x_2104_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_val_2132_);
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
lean_dec_ref(v_e_2093_);
lean_dec_ref(v_postApp_2092_);
lean_dec_ref(v_post_2088_);
lean_dec_ref(v_pre_2087_);
v_a_2137_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2101_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2101_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object* v_pre_2145_, lean_object* v_post_2146_, uint8_t v_usedLetOnly_2147_, uint8_t v_skipConstInApp_2148_, uint8_t v_skipInstances_2149_, lean_object* v_postApp_2150_, lean_object* v_fvars_2151_, lean_object* v_e_2152_, lean_object* v_a_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_){
_start:
{
if (lean_obj_tag(v_e_2152_) == 7)
{
lean_object* v_binderName_2159_; lean_object* v_binderType_2160_; lean_object* v_body_2161_; uint8_t v_binderInfo_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___f_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v_binderName_2159_ = lean_ctor_get(v_e_2152_, 0);
lean_inc(v_binderName_2159_);
v_binderType_2160_ = lean_ctor_get(v_e_2152_, 1);
lean_inc_ref(v_binderType_2160_);
v_body_2161_ = lean_ctor_get(v_e_2152_, 2);
lean_inc_ref(v_body_2161_);
v_binderInfo_2162_ = lean_ctor_get_uint8(v_e_2152_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2152_, 3);
v___x_2163_ = lean_box(v_usedLetOnly_2147_);
v___x_2164_ = lean_box(v_skipConstInApp_2148_);
v___x_2165_ = lean_box(v_skipInstances_2149_);
lean_inc_ref(v_postApp_2150_);
lean_inc_ref(v_post_2146_);
lean_inc_ref(v_pre_2145_);
lean_inc_ref(v_fvars_2151_);
v___f_2166_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed), 15, 8);
lean_closure_set(v___f_2166_, 0, v_fvars_2151_);
lean_closure_set(v___f_2166_, 1, v_pre_2145_);
lean_closure_set(v___f_2166_, 2, v_post_2146_);
lean_closure_set(v___f_2166_, 3, v___x_2163_);
lean_closure_set(v___f_2166_, 4, v___x_2164_);
lean_closure_set(v___f_2166_, 5, v___x_2165_);
lean_closure_set(v___f_2166_, 6, v_postApp_2150_);
lean_closure_set(v___f_2166_, 7, v_body_2161_);
v___x_2167_ = lean_expr_instantiate_rev(v_binderType_2160_, v_fvars_2151_);
lean_dec_ref(v_fvars_2151_);
lean_dec_ref(v_binderType_2160_);
v___x_2168_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2145_, v_post_2146_, v_usedLetOnly_2147_, v_skipConstInApp_2148_, v_skipInstances_2149_, v_postApp_2150_, v___x_2167_, v_a_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; uint8_t v___x_2170_; lean_object* v___x_2171_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
lean_inc(v_a_2169_);
lean_dec_ref_known(v___x_2168_, 1);
v___x_2170_ = 0;
v___x_2171_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2159_, v_binderInfo_2162_, v_a_2169_, v___f_2166_, v___x_2170_, v_a_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
return v___x_2171_;
}
else
{
lean_dec_ref(v___f_2166_);
lean_dec(v_binderName_2159_);
return v___x_2168_;
}
}
else
{
lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2172_ = lean_expr_instantiate_rev(v_e_2152_, v_fvars_2151_);
lean_dec_ref(v_e_2152_);
lean_inc_ref(v_postApp_2150_);
lean_inc_ref(v_post_2146_);
lean_inc_ref(v_pre_2145_);
v___x_2173_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2145_, v_post_2146_, v_usedLetOnly_2147_, v_skipConstInApp_2148_, v_skipInstances_2149_, v_postApp_2150_, v___x_2172_, v_a_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; uint8_t v___x_2175_; uint8_t v___x_2176_; uint8_t v___x_2177_; lean_object* v___x_2178_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v___x_2175_ = 0;
v___x_2176_ = 1;
v___x_2177_ = 1;
v___x_2178_ = l_Lean_Meta_mkForallFVars(v_fvars_2151_, v_a_2174_, v___x_2175_, v_usedLetOnly_2147_, v___x_2176_, v___x_2177_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
lean_dec_ref(v_fvars_2151_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2180_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_2145_, v_post_2146_, v_usedLetOnly_2147_, v_skipConstInApp_2148_, v_skipInstances_2149_, v_postApp_2150_, v_a_2179_, v_a_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
return v___x_2180_;
}
else
{
lean_dec_ref(v_postApp_2150_);
lean_dec_ref(v_post_2146_);
lean_dec_ref(v_pre_2145_);
return v___x_2178_;
}
}
else
{
lean_dec_ref(v_fvars_2151_);
lean_dec_ref(v_postApp_2150_);
lean_dec_ref(v_post_2146_);
lean_dec_ref(v_pre_2145_);
return v___x_2173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object* v_fvars_2181_, lean_object* v_pre_2182_, lean_object* v_post_2183_, uint8_t v_usedLetOnly_2184_, uint8_t v_skipConstInApp_2185_, uint8_t v_skipInstances_2186_, lean_object* v_postApp_2187_, lean_object* v_body_2188_, lean_object* v_x_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = lean_array_push(v_fvars_2181_, v_x_2189_);
v___x_2197_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2182_, v_post_2183_, v_usedLetOnly_2184_, v_skipConstInApp_2185_, v_skipInstances_2186_, v_postApp_2187_, v___x_2196_, v_body_2188_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object* v_pre_2198_, lean_object* v_post_2199_, lean_object* v_usedLetOnly_2200_, lean_object* v_skipConstInApp_2201_, lean_object* v_skipInstances_2202_, lean_object* v_postApp_2203_, lean_object* v_e_2204_, lean_object* v_a_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
uint8_t v_usedLetOnly_boxed_2211_; uint8_t v_skipConstInApp_boxed_2212_; uint8_t v_skipInstances_boxed_2213_; lean_object* v_res_2214_; 
v_usedLetOnly_boxed_2211_ = lean_unbox(v_usedLetOnly_2200_);
v_skipConstInApp_boxed_2212_ = lean_unbox(v_skipConstInApp_2201_);
v_skipInstances_boxed_2213_ = lean_unbox(v_skipInstances_2202_);
v_res_2214_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_pre_2198_, v_post_2199_, v_usedLetOnly_boxed_2211_, v_skipConstInApp_boxed_2212_, v_skipInstances_boxed_2213_, v_postApp_2203_, v_e_2204_, v_a_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
lean_dec(v_a_2205_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object* v_pre_2215_, lean_object* v_post_2216_, lean_object* v_usedLetOnly_2217_, lean_object* v_skipConstInApp_2218_, lean_object* v_skipInstances_2219_, lean_object* v_postApp_2220_, lean_object* v_sz_2221_, lean_object* v_i_2222_, lean_object* v_bs_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
uint8_t v_usedLetOnly_boxed_2230_; uint8_t v_skipConstInApp_boxed_2231_; uint8_t v_skipInstances_boxed_2232_; size_t v_sz_boxed_2233_; size_t v_i_boxed_2234_; lean_object* v_res_2235_; 
v_usedLetOnly_boxed_2230_ = lean_unbox(v_usedLetOnly_2217_);
v_skipConstInApp_boxed_2231_ = lean_unbox(v_skipConstInApp_2218_);
v_skipInstances_boxed_2232_ = lean_unbox(v_skipInstances_2219_);
v_sz_boxed_2233_ = lean_unbox_usize(v_sz_2221_);
lean_dec(v_sz_2221_);
v_i_boxed_2234_ = lean_unbox_usize(v_i_2222_);
lean_dec(v_i_2222_);
v_res_2235_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2215_, v_post_2216_, v_usedLetOnly_boxed_2230_, v_skipConstInApp_boxed_2231_, v_skipInstances_boxed_2232_, v_postApp_2220_, v_sz_boxed_2233_, v_i_boxed_2234_, v_bs_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2224_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object* v_pre_2236_, lean_object* v_post_2237_, lean_object* v_usedLetOnly_2238_, lean_object* v_skipConstInApp_2239_, lean_object* v_skipInstances_2240_, lean_object* v_postApp_2241_, lean_object* v_e_2242_, lean_object* v_a_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_){
_start:
{
uint8_t v_usedLetOnly_boxed_2249_; uint8_t v_skipConstInApp_boxed_2250_; uint8_t v_skipInstances_boxed_2251_; lean_object* v_res_2252_; 
v_usedLetOnly_boxed_2249_ = lean_unbox(v_usedLetOnly_2238_);
v_skipConstInApp_boxed_2250_ = lean_unbox(v_skipConstInApp_2239_);
v_skipInstances_boxed_2251_ = lean_unbox(v_skipInstances_2240_);
v_res_2252_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2236_, v_post_2237_, v_usedLetOnly_boxed_2249_, v_skipConstInApp_boxed_2250_, v_skipInstances_boxed_2251_, v_postApp_2241_, v_e_2242_, v_a_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v_a_2243_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object* v_pre_2253_, lean_object* v_post_2254_, lean_object* v_usedLetOnly_2255_, lean_object* v_skipConstInApp_2256_, lean_object* v_skipInstances_2257_, lean_object* v_postApp_2258_, lean_object* v_fvars_2259_, lean_object* v_e_2260_, lean_object* v_a_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
uint8_t v_usedLetOnly_boxed_2267_; uint8_t v_skipConstInApp_boxed_2268_; uint8_t v_skipInstances_boxed_2269_; lean_object* v_res_2270_; 
v_usedLetOnly_boxed_2267_ = lean_unbox(v_usedLetOnly_2255_);
v_skipConstInApp_boxed_2268_ = lean_unbox(v_skipConstInApp_2256_);
v_skipInstances_boxed_2269_ = lean_unbox(v_skipInstances_2257_);
v_res_2270_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2253_, v_post_2254_, v_usedLetOnly_boxed_2267_, v_skipConstInApp_boxed_2268_, v_skipInstances_boxed_2269_, v_postApp_2258_, v_fvars_2259_, v_e_2260_, v_a_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v_a_2261_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object* v_pre_2271_, lean_object* v_post_2272_, lean_object* v_usedLetOnly_2273_, lean_object* v_skipConstInApp_2274_, lean_object* v_skipInstances_2275_, lean_object* v_postApp_2276_, lean_object* v_fvars_2277_, lean_object* v_e_2278_, lean_object* v_a_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
uint8_t v_usedLetOnly_boxed_2285_; uint8_t v_skipConstInApp_boxed_2286_; uint8_t v_skipInstances_boxed_2287_; lean_object* v_res_2288_; 
v_usedLetOnly_boxed_2285_ = lean_unbox(v_usedLetOnly_2273_);
v_skipConstInApp_boxed_2286_ = lean_unbox(v_skipConstInApp_2274_);
v_skipInstances_boxed_2287_ = lean_unbox(v_skipInstances_2275_);
v_res_2288_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2271_, v_post_2272_, v_usedLetOnly_boxed_2285_, v_skipConstInApp_boxed_2286_, v_skipInstances_boxed_2287_, v_postApp_2276_, v_fvars_2277_, v_e_2278_, v_a_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v_a_2279_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object* v_pre_2289_, lean_object* v_post_2290_, lean_object* v_usedLetOnly_2291_, lean_object* v_skipConstInApp_2292_, lean_object* v_skipInstances_2293_, lean_object* v_postApp_2294_, lean_object* v_fvars_2295_, lean_object* v_e_2296_, lean_object* v_a_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
uint8_t v_usedLetOnly_boxed_2303_; uint8_t v_skipConstInApp_boxed_2304_; uint8_t v_skipInstances_boxed_2305_; lean_object* v_res_2306_; 
v_usedLetOnly_boxed_2303_ = lean_unbox(v_usedLetOnly_2291_);
v_skipConstInApp_boxed_2304_ = lean_unbox(v_skipConstInApp_2292_);
v_skipInstances_boxed_2305_ = lean_unbox(v_skipInstances_2293_);
v_res_2306_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2289_, v_post_2290_, v_usedLetOnly_boxed_2303_, v_skipConstInApp_boxed_2304_, v_skipInstances_boxed_2305_, v_postApp_2294_, v_fvars_2295_, v_e_2296_, v_a_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v_a_2297_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object* v_upperBound_2307_, lean_object* v___x_2308_, lean_object* v_pre_2309_, lean_object* v_post_2310_, lean_object* v_usedLetOnly_2311_, lean_object* v_skipConstInApp_2312_, lean_object* v_skipInstances_2313_, lean_object* v_postApp_2314_, lean_object* v_a_2315_, lean_object* v_b_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
uint8_t v_usedLetOnly_boxed_2323_; uint8_t v_skipConstInApp_boxed_2324_; uint8_t v_skipInstances_boxed_2325_; lean_object* v_res_2326_; 
v_usedLetOnly_boxed_2323_ = lean_unbox(v_usedLetOnly_2311_);
v_skipConstInApp_boxed_2324_ = lean_unbox(v_skipConstInApp_2312_);
v_skipInstances_boxed_2325_ = lean_unbox(v_skipInstances_2313_);
v_res_2326_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_upperBound_2307_, v___x_2308_, v_pre_2309_, v_post_2310_, v_usedLetOnly_boxed_2323_, v_skipConstInApp_boxed_2324_, v_skipInstances_boxed_2325_, v_postApp_2314_, v_a_2315_, v_b_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___x_2308_);
lean_dec(v_upperBound_2307_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object* v_skipInstances_2327_, lean_object* v_pre_2328_, lean_object* v_post_2329_, lean_object* v_usedLetOnly_2330_, lean_object* v_skipConstInApp_2331_, lean_object* v_postApp_2332_, lean_object* v___y_2333_, lean_object* v_x_2334_, lean_object* v_x_2335_, lean_object* v_x_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
uint8_t v_skipInstances_boxed_2343_; uint8_t v_usedLetOnly_boxed_2344_; uint8_t v_skipConstInApp_boxed_2345_; lean_object* v_res_2346_; 
v_skipInstances_boxed_2343_ = lean_unbox(v_skipInstances_2327_);
v_usedLetOnly_boxed_2344_ = lean_unbox(v_usedLetOnly_2330_);
v_skipConstInApp_boxed_2345_ = lean_unbox(v_skipConstInApp_2331_);
v_res_2346_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_boxed_2343_, v_pre_2328_, v_post_2329_, v_usedLetOnly_boxed_2344_, v_skipConstInApp_boxed_2345_, v_postApp_2332_, v___y_2333_, v_x_2334_, v_x_2335_, v_x_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
return v_res_2346_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__1(void){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2348_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2349_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2349_, 0, lean_box(0));
lean_closure_set(v___x_2349_, 1, lean_box(0));
lean_closure_set(v___x_2349_, 2, v___x_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_input_2350_, lean_object* v_pre_2351_, lean_object* v_post_2352_, uint8_t v_usedLetOnly_2353_, uint8_t v_skipConstInApp_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v___f_2360_; uint8_t v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v_a_2364_; lean_object* v___x_2365_; 
v___f_2360_ = ((lean_object*)(l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0));
v___x_2361_ = 0;
v___x_2362_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__1, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__1);
v___x_2363_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2362_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref(v___x_2363_);
v___x_2365_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2351_, v_post_2352_, v_usedLetOnly_2353_, v_skipConstInApp_2354_, v___x_2361_, v___f_2360_, v_input_2350_, v_a_2364_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
if (lean_obj_tag(v___x_2365_) == 0)
{
lean_object* v_a_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
v_a_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2366_);
lean_dec_ref_known(v___x_2365_, 1);
v___x_2367_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2367_, 0, lean_box(0));
lean_closure_set(v___x_2367_, 1, lean_box(0));
lean_closure_set(v___x_2367_, 2, v_a_2364_);
v___x_2368_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2367_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2375_ == 0)
{
lean_object* v_unused_2376_; 
v_unused_2376_ = lean_ctor_get(v___x_2368_, 0);
lean_dec(v_unused_2376_);
v___x_2370_ = v___x_2368_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_dec(v___x_2368_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 0, v_a_2366_);
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2366_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
else
{
lean_dec(v_a_2364_);
return v___x_2365_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_input_2377_, lean_object* v_pre_2378_, lean_object* v_post_2379_, lean_object* v_usedLetOnly_2380_, lean_object* v_skipConstInApp_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
uint8_t v_usedLetOnly_boxed_2387_; uint8_t v_skipConstInApp_boxed_2388_; lean_object* v_res_2389_; 
v_usedLetOnly_boxed_2387_ = lean_unbox(v_usedLetOnly_2380_);
v_skipConstInApp_boxed_2388_ = lean_unbox(v_skipConstInApp_2381_);
v_res_2389_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_input_2377_, v_pre_2378_, v_post_2379_, v_usedLetOnly_boxed_2387_, v_skipConstInApp_boxed_2388_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v___x_2390_, lean_object* v_as_2391_, lean_object* v_j_2392_){
_start:
{
lean_object* v___x_2393_; uint8_t v___x_2394_; 
v___x_2393_ = lean_array_get_size(v_as_2391_);
v___x_2394_ = lean_nat_dec_lt(v_j_2392_, v___x_2393_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; 
lean_dec(v_j_2392_);
v___x_2395_ = lean_box(0);
return v___x_2395_;
}
else
{
lean_object* v___x_2396_; lean_object* v_declName_2397_; uint8_t v___x_2398_; 
v___x_2396_ = lean_array_fget_borrowed(v_as_2391_, v_j_2392_);
v_declName_2397_ = lean_ctor_get(v___x_2396_, 3);
v___x_2398_ = lean_name_eq(v_declName_2397_, v___x_2390_);
if (v___x_2398_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = lean_unsigned_to_nat(1u);
v___x_2400_ = lean_nat_add(v_j_2392_, v___x_2399_);
lean_dec(v_j_2392_);
v_j_2392_ = v___x_2400_;
goto _start;
}
else
{
lean_object* v___x_2402_; 
v___x_2402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2402_, 0, v_j_2392_);
return v___x_2402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object* v___x_2403_, lean_object* v_as_2404_, lean_object* v_j_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2403_, v_as_2404_, v_j_2405_);
lean_dec_ref(v_as_2404_);
lean_dec(v___x_2403_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object* v_val_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2413_ = lean_st_ref_get(v_val_2407_);
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object* v_val_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v_val_2415_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object* v_val_2422_, lean_object* v_val_2423_, lean_object* v_a_2424_, lean_object* v___x_2425_, lean_object* v_____r_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2432_ = lean_st_ref_take(v_val_2422_);
v___x_2433_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_2423_, v_a_2424_, v___x_2432_);
v___x_2434_ = lean_st_ref_put(v_val_2422_, v___x_2433_);
v___x_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2425_);
v___x_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object* v_val_2437_, lean_object* v_val_2438_, lean_object* v_a_2439_, lean_object* v___x_2440_, lean_object* v_____r_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2437_, v_val_2438_, v_a_2439_, v___x_2440_, v_____r_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v_val_2438_);
lean_dec(v_val_2437_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_val_2448_, lean_object* v_val_2449_, lean_object* v_next_2450_, lean_object* v_next_2451_, lean_object* v___x_2452_, lean_object* v___x_2453_, lean_object* v_upperBound_2454_, lean_object* v_params_2455_, lean_object* v___x_2456_, lean_object* v_a_2457_, uint8_t v_b_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
uint8_t v_a_2465_; uint8_t v___x_2469_; 
v___x_2469_ = lean_nat_dec_lt(v_a_2457_, v_upperBound_2454_);
if (v___x_2469_ == 0)
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
lean_dec(v_a_2457_);
lean_dec_ref(v___x_2456_);
lean_dec(v_next_2450_);
v___x_2470_ = lean_box(v_b_2458_);
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2470_);
return v___x_2471_;
}
else
{
uint8_t v___x_2472_; lean_object* v___y_2474_; lean_object* v___x_2488_; uint8_t v___x_2489_; 
v___x_2472_ = lean_nat_dec_eq(v___x_2452_, v___x_2453_);
v___x_2488_ = lean_st_ref_get(v_val_2448_);
v___x_2489_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_2451_, v_a_2457_, v___x_2488_);
lean_dec(v___x_2488_);
if (v___x_2489_ == 0)
{
v_a_2465_ = v_b_2458_;
goto v___jp_2464_;
}
else
{
lean_object* v___x_2490_; uint8_t v_foApprox_2491_; uint8_t v_ctxApprox_2492_; uint8_t v_quasiPatternApprox_2493_; uint8_t v_constApprox_2494_; uint8_t v_isDefEqStuckEx_2495_; uint8_t v_unificationHints_2496_; uint8_t v_assignSyntheticOpaque_2497_; uint8_t v_offsetCnstrs_2498_; uint8_t v_transparency_2499_; uint8_t v_etaStruct_2500_; uint8_t v_univApprox_2501_; uint8_t v_iota_2502_; uint8_t v_beta_2503_; uint8_t v_proj_2504_; uint8_t v_zeta_2505_; uint8_t v_zetaDelta_2506_; uint8_t v_zetaUnused_2507_; uint8_t v_zetaHave_2508_; uint8_t v_canUnfoldPredicateConfig_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2539_; 
v___x_2490_ = l_Lean_Meta_Context_config(v___y_2459_);
v_foApprox_2491_ = lean_ctor_get_uint8(v___x_2490_, 0);
v_ctxApprox_2492_ = lean_ctor_get_uint8(v___x_2490_, 1);
v_quasiPatternApprox_2493_ = lean_ctor_get_uint8(v___x_2490_, 2);
v_constApprox_2494_ = lean_ctor_get_uint8(v___x_2490_, 3);
v_isDefEqStuckEx_2495_ = lean_ctor_get_uint8(v___x_2490_, 4);
v_unificationHints_2496_ = lean_ctor_get_uint8(v___x_2490_, 5);
v_assignSyntheticOpaque_2497_ = lean_ctor_get_uint8(v___x_2490_, 7);
v_offsetCnstrs_2498_ = lean_ctor_get_uint8(v___x_2490_, 8);
v_transparency_2499_ = lean_ctor_get_uint8(v___x_2490_, 9);
v_etaStruct_2500_ = lean_ctor_get_uint8(v___x_2490_, 10);
v_univApprox_2501_ = lean_ctor_get_uint8(v___x_2490_, 11);
v_iota_2502_ = lean_ctor_get_uint8(v___x_2490_, 12);
v_beta_2503_ = lean_ctor_get_uint8(v___x_2490_, 13);
v_proj_2504_ = lean_ctor_get_uint8(v___x_2490_, 14);
v_zeta_2505_ = lean_ctor_get_uint8(v___x_2490_, 15);
v_zetaDelta_2506_ = lean_ctor_get_uint8(v___x_2490_, 16);
v_zetaUnused_2507_ = lean_ctor_get_uint8(v___x_2490_, 17);
v_zetaHave_2508_ = lean_ctor_get_uint8(v___x_2490_, 18);
v_canUnfoldPredicateConfig_2509_ = lean_ctor_get_uint8(v___x_2490_, 19);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2511_ = v___x_2490_;
v_isShared_2512_ = v_isSharedCheck_2539_;
goto v_resetjp_2510_;
}
else
{
lean_dec(v___x_2490_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2539_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
uint8_t v_trackZetaDelta_2513_; lean_object* v_zetaDeltaSet_2514_; lean_object* v_lctx_2515_; lean_object* v_localInstances_2516_; lean_object* v_defEqCtx_x3f_2517_; lean_object* v_synthPendingDepth_2518_; lean_object* v_customCanUnfoldPredicate_x3f_2519_; uint8_t v_univApprox_2520_; uint8_t v_inTypeClassResolution_2521_; uint8_t v_cacheInferType_2522_; uint8_t v___x_2523_; lean_object* v___x_2525_; 
v_trackZetaDelta_2513_ = lean_ctor_get_uint8(v___y_2459_, sizeof(void*)*7);
v_zetaDeltaSet_2514_ = lean_ctor_get(v___y_2459_, 1);
v_lctx_2515_ = lean_ctor_get(v___y_2459_, 2);
v_localInstances_2516_ = lean_ctor_get(v___y_2459_, 3);
v_defEqCtx_x3f_2517_ = lean_ctor_get(v___y_2459_, 4);
v_synthPendingDepth_2518_ = lean_ctor_get(v___y_2459_, 5);
v_customCanUnfoldPredicate_x3f_2519_ = lean_ctor_get(v___y_2459_, 6);
v_univApprox_2520_ = lean_ctor_get_uint8(v___y_2459_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2521_ = lean_ctor_get_uint8(v___y_2459_, sizeof(void*)*7 + 2);
v_cacheInferType_2522_ = lean_ctor_get_uint8(v___y_2459_, sizeof(void*)*7 + 3);
v___x_2523_ = 0;
if (v_isShared_2512_ == 0)
{
v___x_2525_ = v___x_2511_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 0, v_foApprox_2491_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 1, v_ctxApprox_2492_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 2, v_quasiPatternApprox_2493_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 3, v_constApprox_2494_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 4, v_isDefEqStuckEx_2495_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 5, v_unificationHints_2496_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 7, v_assignSyntheticOpaque_2497_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 8, v_offsetCnstrs_2498_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 9, v_transparency_2499_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 10, v_etaStruct_2500_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 11, v_univApprox_2501_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 12, v_iota_2502_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 13, v_beta_2503_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 14, v_proj_2504_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 15, v_zeta_2505_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 16, v_zetaDelta_2506_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 17, v_zetaUnused_2507_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 18, v_zetaHave_2508_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, 19, v_canUnfoldPredicateConfig_2509_);
v___x_2525_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
uint64_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; uint8_t v_transparency_2530_; lean_object* v___x_2531_; uint8_t v___x_2532_; uint8_t v___x_2533_; 
lean_ctor_set_uint8(v___x_2525_, 6, v___x_2523_);
v___x_2526_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2525_);
v___x_2527_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set_uint64(v___x_2527_, sizeof(void*)*1, v___x_2526_);
lean_inc(v_customCanUnfoldPredicate_x3f_2519_);
lean_inc(v_synthPendingDepth_2518_);
lean_inc(v_defEqCtx_x3f_2517_);
lean_inc_ref(v_localInstances_2516_);
lean_inc_ref(v_lctx_2515_);
lean_inc(v_zetaDeltaSet_2514_);
lean_inc_ref(v___x_2527_);
v___x_2528_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2528_, 0, v___x_2527_);
lean_ctor_set(v___x_2528_, 1, v_zetaDeltaSet_2514_);
lean_ctor_set(v___x_2528_, 2, v_lctx_2515_);
lean_ctor_set(v___x_2528_, 3, v_localInstances_2516_);
lean_ctor_set(v___x_2528_, 4, v_defEqCtx_x3f_2517_);
lean_ctor_set(v___x_2528_, 5, v_synthPendingDepth_2518_);
lean_ctor_set(v___x_2528_, 6, v_customCanUnfoldPredicate_x3f_2519_);
lean_ctor_set_uint8(v___x_2528_, sizeof(void*)*7, v_trackZetaDelta_2513_);
lean_ctor_set_uint8(v___x_2528_, sizeof(void*)*7 + 1, v_univApprox_2520_);
lean_ctor_set_uint8(v___x_2528_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2521_);
lean_ctor_set_uint8(v___x_2528_, sizeof(void*)*7 + 3, v_cacheInferType_2522_);
v___x_2529_ = l_Lean_Meta_Context_config(v___x_2528_);
v_transparency_2530_ = lean_ctor_get_uint8(v___x_2529_, 9);
lean_dec_ref(v___x_2529_);
v___x_2531_ = lean_array_fget_borrowed(v_params_2455_, v_a_2457_);
v___x_2532_ = 2;
v___x_2533_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2530_, v___x_2532_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
lean_dec_ref_known(v___x_2528_, 7);
v___x_2534_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2532_, v___x_2527_);
lean_inc(v_customCanUnfoldPredicate_x3f_2519_);
lean_inc(v_synthPendingDepth_2518_);
lean_inc(v_defEqCtx_x3f_2517_);
lean_inc_ref(v_localInstances_2516_);
lean_inc_ref(v_lctx_2515_);
lean_inc(v_zetaDeltaSet_2514_);
v___x_2535_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
lean_ctor_set(v___x_2535_, 1, v_zetaDeltaSet_2514_);
lean_ctor_set(v___x_2535_, 2, v_lctx_2515_);
lean_ctor_set(v___x_2535_, 3, v_localInstances_2516_);
lean_ctor_set(v___x_2535_, 4, v_defEqCtx_x3f_2517_);
lean_ctor_set(v___x_2535_, 5, v_synthPendingDepth_2518_);
lean_ctor_set(v___x_2535_, 6, v_customCanUnfoldPredicate_x3f_2519_);
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*7, v_trackZetaDelta_2513_);
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*7 + 1, v_univApprox_2520_);
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2521_);
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*7 + 3, v_cacheInferType_2522_);
lean_inc_ref(v___x_2456_);
lean_inc(v___x_2531_);
v___x_2536_ = l_Lean_Meta_isExprDefEq(v___x_2531_, v___x_2456_, v___x_2535_, v___y_2460_, v___y_2461_, v___y_2462_);
lean_dec_ref_known(v___x_2535_, 7);
v___y_2474_ = v___x_2536_;
goto v___jp_2473_;
}
else
{
lean_object* v___x_2537_; 
lean_dec_ref_known(v___x_2527_, 1);
lean_inc_ref(v___x_2456_);
lean_inc(v___x_2531_);
v___x_2537_ = l_Lean_Meta_isExprDefEq(v___x_2531_, v___x_2456_, v___x_2528_, v___y_2460_, v___y_2461_, v___y_2462_);
lean_dec_ref_known(v___x_2528_, 7);
v___y_2474_ = v___x_2537_;
goto v___jp_2473_;
}
}
}
}
v___jp_2473_:
{
if (lean_obj_tag(v___y_2474_) == 0)
{
lean_object* v_a_2475_; uint8_t v___x_2476_; 
v_a_2475_ = lean_ctor_get(v___y_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___y_2474_, 1);
v___x_2476_ = lean_unbox(v_a_2475_);
lean_dec(v_a_2475_);
if (v___x_2476_ == 0)
{
v_a_2465_ = v_b_2458_;
goto v___jp_2464_;
}
else
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2477_ = lean_st_ref_take(v_val_2448_);
lean_inc(v_a_2457_);
lean_inc(v_next_2450_);
v___x_2478_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_2449_, v_next_2450_, v_next_2451_, v_a_2457_, v___x_2477_);
v___x_2479_ = lean_st_ref_put(v_val_2448_, v___x_2478_);
v_a_2465_ = v___x_2472_;
goto v___jp_2464_;
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_a_2457_);
lean_dec_ref(v___x_2456_);
lean_dec(v_next_2450_);
v_a_2480_ = lean_ctor_get(v___y_2474_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___y_2474_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___y_2474_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___y_2474_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
v___jp_2464_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = lean_unsigned_to_nat(1u);
v___x_2467_ = lean_nat_add(v_a_2457_, v___x_2466_);
lean_dec(v_a_2457_);
v_a_2457_ = v___x_2467_;
v_b_2458_ = v_a_2465_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_val_2540_, lean_object* v_val_2541_, lean_object* v_next_2542_, lean_object* v_next_2543_, lean_object* v___x_2544_, lean_object* v___x_2545_, lean_object* v_upperBound_2546_, lean_object* v_params_2547_, lean_object* v___x_2548_, lean_object* v_a_2549_, lean_object* v_b_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
uint8_t v_b_boxed_2556_; lean_object* v_res_2557_; 
v_b_boxed_2556_ = lean_unbox(v_b_2550_);
v_res_2557_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2540_, v_val_2541_, v_next_2542_, v_next_2543_, v___x_2544_, v___x_2545_, v_upperBound_2546_, v_params_2547_, v___x_2548_, v_a_2549_, v_b_boxed_2556_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v_params_2547_);
lean_dec(v_upperBound_2546_);
lean_dec(v___x_2545_);
lean_dec(v___x_2544_);
lean_dec(v_next_2543_);
lean_dec(v_val_2541_);
lean_dec(v_val_2540_);
return v_res_2557_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2568_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2569_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5));
v___x_2570_ = l_Lean_Name_append(v___x_2569_, v___x_2568_);
return v___x_2570_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7));
v___x_2573_ = l_Lean_stringToMessageData(v___x_2572_);
return v___x_2573_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2));
v___x_2575_ = l_Lean_stringToMessageData(v___x_2574_);
return v___x_2575_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2577_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10));
v___x_2578_ = l_Lean_stringToMessageData(v___x_2577_);
return v___x_2578_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12));
v___x_2581_ = l_Lean_stringToMessageData(v___x_2580_);
return v___x_2581_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2583_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14));
v___x_2584_ = l_Lean_stringToMessageData(v___x_2583_);
return v___x_2584_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2586_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16));
v___x_2587_ = l_Lean_stringToMessageData(v___x_2586_);
return v___x_2587_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2589_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18));
v___x_2590_ = l_Lean_stringToMessageData(v___x_2589_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object* v_val_2591_, lean_object* v_val_2592_, lean_object* v_upperBound_2593_, lean_object* v_args_2594_, lean_object* v_e_2595_, lean_object* v_next_2596_, lean_object* v_params_2597_, lean_object* v___x_2598_, lean_object* v___x_2599_, lean_object* v_a_2600_, lean_object* v_b_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_a_2608_; lean_object* v___y_2613_; uint8_t v___x_2632_; 
v___x_2632_ = lean_nat_dec_lt(v_a_2600_, v_upperBound_2593_);
if (v___x_2632_ == 0)
{
lean_object* v___x_2633_; 
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v___x_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2633_, 0, v_b_2601_);
return v___x_2633_;
}
else
{
lean_object* v___x_2634_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2634_ = lean_box(0);
v___x_2641_ = l_Lean_instInhabitedExpr;
v___x_2642_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2591_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; uint8_t v___x_2644_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v___x_2642_, 1);
v___x_2644_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_2592_, v_a_2600_, v_a_2643_);
lean_dec(v_a_2643_);
if (v___x_2644_ == 0)
{
v_a_2608_ = v___x_2634_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2645_; uint8_t v___x_2646_; 
v___x_2645_ = lean_array_get_size(v_args_2594_);
v___x_2646_ = lean_nat_dec_lt(v_a_2600_, v___x_2645_);
if (v___x_2646_ == 0)
{
lean_object* v_toCold_2647_; lean_object* v_options_2648_; uint8_t v_hasTrace_2649_; 
v_toCold_2647_ = lean_ctor_get(v___y_2604_, 0);
v_options_2648_ = lean_ctor_get(v_toCold_2647_, 2);
v_hasTrace_2649_ = lean_ctor_get_uint8(v_options_2648_, sizeof(void*)*1);
if (v_hasTrace_2649_ == 0)
{
goto v___jp_2637_;
}
else
{
lean_object* v_inheritedTraceOptions_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; 
v_inheritedTraceOptions_2650_ = lean_ctor_get(v_toCold_2647_, 11);
v___x_2651_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2652_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2653_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2650_, v_options_2648_, v___x_2652_);
if (v___x_2653_ == 0)
{
goto v___jp_2637_;
}
else
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2654_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2592_);
v___x_2655_ = l_Nat_reprFast(v_val_2592_);
v___x_2656_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
v___x_2657_ = l_Lean_MessageData_ofFormat(v___x_2656_);
v___x_2658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2654_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
v___x_2659_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2658_);
lean_ctor_set(v___x_2660_, 1, v___x_2659_);
lean_inc(v_a_2600_);
v___x_2661_ = l_Nat_reprFast(v_a_2600_);
v___x_2662_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
v___x_2663_ = l_Lean_MessageData_ofFormat(v___x_2662_);
lean_inc_ref(v___x_2663_);
v___x_2664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2660_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2664_);
lean_ctor_set(v___x_2666_, 1, v___x_2665_);
lean_inc_ref(v_e_2595_);
v___x_2667_ = l_Lean_MessageData_ofExpr(v_e_2595_);
v___x_2668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2666_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13);
v___x_2670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set(v___x_2671_, 1, v___x_2663_);
v___x_2672_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2651_, v___x_2671_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2674_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___x_2672_, 1);
lean_inc(v_a_2600_);
v___x_2674_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2591_, v_val_2592_, v_a_2600_, v___x_2634_, v_a_2673_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
v___y_2613_ = v___x_2674_;
goto v___jp_2612_;
}
else
{
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
return v___x_2672_;
}
}
}
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2675_ = lean_array_fget_borrowed(v_args_2594_, v_a_2600_);
v___x_2676_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2591_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; lean_object* v___x_2678_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v___x_2678_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_2592_, v_a_2600_, v_next_2596_, v_a_2677_);
lean_dec(v_a_2677_);
if (lean_obj_tag(v___x_2678_) == 1)
{
lean_object* v_val_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2780_; 
v_val_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2780_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_val_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2780_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; uint8_t v_foApprox_2684_; uint8_t v_ctxApprox_2685_; uint8_t v_quasiPatternApprox_2686_; uint8_t v_constApprox_2687_; uint8_t v_isDefEqStuckEx_2688_; uint8_t v_unificationHints_2689_; uint8_t v_assignSyntheticOpaque_2690_; uint8_t v_offsetCnstrs_2691_; uint8_t v_transparency_2692_; uint8_t v_etaStruct_2693_; uint8_t v_univApprox_2694_; uint8_t v_iota_2695_; uint8_t v_beta_2696_; uint8_t v_proj_2697_; uint8_t v_zeta_2698_; uint8_t v_zetaDelta_2699_; uint8_t v_zetaUnused_2700_; uint8_t v_zetaHave_2701_; uint8_t v_canUnfoldPredicateConfig_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2779_; 
v___x_2683_ = l_Lean_Meta_Context_config(v___y_2602_);
v_foApprox_2684_ = lean_ctor_get_uint8(v___x_2683_, 0);
v_ctxApprox_2685_ = lean_ctor_get_uint8(v___x_2683_, 1);
v_quasiPatternApprox_2686_ = lean_ctor_get_uint8(v___x_2683_, 2);
v_constApprox_2687_ = lean_ctor_get_uint8(v___x_2683_, 3);
v_isDefEqStuckEx_2688_ = lean_ctor_get_uint8(v___x_2683_, 4);
v_unificationHints_2689_ = lean_ctor_get_uint8(v___x_2683_, 5);
v_assignSyntheticOpaque_2690_ = lean_ctor_get_uint8(v___x_2683_, 7);
v_offsetCnstrs_2691_ = lean_ctor_get_uint8(v___x_2683_, 8);
v_transparency_2692_ = lean_ctor_get_uint8(v___x_2683_, 9);
v_etaStruct_2693_ = lean_ctor_get_uint8(v___x_2683_, 10);
v_univApprox_2694_ = lean_ctor_get_uint8(v___x_2683_, 11);
v_iota_2695_ = lean_ctor_get_uint8(v___x_2683_, 12);
v_beta_2696_ = lean_ctor_get_uint8(v___x_2683_, 13);
v_proj_2697_ = lean_ctor_get_uint8(v___x_2683_, 14);
v_zeta_2698_ = lean_ctor_get_uint8(v___x_2683_, 15);
v_zetaDelta_2699_ = lean_ctor_get_uint8(v___x_2683_, 16);
v_zetaUnused_2700_ = lean_ctor_get_uint8(v___x_2683_, 17);
v_zetaHave_2701_ = lean_ctor_get_uint8(v___x_2683_, 18);
v_canUnfoldPredicateConfig_2702_ = lean_ctor_get_uint8(v___x_2683_, 19);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2704_ = v___x_2683_;
v_isShared_2705_ = v_isSharedCheck_2779_;
goto v_resetjp_2703_;
}
else
{
lean_dec(v___x_2683_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2779_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
uint8_t v_trackZetaDelta_2706_; lean_object* v_zetaDeltaSet_2707_; lean_object* v_lctx_2708_; lean_object* v_localInstances_2709_; lean_object* v_defEqCtx_x3f_2710_; lean_object* v_synthPendingDepth_2711_; lean_object* v_customCanUnfoldPredicate_x3f_2712_; uint8_t v_univApprox_2713_; uint8_t v_inTypeClassResolution_2714_; uint8_t v_cacheInferType_2715_; uint8_t v___x_2716_; lean_object* v___x_2718_; 
v_trackZetaDelta_2706_ = lean_ctor_get_uint8(v___y_2602_, sizeof(void*)*7);
v_zetaDeltaSet_2707_ = lean_ctor_get(v___y_2602_, 1);
v_lctx_2708_ = lean_ctor_get(v___y_2602_, 2);
v_localInstances_2709_ = lean_ctor_get(v___y_2602_, 3);
v_defEqCtx_x3f_2710_ = lean_ctor_get(v___y_2602_, 4);
v_synthPendingDepth_2711_ = lean_ctor_get(v___y_2602_, 5);
v_customCanUnfoldPredicate_x3f_2712_ = lean_ctor_get(v___y_2602_, 6);
v_univApprox_2713_ = lean_ctor_get_uint8(v___y_2602_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2714_ = lean_ctor_get_uint8(v___y_2602_, sizeof(void*)*7 + 2);
v_cacheInferType_2715_ = lean_ctor_get_uint8(v___y_2602_, sizeof(void*)*7 + 3);
v___x_2716_ = 0;
if (v_isShared_2705_ == 0)
{
v___x_2718_ = v___x_2704_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 0, v_foApprox_2684_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 1, v_ctxApprox_2685_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 2, v_quasiPatternApprox_2686_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 3, v_constApprox_2687_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 4, v_isDefEqStuckEx_2688_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 5, v_unificationHints_2689_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 7, v_assignSyntheticOpaque_2690_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 8, v_offsetCnstrs_2691_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 9, v_transparency_2692_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 10, v_etaStruct_2693_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 11, v_univApprox_2694_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 12, v_iota_2695_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 13, v_beta_2696_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 14, v_proj_2697_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 15, v_zeta_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 16, v_zetaDelta_2699_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 17, v_zetaUnused_2700_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 18, v_zetaHave_2701_);
lean_ctor_set_uint8(v_reuseFailAlloc_2778_, 19, v_canUnfoldPredicateConfig_2702_);
v___x_2718_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
uint64_t v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v_transparency_2723_; lean_object* v___x_2724_; lean_object* v___y_2726_; uint8_t v___x_2772_; uint8_t v___x_2773_; 
lean_ctor_set_uint8(v___x_2718_, 6, v___x_2716_);
v___x_2719_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2718_);
v___x_2720_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2720_, 0, v___x_2718_);
lean_ctor_set_uint64(v___x_2720_, sizeof(void*)*1, v___x_2719_);
lean_inc(v_customCanUnfoldPredicate_x3f_2712_);
lean_inc(v_synthPendingDepth_2711_);
lean_inc(v_defEqCtx_x3f_2710_);
lean_inc_ref(v_localInstances_2709_);
lean_inc_ref(v_lctx_2708_);
lean_inc(v_zetaDeltaSet_2707_);
lean_inc_ref(v___x_2720_);
v___x_2721_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
lean_ctor_set(v___x_2721_, 1, v_zetaDeltaSet_2707_);
lean_ctor_set(v___x_2721_, 2, v_lctx_2708_);
lean_ctor_set(v___x_2721_, 3, v_localInstances_2709_);
lean_ctor_set(v___x_2721_, 4, v_defEqCtx_x3f_2710_);
lean_ctor_set(v___x_2721_, 5, v_synthPendingDepth_2711_);
lean_ctor_set(v___x_2721_, 6, v_customCanUnfoldPredicate_x3f_2712_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7, v_trackZetaDelta_2706_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 1, v_univApprox_2713_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2714_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 3, v_cacheInferType_2715_);
v___x_2722_ = l_Lean_Meta_Context_config(v___x_2721_);
v_transparency_2723_ = lean_ctor_get_uint8(v___x_2722_, 9);
lean_dec_ref(v___x_2722_);
v___x_2724_ = lean_array_get_borrowed(v___x_2641_, v_params_2597_, v_val_2679_);
lean_dec(v_val_2679_);
v___x_2772_ = 2;
v___x_2773_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2723_, v___x_2772_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
lean_dec_ref_known(v___x_2721_, 7);
v___x_2774_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2772_, v___x_2720_);
lean_inc(v_customCanUnfoldPredicate_x3f_2712_);
lean_inc(v_synthPendingDepth_2711_);
lean_inc(v_defEqCtx_x3f_2710_);
lean_inc_ref(v_localInstances_2709_);
lean_inc_ref(v_lctx_2708_);
lean_inc(v_zetaDeltaSet_2707_);
v___x_2775_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
lean_ctor_set(v___x_2775_, 1, v_zetaDeltaSet_2707_);
lean_ctor_set(v___x_2775_, 2, v_lctx_2708_);
lean_ctor_set(v___x_2775_, 3, v_localInstances_2709_);
lean_ctor_set(v___x_2775_, 4, v_defEqCtx_x3f_2710_);
lean_ctor_set(v___x_2775_, 5, v_synthPendingDepth_2711_);
lean_ctor_set(v___x_2775_, 6, v_customCanUnfoldPredicate_x3f_2712_);
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*7, v_trackZetaDelta_2706_);
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*7 + 1, v_univApprox_2713_);
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2714_);
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*7 + 3, v_cacheInferType_2715_);
lean_inc(v___x_2675_);
lean_inc(v___x_2724_);
v___x_2776_ = l_Lean_Meta_isExprDefEq(v___x_2724_, v___x_2675_, v___x_2775_, v___y_2603_, v___y_2604_, v___y_2605_);
lean_dec_ref_known(v___x_2775_, 7);
v___y_2726_ = v___x_2776_;
goto v___jp_2725_;
}
else
{
lean_object* v___x_2777_; 
lean_dec_ref_known(v___x_2720_, 1);
lean_inc(v___x_2675_);
lean_inc(v___x_2724_);
v___x_2777_ = l_Lean_Meta_isExprDefEq(v___x_2724_, v___x_2675_, v___x_2721_, v___y_2603_, v___y_2604_, v___y_2605_);
lean_dec_ref_known(v___x_2721_, 7);
v___y_2726_ = v___x_2777_;
goto v___jp_2725_;
}
v___jp_2725_:
{
if (lean_obj_tag(v___y_2726_) == 0)
{
lean_object* v_a_2727_; uint8_t v___x_2728_; 
v_a_2727_ = lean_ctor_get(v___y_2726_, 0);
lean_inc(v_a_2727_);
lean_dec_ref_known(v___y_2726_, 1);
v___x_2728_ = lean_unbox(v_a_2727_);
lean_dec(v_a_2727_);
if (v___x_2728_ == 0)
{
lean_object* v_toCold_2729_; lean_object* v_options_2730_; uint8_t v_hasTrace_2731_; 
v_toCold_2729_ = lean_ctor_get(v___y_2604_, 0);
v_options_2730_ = lean_ctor_get(v_toCold_2729_, 2);
v_hasTrace_2731_ = lean_ctor_get_uint8(v_options_2730_, sizeof(void*)*1);
if (v_hasTrace_2731_ == 0)
{
lean_del_object(v___x_2681_);
goto v___jp_2639_;
}
else
{
lean_object* v_inheritedTraceOptions_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; uint8_t v___x_2735_; 
v_inheritedTraceOptions_2732_ = lean_ctor_get(v_toCold_2729_, 11);
v___x_2733_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2734_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2735_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2732_, v_options_2730_, v___x_2734_);
if (v___x_2735_ == 0)
{
lean_del_object(v___x_2681_);
goto v___jp_2639_;
}
else
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2736_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2592_);
v___x_2737_ = l_Nat_reprFast(v_val_2592_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set_tag(v___x_2681_, 3);
lean_ctor_set(v___x_2681_, 0, v___x_2737_);
v___x_2739_ = v___x_2681_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v___x_2737_);
v___x_2739_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2740_ = l_Lean_MessageData_ofFormat(v___x_2739_);
v___x_2741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2736_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2741_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
lean_inc(v_a_2600_);
v___x_2744_ = l_Nat_reprFast(v_a_2600_);
v___x_2745_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2744_);
v___x_2746_ = l_Lean_MessageData_ofFormat(v___x_2745_);
v___x_2747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2743_);
lean_ctor_set(v___x_2747_, 1, v___x_2746_);
v___x_2748_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2747_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
lean_inc_ref(v_e_2595_);
v___x_2750_ = l_Lean_MessageData_ofExpr(v_e_2595_);
v___x_2751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2749_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
lean_inc(v___x_2724_);
v___x_2754_ = l_Lean_MessageData_ofExpr(v___x_2724_);
v___x_2755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2753_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17);
v___x_2757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2755_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
lean_inc(v___x_2675_);
v___x_2758_ = l_Lean_MessageData_ofExpr(v___x_2675_);
v___x_2759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2733_, v___x_2759_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref_known(v___x_2760_, 1);
lean_inc(v_a_2600_);
v___x_2762_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2591_, v_val_2592_, v_a_2600_, v___x_2634_, v_a_2761_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
v___y_2613_ = v___x_2762_;
goto v___jp_2612_;
}
else
{
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
return v___x_2760_;
}
}
}
}
}
else
{
lean_del_object(v___x_2681_);
v_a_2608_ = v___x_2634_;
goto v___jp_2607_;
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_del_object(v___x_2681_);
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v_a_2764_ = lean_ctor_get(v___y_2726_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___y_2726_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___y_2726_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___y_2726_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
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
lean_object* v___x_2781_; uint8_t v___x_2782_; lean_object* v___x_2783_; 
lean_dec(v___x_2678_);
v___x_2781_ = lean_unsigned_to_nat(0u);
v___x_2782_ = 0;
lean_inc(v___x_2675_);
lean_inc(v_a_2600_);
v___x_2783_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2591_, v_val_2592_, v_a_2600_, v_next_2596_, v___x_2598_, v___x_2599_, v___x_2598_, v_params_2597_, v___x_2675_, v___x_2781_, v___x_2782_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; uint8_t v___x_2785_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2783_, 1);
v___x_2785_ = lean_unbox(v_a_2784_);
lean_dec(v_a_2784_);
if (v___x_2785_ == 0)
{
lean_object* v_toCold_2786_; lean_object* v_options_2787_; uint8_t v_hasTrace_2788_; 
v_toCold_2786_ = lean_ctor_get(v___y_2604_, 0);
v_options_2787_ = lean_ctor_get(v_toCold_2786_, 2);
v_hasTrace_2788_ = lean_ctor_get_uint8(v_options_2787_, sizeof(void*)*1);
if (v_hasTrace_2788_ == 0)
{
goto v___jp_2635_;
}
else
{
lean_object* v_inheritedTraceOptions_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; 
v_inheritedTraceOptions_2789_ = lean_ctor_get(v_toCold_2786_, 11);
v___x_2790_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2791_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2792_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2789_, v_options_2787_, v___x_2791_);
if (v___x_2792_ == 0)
{
goto v___jp_2635_;
}
else
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2793_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2592_);
v___x_2794_ = l_Nat_reprFast(v_val_2592_);
v___x_2795_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
v___x_2796_ = l_Lean_MessageData_ofFormat(v___x_2795_);
v___x_2797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2793_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2797_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
lean_inc(v_a_2600_);
v___x_2800_ = l_Nat_reprFast(v_a_2600_);
v___x_2801_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2800_);
v___x_2802_ = l_Lean_MessageData_ofFormat(v___x_2801_);
v___x_2803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2799_);
lean_ctor_set(v___x_2803_, 1, v___x_2802_);
v___x_2804_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2803_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
lean_inc_ref(v_e_2595_);
v___x_2806_ = l_Lean_MessageData_ofExpr(v_e_2595_);
v___x_2807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2805_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2809_, 0, v___x_2807_);
lean_ctor_set(v___x_2809_, 1, v___x_2808_);
lean_inc(v___x_2675_);
v___x_2810_ = l_Lean_MessageData_ofExpr(v___x_2675_);
v___x_2811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2809_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19);
v___x_2813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2811_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2790_, v___x_2813_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2816_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2814_, 1);
lean_inc(v_a_2600_);
v___x_2816_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2591_, v_val_2592_, v_a_2600_, v___x_2634_, v_a_2815_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
v___y_2613_ = v___x_2816_;
goto v___jp_2612_;
}
else
{
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
return v___x_2814_;
}
}
}
}
else
{
v_a_2608_ = v___x_2634_;
goto v___jp_2607_;
}
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v_a_2817_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2783_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2783_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v_a_2825_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2676_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2676_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v_a_2833_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2642_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2642_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
v___jp_2635_:
{
lean_object* v___x_2636_; 
lean_inc(v_a_2600_);
v___x_2636_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2591_, v_val_2592_, v_a_2600_, v___x_2634_, v___x_2634_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
v___y_2613_ = v___x_2636_;
goto v___jp_2612_;
}
v___jp_2637_:
{
lean_object* v___x_2638_; 
lean_inc(v_a_2600_);
v___x_2638_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2591_, v_val_2592_, v_a_2600_, v___x_2634_, v___x_2634_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
v___y_2613_ = v___x_2638_;
goto v___jp_2612_;
}
v___jp_2639_:
{
lean_object* v___x_2640_; 
lean_inc(v_a_2600_);
v___x_2640_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2591_, v_val_2592_, v_a_2600_, v___x_2634_, v___x_2634_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
v___y_2613_ = v___x_2640_;
goto v___jp_2612_;
}
}
v___jp_2607_:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = lean_unsigned_to_nat(1u);
v___x_2610_ = lean_nat_add(v_a_2600_, v___x_2609_);
lean_dec(v_a_2600_);
v_a_2600_ = v___x_2610_;
v_b_2601_ = v_a_2608_;
goto _start;
}
v___jp_2612_:
{
if (lean_obj_tag(v___y_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2623_; 
v_a_2614_ = lean_ctor_get(v___y_2613_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___y_2613_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2616_ = v___y_2613_;
v_isShared_2617_ = v_isSharedCheck_2623_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___y_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2623_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
if (lean_obj_tag(v_a_2614_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2620_; 
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v_a_2618_ = lean_ctor_get(v_a_2614_, 0);
lean_inc(v_a_2618_);
lean_dec_ref_known(v_a_2614_, 1);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v_a_2618_);
v___x_2620_ = v___x_2616_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
else
{
lean_object* v_a_2622_; 
lean_del_object(v___x_2616_);
v_a_2622_ = lean_ctor_get(v_a_2614_, 0);
lean_inc(v_a_2622_);
lean_dec_ref_known(v_a_2614_, 1);
v_a_2608_ = v_a_2622_;
goto v___jp_2607_;
}
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec(v_a_2600_);
lean_dec_ref(v_e_2595_);
lean_dec(v_val_2592_);
v_a_2624_ = lean_ctor_get(v___y_2613_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___y_2613_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___y_2613_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___y_2613_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object* v_val_2841_, lean_object* v_val_2842_, lean_object* v_upperBound_2843_, lean_object* v_args_2844_, lean_object* v_e_2845_, lean_object* v_next_2846_, lean_object* v_params_2847_, lean_object* v___x_2848_, lean_object* v___x_2849_, lean_object* v_a_2850_, lean_object* v_b_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2841_, v_val_2842_, v_upperBound_2843_, v_args_2844_, v_e_2845_, v_next_2846_, v_params_2847_, v___x_2848_, v___x_2849_, v_a_2850_, v_b_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___x_2849_);
lean_dec(v___x_2848_);
lean_dec_ref(v_params_2847_);
lean_dec(v_next_2846_);
lean_dec_ref(v_args_2844_);
lean_dec(v_upperBound_2843_);
lean_dec(v_val_2841_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_preDefs_2860_, lean_object* v___x_2861_, lean_object* v_val_2862_, lean_object* v_e_2863_, lean_object* v_next_2864_, lean_object* v_params_2865_, lean_object* v___x_2866_, lean_object* v___x_2867_, lean_object* v_x_2868_, lean_object* v_x_2869_, lean_object* v_x_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
if (lean_obj_tag(v_x_2868_) == 5)
{
lean_object* v_fn_2876_; lean_object* v_arg_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_fn_2876_ = lean_ctor_get(v_x_2868_, 0);
lean_inc_ref(v_fn_2876_);
v_arg_2877_ = lean_ctor_get(v_x_2868_, 1);
lean_inc_ref(v_arg_2877_);
lean_dec_ref_known(v_x_2868_, 2);
v___x_2878_ = lean_array_set(v_x_2869_, v_x_2870_, v_arg_2877_);
v___x_2879_ = lean_unsigned_to_nat(1u);
v___x_2880_ = lean_nat_sub(v_x_2870_, v___x_2879_);
lean_dec(v_x_2870_);
v_x_2868_ = v_fn_2876_;
v_x_2869_ = v___x_2878_;
v_x_2870_ = v___x_2880_;
goto _start;
}
else
{
uint8_t v___x_2882_; 
lean_dec(v_x_2870_);
v___x_2882_ = l_Lean_Expr_isConst(v_x_2868_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
lean_dec_ref(v_x_2869_);
lean_dec_ref(v_x_2868_);
lean_dec_ref(v_e_2863_);
v___x_2883_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
return v___x_2884_;
}
else
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2885_ = l_Lean_Expr_constName_x21(v_x_2868_);
lean_dec_ref(v_x_2868_);
v___x_2886_ = lean_unsigned_to_nat(0u);
v___x_2887_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2885_, v_preDefs_2860_, v___x_2886_);
lean_dec(v___x_2885_);
if (lean_obj_tag(v___x_2887_) == 1)
{
lean_object* v_val_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v_val_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_val_2888_);
lean_dec_ref_known(v___x_2887_, 1);
v___x_2889_ = lean_box(0);
v___x_2890_ = lean_array_get_borrowed(v___x_2886_, v___x_2861_, v_val_2888_);
v___x_2891_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2862_, v_val_2888_, v___x_2890_, v_x_2869_, v_e_2863_, v_next_2864_, v_params_2865_, v___x_2866_, v___x_2867_, v___x_2886_, v___x_2889_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_);
lean_dec_ref(v_x_2869_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2899_; 
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2899_ == 0)
{
lean_object* v_unused_2900_; 
v_unused_2900_ = lean_ctor_get(v___x_2891_, 0);
lean_dec(v_unused_2900_);
v___x_2893_ = v___x_2891_;
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
else
{
lean_dec(v___x_2891_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2897_; 
v___x_2895_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2895_);
v___x_2897_ = v___x_2893_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2895_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
v_a_2901_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___x_2891_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2891_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
else
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
lean_dec(v___x_2887_);
lean_dec_ref(v_x_2869_);
lean_dec_ref(v_e_2863_);
v___x_2909_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
return v___x_2910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_preDefs_2911_, lean_object* v___x_2912_, lean_object* v_val_2913_, lean_object* v_e_2914_, lean_object* v_next_2915_, lean_object* v_params_2916_, lean_object* v___x_2917_, lean_object* v___x_2918_, lean_object* v_x_2919_, lean_object* v_x_2920_, lean_object* v_x_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2911_, v___x_2912_, v_val_2913_, v_e_2914_, v_next_2915_, v_params_2916_, v___x_2917_, v___x_2918_, v_x_2919_, v_x_2920_, v_x_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec_ref(v___y_2922_);
lean_dec(v___x_2918_);
lean_dec(v___x_2917_);
lean_dec_ref(v_params_2916_);
lean_dec(v_next_2915_);
lean_dec(v_val_2913_);
lean_dec_ref(v___x_2912_);
lean_dec_ref(v_preDefs_2911_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object* v_preDefs_2928_, lean_object* v___x_2929_, lean_object* v_val_2930_, lean_object* v_a_2931_, lean_object* v_params_2932_, lean_object* v___x_2933_, lean_object* v___x_2934_, lean_object* v_e_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_dummy_2941_; lean_object* v_nargs_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; 
v_dummy_2941_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_2942_ = l_Lean_Expr_getAppNumArgs(v_e_2935_);
lean_inc(v_nargs_2942_);
v___x_2943_ = lean_mk_array(v_nargs_2942_, v_dummy_2941_);
v___x_2944_ = lean_unsigned_to_nat(1u);
v___x_2945_ = lean_nat_sub(v_nargs_2942_, v___x_2944_);
lean_dec(v_nargs_2942_);
lean_inc_ref(v_e_2935_);
v___x_2946_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2928_, v___x_2929_, v_val_2930_, v_e_2935_, v_a_2931_, v_params_2932_, v___x_2933_, v___x_2934_, v_e_2935_, v___x_2943_, v___x_2945_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
return v___x_2946_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object* v_preDefs_2947_, lean_object* v___x_2948_, lean_object* v_val_2949_, lean_object* v_a_2950_, lean_object* v_params_2951_, lean_object* v___x_2952_, lean_object* v___x_2953_, lean_object* v_e_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(v_preDefs_2947_, v___x_2948_, v_val_2949_, v_a_2950_, v_params_2951_, v___x_2952_, v___x_2953_, v_e_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
lean_dec(v___x_2953_);
lean_dec(v___x_2952_);
lean_dec_ref(v_params_2951_);
lean_dec(v_a_2950_);
lean_dec(v_val_2949_);
lean_dec_ref(v___x_2948_);
lean_dec_ref(v_preDefs_2947_);
return v_res_2960_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2964_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2));
v___x_2965_ = lean_unsigned_to_nat(6u);
v___x_2966_ = lean_unsigned_to_nat(201u);
v___x_2967_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1));
v___x_2968_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_2969_ = l_mkPanicMessageWithDecl(v___x_2968_, v___x_2967_, v___x_2966_, v___x_2965_, v___x_2964_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object* v___x_2970_, lean_object* v___x_2971_, lean_object* v_a_2972_, lean_object* v_preDefs_2973_, lean_object* v_val_2974_, lean_object* v___f_2975_, lean_object* v___x_2976_, lean_object* v_params_2977_, lean_object* v_body_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; uint8_t v___x_2986_; 
v___x_2984_ = lean_array_get_size(v_params_2977_);
v___x_2985_ = lean_array_get(v___x_2970_, v___x_2971_, v_a_2972_);
v___x_2986_ = lean_nat_dec_eq(v___x_2984_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
lean_dec(v___x_2985_);
lean_dec_ref(v_body_2978_);
lean_dec_ref(v_params_2977_);
lean_dec_ref(v___f_2975_);
lean_dec(v_val_2974_);
lean_dec_ref(v_preDefs_2973_);
lean_dec(v_a_2972_);
lean_dec_ref(v___x_2971_);
v___x_2987_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3);
v___x_2988_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_2987_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
return v___x_2988_;
}
else
{
lean_object* v___f_2989_; uint8_t v___x_2990_; lean_object* v___x_2991_; 
v___f_2989_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2989_, 0, v_preDefs_2973_);
lean_closure_set(v___f_2989_, 1, v___x_2971_);
lean_closure_set(v___f_2989_, 2, v_val_2974_);
lean_closure_set(v___f_2989_, 3, v_a_2972_);
lean_closure_set(v___f_2989_, 4, v_params_2977_);
lean_closure_set(v___f_2989_, 5, v___x_2984_);
lean_closure_set(v___f_2989_, 6, v___x_2985_);
v___x_2990_ = 0;
v___x_2991_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_body_2978_, v___f_2989_, v___f_2975_, v___x_2990_, v___x_2986_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2998_; 
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_2998_ == 0)
{
lean_object* v_unused_2999_; 
v_unused_2999_ = lean_ctor_get(v___x_2991_, 0);
lean_dec(v_unused_2999_);
v___x_2993_ = v___x_2991_;
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
else
{
lean_dec(v___x_2991_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_2976_);
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2976_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
v_a_3000_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2991_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2991_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object* v___x_3008_, lean_object* v___x_3009_, lean_object* v_a_3010_, lean_object* v_preDefs_3011_, lean_object* v_val_3012_, lean_object* v___f_3013_, lean_object* v___x_3014_, lean_object* v_params_3015_, lean_object* v_body_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_){
_start:
{
lean_object* v_res_3022_; 
v_res_3022_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(v___x_3008_, v___x_3009_, v_a_3010_, v_preDefs_3011_, v_val_3012_, v___f_3013_, v___x_3014_, v_params_3015_, v_body_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
lean_dec(v___y_3018_);
lean_dec_ref(v___y_3017_);
lean_dec(v___x_3008_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object* v_e_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3029_, 0, v_e_3023_);
v___x_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object* v_e_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(v_e_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object* v___x_3039_, lean_object* v_preDefs_3040_, lean_object* v_val_3041_, lean_object* v_upperBound_3042_, lean_object* v_a_3043_, lean_object* v_b_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
uint8_t v___x_3050_; 
v___x_3050_ = lean_nat_dec_lt(v_a_3043_, v_upperBound_3042_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; 
lean_dec(v_a_3043_);
lean_dec(v_val_3041_);
lean_dec_ref(v_preDefs_3040_);
lean_dec_ref(v___x_3039_);
v___x_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3051_, 0, v_b_3044_);
return v___x_3051_;
}
else
{
lean_object* v___x_3052_; lean_object* v_value_3053_; lean_object* v___f_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___f_3057_; uint8_t v___x_3058_; lean_object* v___x_3059_; 
v___x_3052_ = lean_array_fget_borrowed(v_preDefs_3040_, v_a_3043_);
v_value_3053_ = lean_ctor_get(v___x_3052_, 7);
v___f_3054_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0));
v___x_3055_ = lean_unsigned_to_nat(0u);
v___x_3056_ = lean_box(0);
lean_inc(v_val_3041_);
lean_inc_ref(v_preDefs_3040_);
lean_inc(v_a_3043_);
lean_inc_ref(v___x_3039_);
v___f_3057_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_3057_, 0, v___x_3055_);
lean_closure_set(v___f_3057_, 1, v___x_3039_);
lean_closure_set(v___f_3057_, 2, v_a_3043_);
lean_closure_set(v___f_3057_, 3, v_preDefs_3040_);
lean_closure_set(v___f_3057_, 4, v_val_3041_);
lean_closure_set(v___f_3057_, 5, v___f_3054_);
lean_closure_set(v___f_3057_, 6, v___x_3056_);
v___x_3058_ = 0;
lean_inc_ref(v_value_3053_);
v___x_3059_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_3053_, v___f_3057_, v___x_3058_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
lean_dec_ref_known(v___x_3059_, 1);
v___x_3060_ = lean_unsigned_to_nat(1u);
v___x_3061_ = lean_nat_add(v_a_3043_, v___x_3060_);
lean_dec(v_a_3043_);
v_a_3043_ = v___x_3061_;
v_b_3044_ = v___x_3056_;
goto _start;
}
else
{
lean_dec(v_a_3043_);
lean_dec(v_val_3041_);
lean_dec_ref(v_preDefs_3040_);
lean_dec_ref(v___x_3039_);
return v___x_3059_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object* v___x_3063_, lean_object* v_preDefs_3064_, lean_object* v_val_3065_, lean_object* v_upperBound_3066_, lean_object* v_a_3067_, lean_object* v_b_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3063_, v_preDefs_3064_, v_val_3065_, v_upperBound_3066_, v_a_3067_, v_b_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v_upperBound_3066_);
return v_res_3074_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = ((lean_object*)(l_Lean_Elab_getFixedParamsInfo___closed__0));
v___x_3077_ = l_Lean_stringToMessageData(v___x_3076_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_){
_start:
{
size_t v_sz_3084_; size_t v___x_3085_; lean_object* v___x_3086_; 
v_sz_3084_ = lean_array_size(v_preDefs_3078_);
v___x_3085_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3078_);
v___x_3086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_3084_, v___x_3085_, v_preDefs_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v_a_3087_; size_t v_sz_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v_a_3087_ = lean_ctor_get(v___x_3086_, 0);
lean_inc_n(v_a_3087_, 2);
lean_dec_ref_known(v___x_3086_, 1);
v_sz_3088_ = lean_array_size(v_a_3087_);
v___x_3089_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_3088_, v___x_3085_, v_a_3087_);
v___x_3090_ = l_Lean_Elab_FixedParams_Info_init(v_a_3087_);
v___x_3091_ = lean_st_mk_ref(v___x_3090_);
v___x_3092_ = lean_st_ref_take(v___x_3091_);
v___x_3093_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_3092_);
v___x_3094_ = lean_st_ref_put(v___x_3091_, v___x_3093_);
v___x_3095_ = lean_array_get_size(v_preDefs_3078_);
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = lean_box(0);
lean_inc(v___x_3091_);
v___x_3098_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3089_, v_preDefs_3078_, v___x_3091_, v___x_3095_, v___x_3096_, v___x_3097_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3138_; 
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3138_ == 0)
{
lean_object* v_unused_3139_; 
v_unused_3139_ = lean_ctor_get(v___x_3098_, 0);
lean_dec(v_unused_3139_);
v___x_3100_ = v___x_3098_;
v_isShared_3101_ = v_isSharedCheck_3138_;
goto v_resetjp_3099_;
}
else
{
lean_dec(v___x_3098_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3138_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3102_; lean_object* v_toCold_3103_; lean_object* v_options_3104_; uint8_t v_hasTrace_3105_; 
v___x_3102_ = lean_st_ref_get(v___x_3091_);
lean_dec(v___x_3091_);
v_toCold_3103_ = lean_ctor_get(v_a_3081_, 0);
v_options_3104_ = lean_ctor_get(v_toCold_3103_, 2);
v_hasTrace_3105_ = lean_ctor_get_uint8(v_options_3104_, sizeof(void*)*1);
if (v_hasTrace_3105_ == 0)
{
lean_object* v___x_3107_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 0, v___x_3102_);
v___x_3107_ = v___x_3100_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v___x_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; uint8_t v___x_3112_; 
v_inheritedTraceOptions_3109_ = lean_ctor_get(v_toCold_3103_, 11);
v___x_3110_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_3111_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_3112_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3109_, v_options_3104_, v___x_3111_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3114_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 0, v___x_3102_);
v___x_3114_ = v___x_3100_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3102_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
else
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
lean_del_object(v___x_3100_);
v___x_3116_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_3102_);
v___x_3117_ = l_Lean_Elab_FixedParams_Info_format(v___x_3102_);
v___x_3118_ = l_Std_Format_indentD(v___x_3117_);
v___x_3119_ = l_Lean_MessageData_ofFormat(v___x_3118_);
v___x_3120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3116_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
v___x_3121_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_3110_, v___x_3120_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; 
v_unused_3129_ = lean_ctor_get(v___x_3121_, 0);
lean_dec(v_unused_3129_);
v___x_3123_ = v___x_3121_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_dec(v___x_3121_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
lean_ctor_set(v___x_3123_, 0, v___x_3102_);
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3102_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_dec(v___x_3102_);
v_a_3130_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3121_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3121_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v___x_3091_);
v_a_3140_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3098_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3098_);
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
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec_ref(v_preDefs_3078_);
v_a_3148_ = lean_ctor_get(v___x_3086_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3086_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3086_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3086_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3156_, v_a_3157_, v_a_3158_, v_a_3159_, v_a_3160_);
lean_dec(v_a_3160_);
lean_dec_ref(v_a_3159_);
lean_dec(v_a_3158_);
lean_dec_ref(v_a_3157_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_val_3163_, lean_object* v_val_3164_, lean_object* v_next_3165_, lean_object* v_next_3166_, lean_object* v___x_3167_, lean_object* v___x_3168_, lean_object* v_upperBound_3169_, lean_object* v_params_3170_, lean_object* v___x_3171_, lean_object* v_inst_3172_, lean_object* v_R_3173_, lean_object* v_a_3174_, uint8_t v_b_3175_, lean_object* v_c_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v___x_3182_; 
v___x_3182_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_3163_, v_val_3164_, v_next_3165_, v_next_3166_, v___x_3167_, v___x_3168_, v_upperBound_3169_, v_params_3170_, v___x_3171_, v_a_3174_, v_b_3175_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_val_3183_ = _args[0];
lean_object* v_val_3184_ = _args[1];
lean_object* v_next_3185_ = _args[2];
lean_object* v_next_3186_ = _args[3];
lean_object* v___x_3187_ = _args[4];
lean_object* v___x_3188_ = _args[5];
lean_object* v_upperBound_3189_ = _args[6];
lean_object* v_params_3190_ = _args[7];
lean_object* v___x_3191_ = _args[8];
lean_object* v_inst_3192_ = _args[9];
lean_object* v_R_3193_ = _args[10];
lean_object* v_a_3194_ = _args[11];
lean_object* v_b_3195_ = _args[12];
lean_object* v_c_3196_ = _args[13];
lean_object* v___y_3197_ = _args[14];
lean_object* v___y_3198_ = _args[15];
lean_object* v___y_3199_ = _args[16];
lean_object* v___y_3200_ = _args[17];
lean_object* v___y_3201_ = _args[18];
_start:
{
uint8_t v_b_boxed_3202_; lean_object* v_res_3203_; 
v_b_boxed_3202_ = lean_unbox(v_b_3195_);
v_res_3203_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_val_3183_, v_val_3184_, v_next_3185_, v_next_3186_, v___x_3187_, v___x_3188_, v_upperBound_3189_, v_params_3190_, v___x_3191_, v_inst_3192_, v_R_3193_, v_a_3194_, v_b_boxed_3202_, v_c_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
lean_dec_ref(v_params_3190_);
lean_dec(v_upperBound_3189_);
lean_dec(v___x_3188_);
lean_dec(v___x_3187_);
lean_dec(v_next_3186_);
lean_dec(v_val_3184_);
lean_dec(v_val_3183_);
return v_res_3203_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_val_3204_, lean_object* v_val_3205_, lean_object* v_upperBound_3206_, lean_object* v_args_3207_, lean_object* v_e_3208_, lean_object* v_next_3209_, lean_object* v_params_3210_, lean_object* v___x_3211_, lean_object* v___x_3212_, lean_object* v_inst_3213_, lean_object* v_R_3214_, lean_object* v_a_3215_, lean_object* v_b_3216_, lean_object* v_c_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
lean_object* v___x_3223_; 
v___x_3223_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_3204_, v_val_3205_, v_upperBound_3206_, v_args_3207_, v_e_3208_, v_next_3209_, v_params_3210_, v___x_3211_, v___x_3212_, v_a_3215_, v_b_3216_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object** _args){
lean_object* v_val_3224_ = _args[0];
lean_object* v_val_3225_ = _args[1];
lean_object* v_upperBound_3226_ = _args[2];
lean_object* v_args_3227_ = _args[3];
lean_object* v_e_3228_ = _args[4];
lean_object* v_next_3229_ = _args[5];
lean_object* v_params_3230_ = _args[6];
lean_object* v___x_3231_ = _args[7];
lean_object* v___x_3232_ = _args[8];
lean_object* v_inst_3233_ = _args[9];
lean_object* v_R_3234_ = _args[10];
lean_object* v_a_3235_ = _args[11];
lean_object* v_b_3236_ = _args[12];
lean_object* v_c_3237_ = _args[13];
lean_object* v___y_3238_ = _args[14];
lean_object* v___y_3239_ = _args[15];
lean_object* v___y_3240_ = _args[16];
lean_object* v___y_3241_ = _args[17];
lean_object* v___y_3242_ = _args[18];
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_val_3224_, v_val_3225_, v_upperBound_3226_, v_args_3227_, v_e_3228_, v_next_3229_, v_params_3230_, v___x_3231_, v___x_3232_, v_inst_3233_, v_R_3234_, v_a_3235_, v_b_3236_, v_c_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v___x_3232_);
lean_dec(v___x_3231_);
lean_dec_ref(v_params_3230_);
lean_dec(v_next_3229_);
lean_dec_ref(v_args_3227_);
lean_dec(v_upperBound_3226_);
lean_dec(v_val_3224_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object* v___x_3244_, lean_object* v_preDefs_3245_, lean_object* v_val_3246_, lean_object* v_upperBound_3247_, lean_object* v_inst_3248_, lean_object* v_R_3249_, lean_object* v_a_3250_, lean_object* v_b_3251_, lean_object* v_c_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
lean_object* v___x_3258_; 
v___x_3258_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3244_, v_preDefs_3245_, v_val_3246_, v_upperBound_3247_, v_a_3250_, v_b_3251_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
return v___x_3258_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object* v___x_3259_, lean_object* v_preDefs_3260_, lean_object* v_val_3261_, lean_object* v_upperBound_3262_, lean_object* v_inst_3263_, lean_object* v_R_3264_, lean_object* v_a_3265_, lean_object* v_b_3266_, lean_object* v_c_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(v___x_3259_, v_preDefs_3260_, v_val_3261_, v_upperBound_3262_, v_inst_3263_, v_R_3264_, v_a_3265_, v_b_3266_, v_c_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v_upperBound_3262_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object* v_00_u03b2_3274_, lean_object* v_m_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___redArg(v_m_3275_, v_a_3276_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object* v_00_u03b2_3278_, lean_object* v_m_3279_, lean_object* v_a_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_00_u03b2_3278_, v_m_3279_, v_a_3280_);
lean_dec_ref(v_a_3280_);
lean_dec_ref(v_m_3279_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object* v_upperBound_3282_, lean_object* v___x_3283_, lean_object* v_pre_3284_, lean_object* v_post_3285_, uint8_t v_usedLetOnly_3286_, uint8_t v_skipConstInApp_3287_, uint8_t v_skipInstances_3288_, lean_object* v_postApp_3289_, lean_object* v___x_3290_, lean_object* v_inst_3291_, lean_object* v_R_3292_, lean_object* v_a_3293_, lean_object* v_b_3294_, lean_object* v_c_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v___x_3302_; 
v___x_3302_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_upperBound_3282_, v___x_3283_, v_pre_3284_, v_post_3285_, v_usedLetOnly_3286_, v_skipConstInApp_3287_, v_skipInstances_3288_, v_postApp_3289_, v_a_3293_, v_b_3294_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_);
return v___x_3302_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object** _args){
lean_object* v_upperBound_3303_ = _args[0];
lean_object* v___x_3304_ = _args[1];
lean_object* v_pre_3305_ = _args[2];
lean_object* v_post_3306_ = _args[3];
lean_object* v_usedLetOnly_3307_ = _args[4];
lean_object* v_skipConstInApp_3308_ = _args[5];
lean_object* v_skipInstances_3309_ = _args[6];
lean_object* v_postApp_3310_ = _args[7];
lean_object* v___x_3311_ = _args[8];
lean_object* v_inst_3312_ = _args[9];
lean_object* v_R_3313_ = _args[10];
lean_object* v_a_3314_ = _args[11];
lean_object* v_b_3315_ = _args[12];
lean_object* v_c_3316_ = _args[13];
lean_object* v___y_3317_ = _args[14];
lean_object* v___y_3318_ = _args[15];
lean_object* v___y_3319_ = _args[16];
lean_object* v___y_3320_ = _args[17];
lean_object* v___y_3321_ = _args[18];
lean_object* v___y_3322_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_3323_; uint8_t v_skipConstInApp_boxed_3324_; uint8_t v_skipInstances_boxed_3325_; lean_object* v_res_3326_; 
v_usedLetOnly_boxed_3323_ = lean_unbox(v_usedLetOnly_3307_);
v_skipConstInApp_boxed_3324_ = lean_unbox(v_skipConstInApp_3308_);
v_skipInstances_boxed_3325_ = lean_unbox(v_skipInstances_3309_);
v_res_3326_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(v_upperBound_3303_, v___x_3304_, v_pre_3305_, v_post_3306_, v_usedLetOnly_boxed_3323_, v_skipConstInApp_boxed_3324_, v_skipInstances_boxed_3325_, v_postApp_3310_, v___x_3311_, v_inst_3312_, v_R_3313_, v_a_3314_, v_b_3315_, v_c_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
lean_dec(v___y_3321_);
lean_dec_ref(v___y_3320_);
lean_dec(v___y_3319_);
lean_dec_ref(v___y_3318_);
lean_dec(v___y_3317_);
lean_dec(v___x_3311_);
lean_dec_ref(v___x_3304_);
lean_dec(v_upperBound_3303_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object* v_00_u03b1_3327_, lean_object* v_name_3328_, uint8_t v_bi_3329_, lean_object* v_type_3330_, lean_object* v_k_3331_, uint8_t v_kind_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_3328_, v_bi_3329_, v_type_3330_, v_k_3331_, v_kind_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3340_, lean_object* v_name_3341_, lean_object* v_bi_3342_, lean_object* v_type_3343_, lean_object* v_k_3344_, lean_object* v_kind_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
uint8_t v_bi_boxed_3352_; uint8_t v_kind_boxed_3353_; lean_object* v_res_3354_; 
v_bi_boxed_3352_ = lean_unbox(v_bi_3342_);
v_kind_boxed_3353_ = lean_unbox(v_kind_3345_);
v_res_3354_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(v_00_u03b1_3340_, v_name_3341_, v_bi_boxed_3352_, v_type_3343_, v_k_3344_, v_kind_boxed_3353_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec(v___y_3346_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object* v_00_u03b1_3355_, lean_object* v_name_3356_, lean_object* v_type_3357_, lean_object* v_val_3358_, lean_object* v_k_3359_, uint8_t v_nondep_3360_, uint8_t v_kind_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_){
_start:
{
lean_object* v___x_3368_; 
v___x_3368_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_3356_, v_type_3357_, v_val_3358_, v_k_3359_, v_nondep_3360_, v_kind_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b1_3369_, lean_object* v_name_3370_, lean_object* v_type_3371_, lean_object* v_val_3372_, lean_object* v_k_3373_, lean_object* v_nondep_3374_, lean_object* v_kind_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
uint8_t v_nondep_boxed_3382_; uint8_t v_kind_boxed_3383_; lean_object* v_res_3384_; 
v_nondep_boxed_3382_ = lean_unbox(v_nondep_3374_);
v_kind_boxed_3383_ = lean_unbox(v_kind_3375_);
v_res_3384_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(v_00_u03b1_3369_, v_name_3370_, v_type_3371_, v_val_3372_, v_k_3373_, v_nondep_boxed_3382_, v_kind_boxed_3383_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object* v_00_u03b1_3385_, lean_object* v_ref_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_3386_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b1_3393_, lean_object* v_ref_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(v_00_u03b1_3393_, v_ref_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object* v_00_u03b1_3401_, lean_object* v_x_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v___x_3409_; 
v___x_3409_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object* v_00_u03b1_3410_, lean_object* v_x_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(v_00_u03b1_3410_, v_x_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
lean_dec(v___y_3416_);
lean_dec_ref(v___y_3415_);
lean_dec(v___y_3414_);
lean_dec_ref(v___y_3413_);
lean_dec(v___y_3412_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object* v_00_u03b2_3419_, lean_object* v_m_3420_, lean_object* v_a_3421_, lean_object* v_b_3422_){
_start:
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v_m_3420_, v_a_3421_, v_b_3422_);
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12(lean_object* v_00_u03b2_3424_, lean_object* v_a_3425_, lean_object* v_x_3426_){
_start:
{
lean_object* v___x_3427_; 
v___x_3427_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___redArg(v_a_3425_, v_x_3426_);
return v___x_3427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12___boxed(lean_object* v_00_u03b2_3428_, lean_object* v_a_3429_, lean_object* v_x_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10_spec__12(v_00_u03b2_3428_, v_a_3429_, v_x_3430_);
lean_dec(v_x_3430_);
lean_dec_ref(v_a_3429_);
return v_res_3431_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object* v_00_u03b2_3432_, lean_object* v_a_3433_, lean_object* v_x_3434_){
_start:
{
uint8_t v___x_3435_; 
v___x_3435_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_3433_, v_x_3434_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3436_, lean_object* v_a_3437_, lean_object* v_x_3438_){
_start:
{
uint8_t v_res_3439_; lean_object* v_r_3440_; 
v_res_3439_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(v_00_u03b2_3436_, v_a_3437_, v_x_3438_);
lean_dec(v_x_3438_);
lean_dec_ref(v_a_3437_);
v_r_3440_ = lean_box(v_res_3439_);
return v_r_3440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object* v_00_u03b2_3441_, lean_object* v_data_3442_){
_start:
{
lean_object* v___x_3443_; 
v___x_3443_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_data_3442_);
return v___x_3443_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object* v_00_u03b2_3444_, lean_object* v_a_3445_, lean_object* v_b_3446_, lean_object* v_x_3447_){
_start:
{
lean_object* v___x_3448_; 
v___x_3448_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_3445_, v_b_3446_, v_x_3447_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object* v_00_u03b2_3449_, lean_object* v_i_3450_, lean_object* v_source_3451_, lean_object* v_target_3452_){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v_i_3450_, v_source_3451_, v_target_3452_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object* v_00_u03b2_3454_, lean_object* v_x_3455_, lean_object* v_x_3456_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_x_3455_, v_x_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3471_, lean_object* v_x_3472_){
_start:
{
if (lean_obj_tag(v_x_3471_) == 0)
{
lean_object* v___x_3473_; 
v___x_3473_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_3473_;
}
else
{
lean_object* v_val_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3485_; 
v_val_3474_ = lean_ctor_get(v_x_3471_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_x_3471_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3476_ = v_x_3471_;
v_isShared_3477_ = v_isSharedCheck_3485_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_val_3474_);
lean_dec(v_x_3471_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3485_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3478_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3));
v___x_3479_ = l_Nat_reprFast(v_val_3474_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set_tag(v___x_3476_, 3);
lean_ctor_set(v___x_3476_, 0, v___x_3479_);
v___x_3481_ = v___x_3476_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3482_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3478_);
lean_ctor_set(v___x_3482_, 1, v___x_3481_);
v___x_3483_ = l_Repr_addAppParen(v___x_3482_, v_x_3472_);
return v___x_3483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3486_, lean_object* v_x_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3486_, v_x_3487_);
lean_dec(v_x_3487_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3489_, lean_object* v_x_3490_, lean_object* v_x_3491_){
_start:
{
if (lean_obj_tag(v_x_3491_) == 0)
{
lean_dec(v_x_3489_);
return v_x_3490_;
}
else
{
lean_object* v_head_3492_; lean_object* v_tail_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3504_; 
v_head_3492_ = lean_ctor_get(v_x_3491_, 0);
v_tail_3493_ = lean_ctor_get(v_x_3491_, 1);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_x_3491_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3495_ = v_x_3491_;
v_isShared_3496_ = v_isSharedCheck_3504_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_tail_3493_);
lean_inc(v_head_3492_);
lean_dec(v_x_3491_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3504_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
lean_inc(v_x_3489_);
if (v_isShared_3496_ == 0)
{
lean_ctor_set_tag(v___x_3495_, 5);
lean_ctor_set(v___x_3495_, 1, v_x_3489_);
lean_ctor_set(v___x_3495_, 0, v_x_3490_);
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_x_3490_);
lean_ctor_set(v_reuseFailAlloc_3503_, 1, v_x_3489_);
v___x_3498_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3500_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3492_, v___x_3499_);
v___x_3501_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3498_);
lean_ctor_set(v___x_3501_, 1, v___x_3500_);
v_x_3490_ = v___x_3501_;
v_x_3491_ = v_tail_3493_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3505_, lean_object* v_x_3506_, lean_object* v_x_3507_){
_start:
{
if (lean_obj_tag(v_x_3507_) == 0)
{
lean_dec(v_x_3505_);
return v_x_3506_;
}
else
{
lean_object* v_head_3508_; lean_object* v_tail_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3520_; 
v_head_3508_ = lean_ctor_get(v_x_3507_, 0);
v_tail_3509_ = lean_ctor_get(v_x_3507_, 1);
v_isSharedCheck_3520_ = !lean_is_exclusive(v_x_3507_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3511_ = v_x_3507_;
v_isShared_3512_ = v_isSharedCheck_3520_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_tail_3509_);
lean_inc(v_head_3508_);
lean_dec(v_x_3507_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3520_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3514_; 
lean_inc(v_x_3505_);
if (v_isShared_3512_ == 0)
{
lean_ctor_set_tag(v___x_3511_, 5);
lean_ctor_set(v___x_3511_, 1, v_x_3505_);
lean_ctor_set(v___x_3511_, 0, v_x_3506_);
v___x_3514_ = v___x_3511_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_x_3506_);
lean_ctor_set(v_reuseFailAlloc_3519_, 1, v_x_3505_);
v___x_3514_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3515_ = lean_unsigned_to_nat(0u);
v___x_3516_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3508_, v___x_3515_);
v___x_3517_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3514_);
lean_ctor_set(v___x_3517_, 1, v___x_3516_);
v___x_3518_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3505_, v___x_3517_, v_tail_3509_);
return v___x_3518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3521_){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = lean_unsigned_to_nat(0u);
v___x_3523_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3521_, v___x_3522_);
return v___x_3523_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3524_, lean_object* v_x_3525_){
_start:
{
if (lean_obj_tag(v_x_3524_) == 0)
{
lean_object* v___x_3526_; 
lean_dec(v_x_3525_);
v___x_3526_ = lean_box(0);
return v___x_3526_;
}
else
{
lean_object* v_tail_3527_; 
v_tail_3527_ = lean_ctor_get(v_x_3524_, 1);
if (lean_obj_tag(v_tail_3527_) == 0)
{
lean_object* v_head_3528_; lean_object* v___x_3529_; 
lean_dec(v_x_3525_);
v_head_3528_ = lean_ctor_get(v_x_3524_, 0);
lean_inc(v_head_3528_);
lean_dec_ref_known(v_x_3524_, 2);
v___x_3529_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3528_);
return v___x_3529_;
}
else
{
lean_object* v_head_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
lean_inc(v_tail_3527_);
v_head_3530_ = lean_ctor_get(v_x_3524_, 0);
lean_inc(v_head_3530_);
lean_dec_ref_known(v_x_3524_, 2);
v___x_3531_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3530_);
v___x_3532_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3525_, v___x_3531_, v_tail_3527_);
return v___x_3532_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0));
v___x_3541_ = lean_string_length(v___x_3540_);
return v___x_3541_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3542_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4);
v___x_3543_ = lean_nat_to_int(v___x_3542_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3549_){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; uint8_t v___x_3552_; 
v___x_3550_ = lean_array_get_size(v_xs_3549_);
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_nat_dec_eq(v___x_3550_, v___x_3551_);
if (v___x_3552_ == 0)
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3553_ = lean_array_to_list(v_xs_3549_);
v___x_3554_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3555_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3553_, v___x_3554_);
v___x_3556_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3557_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3558_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
lean_ctor_set(v___x_3558_, 1, v___x_3555_);
v___x_3559_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3560_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3558_);
lean_ctor_set(v___x_3560_, 1, v___x_3559_);
v___x_3561_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3556_);
lean_ctor_set(v___x_3561_, 1, v___x_3560_);
v___x_3562_ = l_Std_Format_fill(v___x_3561_);
return v___x_3562_;
}
else
{
lean_object* v___x_3563_; 
lean_dec_ref(v_xs_3549_);
v___x_3563_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3563_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3564_, lean_object* v_x_3565_, lean_object* v_x_3566_){
_start:
{
if (lean_obj_tag(v_x_3566_) == 0)
{
lean_dec(v_x_3564_);
return v_x_3565_;
}
else
{
lean_object* v_head_3567_; lean_object* v_tail_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3578_; 
v_head_3567_ = lean_ctor_get(v_x_3566_, 0);
v_tail_3568_ = lean_ctor_get(v_x_3566_, 1);
v_isSharedCheck_3578_ = !lean_is_exclusive(v_x_3566_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3570_ = v_x_3566_;
v_isShared_3571_ = v_isSharedCheck_3578_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_tail_3568_);
lean_inc(v_head_3567_);
lean_dec(v_x_3566_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3578_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
lean_inc(v_x_3564_);
if (v_isShared_3571_ == 0)
{
lean_ctor_set_tag(v___x_3570_, 5);
lean_ctor_set(v___x_3570_, 1, v_x_3564_);
lean_ctor_set(v___x_3570_, 0, v_x_3565_);
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_x_3565_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v_x_3564_);
v___x_3573_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3574_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3567_);
v___x_3575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v_x_3565_ = v___x_3575_;
v_x_3566_ = v_tail_3568_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3579_, lean_object* v_x_3580_){
_start:
{
if (lean_obj_tag(v_x_3579_) == 0)
{
lean_object* v___x_3581_; 
lean_dec(v_x_3580_);
v___x_3581_ = lean_box(0);
return v___x_3581_;
}
else
{
lean_object* v_tail_3582_; 
v_tail_3582_ = lean_ctor_get(v_x_3579_, 1);
if (lean_obj_tag(v_tail_3582_) == 0)
{
lean_object* v_head_3583_; lean_object* v___x_3584_; 
lean_dec(v_x_3580_);
v_head_3583_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_head_3583_);
lean_dec_ref_known(v_x_3579_, 2);
v___x_3584_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3583_);
return v___x_3584_;
}
else
{
lean_object* v_head_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
lean_inc(v_tail_3582_);
v_head_3585_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_head_3585_);
lean_dec_ref_known(v_x_3579_, 2);
v___x_3586_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3585_);
v___x_3587_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3580_, v___x_3586_, v_tail_3582_);
return v___x_3587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3588_){
_start:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; uint8_t v___x_3591_; 
v___x_3589_ = lean_array_get_size(v_xs_3588_);
v___x_3590_ = lean_unsigned_to_nat(0u);
v___x_3591_ = lean_nat_dec_eq(v___x_3589_, v___x_3590_);
if (v___x_3591_ == 0)
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3592_ = lean_array_to_list(v_xs_3588_);
v___x_3593_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3594_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3592_, v___x_3593_);
v___x_3595_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3596_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
lean_ctor_set(v___x_3597_, 1, v___x_3594_);
v___x_3598_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3597_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3595_);
lean_ctor_set(v___x_3600_, 1, v___x_3599_);
v___x_3601_ = l_Std_Format_fill(v___x_3600_);
return v___x_3601_;
}
else
{
lean_object* v___x_3602_; 
lean_dec_ref(v_xs_3588_);
v___x_3602_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3602_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3603_, lean_object* v_x_3604_, lean_object* v_x_3605_){
_start:
{
if (lean_obj_tag(v_x_3605_) == 0)
{
lean_dec(v_x_3603_);
return v_x_3604_;
}
else
{
lean_object* v_head_3606_; lean_object* v_tail_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3618_; 
v_head_3606_ = lean_ctor_get(v_x_3605_, 0);
v_tail_3607_ = lean_ctor_get(v_x_3605_, 1);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_x_3605_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3609_ = v_x_3605_;
v_isShared_3610_ = v_isSharedCheck_3618_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_tail_3607_);
lean_inc(v_head_3606_);
lean_dec(v_x_3605_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3618_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
lean_inc(v_x_3603_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set_tag(v___x_3609_, 5);
lean_ctor_set(v___x_3609_, 1, v_x_3603_);
lean_ctor_set(v___x_3609_, 0, v_x_3604_);
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v_x_3604_);
lean_ctor_set(v_reuseFailAlloc_3617_, 1, v_x_3603_);
v___x_3612_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3613_ = l_Nat_reprFast(v_head_3606_);
v___x_3614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
v___x_3615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3612_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
v_x_3604_ = v___x_3615_;
v_x_3605_ = v_tail_3607_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3619_, lean_object* v_x_3620_, lean_object* v_x_3621_){
_start:
{
if (lean_obj_tag(v_x_3621_) == 0)
{
lean_dec(v_x_3619_);
return v_x_3620_;
}
else
{
lean_object* v_head_3622_; lean_object* v_tail_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3634_; 
v_head_3622_ = lean_ctor_get(v_x_3621_, 0);
v_tail_3623_ = lean_ctor_get(v_x_3621_, 1);
v_isSharedCheck_3634_ = !lean_is_exclusive(v_x_3621_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3625_ = v_x_3621_;
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_tail_3623_);
lean_inc(v_head_3622_);
lean_dec(v_x_3621_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
lean_inc(v_x_3619_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set_tag(v___x_3625_, 5);
lean_ctor_set(v___x_3625_, 1, v_x_3619_);
lean_ctor_set(v___x_3625_, 0, v_x_3620_);
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_x_3620_);
lean_ctor_set(v_reuseFailAlloc_3633_, 1, v_x_3619_);
v___x_3628_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3629_ = l_Nat_reprFast(v_head_3622_);
v___x_3630_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
v___x_3631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3628_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
v___x_3632_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3619_, v___x_3631_, v_tail_3623_);
return v___x_3632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3635_){
_start:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3636_ = l_Nat_reprFast(v___y_3635_);
v___x_3637_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3636_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3638_, lean_object* v_x_3639_){
_start:
{
if (lean_obj_tag(v_x_3638_) == 0)
{
lean_object* v___x_3640_; 
lean_dec(v_x_3639_);
v___x_3640_ = lean_box(0);
return v___x_3640_;
}
else
{
lean_object* v_tail_3641_; 
v_tail_3641_ = lean_ctor_get(v_x_3638_, 1);
if (lean_obj_tag(v_tail_3641_) == 0)
{
lean_object* v_head_3642_; lean_object* v___x_3643_; 
lean_dec(v_x_3639_);
v_head_3642_ = lean_ctor_get(v_x_3638_, 0);
lean_inc(v_head_3642_);
lean_dec_ref_known(v_x_3638_, 2);
v___x_3643_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3642_);
return v___x_3643_;
}
else
{
lean_object* v_head_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
lean_inc(v_tail_3641_);
v_head_3644_ = lean_ctor_get(v_x_3638_, 0);
lean_inc(v_head_3644_);
lean_dec_ref_known(v_x_3638_, 2);
v___x_3645_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3644_);
v___x_3646_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3639_, v___x_3645_, v_tail_3641_);
return v___x_3646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3647_){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; uint8_t v___x_3650_; 
v___x_3648_ = lean_array_get_size(v_xs_3647_);
v___x_3649_ = lean_unsigned_to_nat(0u);
v___x_3650_ = lean_nat_dec_eq(v___x_3648_, v___x_3649_);
if (v___x_3650_ == 0)
{
lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
v___x_3651_ = lean_array_to_list(v_xs_3647_);
v___x_3652_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3653_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3651_, v___x_3652_);
v___x_3654_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3655_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3656_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3655_);
lean_ctor_set(v___x_3656_, 1, v___x_3653_);
v___x_3657_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3656_);
lean_ctor_set(v___x_3658_, 1, v___x_3657_);
v___x_3659_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3654_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
v___x_3660_ = l_Std_Format_fill(v___x_3659_);
return v___x_3660_;
}
else
{
lean_object* v___x_3661_; 
lean_dec_ref(v_xs_3647_);
v___x_3661_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3661_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3662_, lean_object* v_x_3663_, lean_object* v_x_3664_){
_start:
{
if (lean_obj_tag(v_x_3664_) == 0)
{
lean_dec(v_x_3662_);
return v_x_3663_;
}
else
{
lean_object* v_head_3665_; lean_object* v_tail_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3676_; 
v_head_3665_ = lean_ctor_get(v_x_3664_, 0);
v_tail_3666_ = lean_ctor_get(v_x_3664_, 1);
v_isSharedCheck_3676_ = !lean_is_exclusive(v_x_3664_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3668_ = v_x_3664_;
v_isShared_3669_ = v_isSharedCheck_3676_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_tail_3666_);
lean_inc(v_head_3665_);
lean_dec(v_x_3664_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3676_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
lean_inc(v_x_3662_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set_tag(v___x_3668_, 5);
lean_ctor_set(v___x_3668_, 1, v_x_3662_);
lean_ctor_set(v___x_3668_, 0, v_x_3663_);
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_x_3663_);
lean_ctor_set(v_reuseFailAlloc_3675_, 1, v_x_3662_);
v___x_3671_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3665_);
v___x_3673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3671_);
lean_ctor_set(v___x_3673_, 1, v___x_3672_);
v_x_3663_ = v___x_3673_;
v_x_3664_ = v_tail_3666_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3677_, lean_object* v_x_3678_){
_start:
{
if (lean_obj_tag(v_x_3677_) == 0)
{
lean_object* v___x_3679_; 
lean_dec(v_x_3678_);
v___x_3679_ = lean_box(0);
return v___x_3679_;
}
else
{
lean_object* v_tail_3680_; 
v_tail_3680_ = lean_ctor_get(v_x_3677_, 1);
if (lean_obj_tag(v_tail_3680_) == 0)
{
lean_object* v_head_3681_; lean_object* v___x_3682_; 
lean_dec(v_x_3678_);
v_head_3681_ = lean_ctor_get(v_x_3677_, 0);
lean_inc(v_head_3681_);
lean_dec_ref_known(v_x_3677_, 2);
v___x_3682_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3681_);
return v___x_3682_;
}
else
{
lean_object* v_head_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
lean_inc(v_tail_3680_);
v_head_3683_ = lean_ctor_get(v_x_3677_, 0);
lean_inc(v_head_3683_);
lean_dec_ref_known(v_x_3677_, 2);
v___x_3684_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3683_);
v___x_3685_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3678_, v___x_3684_, v_tail_3680_);
return v___x_3685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3686_){
_start:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; uint8_t v___x_3689_; 
v___x_3687_ = lean_array_get_size(v_xs_3686_);
v___x_3688_ = lean_unsigned_to_nat(0u);
v___x_3689_ = lean_nat_dec_eq(v___x_3687_, v___x_3688_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; 
v___x_3690_ = lean_array_to_list(v_xs_3686_);
v___x_3691_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3692_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3690_, v___x_3691_);
v___x_3693_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3694_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3695_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
lean_ctor_set(v___x_3695_, 1, v___x_3692_);
v___x_3696_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3697_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3697_, 0, v___x_3695_);
lean_ctor_set(v___x_3697_, 1, v___x_3696_);
v___x_3698_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3693_);
lean_ctor_set(v___x_3698_, 1, v___x_3697_);
v___x_3699_ = l_Std_Format_fill(v___x_3698_);
return v___x_3699_;
}
else
{
lean_object* v___x_3700_; 
lean_dec_ref(v_xs_3686_);
v___x_3700_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3700_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3701_, lean_object* v_x_3702_, lean_object* v_x_3703_){
_start:
{
if (lean_obj_tag(v_x_3703_) == 0)
{
lean_dec(v_x_3701_);
return v_x_3702_;
}
else
{
lean_object* v_head_3704_; lean_object* v_tail_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3715_; 
v_head_3704_ = lean_ctor_get(v_x_3703_, 0);
v_tail_3705_ = lean_ctor_get(v_x_3703_, 1);
v_isSharedCheck_3715_ = !lean_is_exclusive(v_x_3703_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3707_ = v_x_3703_;
v_isShared_3708_ = v_isSharedCheck_3715_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_tail_3705_);
lean_inc(v_head_3704_);
lean_dec(v_x_3703_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3715_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
lean_inc(v_x_3701_);
if (v_isShared_3708_ == 0)
{
lean_ctor_set_tag(v___x_3707_, 5);
lean_ctor_set(v___x_3707_, 1, v_x_3701_);
lean_ctor_set(v___x_3707_, 0, v_x_3702_);
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_x_3702_);
lean_ctor_set(v_reuseFailAlloc_3714_, 1, v_x_3701_);
v___x_3710_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3711_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3704_);
v___x_3712_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3710_);
lean_ctor_set(v___x_3712_, 1, v___x_3711_);
v_x_3702_ = v___x_3712_;
v_x_3703_ = v_tail_3705_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3716_, lean_object* v_x_3717_){
_start:
{
if (lean_obj_tag(v_x_3716_) == 0)
{
lean_object* v___x_3718_; 
lean_dec(v_x_3717_);
v___x_3718_ = lean_box(0);
return v___x_3718_;
}
else
{
lean_object* v_tail_3719_; 
v_tail_3719_ = lean_ctor_get(v_x_3716_, 1);
if (lean_obj_tag(v_tail_3719_) == 0)
{
lean_object* v_head_3720_; lean_object* v___x_3721_; 
lean_dec(v_x_3717_);
v_head_3720_ = lean_ctor_get(v_x_3716_, 0);
lean_inc(v_head_3720_);
lean_dec_ref_known(v_x_3716_, 2);
v___x_3721_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3720_);
return v___x_3721_;
}
else
{
lean_object* v_head_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
lean_inc(v_tail_3719_);
v_head_3722_ = lean_ctor_get(v_x_3716_, 0);
lean_inc(v_head_3722_);
lean_dec_ref_known(v_x_3716_, 2);
v___x_3723_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3722_);
v___x_3724_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3717_, v___x_3723_, v_tail_3719_);
return v___x_3724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3725_){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; 
v___x_3726_ = lean_array_get_size(v_xs_3725_);
v___x_3727_ = lean_unsigned_to_nat(0u);
v___x_3728_ = lean_nat_dec_eq(v___x_3726_, v___x_3727_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v___x_3729_ = lean_array_to_list(v_xs_3725_);
v___x_3730_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3731_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3729_, v___x_3730_);
v___x_3732_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3733_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3733_);
lean_ctor_set(v___x_3734_, 1, v___x_3731_);
v___x_3735_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3732_);
lean_ctor_set(v___x_3737_, 1, v___x_3736_);
v___x_3738_ = l_Std_Format_fill(v___x_3737_);
return v___x_3738_;
}
else
{
lean_object* v___x_3739_; 
lean_dec_ref(v_xs_3725_);
v___x_3739_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3739_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3753_ = lean_unsigned_to_nat(12u);
v___x_3754_ = lean_nat_to_int(v___x_3753_);
return v___x_3754_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3758_ = lean_unsigned_to_nat(9u);
v___x_3759_ = lean_nat_to_int(v___x_3758_);
return v___x_3759_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_unsigned_to_nat(11u);
v___x_3764_ = lean_nat_to_int(v___x_3763_);
return v___x_3764_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0));
v___x_3767_ = lean_string_length(v___x_3766_);
return v___x_3767_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3768_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3769_ = lean_nat_to_int(v___x_3768_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3774_){
_start:
{
lean_object* v_numFixed_3775_; lean_object* v_perms_3776_; lean_object* v_revDeps_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v_numFixed_3775_ = lean_ctor_get(v_x_3774_, 0);
lean_inc(v_numFixed_3775_);
v_perms_3776_ = lean_ctor_get(v_x_3774_, 1);
lean_inc_ref(v_perms_3776_);
v_revDeps_3777_ = lean_ctor_get(v_x_3774_, 2);
lean_inc_ref(v_revDeps_3777_);
lean_dec_ref(v_x_3774_);
v___x_3778_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5));
v___x_3779_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6));
v___x_3780_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3781_ = l_Nat_reprFast(v_numFixed_3775_);
v___x_3782_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3780_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = 0;
v___x_3785_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3785_, 0, v___x_3783_);
lean_ctor_set_uint8(v___x_3785_, sizeof(void*)*1, v___x_3784_);
v___x_3786_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3779_);
lean_ctor_set(v___x_3786_, 1, v___x_3785_);
v___x_3787_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2));
v___x_3788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3786_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = lean_box(1);
v___x_3790_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3788_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
v___x_3791_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9));
v___x_3792_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3790_);
lean_ctor_set(v___x_3792_, 1, v___x_3791_);
v___x_3793_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
lean_ctor_set(v___x_3793_, 1, v___x_3778_);
v___x_3794_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3795_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3776_);
v___x_3796_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3794_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
lean_ctor_set_uint8(v___x_3797_, sizeof(void*)*1, v___x_3784_);
v___x_3798_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3793_);
lean_ctor_set(v___x_3798_, 1, v___x_3797_);
v___x_3799_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3798_);
lean_ctor_set(v___x_3799_, 1, v___x_3787_);
v___x_3800_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3799_);
lean_ctor_set(v___x_3800_, 1, v___x_3789_);
v___x_3801_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12));
v___x_3802_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3800_);
lean_ctor_set(v___x_3802_, 1, v___x_3801_);
v___x_3803_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3802_);
lean_ctor_set(v___x_3803_, 1, v___x_3778_);
v___x_3804_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3805_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3777_);
v___x_3806_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3804_);
lean_ctor_set(v___x_3806_, 1, v___x_3805_);
v___x_3807_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
lean_ctor_set_uint8(v___x_3807_, sizeof(void*)*1, v___x_3784_);
v___x_3808_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3803_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3810_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17));
v___x_3811_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
lean_ctor_set(v___x_3811_, 1, v___x_3808_);
v___x_3812_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18));
v___x_3813_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3811_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
v___x_3814_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3809_);
lean_ctor_set(v___x_3814_, 1, v___x_3813_);
v___x_3815_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3815_, 0, v___x_3814_);
lean_ctor_set_uint8(v___x_3815_, sizeof(void*)*1, v___x_3784_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3816_, lean_object* v_prec_3817_){
_start:
{
lean_object* v___x_3818_; 
v___x_3818_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3816_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3819_, lean_object* v_prec_3820_){
_start:
{
lean_object* v_res_3821_; 
v_res_3821_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3819_, v_prec_3820_);
lean_dec(v_prec_3820_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v___f_3830_; lean_object* v___x_5728__overap_3831_; lean_object* v___x_3832_; 
v___f_3830_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5728__overap_3831_ = lean_panic_fn_borrowed(v___f_3830_, v_msg_3824_);
lean_inc(v___y_3828_);
lean_inc_ref(v___y_3827_);
lean_inc(v___y_3826_);
lean_inc_ref(v___y_3825_);
v___x_3832_ = lean_apply_5(v___x_5728__overap_3831_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_, lean_box(0));
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_){
_start:
{
lean_object* v___f_3846_; lean_object* v___x_5738__overap_3847_; lean_object* v___x_3848_; 
v___f_3846_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5738__overap_3847_ = lean_panic_fn_borrowed(v___f_3846_, v_msg_3840_);
lean_inc(v___y_3844_);
lean_inc_ref(v___y_3843_);
lean_inc(v___y_3842_);
lean_inc_ref(v___y_3841_);
v___x_3848_ = lean_apply_5(v___x_5738__overap_3847_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, lean_box(0));
return v___x_3848_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
lean_object* v___f_3862_; lean_object* v___x_5748__overap_3863_; lean_object* v___x_3864_; 
v___f_3862_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5748__overap_3863_ = lean_panic_fn_borrowed(v___f_3862_, v_msg_3856_);
lean_inc(v___y_3860_);
lean_inc_ref(v___y_3859_);
lean_inc(v___y_3858_);
lean_inc_ref(v___y_3857_);
v___x_3864_ = lean_apply_5(v___x_5748__overap_3863_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_, lean_box(0));
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
return v_res_3871_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1));
v___x_3875_ = lean_unsigned_to_nat(12u);
v___x_3876_ = lean_unsigned_to_nat(294u);
v___x_3877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3878_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3879_ = l_mkPanicMessageWithDecl(v___x_3878_, v___x_3877_, v___x_3876_, v___x_3875_, v___x_3874_);
return v___x_3879_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3));
v___x_3882_ = lean_unsigned_to_nat(12u);
v___x_3883_ = lean_unsigned_to_nat(297u);
v___x_3884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3885_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3886_ = l_mkPanicMessageWithDecl(v___x_3885_, v___x_3884_, v___x_3883_, v___x_3882_, v___x_3881_);
return v___x_3886_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3887_, lean_object* v_as_3888_, size_t v_sz_3889_, size_t v_i_3890_, lean_object* v_b_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_){
_start:
{
lean_object* v_a_3898_; uint8_t v___x_3902_; 
v___x_3902_ = lean_usize_dec_lt(v_i_3890_, v_sz_3889_);
if (v___x_3902_ == 0)
{
lean_object* v___x_3903_; 
v___x_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3903_, 0, v_b_3891_);
return v___x_3903_;
}
else
{
lean_object* v_a_3904_; 
v_a_3904_ = lean_array_uget_borrowed(v_as_3888_, v_i_3890_);
if (lean_obj_tag(v_a_3904_) == 1)
{
lean_object* v_val_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v_val_3905_ = lean_ctor_get(v_a_3904_, 0);
v___x_3906_ = lean_box(0);
v___x_3907_ = lean_unsigned_to_nat(0u);
v___x_3908_ = lean_array_get_borrowed(v___x_3906_, v_val_3905_, v___x_3907_);
if (lean_obj_tag(v___x_3908_) == 1)
{
lean_object* v_val_3909_; lean_object* v___x_3910_; 
v_val_3909_ = lean_ctor_get(v___x_3908_, 0);
v___x_3910_ = lean_array_get_borrowed(v___x_3906_, v___x_3887_, v_val_3909_);
if (lean_obj_tag(v___x_3910_) == 0)
{
lean_object* v___x_3911_; lean_object* v___x_3912_; 
lean_dec_ref(v_b_3891_);
v___x_3911_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3912_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3911_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3922_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3922_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3915_ = v___x_3912_;
v_isShared_3916_ = v_isSharedCheck_3922_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___x_3912_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3922_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
if (lean_obj_tag(v_a_3913_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3919_; 
v_a_3917_ = lean_ctor_get(v_a_3913_, 0);
lean_inc(v_a_3917_);
lean_dec_ref_known(v_a_3913_, 1);
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v_a_3917_);
v___x_3919_ = v___x_3915_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
else
{
lean_object* v_a_3921_; 
lean_del_object(v___x_3915_);
v_a_3921_ = lean_ctor_get(v_a_3913_, 0);
lean_inc(v_a_3921_);
lean_dec_ref_known(v_a_3913_, 1);
v_a_3898_ = v_a_3921_;
goto v___jp_3897_;
}
}
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
v_a_3923_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3912_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3912_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
}
else
{
lean_object* v___x_3931_; 
lean_inc_ref(v___x_3910_);
v___x_3931_ = lean_array_push(v_b_3891_, v___x_3910_);
v_a_3898_ = v___x_3931_;
goto v___jp_3897_;
}
}
else
{
lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3932_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3933_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_3932_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3933_) == 0)
{
lean_dec_ref_known(v___x_3933_, 1);
v_a_3898_ = v_b_3891_;
goto v___jp_3897_;
}
else
{
lean_object* v_a_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3941_; 
lean_dec_ref(v_b_3891_);
v_a_3934_ = lean_ctor_get(v___x_3933_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v___x_3933_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3936_ = v___x_3933_;
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_a_3934_);
lean_dec(v___x_3933_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3939_; 
if (v_isShared_3937_ == 0)
{
v___x_3939_ = v___x_3936_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_a_3934_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
}
}
}
else
{
lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3942_ = lean_box(0);
v___x_3943_ = lean_array_push(v_b_3891_, v___x_3942_);
v_a_3898_ = v___x_3943_;
goto v___jp_3897_;
}
}
v___jp_3897_:
{
size_t v___x_3899_; size_t v___x_3900_; 
v___x_3899_ = ((size_t)1ULL);
v___x_3900_ = lean_usize_add(v_i_3890_, v___x_3899_);
v_i_3890_ = v___x_3900_;
v_b_3891_ = v_a_3898_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3944_, lean_object* v_as_3945_, lean_object* v_sz_3946_, lean_object* v_i_3947_, lean_object* v_b_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_){
_start:
{
size_t v_sz_boxed_3954_; size_t v_i_boxed_3955_; lean_object* v_res_3956_; 
v_sz_boxed_3954_ = lean_unbox_usize(v_sz_3946_);
lean_dec(v_sz_3946_);
v_i_boxed_3955_ = lean_unbox_usize(v_i_3947_);
lean_dec(v_i_3947_);
v_res_3956_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3944_, v_as_3945_, v_sz_boxed_3954_, v_i_boxed_3955_, v_b_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
lean_dec(v___y_3950_);
lean_dec_ref(v___y_3949_);
lean_dec_ref(v_as_3945_);
lean_dec_ref(v___x_3944_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3959_, lean_object* v___x_3960_, lean_object* v___x_3961_, lean_object* v_a_3962_, lean_object* v_b_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
uint8_t v___x_3969_; 
v___x_3969_ = lean_nat_dec_lt(v_a_3962_, v_upperBound_3959_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; 
lean_dec(v_a_3962_);
v___x_3970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3970_, 0, v_b_3963_);
return v___x_3970_;
}
else
{
lean_object* v___x_3971_; lean_object* v___x_3972_; size_t v_sz_3973_; size_t v___x_3974_; lean_object* v___x_3975_; 
v___x_3971_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_3972_ = lean_array_fget_borrowed(v___x_3960_, v_a_3962_);
v_sz_3973_ = lean_array_size(v___x_3972_);
v___x_3974_ = ((size_t)0ULL);
v___x_3975_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3961_, v___x_3972_, v_sz_3973_, v___x_3974_, v___x_3971_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v_a_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; 
v_a_3976_ = lean_ctor_get(v___x_3975_, 0);
lean_inc(v_a_3976_);
lean_dec_ref_known(v___x_3975_, 1);
v___x_3977_ = lean_array_push(v_b_3963_, v_a_3976_);
v___x_3978_ = lean_unsigned_to_nat(1u);
v___x_3979_ = lean_nat_add(v_a_3962_, v___x_3978_);
lean_dec(v_a_3962_);
v_a_3962_ = v___x_3979_;
v_b_3963_ = v___x_3977_;
goto _start;
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_dec_ref(v_b_3963_);
lean_dec(v_a_3962_);
v_a_3981_ = lean_ctor_get(v___x_3975_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3975_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3975_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3975_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3989_, lean_object* v___x_3990_, lean_object* v___x_3991_, lean_object* v_a_3992_, lean_object* v_b_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3989_, v___x_3990_, v___x_3991_, v_a_3992_, v_b_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec_ref(v___x_3991_);
lean_dec_ref(v___x_3990_);
lean_dec(v_upperBound_3989_);
return v_res_3999_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
v___x_4001_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0));
v___x_4002_ = lean_unsigned_to_nat(8u);
v___x_4003_ = lean_unsigned_to_nat(281u);
v___x_4004_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4005_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4006_ = l_mkPanicMessageWithDecl(v___x_4005_, v___x_4004_, v___x_4003_, v___x_4002_, v___x_4001_);
return v___x_4006_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_4007_, lean_object* v_a_4008_, lean_object* v_b_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v_a_4016_; uint8_t v___x_4020_; 
v___x_4020_ = lean_nat_dec_lt(v_a_4008_, v_upperBound_4007_);
if (v___x_4020_ == 0)
{
lean_object* v___x_4021_; 
lean_dec(v_a_4008_);
v___x_4021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4021_, 0, v_b_4009_);
return v___x_4021_;
}
else
{
lean_object* v_snd_4022_; lean_object* v_snd_4023_; lean_object* v_snd_4024_; lean_object* v_fst_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4149_; 
v_snd_4022_ = lean_ctor_get(v_b_4009_, 1);
lean_inc(v_snd_4022_);
v_snd_4023_ = lean_ctor_get(v_snd_4022_, 1);
lean_inc(v_snd_4023_);
v_snd_4024_ = lean_ctor_get(v_snd_4023_, 1);
lean_inc(v_snd_4024_);
v_fst_4025_ = lean_ctor_get(v_b_4009_, 0);
v_isSharedCheck_4149_ = !lean_is_exclusive(v_b_4009_);
if (v_isSharedCheck_4149_ == 0)
{
lean_object* v_unused_4150_; 
v_unused_4150_ = lean_ctor_get(v_b_4009_, 1);
lean_dec(v_unused_4150_);
v___x_4027_ = v_b_4009_;
v_isShared_4028_ = v_isSharedCheck_4149_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_fst_4025_);
lean_dec(v_b_4009_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4149_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v_fst_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4147_; 
v_fst_4029_ = lean_ctor_get(v_snd_4022_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v_snd_4022_);
if (v_isSharedCheck_4147_ == 0)
{
lean_object* v_unused_4148_; 
v_unused_4148_ = lean_ctor_get(v_snd_4022_, 1);
lean_dec(v_unused_4148_);
v___x_4031_ = v_snd_4022_;
v_isShared_4032_ = v_isSharedCheck_4147_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_fst_4029_);
lean_dec(v_snd_4022_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4147_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v_fst_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4145_; 
v_fst_4033_ = lean_ctor_get(v_snd_4023_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v_snd_4023_);
if (v_isSharedCheck_4145_ == 0)
{
lean_object* v_unused_4146_; 
v_unused_4146_ = lean_ctor_get(v_snd_4023_, 1);
lean_dec(v_unused_4146_);
v___x_4035_ = v_snd_4023_;
v_isShared_4036_ = v_isSharedCheck_4145_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_fst_4033_);
lean_dec(v_snd_4023_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4145_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v_array_4037_; lean_object* v_start_4038_; lean_object* v_stop_4039_; uint8_t v___x_4040_; 
v_array_4037_ = lean_ctor_get(v_snd_4024_, 0);
v_start_4038_ = lean_ctor_get(v_snd_4024_, 1);
v_stop_4039_ = lean_ctor_get(v_snd_4024_, 2);
v___x_4040_ = lean_nat_dec_lt(v_start_4038_, v_stop_4039_);
if (v___x_4040_ == 0)
{
lean_object* v___x_4042_; 
lean_dec(v_a_4008_);
if (v_isShared_4036_ == 0)
{
v___x_4042_ = v___x_4035_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_fst_4033_);
lean_ctor_set(v_reuseFailAlloc_4050_, 1, v_snd_4024_);
v___x_4042_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
lean_object* v___x_4044_; 
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4042_);
v___x_4044_ = v___x_4031_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_fst_4029_);
lean_ctor_set(v_reuseFailAlloc_4049_, 1, v___x_4042_);
v___x_4044_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
lean_object* v___x_4046_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4044_);
v___x_4046_ = v___x_4027_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_fst_4025_);
lean_ctor_set(v_reuseFailAlloc_4048_, 1, v___x_4044_);
v___x_4046_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
lean_object* v___x_4047_; 
v___x_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4047_, 0, v___x_4046_);
return v___x_4047_;
}
}
}
}
else
{
lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4141_; 
lean_inc(v_stop_4039_);
lean_inc(v_start_4038_);
lean_inc_ref(v_array_4037_);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_snd_4024_);
if (v_isSharedCheck_4141_ == 0)
{
lean_object* v_unused_4142_; lean_object* v_unused_4143_; lean_object* v_unused_4144_; 
v_unused_4142_ = lean_ctor_get(v_snd_4024_, 2);
lean_dec(v_unused_4142_);
v_unused_4143_ = lean_ctor_get(v_snd_4024_, 1);
lean_dec(v_unused_4143_);
v_unused_4144_ = lean_ctor_get(v_snd_4024_, 0);
lean_dec(v_unused_4144_);
v___x_4052_ = v_snd_4024_;
v_isShared_4053_ = v_isSharedCheck_4141_;
goto v_resetjp_4051_;
}
else
{
lean_dec(v_snd_4024_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4141_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v_array_4054_; lean_object* v_start_4055_; lean_object* v_stop_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
v_array_4054_ = lean_ctor_get(v_fst_4033_, 0);
v_start_4055_ = lean_ctor_get(v_fst_4033_, 1);
v_stop_4056_ = lean_ctor_get(v_fst_4033_, 2);
v___x_4057_ = lean_array_fget(v_array_4037_, v_start_4038_);
v___x_4058_ = lean_unsigned_to_nat(1u);
v___x_4059_ = lean_nat_add(v_start_4038_, v___x_4058_);
lean_dec(v_start_4038_);
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 1, v___x_4059_);
v___x_4061_ = v___x_4052_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_array_4037_);
lean_ctor_set(v_reuseFailAlloc_4140_, 1, v___x_4059_);
lean_ctor_set(v_reuseFailAlloc_4140_, 2, v_stop_4039_);
v___x_4061_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
uint8_t v___x_4062_; 
v___x_4062_ = lean_nat_dec_lt(v_start_4055_, v_stop_4056_);
if (v___x_4062_ == 0)
{
lean_object* v___x_4064_; 
lean_dec(v___x_4057_);
lean_dec(v_a_4008_);
if (v_isShared_4036_ == 0)
{
lean_ctor_set(v___x_4035_, 1, v___x_4061_);
v___x_4064_ = v___x_4035_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_fst_4033_);
lean_ctor_set(v_reuseFailAlloc_4072_, 1, v___x_4061_);
v___x_4064_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4066_; 
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4064_);
v___x_4066_ = v___x_4031_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_fst_4029_);
lean_ctor_set(v_reuseFailAlloc_4071_, 1, v___x_4064_);
v___x_4066_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
lean_object* v___x_4068_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4066_);
v___x_4068_ = v___x_4027_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_fst_4025_);
lean_ctor_set(v_reuseFailAlloc_4070_, 1, v___x_4066_);
v___x_4068_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
lean_object* v___x_4069_; 
v___x_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
return v___x_4069_;
}
}
}
}
else
{
lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4136_; 
lean_inc(v_stop_4056_);
lean_inc(v_start_4055_);
lean_inc_ref(v_array_4054_);
v_isSharedCheck_4136_ = !lean_is_exclusive(v_fst_4033_);
if (v_isSharedCheck_4136_ == 0)
{
lean_object* v_unused_4137_; lean_object* v_unused_4138_; lean_object* v_unused_4139_; 
v_unused_4137_ = lean_ctor_get(v_fst_4033_, 2);
lean_dec(v_unused_4137_);
v_unused_4138_ = lean_ctor_get(v_fst_4033_, 1);
lean_dec(v_unused_4138_);
v_unused_4139_ = lean_ctor_get(v_fst_4033_, 0);
lean_dec(v_unused_4139_);
v___x_4074_ = v_fst_4033_;
v_isShared_4075_ = v_isSharedCheck_4136_;
goto v_resetjp_4073_;
}
else
{
lean_dec(v_fst_4033_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4136_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4076_; lean_object* v___x_4078_; 
v___x_4076_ = lean_nat_add(v_start_4055_, v___x_4058_);
lean_dec(v_start_4055_);
if (v_isShared_4075_ == 0)
{
lean_ctor_set(v___x_4074_, 1, v___x_4076_);
v___x_4078_ = v___x_4074_;
goto v_reusejp_4077_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_array_4054_);
lean_ctor_set(v_reuseFailAlloc_4135_, 1, v___x_4076_);
lean_ctor_set(v_reuseFailAlloc_4135_, 2, v_stop_4056_);
v___x_4078_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4077_;
}
v_reusejp_4077_:
{
if (lean_obj_tag(v___x_4057_) == 1)
{
lean_object* v_val_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4123_; 
v_val_4079_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4081_ = v___x_4057_;
v_isShared_4082_ = v_isSharedCheck_4123_;
goto v_resetjp_4080_;
}
else
{
lean_inc(v_val_4079_);
lean_dec(v___x_4057_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4123_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4088_; 
v___x_4083_ = lean_box(0);
v___x_4084_ = lean_unsigned_to_nat(0u);
v___x_4085_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_4086_ = lean_array_get(v___x_4083_, v_val_4079_, v___x_4084_);
lean_dec(v_val_4079_);
lean_inc(v_a_4008_);
if (v_isShared_4082_ == 0)
{
lean_ctor_set(v___x_4081_, 0, v_a_4008_);
v___x_4088_ = v___x_4081_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4008_);
v___x_4088_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
uint8_t v___x_4089_; 
v___x_4089_ = l_Option_instDecidableEq___redArg(v___x_4085_, v___x_4086_, v___x_4088_);
if (v___x_4089_ == 0)
{
lean_object* v___x_4090_; lean_object* v___x_4091_; 
lean_dec_ref(v___x_4078_);
lean_dec_ref(v___x_4061_);
lean_del_object(v___x_4035_);
lean_del_object(v___x_4031_);
lean_dec(v_fst_4029_);
lean_del_object(v___x_4027_);
lean_dec(v_fst_4025_);
v___x_4090_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_4091_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_4090_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4101_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4101_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4101_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
if (lean_obj_tag(v_a_4092_) == 0)
{
lean_object* v_a_4096_; lean_object* v___x_4098_; 
lean_dec(v_a_4008_);
v_a_4096_ = lean_ctor_get(v_a_4092_, 0);
lean_inc(v_a_4096_);
lean_dec_ref_known(v_a_4092_, 1);
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v_a_4096_);
v___x_4098_ = v___x_4094_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4096_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
else
{
lean_object* v_a_4100_; 
lean_del_object(v___x_4094_);
v_a_4100_ = lean_ctor_get(v_a_4092_, 0);
lean_inc(v_a_4100_);
lean_dec_ref_known(v_a_4092_, 1);
v_a_4016_ = v_a_4100_;
goto v___jp_4015_;
}
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_dec(v_a_4008_);
v_a_4102_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4091_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4091_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
else
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4114_; 
lean_inc(v_fst_4029_);
v___x_4110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4110_, 0, v_fst_4029_);
v___x_4111_ = lean_array_push(v_fst_4025_, v___x_4110_);
v___x_4112_ = lean_nat_add(v_fst_4029_, v___x_4058_);
lean_dec(v_fst_4029_);
if (v_isShared_4036_ == 0)
{
lean_ctor_set(v___x_4035_, 1, v___x_4061_);
lean_ctor_set(v___x_4035_, 0, v___x_4078_);
v___x_4114_ = v___x_4035_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4061_);
v___x_4114_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
lean_object* v___x_4116_; 
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4114_);
lean_ctor_set(v___x_4031_, 0, v___x_4112_);
v___x_4116_ = v___x_4031_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v___x_4112_);
lean_ctor_set(v_reuseFailAlloc_4120_, 1, v___x_4114_);
v___x_4116_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
lean_object* v___x_4118_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4116_);
lean_ctor_set(v___x_4027_, 0, v___x_4111_);
v___x_4118_ = v___x_4027_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4119_, 1, v___x_4116_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
v_a_4016_ = v___x_4118_;
goto v___jp_4015_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4127_; 
lean_dec(v___x_4057_);
v___x_4124_ = lean_box(0);
v___x_4125_ = lean_array_push(v_fst_4025_, v___x_4124_);
if (v_isShared_4036_ == 0)
{
lean_ctor_set(v___x_4035_, 1, v___x_4061_);
lean_ctor_set(v___x_4035_, 0, v___x_4078_);
v___x_4127_ = v___x_4035_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4134_, 1, v___x_4061_);
v___x_4127_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
lean_object* v___x_4129_; 
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4127_);
v___x_4129_ = v___x_4031_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v_fst_4029_);
lean_ctor_set(v_reuseFailAlloc_4133_, 1, v___x_4127_);
v___x_4129_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
lean_object* v___x_4131_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4129_);
lean_ctor_set(v___x_4027_, 0, v___x_4125_);
v___x_4131_ = v___x_4027_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v___x_4125_);
lean_ctor_set(v_reuseFailAlloc_4132_, 1, v___x_4129_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
v_a_4016_ = v___x_4131_;
goto v___jp_4015_;
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
}
}
v___jp_4015_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4017_ = lean_unsigned_to_nat(1u);
v___x_4018_ = lean_nat_add(v_a_4008_, v___x_4017_);
lean_dec(v_a_4008_);
v_a_4008_ = v___x_4018_;
v_b_4009_ = v_a_4016_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4151_, lean_object* v_a_4152_, lean_object* v_b_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4151_, v_a_4152_, v_b_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_);
lean_dec(v___y_4157_);
lean_dec_ref(v___y_4156_);
lean_dec(v___y_4155_);
lean_dec_ref(v___y_4154_);
lean_dec(v_upperBound_4151_);
return v_res_4159_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4161_ = ((lean_object*)(l_Lean_Elab_getFixedParamPerms___lam__0___closed__0));
v___x_4162_ = lean_unsigned_to_nat(4u);
v___x_4163_ = lean_unsigned_to_nat(275u);
v___x_4164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4165_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4166_ = l_mkPanicMessageWithDecl(v___x_4165_, v___x_4164_, v___x_4163_, v___x_4162_, v___x_4161_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4167_, lean_object* v___x_4168_, lean_object* v___x_4169_, lean_object* v_xs_4170_, lean_object* v_x_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
lean_object* v_graph_4177_; lean_object* v_revDeps_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4231_; 
v_graph_4177_ = lean_ctor_get(v_a_4167_, 0);
v_revDeps_4178_ = lean_ctor_get(v_a_4167_, 1);
v_isSharedCheck_4231_ = !lean_is_exclusive(v_a_4167_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4180_ = v_a_4167_;
v_isShared_4181_ = v_isSharedCheck_4231_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_revDeps_4178_);
lean_inc(v_graph_4177_);
lean_dec(v_a_4167_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4231_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v___x_4182_ = lean_array_get_borrowed(v___x_4168_, v_graph_4177_, v___x_4169_);
v___x_4183_ = lean_array_get_size(v_xs_4170_);
v___x_4184_ = lean_array_get_size(v___x_4182_);
v___x_4185_ = lean_nat_dec_eq(v___x_4183_, v___x_4184_);
if (v___x_4185_ == 0)
{
lean_object* v___x_4186_; lean_object* v___x_4187_; 
lean_del_object(v___x_4180_);
lean_dec_ref(v_revDeps_4178_);
lean_dec_ref(v_graph_4177_);
lean_dec_ref(v_xs_4170_);
lean_dec(v___x_4169_);
v___x_4186_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4187_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4186_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_);
return v___x_4187_;
}
else
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4192_; 
v___x_4188_ = lean_mk_empty_array_with_capacity(v___x_4169_);
lean_inc_n(v___x_4169_, 2);
v___x_4189_ = l_Array_toSubarray___redArg(v_xs_4170_, v___x_4169_, v___x_4183_);
lean_inc(v___x_4182_);
v___x_4190_ = l_Array_toSubarray___redArg(v___x_4182_, v___x_4169_, v___x_4184_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 1, v___x_4190_);
lean_ctor_set(v___x_4180_, 0, v___x_4189_);
v___x_4192_ = v___x_4180_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v___x_4189_);
lean_ctor_set(v_reuseFailAlloc_4230_, 1, v___x_4190_);
v___x_4192_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
lean_inc(v___x_4169_);
v___x_4193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4193_, 0, v___x_4169_);
lean_ctor_set(v___x_4193_, 1, v___x_4192_);
v___x_4194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4188_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4183_, v___x_4169_, v___x_4194_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v_snd_4197_; lean_object* v_fst_4198_; lean_object* v_fst_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
lean_inc(v_a_4196_);
lean_dec_ref_known(v___x_4195_, 1);
v_snd_4197_ = lean_ctor_get(v_a_4196_, 1);
lean_inc(v_snd_4197_);
v_fst_4198_ = lean_ctor_get(v_a_4196_, 0);
lean_inc_n(v_fst_4198_, 2);
lean_dec(v_a_4196_);
v_fst_4199_ = lean_ctor_get(v_snd_4197_, 0);
lean_inc(v_fst_4199_);
lean_dec(v_snd_4197_);
v___x_4200_ = lean_unsigned_to_nat(1u);
v___x_4201_ = lean_array_get_size(v_graph_4177_);
v___x_4202_ = lean_mk_empty_array_with_capacity(v___x_4200_);
v___x_4203_ = lean_array_push(v___x_4202_, v_fst_4198_);
v___x_4204_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4201_, v_graph_4177_, v_fst_4198_, v___x_4200_, v___x_4203_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_);
lean_dec(v_fst_4198_);
lean_dec_ref(v_graph_4177_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4213_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4207_ = v___x_4204_;
v_isShared_4208_ = v_isSharedCheck_4213_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4204_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4213_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4209_; lean_object* v___x_4211_; 
v___x_4209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4209_, 0, v_fst_4199_);
lean_ctor_set(v___x_4209_, 1, v_a_4205_);
lean_ctor_set(v___x_4209_, 2, v_revDeps_4178_);
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 0, v___x_4209_);
v___x_4211_ = v___x_4207_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v___x_4209_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
else
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4221_; 
lean_dec(v_fst_4199_);
lean_dec_ref(v_revDeps_4178_);
v_a_4214_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4216_ = v___x_4204_;
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_4204_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4219_; 
if (v_isShared_4217_ == 0)
{
v___x_4219_ = v___x_4216_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4214_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
else
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
lean_dec_ref(v_revDeps_4178_);
lean_dec_ref(v_graph_4177_);
v_a_4222_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4195_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_4195_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4232_, lean_object* v___x_4233_, lean_object* v___x_4234_, lean_object* v_xs_4235_, lean_object* v_x_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4232_, v___x_4233_, v___x_4234_, v_xs_4235_, v_x_4236_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
lean_dec(v___y_4238_);
lean_dec_ref(v___y_4237_);
lean_dec_ref(v_x_4236_);
lean_dec_ref(v___x_4233_);
return v_res_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4243_, lean_object* v_a_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_){
_start:
{
lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4249_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4250_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
lean_inc_ref(v_preDefs_4243_);
v___x_4251_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4243_, v_a_4244_, v_a_4245_, v_a_4246_, v_a_4247_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v_a_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v_value_4255_; lean_object* v___f_4256_; uint8_t v___x_4257_; lean_object* v___x_4258_; 
v_a_4252_ = lean_ctor_get(v___x_4251_, 0);
lean_inc(v_a_4252_);
lean_dec_ref_known(v___x_4251_, 1);
v___x_4253_ = lean_unsigned_to_nat(0u);
v___x_4254_ = lean_array_get(v___x_4249_, v_preDefs_4243_, v___x_4253_);
lean_dec_ref(v_preDefs_4243_);
v_value_4255_ = lean_ctor_get(v___x_4254_, 7);
lean_inc_ref(v_value_4255_);
lean_dec(v___x_4254_);
v___f_4256_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4256_, 0, v_a_4252_);
lean_closure_set(v___f_4256_, 1, v___x_4250_);
lean_closure_set(v___f_4256_, 2, v___x_4253_);
v___x_4257_ = 0;
v___x_4258_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4255_, v___f_4256_, v___x_4257_, v_a_4244_, v_a_4245_, v_a_4246_, v_a_4247_);
return v___x_4258_;
}
else
{
lean_object* v_a_4259_; lean_object* v___x_4261_; uint8_t v_isShared_4262_; uint8_t v_isSharedCheck_4266_; 
lean_dec_ref(v_preDefs_4243_);
v_a_4259_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4266_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4261_ = v___x_4251_;
v_isShared_4262_ = v_isSharedCheck_4266_;
goto v_resetjp_4260_;
}
else
{
lean_inc(v_a_4259_);
lean_dec(v___x_4251_);
v___x_4261_ = lean_box(0);
v_isShared_4262_ = v_isSharedCheck_4266_;
goto v_resetjp_4260_;
}
v_resetjp_4260_:
{
lean_object* v___x_4264_; 
if (v_isShared_4262_ == 0)
{
v___x_4264_ = v___x_4261_;
goto v_reusejp_4263_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v_a_4259_);
v___x_4264_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4263_;
}
v_reusejp_4263_:
{
return v___x_4264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_){
_start:
{
lean_object* v_res_4273_; 
v_res_4273_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4267_, v_a_4268_, v_a_4269_, v_a_4270_, v_a_4271_);
lean_dec(v_a_4271_);
lean_dec_ref(v_a_4270_);
lean_dec(v_a_4269_);
lean_dec_ref(v_a_4268_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4274_, lean_object* v___x_4275_, lean_object* v___x_4276_, lean_object* v_inst_4277_, lean_object* v_R_4278_, lean_object* v_a_4279_, lean_object* v_b_4280_, lean_object* v_c_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_){
_start:
{
lean_object* v___x_4287_; 
v___x_4287_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4274_, v___x_4275_, v___x_4276_, v_a_4279_, v_b_4280_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4288_, lean_object* v___x_4289_, lean_object* v___x_4290_, lean_object* v_inst_4291_, lean_object* v_R_4292_, lean_object* v_a_4293_, lean_object* v_b_4294_, lean_object* v_c_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_){
_start:
{
lean_object* v_res_4301_; 
v_res_4301_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4288_, v___x_4289_, v___x_4290_, v_inst_4291_, v_R_4292_, v_a_4293_, v_b_4294_, v_c_4295_, v___y_4296_, v___y_4297_, v___y_4298_, v___y_4299_);
lean_dec(v___y_4299_);
lean_dec_ref(v___y_4298_);
lean_dec(v___y_4297_);
lean_dec_ref(v___y_4296_);
lean_dec_ref(v___x_4290_);
lean_dec_ref(v___x_4289_);
lean_dec(v_upperBound_4288_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4302_, lean_object* v_inst_4303_, lean_object* v_R_4304_, lean_object* v_a_4305_, lean_object* v_b_4306_, lean_object* v_c_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
lean_object* v___x_4313_; 
v___x_4313_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4302_, v_a_4305_, v_b_4306_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4314_, lean_object* v_inst_4315_, lean_object* v_R_4316_, lean_object* v_a_4317_, lean_object* v_b_4318_, lean_object* v_c_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4314_, v_inst_4315_, v_R_4316_, v_a_4317_, v_b_4318_, v_c_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4322_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v_upperBound_4314_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4326_, size_t v_i_4327_, size_t v_stop_4328_, lean_object* v_b_4329_){
_start:
{
uint8_t v___x_4330_; 
v___x_4330_ = lean_usize_dec_eq(v_i_4327_, v_stop_4328_);
if (v___x_4330_ == 0)
{
size_t v___x_4331_; size_t v___x_4332_; lean_object* v___x_4333_; 
v___x_4331_ = ((size_t)1ULL);
v___x_4332_ = lean_usize_sub(v_i_4327_, v___x_4331_);
v___x_4333_ = lean_array_uget_borrowed(v_as_4326_, v___x_4332_);
if (lean_obj_tag(v___x_4333_) == 0)
{
v_i_4327_ = v___x_4332_;
goto _start;
}
else
{
lean_object* v___x_4335_; lean_object* v___x_4336_; 
v___x_4335_ = lean_unsigned_to_nat(1u);
v___x_4336_ = lean_nat_add(v_b_4329_, v___x_4335_);
lean_dec(v_b_4329_);
v_i_4327_ = v___x_4332_;
v_b_4329_ = v___x_4336_;
goto _start;
}
}
else
{
return v_b_4329_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4338_, lean_object* v_i_4339_, lean_object* v_stop_4340_, lean_object* v_b_4341_){
_start:
{
size_t v_i_boxed_4342_; size_t v_stop_boxed_4343_; lean_object* v_res_4344_; 
v_i_boxed_4342_ = lean_unbox_usize(v_i_4339_);
lean_dec(v_i_4339_);
v_stop_boxed_4343_ = lean_unbox_usize(v_stop_4340_);
lean_dec(v_stop_4340_);
v_res_4344_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4338_, v_i_boxed_4342_, v_stop_boxed_4343_, v_b_4341_);
lean_dec_ref(v_as_4338_);
return v_res_4344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4345_){
_start:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; uint8_t v___x_4348_; 
v___x_4346_ = lean_unsigned_to_nat(0u);
v___x_4347_ = lean_array_get_size(v_perm_4345_);
v___x_4348_ = lean_nat_dec_lt(v___x_4346_, v___x_4347_);
if (v___x_4348_ == 0)
{
return v___x_4346_;
}
else
{
size_t v___x_4349_; size_t v___x_4350_; lean_object* v___x_4351_; 
v___x_4349_ = lean_usize_of_nat(v___x_4347_);
v___x_4350_ = ((size_t)0ULL);
v___x_4351_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4345_, v___x_4349_, v___x_4350_, v___x_4346_);
return v___x_4351_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4352_);
lean_dec_ref(v_perm_4352_);
return v_res_4353_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4354_, lean_object* v_i_4355_){
_start:
{
lean_object* v___x_4356_; uint8_t v___x_4357_; 
v___x_4356_ = lean_array_get_size(v_perm_4354_);
v___x_4357_ = lean_nat_dec_lt(v_i_4355_, v___x_4356_);
if (v___x_4357_ == 0)
{
return v___x_4357_;
}
else
{
lean_object* v___x_4358_; 
v___x_4358_ = lean_array_fget_borrowed(v_perm_4354_, v_i_4355_);
if (lean_obj_tag(v___x_4358_) == 0)
{
uint8_t v___x_4359_; 
v___x_4359_ = 0;
return v___x_4359_;
}
else
{
return v___x_4357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4360_, lean_object* v_i_4361_){
_start:
{
uint8_t v_res_4362_; lean_object* v_r_4363_; 
v_res_4362_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4360_, v_i_4361_);
lean_dec(v_i_4361_);
lean_dec_ref(v_perm_4360_);
v_r_4363_ = lean_box(v_res_4362_);
return v_r_4363_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_){
_start:
{
lean_object* v___f_4370_; lean_object* v___x_757__overap_4371_; lean_object* v___x_4372_; 
v___f_4370_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_757__overap_4371_ = lean_panic_fn_borrowed(v___f_4370_, v_msg_4364_);
lean_inc(v___y_4368_);
lean_inc_ref(v___y_4367_);
lean_inc(v___y_4366_);
lean_inc_ref(v___y_4365_);
v___x_4372_ = lean_apply_5(v___x_757__overap_4371_, v___y_4365_, v___y_4366_, v___y_4367_, v___y_4368_, lean_box(0));
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
lean_dec(v___y_4377_);
lean_dec_ref(v___y_4376_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
return v_res_4379_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4380_, lean_object* v_msg_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_){
_start:
{
lean_object* v___x_4387_; 
v___x_4387_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_);
return v___x_4387_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4388_, lean_object* v_msg_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
lean_object* v_res_4395_; 
v_res_4395_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4388_, v_msg_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
lean_dec(v___y_4391_);
lean_dec_ref(v___y_4390_);
return v_res_4395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4396_, lean_object* v_maxFVars_x3f_4397_, lean_object* v_k_4398_, uint8_t v_cleanupAnnotations_4399_, uint8_t v_whnfType_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_){
_start:
{
lean_object* v___f_4406_; lean_object* v___x_4407_; 
v___f_4406_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4406_, 0, v_k_4398_);
v___x_4407_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4396_, v_maxFVars_x3f_4397_, v___f_4406_, v_cleanupAnnotations_4399_, v_whnfType_4400_, v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4407_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4407_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
else
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4423_; 
v_a_4416_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4418_ = v___x_4407_;
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v___x_4407_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
return v___x_4421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4424_, lean_object* v_maxFVars_x3f_4425_, lean_object* v_k_4426_, lean_object* v_cleanupAnnotations_4427_, lean_object* v_whnfType_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4434_; uint8_t v_whnfType_boxed_4435_; lean_object* v_res_4436_; 
v_cleanupAnnotations_boxed_4434_ = lean_unbox(v_cleanupAnnotations_4427_);
v_whnfType_boxed_4435_ = lean_unbox(v_whnfType_4428_);
v_res_4436_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4424_, v_maxFVars_x3f_4425_, v_k_4426_, v_cleanupAnnotations_boxed_4434_, v_whnfType_boxed_4435_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
return v_res_4436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4437_, lean_object* v_type_4438_, lean_object* v_maxFVars_x3f_4439_, lean_object* v_k_4440_, uint8_t v_cleanupAnnotations_4441_, uint8_t v_whnfType_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_){
_start:
{
lean_object* v___x_4448_; 
v___x_4448_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4438_, v_maxFVars_x3f_4439_, v_k_4440_, v_cleanupAnnotations_4441_, v_whnfType_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_);
return v___x_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4449_, lean_object* v_type_4450_, lean_object* v_maxFVars_x3f_4451_, lean_object* v_k_4452_, lean_object* v_cleanupAnnotations_4453_, lean_object* v_whnfType_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4460_; uint8_t v_whnfType_boxed_4461_; lean_object* v_res_4462_; 
v_cleanupAnnotations_boxed_4460_ = lean_unbox(v_cleanupAnnotations_4453_);
v_whnfType_boxed_4461_ = lean_unbox(v_whnfType_4454_);
v_res_4462_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4449_, v_type_4450_, v_maxFVars_x3f_4451_, v_k_4452_, v_cleanupAnnotations_boxed_4460_, v_whnfType_boxed_4461_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
lean_dec(v___y_4458_);
lean_dec_ref(v___y_4457_);
lean_dec(v___y_4456_);
lean_dec_ref(v___y_4455_);
return v_res_4462_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4465_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1));
v___x_4466_ = lean_unsigned_to_nat(6u);
v___x_4467_ = lean_unsigned_to_nat(329u);
v___x_4468_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4469_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4470_ = l_mkPanicMessageWithDecl(v___x_4469_, v___x_4468_, v___x_4467_, v___x_4466_, v___x_4465_);
return v___x_4470_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4474_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0));
v___x_4475_ = lean_unsigned_to_nat(8u);
v___x_4476_ = lean_unsigned_to_nat(322u);
v___x_4477_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4478_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4479_ = l_mkPanicMessageWithDecl(v___x_4478_, v___x_4477_, v___x_4476_, v___x_4475_, v___x_4474_);
return v___x_4479_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4481_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4482_ = lean_unsigned_to_nat(8u);
v___x_4483_ = lean_unsigned_to_nat(325u);
v___x_4484_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4485_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4486_ = l_mkPanicMessageWithDecl(v___x_4485_, v___x_4484_, v___x_4483_, v___x_4482_, v___x_4481_);
return v___x_4486_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4488_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4));
v___x_4489_ = lean_unsigned_to_nat(8u);
v___x_4490_ = lean_unsigned_to_nat(324u);
v___x_4491_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4492_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4493_ = l_mkPanicMessageWithDecl(v___x_4492_, v___x_4491_, v___x_4490_, v___x_4489_, v___x_4488_);
return v___x_4493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4494_, lean_object* v___x_4495_, lean_object* v_xs_4496_, lean_object* v_val_4497_, lean_object* v_i_4498_, lean_object* v_perm_4499_, lean_object* v_k_4500_, lean_object* v_xs_x27_4501_, lean_object* v_type_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v___x_4508_; uint8_t v___x_4509_; 
v___x_4508_ = lean_array_get_size(v_xs_x27_4501_);
v___x_4509_ = lean_nat_dec_eq(v___x_4508_, v___x_4494_);
if (v___x_4509_ == 0)
{
lean_object* v___x_4510_; lean_object* v___x_4511_; 
lean_dec_ref(v_type_4502_);
lean_dec_ref(v_k_4500_);
lean_dec_ref(v_perm_4499_);
lean_dec_ref(v_xs_4496_);
v___x_4510_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4511_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4510_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
return v___x_4511_;
}
else
{
lean_object* v___x_4512_; lean_object* v_x_4513_; lean_object* v___x_4514_; 
v___x_4512_ = lean_unsigned_to_nat(0u);
v_x_4513_ = lean_array_get_borrowed(v___x_4495_, v_xs_x27_4501_, v___x_4512_);
lean_inc(v___y_4506_);
lean_inc_ref(v___y_4505_);
lean_inc(v___y_4504_);
lean_inc_ref(v___y_4503_);
lean_inc(v_x_4513_);
v___x_4514_ = lean_infer_type(v_x_4513_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4514_) == 0)
{
lean_object* v_a_4515_; uint8_t v___x_4516_; 
v_a_4515_ = lean_ctor_get(v___x_4514_, 0);
lean_inc(v_a_4515_);
lean_dec_ref_known(v___x_4514_, 1);
v___x_4516_ = l_Lean_Expr_hasLooseBVars(v_a_4515_);
lean_dec(v_a_4515_);
if (v___x_4516_ == 0)
{
lean_object* v___x_4517_; uint8_t v___x_4518_; 
v___x_4517_ = lean_array_get_size(v_xs_4496_);
v___x_4518_ = lean_nat_dec_lt(v_val_4497_, v___x_4517_);
if (v___x_4518_ == 0)
{
lean_object* v___x_4519_; lean_object* v___x_4520_; 
lean_dec_ref(v_type_4502_);
lean_dec_ref(v_k_4500_);
lean_dec_ref(v_perm_4499_);
lean_dec_ref(v_xs_4496_);
v___x_4519_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4520_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4519_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
return v___x_4520_;
}
else
{
lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4521_ = lean_nat_add(v_i_4498_, v___x_4494_);
lean_inc(v_x_4513_);
v___x_4522_ = lean_array_set(v_xs_4496_, v_val_4497_, v_x_4513_);
v___x_4523_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4499_, v_k_4500_, v___x_4521_, v_type_4502_, v___x_4522_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
return v___x_4523_;
}
}
else
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
lean_dec_ref(v_type_4502_);
lean_dec_ref(v_k_4500_);
lean_dec_ref(v_perm_4499_);
lean_dec_ref(v_xs_4496_);
v___x_4524_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4525_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4524_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
return v___x_4525_;
}
}
else
{
lean_object* v_a_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4533_; 
lean_dec_ref(v_type_4502_);
lean_dec_ref(v_k_4500_);
lean_dec_ref(v_perm_4499_);
lean_dec_ref(v_xs_4496_);
v_a_4526_ = lean_ctor_get(v___x_4514_, 0);
v_isSharedCheck_4533_ = !lean_is_exclusive(v___x_4514_);
if (v_isSharedCheck_4533_ == 0)
{
v___x_4528_ = v___x_4514_;
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_a_4526_);
lean_dec(v___x_4514_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4531_; 
if (v_isShared_4529_ == 0)
{
v___x_4531_ = v___x_4528_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v_a_4526_);
v___x_4531_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
return v___x_4531_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4534_, lean_object* v___x_4535_, lean_object* v_xs_4536_, lean_object* v_val_4537_, lean_object* v_i_4538_, lean_object* v_perm_4539_, lean_object* v_k_4540_, lean_object* v_xs_x27_4541_, lean_object* v_type_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
lean_object* v_res_4548_; 
v_res_4548_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4534_, v___x_4535_, v_xs_4536_, v_val_4537_, v_i_4538_, v_perm_4539_, v_k_4540_, v_xs_x27_4541_, v_type_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
lean_dec(v___y_4546_);
lean_dec_ref(v___y_4545_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec_ref(v_xs_x27_4541_);
lean_dec(v_i_4538_);
lean_dec(v_val_4537_);
lean_dec_ref(v___x_4535_);
lean_dec(v___x_4534_);
return v_res_4548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4549_, lean_object* v_k_4550_, lean_object* v_i_4551_, lean_object* v_type_4552_, lean_object* v_xs_4553_, lean_object* v_a_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_){
_start:
{
lean_object* v___x_4559_; uint8_t v___x_4560_; 
v___x_4559_ = lean_array_get_size(v_perm_4549_);
v___x_4560_ = lean_nat_dec_lt(v_i_4551_, v___x_4559_);
if (v___x_4560_ == 0)
{
lean_object* v___x_4561_; 
lean_dec_ref(v_type_4552_);
lean_dec(v_i_4551_);
lean_dec_ref(v_perm_4549_);
lean_inc(v_a_4557_);
lean_inc_ref(v_a_4556_);
lean_inc(v_a_4555_);
lean_inc_ref(v_a_4554_);
v___x_4561_ = lean_apply_6(v_k_4550_, v_xs_4553_, v_a_4554_, v_a_4555_, v_a_4556_, v_a_4557_, lean_box(0));
return v___x_4561_;
}
else
{
lean_object* v___x_4562_; 
v___x_4562_ = lean_array_fget_borrowed(v_perm_4549_, v_i_4551_);
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v___x_4563_; 
lean_inc(v_a_4557_);
lean_inc_ref(v_a_4556_);
lean_inc(v_a_4555_);
lean_inc_ref(v_a_4554_);
v___x_4563_ = lean_whnf(v_type_4552_, v_a_4554_, v_a_4555_, v_a_4556_, v_a_4557_);
if (lean_obj_tag(v___x_4563_) == 0)
{
lean_object* v_a_4564_; uint8_t v___x_4565_; 
v_a_4564_ = lean_ctor_get(v___x_4563_, 0);
lean_inc(v_a_4564_);
lean_dec_ref_known(v___x_4563_, 1);
v___x_4565_ = l_Lean_Expr_isForall(v_a_4564_);
if (v___x_4565_ == 0)
{
lean_object* v___x_4566_; lean_object* v___x_4567_; 
lean_dec(v_a_4564_);
lean_dec_ref(v_xs_4553_);
lean_dec(v_i_4551_);
lean_dec_ref(v_k_4550_);
lean_dec_ref(v_perm_4549_);
v___x_4566_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4567_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4566_, v_a_4554_, v_a_4555_, v_a_4556_, v_a_4557_);
return v___x_4567_;
}
else
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v___x_4568_ = lean_unsigned_to_nat(1u);
v___x_4569_ = lean_nat_add(v_i_4551_, v___x_4568_);
lean_dec(v_i_4551_);
v___x_4570_ = l_Lean_Expr_bindingBody_x21(v_a_4564_);
lean_dec(v_a_4564_);
v_i_4551_ = v___x_4569_;
v_type_4552_ = v___x_4570_;
goto _start;
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
lean_dec_ref(v_xs_4553_);
lean_dec(v_i_4551_);
lean_dec_ref(v_k_4550_);
lean_dec_ref(v_perm_4549_);
v_a_4572_ = lean_ctor_get(v___x_4563_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4563_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4563_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
else
{
lean_object* v_val_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___f_4583_; lean_object* v___x_4584_; uint8_t v___x_4585_; lean_object* v___x_4586_; 
v_val_4580_ = lean_ctor_get(v___x_4562_, 0);
lean_inc(v_val_4580_);
v___x_4581_ = l_Lean_instInhabitedExpr;
v___x_4582_ = lean_unsigned_to_nat(1u);
v___f_4583_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4583_, 0, v___x_4582_);
lean_closure_set(v___f_4583_, 1, v___x_4581_);
lean_closure_set(v___f_4583_, 2, v_xs_4553_);
lean_closure_set(v___f_4583_, 3, v_val_4580_);
lean_closure_set(v___f_4583_, 4, v_i_4551_);
lean_closure_set(v___f_4583_, 5, v_perm_4549_);
lean_closure_set(v___f_4583_, 6, v_k_4550_);
v___x_4584_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4585_ = 0;
v___x_4586_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4552_, v___x_4584_, v___f_4583_, v___x_4560_, v___x_4585_, v_a_4554_, v_a_4555_, v_a_4556_, v_a_4557_);
return v___x_4586_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4587_, lean_object* v_k_4588_, lean_object* v_i_4589_, lean_object* v_type_4590_, lean_object* v_xs_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_){
_start:
{
lean_object* v_res_4597_; 
v_res_4597_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4587_, v_k_4588_, v_i_4589_, v_type_4590_, v_xs_4591_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
lean_dec(v_a_4595_);
lean_dec_ref(v_a_4594_);
lean_dec(v_a_4593_);
lean_dec_ref(v_a_4592_);
return v_res_4597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4598_, lean_object* v_perm_4599_, lean_object* v_k_4600_, lean_object* v_i_4601_, lean_object* v_type_4602_, lean_object* v_xs_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_){
_start:
{
lean_object* v___x_4609_; 
v___x_4609_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4599_, v_k_4600_, v_i_4601_, v_type_4602_, v_xs_4603_, v_a_4604_, v_a_4605_, v_a_4606_, v_a_4607_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4610_, lean_object* v_perm_4611_, lean_object* v_k_4612_, lean_object* v_i_4613_, lean_object* v_type_4614_, lean_object* v_xs_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_, lean_object* v_a_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4610_, v_perm_4611_, v_k_4612_, v_i_4613_, v_type_4614_, v_xs_4615_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_);
lean_dec(v_a_4619_);
lean_dec_ref(v_a_4618_);
lean_dec(v_a_4617_);
lean_dec_ref(v_a_4616_);
return v_res_4621_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4622_ = lean_unsigned_to_nat(0u);
v___x_4623_ = l_Lean_Level_ofNat(v___x_4622_);
return v___x_4623_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4624_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4625_ = l_Lean_mkSort(v___x_4624_);
return v___x_4625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4626_, lean_object* v_type_4627_, lean_object* v_k_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_){
_start:
{
lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; 
v___x_4634_ = lean_unsigned_to_nat(0u);
v___x_4635_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4626_);
v___x_4636_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4637_ = lean_mk_array(v___x_4635_, v___x_4636_);
v___x_4638_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4626_, v_k_4628_, v___x_4634_, v_type_4627_, v___x_4637_, v_a_4629_, v_a_4630_, v_a_4631_, v_a_4632_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4639_, lean_object* v_type_4640_, lean_object* v_k_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4639_, v_type_4640_, v_k_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
lean_dec(v_a_4645_);
lean_dec_ref(v_a_4644_);
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4648_, lean_object* v_perm_4649_, lean_object* v_type_4650_, lean_object* v_k_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_, lean_object* v_a_4654_, lean_object* v_a_4655_){
_start:
{
lean_object* v___x_4657_; 
v___x_4657_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4649_, v_type_4650_, v_k_4651_, v_a_4652_, v_a_4653_, v_a_4654_, v_a_4655_);
return v___x_4657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4658_, lean_object* v_perm_4659_, lean_object* v_type_4660_, lean_object* v_k_4661_, lean_object* v_a_4662_, lean_object* v_a_4663_, lean_object* v_a_4664_, lean_object* v_a_4665_, lean_object* v_a_4666_){
_start:
{
lean_object* v_res_4667_; 
v_res_4667_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4658_, v_perm_4659_, v_type_4660_, v_k_4661_, v_a_4662_, v_a_4663_, v_a_4664_, v_a_4665_);
lean_dec(v_a_4665_);
lean_dec_ref(v_a_4664_);
lean_dec(v_a_4663_);
lean_dec_ref(v_a_4662_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4668_, lean_object* v_runInBase_4669_, lean_object* v_b_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_){
_start:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; 
v___x_4676_ = lean_apply_1(v_k_4668_, v_b_4670_);
lean_inc(v___y_4674_);
lean_inc_ref(v___y_4673_);
lean_inc(v___y_4672_);
lean_inc_ref(v___y_4671_);
v___x_4677_ = lean_apply_7(v_runInBase_4669_, lean_box(0), v___x_4676_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_, lean_box(0));
return v___x_4677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4678_, lean_object* v_runInBase_4679_, lean_object* v_b_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4678_, v_runInBase_4679_, v_b_4680_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
lean_dec(v___y_4684_);
lean_dec_ref(v___y_4683_);
lean_dec(v___y_4682_);
lean_dec_ref(v___y_4681_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4687_, lean_object* v_perm_4688_, lean_object* v_type_4689_, lean_object* v_runInBase_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_){
_start:
{
lean_object* v___f_4696_; lean_object* v___x_4697_; 
v___f_4696_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4696_, 0, v_k_4687_);
lean_closure_set(v___f_4696_, 1, v_runInBase_4690_);
v___x_4697_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4688_, v_type_4689_, v___f_4696_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4698_, lean_object* v_perm_4699_, lean_object* v_type_4700_, lean_object* v_runInBase_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4698_, v_perm_4699_, v_type_4700_, v_runInBase_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_);
lean_dec(v___y_4705_);
lean_dec_ref(v___y_4704_);
lean_dec(v___y_4703_);
lean_dec_ref(v___y_4702_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4708_, lean_object* v_inst_4709_, lean_object* v_perm_4710_, lean_object* v_type_4711_, lean_object* v_k_4712_){
_start:
{
lean_object* v_toBind_4713_; lean_object* v_liftWith_4714_; lean_object* v_restoreM_4715_; lean_object* v___f_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v_toBind_4713_ = lean_ctor_get(v_inst_4709_, 1);
lean_inc(v_toBind_4713_);
lean_dec_ref(v_inst_4709_);
v_liftWith_4714_ = lean_ctor_get(v_inst_4708_, 0);
lean_inc(v_liftWith_4714_);
v_restoreM_4715_ = lean_ctor_get(v_inst_4708_, 1);
lean_inc(v_restoreM_4715_);
lean_dec_ref(v_inst_4708_);
v___f_4716_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4716_, 0, v_k_4712_);
lean_closure_set(v___f_4716_, 1, v_perm_4710_);
lean_closure_set(v___f_4716_, 2, v_type_4711_);
v___x_4717_ = lean_apply_2(v_liftWith_4714_, lean_box(0), v___f_4716_);
v___x_4718_ = lean_apply_1(v_restoreM_4715_, lean_box(0));
v___x_4719_ = lean_apply_4(v_toBind_4713_, lean_box(0), lean_box(0), v___x_4717_, v___x_4718_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4720_, lean_object* v_00_u03b1_4721_, lean_object* v_inst_4722_, lean_object* v_inst_4723_, lean_object* v_perm_4724_, lean_object* v_type_4725_, lean_object* v_k_4726_){
_start:
{
lean_object* v___x_4727_; 
v___x_4727_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4722_, v_inst_4723_, v_perm_4724_, v_type_4725_, v_k_4726_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_){
_start:
{
lean_object* v___f_4734_; lean_object* v___x_512__overap_4735_; lean_object* v___x_4736_; 
v___f_4734_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_512__overap_4735_ = lean_panic_fn_borrowed(v___f_4734_, v_msg_4728_);
lean_inc(v___y_4732_);
lean_inc_ref(v___y_4731_);
lean_inc(v___y_4730_);
lean_inc_ref(v___y_4729_);
v___x_4736_ = lean_apply_5(v___x_512__overap_4735_, v___y_4729_, v___y_4730_, v___y_4731_, v___y_4732_, lean_box(0));
return v___x_4736_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_){
_start:
{
lean_object* v_res_4743_; 
v_res_4743_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_);
lean_dec(v___y_4741_);
lean_dec_ref(v___y_4740_);
lean_dec(v___y_4739_);
lean_dec_ref(v___y_4738_);
return v_res_4743_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; 
v___x_4746_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1));
v___x_4747_ = lean_unsigned_to_nat(10u);
v___x_4748_ = lean_unsigned_to_nat(353u);
v___x_4749_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4750_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4751_ = l_mkPanicMessageWithDecl(v___x_4750_, v___x_4749_, v___x_4748_, v___x_4747_, v___x_4746_);
return v___x_4751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4752_, lean_object* v_xs_4753_, lean_object* v_tail_4754_, lean_object* v_ys_4755_, lean_object* v_type_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_){
_start:
{
lean_object* v_res_4762_; 
v_res_4762_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4752_, v_xs_4753_, v_tail_4754_, v_ys_4755_, v_type_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
lean_dec(v___y_4758_);
lean_dec_ref(v___y_4757_);
lean_dec_ref(v_ys_4755_);
lean_dec(v___x_4752_);
return v_res_4762_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4763_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4764_ = lean_unsigned_to_nat(8u);
v___x_4765_ = lean_unsigned_to_nat(349u);
v___x_4766_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4767_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4768_ = l_mkPanicMessageWithDecl(v___x_4767_, v___x_4766_, v___x_4765_, v___x_4764_, v___x_4763_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4769_, lean_object* v_x_4770_, lean_object* v_x_4771_, lean_object* v_a_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_, lean_object* v_a_4775_){
_start:
{
if (lean_obj_tag(v_x_4770_) == 0)
{
lean_object* v___x_4777_; 
lean_dec_ref(v_xs_4769_);
v___x_4777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4777_, 0, v_x_4771_);
return v___x_4777_;
}
else
{
lean_object* v_head_4778_; 
v_head_4778_ = lean_ctor_get(v_x_4770_, 0);
if (lean_obj_tag(v_head_4778_) == 0)
{
lean_object* v_tail_4779_; lean_object* v___x_4780_; lean_object* v___f_4781_; lean_object* v___x_4782_; uint8_t v___x_4783_; lean_object* v___x_4784_; 
v_tail_4779_ = lean_ctor_get(v_x_4770_, 1);
lean_inc(v_tail_4779_);
lean_dec_ref_known(v_x_4770_, 2);
v___x_4780_ = lean_unsigned_to_nat(1u);
v___f_4781_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4781_, 0, v___x_4780_);
lean_closure_set(v___f_4781_, 1, v_xs_4769_);
lean_closure_set(v___f_4781_, 2, v_tail_4779_);
v___x_4782_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4783_ = 0;
v___x_4784_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4771_, v___x_4782_, v___f_4781_, v___x_4783_, v___x_4783_, v_a_4772_, v_a_4773_, v_a_4774_, v_a_4775_);
return v___x_4784_;
}
else
{
lean_object* v_tail_4785_; lean_object* v_val_4786_; lean_object* v___x_4787_; uint8_t v___x_4788_; 
lean_inc_ref(v_head_4778_);
v_tail_4785_ = lean_ctor_get(v_x_4770_, 1);
lean_inc(v_tail_4785_);
lean_dec_ref_known(v_x_4770_, 2);
v_val_4786_ = lean_ctor_get(v_head_4778_, 0);
lean_inc(v_val_4786_);
lean_dec_ref_known(v_head_4778_, 1);
v___x_4787_ = lean_array_get_size(v_xs_4769_);
v___x_4788_ = lean_nat_dec_lt(v_val_4786_, v___x_4787_);
if (v___x_4788_ == 0)
{
lean_object* v___x_4789_; lean_object* v___x_4790_; 
lean_dec(v_val_4786_);
lean_dec(v_tail_4785_);
lean_dec_ref(v_x_4771_);
lean_dec_ref(v_xs_4769_);
v___x_4789_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4790_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4789_, v_a_4772_, v_a_4773_, v_a_4774_, v_a_4775_);
return v___x_4790_;
}
else
{
lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4791_ = l_Lean_instInhabitedExpr;
v___x_4792_ = lean_array_get_borrowed(v___x_4791_, v_xs_4769_, v_val_4786_);
lean_dec(v_val_4786_);
v___x_4793_ = lean_unsigned_to_nat(1u);
v___x_4794_ = lean_mk_empty_array_with_capacity(v___x_4793_);
lean_inc(v___x_4792_);
v___x_4795_ = lean_array_push(v___x_4794_, v___x_4792_);
v___x_4796_ = l_Lean_Meta_instantiateForall(v_x_4771_, v___x_4795_, v_a_4772_, v_a_4773_, v_a_4774_, v_a_4775_);
lean_dec_ref(v___x_4795_);
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v_a_4797_; 
v_a_4797_ = lean_ctor_get(v___x_4796_, 0);
lean_inc(v_a_4797_);
lean_dec_ref_known(v___x_4796_, 1);
v_x_4770_ = v_tail_4785_;
v_x_4771_ = v_a_4797_;
goto _start;
}
else
{
lean_dec(v_tail_4785_);
lean_dec_ref(v_xs_4769_);
return v___x_4796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4799_, lean_object* v_xs_4800_, lean_object* v_tail_4801_, lean_object* v_ys_4802_, lean_object* v_type_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_){
_start:
{
lean_object* v___x_4809_; uint8_t v___x_4810_; 
v___x_4809_ = lean_array_get_size(v_ys_4802_);
v___x_4810_ = lean_nat_dec_eq(v___x_4809_, v___x_4799_);
if (v___x_4810_ == 0)
{
lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_dec_ref(v_type_4803_);
lean_dec(v_tail_4801_);
lean_dec_ref(v_xs_4800_);
v___x_4811_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4812_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4811_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_);
return v___x_4812_;
}
else
{
lean_object* v___x_4813_; 
v___x_4813_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4800_, v_tail_4801_, v_type_4803_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_);
if (lean_obj_tag(v___x_4813_) == 0)
{
lean_object* v_a_4814_; uint8_t v___x_4815_; uint8_t v___x_4816_; lean_object* v___x_4817_; 
v_a_4814_ = lean_ctor_get(v___x_4813_, 0);
lean_inc(v_a_4814_);
lean_dec_ref_known(v___x_4813_, 1);
v___x_4815_ = 0;
v___x_4816_ = 1;
v___x_4817_ = l_Lean_Meta_mkForallFVars(v_ys_4802_, v_a_4814_, v___x_4815_, v___x_4810_, v___x_4810_, v___x_4816_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_);
return v___x_4817_;
}
else
{
return v___x_4813_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4818_, lean_object* v_x_4819_, lean_object* v_x_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_){
_start:
{
lean_object* v_res_4826_; 
v_res_4826_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4818_, v_x_4819_, v_x_4820_, v_a_4821_, v_a_4822_, v_a_4823_, v_a_4824_);
lean_dec(v_a_4824_);
lean_dec_ref(v_a_4823_);
lean_dec(v_a_4822_);
lean_dec_ref(v_a_4821_);
return v_res_4826_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; 
v___x_4829_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4830_ = lean_unsigned_to_nat(2u);
v___x_4831_ = lean_unsigned_to_nat(343u);
v___x_4832_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0));
v___x_4833_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4834_ = l_mkPanicMessageWithDecl(v___x_4833_, v___x_4832_, v___x_4831_, v___x_4830_, v___x_4829_);
return v___x_4834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4835_, lean_object* v_type_u2080_4836_, lean_object* v_xs_4837_, lean_object* v_a_4838_, lean_object* v_a_4839_, lean_object* v_a_4840_, lean_object* v_a_4841_){
_start:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; uint8_t v___x_4845_; 
v___x_4843_ = lean_array_get_size(v_xs_4837_);
v___x_4844_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4835_);
v___x_4845_ = lean_nat_dec_eq(v___x_4843_, v___x_4844_);
lean_dec(v___x_4844_);
if (v___x_4845_ == 0)
{
lean_object* v___x_4846_; lean_object* v___x_4847_; 
lean_dec_ref(v_xs_4837_);
lean_dec_ref(v_type_u2080_4836_);
lean_dec_ref(v_perm_4835_);
v___x_4846_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4847_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4846_, v_a_4838_, v_a_4839_, v_a_4840_, v_a_4841_);
return v___x_4847_;
}
else
{
lean_object* v_mask_4848_; lean_object* v___x_4849_; 
v_mask_4848_ = lean_array_to_list(v_perm_4835_);
v___x_4849_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4837_, v_mask_4848_, v_type_u2080_4836_, v_a_4838_, v_a_4839_, v_a_4840_, v_a_4841_);
return v___x_4849_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4850_, lean_object* v_type_u2080_4851_, lean_object* v_xs_4852_, lean_object* v_a_4853_, lean_object* v_a_4854_, lean_object* v_a_4855_, lean_object* v_a_4856_, lean_object* v_a_4857_){
_start:
{
lean_object* v_res_4858_; 
v_res_4858_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4850_, v_type_u2080_4851_, v_xs_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_);
lean_dec(v_a_4856_);
lean_dec_ref(v_a_4855_);
lean_dec(v_a_4854_);
lean_dec_ref(v_a_4853_);
return v_res_4858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object* v_e_4859_, lean_object* v_maxFVars_4860_, lean_object* v_k_4861_, uint8_t v_cleanupAnnotations_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_){
_start:
{
lean_object* v___f_4868_; uint8_t v___x_4869_; uint8_t v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___f_4868_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4868_, 0, v_k_4861_);
v___x_4869_ = 1;
v___x_4870_ = 0;
v___x_4871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4871_, 0, v_maxFVars_4860_);
v___x_4872_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4859_, v___x_4869_, v___x_4870_, v___x_4869_, v___x_4870_, v___x_4871_, v___f_4868_, v_cleanupAnnotations_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
lean_dec_ref_known(v___x_4871_, 1);
if (lean_obj_tag(v___x_4872_) == 0)
{
lean_object* v_a_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4880_; 
v_a_4873_ = lean_ctor_get(v___x_4872_, 0);
v_isSharedCheck_4880_ = !lean_is_exclusive(v___x_4872_);
if (v_isSharedCheck_4880_ == 0)
{
v___x_4875_ = v___x_4872_;
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_a_4873_);
lean_dec(v___x_4872_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4878_; 
if (v_isShared_4876_ == 0)
{
v___x_4878_ = v___x_4875_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v_a_4873_);
v___x_4878_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
return v___x_4878_;
}
}
}
else
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4888_; 
v_a_4881_ = lean_ctor_get(v___x_4872_, 0);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4872_);
if (v_isSharedCheck_4888_ == 0)
{
v___x_4883_ = v___x_4872_;
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v___x_4872_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4886_; 
if (v_isShared_4884_ == 0)
{
v___x_4886_ = v___x_4883_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v_a_4881_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
return v___x_4886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object* v_e_4889_, lean_object* v_maxFVars_4890_, lean_object* v_k_4891_, lean_object* v_cleanupAnnotations_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4898_; lean_object* v_res_4899_; 
v_cleanupAnnotations_boxed_4898_ = lean_unbox(v_cleanupAnnotations_4892_);
v_res_4899_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4889_, v_maxFVars_4890_, v_k_4891_, v_cleanupAnnotations_boxed_4898_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_);
lean_dec(v___y_4896_);
lean_dec_ref(v___y_4895_);
lean_dec(v___y_4894_);
lean_dec_ref(v___y_4893_);
return v_res_4899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object* v_00_u03b1_4900_, lean_object* v_e_4901_, lean_object* v_maxFVars_4902_, lean_object* v_k_4903_, uint8_t v_cleanupAnnotations_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4901_, v_maxFVars_4902_, v_k_4903_, v_cleanupAnnotations_4904_, v___y_4905_, v___y_4906_, v___y_4907_, v___y_4908_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object* v_00_u03b1_4911_, lean_object* v_e_4912_, lean_object* v_maxFVars_4913_, lean_object* v_k_4914_, lean_object* v_cleanupAnnotations_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4921_; lean_object* v_res_4922_; 
v_cleanupAnnotations_boxed_4921_ = lean_unbox(v_cleanupAnnotations_4915_);
v_res_4922_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(v_00_u03b1_4911_, v_e_4912_, v_maxFVars_4913_, v_k_4914_, v_cleanupAnnotations_boxed_4921_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_);
lean_dec(v___y_4919_);
lean_dec_ref(v___y_4918_);
lean_dec(v___y_4917_);
lean_dec_ref(v___y_4916_);
return v_res_4922_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_x_4923_){
_start:
{
if (lean_obj_tag(v_x_4923_) == 0)
{
uint8_t v___x_4924_; 
v___x_4924_ = 1;
return v___x_4924_;
}
else
{
lean_object* v_head_4925_; 
v_head_4925_ = lean_ctor_get(v_x_4923_, 0);
if (lean_obj_tag(v_head_4925_) == 0)
{
lean_object* v_tail_4926_; 
v_tail_4926_ = lean_ctor_get(v_x_4923_, 1);
v_x_4923_ = v_tail_4926_;
goto _start;
}
else
{
uint8_t v___x_4928_; 
v___x_4928_ = 0;
return v___x_4928_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_x_4929_){
_start:
{
uint8_t v_res_4930_; lean_object* v_r_4931_; 
v_res_4930_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_x_4929_);
lean_dec(v_x_4929_);
v_r_4931_ = lean_box(v_res_4930_);
return v_r_4931_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4934_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1));
v___x_4935_ = lean_unsigned_to_nat(12u);
v___x_4936_ = lean_unsigned_to_nat(376u);
v___x_4937_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4938_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4939_ = l_mkPanicMessageWithDecl(v___x_4938_, v___x_4937_, v___x_4936_, v___x_4935_, v___x_4934_);
return v___x_4939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___x_4940_, lean_object* v_xs_4941_, lean_object* v_tail_4942_, lean_object* v___x_4943_, lean_object* v___x_4944_, lean_object* v_ys_4945_, lean_object* v_value_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_){
_start:
{
uint8_t v___x_1127__boxed_4952_; uint8_t v___x_1128__boxed_4953_; lean_object* v_res_4954_; 
v___x_1127__boxed_4952_ = lean_unbox(v___x_4943_);
v___x_1128__boxed_4953_ = lean_unbox(v___x_4944_);
v_res_4954_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___x_4940_, v_xs_4941_, v_tail_4942_, v___x_1127__boxed_4952_, v___x_1128__boxed_4953_, v_ys_4945_, v_value_4946_, v___y_4947_, v___y_4948_, v___y_4949_, v___y_4950_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
lean_dec(v___y_4948_);
lean_dec_ref(v___y_4947_);
lean_dec_ref(v_ys_4945_);
lean_dec(v___x_4940_);
return v_res_4954_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0(void){
_start:
{
lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; 
v___x_4955_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4956_ = lean_unsigned_to_nat(8u);
v___x_4957_ = lean_unsigned_to_nat(368u);
v___x_4958_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4959_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4960_ = l_mkPanicMessageWithDecl(v___x_4959_, v___x_4958_, v___x_4957_, v___x_4956_, v___x_4955_);
return v___x_4960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4961_, lean_object* v_x_4962_, lean_object* v_x_4963_, lean_object* v_a_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_, lean_object* v_a_4967_){
_start:
{
if (lean_obj_tag(v_x_4962_) == 0)
{
lean_object* v___x_4969_; 
lean_dec_ref(v_xs_4961_);
v___x_4969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4969_, 0, v_x_4963_);
return v___x_4969_;
}
else
{
lean_object* v_head_4970_; 
v_head_4970_ = lean_ctor_get(v_x_4962_, 0);
if (lean_obj_tag(v_head_4970_) == 0)
{
lean_object* v_tail_4971_; uint8_t v___x_4972_; 
v_tail_4971_ = lean_ctor_get(v_x_4962_, 1);
lean_inc(v_tail_4971_);
lean_dec_ref_known(v_x_4962_, 2);
v___x_4972_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_tail_4971_);
if (v___x_4972_ == 0)
{
uint8_t v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___f_4977_; lean_object* v___x_4978_; 
v___x_4973_ = 1;
v___x_4974_ = lean_unsigned_to_nat(1u);
v___x_4975_ = lean_box(v___x_4972_);
v___x_4976_ = lean_box(v___x_4973_);
v___f_4977_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4977_, 0, v___x_4974_);
lean_closure_set(v___f_4977_, 1, v_xs_4961_);
lean_closure_set(v___f_4977_, 2, v_tail_4971_);
lean_closure_set(v___f_4977_, 3, v___x_4975_);
lean_closure_set(v___f_4977_, 4, v___x_4976_);
v___x_4978_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_x_4963_, v___x_4974_, v___f_4977_, v___x_4972_, v_a_4964_, v_a_4965_, v_a_4966_, v_a_4967_);
return v___x_4978_;
}
else
{
lean_object* v___x_4979_; 
lean_dec(v_tail_4971_);
lean_dec_ref(v_xs_4961_);
v___x_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4979_, 0, v_x_4963_);
return v___x_4979_;
}
}
else
{
lean_object* v_tail_4980_; lean_object* v_val_4981_; lean_object* v___x_4982_; uint8_t v___x_4983_; 
lean_inc_ref(v_head_4970_);
v_tail_4980_ = lean_ctor_get(v_x_4962_, 1);
lean_inc(v_tail_4980_);
lean_dec_ref_known(v_x_4962_, 2);
v_val_4981_ = lean_ctor_get(v_head_4970_, 0);
lean_inc(v_val_4981_);
lean_dec_ref_known(v_head_4970_, 1);
v___x_4982_ = lean_array_get_size(v_xs_4961_);
v___x_4983_ = lean_nat_dec_lt(v_val_4981_, v___x_4982_);
if (v___x_4983_ == 0)
{
lean_object* v___x_4984_; lean_object* v___x_4985_; 
lean_dec(v_val_4981_);
lean_dec(v_tail_4980_);
lean_dec_ref(v_x_4963_);
lean_dec_ref(v_xs_4961_);
v___x_4984_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0);
v___x_4985_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4984_, v_a_4964_, v_a_4965_, v_a_4966_, v_a_4967_);
return v___x_4985_;
}
else
{
lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; 
v___x_4986_ = l_Lean_instInhabitedExpr;
v___x_4987_ = lean_array_get_borrowed(v___x_4986_, v_xs_4961_, v_val_4981_);
lean_dec(v_val_4981_);
v___x_4988_ = lean_unsigned_to_nat(1u);
v___x_4989_ = lean_mk_empty_array_with_capacity(v___x_4988_);
lean_inc(v___x_4987_);
v___x_4990_ = lean_array_push(v___x_4989_, v___x_4987_);
v___x_4991_ = l_Lean_Meta_instantiateLambda(v_x_4963_, v___x_4990_, v_a_4964_, v_a_4965_, v_a_4966_, v_a_4967_);
lean_dec_ref(v___x_4990_);
if (lean_obj_tag(v___x_4991_) == 0)
{
lean_object* v_a_4992_; 
v_a_4992_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_4992_);
lean_dec_ref_known(v___x_4991_, 1);
v_x_4962_ = v_tail_4980_;
v_x_4963_ = v_a_4992_;
goto _start;
}
else
{
lean_dec(v_tail_4980_);
lean_dec_ref(v_xs_4961_);
return v___x_4991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___x_4994_, lean_object* v_xs_4995_, lean_object* v_tail_4996_, uint8_t v___x_4997_, uint8_t v___x_4998_, lean_object* v_ys_4999_, lean_object* v_value_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_){
_start:
{
lean_object* v___x_5006_; uint8_t v___x_5007_; 
v___x_5006_ = lean_array_get_size(v_ys_4999_);
v___x_5007_ = lean_nat_dec_eq(v___x_5006_, v___x_4994_);
if (v___x_5007_ == 0)
{
lean_object* v___x_5008_; lean_object* v___x_5009_; 
lean_dec_ref(v_value_5000_);
lean_dec(v_tail_4996_);
lean_dec_ref(v_xs_4995_);
v___x_5008_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2);
v___x_5009_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_5008_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_);
return v___x_5009_;
}
else
{
lean_object* v___x_5010_; 
v___x_5010_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4995_, v_tail_4996_, v_value_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_);
if (lean_obj_tag(v___x_5010_) == 0)
{
lean_object* v_a_5011_; uint8_t v___x_5012_; lean_object* v___x_5013_; 
v_a_5011_ = lean_ctor_get(v___x_5010_, 0);
lean_inc(v_a_5011_);
lean_dec_ref_known(v___x_5010_, 1);
v___x_5012_ = 1;
v___x_5013_ = l_Lean_Meta_mkLambdaFVars(v_ys_4999_, v_a_5011_, v___x_4997_, v___x_4998_, v___x_4997_, v___x_4998_, v___x_5012_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_);
return v___x_5013_;
}
else
{
return v___x_5010_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_5014_, lean_object* v_x_5015_, lean_object* v_x_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_){
_start:
{
lean_object* v_res_5022_; 
v_res_5022_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_5014_, v_x_5015_, v_x_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
lean_dec(v_a_5020_);
lean_dec_ref(v_a_5019_);
lean_dec(v_a_5018_);
lean_dec_ref(v_a_5017_);
return v_res_5022_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; 
v___x_5024_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_5025_ = lean_unsigned_to_nat(2u);
v___x_5026_ = lean_unsigned_to_nat(362u);
v___x_5027_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0));
v___x_5028_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5029_ = l_mkPanicMessageWithDecl(v___x_5028_, v___x_5027_, v___x_5026_, v___x_5025_, v___x_5024_);
return v___x_5029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_5030_, lean_object* v_value_u2080_5031_, lean_object* v_xs_5032_, lean_object* v_a_5033_, lean_object* v_a_5034_, lean_object* v_a_5035_, lean_object* v_a_5036_){
_start:
{
lean_object* v___x_5038_; lean_object* v___x_5039_; uint8_t v___x_5040_; 
v___x_5038_ = lean_array_get_size(v_xs_5032_);
v___x_5039_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5030_);
v___x_5040_ = lean_nat_dec_eq(v___x_5038_, v___x_5039_);
lean_dec(v___x_5039_);
if (v___x_5040_ == 0)
{
lean_object* v___x_5041_; lean_object* v___x_5042_; 
lean_dec_ref(v_xs_5032_);
lean_dec_ref(v_value_u2080_5031_);
lean_dec_ref(v_perm_5030_);
v___x_5041_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_5042_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_5041_, v_a_5033_, v_a_5034_, v_a_5035_, v_a_5036_);
return v___x_5042_;
}
else
{
lean_object* v_mask_5043_; lean_object* v___x_5044_; 
v_mask_5043_ = lean_array_to_list(v_perm_5030_);
v___x_5044_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_5032_, v_mask_5043_, v_value_u2080_5031_, v_a_5033_, v_a_5034_, v_a_5035_, v_a_5036_);
return v___x_5044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_5045_, lean_object* v_value_u2080_5046_, lean_object* v_xs_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_){
_start:
{
lean_object* v_res_5053_; 
v_res_5053_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_5045_, v_value_u2080_5046_, v_xs_5047_, v_a_5048_, v_a_5049_, v_a_5050_, v_a_5051_);
lean_dec(v_a_5051_);
lean_dec_ref(v_a_5050_);
lean_dec(v_a_5049_);
lean_dec_ref(v_a_5048_);
return v_res_5053_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_5061_){
_start:
{
lean_object* v___f_5062_; lean_object* v___f_5063_; lean_object* v___f_5064_; lean_object* v___f_5065_; lean_object* v___f_5066_; lean_object* v___f_5067_; lean_object* v___f_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
v___f_5062_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5063_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5064_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5065_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5066_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5067_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5068_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5069_, 0, v___f_5062_);
lean_ctor_set(v___x_5069_, 1, v___f_5063_);
v___x_5070_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5070_, 0, v___x_5069_);
lean_ctor_set(v___x_5070_, 1, v___f_5064_);
lean_ctor_set(v___x_5070_, 2, v___f_5065_);
lean_ctor_set(v___x_5070_, 3, v___f_5066_);
lean_ctor_set(v___x_5070_, 4, v___f_5067_);
v___x_5071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5071_, 0, v___x_5070_);
lean_ctor_set(v___x_5071_, 1, v___f_5068_);
v___x_5072_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5073_ = l_instInhabitedOfMonad___redArg(v___x_5071_, v___x_5072_);
v___x_5074_ = lean_panic_fn_borrowed(v___x_5073_, v_msg_5061_);
lean_dec(v___x_5073_);
return v___x_5074_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_5075_, lean_object* v_msg_5076_){
_start:
{
lean_object* v___x_5077_; 
v___x_5077_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_5076_);
return v___x_5077_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; 
v___x_5080_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1));
v___x_5081_ = lean_unsigned_to_nat(8u);
v___x_5082_ = lean_unsigned_to_nat(394u);
v___x_5083_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0));
v___x_5084_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5085_ = l_mkPanicMessageWithDecl(v___x_5084_, v___x_5083_, v___x_5082_, v___x_5081_, v___x_5080_);
return v___x_5085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_5086_, lean_object* v_x_5087_){
_start:
{
if (lean_obj_tag(v_x_5086_) == 0)
{
return v_x_5087_;
}
else
{
lean_object* v_head_5088_; lean_object* v_fst_5089_; 
v_head_5088_ = lean_ctor_get(v_x_5086_, 0);
v_fst_5089_ = lean_ctor_get(v_head_5088_, 0);
if (lean_obj_tag(v_fst_5089_) == 0)
{
lean_object* v_tail_5090_; 
v_tail_5090_ = lean_ctor_get(v_x_5086_, 1);
lean_inc(v_tail_5090_);
lean_dec_ref_known(v_x_5086_, 2);
v_x_5086_ = v_tail_5090_;
goto _start;
}
else
{
lean_object* v_tail_5092_; lean_object* v_snd_5093_; lean_object* v_val_5094_; lean_object* v___x_5095_; uint8_t v___x_5096_; 
lean_inc_ref(v_fst_5089_);
lean_inc(v_head_5088_);
v_tail_5092_ = lean_ctor_get(v_x_5086_, 1);
lean_inc(v_tail_5092_);
lean_dec_ref_known(v_x_5086_, 2);
v_snd_5093_ = lean_ctor_get(v_head_5088_, 1);
lean_inc(v_snd_5093_);
lean_dec(v_head_5088_);
v_val_5094_ = lean_ctor_get(v_fst_5089_, 0);
lean_inc(v_val_5094_);
lean_dec_ref_known(v_fst_5089_, 1);
v___x_5095_ = lean_array_get_size(v_x_5087_);
v___x_5096_ = lean_nat_dec_lt(v_val_5094_, v___x_5095_);
if (v___x_5096_ == 0)
{
lean_object* v___x_5097_; lean_object* v___x_5098_; 
lean_dec(v_val_5094_);
lean_dec(v_snd_5093_);
lean_dec(v_tail_5092_);
lean_dec_ref(v_x_5087_);
v___x_5097_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_5098_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5097_);
return v___x_5098_;
}
else
{
lean_object* v___x_5099_; 
v___x_5099_ = lean_array_set(v_x_5087_, v_val_5094_, v_snd_5093_);
lean_dec(v_val_5094_);
v_x_5086_ = v_tail_5092_;
v_x_5087_ = v___x_5099_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_5101_, lean_object* v_x_5102_, lean_object* v_x_5103_){
_start:
{
lean_object* v___x_5104_; 
v___x_5104_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_5102_, v_x_5103_);
return v___x_5104_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; 
v___x_5107_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1));
v___x_5108_ = lean_unsigned_to_nat(2u);
v___x_5109_ = lean_unsigned_to_nat(384u);
v___x_5110_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0));
v___x_5111_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5112_ = l_mkPanicMessageWithDecl(v___x_5111_, v___x_5110_, v___x_5109_, v___x_5108_, v___x_5107_);
return v___x_5112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_5115_, lean_object* v_xs_5116_){
_start:
{
lean_object* v___x_5117_; lean_object* v___x_5118_; uint8_t v___x_5119_; 
v___x_5117_ = lean_array_get_size(v_xs_5116_);
v___x_5118_ = lean_array_get_size(v_perm_5115_);
v___x_5119_ = lean_nat_dec_eq(v___x_5117_, v___x_5118_);
if (v___x_5119_ == 0)
{
lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5120_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_5121_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5120_);
return v___x_5121_;
}
else
{
lean_object* v___x_5122_; uint8_t v___x_5123_; 
v___x_5122_ = lean_unsigned_to_nat(0u);
v___x_5123_ = lean_nat_dec_eq(v___x_5117_, v___x_5122_);
if (v___x_5123_ == 0)
{
lean_object* v_dummy_5124_; lean_object* v___x_5125_; lean_object* v_ys_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
v_dummy_5124_ = lean_array_fget_borrowed(v_xs_5116_, v___x_5122_);
v___x_5125_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5115_);
lean_inc(v_dummy_5124_);
v_ys_5126_ = lean_mk_array(v___x_5125_, v_dummy_5124_);
v___x_5127_ = l_Array_zip___redArg(v_perm_5115_, v_xs_5116_);
v___x_5128_ = lean_array_to_list(v___x_5127_);
v___x_5129_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5128_, v_ys_5126_);
return v___x_5129_;
}
else
{
lean_object* v___x_5130_; 
v___x_5130_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
return v___x_5130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5131_, lean_object* v_xs_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5131_, v_xs_5132_);
lean_dec_ref(v_xs_5132_);
lean_dec_ref(v_perm_5131_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5134_, lean_object* v_perm_5135_, lean_object* v_xs_5136_){
_start:
{
lean_object* v___x_5137_; 
v___x_5137_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5135_, v_xs_5136_);
return v___x_5137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5138_, lean_object* v_perm_5139_, lean_object* v_xs_5140_){
_start:
{
lean_object* v_res_5141_; 
v_res_5141_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5138_, v_perm_5139_, v_xs_5140_);
lean_dec_ref(v_xs_5140_);
lean_dec_ref(v_perm_5139_);
return v_res_5141_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5142_, lean_object* v_upperBound_5143_, lean_object* v_perm_5144_, lean_object* v_a_5145_, lean_object* v_b_5146_){
_start:
{
lean_object* v_a_5148_; uint8_t v___x_5155_; 
v___x_5155_ = lean_nat_dec_lt(v_a_5145_, v_upperBound_5143_);
if (v___x_5155_ == 0)
{
lean_dec(v_a_5145_);
return v_b_5146_;
}
else
{
lean_object* v___x_5156_; uint8_t v___x_5157_; 
v___x_5156_ = lean_array_get_size(v_perm_5144_);
v___x_5157_ = lean_nat_dec_lt(v_a_5145_, v___x_5156_);
if (v___x_5157_ == 0)
{
goto v___jp_5152_;
}
else
{
lean_object* v___x_5158_; 
v___x_5158_ = lean_array_fget_borrowed(v_perm_5144_, v_a_5145_);
if (lean_obj_tag(v___x_5158_) == 0)
{
goto v___jp_5152_;
}
else
{
v_a_5148_ = v_b_5146_;
goto v___jp_5147_;
}
}
}
v___jp_5147_:
{
lean_object* v___x_5149_; lean_object* v___x_5150_; 
v___x_5149_ = lean_unsigned_to_nat(1u);
v___x_5150_ = lean_nat_add(v_a_5145_, v___x_5149_);
lean_dec(v_a_5145_);
v_a_5145_ = v___x_5150_;
v_b_5146_ = v_a_5148_;
goto _start;
}
v___jp_5152_:
{
lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5153_ = lean_array_fget_borrowed(v_xs_5142_, v_a_5145_);
lean_inc(v___x_5153_);
v___x_5154_ = lean_array_push(v_b_5146_, v___x_5153_);
v_a_5148_ = v___x_5154_;
goto v___jp_5147_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5159_, lean_object* v_upperBound_5160_, lean_object* v_perm_5161_, lean_object* v_a_5162_, lean_object* v_b_5163_){
_start:
{
lean_object* v_res_5164_; 
v_res_5164_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5159_, v_upperBound_5160_, v_perm_5161_, v_a_5162_, v_b_5163_);
lean_dec_ref(v_perm_5161_);
lean_dec(v_upperBound_5160_);
lean_dec_ref(v_xs_5159_);
return v_res_5164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5165_, lean_object* v_xs_5166_){
_start:
{
lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v_ys_5169_; lean_object* v___x_5170_; 
v___x_5167_ = lean_array_get_size(v_xs_5166_);
v___x_5168_ = lean_unsigned_to_nat(0u);
v_ys_5169_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5170_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5166_, v___x_5167_, v_perm_5165_, v___x_5168_, v_ys_5169_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5171_, lean_object* v_xs_5172_){
_start:
{
lean_object* v_res_5173_; 
v_res_5173_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5171_, v_xs_5172_);
lean_dec_ref(v_xs_5172_);
lean_dec_ref(v_perm_5171_);
return v_res_5173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5174_, lean_object* v_perm_5175_, lean_object* v_xs_5176_){
_start:
{
lean_object* v___x_5177_; 
v___x_5177_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5175_, v_xs_5176_);
return v___x_5177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5178_, lean_object* v_perm_5179_, lean_object* v_xs_5180_){
_start:
{
lean_object* v_res_5181_; 
v_res_5181_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5178_, v_perm_5179_, v_xs_5180_);
lean_dec_ref(v_xs_5180_);
lean_dec_ref(v_perm_5179_);
return v_res_5181_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5182_, lean_object* v_xs_5183_, lean_object* v_upperBound_5184_, lean_object* v_perm_5185_, lean_object* v_inst_5186_, lean_object* v_R_5187_, lean_object* v_a_5188_, lean_object* v_b_5189_, lean_object* v_c_5190_){
_start:
{
lean_object* v___x_5191_; 
v___x_5191_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5183_, v_upperBound_5184_, v_perm_5185_, v_a_5188_, v_b_5189_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5192_, lean_object* v_xs_5193_, lean_object* v_upperBound_5194_, lean_object* v_perm_5195_, lean_object* v_inst_5196_, lean_object* v_R_5197_, lean_object* v_a_5198_, lean_object* v_b_5199_, lean_object* v_c_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5192_, v_xs_5193_, v_upperBound_5194_, v_perm_5195_, v_inst_5196_, v_R_5197_, v_a_5198_, v_b_5199_, v_c_5200_);
lean_dec_ref(v_perm_5195_);
lean_dec(v_upperBound_5194_);
lean_dec_ref(v_xs_5193_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object* v_msg_5202_){
_start:
{
lean_object* v___x_5203_; lean_object* v___x_5204_; 
v___x_5203_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5204_ = lean_panic_fn_borrowed(v___x_5203_, v_msg_5202_);
return v___x_5204_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_00_u03b1_5205_, lean_object* v_msg_5206_){
_start:
{
lean_object* v___x_5207_; 
v___x_5207_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v_msg_5206_);
return v___x_5207_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_j_5208_, lean_object* v___x_5209_, lean_object* v_i_5210_, lean_object* v___x_5211_, lean_object* v_as_5212_, size_t v_i_5213_, size_t v_stop_5214_){
_start:
{
uint8_t v___x_5215_; 
v___x_5215_ = lean_usize_dec_eq(v_i_5213_, v_stop_5214_);
if (v___x_5215_ == 0)
{
uint8_t v___x_5216_; uint8_t v___y_5218_; lean_object* v___x_5222_; 
v___x_5216_ = 1;
v___x_5222_ = lean_array_uget_borrowed(v_as_5212_, v_i_5213_);
if (lean_obj_tag(v___x_5222_) == 0)
{
uint8_t v___x_5223_; 
v___x_5223_ = lean_nat_dec_lt(v_j_5208_, v___x_5209_);
v___y_5218_ = v___x_5223_;
goto v___jp_5217_;
}
else
{
uint8_t v___x_5224_; 
v___x_5224_ = lean_nat_dec_lt(v_i_5210_, v___x_5211_);
v___y_5218_ = v___x_5224_;
goto v___jp_5217_;
}
v___jp_5217_:
{
if (v___y_5218_ == 0)
{
size_t v___x_5219_; size_t v___x_5220_; 
v___x_5219_ = ((size_t)1ULL);
v___x_5220_ = lean_usize_add(v_i_5213_, v___x_5219_);
v_i_5213_ = v___x_5220_;
goto _start;
}
else
{
return v___x_5216_;
}
}
}
else
{
uint8_t v___x_5225_; 
v___x_5225_ = 0;
return v___x_5225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object* v_j_5226_, lean_object* v___x_5227_, lean_object* v_i_5228_, lean_object* v___x_5229_, lean_object* v_as_5230_, lean_object* v_i_5231_, lean_object* v_stop_5232_){
_start:
{
size_t v_i_boxed_5233_; size_t v_stop_boxed_5234_; uint8_t v_res_5235_; lean_object* v_r_5236_; 
v_i_boxed_5233_ = lean_unbox_usize(v_i_5231_);
lean_dec(v_i_5231_);
v_stop_boxed_5234_ = lean_unbox_usize(v_stop_5232_);
lean_dec(v_stop_5232_);
v_res_5235_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5226_, v___x_5227_, v_i_5228_, v___x_5229_, v_as_5230_, v_i_boxed_5233_, v_stop_boxed_5234_);
lean_dec_ref(v_as_5230_);
lean_dec(v___x_5229_);
lean_dec(v_i_5228_);
lean_dec(v___x_5227_);
lean_dec(v_j_5226_);
v_r_5236_ = lean_box(v_res_5235_);
return v_r_5236_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; 
v___x_5239_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1));
v___x_5240_ = lean_unsigned_to_nat(10u);
v___x_5241_ = lean_unsigned_to_nat(425u);
v___x_5242_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5243_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5244_ = l_mkPanicMessageWithDecl(v___x_5243_, v___x_5242_, v___x_5241_, v___x_5240_, v___x_5239_);
return v___x_5244_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5246_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3));
v___x_5247_ = lean_unsigned_to_nat(12u);
v___x_5248_ = lean_unsigned_to_nat(433u);
v___x_5249_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5250_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5251_ = l_mkPanicMessageWithDecl(v___x_5250_, v___x_5249_, v___x_5248_, v___x_5247_, v___x_5246_);
return v___x_5251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5252_, lean_object* v_fixedArgs_5253_, lean_object* v_varyingArgs_5254_, lean_object* v_i_5255_, lean_object* v_j_5256_, lean_object* v_xs_5257_){
_start:
{
lean_object* v_lower_5259_; lean_object* v_upper_5260_; lean_object* v___x_5264_; uint8_t v___x_5265_; 
v___x_5264_ = lean_array_get_size(v_perm_5252_);
v___x_5265_ = lean_nat_dec_lt(v_i_5255_, v___x_5264_);
if (v___x_5265_ == 0)
{
lean_object* v___x_5266_; lean_object* v___x_5267_; uint8_t v___x_5268_; 
lean_dec(v_i_5255_);
lean_dec_ref(v_perm_5252_);
v___x_5266_ = lean_unsigned_to_nat(0u);
v___x_5267_ = lean_array_get_size(v_varyingArgs_5254_);
v___x_5268_ = lean_nat_dec_le(v_j_5256_, v___x_5266_);
if (v___x_5268_ == 0)
{
v_lower_5259_ = v_j_5256_;
v_upper_5260_ = v___x_5267_;
goto v___jp_5258_;
}
else
{
lean_dec(v_j_5256_);
v_lower_5259_ = v___x_5266_;
v_upper_5260_ = v___x_5267_;
goto v___jp_5258_;
}
}
else
{
lean_object* v___x_5269_; 
v___x_5269_ = lean_array_fget_borrowed(v_perm_5252_, v_i_5255_);
if (lean_obj_tag(v___x_5269_) == 1)
{
lean_object* v_val_5270_; lean_object* v___x_5271_; uint8_t v___x_5272_; 
v_val_5270_ = lean_ctor_get(v___x_5269_, 0);
v___x_5271_ = lean_array_get_size(v_fixedArgs_5253_);
v___x_5272_ = lean_nat_dec_lt(v_val_5270_, v___x_5271_);
if (v___x_5272_ == 0)
{
lean_object* v___x_5273_; lean_object* v___x_5274_; 
lean_dec_ref(v_xs_5257_);
lean_dec(v_j_5256_);
lean_dec(v_i_5255_);
lean_dec_ref(v_varyingArgs_5254_);
lean_dec_ref(v_perm_5252_);
v___x_5273_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5274_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5273_);
return v___x_5274_;
}
else
{
lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; 
v___x_5275_ = lean_unsigned_to_nat(1u);
v___x_5276_ = lean_nat_add(v_i_5255_, v___x_5275_);
lean_dec(v_i_5255_);
v___x_5277_ = lean_array_fget_borrowed(v_fixedArgs_5253_, v_val_5270_);
lean_inc(v___x_5277_);
v___x_5278_ = lean_array_push(v_xs_5257_, v___x_5277_);
v_i_5255_ = v___x_5276_;
v_xs_5257_ = v___x_5278_;
goto _start;
}
}
else
{
lean_object* v___x_5280_; lean_object* v___y_5282_; lean_object* v___y_5283_; lean_object* v___y_5284_; lean_object* v_lower_5292_; lean_object* v_upper_5293_; uint8_t v___x_5301_; 
v___x_5280_ = lean_array_get_size(v_varyingArgs_5254_);
v___x_5301_ = lean_nat_dec_lt(v_j_5256_, v___x_5280_);
if (v___x_5301_ == 0)
{
lean_object* v___x_5302_; uint8_t v___x_5303_; 
lean_dec_ref(v_varyingArgs_5254_);
v___x_5302_ = lean_unsigned_to_nat(0u);
v___x_5303_ = lean_nat_dec_le(v_i_5255_, v___x_5302_);
if (v___x_5303_ == 0)
{
lean_inc(v_i_5255_);
v_lower_5292_ = v_i_5255_;
v_upper_5293_ = v___x_5264_;
goto v___jp_5291_;
}
else
{
v_lower_5292_ = v___x_5302_;
v_upper_5293_ = v___x_5264_;
goto v___jp_5291_;
}
}
else
{
lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; 
v___x_5304_ = lean_unsigned_to_nat(1u);
v___x_5305_ = lean_nat_add(v_i_5255_, v___x_5304_);
lean_dec(v_i_5255_);
v___x_5306_ = lean_nat_add(v_j_5256_, v___x_5304_);
v___x_5307_ = lean_array_fget_borrowed(v_varyingArgs_5254_, v_j_5256_);
lean_dec(v_j_5256_);
lean_inc(v___x_5307_);
v___x_5308_ = lean_array_push(v_xs_5257_, v___x_5307_);
v_i_5255_ = v___x_5305_;
v_j_5256_ = v___x_5306_;
v_xs_5257_ = v___x_5308_;
goto _start;
}
v___jp_5281_:
{
uint8_t v___x_5285_; 
v___x_5285_ = lean_nat_dec_lt(v___y_5282_, v___y_5284_);
if (v___x_5285_ == 0)
{
lean_dec(v___y_5284_);
lean_dec_ref(v___y_5283_);
lean_dec(v___y_5282_);
lean_dec(v_j_5256_);
lean_dec(v_i_5255_);
return v_xs_5257_;
}
else
{
size_t v___x_5286_; size_t v___x_5287_; uint8_t v___x_5288_; 
v___x_5286_ = lean_usize_of_nat(v___y_5282_);
lean_dec(v___y_5282_);
v___x_5287_ = lean_usize_of_nat(v___y_5284_);
lean_dec(v___y_5284_);
v___x_5288_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5256_, v___x_5280_, v_i_5255_, v___x_5264_, v___y_5283_, v___x_5286_, v___x_5287_);
lean_dec_ref(v___y_5283_);
lean_dec(v_i_5255_);
lean_dec(v_j_5256_);
if (v___x_5288_ == 0)
{
return v_xs_5257_;
}
else
{
lean_object* v___x_5289_; lean_object* v___x_5290_; 
lean_dec_ref(v_xs_5257_);
v___x_5289_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5290_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5289_);
return v___x_5290_;
}
}
}
v___jp_5291_:
{
lean_object* v___x_5294_; lean_object* v_array_5295_; lean_object* v_start_5296_; lean_object* v_stop_5297_; uint8_t v___x_5298_; 
v___x_5294_ = l_Array_toSubarray___redArg(v_perm_5252_, v_lower_5292_, v_upper_5293_);
v_array_5295_ = lean_ctor_get(v___x_5294_, 0);
lean_inc_ref(v_array_5295_);
v_start_5296_ = lean_ctor_get(v___x_5294_, 1);
lean_inc(v_start_5296_);
v_stop_5297_ = lean_ctor_get(v___x_5294_, 2);
lean_inc(v_stop_5297_);
lean_dec_ref(v___x_5294_);
v___x_5298_ = lean_nat_dec_lt(v_start_5296_, v_stop_5297_);
if (v___x_5298_ == 0)
{
lean_dec(v_stop_5297_);
lean_dec(v_start_5296_);
lean_dec_ref(v_array_5295_);
lean_dec(v_j_5256_);
lean_dec(v_i_5255_);
return v_xs_5257_;
}
else
{
lean_object* v___x_5299_; uint8_t v___x_5300_; 
v___x_5299_ = lean_array_get_size(v_array_5295_);
v___x_5300_ = lean_nat_dec_le(v_stop_5297_, v___x_5299_);
if (v___x_5300_ == 0)
{
lean_dec(v_stop_5297_);
v___y_5282_ = v_start_5296_;
v___y_5283_ = v_array_5295_;
v___y_5284_ = v___x_5299_;
goto v___jp_5281_;
}
else
{
v___y_5282_ = v_start_5296_;
v___y_5283_ = v_array_5295_;
v___y_5284_ = v_stop_5297_;
goto v___jp_5281_;
}
}
}
}
}
v___jp_5258_:
{
lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5261_ = l_Array_toSubarray___redArg(v_varyingArgs_5254_, v_lower_5259_, v_upper_5260_);
v___x_5262_ = l_Subarray_copy___redArg(v___x_5261_);
v___x_5263_ = l_Array_append___redArg(v_xs_5257_, v___x_5262_);
lean_dec_ref(v___x_5262_);
return v___x_5263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5310_, lean_object* v_fixedArgs_5311_, lean_object* v_varyingArgs_5312_, lean_object* v_i_5313_, lean_object* v_j_5314_, lean_object* v_xs_5315_){
_start:
{
lean_object* v_res_5316_; 
v_res_5316_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5310_, v_fixedArgs_5311_, v_varyingArgs_5312_, v_i_5313_, v_j_5314_, v_xs_5315_);
lean_dec_ref(v_fixedArgs_5311_);
return v_res_5316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5317_, lean_object* v_perm_5318_, lean_object* v_fixedArgs_5319_, lean_object* v_varyingArgs_5320_, lean_object* v_i_5321_, lean_object* v_j_5322_, lean_object* v_xs_5323_){
_start:
{
lean_object* v___x_5324_; 
v___x_5324_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5318_, v_fixedArgs_5319_, v_varyingArgs_5320_, v_i_5321_, v_j_5322_, v_xs_5323_);
return v___x_5324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5325_, lean_object* v_perm_5326_, lean_object* v_fixedArgs_5327_, lean_object* v_varyingArgs_5328_, lean_object* v_i_5329_, lean_object* v_j_5330_, lean_object* v_xs_5331_){
_start:
{
lean_object* v_res_5332_; 
v_res_5332_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5325_, v_perm_5326_, v_fixedArgs_5327_, v_varyingArgs_5328_, v_i_5329_, v_j_5330_, v_xs_5331_);
lean_dec_ref(v_fixedArgs_5327_);
return v_res_5332_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; 
v___x_5335_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1));
v___x_5336_ = lean_unsigned_to_nat(2u);
v___x_5337_ = lean_unsigned_to_nat(416u);
v___x_5338_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0));
v___x_5339_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5340_ = l_mkPanicMessageWithDecl(v___x_5339_, v___x_5338_, v___x_5337_, v___x_5336_, v___x_5335_);
return v___x_5340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5341_, lean_object* v_fixedArgs_5342_, lean_object* v_varyingArgs_5343_){
_start:
{
lean_object* v___x_5344_; lean_object* v___x_5345_; uint8_t v___x_5346_; 
v___x_5344_ = lean_array_get_size(v_fixedArgs_5342_);
v___x_5345_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5341_);
v___x_5346_ = lean_nat_dec_eq(v___x_5344_, v___x_5345_);
lean_dec(v___x_5345_);
if (v___x_5346_ == 0)
{
lean_object* v___x_5347_; lean_object* v___x_5348_; 
lean_dec_ref(v_varyingArgs_5343_);
lean_dec_ref(v_perm_5341_);
v___x_5347_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5348_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5347_);
return v___x_5348_;
}
else
{
lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; 
v___x_5349_ = lean_unsigned_to_nat(0u);
v___x_5350_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5351_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5341_, v_fixedArgs_5342_, v_varyingArgs_5343_, v___x_5349_, v___x_5349_, v___x_5350_);
return v___x_5351_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5352_, lean_object* v_fixedArgs_5353_, lean_object* v_varyingArgs_5354_){
_start:
{
lean_object* v_res_5355_; 
v_res_5355_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5352_, v_fixedArgs_5353_, v_varyingArgs_5354_);
lean_dec_ref(v_fixedArgs_5353_);
return v_res_5355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5356_, lean_object* v_perm_5357_, lean_object* v_fixedArgs_5358_, lean_object* v_varyingArgs_5359_){
_start:
{
lean_object* v___x_5360_; 
v___x_5360_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5357_, v_fixedArgs_5358_, v_varyingArgs_5359_);
return v___x_5360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5361_, lean_object* v_perm_5362_, lean_object* v_fixedArgs_5363_, lean_object* v_varyingArgs_5364_){
_start:
{
lean_object* v_res_5365_; 
v_res_5365_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5361_, v_perm_5362_, v_fixedArgs_5363_, v_varyingArgs_5364_);
lean_dec_ref(v_fixedArgs_5363_);
return v_res_5365_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5366_, lean_object* v_x_5367_){
_start:
{
if (lean_obj_tag(v_x_5366_) == 0)
{
if (lean_obj_tag(v_x_5367_) == 0)
{
uint8_t v___x_5368_; 
v___x_5368_ = 1;
return v___x_5368_;
}
else
{
uint8_t v___x_5369_; 
v___x_5369_ = 0;
return v___x_5369_;
}
}
else
{
if (lean_obj_tag(v_x_5367_) == 0)
{
uint8_t v___x_5370_; 
v___x_5370_ = 0;
return v___x_5370_;
}
else
{
lean_object* v_val_5371_; lean_object* v_val_5372_; uint8_t v___x_5373_; 
v_val_5371_ = lean_ctor_get(v_x_5366_, 0);
v_val_5372_ = lean_ctor_get(v_x_5367_, 0);
v___x_5373_ = lean_nat_dec_eq(v_val_5371_, v_val_5372_);
return v___x_5373_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5374_, lean_object* v_x_5375_){
_start:
{
uint8_t v_res_5376_; lean_object* v_r_5377_; 
v_res_5376_ = l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5374_, v_x_5375_);
lean_dec(v_x_5375_);
lean_dec(v_x_5374_);
v_r_5377_ = lean_box(v_res_5376_);
return v_r_5377_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5378_, lean_object* v_ys_5379_, lean_object* v_x_5380_){
_start:
{
lean_object* v_zero_5381_; uint8_t v_isZero_5382_; 
v_zero_5381_ = lean_unsigned_to_nat(0u);
v_isZero_5382_ = lean_nat_dec_eq(v_x_5380_, v_zero_5381_);
if (v_isZero_5382_ == 1)
{
lean_dec(v_x_5380_);
return v_isZero_5382_;
}
else
{
lean_object* v_one_5383_; lean_object* v_n_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; uint8_t v___x_5387_; 
v_one_5383_ = lean_unsigned_to_nat(1u);
v_n_5384_ = lean_nat_sub(v_x_5380_, v_one_5383_);
lean_dec(v_x_5380_);
v___x_5385_ = lean_array_fget_borrowed(v_xs_5378_, v_n_5384_);
v___x_5386_ = lean_array_fget_borrowed(v_ys_5379_, v_n_5384_);
v___x_5387_ = l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5385_, v___x_5386_);
if (v___x_5387_ == 0)
{
lean_dec(v_n_5384_);
return v___x_5387_;
}
else
{
v_x_5380_ = v_n_5384_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5389_, lean_object* v_ys_5390_, lean_object* v_x_5391_){
_start:
{
uint8_t v_res_5392_; lean_object* v_r_5393_; 
v_res_5392_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5389_, v_ys_5390_, v_x_5391_);
lean_dec_ref(v_ys_5390_);
lean_dec_ref(v_xs_5389_);
v_r_5393_ = lean_box(v_res_5392_);
return v_r_5393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5394_, size_t v_i_5395_, lean_object* v_bs_5396_){
_start:
{
uint8_t v___x_5397_; 
v___x_5397_ = lean_usize_dec_lt(v_i_5395_, v_sz_5394_);
if (v___x_5397_ == 0)
{
return v_bs_5396_;
}
else
{
lean_object* v_v_5398_; lean_object* v___x_5399_; lean_object* v_bs_x27_5400_; lean_object* v___x_5401_; size_t v___x_5402_; size_t v___x_5403_; lean_object* v___x_5404_; 
v_v_5398_ = lean_array_uget(v_bs_5396_, v_i_5395_);
v___x_5399_ = lean_unsigned_to_nat(0u);
v_bs_x27_5400_ = lean_array_uset(v_bs_5396_, v_i_5395_, v___x_5399_);
v___x_5401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5401_, 0, v_v_5398_);
v___x_5402_ = ((size_t)1ULL);
v___x_5403_ = lean_usize_add(v_i_5395_, v___x_5402_);
v___x_5404_ = lean_array_uset(v_bs_x27_5400_, v_i_5395_, v___x_5401_);
v_i_5395_ = v___x_5403_;
v_bs_5396_ = v___x_5404_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5406_, lean_object* v_i_5407_, lean_object* v_bs_5408_){
_start:
{
size_t v_sz_boxed_5409_; size_t v_i_boxed_5410_; lean_object* v_res_5411_; 
v_sz_boxed_5409_ = lean_unbox_usize(v_sz_5406_);
lean_dec(v_sz_5406_);
v_i_boxed_5410_ = lean_unbox_usize(v_i_5407_);
lean_dec(v_i_5407_);
v_res_5411_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5409_, v_i_boxed_5410_, v_bs_5408_);
return v_res_5411_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5412_, lean_object* v_as_5413_, size_t v_i_5414_, size_t v_stop_5415_){
_start:
{
uint8_t v___x_5416_; 
v___x_5416_ = lean_usize_dec_eq(v_i_5414_, v_stop_5415_);
if (v___x_5416_ == 0)
{
lean_object* v_numFixed_5417_; uint8_t v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; size_t v_sz_5421_; size_t v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; uint8_t v___x_5430_; 
v_numFixed_5417_ = lean_ctor_get(v_fixedParamPerms_5412_, 0);
v___x_5418_ = 1;
v___x_5419_ = lean_array_uget_borrowed(v_as_5413_, v_i_5414_);
lean_inc(v_numFixed_5417_);
v___x_5420_ = l_Array_range(v_numFixed_5417_);
v_sz_5421_ = lean_array_size(v___x_5420_);
v___x_5422_ = ((size_t)0ULL);
v___x_5423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5421_, v___x_5422_, v___x_5420_);
v___x_5424_ = lean_array_get_size(v___x_5419_);
v___x_5425_ = lean_nat_sub(v___x_5424_, v_numFixed_5417_);
v___x_5426_ = lean_box(0);
v___x_5427_ = lean_mk_array(v___x_5425_, v___x_5426_);
v___x_5428_ = l_Array_append___redArg(v___x_5423_, v___x_5427_);
lean_dec_ref(v___x_5427_);
v___x_5429_ = lean_array_get_size(v___x_5428_);
v___x_5430_ = lean_nat_dec_eq(v___x_5424_, v___x_5429_);
if (v___x_5430_ == 0)
{
lean_dec_ref(v___x_5428_);
lean_dec_ref(v_fixedParamPerms_5412_);
return v___x_5418_;
}
else
{
uint8_t v___x_5431_; 
v___x_5431_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5419_, v___x_5428_, v___x_5424_);
lean_dec_ref(v___x_5428_);
if (v___x_5431_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5412_);
return v___x_5418_;
}
else
{
size_t v___x_5432_; size_t v___x_5433_; 
v___x_5432_ = ((size_t)1ULL);
v___x_5433_ = lean_usize_add(v_i_5414_, v___x_5432_);
v_i_5414_ = v___x_5433_;
goto _start;
}
}
}
else
{
uint8_t v___x_5435_; 
lean_dec_ref(v_fixedParamPerms_5412_);
v___x_5435_ = 0;
return v___x_5435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5436_, lean_object* v_as_5437_, lean_object* v_i_5438_, lean_object* v_stop_5439_){
_start:
{
size_t v_i_boxed_5440_; size_t v_stop_boxed_5441_; uint8_t v_res_5442_; lean_object* v_r_5443_; 
v_i_boxed_5440_ = lean_unbox_usize(v_i_5438_);
lean_dec(v_i_5438_);
v_stop_boxed_5441_ = lean_unbox_usize(v_stop_5439_);
lean_dec(v_stop_5439_);
v_res_5442_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5436_, v_as_5437_, v_i_boxed_5440_, v_stop_boxed_5441_);
lean_dec_ref(v_as_5437_);
v_r_5443_ = lean_box(v_res_5442_);
return v_r_5443_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5444_){
_start:
{
lean_object* v_perms_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; uint8_t v___x_5448_; 
v_perms_5445_ = lean_ctor_get(v_fixedParamPerms_5444_, 1);
lean_inc_ref(v_perms_5445_);
v___x_5446_ = lean_unsigned_to_nat(0u);
v___x_5447_ = lean_array_get_size(v_perms_5445_);
v___x_5448_ = lean_nat_dec_lt(v___x_5446_, v___x_5447_);
if (v___x_5448_ == 0)
{
uint8_t v___x_5449_; 
lean_dec_ref(v_perms_5445_);
lean_dec_ref(v_fixedParamPerms_5444_);
v___x_5449_ = 1;
return v___x_5449_;
}
else
{
if (v___x_5448_ == 0)
{
lean_dec_ref(v_perms_5445_);
lean_dec_ref(v_fixedParamPerms_5444_);
return v___x_5448_;
}
else
{
size_t v___x_5450_; size_t v___x_5451_; uint8_t v___x_5452_; 
v___x_5450_ = ((size_t)0ULL);
v___x_5451_ = lean_usize_of_nat(v___x_5447_);
v___x_5452_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5444_, v_perms_5445_, v___x_5450_, v___x_5451_);
lean_dec_ref(v_perms_5445_);
if (v___x_5452_ == 0)
{
return v___x_5448_;
}
else
{
uint8_t v___x_5453_; 
v___x_5453_ = 0;
return v___x_5453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5454_){
_start:
{
uint8_t v_res_5455_; lean_object* v_r_5456_; 
v_res_5455_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5454_);
v_r_5456_ = lean_box(v_res_5455_);
return v_r_5456_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5457_, lean_object* v_ys_5458_, lean_object* v_hsz_5459_, lean_object* v_x_5460_, lean_object* v_x_5461_){
_start:
{
uint8_t v___x_5462_; 
v___x_5462_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5457_, v_ys_5458_, v_x_5460_);
return v___x_5462_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5463_, lean_object* v_ys_5464_, lean_object* v_hsz_5465_, lean_object* v_x_5466_, lean_object* v_x_5467_){
_start:
{
uint8_t v_res_5468_; lean_object* v_r_5469_; 
v_res_5468_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5463_, v_ys_5464_, v_hsz_5465_, v_x_5466_, v_x_5467_);
lean_dec_ref(v_ys_5464_);
lean_dec_ref(v_xs_5463_);
v_r_5469_ = lean_box(v_res_5468_);
return v_r_5469_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5470_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5471_, 0, v___x_5470_);
lean_ctor_set(v___x_5471_, 1, v___x_5470_);
return v___x_5471_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5472_){
_start:
{
lean_object* v___f_5473_; lean_object* v___f_5474_; lean_object* v___f_5475_; lean_object* v___f_5476_; lean_object* v___f_5477_; lean_object* v___f_5478_; lean_object* v___f_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; 
v___f_5473_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5474_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5475_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5476_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5477_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5478_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5479_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5480_, 0, v___f_5473_);
lean_ctor_set(v___x_5480_, 1, v___f_5474_);
v___x_5481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5481_, 0, v___x_5480_);
lean_ctor_set(v___x_5481_, 1, v___f_5475_);
lean_ctor_set(v___x_5481_, 2, v___f_5476_);
lean_ctor_set(v___x_5481_, 3, v___f_5477_);
lean_ctor_set(v___x_5481_, 4, v___f_5478_);
v___x_5482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5482_, 0, v___x_5481_);
lean_ctor_set(v___x_5482_, 1, v___f_5479_);
v___x_5483_ = ((lean_object*)(l_Lean_Elab_instInhabitedFixedParamPerms_default));
v___x_5484_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5485_, 0, v___x_5483_);
lean_ctor_set(v___x_5485_, 1, v___x_5484_);
v___x_5486_ = l_instInhabitedOfMonad___redArg(v___x_5482_, v___x_5485_);
v___x_5487_ = lean_panic_fn_borrowed(v___x_5486_, v_msg_5472_);
lean_dec(v___x_5486_);
return v___x_5487_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5488_; lean_object* v___x_5489_; 
v___x_5488_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5489_, 0, v___x_5488_);
return v___x_5489_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5490_){
_start:
{
lean_object* v___f_5491_; lean_object* v___f_5492_; lean_object* v___f_5493_; lean_object* v___f_5494_; lean_object* v___f_5495_; lean_object* v___f_5496_; lean_object* v___f_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; 
v___f_5491_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5492_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5493_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5494_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5495_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5496_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5497_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5498_, 0, v___f_5491_);
lean_ctor_set(v___x_5498_, 1, v___f_5492_);
v___x_5499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5499_, 0, v___x_5498_);
lean_ctor_set(v___x_5499_, 1, v___f_5493_);
lean_ctor_set(v___x_5499_, 2, v___f_5494_);
lean_ctor_set(v___x_5499_, 3, v___f_5495_);
lean_ctor_set(v___x_5499_, 4, v___f_5496_);
v___x_5500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5500_, 0, v___x_5499_);
lean_ctor_set(v___x_5500_, 1, v___f_5497_);
v___x_5501_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5502_ = l_instInhabitedOfMonad___redArg(v___x_5500_, v___x_5501_);
v___x_5503_ = lean_panic_fn_borrowed(v___x_5502_, v_msg_5490_);
lean_dec(v___x_5502_);
return v___x_5503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5504_, lean_object* v___x_5505_, lean_object* v___x_5506_, lean_object* v_as_5507_, size_t v_sz_5508_, size_t v_i_5509_, lean_object* v_b_5510_){
_start:
{
lean_object* v_a_5512_; uint8_t v___x_5516_; 
v___x_5516_ = lean_usize_dec_lt(v_i_5509_, v_sz_5508_);
if (v___x_5516_ == 0)
{
return v_b_5510_;
}
else
{
lean_object* v_fst_5517_; lean_object* v_snd_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5543_; 
v_fst_5517_ = lean_ctor_get(v_b_5510_, 0);
v_snd_5518_ = lean_ctor_get(v_b_5510_, 1);
v_isSharedCheck_5543_ = !lean_is_exclusive(v_b_5510_);
if (v_isSharedCheck_5543_ == 0)
{
v___x_5520_ = v_b_5510_;
v_isShared_5521_ = v_isSharedCheck_5543_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_snd_5518_);
lean_inc(v_fst_5517_);
lean_dec(v_b_5510_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5543_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5522_; lean_object* v_a_5523_; lean_object* v___x_5524_; 
v___x_5522_ = lean_box(0);
v_a_5523_ = lean_array_uget_borrowed(v_as_5507_, v_i_5509_);
v___x_5524_ = lean_array_get_borrowed(v___x_5522_, v___x_5504_, v_a_5523_);
if (lean_obj_tag(v___x_5524_) == 1)
{
lean_object* v_val_5525_; uint8_t v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; uint8_t v___x_5529_; 
v_val_5525_ = lean_ctor_get(v___x_5524_, 0);
v___x_5526_ = 0;
v___x_5527_ = lean_box(v___x_5526_);
v___x_5528_ = lean_array_get(v___x_5527_, v_fst_5517_, v_val_5525_);
lean_dec(v___x_5527_);
v___x_5529_ = lean_unbox(v___x_5528_);
lean_dec(v___x_5528_);
if (v___x_5529_ == 0)
{
uint8_t v_changed_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5535_; 
lean_dec(v_snd_5518_);
v_changed_5530_ = lean_nat_dec_eq(v___x_5505_, v___x_5506_);
v___x_5531_ = lean_box(v_changed_5530_);
v___x_5532_ = lean_array_set(v_fst_5517_, v_val_5525_, v___x_5531_);
v___x_5533_ = lean_box(v_changed_5530_);
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 1, v___x_5533_);
lean_ctor_set(v___x_5520_, 0, v___x_5532_);
v___x_5535_ = v___x_5520_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5536_; 
v_reuseFailAlloc_5536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5536_, 0, v___x_5532_);
lean_ctor_set(v_reuseFailAlloc_5536_, 1, v___x_5533_);
v___x_5535_ = v_reuseFailAlloc_5536_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
v_a_5512_ = v___x_5535_;
goto v___jp_5511_;
}
}
else
{
lean_object* v___x_5538_; 
if (v_isShared_5521_ == 0)
{
v___x_5538_ = v___x_5520_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_fst_5517_);
lean_ctor_set(v_reuseFailAlloc_5539_, 1, v_snd_5518_);
v___x_5538_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
v_a_5512_ = v___x_5538_;
goto v___jp_5511_;
}
}
}
else
{
lean_object* v___x_5541_; 
if (v_isShared_5521_ == 0)
{
v___x_5541_ = v___x_5520_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5542_; 
v_reuseFailAlloc_5542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5542_, 0, v_fst_5517_);
lean_ctor_set(v_reuseFailAlloc_5542_, 1, v_snd_5518_);
v___x_5541_ = v_reuseFailAlloc_5542_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
v_a_5512_ = v___x_5541_;
goto v___jp_5511_;
}
}
}
}
v___jp_5511_:
{
size_t v___x_5513_; size_t v___x_5514_; 
v___x_5513_ = ((size_t)1ULL);
v___x_5514_ = lean_usize_add(v_i_5509_, v___x_5513_);
v_i_5509_ = v___x_5514_;
v_b_5510_ = v_a_5512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5544_, lean_object* v___x_5545_, lean_object* v___x_5546_, lean_object* v_as_5547_, lean_object* v_sz_5548_, lean_object* v_i_5549_, lean_object* v_b_5550_){
_start:
{
size_t v_sz_boxed_5551_; size_t v_i_boxed_5552_; lean_object* v_res_5553_; 
v_sz_boxed_5551_ = lean_unbox_usize(v_sz_5548_);
lean_dec(v_sz_5548_);
v_i_boxed_5552_ = lean_unbox_usize(v_i_5549_);
lean_dec(v_i_5549_);
v_res_5553_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5544_, v___x_5545_, v___x_5546_, v_as_5547_, v_sz_boxed_5551_, v_i_boxed_5552_, v_b_5550_);
lean_dec_ref(v_as_5547_);
lean_dec(v___x_5546_);
lean_dec(v___x_5545_);
lean_dec_ref(v___x_5544_);
return v_res_5553_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5554_, lean_object* v___x_5555_, lean_object* v_fixedParamPerms_5556_, lean_object* v_next_5557_, lean_object* v___x_5558_, lean_object* v___x_5559_, lean_object* v_a_5560_, lean_object* v_b_5561_){
_start:
{
lean_object* v_a_5563_; uint8_t v___x_5567_; 
v___x_5567_ = lean_nat_dec_lt(v_a_5560_, v_upperBound_5554_);
if (v___x_5567_ == 0)
{
lean_dec(v_a_5560_);
return v_b_5561_;
}
else
{
lean_object* v_fst_5568_; lean_object* v_snd_5569_; lean_object* v___x_5571_; uint8_t v_isShared_5572_; uint8_t v_isSharedCheck_5604_; 
v_fst_5568_ = lean_ctor_get(v_b_5561_, 0);
v_snd_5569_ = lean_ctor_get(v_b_5561_, 1);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_b_5561_);
if (v_isSharedCheck_5604_ == 0)
{
v___x_5571_ = v_b_5561_;
v_isShared_5572_ = v_isSharedCheck_5604_;
goto v_resetjp_5570_;
}
else
{
lean_inc(v_snd_5569_);
lean_inc(v_fst_5568_);
lean_dec(v_b_5561_);
v___x_5571_ = lean_box(0);
v_isShared_5572_ = v_isSharedCheck_5604_;
goto v_resetjp_5570_;
}
v_resetjp_5570_:
{
lean_object* v___x_5573_; 
v___x_5573_ = lean_array_fget_borrowed(v___x_5555_, v_a_5560_);
if (lean_obj_tag(v___x_5573_) == 1)
{
lean_object* v_val_5574_; uint8_t v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; uint8_t v___x_5578_; 
v_val_5574_ = lean_ctor_get(v___x_5573_, 0);
v___x_5575_ = 0;
v___x_5576_ = lean_box(v___x_5575_);
v___x_5577_ = lean_array_get(v___x_5576_, v_fst_5568_, v_val_5574_);
lean_dec(v___x_5576_);
v___x_5578_ = lean_unbox(v___x_5577_);
lean_dec(v___x_5577_);
if (v___x_5578_ == 0)
{
lean_object* v___x_5580_; 
if (v_isShared_5572_ == 0)
{
v___x_5580_ = v___x_5571_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_fst_5568_);
lean_ctor_set(v_reuseFailAlloc_5581_, 1, v_snd_5569_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
v_a_5563_ = v___x_5580_;
goto v___jp_5562_;
}
}
else
{
lean_object* v_revDeps_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5587_; 
v_revDeps_5582_ = lean_ctor_get(v_fixedParamPerms_5556_, 2);
v___x_5583_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5584_ = lean_array_get_borrowed(v___x_5583_, v_revDeps_5582_, v_next_5557_);
v___x_5585_ = lean_array_get_borrowed(v___x_5583_, v___x_5584_, v_a_5560_);
if (v_isShared_5572_ == 0)
{
v___x_5587_ = v___x_5571_;
goto v_reusejp_5586_;
}
else
{
lean_object* v_reuseFailAlloc_5600_; 
v_reuseFailAlloc_5600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5600_, 0, v_fst_5568_);
lean_ctor_set(v_reuseFailAlloc_5600_, 1, v_snd_5569_);
v___x_5587_ = v_reuseFailAlloc_5600_;
goto v_reusejp_5586_;
}
v_reusejp_5586_:
{
size_t v_sz_5588_; size_t v___x_5589_; lean_object* v___x_5590_; lean_object* v_fst_5591_; lean_object* v_snd_5592_; lean_object* v___x_5594_; uint8_t v_isShared_5595_; uint8_t v_isSharedCheck_5599_; 
v_sz_5588_ = lean_array_size(v___x_5585_);
v___x_5589_ = ((size_t)0ULL);
v___x_5590_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5555_, v___x_5558_, v___x_5559_, v___x_5585_, v_sz_5588_, v___x_5589_, v___x_5587_);
v_fst_5591_ = lean_ctor_get(v___x_5590_, 0);
v_snd_5592_ = lean_ctor_get(v___x_5590_, 1);
v_isSharedCheck_5599_ = !lean_is_exclusive(v___x_5590_);
if (v_isSharedCheck_5599_ == 0)
{
v___x_5594_ = v___x_5590_;
v_isShared_5595_ = v_isSharedCheck_5599_;
goto v_resetjp_5593_;
}
else
{
lean_inc(v_snd_5592_);
lean_inc(v_fst_5591_);
lean_dec(v___x_5590_);
v___x_5594_ = lean_box(0);
v_isShared_5595_ = v_isSharedCheck_5599_;
goto v_resetjp_5593_;
}
v_resetjp_5593_:
{
lean_object* v___x_5597_; 
if (v_isShared_5595_ == 0)
{
v___x_5597_ = v___x_5594_;
goto v_reusejp_5596_;
}
else
{
lean_object* v_reuseFailAlloc_5598_; 
v_reuseFailAlloc_5598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5598_, 0, v_fst_5591_);
lean_ctor_set(v_reuseFailAlloc_5598_, 1, v_snd_5592_);
v___x_5597_ = v_reuseFailAlloc_5598_;
goto v_reusejp_5596_;
}
v_reusejp_5596_:
{
v_a_5563_ = v___x_5597_;
goto v___jp_5562_;
}
}
}
}
}
else
{
lean_object* v___x_5602_; 
if (v_isShared_5572_ == 0)
{
v___x_5602_ = v___x_5571_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v_fst_5568_);
lean_ctor_set(v_reuseFailAlloc_5603_, 1, v_snd_5569_);
v___x_5602_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
v_a_5563_ = v___x_5602_;
goto v___jp_5562_;
}
}
}
}
v___jp_5562_:
{
lean_object* v___x_5564_; lean_object* v___x_5565_; 
v___x_5564_ = lean_unsigned_to_nat(1u);
v___x_5565_ = lean_nat_add(v_a_5560_, v___x_5564_);
lean_dec(v_a_5560_);
v_a_5560_ = v___x_5565_;
v_b_5561_ = v_a_5563_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5605_, lean_object* v___x_5606_, lean_object* v_fixedParamPerms_5607_, lean_object* v_next_5608_, lean_object* v___x_5609_, lean_object* v___x_5610_, lean_object* v_a_5611_, lean_object* v_b_5612_){
_start:
{
lean_object* v_res_5613_; 
v_res_5613_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5605_, v___x_5606_, v_fixedParamPerms_5607_, v_next_5608_, v___x_5609_, v___x_5610_, v_a_5611_, v_b_5612_);
lean_dec(v___x_5610_);
lean_dec(v___x_5609_);
lean_dec(v_next_5608_);
lean_dec_ref(v_fixedParamPerms_5607_);
lean_dec_ref(v___x_5606_);
lean_dec(v_upperBound_5605_);
return v_res_5613_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(lean_object* v_upperBound_5614_, lean_object* v___x_5615_, lean_object* v_fixedParamPerms_5616_, lean_object* v___x_5617_, lean_object* v___x_5618_, lean_object* v_a_5619_, lean_object* v_b_5620_){
_start:
{
uint8_t v___x_5621_; 
v___x_5621_ = lean_nat_dec_lt(v_a_5619_, v_upperBound_5614_);
if (v___x_5621_ == 0)
{
lean_dec(v_a_5619_);
return v_b_5620_;
}
else
{
lean_object* v_fst_5622_; lean_object* v_snd_5623_; lean_object* v___x_5625_; uint8_t v_isShared_5626_; uint8_t v_isSharedCheck_5646_; 
v_fst_5622_ = lean_ctor_get(v_b_5620_, 0);
v_snd_5623_ = lean_ctor_get(v_b_5620_, 1);
v_isSharedCheck_5646_ = !lean_is_exclusive(v_b_5620_);
if (v_isSharedCheck_5646_ == 0)
{
v___x_5625_ = v_b_5620_;
v_isShared_5626_ = v_isSharedCheck_5646_;
goto v_resetjp_5624_;
}
else
{
lean_inc(v_snd_5623_);
lean_inc(v_fst_5622_);
lean_dec(v_b_5620_);
v___x_5625_ = lean_box(0);
v_isShared_5626_ = v_isSharedCheck_5646_;
goto v_resetjp_5624_;
}
v_resetjp_5624_:
{
lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5631_; 
v___x_5627_ = lean_array_fget_borrowed(v___x_5615_, v_a_5619_);
v___x_5628_ = lean_array_get_size(v___x_5627_);
v___x_5629_ = lean_unsigned_to_nat(0u);
if (v_isShared_5626_ == 0)
{
v___x_5631_ = v___x_5625_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v_fst_5622_);
lean_ctor_set(v_reuseFailAlloc_5645_, 1, v_snd_5623_);
v___x_5631_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
lean_object* v___x_5632_; lean_object* v_fst_5633_; lean_object* v_snd_5634_; lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5644_; 
v___x_5632_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5628_, v___x_5627_, v_fixedParamPerms_5616_, v_a_5619_, v___x_5617_, v___x_5618_, v___x_5629_, v___x_5631_);
v_fst_5633_ = lean_ctor_get(v___x_5632_, 0);
v_snd_5634_ = lean_ctor_get(v___x_5632_, 1);
v_isSharedCheck_5644_ = !lean_is_exclusive(v___x_5632_);
if (v_isSharedCheck_5644_ == 0)
{
v___x_5636_ = v___x_5632_;
v_isShared_5637_ = v_isSharedCheck_5644_;
goto v_resetjp_5635_;
}
else
{
lean_inc(v_snd_5634_);
lean_inc(v_fst_5633_);
lean_dec(v___x_5632_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5644_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5639_; 
if (v_isShared_5637_ == 0)
{
v___x_5639_ = v___x_5636_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5643_; 
v_reuseFailAlloc_5643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5643_, 0, v_fst_5633_);
lean_ctor_set(v_reuseFailAlloc_5643_, 1, v_snd_5634_);
v___x_5639_ = v_reuseFailAlloc_5643_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
lean_object* v___x_5640_; lean_object* v___x_5641_; 
v___x_5640_ = lean_unsigned_to_nat(1u);
v___x_5641_ = lean_nat_add(v_a_5619_, v___x_5640_);
lean_dec(v_a_5619_);
v_a_5619_ = v___x_5641_;
v_b_5620_ = v___x_5639_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg___boxed(lean_object* v_upperBound_5647_, lean_object* v___x_5648_, lean_object* v_fixedParamPerms_5649_, lean_object* v___x_5650_, lean_object* v___x_5651_, lean_object* v_a_5652_, lean_object* v_b_5653_){
_start:
{
lean_object* v_res_5654_; 
v_res_5654_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_5647_, v___x_5648_, v_fixedParamPerms_5649_, v___x_5650_, v___x_5651_, v_a_5652_, v_b_5653_);
lean_dec(v___x_5651_);
lean_dec(v___x_5650_);
lean_dec_ref(v_fixedParamPerms_5649_);
lean_dec_ref(v___x_5648_);
lean_dec(v_upperBound_5647_);
return v_res_5654_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5655_, lean_object* v___x_5656_, lean_object* v___x_5657_, lean_object* v___x_5658_, lean_object* v_fixedParamPerms_5659_, lean_object* v_a_5660_, lean_object* v_b_5661_){
_start:
{
uint8_t v___x_5662_; 
v___x_5662_ = lean_nat_dec_lt(v_a_5660_, v_upperBound_5655_);
if (v___x_5662_ == 0)
{
return v_b_5661_;
}
else
{
lean_object* v_fst_5663_; lean_object* v_snd_5664_; lean_object* v___x_5666_; uint8_t v_isShared_5667_; uint8_t v_isSharedCheck_5687_; 
v_fst_5663_ = lean_ctor_get(v_b_5661_, 0);
v_snd_5664_ = lean_ctor_get(v_b_5661_, 1);
v_isSharedCheck_5687_ = !lean_is_exclusive(v_b_5661_);
if (v_isSharedCheck_5687_ == 0)
{
v___x_5666_ = v_b_5661_;
v_isShared_5667_ = v_isSharedCheck_5687_;
goto v_resetjp_5665_;
}
else
{
lean_inc(v_snd_5664_);
lean_inc(v_fst_5663_);
lean_dec(v_b_5661_);
v___x_5666_ = lean_box(0);
v_isShared_5667_ = v_isSharedCheck_5687_;
goto v_resetjp_5665_;
}
v_resetjp_5665_:
{
lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5672_; 
v___x_5668_ = lean_array_fget_borrowed(v___x_5656_, v_a_5660_);
v___x_5669_ = lean_array_get_size(v___x_5668_);
v___x_5670_ = lean_unsigned_to_nat(0u);
if (v_isShared_5667_ == 0)
{
v___x_5672_ = v___x_5666_;
goto v_reusejp_5671_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v_fst_5663_);
lean_ctor_set(v_reuseFailAlloc_5686_, 1, v_snd_5664_);
v___x_5672_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5671_;
}
v_reusejp_5671_:
{
lean_object* v___x_5673_; lean_object* v_fst_5674_; lean_object* v_snd_5675_; lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5685_; 
v___x_5673_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5669_, v___x_5668_, v_fixedParamPerms_5659_, v_a_5660_, v___x_5657_, v___x_5658_, v___x_5670_, v___x_5672_);
v_fst_5674_ = lean_ctor_get(v___x_5673_, 0);
v_snd_5675_ = lean_ctor_get(v___x_5673_, 1);
v_isSharedCheck_5685_ = !lean_is_exclusive(v___x_5673_);
if (v_isSharedCheck_5685_ == 0)
{
v___x_5677_ = v___x_5673_;
v_isShared_5678_ = v_isSharedCheck_5685_;
goto v_resetjp_5676_;
}
else
{
lean_inc(v_snd_5675_);
lean_inc(v_fst_5674_);
lean_dec(v___x_5673_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5685_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v___x_5680_; 
if (v_isShared_5678_ == 0)
{
v___x_5680_ = v___x_5677_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v_fst_5674_);
lean_ctor_set(v_reuseFailAlloc_5684_, 1, v_snd_5675_);
v___x_5680_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; 
v___x_5681_ = lean_unsigned_to_nat(1u);
v___x_5682_ = lean_nat_add(v_a_5660_, v___x_5681_);
v___x_5683_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_5655_, v___x_5656_, v_fixedParamPerms_5659_, v___x_5657_, v___x_5658_, v___x_5682_, v___x_5680_);
return v___x_5683_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5688_, lean_object* v___x_5689_, lean_object* v___x_5690_, lean_object* v___x_5691_, lean_object* v_fixedParamPerms_5692_, lean_object* v_a_5693_, lean_object* v_b_5694_){
_start:
{
lean_object* v_res_5695_; 
v_res_5695_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5688_, v___x_5689_, v___x_5690_, v___x_5691_, v_fixedParamPerms_5692_, v_a_5693_, v_b_5694_);
lean_dec(v_a_5693_);
lean_dec_ref(v_fixedParamPerms_5692_);
lean_dec(v___x_5691_);
lean_dec(v___x_5690_);
lean_dec_ref(v___x_5689_);
lean_dec(v_upperBound_5688_);
return v_res_5695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object* v___x_5696_, lean_object* v___x_5697_, lean_object* v___x_5698_, lean_object* v_fixedParamPerms_5699_, lean_object* v_a_5700_){
_start:
{
lean_object* v_snd_5701_; uint8_t v___x_5702_; 
v_snd_5701_ = lean_ctor_get(v_a_5700_, 1);
v___x_5702_ = lean_unbox(v_snd_5701_);
if (v___x_5702_ == 0)
{
lean_object* v_fst_5703_; lean_object* v___x_5705_; uint8_t v_isShared_5706_; uint8_t v_isSharedCheck_5710_; 
lean_inc(v_snd_5701_);
v_fst_5703_ = lean_ctor_get(v_a_5700_, 0);
v_isSharedCheck_5710_ = !lean_is_exclusive(v_a_5700_);
if (v_isSharedCheck_5710_ == 0)
{
lean_object* v_unused_5711_; 
v_unused_5711_ = lean_ctor_get(v_a_5700_, 1);
lean_dec(v_unused_5711_);
v___x_5705_ = v_a_5700_;
v_isShared_5706_ = v_isSharedCheck_5710_;
goto v_resetjp_5704_;
}
else
{
lean_inc(v_fst_5703_);
lean_dec(v_a_5700_);
v___x_5705_ = lean_box(0);
v_isShared_5706_ = v_isSharedCheck_5710_;
goto v_resetjp_5704_;
}
v_resetjp_5704_:
{
lean_object* v___x_5708_; 
if (v_isShared_5706_ == 0)
{
v___x_5708_ = v___x_5705_;
goto v_reusejp_5707_;
}
else
{
lean_object* v_reuseFailAlloc_5709_; 
v_reuseFailAlloc_5709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5709_, 0, v_fst_5703_);
lean_ctor_set(v_reuseFailAlloc_5709_, 1, v_snd_5701_);
v___x_5708_ = v_reuseFailAlloc_5709_;
goto v_reusejp_5707_;
}
v_reusejp_5707_:
{
return v___x_5708_;
}
}
}
else
{
lean_object* v_fst_5712_; lean_object* v___x_5714_; uint8_t v_isShared_5715_; uint8_t v_isSharedCheck_5733_; 
v_fst_5712_ = lean_ctor_get(v_a_5700_, 0);
v_isSharedCheck_5733_ = !lean_is_exclusive(v_a_5700_);
if (v_isSharedCheck_5733_ == 0)
{
lean_object* v_unused_5734_; 
v_unused_5734_ = lean_ctor_get(v_a_5700_, 1);
lean_dec(v_unused_5734_);
v___x_5714_ = v_a_5700_;
v_isShared_5715_ = v_isSharedCheck_5733_;
goto v_resetjp_5713_;
}
else
{
lean_inc(v_fst_5712_);
lean_dec(v_a_5700_);
v___x_5714_ = lean_box(0);
v_isShared_5715_ = v_isSharedCheck_5733_;
goto v_resetjp_5713_;
}
v_resetjp_5713_:
{
uint8_t v_changed_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5720_; 
v_changed_5716_ = 0;
v___x_5717_ = lean_unsigned_to_nat(0u);
v___x_5718_ = lean_box(v_changed_5716_);
if (v_isShared_5715_ == 0)
{
lean_ctor_set(v___x_5714_, 1, v___x_5718_);
v___x_5720_ = v___x_5714_;
goto v_reusejp_5719_;
}
else
{
lean_object* v_reuseFailAlloc_5732_; 
v_reuseFailAlloc_5732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5732_, 0, v_fst_5712_);
lean_ctor_set(v_reuseFailAlloc_5732_, 1, v___x_5718_);
v___x_5720_ = v_reuseFailAlloc_5732_;
goto v_reusejp_5719_;
}
v_reusejp_5719_:
{
lean_object* v___x_5721_; lean_object* v_fst_5722_; lean_object* v_snd_5723_; lean_object* v___x_5725_; uint8_t v_isShared_5726_; uint8_t v_isSharedCheck_5731_; 
v___x_5721_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5696_, v___x_5697_, v___x_5698_, v___x_5696_, v_fixedParamPerms_5699_, v___x_5717_, v___x_5720_);
v_fst_5722_ = lean_ctor_get(v___x_5721_, 0);
v_snd_5723_ = lean_ctor_get(v___x_5721_, 1);
v_isSharedCheck_5731_ = !lean_is_exclusive(v___x_5721_);
if (v_isSharedCheck_5731_ == 0)
{
v___x_5725_ = v___x_5721_;
v_isShared_5726_ = v_isSharedCheck_5731_;
goto v_resetjp_5724_;
}
else
{
lean_inc(v_snd_5723_);
lean_inc(v_fst_5722_);
lean_dec(v___x_5721_);
v___x_5725_ = lean_box(0);
v_isShared_5726_ = v_isSharedCheck_5731_;
goto v_resetjp_5724_;
}
v_resetjp_5724_:
{
lean_object* v___x_5728_; 
if (v_isShared_5726_ == 0)
{
v___x_5728_ = v___x_5725_;
goto v_reusejp_5727_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v_fst_5722_);
lean_ctor_set(v_reuseFailAlloc_5730_, 1, v_snd_5723_);
v___x_5728_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5727_;
}
v_reusejp_5727_:
{
v_a_5700_ = v___x_5728_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object* v___x_5735_, lean_object* v___x_5736_, lean_object* v___x_5737_, lean_object* v_fixedParamPerms_5738_, lean_object* v_a_5739_){
_start:
{
lean_object* v_res_5740_; 
v_res_5740_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_5735_, v___x_5736_, v___x_5737_, v_fixedParamPerms_5738_, v_a_5739_);
lean_dec_ref(v_fixedParamPerms_5738_);
lean_dec(v___x_5737_);
lean_dec_ref(v___x_5736_);
lean_dec(v___x_5735_);
return v_res_5740_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5741_, lean_object* v_a_5742_, lean_object* v_b_5743_){
_start:
{
lean_object* v_a_5745_; uint8_t v___x_5749_; 
v___x_5749_ = lean_nat_dec_lt(v_a_5742_, v_upperBound_5741_);
if (v___x_5749_ == 0)
{
lean_dec(v_a_5742_);
return v_b_5743_;
}
else
{
lean_object* v_snd_5750_; lean_object* v_snd_5751_; lean_object* v_snd_5752_; lean_object* v_snd_5753_; lean_object* v_fst_5754_; lean_object* v___x_5756_; uint8_t v_isShared_5757_; uint8_t v_isSharedCheck_5866_; 
v_snd_5750_ = lean_ctor_get(v_b_5743_, 1);
lean_inc(v_snd_5750_);
v_snd_5751_ = lean_ctor_get(v_snd_5750_, 1);
lean_inc(v_snd_5751_);
v_snd_5752_ = lean_ctor_get(v_snd_5751_, 1);
lean_inc(v_snd_5752_);
v_snd_5753_ = lean_ctor_get(v_snd_5752_, 1);
lean_inc(v_snd_5753_);
v_fst_5754_ = lean_ctor_get(v_b_5743_, 0);
v_isSharedCheck_5866_ = !lean_is_exclusive(v_b_5743_);
if (v_isSharedCheck_5866_ == 0)
{
lean_object* v_unused_5867_; 
v_unused_5867_ = lean_ctor_get(v_b_5743_, 1);
lean_dec(v_unused_5867_);
v___x_5756_ = v_b_5743_;
v_isShared_5757_ = v_isSharedCheck_5866_;
goto v_resetjp_5755_;
}
else
{
lean_inc(v_fst_5754_);
lean_dec(v_b_5743_);
v___x_5756_ = lean_box(0);
v_isShared_5757_ = v_isSharedCheck_5866_;
goto v_resetjp_5755_;
}
v_resetjp_5755_:
{
lean_object* v_fst_5758_; lean_object* v___x_5760_; uint8_t v_isShared_5761_; uint8_t v_isSharedCheck_5864_; 
v_fst_5758_ = lean_ctor_get(v_snd_5750_, 0);
v_isSharedCheck_5864_ = !lean_is_exclusive(v_snd_5750_);
if (v_isSharedCheck_5864_ == 0)
{
lean_object* v_unused_5865_; 
v_unused_5865_ = lean_ctor_get(v_snd_5750_, 1);
lean_dec(v_unused_5865_);
v___x_5760_ = v_snd_5750_;
v_isShared_5761_ = v_isSharedCheck_5864_;
goto v_resetjp_5759_;
}
else
{
lean_inc(v_fst_5758_);
lean_dec(v_snd_5750_);
v___x_5760_ = lean_box(0);
v_isShared_5761_ = v_isSharedCheck_5864_;
goto v_resetjp_5759_;
}
v_resetjp_5759_:
{
lean_object* v_fst_5762_; lean_object* v___x_5764_; uint8_t v_isShared_5765_; uint8_t v_isSharedCheck_5862_; 
v_fst_5762_ = lean_ctor_get(v_snd_5751_, 0);
v_isSharedCheck_5862_ = !lean_is_exclusive(v_snd_5751_);
if (v_isSharedCheck_5862_ == 0)
{
lean_object* v_unused_5863_; 
v_unused_5863_ = lean_ctor_get(v_snd_5751_, 1);
lean_dec(v_unused_5863_);
v___x_5764_ = v_snd_5751_;
v_isShared_5765_ = v_isSharedCheck_5862_;
goto v_resetjp_5763_;
}
else
{
lean_inc(v_fst_5762_);
lean_dec(v_snd_5751_);
v___x_5764_ = lean_box(0);
v_isShared_5765_ = v_isSharedCheck_5862_;
goto v_resetjp_5763_;
}
v_resetjp_5763_:
{
lean_object* v_fst_5766_; lean_object* v___x_5768_; uint8_t v_isShared_5769_; uint8_t v_isSharedCheck_5860_; 
v_fst_5766_ = lean_ctor_get(v_snd_5752_, 0);
v_isSharedCheck_5860_ = !lean_is_exclusive(v_snd_5752_);
if (v_isSharedCheck_5860_ == 0)
{
lean_object* v_unused_5861_; 
v_unused_5861_ = lean_ctor_get(v_snd_5752_, 1);
lean_dec(v_unused_5861_);
v___x_5768_ = v_snd_5752_;
v_isShared_5769_ = v_isSharedCheck_5860_;
goto v_resetjp_5767_;
}
else
{
lean_inc(v_fst_5766_);
lean_dec(v_snd_5752_);
v___x_5768_ = lean_box(0);
v_isShared_5769_ = v_isSharedCheck_5860_;
goto v_resetjp_5767_;
}
v_resetjp_5767_:
{
lean_object* v_array_5770_; lean_object* v_start_5771_; lean_object* v_stop_5772_; uint8_t v___x_5773_; 
v_array_5770_ = lean_ctor_get(v_snd_5753_, 0);
v_start_5771_ = lean_ctor_get(v_snd_5753_, 1);
v_stop_5772_ = lean_ctor_get(v_snd_5753_, 2);
v___x_5773_ = lean_nat_dec_lt(v_start_5771_, v_stop_5772_);
if (v___x_5773_ == 0)
{
lean_object* v___x_5775_; 
lean_dec(v_a_5742_);
if (v_isShared_5769_ == 0)
{
v___x_5775_ = v___x_5768_;
goto v_reusejp_5774_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v_fst_5766_);
lean_ctor_set(v_reuseFailAlloc_5785_, 1, v_snd_5753_);
v___x_5775_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5774_;
}
v_reusejp_5774_:
{
lean_object* v___x_5777_; 
if (v_isShared_5765_ == 0)
{
lean_ctor_set(v___x_5764_, 1, v___x_5775_);
v___x_5777_ = v___x_5764_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5784_; 
v_reuseFailAlloc_5784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5784_, 0, v_fst_5762_);
lean_ctor_set(v_reuseFailAlloc_5784_, 1, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5784_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
lean_object* v___x_5779_; 
if (v_isShared_5761_ == 0)
{
lean_ctor_set(v___x_5760_, 1, v___x_5777_);
v___x_5779_ = v___x_5760_;
goto v_reusejp_5778_;
}
else
{
lean_object* v_reuseFailAlloc_5783_; 
v_reuseFailAlloc_5783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5783_, 0, v_fst_5758_);
lean_ctor_set(v_reuseFailAlloc_5783_, 1, v___x_5777_);
v___x_5779_ = v_reuseFailAlloc_5783_;
goto v_reusejp_5778_;
}
v_reusejp_5778_:
{
lean_object* v___x_5781_; 
if (v_isShared_5757_ == 0)
{
lean_ctor_set(v___x_5756_, 1, v___x_5779_);
v___x_5781_ = v___x_5756_;
goto v_reusejp_5780_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v_fst_5754_);
lean_ctor_set(v_reuseFailAlloc_5782_, 1, v___x_5779_);
v___x_5781_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5780_;
}
v_reusejp_5780_:
{
return v___x_5781_;
}
}
}
}
}
else
{
lean_object* v___x_5787_; uint8_t v_isShared_5788_; uint8_t v_isSharedCheck_5856_; 
lean_inc(v_stop_5772_);
lean_inc(v_start_5771_);
lean_inc_ref(v_array_5770_);
v_isSharedCheck_5856_ = !lean_is_exclusive(v_snd_5753_);
if (v_isSharedCheck_5856_ == 0)
{
lean_object* v_unused_5857_; lean_object* v_unused_5858_; lean_object* v_unused_5859_; 
v_unused_5857_ = lean_ctor_get(v_snd_5753_, 2);
lean_dec(v_unused_5857_);
v_unused_5858_ = lean_ctor_get(v_snd_5753_, 1);
lean_dec(v_unused_5858_);
v_unused_5859_ = lean_ctor_get(v_snd_5753_, 0);
lean_dec(v_unused_5859_);
v___x_5787_ = v_snd_5753_;
v_isShared_5788_ = v_isSharedCheck_5856_;
goto v_resetjp_5786_;
}
else
{
lean_dec(v_snd_5753_);
v___x_5787_ = lean_box(0);
v_isShared_5788_ = v_isSharedCheck_5856_;
goto v_resetjp_5786_;
}
v_resetjp_5786_:
{
lean_object* v_array_5789_; lean_object* v_start_5790_; lean_object* v_stop_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5796_; 
v_array_5789_ = lean_ctor_get(v_fst_5766_, 0);
v_start_5790_ = lean_ctor_get(v_fst_5766_, 1);
v_stop_5791_ = lean_ctor_get(v_fst_5766_, 2);
v___x_5792_ = lean_array_fget(v_array_5770_, v_start_5771_);
v___x_5793_ = lean_unsigned_to_nat(1u);
v___x_5794_ = lean_nat_add(v_start_5771_, v___x_5793_);
lean_dec(v_start_5771_);
if (v_isShared_5788_ == 0)
{
lean_ctor_set(v___x_5787_, 1, v___x_5794_);
v___x_5796_ = v___x_5787_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5855_; 
v_reuseFailAlloc_5855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5855_, 0, v_array_5770_);
lean_ctor_set(v_reuseFailAlloc_5855_, 1, v___x_5794_);
lean_ctor_set(v_reuseFailAlloc_5855_, 2, v_stop_5772_);
v___x_5796_ = v_reuseFailAlloc_5855_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
uint8_t v___x_5797_; 
v___x_5797_ = lean_nat_dec_lt(v_start_5790_, v_stop_5791_);
if (v___x_5797_ == 0)
{
lean_object* v___x_5799_; 
lean_dec(v___x_5792_);
lean_dec(v_a_5742_);
if (v_isShared_5769_ == 0)
{
lean_ctor_set(v___x_5768_, 1, v___x_5796_);
v___x_5799_ = v___x_5768_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5809_; 
v_reuseFailAlloc_5809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5809_, 0, v_fst_5766_);
lean_ctor_set(v_reuseFailAlloc_5809_, 1, v___x_5796_);
v___x_5799_ = v_reuseFailAlloc_5809_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
lean_object* v___x_5801_; 
if (v_isShared_5765_ == 0)
{
lean_ctor_set(v___x_5764_, 1, v___x_5799_);
v___x_5801_ = v___x_5764_;
goto v_reusejp_5800_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v_fst_5762_);
lean_ctor_set(v_reuseFailAlloc_5808_, 1, v___x_5799_);
v___x_5801_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5800_;
}
v_reusejp_5800_:
{
lean_object* v___x_5803_; 
if (v_isShared_5761_ == 0)
{
lean_ctor_set(v___x_5760_, 1, v___x_5801_);
v___x_5803_ = v___x_5760_;
goto v_reusejp_5802_;
}
else
{
lean_object* v_reuseFailAlloc_5807_; 
v_reuseFailAlloc_5807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5807_, 0, v_fst_5758_);
lean_ctor_set(v_reuseFailAlloc_5807_, 1, v___x_5801_);
v___x_5803_ = v_reuseFailAlloc_5807_;
goto v_reusejp_5802_;
}
v_reusejp_5802_:
{
lean_object* v___x_5805_; 
if (v_isShared_5757_ == 0)
{
lean_ctor_set(v___x_5756_, 1, v___x_5803_);
v___x_5805_ = v___x_5756_;
goto v_reusejp_5804_;
}
else
{
lean_object* v_reuseFailAlloc_5806_; 
v_reuseFailAlloc_5806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5806_, 0, v_fst_5754_);
lean_ctor_set(v_reuseFailAlloc_5806_, 1, v___x_5803_);
v___x_5805_ = v_reuseFailAlloc_5806_;
goto v_reusejp_5804_;
}
v_reusejp_5804_:
{
return v___x_5805_;
}
}
}
}
}
else
{
lean_object* v___x_5811_; uint8_t v_isShared_5812_; uint8_t v_isSharedCheck_5851_; 
lean_inc(v_stop_5791_);
lean_inc(v_start_5790_);
lean_inc_ref(v_array_5789_);
v_isSharedCheck_5851_ = !lean_is_exclusive(v_fst_5766_);
if (v_isSharedCheck_5851_ == 0)
{
lean_object* v_unused_5852_; lean_object* v_unused_5853_; lean_object* v_unused_5854_; 
v_unused_5852_ = lean_ctor_get(v_fst_5766_, 2);
lean_dec(v_unused_5852_);
v_unused_5853_ = lean_ctor_get(v_fst_5766_, 1);
lean_dec(v_unused_5853_);
v_unused_5854_ = lean_ctor_get(v_fst_5766_, 0);
lean_dec(v_unused_5854_);
v___x_5811_ = v_fst_5766_;
v_isShared_5812_ = v_isSharedCheck_5851_;
goto v_resetjp_5810_;
}
else
{
lean_dec(v_fst_5766_);
v___x_5811_ = lean_box(0);
v_isShared_5812_ = v_isSharedCheck_5851_;
goto v_resetjp_5810_;
}
v_resetjp_5810_:
{
lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5816_; 
v___x_5813_ = lean_array_fget(v_array_5789_, v_start_5790_);
v___x_5814_ = lean_nat_add(v_start_5790_, v___x_5793_);
lean_dec(v_start_5790_);
if (v_isShared_5812_ == 0)
{
lean_ctor_set(v___x_5811_, 1, v___x_5814_);
v___x_5816_ = v___x_5811_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5850_; 
v_reuseFailAlloc_5850_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5850_, 0, v_array_5789_);
lean_ctor_set(v_reuseFailAlloc_5850_, 1, v___x_5814_);
lean_ctor_set(v_reuseFailAlloc_5850_, 2, v_stop_5791_);
v___x_5816_ = v_reuseFailAlloc_5850_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
uint8_t v___x_5817_; 
v___x_5817_ = lean_unbox(v___x_5813_);
lean_dec(v___x_5813_);
if (v___x_5817_ == 0)
{
lean_object* v___x_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5823_; 
v___x_5818_ = lean_array_get_size(v_fst_5762_);
v___x_5819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5819_, 0, v___x_5818_);
v___x_5820_ = lean_array_push(v_fst_5754_, v___x_5819_);
v___x_5821_ = lean_array_push(v_fst_5762_, v___x_5792_);
if (v_isShared_5769_ == 0)
{
lean_ctor_set(v___x_5768_, 1, v___x_5796_);
lean_ctor_set(v___x_5768_, 0, v___x_5816_);
v___x_5823_ = v___x_5768_;
goto v_reusejp_5822_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v___x_5816_);
lean_ctor_set(v_reuseFailAlloc_5833_, 1, v___x_5796_);
v___x_5823_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5822_;
}
v_reusejp_5822_:
{
lean_object* v___x_5825_; 
if (v_isShared_5765_ == 0)
{
lean_ctor_set(v___x_5764_, 1, v___x_5823_);
lean_ctor_set(v___x_5764_, 0, v___x_5821_);
v___x_5825_ = v___x_5764_;
goto v_reusejp_5824_;
}
else
{
lean_object* v_reuseFailAlloc_5832_; 
v_reuseFailAlloc_5832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5832_, 0, v___x_5821_);
lean_ctor_set(v_reuseFailAlloc_5832_, 1, v___x_5823_);
v___x_5825_ = v_reuseFailAlloc_5832_;
goto v_reusejp_5824_;
}
v_reusejp_5824_:
{
lean_object* v___x_5827_; 
if (v_isShared_5761_ == 0)
{
lean_ctor_set(v___x_5760_, 1, v___x_5825_);
v___x_5827_ = v___x_5760_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5831_; 
v_reuseFailAlloc_5831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5831_, 0, v_fst_5758_);
lean_ctor_set(v_reuseFailAlloc_5831_, 1, v___x_5825_);
v___x_5827_ = v_reuseFailAlloc_5831_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
lean_object* v___x_5829_; 
if (v_isShared_5757_ == 0)
{
lean_ctor_set(v___x_5756_, 1, v___x_5827_);
lean_ctor_set(v___x_5756_, 0, v___x_5820_);
v___x_5829_ = v___x_5756_;
goto v_reusejp_5828_;
}
else
{
lean_object* v_reuseFailAlloc_5830_; 
v_reuseFailAlloc_5830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5830_, 0, v___x_5820_);
lean_ctor_set(v_reuseFailAlloc_5830_, 1, v___x_5827_);
v___x_5829_ = v_reuseFailAlloc_5830_;
goto v_reusejp_5828_;
}
v_reusejp_5828_:
{
v_a_5745_ = v___x_5829_;
goto v___jp_5744_;
}
}
}
}
}
else
{
lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___x_5839_; 
v___x_5834_ = lean_box(0);
v___x_5835_ = lean_array_push(v_fst_5754_, v___x_5834_);
v___x_5836_ = l_Lean_Expr_fvarId_x21(v___x_5792_);
lean_dec(v___x_5792_);
v___x_5837_ = lean_array_push(v_fst_5758_, v___x_5836_);
if (v_isShared_5769_ == 0)
{
lean_ctor_set(v___x_5768_, 1, v___x_5796_);
lean_ctor_set(v___x_5768_, 0, v___x_5816_);
v___x_5839_ = v___x_5768_;
goto v_reusejp_5838_;
}
else
{
lean_object* v_reuseFailAlloc_5849_; 
v_reuseFailAlloc_5849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5849_, 0, v___x_5816_);
lean_ctor_set(v_reuseFailAlloc_5849_, 1, v___x_5796_);
v___x_5839_ = v_reuseFailAlloc_5849_;
goto v_reusejp_5838_;
}
v_reusejp_5838_:
{
lean_object* v___x_5841_; 
if (v_isShared_5765_ == 0)
{
lean_ctor_set(v___x_5764_, 1, v___x_5839_);
v___x_5841_ = v___x_5764_;
goto v_reusejp_5840_;
}
else
{
lean_object* v_reuseFailAlloc_5848_; 
v_reuseFailAlloc_5848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5848_, 0, v_fst_5762_);
lean_ctor_set(v_reuseFailAlloc_5848_, 1, v___x_5839_);
v___x_5841_ = v_reuseFailAlloc_5848_;
goto v_reusejp_5840_;
}
v_reusejp_5840_:
{
lean_object* v___x_5843_; 
if (v_isShared_5761_ == 0)
{
lean_ctor_set(v___x_5760_, 1, v___x_5841_);
lean_ctor_set(v___x_5760_, 0, v___x_5837_);
v___x_5843_ = v___x_5760_;
goto v_reusejp_5842_;
}
else
{
lean_object* v_reuseFailAlloc_5847_; 
v_reuseFailAlloc_5847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5847_, 0, v___x_5837_);
lean_ctor_set(v_reuseFailAlloc_5847_, 1, v___x_5841_);
v___x_5843_ = v_reuseFailAlloc_5847_;
goto v_reusejp_5842_;
}
v_reusejp_5842_:
{
lean_object* v___x_5845_; 
if (v_isShared_5757_ == 0)
{
lean_ctor_set(v___x_5756_, 1, v___x_5843_);
lean_ctor_set(v___x_5756_, 0, v___x_5835_);
v___x_5845_ = v___x_5756_;
goto v_reusejp_5844_;
}
else
{
lean_object* v_reuseFailAlloc_5846_; 
v_reuseFailAlloc_5846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5846_, 0, v___x_5835_);
lean_ctor_set(v_reuseFailAlloc_5846_, 1, v___x_5843_);
v___x_5845_ = v_reuseFailAlloc_5846_;
goto v_reusejp_5844_;
}
v_reusejp_5844_:
{
v_a_5745_ = v___x_5845_;
goto v___jp_5744_;
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
}
}
}
}
v___jp_5744_:
{
lean_object* v___x_5746_; lean_object* v___x_5747_; 
v___x_5746_ = lean_unsigned_to_nat(1u);
v___x_5747_ = lean_nat_add(v_a_5742_, v___x_5746_);
lean_dec(v_a_5742_);
v_a_5742_ = v___x_5747_;
v_b_5743_ = v_a_5745_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5868_, lean_object* v_a_5869_, lean_object* v_b_5870_){
_start:
{
lean_object* v_res_5871_; 
v_res_5871_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5868_, v_a_5869_, v_b_5870_);
lean_dec(v_upperBound_5868_);
return v_res_5871_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5872_, size_t v_i_5873_, size_t v_stop_5874_){
_start:
{
uint8_t v___x_5875_; 
v___x_5875_ = lean_usize_dec_eq(v_i_5873_, v_stop_5874_);
if (v___x_5875_ == 0)
{
lean_object* v___x_5876_; uint8_t v___x_5877_; 
v___x_5876_ = lean_array_uget_borrowed(v_as_5872_, v_i_5873_);
v___x_5877_ = l_Lean_Expr_isFVar(v___x_5876_);
if (v___x_5877_ == 0)
{
uint8_t v___x_5878_; 
v___x_5878_ = 1;
return v___x_5878_;
}
else
{
size_t v___x_5879_; size_t v___x_5880_; 
v___x_5879_ = ((size_t)1ULL);
v___x_5880_ = lean_usize_add(v_i_5873_, v___x_5879_);
v_i_5873_ = v___x_5880_;
goto _start;
}
}
else
{
uint8_t v___x_5882_; 
v___x_5882_ = 0;
return v___x_5882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5883_, lean_object* v_i_5884_, lean_object* v_stop_5885_){
_start:
{
size_t v_i_boxed_5886_; size_t v_stop_boxed_5887_; uint8_t v_res_5888_; lean_object* v_r_5889_; 
v_i_boxed_5886_ = lean_unbox_usize(v_i_5884_);
lean_dec(v_i_5884_);
v_stop_boxed_5887_ = lean_unbox_usize(v_stop_5885_);
lean_dec(v_stop_5885_);
v_res_5888_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5883_, v_i_boxed_5886_, v_stop_boxed_5887_);
lean_dec_ref(v_as_5883_);
v_r_5889_ = lean_box(v_res_5888_);
return v_r_5889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5890_, size_t v_sz_5891_, size_t v_i_5892_, lean_object* v_bs_5893_){
_start:
{
uint8_t v___x_5894_; 
v___x_5894_ = lean_usize_dec_lt(v_i_5892_, v_sz_5891_);
if (v___x_5894_ == 0)
{
return v_bs_5893_;
}
else
{
lean_object* v_v_5895_; lean_object* v___x_5896_; lean_object* v_bs_x27_5897_; lean_object* v___y_5899_; 
v_v_5895_ = lean_array_uget(v_bs_5893_, v_i_5892_);
v___x_5896_ = lean_unsigned_to_nat(0u);
v_bs_x27_5897_ = lean_array_uset(v_bs_5893_, v_i_5892_, v___x_5896_);
if (lean_obj_tag(v_v_5895_) == 0)
{
v___y_5899_ = v_v_5895_;
goto v___jp_5898_;
}
else
{
lean_object* v_val_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; 
v_val_5904_ = lean_ctor_get(v_v_5895_, 0);
lean_inc(v_val_5904_);
lean_dec_ref_known(v_v_5895_, 1);
v___x_5905_ = lean_box(0);
v___x_5906_ = lean_array_get_borrowed(v___x_5905_, v___x_5890_, v_val_5904_);
lean_dec(v_val_5904_);
lean_inc(v___x_5906_);
v___y_5899_ = v___x_5906_;
goto v___jp_5898_;
}
v___jp_5898_:
{
size_t v___x_5900_; size_t v___x_5901_; lean_object* v___x_5902_; 
v___x_5900_ = ((size_t)1ULL);
v___x_5901_ = lean_usize_add(v_i_5892_, v___x_5900_);
v___x_5902_ = lean_array_uset(v_bs_x27_5897_, v_i_5892_, v___y_5899_);
v_i_5892_ = v___x_5901_;
v_bs_5893_ = v___x_5902_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5907_, lean_object* v_sz_5908_, lean_object* v_i_5909_, lean_object* v_bs_5910_){
_start:
{
size_t v_sz_boxed_5911_; size_t v_i_boxed_5912_; lean_object* v_res_5913_; 
v_sz_boxed_5911_ = lean_unbox_usize(v_sz_5908_);
lean_dec(v_sz_5908_);
v_i_boxed_5912_ = lean_unbox_usize(v_i_5909_);
lean_dec(v_i_5909_);
v_res_5913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5907_, v_sz_boxed_5911_, v_i_boxed_5912_, v_bs_5910_);
lean_dec_ref(v___x_5907_);
return v_res_5913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5914_, size_t v_sz_5915_, size_t v_i_5916_, lean_object* v_bs_5917_){
_start:
{
uint8_t v___x_5918_; 
v___x_5918_ = lean_usize_dec_lt(v_i_5916_, v_sz_5915_);
if (v___x_5918_ == 0)
{
return v_bs_5917_;
}
else
{
lean_object* v_v_5919_; lean_object* v___x_5920_; lean_object* v_bs_x27_5921_; size_t v_sz_5922_; size_t v___x_5923_; lean_object* v___x_5924_; size_t v___x_5925_; size_t v___x_5926_; lean_object* v___x_5927_; 
v_v_5919_ = lean_array_uget(v_bs_5917_, v_i_5916_);
v___x_5920_ = lean_unsigned_to_nat(0u);
v_bs_x27_5921_ = lean_array_uset(v_bs_5917_, v_i_5916_, v___x_5920_);
v_sz_5922_ = lean_array_size(v_v_5919_);
v___x_5923_ = ((size_t)0ULL);
v___x_5924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5914_, v_sz_5922_, v___x_5923_, v_v_5919_);
v___x_5925_ = ((size_t)1ULL);
v___x_5926_ = lean_usize_add(v_i_5916_, v___x_5925_);
v___x_5927_ = lean_array_uset(v_bs_x27_5921_, v_i_5916_, v___x_5924_);
v_i_5916_ = v___x_5926_;
v_bs_5917_ = v___x_5927_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5929_, lean_object* v_sz_5930_, lean_object* v_i_5931_, lean_object* v_bs_5932_){
_start:
{
size_t v_sz_boxed_5933_; size_t v_i_boxed_5934_; lean_object* v_res_5935_; 
v_sz_boxed_5933_ = lean_unbox_usize(v_sz_5930_);
lean_dec(v_sz_5930_);
v_i_boxed_5934_ = lean_unbox_usize(v_i_5931_);
lean_dec(v_i_5931_);
v_res_5935_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5929_, v_sz_boxed_5933_, v_i_boxed_5934_, v_bs_5932_);
lean_dec_ref(v___x_5929_);
return v_res_5935_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; 
v___x_5938_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1));
v___x_5939_ = lean_unsigned_to_nat(6u);
v___x_5940_ = lean_unsigned_to_nat(463u);
v___x_5941_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5942_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5943_ = l_mkPanicMessageWithDecl(v___x_5942_, v___x_5941_, v___x_5940_, v___x_5939_, v___x_5938_);
return v___x_5943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5944_, lean_object* v___x_5945_, lean_object* v___x_5946_, lean_object* v_as_5947_, size_t v_sz_5948_, size_t v_i_5949_, lean_object* v_b_5950_){
_start:
{
lean_object* v_a_5952_; uint8_t v___x_5956_; 
v___x_5956_ = lean_usize_dec_lt(v_i_5949_, v_sz_5948_);
if (v___x_5956_ == 0)
{
return v_b_5950_;
}
else
{
lean_object* v_a_5957_; lean_object* v___x_5958_; uint8_t v___x_5959_; 
v_a_5957_ = lean_array_uget_borrowed(v_as_5947_, v_i_5949_);
v___x_5958_ = lean_array_get_size(v___x_5944_);
v___x_5959_ = lean_nat_dec_lt(v_a_5957_, v___x_5958_);
if (v___x_5959_ == 0)
{
lean_object* v___x_5960_; lean_object* v___x_5961_; 
lean_dec_ref(v_b_5950_);
v___x_5960_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5961_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5960_);
if (lean_obj_tag(v___x_5961_) == 0)
{
lean_object* v_a_5962_; 
v_a_5962_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5962_);
lean_dec_ref_known(v___x_5961_, 1);
return v_a_5962_;
}
else
{
lean_object* v_a_5963_; 
v_a_5963_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5963_);
lean_dec_ref_known(v___x_5961_, 1);
v_a_5952_ = v_a_5963_;
goto v___jp_5951_;
}
}
else
{
lean_object* v___x_5964_; lean_object* v___x_5965_; 
v___x_5964_ = lean_box(0);
v___x_5965_ = lean_array_get_borrowed(v___x_5964_, v___x_5944_, v_a_5957_);
if (lean_obj_tag(v___x_5965_) == 1)
{
lean_object* v_val_5966_; uint8_t v_changed_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; 
v_val_5966_ = lean_ctor_get(v___x_5965_, 0);
v_changed_5967_ = lean_nat_dec_eq(v___x_5945_, v___x_5946_);
v___x_5968_ = lean_box(v_changed_5967_);
v___x_5969_ = lean_array_set(v_b_5950_, v_val_5966_, v___x_5968_);
v_a_5952_ = v___x_5969_;
goto v___jp_5951_;
}
else
{
v_a_5952_ = v_b_5950_;
goto v___jp_5951_;
}
}
}
v___jp_5951_:
{
size_t v___x_5953_; size_t v___x_5954_; 
v___x_5953_ = ((size_t)1ULL);
v___x_5954_ = lean_usize_add(v_i_5949_, v___x_5953_);
v_i_5949_ = v___x_5954_;
v_b_5950_ = v_a_5952_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5970_, lean_object* v___x_5971_, lean_object* v___x_5972_, lean_object* v_as_5973_, lean_object* v_sz_5974_, lean_object* v_i_5975_, lean_object* v_b_5976_){
_start:
{
size_t v_sz_boxed_5977_; size_t v_i_boxed_5978_; lean_object* v_res_5979_; 
v_sz_boxed_5977_ = lean_unbox_usize(v_sz_5974_);
lean_dec(v_sz_5974_);
v_i_boxed_5978_ = lean_unbox_usize(v_i_5975_);
lean_dec(v_i_5975_);
v_res_5979_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5970_, v___x_5971_, v___x_5972_, v_as_5973_, v_sz_boxed_5977_, v_i_boxed_5978_, v_b_5976_);
lean_dec_ref(v_as_5973_);
lean_dec(v___x_5972_);
lean_dec(v___x_5971_);
lean_dec_ref(v___x_5970_);
return v_res_5979_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_5980_, lean_object* v___x_5981_, lean_object* v___x_5982_, lean_object* v_a_5983_, lean_object* v_b_5984_){
_start:
{
uint8_t v___x_5985_; 
v___x_5985_ = lean_nat_dec_lt(v_a_5983_, v_upperBound_5980_);
if (v___x_5985_ == 0)
{
lean_dec(v_a_5983_);
return v_b_5984_;
}
else
{
lean_object* v_snd_5986_; lean_object* v_snd_5987_; lean_object* v_fst_5988_; lean_object* v___x_5990_; uint8_t v_isShared_5991_; uint8_t v_isSharedCheck_6054_; 
v_snd_5986_ = lean_ctor_get(v_b_5984_, 1);
lean_inc(v_snd_5986_);
v_snd_5987_ = lean_ctor_get(v_snd_5986_, 1);
lean_inc(v_snd_5987_);
v_fst_5988_ = lean_ctor_get(v_b_5984_, 0);
v_isSharedCheck_6054_ = !lean_is_exclusive(v_b_5984_);
if (v_isSharedCheck_6054_ == 0)
{
lean_object* v_unused_6055_; 
v_unused_6055_ = lean_ctor_get(v_b_5984_, 1);
lean_dec(v_unused_6055_);
v___x_5990_ = v_b_5984_;
v_isShared_5991_ = v_isSharedCheck_6054_;
goto v_resetjp_5989_;
}
else
{
lean_inc(v_fst_5988_);
lean_dec(v_b_5984_);
v___x_5990_ = lean_box(0);
v_isShared_5991_ = v_isSharedCheck_6054_;
goto v_resetjp_5989_;
}
v_resetjp_5989_:
{
lean_object* v_fst_5992_; lean_object* v___x_5994_; uint8_t v_isShared_5995_; uint8_t v_isSharedCheck_6052_; 
v_fst_5992_ = lean_ctor_get(v_snd_5986_, 0);
v_isSharedCheck_6052_ = !lean_is_exclusive(v_snd_5986_);
if (v_isSharedCheck_6052_ == 0)
{
lean_object* v_unused_6053_; 
v_unused_6053_ = lean_ctor_get(v_snd_5986_, 1);
lean_dec(v_unused_6053_);
v___x_5994_ = v_snd_5986_;
v_isShared_5995_ = v_isSharedCheck_6052_;
goto v_resetjp_5993_;
}
else
{
lean_inc(v_fst_5992_);
lean_dec(v_snd_5986_);
v___x_5994_ = lean_box(0);
v_isShared_5995_ = v_isSharedCheck_6052_;
goto v_resetjp_5993_;
}
v_resetjp_5993_:
{
lean_object* v_array_5996_; lean_object* v_start_5997_; lean_object* v_stop_5998_; uint8_t v___x_5999_; 
v_array_5996_ = lean_ctor_get(v_snd_5987_, 0);
v_start_5997_ = lean_ctor_get(v_snd_5987_, 1);
v_stop_5998_ = lean_ctor_get(v_snd_5987_, 2);
v___x_5999_ = lean_nat_dec_lt(v_start_5997_, v_stop_5998_);
if (v___x_5999_ == 0)
{
lean_object* v___x_6001_; 
lean_dec(v_a_5983_);
if (v_isShared_5995_ == 0)
{
v___x_6001_ = v___x_5994_;
goto v_reusejp_6000_;
}
else
{
lean_object* v_reuseFailAlloc_6005_; 
v_reuseFailAlloc_6005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6005_, 0, v_fst_5992_);
lean_ctor_set(v_reuseFailAlloc_6005_, 1, v_snd_5987_);
v___x_6001_ = v_reuseFailAlloc_6005_;
goto v_reusejp_6000_;
}
v_reusejp_6000_:
{
lean_object* v___x_6003_; 
if (v_isShared_5991_ == 0)
{
lean_ctor_set(v___x_5990_, 1, v___x_6001_);
v___x_6003_ = v___x_5990_;
goto v_reusejp_6002_;
}
else
{
lean_object* v_reuseFailAlloc_6004_; 
v_reuseFailAlloc_6004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6004_, 0, v_fst_5988_);
lean_ctor_set(v_reuseFailAlloc_6004_, 1, v___x_6001_);
v___x_6003_ = v_reuseFailAlloc_6004_;
goto v_reusejp_6002_;
}
v_reusejp_6002_:
{
return v___x_6003_;
}
}
}
else
{
lean_object* v___x_6007_; uint8_t v_isShared_6008_; uint8_t v_isSharedCheck_6048_; 
lean_inc(v_stop_5998_);
lean_inc(v_start_5997_);
lean_inc_ref(v_array_5996_);
v_isSharedCheck_6048_ = !lean_is_exclusive(v_snd_5987_);
if (v_isSharedCheck_6048_ == 0)
{
lean_object* v_unused_6049_; lean_object* v_unused_6050_; lean_object* v_unused_6051_; 
v_unused_6049_ = lean_ctor_get(v_snd_5987_, 2);
lean_dec(v_unused_6049_);
v_unused_6050_ = lean_ctor_get(v_snd_5987_, 1);
lean_dec(v_unused_6050_);
v_unused_6051_ = lean_ctor_get(v_snd_5987_, 0);
lean_dec(v_unused_6051_);
v___x_6007_ = v_snd_5987_;
v_isShared_6008_ = v_isSharedCheck_6048_;
goto v_resetjp_6006_;
}
else
{
lean_dec(v_snd_5987_);
v___x_6007_ = lean_box(0);
v_isShared_6008_ = v_isSharedCheck_6048_;
goto v_resetjp_6006_;
}
v_resetjp_6006_:
{
lean_object* v_array_6009_; lean_object* v_start_6010_; lean_object* v_stop_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6016_; 
v_array_6009_ = lean_ctor_get(v_fst_5992_, 0);
v_start_6010_ = lean_ctor_get(v_fst_5992_, 1);
v_stop_6011_ = lean_ctor_get(v_fst_5992_, 2);
v___x_6012_ = lean_array_fget(v_array_5996_, v_start_5997_);
v___x_6013_ = lean_unsigned_to_nat(1u);
v___x_6014_ = lean_nat_add(v_start_5997_, v___x_6013_);
lean_dec(v_start_5997_);
if (v_isShared_6008_ == 0)
{
lean_ctor_set(v___x_6007_, 1, v___x_6014_);
v___x_6016_ = v___x_6007_;
goto v_reusejp_6015_;
}
else
{
lean_object* v_reuseFailAlloc_6047_; 
v_reuseFailAlloc_6047_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6047_, 0, v_array_5996_);
lean_ctor_set(v_reuseFailAlloc_6047_, 1, v___x_6014_);
lean_ctor_set(v_reuseFailAlloc_6047_, 2, v_stop_5998_);
v___x_6016_ = v_reuseFailAlloc_6047_;
goto v_reusejp_6015_;
}
v_reusejp_6015_:
{
uint8_t v___x_6017_; 
v___x_6017_ = lean_nat_dec_lt(v_start_6010_, v_stop_6011_);
if (v___x_6017_ == 0)
{
lean_object* v___x_6019_; 
lean_dec(v___x_6012_);
lean_dec(v_a_5983_);
if (v_isShared_5995_ == 0)
{
lean_ctor_set(v___x_5994_, 1, v___x_6016_);
v___x_6019_ = v___x_5994_;
goto v_reusejp_6018_;
}
else
{
lean_object* v_reuseFailAlloc_6023_; 
v_reuseFailAlloc_6023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6023_, 0, v_fst_5992_);
lean_ctor_set(v_reuseFailAlloc_6023_, 1, v___x_6016_);
v___x_6019_ = v_reuseFailAlloc_6023_;
goto v_reusejp_6018_;
}
v_reusejp_6018_:
{
lean_object* v___x_6021_; 
if (v_isShared_5991_ == 0)
{
lean_ctor_set(v___x_5990_, 1, v___x_6019_);
v___x_6021_ = v___x_5990_;
goto v_reusejp_6020_;
}
else
{
lean_object* v_reuseFailAlloc_6022_; 
v_reuseFailAlloc_6022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6022_, 0, v_fst_5988_);
lean_ctor_set(v_reuseFailAlloc_6022_, 1, v___x_6019_);
v___x_6021_ = v_reuseFailAlloc_6022_;
goto v_reusejp_6020_;
}
v_reusejp_6020_:
{
return v___x_6021_;
}
}
}
else
{
lean_object* v___x_6025_; uint8_t v_isShared_6026_; uint8_t v_isSharedCheck_6043_; 
lean_inc(v_stop_6011_);
lean_inc(v_start_6010_);
lean_inc_ref(v_array_6009_);
v_isSharedCheck_6043_ = !lean_is_exclusive(v_fst_5992_);
if (v_isSharedCheck_6043_ == 0)
{
lean_object* v_unused_6044_; lean_object* v_unused_6045_; lean_object* v_unused_6046_; 
v_unused_6044_ = lean_ctor_get(v_fst_5992_, 2);
lean_dec(v_unused_6044_);
v_unused_6045_ = lean_ctor_get(v_fst_5992_, 1);
lean_dec(v_unused_6045_);
v_unused_6046_ = lean_ctor_get(v_fst_5992_, 0);
lean_dec(v_unused_6046_);
v___x_6025_ = v_fst_5992_;
v_isShared_6026_ = v_isSharedCheck_6043_;
goto v_resetjp_6024_;
}
else
{
lean_dec(v_fst_5992_);
v___x_6025_ = lean_box(0);
v_isShared_6026_ = v_isSharedCheck_6043_;
goto v_resetjp_6024_;
}
v_resetjp_6024_:
{
lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6030_; 
v___x_6027_ = lean_array_fget(v_array_6009_, v_start_6010_);
v___x_6028_ = lean_nat_add(v_start_6010_, v___x_6013_);
lean_dec(v_start_6010_);
if (v_isShared_6026_ == 0)
{
lean_ctor_set(v___x_6025_, 1, v___x_6028_);
v___x_6030_ = v___x_6025_;
goto v_reusejp_6029_;
}
else
{
lean_object* v_reuseFailAlloc_6042_; 
v_reuseFailAlloc_6042_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6042_, 0, v_array_6009_);
lean_ctor_set(v_reuseFailAlloc_6042_, 1, v___x_6028_);
lean_ctor_set(v_reuseFailAlloc_6042_, 2, v_stop_6011_);
v___x_6030_ = v_reuseFailAlloc_6042_;
goto v_reusejp_6029_;
}
v_reusejp_6029_:
{
size_t v_sz_6031_; size_t v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6035_; 
v_sz_6031_ = lean_array_size(v___x_6027_);
v___x_6032_ = ((size_t)0ULL);
v___x_6033_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_6012_, v___x_5981_, v___x_5982_, v___x_6027_, v_sz_6031_, v___x_6032_, v_fst_5988_);
lean_dec(v___x_6027_);
lean_dec(v___x_6012_);
if (v_isShared_5995_ == 0)
{
lean_ctor_set(v___x_5994_, 1, v___x_6016_);
lean_ctor_set(v___x_5994_, 0, v___x_6030_);
v___x_6035_ = v___x_5994_;
goto v_reusejp_6034_;
}
else
{
lean_object* v_reuseFailAlloc_6041_; 
v_reuseFailAlloc_6041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6041_, 0, v___x_6030_);
lean_ctor_set(v_reuseFailAlloc_6041_, 1, v___x_6016_);
v___x_6035_ = v_reuseFailAlloc_6041_;
goto v_reusejp_6034_;
}
v_reusejp_6034_:
{
lean_object* v___x_6037_; 
if (v_isShared_5991_ == 0)
{
lean_ctor_set(v___x_5990_, 1, v___x_6035_);
lean_ctor_set(v___x_5990_, 0, v___x_6033_);
v___x_6037_ = v___x_5990_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6040_; 
v_reuseFailAlloc_6040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6040_, 0, v___x_6033_);
lean_ctor_set(v_reuseFailAlloc_6040_, 1, v___x_6035_);
v___x_6037_ = v_reuseFailAlloc_6040_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
lean_object* v___x_6038_; 
v___x_6038_ = lean_nat_add(v_a_5983_, v___x_6013_);
lean_dec(v_a_5983_);
v_a_5983_ = v___x_6038_;
v_b_5984_ = v___x_6037_;
goto _start;
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
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_6056_, lean_object* v___x_6057_, lean_object* v___x_6058_, lean_object* v_a_6059_, lean_object* v_b_6060_){
_start:
{
lean_object* v_res_6061_; 
v_res_6061_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6056_, v___x_6057_, v___x_6058_, v_a_6059_, v_b_6060_);
lean_dec(v___x_6058_);
lean_dec(v___x_6057_);
lean_dec(v_upperBound_6056_);
return v_res_6061_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; 
v___x_6063_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__0));
v___x_6064_ = lean_unsigned_to_nat(2u);
v___x_6065_ = lean_unsigned_to_nat(457u);
v___x_6066_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6067_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6068_ = l_mkPanicMessageWithDecl(v___x_6067_, v___x_6066_, v___x_6065_, v___x_6064_, v___x_6063_);
return v___x_6068_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v___x_6070_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__2));
v___x_6071_ = lean_unsigned_to_nat(2u);
v___x_6072_ = lean_unsigned_to_nat(458u);
v___x_6073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6074_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6075_ = l_mkPanicMessageWithDecl(v___x_6074_, v___x_6073_, v___x_6072_, v___x_6071_, v___x_6070_);
return v___x_6075_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; 
v___x_6077_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__4));
v___x_6078_ = lean_unsigned_to_nat(2u);
v___x_6079_ = lean_unsigned_to_nat(456u);
v___x_6080_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6081_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6082_ = l_mkPanicMessageWithDecl(v___x_6081_, v___x_6080_, v___x_6079_, v___x_6078_, v___x_6077_);
return v___x_6082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_6083_, lean_object* v_xs_6084_, lean_object* v_toErase_6085_){
_start:
{
lean_object* v___x_6086_; lean_object* v___x_6087_; uint8_t v___x_6171_; 
v___x_6086_ = lean_unsigned_to_nat(0u);
v___x_6087_ = lean_array_get_size(v_xs_6084_);
v___x_6171_ = lean_nat_dec_lt(v___x_6086_, v___x_6087_);
if (v___x_6171_ == 0)
{
goto v___jp_6088_;
}
else
{
if (v___x_6171_ == 0)
{
goto v___jp_6088_;
}
else
{
size_t v___x_6172_; size_t v___x_6173_; uint8_t v___x_6174_; 
v___x_6172_ = ((size_t)0ULL);
v___x_6173_ = lean_usize_of_nat(v___x_6087_);
v___x_6174_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_6084_, v___x_6172_, v___x_6173_);
if (v___x_6174_ == 0)
{
goto v___jp_6088_;
}
else
{
lean_object* v___x_6175_; lean_object* v___x_6176_; 
lean_dec_ref(v_toErase_6085_);
lean_dec_ref(v_xs_6084_);
lean_dec_ref(v_fixedParamPerms_6083_);
v___x_6175_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6176_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6175_);
return v___x_6176_;
}
}
}
v___jp_6088_:
{
lean_object* v_numFixed_6089_; lean_object* v_perms_6090_; lean_object* v_revDeps_6091_; uint8_t v___x_6092_; 
v_numFixed_6089_ = lean_ctor_get(v_fixedParamPerms_6083_, 0);
v_perms_6090_ = lean_ctor_get(v_fixedParamPerms_6083_, 1);
lean_inc_ref(v_perms_6090_);
v_revDeps_6091_ = lean_ctor_get(v_fixedParamPerms_6083_, 2);
lean_inc_ref(v_revDeps_6091_);
v___x_6092_ = lean_nat_dec_eq(v_numFixed_6089_, v___x_6087_);
if (v___x_6092_ == 0)
{
lean_object* v___x_6093_; lean_object* v___x_6094_; 
lean_dec_ref(v_revDeps_6091_);
lean_dec_ref(v_perms_6090_);
lean_dec_ref(v_toErase_6085_);
lean_dec_ref(v_xs_6084_);
lean_dec_ref(v_fixedParamPerms_6083_);
v___x_6093_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_6094_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6093_);
return v___x_6094_;
}
else
{
lean_object* v___x_6095_; lean_object* v___x_6096_; uint8_t v_changed_6097_; 
v___x_6095_ = lean_array_get_size(v_toErase_6085_);
v___x_6096_ = lean_array_get_size(v_perms_6090_);
v_changed_6097_ = lean_nat_dec_eq(v___x_6095_, v___x_6096_);
if (v_changed_6097_ == 0)
{
lean_object* v___x_6098_; lean_object* v___x_6099_; 
lean_dec_ref(v_revDeps_6091_);
lean_dec_ref(v_perms_6090_);
lean_dec_ref(v_toErase_6085_);
lean_dec_ref(v_xs_6084_);
lean_dec_ref(v_fixedParamPerms_6083_);
v___x_6098_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_6099_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6098_);
return v___x_6099_;
}
else
{
uint8_t v_changed_6100_; lean_object* v___x_6101_; lean_object* v_mask_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v_fst_6108_; lean_object* v___x_6110_; uint8_t v_isShared_6111_; uint8_t v_isSharedCheck_6169_; 
v_changed_6100_ = 0;
v___x_6101_ = lean_box(v_changed_6100_);
lean_inc(v_numFixed_6089_);
v_mask_6102_ = lean_mk_array(v_numFixed_6089_, v___x_6101_);
v___x_6103_ = l_Array_toSubarray___redArg(v_toErase_6085_, v___x_6086_, v___x_6095_);
lean_inc_ref(v_perms_6090_);
v___x_6104_ = l_Array_toSubarray___redArg(v_perms_6090_, v___x_6086_, v___x_6096_);
v___x_6105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6105_, 0, v___x_6103_);
lean_ctor_set(v___x_6105_, 1, v___x_6104_);
v___x_6106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6106_, 0, v_mask_6102_);
lean_ctor_set(v___x_6106_, 1, v___x_6105_);
v___x_6107_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_6095_, v___x_6095_, v___x_6096_, v___x_6086_, v___x_6106_);
v_fst_6108_ = lean_ctor_get(v___x_6107_, 0);
v_isSharedCheck_6169_ = !lean_is_exclusive(v___x_6107_);
if (v_isSharedCheck_6169_ == 0)
{
lean_object* v_unused_6170_; 
v_unused_6170_ = lean_ctor_get(v___x_6107_, 1);
lean_dec(v_unused_6170_);
v___x_6110_ = v___x_6107_;
v_isShared_6111_ = v_isSharedCheck_6169_;
goto v_resetjp_6109_;
}
else
{
lean_inc(v_fst_6108_);
lean_dec(v___x_6107_);
v___x_6110_ = lean_box(0);
v_isShared_6111_ = v_isSharedCheck_6169_;
goto v_resetjp_6109_;
}
v_resetjp_6109_:
{
lean_object* v___x_6112_; lean_object* v___x_6114_; 
v___x_6112_ = lean_box(v_changed_6097_);
if (v_isShared_6111_ == 0)
{
lean_ctor_set(v___x_6110_, 1, v___x_6112_);
v___x_6114_ = v___x_6110_;
goto v_reusejp_6113_;
}
else
{
lean_object* v_reuseFailAlloc_6168_; 
v_reuseFailAlloc_6168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6168_, 0, v_fst_6108_);
lean_ctor_set(v_reuseFailAlloc_6168_, 1, v___x_6112_);
v___x_6114_ = v_reuseFailAlloc_6168_;
goto v_reusejp_6113_;
}
v_reusejp_6113_:
{
lean_object* v___x_6115_; lean_object* v___x_6117_; uint8_t v_isShared_6118_; uint8_t v_isSharedCheck_6164_; 
v___x_6115_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6096_, v_perms_6090_, v___x_6095_, v_fixedParamPerms_6083_, v___x_6114_);
v_isSharedCheck_6164_ = !lean_is_exclusive(v_fixedParamPerms_6083_);
if (v_isSharedCheck_6164_ == 0)
{
lean_object* v_unused_6165_; lean_object* v_unused_6166_; lean_object* v_unused_6167_; 
v_unused_6165_ = lean_ctor_get(v_fixedParamPerms_6083_, 2);
lean_dec(v_unused_6165_);
v_unused_6166_ = lean_ctor_get(v_fixedParamPerms_6083_, 1);
lean_dec(v_unused_6166_);
v_unused_6167_ = lean_ctor_get(v_fixedParamPerms_6083_, 0);
lean_dec(v_unused_6167_);
v___x_6117_ = v_fixedParamPerms_6083_;
v_isShared_6118_ = v_isSharedCheck_6164_;
goto v_resetjp_6116_;
}
else
{
lean_dec(v_fixedParamPerms_6083_);
v___x_6117_ = lean_box(0);
v_isShared_6118_ = v_isSharedCheck_6164_;
goto v_resetjp_6116_;
}
v_resetjp_6116_:
{
lean_object* v_fst_6119_; lean_object* v___x_6121_; uint8_t v_isShared_6122_; uint8_t v_isSharedCheck_6162_; 
v_fst_6119_ = lean_ctor_get(v___x_6115_, 0);
v_isSharedCheck_6162_ = !lean_is_exclusive(v___x_6115_);
if (v_isSharedCheck_6162_ == 0)
{
lean_object* v_unused_6163_; 
v_unused_6163_ = lean_ctor_get(v___x_6115_, 1);
lean_dec(v_unused_6163_);
v___x_6121_ = v___x_6115_;
v_isShared_6122_ = v_isSharedCheck_6162_;
goto v_resetjp_6120_;
}
else
{
lean_inc(v_fst_6119_);
lean_dec(v___x_6115_);
v___x_6121_ = lean_box(0);
v_isShared_6122_ = v_isSharedCheck_6162_;
goto v_resetjp_6120_;
}
v_resetjp_6120_:
{
lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6128_; 
v___x_6123_ = lean_array_get_size(v_fst_6119_);
v___x_6124_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_6125_ = l_Array_toSubarray___redArg(v_fst_6119_, v___x_6086_, v___x_6123_);
v___x_6126_ = l_Array_toSubarray___redArg(v_xs_6084_, v___x_6086_, v___x_6087_);
if (v_isShared_6122_ == 0)
{
lean_ctor_set(v___x_6121_, 1, v___x_6126_);
lean_ctor_set(v___x_6121_, 0, v___x_6125_);
v___x_6128_ = v___x_6121_;
goto v_reusejp_6127_;
}
else
{
lean_object* v_reuseFailAlloc_6161_; 
v_reuseFailAlloc_6161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6161_, 0, v___x_6125_);
lean_ctor_set(v_reuseFailAlloc_6161_, 1, v___x_6126_);
v___x_6128_ = v_reuseFailAlloc_6161_;
goto v_reusejp_6127_;
}
v_reusejp_6127_:
{
lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v_snd_6133_; lean_object* v_snd_6134_; lean_object* v_fst_6135_; lean_object* v_fst_6136_; lean_object* v___x_6138_; uint8_t v_isShared_6139_; uint8_t v_isSharedCheck_6159_; 
v___x_6129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6129_, 0, v___x_6124_);
lean_ctor_set(v___x_6129_, 1, v___x_6128_);
v___x_6130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6130_, 0, v___x_6124_);
lean_ctor_set(v___x_6130_, 1, v___x_6129_);
v___x_6131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6124_);
lean_ctor_set(v___x_6131_, 1, v___x_6130_);
v___x_6132_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6123_, v___x_6086_, v___x_6131_);
v_snd_6133_ = lean_ctor_get(v___x_6132_, 1);
lean_inc(v_snd_6133_);
v_snd_6134_ = lean_ctor_get(v_snd_6133_, 1);
lean_inc(v_snd_6134_);
v_fst_6135_ = lean_ctor_get(v___x_6132_, 0);
lean_inc(v_fst_6135_);
lean_dec_ref(v___x_6132_);
v_fst_6136_ = lean_ctor_get(v_snd_6133_, 0);
v_isSharedCheck_6159_ = !lean_is_exclusive(v_snd_6133_);
if (v_isSharedCheck_6159_ == 0)
{
lean_object* v_unused_6160_; 
v_unused_6160_ = lean_ctor_get(v_snd_6133_, 1);
lean_dec(v_unused_6160_);
v___x_6138_ = v_snd_6133_;
v_isShared_6139_ = v_isSharedCheck_6159_;
goto v_resetjp_6137_;
}
else
{
lean_inc(v_fst_6136_);
lean_dec(v_snd_6133_);
v___x_6138_ = lean_box(0);
v_isShared_6139_ = v_isSharedCheck_6159_;
goto v_resetjp_6137_;
}
v_resetjp_6137_:
{
lean_object* v_fst_6140_; lean_object* v___x_6142_; uint8_t v_isShared_6143_; uint8_t v_isSharedCheck_6157_; 
v_fst_6140_ = lean_ctor_get(v_snd_6134_, 0);
v_isSharedCheck_6157_ = !lean_is_exclusive(v_snd_6134_);
if (v_isSharedCheck_6157_ == 0)
{
lean_object* v_unused_6158_; 
v_unused_6158_ = lean_ctor_get(v_snd_6134_, 1);
lean_dec(v_unused_6158_);
v___x_6142_ = v_snd_6134_;
v_isShared_6143_ = v_isSharedCheck_6157_;
goto v_resetjp_6141_;
}
else
{
lean_inc(v_fst_6140_);
lean_dec(v_snd_6134_);
v___x_6142_ = lean_box(0);
v_isShared_6143_ = v_isSharedCheck_6157_;
goto v_resetjp_6141_;
}
v_resetjp_6141_:
{
lean_object* v___x_6144_; size_t v_sz_6145_; size_t v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6149_; 
v___x_6144_ = lean_array_get_size(v_fst_6140_);
v_sz_6145_ = lean_array_size(v_perms_6090_);
v___x_6146_ = ((size_t)0ULL);
v___x_6147_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6135_, v_sz_6145_, v___x_6146_, v_perms_6090_);
lean_dec(v_fst_6135_);
if (v_isShared_6118_ == 0)
{
lean_ctor_set(v___x_6117_, 1, v___x_6147_);
lean_ctor_set(v___x_6117_, 0, v___x_6144_);
v___x_6149_ = v___x_6117_;
goto v_reusejp_6148_;
}
else
{
lean_object* v_reuseFailAlloc_6156_; 
v_reuseFailAlloc_6156_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6156_, 0, v___x_6144_);
lean_ctor_set(v_reuseFailAlloc_6156_, 1, v___x_6147_);
lean_ctor_set(v_reuseFailAlloc_6156_, 2, v_revDeps_6091_);
v___x_6149_ = v_reuseFailAlloc_6156_;
goto v_reusejp_6148_;
}
v_reusejp_6148_:
{
lean_object* v___x_6151_; 
if (v_isShared_6143_ == 0)
{
lean_ctor_set(v___x_6142_, 1, v_fst_6136_);
v___x_6151_ = v___x_6142_;
goto v_reusejp_6150_;
}
else
{
lean_object* v_reuseFailAlloc_6155_; 
v_reuseFailAlloc_6155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6155_, 0, v_fst_6140_);
lean_ctor_set(v_reuseFailAlloc_6155_, 1, v_fst_6136_);
v___x_6151_ = v_reuseFailAlloc_6155_;
goto v_reusejp_6150_;
}
v_reusejp_6150_:
{
lean_object* v___x_6153_; 
if (v_isShared_6139_ == 0)
{
lean_ctor_set(v___x_6138_, 1, v___x_6151_);
lean_ctor_set(v___x_6138_, 0, v___x_6149_);
v___x_6153_ = v___x_6138_;
goto v_reusejp_6152_;
}
else
{
lean_object* v_reuseFailAlloc_6154_; 
v_reuseFailAlloc_6154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6154_, 0, v___x_6149_);
lean_ctor_set(v_reuseFailAlloc_6154_, 1, v___x_6151_);
v___x_6153_ = v_reuseFailAlloc_6154_;
goto v_reusejp_6152_;
}
v_reusejp_6152_:
{
return v___x_6153_;
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
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6177_, lean_object* v___x_6178_, lean_object* v_fixedParamPerms_6179_, lean_object* v_next_6180_, lean_object* v___x_6181_, lean_object* v___x_6182_, lean_object* v_inst_6183_, lean_object* v_R_6184_, lean_object* v_a_6185_, lean_object* v_b_6186_, lean_object* v_c_6187_){
_start:
{
lean_object* v___x_6188_; 
v___x_6188_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6177_, v___x_6178_, v_fixedParamPerms_6179_, v_next_6180_, v___x_6181_, v___x_6182_, v_a_6185_, v_b_6186_);
return v___x_6188_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6189_, lean_object* v___x_6190_, lean_object* v_fixedParamPerms_6191_, lean_object* v_next_6192_, lean_object* v___x_6193_, lean_object* v___x_6194_, lean_object* v_inst_6195_, lean_object* v_R_6196_, lean_object* v_a_6197_, lean_object* v_b_6198_, lean_object* v_c_6199_){
_start:
{
lean_object* v_res_6200_; 
v_res_6200_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6189_, v___x_6190_, v_fixedParamPerms_6191_, v_next_6192_, v___x_6193_, v___x_6194_, v_inst_6195_, v_R_6196_, v_a_6197_, v_b_6198_, v_c_6199_);
lean_dec(v___x_6194_);
lean_dec(v___x_6193_);
lean_dec(v_next_6192_);
lean_dec_ref(v_fixedParamPerms_6191_);
lean_dec_ref(v___x_6190_);
lean_dec(v_upperBound_6189_);
return v_res_6200_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6201_, lean_object* v___x_6202_, lean_object* v___x_6203_, lean_object* v___x_6204_, lean_object* v_fixedParamPerms_6205_, lean_object* v_inst_6206_, lean_object* v_R_6207_, lean_object* v_a_6208_, lean_object* v_b_6209_, lean_object* v_c_6210_){
_start:
{
lean_object* v___x_6211_; 
v___x_6211_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6201_, v___x_6202_, v___x_6203_, v___x_6204_, v_fixedParamPerms_6205_, v_a_6208_, v_b_6209_);
return v___x_6211_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6212_, lean_object* v___x_6213_, lean_object* v___x_6214_, lean_object* v___x_6215_, lean_object* v_fixedParamPerms_6216_, lean_object* v_inst_6217_, lean_object* v_R_6218_, lean_object* v_a_6219_, lean_object* v_b_6220_, lean_object* v_c_6221_){
_start:
{
lean_object* v_res_6222_; 
v_res_6222_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6212_, v___x_6213_, v___x_6214_, v___x_6215_, v_fixedParamPerms_6216_, v_inst_6217_, v_R_6218_, v_a_6219_, v_b_6220_, v_c_6221_);
lean_dec(v_a_6219_);
lean_dec_ref(v_fixedParamPerms_6216_);
lean_dec(v___x_6215_);
lean_dec(v___x_6214_);
lean_dec_ref(v___x_6213_);
lean_dec(v_upperBound_6212_);
return v_res_6222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_6223_, lean_object* v___x_6224_, lean_object* v___x_6225_, lean_object* v_fixedParamPerms_6226_, lean_object* v_inst_6227_, lean_object* v_a_6228_){
_start:
{
lean_object* v___x_6229_; 
v___x_6229_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6223_, v___x_6224_, v___x_6225_, v_fixedParamPerms_6226_, v_a_6228_);
return v___x_6229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_6230_, lean_object* v___x_6231_, lean_object* v___x_6232_, lean_object* v_fixedParamPerms_6233_, lean_object* v_inst_6234_, lean_object* v_a_6235_){
_start:
{
lean_object* v_res_6236_; 
v_res_6236_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_6230_, v___x_6231_, v___x_6232_, v_fixedParamPerms_6233_, v_inst_6234_, v_a_6235_);
lean_dec_ref(v_fixedParamPerms_6233_);
lean_dec(v___x_6232_);
lean_dec_ref(v___x_6231_);
lean_dec(v___x_6230_);
return v_res_6236_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6237_, lean_object* v_inst_6238_, lean_object* v_R_6239_, lean_object* v_a_6240_, lean_object* v_b_6241_, lean_object* v_c_6242_){
_start:
{
lean_object* v___x_6243_; 
v___x_6243_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6237_, v_a_6240_, v_b_6241_);
return v___x_6243_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6244_, lean_object* v_inst_6245_, lean_object* v_R_6246_, lean_object* v_a_6247_, lean_object* v_b_6248_, lean_object* v_c_6249_){
_start:
{
lean_object* v_res_6250_; 
v_res_6250_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6244_, v_inst_6245_, v_R_6246_, v_a_6247_, v_b_6248_, v_c_6249_);
lean_dec(v_upperBound_6244_);
return v_res_6250_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6251_, lean_object* v___x_6252_, lean_object* v___x_6253_, lean_object* v_inst_6254_, lean_object* v_R_6255_, lean_object* v_a_6256_, lean_object* v_b_6257_, lean_object* v_c_6258_){
_start:
{
lean_object* v___x_6259_; 
v___x_6259_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6251_, v___x_6252_, v___x_6253_, v_a_6256_, v_b_6257_);
return v___x_6259_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6260_, lean_object* v___x_6261_, lean_object* v___x_6262_, lean_object* v_inst_6263_, lean_object* v_R_6264_, lean_object* v_a_6265_, lean_object* v_b_6266_, lean_object* v_c_6267_){
_start:
{
lean_object* v_res_6268_; 
v_res_6268_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6260_, v___x_6261_, v___x_6262_, v_inst_6263_, v_R_6264_, v_a_6265_, v_b_6266_, v_c_6267_);
lean_dec(v___x_6262_);
lean_dec(v___x_6261_);
lean_dec(v_upperBound_6260_);
return v_res_6268_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(lean_object* v_upperBound_6269_, lean_object* v___x_6270_, lean_object* v_fixedParamPerms_6271_, lean_object* v___x_6272_, lean_object* v___x_6273_, lean_object* v_inst_6274_, lean_object* v_R_6275_, lean_object* v_a_6276_, lean_object* v_b_6277_, lean_object* v_c_6278_){
_start:
{
lean_object* v___x_6279_; 
v___x_6279_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_6269_, v___x_6270_, v_fixedParamPerms_6271_, v___x_6272_, v___x_6273_, v_a_6276_, v_b_6277_);
return v___x_6279_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___boxed(lean_object* v_upperBound_6280_, lean_object* v___x_6281_, lean_object* v_fixedParamPerms_6282_, lean_object* v___x_6283_, lean_object* v___x_6284_, lean_object* v_inst_6285_, lean_object* v_R_6286_, lean_object* v_a_6287_, lean_object* v_b_6288_, lean_object* v_c_6289_){
_start:
{
lean_object* v_res_6290_; 
v_res_6290_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(v_upperBound_6280_, v___x_6281_, v_fixedParamPerms_6282_, v___x_6283_, v___x_6284_, v_inst_6285_, v_R_6286_, v_a_6287_, v_b_6288_, v_c_6289_);
lean_dec(v___x_6284_);
lean_dec(v___x_6283_);
lean_dec_ref(v_fixedParamPerms_6282_);
lean_dec_ref(v___x_6281_);
lean_dec(v_upperBound_6280_);
return v_res_6290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6348_; uint8_t v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; 
v___x_6348_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_6349_ = 0;
v___x_6350_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6351_ = l_Lean_registerTraceClass(v___x_6348_, v___x_6349_, v___x_6350_);
return v___x_6351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object* v_a_6352_){
_start:
{
lean_object* v_res_6353_; 
v_res_6353_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
return v_res_6353_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
