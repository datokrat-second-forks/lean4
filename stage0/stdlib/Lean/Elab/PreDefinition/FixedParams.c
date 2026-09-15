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
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg();
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
static lean_once_cell_t l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_inc_ref(v_revDeps_200_);
v___x_201_ = lean_array_get(v___x_192_, v_revDeps_200_, v_funIdx_183_);
lean_dec_ref(v_revDeps_200_);
v___x_202_ = lean_array_get(v___x_192_, v___x_201_, v_paramIdx_184_);
lean_dec(v_paramIdx_184_);
lean_dec(v___x_201_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___f_935_; uint8_t v___x_936_; lean_object* v___x_937_; 
v___f_935_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___closed__0));
v___x_936_ = 1;
v___x_937_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_929_, v___f_935_, v___x_936_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_getParamRevDeps(v_value_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
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
static lean_object* _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0(void){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lean_Meta_instInhabitedMetaM___redArg();
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_msg_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_29092__overap_1009_; lean_object* v___x_1010_; 
v___x_1008_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_29092__overap_1009_ = lean_panic_fn_borrowed(v___x_1008_, v_msg_1002_);
lean_inc(v___y_1006_);
lean_inc_ref(v___y_1005_);
lean_inc(v___y_1004_);
lean_inc_ref(v___y_1003_);
v___x_1010_ = lean_apply_5(v___x_29092__overap_1009_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, lean_box(0));
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
lean_object* v___x_1081_; lean_object* v_env_1082_; lean_object* v___x_1083_; lean_object* v_toCold_1084_; lean_object* v_mctx_1085_; lean_object* v_lctx_1086_; lean_object* v_options_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1081_ = lean_st_ref_get(v___y_1079_);
v_env_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc_ref(v_env_1082_);
lean_dec(v___x_1081_);
v___x_1083_ = lean_st_ref_get(v___y_1077_);
v_toCold_1084_ = lean_ctor_get(v___y_1078_, 0);
v_mctx_1085_ = lean_ctor_get(v___x_1083_, 0);
lean_inc_ref(v_mctx_1085_);
lean_dec(v___x_1083_);
v_lctx_1086_ = lean_ctor_get(v___y_1076_, 2);
v_options_1087_ = lean_ctor_get(v_toCold_1084_, 2);
lean_inc_ref(v_options_1087_);
lean_inc_ref(v_lctx_1086_);
v___x_1088_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1088_, 0, v_env_1082_);
lean_ctor_set(v___x_1088_, 1, v_mctx_1085_);
lean_ctor_set(v___x_1088_, 2, v_lctx_1086_);
lean_ctor_set(v___x_1088_, 3, v_options_1087_);
v___x_1089_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v_msgData_1075_);
v___x_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
return v_res_1097_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1098_; double v___x_1099_; 
v___x_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = lean_float_of_nat(v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_1103_, lean_object* v_msg_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_ref_1110_; lean_object* v___x_1111_; lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1156_; 
v_ref_1110_ = lean_ctor_get(v___y_1107_, 2);
v___x_1111_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1114_ = v___x_1111_;
v_isShared_1115_ = v_isSharedCheck_1156_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1111_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1156_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1116_; lean_object* v_traceState_1117_; lean_object* v_env_1118_; lean_object* v_nextMacroScope_1119_; lean_object* v_ngen_1120_; lean_object* v_auxDeclNGen_1121_; lean_object* v_cache_1122_; lean_object* v_messages_1123_; lean_object* v_infoState_1124_; lean_object* v_snapshotTasks_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1155_; 
v___x_1116_ = lean_st_ref_take(v___y_1108_);
v_traceState_1117_ = lean_ctor_get(v___x_1116_, 4);
v_env_1118_ = lean_ctor_get(v___x_1116_, 0);
v_nextMacroScope_1119_ = lean_ctor_get(v___x_1116_, 1);
v_ngen_1120_ = lean_ctor_get(v___x_1116_, 2);
v_auxDeclNGen_1121_ = lean_ctor_get(v___x_1116_, 3);
v_cache_1122_ = lean_ctor_get(v___x_1116_, 5);
v_messages_1123_ = lean_ctor_get(v___x_1116_, 6);
v_infoState_1124_ = lean_ctor_get(v___x_1116_, 7);
v_snapshotTasks_1125_ = lean_ctor_get(v___x_1116_, 8);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1127_ = v___x_1116_;
v_isShared_1128_ = v_isSharedCheck_1155_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_snapshotTasks_1125_);
lean_inc(v_infoState_1124_);
lean_inc(v_messages_1123_);
lean_inc(v_cache_1122_);
lean_inc(v_traceState_1117_);
lean_inc(v_auxDeclNGen_1121_);
lean_inc(v_ngen_1120_);
lean_inc(v_nextMacroScope_1119_);
lean_inc(v_env_1118_);
lean_dec(v___x_1116_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1155_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
uint64_t v_tid_1129_; lean_object* v_traces_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1154_; 
v_tid_1129_ = lean_ctor_get_uint64(v_traceState_1117_, sizeof(void*)*1);
v_traces_1130_ = lean_ctor_get(v_traceState_1117_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_traceState_1117_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1132_ = v_traceState_1117_;
v_isShared_1133_ = v_isSharedCheck_1154_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_traces_1130_);
lean_dec(v_traceState_1117_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1154_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; double v___x_1136_; uint8_t v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1134_ = lean_box(0);
v___x_1135_ = lean_box(0);
v___x_1136_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_1137_ = 0;
v___x_1138_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1));
v___x_1139_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1139_, 0, v_cls_1103_);
lean_ctor_set(v___x_1139_, 1, v___x_1135_);
lean_ctor_set(v___x_1139_, 2, v___x_1138_);
lean_ctor_set_float(v___x_1139_, sizeof(void*)*3, v___x_1136_);
lean_ctor_set_float(v___x_1139_, sizeof(void*)*3 + 8, v___x_1136_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*3 + 16, v___x_1137_);
v___x_1140_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2));
v___x_1141_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1139_);
lean_ctor_set(v___x_1141_, 1, v_a_1112_);
lean_ctor_set(v___x_1141_, 2, v___x_1140_);
lean_inc(v_ref_1110_);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v_ref_1110_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = l_Lean_PersistentArray_push___redArg(v_traces_1130_, v___x_1142_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v___x_1143_);
v___x_1145_ = v___x_1132_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1143_);
lean_ctor_set_uint64(v_reuseFailAlloc_1153_, sizeof(void*)*1, v_tid_1129_);
v___x_1145_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1147_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 4, v___x_1145_);
v___x_1147_ = v___x_1127_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_env_1118_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_nextMacroScope_1119_);
lean_ctor_set(v_reuseFailAlloc_1152_, 2, v_ngen_1120_);
lean_ctor_set(v_reuseFailAlloc_1152_, 3, v_auxDeclNGen_1121_);
lean_ctor_set(v_reuseFailAlloc_1152_, 4, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1152_, 5, v_cache_1122_);
lean_ctor_set(v_reuseFailAlloc_1152_, 6, v_messages_1123_);
lean_ctor_set(v_reuseFailAlloc_1152_, 7, v_infoState_1124_);
lean_ctor_set(v_reuseFailAlloc_1152_, 8, v_snapshotTasks_1125_);
v___x_1147_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1148_ = lean_st_ref_put(v___y_1108_, v___x_1147_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v___x_1134_);
v___x_1150_ = v___x_1114_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1134_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_1157_, lean_object* v_msg_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_1157_, v_msg_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object* v_00_u03b1_1165_, lean_object* v_x_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_apply_1(v_x_1166_, lean_box(0));
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object* v_00_u03b1_1174_, lean_object* v_x_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(v_00_u03b1_1174_, v_x_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object* v_x_1182_, lean_object* v_x_1183_){
_start:
{
if (lean_obj_tag(v_x_1183_) == 0)
{
return v_x_1182_;
}
else
{
lean_object* v_key_1184_; lean_object* v_value_1185_; lean_object* v_tail_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1209_; 
v_key_1184_ = lean_ctor_get(v_x_1183_, 0);
v_value_1185_ = lean_ctor_get(v_x_1183_, 1);
v_tail_1186_ = lean_ctor_get(v_x_1183_, 2);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_x_1183_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1188_ = v_x_1183_;
v_isShared_1189_ = v_isSharedCheck_1209_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_tail_1186_);
lean_inc(v_value_1185_);
lean_inc(v_key_1184_);
lean_dec(v_x_1183_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1209_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1190_; uint64_t v___x_1191_; uint64_t v___x_1192_; uint64_t v___x_1193_; uint64_t v_fold_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; size_t v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1205_; 
v___x_1190_ = lean_array_get_size(v_x_1182_);
v___x_1191_ = l_Lean_ExprStructEq_hash(v_key_1184_);
v___x_1192_ = 32ULL;
v___x_1193_ = lean_uint64_shift_right(v___x_1191_, v___x_1192_);
v_fold_1194_ = lean_uint64_xor(v___x_1191_, v___x_1193_);
v___x_1195_ = 16ULL;
v___x_1196_ = lean_uint64_shift_right(v_fold_1194_, v___x_1195_);
v___x_1197_ = lean_uint64_xor(v_fold_1194_, v___x_1196_);
v___x_1198_ = lean_uint64_to_usize(v___x_1197_);
v___x_1199_ = lean_usize_of_nat(v___x_1190_);
v___x_1200_ = ((size_t)1ULL);
v___x_1201_ = lean_usize_sub(v___x_1199_, v___x_1200_);
v___x_1202_ = lean_usize_land(v___x_1198_, v___x_1201_);
v___x_1203_ = lean_array_uget_borrowed(v_x_1182_, v___x_1202_);
lean_inc(v___x_1203_);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 2, v___x_1203_);
v___x_1205_ = v___x_1188_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_key_1184_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_value_1185_);
lean_ctor_set(v_reuseFailAlloc_1208_, 2, v___x_1203_);
v___x_1205_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_array_uset(v_x_1182_, v___x_1202_, v___x_1205_);
v_x_1182_ = v___x_1206_;
v_x_1183_ = v_tail_1186_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object* v_i_1210_, lean_object* v_source_1211_, lean_object* v_target_1212_){
_start:
{
lean_object* v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = lean_array_get_size(v_source_1211_);
v___x_1214_ = lean_nat_dec_lt(v_i_1210_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_dec_ref(v_source_1211_);
lean_dec(v_i_1210_);
return v_target_1212_;
}
else
{
lean_object* v_es_1215_; lean_object* v___x_1216_; lean_object* v_source_1217_; lean_object* v_target_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v_es_1215_ = lean_array_fget(v_source_1211_, v_i_1210_);
v___x_1216_ = lean_box(0);
v_source_1217_ = lean_array_fset(v_source_1211_, v_i_1210_, v___x_1216_);
v_target_1218_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_target_1212_, v_es_1215_);
v___x_1219_ = lean_unsigned_to_nat(1u);
v___x_1220_ = lean_nat_add(v_i_1210_, v___x_1219_);
lean_dec(v_i_1210_);
v_i_1210_ = v___x_1220_;
v_source_1211_ = v_source_1217_;
v_target_1212_ = v_target_1218_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object* v_data_1222_){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v_nbuckets_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1223_ = lean_array_get_size(v_data_1222_);
v___x_1224_ = lean_unsigned_to_nat(2u);
v_nbuckets_1225_ = lean_nat_mul(v___x_1223_, v___x_1224_);
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_mk_array(v_nbuckets_1225_, v___x_1227_);
v___x_1229_ = lean_array_propagate_mark(v_data_1222_, v___x_1228_);
v___x_1230_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v___x_1226_, v_data_1222_, v___x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object* v_a_1231_, lean_object* v_b_1232_, lean_object* v_x_1233_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
lean_dec(v_b_1232_);
lean_dec_ref(v_a_1231_);
return v_x_1233_;
}
else
{
lean_object* v_key_1234_; lean_object* v_value_1235_; lean_object* v_tail_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1248_; 
v_key_1234_ = lean_ctor_get(v_x_1233_, 0);
v_value_1235_ = lean_ctor_get(v_x_1233_, 1);
v_tail_1236_ = lean_ctor_get(v_x_1233_, 2);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_x_1233_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1238_ = v_x_1233_;
v_isShared_1239_ = v_isSharedCheck_1248_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_tail_1236_);
lean_inc(v_value_1235_);
lean_inc(v_key_1234_);
lean_dec(v_x_1233_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1248_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
uint8_t v___x_1240_; 
v___x_1240_ = l_Lean_ExprStructEq_beq(v_key_1234_, v_a_1231_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1241_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1231_, v_b_1232_, v_tail_1236_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 2, v___x_1241_);
v___x_1243_ = v___x_1238_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_key_1234_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v_value_1235_);
lean_ctor_set(v_reuseFailAlloc_1244_, 2, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
else
{
lean_object* v___x_1246_; 
lean_dec(v_value_1235_);
lean_dec(v_key_1234_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 1, v_b_1232_);
lean_ctor_set(v___x_1238_, 0, v_a_1231_);
v___x_1246_ = v___x_1238_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1231_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_b_1232_);
lean_ctor_set(v_reuseFailAlloc_1247_, 2, v_tail_1236_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object* v_a_1249_, lean_object* v_x_1250_){
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
v___x_1254_ = l_Lean_ExprStructEq_beq(v_key_1252_, v_a_1249_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object* v_a_1256_, lean_object* v_x_1257_){
_start:
{
uint8_t v_res_1258_; lean_object* v_r_1259_; 
v_res_1258_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1256_, v_x_1257_);
lean_dec(v_x_1257_);
lean_dec_ref(v_a_1256_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object* v_m_1260_, lean_object* v_a_1261_, lean_object* v_b_1262_){
_start:
{
lean_object* v_size_1263_; lean_object* v_buckets_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1307_; 
v_size_1263_ = lean_ctor_get(v_m_1260_, 0);
v_buckets_1264_ = lean_ctor_get(v_m_1260_, 1);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_m_1260_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1266_ = v_m_1260_;
v_isShared_1267_ = v_isSharedCheck_1307_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_buckets_1264_);
lean_inc(v_size_1263_);
lean_dec(v_m_1260_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1307_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; uint64_t v___x_1269_; uint64_t v___x_1270_; uint64_t v___x_1271_; uint64_t v_fold_1272_; uint64_t v___x_1273_; uint64_t v___x_1274_; uint64_t v___x_1275_; size_t v___x_1276_; size_t v___x_1277_; size_t v___x_1278_; size_t v___x_1279_; size_t v___x_1280_; lean_object* v_bkt_1281_; uint8_t v___x_1282_; 
v___x_1268_ = lean_array_get_size(v_buckets_1264_);
v___x_1269_ = l_Lean_ExprStructEq_hash(v_a_1261_);
v___x_1270_ = 32ULL;
v___x_1271_ = lean_uint64_shift_right(v___x_1269_, v___x_1270_);
v_fold_1272_ = lean_uint64_xor(v___x_1269_, v___x_1271_);
v___x_1273_ = 16ULL;
v___x_1274_ = lean_uint64_shift_right(v_fold_1272_, v___x_1273_);
v___x_1275_ = lean_uint64_xor(v_fold_1272_, v___x_1274_);
v___x_1276_ = lean_uint64_to_usize(v___x_1275_);
v___x_1277_ = lean_usize_of_nat(v___x_1268_);
v___x_1278_ = ((size_t)1ULL);
v___x_1279_ = lean_usize_sub(v___x_1277_, v___x_1278_);
v___x_1280_ = lean_usize_land(v___x_1276_, v___x_1279_);
v_bkt_1281_ = lean_array_uget_borrowed(v_buckets_1264_, v___x_1280_);
v___x_1282_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1261_, v_bkt_1281_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; lean_object* v_size_x27_1284_; lean_object* v___x_1285_; lean_object* v_buckets_x27_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1283_ = lean_unsigned_to_nat(1u);
v_size_x27_1284_ = lean_nat_add(v_size_1263_, v___x_1283_);
lean_dec(v_size_1263_);
lean_inc(v_bkt_1281_);
v___x_1285_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1285_, 0, v_a_1261_);
lean_ctor_set(v___x_1285_, 1, v_b_1262_);
lean_ctor_set(v___x_1285_, 2, v_bkt_1281_);
v_buckets_x27_1286_ = lean_array_uset(v_buckets_1264_, v___x_1280_, v___x_1285_);
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
v_val_1293_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_buckets_x27_1286_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 1, v_val_1293_);
lean_ctor_set(v___x_1266_, 0, v_size_x27_1284_);
v___x_1295_ = v___x_1266_;
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
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 1, v_buckets_x27_1286_);
lean_ctor_set(v___x_1266_, 0, v_size_x27_1284_);
v___x_1298_ = v___x_1266_;
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
else
{
lean_object* v___x_1300_; lean_object* v_buckets_x27_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
lean_inc(v_bkt_1281_);
v___x_1300_ = lean_box(0);
v_buckets_x27_1301_ = lean_array_uset(v_buckets_1264_, v___x_1280_, v___x_1300_);
v___x_1302_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1261_, v_b_1262_, v_bkt_1281_);
v___x_1303_ = lean_array_uset(v_buckets_x27_1301_, v___x_1280_, v___x_1302_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 1, v___x_1303_);
v___x_1305_ = v___x_1266_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_size_1263_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object* v___y_1308_, lean_object* v_e_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1312_ = lean_st_ref_take(v___y_1308_);
v___x_1313_ = lean_box(0);
v___x_1314_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v___x_1312_, v_e_1309_, v_a_1310_);
v___x_1315_ = lean_st_ref_put(v___y_1308_, v___x_1314_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object* v___y_1316_, lean_object* v_e_1317_, lean_object* v_a_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(v___y_1316_, v_e_1317_, v_a_1318_);
lean_dec(v___y_1316_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object* v_k_1321_, lean_object* v___y_1322_, lean_object* v_b_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
lean_inc(v___y_1327_);
lean_inc_ref(v___y_1326_);
lean_inc(v___y_1325_);
lean_inc_ref(v___y_1324_);
lean_inc(v___y_1322_);
v___x_1329_ = lean_apply_7(v_k_1321_, v_b_1323_, v___y_1322_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, lean_box(0));
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object* v_k_1330_, lean_object* v___y_1331_, lean_object* v_b_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(v_k_1330_, v___y_1331_, v_b_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1331_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object* v_name_1339_, uint8_t v_bi_1340_, lean_object* v_type_1341_, lean_object* v_k_1342_, uint8_t v_kind_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v___f_1350_; lean_object* v___x_1351_; 
lean_inc(v___y_1344_);
v___f_1350_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1350_, 0, v_k_1342_);
lean_closure_set(v___f_1350_, 1, v___y_1344_);
v___x_1351_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1339_, v_bi_1340_, v_type_1341_, v___f_1350_, v_kind_1343_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
if (lean_obj_tag(v___x_1351_) == 0)
{
return v___x_1351_;
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1351_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1351_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object* v_name_1360_, lean_object* v_bi_1361_, lean_object* v_type_1362_, lean_object* v_k_1363_, lean_object* v_kind_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
uint8_t v_bi_boxed_1371_; uint8_t v_kind_boxed_1372_; lean_object* v_res_1373_; 
v_bi_boxed_1371_ = lean_unbox(v_bi_1361_);
v_kind_boxed_1372_ = lean_unbox(v_kind_1364_);
v_res_1373_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_1360_, v_bi_boxed_1371_, v_type_1362_, v_k_1363_, v_kind_boxed_1372_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object* v_name_1374_, lean_object* v_type_1375_, lean_object* v_val_1376_, lean_object* v_k_1377_, uint8_t v_nondep_1378_, uint8_t v_kind_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v___f_1386_; lean_object* v___x_1387_; 
lean_inc(v___y_1380_);
v___f_1386_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1386_, 0, v_k_1377_);
lean_closure_set(v___f_1386_, 1, v___y_1380_);
v___x_1387_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1374_, v_type_1375_, v_val_1376_, v___f_1386_, v_nondep_1378_, v_kind_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1387_) == 0)
{
return v___x_1387_;
}
else
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1387_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1387_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_name_1396_, lean_object* v_type_1397_, lean_object* v_val_1398_, lean_object* v_k_1399_, lean_object* v_nondep_1400_, lean_object* v_kind_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
uint8_t v_nondep_boxed_1408_; uint8_t v_kind_boxed_1409_; lean_object* v_res_1410_; 
v_nondep_boxed_1408_ = lean_unbox(v_nondep_1400_);
v_kind_boxed_1409_ = lean_unbox(v_kind_1401_);
v_res_1410_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_1396_, v_type_1397_, v_val_1398_, v_k_1399_, v_nondep_boxed_1408_, v_kind_boxed_1409_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object* v_00_u03b1_1411_, lean_object* v_x_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_apply_1(v_x_1412_, lean_box(0));
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object* v_00_u03b1_1420_, lean_object* v_x_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(v_00_u03b1_1420_, v_x_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v___y_1423_);
lean_dec_ref(v___y_1422_);
return v_res_1427_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1433_ = l_Lean_maxRecDepthErrorMessage;
v___x_1434_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
return v___x_1434_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3);
v___x_1436_ = l_Lean_MessageData_ofFormat(v___x_1435_);
return v___x_1436_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1437_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4);
v___x_1438_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2));
v___x_1439_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
lean_ctor_set(v___x_1439_, 1, v___x_1437_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object* v_ref_1440_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1442_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v_ref_1440_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_ref_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1445_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object* v_x_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___y_1456_; lean_object* v_toCold_1465_; lean_object* v_currRecDepth_1466_; lean_object* v_ref_1467_; uint8_t v_diag_1468_; uint8_t v_suppressElabErrors_1469_; lean_object* v_maxRecDepth_1475_; lean_object* v___x_1476_; uint8_t v___x_1477_; 
v_toCold_1465_ = lean_ctor_get(v___y_1452_, 0);
v_currRecDepth_1466_ = lean_ctor_get(v___y_1452_, 1);
v_ref_1467_ = lean_ctor_get(v___y_1452_, 2);
v_diag_1468_ = lean_ctor_get_uint8(v___y_1452_, sizeof(void*)*3);
v_suppressElabErrors_1469_ = lean_ctor_get_uint8(v___y_1452_, sizeof(void*)*3 + 1);
v_maxRecDepth_1475_ = lean_ctor_get(v_toCold_1465_, 3);
v___x_1476_ = lean_unsigned_to_nat(0u);
v___x_1477_ = lean_nat_dec_eq(v_maxRecDepth_1475_, v___x_1476_);
if (v___x_1477_ == 0)
{
uint8_t v___x_1478_; 
v___x_1478_ = lean_nat_dec_eq(v_currRecDepth_1466_, v_maxRecDepth_1475_);
if (v___x_1478_ == 0)
{
goto v___jp_1470_;
}
else
{
lean_object* v___x_1479_; 
lean_dec_ref(v_x_1448_);
lean_inc(v_ref_1467_);
v___x_1479_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1467_);
v___y_1456_ = v___x_1479_;
goto v___jp_1455_;
}
}
else
{
goto v___jp_1470_;
}
v___jp_1455_:
{
if (lean_obj_tag(v___y_1456_) == 0)
{
return v___y_1456_;
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
v_a_1457_ = lean_ctor_get(v___y_1456_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___y_1456_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___y_1456_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___y_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
v___jp_1470_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1471_ = lean_unsigned_to_nat(1u);
v___x_1472_ = lean_nat_add(v_currRecDepth_1466_, v___x_1471_);
lean_inc(v_ref_1467_);
lean_inc_ref(v_toCold_1465_);
v___x_1473_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1473_, 0, v_toCold_1465_);
lean_ctor_set(v___x_1473_, 1, v___x_1472_);
lean_ctor_set(v___x_1473_, 2, v_ref_1467_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*3, v_diag_1468_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*3 + 1, v_suppressElabErrors_1469_);
lean_inc(v___y_1453_);
lean_inc(v___y_1451_);
lean_inc_ref(v___y_1450_);
lean_inc(v___y_1449_);
v___x_1474_ = lean_apply_6(v_x_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___x_1473_, v___y_1453_, lean_box(0));
v___y_1456_ = v___x_1474_;
goto v___jp_1455_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object* v_x_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object* v_a_1488_, lean_object* v_x_1489_){
_start:
{
if (lean_obj_tag(v_x_1489_) == 0)
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_box(0);
return v___x_1490_;
}
else
{
lean_object* v_key_1491_; lean_object* v_value_1492_; lean_object* v_tail_1493_; uint8_t v___x_1494_; 
v_key_1491_ = lean_ctor_get(v_x_1489_, 0);
v_value_1492_ = lean_ctor_get(v_x_1489_, 1);
v_tail_1493_ = lean_ctor_get(v_x_1489_, 2);
v___x_1494_ = l_Lean_ExprStructEq_beq(v_key_1491_, v_a_1488_);
if (v___x_1494_ == 0)
{
v_x_1489_ = v_tail_1493_;
goto _start;
}
else
{
lean_object* v___x_1496_; 
lean_inc(v_value_1492_);
v___x_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1496_, 0, v_value_1492_);
return v___x_1496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object* v_a_1497_, lean_object* v_x_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1497_, v_x_1498_);
lean_dec(v_x_1498_);
lean_dec_ref(v_a_1497_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object* v_m_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v_buckets_1502_; lean_object* v___x_1503_; uint64_t v___x_1504_; uint64_t v___x_1505_; uint64_t v___x_1506_; uint64_t v_fold_1507_; uint64_t v___x_1508_; uint64_t v___x_1509_; uint64_t v___x_1510_; size_t v___x_1511_; size_t v___x_1512_; size_t v___x_1513_; size_t v___x_1514_; size_t v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v_buckets_1502_ = lean_ctor_get(v_m_1500_, 1);
v___x_1503_ = lean_array_get_size(v_buckets_1502_);
v___x_1504_ = l_Lean_ExprStructEq_hash(v_a_1501_);
v___x_1505_ = 32ULL;
v___x_1506_ = lean_uint64_shift_right(v___x_1504_, v___x_1505_);
v_fold_1507_ = lean_uint64_xor(v___x_1504_, v___x_1506_);
v___x_1508_ = 16ULL;
v___x_1509_ = lean_uint64_shift_right(v_fold_1507_, v___x_1508_);
v___x_1510_ = lean_uint64_xor(v_fold_1507_, v___x_1509_);
v___x_1511_ = lean_uint64_to_usize(v___x_1510_);
v___x_1512_ = lean_usize_of_nat(v___x_1503_);
v___x_1513_ = ((size_t)1ULL);
v___x_1514_ = lean_usize_sub(v___x_1512_, v___x_1513_);
v___x_1515_ = lean_usize_land(v___x_1511_, v___x_1514_);
v___x_1516_ = lean_array_uget_borrowed(v_buckets_1502_, v___x_1515_);
v___x_1517_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1501_, v___x_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object* v_m_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_1518_, v_a_1519_);
lean_dec_ref(v_a_1519_);
lean_dec_ref(v_m_1518_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_1521_, lean_object* v_pre_1522_, lean_object* v_post_1523_, lean_object* v_usedLetOnly_1524_, lean_object* v_skipConstInApp_1525_, lean_object* v_skipInstances_1526_, lean_object* v_body_1527_, lean_object* v_x_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
uint8_t v_usedLetOnly_boxed_1535_; uint8_t v_skipConstInApp_boxed_1536_; uint8_t v_skipInstances_boxed_1537_; lean_object* v_res_1538_; 
v_usedLetOnly_boxed_1535_ = lean_unbox(v_usedLetOnly_1524_);
v_skipConstInApp_boxed_1536_ = lean_unbox(v_skipConstInApp_1525_);
v_skipInstances_boxed_1537_ = lean_unbox(v_skipInstances_1526_);
v_res_1538_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(v_fvars_1521_, v_pre_1522_, v_post_1523_, v_usedLetOnly_boxed_1535_, v_skipConstInApp_boxed_1536_, v_skipInstances_boxed_1537_, v_body_1527_, v_x_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object* v_fvars_1542_, lean_object* v_pre_1543_, lean_object* v_post_1544_, uint8_t v_usedLetOnly_1545_, uint8_t v_skipConstInApp_1546_, uint8_t v_skipInstances_1547_, lean_object* v_body_1548_, lean_object* v_x_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = lean_array_push(v_fvars_1542_, v_x_1549_);
v___x_1557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1543_, v_post_1544_, v_usedLetOnly_1545_, v_skipConstInApp_1546_, v_skipInstances_1547_, v___x_1556_, v_body_1548_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object* v_fvars_1558_, lean_object* v_pre_1559_, lean_object* v_post_1560_, lean_object* v_usedLetOnly_1561_, lean_object* v_skipConstInApp_1562_, lean_object* v_skipInstances_1563_, lean_object* v_body_1564_, lean_object* v_x_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
uint8_t v_usedLetOnly_boxed_1572_; uint8_t v_skipConstInApp_boxed_1573_; uint8_t v_skipInstances_boxed_1574_; lean_object* v_res_1575_; 
v_usedLetOnly_boxed_1572_ = lean_unbox(v_usedLetOnly_1561_);
v_skipConstInApp_boxed_1573_ = lean_unbox(v_skipConstInApp_1562_);
v_skipInstances_boxed_1574_ = lean_unbox(v_skipInstances_1563_);
v_res_1575_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(v_fvars_1558_, v_pre_1559_, v_post_1560_, v_usedLetOnly_boxed_1572_, v_skipConstInApp_boxed_1573_, v_skipInstances_boxed_1574_, v_body_1564_, v_x_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object* v_pre_1576_, lean_object* v_post_1577_, uint8_t v_usedLetOnly_1578_, uint8_t v_skipConstInApp_1579_, uint8_t v_skipInstances_1580_, lean_object* v_e_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v___x_1588_; 
lean_inc_ref(v_post_1577_);
lean_inc(v___y_1586_);
lean_inc_ref(v___y_1585_);
lean_inc(v___y_1584_);
lean_inc_ref(v___y_1583_);
lean_inc_ref(v_e_1581_);
v___x_1588_ = lean_apply_6(v_post_1577_, v_e_1581_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, lean_box(0));
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1607_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1591_ = v___x_1588_;
v_isShared_1592_ = v_isSharedCheck_1607_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1588_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1607_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
switch(lean_obj_tag(v_a_1589_))
{
case 0:
{
lean_object* v_e_1593_; lean_object* v___x_1595_; 
lean_dec_ref(v_e_1581_);
lean_dec_ref(v_post_1577_);
lean_dec_ref(v_pre_1576_);
v_e_1593_ = lean_ctor_get(v_a_1589_, 0);
lean_inc_ref(v_e_1593_);
lean_dec_ref_known(v_a_1589_, 1);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 0, v_e_1593_);
v___x_1595_ = v___x_1591_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_e_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
case 1:
{
lean_object* v_e_1597_; lean_object* v___x_1598_; 
lean_del_object(v___x_1591_);
lean_dec_ref(v_e_1581_);
v_e_1597_ = lean_ctor_get(v_a_1589_, 0);
lean_inc_ref(v_e_1597_);
lean_dec_ref_known(v_a_1589_, 1);
v___x_1598_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1576_, v_post_1577_, v_usedLetOnly_1578_, v_skipConstInApp_1579_, v_skipInstances_1580_, v_e_1597_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
return v___x_1598_;
}
default: 
{
lean_object* v_e_x3f_1599_; 
lean_dec_ref(v_post_1577_);
lean_dec_ref(v_pre_1576_);
v_e_x3f_1599_ = lean_ctor_get(v_a_1589_, 0);
lean_inc(v_e_x3f_1599_);
lean_dec_ref_known(v_a_1589_, 1);
if (lean_obj_tag(v_e_x3f_1599_) == 0)
{
lean_object* v___x_1601_; 
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 0, v_e_1581_);
v___x_1601_ = v___x_1591_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_e_1581_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
else
{
lean_object* v_val_1603_; lean_object* v___x_1605_; 
lean_dec_ref(v_e_1581_);
v_val_1603_ = lean_ctor_get(v_e_x3f_1599_, 0);
lean_inc(v_val_1603_);
lean_dec_ref_known(v_e_x3f_1599_, 1);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 0, v_val_1603_);
v___x_1605_ = v___x_1591_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_val_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec_ref(v_e_1581_);
lean_dec_ref(v_post_1577_);
lean_dec_ref(v_pre_1576_);
v_a_1608_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1588_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1588_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object* v_pre_1616_, lean_object* v_post_1617_, uint8_t v_usedLetOnly_1618_, uint8_t v_skipConstInApp_1619_, uint8_t v_skipInstances_1620_, lean_object* v_fvars_1621_, lean_object* v_e_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
if (lean_obj_tag(v_e_1622_) == 6)
{
lean_object* v_binderName_1629_; lean_object* v_binderType_1630_; lean_object* v_body_1631_; uint8_t v_binderInfo_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___f_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v_binderName_1629_ = lean_ctor_get(v_e_1622_, 0);
lean_inc(v_binderName_1629_);
v_binderType_1630_ = lean_ctor_get(v_e_1622_, 1);
lean_inc_ref(v_binderType_1630_);
v_body_1631_ = lean_ctor_get(v_e_1622_, 2);
lean_inc_ref(v_body_1631_);
v_binderInfo_1632_ = lean_ctor_get_uint8(v_e_1622_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1622_, 3);
v___x_1633_ = lean_box(v_usedLetOnly_1618_);
v___x_1634_ = lean_box(v_skipConstInApp_1619_);
v___x_1635_ = lean_box(v_skipInstances_1620_);
lean_inc_ref(v_post_1617_);
lean_inc_ref(v_pre_1616_);
lean_inc_ref(v_fvars_1621_);
v___f_1636_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1636_, 0, v_fvars_1621_);
lean_closure_set(v___f_1636_, 1, v_pre_1616_);
lean_closure_set(v___f_1636_, 2, v_post_1617_);
lean_closure_set(v___f_1636_, 3, v___x_1633_);
lean_closure_set(v___f_1636_, 4, v___x_1634_);
lean_closure_set(v___f_1636_, 5, v___x_1635_);
lean_closure_set(v___f_1636_, 6, v_body_1631_);
v___x_1637_ = lean_expr_instantiate_rev(v_binderType_1630_, v_fvars_1621_);
lean_dec_ref(v_fvars_1621_);
lean_dec_ref(v_binderType_1630_);
v___x_1638_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1616_, v_post_1617_, v_usedLetOnly_1618_, v_skipConstInApp_1619_, v_skipInstances_1620_, v___x_1637_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; uint8_t v___x_1640_; lean_object* v___x_1641_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1638_, 1);
v___x_1640_ = 0;
v___x_1641_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_1629_, v_binderInfo_1632_, v_a_1639_, v___f_1636_, v___x_1640_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
return v___x_1641_;
}
else
{
lean_dec_ref(v___f_1636_);
lean_dec(v_binderName_1629_);
return v___x_1638_;
}
}
else
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1642_ = lean_expr_instantiate_rev(v_e_1622_, v_fvars_1621_);
lean_dec_ref(v_e_1622_);
lean_inc_ref(v_post_1617_);
lean_inc_ref(v_pre_1616_);
v___x_1643_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1616_, v_post_1617_, v_usedLetOnly_1618_, v_skipConstInApp_1619_, v_skipInstances_1620_, v___x_1642_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; uint8_t v___x_1645_; uint8_t v___x_1646_; uint8_t v___x_1647_; lean_object* v___x_1648_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v___x_1643_, 1);
v___x_1645_ = 0;
v___x_1646_ = 1;
v___x_1647_ = 1;
v___x_1648_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1621_, v_a_1644_, v___x_1645_, v_usedLetOnly_1618_, v___x_1645_, v___x_1646_, v___x_1647_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec_ref(v_fvars_1621_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1650_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
v___x_1650_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1616_, v_post_1617_, v_usedLetOnly_1618_, v_skipConstInApp_1619_, v_skipInstances_1620_, v_a_1649_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
return v___x_1650_;
}
else
{
lean_dec_ref(v_post_1617_);
lean_dec_ref(v_pre_1616_);
return v___x_1648_;
}
}
else
{
lean_dec_ref(v_fvars_1621_);
lean_dec_ref(v_post_1617_);
lean_dec_ref(v_pre_1616_);
return v___x_1643_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object* v_fvars_1651_, lean_object* v_pre_1652_, lean_object* v_post_1653_, uint8_t v_usedLetOnly_1654_, uint8_t v_skipConstInApp_1655_, uint8_t v_skipInstances_1656_, lean_object* v_body_1657_, lean_object* v_x_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = lean_array_push(v_fvars_1651_, v_x_1658_);
v___x_1666_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1652_, v_post_1653_, v_usedLetOnly_1654_, v_skipConstInApp_1655_, v_skipInstances_1656_, v___x_1665_, v_body_1657_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object* v_fvars_1667_, lean_object* v_pre_1668_, lean_object* v_post_1669_, lean_object* v_usedLetOnly_1670_, lean_object* v_skipConstInApp_1671_, lean_object* v_skipInstances_1672_, lean_object* v_body_1673_, lean_object* v_x_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
uint8_t v_usedLetOnly_boxed_1681_; uint8_t v_skipConstInApp_boxed_1682_; uint8_t v_skipInstances_boxed_1683_; lean_object* v_res_1684_; 
v_usedLetOnly_boxed_1681_ = lean_unbox(v_usedLetOnly_1670_);
v_skipConstInApp_boxed_1682_ = lean_unbox(v_skipConstInApp_1671_);
v_skipInstances_boxed_1683_ = lean_unbox(v_skipInstances_1672_);
v_res_1684_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(v_fvars_1667_, v_pre_1668_, v_post_1669_, v_usedLetOnly_boxed_1681_, v_skipConstInApp_boxed_1682_, v_skipInstances_boxed_1683_, v_body_1673_, v_x_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object* v_pre_1685_, lean_object* v_post_1686_, uint8_t v_usedLetOnly_1687_, uint8_t v_skipConstInApp_1688_, uint8_t v_skipInstances_1689_, lean_object* v_fvars_1690_, lean_object* v_e_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
if (lean_obj_tag(v_e_1691_) == 8)
{
lean_object* v_declName_1698_; lean_object* v_type_1699_; lean_object* v_value_1700_; lean_object* v_body_1701_; uint8_t v_nondep_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___f_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_declName_1698_ = lean_ctor_get(v_e_1691_, 0);
lean_inc(v_declName_1698_);
v_type_1699_ = lean_ctor_get(v_e_1691_, 1);
lean_inc_ref(v_type_1699_);
v_value_1700_ = lean_ctor_get(v_e_1691_, 2);
lean_inc_ref(v_value_1700_);
v_body_1701_ = lean_ctor_get(v_e_1691_, 3);
lean_inc_ref(v_body_1701_);
v_nondep_1702_ = lean_ctor_get_uint8(v_e_1691_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1691_, 4);
v___x_1703_ = lean_box(v_usedLetOnly_1687_);
v___x_1704_ = lean_box(v_skipConstInApp_1688_);
v___x_1705_ = lean_box(v_skipInstances_1689_);
lean_inc_ref_n(v_post_1686_, 2);
lean_inc_ref_n(v_pre_1685_, 2);
lean_inc_ref(v_fvars_1690_);
v___f_1706_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1706_, 0, v_fvars_1690_);
lean_closure_set(v___f_1706_, 1, v_pre_1685_);
lean_closure_set(v___f_1706_, 2, v_post_1686_);
lean_closure_set(v___f_1706_, 3, v___x_1703_);
lean_closure_set(v___f_1706_, 4, v___x_1704_);
lean_closure_set(v___f_1706_, 5, v___x_1705_);
lean_closure_set(v___f_1706_, 6, v_body_1701_);
v___x_1707_ = lean_expr_instantiate_rev(v_type_1699_, v_fvars_1690_);
lean_dec_ref(v_type_1699_);
v___x_1708_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1685_, v_post_1686_, v_usedLetOnly_1687_, v_skipConstInApp_1688_, v_skipInstances_1689_, v___x_1707_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1708_, 1);
v___x_1710_ = lean_expr_instantiate_rev(v_value_1700_, v_fvars_1690_);
lean_dec_ref(v_fvars_1690_);
lean_dec_ref(v_value_1700_);
v___x_1711_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1685_, v_post_1686_, v_usedLetOnly_1687_, v_skipConstInApp_1688_, v_skipInstances_1689_, v___x_1710_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; uint8_t v___x_1713_; lean_object* v___x_1714_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
v___x_1713_ = 0;
v___x_1714_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_declName_1698_, v_a_1709_, v_a_1712_, v___f_1706_, v_nondep_1702_, v___x_1713_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
return v___x_1714_;
}
else
{
lean_dec(v_a_1709_);
lean_dec_ref(v___f_1706_);
lean_dec(v_declName_1698_);
return v___x_1711_;
}
}
else
{
lean_dec_ref(v___f_1706_);
lean_dec_ref(v_value_1700_);
lean_dec(v_declName_1698_);
lean_dec_ref(v_fvars_1690_);
lean_dec_ref(v_post_1686_);
lean_dec_ref(v_pre_1685_);
return v___x_1708_;
}
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = lean_expr_instantiate_rev(v_e_1691_, v_fvars_1690_);
lean_dec_ref(v_e_1691_);
lean_inc_ref(v_post_1686_);
lean_inc_ref(v_pre_1685_);
v___x_1716_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1685_, v_post_1686_, v_usedLetOnly_1687_, v_skipConstInApp_1688_, v_skipInstances_1689_, v___x_1715_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; uint8_t v___x_1718_; uint8_t v___x_1719_; lean_object* v___x_1720_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v___x_1718_ = 0;
v___x_1719_ = 1;
v___x_1720_ = l_Lean_Meta_mkLetFVars(v_fvars_1690_, v_a_1717_, v_usedLetOnly_1687_, v___x_1718_, v___x_1719_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec_ref(v_fvars_1690_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1722_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1720_, 1);
v___x_1722_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1685_, v_post_1686_, v_usedLetOnly_1687_, v_skipConstInApp_1688_, v_skipInstances_1689_, v_a_1721_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
return v___x_1722_;
}
else
{
lean_dec_ref(v_post_1686_);
lean_dec_ref(v_pre_1685_);
return v___x_1720_;
}
}
else
{
lean_dec_ref(v_fvars_1690_);
lean_dec_ref(v_post_1686_);
lean_dec_ref(v_pre_1685_);
return v___x_1716_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1723_; lean_object* v_dummy_1724_; 
v___x_1723_ = lean_box(0);
v_dummy_1724_ = l_Lean_Expr_sort___override(v___x_1723_);
return v_dummy_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object* v_pre_1725_, lean_object* v_post_1726_, uint8_t v_usedLetOnly_1727_, uint8_t v_skipConstInApp_1728_, uint8_t v_skipInstances_1729_, size_t v_sz_1730_, size_t v_i_1731_, lean_object* v_bs_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
uint8_t v___x_1739_; 
v___x_1739_ = lean_usize_dec_lt(v_i_1731_, v_sz_1730_);
if (v___x_1739_ == 0)
{
lean_object* v___x_1740_; 
lean_dec_ref(v_post_1726_);
lean_dec_ref(v_pre_1725_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v_bs_1732_);
return v___x_1740_;
}
else
{
lean_object* v_v_1741_; lean_object* v___x_1742_; lean_object* v_bs_x27_1743_; lean_object* v___x_1744_; 
v_v_1741_ = lean_array_uget(v_bs_1732_, v_i_1731_);
v___x_1742_ = lean_unsigned_to_nat(0u);
v_bs_x27_1743_ = lean_array_uset(v_bs_1732_, v_i_1731_, v___x_1742_);
lean_inc_ref(v_post_1726_);
lean_inc_ref(v_pre_1725_);
v___x_1744_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1725_, v_post_1726_, v_usedLetOnly_1727_, v_skipConstInApp_1728_, v_skipInstances_1729_, v_v_1741_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; size_t v___x_1746_; size_t v___x_1747_; lean_object* v___x_1748_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
v___x_1746_ = ((size_t)1ULL);
v___x_1747_ = lean_usize_add(v_i_1731_, v___x_1746_);
v___x_1748_ = lean_array_uset(v_bs_x27_1743_, v_i_1731_, v_a_1745_);
v_i_1731_ = v___x_1747_;
v_bs_1732_ = v___x_1748_;
goto _start;
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v_bs_x27_1743_);
lean_dec_ref(v_post_1726_);
lean_dec_ref(v_pre_1725_);
v_a_1750_ = lean_ctor_get(v___x_1744_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1744_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1744_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object* v_upperBound_1758_, lean_object* v___x_1759_, lean_object* v_pre_1760_, lean_object* v_post_1761_, uint8_t v_usedLetOnly_1762_, uint8_t v_skipConstInApp_1763_, uint8_t v_skipInstances_1764_, lean_object* v_a_1765_, lean_object* v_b_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v_a_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1777_; lean_object* v___y_1778_; uint8_t v___x_1782_; 
v___x_1782_ = lean_nat_dec_lt(v_a_1765_, v_upperBound_1758_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; 
lean_dec(v_a_1765_);
lean_dec_ref(v_post_1761_);
lean_dec_ref(v_pre_1760_);
v___x_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1783_, 0, v_b_1766_);
return v___x_1783_;
}
else
{
lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v___x_1784_ = lean_array_fget_borrowed(v_b_1766_, v_a_1765_);
v___x_1785_ = lean_array_get_size(v___x_1759_);
v___x_1786_ = lean_nat_dec_lt(v_a_1765_, v___x_1785_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; 
lean_inc(v___x_1784_);
lean_inc_ref(v_post_1761_);
lean_inc_ref(v_pre_1760_);
v___x_1787_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1760_, v_post_1761_, v_usedLetOnly_1762_, v_skipConstInApp_1763_, v_skipInstances_1764_, v___x_1784_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___x_1787_, 1);
v___x_1789_ = lean_array_fset(v_b_1766_, v_a_1765_, v_a_1788_);
v___x_1790_ = lean_unsigned_to_nat(1u);
v___x_1791_ = lean_nat_add(v_a_1765_, v___x_1790_);
lean_dec(v_a_1765_);
v_a_1765_ = v___x_1791_;
v_b_1766_ = v___x_1789_;
goto _start;
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec_ref(v_b_1766_);
lean_dec(v_a_1765_);
lean_dec_ref(v_post_1761_);
lean_dec_ref(v_pre_1760_);
v_a_1793_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1787_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1787_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
else
{
lean_object* v___x_1801_; uint8_t v_isInstance_1802_; 
v___x_1801_ = lean_array_fget_borrowed(v___x_1759_, v_a_1765_);
v_isInstance_1802_ = lean_ctor_get_uint8(v___x_1801_, sizeof(void*)*1 + 4);
if (v_isInstance_1802_ == 0)
{
lean_object* v___x_1803_; 
lean_inc(v___x_1784_);
lean_inc_ref(v_post_1761_);
lean_inc_ref(v_pre_1760_);
v___x_1803_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1760_, v_post_1761_, v_usedLetOnly_1762_, v_skipConstInApp_1763_, v_skipInstances_1764_, v___x_1784_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1805_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v___x_1805_ = lean_array_fset(v_b_1766_, v_a_1765_, v_a_1804_);
v_a_1774_ = v___x_1805_;
v___y_1775_ = v___y_1768_;
v___y_1776_ = v___y_1769_;
v___y_1777_ = v___y_1770_;
v___y_1778_ = v___y_1771_;
goto v___jp_1773_;
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_dec_ref(v_b_1766_);
lean_dec(v_a_1765_);
lean_dec_ref(v_post_1761_);
lean_dec_ref(v_pre_1760_);
v_a_1806_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1803_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1803_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
else
{
v_a_1774_ = v_b_1766_;
v___y_1775_ = v___y_1768_;
v___y_1776_ = v___y_1769_;
v___y_1777_ = v___y_1770_;
v___y_1778_ = v___y_1771_;
goto v___jp_1773_;
}
}
}
v___jp_1773_:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_add(v_a_1765_, v___x_1779_);
lean_dec(v_a_1765_);
v_a_1765_ = v___x_1780_;
v_b_1766_ = v_a_1774_;
v___y_1768_ = v___y_1775_;
v___y_1769_ = v___y_1776_;
v___y_1770_ = v___y_1777_;
v___y_1771_ = v___y_1778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t v_skipInstances_1814_, lean_object* v_pre_1815_, lean_object* v_post_1816_, uint8_t v_usedLetOnly_1817_, uint8_t v_skipConstInApp_1818_, lean_object* v_x_1819_, lean_object* v_x_1820_, lean_object* v_x_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v_f_1829_; lean_object* v___y_1830_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; 
if (lean_obj_tag(v_x_1819_) == 5)
{
lean_object* v_fn_1877_; lean_object* v_arg_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v_fn_1877_ = lean_ctor_get(v_x_1819_, 0);
lean_inc_ref(v_fn_1877_);
v_arg_1878_ = lean_ctor_get(v_x_1819_, 1);
lean_inc_ref(v_arg_1878_);
lean_dec_ref_known(v_x_1819_, 2);
v___x_1879_ = lean_array_set(v_x_1820_, v_x_1821_, v_arg_1878_);
v___x_1880_ = lean_unsigned_to_nat(1u);
v___x_1881_ = lean_nat_sub(v_x_1821_, v___x_1880_);
lean_dec(v_x_1821_);
v_x_1819_ = v_fn_1877_;
v_x_1820_ = v___x_1879_;
v_x_1821_ = v___x_1881_;
goto _start;
}
else
{
lean_dec(v_x_1821_);
if (v_skipConstInApp_1818_ == 0)
{
goto v___jp_1874_;
}
else
{
uint8_t v___x_1883_; 
v___x_1883_ = l_Lean_Expr_isConst(v_x_1819_);
if (v___x_1883_ == 0)
{
goto v___jp_1874_;
}
else
{
v_f_1829_ = v_x_1819_;
v___y_1830_ = v___y_1822_;
v___y_1831_ = v___y_1823_;
v___y_1832_ = v___y_1824_;
v___y_1833_ = v___y_1825_;
v___y_1834_ = v___y_1826_;
goto v___jp_1828_;
}
}
}
v___jp_1828_:
{
if (v_skipInstances_1814_ == 0)
{
size_t v_sz_1835_; size_t v___x_1836_; lean_object* v___x_1837_; 
v_sz_1835_ = lean_array_size(v_x_1820_);
v___x_1836_ = ((size_t)0ULL);
lean_inc_ref(v_post_1816_);
lean_inc_ref(v_pre_1815_);
v___x_1837_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_1815_, v_post_1816_, v_usedLetOnly_1817_, v_skipConstInApp_1818_, v_skipInstances_1814_, v_sz_1835_, v___x_1836_, v_x_1820_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = l_Lean_mkAppN(v_f_1829_, v_a_1838_);
lean_dec(v_a_1838_);
v___x_1840_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1815_, v_post_1816_, v_usedLetOnly_1817_, v_skipConstInApp_1818_, v_skipInstances_1814_, v___x_1839_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
return v___x_1840_;
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec_ref(v_f_1829_);
lean_dec_ref(v_post_1816_);
lean_dec_ref(v_pre_1815_);
v_a_1841_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1837_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1837_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = lean_array_get_size(v_x_1820_);
lean_inc_ref(v_f_1829_);
v___x_1850_ = l_Lean_Meta_getFunInfoNArgs(v_f_1829_, v___x_1849_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; lean_object* v_paramInfo_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_a_1851_);
lean_dec_ref_known(v___x_1850_, 1);
v_paramInfo_1852_ = lean_ctor_get(v_a_1851_, 0);
lean_inc_ref(v_paramInfo_1852_);
lean_dec(v_a_1851_);
v___x_1853_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1816_);
lean_inc_ref(v_pre_1815_);
v___x_1854_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v___x_1849_, v_paramInfo_1852_, v_pre_1815_, v_post_1816_, v_usedLetOnly_1817_, v_skipConstInApp_1818_, v_skipInstances_1814_, v___x_1853_, v_x_1820_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
lean_dec_ref(v_paramInfo_1852_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc(v_a_1855_);
lean_dec_ref_known(v___x_1854_, 1);
v___x_1856_ = l_Lean_mkAppN(v_f_1829_, v_a_1855_);
lean_dec(v_a_1855_);
v___x_1857_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1815_, v_post_1816_, v_usedLetOnly_1817_, v_skipConstInApp_1818_, v_skipInstances_1814_, v___x_1856_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
return v___x_1857_;
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_dec_ref(v_f_1829_);
lean_dec_ref(v_post_1816_);
lean_dec_ref(v_pre_1815_);
v_a_1858_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1854_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1854_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec_ref(v_f_1829_);
lean_dec_ref(v_x_1820_);
lean_dec_ref(v_post_1816_);
lean_dec_ref(v_pre_1815_);
v_a_1866_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1850_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1850_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
v___jp_1874_:
{
lean_object* v___x_1875_; 
lean_inc_ref(v_post_1816_);
lean_inc_ref(v_pre_1815_);
v___x_1875_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1815_, v_post_1816_, v_usedLetOnly_1817_, v_skipConstInApp_1818_, v_skipInstances_1814_, v_x_1819_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_object* v_a_1876_; 
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc(v_a_1876_);
lean_dec_ref_known(v___x_1875_, 1);
v_f_1829_ = v_a_1876_;
v___y_1830_ = v___y_1822_;
v___y_1831_ = v___y_1823_;
v___y_1832_ = v___y_1824_;
v___y_1833_ = v___y_1825_;
v___y_1834_ = v___y_1826_;
goto v___jp_1828_;
}
else
{
lean_dec_ref(v_x_1820_);
lean_dec_ref(v_post_1816_);
lean_dec_ref(v_pre_1815_);
return v___x_1875_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object* v___x_1884_, lean_object* v_pre_1885_, lean_object* v_e_1886_, lean_object* v_post_1887_, uint8_t v_usedLetOnly_1888_, uint8_t v_skipConstInApp_1889_, uint8_t v_skipInstances_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lean_Core_checkSystem(v___x_1884_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v___x_1898_; 
lean_dec_ref_known(v___x_1897_, 1);
lean_inc_ref(v_pre_1885_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1894_);
lean_inc(v___y_1893_);
lean_inc_ref(v___y_1892_);
lean_inc_ref(v_e_1886_);
v___x_1898_ = lean_apply_6(v_pre_1885_, v_e_1886_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, lean_box(0));
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1947_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1901_ = v___x_1898_;
v_isShared_1902_ = v_isSharedCheck_1947_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1898_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1947_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___y_1904_; 
switch(lean_obj_tag(v_a_1899_))
{
case 0:
{
lean_object* v_e_1939_; lean_object* v___x_1941_; 
lean_dec_ref(v_post_1887_);
lean_dec_ref(v_e_1886_);
lean_dec_ref(v_pre_1885_);
v_e_1939_ = lean_ctor_get(v_a_1899_, 0);
lean_inc_ref(v_e_1939_);
lean_dec_ref_known(v_a_1899_, 1);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v_e_1939_);
v___x_1941_ = v___x_1901_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_e_1939_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
case 1:
{
lean_object* v_e_1943_; lean_object* v___x_1944_; 
lean_del_object(v___x_1901_);
lean_dec_ref(v_e_1886_);
v_e_1943_ = lean_ctor_get(v_a_1899_, 0);
lean_inc_ref(v_e_1943_);
lean_dec_ref_known(v_a_1899_, 1);
v___x_1944_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v_e_1943_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1944_;
}
default: 
{
lean_object* v_e_x3f_1945_; 
lean_del_object(v___x_1901_);
v_e_x3f_1945_ = lean_ctor_get(v_a_1899_, 0);
lean_inc(v_e_x3f_1945_);
lean_dec_ref_known(v_a_1899_, 1);
if (lean_obj_tag(v_e_x3f_1945_) == 0)
{
v___y_1904_ = v_e_1886_;
goto v___jp_1903_;
}
else
{
lean_object* v_val_1946_; 
lean_dec_ref(v_e_1886_);
v_val_1946_ = lean_ctor_get(v_e_x3f_1945_, 0);
lean_inc(v_val_1946_);
lean_dec_ref_known(v_e_x3f_1945_, 1);
v___y_1904_ = v_val_1946_;
goto v___jp_1903_;
}
}
}
v___jp_1903_:
{
switch(lean_obj_tag(v___y_1904_))
{
case 7:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1905_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1906_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___x_1905_, v___y_1904_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1906_;
}
case 6:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1908_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___x_1907_, v___y_1904_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1908_;
}
case 8:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___x_1909_, v___y_1904_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1910_;
}
case 5:
{
lean_object* v_dummy_1911_; lean_object* v_nargs_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_dummy_1911_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_1912_ = l_Lean_Expr_getAppNumArgs(v___y_1904_);
lean_inc(v_nargs_1912_);
v___x_1913_ = lean_mk_array(v_nargs_1912_, v_dummy_1911_);
v___x_1914_ = lean_unsigned_to_nat(1u);
v___x_1915_ = lean_nat_sub(v_nargs_1912_, v___x_1914_);
lean_dec(v_nargs_1912_);
v___x_1916_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_1890_, v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v___y_1904_, v___x_1913_, v___x_1915_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1916_;
}
case 10:
{
lean_object* v_data_1917_; lean_object* v_expr_1918_; lean_object* v___x_1919_; 
v_data_1917_ = lean_ctor_get(v___y_1904_, 0);
v_expr_1918_ = lean_ctor_get(v___y_1904_, 1);
lean_inc_ref(v_expr_1918_);
lean_inc_ref(v_post_1887_);
lean_inc_ref(v_pre_1885_);
v___x_1919_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v_expr_1918_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; size_t v___x_1921_; size_t v___x_1922_; uint8_t v___x_1923_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = lean_ptr_addr(v_expr_1918_);
v___x_1922_ = lean_ptr_addr(v_a_1920_);
v___x_1923_ = lean_usize_dec_eq(v___x_1921_, v___x_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; lean_object* v___x_1925_; 
lean_inc(v_data_1917_);
lean_dec_ref_known(v___y_1904_, 2);
v___x_1924_ = l_Lean_Expr_mdata___override(v_data_1917_, v_a_1920_);
v___x_1925_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___x_1924_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1925_;
}
else
{
lean_object* v___x_1926_; 
lean_dec(v_a_1920_);
v___x_1926_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___y_1904_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1926_;
}
}
else
{
lean_dec_ref_known(v___y_1904_, 2);
lean_dec_ref(v_post_1887_);
lean_dec_ref(v_pre_1885_);
return v___x_1919_;
}
}
case 11:
{
lean_object* v_typeName_1927_; lean_object* v_idx_1928_; lean_object* v_struct_1929_; lean_object* v___x_1930_; 
v_typeName_1927_ = lean_ctor_get(v___y_1904_, 0);
v_idx_1928_ = lean_ctor_get(v___y_1904_, 1);
v_struct_1929_ = lean_ctor_get(v___y_1904_, 2);
lean_inc_ref(v_struct_1929_);
lean_inc_ref(v_post_1887_);
lean_inc_ref(v_pre_1885_);
v___x_1930_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v_struct_1929_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; size_t v___x_1932_; size_t v___x_1933_; uint8_t v___x_1934_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = lean_ptr_addr(v_struct_1929_);
v___x_1933_ = lean_ptr_addr(v_a_1931_);
v___x_1934_ = lean_usize_dec_eq(v___x_1932_, v___x_1933_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
lean_inc(v_idx_1928_);
lean_inc(v_typeName_1927_);
lean_dec_ref_known(v___y_1904_, 3);
v___x_1935_ = l_Lean_Expr_proj___override(v_typeName_1927_, v_idx_1928_, v_a_1931_);
v___x_1936_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___x_1935_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1936_;
}
else
{
lean_object* v___x_1937_; 
lean_dec(v_a_1931_);
v___x_1937_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___y_1904_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1937_;
}
}
else
{
lean_dec_ref_known(v___y_1904_, 3);
lean_dec_ref(v_post_1887_);
lean_dec_ref(v_pre_1885_);
return v___x_1930_;
}
}
default: 
{
lean_object* v___x_1938_; 
v___x_1938_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1887_, v_usedLetOnly_1888_, v_skipConstInApp_1889_, v_skipInstances_1890_, v___y_1904_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1938_;
}
}
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v_post_1887_);
lean_dec_ref(v_e_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1948_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1898_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1898_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
lean_dec_ref(v_post_1887_);
lean_dec_ref(v_e_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1956_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1897_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1897_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object* v___x_1964_, lean_object* v_pre_1965_, lean_object* v_e_1966_, lean_object* v_post_1967_, lean_object* v_usedLetOnly_1968_, lean_object* v_skipConstInApp_1969_, lean_object* v_skipInstances_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
uint8_t v_usedLetOnly_boxed_1977_; uint8_t v_skipConstInApp_boxed_1978_; uint8_t v_skipInstances_boxed_1979_; lean_object* v_res_1980_; 
v_usedLetOnly_boxed_1977_ = lean_unbox(v_usedLetOnly_1968_);
v_skipConstInApp_boxed_1978_ = lean_unbox(v_skipConstInApp_1969_);
v_skipInstances_boxed_1979_ = lean_unbox(v_skipInstances_1970_);
v_res_1980_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(v___x_1964_, v_pre_1965_, v_e_1966_, v_post_1967_, v_usedLetOnly_boxed_1977_, v_skipConstInApp_boxed_1978_, v_skipInstances_boxed_1979_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object* v_pre_1981_, lean_object* v_post_1982_, uint8_t v_usedLetOnly_1983_, uint8_t v_skipConstInApp_1984_, uint8_t v_skipInstances_1985_, lean_object* v_e_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
lean_inc(v___y_1987_);
v___x_1993_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1993_, 0, lean_box(0));
lean_closure_set(v___x_1993_, 1, lean_box(0));
lean_closure_set(v___x_1993_, 2, v___y_1987_);
v___x_1994_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___x_1993_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2029_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_1997_ = v___x_1994_;
v_isShared_1998_ = v_isSharedCheck_2029_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1994_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2029_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; 
v___x_1999_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_a_1995_, v_e_1986_);
lean_dec(v_a_1995_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; 
lean_del_object(v___x_1997_);
v___x_2000_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0));
v___x_2001_ = lean_box(v_usedLetOnly_1983_);
v___x_2002_ = lean_box(v_skipConstInApp_1984_);
v___x_2003_ = lean_box(v_skipInstances_1985_);
lean_inc_ref(v_e_1986_);
v___f_2004_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2004_, 0, v___x_2000_);
lean_closure_set(v___f_2004_, 1, v_pre_1981_);
lean_closure_set(v___f_2004_, 2, v_e_1986_);
lean_closure_set(v___f_2004_, 3, v_post_1982_);
lean_closure_set(v___f_2004_, 4, v___x_2001_);
lean_closure_set(v___f_2004_, 5, v___x_2002_);
lean_closure_set(v___f_2004_, 6, v___x_2003_);
v___x_2005_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v___f_2004_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
lean_inc_n(v_a_2006_, 2);
lean_dec_ref_known(v___x_2005_, 1);
lean_inc(v___y_1987_);
v___f_2007_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2007_, 0, v___y_1987_);
lean_closure_set(v___f_2007_, 1, v_e_1986_);
lean_closure_set(v___f_2007_, 2, v_a_2006_);
v___x_2008_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___f_2007_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2015_ == 0)
{
lean_object* v_unused_2016_; 
v_unused_2016_ = lean_ctor_get(v___x_2008_, 0);
lean_dec(v_unused_2016_);
v___x_2010_ = v___x_2008_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_dec(v___x_2008_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v_a_2006_);
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2006_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec(v_a_2006_);
v_a_2017_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2008_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2008_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
else
{
lean_dec_ref(v_e_1986_);
return v___x_2005_;
}
}
else
{
lean_object* v_val_2025_; lean_object* v___x_2027_; 
lean_dec_ref(v_e_1986_);
lean_dec_ref(v_post_1982_);
lean_dec_ref(v_pre_1981_);
v_val_2025_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_val_2025_);
lean_dec_ref_known(v___x_1999_, 1);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v_val_2025_);
v___x_2027_ = v___x_1997_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_val_2025_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec_ref(v_e_1986_);
lean_dec_ref(v_post_1982_);
lean_dec_ref(v_pre_1981_);
v_a_2030_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_1994_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_1994_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object* v_pre_2038_, lean_object* v_post_2039_, uint8_t v_usedLetOnly_2040_, uint8_t v_skipConstInApp_2041_, uint8_t v_skipInstances_2042_, lean_object* v_fvars_2043_, lean_object* v_e_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
if (lean_obj_tag(v_e_2044_) == 7)
{
lean_object* v_binderName_2051_; lean_object* v_binderType_2052_; lean_object* v_body_2053_; uint8_t v_binderInfo_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___f_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v_binderName_2051_ = lean_ctor_get(v_e_2044_, 0);
lean_inc(v_binderName_2051_);
v_binderType_2052_ = lean_ctor_get(v_e_2044_, 1);
lean_inc_ref(v_binderType_2052_);
v_body_2053_ = lean_ctor_get(v_e_2044_, 2);
lean_inc_ref(v_body_2053_);
v_binderInfo_2054_ = lean_ctor_get_uint8(v_e_2044_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2044_, 3);
v___x_2055_ = lean_box(v_usedLetOnly_2040_);
v___x_2056_ = lean_box(v_skipConstInApp_2041_);
v___x_2057_ = lean_box(v_skipInstances_2042_);
lean_inc_ref(v_post_2039_);
lean_inc_ref(v_pre_2038_);
lean_inc_ref(v_fvars_2043_);
v___f_2058_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2058_, 0, v_fvars_2043_);
lean_closure_set(v___f_2058_, 1, v_pre_2038_);
lean_closure_set(v___f_2058_, 2, v_post_2039_);
lean_closure_set(v___f_2058_, 3, v___x_2055_);
lean_closure_set(v___f_2058_, 4, v___x_2056_);
lean_closure_set(v___f_2058_, 5, v___x_2057_);
lean_closure_set(v___f_2058_, 6, v_body_2053_);
v___x_2059_ = lean_expr_instantiate_rev(v_binderType_2052_, v_fvars_2043_);
lean_dec_ref(v_fvars_2043_);
lean_dec_ref(v_binderType_2052_);
v___x_2060_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2038_, v_post_2039_, v_usedLetOnly_2040_, v_skipConstInApp_2041_, v_skipInstances_2042_, v___x_2059_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; uint8_t v___x_2062_; lean_object* v___x_2063_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___x_2060_, 1);
v___x_2062_ = 0;
v___x_2063_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2051_, v_binderInfo_2054_, v_a_2061_, v___f_2058_, v___x_2062_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
return v___x_2063_;
}
else
{
lean_dec_ref(v___f_2058_);
lean_dec(v_binderName_2051_);
return v___x_2060_;
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = lean_expr_instantiate_rev(v_e_2044_, v_fvars_2043_);
lean_dec_ref(v_e_2044_);
lean_inc_ref(v_post_2039_);
lean_inc_ref(v_pre_2038_);
v___x_2065_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2038_, v_post_2039_, v_usedLetOnly_2040_, v_skipConstInApp_2041_, v_skipInstances_2042_, v___x_2064_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; uint8_t v___x_2067_; uint8_t v___x_2068_; uint8_t v___x_2069_; lean_object* v___x_2070_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2067_ = 0;
v___x_2068_ = 1;
v___x_2069_ = 1;
v___x_2070_ = l_Lean_Meta_mkForallFVars(v_fvars_2043_, v_a_2066_, v___x_2067_, v_usedLetOnly_2040_, v___x_2068_, v___x_2069_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
lean_dec_ref(v_fvars_2043_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v_a_2071_; lean_object* v___x_2072_; 
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_a_2071_);
lean_dec_ref_known(v___x_2070_, 1);
v___x_2072_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2038_, v_post_2039_, v_usedLetOnly_2040_, v_skipConstInApp_2041_, v_skipInstances_2042_, v_a_2071_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
return v___x_2072_;
}
else
{
lean_dec_ref(v_post_2039_);
lean_dec_ref(v_pre_2038_);
return v___x_2070_;
}
}
else
{
lean_dec_ref(v_fvars_2043_);
lean_dec_ref(v_post_2039_);
lean_dec_ref(v_pre_2038_);
return v___x_2065_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object* v_fvars_2073_, lean_object* v_pre_2074_, lean_object* v_post_2075_, uint8_t v_usedLetOnly_2076_, uint8_t v_skipConstInApp_2077_, uint8_t v_skipInstances_2078_, lean_object* v_body_2079_, lean_object* v_x_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = lean_array_push(v_fvars_2073_, v_x_2080_);
v___x_2088_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2074_, v_post_2075_, v_usedLetOnly_2076_, v_skipConstInApp_2077_, v_skipInstances_2078_, v___x_2087_, v_body_2079_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object* v_pre_2089_, lean_object* v_post_2090_, lean_object* v_usedLetOnly_2091_, lean_object* v_skipConstInApp_2092_, lean_object* v_skipInstances_2093_, lean_object* v_e_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
uint8_t v_usedLetOnly_boxed_2101_; uint8_t v_skipConstInApp_boxed_2102_; uint8_t v_skipInstances_boxed_2103_; lean_object* v_res_2104_; 
v_usedLetOnly_boxed_2101_ = lean_unbox(v_usedLetOnly_2091_);
v_skipConstInApp_boxed_2102_ = lean_unbox(v_skipConstInApp_2092_);
v_skipInstances_boxed_2103_ = lean_unbox(v_skipInstances_2093_);
v_res_2104_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2089_, v_post_2090_, v_usedLetOnly_boxed_2101_, v_skipConstInApp_boxed_2102_, v_skipInstances_boxed_2103_, v_e_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object* v_pre_2105_, lean_object* v_post_2106_, lean_object* v_usedLetOnly_2107_, lean_object* v_skipConstInApp_2108_, lean_object* v_skipInstances_2109_, lean_object* v_sz_2110_, lean_object* v_i_2111_, lean_object* v_bs_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v_usedLetOnly_boxed_2119_; uint8_t v_skipConstInApp_boxed_2120_; uint8_t v_skipInstances_boxed_2121_; size_t v_sz_boxed_2122_; size_t v_i_boxed_2123_; lean_object* v_res_2124_; 
v_usedLetOnly_boxed_2119_ = lean_unbox(v_usedLetOnly_2107_);
v_skipConstInApp_boxed_2120_ = lean_unbox(v_skipConstInApp_2108_);
v_skipInstances_boxed_2121_ = lean_unbox(v_skipInstances_2109_);
v_sz_boxed_2122_ = lean_unbox_usize(v_sz_2110_);
lean_dec(v_sz_2110_);
v_i_boxed_2123_ = lean_unbox_usize(v_i_2111_);
lean_dec(v_i_2111_);
v_res_2124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_2105_, v_post_2106_, v_usedLetOnly_boxed_2119_, v_skipConstInApp_boxed_2120_, v_skipInstances_boxed_2121_, v_sz_boxed_2122_, v_i_boxed_2123_, v_bs_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object* v_pre_2125_, lean_object* v_post_2126_, lean_object* v_usedLetOnly_2127_, lean_object* v_skipConstInApp_2128_, lean_object* v_skipInstances_2129_, lean_object* v_e_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_){
_start:
{
uint8_t v_usedLetOnly_boxed_2137_; uint8_t v_skipConstInApp_boxed_2138_; uint8_t v_skipInstances_boxed_2139_; lean_object* v_res_2140_; 
v_usedLetOnly_boxed_2137_ = lean_unbox(v_usedLetOnly_2127_);
v_skipConstInApp_boxed_2138_ = lean_unbox(v_skipConstInApp_2128_);
v_skipInstances_boxed_2139_ = lean_unbox(v_skipInstances_2129_);
v_res_2140_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2125_, v_post_2126_, v_usedLetOnly_boxed_2137_, v_skipConstInApp_boxed_2138_, v_skipInstances_boxed_2139_, v_e_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object* v_pre_2141_, lean_object* v_post_2142_, lean_object* v_usedLetOnly_2143_, lean_object* v_skipConstInApp_2144_, lean_object* v_skipInstances_2145_, lean_object* v_fvars_2146_, lean_object* v_e_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v_usedLetOnly_boxed_2154_; uint8_t v_skipConstInApp_boxed_2155_; uint8_t v_skipInstances_boxed_2156_; lean_object* v_res_2157_; 
v_usedLetOnly_boxed_2154_ = lean_unbox(v_usedLetOnly_2143_);
v_skipConstInApp_boxed_2155_ = lean_unbox(v_skipConstInApp_2144_);
v_skipInstances_boxed_2156_ = lean_unbox(v_skipInstances_2145_);
v_res_2157_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2141_, v_post_2142_, v_usedLetOnly_boxed_2154_, v_skipConstInApp_boxed_2155_, v_skipInstances_boxed_2156_, v_fvars_2146_, v_e_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object* v_pre_2158_, lean_object* v_post_2159_, lean_object* v_usedLetOnly_2160_, lean_object* v_skipConstInApp_2161_, lean_object* v_skipInstances_2162_, lean_object* v_fvars_2163_, lean_object* v_e_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
uint8_t v_usedLetOnly_boxed_2171_; uint8_t v_skipConstInApp_boxed_2172_; uint8_t v_skipInstances_boxed_2173_; lean_object* v_res_2174_; 
v_usedLetOnly_boxed_2171_ = lean_unbox(v_usedLetOnly_2160_);
v_skipConstInApp_boxed_2172_ = lean_unbox(v_skipConstInApp_2161_);
v_skipInstances_boxed_2173_ = lean_unbox(v_skipInstances_2162_);
v_res_2174_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2158_, v_post_2159_, v_usedLetOnly_boxed_2171_, v_skipConstInApp_boxed_2172_, v_skipInstances_boxed_2173_, v_fvars_2163_, v_e_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v___y_2165_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object* v_pre_2175_, lean_object* v_post_2176_, lean_object* v_usedLetOnly_2177_, lean_object* v_skipConstInApp_2178_, lean_object* v_skipInstances_2179_, lean_object* v_fvars_2180_, lean_object* v_e_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
uint8_t v_usedLetOnly_boxed_2188_; uint8_t v_skipConstInApp_boxed_2189_; uint8_t v_skipInstances_boxed_2190_; lean_object* v_res_2191_; 
v_usedLetOnly_boxed_2188_ = lean_unbox(v_usedLetOnly_2177_);
v_skipConstInApp_boxed_2189_ = lean_unbox(v_skipConstInApp_2178_);
v_skipInstances_boxed_2190_ = lean_unbox(v_skipInstances_2179_);
v_res_2191_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2175_, v_post_2176_, v_usedLetOnly_boxed_2188_, v_skipConstInApp_boxed_2189_, v_skipInstances_boxed_2190_, v_fvars_2180_, v_e_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object* v_upperBound_2192_, lean_object* v___x_2193_, lean_object* v_pre_2194_, lean_object* v_post_2195_, lean_object* v_usedLetOnly_2196_, lean_object* v_skipConstInApp_2197_, lean_object* v_skipInstances_2198_, lean_object* v_a_2199_, lean_object* v_b_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
uint8_t v_usedLetOnly_boxed_2207_; uint8_t v_skipConstInApp_boxed_2208_; uint8_t v_skipInstances_boxed_2209_; lean_object* v_res_2210_; 
v_usedLetOnly_boxed_2207_ = lean_unbox(v_usedLetOnly_2196_);
v_skipConstInApp_boxed_2208_ = lean_unbox(v_skipConstInApp_2197_);
v_skipInstances_boxed_2209_ = lean_unbox(v_skipInstances_2198_);
v_res_2210_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_2192_, v___x_2193_, v_pre_2194_, v_post_2195_, v_usedLetOnly_boxed_2207_, v_skipConstInApp_boxed_2208_, v_skipInstances_boxed_2209_, v_a_2199_, v_b_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
lean_dec(v___y_2205_);
lean_dec_ref(v___y_2204_);
lean_dec(v___y_2203_);
lean_dec_ref(v___y_2202_);
lean_dec(v___y_2201_);
lean_dec_ref(v___x_2193_);
lean_dec(v_upperBound_2192_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object* v_skipInstances_2211_, lean_object* v_pre_2212_, lean_object* v_post_2213_, lean_object* v_usedLetOnly_2214_, lean_object* v_skipConstInApp_2215_, lean_object* v_x_2216_, lean_object* v_x_2217_, lean_object* v_x_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
uint8_t v_skipInstances_boxed_2225_; uint8_t v_usedLetOnly_boxed_2226_; uint8_t v_skipConstInApp_boxed_2227_; lean_object* v_res_2228_; 
v_skipInstances_boxed_2225_ = lean_unbox(v_skipInstances_2211_);
v_usedLetOnly_boxed_2226_ = lean_unbox(v_usedLetOnly_2214_);
v_skipConstInApp_boxed_2227_ = lean_unbox(v_skipConstInApp_2215_);
v_res_2228_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_boxed_2225_, v_pre_2212_, v_post_2213_, v_usedLetOnly_boxed_2226_, v_skipConstInApp_boxed_2227_, v_x_2216_, v_x_2217_, v_x_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
return v_res_2228_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2229_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2230_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2230_, 0, lean_box(0));
lean_closure_set(v___x_2230_, 1, lean_box(0));
lean_closure_set(v___x_2230_, 2, v___x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_input_2231_, lean_object* v_pre_2232_, lean_object* v_post_2233_, uint8_t v_usedLetOnly_2234_, uint8_t v_skipConstInApp_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
uint8_t v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v_a_2244_; lean_object* v___x_2245_; 
v___x_2241_ = 0;
v___x_2242_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0);
v___x_2243_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2242_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
lean_inc(v_a_2244_);
lean_dec_ref(v___x_2243_);
v___x_2245_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2232_, v_post_2233_, v_usedLetOnly_2234_, v_skipConstInApp_2235_, v___x_2241_, v_input_2231_, v_a_2244_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
lean_inc(v_a_2246_);
lean_dec_ref_known(v___x_2245_, 1);
v___x_2247_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2247_, 0, lean_box(0));
lean_closure_set(v___x_2247_, 1, lean_box(0));
lean_closure_set(v___x_2247_, 2, v_a_2244_);
v___x_2248_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2247_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2255_ == 0)
{
lean_object* v_unused_2256_; 
v_unused_2256_ = lean_ctor_get(v___x_2248_, 0);
lean_dec(v_unused_2256_);
v___x_2250_ = v___x_2248_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_dec(v___x_2248_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v_a_2246_);
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2246_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
else
{
lean_dec(v_a_2244_);
return v___x_2245_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_input_2257_, lean_object* v_pre_2258_, lean_object* v_post_2259_, lean_object* v_usedLetOnly_2260_, lean_object* v_skipConstInApp_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
uint8_t v_usedLetOnly_boxed_2267_; uint8_t v_skipConstInApp_boxed_2268_; lean_object* v_res_2269_; 
v_usedLetOnly_boxed_2267_ = lean_unbox(v_usedLetOnly_2260_);
v_skipConstInApp_boxed_2268_ = lean_unbox(v_skipConstInApp_2261_);
v_res_2269_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_input_2257_, v_pre_2258_, v_post_2259_, v_usedLetOnly_boxed_2267_, v_skipConstInApp_boxed_2268_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v___x_2270_, lean_object* v_as_2271_, lean_object* v_j_2272_){
_start:
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = lean_array_get_size(v_as_2271_);
v___x_2274_ = lean_nat_dec_lt(v_j_2272_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; 
lean_dec(v_j_2272_);
v___x_2275_ = lean_box(0);
return v___x_2275_;
}
else
{
lean_object* v___x_2276_; lean_object* v_declName_2277_; uint8_t v___x_2278_; 
v___x_2276_ = lean_array_fget_borrowed(v_as_2271_, v_j_2272_);
v_declName_2277_ = lean_ctor_get(v___x_2276_, 3);
v___x_2278_ = lean_name_eq(v_declName_2277_, v___x_2270_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2279_ = lean_unsigned_to_nat(1u);
v___x_2280_ = lean_nat_add(v_j_2272_, v___x_2279_);
lean_dec(v_j_2272_);
v_j_2272_ = v___x_2280_;
goto _start;
}
else
{
lean_object* v___x_2282_; 
v___x_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2282_, 0, v_j_2272_);
return v___x_2282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object* v___x_2283_, lean_object* v_as_2284_, lean_object* v_j_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2283_, v_as_2284_, v_j_2285_);
lean_dec_ref(v_as_2284_);
lean_dec(v___x_2283_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object* v_val_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2293_ = lean_st_ref_get(v_val_2287_);
v___x_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object* v_val_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v_val_2295_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object* v_val_2302_, lean_object* v_val_2303_, lean_object* v_a_2304_, lean_object* v___x_2305_, lean_object* v_____r_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2312_ = lean_st_ref_take(v_val_2302_);
v___x_2313_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_2303_, v_a_2304_, v___x_2312_);
v___x_2314_ = lean_st_ref_put(v_val_2302_, v___x_2313_);
v___x_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2305_);
v___x_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object* v_val_2317_, lean_object* v_val_2318_, lean_object* v_a_2319_, lean_object* v___x_2320_, lean_object* v_____r_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2317_, v_val_2318_, v_a_2319_, v___x_2320_, v_____r_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v_val_2318_);
lean_dec(v_val_2317_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_val_2328_, lean_object* v_val_2329_, lean_object* v_next_2330_, lean_object* v_next_2331_, lean_object* v___x_2332_, lean_object* v___x_2333_, lean_object* v_upperBound_2334_, lean_object* v_params_2335_, lean_object* v___x_2336_, lean_object* v_a_2337_, uint8_t v_b_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
uint8_t v_a_2345_; uint8_t v___x_2349_; 
v___x_2349_ = lean_nat_dec_lt(v_a_2337_, v_upperBound_2334_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
lean_dec(v_a_2337_);
lean_dec_ref(v___x_2336_);
lean_dec(v_next_2330_);
v___x_2350_ = lean_box(v_b_2338_);
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
return v___x_2351_;
}
else
{
uint8_t v___x_2352_; lean_object* v___y_2354_; lean_object* v___x_2368_; uint8_t v___x_2369_; 
v___x_2352_ = lean_nat_dec_eq(v___x_2332_, v___x_2333_);
v___x_2368_ = lean_st_ref_get(v_val_2328_);
v___x_2369_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_2331_, v_a_2337_, v___x_2368_);
lean_dec(v___x_2368_);
if (v___x_2369_ == 0)
{
v_a_2345_ = v_b_2338_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2370_; uint8_t v_foApprox_2371_; uint8_t v_ctxApprox_2372_; uint8_t v_quasiPatternApprox_2373_; uint8_t v_constApprox_2374_; uint8_t v_isDefEqStuckEx_2375_; uint8_t v_unificationHints_2376_; uint8_t v_assignSyntheticOpaque_2377_; uint8_t v_offsetCnstrs_2378_; uint8_t v_transparency_2379_; uint8_t v_etaStruct_2380_; uint8_t v_univApprox_2381_; uint8_t v_iota_2382_; uint8_t v_beta_2383_; uint8_t v_proj_2384_; uint8_t v_zeta_2385_; uint8_t v_zetaDelta_2386_; uint8_t v_zetaUnused_2387_; uint8_t v_zetaHave_2388_; uint8_t v_canUnfoldPredicateConfig_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2419_; 
v___x_2370_ = l_Lean_Meta_Context_config(v___y_2339_);
v_foApprox_2371_ = lean_ctor_get_uint8(v___x_2370_, 0);
v_ctxApprox_2372_ = lean_ctor_get_uint8(v___x_2370_, 1);
v_quasiPatternApprox_2373_ = lean_ctor_get_uint8(v___x_2370_, 2);
v_constApprox_2374_ = lean_ctor_get_uint8(v___x_2370_, 3);
v_isDefEqStuckEx_2375_ = lean_ctor_get_uint8(v___x_2370_, 4);
v_unificationHints_2376_ = lean_ctor_get_uint8(v___x_2370_, 5);
v_assignSyntheticOpaque_2377_ = lean_ctor_get_uint8(v___x_2370_, 7);
v_offsetCnstrs_2378_ = lean_ctor_get_uint8(v___x_2370_, 8);
v_transparency_2379_ = lean_ctor_get_uint8(v___x_2370_, 9);
v_etaStruct_2380_ = lean_ctor_get_uint8(v___x_2370_, 10);
v_univApprox_2381_ = lean_ctor_get_uint8(v___x_2370_, 11);
v_iota_2382_ = lean_ctor_get_uint8(v___x_2370_, 12);
v_beta_2383_ = lean_ctor_get_uint8(v___x_2370_, 13);
v_proj_2384_ = lean_ctor_get_uint8(v___x_2370_, 14);
v_zeta_2385_ = lean_ctor_get_uint8(v___x_2370_, 15);
v_zetaDelta_2386_ = lean_ctor_get_uint8(v___x_2370_, 16);
v_zetaUnused_2387_ = lean_ctor_get_uint8(v___x_2370_, 17);
v_zetaHave_2388_ = lean_ctor_get_uint8(v___x_2370_, 18);
v_canUnfoldPredicateConfig_2389_ = lean_ctor_get_uint8(v___x_2370_, 19);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2391_ = v___x_2370_;
v_isShared_2392_ = v_isSharedCheck_2419_;
goto v_resetjp_2390_;
}
else
{
lean_dec(v___x_2370_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2419_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
uint8_t v_trackZetaDelta_2393_; lean_object* v_zetaDeltaSet_2394_; lean_object* v_lctx_2395_; lean_object* v_localInstances_2396_; lean_object* v_defEqCtx_x3f_2397_; lean_object* v_synthPendingDepth_2398_; lean_object* v_customCanUnfoldPredicate_x3f_2399_; uint8_t v_univApprox_2400_; uint8_t v_inTypeClassResolution_2401_; uint8_t v_cacheInferType_2402_; uint8_t v___x_2403_; lean_object* v___x_2405_; 
v_trackZetaDelta_2393_ = lean_ctor_get_uint8(v___y_2339_, sizeof(void*)*7);
v_zetaDeltaSet_2394_ = lean_ctor_get(v___y_2339_, 1);
v_lctx_2395_ = lean_ctor_get(v___y_2339_, 2);
v_localInstances_2396_ = lean_ctor_get(v___y_2339_, 3);
v_defEqCtx_x3f_2397_ = lean_ctor_get(v___y_2339_, 4);
v_synthPendingDepth_2398_ = lean_ctor_get(v___y_2339_, 5);
v_customCanUnfoldPredicate_x3f_2399_ = lean_ctor_get(v___y_2339_, 6);
v_univApprox_2400_ = lean_ctor_get_uint8(v___y_2339_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2401_ = lean_ctor_get_uint8(v___y_2339_, sizeof(void*)*7 + 2);
v_cacheInferType_2402_ = lean_ctor_get_uint8(v___y_2339_, sizeof(void*)*7 + 3);
v___x_2403_ = 0;
if (v_isShared_2392_ == 0)
{
v___x_2405_ = v___x_2391_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 0, v_foApprox_2371_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 1, v_ctxApprox_2372_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 2, v_quasiPatternApprox_2373_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 3, v_constApprox_2374_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 4, v_isDefEqStuckEx_2375_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 5, v_unificationHints_2376_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 7, v_assignSyntheticOpaque_2377_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 8, v_offsetCnstrs_2378_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 9, v_transparency_2379_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 10, v_etaStruct_2380_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 11, v_univApprox_2381_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 12, v_iota_2382_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 13, v_beta_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 14, v_proj_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 15, v_zeta_2385_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 16, v_zetaDelta_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 17, v_zetaUnused_2387_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 18, v_zetaHave_2388_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, 19, v_canUnfoldPredicateConfig_2389_);
v___x_2405_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
uint64_t v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; uint8_t v_transparency_2410_; lean_object* v___x_2411_; uint8_t v___x_2412_; uint8_t v___x_2413_; 
lean_ctor_set_uint8(v___x_2405_, 6, v___x_2403_);
v___x_2406_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2405_);
v___x_2407_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2407_, 0, v___x_2405_);
lean_ctor_set_uint64(v___x_2407_, sizeof(void*)*1, v___x_2406_);
lean_inc(v_customCanUnfoldPredicate_x3f_2399_);
lean_inc(v_synthPendingDepth_2398_);
lean_inc(v_defEqCtx_x3f_2397_);
lean_inc_ref(v_localInstances_2396_);
lean_inc_ref(v_lctx_2395_);
lean_inc(v_zetaDeltaSet_2394_);
lean_inc_ref(v___x_2407_);
v___x_2408_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v_zetaDeltaSet_2394_);
lean_ctor_set(v___x_2408_, 2, v_lctx_2395_);
lean_ctor_set(v___x_2408_, 3, v_localInstances_2396_);
lean_ctor_set(v___x_2408_, 4, v_defEqCtx_x3f_2397_);
lean_ctor_set(v___x_2408_, 5, v_synthPendingDepth_2398_);
lean_ctor_set(v___x_2408_, 6, v_customCanUnfoldPredicate_x3f_2399_);
lean_ctor_set_uint8(v___x_2408_, sizeof(void*)*7, v_trackZetaDelta_2393_);
lean_ctor_set_uint8(v___x_2408_, sizeof(void*)*7 + 1, v_univApprox_2400_);
lean_ctor_set_uint8(v___x_2408_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2401_);
lean_ctor_set_uint8(v___x_2408_, sizeof(void*)*7 + 3, v_cacheInferType_2402_);
v___x_2409_ = l_Lean_Meta_Context_config(v___x_2408_);
v_transparency_2410_ = lean_ctor_get_uint8(v___x_2409_, 9);
lean_dec_ref(v___x_2409_);
v___x_2411_ = lean_array_fget_borrowed(v_params_2335_, v_a_2337_);
v___x_2412_ = 2;
v___x_2413_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2410_, v___x_2412_);
if (v___x_2413_ == 0)
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_dec_ref_known(v___x_2408_, 7);
v___x_2414_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2412_, v___x_2407_);
lean_inc(v_customCanUnfoldPredicate_x3f_2399_);
lean_inc(v_synthPendingDepth_2398_);
lean_inc(v_defEqCtx_x3f_2397_);
lean_inc_ref(v_localInstances_2396_);
lean_inc_ref(v_lctx_2395_);
lean_inc(v_zetaDeltaSet_2394_);
v___x_2415_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
lean_ctor_set(v___x_2415_, 1, v_zetaDeltaSet_2394_);
lean_ctor_set(v___x_2415_, 2, v_lctx_2395_);
lean_ctor_set(v___x_2415_, 3, v_localInstances_2396_);
lean_ctor_set(v___x_2415_, 4, v_defEqCtx_x3f_2397_);
lean_ctor_set(v___x_2415_, 5, v_synthPendingDepth_2398_);
lean_ctor_set(v___x_2415_, 6, v_customCanUnfoldPredicate_x3f_2399_);
lean_ctor_set_uint8(v___x_2415_, sizeof(void*)*7, v_trackZetaDelta_2393_);
lean_ctor_set_uint8(v___x_2415_, sizeof(void*)*7 + 1, v_univApprox_2400_);
lean_ctor_set_uint8(v___x_2415_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2401_);
lean_ctor_set_uint8(v___x_2415_, sizeof(void*)*7 + 3, v_cacheInferType_2402_);
lean_inc_ref(v___x_2336_);
lean_inc(v___x_2411_);
v___x_2416_ = l_Lean_Meta_isExprDefEq(v___x_2411_, v___x_2336_, v___x_2415_, v___y_2340_, v___y_2341_, v___y_2342_);
lean_dec_ref_known(v___x_2415_, 7);
v___y_2354_ = v___x_2416_;
goto v___jp_2353_;
}
else
{
lean_object* v___x_2417_; 
lean_dec_ref_known(v___x_2407_, 1);
lean_inc_ref(v___x_2336_);
lean_inc(v___x_2411_);
v___x_2417_ = l_Lean_Meta_isExprDefEq(v___x_2411_, v___x_2336_, v___x_2408_, v___y_2340_, v___y_2341_, v___y_2342_);
lean_dec_ref_known(v___x_2408_, 7);
v___y_2354_ = v___x_2417_;
goto v___jp_2353_;
}
}
}
}
v___jp_2353_:
{
if (lean_obj_tag(v___y_2354_) == 0)
{
lean_object* v_a_2355_; uint8_t v___x_2356_; 
v_a_2355_ = lean_ctor_get(v___y_2354_, 0);
lean_inc(v_a_2355_);
lean_dec_ref_known(v___y_2354_, 1);
v___x_2356_ = lean_unbox(v_a_2355_);
lean_dec(v_a_2355_);
if (v___x_2356_ == 0)
{
v_a_2345_ = v_b_2338_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2357_ = lean_st_ref_take(v_val_2328_);
lean_inc(v_a_2337_);
lean_inc(v_next_2330_);
v___x_2358_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_2329_, v_next_2330_, v_next_2331_, v_a_2337_, v___x_2357_);
v___x_2359_ = lean_st_ref_put(v_val_2328_, v___x_2358_);
v_a_2345_ = v___x_2352_;
goto v___jp_2344_;
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec(v_a_2337_);
lean_dec_ref(v___x_2336_);
lean_dec(v_next_2330_);
v_a_2360_ = lean_ctor_get(v___y_2354_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___y_2354_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___y_2354_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___y_2354_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
v___jp_2344_:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2346_ = lean_unsigned_to_nat(1u);
v___x_2347_ = lean_nat_add(v_a_2337_, v___x_2346_);
lean_dec(v_a_2337_);
v_a_2337_ = v___x_2347_;
v_b_2338_ = v_a_2345_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_val_2420_, lean_object* v_val_2421_, lean_object* v_next_2422_, lean_object* v_next_2423_, lean_object* v___x_2424_, lean_object* v___x_2425_, lean_object* v_upperBound_2426_, lean_object* v_params_2427_, lean_object* v___x_2428_, lean_object* v_a_2429_, lean_object* v_b_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
uint8_t v_b_boxed_2436_; lean_object* v_res_2437_; 
v_b_boxed_2436_ = lean_unbox(v_b_2430_);
v_res_2437_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2420_, v_val_2421_, v_next_2422_, v_next_2423_, v___x_2424_, v___x_2425_, v_upperBound_2426_, v_params_2427_, v___x_2428_, v_a_2429_, v_b_boxed_2436_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec_ref(v_params_2427_);
lean_dec(v_upperBound_2426_);
lean_dec(v___x_2425_);
lean_dec(v___x_2424_);
lean_dec(v_next_2423_);
lean_dec(v_val_2421_);
lean_dec(v_val_2420_);
return v_res_2437_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2448_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2449_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5));
v___x_2450_ = l_Lean_Name_append(v___x_2449_, v___x_2448_);
return v___x_2450_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7));
v___x_2453_ = l_Lean_stringToMessageData(v___x_2452_);
return v___x_2453_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2));
v___x_2455_ = l_Lean_stringToMessageData(v___x_2454_);
return v___x_2455_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2457_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10));
v___x_2458_ = l_Lean_stringToMessageData(v___x_2457_);
return v___x_2458_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2460_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12));
v___x_2461_ = l_Lean_stringToMessageData(v___x_2460_);
return v___x_2461_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14));
v___x_2464_ = l_Lean_stringToMessageData(v___x_2463_);
return v___x_2464_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16));
v___x_2467_ = l_Lean_stringToMessageData(v___x_2466_);
return v___x_2467_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18));
v___x_2470_ = l_Lean_stringToMessageData(v___x_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object* v_val_2471_, lean_object* v_val_2472_, lean_object* v_upperBound_2473_, lean_object* v_args_2474_, lean_object* v_e_2475_, lean_object* v_next_2476_, lean_object* v_params_2477_, lean_object* v___x_2478_, lean_object* v___x_2479_, lean_object* v_a_2480_, lean_object* v_b_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_a_2488_; lean_object* v___y_2493_; uint8_t v___x_2512_; 
v___x_2512_ = lean_nat_dec_lt(v_a_2480_, v_upperBound_2473_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v_b_2481_);
return v___x_2513_;
}
else
{
lean_object* v___x_2514_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2514_ = lean_box(0);
v___x_2521_ = l_Lean_instInhabitedExpr;
v___x_2522_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2471_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2522_) == 0)
{
lean_object* v_a_2523_; uint8_t v___x_2524_; 
v_a_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v___x_2522_, 1);
v___x_2524_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_2472_, v_a_2480_, v_a_2523_);
lean_dec(v_a_2523_);
if (v___x_2524_ == 0)
{
v_a_2488_ = v___x_2514_;
goto v___jp_2487_;
}
else
{
lean_object* v___x_2525_; uint8_t v___x_2526_; 
v___x_2525_ = lean_array_get_size(v_args_2474_);
v___x_2526_ = lean_nat_dec_lt(v_a_2480_, v___x_2525_);
if (v___x_2526_ == 0)
{
lean_object* v_toCold_2527_; lean_object* v_options_2528_; uint8_t v_hasTrace_2529_; 
v_toCold_2527_ = lean_ctor_get(v___y_2484_, 0);
v_options_2528_ = lean_ctor_get(v_toCold_2527_, 2);
v_hasTrace_2529_ = lean_ctor_get_uint8(v_options_2528_, sizeof(void*)*1);
if (v_hasTrace_2529_ == 0)
{
goto v___jp_2517_;
}
else
{
lean_object* v_inheritedTraceOptions_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; uint8_t v___x_2533_; 
v_inheritedTraceOptions_2530_ = lean_ctor_get(v_toCold_2527_, 11);
v___x_2531_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2532_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2533_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2530_, v_options_2528_, v___x_2532_);
if (v___x_2533_ == 0)
{
goto v___jp_2517_;
}
else
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2534_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2472_);
v___x_2535_ = l_Nat_reprFast(v_val_2472_);
v___x_2536_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
v___x_2537_ = l_Lean_MessageData_ofFormat(v___x_2536_);
v___x_2538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2534_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
v___x_2539_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2538_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
lean_inc(v_a_2480_);
v___x_2541_ = l_Nat_reprFast(v_a_2480_);
v___x_2542_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
v___x_2543_ = l_Lean_MessageData_ofFormat(v___x_2542_);
lean_inc_ref(v___x_2543_);
v___x_2544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2540_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
v___x_2545_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2544_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
lean_inc_ref(v_e_2475_);
v___x_2547_ = l_Lean_MessageData_ofExpr(v_e_2475_);
v___x_2548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2546_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13);
v___x_2550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
v___x_2551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
lean_ctor_set(v___x_2551_, 1, v___x_2543_);
v___x_2552_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2531_, v___x_2551_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2554_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
lean_inc(v_a_2553_);
lean_dec_ref_known(v___x_2552_, 1);
lean_inc(v_a_2480_);
v___x_2554_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2471_, v_val_2472_, v_a_2480_, v___x_2514_, v_a_2553_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
v___y_2493_ = v___x_2554_;
goto v___jp_2492_;
}
else
{
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
return v___x_2552_;
}
}
}
}
else
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = lean_array_fget_borrowed(v_args_2474_, v_a_2480_);
v___x_2556_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2471_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2556_) == 0)
{
lean_object* v_a_2557_; lean_object* v___x_2558_; 
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
lean_inc(v_a_2557_);
lean_dec_ref_known(v___x_2556_, 1);
v___x_2558_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_2472_, v_a_2480_, v_next_2476_, v_a_2557_);
lean_dec(v_a_2557_);
if (lean_obj_tag(v___x_2558_) == 1)
{
lean_object* v_val_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2660_; 
v_val_2559_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2561_ = v___x_2558_;
v_isShared_2562_ = v_isSharedCheck_2660_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_val_2559_);
lean_dec(v___x_2558_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2660_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2563_; uint8_t v_foApprox_2564_; uint8_t v_ctxApprox_2565_; uint8_t v_quasiPatternApprox_2566_; uint8_t v_constApprox_2567_; uint8_t v_isDefEqStuckEx_2568_; uint8_t v_unificationHints_2569_; uint8_t v_assignSyntheticOpaque_2570_; uint8_t v_offsetCnstrs_2571_; uint8_t v_transparency_2572_; uint8_t v_etaStruct_2573_; uint8_t v_univApprox_2574_; uint8_t v_iota_2575_; uint8_t v_beta_2576_; uint8_t v_proj_2577_; uint8_t v_zeta_2578_; uint8_t v_zetaDelta_2579_; uint8_t v_zetaUnused_2580_; uint8_t v_zetaHave_2581_; uint8_t v_canUnfoldPredicateConfig_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2659_; 
v___x_2563_ = l_Lean_Meta_Context_config(v___y_2482_);
v_foApprox_2564_ = lean_ctor_get_uint8(v___x_2563_, 0);
v_ctxApprox_2565_ = lean_ctor_get_uint8(v___x_2563_, 1);
v_quasiPatternApprox_2566_ = lean_ctor_get_uint8(v___x_2563_, 2);
v_constApprox_2567_ = lean_ctor_get_uint8(v___x_2563_, 3);
v_isDefEqStuckEx_2568_ = lean_ctor_get_uint8(v___x_2563_, 4);
v_unificationHints_2569_ = lean_ctor_get_uint8(v___x_2563_, 5);
v_assignSyntheticOpaque_2570_ = lean_ctor_get_uint8(v___x_2563_, 7);
v_offsetCnstrs_2571_ = lean_ctor_get_uint8(v___x_2563_, 8);
v_transparency_2572_ = lean_ctor_get_uint8(v___x_2563_, 9);
v_etaStruct_2573_ = lean_ctor_get_uint8(v___x_2563_, 10);
v_univApprox_2574_ = lean_ctor_get_uint8(v___x_2563_, 11);
v_iota_2575_ = lean_ctor_get_uint8(v___x_2563_, 12);
v_beta_2576_ = lean_ctor_get_uint8(v___x_2563_, 13);
v_proj_2577_ = lean_ctor_get_uint8(v___x_2563_, 14);
v_zeta_2578_ = lean_ctor_get_uint8(v___x_2563_, 15);
v_zetaDelta_2579_ = lean_ctor_get_uint8(v___x_2563_, 16);
v_zetaUnused_2580_ = lean_ctor_get_uint8(v___x_2563_, 17);
v_zetaHave_2581_ = lean_ctor_get_uint8(v___x_2563_, 18);
v_canUnfoldPredicateConfig_2582_ = lean_ctor_get_uint8(v___x_2563_, 19);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2584_ = v___x_2563_;
v_isShared_2585_ = v_isSharedCheck_2659_;
goto v_resetjp_2583_;
}
else
{
lean_dec(v___x_2563_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2659_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
uint8_t v_trackZetaDelta_2586_; lean_object* v_zetaDeltaSet_2587_; lean_object* v_lctx_2588_; lean_object* v_localInstances_2589_; lean_object* v_defEqCtx_x3f_2590_; lean_object* v_synthPendingDepth_2591_; lean_object* v_customCanUnfoldPredicate_x3f_2592_; uint8_t v_univApprox_2593_; uint8_t v_inTypeClassResolution_2594_; uint8_t v_cacheInferType_2595_; uint8_t v___x_2596_; lean_object* v___x_2598_; 
v_trackZetaDelta_2586_ = lean_ctor_get_uint8(v___y_2482_, sizeof(void*)*7);
v_zetaDeltaSet_2587_ = lean_ctor_get(v___y_2482_, 1);
v_lctx_2588_ = lean_ctor_get(v___y_2482_, 2);
v_localInstances_2589_ = lean_ctor_get(v___y_2482_, 3);
v_defEqCtx_x3f_2590_ = lean_ctor_get(v___y_2482_, 4);
v_synthPendingDepth_2591_ = lean_ctor_get(v___y_2482_, 5);
v_customCanUnfoldPredicate_x3f_2592_ = lean_ctor_get(v___y_2482_, 6);
v_univApprox_2593_ = lean_ctor_get_uint8(v___y_2482_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2594_ = lean_ctor_get_uint8(v___y_2482_, sizeof(void*)*7 + 2);
v_cacheInferType_2595_ = lean_ctor_get_uint8(v___y_2482_, sizeof(void*)*7 + 3);
v___x_2596_ = 0;
if (v_isShared_2585_ == 0)
{
v___x_2598_ = v___x_2584_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 0, v_foApprox_2564_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 1, v_ctxApprox_2565_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 2, v_quasiPatternApprox_2566_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 3, v_constApprox_2567_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 4, v_isDefEqStuckEx_2568_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 5, v_unificationHints_2569_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 7, v_assignSyntheticOpaque_2570_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 8, v_offsetCnstrs_2571_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 9, v_transparency_2572_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 10, v_etaStruct_2573_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 11, v_univApprox_2574_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 12, v_iota_2575_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 13, v_beta_2576_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 14, v_proj_2577_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 15, v_zeta_2578_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 16, v_zetaDelta_2579_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 17, v_zetaUnused_2580_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 18, v_zetaHave_2581_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, 19, v_canUnfoldPredicateConfig_2582_);
v___x_2598_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
uint64_t v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v_transparency_2603_; lean_object* v___x_2604_; lean_object* v___y_2606_; uint8_t v___x_2652_; uint8_t v___x_2653_; 
lean_ctor_set_uint8(v___x_2598_, 6, v___x_2596_);
v___x_2599_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2598_);
v___x_2600_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set_uint64(v___x_2600_, sizeof(void*)*1, v___x_2599_);
lean_inc(v_customCanUnfoldPredicate_x3f_2592_);
lean_inc(v_synthPendingDepth_2591_);
lean_inc(v_defEqCtx_x3f_2590_);
lean_inc_ref(v_localInstances_2589_);
lean_inc_ref(v_lctx_2588_);
lean_inc(v_zetaDeltaSet_2587_);
lean_inc_ref(v___x_2600_);
v___x_2601_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v_zetaDeltaSet_2587_);
lean_ctor_set(v___x_2601_, 2, v_lctx_2588_);
lean_ctor_set(v___x_2601_, 3, v_localInstances_2589_);
lean_ctor_set(v___x_2601_, 4, v_defEqCtx_x3f_2590_);
lean_ctor_set(v___x_2601_, 5, v_synthPendingDepth_2591_);
lean_ctor_set(v___x_2601_, 6, v_customCanUnfoldPredicate_x3f_2592_);
lean_ctor_set_uint8(v___x_2601_, sizeof(void*)*7, v_trackZetaDelta_2586_);
lean_ctor_set_uint8(v___x_2601_, sizeof(void*)*7 + 1, v_univApprox_2593_);
lean_ctor_set_uint8(v___x_2601_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2594_);
lean_ctor_set_uint8(v___x_2601_, sizeof(void*)*7 + 3, v_cacheInferType_2595_);
v___x_2602_ = l_Lean_Meta_Context_config(v___x_2601_);
v_transparency_2603_ = lean_ctor_get_uint8(v___x_2602_, 9);
lean_dec_ref(v___x_2602_);
v___x_2604_ = lean_array_get_borrowed(v___x_2521_, v_params_2477_, v_val_2559_);
lean_dec(v_val_2559_);
v___x_2652_ = 2;
v___x_2653_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2603_, v___x_2652_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
lean_dec_ref_known(v___x_2601_, 7);
v___x_2654_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2652_, v___x_2600_);
lean_inc(v_customCanUnfoldPredicate_x3f_2592_);
lean_inc(v_synthPendingDepth_2591_);
lean_inc(v_defEqCtx_x3f_2590_);
lean_inc_ref(v_localInstances_2589_);
lean_inc_ref(v_lctx_2588_);
lean_inc(v_zetaDeltaSet_2587_);
v___x_2655_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
lean_ctor_set(v___x_2655_, 1, v_zetaDeltaSet_2587_);
lean_ctor_set(v___x_2655_, 2, v_lctx_2588_);
lean_ctor_set(v___x_2655_, 3, v_localInstances_2589_);
lean_ctor_set(v___x_2655_, 4, v_defEqCtx_x3f_2590_);
lean_ctor_set(v___x_2655_, 5, v_synthPendingDepth_2591_);
lean_ctor_set(v___x_2655_, 6, v_customCanUnfoldPredicate_x3f_2592_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7, v_trackZetaDelta_2586_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7 + 1, v_univApprox_2593_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2594_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7 + 3, v_cacheInferType_2595_);
lean_inc(v___x_2555_);
lean_inc(v___x_2604_);
v___x_2656_ = l_Lean_Meta_isExprDefEq(v___x_2604_, v___x_2555_, v___x_2655_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec_ref_known(v___x_2655_, 7);
v___y_2606_ = v___x_2656_;
goto v___jp_2605_;
}
else
{
lean_object* v___x_2657_; 
lean_dec_ref_known(v___x_2600_, 1);
lean_inc(v___x_2555_);
lean_inc(v___x_2604_);
v___x_2657_ = l_Lean_Meta_isExprDefEq(v___x_2604_, v___x_2555_, v___x_2601_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec_ref_known(v___x_2601_, 7);
v___y_2606_ = v___x_2657_;
goto v___jp_2605_;
}
v___jp_2605_:
{
if (lean_obj_tag(v___y_2606_) == 0)
{
lean_object* v_a_2607_; uint8_t v___x_2608_; 
v_a_2607_ = lean_ctor_get(v___y_2606_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v___y_2606_, 1);
v___x_2608_ = lean_unbox(v_a_2607_);
lean_dec(v_a_2607_);
if (v___x_2608_ == 0)
{
lean_object* v_toCold_2609_; lean_object* v_options_2610_; uint8_t v_hasTrace_2611_; 
v_toCold_2609_ = lean_ctor_get(v___y_2484_, 0);
v_options_2610_ = lean_ctor_get(v_toCold_2609_, 2);
v_hasTrace_2611_ = lean_ctor_get_uint8(v_options_2610_, sizeof(void*)*1);
if (v_hasTrace_2611_ == 0)
{
lean_del_object(v___x_2561_);
goto v___jp_2519_;
}
else
{
lean_object* v_inheritedTraceOptions_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; uint8_t v___x_2615_; 
v_inheritedTraceOptions_2612_ = lean_ctor_get(v_toCold_2609_, 11);
v___x_2613_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2614_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2615_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2612_, v_options_2610_, v___x_2614_);
if (v___x_2615_ == 0)
{
lean_del_object(v___x_2561_);
goto v___jp_2519_;
}
else
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2619_; 
v___x_2616_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2472_);
v___x_2617_ = l_Nat_reprFast(v_val_2472_);
if (v_isShared_2562_ == 0)
{
lean_ctor_set_tag(v___x_2561_, 3);
lean_ctor_set(v___x_2561_, 0, v___x_2617_);
v___x_2619_ = v___x_2561_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v___x_2617_);
v___x_2619_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2620_ = l_Lean_MessageData_ofFormat(v___x_2619_);
v___x_2621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2616_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
lean_inc(v_a_2480_);
v___x_2624_ = l_Nat_reprFast(v_a_2480_);
v___x_2625_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
v___x_2626_ = l_Lean_MessageData_ofFormat(v___x_2625_);
v___x_2627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2623_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
lean_inc_ref(v_e_2475_);
v___x_2630_ = l_Lean_MessageData_ofExpr(v_e_2475_);
v___x_2631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2629_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2631_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
lean_inc(v___x_2604_);
v___x_2634_ = l_Lean_MessageData_ofExpr(v___x_2604_);
v___x_2635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2633_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17);
v___x_2637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2635_);
lean_ctor_set(v___x_2637_, 1, v___x_2636_);
lean_inc(v___x_2555_);
v___x_2638_ = l_Lean_MessageData_ofExpr(v___x_2555_);
v___x_2639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2613_, v___x_2639_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; lean_object* v___x_2642_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2640_, 1);
lean_inc(v_a_2480_);
v___x_2642_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2471_, v_val_2472_, v_a_2480_, v___x_2514_, v_a_2641_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
v___y_2493_ = v___x_2642_;
goto v___jp_2492_;
}
else
{
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
return v___x_2640_;
}
}
}
}
}
else
{
lean_del_object(v___x_2561_);
v_a_2488_ = v___x_2514_;
goto v___jp_2487_;
}
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2651_; 
lean_del_object(v___x_2561_);
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v_a_2644_ = lean_ctor_get(v___y_2606_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___y_2606_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2646_ = v___y_2606_;
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___y_2606_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2644_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
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
lean_object* v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; 
lean_dec(v___x_2558_);
v___x_2661_ = lean_unsigned_to_nat(0u);
v___x_2662_ = 0;
lean_inc(v___x_2555_);
lean_inc(v_a_2480_);
v___x_2663_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2471_, v_val_2472_, v_a_2480_, v_next_2476_, v___x_2478_, v___x_2479_, v___x_2478_, v_params_2477_, v___x_2555_, v___x_2661_, v___x_2662_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; uint8_t v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = lean_unbox(v_a_2664_);
lean_dec(v_a_2664_);
if (v___x_2665_ == 0)
{
lean_object* v_toCold_2666_; lean_object* v_options_2667_; uint8_t v_hasTrace_2668_; 
v_toCold_2666_ = lean_ctor_get(v___y_2484_, 0);
v_options_2667_ = lean_ctor_get(v_toCold_2666_, 2);
v_hasTrace_2668_ = lean_ctor_get_uint8(v_options_2667_, sizeof(void*)*1);
if (v_hasTrace_2668_ == 0)
{
goto v___jp_2515_;
}
else
{
lean_object* v_inheritedTraceOptions_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; uint8_t v___x_2672_; 
v_inheritedTraceOptions_2669_ = lean_ctor_get(v_toCold_2666_, 11);
v___x_2670_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2671_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2672_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2669_, v_options_2667_, v___x_2671_);
if (v___x_2672_ == 0)
{
goto v___jp_2515_;
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2673_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2472_);
v___x_2674_ = l_Nat_reprFast(v_val_2472_);
v___x_2675_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
v___x_2676_ = l_Lean_MessageData_ofFormat(v___x_2675_);
v___x_2677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2673_);
lean_ctor_set(v___x_2677_, 1, v___x_2676_);
v___x_2678_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2677_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
lean_inc(v_a_2480_);
v___x_2680_ = l_Nat_reprFast(v_a_2480_);
v___x_2681_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
v___x_2682_ = l_Lean_MessageData_ofFormat(v___x_2681_);
v___x_2683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2679_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2683_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
lean_inc_ref(v_e_2475_);
v___x_2686_ = l_Lean_MessageData_ofExpr(v_e_2475_);
v___x_2687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2685_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
lean_inc(v___x_2555_);
v___x_2690_ = l_Lean_MessageData_ofExpr(v___x_2555_);
v___x_2691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19);
v___x_2693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2691_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2670_, v___x_2693_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
lean_inc(v_a_2480_);
v___x_2696_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2471_, v_val_2472_, v_a_2480_, v___x_2514_, v_a_2695_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
v___y_2493_ = v___x_2696_;
goto v___jp_2492_;
}
else
{
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
return v___x_2694_;
}
}
}
}
else
{
v_a_2488_ = v___x_2514_;
goto v___jp_2487_;
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v_a_2697_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2663_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2663_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
}
else
{
lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2712_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v_a_2705_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2707_ = v___x_2556_;
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_dec(v___x_2556_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
}
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v_a_2713_ = lean_ctor_get(v___x_2522_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2522_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2522_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2522_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
v___jp_2515_:
{
lean_object* v___x_2516_; 
lean_inc(v_a_2480_);
v___x_2516_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2471_, v_val_2472_, v_a_2480_, v___x_2514_, v___x_2514_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
v___y_2493_ = v___x_2516_;
goto v___jp_2492_;
}
v___jp_2517_:
{
lean_object* v___x_2518_; 
lean_inc(v_a_2480_);
v___x_2518_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2471_, v_val_2472_, v_a_2480_, v___x_2514_, v___x_2514_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
v___y_2493_ = v___x_2518_;
goto v___jp_2492_;
}
v___jp_2519_:
{
lean_object* v___x_2520_; 
lean_inc(v_a_2480_);
v___x_2520_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2471_, v_val_2472_, v_a_2480_, v___x_2514_, v___x_2514_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
v___y_2493_ = v___x_2520_;
goto v___jp_2492_;
}
}
v___jp_2487_:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = lean_unsigned_to_nat(1u);
v___x_2490_ = lean_nat_add(v_a_2480_, v___x_2489_);
lean_dec(v_a_2480_);
v_a_2480_ = v___x_2490_;
v_b_2481_ = v_a_2488_;
goto _start;
}
v___jp_2492_:
{
if (lean_obj_tag(v___y_2493_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2503_; 
v_a_2494_ = lean_ctor_get(v___y_2493_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___y_2493_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2496_ = v___y_2493_;
v_isShared_2497_ = v_isSharedCheck_2503_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___y_2493_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2503_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
if (lean_obj_tag(v_a_2494_) == 0)
{
lean_object* v_a_2498_; lean_object* v___x_2500_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v_a_2498_ = lean_ctor_get(v_a_2494_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v_a_2494_, 1);
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 0, v_a_2498_);
v___x_2500_ = v___x_2496_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
else
{
lean_object* v_a_2502_; 
lean_del_object(v___x_2496_);
v_a_2502_ = lean_ctor_get(v_a_2494_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v_a_2494_, 1);
v_a_2488_ = v_a_2502_;
goto v___jp_2487_;
}
}
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2511_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_e_2475_);
lean_dec(v_val_2472_);
v_a_2504_ = lean_ctor_get(v___y_2493_, 0);
v_isSharedCheck_2511_ = !lean_is_exclusive(v___y_2493_);
if (v_isSharedCheck_2511_ == 0)
{
v___x_2506_ = v___y_2493_;
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___y_2493_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2509_; 
if (v_isShared_2507_ == 0)
{
v___x_2509_ = v___x_2506_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_a_2504_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object* v_val_2721_, lean_object* v_val_2722_, lean_object* v_upperBound_2723_, lean_object* v_args_2724_, lean_object* v_e_2725_, lean_object* v_next_2726_, lean_object* v_params_2727_, lean_object* v___x_2728_, lean_object* v___x_2729_, lean_object* v_a_2730_, lean_object* v_b_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2721_, v_val_2722_, v_upperBound_2723_, v_args_2724_, v_e_2725_, v_next_2726_, v_params_2727_, v___x_2728_, v___x_2729_, v_a_2730_, v_b_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec(v___x_2729_);
lean_dec(v___x_2728_);
lean_dec_ref(v_params_2727_);
lean_dec(v_next_2726_);
lean_dec_ref(v_args_2724_);
lean_dec(v_upperBound_2723_);
lean_dec(v_val_2721_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_preDefs_2740_, lean_object* v___x_2741_, lean_object* v_val_2742_, lean_object* v_e_2743_, lean_object* v_next_2744_, lean_object* v_params_2745_, lean_object* v___x_2746_, lean_object* v___x_2747_, lean_object* v_x_2748_, lean_object* v_x_2749_, lean_object* v_x_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_){
_start:
{
if (lean_obj_tag(v_x_2748_) == 5)
{
lean_object* v_fn_2756_; lean_object* v_arg_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v_fn_2756_ = lean_ctor_get(v_x_2748_, 0);
lean_inc_ref(v_fn_2756_);
v_arg_2757_ = lean_ctor_get(v_x_2748_, 1);
lean_inc_ref(v_arg_2757_);
lean_dec_ref_known(v_x_2748_, 2);
v___x_2758_ = lean_array_set(v_x_2749_, v_x_2750_, v_arg_2757_);
v___x_2759_ = lean_unsigned_to_nat(1u);
v___x_2760_ = lean_nat_sub(v_x_2750_, v___x_2759_);
lean_dec(v_x_2750_);
v_x_2748_ = v_fn_2756_;
v_x_2749_ = v___x_2758_;
v_x_2750_ = v___x_2760_;
goto _start;
}
else
{
uint8_t v___x_2762_; 
lean_dec(v_x_2750_);
v___x_2762_ = l_Lean_Expr_isConst(v_x_2748_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
lean_dec_ref(v_x_2749_);
lean_dec_ref(v_x_2748_);
lean_dec_ref(v_e_2743_);
v___x_2763_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
return v___x_2764_;
}
else
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2765_ = l_Lean_Expr_constName_x21(v_x_2748_);
lean_dec_ref(v_x_2748_);
v___x_2766_ = lean_unsigned_to_nat(0u);
v___x_2767_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2765_, v_preDefs_2740_, v___x_2766_);
lean_dec(v___x_2765_);
if (lean_obj_tag(v___x_2767_) == 1)
{
lean_object* v_val_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v_val_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_val_2768_);
lean_dec_ref_known(v___x_2767_, 1);
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_array_get_borrowed(v___x_2766_, v___x_2741_, v_val_2768_);
v___x_2771_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2742_, v_val_2768_, v___x_2770_, v_x_2749_, v_e_2743_, v_next_2744_, v_params_2745_, v___x_2746_, v___x_2747_, v___x_2766_, v___x_2769_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec_ref(v_x_2749_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2779_; 
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2779_ == 0)
{
lean_object* v_unused_2780_; 
v_unused_2780_ = lean_ctor_get(v___x_2771_, 0);
lean_dec(v_unused_2780_);
v___x_2773_ = v___x_2771_;
v_isShared_2774_ = v_isSharedCheck_2779_;
goto v_resetjp_2772_;
}
else
{
lean_dec(v___x_2771_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2779_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2775_; lean_object* v___x_2777_; 
v___x_2775_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v___x_2775_);
v___x_2777_ = v___x_2773_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v___x_2775_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
else
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2788_; 
v_a_2781_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2783_ = v___x_2771_;
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2771_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
else
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
lean_dec(v___x_2767_);
lean_dec_ref(v_x_2749_);
lean_dec_ref(v_e_2743_);
v___x_2789_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
return v___x_2790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_preDefs_2791_, lean_object* v___x_2792_, lean_object* v_val_2793_, lean_object* v_e_2794_, lean_object* v_next_2795_, lean_object* v_params_2796_, lean_object* v___x_2797_, lean_object* v___x_2798_, lean_object* v_x_2799_, lean_object* v_x_2800_, lean_object* v_x_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_){
_start:
{
lean_object* v_res_2807_; 
v_res_2807_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2791_, v___x_2792_, v_val_2793_, v_e_2794_, v_next_2795_, v_params_2796_, v___x_2797_, v___x_2798_, v_x_2799_, v_x_2800_, v_x_2801_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___x_2798_);
lean_dec(v___x_2797_);
lean_dec_ref(v_params_2796_);
lean_dec(v_next_2795_);
lean_dec(v_val_2793_);
lean_dec_ref(v___x_2792_);
lean_dec_ref(v_preDefs_2791_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object* v_preDefs_2808_, lean_object* v___x_2809_, lean_object* v_val_2810_, lean_object* v_a_2811_, lean_object* v_params_2812_, lean_object* v___x_2813_, lean_object* v___x_2814_, lean_object* v_e_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_){
_start:
{
lean_object* v_dummy_2821_; lean_object* v_nargs_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v_dummy_2821_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_2822_ = l_Lean_Expr_getAppNumArgs(v_e_2815_);
lean_inc(v_nargs_2822_);
v___x_2823_ = lean_mk_array(v_nargs_2822_, v_dummy_2821_);
v___x_2824_ = lean_unsigned_to_nat(1u);
v___x_2825_ = lean_nat_sub(v_nargs_2822_, v___x_2824_);
lean_dec(v_nargs_2822_);
lean_inc_ref(v_e_2815_);
v___x_2826_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2808_, v___x_2809_, v_val_2810_, v_e_2815_, v_a_2811_, v_params_2812_, v___x_2813_, v___x_2814_, v_e_2815_, v___x_2823_, v___x_2825_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object* v_preDefs_2827_, lean_object* v___x_2828_, lean_object* v_val_2829_, lean_object* v_a_2830_, lean_object* v_params_2831_, lean_object* v___x_2832_, lean_object* v___x_2833_, lean_object* v_e_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(v_preDefs_2827_, v___x_2828_, v_val_2829_, v_a_2830_, v_params_2831_, v___x_2832_, v___x_2833_, v_e_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec(v___y_2836_);
lean_dec_ref(v___y_2835_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v_params_2831_);
lean_dec(v_a_2830_);
lean_dec(v_val_2829_);
lean_dec_ref(v___x_2828_);
lean_dec_ref(v_preDefs_2827_);
return v_res_2840_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2844_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2));
v___x_2845_ = lean_unsigned_to_nat(6u);
v___x_2846_ = lean_unsigned_to_nat(201u);
v___x_2847_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1));
v___x_2848_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_2849_ = l_mkPanicMessageWithDecl(v___x_2848_, v___x_2847_, v___x_2846_, v___x_2845_, v___x_2844_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object* v___x_2850_, lean_object* v___x_2851_, lean_object* v_a_2852_, lean_object* v_preDefs_2853_, lean_object* v_val_2854_, lean_object* v___f_2855_, lean_object* v___x_2856_, lean_object* v_params_2857_, lean_object* v_body_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_){
_start:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; uint8_t v___x_2866_; 
v___x_2864_ = lean_array_get_size(v_params_2857_);
v___x_2865_ = lean_array_get(v___x_2850_, v___x_2851_, v_a_2852_);
v___x_2866_ = lean_nat_dec_eq(v___x_2864_, v___x_2865_);
if (v___x_2866_ == 0)
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
lean_dec(v___x_2865_);
lean_dec_ref(v_body_2858_);
lean_dec_ref(v_params_2857_);
lean_dec_ref(v___f_2855_);
lean_dec(v_val_2854_);
lean_dec_ref(v_preDefs_2853_);
lean_dec(v_a_2852_);
lean_dec_ref(v___x_2851_);
v___x_2867_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3);
v___x_2868_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_2867_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_);
return v___x_2868_;
}
else
{
lean_object* v___f_2869_; uint8_t v___x_2870_; lean_object* v___x_2871_; 
v___f_2869_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2869_, 0, v_preDefs_2853_);
lean_closure_set(v___f_2869_, 1, v___x_2851_);
lean_closure_set(v___f_2869_, 2, v_val_2854_);
lean_closure_set(v___f_2869_, 3, v_a_2852_);
lean_closure_set(v___f_2869_, 4, v_params_2857_);
lean_closure_set(v___f_2869_, 5, v___x_2864_);
lean_closure_set(v___f_2869_, 6, v___x_2865_);
v___x_2870_ = 0;
v___x_2871_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_body_2858_, v___f_2869_, v___f_2855_, v___x_2870_, v___x_2866_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2878_; 
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; 
v_unused_2879_ = lean_ctor_get(v___x_2871_, 0);
lean_dec(v_unused_2879_);
v___x_2873_ = v___x_2871_;
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
else
{
lean_dec(v___x_2871_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 0, v___x_2856_);
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2856_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
else
{
lean_object* v_a_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
v_a_2880_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2882_ = v___x_2871_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_a_2880_);
lean_dec(v___x_2871_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object* v___x_2888_, lean_object* v___x_2889_, lean_object* v_a_2890_, lean_object* v_preDefs_2891_, lean_object* v_val_2892_, lean_object* v___f_2893_, lean_object* v___x_2894_, lean_object* v_params_2895_, lean_object* v_body_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_){
_start:
{
lean_object* v_res_2902_; 
v_res_2902_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(v___x_2888_, v___x_2889_, v_a_2890_, v_preDefs_2891_, v_val_2892_, v___f_2893_, v___x_2894_, v_params_2895_, v_body_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec_ref(v___y_2897_);
lean_dec(v___x_2888_);
return v_res_2902_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object* v_e_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v_e_2903_);
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object* v_e_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(v_e_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object* v___x_2919_, lean_object* v_preDefs_2920_, lean_object* v_val_2921_, lean_object* v_upperBound_2922_, lean_object* v_a_2923_, lean_object* v_b_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
uint8_t v___x_2930_; 
v___x_2930_ = lean_nat_dec_lt(v_a_2923_, v_upperBound_2922_);
if (v___x_2930_ == 0)
{
lean_object* v___x_2931_; 
lean_dec(v_a_2923_);
lean_dec(v_val_2921_);
lean_dec_ref(v_preDefs_2920_);
lean_dec_ref(v___x_2919_);
v___x_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2931_, 0, v_b_2924_);
return v___x_2931_;
}
else
{
lean_object* v___x_2932_; lean_object* v_value_2933_; lean_object* v___f_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___f_2937_; uint8_t v___x_2938_; lean_object* v___x_2939_; 
v___x_2932_ = lean_array_fget_borrowed(v_preDefs_2920_, v_a_2923_);
v_value_2933_ = lean_ctor_get(v___x_2932_, 7);
v___f_2934_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0));
v___x_2935_ = lean_unsigned_to_nat(0u);
v___x_2936_ = lean_box(0);
lean_inc(v_val_2921_);
lean_inc_ref(v_preDefs_2920_);
lean_inc(v_a_2923_);
lean_inc_ref(v___x_2919_);
v___f_2937_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_2937_, 0, v___x_2935_);
lean_closure_set(v___f_2937_, 1, v___x_2919_);
lean_closure_set(v___f_2937_, 2, v_a_2923_);
lean_closure_set(v___f_2937_, 3, v_preDefs_2920_);
lean_closure_set(v___f_2937_, 4, v_val_2921_);
lean_closure_set(v___f_2937_, 5, v___f_2934_);
lean_closure_set(v___f_2937_, 6, v___x_2936_);
v___x_2938_ = 0;
lean_inc_ref(v_value_2933_);
v___x_2939_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_2933_, v___f_2937_, v___x_2938_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
lean_dec_ref_known(v___x_2939_, 1);
v___x_2940_ = lean_unsigned_to_nat(1u);
v___x_2941_ = lean_nat_add(v_a_2923_, v___x_2940_);
lean_dec(v_a_2923_);
v_a_2923_ = v___x_2941_;
v_b_2924_ = v___x_2936_;
goto _start;
}
else
{
lean_dec(v_a_2923_);
lean_dec(v_val_2921_);
lean_dec_ref(v_preDefs_2920_);
lean_dec_ref(v___x_2919_);
return v___x_2939_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object* v___x_2943_, lean_object* v_preDefs_2944_, lean_object* v_val_2945_, lean_object* v_upperBound_2946_, lean_object* v_a_2947_, lean_object* v_b_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_2943_, v_preDefs_2944_, v_val_2945_, v_upperBound_2946_, v_a_2947_, v_b_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
lean_dec(v_upperBound_2946_);
return v_res_2954_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = ((lean_object*)(l_Lean_Elab_getFixedParamsInfo___closed__0));
v___x_2957_ = l_Lean_stringToMessageData(v___x_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
size_t v_sz_2964_; size_t v___x_2965_; lean_object* v___x_2966_; 
v_sz_2964_ = lean_array_size(v_preDefs_2958_);
v___x_2965_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_2958_);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_2964_, v___x_2965_, v_preDefs_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; size_t v_sz_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc_n(v_a_2967_, 2);
lean_dec_ref_known(v___x_2966_, 1);
v_sz_2968_ = lean_array_size(v_a_2967_);
v___x_2969_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_2968_, v___x_2965_, v_a_2967_);
v___x_2970_ = l_Lean_Elab_FixedParams_Info_init(v_a_2967_);
v___x_2971_ = lean_st_mk_ref(v___x_2970_);
v___x_2972_ = lean_st_ref_take(v___x_2971_);
v___x_2973_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_2972_);
v___x_2974_ = lean_st_ref_put(v___x_2971_, v___x_2973_);
v___x_2975_ = lean_array_get_size(v_preDefs_2958_);
v___x_2976_ = lean_unsigned_to_nat(0u);
v___x_2977_ = lean_box(0);
lean_inc(v___x_2971_);
v___x_2978_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_2969_, v_preDefs_2958_, v___x_2971_, v___x_2975_, v___x_2976_, v___x_2977_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_3018_; 
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_3018_ == 0)
{
lean_object* v_unused_3019_; 
v_unused_3019_ = lean_ctor_get(v___x_2978_, 0);
lean_dec(v_unused_3019_);
v___x_2980_ = v___x_2978_;
v_isShared_2981_ = v_isSharedCheck_3018_;
goto v_resetjp_2979_;
}
else
{
lean_dec(v___x_2978_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_3018_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2982_; lean_object* v_toCold_2983_; lean_object* v_options_2984_; uint8_t v_hasTrace_2985_; 
v___x_2982_ = lean_st_ref_get(v___x_2971_);
lean_dec(v___x_2971_);
v_toCold_2983_ = lean_ctor_get(v___y_2961_, 0);
v_options_2984_ = lean_ctor_get(v_toCold_2983_, 2);
v_hasTrace_2985_ = lean_ctor_get_uint8(v_options_2984_, sizeof(void*)*1);
if (v_hasTrace_2985_ == 0)
{
lean_object* v___x_2987_; 
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 0, v___x_2982_);
v___x_2987_ = v___x_2980_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
else
{
lean_object* v_inheritedTraceOptions_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; 
v_inheritedTraceOptions_2989_ = lean_ctor_get(v_toCold_2983_, 11);
v___x_2990_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2991_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2992_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2989_, v_options_2984_, v___x_2991_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2994_; 
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 0, v___x_2982_);
v___x_2994_ = v___x_2980_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2982_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
else
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
lean_del_object(v___x_2980_);
v___x_2996_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_2982_);
v___x_2997_ = l_Lean_Elab_FixedParams_Info_format(v___x_2982_);
v___x_2998_ = l_Std_Format_indentD(v___x_2997_);
v___x_2999_ = l_Lean_MessageData_ofFormat(v___x_2998_);
v___x_3000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2996_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2990_, v___x_3000_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3008_ == 0)
{
lean_object* v_unused_3009_; 
v_unused_3009_ = lean_ctor_get(v___x_3001_, 0);
lean_dec(v_unused_3009_);
v___x_3003_ = v___x_3001_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_dec(v___x_3001_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v___x_2982_);
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_2982_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec(v___x_2982_);
v_a_3010_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_3001_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_3001_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
lean_dec(v___x_2971_);
v_a_3020_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_2978_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_2978_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
else
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
lean_dec_ref(v_preDefs_2958_);
v_a_3028_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_2966_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_2966_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3039_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_val_3043_, lean_object* v_val_3044_, lean_object* v_next_3045_, lean_object* v_next_3046_, lean_object* v___x_3047_, lean_object* v___x_3048_, lean_object* v_upperBound_3049_, lean_object* v_params_3050_, lean_object* v___x_3051_, lean_object* v_inst_3052_, lean_object* v_R_3053_, lean_object* v_a_3054_, uint8_t v_b_3055_, lean_object* v_c_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_3043_, v_val_3044_, v_next_3045_, v_next_3046_, v___x_3047_, v___x_3048_, v_upperBound_3049_, v_params_3050_, v___x_3051_, v_a_3054_, v_b_3055_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_val_3063_ = _args[0];
lean_object* v_val_3064_ = _args[1];
lean_object* v_next_3065_ = _args[2];
lean_object* v_next_3066_ = _args[3];
lean_object* v___x_3067_ = _args[4];
lean_object* v___x_3068_ = _args[5];
lean_object* v_upperBound_3069_ = _args[6];
lean_object* v_params_3070_ = _args[7];
lean_object* v___x_3071_ = _args[8];
lean_object* v_inst_3072_ = _args[9];
lean_object* v_R_3073_ = _args[10];
lean_object* v_a_3074_ = _args[11];
lean_object* v_b_3075_ = _args[12];
lean_object* v_c_3076_ = _args[13];
lean_object* v___y_3077_ = _args[14];
lean_object* v___y_3078_ = _args[15];
lean_object* v___y_3079_ = _args[16];
lean_object* v___y_3080_ = _args[17];
lean_object* v___y_3081_ = _args[18];
_start:
{
uint8_t v_b_boxed_3082_; lean_object* v_res_3083_; 
v_b_boxed_3082_ = lean_unbox(v_b_3075_);
v_res_3083_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_val_3063_, v_val_3064_, v_next_3065_, v_next_3066_, v___x_3067_, v___x_3068_, v_upperBound_3069_, v_params_3070_, v___x_3071_, v_inst_3072_, v_R_3073_, v_a_3074_, v_b_boxed_3082_, v_c_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec_ref(v_params_3070_);
lean_dec(v_upperBound_3069_);
lean_dec(v___x_3068_);
lean_dec(v___x_3067_);
lean_dec(v_next_3066_);
lean_dec(v_val_3064_);
lean_dec(v_val_3063_);
return v_res_3083_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_val_3084_, lean_object* v_val_3085_, lean_object* v_upperBound_3086_, lean_object* v_args_3087_, lean_object* v_e_3088_, lean_object* v_next_3089_, lean_object* v_params_3090_, lean_object* v___x_3091_, lean_object* v___x_3092_, lean_object* v_inst_3093_, lean_object* v_R_3094_, lean_object* v_a_3095_, lean_object* v_b_3096_, lean_object* v_c_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v___x_3103_; 
v___x_3103_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_3084_, v_val_3085_, v_upperBound_3086_, v_args_3087_, v_e_3088_, v_next_3089_, v_params_3090_, v___x_3091_, v___x_3092_, v_a_3095_, v_b_3096_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object** _args){
lean_object* v_val_3104_ = _args[0];
lean_object* v_val_3105_ = _args[1];
lean_object* v_upperBound_3106_ = _args[2];
lean_object* v_args_3107_ = _args[3];
lean_object* v_e_3108_ = _args[4];
lean_object* v_next_3109_ = _args[5];
lean_object* v_params_3110_ = _args[6];
lean_object* v___x_3111_ = _args[7];
lean_object* v___x_3112_ = _args[8];
lean_object* v_inst_3113_ = _args[9];
lean_object* v_R_3114_ = _args[10];
lean_object* v_a_3115_ = _args[11];
lean_object* v_b_3116_ = _args[12];
lean_object* v_c_3117_ = _args[13];
lean_object* v___y_3118_ = _args[14];
lean_object* v___y_3119_ = _args[15];
lean_object* v___y_3120_ = _args[16];
lean_object* v___y_3121_ = _args[17];
lean_object* v___y_3122_ = _args[18];
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_val_3104_, v_val_3105_, v_upperBound_3106_, v_args_3107_, v_e_3108_, v_next_3109_, v_params_3110_, v___x_3111_, v___x_3112_, v_inst_3113_, v_R_3114_, v_a_3115_, v_b_3116_, v_c_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
lean_dec(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
lean_dec(v___x_3112_);
lean_dec(v___x_3111_);
lean_dec_ref(v_params_3110_);
lean_dec(v_next_3109_);
lean_dec_ref(v_args_3107_);
lean_dec(v_upperBound_3106_);
lean_dec(v_val_3104_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object* v___x_3124_, lean_object* v_preDefs_3125_, lean_object* v_val_3126_, lean_object* v_upperBound_3127_, lean_object* v_inst_3128_, lean_object* v_R_3129_, lean_object* v_a_3130_, lean_object* v_b_3131_, lean_object* v_c_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3124_, v_preDefs_3125_, v_val_3126_, v_upperBound_3127_, v_a_3130_, v_b_3131_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object* v___x_3139_, lean_object* v_preDefs_3140_, lean_object* v_val_3141_, lean_object* v_upperBound_3142_, lean_object* v_inst_3143_, lean_object* v_R_3144_, lean_object* v_a_3145_, lean_object* v_b_3146_, lean_object* v_c_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(v___x_3139_, v_preDefs_3140_, v_val_3141_, v_upperBound_3142_, v_inst_3143_, v_R_3144_, v_a_3145_, v_b_3146_, v_c_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
lean_dec(v___y_3151_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3149_);
lean_dec_ref(v___y_3148_);
lean_dec(v_upperBound_3142_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object* v_upperBound_3154_, lean_object* v___x_3155_, lean_object* v_pre_3156_, lean_object* v_post_3157_, uint8_t v_usedLetOnly_3158_, uint8_t v_skipConstInApp_3159_, uint8_t v_skipInstances_3160_, lean_object* v___x_3161_, lean_object* v_inst_3162_, lean_object* v_R_3163_, lean_object* v_a_3164_, lean_object* v_b_3165_, lean_object* v_c_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_3154_, v___x_3155_, v_pre_3156_, v_post_3157_, v_usedLetOnly_3158_, v_skipConstInApp_3159_, v_skipInstances_3160_, v_a_3164_, v_b_3165_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_3174_ = _args[0];
lean_object* v___x_3175_ = _args[1];
lean_object* v_pre_3176_ = _args[2];
lean_object* v_post_3177_ = _args[3];
lean_object* v_usedLetOnly_3178_ = _args[4];
lean_object* v_skipConstInApp_3179_ = _args[5];
lean_object* v_skipInstances_3180_ = _args[6];
lean_object* v___x_3181_ = _args[7];
lean_object* v_inst_3182_ = _args[8];
lean_object* v_R_3183_ = _args[9];
lean_object* v_a_3184_ = _args[10];
lean_object* v_b_3185_ = _args[11];
lean_object* v_c_3186_ = _args[12];
lean_object* v___y_3187_ = _args[13];
lean_object* v___y_3188_ = _args[14];
lean_object* v___y_3189_ = _args[15];
lean_object* v___y_3190_ = _args[16];
lean_object* v___y_3191_ = _args[17];
lean_object* v___y_3192_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3193_; uint8_t v_skipConstInApp_boxed_3194_; uint8_t v_skipInstances_boxed_3195_; lean_object* v_res_3196_; 
v_usedLetOnly_boxed_3193_ = lean_unbox(v_usedLetOnly_3178_);
v_skipConstInApp_boxed_3194_ = lean_unbox(v_skipConstInApp_3179_);
v_skipInstances_boxed_3195_ = lean_unbox(v_skipInstances_3180_);
v_res_3196_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_upperBound_3174_, v___x_3175_, v_pre_3176_, v_post_3177_, v_usedLetOnly_boxed_3193_, v_skipConstInApp_boxed_3194_, v_skipInstances_boxed_3195_, v___x_3181_, v_inst_3182_, v_R_3183_, v_a_3184_, v_b_3185_, v_c_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec(v___x_3181_);
lean_dec_ref(v___x_3175_);
lean_dec(v_upperBound_3174_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object* v_00_u03b2_3197_, lean_object* v_m_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v___x_3200_; 
v___x_3200_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_3198_, v_a_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object* v_00_u03b2_3201_, lean_object* v_m_3202_, lean_object* v_a_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(v_00_u03b2_3201_, v_m_3202_, v_a_3203_);
lean_dec_ref(v_a_3203_);
lean_dec_ref(v_m_3202_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object* v_00_u03b1_3205_, lean_object* v_name_3206_, uint8_t v_bi_3207_, lean_object* v_type_3208_, lean_object* v_k_3209_, uint8_t v_kind_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_3206_, v_bi_3207_, v_type_3208_, v_k_3209_, v_kind_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3218_, lean_object* v_name_3219_, lean_object* v_bi_3220_, lean_object* v_type_3221_, lean_object* v_k_3222_, lean_object* v_kind_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
uint8_t v_bi_boxed_3230_; uint8_t v_kind_boxed_3231_; lean_object* v_res_3232_; 
v_bi_boxed_3230_ = lean_unbox(v_bi_3220_);
v_kind_boxed_3231_ = lean_unbox(v_kind_3223_);
v_res_3232_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(v_00_u03b1_3218_, v_name_3219_, v_bi_boxed_3230_, v_type_3221_, v_k_3222_, v_kind_boxed_3231_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object* v_00_u03b1_3233_, lean_object* v_name_3234_, lean_object* v_type_3235_, lean_object* v_val_3236_, lean_object* v_k_3237_, uint8_t v_nondep_3238_, uint8_t v_kind_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
lean_object* v___x_3246_; 
v___x_3246_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_3234_, v_type_3235_, v_val_3236_, v_k_3237_, v_nondep_3238_, v_kind_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b1_3247_, lean_object* v_name_3248_, lean_object* v_type_3249_, lean_object* v_val_3250_, lean_object* v_k_3251_, lean_object* v_nondep_3252_, lean_object* v_kind_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
uint8_t v_nondep_boxed_3260_; uint8_t v_kind_boxed_3261_; lean_object* v_res_3262_; 
v_nondep_boxed_3260_ = lean_unbox(v_nondep_3252_);
v_kind_boxed_3261_ = lean_unbox(v_kind_3253_);
v_res_3262_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(v_00_u03b1_3247_, v_name_3248_, v_type_3249_, v_val_3250_, v_k_3251_, v_nondep_boxed_3260_, v_kind_boxed_3261_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3255_);
lean_dec(v___y_3254_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object* v_00_u03b1_3263_, lean_object* v_ref_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_3264_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b1_3271_, lean_object* v_ref_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(v_00_u03b1_3271_, v_ref_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object* v_00_u03b1_3279_, lean_object* v_x_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object* v_00_u03b1_3288_, lean_object* v_x_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(v_00_u03b1_3288_, v_x_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_);
lean_dec(v___y_3294_);
lean_dec_ref(v___y_3293_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object* v_00_u03b2_3297_, lean_object* v_m_3298_, lean_object* v_a_3299_, lean_object* v_b_3300_){
_start:
{
lean_object* v___x_3301_; 
v___x_3301_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v_m_3298_, v_a_3299_, v_b_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_3302_, lean_object* v_a_3303_, lean_object* v_x_3304_){
_start:
{
lean_object* v___x_3305_; 
v___x_3305_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_3303_, v_x_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object* v_00_u03b2_3306_, lean_object* v_a_3307_, lean_object* v_x_3308_){
_start:
{
lean_object* v_res_3309_; 
v_res_3309_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(v_00_u03b2_3306_, v_a_3307_, v_x_3308_);
lean_dec(v_x_3308_);
lean_dec_ref(v_a_3307_);
return v_res_3309_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object* v_00_u03b2_3310_, lean_object* v_a_3311_, lean_object* v_x_3312_){
_start:
{
uint8_t v___x_3313_; 
v___x_3313_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_3311_, v_x_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3314_, lean_object* v_a_3315_, lean_object* v_x_3316_){
_start:
{
uint8_t v_res_3317_; lean_object* v_r_3318_; 
v_res_3317_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(v_00_u03b2_3314_, v_a_3315_, v_x_3316_);
lean_dec(v_x_3316_);
lean_dec_ref(v_a_3315_);
v_r_3318_ = lean_box(v_res_3317_);
return v_r_3318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object* v_00_u03b2_3319_, lean_object* v_data_3320_){
_start:
{
lean_object* v___x_3321_; 
v___x_3321_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_data_3320_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object* v_00_u03b2_3322_, lean_object* v_a_3323_, lean_object* v_b_3324_, lean_object* v_x_3325_){
_start:
{
lean_object* v___x_3326_; 
v___x_3326_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_3323_, v_b_3324_, v_x_3325_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object* v_00_u03b2_3327_, lean_object* v_i_3328_, lean_object* v_source_3329_, lean_object* v_target_3330_){
_start:
{
lean_object* v___x_3331_; 
v___x_3331_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v_i_3328_, v_source_3329_, v_target_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object* v_00_u03b2_3332_, lean_object* v_x_3333_, lean_object* v_x_3334_){
_start:
{
lean_object* v___x_3335_; 
v___x_3335_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_x_3333_, v_x_3334_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3349_, lean_object* v_x_3350_){
_start:
{
if (lean_obj_tag(v_x_3349_) == 0)
{
lean_object* v___x_3351_; 
v___x_3351_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_3351_;
}
else
{
lean_object* v_val_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3363_; 
v_val_3352_ = lean_ctor_get(v_x_3349_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v_x_3349_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3354_ = v_x_3349_;
v_isShared_3355_ = v_isSharedCheck_3363_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_val_3352_);
lean_dec(v_x_3349_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3363_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3359_; 
v___x_3356_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3));
v___x_3357_ = l_Nat_reprFast(v_val_3352_);
if (v_isShared_3355_ == 0)
{
lean_ctor_set_tag(v___x_3354_, 3);
lean_ctor_set(v___x_3354_, 0, v___x_3357_);
v___x_3359_ = v___x_3354_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3357_);
v___x_3359_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3356_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
v___x_3361_ = l_Repr_addAppParen(v___x_3360_, v_x_3350_);
return v___x_3361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3364_, lean_object* v_x_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3364_, v_x_3365_);
lean_dec(v_x_3365_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3367_, lean_object* v_x_3368_, lean_object* v_x_3369_){
_start:
{
if (lean_obj_tag(v_x_3369_) == 0)
{
lean_dec(v_x_3367_);
return v_x_3368_;
}
else
{
lean_object* v_head_3370_; lean_object* v_tail_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3382_; 
v_head_3370_ = lean_ctor_get(v_x_3369_, 0);
v_tail_3371_ = lean_ctor_get(v_x_3369_, 1);
v_isSharedCheck_3382_ = !lean_is_exclusive(v_x_3369_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3373_ = v_x_3369_;
v_isShared_3374_ = v_isSharedCheck_3382_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_tail_3371_);
lean_inc(v_head_3370_);
lean_dec(v_x_3369_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3382_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
lean_inc(v_x_3367_);
if (v_isShared_3374_ == 0)
{
lean_ctor_set_tag(v___x_3373_, 5);
lean_ctor_set(v___x_3373_, 1, v_x_3367_);
lean_ctor_set(v___x_3373_, 0, v_x_3368_);
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_x_3368_);
lean_ctor_set(v_reuseFailAlloc_3381_, 1, v_x_3367_);
v___x_3376_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3377_ = lean_unsigned_to_nat(0u);
v___x_3378_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3370_, v___x_3377_);
v___x_3379_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3376_);
lean_ctor_set(v___x_3379_, 1, v___x_3378_);
v_x_3368_ = v___x_3379_;
v_x_3369_ = v_tail_3371_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3383_, lean_object* v_x_3384_, lean_object* v_x_3385_){
_start:
{
if (lean_obj_tag(v_x_3385_) == 0)
{
lean_dec(v_x_3383_);
return v_x_3384_;
}
else
{
lean_object* v_head_3386_; lean_object* v_tail_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3398_; 
v_head_3386_ = lean_ctor_get(v_x_3385_, 0);
v_tail_3387_ = lean_ctor_get(v_x_3385_, 1);
v_isSharedCheck_3398_ = !lean_is_exclusive(v_x_3385_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3389_ = v_x_3385_;
v_isShared_3390_ = v_isSharedCheck_3398_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_tail_3387_);
lean_inc(v_head_3386_);
lean_dec(v_x_3385_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3398_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
lean_inc(v_x_3383_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set_tag(v___x_3389_, 5);
lean_ctor_set(v___x_3389_, 1, v_x_3383_);
lean_ctor_set(v___x_3389_, 0, v_x_3384_);
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_x_3384_);
lean_ctor_set(v_reuseFailAlloc_3397_, 1, v_x_3383_);
v___x_3392_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3393_ = lean_unsigned_to_nat(0u);
v___x_3394_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3386_, v___x_3393_);
v___x_3395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3392_);
lean_ctor_set(v___x_3395_, 1, v___x_3394_);
v___x_3396_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3383_, v___x_3395_, v_tail_3387_);
return v___x_3396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3399_){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = lean_unsigned_to_nat(0u);
v___x_3401_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3399_, v___x_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3402_, lean_object* v_x_3403_){
_start:
{
if (lean_obj_tag(v_x_3402_) == 0)
{
lean_object* v___x_3404_; 
lean_dec(v_x_3403_);
v___x_3404_ = lean_box(0);
return v___x_3404_;
}
else
{
lean_object* v_tail_3405_; 
v_tail_3405_ = lean_ctor_get(v_x_3402_, 1);
if (lean_obj_tag(v_tail_3405_) == 0)
{
lean_object* v_head_3406_; lean_object* v___x_3407_; 
lean_dec(v_x_3403_);
v_head_3406_ = lean_ctor_get(v_x_3402_, 0);
lean_inc(v_head_3406_);
lean_dec_ref_known(v_x_3402_, 2);
v___x_3407_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3406_);
return v___x_3407_;
}
else
{
lean_object* v_head_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; 
lean_inc(v_tail_3405_);
v_head_3408_ = lean_ctor_get(v_x_3402_, 0);
lean_inc(v_head_3408_);
lean_dec_ref_known(v_x_3402_, 2);
v___x_3409_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3408_);
v___x_3410_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3403_, v___x_3409_, v_tail_3405_);
return v___x_3410_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0));
v___x_3419_ = lean_string_length(v___x_3418_);
return v___x_3419_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4);
v___x_3421_ = lean_nat_to_int(v___x_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3427_){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; uint8_t v___x_3430_; 
v___x_3428_ = lean_array_get_size(v_xs_3427_);
v___x_3429_ = lean_unsigned_to_nat(0u);
v___x_3430_ = lean_nat_dec_eq(v___x_3428_, v___x_3429_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3431_ = lean_array_to_list(v_xs_3427_);
v___x_3432_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3433_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3431_, v___x_3432_);
v___x_3434_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3435_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3436_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3435_);
lean_ctor_set(v___x_3436_, 1, v___x_3433_);
v___x_3437_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3438_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3436_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
v___x_3439_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3434_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = l_Std_Format_fill(v___x_3439_);
return v___x_3440_;
}
else
{
lean_object* v___x_3441_; 
lean_dec_ref(v_xs_3427_);
v___x_3441_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3441_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3442_, lean_object* v_x_3443_, lean_object* v_x_3444_){
_start:
{
if (lean_obj_tag(v_x_3444_) == 0)
{
lean_dec(v_x_3442_);
return v_x_3443_;
}
else
{
lean_object* v_head_3445_; lean_object* v_tail_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3456_; 
v_head_3445_ = lean_ctor_get(v_x_3444_, 0);
v_tail_3446_ = lean_ctor_get(v_x_3444_, 1);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_x_3444_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3448_ = v_x_3444_;
v_isShared_3449_ = v_isSharedCheck_3456_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_tail_3446_);
lean_inc(v_head_3445_);
lean_dec(v_x_3444_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3456_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3451_; 
lean_inc(v_x_3442_);
if (v_isShared_3449_ == 0)
{
lean_ctor_set_tag(v___x_3448_, 5);
lean_ctor_set(v___x_3448_, 1, v_x_3442_);
lean_ctor_set(v___x_3448_, 0, v_x_3443_);
v___x_3451_ = v___x_3448_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_x_3443_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_x_3442_);
v___x_3451_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3452_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3445_);
v___x_3453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v_x_3443_ = v___x_3453_;
v_x_3444_ = v_tail_3446_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3457_, lean_object* v_x_3458_){
_start:
{
if (lean_obj_tag(v_x_3457_) == 0)
{
lean_object* v___x_3459_; 
lean_dec(v_x_3458_);
v___x_3459_ = lean_box(0);
return v___x_3459_;
}
else
{
lean_object* v_tail_3460_; 
v_tail_3460_ = lean_ctor_get(v_x_3457_, 1);
if (lean_obj_tag(v_tail_3460_) == 0)
{
lean_object* v_head_3461_; lean_object* v___x_3462_; 
lean_dec(v_x_3458_);
v_head_3461_ = lean_ctor_get(v_x_3457_, 0);
lean_inc(v_head_3461_);
lean_dec_ref_known(v_x_3457_, 2);
v___x_3462_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3461_);
return v___x_3462_;
}
else
{
lean_object* v_head_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
lean_inc(v_tail_3460_);
v_head_3463_ = lean_ctor_get(v_x_3457_, 0);
lean_inc(v_head_3463_);
lean_dec_ref_known(v_x_3457_, 2);
v___x_3464_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3463_);
v___x_3465_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3458_, v___x_3464_, v_tail_3460_);
return v___x_3465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3466_){
_start:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; uint8_t v___x_3469_; 
v___x_3467_ = lean_array_get_size(v_xs_3466_);
v___x_3468_ = lean_unsigned_to_nat(0u);
v___x_3469_ = lean_nat_dec_eq(v___x_3467_, v___x_3468_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3470_ = lean_array_to_list(v_xs_3466_);
v___x_3471_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3472_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3470_, v___x_3471_);
v___x_3473_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3474_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3475_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
lean_ctor_set(v___x_3475_, 1, v___x_3472_);
v___x_3476_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3477_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3475_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
v___x_3478_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3473_);
lean_ctor_set(v___x_3478_, 1, v___x_3477_);
v___x_3479_ = l_Std_Format_fill(v___x_3478_);
return v___x_3479_;
}
else
{
lean_object* v___x_3480_; 
lean_dec_ref(v_xs_3466_);
v___x_3480_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3480_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3481_, lean_object* v_x_3482_, lean_object* v_x_3483_){
_start:
{
if (lean_obj_tag(v_x_3483_) == 0)
{
lean_dec(v_x_3481_);
return v_x_3482_;
}
else
{
lean_object* v_head_3484_; lean_object* v_tail_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3496_; 
v_head_3484_ = lean_ctor_get(v_x_3483_, 0);
v_tail_3485_ = lean_ctor_get(v_x_3483_, 1);
v_isSharedCheck_3496_ = !lean_is_exclusive(v_x_3483_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3487_ = v_x_3483_;
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_tail_3485_);
lean_inc(v_head_3484_);
lean_dec(v_x_3483_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
lean_inc(v_x_3481_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set_tag(v___x_3487_, 5);
lean_ctor_set(v___x_3487_, 1, v_x_3481_);
lean_ctor_set(v___x_3487_, 0, v_x_3482_);
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_x_3482_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_x_3481_);
v___x_3490_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3491_ = l_Nat_reprFast(v_head_3484_);
v___x_3492_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3491_);
v___x_3493_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3490_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v_x_3482_ = v___x_3493_;
v_x_3483_ = v_tail_3485_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3497_, lean_object* v_x_3498_, lean_object* v_x_3499_){
_start:
{
if (lean_obj_tag(v_x_3499_) == 0)
{
lean_dec(v_x_3497_);
return v_x_3498_;
}
else
{
lean_object* v_head_3500_; lean_object* v_tail_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3512_; 
v_head_3500_ = lean_ctor_get(v_x_3499_, 0);
v_tail_3501_ = lean_ctor_get(v_x_3499_, 1);
v_isSharedCheck_3512_ = !lean_is_exclusive(v_x_3499_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3503_ = v_x_3499_;
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_tail_3501_);
lean_inc(v_head_3500_);
lean_dec(v_x_3499_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3506_; 
lean_inc(v_x_3497_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set_tag(v___x_3503_, 5);
lean_ctor_set(v___x_3503_, 1, v_x_3497_);
lean_ctor_set(v___x_3503_, 0, v_x_3498_);
v___x_3506_ = v___x_3503_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_x_3498_);
lean_ctor_set(v_reuseFailAlloc_3511_, 1, v_x_3497_);
v___x_3506_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3507_ = l_Nat_reprFast(v_head_3500_);
v___x_3508_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
v___x_3509_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3506_);
lean_ctor_set(v___x_3509_, 1, v___x_3508_);
v___x_3510_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3497_, v___x_3509_, v_tail_3501_);
return v___x_3510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3513_){
_start:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3514_ = l_Nat_reprFast(v___y_3513_);
v___x_3515_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3516_, lean_object* v_x_3517_){
_start:
{
if (lean_obj_tag(v_x_3516_) == 0)
{
lean_object* v___x_3518_; 
lean_dec(v_x_3517_);
v___x_3518_ = lean_box(0);
return v___x_3518_;
}
else
{
lean_object* v_tail_3519_; 
v_tail_3519_ = lean_ctor_get(v_x_3516_, 1);
if (lean_obj_tag(v_tail_3519_) == 0)
{
lean_object* v_head_3520_; lean_object* v___x_3521_; 
lean_dec(v_x_3517_);
v_head_3520_ = lean_ctor_get(v_x_3516_, 0);
lean_inc(v_head_3520_);
lean_dec_ref_known(v_x_3516_, 2);
v___x_3521_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3520_);
return v___x_3521_;
}
else
{
lean_object* v_head_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
lean_inc(v_tail_3519_);
v_head_3522_ = lean_ctor_get(v_x_3516_, 0);
lean_inc(v_head_3522_);
lean_dec_ref_known(v_x_3516_, 2);
v___x_3523_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3522_);
v___x_3524_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3517_, v___x_3523_, v_tail_3519_);
return v___x_3524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3525_){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; uint8_t v___x_3528_; 
v___x_3526_ = lean_array_get_size(v_xs_3525_);
v___x_3527_ = lean_unsigned_to_nat(0u);
v___x_3528_ = lean_nat_dec_eq(v___x_3526_, v___x_3527_);
if (v___x_3528_ == 0)
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3529_ = lean_array_to_list(v_xs_3525_);
v___x_3530_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3531_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3529_, v___x_3530_);
v___x_3532_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3533_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3534_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
lean_ctor_set(v___x_3534_, 1, v___x_3531_);
v___x_3535_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3536_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3534_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3532_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = l_Std_Format_fill(v___x_3537_);
return v___x_3538_;
}
else
{
lean_object* v___x_3539_; 
lean_dec_ref(v_xs_3525_);
v___x_3539_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3539_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3540_, lean_object* v_x_3541_, lean_object* v_x_3542_){
_start:
{
if (lean_obj_tag(v_x_3542_) == 0)
{
lean_dec(v_x_3540_);
return v_x_3541_;
}
else
{
lean_object* v_head_3543_; lean_object* v_tail_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3554_; 
v_head_3543_ = lean_ctor_get(v_x_3542_, 0);
v_tail_3544_ = lean_ctor_get(v_x_3542_, 1);
v_isSharedCheck_3554_ = !lean_is_exclusive(v_x_3542_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3546_ = v_x_3542_;
v_isShared_3547_ = v_isSharedCheck_3554_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_tail_3544_);
lean_inc(v_head_3543_);
lean_dec(v_x_3542_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3554_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
lean_inc(v_x_3540_);
if (v_isShared_3547_ == 0)
{
lean_ctor_set_tag(v___x_3546_, 5);
lean_ctor_set(v___x_3546_, 1, v_x_3540_);
lean_ctor_set(v___x_3546_, 0, v_x_3541_);
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_x_3541_);
lean_ctor_set(v_reuseFailAlloc_3553_, 1, v_x_3540_);
v___x_3549_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3543_);
v___x_3551_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3549_);
lean_ctor_set(v___x_3551_, 1, v___x_3550_);
v_x_3541_ = v___x_3551_;
v_x_3542_ = v_tail_3544_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3555_, lean_object* v_x_3556_){
_start:
{
if (lean_obj_tag(v_x_3555_) == 0)
{
lean_object* v___x_3557_; 
lean_dec(v_x_3556_);
v___x_3557_ = lean_box(0);
return v___x_3557_;
}
else
{
lean_object* v_tail_3558_; 
v_tail_3558_ = lean_ctor_get(v_x_3555_, 1);
if (lean_obj_tag(v_tail_3558_) == 0)
{
lean_object* v_head_3559_; lean_object* v___x_3560_; 
lean_dec(v_x_3556_);
v_head_3559_ = lean_ctor_get(v_x_3555_, 0);
lean_inc(v_head_3559_);
lean_dec_ref_known(v_x_3555_, 2);
v___x_3560_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3559_);
return v___x_3560_;
}
else
{
lean_object* v_head_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
lean_inc(v_tail_3558_);
v_head_3561_ = lean_ctor_get(v_x_3555_, 0);
lean_inc(v_head_3561_);
lean_dec_ref_known(v_x_3555_, 2);
v___x_3562_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3561_);
v___x_3563_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3556_, v___x_3562_, v_tail_3558_);
return v___x_3563_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3564_){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; uint8_t v___x_3567_; 
v___x_3565_ = lean_array_get_size(v_xs_3564_);
v___x_3566_ = lean_unsigned_to_nat(0u);
v___x_3567_ = lean_nat_dec_eq(v___x_3565_, v___x_3566_);
if (v___x_3567_ == 0)
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3568_ = lean_array_to_list(v_xs_3564_);
v___x_3569_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3570_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3568_, v___x_3569_);
v___x_3571_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3572_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
lean_ctor_set(v___x_3573_, 1, v___x_3570_);
v___x_3574_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3571_);
lean_ctor_set(v___x_3576_, 1, v___x_3575_);
v___x_3577_ = l_Std_Format_fill(v___x_3576_);
return v___x_3577_;
}
else
{
lean_object* v___x_3578_; 
lean_dec_ref(v_xs_3564_);
v___x_3578_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3578_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3579_, lean_object* v_x_3580_, lean_object* v_x_3581_){
_start:
{
if (lean_obj_tag(v_x_3581_) == 0)
{
lean_dec(v_x_3579_);
return v_x_3580_;
}
else
{
lean_object* v_head_3582_; lean_object* v_tail_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3593_; 
v_head_3582_ = lean_ctor_get(v_x_3581_, 0);
v_tail_3583_ = lean_ctor_get(v_x_3581_, 1);
v_isSharedCheck_3593_ = !lean_is_exclusive(v_x_3581_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3585_ = v_x_3581_;
v_isShared_3586_ = v_isSharedCheck_3593_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_tail_3583_);
lean_inc(v_head_3582_);
lean_dec(v_x_3581_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3593_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
lean_inc(v_x_3579_);
if (v_isShared_3586_ == 0)
{
lean_ctor_set_tag(v___x_3585_, 5);
lean_ctor_set(v___x_3585_, 1, v_x_3579_);
lean_ctor_set(v___x_3585_, 0, v_x_3580_);
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_x_3580_);
lean_ctor_set(v_reuseFailAlloc_3592_, 1, v_x_3579_);
v___x_3588_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3589_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3582_);
v___x_3590_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v_x_3580_ = v___x_3590_;
v_x_3581_ = v_tail_3583_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3594_, lean_object* v_x_3595_){
_start:
{
if (lean_obj_tag(v_x_3594_) == 0)
{
lean_object* v___x_3596_; 
lean_dec(v_x_3595_);
v___x_3596_ = lean_box(0);
return v___x_3596_;
}
else
{
lean_object* v_tail_3597_; 
v_tail_3597_ = lean_ctor_get(v_x_3594_, 1);
if (lean_obj_tag(v_tail_3597_) == 0)
{
lean_object* v_head_3598_; lean_object* v___x_3599_; 
lean_dec(v_x_3595_);
v_head_3598_ = lean_ctor_get(v_x_3594_, 0);
lean_inc(v_head_3598_);
lean_dec_ref_known(v_x_3594_, 2);
v___x_3599_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3598_);
return v___x_3599_;
}
else
{
lean_object* v_head_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
lean_inc(v_tail_3597_);
v_head_3600_ = lean_ctor_get(v_x_3594_, 0);
lean_inc(v_head_3600_);
lean_dec_ref_known(v_x_3594_, 2);
v___x_3601_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3600_);
v___x_3602_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3595_, v___x_3601_, v_tail_3597_);
return v___x_3602_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3603_){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; uint8_t v___x_3606_; 
v___x_3604_ = lean_array_get_size(v_xs_3603_);
v___x_3605_ = lean_unsigned_to_nat(0u);
v___x_3606_ = lean_nat_dec_eq(v___x_3604_, v___x_3605_);
if (v___x_3606_ == 0)
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3607_ = lean_array_to_list(v_xs_3603_);
v___x_3608_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3609_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3607_, v___x_3608_);
v___x_3610_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3611_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3612_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
lean_ctor_set(v___x_3612_, 1, v___x_3609_);
v___x_3613_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3614_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3612_);
lean_ctor_set(v___x_3614_, 1, v___x_3613_);
v___x_3615_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3610_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
v___x_3616_ = l_Std_Format_fill(v___x_3615_);
return v___x_3616_;
}
else
{
lean_object* v___x_3617_; 
lean_dec_ref(v_xs_3603_);
v___x_3617_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3617_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = lean_unsigned_to_nat(12u);
v___x_3632_ = lean_nat_to_int(v___x_3631_);
return v___x_3632_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3636_ = lean_unsigned_to_nat(9u);
v___x_3637_ = lean_nat_to_int(v___x_3636_);
return v___x_3637_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = lean_unsigned_to_nat(11u);
v___x_3642_ = lean_nat_to_int(v___x_3641_);
return v___x_3642_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0));
v___x_3645_ = lean_string_length(v___x_3644_);
return v___x_3645_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3646_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3647_ = lean_nat_to_int(v___x_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3652_){
_start:
{
lean_object* v_numFixed_3653_; lean_object* v_perms_3654_; lean_object* v_revDeps_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; uint8_t v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v_numFixed_3653_ = lean_ctor_get(v_x_3652_, 0);
lean_inc(v_numFixed_3653_);
v_perms_3654_ = lean_ctor_get(v_x_3652_, 1);
lean_inc_ref(v_perms_3654_);
v_revDeps_3655_ = lean_ctor_get(v_x_3652_, 2);
lean_inc_ref(v_revDeps_3655_);
lean_dec_ref(v_x_3652_);
v___x_3656_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5));
v___x_3657_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6));
v___x_3658_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3659_ = l_Nat_reprFast(v_numFixed_3653_);
v___x_3660_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3659_);
v___x_3661_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3658_);
lean_ctor_set(v___x_3661_, 1, v___x_3660_);
v___x_3662_ = 0;
v___x_3663_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3663_, 0, v___x_3661_);
lean_ctor_set_uint8(v___x_3663_, sizeof(void*)*1, v___x_3662_);
v___x_3664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3657_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___x_3665_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2));
v___x_3666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3664_);
lean_ctor_set(v___x_3666_, 1, v___x_3665_);
v___x_3667_ = lean_box(1);
v___x_3668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3666_);
lean_ctor_set(v___x_3668_, 1, v___x_3667_);
v___x_3669_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9));
v___x_3670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3668_);
lean_ctor_set(v___x_3670_, 1, v___x_3669_);
v___x_3671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3670_);
lean_ctor_set(v___x_3671_, 1, v___x_3656_);
v___x_3672_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3673_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3654_);
v___x_3674_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3672_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v___x_3675_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*1, v___x_3662_);
v___x_3676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3671_);
lean_ctor_set(v___x_3676_, 1, v___x_3675_);
v___x_3677_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3676_);
lean_ctor_set(v___x_3677_, 1, v___x_3665_);
v___x_3678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
lean_ctor_set(v___x_3678_, 1, v___x_3667_);
v___x_3679_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12));
v___x_3680_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3678_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3680_);
lean_ctor_set(v___x_3681_, 1, v___x_3656_);
v___x_3682_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3683_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3655_);
v___x_3684_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3682_);
lean_ctor_set(v___x_3684_, 1, v___x_3683_);
v___x_3685_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3685_, 0, v___x_3684_);
lean_ctor_set_uint8(v___x_3685_, sizeof(void*)*1, v___x_3662_);
v___x_3686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3681_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3688_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17));
v___x_3689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
lean_ctor_set(v___x_3689_, 1, v___x_3686_);
v___x_3690_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18));
v___x_3691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3689_);
lean_ctor_set(v___x_3691_, 1, v___x_3690_);
v___x_3692_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3687_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___x_3693_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
lean_ctor_set_uint8(v___x_3693_, sizeof(void*)*1, v___x_3662_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3694_, lean_object* v_prec_3695_){
_start:
{
lean_object* v___x_3696_; 
v___x_3696_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3694_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3697_, lean_object* v_prec_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3697_, v_prec_3698_);
lean_dec(v_prec_3698_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v___x_3708_; lean_object* v___x_6516__overap_3709_; lean_object* v___x_3710_; 
v___x_3708_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_6516__overap_3709_ = lean_panic_fn_borrowed(v___x_3708_, v_msg_3702_);
lean_inc(v___y_3706_);
lean_inc_ref(v___y_3705_);
lean_inc(v___y_3704_);
lean_inc_ref(v___y_3703_);
v___x_3710_ = lean_apply_5(v___x_6516__overap_3709_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, lean_box(0));
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_6526__overap_3725_; lean_object* v___x_3726_; 
v___x_3724_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_6526__overap_3725_ = lean_panic_fn_borrowed(v___x_3724_, v_msg_3718_);
lean_inc(v___y_3722_);
lean_inc_ref(v___y_3721_);
lean_inc(v___y_3720_);
lean_inc_ref(v___y_3719_);
v___x_3726_ = lean_apply_5(v___x_6526__overap_3725_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_, lean_box(0));
return v___x_3726_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
lean_object* v_res_3733_; 
v_res_3733_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
lean_dec(v___y_3729_);
lean_dec_ref(v___y_3728_);
return v_res_3733_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_6536__overap_3741_; lean_object* v___x_3742_; 
v___x_3740_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_6536__overap_3741_ = lean_panic_fn_borrowed(v___x_3740_, v_msg_3734_);
lean_inc(v___y_3738_);
lean_inc_ref(v___y_3737_);
lean_inc(v___y_3736_);
lean_inc_ref(v___y_3735_);
v___x_3742_ = lean_apply_5(v___x_6536__overap_3741_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_, lean_box(0));
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
return v_res_3749_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3752_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1));
v___x_3753_ = lean_unsigned_to_nat(12u);
v___x_3754_ = lean_unsigned_to_nat(294u);
v___x_3755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3756_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3757_ = l_mkPanicMessageWithDecl(v___x_3756_, v___x_3755_, v___x_3754_, v___x_3753_, v___x_3752_);
return v___x_3757_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3759_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3));
v___x_3760_ = lean_unsigned_to_nat(12u);
v___x_3761_ = lean_unsigned_to_nat(297u);
v___x_3762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3763_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3764_ = l_mkPanicMessageWithDecl(v___x_3763_, v___x_3762_, v___x_3761_, v___x_3760_, v___x_3759_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3765_, lean_object* v_as_3766_, size_t v_sz_3767_, size_t v_i_3768_, lean_object* v_b_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v_a_3776_; uint8_t v___x_3780_; 
v___x_3780_ = lean_usize_dec_lt(v_i_3768_, v_sz_3767_);
if (v___x_3780_ == 0)
{
lean_object* v___x_3781_; 
v___x_3781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3781_, 0, v_b_3769_);
return v___x_3781_;
}
else
{
lean_object* v_a_3782_; 
v_a_3782_ = lean_array_uget_borrowed(v_as_3766_, v_i_3768_);
if (lean_obj_tag(v_a_3782_) == 1)
{
lean_object* v_val_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v_val_3783_ = lean_ctor_get(v_a_3782_, 0);
v___x_3784_ = lean_box(0);
v___x_3785_ = lean_unsigned_to_nat(0u);
v___x_3786_ = lean_array_get_borrowed(v___x_3784_, v_val_3783_, v___x_3785_);
if (lean_obj_tag(v___x_3786_) == 1)
{
lean_object* v_val_3787_; lean_object* v___x_3788_; 
v_val_3787_ = lean_ctor_get(v___x_3786_, 0);
v___x_3788_ = lean_array_get_borrowed(v___x_3784_, v___x_3765_, v_val_3787_);
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v___x_3789_; lean_object* v___x_3790_; 
lean_dec_ref(v_b_3769_);
v___x_3789_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3790_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3789_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3800_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3793_ = v___x_3790_;
v_isShared_3794_ = v_isSharedCheck_3800_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3790_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3800_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
if (lean_obj_tag(v_a_3791_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3797_; 
v_a_3795_ = lean_ctor_get(v_a_3791_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v_a_3791_, 1);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v_a_3795_);
v___x_3797_ = v___x_3793_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3795_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
else
{
lean_object* v_a_3799_; 
lean_del_object(v___x_3793_);
v_a_3799_ = lean_ctor_get(v_a_3791_, 0);
lean_inc(v_a_3799_);
lean_dec_ref_known(v_a_3791_, 1);
v_a_3776_ = v_a_3799_;
goto v___jp_3775_;
}
}
}
else
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3808_; 
v_a_3801_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3808_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3808_ == 0)
{
v___x_3803_ = v___x_3790_;
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3790_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v___x_3806_; 
if (v_isShared_3804_ == 0)
{
v___x_3806_ = v___x_3803_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v_a_3801_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
else
{
lean_object* v___x_3809_; 
lean_inc_ref(v___x_3788_);
v___x_3809_ = lean_array_push(v_b_3769_, v___x_3788_);
v_a_3776_ = v___x_3809_;
goto v___jp_3775_;
}
}
else
{
lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3810_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3811_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_3810_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_dec_ref_known(v___x_3811_, 1);
v_a_3776_ = v_b_3769_;
goto v___jp_3775_;
}
else
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
lean_dec_ref(v_b_3769_);
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3811_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3811_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
}
else
{
lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3820_ = lean_box(0);
v___x_3821_ = lean_array_push(v_b_3769_, v___x_3820_);
v_a_3776_ = v___x_3821_;
goto v___jp_3775_;
}
}
v___jp_3775_:
{
size_t v___x_3777_; size_t v___x_3778_; 
v___x_3777_ = ((size_t)1ULL);
v___x_3778_ = lean_usize_add(v_i_3768_, v___x_3777_);
v_i_3768_ = v___x_3778_;
v_b_3769_ = v_a_3776_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3822_, lean_object* v_as_3823_, lean_object* v_sz_3824_, lean_object* v_i_3825_, lean_object* v_b_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
size_t v_sz_boxed_3832_; size_t v_i_boxed_3833_; lean_object* v_res_3834_; 
v_sz_boxed_3832_ = lean_unbox_usize(v_sz_3824_);
lean_dec(v_sz_3824_);
v_i_boxed_3833_ = lean_unbox_usize(v_i_3825_);
lean_dec(v_i_3825_);
v_res_3834_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3822_, v_as_3823_, v_sz_boxed_3832_, v_i_boxed_3833_, v_b_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec_ref(v_as_3823_);
lean_dec_ref(v___x_3822_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3837_, lean_object* v___x_3838_, lean_object* v___x_3839_, lean_object* v_a_3840_, lean_object* v_b_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_){
_start:
{
uint8_t v___x_3847_; 
v___x_3847_ = lean_nat_dec_lt(v_a_3840_, v_upperBound_3837_);
if (v___x_3847_ == 0)
{
lean_object* v___x_3848_; 
lean_dec(v_a_3840_);
v___x_3848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3848_, 0, v_b_3841_);
return v___x_3848_;
}
else
{
lean_object* v___x_3849_; lean_object* v___x_3850_; size_t v_sz_3851_; size_t v___x_3852_; lean_object* v___x_3853_; 
v___x_3849_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_3850_ = lean_array_fget_borrowed(v___x_3838_, v_a_3840_);
v_sz_3851_ = lean_array_size(v___x_3850_);
v___x_3852_ = ((size_t)0ULL);
v___x_3853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3839_, v___x_3850_, v_sz_3851_, v___x_3852_, v___x_3849_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v_a_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; 
v_a_3854_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_a_3854_);
lean_dec_ref_known(v___x_3853_, 1);
v___x_3855_ = lean_array_push(v_b_3841_, v_a_3854_);
v___x_3856_ = lean_unsigned_to_nat(1u);
v___x_3857_ = lean_nat_add(v_a_3840_, v___x_3856_);
lean_dec(v_a_3840_);
v_a_3840_ = v___x_3857_;
v_b_3841_ = v___x_3855_;
goto _start;
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
lean_dec_ref(v_b_3841_);
lean_dec(v_a_3840_);
v_a_3859_ = lean_ctor_get(v___x_3853_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3853_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3853_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3853_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3867_, lean_object* v___x_3868_, lean_object* v___x_3869_, lean_object* v_a_3870_, lean_object* v_b_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3867_, v___x_3868_, v___x_3869_, v_a_3870_, v_b_3871_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec_ref(v___x_3869_);
lean_dec_ref(v___x_3868_);
lean_dec(v_upperBound_3867_);
return v_res_3877_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3879_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0));
v___x_3880_ = lean_unsigned_to_nat(8u);
v___x_3881_ = lean_unsigned_to_nat(281u);
v___x_3882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3883_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3884_ = l_mkPanicMessageWithDecl(v___x_3883_, v___x_3882_, v___x_3881_, v___x_3880_, v___x_3879_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_3885_, lean_object* v_a_3886_, lean_object* v_b_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v_a_3894_; uint8_t v___x_3898_; 
v___x_3898_ = lean_nat_dec_lt(v_a_3886_, v_upperBound_3885_);
if (v___x_3898_ == 0)
{
lean_object* v___x_3899_; 
lean_dec(v_a_3886_);
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v_b_3887_);
return v___x_3899_;
}
else
{
lean_object* v_snd_3900_; lean_object* v_snd_3901_; lean_object* v_snd_3902_; lean_object* v_fst_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_4027_; 
v_snd_3900_ = lean_ctor_get(v_b_3887_, 1);
lean_inc(v_snd_3900_);
v_snd_3901_ = lean_ctor_get(v_snd_3900_, 1);
lean_inc(v_snd_3901_);
v_snd_3902_ = lean_ctor_get(v_snd_3901_, 1);
lean_inc(v_snd_3902_);
v_fst_3903_ = lean_ctor_get(v_b_3887_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v_b_3887_);
if (v_isSharedCheck_4027_ == 0)
{
lean_object* v_unused_4028_; 
v_unused_4028_ = lean_ctor_get(v_b_3887_, 1);
lean_dec(v_unused_4028_);
v___x_3905_ = v_b_3887_;
v_isShared_3906_ = v_isSharedCheck_4027_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_fst_3903_);
lean_dec(v_b_3887_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_4027_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v_fst_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_4025_; 
v_fst_3907_ = lean_ctor_get(v_snd_3900_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v_snd_3900_);
if (v_isSharedCheck_4025_ == 0)
{
lean_object* v_unused_4026_; 
v_unused_4026_ = lean_ctor_get(v_snd_3900_, 1);
lean_dec(v_unused_4026_);
v___x_3909_ = v_snd_3900_;
v_isShared_3910_ = v_isSharedCheck_4025_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_fst_3907_);
lean_dec(v_snd_3900_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_4025_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v_fst_3911_; lean_object* v___x_3913_; uint8_t v_isShared_3914_; uint8_t v_isSharedCheck_4023_; 
v_fst_3911_ = lean_ctor_get(v_snd_3901_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v_snd_3901_);
if (v_isSharedCheck_4023_ == 0)
{
lean_object* v_unused_4024_; 
v_unused_4024_ = lean_ctor_get(v_snd_3901_, 1);
lean_dec(v_unused_4024_);
v___x_3913_ = v_snd_3901_;
v_isShared_3914_ = v_isSharedCheck_4023_;
goto v_resetjp_3912_;
}
else
{
lean_inc(v_fst_3911_);
lean_dec(v_snd_3901_);
v___x_3913_ = lean_box(0);
v_isShared_3914_ = v_isSharedCheck_4023_;
goto v_resetjp_3912_;
}
v_resetjp_3912_:
{
lean_object* v_array_3915_; lean_object* v_start_3916_; lean_object* v_stop_3917_; uint8_t v___x_3918_; 
v_array_3915_ = lean_ctor_get(v_snd_3902_, 0);
v_start_3916_ = lean_ctor_get(v_snd_3902_, 1);
v_stop_3917_ = lean_ctor_get(v_snd_3902_, 2);
v___x_3918_ = lean_nat_dec_lt(v_start_3916_, v_stop_3917_);
if (v___x_3918_ == 0)
{
lean_object* v___x_3920_; 
lean_dec(v_a_3886_);
if (v_isShared_3914_ == 0)
{
v___x_3920_ = v___x_3913_;
goto v_reusejp_3919_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v_fst_3911_);
lean_ctor_set(v_reuseFailAlloc_3928_, 1, v_snd_3902_);
v___x_3920_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3919_;
}
v_reusejp_3919_:
{
lean_object* v___x_3922_; 
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 1, v___x_3920_);
v___x_3922_ = v___x_3909_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_fst_3907_);
lean_ctor_set(v_reuseFailAlloc_3927_, 1, v___x_3920_);
v___x_3922_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
lean_object* v___x_3924_; 
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 1, v___x_3922_);
v___x_3924_ = v___x_3905_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v_fst_3903_);
lean_ctor_set(v_reuseFailAlloc_3926_, 1, v___x_3922_);
v___x_3924_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
lean_object* v___x_3925_; 
v___x_3925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3924_);
return v___x_3925_;
}
}
}
}
else
{
lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_4019_; 
lean_inc(v_stop_3917_);
lean_inc(v_start_3916_);
lean_inc_ref(v_array_3915_);
v_isSharedCheck_4019_ = !lean_is_exclusive(v_snd_3902_);
if (v_isSharedCheck_4019_ == 0)
{
lean_object* v_unused_4020_; lean_object* v_unused_4021_; lean_object* v_unused_4022_; 
v_unused_4020_ = lean_ctor_get(v_snd_3902_, 2);
lean_dec(v_unused_4020_);
v_unused_4021_ = lean_ctor_get(v_snd_3902_, 1);
lean_dec(v_unused_4021_);
v_unused_4022_ = lean_ctor_get(v_snd_3902_, 0);
lean_dec(v_unused_4022_);
v___x_3930_ = v_snd_3902_;
v_isShared_3931_ = v_isSharedCheck_4019_;
goto v_resetjp_3929_;
}
else
{
lean_dec(v_snd_3902_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_4019_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v_array_3932_; lean_object* v_start_3933_; lean_object* v_stop_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3939_; 
v_array_3932_ = lean_ctor_get(v_fst_3911_, 0);
v_start_3933_ = lean_ctor_get(v_fst_3911_, 1);
v_stop_3934_ = lean_ctor_get(v_fst_3911_, 2);
v___x_3935_ = lean_array_fget(v_array_3915_, v_start_3916_);
v___x_3936_ = lean_unsigned_to_nat(1u);
v___x_3937_ = lean_nat_add(v_start_3916_, v___x_3936_);
lean_dec(v_start_3916_);
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 1, v___x_3937_);
v___x_3939_ = v___x_3930_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_array_3915_);
lean_ctor_set(v_reuseFailAlloc_4018_, 1, v___x_3937_);
lean_ctor_set(v_reuseFailAlloc_4018_, 2, v_stop_3917_);
v___x_3939_ = v_reuseFailAlloc_4018_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
uint8_t v___x_3940_; 
v___x_3940_ = lean_nat_dec_lt(v_start_3933_, v_stop_3934_);
if (v___x_3940_ == 0)
{
lean_object* v___x_3942_; 
lean_dec(v___x_3935_);
lean_dec(v_a_3886_);
if (v_isShared_3914_ == 0)
{
lean_ctor_set(v___x_3913_, 1, v___x_3939_);
v___x_3942_ = v___x_3913_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_fst_3911_);
lean_ctor_set(v_reuseFailAlloc_3950_, 1, v___x_3939_);
v___x_3942_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3944_; 
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 1, v___x_3942_);
v___x_3944_ = v___x_3909_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_fst_3907_);
lean_ctor_set(v_reuseFailAlloc_3949_, 1, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
lean_object* v___x_3946_; 
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 1, v___x_3944_);
v___x_3946_ = v___x_3905_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_fst_3903_);
lean_ctor_set(v_reuseFailAlloc_3948_, 1, v___x_3944_);
v___x_3946_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
lean_object* v___x_3947_; 
v___x_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3946_);
return v___x_3947_;
}
}
}
}
else
{
lean_object* v___x_3952_; uint8_t v_isShared_3953_; uint8_t v_isSharedCheck_4014_; 
lean_inc(v_stop_3934_);
lean_inc(v_start_3933_);
lean_inc_ref(v_array_3932_);
v_isSharedCheck_4014_ = !lean_is_exclusive(v_fst_3911_);
if (v_isSharedCheck_4014_ == 0)
{
lean_object* v_unused_4015_; lean_object* v_unused_4016_; lean_object* v_unused_4017_; 
v_unused_4015_ = lean_ctor_get(v_fst_3911_, 2);
lean_dec(v_unused_4015_);
v_unused_4016_ = lean_ctor_get(v_fst_3911_, 1);
lean_dec(v_unused_4016_);
v_unused_4017_ = lean_ctor_get(v_fst_3911_, 0);
lean_dec(v_unused_4017_);
v___x_3952_ = v_fst_3911_;
v_isShared_3953_ = v_isSharedCheck_4014_;
goto v_resetjp_3951_;
}
else
{
lean_dec(v_fst_3911_);
v___x_3952_ = lean_box(0);
v_isShared_3953_ = v_isSharedCheck_4014_;
goto v_resetjp_3951_;
}
v_resetjp_3951_:
{
lean_object* v___x_3954_; lean_object* v___x_3956_; 
v___x_3954_ = lean_nat_add(v_start_3933_, v___x_3936_);
lean_dec(v_start_3933_);
if (v_isShared_3953_ == 0)
{
lean_ctor_set(v___x_3952_, 1, v___x_3954_);
v___x_3956_ = v___x_3952_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_array_3932_);
lean_ctor_set(v_reuseFailAlloc_4013_, 1, v___x_3954_);
lean_ctor_set(v_reuseFailAlloc_4013_, 2, v_stop_3934_);
v___x_3956_ = v_reuseFailAlloc_4013_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
if (lean_obj_tag(v___x_3935_) == 1)
{
lean_object* v_val_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_4001_; 
v_val_3957_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3959_ = v___x_3935_;
v_isShared_3960_ = v_isSharedCheck_4001_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_val_3957_);
lean_dec(v___x_3935_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_4001_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
v___x_3961_ = lean_box(0);
v___x_3962_ = lean_unsigned_to_nat(0u);
v___x_3963_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_3964_ = lean_array_get(v___x_3961_, v_val_3957_, v___x_3962_);
lean_dec(v_val_3957_);
lean_inc(v_a_3886_);
if (v_isShared_3960_ == 0)
{
lean_ctor_set(v___x_3959_, 0, v_a_3886_);
v___x_3966_ = v___x_3959_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3886_);
v___x_3966_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
uint8_t v___x_3967_; 
v___x_3967_ = l_Option_instDecidableEq___redArg(v___x_3963_, v___x_3964_, v___x_3966_);
if (v___x_3967_ == 0)
{
lean_object* v___x_3968_; lean_object* v___x_3969_; 
lean_dec_ref(v___x_3956_);
lean_dec_ref(v___x_3939_);
lean_del_object(v___x_3913_);
lean_del_object(v___x_3909_);
lean_dec(v_fst_3907_);
lean_del_object(v___x_3905_);
lean_dec(v_fst_3903_);
v___x_3968_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_3969_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_3968_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3969_) == 0)
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3979_; 
v_a_3970_ = lean_ctor_get(v___x_3969_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3969_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3972_ = v___x_3969_;
v_isShared_3973_ = v_isSharedCheck_3979_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3969_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3979_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
if (lean_obj_tag(v_a_3970_) == 0)
{
lean_object* v_a_3974_; lean_object* v___x_3976_; 
lean_dec(v_a_3886_);
v_a_3974_ = lean_ctor_get(v_a_3970_, 0);
lean_inc(v_a_3974_);
lean_dec_ref_known(v_a_3970_, 1);
if (v_isShared_3973_ == 0)
{
lean_ctor_set(v___x_3972_, 0, v_a_3974_);
v___x_3976_ = v___x_3972_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3974_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
else
{
lean_object* v_a_3978_; 
lean_del_object(v___x_3972_);
v_a_3978_ = lean_ctor_get(v_a_3970_, 0);
lean_inc(v_a_3978_);
lean_dec_ref_known(v_a_3970_, 1);
v_a_3894_ = v_a_3978_;
goto v___jp_3893_;
}
}
}
else
{
lean_object* v_a_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3987_; 
lean_dec(v_a_3886_);
v_a_3980_ = lean_ctor_get(v___x_3969_, 0);
v_isSharedCheck_3987_ = !lean_is_exclusive(v___x_3969_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3982_ = v___x_3969_;
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_a_3980_);
lean_dec(v___x_3969_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3985_; 
if (v_isShared_3983_ == 0)
{
v___x_3985_ = v___x_3982_;
goto v_reusejp_3984_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v_a_3980_);
v___x_3985_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3984_;
}
v_reusejp_3984_:
{
return v___x_3985_;
}
}
}
}
else
{
lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3992_; 
lean_inc(v_fst_3907_);
v___x_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3988_, 0, v_fst_3907_);
v___x_3989_ = lean_array_push(v_fst_3903_, v___x_3988_);
v___x_3990_ = lean_nat_add(v_fst_3907_, v___x_3936_);
lean_dec(v_fst_3907_);
if (v_isShared_3914_ == 0)
{
lean_ctor_set(v___x_3913_, 1, v___x_3939_);
lean_ctor_set(v___x_3913_, 0, v___x_3956_);
v___x_3992_ = v___x_3913_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v___x_3956_);
lean_ctor_set(v_reuseFailAlloc_3999_, 1, v___x_3939_);
v___x_3992_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
lean_object* v___x_3994_; 
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 1, v___x_3992_);
lean_ctor_set(v___x_3909_, 0, v___x_3990_);
v___x_3994_ = v___x_3909_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v___x_3990_);
lean_ctor_set(v_reuseFailAlloc_3998_, 1, v___x_3992_);
v___x_3994_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
lean_object* v___x_3996_; 
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 1, v___x_3994_);
lean_ctor_set(v___x_3905_, 0, v___x_3989_);
v___x_3996_ = v___x_3905_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3989_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v___x_3994_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
v_a_3894_ = v___x_3996_;
goto v___jp_3893_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4005_; 
lean_dec(v___x_3935_);
v___x_4002_ = lean_box(0);
v___x_4003_ = lean_array_push(v_fst_3903_, v___x_4002_);
if (v_isShared_3914_ == 0)
{
lean_ctor_set(v___x_3913_, 1, v___x_3939_);
lean_ctor_set(v___x_3913_, 0, v___x_3956_);
v___x_4005_ = v___x_3913_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v___x_3956_);
lean_ctor_set(v_reuseFailAlloc_4012_, 1, v___x_3939_);
v___x_4005_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
lean_object* v___x_4007_; 
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 1, v___x_4005_);
v___x_4007_ = v___x_3909_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_fst_3907_);
lean_ctor_set(v_reuseFailAlloc_4011_, 1, v___x_4005_);
v___x_4007_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
lean_object* v___x_4009_; 
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 1, v___x_4007_);
lean_ctor_set(v___x_3905_, 0, v___x_4003_);
v___x_4009_ = v___x_3905_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v___x_4003_);
lean_ctor_set(v_reuseFailAlloc_4010_, 1, v___x_4007_);
v___x_4009_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
v_a_3894_ = v___x_4009_;
goto v___jp_3893_;
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
v___jp_3893_:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; 
v___x_3895_ = lean_unsigned_to_nat(1u);
v___x_3896_ = lean_nat_add(v_a_3886_, v___x_3895_);
lean_dec(v_a_3886_);
v_a_3886_ = v___x_3896_;
v_b_3887_ = v_a_3894_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4029_, lean_object* v_a_4030_, lean_object* v_b_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4029_, v_a_4030_, v_b_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_);
lean_dec(v___y_4035_);
lean_dec_ref(v___y_4034_);
lean_dec(v___y_4033_);
lean_dec_ref(v___y_4032_);
lean_dec(v_upperBound_4029_);
return v_res_4037_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v___x_4039_ = ((lean_object*)(l_Lean_Elab_getFixedParamPerms___lam__0___closed__0));
v___x_4040_ = lean_unsigned_to_nat(4u);
v___x_4041_ = lean_unsigned_to_nat(275u);
v___x_4042_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4043_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4044_ = l_mkPanicMessageWithDecl(v___x_4043_, v___x_4042_, v___x_4041_, v___x_4040_, v___x_4039_);
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4045_, lean_object* v___x_4046_, lean_object* v___x_4047_, lean_object* v_xs_4048_, lean_object* v_x_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
lean_object* v_graph_4055_; lean_object* v_revDeps_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4109_; 
v_graph_4055_ = lean_ctor_get(v_a_4045_, 0);
v_revDeps_4056_ = lean_ctor_get(v_a_4045_, 1);
v_isSharedCheck_4109_ = !lean_is_exclusive(v_a_4045_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4058_ = v_a_4045_;
v_isShared_4059_ = v_isSharedCheck_4109_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_revDeps_4056_);
lean_inc(v_graph_4055_);
lean_dec(v_a_4045_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4109_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; uint8_t v___x_4063_; 
v___x_4060_ = lean_array_get_borrowed(v___x_4046_, v_graph_4055_, v___x_4047_);
v___x_4061_ = lean_array_get_size(v_xs_4048_);
v___x_4062_ = lean_array_get_size(v___x_4060_);
v___x_4063_ = lean_nat_dec_eq(v___x_4061_, v___x_4062_);
if (v___x_4063_ == 0)
{
lean_object* v___x_4064_; lean_object* v___x_4065_; 
lean_del_object(v___x_4058_);
lean_dec_ref(v_revDeps_4056_);
lean_dec_ref(v_graph_4055_);
lean_dec_ref(v_xs_4048_);
lean_dec(v___x_4047_);
v___x_4064_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4065_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4064_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
return v___x_4065_;
}
else
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4070_; 
v___x_4066_ = lean_mk_empty_array_with_capacity(v___x_4047_);
lean_inc_n(v___x_4047_, 2);
v___x_4067_ = l_Array_toSubarray___redArg(v_xs_4048_, v___x_4047_, v___x_4061_);
lean_inc(v___x_4060_);
v___x_4068_ = l_Array_toSubarray___redArg(v___x_4060_, v___x_4047_, v___x_4062_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 1, v___x_4068_);
lean_ctor_set(v___x_4058_, 0, v___x_4067_);
v___x_4070_ = v___x_4058_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v___x_4067_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v___x_4068_);
v___x_4070_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
lean_inc(v___x_4047_);
v___x_4071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4047_);
lean_ctor_set(v___x_4071_, 1, v___x_4070_);
v___x_4072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4066_);
lean_ctor_set(v___x_4072_, 1, v___x_4071_);
v___x_4073_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4061_, v___x_4047_, v___x_4072_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_object* v_a_4074_; lean_object* v_snd_4075_; lean_object* v_fst_4076_; lean_object* v_fst_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
v_a_4074_ = lean_ctor_get(v___x_4073_, 0);
lean_inc(v_a_4074_);
lean_dec_ref_known(v___x_4073_, 1);
v_snd_4075_ = lean_ctor_get(v_a_4074_, 1);
lean_inc(v_snd_4075_);
v_fst_4076_ = lean_ctor_get(v_a_4074_, 0);
lean_inc_n(v_fst_4076_, 2);
lean_dec(v_a_4074_);
v_fst_4077_ = lean_ctor_get(v_snd_4075_, 0);
lean_inc(v_fst_4077_);
lean_dec(v_snd_4075_);
v___x_4078_ = lean_unsigned_to_nat(1u);
v___x_4079_ = lean_array_get_size(v_graph_4055_);
v___x_4080_ = lean_mk_empty_array_with_capacity(v___x_4078_);
v___x_4081_ = lean_array_push(v___x_4080_, v_fst_4076_);
v___x_4082_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4079_, v_graph_4055_, v_fst_4076_, v___x_4078_, v___x_4081_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
lean_dec(v_fst_4076_);
lean_dec_ref(v_graph_4055_);
if (lean_obj_tag(v___x_4082_) == 0)
{
lean_object* v_a_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4091_; 
v_a_4083_ = lean_ctor_get(v___x_4082_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_4082_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4085_ = v___x_4082_;
v_isShared_4086_ = v_isSharedCheck_4091_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_a_4083_);
lean_dec(v___x_4082_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4091_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4087_; lean_object* v___x_4089_; 
v___x_4087_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4087_, 0, v_fst_4077_);
lean_ctor_set(v___x_4087_, 1, v_a_4083_);
lean_ctor_set(v___x_4087_, 2, v_revDeps_4056_);
if (v_isShared_4086_ == 0)
{
lean_ctor_set(v___x_4085_, 0, v___x_4087_);
v___x_4089_ = v___x_4085_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v___x_4087_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
else
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4099_; 
lean_dec(v_fst_4077_);
lean_dec_ref(v_revDeps_4056_);
v_a_4092_ = lean_ctor_get(v___x_4082_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4082_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4094_ = v___x_4082_;
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4082_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4095_ == 0)
{
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
}
}
else
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
lean_dec_ref(v_revDeps_4056_);
lean_dec_ref(v_graph_4055_);
v_a_4100_ = lean_ctor_get(v___x_4073_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4073_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4073_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4073_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4110_, lean_object* v___x_4111_, lean_object* v___x_4112_, lean_object* v_xs_4113_, lean_object* v_x_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
lean_object* v_res_4120_; 
v_res_4120_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4110_, v___x_4111_, v___x_4112_, v_xs_4113_, v_x_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec_ref(v_x_4114_);
lean_dec_ref(v___x_4111_);
return v_res_4120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4127_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4128_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
lean_inc_ref(v_preDefs_4121_);
v___x_4129_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_object* v_a_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v_value_4133_; lean_object* v___f_4134_; uint8_t v___x_4135_; lean_object* v___x_4136_; 
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
lean_inc(v_a_4130_);
lean_dec_ref_known(v___x_4129_, 1);
v___x_4131_ = lean_unsigned_to_nat(0u);
v___x_4132_ = lean_array_get(v___x_4127_, v_preDefs_4121_, v___x_4131_);
lean_dec_ref(v_preDefs_4121_);
v_value_4133_ = lean_ctor_get(v___x_4132_, 7);
lean_inc_ref(v_value_4133_);
lean_dec(v___x_4132_);
v___f_4134_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4134_, 0, v_a_4130_);
lean_closure_set(v___f_4134_, 1, v___x_4128_);
lean_closure_set(v___f_4134_, 2, v___x_4131_);
v___x_4135_ = 0;
v___x_4136_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4133_, v___f_4134_, v___x_4135_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
return v___x_4136_;
}
else
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
lean_dec_ref(v_preDefs_4121_);
v_a_4137_ = lean_ctor_get(v___x_4129_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4129_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4129_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4129_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4152_, lean_object* v___x_4153_, lean_object* v___x_4154_, lean_object* v_inst_4155_, lean_object* v_R_4156_, lean_object* v_a_4157_, lean_object* v_b_4158_, lean_object* v_c_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4152_, v___x_4153_, v___x_4154_, v_a_4157_, v_b_4158_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4166_, lean_object* v___x_4167_, lean_object* v___x_4168_, lean_object* v_inst_4169_, lean_object* v_R_4170_, lean_object* v_a_4171_, lean_object* v_b_4172_, lean_object* v_c_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4166_, v___x_4167_, v___x_4168_, v_inst_4169_, v_R_4170_, v_a_4171_, v_b_4172_, v_c_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec_ref(v___x_4168_);
lean_dec_ref(v___x_4167_);
lean_dec(v_upperBound_4166_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4180_, lean_object* v_inst_4181_, lean_object* v_R_4182_, lean_object* v_a_4183_, lean_object* v_b_4184_, lean_object* v_c_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4180_, v_a_4183_, v_b_4184_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4192_, lean_object* v_inst_4193_, lean_object* v_R_4194_, lean_object* v_a_4195_, lean_object* v_b_4196_, lean_object* v_c_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_){
_start:
{
lean_object* v_res_4203_; 
v_res_4203_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4192_, v_inst_4193_, v_R_4194_, v_a_4195_, v_b_4196_, v_c_4197_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_);
lean_dec(v___y_4201_);
lean_dec_ref(v___y_4200_);
lean_dec(v___y_4199_);
lean_dec_ref(v___y_4198_);
lean_dec(v_upperBound_4192_);
return v_res_4203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4204_, size_t v_i_4205_, size_t v_stop_4206_, lean_object* v_b_4207_){
_start:
{
uint8_t v___x_4208_; 
v___x_4208_ = lean_usize_dec_eq(v_i_4205_, v_stop_4206_);
if (v___x_4208_ == 0)
{
size_t v___x_4209_; size_t v___x_4210_; lean_object* v___x_4211_; 
v___x_4209_ = ((size_t)1ULL);
v___x_4210_ = lean_usize_sub(v_i_4205_, v___x_4209_);
v___x_4211_ = lean_array_uget_borrowed(v_as_4204_, v___x_4210_);
if (lean_obj_tag(v___x_4211_) == 0)
{
v_i_4205_ = v___x_4210_;
goto _start;
}
else
{
lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4213_ = lean_unsigned_to_nat(1u);
v___x_4214_ = lean_nat_add(v_b_4207_, v___x_4213_);
lean_dec(v_b_4207_);
v_i_4205_ = v___x_4210_;
v_b_4207_ = v___x_4214_;
goto _start;
}
}
else
{
return v_b_4207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4216_, lean_object* v_i_4217_, lean_object* v_stop_4218_, lean_object* v_b_4219_){
_start:
{
size_t v_i_boxed_4220_; size_t v_stop_boxed_4221_; lean_object* v_res_4222_; 
v_i_boxed_4220_ = lean_unbox_usize(v_i_4217_);
lean_dec(v_i_4217_);
v_stop_boxed_4221_ = lean_unbox_usize(v_stop_4218_);
lean_dec(v_stop_4218_);
v_res_4222_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4216_, v_i_boxed_4220_, v_stop_boxed_4221_, v_b_4219_);
lean_dec_ref(v_as_4216_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4223_){
_start:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; uint8_t v___x_4226_; 
v___x_4224_ = lean_unsigned_to_nat(0u);
v___x_4225_ = lean_array_get_size(v_perm_4223_);
v___x_4226_ = lean_nat_dec_lt(v___x_4224_, v___x_4225_);
if (v___x_4226_ == 0)
{
return v___x_4224_;
}
else
{
size_t v___x_4227_; size_t v___x_4228_; lean_object* v___x_4229_; 
v___x_4227_ = lean_usize_of_nat(v___x_4225_);
v___x_4228_ = ((size_t)0ULL);
v___x_4229_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4223_, v___x_4227_, v___x_4228_, v___x_4224_);
return v___x_4229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4230_);
lean_dec_ref(v_perm_4230_);
return v_res_4231_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4232_, lean_object* v_i_4233_){
_start:
{
lean_object* v___x_4234_; uint8_t v___x_4235_; 
v___x_4234_ = lean_array_get_size(v_perm_4232_);
v___x_4235_ = lean_nat_dec_lt(v_i_4233_, v___x_4234_);
if (v___x_4235_ == 0)
{
return v___x_4235_;
}
else
{
lean_object* v___x_4236_; 
v___x_4236_ = lean_array_fget_borrowed(v_perm_4232_, v_i_4233_);
if (lean_obj_tag(v___x_4236_) == 0)
{
uint8_t v___x_4237_; 
v___x_4237_ = 0;
return v___x_4237_;
}
else
{
return v___x_4235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4238_, lean_object* v_i_4239_){
_start:
{
uint8_t v_res_4240_; lean_object* v_r_4241_; 
v_res_4240_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4238_, v_i_4239_);
lean_dec(v_i_4239_);
lean_dec_ref(v_perm_4238_);
v_r_4241_ = lean_box(v_res_4240_);
return v_r_4241_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_){
_start:
{
lean_object* v___x_4248_; lean_object* v___x_745__overap_4249_; lean_object* v___x_4250_; 
v___x_4248_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_745__overap_4249_ = lean_panic_fn_borrowed(v___x_4248_, v_msg_4242_);
lean_inc(v___y_4246_);
lean_inc_ref(v___y_4245_);
lean_inc(v___y_4244_);
lean_inc_ref(v___y_4243_);
v___x_4250_ = lean_apply_5(v___x_745__overap_4249_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, lean_box(0));
return v___x_4250_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_){
_start:
{
lean_object* v_res_4257_; 
v_res_4257_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4251_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4258_, lean_object* v_msg_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v___x_4265_; 
v___x_4265_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4266_, lean_object* v_msg_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v_res_4273_; 
v_res_4273_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4266_, v_msg_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v___y_4269_);
lean_dec_ref(v___y_4268_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4274_, lean_object* v_maxFVars_x3f_4275_, lean_object* v_k_4276_, uint8_t v_cleanupAnnotations_4277_, uint8_t v_whnfType_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_){
_start:
{
lean_object* v___f_4284_; lean_object* v___x_4285_; 
v___f_4284_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4284_, 0, v_k_4276_);
v___x_4285_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4274_, v_maxFVars_x3f_4275_, v___f_4284_, v_cleanupAnnotations_4277_, v_whnfType_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4293_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4288_ = v___x_4285_;
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_a_4286_);
lean_dec(v___x_4285_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4291_; 
if (v_isShared_4289_ == 0)
{
v___x_4291_ = v___x_4288_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_a_4286_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
return v___x_4291_;
}
}
}
else
{
lean_object* v_a_4294_; lean_object* v___x_4296_; uint8_t v_isShared_4297_; uint8_t v_isSharedCheck_4301_; 
v_a_4294_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4296_ = v___x_4285_;
v_isShared_4297_ = v_isSharedCheck_4301_;
goto v_resetjp_4295_;
}
else
{
lean_inc(v_a_4294_);
lean_dec(v___x_4285_);
v___x_4296_ = lean_box(0);
v_isShared_4297_ = v_isSharedCheck_4301_;
goto v_resetjp_4295_;
}
v_resetjp_4295_:
{
lean_object* v___x_4299_; 
if (v_isShared_4297_ == 0)
{
v___x_4299_ = v___x_4296_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_a_4294_);
v___x_4299_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
return v___x_4299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4302_, lean_object* v_maxFVars_x3f_4303_, lean_object* v_k_4304_, lean_object* v_cleanupAnnotations_4305_, lean_object* v_whnfType_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4312_; uint8_t v_whnfType_boxed_4313_; lean_object* v_res_4314_; 
v_cleanupAnnotations_boxed_4312_ = lean_unbox(v_cleanupAnnotations_4305_);
v_whnfType_boxed_4313_ = lean_unbox(v_whnfType_4306_);
v_res_4314_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4302_, v_maxFVars_x3f_4303_, v_k_4304_, v_cleanupAnnotations_boxed_4312_, v_whnfType_boxed_4313_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
lean_dec(v___y_4308_);
lean_dec_ref(v___y_4307_);
return v_res_4314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4315_, lean_object* v_type_4316_, lean_object* v_maxFVars_x3f_4317_, lean_object* v_k_4318_, uint8_t v_cleanupAnnotations_4319_, uint8_t v_whnfType_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4316_, v_maxFVars_x3f_4317_, v_k_4318_, v_cleanupAnnotations_4319_, v_whnfType_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4327_, lean_object* v_type_4328_, lean_object* v_maxFVars_x3f_4329_, lean_object* v_k_4330_, lean_object* v_cleanupAnnotations_4331_, lean_object* v_whnfType_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4338_; uint8_t v_whnfType_boxed_4339_; lean_object* v_res_4340_; 
v_cleanupAnnotations_boxed_4338_ = lean_unbox(v_cleanupAnnotations_4331_);
v_whnfType_boxed_4339_ = lean_unbox(v_whnfType_4332_);
v_res_4340_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4327_, v_type_4328_, v_maxFVars_x3f_4329_, v_k_4330_, v_cleanupAnnotations_boxed_4338_, v_whnfType_boxed_4339_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
return v_res_4340_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___x_4343_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1));
v___x_4344_ = lean_unsigned_to_nat(6u);
v___x_4345_ = lean_unsigned_to_nat(329u);
v___x_4346_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4347_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4348_ = l_mkPanicMessageWithDecl(v___x_4347_, v___x_4346_, v___x_4345_, v___x_4344_, v___x_4343_);
return v___x_4348_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4352_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0));
v___x_4353_ = lean_unsigned_to_nat(8u);
v___x_4354_ = lean_unsigned_to_nat(322u);
v___x_4355_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4356_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4357_ = l_mkPanicMessageWithDecl(v___x_4356_, v___x_4355_, v___x_4354_, v___x_4353_, v___x_4352_);
return v___x_4357_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4359_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4360_ = lean_unsigned_to_nat(8u);
v___x_4361_ = lean_unsigned_to_nat(325u);
v___x_4362_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4363_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4364_ = l_mkPanicMessageWithDecl(v___x_4363_, v___x_4362_, v___x_4361_, v___x_4360_, v___x_4359_);
return v___x_4364_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v___x_4366_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4));
v___x_4367_ = lean_unsigned_to_nat(8u);
v___x_4368_ = lean_unsigned_to_nat(324u);
v___x_4369_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4370_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4371_ = l_mkPanicMessageWithDecl(v___x_4370_, v___x_4369_, v___x_4368_, v___x_4367_, v___x_4366_);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4372_, lean_object* v___x_4373_, lean_object* v_xs_4374_, lean_object* v_val_4375_, lean_object* v_i_4376_, lean_object* v_perm_4377_, lean_object* v_k_4378_, lean_object* v_xs_x27_4379_, lean_object* v_type_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_){
_start:
{
lean_object* v___x_4386_; uint8_t v___x_4387_; 
v___x_4386_ = lean_array_get_size(v_xs_x27_4379_);
v___x_4387_ = lean_nat_dec_eq(v___x_4386_, v___x_4372_);
if (v___x_4387_ == 0)
{
lean_object* v___x_4388_; lean_object* v___x_4389_; 
lean_dec_ref(v_type_4380_);
lean_dec_ref(v_k_4378_);
lean_dec_ref(v_perm_4377_);
lean_dec_ref(v_xs_4374_);
v___x_4388_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4389_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4388_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4389_;
}
else
{
lean_object* v___x_4390_; lean_object* v_x_4391_; lean_object* v___x_4392_; 
v___x_4390_ = lean_unsigned_to_nat(0u);
v_x_4391_ = lean_array_get_borrowed(v___x_4373_, v_xs_x27_4379_, v___x_4390_);
lean_inc(v___y_4384_);
lean_inc_ref(v___y_4383_);
lean_inc(v___y_4382_);
lean_inc_ref(v___y_4381_);
lean_inc(v_x_4391_);
v___x_4392_ = lean_infer_type(v_x_4391_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
if (lean_obj_tag(v___x_4392_) == 0)
{
lean_object* v_a_4393_; uint8_t v___x_4394_; 
v_a_4393_ = lean_ctor_get(v___x_4392_, 0);
lean_inc(v_a_4393_);
lean_dec_ref_known(v___x_4392_, 1);
v___x_4394_ = l_Lean_Expr_hasLooseBVars(v_a_4393_);
lean_dec(v_a_4393_);
if (v___x_4394_ == 0)
{
lean_object* v___x_4395_; uint8_t v___x_4396_; 
v___x_4395_ = lean_array_get_size(v_xs_4374_);
v___x_4396_ = lean_nat_dec_lt(v_val_4375_, v___x_4395_);
if (v___x_4396_ == 0)
{
lean_object* v___x_4397_; lean_object* v___x_4398_; 
lean_dec_ref(v_type_4380_);
lean_dec_ref(v_k_4378_);
lean_dec_ref(v_perm_4377_);
lean_dec_ref(v_xs_4374_);
v___x_4397_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4398_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4397_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4398_;
}
else
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4399_ = lean_nat_add(v_i_4376_, v___x_4372_);
lean_inc(v_x_4391_);
v___x_4400_ = lean_array_set(v_xs_4374_, v_val_4375_, v_x_4391_);
v___x_4401_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4377_, v_k_4378_, v___x_4399_, v_type_4380_, v___x_4400_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4401_;
}
}
else
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
lean_dec_ref(v_type_4380_);
lean_dec_ref(v_k_4378_);
lean_dec_ref(v_perm_4377_);
lean_dec_ref(v_xs_4374_);
v___x_4402_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4403_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4402_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4403_;
}
}
else
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4411_; 
lean_dec_ref(v_type_4380_);
lean_dec_ref(v_k_4378_);
lean_dec_ref(v_perm_4377_);
lean_dec_ref(v_xs_4374_);
v_a_4404_ = lean_ctor_get(v___x_4392_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4392_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4406_ = v___x_4392_;
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v___x_4392_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4409_; 
if (v_isShared_4407_ == 0)
{
v___x_4409_ = v___x_4406_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_a_4404_);
v___x_4409_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
return v___x_4409_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4412_, lean_object* v___x_4413_, lean_object* v_xs_4414_, lean_object* v_val_4415_, lean_object* v_i_4416_, lean_object* v_perm_4417_, lean_object* v_k_4418_, lean_object* v_xs_x27_4419_, lean_object* v_type_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4412_, v___x_4413_, v_xs_4414_, v_val_4415_, v_i_4416_, v_perm_4417_, v_k_4418_, v_xs_x27_4419_, v_type_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec_ref(v_xs_x27_4419_);
lean_dec(v_i_4416_);
lean_dec(v_val_4415_);
lean_dec_ref(v___x_4413_);
lean_dec(v___x_4412_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4427_, lean_object* v_k_4428_, lean_object* v_i_4429_, lean_object* v_type_4430_, lean_object* v_xs_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4437_ = lean_array_get_size(v_perm_4427_);
v___x_4438_ = lean_nat_dec_lt(v_i_4429_, v___x_4437_);
if (v___x_4438_ == 0)
{
lean_object* v___x_4439_; 
lean_dec_ref(v_type_4430_);
lean_dec(v_i_4429_);
lean_dec_ref(v_perm_4427_);
lean_inc(v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc(v___y_4433_);
lean_inc_ref(v___y_4432_);
v___x_4439_ = lean_apply_6(v_k_4428_, v_xs_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, lean_box(0));
return v___x_4439_;
}
else
{
lean_object* v___x_4440_; 
v___x_4440_ = lean_array_fget_borrowed(v_perm_4427_, v_i_4429_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v___x_4441_; 
lean_inc(v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc(v___y_4433_);
lean_inc_ref(v___y_4432_);
v___x_4441_ = lean_whnf(v_type_4430_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_object* v_a_4442_; uint8_t v___x_4443_; 
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
lean_inc(v_a_4442_);
lean_dec_ref_known(v___x_4441_, 1);
v___x_4443_ = l_Lean_Expr_isForall(v_a_4442_);
if (v___x_4443_ == 0)
{
lean_object* v___x_4444_; lean_object* v___x_4445_; 
lean_dec(v_a_4442_);
lean_dec_ref(v_xs_4431_);
lean_dec(v_i_4429_);
lean_dec_ref(v_k_4428_);
lean_dec_ref(v_perm_4427_);
v___x_4444_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4445_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4444_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4445_;
}
else
{
lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; 
v___x_4446_ = lean_unsigned_to_nat(1u);
v___x_4447_ = lean_nat_add(v_i_4429_, v___x_4446_);
lean_dec(v_i_4429_);
v___x_4448_ = l_Lean_Expr_bindingBody_x21(v_a_4442_);
lean_dec(v_a_4442_);
v_i_4429_ = v___x_4447_;
v_type_4430_ = v___x_4448_;
goto _start;
}
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4457_; 
lean_dec_ref(v_xs_4431_);
lean_dec(v_i_4429_);
lean_dec_ref(v_k_4428_);
lean_dec_ref(v_perm_4427_);
v_a_4450_ = lean_ctor_get(v___x_4441_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4441_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4452_ = v___x_4441_;
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4441_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
else
{
lean_object* v_val_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___f_4461_; lean_object* v___x_4462_; uint8_t v___x_4463_; lean_object* v___x_4464_; 
v_val_4458_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_val_4458_);
v___x_4459_ = l_Lean_instInhabitedExpr;
v___x_4460_ = lean_unsigned_to_nat(1u);
v___f_4461_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4461_, 0, v___x_4460_);
lean_closure_set(v___f_4461_, 1, v___x_4459_);
lean_closure_set(v___f_4461_, 2, v_xs_4431_);
lean_closure_set(v___f_4461_, 3, v_val_4458_);
lean_closure_set(v___f_4461_, 4, v_i_4429_);
lean_closure_set(v___f_4461_, 5, v_perm_4427_);
lean_closure_set(v___f_4461_, 6, v_k_4428_);
v___x_4462_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4463_ = 0;
v___x_4464_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4430_, v___x_4462_, v___f_4461_, v___x_4438_, v___x_4463_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4464_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4465_, lean_object* v_k_4466_, lean_object* v_i_4467_, lean_object* v_type_4468_, lean_object* v_xs_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4465_, v_k_4466_, v_i_4467_, v_type_4468_, v_xs_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4476_, lean_object* v_perm_4477_, lean_object* v_k_4478_, lean_object* v_i_4479_, lean_object* v_type_4480_, lean_object* v_xs_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4477_, v_k_4478_, v_i_4479_, v_type_4480_, v_xs_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4488_, lean_object* v_perm_4489_, lean_object* v_k_4490_, lean_object* v_i_4491_, lean_object* v_type_4492_, lean_object* v_xs_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4488_, v_perm_4489_, v_k_4490_, v_i_4491_, v_type_4492_, v_xs_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
return v_res_4499_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4500_; lean_object* v___x_4501_; 
v___x_4500_ = lean_unsigned_to_nat(0u);
v___x_4501_ = l_Lean_Level_ofNat(v___x_4500_);
return v___x_4501_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; 
v___x_4502_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4503_ = l_Lean_mkSort(v___x_4502_);
return v___x_4503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4504_, lean_object* v_type_4505_, lean_object* v_k_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4512_ = lean_unsigned_to_nat(0u);
v___x_4513_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4504_);
v___x_4514_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4515_ = lean_mk_array(v___x_4513_, v___x_4514_);
v___x_4516_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4504_, v_k_4506_, v___x_4512_, v_type_4505_, v___x_4515_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_);
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4517_, lean_object* v_type_4518_, lean_object* v_k_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4517_, v_type_4518_, v_k_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4526_, lean_object* v_perm_4527_, lean_object* v_type_4528_, lean_object* v_k_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_){
_start:
{
lean_object* v___x_4535_; 
v___x_4535_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4527_, v_type_4528_, v_k_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_);
return v___x_4535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4536_, lean_object* v_perm_4537_, lean_object* v_type_4538_, lean_object* v_k_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_){
_start:
{
lean_object* v_res_4545_; 
v_res_4545_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4536_, v_perm_4537_, v_type_4538_, v_k_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
lean_dec(v___y_4541_);
lean_dec_ref(v___y_4540_);
return v_res_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4546_, lean_object* v_runInBase_4547_, lean_object* v_b_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4554_ = lean_apply_1(v_k_4546_, v_b_4548_);
lean_inc(v___y_4552_);
lean_inc_ref(v___y_4551_);
lean_inc(v___y_4550_);
lean_inc_ref(v___y_4549_);
v___x_4555_ = lean_apply_7(v_runInBase_4547_, lean_box(0), v___x_4554_, v___y_4549_, v___y_4550_, v___y_4551_, v___y_4552_, lean_box(0));
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4556_, lean_object* v_runInBase_4557_, lean_object* v_b_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_){
_start:
{
lean_object* v_res_4564_; 
v_res_4564_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4556_, v_runInBase_4557_, v_b_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
return v_res_4564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4565_, lean_object* v_perm_4566_, lean_object* v_type_4567_, lean_object* v_runInBase_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_){
_start:
{
lean_object* v___f_4574_; lean_object* v___x_4575_; 
v___f_4574_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4574_, 0, v_k_4565_);
lean_closure_set(v___f_4574_, 1, v_runInBase_4568_);
v___x_4575_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4566_, v_type_4567_, v___f_4574_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4576_, lean_object* v_perm_4577_, lean_object* v_type_4578_, lean_object* v_runInBase_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_){
_start:
{
lean_object* v_res_4585_; 
v_res_4585_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4576_, v_perm_4577_, v_type_4578_, v_runInBase_4579_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
lean_dec(v___y_4581_);
lean_dec_ref(v___y_4580_);
return v_res_4585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4586_, lean_object* v_inst_4587_, lean_object* v_perm_4588_, lean_object* v_type_4589_, lean_object* v_k_4590_){
_start:
{
lean_object* v_toBind_4591_; lean_object* v_liftWith_4592_; lean_object* v_restoreM_4593_; lean_object* v___f_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; 
v_toBind_4591_ = lean_ctor_get(v_inst_4587_, 1);
lean_inc(v_toBind_4591_);
lean_dec_ref(v_inst_4587_);
v_liftWith_4592_ = lean_ctor_get(v_inst_4586_, 0);
lean_inc(v_liftWith_4592_);
v_restoreM_4593_ = lean_ctor_get(v_inst_4586_, 1);
lean_inc(v_restoreM_4593_);
lean_dec_ref(v_inst_4586_);
v___f_4594_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4594_, 0, v_k_4590_);
lean_closure_set(v___f_4594_, 1, v_perm_4588_);
lean_closure_set(v___f_4594_, 2, v_type_4589_);
v___x_4595_ = lean_apply_2(v_liftWith_4592_, lean_box(0), v___f_4594_);
v___x_4596_ = lean_apply_1(v_restoreM_4593_, lean_box(0));
v___x_4597_ = lean_apply_4(v_toBind_4591_, lean_box(0), lean_box(0), v___x_4595_, v___x_4596_);
return v___x_4597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4598_, lean_object* v_00_u03b1_4599_, lean_object* v_inst_4600_, lean_object* v_inst_4601_, lean_object* v_perm_4602_, lean_object* v_type_4603_, lean_object* v_k_4604_){
_start:
{
lean_object* v___x_4605_; 
v___x_4605_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4600_, v_inst_4601_, v_perm_4602_, v_type_4603_, v_k_4604_);
return v___x_4605_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v___x_4612_; lean_object* v___x_551__overap_4613_; lean_object* v___x_4614_; 
v___x_4612_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_551__overap_4613_ = lean_panic_fn_borrowed(v___x_4612_, v_msg_4606_);
lean_inc(v___y_4610_);
lean_inc_ref(v___y_4609_);
lean_inc(v___y_4608_);
lean_inc_ref(v___y_4607_);
v___x_4614_ = lean_apply_5(v___x_551__overap_4613_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, lean_box(0));
return v___x_4614_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
lean_dec(v___y_4617_);
lean_dec_ref(v___y_4616_);
return v_res_4621_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4624_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1));
v___x_4625_ = lean_unsigned_to_nat(10u);
v___x_4626_ = lean_unsigned_to_nat(353u);
v___x_4627_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4628_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4629_ = l_mkPanicMessageWithDecl(v___x_4628_, v___x_4627_, v___x_4626_, v___x_4625_, v___x_4624_);
return v___x_4629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4630_, lean_object* v_xs_4631_, lean_object* v_tail_4632_, lean_object* v_ys_4633_, lean_object* v_type_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_){
_start:
{
lean_object* v_res_4640_; 
v_res_4640_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4630_, v_xs_4631_, v_tail_4632_, v_ys_4633_, v_type_4634_, v___y_4635_, v___y_4636_, v___y_4637_, v___y_4638_);
lean_dec(v___y_4638_);
lean_dec_ref(v___y_4637_);
lean_dec(v___y_4636_);
lean_dec_ref(v___y_4635_);
lean_dec_ref(v_ys_4633_);
lean_dec(v___x_4630_);
return v_res_4640_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; 
v___x_4641_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4642_ = lean_unsigned_to_nat(8u);
v___x_4643_ = lean_unsigned_to_nat(349u);
v___x_4644_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4645_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4646_ = l_mkPanicMessageWithDecl(v___x_4645_, v___x_4644_, v___x_4643_, v___x_4642_, v___x_4641_);
return v___x_4646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4647_, lean_object* v_x_4648_, lean_object* v_x_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_){
_start:
{
if (lean_obj_tag(v_x_4648_) == 0)
{
lean_object* v___x_4655_; 
lean_dec_ref(v_xs_4647_);
v___x_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4655_, 0, v_x_4649_);
return v___x_4655_;
}
else
{
lean_object* v_head_4656_; 
v_head_4656_ = lean_ctor_get(v_x_4648_, 0);
if (lean_obj_tag(v_head_4656_) == 0)
{
lean_object* v_tail_4657_; lean_object* v___x_4658_; lean_object* v___f_4659_; lean_object* v___x_4660_; uint8_t v___x_4661_; lean_object* v___x_4662_; 
v_tail_4657_ = lean_ctor_get(v_x_4648_, 1);
lean_inc(v_tail_4657_);
lean_dec_ref_known(v_x_4648_, 2);
v___x_4658_ = lean_unsigned_to_nat(1u);
v___f_4659_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4659_, 0, v___x_4658_);
lean_closure_set(v___f_4659_, 1, v_xs_4647_);
lean_closure_set(v___f_4659_, 2, v_tail_4657_);
v___x_4660_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4661_ = 0;
v___x_4662_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4649_, v___x_4660_, v___f_4659_, v___x_4661_, v___x_4661_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_);
return v___x_4662_;
}
else
{
lean_object* v_tail_4663_; lean_object* v_val_4664_; lean_object* v___x_4665_; uint8_t v___x_4666_; 
lean_inc_ref(v_head_4656_);
v_tail_4663_ = lean_ctor_get(v_x_4648_, 1);
lean_inc(v_tail_4663_);
lean_dec_ref_known(v_x_4648_, 2);
v_val_4664_ = lean_ctor_get(v_head_4656_, 0);
lean_inc(v_val_4664_);
lean_dec_ref_known(v_head_4656_, 1);
v___x_4665_ = lean_array_get_size(v_xs_4647_);
v___x_4666_ = lean_nat_dec_lt(v_val_4664_, v___x_4665_);
if (v___x_4666_ == 0)
{
lean_object* v___x_4667_; lean_object* v___x_4668_; 
lean_dec(v_val_4664_);
lean_dec(v_tail_4663_);
lean_dec_ref(v_x_4649_);
lean_dec_ref(v_xs_4647_);
v___x_4667_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4668_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4667_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_);
return v___x_4668_;
}
else
{
lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4669_ = l_Lean_instInhabitedExpr;
v___x_4670_ = lean_array_get_borrowed(v___x_4669_, v_xs_4647_, v_val_4664_);
lean_dec(v_val_4664_);
v___x_4671_ = lean_unsigned_to_nat(1u);
v___x_4672_ = lean_mk_empty_array_with_capacity(v___x_4671_);
lean_inc(v___x_4670_);
v___x_4673_ = lean_array_push(v___x_4672_, v___x_4670_);
v___x_4674_ = l_Lean_Meta_instantiateForall(v_x_4649_, v___x_4673_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_);
lean_dec_ref(v___x_4673_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4675_);
lean_dec_ref_known(v___x_4674_, 1);
v_x_4648_ = v_tail_4663_;
v_x_4649_ = v_a_4675_;
goto _start;
}
else
{
lean_dec(v_tail_4663_);
lean_dec_ref(v_xs_4647_);
return v___x_4674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4677_, lean_object* v_xs_4678_, lean_object* v_tail_4679_, lean_object* v_ys_4680_, lean_object* v_type_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_){
_start:
{
lean_object* v___x_4687_; uint8_t v___x_4688_; 
v___x_4687_ = lean_array_get_size(v_ys_4680_);
v___x_4688_ = lean_nat_dec_eq(v___x_4687_, v___x_4677_);
if (v___x_4688_ == 0)
{
lean_object* v___x_4689_; lean_object* v___x_4690_; 
lean_dec_ref(v_type_4681_);
lean_dec(v_tail_4679_);
lean_dec_ref(v_xs_4678_);
v___x_4689_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4690_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4689_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_);
return v___x_4690_;
}
else
{
lean_object* v___x_4691_; 
v___x_4691_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4678_, v_tail_4679_, v_type_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_);
if (lean_obj_tag(v___x_4691_) == 0)
{
lean_object* v_a_4692_; uint8_t v___x_4693_; uint8_t v___x_4694_; lean_object* v___x_4695_; 
v_a_4692_ = lean_ctor_get(v___x_4691_, 0);
lean_inc(v_a_4692_);
lean_dec_ref_known(v___x_4691_, 1);
v___x_4693_ = 0;
v___x_4694_ = 1;
v___x_4695_ = l_Lean_Meta_mkForallFVars(v_ys_4680_, v_a_4692_, v___x_4693_, v___x_4688_, v___x_4688_, v___x_4694_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_);
return v___x_4695_;
}
else
{
return v___x_4691_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4696_, lean_object* v_x_4697_, lean_object* v_x_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_){
_start:
{
lean_object* v_res_4704_; 
v_res_4704_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4696_, v_x_4697_, v_x_4698_, v___y_4699_, v___y_4700_, v___y_4701_, v___y_4702_);
lean_dec(v___y_4702_);
lean_dec_ref(v___y_4701_);
lean_dec(v___y_4700_);
lean_dec_ref(v___y_4699_);
return v_res_4704_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; 
v___x_4707_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4708_ = lean_unsigned_to_nat(2u);
v___x_4709_ = lean_unsigned_to_nat(343u);
v___x_4710_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0));
v___x_4711_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4712_ = l_mkPanicMessageWithDecl(v___x_4711_, v___x_4710_, v___x_4709_, v___x_4708_, v___x_4707_);
return v___x_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4713_, lean_object* v_type_u2080_4714_, lean_object* v_xs_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v___x_4721_; lean_object* v___x_4722_; uint8_t v___x_4723_; 
v___x_4721_ = lean_array_get_size(v_xs_4715_);
v___x_4722_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4713_);
v___x_4723_ = lean_nat_dec_eq(v___x_4721_, v___x_4722_);
lean_dec(v___x_4722_);
if (v___x_4723_ == 0)
{
lean_object* v___x_4724_; lean_object* v___x_4725_; 
lean_dec_ref(v_xs_4715_);
lean_dec_ref(v_type_u2080_4714_);
lean_dec_ref(v_perm_4713_);
v___x_4724_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4725_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4724_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_);
return v___x_4725_;
}
else
{
lean_object* v_mask_4726_; lean_object* v___x_4727_; 
v_mask_4726_ = lean_array_to_list(v_perm_4713_);
v___x_4727_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4715_, v_mask_4726_, v_type_u2080_4714_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_);
return v___x_4727_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4728_, lean_object* v_type_u2080_4729_, lean_object* v_xs_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_){
_start:
{
lean_object* v_res_4736_; 
v_res_4736_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4728_, v_type_u2080_4729_, v_xs_4730_, v___y_4731_, v___y_4732_, v___y_4733_, v___y_4734_);
lean_dec(v___y_4734_);
lean_dec_ref(v___y_4733_);
lean_dec(v___y_4732_);
lean_dec_ref(v___y_4731_);
return v_res_4736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object* v_e_4737_, lean_object* v_maxFVars_4738_, lean_object* v_k_4739_, uint8_t v_cleanupAnnotations_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v___f_4746_; uint8_t v___x_4747_; uint8_t v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; 
v___f_4746_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4746_, 0, v_k_4739_);
v___x_4747_ = 1;
v___x_4748_ = 0;
v___x_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4749_, 0, v_maxFVars_4738_);
v___x_4750_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4737_, v___x_4747_, v___x_4748_, v___x_4747_, v___x_4748_, v___x_4749_, v___f_4746_, v_cleanupAnnotations_4740_, v___y_4741_, v___y_4742_, v___y_4743_, v___y_4744_);
lean_dec_ref_known(v___x_4749_, 1);
if (lean_obj_tag(v___x_4750_) == 0)
{
lean_object* v_a_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4758_; 
v_a_4751_ = lean_ctor_get(v___x_4750_, 0);
v_isSharedCheck_4758_ = !lean_is_exclusive(v___x_4750_);
if (v_isSharedCheck_4758_ == 0)
{
v___x_4753_ = v___x_4750_;
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_a_4751_);
lean_dec(v___x_4750_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v___x_4756_; 
if (v_isShared_4754_ == 0)
{
v___x_4756_ = v___x_4753_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4757_; 
v_reuseFailAlloc_4757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4757_, 0, v_a_4751_);
v___x_4756_ = v_reuseFailAlloc_4757_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
return v___x_4756_;
}
}
}
else
{
lean_object* v_a_4759_; lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4766_; 
v_a_4759_ = lean_ctor_get(v___x_4750_, 0);
v_isSharedCheck_4766_ = !lean_is_exclusive(v___x_4750_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4761_ = v___x_4750_;
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
else
{
lean_inc(v_a_4759_);
lean_dec(v___x_4750_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_a_4759_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
return v___x_4764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object* v_e_4767_, lean_object* v_maxFVars_4768_, lean_object* v_k_4769_, lean_object* v_cleanupAnnotations_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4776_; lean_object* v_res_4777_; 
v_cleanupAnnotations_boxed_4776_ = lean_unbox(v_cleanupAnnotations_4770_);
v_res_4777_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4767_, v_maxFVars_4768_, v_k_4769_, v_cleanupAnnotations_boxed_4776_, v___y_4771_, v___y_4772_, v___y_4773_, v___y_4774_);
lean_dec(v___y_4774_);
lean_dec_ref(v___y_4773_);
lean_dec(v___y_4772_);
lean_dec_ref(v___y_4771_);
return v_res_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object* v_00_u03b1_4778_, lean_object* v_e_4779_, lean_object* v_maxFVars_4780_, lean_object* v_k_4781_, uint8_t v_cleanupAnnotations_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_){
_start:
{
lean_object* v___x_4788_; 
v___x_4788_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4779_, v_maxFVars_4780_, v_k_4781_, v_cleanupAnnotations_4782_, v___y_4783_, v___y_4784_, v___y_4785_, v___y_4786_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object* v_00_u03b1_4789_, lean_object* v_e_4790_, lean_object* v_maxFVars_4791_, lean_object* v_k_4792_, lean_object* v_cleanupAnnotations_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4799_; lean_object* v_res_4800_; 
v_cleanupAnnotations_boxed_4799_ = lean_unbox(v_cleanupAnnotations_4793_);
v_res_4800_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(v_00_u03b1_4789_, v_e_4790_, v_maxFVars_4791_, v_k_4792_, v_cleanupAnnotations_boxed_4799_, v___y_4794_, v___y_4795_, v___y_4796_, v___y_4797_);
lean_dec(v___y_4797_);
lean_dec_ref(v___y_4796_);
lean_dec(v___y_4795_);
lean_dec_ref(v___y_4794_);
return v_res_4800_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_x_4801_){
_start:
{
if (lean_obj_tag(v_x_4801_) == 0)
{
uint8_t v___x_4802_; 
v___x_4802_ = 1;
return v___x_4802_;
}
else
{
lean_object* v_head_4803_; 
v_head_4803_ = lean_ctor_get(v_x_4801_, 0);
if (lean_obj_tag(v_head_4803_) == 0)
{
lean_object* v_tail_4804_; 
v_tail_4804_ = lean_ctor_get(v_x_4801_, 1);
v_x_4801_ = v_tail_4804_;
goto _start;
}
else
{
uint8_t v___x_4806_; 
v___x_4806_ = 0;
return v___x_4806_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_x_4807_){
_start:
{
uint8_t v_res_4808_; lean_object* v_r_4809_; 
v_res_4808_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_x_4807_);
lean_dec(v_x_4807_);
v_r_4809_ = lean_box(v_res_4808_);
return v_r_4809_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4812_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1));
v___x_4813_ = lean_unsigned_to_nat(12u);
v___x_4814_ = lean_unsigned_to_nat(376u);
v___x_4815_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4816_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4817_ = l_mkPanicMessageWithDecl(v___x_4816_, v___x_4815_, v___x_4814_, v___x_4813_, v___x_4812_);
return v___x_4817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___x_4818_, lean_object* v_xs_4819_, lean_object* v_tail_4820_, lean_object* v___x_4821_, lean_object* v___x_4822_, lean_object* v_ys_4823_, lean_object* v_value_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_){
_start:
{
uint8_t v___x_1266__boxed_4830_; uint8_t v___x_1267__boxed_4831_; lean_object* v_res_4832_; 
v___x_1266__boxed_4830_ = lean_unbox(v___x_4821_);
v___x_1267__boxed_4831_ = lean_unbox(v___x_4822_);
v_res_4832_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___x_4818_, v_xs_4819_, v_tail_4820_, v___x_1266__boxed_4830_, v___x_1267__boxed_4831_, v_ys_4823_, v_value_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_);
lean_dec(v___y_4828_);
lean_dec_ref(v___y_4827_);
lean_dec(v___y_4826_);
lean_dec_ref(v___y_4825_);
lean_dec_ref(v_ys_4823_);
lean_dec(v___x_4818_);
return v_res_4832_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0(void){
_start:
{
lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4833_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4834_ = lean_unsigned_to_nat(8u);
v___x_4835_ = lean_unsigned_to_nat(368u);
v___x_4836_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4837_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4838_ = l_mkPanicMessageWithDecl(v___x_4837_, v___x_4836_, v___x_4835_, v___x_4834_, v___x_4833_);
return v___x_4838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4839_, lean_object* v_x_4840_, lean_object* v_x_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_){
_start:
{
if (lean_obj_tag(v_x_4840_) == 0)
{
lean_object* v___x_4847_; 
lean_dec_ref(v_xs_4839_);
v___x_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4847_, 0, v_x_4841_);
return v___x_4847_;
}
else
{
lean_object* v_head_4848_; 
v_head_4848_ = lean_ctor_get(v_x_4840_, 0);
if (lean_obj_tag(v_head_4848_) == 0)
{
lean_object* v_tail_4849_; uint8_t v___x_4850_; 
v_tail_4849_ = lean_ctor_get(v_x_4840_, 1);
lean_inc(v_tail_4849_);
lean_dec_ref_known(v_x_4840_, 2);
v___x_4850_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_tail_4849_);
if (v___x_4850_ == 0)
{
uint8_t v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___f_4855_; lean_object* v___x_4856_; 
v___x_4851_ = 1;
v___x_4852_ = lean_unsigned_to_nat(1u);
v___x_4853_ = lean_box(v___x_4850_);
v___x_4854_ = lean_box(v___x_4851_);
v___f_4855_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4855_, 0, v___x_4852_);
lean_closure_set(v___f_4855_, 1, v_xs_4839_);
lean_closure_set(v___f_4855_, 2, v_tail_4849_);
lean_closure_set(v___f_4855_, 3, v___x_4853_);
lean_closure_set(v___f_4855_, 4, v___x_4854_);
v___x_4856_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_x_4841_, v___x_4852_, v___f_4855_, v___x_4850_, v___y_4842_, v___y_4843_, v___y_4844_, v___y_4845_);
return v___x_4856_;
}
else
{
lean_object* v___x_4857_; 
lean_dec(v_tail_4849_);
lean_dec_ref(v_xs_4839_);
v___x_4857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4857_, 0, v_x_4841_);
return v___x_4857_;
}
}
else
{
lean_object* v_tail_4858_; lean_object* v_val_4859_; lean_object* v___x_4860_; uint8_t v___x_4861_; 
lean_inc_ref(v_head_4848_);
v_tail_4858_ = lean_ctor_get(v_x_4840_, 1);
lean_inc(v_tail_4858_);
lean_dec_ref_known(v_x_4840_, 2);
v_val_4859_ = lean_ctor_get(v_head_4848_, 0);
lean_inc(v_val_4859_);
lean_dec_ref_known(v_head_4848_, 1);
v___x_4860_ = lean_array_get_size(v_xs_4839_);
v___x_4861_ = lean_nat_dec_lt(v_val_4859_, v___x_4860_);
if (v___x_4861_ == 0)
{
lean_object* v___x_4862_; lean_object* v___x_4863_; 
lean_dec(v_val_4859_);
lean_dec(v_tail_4858_);
lean_dec_ref(v_x_4841_);
lean_dec_ref(v_xs_4839_);
v___x_4862_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0);
v___x_4863_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4862_, v___y_4842_, v___y_4843_, v___y_4844_, v___y_4845_);
return v___x_4863_;
}
else
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4864_ = l_Lean_instInhabitedExpr;
v___x_4865_ = lean_array_get_borrowed(v___x_4864_, v_xs_4839_, v_val_4859_);
lean_dec(v_val_4859_);
v___x_4866_ = lean_unsigned_to_nat(1u);
v___x_4867_ = lean_mk_empty_array_with_capacity(v___x_4866_);
lean_inc(v___x_4865_);
v___x_4868_ = lean_array_push(v___x_4867_, v___x_4865_);
v___x_4869_ = l_Lean_Meta_instantiateLambda(v_x_4841_, v___x_4868_, v___y_4842_, v___y_4843_, v___y_4844_, v___y_4845_);
lean_dec_ref(v___x_4868_);
if (lean_obj_tag(v___x_4869_) == 0)
{
lean_object* v_a_4870_; 
v_a_4870_ = lean_ctor_get(v___x_4869_, 0);
lean_inc(v_a_4870_);
lean_dec_ref_known(v___x_4869_, 1);
v_x_4840_ = v_tail_4858_;
v_x_4841_ = v_a_4870_;
goto _start;
}
else
{
lean_dec(v_tail_4858_);
lean_dec_ref(v_xs_4839_);
return v___x_4869_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___x_4872_, lean_object* v_xs_4873_, lean_object* v_tail_4874_, uint8_t v___x_4875_, uint8_t v___x_4876_, lean_object* v_ys_4877_, lean_object* v_value_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_){
_start:
{
lean_object* v___x_4884_; uint8_t v___x_4885_; 
v___x_4884_ = lean_array_get_size(v_ys_4877_);
v___x_4885_ = lean_nat_dec_eq(v___x_4884_, v___x_4872_);
if (v___x_4885_ == 0)
{
lean_object* v___x_4886_; lean_object* v___x_4887_; 
lean_dec_ref(v_value_4878_);
lean_dec(v_tail_4874_);
lean_dec_ref(v_xs_4873_);
v___x_4886_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2);
v___x_4887_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4886_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_);
return v___x_4887_;
}
else
{
lean_object* v___x_4888_; 
v___x_4888_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4873_, v_tail_4874_, v_value_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_);
if (lean_obj_tag(v___x_4888_) == 0)
{
lean_object* v_a_4889_; uint8_t v___x_4890_; lean_object* v___x_4891_; 
v_a_4889_ = lean_ctor_get(v___x_4888_, 0);
lean_inc(v_a_4889_);
lean_dec_ref_known(v___x_4888_, 1);
v___x_4890_ = 1;
v___x_4891_ = l_Lean_Meta_mkLambdaFVars(v_ys_4877_, v_a_4889_, v___x_4875_, v___x_4876_, v___x_4875_, v___x_4876_, v___x_4890_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_);
return v___x_4891_;
}
else
{
return v___x_4888_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_4892_, lean_object* v_x_4893_, lean_object* v_x_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v_res_4900_; 
v_res_4900_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4892_, v_x_4893_, v_x_4894_, v___y_4895_, v___y_4896_, v___y_4897_, v___y_4898_);
lean_dec(v___y_4898_);
lean_dec_ref(v___y_4897_);
lean_dec(v___y_4896_);
lean_dec_ref(v___y_4895_);
return v_res_4900_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4902_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4903_ = lean_unsigned_to_nat(2u);
v___x_4904_ = lean_unsigned_to_nat(362u);
v___x_4905_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0));
v___x_4906_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4907_ = l_mkPanicMessageWithDecl(v___x_4906_, v___x_4905_, v___x_4904_, v___x_4903_, v___x_4902_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_4908_, lean_object* v_value_u2080_4909_, lean_object* v_xs_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_){
_start:
{
lean_object* v___x_4916_; lean_object* v___x_4917_; uint8_t v___x_4918_; 
v___x_4916_ = lean_array_get_size(v_xs_4910_);
v___x_4917_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4908_);
v___x_4918_ = lean_nat_dec_eq(v___x_4916_, v___x_4917_);
lean_dec(v___x_4917_);
if (v___x_4918_ == 0)
{
lean_object* v___x_4919_; lean_object* v___x_4920_; 
lean_dec_ref(v_xs_4910_);
lean_dec_ref(v_value_u2080_4909_);
lean_dec_ref(v_perm_4908_);
v___x_4919_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_4920_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4919_, v___y_4911_, v___y_4912_, v___y_4913_, v___y_4914_);
return v___x_4920_;
}
else
{
lean_object* v_mask_4921_; lean_object* v___x_4922_; 
v_mask_4921_ = lean_array_to_list(v_perm_4908_);
v___x_4922_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4910_, v_mask_4921_, v_value_u2080_4909_, v___y_4911_, v___y_4912_, v___y_4913_, v___y_4914_);
return v___x_4922_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_4923_, lean_object* v_value_u2080_4924_, lean_object* v_xs_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_){
_start:
{
lean_object* v_res_4931_; 
v_res_4931_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_4923_, v_value_u2080_4924_, v_xs_4925_, v___y_4926_, v___y_4927_, v___y_4928_, v___y_4929_);
lean_dec(v___y_4929_);
lean_dec_ref(v___y_4928_);
lean_dec(v___y_4927_);
lean_dec_ref(v___y_4926_);
return v_res_4931_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_4939_){
_start:
{
lean_object* v___f_4940_; lean_object* v___f_4941_; lean_object* v___f_4942_; lean_object* v___f_4943_; lean_object* v___f_4944_; lean_object* v___f_4945_; lean_object* v___f_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; 
v___f_4940_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_4941_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_4942_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_4943_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_4944_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_4945_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_4946_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_4947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4947_, 0, v___f_4940_);
lean_ctor_set(v___x_4947_, 1, v___f_4941_);
v___x_4948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4947_);
lean_ctor_set(v___x_4948_, 1, v___f_4942_);
lean_ctor_set(v___x_4948_, 2, v___f_4943_);
lean_ctor_set(v___x_4948_, 3, v___f_4944_);
lean_ctor_set(v___x_4948_, 4, v___f_4945_);
v___x_4949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4948_);
lean_ctor_set(v___x_4949_, 1, v___f_4946_);
v___x_4950_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_4951_ = l_instInhabitedOfMonad___redArg(v___x_4949_, v___x_4950_);
v___x_4952_ = lean_panic_fn_borrowed(v___x_4951_, v_msg_4939_);
lean_dec(v___x_4951_);
return v___x_4952_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_4953_, lean_object* v_msg_4954_){
_start:
{
lean_object* v___x_4955_; 
v___x_4955_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_4954_);
return v___x_4955_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4958_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1));
v___x_4959_ = lean_unsigned_to_nat(8u);
v___x_4960_ = lean_unsigned_to_nat(394u);
v___x_4961_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0));
v___x_4962_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4963_ = l_mkPanicMessageWithDecl(v___x_4962_, v___x_4961_, v___x_4960_, v___x_4959_, v___x_4958_);
return v___x_4963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_4964_, lean_object* v_x_4965_){
_start:
{
if (lean_obj_tag(v_x_4964_) == 0)
{
return v_x_4965_;
}
else
{
lean_object* v_head_4966_; lean_object* v_fst_4967_; 
v_head_4966_ = lean_ctor_get(v_x_4964_, 0);
v_fst_4967_ = lean_ctor_get(v_head_4966_, 0);
if (lean_obj_tag(v_fst_4967_) == 0)
{
lean_object* v_tail_4968_; 
v_tail_4968_ = lean_ctor_get(v_x_4964_, 1);
lean_inc(v_tail_4968_);
lean_dec_ref_known(v_x_4964_, 2);
v_x_4964_ = v_tail_4968_;
goto _start;
}
else
{
lean_object* v_tail_4970_; lean_object* v_snd_4971_; lean_object* v_val_4972_; lean_object* v___x_4973_; uint8_t v___x_4974_; 
lean_inc_ref(v_fst_4967_);
lean_inc(v_head_4966_);
v_tail_4970_ = lean_ctor_get(v_x_4964_, 1);
lean_inc(v_tail_4970_);
lean_dec_ref_known(v_x_4964_, 2);
v_snd_4971_ = lean_ctor_get(v_head_4966_, 1);
lean_inc(v_snd_4971_);
lean_dec(v_head_4966_);
v_val_4972_ = lean_ctor_get(v_fst_4967_, 0);
lean_inc(v_val_4972_);
lean_dec_ref_known(v_fst_4967_, 1);
v___x_4973_ = lean_array_get_size(v_x_4965_);
v___x_4974_ = lean_nat_dec_lt(v_val_4972_, v___x_4973_);
if (v___x_4974_ == 0)
{
lean_object* v___x_4975_; lean_object* v___x_4976_; 
lean_dec(v_val_4972_);
lean_dec(v_snd_4971_);
lean_dec(v_tail_4970_);
lean_dec_ref(v_x_4965_);
v___x_4975_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_4976_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_4975_);
return v___x_4976_;
}
else
{
lean_object* v___x_4977_; 
v___x_4977_ = lean_array_set(v_x_4965_, v_val_4972_, v_snd_4971_);
lean_dec(v_val_4972_);
v_x_4964_ = v_tail_4970_;
v_x_4965_ = v___x_4977_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_4979_, lean_object* v_x_4980_, lean_object* v_x_4981_){
_start:
{
lean_object* v___x_4982_; 
v___x_4982_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_4980_, v_x_4981_);
return v___x_4982_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4985_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1));
v___x_4986_ = lean_unsigned_to_nat(2u);
v___x_4987_ = lean_unsigned_to_nat(384u);
v___x_4988_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0));
v___x_4989_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4990_ = l_mkPanicMessageWithDecl(v___x_4989_, v___x_4988_, v___x_4987_, v___x_4986_, v___x_4985_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_4993_, lean_object* v_xs_4994_){
_start:
{
lean_object* v___x_4995_; lean_object* v___x_4996_; uint8_t v___x_4997_; 
v___x_4995_ = lean_array_get_size(v_xs_4994_);
v___x_4996_ = lean_array_get_size(v_perm_4993_);
v___x_4997_ = lean_nat_dec_eq(v___x_4995_, v___x_4996_);
if (v___x_4997_ == 0)
{
lean_object* v___x_4998_; lean_object* v___x_4999_; 
v___x_4998_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_4999_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_4998_);
return v___x_4999_;
}
else
{
lean_object* v___x_5000_; uint8_t v___x_5001_; 
v___x_5000_ = lean_unsigned_to_nat(0u);
v___x_5001_ = lean_nat_dec_eq(v___x_4995_, v___x_5000_);
if (v___x_5001_ == 0)
{
lean_object* v_dummy_5002_; lean_object* v___x_5003_; lean_object* v_ys_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v_dummy_5002_ = lean_array_fget_borrowed(v_xs_4994_, v___x_5000_);
v___x_5003_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4993_);
lean_inc(v_dummy_5002_);
v_ys_5004_ = lean_mk_array(v___x_5003_, v_dummy_5002_);
v___x_5005_ = l_Array_zip___redArg(v_perm_4993_, v_xs_4994_);
v___x_5006_ = lean_array_to_list(v___x_5005_);
v___x_5007_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5006_, v_ys_5004_);
return v___x_5007_;
}
else
{
lean_object* v___x_5008_; 
v___x_5008_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
return v___x_5008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5009_, lean_object* v_xs_5010_){
_start:
{
lean_object* v_res_5011_; 
v_res_5011_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5009_, v_xs_5010_);
lean_dec_ref(v_xs_5010_);
lean_dec_ref(v_perm_5009_);
return v_res_5011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5012_, lean_object* v_perm_5013_, lean_object* v_xs_5014_){
_start:
{
lean_object* v___x_5015_; 
v___x_5015_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5013_, v_xs_5014_);
return v___x_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5016_, lean_object* v_perm_5017_, lean_object* v_xs_5018_){
_start:
{
lean_object* v_res_5019_; 
v_res_5019_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5016_, v_perm_5017_, v_xs_5018_);
lean_dec_ref(v_xs_5018_);
lean_dec_ref(v_perm_5017_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5020_, lean_object* v_upperBound_5021_, lean_object* v_perm_5022_, lean_object* v_a_5023_, lean_object* v_b_5024_){
_start:
{
lean_object* v_a_5026_; uint8_t v___x_5033_; 
v___x_5033_ = lean_nat_dec_lt(v_a_5023_, v_upperBound_5021_);
if (v___x_5033_ == 0)
{
lean_dec(v_a_5023_);
return v_b_5024_;
}
else
{
lean_object* v___x_5034_; uint8_t v___x_5035_; 
v___x_5034_ = lean_array_get_size(v_perm_5022_);
v___x_5035_ = lean_nat_dec_lt(v_a_5023_, v___x_5034_);
if (v___x_5035_ == 0)
{
goto v___jp_5030_;
}
else
{
lean_object* v___x_5036_; 
v___x_5036_ = lean_array_fget_borrowed(v_perm_5022_, v_a_5023_);
if (lean_obj_tag(v___x_5036_) == 0)
{
goto v___jp_5030_;
}
else
{
v_a_5026_ = v_b_5024_;
goto v___jp_5025_;
}
}
}
v___jp_5025_:
{
lean_object* v___x_5027_; lean_object* v___x_5028_; 
v___x_5027_ = lean_unsigned_to_nat(1u);
v___x_5028_ = lean_nat_add(v_a_5023_, v___x_5027_);
lean_dec(v_a_5023_);
v_a_5023_ = v___x_5028_;
v_b_5024_ = v_a_5026_;
goto _start;
}
v___jp_5030_:
{
lean_object* v___x_5031_; lean_object* v___x_5032_; 
v___x_5031_ = lean_array_fget_borrowed(v_xs_5020_, v_a_5023_);
lean_inc(v___x_5031_);
v___x_5032_ = lean_array_push(v_b_5024_, v___x_5031_);
v_a_5026_ = v___x_5032_;
goto v___jp_5025_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5037_, lean_object* v_upperBound_5038_, lean_object* v_perm_5039_, lean_object* v_a_5040_, lean_object* v_b_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5037_, v_upperBound_5038_, v_perm_5039_, v_a_5040_, v_b_5041_);
lean_dec_ref(v_perm_5039_);
lean_dec(v_upperBound_5038_);
lean_dec_ref(v_xs_5037_);
return v_res_5042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5043_, lean_object* v_xs_5044_){
_start:
{
lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v_ys_5047_; lean_object* v___x_5048_; 
v___x_5045_ = lean_array_get_size(v_xs_5044_);
v___x_5046_ = lean_unsigned_to_nat(0u);
v_ys_5047_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5048_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5044_, v___x_5045_, v_perm_5043_, v___x_5046_, v_ys_5047_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5049_, lean_object* v_xs_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5049_, v_xs_5050_);
lean_dec_ref(v_xs_5050_);
lean_dec_ref(v_perm_5049_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5052_, lean_object* v_perm_5053_, lean_object* v_xs_5054_){
_start:
{
lean_object* v___x_5055_; 
v___x_5055_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5053_, v_xs_5054_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5056_, lean_object* v_perm_5057_, lean_object* v_xs_5058_){
_start:
{
lean_object* v_res_5059_; 
v_res_5059_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5056_, v_perm_5057_, v_xs_5058_);
lean_dec_ref(v_xs_5058_);
lean_dec_ref(v_perm_5057_);
return v_res_5059_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5060_, lean_object* v_xs_5061_, lean_object* v_upperBound_5062_, lean_object* v_perm_5063_, lean_object* v_inst_5064_, lean_object* v_R_5065_, lean_object* v_a_5066_, lean_object* v_b_5067_, lean_object* v_c_5068_){
_start:
{
lean_object* v___x_5069_; 
v___x_5069_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5061_, v_upperBound_5062_, v_perm_5063_, v_a_5066_, v_b_5067_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5070_, lean_object* v_xs_5071_, lean_object* v_upperBound_5072_, lean_object* v_perm_5073_, lean_object* v_inst_5074_, lean_object* v_R_5075_, lean_object* v_a_5076_, lean_object* v_b_5077_, lean_object* v_c_5078_){
_start:
{
lean_object* v_res_5079_; 
v_res_5079_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5070_, v_xs_5071_, v_upperBound_5072_, v_perm_5073_, v_inst_5074_, v_R_5075_, v_a_5076_, v_b_5077_, v_c_5078_);
lean_dec_ref(v_perm_5073_);
lean_dec(v_upperBound_5072_);
lean_dec_ref(v_xs_5071_);
return v_res_5079_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object* v_msg_5080_){
_start:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___x_5081_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5082_ = lean_panic_fn_borrowed(v___x_5081_, v_msg_5080_);
return v___x_5082_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_00_u03b1_5083_, lean_object* v_msg_5084_){
_start:
{
lean_object* v___x_5085_; 
v___x_5085_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v_msg_5084_);
return v___x_5085_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_j_5086_, lean_object* v___x_5087_, lean_object* v_i_5088_, lean_object* v___x_5089_, lean_object* v_as_5090_, size_t v_i_5091_, size_t v_stop_5092_){
_start:
{
uint8_t v___x_5093_; 
v___x_5093_ = lean_usize_dec_eq(v_i_5091_, v_stop_5092_);
if (v___x_5093_ == 0)
{
uint8_t v___x_5094_; uint8_t v___y_5096_; lean_object* v___x_5100_; 
v___x_5094_ = 1;
v___x_5100_ = lean_array_uget_borrowed(v_as_5090_, v_i_5091_);
if (lean_obj_tag(v___x_5100_) == 0)
{
uint8_t v___x_5101_; 
v___x_5101_ = lean_nat_dec_lt(v_j_5086_, v___x_5087_);
v___y_5096_ = v___x_5101_;
goto v___jp_5095_;
}
else
{
uint8_t v___x_5102_; 
v___x_5102_ = lean_nat_dec_lt(v_i_5088_, v___x_5089_);
v___y_5096_ = v___x_5102_;
goto v___jp_5095_;
}
v___jp_5095_:
{
if (v___y_5096_ == 0)
{
size_t v___x_5097_; size_t v___x_5098_; 
v___x_5097_ = ((size_t)1ULL);
v___x_5098_ = lean_usize_add(v_i_5091_, v___x_5097_);
v_i_5091_ = v___x_5098_;
goto _start;
}
else
{
return v___x_5094_;
}
}
}
else
{
uint8_t v___x_5103_; 
v___x_5103_ = 0;
return v___x_5103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object* v_j_5104_, lean_object* v___x_5105_, lean_object* v_i_5106_, lean_object* v___x_5107_, lean_object* v_as_5108_, lean_object* v_i_5109_, lean_object* v_stop_5110_){
_start:
{
size_t v_i_boxed_5111_; size_t v_stop_boxed_5112_; uint8_t v_res_5113_; lean_object* v_r_5114_; 
v_i_boxed_5111_ = lean_unbox_usize(v_i_5109_);
lean_dec(v_i_5109_);
v_stop_boxed_5112_ = lean_unbox_usize(v_stop_5110_);
lean_dec(v_stop_5110_);
v_res_5113_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5104_, v___x_5105_, v_i_5106_, v___x_5107_, v_as_5108_, v_i_boxed_5111_, v_stop_boxed_5112_);
lean_dec_ref(v_as_5108_);
lean_dec(v___x_5107_);
lean_dec(v_i_5106_);
lean_dec(v___x_5105_);
lean_dec(v_j_5104_);
v_r_5114_ = lean_box(v_res_5113_);
return v_r_5114_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; 
v___x_5117_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1));
v___x_5118_ = lean_unsigned_to_nat(10u);
v___x_5119_ = lean_unsigned_to_nat(425u);
v___x_5120_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5121_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5122_ = l_mkPanicMessageWithDecl(v___x_5121_, v___x_5120_, v___x_5119_, v___x_5118_, v___x_5117_);
return v___x_5122_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
v___x_5124_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3));
v___x_5125_ = lean_unsigned_to_nat(12u);
v___x_5126_ = lean_unsigned_to_nat(433u);
v___x_5127_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5128_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5129_ = l_mkPanicMessageWithDecl(v___x_5128_, v___x_5127_, v___x_5126_, v___x_5125_, v___x_5124_);
return v___x_5129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5130_, lean_object* v_fixedArgs_5131_, lean_object* v_varyingArgs_5132_, lean_object* v_i_5133_, lean_object* v_j_5134_, lean_object* v_xs_5135_){
_start:
{
lean_object* v_lower_5137_; lean_object* v_upper_5138_; lean_object* v___x_5142_; uint8_t v___x_5143_; 
v___x_5142_ = lean_array_get_size(v_perm_5130_);
v___x_5143_ = lean_nat_dec_lt(v_i_5133_, v___x_5142_);
if (v___x_5143_ == 0)
{
lean_object* v___x_5144_; lean_object* v___x_5145_; uint8_t v___x_5146_; 
lean_dec(v_i_5133_);
lean_dec_ref(v_perm_5130_);
v___x_5144_ = lean_unsigned_to_nat(0u);
v___x_5145_ = lean_array_get_size(v_varyingArgs_5132_);
v___x_5146_ = lean_nat_dec_le(v_j_5134_, v___x_5144_);
if (v___x_5146_ == 0)
{
v_lower_5137_ = v_j_5134_;
v_upper_5138_ = v___x_5145_;
goto v___jp_5136_;
}
else
{
lean_dec(v_j_5134_);
v_lower_5137_ = v___x_5144_;
v_upper_5138_ = v___x_5145_;
goto v___jp_5136_;
}
}
else
{
lean_object* v___x_5147_; 
v___x_5147_ = lean_array_fget_borrowed(v_perm_5130_, v_i_5133_);
if (lean_obj_tag(v___x_5147_) == 1)
{
lean_object* v_val_5148_; lean_object* v___x_5149_; uint8_t v___x_5150_; 
v_val_5148_ = lean_ctor_get(v___x_5147_, 0);
v___x_5149_ = lean_array_get_size(v_fixedArgs_5131_);
v___x_5150_ = lean_nat_dec_lt(v_val_5148_, v___x_5149_);
if (v___x_5150_ == 0)
{
lean_object* v___x_5151_; lean_object* v___x_5152_; 
lean_dec_ref(v_xs_5135_);
lean_dec(v_j_5134_);
lean_dec(v_i_5133_);
lean_dec_ref(v_varyingArgs_5132_);
lean_dec_ref(v_perm_5130_);
v___x_5151_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5152_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5151_);
return v___x_5152_;
}
else
{
lean_object* v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; 
v___x_5153_ = lean_unsigned_to_nat(1u);
v___x_5154_ = lean_nat_add(v_i_5133_, v___x_5153_);
lean_dec(v_i_5133_);
v___x_5155_ = lean_array_fget_borrowed(v_fixedArgs_5131_, v_val_5148_);
lean_inc(v___x_5155_);
v___x_5156_ = lean_array_push(v_xs_5135_, v___x_5155_);
v_i_5133_ = v___x_5154_;
v_xs_5135_ = v___x_5156_;
goto _start;
}
}
else
{
lean_object* v___x_5158_; lean_object* v___y_5160_; lean_object* v___y_5161_; lean_object* v___y_5162_; lean_object* v_lower_5170_; lean_object* v_upper_5171_; uint8_t v___x_5179_; 
v___x_5158_ = lean_array_get_size(v_varyingArgs_5132_);
v___x_5179_ = lean_nat_dec_lt(v_j_5134_, v___x_5158_);
if (v___x_5179_ == 0)
{
lean_object* v___x_5180_; uint8_t v___x_5181_; 
lean_dec_ref(v_varyingArgs_5132_);
v___x_5180_ = lean_unsigned_to_nat(0u);
v___x_5181_ = lean_nat_dec_le(v_i_5133_, v___x_5180_);
if (v___x_5181_ == 0)
{
lean_inc(v_i_5133_);
v_lower_5170_ = v_i_5133_;
v_upper_5171_ = v___x_5142_;
goto v___jp_5169_;
}
else
{
v_lower_5170_ = v___x_5180_;
v_upper_5171_ = v___x_5142_;
goto v___jp_5169_;
}
}
else
{
lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5182_ = lean_unsigned_to_nat(1u);
v___x_5183_ = lean_nat_add(v_i_5133_, v___x_5182_);
lean_dec(v_i_5133_);
v___x_5184_ = lean_nat_add(v_j_5134_, v___x_5182_);
v___x_5185_ = lean_array_fget_borrowed(v_varyingArgs_5132_, v_j_5134_);
lean_dec(v_j_5134_);
lean_inc(v___x_5185_);
v___x_5186_ = lean_array_push(v_xs_5135_, v___x_5185_);
v_i_5133_ = v___x_5183_;
v_j_5134_ = v___x_5184_;
v_xs_5135_ = v___x_5186_;
goto _start;
}
v___jp_5159_:
{
uint8_t v___x_5163_; 
v___x_5163_ = lean_nat_dec_lt(v___y_5160_, v___y_5162_);
if (v___x_5163_ == 0)
{
lean_dec(v___y_5162_);
lean_dec_ref(v___y_5161_);
lean_dec(v___y_5160_);
lean_dec(v_j_5134_);
lean_dec(v_i_5133_);
return v_xs_5135_;
}
else
{
size_t v___x_5164_; size_t v___x_5165_; uint8_t v___x_5166_; 
v___x_5164_ = lean_usize_of_nat(v___y_5160_);
lean_dec(v___y_5160_);
v___x_5165_ = lean_usize_of_nat(v___y_5162_);
lean_dec(v___y_5162_);
v___x_5166_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5134_, v___x_5158_, v_i_5133_, v___x_5142_, v___y_5161_, v___x_5164_, v___x_5165_);
lean_dec_ref(v___y_5161_);
lean_dec(v_i_5133_);
lean_dec(v_j_5134_);
if (v___x_5166_ == 0)
{
return v_xs_5135_;
}
else
{
lean_object* v___x_5167_; lean_object* v___x_5168_; 
lean_dec_ref(v_xs_5135_);
v___x_5167_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5168_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5167_);
return v___x_5168_;
}
}
}
v___jp_5169_:
{
lean_object* v___x_5172_; lean_object* v_array_5173_; lean_object* v_start_5174_; lean_object* v_stop_5175_; uint8_t v___x_5176_; 
v___x_5172_ = l_Array_toSubarray___redArg(v_perm_5130_, v_lower_5170_, v_upper_5171_);
v_array_5173_ = lean_ctor_get(v___x_5172_, 0);
lean_inc_ref(v_array_5173_);
v_start_5174_ = lean_ctor_get(v___x_5172_, 1);
lean_inc(v_start_5174_);
v_stop_5175_ = lean_ctor_get(v___x_5172_, 2);
lean_inc(v_stop_5175_);
lean_dec_ref(v___x_5172_);
v___x_5176_ = lean_nat_dec_lt(v_start_5174_, v_stop_5175_);
if (v___x_5176_ == 0)
{
lean_dec(v_stop_5175_);
lean_dec(v_start_5174_);
lean_dec_ref(v_array_5173_);
lean_dec(v_j_5134_);
lean_dec(v_i_5133_);
return v_xs_5135_;
}
else
{
lean_object* v___x_5177_; uint8_t v___x_5178_; 
v___x_5177_ = lean_array_get_size(v_array_5173_);
v___x_5178_ = lean_nat_dec_le(v_stop_5175_, v___x_5177_);
if (v___x_5178_ == 0)
{
lean_dec(v_stop_5175_);
v___y_5160_ = v_start_5174_;
v___y_5161_ = v_array_5173_;
v___y_5162_ = v___x_5177_;
goto v___jp_5159_;
}
else
{
v___y_5160_ = v_start_5174_;
v___y_5161_ = v_array_5173_;
v___y_5162_ = v_stop_5175_;
goto v___jp_5159_;
}
}
}
}
}
v___jp_5136_:
{
lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; 
v___x_5139_ = l_Array_toSubarray___redArg(v_varyingArgs_5132_, v_lower_5137_, v_upper_5138_);
v___x_5140_ = l_Subarray_copy___redArg(v___x_5139_);
v___x_5141_ = l_Array_append___redArg(v_xs_5135_, v___x_5140_);
lean_dec_ref(v___x_5140_);
return v___x_5141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5188_, lean_object* v_fixedArgs_5189_, lean_object* v_varyingArgs_5190_, lean_object* v_i_5191_, lean_object* v_j_5192_, lean_object* v_xs_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5188_, v_fixedArgs_5189_, v_varyingArgs_5190_, v_i_5191_, v_j_5192_, v_xs_5193_);
lean_dec_ref(v_fixedArgs_5189_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5195_, lean_object* v_perm_5196_, lean_object* v_fixedArgs_5197_, lean_object* v_varyingArgs_5198_, lean_object* v_i_5199_, lean_object* v_j_5200_, lean_object* v_xs_5201_){
_start:
{
lean_object* v___x_5202_; 
v___x_5202_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5196_, v_fixedArgs_5197_, v_varyingArgs_5198_, v_i_5199_, v_j_5200_, v_xs_5201_);
return v___x_5202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5203_, lean_object* v_perm_5204_, lean_object* v_fixedArgs_5205_, lean_object* v_varyingArgs_5206_, lean_object* v_i_5207_, lean_object* v_j_5208_, lean_object* v_xs_5209_){
_start:
{
lean_object* v_res_5210_; 
v_res_5210_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5203_, v_perm_5204_, v_fixedArgs_5205_, v_varyingArgs_5206_, v_i_5207_, v_j_5208_, v_xs_5209_);
lean_dec_ref(v_fixedArgs_5205_);
return v_res_5210_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; 
v___x_5213_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1));
v___x_5214_ = lean_unsigned_to_nat(2u);
v___x_5215_ = lean_unsigned_to_nat(416u);
v___x_5216_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0));
v___x_5217_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5218_ = l_mkPanicMessageWithDecl(v___x_5217_, v___x_5216_, v___x_5215_, v___x_5214_, v___x_5213_);
return v___x_5218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5219_, lean_object* v_fixedArgs_5220_, lean_object* v_varyingArgs_5221_){
_start:
{
lean_object* v___x_5222_; lean_object* v___x_5223_; uint8_t v___x_5224_; 
v___x_5222_ = lean_array_get_size(v_fixedArgs_5220_);
v___x_5223_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5219_);
v___x_5224_ = lean_nat_dec_eq(v___x_5222_, v___x_5223_);
lean_dec(v___x_5223_);
if (v___x_5224_ == 0)
{
lean_object* v___x_5225_; lean_object* v___x_5226_; 
lean_dec_ref(v_varyingArgs_5221_);
lean_dec_ref(v_perm_5219_);
v___x_5225_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5226_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5225_);
return v___x_5226_;
}
else
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; 
v___x_5227_ = lean_unsigned_to_nat(0u);
v___x_5228_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5229_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5219_, v_fixedArgs_5220_, v_varyingArgs_5221_, v___x_5227_, v___x_5227_, v___x_5228_);
return v___x_5229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5230_, lean_object* v_fixedArgs_5231_, lean_object* v_varyingArgs_5232_){
_start:
{
lean_object* v_res_5233_; 
v_res_5233_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5230_, v_fixedArgs_5231_, v_varyingArgs_5232_);
lean_dec_ref(v_fixedArgs_5231_);
return v_res_5233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5234_, lean_object* v_perm_5235_, lean_object* v_fixedArgs_5236_, lean_object* v_varyingArgs_5237_){
_start:
{
lean_object* v___x_5238_; 
v___x_5238_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5235_, v_fixedArgs_5236_, v_varyingArgs_5237_);
return v___x_5238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5239_, lean_object* v_perm_5240_, lean_object* v_fixedArgs_5241_, lean_object* v_varyingArgs_5242_){
_start:
{
lean_object* v_res_5243_; 
v_res_5243_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5239_, v_perm_5240_, v_fixedArgs_5241_, v_varyingArgs_5242_);
lean_dec_ref(v_fixedArgs_5241_);
return v_res_5243_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5244_, lean_object* v_x_5245_){
_start:
{
if (lean_obj_tag(v_x_5244_) == 0)
{
if (lean_obj_tag(v_x_5245_) == 0)
{
uint8_t v___x_5246_; 
v___x_5246_ = 1;
return v___x_5246_;
}
else
{
uint8_t v___x_5247_; 
v___x_5247_ = 0;
return v___x_5247_;
}
}
else
{
if (lean_obj_tag(v_x_5245_) == 0)
{
uint8_t v___x_5248_; 
v___x_5248_ = 0;
return v___x_5248_;
}
else
{
lean_object* v_val_5249_; lean_object* v_val_5250_; uint8_t v___x_5251_; 
v_val_5249_ = lean_ctor_get(v_x_5244_, 0);
v_val_5250_ = lean_ctor_get(v_x_5245_, 0);
v___x_5251_ = lean_nat_dec_eq(v_val_5249_, v_val_5250_);
return v___x_5251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5252_, lean_object* v_x_5253_){
_start:
{
uint8_t v_res_5254_; lean_object* v_r_5255_; 
v_res_5254_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5252_, v_x_5253_);
lean_dec(v_x_5253_);
lean_dec(v_x_5252_);
v_r_5255_ = lean_box(v_res_5254_);
return v_r_5255_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5256_, lean_object* v_ys_5257_, lean_object* v_x_5258_){
_start:
{
lean_object* v_zero_5259_; uint8_t v_isZero_5260_; 
v_zero_5259_ = lean_unsigned_to_nat(0u);
v_isZero_5260_ = lean_nat_dec_eq(v_x_5258_, v_zero_5259_);
if (v_isZero_5260_ == 1)
{
lean_dec(v_x_5258_);
return v_isZero_5260_;
}
else
{
lean_object* v_one_5261_; lean_object* v_n_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; uint8_t v___x_5265_; 
v_one_5261_ = lean_unsigned_to_nat(1u);
v_n_5262_ = lean_nat_sub(v_x_5258_, v_one_5261_);
lean_dec(v_x_5258_);
v___x_5263_ = lean_array_fget_borrowed(v_xs_5256_, v_n_5262_);
v___x_5264_ = lean_array_fget_borrowed(v_ys_5257_, v_n_5262_);
v___x_5265_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5263_, v___x_5264_);
if (v___x_5265_ == 0)
{
lean_dec(v_n_5262_);
return v___x_5265_;
}
else
{
v_x_5258_ = v_n_5262_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5267_, lean_object* v_ys_5268_, lean_object* v_x_5269_){
_start:
{
uint8_t v_res_5270_; lean_object* v_r_5271_; 
v_res_5270_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5267_, v_ys_5268_, v_x_5269_);
lean_dec_ref(v_ys_5268_);
lean_dec_ref(v_xs_5267_);
v_r_5271_ = lean_box(v_res_5270_);
return v_r_5271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5272_, size_t v_i_5273_, lean_object* v_bs_5274_){
_start:
{
uint8_t v___x_5275_; 
v___x_5275_ = lean_usize_dec_lt(v_i_5273_, v_sz_5272_);
if (v___x_5275_ == 0)
{
return v_bs_5274_;
}
else
{
lean_object* v_v_5276_; lean_object* v___x_5277_; lean_object* v_bs_x27_5278_; lean_object* v___x_5279_; size_t v___x_5280_; size_t v___x_5281_; lean_object* v___x_5282_; 
v_v_5276_ = lean_array_uget(v_bs_5274_, v_i_5273_);
v___x_5277_ = lean_unsigned_to_nat(0u);
v_bs_x27_5278_ = lean_array_uset(v_bs_5274_, v_i_5273_, v___x_5277_);
v___x_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5279_, 0, v_v_5276_);
v___x_5280_ = ((size_t)1ULL);
v___x_5281_ = lean_usize_add(v_i_5273_, v___x_5280_);
v___x_5282_ = lean_array_uset(v_bs_x27_5278_, v_i_5273_, v___x_5279_);
v_i_5273_ = v___x_5281_;
v_bs_5274_ = v___x_5282_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5284_, lean_object* v_i_5285_, lean_object* v_bs_5286_){
_start:
{
size_t v_sz_boxed_5287_; size_t v_i_boxed_5288_; lean_object* v_res_5289_; 
v_sz_boxed_5287_ = lean_unbox_usize(v_sz_5284_);
lean_dec(v_sz_5284_);
v_i_boxed_5288_ = lean_unbox_usize(v_i_5285_);
lean_dec(v_i_5285_);
v_res_5289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5287_, v_i_boxed_5288_, v_bs_5286_);
return v_res_5289_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5290_, lean_object* v_as_5291_, size_t v_i_5292_, size_t v_stop_5293_){
_start:
{
uint8_t v___x_5294_; 
v___x_5294_ = lean_usize_dec_eq(v_i_5292_, v_stop_5293_);
if (v___x_5294_ == 0)
{
lean_object* v_numFixed_5295_; uint8_t v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; size_t v_sz_5299_; size_t v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; uint8_t v___x_5308_; 
v_numFixed_5295_ = lean_ctor_get(v_fixedParamPerms_5290_, 0);
v___x_5296_ = 1;
v___x_5297_ = lean_array_uget_borrowed(v_as_5291_, v_i_5292_);
lean_inc(v_numFixed_5295_);
v___x_5298_ = l_Array_range(v_numFixed_5295_);
v_sz_5299_ = lean_array_size(v___x_5298_);
v___x_5300_ = ((size_t)0ULL);
v___x_5301_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5299_, v___x_5300_, v___x_5298_);
v___x_5302_ = lean_array_get_size(v___x_5297_);
v___x_5303_ = lean_nat_sub(v___x_5302_, v_numFixed_5295_);
v___x_5304_ = lean_box(0);
v___x_5305_ = lean_mk_array(v___x_5303_, v___x_5304_);
v___x_5306_ = l_Array_append___redArg(v___x_5301_, v___x_5305_);
lean_dec_ref(v___x_5305_);
v___x_5307_ = lean_array_get_size(v___x_5306_);
v___x_5308_ = lean_nat_dec_eq(v___x_5302_, v___x_5307_);
if (v___x_5308_ == 0)
{
lean_dec_ref(v___x_5306_);
lean_dec_ref(v_fixedParamPerms_5290_);
return v___x_5296_;
}
else
{
uint8_t v___x_5309_; 
v___x_5309_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5297_, v___x_5306_, v___x_5302_);
lean_dec_ref(v___x_5306_);
if (v___x_5309_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5290_);
return v___x_5296_;
}
else
{
size_t v___x_5310_; size_t v___x_5311_; 
v___x_5310_ = ((size_t)1ULL);
v___x_5311_ = lean_usize_add(v_i_5292_, v___x_5310_);
v_i_5292_ = v___x_5311_;
goto _start;
}
}
}
else
{
uint8_t v___x_5313_; 
lean_dec_ref(v_fixedParamPerms_5290_);
v___x_5313_ = 0;
return v___x_5313_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5314_, lean_object* v_as_5315_, lean_object* v_i_5316_, lean_object* v_stop_5317_){
_start:
{
size_t v_i_boxed_5318_; size_t v_stop_boxed_5319_; uint8_t v_res_5320_; lean_object* v_r_5321_; 
v_i_boxed_5318_ = lean_unbox_usize(v_i_5316_);
lean_dec(v_i_5316_);
v_stop_boxed_5319_ = lean_unbox_usize(v_stop_5317_);
lean_dec(v_stop_5317_);
v_res_5320_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5314_, v_as_5315_, v_i_boxed_5318_, v_stop_boxed_5319_);
lean_dec_ref(v_as_5315_);
v_r_5321_ = lean_box(v_res_5320_);
return v_r_5321_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5322_){
_start:
{
lean_object* v_perms_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; uint8_t v___x_5326_; 
v_perms_5323_ = lean_ctor_get(v_fixedParamPerms_5322_, 1);
lean_inc_ref(v_perms_5323_);
v___x_5324_ = lean_unsigned_to_nat(0u);
v___x_5325_ = lean_array_get_size(v_perms_5323_);
v___x_5326_ = lean_nat_dec_lt(v___x_5324_, v___x_5325_);
if (v___x_5326_ == 0)
{
uint8_t v___x_5327_; 
lean_dec_ref(v_perms_5323_);
lean_dec_ref(v_fixedParamPerms_5322_);
v___x_5327_ = 1;
return v___x_5327_;
}
else
{
if (v___x_5326_ == 0)
{
lean_dec_ref(v_perms_5323_);
lean_dec_ref(v_fixedParamPerms_5322_);
return v___x_5326_;
}
else
{
size_t v___x_5328_; size_t v___x_5329_; uint8_t v___x_5330_; 
v___x_5328_ = ((size_t)0ULL);
v___x_5329_ = lean_usize_of_nat(v___x_5325_);
v___x_5330_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5322_, v_perms_5323_, v___x_5328_, v___x_5329_);
lean_dec_ref(v_perms_5323_);
if (v___x_5330_ == 0)
{
return v___x_5326_;
}
else
{
uint8_t v___x_5331_; 
v___x_5331_ = 0;
return v___x_5331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5332_){
_start:
{
uint8_t v_res_5333_; lean_object* v_r_5334_; 
v_res_5333_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5332_);
v_r_5334_ = lean_box(v_res_5333_);
return v_r_5334_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5335_, lean_object* v_ys_5336_, lean_object* v_hsz_5337_, lean_object* v_x_5338_, lean_object* v_x_5339_){
_start:
{
uint8_t v___x_5340_; 
v___x_5340_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5335_, v_ys_5336_, v_x_5338_);
return v___x_5340_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5341_, lean_object* v_ys_5342_, lean_object* v_hsz_5343_, lean_object* v_x_5344_, lean_object* v_x_5345_){
_start:
{
uint8_t v_res_5346_; lean_object* v_r_5347_; 
v_res_5346_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5341_, v_ys_5342_, v_hsz_5343_, v_x_5344_, v_x_5345_);
lean_dec_ref(v_ys_5342_);
lean_dec_ref(v_xs_5341_);
v_r_5347_ = lean_box(v_res_5346_);
return v_r_5347_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5348_; lean_object* v___x_5349_; 
v___x_5348_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5349_, 0, v___x_5348_);
lean_ctor_set(v___x_5349_, 1, v___x_5348_);
return v___x_5349_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5350_){
_start:
{
lean_object* v___f_5351_; lean_object* v___f_5352_; lean_object* v___f_5353_; lean_object* v___f_5354_; lean_object* v___f_5355_; lean_object* v___f_5356_; lean_object* v___f_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; 
v___f_5351_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5352_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5353_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5354_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5355_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5356_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5357_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5358_, 0, v___f_5351_);
lean_ctor_set(v___x_5358_, 1, v___f_5352_);
v___x_5359_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5359_, 0, v___x_5358_);
lean_ctor_set(v___x_5359_, 1, v___f_5353_);
lean_ctor_set(v___x_5359_, 2, v___f_5354_);
lean_ctor_set(v___x_5359_, 3, v___f_5355_);
lean_ctor_set(v___x_5359_, 4, v___f_5356_);
v___x_5360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5359_);
lean_ctor_set(v___x_5360_, 1, v___f_5357_);
v___x_5361_ = ((lean_object*)(l_Lean_Elab_instInhabitedFixedParamPerms_default));
v___x_5362_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5363_, 0, v___x_5361_);
lean_ctor_set(v___x_5363_, 1, v___x_5362_);
v___x_5364_ = l_instInhabitedOfMonad___redArg(v___x_5360_, v___x_5363_);
v___x_5365_ = lean_panic_fn_borrowed(v___x_5364_, v_msg_5350_);
lean_dec(v___x_5364_);
return v___x_5365_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5366_; lean_object* v___x_5367_; 
v___x_5366_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5367_, 0, v___x_5366_);
return v___x_5367_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5368_){
_start:
{
lean_object* v___f_5369_; lean_object* v___f_5370_; lean_object* v___f_5371_; lean_object* v___f_5372_; lean_object* v___f_5373_; lean_object* v___f_5374_; lean_object* v___f_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; 
v___f_5369_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5370_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5371_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5372_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5373_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5374_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5375_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5376_, 0, v___f_5369_);
lean_ctor_set(v___x_5376_, 1, v___f_5370_);
v___x_5377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5377_, 0, v___x_5376_);
lean_ctor_set(v___x_5377_, 1, v___f_5371_);
lean_ctor_set(v___x_5377_, 2, v___f_5372_);
lean_ctor_set(v___x_5377_, 3, v___f_5373_);
lean_ctor_set(v___x_5377_, 4, v___f_5374_);
v___x_5378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5378_, 0, v___x_5377_);
lean_ctor_set(v___x_5378_, 1, v___f_5375_);
v___x_5379_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5380_ = l_instInhabitedOfMonad___redArg(v___x_5378_, v___x_5379_);
v___x_5381_ = lean_panic_fn_borrowed(v___x_5380_, v_msg_5368_);
lean_dec(v___x_5380_);
return v___x_5381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5382_, uint8_t v___x_5383_, lean_object* v___x_5384_, lean_object* v___x_5385_, lean_object* v_as_5386_, size_t v_sz_5387_, size_t v_i_5388_, lean_object* v_b_5389_){
_start:
{
lean_object* v_a_5391_; uint8_t v___x_5395_; 
v___x_5395_ = lean_usize_dec_lt(v_i_5388_, v_sz_5387_);
if (v___x_5395_ == 0)
{
return v_b_5389_;
}
else
{
lean_object* v_fst_5396_; lean_object* v_snd_5397_; lean_object* v___x_5399_; uint8_t v_isShared_5400_; uint8_t v_isSharedCheck_5419_; 
v_fst_5396_ = lean_ctor_get(v_b_5389_, 0);
v_snd_5397_ = lean_ctor_get(v_b_5389_, 1);
v_isSharedCheck_5419_ = !lean_is_exclusive(v_b_5389_);
if (v_isSharedCheck_5419_ == 0)
{
v___x_5399_ = v_b_5389_;
v_isShared_5400_ = v_isSharedCheck_5419_;
goto v_resetjp_5398_;
}
else
{
lean_inc(v_snd_5397_);
lean_inc(v_fst_5396_);
lean_dec(v_b_5389_);
v___x_5399_ = lean_box(0);
v_isShared_5400_ = v_isSharedCheck_5419_;
goto v_resetjp_5398_;
}
v_resetjp_5398_:
{
lean_object* v___x_5405_; lean_object* v_a_5406_; lean_object* v___x_5407_; 
v___x_5405_ = lean_box(0);
v_a_5406_ = lean_array_uget_borrowed(v_as_5386_, v_i_5388_);
v___x_5407_ = lean_array_get_borrowed(v___x_5405_, v___x_5382_, v_a_5406_);
if (lean_obj_tag(v___x_5407_) == 1)
{
lean_object* v_val_5408_; uint8_t v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; uint8_t v___x_5412_; 
v_val_5408_ = lean_ctor_get(v___x_5407_, 0);
v___x_5409_ = 0;
v___x_5410_ = lean_box(v___x_5409_);
v___x_5411_ = lean_array_get(v___x_5410_, v_fst_5396_, v_val_5408_);
lean_dec(v___x_5410_);
v___x_5412_ = lean_unbox(v___x_5411_);
lean_dec(v___x_5411_);
if (v___x_5412_ == 0)
{
if (v___x_5383_ == 0)
{
goto v___jp_5401_;
}
else
{
uint8_t v_changed_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; 
lean_del_object(v___x_5399_);
lean_dec(v_snd_5397_);
v_changed_5413_ = lean_nat_dec_eq(v___x_5384_, v___x_5385_);
v___x_5414_ = lean_box(v_changed_5413_);
v___x_5415_ = lean_array_set(v_fst_5396_, v_val_5408_, v___x_5414_);
v___x_5416_ = lean_box(v_changed_5413_);
v___x_5417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5417_, 0, v___x_5415_);
lean_ctor_set(v___x_5417_, 1, v___x_5416_);
v_a_5391_ = v___x_5417_;
goto v___jp_5390_;
}
}
else
{
goto v___jp_5401_;
}
}
else
{
lean_object* v___x_5418_; 
lean_del_object(v___x_5399_);
v___x_5418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5418_, 0, v_fst_5396_);
lean_ctor_set(v___x_5418_, 1, v_snd_5397_);
v_a_5391_ = v___x_5418_;
goto v___jp_5390_;
}
v___jp_5401_:
{
lean_object* v___x_5403_; 
if (v_isShared_5400_ == 0)
{
v___x_5403_ = v___x_5399_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_fst_5396_);
lean_ctor_set(v_reuseFailAlloc_5404_, 1, v_snd_5397_);
v___x_5403_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
v_a_5391_ = v___x_5403_;
goto v___jp_5390_;
}
}
}
}
v___jp_5390_:
{
size_t v___x_5392_; size_t v___x_5393_; 
v___x_5392_ = ((size_t)1ULL);
v___x_5393_ = lean_usize_add(v_i_5388_, v___x_5392_);
v_i_5388_ = v___x_5393_;
v_b_5389_ = v_a_5391_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5420_, lean_object* v___x_5421_, lean_object* v___x_5422_, lean_object* v___x_5423_, lean_object* v_as_5424_, lean_object* v_sz_5425_, lean_object* v_i_5426_, lean_object* v_b_5427_){
_start:
{
uint8_t v___x_7006__boxed_5428_; size_t v_sz_boxed_5429_; size_t v_i_boxed_5430_; lean_object* v_res_5431_; 
v___x_7006__boxed_5428_ = lean_unbox(v___x_5421_);
v_sz_boxed_5429_ = lean_unbox_usize(v_sz_5425_);
lean_dec(v_sz_5425_);
v_i_boxed_5430_ = lean_unbox_usize(v_i_5426_);
lean_dec(v_i_5426_);
v_res_5431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5420_, v___x_7006__boxed_5428_, v___x_5422_, v___x_5423_, v_as_5424_, v_sz_boxed_5429_, v_i_boxed_5430_, v_b_5427_);
lean_dec_ref(v_as_5424_);
lean_dec(v___x_5423_);
lean_dec(v___x_5422_);
lean_dec_ref(v___x_5420_);
return v_res_5431_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(lean_object* v_upperBound_5432_, lean_object* v___x_5433_, lean_object* v_fixedParamPerms_5434_, lean_object* v_next_5435_, lean_object* v___x_5436_, lean_object* v___x_5437_, lean_object* v_a_5438_, lean_object* v_b_5439_){
_start:
{
lean_object* v_a_5441_; uint8_t v___x_5445_; 
v___x_5445_ = lean_nat_dec_lt(v_a_5438_, v_upperBound_5432_);
if (v___x_5445_ == 0)
{
lean_dec(v_a_5438_);
return v_b_5439_;
}
else
{
lean_object* v_fst_5446_; lean_object* v_snd_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5483_; 
v_fst_5446_ = lean_ctor_get(v_b_5439_, 0);
v_snd_5447_ = lean_ctor_get(v_b_5439_, 1);
v_isSharedCheck_5483_ = !lean_is_exclusive(v_b_5439_);
if (v_isSharedCheck_5483_ == 0)
{
v___x_5449_ = v_b_5439_;
v_isShared_5450_ = v_isSharedCheck_5483_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_snd_5447_);
lean_inc(v_fst_5446_);
lean_dec(v_b_5439_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5483_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5451_; 
v___x_5451_ = lean_array_fget_borrowed(v___x_5433_, v_a_5438_);
if (lean_obj_tag(v___x_5451_) == 1)
{
lean_object* v_val_5452_; uint8_t v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; uint8_t v___x_5456_; 
v_val_5452_ = lean_ctor_get(v___x_5451_, 0);
v___x_5453_ = 0;
v___x_5454_ = lean_box(v___x_5453_);
v___x_5455_ = lean_array_get(v___x_5454_, v_fst_5446_, v_val_5452_);
lean_dec(v___x_5454_);
v___x_5456_ = lean_unbox(v___x_5455_);
if (v___x_5456_ == 0)
{
lean_object* v___x_5458_; 
lean_dec(v___x_5455_);
if (v_isShared_5450_ == 0)
{
v___x_5458_ = v___x_5449_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5459_; 
v_reuseFailAlloc_5459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5459_, 0, v_fst_5446_);
lean_ctor_set(v_reuseFailAlloc_5459_, 1, v_snd_5447_);
v___x_5458_ = v_reuseFailAlloc_5459_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
v_a_5441_ = v___x_5458_;
goto v___jp_5440_;
}
}
else
{
lean_object* v_revDeps_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5465_; 
v_revDeps_5460_ = lean_ctor_get(v_fixedParamPerms_5434_, 2);
v___x_5461_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5462_ = lean_array_get_borrowed(v___x_5461_, v_revDeps_5460_, v_next_5435_);
v___x_5463_ = lean_array_get_borrowed(v___x_5461_, v___x_5462_, v_a_5438_);
if (v_isShared_5450_ == 0)
{
v___x_5465_ = v___x_5449_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5479_; 
v_reuseFailAlloc_5479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5479_, 0, v_fst_5446_);
lean_ctor_set(v_reuseFailAlloc_5479_, 1, v_snd_5447_);
v___x_5465_ = v_reuseFailAlloc_5479_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
size_t v_sz_5466_; size_t v___x_5467_; uint8_t v___x_5468_; lean_object* v___x_5469_; lean_object* v_fst_5470_; lean_object* v_snd_5471_; lean_object* v___x_5473_; uint8_t v_isShared_5474_; uint8_t v_isSharedCheck_5478_; 
v_sz_5466_ = lean_array_size(v___x_5463_);
v___x_5467_ = ((size_t)0ULL);
v___x_5468_ = lean_unbox(v___x_5455_);
lean_dec(v___x_5455_);
v___x_5469_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5433_, v___x_5468_, v___x_5436_, v___x_5437_, v___x_5463_, v_sz_5466_, v___x_5467_, v___x_5465_);
v_fst_5470_ = lean_ctor_get(v___x_5469_, 0);
v_snd_5471_ = lean_ctor_get(v___x_5469_, 1);
v_isSharedCheck_5478_ = !lean_is_exclusive(v___x_5469_);
if (v_isSharedCheck_5478_ == 0)
{
v___x_5473_ = v___x_5469_;
v_isShared_5474_ = v_isSharedCheck_5478_;
goto v_resetjp_5472_;
}
else
{
lean_inc(v_snd_5471_);
lean_inc(v_fst_5470_);
lean_dec(v___x_5469_);
v___x_5473_ = lean_box(0);
v_isShared_5474_ = v_isSharedCheck_5478_;
goto v_resetjp_5472_;
}
v_resetjp_5472_:
{
lean_object* v___x_5476_; 
if (v_isShared_5474_ == 0)
{
v___x_5476_ = v___x_5473_;
goto v_reusejp_5475_;
}
else
{
lean_object* v_reuseFailAlloc_5477_; 
v_reuseFailAlloc_5477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5477_, 0, v_fst_5470_);
lean_ctor_set(v_reuseFailAlloc_5477_, 1, v_snd_5471_);
v___x_5476_ = v_reuseFailAlloc_5477_;
goto v_reusejp_5475_;
}
v_reusejp_5475_:
{
v_a_5441_ = v___x_5476_;
goto v___jp_5440_;
}
}
}
}
}
else
{
lean_object* v___x_5481_; 
if (v_isShared_5450_ == 0)
{
v___x_5481_ = v___x_5449_;
goto v_reusejp_5480_;
}
else
{
lean_object* v_reuseFailAlloc_5482_; 
v_reuseFailAlloc_5482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5482_, 0, v_fst_5446_);
lean_ctor_set(v_reuseFailAlloc_5482_, 1, v_snd_5447_);
v___x_5481_ = v_reuseFailAlloc_5482_;
goto v_reusejp_5480_;
}
v_reusejp_5480_:
{
v_a_5441_ = v___x_5481_;
goto v___jp_5440_;
}
}
}
}
v___jp_5440_:
{
lean_object* v___x_5442_; lean_object* v___x_5443_; 
v___x_5442_ = lean_unsigned_to_nat(1u);
v___x_5443_ = lean_nat_add(v_a_5438_, v___x_5442_);
lean_dec(v_a_5438_);
v_a_5438_ = v___x_5443_;
v_b_5439_ = v_a_5441_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg___boxed(lean_object* v_upperBound_5484_, lean_object* v___x_5485_, lean_object* v_fixedParamPerms_5486_, lean_object* v_next_5487_, lean_object* v___x_5488_, lean_object* v___x_5489_, lean_object* v_a_5490_, lean_object* v_b_5491_){
_start:
{
lean_object* v_res_5492_; 
v_res_5492_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(v_upperBound_5484_, v___x_5485_, v_fixedParamPerms_5486_, v_next_5487_, v___x_5488_, v___x_5489_, v_a_5490_, v_b_5491_);
lean_dec(v___x_5489_);
lean_dec(v___x_5488_);
lean_dec(v_next_5487_);
lean_dec_ref(v_fixedParamPerms_5486_);
lean_dec_ref(v___x_5485_);
lean_dec(v_upperBound_5484_);
return v_res_5492_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5493_, lean_object* v___x_5494_, lean_object* v___x_5495_, lean_object* v___x_5496_, lean_object* v_fixedParamPerms_5497_, lean_object* v_next_5498_, lean_object* v_a_5499_, lean_object* v_b_5500_){
_start:
{
lean_object* v_a_5502_; uint8_t v___x_5506_; 
v___x_5506_ = lean_nat_dec_lt(v_a_5499_, v_upperBound_5493_);
if (v___x_5506_ == 0)
{
return v_b_5500_;
}
else
{
lean_object* v_fst_5507_; lean_object* v_snd_5508_; lean_object* v___x_5510_; uint8_t v_isShared_5511_; uint8_t v_isSharedCheck_5544_; 
v_fst_5507_ = lean_ctor_get(v_b_5500_, 0);
v_snd_5508_ = lean_ctor_get(v_b_5500_, 1);
v_isSharedCheck_5544_ = !lean_is_exclusive(v_b_5500_);
if (v_isSharedCheck_5544_ == 0)
{
v___x_5510_ = v_b_5500_;
v_isShared_5511_ = v_isSharedCheck_5544_;
goto v_resetjp_5509_;
}
else
{
lean_inc(v_snd_5508_);
lean_inc(v_fst_5507_);
lean_dec(v_b_5500_);
v___x_5510_ = lean_box(0);
v_isShared_5511_ = v_isSharedCheck_5544_;
goto v_resetjp_5509_;
}
v_resetjp_5509_:
{
lean_object* v___x_5512_; 
v___x_5512_ = lean_array_fget_borrowed(v___x_5494_, v_a_5499_);
if (lean_obj_tag(v___x_5512_) == 1)
{
lean_object* v_val_5513_; uint8_t v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; uint8_t v___x_5517_; 
v_val_5513_ = lean_ctor_get(v___x_5512_, 0);
v___x_5514_ = 0;
v___x_5515_ = lean_box(v___x_5514_);
v___x_5516_ = lean_array_get(v___x_5515_, v_fst_5507_, v_val_5513_);
lean_dec(v___x_5515_);
v___x_5517_ = lean_unbox(v___x_5516_);
if (v___x_5517_ == 0)
{
lean_object* v___x_5519_; 
lean_dec(v___x_5516_);
if (v_isShared_5511_ == 0)
{
v___x_5519_ = v___x_5510_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_fst_5507_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v_snd_5508_);
v___x_5519_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
v_a_5502_ = v___x_5519_;
goto v___jp_5501_;
}
}
else
{
lean_object* v_revDeps_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5526_; 
v_revDeps_5521_ = lean_ctor_get(v_fixedParamPerms_5497_, 2);
v___x_5522_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5523_ = lean_array_get_borrowed(v___x_5522_, v_revDeps_5521_, v_next_5498_);
v___x_5524_ = lean_array_get_borrowed(v___x_5522_, v___x_5523_, v_a_5499_);
if (v_isShared_5511_ == 0)
{
v___x_5526_ = v___x_5510_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v_fst_5507_);
lean_ctor_set(v_reuseFailAlloc_5540_, 1, v_snd_5508_);
v___x_5526_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
size_t v_sz_5527_; size_t v___x_5528_; uint8_t v___x_5529_; lean_object* v___x_5530_; lean_object* v_fst_5531_; lean_object* v_snd_5532_; lean_object* v___x_5534_; uint8_t v_isShared_5535_; uint8_t v_isSharedCheck_5539_; 
v_sz_5527_ = lean_array_size(v___x_5524_);
v___x_5528_ = ((size_t)0ULL);
v___x_5529_ = lean_unbox(v___x_5516_);
lean_dec(v___x_5516_);
v___x_5530_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5494_, v___x_5529_, v___x_5495_, v___x_5496_, v___x_5524_, v_sz_5527_, v___x_5528_, v___x_5526_);
v_fst_5531_ = lean_ctor_get(v___x_5530_, 0);
v_snd_5532_ = lean_ctor_get(v___x_5530_, 1);
v_isSharedCheck_5539_ = !lean_is_exclusive(v___x_5530_);
if (v_isSharedCheck_5539_ == 0)
{
v___x_5534_ = v___x_5530_;
v_isShared_5535_ = v_isSharedCheck_5539_;
goto v_resetjp_5533_;
}
else
{
lean_inc(v_snd_5532_);
lean_inc(v_fst_5531_);
lean_dec(v___x_5530_);
v___x_5534_ = lean_box(0);
v_isShared_5535_ = v_isSharedCheck_5539_;
goto v_resetjp_5533_;
}
v_resetjp_5533_:
{
lean_object* v___x_5537_; 
if (v_isShared_5535_ == 0)
{
v___x_5537_ = v___x_5534_;
goto v_reusejp_5536_;
}
else
{
lean_object* v_reuseFailAlloc_5538_; 
v_reuseFailAlloc_5538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5538_, 0, v_fst_5531_);
lean_ctor_set(v_reuseFailAlloc_5538_, 1, v_snd_5532_);
v___x_5537_ = v_reuseFailAlloc_5538_;
goto v_reusejp_5536_;
}
v_reusejp_5536_:
{
v_a_5502_ = v___x_5537_;
goto v___jp_5501_;
}
}
}
}
}
else
{
lean_object* v___x_5542_; 
if (v_isShared_5511_ == 0)
{
v___x_5542_ = v___x_5510_;
goto v_reusejp_5541_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v_fst_5507_);
lean_ctor_set(v_reuseFailAlloc_5543_, 1, v_snd_5508_);
v___x_5542_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5541_;
}
v_reusejp_5541_:
{
v_a_5502_ = v___x_5542_;
goto v___jp_5501_;
}
}
}
}
v___jp_5501_:
{
lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; 
v___x_5503_ = lean_unsigned_to_nat(1u);
v___x_5504_ = lean_nat_add(v_a_5499_, v___x_5503_);
v___x_5505_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(v_upperBound_5493_, v___x_5494_, v_fixedParamPerms_5497_, v_next_5498_, v___x_5495_, v___x_5496_, v___x_5504_, v_a_5502_);
return v___x_5505_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5545_, lean_object* v___x_5546_, lean_object* v___x_5547_, lean_object* v___x_5548_, lean_object* v_fixedParamPerms_5549_, lean_object* v_next_5550_, lean_object* v_a_5551_, lean_object* v_b_5552_){
_start:
{
lean_object* v_res_5553_; 
v_res_5553_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5545_, v___x_5546_, v___x_5547_, v___x_5548_, v_fixedParamPerms_5549_, v_next_5550_, v_a_5551_, v_b_5552_);
lean_dec(v_a_5551_);
lean_dec(v_next_5550_);
lean_dec_ref(v_fixedParamPerms_5549_);
lean_dec(v___x_5548_);
lean_dec(v___x_5547_);
lean_dec_ref(v___x_5546_);
lean_dec(v_upperBound_5545_);
return v_res_5553_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5554_, lean_object* v___x_5555_, lean_object* v___x_5556_, lean_object* v___x_5557_, lean_object* v_fixedParamPerms_5558_, lean_object* v_a_5559_, lean_object* v_b_5560_){
_start:
{
uint8_t v___x_5561_; 
v___x_5561_ = lean_nat_dec_lt(v_a_5559_, v_upperBound_5554_);
if (v___x_5561_ == 0)
{
lean_dec(v_a_5559_);
return v_b_5560_;
}
else
{
lean_object* v_fst_5562_; lean_object* v_snd_5563_; lean_object* v___x_5565_; uint8_t v_isShared_5566_; uint8_t v_isSharedCheck_5586_; 
v_fst_5562_ = lean_ctor_get(v_b_5560_, 0);
v_snd_5563_ = lean_ctor_get(v_b_5560_, 1);
v_isSharedCheck_5586_ = !lean_is_exclusive(v_b_5560_);
if (v_isSharedCheck_5586_ == 0)
{
v___x_5565_ = v_b_5560_;
v_isShared_5566_ = v_isSharedCheck_5586_;
goto v_resetjp_5564_;
}
else
{
lean_inc(v_snd_5563_);
lean_inc(v_fst_5562_);
lean_dec(v_b_5560_);
v___x_5565_ = lean_box(0);
v_isShared_5566_ = v_isSharedCheck_5586_;
goto v_resetjp_5564_;
}
v_resetjp_5564_:
{
lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5571_; 
v___x_5567_ = lean_array_fget_borrowed(v___x_5555_, v_a_5559_);
v___x_5568_ = lean_array_get_size(v___x_5567_);
v___x_5569_ = lean_unsigned_to_nat(0u);
if (v_isShared_5566_ == 0)
{
v___x_5571_ = v___x_5565_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v_fst_5562_);
lean_ctor_set(v_reuseFailAlloc_5585_, 1, v_snd_5563_);
v___x_5571_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
lean_object* v___x_5572_; lean_object* v_fst_5573_; lean_object* v_snd_5574_; lean_object* v___x_5576_; uint8_t v_isShared_5577_; uint8_t v_isSharedCheck_5584_; 
v___x_5572_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5568_, v___x_5567_, v___x_5556_, v___x_5557_, v_fixedParamPerms_5558_, v_a_5559_, v___x_5569_, v___x_5571_);
v_fst_5573_ = lean_ctor_get(v___x_5572_, 0);
v_snd_5574_ = lean_ctor_get(v___x_5572_, 1);
v_isSharedCheck_5584_ = !lean_is_exclusive(v___x_5572_);
if (v_isSharedCheck_5584_ == 0)
{
v___x_5576_ = v___x_5572_;
v_isShared_5577_ = v_isSharedCheck_5584_;
goto v_resetjp_5575_;
}
else
{
lean_inc(v_snd_5574_);
lean_inc(v_fst_5573_);
lean_dec(v___x_5572_);
v___x_5576_ = lean_box(0);
v_isShared_5577_ = v_isSharedCheck_5584_;
goto v_resetjp_5575_;
}
v_resetjp_5575_:
{
lean_object* v___x_5579_; 
if (v_isShared_5577_ == 0)
{
v___x_5579_ = v___x_5576_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5583_; 
v_reuseFailAlloc_5583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5583_, 0, v_fst_5573_);
lean_ctor_set(v_reuseFailAlloc_5583_, 1, v_snd_5574_);
v___x_5579_ = v_reuseFailAlloc_5583_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5580_ = lean_unsigned_to_nat(1u);
v___x_5581_ = lean_nat_add(v_a_5559_, v___x_5580_);
lean_dec(v_a_5559_);
v_a_5559_ = v___x_5581_;
v_b_5560_ = v___x_5579_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5587_, lean_object* v___x_5588_, lean_object* v___x_5589_, lean_object* v___x_5590_, lean_object* v_fixedParamPerms_5591_, lean_object* v_a_5592_, lean_object* v_b_5593_){
_start:
{
lean_object* v_res_5594_; 
v_res_5594_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5587_, v___x_5588_, v___x_5589_, v___x_5590_, v_fixedParamPerms_5591_, v_a_5592_, v_b_5593_);
lean_dec_ref(v_fixedParamPerms_5591_);
lean_dec(v___x_5590_);
lean_dec(v___x_5589_);
lean_dec_ref(v___x_5588_);
lean_dec(v_upperBound_5587_);
return v_res_5594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object* v___x_5595_, lean_object* v___x_5596_, lean_object* v___x_5597_, lean_object* v_fixedParamPerms_5598_, lean_object* v_a_5599_){
_start:
{
lean_object* v_snd_5600_; uint8_t v___x_5601_; 
v_snd_5600_ = lean_ctor_get(v_a_5599_, 1);
v___x_5601_ = lean_unbox(v_snd_5600_);
if (v___x_5601_ == 0)
{
lean_object* v_fst_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5609_; 
lean_inc(v_snd_5600_);
v_fst_5602_ = lean_ctor_get(v_a_5599_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v_a_5599_);
if (v_isSharedCheck_5609_ == 0)
{
lean_object* v_unused_5610_; 
v_unused_5610_ = lean_ctor_get(v_a_5599_, 1);
lean_dec(v_unused_5610_);
v___x_5604_ = v_a_5599_;
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_fst_5602_);
lean_dec(v_a_5599_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5607_; 
if (v_isShared_5605_ == 0)
{
v___x_5607_ = v___x_5604_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v_fst_5602_);
lean_ctor_set(v_reuseFailAlloc_5608_, 1, v_snd_5600_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
return v___x_5607_;
}
}
}
else
{
lean_object* v_fst_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5632_; 
v_fst_5611_ = lean_ctor_get(v_a_5599_, 0);
v_isSharedCheck_5632_ = !lean_is_exclusive(v_a_5599_);
if (v_isSharedCheck_5632_ == 0)
{
lean_object* v_unused_5633_; 
v_unused_5633_ = lean_ctor_get(v_a_5599_, 1);
lean_dec(v_unused_5633_);
v___x_5613_ = v_a_5599_;
v_isShared_5614_ = v_isSharedCheck_5632_;
goto v_resetjp_5612_;
}
else
{
lean_inc(v_fst_5611_);
lean_dec(v_a_5599_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5632_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
uint8_t v_changed_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5619_; 
v_changed_5615_ = 0;
v___x_5616_ = lean_unsigned_to_nat(0u);
v___x_5617_ = lean_box(v_changed_5615_);
if (v_isShared_5614_ == 0)
{
lean_ctor_set(v___x_5613_, 1, v___x_5617_);
v___x_5619_ = v___x_5613_;
goto v_reusejp_5618_;
}
else
{
lean_object* v_reuseFailAlloc_5631_; 
v_reuseFailAlloc_5631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5631_, 0, v_fst_5611_);
lean_ctor_set(v_reuseFailAlloc_5631_, 1, v___x_5617_);
v___x_5619_ = v_reuseFailAlloc_5631_;
goto v_reusejp_5618_;
}
v_reusejp_5618_:
{
lean_object* v___x_5620_; lean_object* v_fst_5621_; lean_object* v_snd_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5630_; 
v___x_5620_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5595_, v___x_5596_, v___x_5597_, v___x_5595_, v_fixedParamPerms_5598_, v___x_5616_, v___x_5619_);
v_fst_5621_ = lean_ctor_get(v___x_5620_, 0);
v_snd_5622_ = lean_ctor_get(v___x_5620_, 1);
v_isSharedCheck_5630_ = !lean_is_exclusive(v___x_5620_);
if (v_isSharedCheck_5630_ == 0)
{
v___x_5624_ = v___x_5620_;
v_isShared_5625_ = v_isSharedCheck_5630_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_snd_5622_);
lean_inc(v_fst_5621_);
lean_dec(v___x_5620_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5630_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5627_; 
if (v_isShared_5625_ == 0)
{
v___x_5627_ = v___x_5624_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v_fst_5621_);
lean_ctor_set(v_reuseFailAlloc_5629_, 1, v_snd_5622_);
v___x_5627_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
v_a_5599_ = v___x_5627_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object* v___x_5634_, lean_object* v___x_5635_, lean_object* v___x_5636_, lean_object* v_fixedParamPerms_5637_, lean_object* v_a_5638_){
_start:
{
lean_object* v_res_5639_; 
v_res_5639_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_5634_, v___x_5635_, v___x_5636_, v_fixedParamPerms_5637_, v_a_5638_);
lean_dec_ref(v_fixedParamPerms_5637_);
lean_dec(v___x_5636_);
lean_dec_ref(v___x_5635_);
lean_dec(v___x_5634_);
return v_res_5639_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5640_, lean_object* v_a_5641_, lean_object* v_b_5642_){
_start:
{
lean_object* v_a_5644_; uint8_t v___x_5648_; 
v___x_5648_ = lean_nat_dec_lt(v_a_5641_, v_upperBound_5640_);
if (v___x_5648_ == 0)
{
lean_dec(v_a_5641_);
return v_b_5642_;
}
else
{
lean_object* v_snd_5649_; lean_object* v_snd_5650_; lean_object* v_snd_5651_; lean_object* v_snd_5652_; lean_object* v_fst_5653_; lean_object* v___x_5655_; uint8_t v_isShared_5656_; uint8_t v_isSharedCheck_5765_; 
v_snd_5649_ = lean_ctor_get(v_b_5642_, 1);
lean_inc(v_snd_5649_);
v_snd_5650_ = lean_ctor_get(v_snd_5649_, 1);
lean_inc(v_snd_5650_);
v_snd_5651_ = lean_ctor_get(v_snd_5650_, 1);
lean_inc(v_snd_5651_);
v_snd_5652_ = lean_ctor_get(v_snd_5651_, 1);
lean_inc(v_snd_5652_);
v_fst_5653_ = lean_ctor_get(v_b_5642_, 0);
v_isSharedCheck_5765_ = !lean_is_exclusive(v_b_5642_);
if (v_isSharedCheck_5765_ == 0)
{
lean_object* v_unused_5766_; 
v_unused_5766_ = lean_ctor_get(v_b_5642_, 1);
lean_dec(v_unused_5766_);
v___x_5655_ = v_b_5642_;
v_isShared_5656_ = v_isSharedCheck_5765_;
goto v_resetjp_5654_;
}
else
{
lean_inc(v_fst_5653_);
lean_dec(v_b_5642_);
v___x_5655_ = lean_box(0);
v_isShared_5656_ = v_isSharedCheck_5765_;
goto v_resetjp_5654_;
}
v_resetjp_5654_:
{
lean_object* v_fst_5657_; lean_object* v___x_5659_; uint8_t v_isShared_5660_; uint8_t v_isSharedCheck_5763_; 
v_fst_5657_ = lean_ctor_get(v_snd_5649_, 0);
v_isSharedCheck_5763_ = !lean_is_exclusive(v_snd_5649_);
if (v_isSharedCheck_5763_ == 0)
{
lean_object* v_unused_5764_; 
v_unused_5764_ = lean_ctor_get(v_snd_5649_, 1);
lean_dec(v_unused_5764_);
v___x_5659_ = v_snd_5649_;
v_isShared_5660_ = v_isSharedCheck_5763_;
goto v_resetjp_5658_;
}
else
{
lean_inc(v_fst_5657_);
lean_dec(v_snd_5649_);
v___x_5659_ = lean_box(0);
v_isShared_5660_ = v_isSharedCheck_5763_;
goto v_resetjp_5658_;
}
v_resetjp_5658_:
{
lean_object* v_fst_5661_; lean_object* v___x_5663_; uint8_t v_isShared_5664_; uint8_t v_isSharedCheck_5761_; 
v_fst_5661_ = lean_ctor_get(v_snd_5650_, 0);
v_isSharedCheck_5761_ = !lean_is_exclusive(v_snd_5650_);
if (v_isSharedCheck_5761_ == 0)
{
lean_object* v_unused_5762_; 
v_unused_5762_ = lean_ctor_get(v_snd_5650_, 1);
lean_dec(v_unused_5762_);
v___x_5663_ = v_snd_5650_;
v_isShared_5664_ = v_isSharedCheck_5761_;
goto v_resetjp_5662_;
}
else
{
lean_inc(v_fst_5661_);
lean_dec(v_snd_5650_);
v___x_5663_ = lean_box(0);
v_isShared_5664_ = v_isSharedCheck_5761_;
goto v_resetjp_5662_;
}
v_resetjp_5662_:
{
lean_object* v_fst_5665_; lean_object* v___x_5667_; uint8_t v_isShared_5668_; uint8_t v_isSharedCheck_5759_; 
v_fst_5665_ = lean_ctor_get(v_snd_5651_, 0);
v_isSharedCheck_5759_ = !lean_is_exclusive(v_snd_5651_);
if (v_isSharedCheck_5759_ == 0)
{
lean_object* v_unused_5760_; 
v_unused_5760_ = lean_ctor_get(v_snd_5651_, 1);
lean_dec(v_unused_5760_);
v___x_5667_ = v_snd_5651_;
v_isShared_5668_ = v_isSharedCheck_5759_;
goto v_resetjp_5666_;
}
else
{
lean_inc(v_fst_5665_);
lean_dec(v_snd_5651_);
v___x_5667_ = lean_box(0);
v_isShared_5668_ = v_isSharedCheck_5759_;
goto v_resetjp_5666_;
}
v_resetjp_5666_:
{
lean_object* v_array_5669_; lean_object* v_start_5670_; lean_object* v_stop_5671_; uint8_t v___x_5672_; 
v_array_5669_ = lean_ctor_get(v_snd_5652_, 0);
v_start_5670_ = lean_ctor_get(v_snd_5652_, 1);
v_stop_5671_ = lean_ctor_get(v_snd_5652_, 2);
v___x_5672_ = lean_nat_dec_lt(v_start_5670_, v_stop_5671_);
if (v___x_5672_ == 0)
{
lean_object* v___x_5674_; 
lean_dec(v_a_5641_);
if (v_isShared_5668_ == 0)
{
v___x_5674_ = v___x_5667_;
goto v_reusejp_5673_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v_fst_5665_);
lean_ctor_set(v_reuseFailAlloc_5684_, 1, v_snd_5652_);
v___x_5674_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5673_;
}
v_reusejp_5673_:
{
lean_object* v___x_5676_; 
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 1, v___x_5674_);
v___x_5676_ = v___x_5663_;
goto v_reusejp_5675_;
}
else
{
lean_object* v_reuseFailAlloc_5683_; 
v_reuseFailAlloc_5683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5683_, 0, v_fst_5661_);
lean_ctor_set(v_reuseFailAlloc_5683_, 1, v___x_5674_);
v___x_5676_ = v_reuseFailAlloc_5683_;
goto v_reusejp_5675_;
}
v_reusejp_5675_:
{
lean_object* v___x_5678_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5676_);
v___x_5678_ = v___x_5659_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_fst_5657_);
lean_ctor_set(v_reuseFailAlloc_5682_, 1, v___x_5676_);
v___x_5678_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
lean_object* v___x_5680_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5678_);
v___x_5680_ = v___x_5655_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5681_; 
v_reuseFailAlloc_5681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5681_, 0, v_fst_5653_);
lean_ctor_set(v_reuseFailAlloc_5681_, 1, v___x_5678_);
v___x_5680_ = v_reuseFailAlloc_5681_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
return v___x_5680_;
}
}
}
}
}
else
{
lean_object* v___x_5686_; uint8_t v_isShared_5687_; uint8_t v_isSharedCheck_5755_; 
lean_inc(v_stop_5671_);
lean_inc(v_start_5670_);
lean_inc_ref(v_array_5669_);
v_isSharedCheck_5755_ = !lean_is_exclusive(v_snd_5652_);
if (v_isSharedCheck_5755_ == 0)
{
lean_object* v_unused_5756_; lean_object* v_unused_5757_; lean_object* v_unused_5758_; 
v_unused_5756_ = lean_ctor_get(v_snd_5652_, 2);
lean_dec(v_unused_5756_);
v_unused_5757_ = lean_ctor_get(v_snd_5652_, 1);
lean_dec(v_unused_5757_);
v_unused_5758_ = lean_ctor_get(v_snd_5652_, 0);
lean_dec(v_unused_5758_);
v___x_5686_ = v_snd_5652_;
v_isShared_5687_ = v_isSharedCheck_5755_;
goto v_resetjp_5685_;
}
else
{
lean_dec(v_snd_5652_);
v___x_5686_ = lean_box(0);
v_isShared_5687_ = v_isSharedCheck_5755_;
goto v_resetjp_5685_;
}
v_resetjp_5685_:
{
lean_object* v_array_5688_; lean_object* v_start_5689_; lean_object* v_stop_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5695_; 
v_array_5688_ = lean_ctor_get(v_fst_5665_, 0);
v_start_5689_ = lean_ctor_get(v_fst_5665_, 1);
v_stop_5690_ = lean_ctor_get(v_fst_5665_, 2);
v___x_5691_ = lean_array_fget(v_array_5669_, v_start_5670_);
v___x_5692_ = lean_unsigned_to_nat(1u);
v___x_5693_ = lean_nat_add(v_start_5670_, v___x_5692_);
lean_dec(v_start_5670_);
if (v_isShared_5687_ == 0)
{
lean_ctor_set(v___x_5686_, 1, v___x_5693_);
v___x_5695_ = v___x_5686_;
goto v_reusejp_5694_;
}
else
{
lean_object* v_reuseFailAlloc_5754_; 
v_reuseFailAlloc_5754_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5754_, 0, v_array_5669_);
lean_ctor_set(v_reuseFailAlloc_5754_, 1, v___x_5693_);
lean_ctor_set(v_reuseFailAlloc_5754_, 2, v_stop_5671_);
v___x_5695_ = v_reuseFailAlloc_5754_;
goto v_reusejp_5694_;
}
v_reusejp_5694_:
{
uint8_t v___x_5696_; 
v___x_5696_ = lean_nat_dec_lt(v_start_5689_, v_stop_5690_);
if (v___x_5696_ == 0)
{
lean_object* v___x_5698_; 
lean_dec(v___x_5691_);
lean_dec(v_a_5641_);
if (v_isShared_5668_ == 0)
{
lean_ctor_set(v___x_5667_, 1, v___x_5695_);
v___x_5698_ = v___x_5667_;
goto v_reusejp_5697_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v_fst_5665_);
lean_ctor_set(v_reuseFailAlloc_5708_, 1, v___x_5695_);
v___x_5698_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5697_;
}
v_reusejp_5697_:
{
lean_object* v___x_5700_; 
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 1, v___x_5698_);
v___x_5700_ = v___x_5663_;
goto v_reusejp_5699_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v_fst_5661_);
lean_ctor_set(v_reuseFailAlloc_5707_, 1, v___x_5698_);
v___x_5700_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5699_;
}
v_reusejp_5699_:
{
lean_object* v___x_5702_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5700_);
v___x_5702_ = v___x_5659_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v_fst_5657_);
lean_ctor_set(v_reuseFailAlloc_5706_, 1, v___x_5700_);
v___x_5702_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
lean_object* v___x_5704_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5702_);
v___x_5704_ = v___x_5655_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v_fst_5653_);
lean_ctor_set(v_reuseFailAlloc_5705_, 1, v___x_5702_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
}
}
}
else
{
lean_object* v___x_5710_; uint8_t v_isShared_5711_; uint8_t v_isSharedCheck_5750_; 
lean_inc(v_stop_5690_);
lean_inc(v_start_5689_);
lean_inc_ref(v_array_5688_);
v_isSharedCheck_5750_ = !lean_is_exclusive(v_fst_5665_);
if (v_isSharedCheck_5750_ == 0)
{
lean_object* v_unused_5751_; lean_object* v_unused_5752_; lean_object* v_unused_5753_; 
v_unused_5751_ = lean_ctor_get(v_fst_5665_, 2);
lean_dec(v_unused_5751_);
v_unused_5752_ = lean_ctor_get(v_fst_5665_, 1);
lean_dec(v_unused_5752_);
v_unused_5753_ = lean_ctor_get(v_fst_5665_, 0);
lean_dec(v_unused_5753_);
v___x_5710_ = v_fst_5665_;
v_isShared_5711_ = v_isSharedCheck_5750_;
goto v_resetjp_5709_;
}
else
{
lean_dec(v_fst_5665_);
v___x_5710_ = lean_box(0);
v_isShared_5711_ = v_isSharedCheck_5750_;
goto v_resetjp_5709_;
}
v_resetjp_5709_:
{
lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5715_; 
v___x_5712_ = lean_array_fget(v_array_5688_, v_start_5689_);
v___x_5713_ = lean_nat_add(v_start_5689_, v___x_5692_);
lean_dec(v_start_5689_);
if (v_isShared_5711_ == 0)
{
lean_ctor_set(v___x_5710_, 1, v___x_5713_);
v___x_5715_ = v___x_5710_;
goto v_reusejp_5714_;
}
else
{
lean_object* v_reuseFailAlloc_5749_; 
v_reuseFailAlloc_5749_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5749_, 0, v_array_5688_);
lean_ctor_set(v_reuseFailAlloc_5749_, 1, v___x_5713_);
lean_ctor_set(v_reuseFailAlloc_5749_, 2, v_stop_5690_);
v___x_5715_ = v_reuseFailAlloc_5749_;
goto v_reusejp_5714_;
}
v_reusejp_5714_:
{
uint8_t v___x_5716_; 
v___x_5716_ = lean_unbox(v___x_5712_);
lean_dec(v___x_5712_);
if (v___x_5716_ == 0)
{
lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5722_; 
v___x_5717_ = lean_array_get_size(v_fst_5661_);
v___x_5718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5718_, 0, v___x_5717_);
v___x_5719_ = lean_array_push(v_fst_5653_, v___x_5718_);
v___x_5720_ = lean_array_push(v_fst_5661_, v___x_5691_);
if (v_isShared_5668_ == 0)
{
lean_ctor_set(v___x_5667_, 1, v___x_5695_);
lean_ctor_set(v___x_5667_, 0, v___x_5715_);
v___x_5722_ = v___x_5667_;
goto v_reusejp_5721_;
}
else
{
lean_object* v_reuseFailAlloc_5732_; 
v_reuseFailAlloc_5732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5732_, 0, v___x_5715_);
lean_ctor_set(v_reuseFailAlloc_5732_, 1, v___x_5695_);
v___x_5722_ = v_reuseFailAlloc_5732_;
goto v_reusejp_5721_;
}
v_reusejp_5721_:
{
lean_object* v___x_5724_; 
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 1, v___x_5722_);
lean_ctor_set(v___x_5663_, 0, v___x_5720_);
v___x_5724_ = v___x_5663_;
goto v_reusejp_5723_;
}
else
{
lean_object* v_reuseFailAlloc_5731_; 
v_reuseFailAlloc_5731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5731_, 0, v___x_5720_);
lean_ctor_set(v_reuseFailAlloc_5731_, 1, v___x_5722_);
v___x_5724_ = v_reuseFailAlloc_5731_;
goto v_reusejp_5723_;
}
v_reusejp_5723_:
{
lean_object* v___x_5726_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5724_);
v___x_5726_ = v___x_5659_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v_fst_5657_);
lean_ctor_set(v_reuseFailAlloc_5730_, 1, v___x_5724_);
v___x_5726_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
lean_object* v___x_5728_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5726_);
lean_ctor_set(v___x_5655_, 0, v___x_5719_);
v___x_5728_ = v___x_5655_;
goto v_reusejp_5727_;
}
else
{
lean_object* v_reuseFailAlloc_5729_; 
v_reuseFailAlloc_5729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5729_, 0, v___x_5719_);
lean_ctor_set(v_reuseFailAlloc_5729_, 1, v___x_5726_);
v___x_5728_ = v_reuseFailAlloc_5729_;
goto v_reusejp_5727_;
}
v_reusejp_5727_:
{
v_a_5644_ = v___x_5728_;
goto v___jp_5643_;
}
}
}
}
}
else
{
lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5738_; 
v___x_5733_ = lean_box(0);
v___x_5734_ = lean_array_push(v_fst_5653_, v___x_5733_);
v___x_5735_ = l_Lean_Expr_fvarId_x21(v___x_5691_);
lean_dec(v___x_5691_);
v___x_5736_ = lean_array_push(v_fst_5657_, v___x_5735_);
if (v_isShared_5668_ == 0)
{
lean_ctor_set(v___x_5667_, 1, v___x_5695_);
lean_ctor_set(v___x_5667_, 0, v___x_5715_);
v___x_5738_ = v___x_5667_;
goto v_reusejp_5737_;
}
else
{
lean_object* v_reuseFailAlloc_5748_; 
v_reuseFailAlloc_5748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5748_, 0, v___x_5715_);
lean_ctor_set(v_reuseFailAlloc_5748_, 1, v___x_5695_);
v___x_5738_ = v_reuseFailAlloc_5748_;
goto v_reusejp_5737_;
}
v_reusejp_5737_:
{
lean_object* v___x_5740_; 
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 1, v___x_5738_);
v___x_5740_ = v___x_5663_;
goto v_reusejp_5739_;
}
else
{
lean_object* v_reuseFailAlloc_5747_; 
v_reuseFailAlloc_5747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5747_, 0, v_fst_5661_);
lean_ctor_set(v_reuseFailAlloc_5747_, 1, v___x_5738_);
v___x_5740_ = v_reuseFailAlloc_5747_;
goto v_reusejp_5739_;
}
v_reusejp_5739_:
{
lean_object* v___x_5742_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5740_);
lean_ctor_set(v___x_5659_, 0, v___x_5736_);
v___x_5742_ = v___x_5659_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5746_; 
v_reuseFailAlloc_5746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5746_, 0, v___x_5736_);
lean_ctor_set(v_reuseFailAlloc_5746_, 1, v___x_5740_);
v___x_5742_ = v_reuseFailAlloc_5746_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
lean_object* v___x_5744_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5742_);
lean_ctor_set(v___x_5655_, 0, v___x_5734_);
v___x_5744_ = v___x_5655_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v___x_5734_);
lean_ctor_set(v_reuseFailAlloc_5745_, 1, v___x_5742_);
v___x_5744_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
v_a_5644_ = v___x_5744_;
goto v___jp_5643_;
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
v___jp_5643_:
{
lean_object* v___x_5645_; lean_object* v___x_5646_; 
v___x_5645_ = lean_unsigned_to_nat(1u);
v___x_5646_ = lean_nat_add(v_a_5641_, v___x_5645_);
lean_dec(v_a_5641_);
v_a_5641_ = v___x_5646_;
v_b_5642_ = v_a_5644_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5767_, lean_object* v_a_5768_, lean_object* v_b_5769_){
_start:
{
lean_object* v_res_5770_; 
v_res_5770_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5767_, v_a_5768_, v_b_5769_);
lean_dec(v_upperBound_5767_);
return v_res_5770_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5771_, size_t v_i_5772_, size_t v_stop_5773_){
_start:
{
uint8_t v___x_5774_; 
v___x_5774_ = lean_usize_dec_eq(v_i_5772_, v_stop_5773_);
if (v___x_5774_ == 0)
{
lean_object* v___x_5775_; uint8_t v___x_5776_; 
v___x_5775_ = lean_array_uget_borrowed(v_as_5771_, v_i_5772_);
v___x_5776_ = l_Lean_Expr_isFVar(v___x_5775_);
if (v___x_5776_ == 0)
{
uint8_t v___x_5777_; 
v___x_5777_ = 1;
return v___x_5777_;
}
else
{
size_t v___x_5778_; size_t v___x_5779_; 
v___x_5778_ = ((size_t)1ULL);
v___x_5779_ = lean_usize_add(v_i_5772_, v___x_5778_);
v_i_5772_ = v___x_5779_;
goto _start;
}
}
else
{
uint8_t v___x_5781_; 
v___x_5781_ = 0;
return v___x_5781_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5782_, lean_object* v_i_5783_, lean_object* v_stop_5784_){
_start:
{
size_t v_i_boxed_5785_; size_t v_stop_boxed_5786_; uint8_t v_res_5787_; lean_object* v_r_5788_; 
v_i_boxed_5785_ = lean_unbox_usize(v_i_5783_);
lean_dec(v_i_5783_);
v_stop_boxed_5786_ = lean_unbox_usize(v_stop_5784_);
lean_dec(v_stop_5784_);
v_res_5787_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5782_, v_i_boxed_5785_, v_stop_boxed_5786_);
lean_dec_ref(v_as_5782_);
v_r_5788_ = lean_box(v_res_5787_);
return v_r_5788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5789_, size_t v_sz_5790_, size_t v_i_5791_, lean_object* v_bs_5792_){
_start:
{
uint8_t v___x_5793_; 
v___x_5793_ = lean_usize_dec_lt(v_i_5791_, v_sz_5790_);
if (v___x_5793_ == 0)
{
return v_bs_5792_;
}
else
{
lean_object* v_v_5794_; lean_object* v___x_5795_; lean_object* v_bs_x27_5796_; lean_object* v___y_5798_; 
v_v_5794_ = lean_array_uget(v_bs_5792_, v_i_5791_);
v___x_5795_ = lean_unsigned_to_nat(0u);
v_bs_x27_5796_ = lean_array_uset(v_bs_5792_, v_i_5791_, v___x_5795_);
if (lean_obj_tag(v_v_5794_) == 0)
{
v___y_5798_ = v_v_5794_;
goto v___jp_5797_;
}
else
{
lean_object* v_val_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; 
v_val_5803_ = lean_ctor_get(v_v_5794_, 0);
lean_inc(v_val_5803_);
lean_dec_ref_known(v_v_5794_, 1);
v___x_5804_ = lean_box(0);
v___x_5805_ = lean_array_get_borrowed(v___x_5804_, v___x_5789_, v_val_5803_);
lean_dec(v_val_5803_);
lean_inc(v___x_5805_);
v___y_5798_ = v___x_5805_;
goto v___jp_5797_;
}
v___jp_5797_:
{
size_t v___x_5799_; size_t v___x_5800_; lean_object* v___x_5801_; 
v___x_5799_ = ((size_t)1ULL);
v___x_5800_ = lean_usize_add(v_i_5791_, v___x_5799_);
v___x_5801_ = lean_array_uset(v_bs_x27_5796_, v_i_5791_, v___y_5798_);
v_i_5791_ = v___x_5800_;
v_bs_5792_ = v___x_5801_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5806_, lean_object* v_sz_5807_, lean_object* v_i_5808_, lean_object* v_bs_5809_){
_start:
{
size_t v_sz_boxed_5810_; size_t v_i_boxed_5811_; lean_object* v_res_5812_; 
v_sz_boxed_5810_ = lean_unbox_usize(v_sz_5807_);
lean_dec(v_sz_5807_);
v_i_boxed_5811_ = lean_unbox_usize(v_i_5808_);
lean_dec(v_i_5808_);
v_res_5812_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5806_, v_sz_boxed_5810_, v_i_boxed_5811_, v_bs_5809_);
lean_dec_ref(v___x_5806_);
return v_res_5812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5813_, size_t v_sz_5814_, size_t v_i_5815_, lean_object* v_bs_5816_){
_start:
{
uint8_t v___x_5817_; 
v___x_5817_ = lean_usize_dec_lt(v_i_5815_, v_sz_5814_);
if (v___x_5817_ == 0)
{
return v_bs_5816_;
}
else
{
lean_object* v_v_5818_; lean_object* v___x_5819_; lean_object* v_bs_x27_5820_; size_t v_sz_5821_; size_t v___x_5822_; lean_object* v___x_5823_; size_t v___x_5824_; size_t v___x_5825_; lean_object* v___x_5826_; 
v_v_5818_ = lean_array_uget(v_bs_5816_, v_i_5815_);
v___x_5819_ = lean_unsigned_to_nat(0u);
v_bs_x27_5820_ = lean_array_uset(v_bs_5816_, v_i_5815_, v___x_5819_);
v_sz_5821_ = lean_array_size(v_v_5818_);
v___x_5822_ = ((size_t)0ULL);
v___x_5823_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5813_, v_sz_5821_, v___x_5822_, v_v_5818_);
v___x_5824_ = ((size_t)1ULL);
v___x_5825_ = lean_usize_add(v_i_5815_, v___x_5824_);
v___x_5826_ = lean_array_uset(v_bs_x27_5820_, v_i_5815_, v___x_5823_);
v_i_5815_ = v___x_5825_;
v_bs_5816_ = v___x_5826_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5828_, lean_object* v_sz_5829_, lean_object* v_i_5830_, lean_object* v_bs_5831_){
_start:
{
size_t v_sz_boxed_5832_; size_t v_i_boxed_5833_; lean_object* v_res_5834_; 
v_sz_boxed_5832_ = lean_unbox_usize(v_sz_5829_);
lean_dec(v_sz_5829_);
v_i_boxed_5833_ = lean_unbox_usize(v_i_5830_);
lean_dec(v_i_5830_);
v_res_5834_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5828_, v_sz_boxed_5832_, v_i_boxed_5833_, v_bs_5831_);
lean_dec_ref(v___x_5828_);
return v_res_5834_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5837_; lean_object* v___x_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; 
v___x_5837_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1));
v___x_5838_ = lean_unsigned_to_nat(6u);
v___x_5839_ = lean_unsigned_to_nat(463u);
v___x_5840_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5841_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5842_ = l_mkPanicMessageWithDecl(v___x_5841_, v___x_5840_, v___x_5839_, v___x_5838_, v___x_5837_);
return v___x_5842_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5843_, lean_object* v___x_5844_, lean_object* v___x_5845_, lean_object* v_as_5846_, size_t v_sz_5847_, size_t v_i_5848_, lean_object* v_b_5849_){
_start:
{
lean_object* v_a_5851_; uint8_t v___x_5855_; 
v___x_5855_ = lean_usize_dec_lt(v_i_5848_, v_sz_5847_);
if (v___x_5855_ == 0)
{
return v_b_5849_;
}
else
{
lean_object* v_a_5856_; lean_object* v___x_5857_; uint8_t v___x_5858_; 
v_a_5856_ = lean_array_uget_borrowed(v_as_5846_, v_i_5848_);
v___x_5857_ = lean_array_get_size(v___x_5843_);
v___x_5858_ = lean_nat_dec_lt(v_a_5856_, v___x_5857_);
if (v___x_5858_ == 0)
{
lean_object* v___x_5859_; lean_object* v___x_5860_; 
lean_dec_ref(v_b_5849_);
v___x_5859_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5860_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5859_);
if (lean_obj_tag(v___x_5860_) == 0)
{
lean_object* v_a_5861_; 
v_a_5861_ = lean_ctor_get(v___x_5860_, 0);
lean_inc(v_a_5861_);
lean_dec_ref_known(v___x_5860_, 1);
return v_a_5861_;
}
else
{
lean_object* v_a_5862_; 
v_a_5862_ = lean_ctor_get(v___x_5860_, 0);
lean_inc(v_a_5862_);
lean_dec_ref_known(v___x_5860_, 1);
v_a_5851_ = v_a_5862_;
goto v___jp_5850_;
}
}
else
{
lean_object* v___x_5863_; lean_object* v___x_5864_; 
v___x_5863_ = lean_box(0);
v___x_5864_ = lean_array_get_borrowed(v___x_5863_, v___x_5843_, v_a_5856_);
if (lean_obj_tag(v___x_5864_) == 1)
{
lean_object* v_val_5865_; uint8_t v_changed_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; 
v_val_5865_ = lean_ctor_get(v___x_5864_, 0);
v_changed_5866_ = lean_nat_dec_eq(v___x_5844_, v___x_5845_);
v___x_5867_ = lean_box(v_changed_5866_);
v___x_5868_ = lean_array_set(v_b_5849_, v_val_5865_, v___x_5867_);
v_a_5851_ = v___x_5868_;
goto v___jp_5850_;
}
else
{
v_a_5851_ = v_b_5849_;
goto v___jp_5850_;
}
}
}
v___jp_5850_:
{
size_t v___x_5852_; size_t v___x_5853_; 
v___x_5852_ = ((size_t)1ULL);
v___x_5853_ = lean_usize_add(v_i_5848_, v___x_5852_);
v_i_5848_ = v___x_5853_;
v_b_5849_ = v_a_5851_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5869_, lean_object* v___x_5870_, lean_object* v___x_5871_, lean_object* v_as_5872_, lean_object* v_sz_5873_, lean_object* v_i_5874_, lean_object* v_b_5875_){
_start:
{
size_t v_sz_boxed_5876_; size_t v_i_boxed_5877_; lean_object* v_res_5878_; 
v_sz_boxed_5876_ = lean_unbox_usize(v_sz_5873_);
lean_dec(v_sz_5873_);
v_i_boxed_5877_ = lean_unbox_usize(v_i_5874_);
lean_dec(v_i_5874_);
v_res_5878_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5869_, v___x_5870_, v___x_5871_, v_as_5872_, v_sz_boxed_5876_, v_i_boxed_5877_, v_b_5875_);
lean_dec_ref(v_as_5872_);
lean_dec(v___x_5871_);
lean_dec(v___x_5870_);
lean_dec_ref(v___x_5869_);
return v_res_5878_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_5879_, lean_object* v___x_5880_, lean_object* v___x_5881_, lean_object* v_a_5882_, lean_object* v_b_5883_){
_start:
{
uint8_t v___x_5884_; 
v___x_5884_ = lean_nat_dec_lt(v_a_5882_, v_upperBound_5879_);
if (v___x_5884_ == 0)
{
lean_dec(v_a_5882_);
return v_b_5883_;
}
else
{
lean_object* v_snd_5885_; lean_object* v_snd_5886_; lean_object* v_fst_5887_; lean_object* v___x_5889_; uint8_t v_isShared_5890_; uint8_t v_isSharedCheck_5953_; 
v_snd_5885_ = lean_ctor_get(v_b_5883_, 1);
lean_inc(v_snd_5885_);
v_snd_5886_ = lean_ctor_get(v_snd_5885_, 1);
lean_inc(v_snd_5886_);
v_fst_5887_ = lean_ctor_get(v_b_5883_, 0);
v_isSharedCheck_5953_ = !lean_is_exclusive(v_b_5883_);
if (v_isSharedCheck_5953_ == 0)
{
lean_object* v_unused_5954_; 
v_unused_5954_ = lean_ctor_get(v_b_5883_, 1);
lean_dec(v_unused_5954_);
v___x_5889_ = v_b_5883_;
v_isShared_5890_ = v_isSharedCheck_5953_;
goto v_resetjp_5888_;
}
else
{
lean_inc(v_fst_5887_);
lean_dec(v_b_5883_);
v___x_5889_ = lean_box(0);
v_isShared_5890_ = v_isSharedCheck_5953_;
goto v_resetjp_5888_;
}
v_resetjp_5888_:
{
lean_object* v_fst_5891_; lean_object* v___x_5893_; uint8_t v_isShared_5894_; uint8_t v_isSharedCheck_5951_; 
v_fst_5891_ = lean_ctor_get(v_snd_5885_, 0);
v_isSharedCheck_5951_ = !lean_is_exclusive(v_snd_5885_);
if (v_isSharedCheck_5951_ == 0)
{
lean_object* v_unused_5952_; 
v_unused_5952_ = lean_ctor_get(v_snd_5885_, 1);
lean_dec(v_unused_5952_);
v___x_5893_ = v_snd_5885_;
v_isShared_5894_ = v_isSharedCheck_5951_;
goto v_resetjp_5892_;
}
else
{
lean_inc(v_fst_5891_);
lean_dec(v_snd_5885_);
v___x_5893_ = lean_box(0);
v_isShared_5894_ = v_isSharedCheck_5951_;
goto v_resetjp_5892_;
}
v_resetjp_5892_:
{
lean_object* v_array_5895_; lean_object* v_start_5896_; lean_object* v_stop_5897_; uint8_t v___x_5898_; 
v_array_5895_ = lean_ctor_get(v_snd_5886_, 0);
v_start_5896_ = lean_ctor_get(v_snd_5886_, 1);
v_stop_5897_ = lean_ctor_get(v_snd_5886_, 2);
v___x_5898_ = lean_nat_dec_lt(v_start_5896_, v_stop_5897_);
if (v___x_5898_ == 0)
{
lean_object* v___x_5900_; 
lean_dec(v_a_5882_);
if (v_isShared_5894_ == 0)
{
v___x_5900_ = v___x_5893_;
goto v_reusejp_5899_;
}
else
{
lean_object* v_reuseFailAlloc_5904_; 
v_reuseFailAlloc_5904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5904_, 0, v_fst_5891_);
lean_ctor_set(v_reuseFailAlloc_5904_, 1, v_snd_5886_);
v___x_5900_ = v_reuseFailAlloc_5904_;
goto v_reusejp_5899_;
}
v_reusejp_5899_:
{
lean_object* v___x_5902_; 
if (v_isShared_5890_ == 0)
{
lean_ctor_set(v___x_5889_, 1, v___x_5900_);
v___x_5902_ = v___x_5889_;
goto v_reusejp_5901_;
}
else
{
lean_object* v_reuseFailAlloc_5903_; 
v_reuseFailAlloc_5903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5903_, 0, v_fst_5887_);
lean_ctor_set(v_reuseFailAlloc_5903_, 1, v___x_5900_);
v___x_5902_ = v_reuseFailAlloc_5903_;
goto v_reusejp_5901_;
}
v_reusejp_5901_:
{
return v___x_5902_;
}
}
}
else
{
lean_object* v___x_5906_; uint8_t v_isShared_5907_; uint8_t v_isSharedCheck_5947_; 
lean_inc(v_stop_5897_);
lean_inc(v_start_5896_);
lean_inc_ref(v_array_5895_);
v_isSharedCheck_5947_ = !lean_is_exclusive(v_snd_5886_);
if (v_isSharedCheck_5947_ == 0)
{
lean_object* v_unused_5948_; lean_object* v_unused_5949_; lean_object* v_unused_5950_; 
v_unused_5948_ = lean_ctor_get(v_snd_5886_, 2);
lean_dec(v_unused_5948_);
v_unused_5949_ = lean_ctor_get(v_snd_5886_, 1);
lean_dec(v_unused_5949_);
v_unused_5950_ = lean_ctor_get(v_snd_5886_, 0);
lean_dec(v_unused_5950_);
v___x_5906_ = v_snd_5886_;
v_isShared_5907_ = v_isSharedCheck_5947_;
goto v_resetjp_5905_;
}
else
{
lean_dec(v_snd_5886_);
v___x_5906_ = lean_box(0);
v_isShared_5907_ = v_isSharedCheck_5947_;
goto v_resetjp_5905_;
}
v_resetjp_5905_:
{
lean_object* v_array_5908_; lean_object* v_start_5909_; lean_object* v_stop_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5915_; 
v_array_5908_ = lean_ctor_get(v_fst_5891_, 0);
v_start_5909_ = lean_ctor_get(v_fst_5891_, 1);
v_stop_5910_ = lean_ctor_get(v_fst_5891_, 2);
v___x_5911_ = lean_array_fget(v_array_5895_, v_start_5896_);
v___x_5912_ = lean_unsigned_to_nat(1u);
v___x_5913_ = lean_nat_add(v_start_5896_, v___x_5912_);
lean_dec(v_start_5896_);
if (v_isShared_5907_ == 0)
{
lean_ctor_set(v___x_5906_, 1, v___x_5913_);
v___x_5915_ = v___x_5906_;
goto v_reusejp_5914_;
}
else
{
lean_object* v_reuseFailAlloc_5946_; 
v_reuseFailAlloc_5946_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5946_, 0, v_array_5895_);
lean_ctor_set(v_reuseFailAlloc_5946_, 1, v___x_5913_);
lean_ctor_set(v_reuseFailAlloc_5946_, 2, v_stop_5897_);
v___x_5915_ = v_reuseFailAlloc_5946_;
goto v_reusejp_5914_;
}
v_reusejp_5914_:
{
uint8_t v___x_5916_; 
v___x_5916_ = lean_nat_dec_lt(v_start_5909_, v_stop_5910_);
if (v___x_5916_ == 0)
{
lean_object* v___x_5918_; 
lean_dec(v___x_5911_);
lean_dec(v_a_5882_);
if (v_isShared_5894_ == 0)
{
lean_ctor_set(v___x_5893_, 1, v___x_5915_);
v___x_5918_ = v___x_5893_;
goto v_reusejp_5917_;
}
else
{
lean_object* v_reuseFailAlloc_5922_; 
v_reuseFailAlloc_5922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5922_, 0, v_fst_5891_);
lean_ctor_set(v_reuseFailAlloc_5922_, 1, v___x_5915_);
v___x_5918_ = v_reuseFailAlloc_5922_;
goto v_reusejp_5917_;
}
v_reusejp_5917_:
{
lean_object* v___x_5920_; 
if (v_isShared_5890_ == 0)
{
lean_ctor_set(v___x_5889_, 1, v___x_5918_);
v___x_5920_ = v___x_5889_;
goto v_reusejp_5919_;
}
else
{
lean_object* v_reuseFailAlloc_5921_; 
v_reuseFailAlloc_5921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5921_, 0, v_fst_5887_);
lean_ctor_set(v_reuseFailAlloc_5921_, 1, v___x_5918_);
v___x_5920_ = v_reuseFailAlloc_5921_;
goto v_reusejp_5919_;
}
v_reusejp_5919_:
{
return v___x_5920_;
}
}
}
else
{
lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5942_; 
lean_inc(v_stop_5910_);
lean_inc(v_start_5909_);
lean_inc_ref(v_array_5908_);
v_isSharedCheck_5942_ = !lean_is_exclusive(v_fst_5891_);
if (v_isSharedCheck_5942_ == 0)
{
lean_object* v_unused_5943_; lean_object* v_unused_5944_; lean_object* v_unused_5945_; 
v_unused_5943_ = lean_ctor_get(v_fst_5891_, 2);
lean_dec(v_unused_5943_);
v_unused_5944_ = lean_ctor_get(v_fst_5891_, 1);
lean_dec(v_unused_5944_);
v_unused_5945_ = lean_ctor_get(v_fst_5891_, 0);
lean_dec(v_unused_5945_);
v___x_5924_ = v_fst_5891_;
v_isShared_5925_ = v_isSharedCheck_5942_;
goto v_resetjp_5923_;
}
else
{
lean_dec(v_fst_5891_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5942_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5929_; 
v___x_5926_ = lean_array_fget(v_array_5908_, v_start_5909_);
v___x_5927_ = lean_nat_add(v_start_5909_, v___x_5912_);
lean_dec(v_start_5909_);
if (v_isShared_5925_ == 0)
{
lean_ctor_set(v___x_5924_, 1, v___x_5927_);
v___x_5929_ = v___x_5924_;
goto v_reusejp_5928_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_array_5908_);
lean_ctor_set(v_reuseFailAlloc_5941_, 1, v___x_5927_);
lean_ctor_set(v_reuseFailAlloc_5941_, 2, v_stop_5910_);
v___x_5929_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5928_;
}
v_reusejp_5928_:
{
size_t v_sz_5930_; size_t v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5934_; 
v_sz_5930_ = lean_array_size(v___x_5926_);
v___x_5931_ = ((size_t)0ULL);
v___x_5932_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5911_, v___x_5880_, v___x_5881_, v___x_5926_, v_sz_5930_, v___x_5931_, v_fst_5887_);
lean_dec(v___x_5926_);
lean_dec(v___x_5911_);
if (v_isShared_5894_ == 0)
{
lean_ctor_set(v___x_5893_, 1, v___x_5915_);
lean_ctor_set(v___x_5893_, 0, v___x_5929_);
v___x_5934_ = v___x_5893_;
goto v_reusejp_5933_;
}
else
{
lean_object* v_reuseFailAlloc_5940_; 
v_reuseFailAlloc_5940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5940_, 0, v___x_5929_);
lean_ctor_set(v_reuseFailAlloc_5940_, 1, v___x_5915_);
v___x_5934_ = v_reuseFailAlloc_5940_;
goto v_reusejp_5933_;
}
v_reusejp_5933_:
{
lean_object* v___x_5936_; 
if (v_isShared_5890_ == 0)
{
lean_ctor_set(v___x_5889_, 1, v___x_5934_);
lean_ctor_set(v___x_5889_, 0, v___x_5932_);
v___x_5936_ = v___x_5889_;
goto v_reusejp_5935_;
}
else
{
lean_object* v_reuseFailAlloc_5939_; 
v_reuseFailAlloc_5939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5939_, 0, v___x_5932_);
lean_ctor_set(v_reuseFailAlloc_5939_, 1, v___x_5934_);
v___x_5936_ = v_reuseFailAlloc_5939_;
goto v_reusejp_5935_;
}
v_reusejp_5935_:
{
lean_object* v___x_5937_; 
v___x_5937_ = lean_nat_add(v_a_5882_, v___x_5912_);
lean_dec(v_a_5882_);
v_a_5882_ = v___x_5937_;
v_b_5883_ = v___x_5936_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_5955_, lean_object* v___x_5956_, lean_object* v___x_5957_, lean_object* v_a_5958_, lean_object* v_b_5959_){
_start:
{
lean_object* v_res_5960_; 
v_res_5960_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_5955_, v___x_5956_, v___x_5957_, v_a_5958_, v_b_5959_);
lean_dec(v___x_5957_);
lean_dec(v___x_5956_);
lean_dec(v_upperBound_5955_);
return v_res_5960_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; 
v___x_5962_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__0));
v___x_5963_ = lean_unsigned_to_nat(2u);
v___x_5964_ = lean_unsigned_to_nat(457u);
v___x_5965_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5966_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5967_ = l_mkPanicMessageWithDecl(v___x_5966_, v___x_5965_, v___x_5964_, v___x_5963_, v___x_5962_);
return v___x_5967_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; 
v___x_5969_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__2));
v___x_5970_ = lean_unsigned_to_nat(2u);
v___x_5971_ = lean_unsigned_to_nat(458u);
v___x_5972_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5973_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5974_ = l_mkPanicMessageWithDecl(v___x_5973_, v___x_5972_, v___x_5971_, v___x_5970_, v___x_5969_);
return v___x_5974_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; 
v___x_5976_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__4));
v___x_5977_ = lean_unsigned_to_nat(2u);
v___x_5978_ = lean_unsigned_to_nat(456u);
v___x_5979_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5980_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5981_ = l_mkPanicMessageWithDecl(v___x_5980_, v___x_5979_, v___x_5978_, v___x_5977_, v___x_5976_);
return v___x_5981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_5982_, lean_object* v_xs_5983_, lean_object* v_toErase_5984_){
_start:
{
lean_object* v___x_5985_; lean_object* v___x_5986_; uint8_t v___x_6070_; 
v___x_5985_ = lean_unsigned_to_nat(0u);
v___x_5986_ = lean_array_get_size(v_xs_5983_);
v___x_6070_ = lean_nat_dec_lt(v___x_5985_, v___x_5986_);
if (v___x_6070_ == 0)
{
goto v___jp_5987_;
}
else
{
if (v___x_6070_ == 0)
{
goto v___jp_5987_;
}
else
{
size_t v___x_6071_; size_t v___x_6072_; uint8_t v___x_6073_; 
v___x_6071_ = ((size_t)0ULL);
v___x_6072_ = lean_usize_of_nat(v___x_5986_);
v___x_6073_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_5983_, v___x_6071_, v___x_6072_);
if (v___x_6073_ == 0)
{
goto v___jp_5987_;
}
else
{
lean_object* v___x_6074_; lean_object* v___x_6075_; 
lean_dec_ref(v_toErase_5984_);
lean_dec_ref(v_xs_5983_);
lean_dec_ref(v_fixedParamPerms_5982_);
v___x_6074_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6075_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6074_);
return v___x_6075_;
}
}
}
v___jp_5987_:
{
lean_object* v_numFixed_5988_; lean_object* v_perms_5989_; lean_object* v_revDeps_5990_; uint8_t v___x_5991_; 
v_numFixed_5988_ = lean_ctor_get(v_fixedParamPerms_5982_, 0);
v_perms_5989_ = lean_ctor_get(v_fixedParamPerms_5982_, 1);
lean_inc_ref(v_perms_5989_);
v_revDeps_5990_ = lean_ctor_get(v_fixedParamPerms_5982_, 2);
lean_inc_ref(v_revDeps_5990_);
v___x_5991_ = lean_nat_dec_eq(v_numFixed_5988_, v___x_5986_);
if (v___x_5991_ == 0)
{
lean_object* v___x_5992_; lean_object* v___x_5993_; 
lean_dec_ref(v_revDeps_5990_);
lean_dec_ref(v_perms_5989_);
lean_dec_ref(v_toErase_5984_);
lean_dec_ref(v_xs_5983_);
lean_dec_ref(v_fixedParamPerms_5982_);
v___x_5992_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_5993_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_5992_);
return v___x_5993_;
}
else
{
lean_object* v___x_5994_; lean_object* v___x_5995_; uint8_t v_changed_5996_; 
v___x_5994_ = lean_array_get_size(v_toErase_5984_);
v___x_5995_ = lean_array_get_size(v_perms_5989_);
v_changed_5996_ = lean_nat_dec_eq(v___x_5994_, v___x_5995_);
if (v_changed_5996_ == 0)
{
lean_object* v___x_5997_; lean_object* v___x_5998_; 
lean_dec_ref(v_revDeps_5990_);
lean_dec_ref(v_perms_5989_);
lean_dec_ref(v_toErase_5984_);
lean_dec_ref(v_xs_5983_);
lean_dec_ref(v_fixedParamPerms_5982_);
v___x_5997_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_5998_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_5997_);
return v___x_5998_;
}
else
{
uint8_t v_changed_5999_; lean_object* v___x_6000_; lean_object* v_mask_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v_fst_6007_; lean_object* v___x_6009_; uint8_t v_isShared_6010_; uint8_t v_isSharedCheck_6068_; 
v_changed_5999_ = 0;
v___x_6000_ = lean_box(v_changed_5999_);
lean_inc(v_numFixed_5988_);
v_mask_6001_ = lean_mk_array(v_numFixed_5988_, v___x_6000_);
v___x_6002_ = l_Array_toSubarray___redArg(v_toErase_5984_, v___x_5985_, v___x_5994_);
lean_inc_ref(v_perms_5989_);
v___x_6003_ = l_Array_toSubarray___redArg(v_perms_5989_, v___x_5985_, v___x_5995_);
v___x_6004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6004_, 0, v___x_6002_);
lean_ctor_set(v___x_6004_, 1, v___x_6003_);
v___x_6005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6005_, 0, v_mask_6001_);
lean_ctor_set(v___x_6005_, 1, v___x_6004_);
v___x_6006_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_5994_, v___x_5994_, v___x_5995_, v___x_5985_, v___x_6005_);
v_fst_6007_ = lean_ctor_get(v___x_6006_, 0);
v_isSharedCheck_6068_ = !lean_is_exclusive(v___x_6006_);
if (v_isSharedCheck_6068_ == 0)
{
lean_object* v_unused_6069_; 
v_unused_6069_ = lean_ctor_get(v___x_6006_, 1);
lean_dec(v_unused_6069_);
v___x_6009_ = v___x_6006_;
v_isShared_6010_ = v_isSharedCheck_6068_;
goto v_resetjp_6008_;
}
else
{
lean_inc(v_fst_6007_);
lean_dec(v___x_6006_);
v___x_6009_ = lean_box(0);
v_isShared_6010_ = v_isSharedCheck_6068_;
goto v_resetjp_6008_;
}
v_resetjp_6008_:
{
lean_object* v___x_6011_; lean_object* v___x_6013_; 
v___x_6011_ = lean_box(v_changed_5996_);
if (v_isShared_6010_ == 0)
{
lean_ctor_set(v___x_6009_, 1, v___x_6011_);
v___x_6013_ = v___x_6009_;
goto v_reusejp_6012_;
}
else
{
lean_object* v_reuseFailAlloc_6067_; 
v_reuseFailAlloc_6067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6067_, 0, v_fst_6007_);
lean_ctor_set(v_reuseFailAlloc_6067_, 1, v___x_6011_);
v___x_6013_ = v_reuseFailAlloc_6067_;
goto v_reusejp_6012_;
}
v_reusejp_6012_:
{
lean_object* v___x_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6063_; 
v___x_6014_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_5995_, v_perms_5989_, v___x_5994_, v_fixedParamPerms_5982_, v___x_6013_);
v_isSharedCheck_6063_ = !lean_is_exclusive(v_fixedParamPerms_5982_);
if (v_isSharedCheck_6063_ == 0)
{
lean_object* v_unused_6064_; lean_object* v_unused_6065_; lean_object* v_unused_6066_; 
v_unused_6064_ = lean_ctor_get(v_fixedParamPerms_5982_, 2);
lean_dec(v_unused_6064_);
v_unused_6065_ = lean_ctor_get(v_fixedParamPerms_5982_, 1);
lean_dec(v_unused_6065_);
v_unused_6066_ = lean_ctor_get(v_fixedParamPerms_5982_, 0);
lean_dec(v_unused_6066_);
v___x_6016_ = v_fixedParamPerms_5982_;
v_isShared_6017_ = v_isSharedCheck_6063_;
goto v_resetjp_6015_;
}
else
{
lean_dec(v_fixedParamPerms_5982_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6063_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v_fst_6018_; lean_object* v___x_6020_; uint8_t v_isShared_6021_; uint8_t v_isSharedCheck_6061_; 
v_fst_6018_ = lean_ctor_get(v___x_6014_, 0);
v_isSharedCheck_6061_ = !lean_is_exclusive(v___x_6014_);
if (v_isSharedCheck_6061_ == 0)
{
lean_object* v_unused_6062_; 
v_unused_6062_ = lean_ctor_get(v___x_6014_, 1);
lean_dec(v_unused_6062_);
v___x_6020_ = v___x_6014_;
v_isShared_6021_ = v_isSharedCheck_6061_;
goto v_resetjp_6019_;
}
else
{
lean_inc(v_fst_6018_);
lean_dec(v___x_6014_);
v___x_6020_ = lean_box(0);
v_isShared_6021_ = v_isSharedCheck_6061_;
goto v_resetjp_6019_;
}
v_resetjp_6019_:
{
lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6027_; 
v___x_6022_ = lean_array_get_size(v_fst_6018_);
v___x_6023_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_6024_ = l_Array_toSubarray___redArg(v_fst_6018_, v___x_5985_, v___x_6022_);
v___x_6025_ = l_Array_toSubarray___redArg(v_xs_5983_, v___x_5985_, v___x_5986_);
if (v_isShared_6021_ == 0)
{
lean_ctor_set(v___x_6020_, 1, v___x_6025_);
lean_ctor_set(v___x_6020_, 0, v___x_6024_);
v___x_6027_ = v___x_6020_;
goto v_reusejp_6026_;
}
else
{
lean_object* v_reuseFailAlloc_6060_; 
v_reuseFailAlloc_6060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6060_, 0, v___x_6024_);
lean_ctor_set(v_reuseFailAlloc_6060_, 1, v___x_6025_);
v___x_6027_ = v_reuseFailAlloc_6060_;
goto v_reusejp_6026_;
}
v_reusejp_6026_:
{
lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v_snd_6032_; lean_object* v_snd_6033_; lean_object* v_fst_6034_; lean_object* v_fst_6035_; lean_object* v___x_6037_; uint8_t v_isShared_6038_; uint8_t v_isSharedCheck_6058_; 
v___x_6028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6028_, 0, v___x_6023_);
lean_ctor_set(v___x_6028_, 1, v___x_6027_);
v___x_6029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6029_, 0, v___x_6023_);
lean_ctor_set(v___x_6029_, 1, v___x_6028_);
v___x_6030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6023_);
lean_ctor_set(v___x_6030_, 1, v___x_6029_);
v___x_6031_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6022_, v___x_5985_, v___x_6030_);
v_snd_6032_ = lean_ctor_get(v___x_6031_, 1);
lean_inc(v_snd_6032_);
v_snd_6033_ = lean_ctor_get(v_snd_6032_, 1);
lean_inc(v_snd_6033_);
v_fst_6034_ = lean_ctor_get(v___x_6031_, 0);
lean_inc(v_fst_6034_);
lean_dec_ref(v___x_6031_);
v_fst_6035_ = lean_ctor_get(v_snd_6032_, 0);
v_isSharedCheck_6058_ = !lean_is_exclusive(v_snd_6032_);
if (v_isSharedCheck_6058_ == 0)
{
lean_object* v_unused_6059_; 
v_unused_6059_ = lean_ctor_get(v_snd_6032_, 1);
lean_dec(v_unused_6059_);
v___x_6037_ = v_snd_6032_;
v_isShared_6038_ = v_isSharedCheck_6058_;
goto v_resetjp_6036_;
}
else
{
lean_inc(v_fst_6035_);
lean_dec(v_snd_6032_);
v___x_6037_ = lean_box(0);
v_isShared_6038_ = v_isSharedCheck_6058_;
goto v_resetjp_6036_;
}
v_resetjp_6036_:
{
lean_object* v_fst_6039_; lean_object* v___x_6041_; uint8_t v_isShared_6042_; uint8_t v_isSharedCheck_6056_; 
v_fst_6039_ = lean_ctor_get(v_snd_6033_, 0);
v_isSharedCheck_6056_ = !lean_is_exclusive(v_snd_6033_);
if (v_isSharedCheck_6056_ == 0)
{
lean_object* v_unused_6057_; 
v_unused_6057_ = lean_ctor_get(v_snd_6033_, 1);
lean_dec(v_unused_6057_);
v___x_6041_ = v_snd_6033_;
v_isShared_6042_ = v_isSharedCheck_6056_;
goto v_resetjp_6040_;
}
else
{
lean_inc(v_fst_6039_);
lean_dec(v_snd_6033_);
v___x_6041_ = lean_box(0);
v_isShared_6042_ = v_isSharedCheck_6056_;
goto v_resetjp_6040_;
}
v_resetjp_6040_:
{
lean_object* v___x_6043_; size_t v_sz_6044_; size_t v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6048_; 
v___x_6043_ = lean_array_get_size(v_fst_6039_);
v_sz_6044_ = lean_array_size(v_perms_5989_);
v___x_6045_ = ((size_t)0ULL);
v___x_6046_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6034_, v_sz_6044_, v___x_6045_, v_perms_5989_);
lean_dec(v_fst_6034_);
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 1, v___x_6046_);
lean_ctor_set(v___x_6016_, 0, v___x_6043_);
v___x_6048_ = v___x_6016_;
goto v_reusejp_6047_;
}
else
{
lean_object* v_reuseFailAlloc_6055_; 
v_reuseFailAlloc_6055_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6055_, 0, v___x_6043_);
lean_ctor_set(v_reuseFailAlloc_6055_, 1, v___x_6046_);
lean_ctor_set(v_reuseFailAlloc_6055_, 2, v_revDeps_5990_);
v___x_6048_ = v_reuseFailAlloc_6055_;
goto v_reusejp_6047_;
}
v_reusejp_6047_:
{
lean_object* v___x_6050_; 
if (v_isShared_6042_ == 0)
{
lean_ctor_set(v___x_6041_, 1, v_fst_6035_);
v___x_6050_ = v___x_6041_;
goto v_reusejp_6049_;
}
else
{
lean_object* v_reuseFailAlloc_6054_; 
v_reuseFailAlloc_6054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6054_, 0, v_fst_6039_);
lean_ctor_set(v_reuseFailAlloc_6054_, 1, v_fst_6035_);
v___x_6050_ = v_reuseFailAlloc_6054_;
goto v_reusejp_6049_;
}
v_reusejp_6049_:
{
lean_object* v___x_6052_; 
if (v_isShared_6038_ == 0)
{
lean_ctor_set(v___x_6037_, 1, v___x_6050_);
lean_ctor_set(v___x_6037_, 0, v___x_6048_);
v___x_6052_ = v___x_6037_;
goto v_reusejp_6051_;
}
else
{
lean_object* v_reuseFailAlloc_6053_; 
v_reuseFailAlloc_6053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6053_, 0, v___x_6048_);
lean_ctor_set(v_reuseFailAlloc_6053_, 1, v___x_6050_);
v___x_6052_ = v_reuseFailAlloc_6053_;
goto v_reusejp_6051_;
}
v_reusejp_6051_:
{
return v___x_6052_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6076_, lean_object* v___x_6077_, lean_object* v___x_6078_, lean_object* v___x_6079_, lean_object* v_fixedParamPerms_6080_, lean_object* v_next_6081_, lean_object* v_inst_6082_, lean_object* v_R_6083_, lean_object* v_a_6084_, lean_object* v_b_6085_, lean_object* v_c_6086_){
_start:
{
lean_object* v___x_6087_; 
v___x_6087_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6076_, v___x_6077_, v___x_6078_, v___x_6079_, v_fixedParamPerms_6080_, v_next_6081_, v_a_6084_, v_b_6085_);
return v___x_6087_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6088_, lean_object* v___x_6089_, lean_object* v___x_6090_, lean_object* v___x_6091_, lean_object* v_fixedParamPerms_6092_, lean_object* v_next_6093_, lean_object* v_inst_6094_, lean_object* v_R_6095_, lean_object* v_a_6096_, lean_object* v_b_6097_, lean_object* v_c_6098_){
_start:
{
lean_object* v_res_6099_; 
v_res_6099_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6088_, v___x_6089_, v___x_6090_, v___x_6091_, v_fixedParamPerms_6092_, v_next_6093_, v_inst_6094_, v_R_6095_, v_a_6096_, v_b_6097_, v_c_6098_);
lean_dec(v_a_6096_);
lean_dec(v_next_6093_);
lean_dec_ref(v_fixedParamPerms_6092_);
lean_dec(v___x_6091_);
lean_dec(v___x_6090_);
lean_dec_ref(v___x_6089_);
lean_dec(v_upperBound_6088_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6100_, lean_object* v___x_6101_, lean_object* v___x_6102_, lean_object* v___x_6103_, lean_object* v_fixedParamPerms_6104_, lean_object* v_inst_6105_, lean_object* v_R_6106_, lean_object* v_a_6107_, lean_object* v_b_6108_, lean_object* v_c_6109_){
_start:
{
lean_object* v___x_6110_; 
v___x_6110_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6100_, v___x_6101_, v___x_6102_, v___x_6103_, v_fixedParamPerms_6104_, v_a_6107_, v_b_6108_);
return v___x_6110_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6111_, lean_object* v___x_6112_, lean_object* v___x_6113_, lean_object* v___x_6114_, lean_object* v_fixedParamPerms_6115_, lean_object* v_inst_6116_, lean_object* v_R_6117_, lean_object* v_a_6118_, lean_object* v_b_6119_, lean_object* v_c_6120_){
_start:
{
lean_object* v_res_6121_; 
v_res_6121_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6111_, v___x_6112_, v___x_6113_, v___x_6114_, v_fixedParamPerms_6115_, v_inst_6116_, v_R_6117_, v_a_6118_, v_b_6119_, v_c_6120_);
lean_dec_ref(v_fixedParamPerms_6115_);
lean_dec(v___x_6114_);
lean_dec(v___x_6113_);
lean_dec_ref(v___x_6112_);
lean_dec(v_upperBound_6111_);
return v_res_6121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_6122_, lean_object* v___x_6123_, lean_object* v___x_6124_, lean_object* v_fixedParamPerms_6125_, lean_object* v_inst_6126_, lean_object* v_a_6127_){
_start:
{
lean_object* v___x_6128_; 
v___x_6128_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6122_, v___x_6123_, v___x_6124_, v_fixedParamPerms_6125_, v_a_6127_);
return v___x_6128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_6129_, lean_object* v___x_6130_, lean_object* v___x_6131_, lean_object* v_fixedParamPerms_6132_, lean_object* v_inst_6133_, lean_object* v_a_6134_){
_start:
{
lean_object* v_res_6135_; 
v_res_6135_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_6129_, v___x_6130_, v___x_6131_, v_fixedParamPerms_6132_, v_inst_6133_, v_a_6134_);
lean_dec_ref(v_fixedParamPerms_6132_);
lean_dec(v___x_6131_);
lean_dec_ref(v___x_6130_);
lean_dec(v___x_6129_);
return v_res_6135_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6136_, lean_object* v_inst_6137_, lean_object* v_R_6138_, lean_object* v_a_6139_, lean_object* v_b_6140_, lean_object* v_c_6141_){
_start:
{
lean_object* v___x_6142_; 
v___x_6142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6136_, v_a_6139_, v_b_6140_);
return v___x_6142_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6143_, lean_object* v_inst_6144_, lean_object* v_R_6145_, lean_object* v_a_6146_, lean_object* v_b_6147_, lean_object* v_c_6148_){
_start:
{
lean_object* v_res_6149_; 
v_res_6149_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6143_, v_inst_6144_, v_R_6145_, v_a_6146_, v_b_6147_, v_c_6148_);
lean_dec(v_upperBound_6143_);
return v_res_6149_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6150_, lean_object* v___x_6151_, lean_object* v___x_6152_, lean_object* v_inst_6153_, lean_object* v_R_6154_, lean_object* v_a_6155_, lean_object* v_b_6156_, lean_object* v_c_6157_){
_start:
{
lean_object* v___x_6158_; 
v___x_6158_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6150_, v___x_6151_, v___x_6152_, v_a_6155_, v_b_6156_);
return v___x_6158_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6159_, lean_object* v___x_6160_, lean_object* v___x_6161_, lean_object* v_inst_6162_, lean_object* v_R_6163_, lean_object* v_a_6164_, lean_object* v_b_6165_, lean_object* v_c_6166_){
_start:
{
lean_object* v_res_6167_; 
v_res_6167_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6159_, v___x_6160_, v___x_6161_, v_inst_6162_, v_R_6163_, v_a_6164_, v_b_6165_, v_c_6166_);
lean_dec(v___x_6161_);
lean_dec(v___x_6160_);
lean_dec(v_upperBound_6159_);
return v_res_6167_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6(lean_object* v_upperBound_6168_, lean_object* v___x_6169_, lean_object* v_fixedParamPerms_6170_, lean_object* v_next_6171_, lean_object* v___x_6172_, lean_object* v___x_6173_, lean_object* v_inst_6174_, lean_object* v_R_6175_, lean_object* v_a_6176_, lean_object* v_b_6177_, lean_object* v_c_6178_){
_start:
{
lean_object* v___x_6179_; 
v___x_6179_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(v_upperBound_6168_, v___x_6169_, v_fixedParamPerms_6170_, v_next_6171_, v___x_6172_, v___x_6173_, v_a_6176_, v_b_6177_);
return v___x_6179_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___boxed(lean_object* v_upperBound_6180_, lean_object* v___x_6181_, lean_object* v_fixedParamPerms_6182_, lean_object* v_next_6183_, lean_object* v___x_6184_, lean_object* v___x_6185_, lean_object* v_inst_6186_, lean_object* v_R_6187_, lean_object* v_a_6188_, lean_object* v_b_6189_, lean_object* v_c_6190_){
_start:
{
lean_object* v_res_6191_; 
v_res_6191_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6(v_upperBound_6180_, v___x_6181_, v_fixedParamPerms_6182_, v_next_6183_, v___x_6184_, v___x_6185_, v_inst_6186_, v_R_6187_, v_a_6188_, v_b_6189_, v_c_6190_);
lean_dec(v___x_6185_);
lean_dec(v___x_6184_);
lean_dec(v_next_6183_);
lean_dec_ref(v_fixedParamPerms_6182_);
lean_dec_ref(v___x_6181_);
lean_dec(v_upperBound_6180_);
return v_res_6191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6249_; uint8_t v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; 
v___x_6249_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_6250_ = 0;
v___x_6251_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6252_ = l_Lean_registerTraceClass(v___x_6249_, v___x_6250_, v___x_6251_);
return v___x_6252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object* v___y_6253_){
_start:
{
lean_object* v_res_6254_; 
v_res_6254_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
return v_res_6254_;
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
