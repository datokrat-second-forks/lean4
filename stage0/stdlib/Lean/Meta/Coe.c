// Lean compiler output
// Module: Lean.Meta.Coe
// Imports: public import Lean.Meta.AppBuilder import Lean.ExtraModUses import Lean.Meta.WHNF
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArgD(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "coe_decl"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 217, 140, 88, 250, 134, 204, 64)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "auxiliary definition used to implement coercion (unfolded during elaboration)"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coeDeclAttr"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 20, 115, 115, 128, 118, 26, 153)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coeDeclAttr;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 307, .m_capacity = 307, .m_length = 306, .m_data = "Tags declarations to be unfolded during coercion elaboration.\n\nThis is mostly used to hide coercion implementation details and show the coerced result instead of\nan application of auxiliary definitions (e.g. `CoeT.coe`, `Coe.coe`). This attribute only works on\nreducible functions and instance projections."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(215, 70, 184, 182, 52, 50, 221, 222)}};
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 161, 101, 251, 53, 131, 233)}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "CoeDep"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__4_value;
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(50, 156, 153, 72, 131, 30, 13, 212)}};
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(95, 95, 227, 199, 218, 18, 169, 211)}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__5 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_expandCoe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__0_value;
static const lean_closure_object l_Lean_Meta_expandCoe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "autoLift"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(168, 70, 99, 132, 14, 255, 243, 87)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Insert monadic lifts (i.e., `liftM` and coercions) when needed."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(197, 184, 93, 140, 214, 99, 153, 189)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_autoLift;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CoeT"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 80, 89, 153, 124, 3, 255, 77)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Could not coerce"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\ncoerced expression has wrong type:"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "CoeFun"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 94, 101, 78, 118, 25, 69, 111)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to coerce"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "\nto a function: After applying `CoeFun.coe`, result is still not a function"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "This is often due to incorrect `CoeFun` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CoeSort"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(249, 65, 70, 162, 243, 253, 64, 246)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "\nto a type: After applying `CoeSort.coe`, result is still not a type"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "This is often due to incorrect `CoeSort` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MonadLiftT"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 247, 249, 204, 219, 215, 23, 105)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "liftM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 61, 106, 101, 51, 7, 16, 91)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__3_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceMonadLift_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "liftCoeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__8 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(59, 34, 101, 209, 97, 81, 138, 47)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__9 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "coeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__10 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(21, 111, 129, 2, 187, 243, 141, 114)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__11 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_x_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(v_x_7_, v___y_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v_x_7_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; lean_object* v___x_32_; 
v___f_25_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_27_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_28_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_29_ = 0;
v___x_30_ = lean_box(2);
v___x_31_ = 0;
v___x_32_ = l_Lean_registerTagAttribute(v___x_26_, v___x_27_, v___f_25_, v___x_28_, v___x_29_, v___x_30_, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1(){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_38_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0));
v___x_39_ = l_Lean_addBuiltinDocString(v___x_37_, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3(){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6));
v___x_70_ = l_Lean_addBuiltinDeclarationRanges(v___x_68_, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object* v_env_73_, lean_object* v_declName_74_){
_start:
{
lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_75_ = l_Lean_Meta_coeDeclAttr;
v___x_76_ = l_Lean_TagAttribute_hasTag(v___x_75_, v_env_73_, v_declName_74_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object* v_env_77_, lean_object* v_declName_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Meta_isCoeDecl(v_env_77_, v_declName_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object* v_declName_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; lean_object* v_env_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_st_ref_get(v___y_82_);
v_env_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref(v_env_85_);
lean_dec(v___x_84_);
v___x_86_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_85_, v_declName_81_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object* v_declName_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_88_, v___y_89_);
lean_dec(v___y_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object* v_declName_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_92_, v___y_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object* v_declName_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(v_declName_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
return v_res_105_;
}
}
static lean_object* _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_box(0);
v___x_107_ = l_Lean_Expr_sort___override(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object* v_e_108_, lean_object* v_nm_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
lean_inc(v_nm_109_);
v___x_115_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_nm_109_, v_a_113_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_138_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_138_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_138_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_138_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
if (lean_obj_tag(v_a_116_) == 1)
{
lean_object* v_val_120_; lean_object* v_numParams_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_val_120_ = lean_ctor_get(v_a_116_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v_a_116_, 1);
v_numParams_121_ = lean_ctor_get(v_val_120_, 1);
lean_inc(v_numParams_121_);
lean_dec(v_val_120_);
v___x_122_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v___x_123_ = l_Lean_Expr_getAppNumArgs(v_e_108_);
v___x_124_ = lean_nat_sub(v___x_123_, v_numParams_121_);
lean_dec(v_numParams_121_);
lean_dec(v___x_123_);
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_sub(v___x_124_, v___x_125_);
lean_dec(v___x_124_);
v___x_127_ = l_Lean_Expr_getRevArgD(v_e_108_, v___x_126_, v___x_122_);
lean_dec_ref(v_e_108_);
v___x_128_ = l_Lean_Expr_getAppFn(v___x_127_);
v___x_129_ = l_Lean_Expr_isConst(v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_131_; 
lean_dec_ref(v___x_128_);
lean_dec_ref(v___x_127_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v_nm_109_);
v___x_131_ = v___x_118_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_nm_109_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
else
{
lean_object* v___x_133_; 
lean_del_object(v___x_118_);
lean_dec(v_nm_109_);
v___x_133_ = l_Lean_Expr_constName_x21(v___x_128_);
lean_dec_ref(v___x_128_);
v_e_108_ = v___x_127_;
v_nm_109_ = v___x_133_;
goto _start;
}
}
else
{
lean_object* v___x_136_; 
lean_dec(v_a_116_);
lean_dec_ref(v_e_108_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v_nm_109_);
v___x_136_ = v___x_118_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_nm_109_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_nm_109_);
lean_dec_ref(v_e_108_);
v_a_139_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_115_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_115_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object* v_e_147_, lean_object* v_nm_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_147_, v_nm_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object* v_e_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v_e_155_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___y_156_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object* v_e_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Meta_expandCoe___lam__0(v_e_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0(lean_object* v___x_173_, lean_object* v_entry_174_, lean_object* v_s_175_){
_start:
{
lean_object* v_addEntryFn_176_; lean_object* v_importedEntries_177_; lean_object* v_state_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_186_; 
v_addEntryFn_176_ = lean_ctor_get(v___x_173_, 3);
lean_inc(v_addEntryFn_176_);
lean_dec_ref(v___x_173_);
v_importedEntries_177_ = lean_ctor_get(v_s_175_, 0);
v_state_178_ = lean_ctor_get(v_s_175_, 1);
v_isSharedCheck_186_ = !lean_is_exclusive(v_s_175_);
if (v_isSharedCheck_186_ == 0)
{
v___x_180_ = v_s_175_;
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_state_178_);
lean_inc(v_importedEntries_177_);
lean_dec(v_s_175_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v_state_182_; lean_object* v___x_184_; 
v_state_182_ = lean_apply_2(v_addEntryFn_176_, v_state_178_, v_entry_174_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 1, v_state_182_);
v___x_184_ = v___x_180_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_importedEntries_177_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_state_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object* v_msgData_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___x_193_; lean_object* v_env_194_; uint8_t v___x_195_; lean_object* v_env_196_; lean_object* v___x_197_; lean_object* v_toCold_198_; lean_object* v_mctx_199_; lean_object* v_lctx_200_; lean_object* v_options_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_193_ = lean_st_ref_get(v___y_191_);
v_env_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc_ref(v_env_194_);
lean_dec(v___x_193_);
v___x_195_ = 0;
v_env_196_ = l_Lean_Environment_setRecordingDeps(v_env_194_, v___x_195_);
v___x_197_ = lean_st_ref_get(v___y_189_);
v_toCold_198_ = lean_ctor_get(v___y_190_, 0);
v_mctx_199_ = lean_ctor_get(v___x_197_, 0);
lean_inc_ref(v_mctx_199_);
lean_dec(v___x_197_);
v_lctx_200_ = lean_ctor_get(v___y_188_, 2);
v_options_201_ = lean_ctor_get(v_toCold_198_, 2);
lean_inc_ref(v_options_201_);
lean_inc_ref(v_lctx_200_);
v___x_202_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_202_, 0, v_env_196_);
lean_ctor_set(v___x_202_, 1, v_mctx_199_);
lean_ctor_set(v___x_202_, 2, v_lctx_200_);
lean_ctor_set(v___x_202_, 3, v_options_201_);
v___x_203_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v_msgData_187_);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_msgData_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msgData_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
return v_res_211_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_212_; double v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = lean_float_of_nat(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object* v_cls_217_, lean_object* v_msg_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_ref_225_; lean_object* v___x_226_; lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_273_; 
v_ref_225_ = lean_ctor_get(v___y_222_, 2);
v___x_226_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msg_218_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_273_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_273_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_273_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v_traceState_232_; lean_object* v_env_233_; lean_object* v_nextMacroScope_234_; lean_object* v_ngen_235_; lean_object* v_auxDeclNGen_236_; lean_object* v_cache_237_; lean_object* v_recordedDeps_238_; lean_object* v_messages_239_; lean_object* v_infoState_240_; lean_object* v_snapshotTasks_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_272_; 
v___x_231_ = lean_st_ref_take(v___y_223_);
v_traceState_232_ = lean_ctor_get(v___x_231_, 4);
v_env_233_ = lean_ctor_get(v___x_231_, 0);
v_nextMacroScope_234_ = lean_ctor_get(v___x_231_, 1);
v_ngen_235_ = lean_ctor_get(v___x_231_, 2);
v_auxDeclNGen_236_ = lean_ctor_get(v___x_231_, 3);
v_cache_237_ = lean_ctor_get(v___x_231_, 5);
v_recordedDeps_238_ = lean_ctor_get(v___x_231_, 6);
v_messages_239_ = lean_ctor_get(v___x_231_, 7);
v_infoState_240_ = lean_ctor_get(v___x_231_, 8);
v_snapshotTasks_241_ = lean_ctor_get(v___x_231_, 9);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_272_ == 0)
{
v___x_243_ = v___x_231_;
v_isShared_244_ = v_isSharedCheck_272_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_snapshotTasks_241_);
lean_inc(v_infoState_240_);
lean_inc(v_messages_239_);
lean_inc(v_recordedDeps_238_);
lean_inc(v_cache_237_);
lean_inc(v_traceState_232_);
lean_inc(v_auxDeclNGen_236_);
lean_inc(v_ngen_235_);
lean_inc(v_nextMacroScope_234_);
lean_inc(v_env_233_);
lean_dec(v___x_231_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_272_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
uint64_t v_tid_245_; lean_object* v_traces_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_271_; 
v_tid_245_ = lean_ctor_get_uint64(v_traceState_232_, sizeof(void*)*1);
v_traces_246_ = lean_ctor_get(v_traceState_232_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_traceState_232_);
if (v_isSharedCheck_271_ == 0)
{
v___x_248_ = v_traceState_232_;
v_isShared_249_ = v_isSharedCheck_271_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_traces_246_);
lean_dec(v_traceState_232_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_271_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_250_; lean_object* v___x_251_; double v___x_252_; uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
v___x_250_ = lean_box(0);
v___x_251_ = lean_box(0);
v___x_252_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0);
v___x_253_ = 0;
v___x_254_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1));
v___x_255_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_255_, 0, v_cls_217_);
lean_ctor_set(v___x_255_, 1, v___x_251_);
lean_ctor_set(v___x_255_, 2, v___x_254_);
lean_ctor_set_float(v___x_255_, sizeof(void*)*3, v___x_252_);
lean_ctor_set_float(v___x_255_, sizeof(void*)*3 + 8, v___x_252_);
lean_ctor_set_uint8(v___x_255_, sizeof(void*)*3 + 16, v___x_253_);
v___x_256_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2));
v___x_257_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set(v___x_257_, 1, v_a_227_);
lean_ctor_set(v___x_257_, 2, v___x_256_);
lean_inc(v_ref_225_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v_ref_225_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = l_Lean_PersistentArray_push___redArg(v_traces_246_, v___x_258_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 0, v___x_259_);
v___x_261_ = v___x_248_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_259_);
lean_ctor_set_uint64(v_reuseFailAlloc_270_, sizeof(void*)*1, v_tid_245_);
v___x_261_ = v_reuseFailAlloc_270_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_263_; 
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 4, v___x_261_);
v___x_263_ = v___x_243_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_env_233_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_nextMacroScope_234_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v_ngen_235_);
lean_ctor_set(v_reuseFailAlloc_269_, 3, v_auxDeclNGen_236_);
lean_ctor_set(v_reuseFailAlloc_269_, 4, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_269_, 5, v_cache_237_);
lean_ctor_set(v_reuseFailAlloc_269_, 6, v_recordedDeps_238_);
lean_ctor_set(v_reuseFailAlloc_269_, 7, v_messages_239_);
lean_ctor_set(v_reuseFailAlloc_269_, 8, v_infoState_240_);
lean_ctor_set(v_reuseFailAlloc_269_, 9, v_snapshotTasks_241_);
v___x_263_ = v_reuseFailAlloc_269_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_264_ = lean_st_ref_put(v___y_223_, v___x_263_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_250_);
lean_ctor_set(v___x_265_, 1, v___y_219_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_265_);
v___x_267_ = v___x_229_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object* v_cls_274_, lean_object* v_msg_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_cls_274_, v_msg_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
return v_res_282_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_keys_283_, lean_object* v_i_284_, lean_object* v_k_285_){
_start:
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = lean_array_get_size(v_keys_283_);
v___x_287_ = lean_nat_dec_lt(v_i_284_, v___x_286_);
if (v___x_287_ == 0)
{
lean_dec(v_i_284_);
return v___x_287_;
}
else
{
lean_object* v_k_x27_288_; uint8_t v___x_289_; 
v_k_x27_288_ = lean_array_fget_borrowed(v_keys_283_, v_i_284_);
v___x_289_ = l_Lean_instBEqExtraModUse_beq(v_k_285_, v_k_x27_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_add(v_i_284_, v___x_290_);
lean_dec(v_i_284_);
v_i_284_ = v___x_291_;
goto _start;
}
else
{
lean_dec(v_i_284_);
return v___x_287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_keys_293_, lean_object* v_i_294_, lean_object* v_k_295_){
_start:
{
uint8_t v_res_296_; lean_object* v_r_297_; 
v_res_296_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_293_, v_i_294_, v_k_295_);
lean_dec_ref(v_k_295_);
lean_dec_ref(v_keys_293_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_298_, size_t v_x_299_, lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_298_) == 0)
{
lean_object* v_es_301_; lean_object* v___x_302_; size_t v___x_303_; size_t v___x_304_; lean_object* v_j_305_; lean_object* v___x_306_; 
v_es_301_ = lean_ctor_get(v_x_298_, 0);
v___x_302_ = lean_box(2);
v___x_303_ = ((size_t)31ULL);
v___x_304_ = lean_usize_land(v_x_299_, v___x_303_);
v_j_305_ = lean_usize_to_nat(v___x_304_);
v___x_306_ = lean_array_get_borrowed(v___x_302_, v_es_301_, v_j_305_);
lean_dec(v_j_305_);
switch(lean_obj_tag(v___x_306_))
{
case 0:
{
lean_object* v_key_307_; uint8_t v___x_308_; 
v_key_307_ = lean_ctor_get(v___x_306_, 0);
v___x_308_ = l_Lean_instBEqExtraModUse_beq(v_x_300_, v_key_307_);
return v___x_308_;
}
case 1:
{
lean_object* v_node_309_; size_t v___x_310_; size_t v___x_311_; 
v_node_309_ = lean_ctor_get(v___x_306_, 0);
v___x_310_ = ((size_t)5ULL);
v___x_311_ = lean_usize_shift_right(v_x_299_, v___x_310_);
v_x_298_ = v_node_309_;
v_x_299_ = v___x_311_;
goto _start;
}
default: 
{
uint8_t v___x_313_; 
v___x_313_ = 0;
return v___x_313_;
}
}
}
else
{
lean_object* v_ks_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v_ks_314_ = lean_ctor_get(v_x_298_, 0);
v___x_315_ = lean_unsigned_to_nat(0u);
v___x_316_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_ks_314_, v___x_315_, v_x_300_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_317_, lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
size_t v_x_36753__boxed_320_; uint8_t v_res_321_; lean_object* v_r_322_; 
v_x_36753__boxed_320_ = lean_unbox_usize(v_x_318_);
lean_dec(v_x_318_);
v_res_321_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_317_, v_x_36753__boxed_320_, v_x_319_);
lean_dec_ref(v_x_319_);
lean_dec_ref(v_x_317_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
uint64_t v___x_325_; size_t v___x_326_; uint8_t v___x_327_; 
v___x_325_ = l_Lean_instHashableExtraModUse_hash(v_x_324_);
v___x_326_ = lean_uint64_to_usize(v___x_325_);
v___x_327_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_323_, v___x_326_, v_x_324_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_328_, v_x_329_);
lean_dec_ref(v_x_329_);
lean_dec_ref(v_x_328_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_332_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_338_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
lean_ctor_set(v___x_338_, 2, v___x_337_);
lean_ctor_set(v___x_338_, 3, v___x_337_);
lean_ctor_set(v___x_338_, 4, v___x_337_);
lean_ctor_set(v___x_338_, 5, v___x_337_);
lean_ctor_set(v___x_338_, 6, v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_339_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7));
v___x_345_ = l_Lean_stringToMessageData(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9));
v___x_348_ = l_Lean_stringToMessageData(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1));
v___x_350_ = l_Lean_stringToMessageData(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v_cls_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_cls_354_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6));
v___x_355_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13));
v___x_356_ = l_Lean_Name_append(v___x_355_, v_cls_354_);
return v___x_356_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15));
v___x_359_ = l_Lean_stringToMessageData(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17));
v___x_362_ = l_Lean_stringToMessageData(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object* v_mod_367_, uint8_t v_isMeta_368_, lean_object* v_hint_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___y_377_; lean_object* v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v_env_412_; uint8_t v_isExporting_413_; lean_object* v_entry_414_; lean_object* v___x_415_; lean_object* v_env_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_410_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4);
v___x_411_ = lean_st_ref_get(v___y_374_);
v_env_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc_ref(v_env_412_);
lean_dec(v___x_411_);
v_isExporting_413_ = lean_ctor_get_uint8(v_env_412_, sizeof(void*)*13);
lean_dec_ref(v_env_412_);
lean_inc(v_mod_367_);
v_entry_414_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_414_, 0, v_mod_367_);
lean_ctor_set_uint8(v_entry_414_, sizeof(void*)*1, v_isExporting_413_);
lean_ctor_set_uint8(v_entry_414_, sizeof(void*)*1 + 1, v_isMeta_368_);
v___x_415_ = lean_st_ref_get(v___y_374_);
v_env_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_ref(v_env_416_);
lean_dec(v___x_415_);
v___x_417_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_418_ = lean_box(1);
v___x_419_ = lean_box(0);
v___x_420_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_410_, v___x_417_, v_env_416_, v___x_418_, v___x_419_);
v___x_421_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v___x_420_, v_entry_414_);
lean_dec(v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v_toCold_422_; lean_object* v_options_423_; lean_object* v_inheritedTraceOptions_424_; uint8_t v_hasTrace_425_; lean_object* v___f_426_; uint8_t v___x_427_; lean_object* v___y_429_; lean_object* v___y_430_; lean_object* v___y_431_; 
v_toCold_422_ = lean_ctor_get(v___y_373_, 0);
v_options_423_ = lean_ctor_get(v_toCold_422_, 2);
v_inheritedTraceOptions_424_ = lean_ctor_get(v_toCold_422_, 11);
v_hasTrace_425_ = lean_ctor_get_uint8(v_options_423_, sizeof(void*)*1);
v___f_426_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_426_, 0, v___x_417_);
lean_closure_set(v___f_426_, 1, v_entry_414_);
v___x_427_ = 1;
if (v_hasTrace_425_ == 0)
{
lean_dec(v_hint_369_);
lean_dec(v_mod_367_);
v___y_429_ = v___y_370_;
v___y_430_ = v___y_372_;
v___y_431_ = v___y_374_;
goto v___jp_428_;
}
else
{
lean_object* v_cls_458_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_cls_458_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6));
v___x_480_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14);
v___x_481_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_424_, v_options_423_, v___x_480_);
if (v___x_481_ == 0)
{
lean_dec(v_hint_369_);
lean_dec(v_mod_367_);
v___y_429_ = v___y_370_;
v___y_430_ = v___y_372_;
v___y_431_ = v___y_374_;
goto v___jp_428_;
}
else
{
lean_object* v___x_482_; lean_object* v___y_484_; 
v___x_482_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16);
if (v_isExporting_413_ == 0)
{
lean_object* v___x_491_; 
v___x_491_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21));
v___y_484_ = v___x_491_;
goto v___jp_483_;
}
else
{
lean_object* v___x_492_; 
v___x_492_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22));
v___y_484_ = v___x_492_;
goto v___jp_483_;
}
v___jp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
lean_inc_ref(v___y_484_);
v___x_485_ = l_Lean_stringToMessageData(v___y_484_);
v___x_486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_482_);
lean_ctor_set(v___x_486_, 1, v___x_485_);
v___x_487_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18);
v___x_488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_486_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
if (v_isMeta_368_ == 0)
{
lean_object* v___x_489_; 
v___x_489_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19));
v___y_467_ = v___x_488_;
v___y_468_ = v___x_489_;
goto v___jp_466_;
}
else
{
lean_object* v___x_490_; 
v___x_490_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20));
v___y_467_ = v___x_488_;
v___y_468_ = v___x_490_;
goto v___jp_466_;
}
}
}
v___jp_459_:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_462_, 0, v___y_460_);
lean_ctor_set(v___x_462_, 1, v___y_461_);
v___x_463_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_cls_458_, v___x_462_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v_snd_465_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_463_, 1);
v_snd_465_ = lean_ctor_get(v_a_464_, 1);
lean_inc(v_snd_465_);
lean_dec(v_a_464_);
v___y_429_ = v_snd_465_;
v___y_430_ = v___y_372_;
v___y_431_ = v___y_374_;
goto v___jp_428_;
}
else
{
lean_dec_ref(v___f_426_);
return v___x_463_;
}
}
v___jp_466_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
lean_inc_ref(v___y_468_);
v___x_469_ = l_Lean_stringToMessageData(v___y_468_);
v___x_470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_470_, 0, v___y_467_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8);
v___x_472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = l_Lean_MessageData_ofName(v_mod_367_);
v___x_474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = l_Lean_Name_isAnonymous(v_hint_369_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10);
v___x_477_ = l_Lean_MessageData_ofName(v_hint_369_);
v___x_478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___y_460_ = v___x_474_;
v___y_461_ = v___x_478_;
goto v___jp_459_;
}
else
{
lean_object* v___x_479_; 
lean_dec(v_hint_369_);
v___x_479_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11);
v___y_460_ = v___x_474_;
v___y_461_ = v___x_479_;
goto v___jp_459_;
}
}
}
v___jp_428_:
{
lean_object* v___x_432_; lean_object* v_toEnvExtension_433_; uint8_t v_logWrites_434_; 
v___x_432_ = lean_st_ref_take(v___y_431_);
v_toEnvExtension_433_ = lean_ctor_get(v___x_417_, 0);
v_logWrites_434_ = lean_ctor_get_uint8(v_toEnvExtension_433_, sizeof(void*)*6);
if (v_logWrites_434_ == 0)
{
lean_object* v_env_435_; lean_object* v_nextMacroScope_436_; lean_object* v_ngen_437_; lean_object* v_auxDeclNGen_438_; lean_object* v_traceState_439_; lean_object* v_recordedDeps_440_; lean_object* v_messages_441_; lean_object* v_infoState_442_; lean_object* v_snapshotTasks_443_; lean_object* v_asyncMode_444_; lean_object* v___x_445_; 
v_env_435_ = lean_ctor_get(v___x_432_, 0);
lean_inc_ref(v_env_435_);
v_nextMacroScope_436_ = lean_ctor_get(v___x_432_, 1);
lean_inc(v_nextMacroScope_436_);
v_ngen_437_ = lean_ctor_get(v___x_432_, 2);
lean_inc_ref(v_ngen_437_);
v_auxDeclNGen_438_ = lean_ctor_get(v___x_432_, 3);
lean_inc_ref(v_auxDeclNGen_438_);
v_traceState_439_ = lean_ctor_get(v___x_432_, 4);
lean_inc_ref(v_traceState_439_);
v_recordedDeps_440_ = lean_ctor_get(v___x_432_, 6);
lean_inc_ref(v_recordedDeps_440_);
v_messages_441_ = lean_ctor_get(v___x_432_, 7);
lean_inc_ref(v_messages_441_);
v_infoState_442_ = lean_ctor_get(v___x_432_, 8);
lean_inc_ref(v_infoState_442_);
v_snapshotTasks_443_ = lean_ctor_get(v___x_432_, 9);
lean_inc_ref(v_snapshotTasks_443_);
lean_dec(v___x_432_);
v_asyncMode_444_ = lean_ctor_get(v_toEnvExtension_433_, 2);
lean_inc_ref(v_toEnvExtension_433_);
v___x_445_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_433_, v_env_435_, v___f_426_, v_asyncMode_444_, v___x_419_, v___x_427_);
v___y_377_ = v_recordedDeps_440_;
v___y_378_ = v___y_429_;
v___y_379_ = v___y_430_;
v___y_380_ = v_auxDeclNGen_438_;
v___y_381_ = v_messages_441_;
v___y_382_ = v_infoState_442_;
v___y_383_ = v___y_431_;
v___y_384_ = v_ngen_437_;
v___y_385_ = v_nextMacroScope_436_;
v___y_386_ = v_snapshotTasks_443_;
v___y_387_ = v_traceState_439_;
v___y_388_ = v___x_445_;
goto v___jp_376_;
}
else
{
lean_object* v_env_446_; lean_object* v_nextMacroScope_447_; lean_object* v_ngen_448_; lean_object* v_auxDeclNGen_449_; lean_object* v_traceState_450_; lean_object* v_recordedDeps_451_; lean_object* v_messages_452_; lean_object* v_infoState_453_; lean_object* v_snapshotTasks_454_; lean_object* v_asyncMode_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_env_446_ = lean_ctor_get(v___x_432_, 0);
lean_inc_ref(v_env_446_);
v_nextMacroScope_447_ = lean_ctor_get(v___x_432_, 1);
lean_inc(v_nextMacroScope_447_);
v_ngen_448_ = lean_ctor_get(v___x_432_, 2);
lean_inc_ref(v_ngen_448_);
v_auxDeclNGen_449_ = lean_ctor_get(v___x_432_, 3);
lean_inc_ref(v_auxDeclNGen_449_);
v_traceState_450_ = lean_ctor_get(v___x_432_, 4);
lean_inc_ref(v_traceState_450_);
v_recordedDeps_451_ = lean_ctor_get(v___x_432_, 6);
lean_inc_ref(v_recordedDeps_451_);
v_messages_452_ = lean_ctor_get(v___x_432_, 7);
lean_inc_ref(v_messages_452_);
v_infoState_453_ = lean_ctor_get(v___x_432_, 8);
lean_inc_ref(v_infoState_453_);
v_snapshotTasks_454_ = lean_ctor_get(v___x_432_, 9);
lean_inc_ref(v_snapshotTasks_454_);
lean_dec(v___x_432_);
v_asyncMode_455_ = lean_ctor_get(v_toEnvExtension_433_, 2);
lean_inc_ref_n(v_toEnvExtension_433_, 2);
v___x_456_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_433_, v_env_446_);
lean_dec_ref(v_env_446_);
v___x_457_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_433_, v___x_456_, v___f_426_, v_asyncMode_455_, v___x_419_, v___x_427_);
v___y_377_ = v_recordedDeps_451_;
v___y_378_ = v___y_429_;
v___y_379_ = v___y_430_;
v___y_380_ = v_auxDeclNGen_449_;
v___y_381_ = v_messages_452_;
v___y_382_ = v_infoState_453_;
v___y_383_ = v___y_431_;
v___y_384_ = v_ngen_448_;
v___y_385_ = v_nextMacroScope_447_;
v___y_386_ = v_snapshotTasks_454_;
v___y_387_ = v_traceState_450_;
v___y_388_ = v___x_457_;
goto v___jp_376_;
}
}
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
lean_dec_ref_known(v_entry_414_, 1);
lean_dec(v_hint_369_);
lean_dec(v_mod_367_);
v___x_493_ = lean_box(0);
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
lean_ctor_set(v___x_494_, 1, v___y_370_);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
v___jp_376_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_mctx_393_; lean_object* v_zetaDeltaFVarIds_394_; lean_object* v_postponed_395_; lean_object* v_diag_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_408_; 
v___x_389_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
v___x_390_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_390_, 0, v___y_388_);
lean_ctor_set(v___x_390_, 1, v___y_385_);
lean_ctor_set(v___x_390_, 2, v___y_384_);
lean_ctor_set(v___x_390_, 3, v___y_380_);
lean_ctor_set(v___x_390_, 4, v___y_387_);
lean_ctor_set(v___x_390_, 5, v___x_389_);
lean_ctor_set(v___x_390_, 6, v___y_377_);
lean_ctor_set(v___x_390_, 7, v___y_381_);
lean_ctor_set(v___x_390_, 8, v___y_382_);
lean_ctor_set(v___x_390_, 9, v___y_386_);
v___x_391_ = lean_st_ref_put(v___y_383_, v___x_390_);
v___x_392_ = lean_st_ref_take(v___y_379_);
v_mctx_393_ = lean_ctor_get(v___x_392_, 0);
v_zetaDeltaFVarIds_394_ = lean_ctor_get(v___x_392_, 2);
v_postponed_395_ = lean_ctor_get(v___x_392_, 3);
v_diag_396_ = lean_ctor_get(v___x_392_, 4);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_392_, 1);
lean_dec(v_unused_409_);
v___x_398_ = v___x_392_;
v_isShared_399_ = v_isSharedCheck_408_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_diag_396_);
lean_inc(v_postponed_395_);
lean_inc(v_zetaDeltaFVarIds_394_);
lean_inc(v_mctx_393_);
lean_dec(v___x_392_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_408_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_400_ = lean_box(0);
v___x_401_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v___x_401_);
v___x_403_ = v___x_398_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_mctx_393_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___x_401_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_zetaDeltaFVarIds_394_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_postponed_395_);
lean_ctor_set(v_reuseFailAlloc_407_, 4, v_diag_396_);
v___x_403_ = v_reuseFailAlloc_407_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_st_ref_put(v___y_379_, v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_400_);
lean_ctor_set(v___x_405_, 1, v___y_378_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object* v_mod_496_, lean_object* v_isMeta_497_, lean_object* v_hint_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
uint8_t v_isMeta_boxed_505_; lean_object* v_res_506_; 
v_isMeta_boxed_505_ = lean_unbox(v_isMeta_497_);
v_res_506_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_mod_496_, v_isMeta_boxed_505_, v_hint_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(lean_object* v_a_507_, lean_object* v_x_508_){
_start:
{
if (lean_obj_tag(v_x_508_) == 0)
{
lean_object* v___x_509_; 
v___x_509_ = lean_box(0);
return v___x_509_;
}
else
{
lean_object* v_key_510_; lean_object* v_value_511_; lean_object* v_tail_512_; uint8_t v___x_513_; 
v_key_510_ = lean_ctor_get(v_x_508_, 0);
v_value_511_ = lean_ctor_get(v_x_508_, 1);
v_tail_512_ = lean_ctor_get(v_x_508_, 2);
v___x_513_ = lean_name_eq(v_key_510_, v_a_507_);
if (v___x_513_ == 0)
{
v_x_508_ = v_tail_512_;
goto _start;
}
else
{
lean_object* v___x_515_; 
lean_inc(v_value_511_);
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v_value_511_);
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_516_, lean_object* v_x_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_516_, v_x_517_);
lean_dec(v_x_517_);
lean_dec(v_a_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object* v_m_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_buckets_521_; lean_object* v___x_522_; uint64_t v___y_524_; 
v_buckets_521_ = lean_ctor_get(v_m_519_, 1);
v___x_522_ = lean_array_get_size(v_buckets_521_);
if (lean_obj_tag(v_a_520_) == 0)
{
uint64_t v___x_538_; 
v___x_538_ = 1723ULL;
v___y_524_ = v___x_538_;
goto v___jp_523_;
}
else
{
uint64_t v_hash_539_; 
v_hash_539_ = lean_ctor_get_uint64(v_a_520_, sizeof(void*)*2);
v___y_524_ = v_hash_539_;
goto v___jp_523_;
}
v___jp_523_:
{
uint64_t v___x_525_; uint64_t v___x_526_; uint64_t v_fold_527_; uint64_t v___x_528_; uint64_t v___x_529_; uint64_t v___x_530_; size_t v___x_531_; size_t v___x_532_; size_t v___x_533_; size_t v___x_534_; size_t v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_525_ = 32ULL;
v___x_526_ = lean_uint64_shift_right(v___y_524_, v___x_525_);
v_fold_527_ = lean_uint64_xor(v___y_524_, v___x_526_);
v___x_528_ = 16ULL;
v___x_529_ = lean_uint64_shift_right(v_fold_527_, v___x_528_);
v___x_530_ = lean_uint64_xor(v_fold_527_, v___x_529_);
v___x_531_ = lean_uint64_to_usize(v___x_530_);
v___x_532_ = lean_usize_of_nat(v___x_522_);
v___x_533_ = ((size_t)1ULL);
v___x_534_ = lean_usize_sub(v___x_532_, v___x_533_);
v___x_535_ = lean_usize_land(v___x_531_, v___x_534_);
v___x_536_ = lean_array_uget_borrowed(v_buckets_521_, v___x_535_);
v___x_537_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_520_, v___x_536_);
return v___x_537_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object* v_m_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_540_, v_a_541_);
lean_dec(v_a_541_);
lean_dec_ref(v_m_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object* v___x_543_, lean_object* v_declName_544_, lean_object* v_as_545_, size_t v_sz_546_, size_t v_i_547_, lean_object* v_b_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
uint8_t v___x_555_; 
v___x_555_ = lean_usize_dec_lt(v_i_547_, v_sz_546_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec(v_declName_544_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v_b_548_);
lean_ctor_set(v___x_556_, 1, v___y_549_);
v___x_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
return v___x_557_;
}
else
{
lean_object* v___x_558_; lean_object* v_modules_559_; lean_object* v___x_560_; lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v_toImport_563_; lean_object* v_module_564_; lean_object* v___x_565_; uint8_t v___x_566_; lean_object* v___x_567_; 
v___x_558_ = l_Lean_Environment_header(v___x_543_);
v_modules_559_ = lean_ctor_get(v___x_558_, 3);
lean_inc_ref(v_modules_559_);
lean_dec_ref(v___x_558_);
v___x_560_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_561_ = lean_array_uget_borrowed(v_as_545_, v_i_547_);
v___x_562_ = lean_array_get(v___x_560_, v_modules_559_, v_a_561_);
lean_dec_ref(v_modules_559_);
v_toImport_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc_ref(v_toImport_563_);
lean_dec(v___x_562_);
v_module_564_ = lean_ctor_get(v_toImport_563_, 0);
lean_inc(v_module_564_);
lean_dec_ref(v_toImport_563_);
v___x_565_ = lean_box(0);
v___x_566_ = 0;
lean_inc(v_declName_544_);
v___x_567_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_564_, v___x_566_, v_declName_544_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v_snd_569_; size_t v___x_570_; size_t v___x_571_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
v_snd_569_ = lean_ctor_get(v_a_568_, 1);
lean_inc(v_snd_569_);
lean_dec(v_a_568_);
v___x_570_ = ((size_t)1ULL);
v___x_571_ = lean_usize_add(v_i_547_, v___x_570_);
v_i_547_ = v___x_571_;
v_b_548_ = v___x_565_;
v___y_549_ = v_snd_569_;
goto _start;
}
else
{
lean_dec(v_declName_544_);
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object* v___x_573_, lean_object* v_declName_574_, lean_object* v_as_575_, lean_object* v_sz_576_, lean_object* v_i_577_, lean_object* v_b_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
size_t v_sz_boxed_585_; size_t v_i_boxed_586_; lean_object* v_res_587_; 
v_sz_boxed_585_ = lean_unbox_usize(v_sz_576_);
lean_dec(v_sz_576_);
v_i_boxed_586_ = lean_unbox_usize(v_i_577_);
lean_dec(v_i_577_);
v_res_587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v___x_573_, v_declName_574_, v_as_575_, v_sz_boxed_585_, v_i_boxed_586_, v_b_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec_ref(v_as_575_);
lean_dec_ref(v___x_573_);
return v_res_587_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0(void){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Std_HashMap_instInhabited___redArg();
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object* v_declName_591_, uint8_t v_isMeta_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v_env_605_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___x_630_; 
v___x_599_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0);
v___x_600_ = lean_st_ref_get(v___y_597_);
v_env_605_ = lean_ctor_get(v___x_600_, 0);
lean_inc_ref(v_env_605_);
lean_dec(v___x_600_);
v___x_630_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_605_, v_declName_591_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_dec_ref(v_env_605_);
lean_dec(v_declName_591_);
goto v___jp_601_;
}
else
{
lean_object* v_val_631_; lean_object* v___x_632_; lean_object* v_modules_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_val_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_val_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = l_Lean_Environment_header(v_env_605_);
v_modules_633_ = lean_ctor_get(v___x_632_, 3);
lean_inc_ref(v_modules_633_);
lean_dec_ref(v___x_632_);
v___x_634_ = lean_array_get_size(v_modules_633_);
v___x_635_ = lean_nat_dec_lt(v_val_631_, v___x_634_);
if (v___x_635_ == 0)
{
lean_dec_ref(v_modules_633_);
lean_dec(v_val_631_);
lean_dec_ref(v_env_605_);
lean_dec(v_declName_591_);
goto v___jp_601_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___y_639_; 
v___x_636_ = lean_array_fget(v_modules_633_, v_val_631_);
lean_dec(v_val_631_);
lean_dec_ref(v_modules_633_);
v___x_637_ = lean_st_ref_get(v___y_597_);
if (v_isMeta_592_ == 0)
{
lean_dec(v___x_637_);
v___y_639_ = v_isMeta_592_;
goto v___jp_638_;
}
else
{
lean_object* v_env_652_; uint8_t v___x_653_; 
v_env_652_ = lean_ctor_get(v___x_637_, 0);
lean_inc_ref(v_env_652_);
lean_dec(v___x_637_);
lean_inc(v_declName_591_);
v___x_653_ = l_Lean_isMarkedMeta(v_env_652_, v_declName_591_);
if (v___x_653_ == 0)
{
v___y_639_ = v_isMeta_592_;
goto v___jp_638_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = 0;
v___y_639_ = v___x_654_;
goto v___jp_638_;
}
}
v___jp_638_:
{
lean_object* v_toImport_640_; lean_object* v_module_641_; lean_object* v___x_642_; 
v_toImport_640_ = lean_ctor_get(v___x_636_, 0);
lean_inc_ref(v_toImport_640_);
lean_dec(v___x_636_);
v_module_641_ = lean_ctor_get(v_toImport_640_, 0);
lean_inc(v_module_641_);
lean_dec_ref(v_toImport_640_);
lean_inc(v_declName_591_);
v___x_642_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_641_, v___y_639_, v_declName_591_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v_snd_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v_snd_644_ = lean_ctor_get(v_a_643_, 1);
lean_inc(v_snd_644_);
lean_dec(v_a_643_);
v___x_645_ = l_Lean_indirectModUseExt;
v___x_646_ = lean_box(1);
v___x_647_ = lean_box(0);
lean_inc_ref(v_env_605_);
v___x_648_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_599_, v___x_645_, v_env_605_, v___x_646_, v___x_647_);
v___x_649_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v___x_648_, v_declName_591_);
lean_dec(v___x_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_650_; 
v___x_650_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1));
v___y_607_ = v_snd_644_;
v___y_608_ = v___x_650_;
goto v___jp_606_;
}
else
{
lean_object* v_val_651_; 
v_val_651_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v___x_649_, 1);
v___y_607_ = v_snd_644_;
v___y_608_ = v_val_651_;
goto v___jp_606_;
}
}
else
{
lean_dec_ref(v_env_605_);
lean_dec(v_declName_591_);
return v___x_642_;
}
}
}
}
v___jp_601_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = lean_box(0);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___y_593_);
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
v___jp_606_:
{
lean_object* v___x_609_; size_t v_sz_610_; size_t v___x_611_; lean_object* v___x_612_; 
v___x_609_ = lean_box(0);
v_sz_610_ = lean_array_size(v___y_608_);
v___x_611_ = ((size_t)0ULL);
v___x_612_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v_env_605_, v_declName_591_, v___y_608_, v_sz_610_, v___x_611_, v___x_609_, v___y_607_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
lean_dec_ref(v___y_608_);
lean_dec_ref(v_env_605_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_629_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_629_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_629_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_629_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v_snd_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_627_; 
v_snd_617_ = lean_ctor_get(v_a_613_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_a_613_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; 
v_unused_628_ = lean_ctor_get(v_a_613_, 0);
lean_dec(v_unused_628_);
v___x_619_ = v_a_613_;
v_isShared_620_ = v_isSharedCheck_627_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snd_617_);
lean_dec(v_a_613_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_627_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_609_);
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_snd_617_);
v___x_622_ = v_reuseFailAlloc_626_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_624_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_622_);
v___x_624_ = v___x_615_;
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
}
else
{
return v___x_612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object* v_declName_655_, lean_object* v_isMeta_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
uint8_t v_isMeta_boxed_663_; lean_object* v_res_664_; 
v_isMeta_boxed_663_ = lean_unbox(v_isMeta_656_);
v_res_664_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_declName_655_, v_isMeta_boxed_663_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object* v_e_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___y_684_; lean_object* v_f_688_; uint8_t v___x_689_; 
v_f_688_ = l_Lean_Expr_getAppFn(v_e_676_);
v___x_689_ = l_Lean_Expr_isConst(v_f_688_);
if (v___x_689_ == 0)
{
lean_dec_ref(v_f_688_);
lean_dec_ref(v_e_676_);
v___y_684_ = v___y_677_;
goto v___jp_683_;
}
else
{
lean_object* v_declName_690_; lean_object* v___x_691_; lean_object* v_env_692_; uint8_t v___x_693_; 
v_declName_690_ = l_Lean_Expr_constName_x21(v_f_688_);
lean_dec_ref(v_f_688_);
v___x_691_ = lean_st_ref_get(v___y_681_);
v_env_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc_ref(v_env_692_);
lean_dec(v___x_691_);
lean_inc(v_declName_690_);
v___x_693_ = l_Lean_Meta_isCoeDecl(v_env_692_, v_declName_690_);
if (v___x_693_ == 0)
{
lean_dec(v_declName_690_);
lean_dec_ref(v_e_676_);
v___y_684_ = v___y_677_;
goto v___jp_683_;
}
else
{
lean_object* v___x_694_; 
lean_inc(v_declName_690_);
lean_inc_ref(v_e_676_);
v___x_694_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_676_, v_declName_690_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; uint8_t v___x_696_; lean_object* v___x_697_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = 0;
v___x_697_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_a_695_, v___x_696_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v_snd_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_755_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 1);
v_snd_699_ = lean_ctor_get(v_a_698_, 1);
v_isSharedCheck_755_ = !lean_is_exclusive(v_a_698_);
if (v_isSharedCheck_755_ == 0)
{
lean_object* v_unused_756_; 
v_unused_756_ = lean_ctor_get(v_a_698_, 0);
lean_dec(v_unused_756_);
v___x_701_ = v_a_698_;
v_isShared_702_ = v_isSharedCheck_755_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_snd_699_);
lean_dec(v_a_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_755_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; 
lean_inc_ref(v_e_676_);
v___x_703_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_676_, v___x_696_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_746_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_746_ == 0)
{
v___x_706_ = v___x_703_;
v_isShared_707_ = v_isSharedCheck_746_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_703_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_746_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
if (lean_obj_tag(v_a_704_) == 1)
{
lean_object* v_val_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_745_; 
v_val_708_ = lean_ctor_get(v_a_704_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v_a_704_);
if (v_isSharedCheck_745_ == 0)
{
v___x_710_ = v_a_704_;
v_isShared_711_ = v_isSharedCheck_745_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_val_708_);
lean_dec(v_a_704_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_745_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___y_713_; lean_object* v_val_725_; lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_739_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__3));
v___x_740_ = lean_name_eq(v_declName_690_, v___x_739_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__5));
v___x_742_ = lean_name_eq(v_declName_690_, v___x_741_);
lean_dec(v_declName_690_);
if (v___x_742_ == 0)
{
lean_dec_ref(v_e_676_);
v___y_713_ = v_snd_699_;
goto v___jp_712_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = lean_unsigned_to_nat(3u);
v_val_725_ = v___x_743_;
goto v___jp_724_;
}
}
else
{
lean_object* v___x_744_; 
lean_dec(v_declName_690_);
v___x_744_ = lean_unsigned_to_nat(2u);
v_val_725_ = v___x_744_;
goto v___jp_724_;
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = l_Lean_Expr_headBeta(v_val_708_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 0, v___x_714_);
v___x_716_ = v___x_710_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_723_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_718_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v___y_713_);
lean_ctor_set(v___x_701_, 0, v___x_716_);
v___x_718_ = v___x_701_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v___y_713_);
v___x_718_ = v_reuseFailAlloc_722_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_720_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_718_);
v___x_720_ = v___x_706_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
v___jp_724_:
{
lean_object* v_dummy_726_; lean_object* v_nargs_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_dummy_726_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_727_ = l_Lean_Expr_getAppNumArgs(v_e_676_);
lean_inc(v_nargs_727_);
v___x_728_ = lean_mk_array(v_nargs_727_, v_dummy_726_);
v___x_729_ = lean_unsigned_to_nat(1u);
v___x_730_ = lean_nat_sub(v_nargs_727_, v___x_729_);
lean_dec(v_nargs_727_);
v___x_731_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_676_, v___x_728_, v___x_730_);
v___x_732_ = lean_array_get_size(v___x_731_);
v___x_733_ = lean_nat_dec_lt(v_val_725_, v___x_732_);
if (v___x_733_ == 0)
{
lean_dec_ref(v___x_731_);
v___y_713_ = v_snd_699_;
goto v___jp_712_;
}
else
{
lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_734_ = lean_array_fget(v___x_731_, v_val_725_);
lean_dec_ref(v___x_731_);
v___x_735_ = l_Lean_Expr_getAppFn(v___x_734_);
lean_dec(v___x_734_);
v___x_736_ = l_Lean_Expr_isConst(v___x_735_);
if (v___x_736_ == 0)
{
lean_dec_ref(v___x_735_);
v___y_713_ = v_snd_699_;
goto v___jp_712_;
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = l_Lean_Expr_constName_x21(v___x_735_);
lean_dec_ref(v___x_735_);
v___x_738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
lean_ctor_set(v___x_738_, 1, v_snd_699_);
v___y_713_ = v___x_738_;
goto v___jp_712_;
}
}
}
}
}
else
{
lean_del_object(v___x_706_);
lean_dec(v_a_704_);
lean_del_object(v___x_701_);
lean_dec(v_declName_690_);
lean_dec_ref(v_e_676_);
v___y_684_ = v_snd_699_;
goto v___jp_683_;
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_del_object(v___x_701_);
lean_dec(v_snd_699_);
lean_dec(v_declName_690_);
lean_dec_ref(v_e_676_);
v_a_747_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_703_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_703_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec(v_declName_690_);
lean_dec_ref(v_e_676_);
v_a_757_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_697_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_697_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec(v_declName_690_);
lean_dec(v___y_677_);
lean_dec_ref(v_e_676_);
v_a_765_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_694_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_694_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
v___jp_683_:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__0));
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
lean_ctor_set(v___x_686_, 1, v___y_684_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object* v_e_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_Meta_expandCoe___lam__1(v_e_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(lean_object* v_k_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v_b_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v___x_790_; 
lean_inc(v___y_788_);
lean_inc_ref(v___y_787_);
lean_inc(v___y_786_);
lean_inc_ref(v___y_785_);
lean_inc(v___y_782_);
v___x_790_ = lean_apply_8(v_k_781_, v_b_784_, v___y_782_, v___y_783_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, lean_box(0));
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed(lean_object* v_k_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v_b_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(v_k_791_, v___y_792_, v___y_793_, v_b_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v___y_792_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object* v_name_801_, uint8_t v_bi_802_, lean_object* v_type_803_, lean_object* v_k_804_, uint8_t v_kind_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___f_813_; lean_object* v___x_814_; 
lean_inc(v___y_806_);
v___f_813_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_813_, 0, v_k_804_);
lean_closure_set(v___f_813_, 1, v___y_806_);
lean_closure_set(v___f_813_, 2, v___y_807_);
v___x_814_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_801_, v_bi_802_, v_type_803_, v___f_813_, v_kind_805_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_814_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_823_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_814_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_814_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object* v_name_831_, lean_object* v_bi_832_, lean_object* v_type_833_, lean_object* v_k_834_, lean_object* v_kind_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
uint8_t v_bi_boxed_843_; uint8_t v_kind_boxed_844_; lean_object* v_res_845_; 
v_bi_boxed_843_ = lean_unbox(v_bi_832_);
v_kind_boxed_844_ = lean_unbox(v_kind_835_);
v_res_845_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_name_831_, v_bi_boxed_843_, v_type_833_, v_k_834_, v_kind_boxed_844_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_836_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2(lean_object* v___x_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_846_);
lean_ctor_set(v___x_853_, 1, v___y_847_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2(v___x_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(lean_object* v_name_863_, lean_object* v_type_864_, lean_object* v_val_865_, lean_object* v_k_866_, uint8_t v_nondep_867_, uint8_t v_kind_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___f_876_; lean_object* v___x_877_; 
lean_inc(v___y_869_);
v___f_876_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_876_, 0, v_k_866_);
lean_closure_set(v___f_876_, 1, v___y_869_);
lean_closure_set(v___f_876_, 2, v___y_870_);
v___x_877_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_863_, v_type_864_, v_val_865_, v___f_876_, v_nondep_867_, v_kind_868_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
v_a_886_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_877_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_877_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg___boxed(lean_object* v_name_894_, lean_object* v_type_895_, lean_object* v_val_896_, lean_object* v_k_897_, lean_object* v_nondep_898_, lean_object* v_kind_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
uint8_t v_nondep_boxed_907_; uint8_t v_kind_boxed_908_; lean_object* v_res_909_; 
v_nondep_boxed_907_ = lean_unbox(v_nondep_898_);
v_kind_boxed_908_ = lean_unbox(v_kind_899_);
v_res_909_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_name_894_, v_type_895_, v_val_896_, v_k_897_, v_nondep_boxed_907_, v_kind_boxed_908_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_900_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(lean_object* v_a_910_, lean_object* v_b_911_, lean_object* v_x_912_){
_start:
{
if (lean_obj_tag(v_x_912_) == 0)
{
lean_dec(v_b_911_);
lean_dec_ref(v_a_910_);
return v_x_912_;
}
else
{
lean_object* v_key_913_; lean_object* v_value_914_; lean_object* v_tail_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_927_; 
v_key_913_ = lean_ctor_get(v_x_912_, 0);
v_value_914_ = lean_ctor_get(v_x_912_, 1);
v_tail_915_ = lean_ctor_get(v_x_912_, 2);
v_isSharedCheck_927_ = !lean_is_exclusive(v_x_912_);
if (v_isSharedCheck_927_ == 0)
{
v___x_917_ = v_x_912_;
v_isShared_918_ = v_isSharedCheck_927_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_tail_915_);
lean_inc(v_value_914_);
lean_inc(v_key_913_);
lean_dec(v_x_912_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_927_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
uint8_t v___x_919_; 
v___x_919_ = l_Lean_ExprStructEq_beq(v_key_913_, v_a_910_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; lean_object* v___x_922_; 
v___x_920_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_910_, v_b_911_, v_tail_915_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 2, v___x_920_);
v___x_922_ = v___x_917_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_key_913_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v_value_914_);
lean_ctor_set(v_reuseFailAlloc_923_, 2, v___x_920_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
else
{
lean_object* v___x_925_; 
lean_dec(v_value_914_);
lean_dec(v_key_913_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 1, v_b_911_);
lean_ctor_set(v___x_917_, 0, v_a_910_);
v___x_925_ = v___x_917_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_910_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_b_911_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_tail_915_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object* v_a_928_, lean_object* v_x_929_){
_start:
{
if (lean_obj_tag(v_x_929_) == 0)
{
uint8_t v___x_930_; 
v___x_930_ = 0;
return v___x_930_;
}
else
{
lean_object* v_key_931_; lean_object* v_tail_932_; uint8_t v___x_933_; 
v_key_931_ = lean_ctor_get(v_x_929_, 0);
v_tail_932_ = lean_ctor_get(v_x_929_, 2);
v___x_933_ = l_Lean_ExprStructEq_beq(v_key_931_, v_a_928_);
if (v___x_933_ == 0)
{
v_x_929_ = v_tail_932_;
goto _start;
}
else
{
return v___x_933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object* v_a_935_, lean_object* v_x_936_){
_start:
{
uint8_t v_res_937_; lean_object* v_r_938_; 
v_res_937_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_935_, v_x_936_);
lean_dec(v_x_936_);
lean_dec_ref(v_a_935_);
v_r_938_ = lean_box(v_res_937_);
return v_r_938_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(lean_object* v_x_939_, lean_object* v_x_940_){
_start:
{
if (lean_obj_tag(v_x_940_) == 0)
{
return v_x_939_;
}
else
{
lean_object* v_key_941_; lean_object* v_value_942_; lean_object* v_tail_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_966_; 
v_key_941_ = lean_ctor_get(v_x_940_, 0);
v_value_942_ = lean_ctor_get(v_x_940_, 1);
v_tail_943_ = lean_ctor_get(v_x_940_, 2);
v_isSharedCheck_966_ = !lean_is_exclusive(v_x_940_);
if (v_isSharedCheck_966_ == 0)
{
v___x_945_ = v_x_940_;
v_isShared_946_ = v_isSharedCheck_966_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_tail_943_);
lean_inc(v_value_942_);
lean_inc(v_key_941_);
lean_dec(v_x_940_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_966_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; uint64_t v___x_948_; uint64_t v___x_949_; uint64_t v___x_950_; uint64_t v_fold_951_; uint64_t v___x_952_; uint64_t v___x_953_; uint64_t v___x_954_; size_t v___x_955_; size_t v___x_956_; size_t v___x_957_; size_t v___x_958_; size_t v___x_959_; lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_947_ = lean_array_get_size(v_x_939_);
v___x_948_ = l_Lean_ExprStructEq_hash(v_key_941_);
v___x_949_ = 32ULL;
v___x_950_ = lean_uint64_shift_right(v___x_948_, v___x_949_);
v_fold_951_ = lean_uint64_xor(v___x_948_, v___x_950_);
v___x_952_ = 16ULL;
v___x_953_ = lean_uint64_shift_right(v_fold_951_, v___x_952_);
v___x_954_ = lean_uint64_xor(v_fold_951_, v___x_953_);
v___x_955_ = lean_uint64_to_usize(v___x_954_);
v___x_956_ = lean_usize_of_nat(v___x_947_);
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_sub(v___x_956_, v___x_957_);
v___x_959_ = lean_usize_land(v___x_955_, v___x_958_);
v___x_960_ = lean_array_uget_borrowed(v_x_939_, v___x_959_);
lean_inc(v___x_960_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 2, v___x_960_);
v___x_962_ = v___x_945_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_key_941_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_value_942_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v___x_960_);
v___x_962_ = v_reuseFailAlloc_965_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
lean_object* v___x_963_; 
v___x_963_ = lean_array_uset(v_x_939_, v___x_959_, v___x_962_);
v_x_939_ = v___x_963_;
v_x_940_ = v_tail_943_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(lean_object* v_i_967_, lean_object* v_source_968_, lean_object* v_target_969_){
_start:
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = lean_array_get_size(v_source_968_);
v___x_971_ = lean_nat_dec_lt(v_i_967_, v___x_970_);
if (v___x_971_ == 0)
{
lean_dec_ref(v_source_968_);
lean_dec(v_i_967_);
return v_target_969_;
}
else
{
lean_object* v_es_972_; lean_object* v___x_973_; lean_object* v_source_974_; lean_object* v_target_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_es_972_ = lean_array_fget(v_source_968_, v_i_967_);
v___x_973_ = lean_box(0);
v_source_974_ = lean_array_fset(v_source_968_, v_i_967_, v___x_973_);
v_target_975_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(v_target_969_, v_es_972_);
v___x_976_ = lean_unsigned_to_nat(1u);
v___x_977_ = lean_nat_add(v_i_967_, v___x_976_);
lean_dec(v_i_967_);
v_i_967_ = v___x_977_;
v_source_968_ = v_source_974_;
v_target_969_ = v_target_975_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object* v_data_979_){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v_nbuckets_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_980_ = lean_array_get_size(v_data_979_);
v___x_981_ = lean_unsigned_to_nat(2u);
v_nbuckets_982_ = lean_nat_mul(v___x_980_, v___x_981_);
v___x_983_ = lean_unsigned_to_nat(0u);
v___x_984_ = lean_box(0);
v___x_985_ = lean_mk_array(v_nbuckets_982_, v___x_984_);
v___x_986_ = lean_array_propagate_mark(v_data_979_, v___x_985_);
v___x_987_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(v___x_983_, v_data_979_, v___x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object* v_m_988_, lean_object* v_a_989_, lean_object* v_b_990_){
_start:
{
lean_object* v_size_991_; lean_object* v_buckets_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1035_; 
v_size_991_ = lean_ctor_get(v_m_988_, 0);
v_buckets_992_ = lean_ctor_get(v_m_988_, 1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_m_988_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_994_ = v_m_988_;
v_isShared_995_ = v_isSharedCheck_1035_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_buckets_992_);
lean_inc(v_size_991_);
lean_dec(v_m_988_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1035_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; uint64_t v___x_997_; uint64_t v___x_998_; uint64_t v___x_999_; uint64_t v_fold_1000_; uint64_t v___x_1001_; uint64_t v___x_1002_; uint64_t v___x_1003_; size_t v___x_1004_; size_t v___x_1005_; size_t v___x_1006_; size_t v___x_1007_; size_t v___x_1008_; lean_object* v_bkt_1009_; uint8_t v___x_1010_; 
v___x_996_ = lean_array_get_size(v_buckets_992_);
v___x_997_ = l_Lean_ExprStructEq_hash(v_a_989_);
v___x_998_ = 32ULL;
v___x_999_ = lean_uint64_shift_right(v___x_997_, v___x_998_);
v_fold_1000_ = lean_uint64_xor(v___x_997_, v___x_999_);
v___x_1001_ = 16ULL;
v___x_1002_ = lean_uint64_shift_right(v_fold_1000_, v___x_1001_);
v___x_1003_ = lean_uint64_xor(v_fold_1000_, v___x_1002_);
v___x_1004_ = lean_uint64_to_usize(v___x_1003_);
v___x_1005_ = lean_usize_of_nat(v___x_996_);
v___x_1006_ = ((size_t)1ULL);
v___x_1007_ = lean_usize_sub(v___x_1005_, v___x_1006_);
v___x_1008_ = lean_usize_land(v___x_1004_, v___x_1007_);
v_bkt_1009_ = lean_array_uget_borrowed(v_buckets_992_, v___x_1008_);
v___x_1010_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_989_, v_bkt_1009_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v_size_x27_1012_; lean_object* v___x_1013_; lean_object* v_buckets_x27_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1011_ = lean_unsigned_to_nat(1u);
v_size_x27_1012_ = lean_nat_add(v_size_991_, v___x_1011_);
lean_dec(v_size_991_);
lean_inc(v_bkt_1009_);
v___x_1013_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1013_, 0, v_a_989_);
lean_ctor_set(v___x_1013_, 1, v_b_990_);
lean_ctor_set(v___x_1013_, 2, v_bkt_1009_);
v_buckets_x27_1014_ = lean_array_uset(v_buckets_992_, v___x_1008_, v___x_1013_);
v___x_1015_ = lean_unsigned_to_nat(4u);
v___x_1016_ = lean_nat_mul(v_size_x27_1012_, v___x_1015_);
v___x_1017_ = lean_unsigned_to_nat(3u);
v___x_1018_ = lean_nat_div(v___x_1016_, v___x_1017_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_array_get_size(v_buckets_x27_1014_);
v___x_1020_ = lean_nat_dec_le(v___x_1018_, v___x_1019_);
lean_dec(v___x_1018_);
if (v___x_1020_ == 0)
{
lean_object* v_val_1021_; lean_object* v___x_1023_; 
v_val_1021_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_buckets_x27_1014_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v_val_1021_);
lean_ctor_set(v___x_994_, 0, v_size_x27_1012_);
v___x_1023_ = v___x_994_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_size_x27_1012_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_val_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
else
{
lean_object* v___x_1026_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v_buckets_x27_1014_);
lean_ctor_set(v___x_994_, 0, v_size_x27_1012_);
v___x_1026_ = v___x_994_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_size_x27_1012_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_buckets_x27_1014_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
else
{
lean_object* v___x_1028_; lean_object* v_buckets_x27_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1033_; 
lean_inc(v_bkt_1009_);
v___x_1028_ = lean_box(0);
v_buckets_x27_1029_ = lean_array_uset(v_buckets_992_, v___x_1008_, v___x_1028_);
v___x_1030_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_989_, v_b_990_, v_bkt_1009_);
v___x_1031_ = lean_array_uset(v_buckets_x27_1029_, v___x_1008_, v___x_1030_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v___x_1031_);
v___x_1033_ = v___x_994_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_size_991_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v___x_1031_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object* v_a_1036_, lean_object* v_e_1037_, lean_object* v_fst_1038_){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1040_ = lean_st_ref_take(v_a_1036_);
v___x_1041_ = lean_box(0);
v___x_1042_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v___x_1040_, v_e_1037_, v_fst_1038_);
v___x_1043_ = lean_st_ref_put(v_a_1036_, v___x_1042_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object* v_a_1044_, lean_object* v_e_1045_, lean_object* v_fst_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(v_a_1044_, v_e_1045_, v_fst_1046_);
lean_dec(v_a_1044_);
return v_res_1048_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = l_Lean_maxRecDepthErrorMessage;
v___x_1055_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3);
v___x_1057_ = l_Lean_MessageData_ofFormat(v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4);
v___x_1059_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2));
v___x_1060_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___x_1058_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(lean_object* v_ref_1061_){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v_ref_1061_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___boxed(lean_object* v_ref_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(lean_object* v_x_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v___y_1078_; lean_object* v_toCold_1095_; lean_object* v_currRecDepth_1096_; lean_object* v_ref_1097_; uint16_t v_optionFlags_1098_; uint8_t v_suppressElabErrors_1099_; uint8_t v_checkDeprecated_1100_; uint8_t v_isRecordingDeps_1101_; lean_object* v_maxRecDepth_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v_toCold_1095_ = lean_ctor_get(v___y_1074_, 0);
v_currRecDepth_1096_ = lean_ctor_get(v___y_1074_, 1);
v_ref_1097_ = lean_ctor_get(v___y_1074_, 2);
v_optionFlags_1098_ = lean_ctor_get_uint16(v___y_1074_, sizeof(void*)*3);
v_suppressElabErrors_1099_ = lean_ctor_get_uint8(v___y_1074_, sizeof(void*)*3 + 2);
v_checkDeprecated_1100_ = lean_ctor_get_uint8(v___y_1074_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1101_ = lean_ctor_get_uint8(v___y_1074_, sizeof(void*)*3 + 4);
v_maxRecDepth_1107_ = lean_ctor_get(v_toCold_1095_, 3);
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lean_nat_dec_eq(v_maxRecDepth_1107_, v___x_1108_);
if (v___x_1109_ == 0)
{
uint8_t v___x_1110_; 
v___x_1110_ = lean_nat_dec_eq(v_currRecDepth_1096_, v_maxRecDepth_1107_);
if (v___x_1110_ == 0)
{
goto v___jp_1102_;
}
else
{
lean_object* v___x_1111_; 
lean_dec(v___y_1071_);
lean_dec_ref(v_x_1069_);
lean_inc(v_ref_1097_);
v___x_1111_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_1097_);
v___y_1078_ = v___x_1111_;
goto v___jp_1077_;
}
}
else
{
goto v___jp_1102_;
}
v___jp_1077_:
{
if (lean_obj_tag(v___y_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___y_1078_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___y_1078_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___y_1078_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___y_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
v_a_1087_ = lean_ctor_get(v___y_1078_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___y_1078_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___y_1078_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___y_1078_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
v___jp_1102_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1103_ = lean_unsigned_to_nat(1u);
v___x_1104_ = lean_nat_add(v_currRecDepth_1096_, v___x_1103_);
lean_inc(v_ref_1097_);
lean_inc_ref(v_toCold_1095_);
v___x_1105_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1105_, 0, v_toCold_1095_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
lean_ctor_set(v___x_1105_, 2, v_ref_1097_);
lean_ctor_set_uint16(v___x_1105_, sizeof(void*)*3, v_optionFlags_1098_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*3 + 2, v_suppressElabErrors_1099_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*3 + 3, v_checkDeprecated_1100_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*3 + 4, v_isRecordingDeps_1101_);
lean_inc(v___y_1075_);
lean_inc(v___y_1073_);
lean_inc_ref(v___y_1072_);
lean_inc(v___y_1070_);
v___x_1106_ = lean_apply_7(v_x_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___x_1105_, v___y_1075_, lean_box(0));
v___y_1078_ = v___x_1106_;
goto v___jp_1077_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg___boxed(lean_object* v_x_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v_x_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1113_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(lean_object* v_a_1121_, lean_object* v_x_1122_){
_start:
{
if (lean_obj_tag(v_x_1122_) == 0)
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_box(0);
return v___x_1123_;
}
else
{
lean_object* v_key_1124_; lean_object* v_value_1125_; lean_object* v_tail_1126_; uint8_t v___x_1127_; 
v_key_1124_ = lean_ctor_get(v_x_1122_, 0);
v_value_1125_ = lean_ctor_get(v_x_1122_, 1);
v_tail_1126_ = lean_ctor_get(v_x_1122_, 2);
v___x_1127_ = l_Lean_ExprStructEq_beq(v_key_1124_, v_a_1121_);
if (v___x_1127_ == 0)
{
v_x_1122_ = v_tail_1126_;
goto _start;
}
else
{
lean_object* v___x_1129_; 
lean_inc(v_value_1125_);
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_value_1125_);
return v___x_1129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg___boxed(lean_object* v_a_1130_, lean_object* v_x_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_1130_, v_x_1131_);
lean_dec(v_x_1131_);
lean_dec_ref(v_a_1130_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object* v_m_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v_buckets_1135_; lean_object* v___x_1136_; uint64_t v___x_1137_; uint64_t v___x_1138_; uint64_t v___x_1139_; uint64_t v_fold_1140_; uint64_t v___x_1141_; uint64_t v___x_1142_; uint64_t v___x_1143_; size_t v___x_1144_; size_t v___x_1145_; size_t v___x_1146_; size_t v___x_1147_; size_t v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_buckets_1135_ = lean_ctor_get(v_m_1133_, 1);
v___x_1136_ = lean_array_get_size(v_buckets_1135_);
v___x_1137_ = l_Lean_ExprStructEq_hash(v_a_1134_);
v___x_1138_ = 32ULL;
v___x_1139_ = lean_uint64_shift_right(v___x_1137_, v___x_1138_);
v_fold_1140_ = lean_uint64_xor(v___x_1137_, v___x_1139_);
v___x_1141_ = 16ULL;
v___x_1142_ = lean_uint64_shift_right(v_fold_1140_, v___x_1141_);
v___x_1143_ = lean_uint64_xor(v_fold_1140_, v___x_1142_);
v___x_1144_ = lean_uint64_to_usize(v___x_1143_);
v___x_1145_ = lean_usize_of_nat(v___x_1136_);
v___x_1146_ = ((size_t)1ULL);
v___x_1147_ = lean_usize_sub(v___x_1145_, v___x_1146_);
v___x_1148_ = lean_usize_land(v___x_1144_, v___x_1147_);
v___x_1149_ = lean_array_uget_borrowed(v_buckets_1135_, v___x_1148_);
v___x_1150_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_1134_, v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_m_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_m_1151_, v_a_1152_);
lean_dec_ref(v_a_1152_);
lean_dec_ref(v_m_1151_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object* v_00_u03b1_1154_, lean_object* v_x_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1162_ = lean_apply_1(v_x_1155_, lean_box(0));
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
lean_ctor_set(v___x_1163_, 1, v___y_1156_);
v___x_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object* v_00_u03b1_1165_, lean_object* v_x_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(v_00_u03b1_1165_, v_x_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed(lean_object* v_fvars_1174_, lean_object* v_pre_1175_, lean_object* v_post_1176_, lean_object* v_usedLetOnly_1177_, lean_object* v_skipConstInApp_1178_, lean_object* v_skipInstances_1179_, lean_object* v_body_1180_, lean_object* v_x_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
uint8_t v_usedLetOnly_boxed_1189_; uint8_t v_skipConstInApp_boxed_1190_; uint8_t v_skipInstances_boxed_1191_; lean_object* v_res_1192_; 
v_usedLetOnly_boxed_1189_ = lean_unbox(v_usedLetOnly_1177_);
v_skipConstInApp_boxed_1190_ = lean_unbox(v_skipConstInApp_1178_);
v_skipInstances_boxed_1191_ = lean_unbox(v_skipInstances_1179_);
v_res_1192_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(v_fvars_1174_, v_pre_1175_, v_post_1176_, v_usedLetOnly_boxed_1189_, v_skipConstInApp_boxed_1190_, v_skipInstances_boxed_1191_, v_body_1180_, v_x_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1182_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object* v_fvars_1196_, lean_object* v_pre_1197_, lean_object* v_post_1198_, uint8_t v_usedLetOnly_1199_, uint8_t v_skipConstInApp_1200_, uint8_t v_skipInstances_1201_, lean_object* v_body_1202_, lean_object* v_x_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = lean_array_push(v_fvars_1196_, v_x_1203_);
v___x_1212_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1197_, v_post_1198_, v_usedLetOnly_1199_, v_skipConstInApp_1200_, v_skipInstances_1201_, v___x_1211_, v_body_1202_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object* v_fvars_1213_, lean_object* v_pre_1214_, lean_object* v_post_1215_, lean_object* v_usedLetOnly_1216_, lean_object* v_skipConstInApp_1217_, lean_object* v_skipInstances_1218_, lean_object* v_body_1219_, lean_object* v_x_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
uint8_t v_usedLetOnly_boxed_1228_; uint8_t v_skipConstInApp_boxed_1229_; uint8_t v_skipInstances_boxed_1230_; lean_object* v_res_1231_; 
v_usedLetOnly_boxed_1228_ = lean_unbox(v_usedLetOnly_1216_);
v_skipConstInApp_boxed_1229_ = lean_unbox(v_skipConstInApp_1217_);
v_skipInstances_boxed_1230_ = lean_unbox(v_skipInstances_1218_);
v_res_1231_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(v_fvars_1213_, v_pre_1214_, v_post_1215_, v_usedLetOnly_boxed_1228_, v_skipConstInApp_boxed_1229_, v_skipInstances_boxed_1230_, v_body_1219_, v_x_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1221_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object* v_pre_1232_, lean_object* v_post_1233_, uint8_t v_usedLetOnly_1234_, uint8_t v_skipConstInApp_1235_, uint8_t v_skipInstances_1236_, lean_object* v_e_1237_, lean_object* v_a_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v___x_1245_; 
lean_inc_ref(v_post_1233_);
lean_inc(v___y_1243_);
lean_inc_ref(v___y_1242_);
lean_inc(v___y_1241_);
lean_inc_ref(v___y_1240_);
lean_inc_ref(v_e_1237_);
v___x_1245_ = lean_apply_7(v_post_1233_, v_e_1237_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, lean_box(0));
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1277_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1248_ = v___x_1245_;
v_isShared_1249_ = v_isSharedCheck_1277_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1245_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1277_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v_fst_1250_; lean_object* v_snd_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1276_; 
v_fst_1250_ = lean_ctor_get(v_a_1246_, 0);
v_snd_1251_ = lean_ctor_get(v_a_1246_, 1);
v_isSharedCheck_1276_ = !lean_is_exclusive(v_a_1246_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1253_ = v_a_1246_;
v_isShared_1254_ = v_isSharedCheck_1276_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_snd_1251_);
lean_inc(v_fst_1250_);
lean_dec(v_a_1246_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1276_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___y_1256_; 
switch(lean_obj_tag(v_fst_1250_))
{
case 0:
{
lean_object* v_e_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1271_; 
lean_del_object(v___x_1253_);
lean_del_object(v___x_1248_);
lean_dec_ref(v_e_1237_);
lean_dec_ref(v_post_1233_);
lean_dec_ref(v_pre_1232_);
v_e_1263_ = lean_ctor_get(v_fst_1250_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_fst_1250_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1265_ = v_fst_1250_;
v_isShared_1266_ = v_isSharedCheck_1271_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_e_1263_);
lean_dec(v_fst_1250_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1271_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v_e_1263_);
lean_ctor_set(v___x_1267_, 1, v_snd_1251_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v___x_1267_);
v___x_1269_ = v___x_1265_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
case 1:
{
lean_object* v_e_1272_; lean_object* v___x_1273_; 
lean_del_object(v___x_1253_);
lean_del_object(v___x_1248_);
lean_dec_ref(v_e_1237_);
v_e_1272_ = lean_ctor_get(v_fst_1250_, 0);
lean_inc_ref(v_e_1272_);
lean_dec_ref_known(v_fst_1250_, 1);
v___x_1273_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1232_, v_post_1233_, v_usedLetOnly_1234_, v_skipConstInApp_1235_, v_skipInstances_1236_, v_e_1272_, v_a_1238_, v_snd_1251_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
return v___x_1273_;
}
default: 
{
lean_object* v_e_x3f_1274_; 
lean_dec_ref(v_post_1233_);
lean_dec_ref(v_pre_1232_);
v_e_x3f_1274_ = lean_ctor_get(v_fst_1250_, 0);
lean_inc(v_e_x3f_1274_);
lean_dec_ref_known(v_fst_1250_, 1);
if (lean_obj_tag(v_e_x3f_1274_) == 0)
{
v___y_1256_ = v_e_1237_;
goto v___jp_1255_;
}
else
{
lean_object* v_val_1275_; 
lean_dec_ref(v_e_1237_);
v_val_1275_ = lean_ctor_get(v_e_x3f_1274_, 0);
lean_inc(v_val_1275_);
lean_dec_ref_known(v_e_x3f_1274_, 1);
v___y_1256_ = v_val_1275_;
goto v___jp_1255_;
}
}
}
v___jp_1255_:
{
lean_object* v___x_1258_; 
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___y_1256_);
v___x_1258_ = v___x_1253_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___y_1256_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_snd_1251_);
v___x_1258_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___x_1258_);
v___x_1260_ = v___x_1248_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v_e_1237_);
lean_dec_ref(v_post_1233_);
lean_dec_ref(v_pre_1232_);
v_a_1278_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1245_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1245_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object* v_pre_1286_, lean_object* v_post_1287_, uint8_t v_usedLetOnly_1288_, uint8_t v_skipConstInApp_1289_, uint8_t v_skipInstances_1290_, lean_object* v_fvars_1291_, lean_object* v_e_1292_, lean_object* v_a_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
if (lean_obj_tag(v_e_1292_) == 6)
{
lean_object* v_binderName_1300_; lean_object* v_binderType_1301_; lean_object* v_body_1302_; uint8_t v_binderInfo_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___f_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_binderName_1300_ = lean_ctor_get(v_e_1292_, 0);
lean_inc(v_binderName_1300_);
v_binderType_1301_ = lean_ctor_get(v_e_1292_, 1);
lean_inc_ref(v_binderType_1301_);
v_body_1302_ = lean_ctor_get(v_e_1292_, 2);
lean_inc_ref(v_body_1302_);
v_binderInfo_1303_ = lean_ctor_get_uint8(v_e_1292_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1292_, 3);
v___x_1304_ = lean_box(v_usedLetOnly_1288_);
v___x_1305_ = lean_box(v_skipConstInApp_1289_);
v___x_1306_ = lean_box(v_skipInstances_1290_);
lean_inc_ref(v_post_1287_);
lean_inc_ref(v_pre_1286_);
lean_inc_ref(v_fvars_1291_);
v___f_1307_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1307_, 0, v_fvars_1291_);
lean_closure_set(v___f_1307_, 1, v_pre_1286_);
lean_closure_set(v___f_1307_, 2, v_post_1287_);
lean_closure_set(v___f_1307_, 3, v___x_1304_);
lean_closure_set(v___f_1307_, 4, v___x_1305_);
lean_closure_set(v___f_1307_, 5, v___x_1306_);
lean_closure_set(v___f_1307_, 6, v_body_1302_);
v___x_1308_ = lean_expr_instantiate_rev(v_binderType_1301_, v_fvars_1291_);
lean_dec_ref(v_fvars_1291_);
lean_dec_ref(v_binderType_1301_);
v___x_1309_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1286_, v_post_1287_, v_usedLetOnly_1288_, v_skipConstInApp_1289_, v_skipInstances_1290_, v___x_1308_, v_a_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v_fst_1311_; lean_object* v_snd_1312_; uint8_t v___x_1313_; lean_object* v___x_1314_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 1);
v_fst_1311_ = lean_ctor_get(v_a_1310_, 0);
lean_inc(v_fst_1311_);
v_snd_1312_ = lean_ctor_get(v_a_1310_, 1);
lean_inc(v_snd_1312_);
lean_dec(v_a_1310_);
v___x_1313_ = 0;
v___x_1314_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_binderName_1300_, v_binderInfo_1303_, v_fst_1311_, v___f_1307_, v___x_1313_, v_a_1293_, v_snd_1312_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
return v___x_1314_;
}
else
{
lean_dec_ref(v___f_1307_);
lean_dec(v_binderName_1300_);
return v___x_1309_;
}
}
else
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_expr_instantiate_rev(v_e_1292_, v_fvars_1291_);
lean_dec_ref(v_e_1292_);
lean_inc_ref(v_post_1287_);
lean_inc_ref(v_pre_1286_);
v___x_1316_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1286_, v_post_1287_, v_usedLetOnly_1288_, v_skipConstInApp_1289_, v_skipInstances_1290_, v___x_1315_, v_a_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v_fst_1318_; lean_object* v_snd_1319_; uint8_t v___x_1320_; uint8_t v___x_1321_; uint8_t v___x_1322_; lean_object* v___x_1323_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v_fst_1318_ = lean_ctor_get(v_a_1317_, 0);
lean_inc(v_fst_1318_);
v_snd_1319_ = lean_ctor_get(v_a_1317_, 1);
lean_inc(v_snd_1319_);
lean_dec(v_a_1317_);
v___x_1320_ = 0;
v___x_1321_ = 1;
v___x_1322_ = 1;
v___x_1323_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1291_, v_fst_1318_, v___x_1320_, v_usedLetOnly_1288_, v___x_1320_, v___x_1321_, v___x_1322_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec_ref(v_fvars_1291_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1325_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1325_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1286_, v_post_1287_, v_usedLetOnly_1288_, v_skipConstInApp_1289_, v_skipInstances_1290_, v_a_1324_, v_a_1293_, v_snd_1319_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
return v___x_1325_;
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec(v_snd_1319_);
lean_dec_ref(v_post_1287_);
lean_dec_ref(v_pre_1286_);
v_a_1326_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1323_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1323_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1291_);
lean_dec_ref(v_post_1287_);
lean_dec_ref(v_pre_1286_);
return v___x_1316_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object* v_fvars_1334_, lean_object* v_pre_1335_, lean_object* v_post_1336_, uint8_t v_usedLetOnly_1337_, uint8_t v_skipConstInApp_1338_, uint8_t v_skipInstances_1339_, lean_object* v_body_1340_, lean_object* v_x_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = lean_array_push(v_fvars_1334_, v_x_1341_);
v___x_1350_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1335_, v_post_1336_, v_usedLetOnly_1337_, v_skipConstInApp_1338_, v_skipInstances_1339_, v___x_1349_, v_body_1340_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object* v_fvars_1351_, lean_object* v_pre_1352_, lean_object* v_post_1353_, lean_object* v_usedLetOnly_1354_, lean_object* v_skipConstInApp_1355_, lean_object* v_skipInstances_1356_, lean_object* v_body_1357_, lean_object* v_x_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
uint8_t v_usedLetOnly_boxed_1366_; uint8_t v_skipConstInApp_boxed_1367_; uint8_t v_skipInstances_boxed_1368_; lean_object* v_res_1369_; 
v_usedLetOnly_boxed_1366_ = lean_unbox(v_usedLetOnly_1354_);
v_skipConstInApp_boxed_1367_ = lean_unbox(v_skipConstInApp_1355_);
v_skipInstances_boxed_1368_ = lean_unbox(v_skipInstances_1356_);
v_res_1369_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(v_fvars_1351_, v_pre_1352_, v_post_1353_, v_usedLetOnly_boxed_1366_, v_skipConstInApp_boxed_1367_, v_skipInstances_boxed_1368_, v_body_1357_, v_x_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1359_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object* v_pre_1370_, lean_object* v_post_1371_, uint8_t v_usedLetOnly_1372_, uint8_t v_skipConstInApp_1373_, uint8_t v_skipInstances_1374_, lean_object* v_fvars_1375_, lean_object* v_e_1376_, lean_object* v_a_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
if (lean_obj_tag(v_e_1376_) == 8)
{
lean_object* v_declName_1384_; lean_object* v_type_1385_; lean_object* v_value_1386_; lean_object* v_body_1387_; uint8_t v_nondep_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v_declName_1384_ = lean_ctor_get(v_e_1376_, 0);
lean_inc(v_declName_1384_);
v_type_1385_ = lean_ctor_get(v_e_1376_, 1);
lean_inc_ref(v_type_1385_);
v_value_1386_ = lean_ctor_get(v_e_1376_, 2);
lean_inc_ref(v_value_1386_);
v_body_1387_ = lean_ctor_get(v_e_1376_, 3);
lean_inc_ref(v_body_1387_);
v_nondep_1388_ = lean_ctor_get_uint8(v_e_1376_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1376_, 4);
v___x_1389_ = lean_box(v_usedLetOnly_1372_);
v___x_1390_ = lean_box(v_skipConstInApp_1373_);
v___x_1391_ = lean_box(v_skipInstances_1374_);
lean_inc_ref_n(v_post_1371_, 2);
lean_inc_ref_n(v_pre_1370_, 2);
lean_inc_ref(v_fvars_1375_);
v___f_1392_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1392_, 0, v_fvars_1375_);
lean_closure_set(v___f_1392_, 1, v_pre_1370_);
lean_closure_set(v___f_1392_, 2, v_post_1371_);
lean_closure_set(v___f_1392_, 3, v___x_1389_);
lean_closure_set(v___f_1392_, 4, v___x_1390_);
lean_closure_set(v___f_1392_, 5, v___x_1391_);
lean_closure_set(v___f_1392_, 6, v_body_1387_);
v___x_1393_ = lean_expr_instantiate_rev(v_type_1385_, v_fvars_1375_);
lean_dec_ref(v_type_1385_);
v___x_1394_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1370_, v_post_1371_, v_usedLetOnly_1372_, v_skipConstInApp_1373_, v_skipInstances_1374_, v___x_1393_, v_a_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v_fst_1396_; lean_object* v_snd_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v_fst_1396_ = lean_ctor_get(v_a_1395_, 0);
lean_inc(v_fst_1396_);
v_snd_1397_ = lean_ctor_get(v_a_1395_, 1);
lean_inc(v_snd_1397_);
lean_dec(v_a_1395_);
v___x_1398_ = lean_expr_instantiate_rev(v_value_1386_, v_fvars_1375_);
lean_dec_ref(v_fvars_1375_);
lean_dec_ref(v_value_1386_);
v___x_1399_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1370_, v_post_1371_, v_usedLetOnly_1372_, v_skipConstInApp_1373_, v_skipInstances_1374_, v___x_1398_, v_a_1377_, v_snd_1397_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; lean_object* v_fst_1401_; lean_object* v_snd_1402_; uint8_t v___x_1403_; lean_object* v___x_1404_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_a_1400_);
lean_dec_ref_known(v___x_1399_, 1);
v_fst_1401_ = lean_ctor_get(v_a_1400_, 0);
lean_inc(v_fst_1401_);
v_snd_1402_ = lean_ctor_get(v_a_1400_, 1);
lean_inc(v_snd_1402_);
lean_dec(v_a_1400_);
v___x_1403_ = 0;
v___x_1404_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_declName_1384_, v_fst_1396_, v_fst_1401_, v___f_1392_, v_nondep_1388_, v___x_1403_, v_a_1377_, v_snd_1402_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
return v___x_1404_;
}
else
{
lean_dec(v_fst_1396_);
lean_dec_ref(v___f_1392_);
lean_dec(v_declName_1384_);
return v___x_1399_;
}
}
else
{
lean_dec_ref(v___f_1392_);
lean_dec_ref(v_value_1386_);
lean_dec(v_declName_1384_);
lean_dec_ref(v_fvars_1375_);
lean_dec_ref(v_post_1371_);
lean_dec_ref(v_pre_1370_);
return v___x_1394_;
}
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = lean_expr_instantiate_rev(v_e_1376_, v_fvars_1375_);
lean_dec_ref(v_e_1376_);
lean_inc_ref(v_post_1371_);
lean_inc_ref(v_pre_1370_);
v___x_1406_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1370_, v_post_1371_, v_usedLetOnly_1372_, v_skipConstInApp_1373_, v_skipInstances_1374_, v___x_1405_, v_a_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v_fst_1408_; lean_object* v_snd_1409_; uint8_t v___x_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
lean_dec_ref_known(v___x_1406_, 1);
v_fst_1408_ = lean_ctor_get(v_a_1407_, 0);
lean_inc(v_fst_1408_);
v_snd_1409_ = lean_ctor_get(v_a_1407_, 1);
lean_inc(v_snd_1409_);
lean_dec(v_a_1407_);
v___x_1410_ = 0;
v___x_1411_ = 1;
v___x_1412_ = l_Lean_Meta_mkLetFVars(v_fvars_1375_, v_fst_1408_, v_usedLetOnly_1372_, v___x_1410_, v___x_1411_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec_ref(v_fvars_1375_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1414_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___x_1412_, 1);
v___x_1414_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1370_, v_post_1371_, v_usedLetOnly_1372_, v_skipConstInApp_1373_, v_skipInstances_1374_, v_a_1413_, v_a_1377_, v_snd_1409_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
return v___x_1414_;
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v_snd_1409_);
lean_dec_ref(v_post_1371_);
lean_dec_ref(v_pre_1370_);
v_a_1415_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1412_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1412_);
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
else
{
lean_dec_ref(v_fvars_1375_);
lean_dec_ref(v_post_1371_);
lean_dec_ref(v_pre_1370_);
return v___x_1406_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(lean_object* v_pre_1423_, lean_object* v_post_1424_, uint8_t v_usedLetOnly_1425_, uint8_t v_skipConstInApp_1426_, uint8_t v_skipInstances_1427_, size_t v_sz_1428_, size_t v_i_1429_, lean_object* v_bs_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
uint8_t v___x_1438_; 
v___x_1438_ = lean_usize_dec_lt(v_i_1429_, v_sz_1428_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_dec_ref(v_post_1424_);
lean_dec_ref(v_pre_1423_);
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v_bs_1430_);
lean_ctor_set(v___x_1439_, 1, v___y_1432_);
v___x_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
return v___x_1440_;
}
else
{
lean_object* v_v_1441_; lean_object* v___x_1442_; lean_object* v_bs_x27_1443_; lean_object* v___x_1444_; 
v_v_1441_ = lean_array_uget(v_bs_1430_, v_i_1429_);
v___x_1442_ = lean_unsigned_to_nat(0u);
v_bs_x27_1443_ = lean_array_uset(v_bs_1430_, v_i_1429_, v___x_1442_);
lean_inc_ref(v_post_1424_);
lean_inc_ref(v_pre_1423_);
v___x_1444_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1423_, v_post_1424_, v_usedLetOnly_1425_, v_skipConstInApp_1426_, v_skipInstances_1427_, v_v_1441_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v_fst_1446_; lean_object* v_snd_1447_; size_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v_fst_1446_ = lean_ctor_get(v_a_1445_, 0);
lean_inc(v_fst_1446_);
v_snd_1447_ = lean_ctor_get(v_a_1445_, 1);
lean_inc(v_snd_1447_);
lean_dec(v_a_1445_);
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_add(v_i_1429_, v___x_1448_);
v___x_1450_ = lean_array_uset(v_bs_x27_1443_, v_i_1429_, v_fst_1446_);
v_i_1429_ = v___x_1449_;
v_bs_1430_ = v___x_1450_;
v___y_1432_ = v_snd_1447_;
goto _start;
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec_ref(v_bs_x27_1443_);
lean_dec_ref(v_post_1424_);
lean_dec_ref(v_pre_1423_);
v_a_1452_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1444_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1444_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(lean_object* v_pre_1460_, lean_object* v_post_1461_, uint8_t v_usedLetOnly_1462_, uint8_t v_skipConstInApp_1463_, uint8_t v_skipInstances_1464_, lean_object* v___x_1465_, lean_object* v___y_1466_, lean_object* v_b_1467_, lean_object* v_a_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1460_, v_post_1461_, v_usedLetOnly_1462_, v_skipConstInApp_1463_, v_skipInstances_1464_, v___x_1465_, v___y_1466_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1494_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1478_ = v___x_1475_;
v_isShared_1479_ = v_isSharedCheck_1494_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1475_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1494_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v_fst_1480_; lean_object* v_snd_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1493_; 
v_fst_1480_ = lean_ctor_get(v_a_1476_, 0);
v_snd_1481_ = lean_ctor_get(v_a_1476_, 1);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_a_1476_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1483_ = v_a_1476_;
v_isShared_1484_ = v_isSharedCheck_1493_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_snd_1481_);
lean_inc(v_fst_1480_);
lean_dec(v_a_1476_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1493_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1485_ = lean_array_fset(v_b_1467_, v_a_1468_, v_fst_1480_);
v___x_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1486_);
v___x_1488_ = v___x_1483_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v_snd_1481_);
v___x_1488_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
lean_object* v___x_1490_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 0, v___x_1488_);
v___x_1490_ = v___x_1478_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec_ref(v_b_1467_);
v_a_1495_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1475_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1475_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v_pre_1503_, lean_object* v_post_1504_, lean_object* v_usedLetOnly_1505_, lean_object* v_skipConstInApp_1506_, lean_object* v_skipInstances_1507_, lean_object* v___x_1508_, lean_object* v___y_1509_, lean_object* v_b_1510_, lean_object* v_a_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
uint8_t v_usedLetOnly_boxed_1518_; uint8_t v_skipConstInApp_boxed_1519_; uint8_t v_skipInstances_boxed_1520_; lean_object* v_res_1521_; 
v_usedLetOnly_boxed_1518_ = lean_unbox(v_usedLetOnly_1505_);
v_skipConstInApp_boxed_1519_ = lean_unbox(v_skipConstInApp_1506_);
v_skipInstances_boxed_1520_ = lean_unbox(v_skipInstances_1507_);
v_res_1521_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(v_pre_1503_, v_post_1504_, v_usedLetOnly_boxed_1518_, v_skipConstInApp_boxed_1519_, v_skipInstances_boxed_1520_, v___x_1508_, v___y_1509_, v_b_1510_, v_a_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v_a_1511_);
lean_dec(v___y_1509_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(lean_object* v_upperBound_1522_, lean_object* v___x_1523_, lean_object* v_pre_1524_, lean_object* v_post_1525_, uint8_t v_usedLetOnly_1526_, uint8_t v_skipConstInApp_1527_, uint8_t v_skipInstances_1528_, lean_object* v_a_1529_, lean_object* v_b_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v___y_1539_; uint8_t v___x_1573_; 
v___x_1573_ = lean_nat_dec_lt(v_a_1529_, v_upperBound_1522_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_dec(v_a_1529_);
lean_dec_ref(v_post_1525_);
lean_dec_ref(v_pre_1524_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_b_1530_);
lean_ctor_set(v___x_1574_, 1, v___y_1532_);
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
return v___x_1575_;
}
else
{
lean_object* v___x_1576_; lean_object* v___x_1577_; uint8_t v___x_1578_; 
v___x_1576_ = lean_array_fget_borrowed(v_b_1530_, v_a_1529_);
v___x_1577_ = lean_array_get_size(v___x_1523_);
v___x_1578_ = lean_nat_dec_lt(v_a_1529_, v___x_1577_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___f_1582_; 
lean_inc(v___x_1576_);
v___x_1579_ = lean_box(v_usedLetOnly_1526_);
v___x_1580_ = lean_box(v_skipConstInApp_1527_);
v___x_1581_ = lean_box(v_skipInstances_1528_);
lean_inc(v_a_1529_);
lean_inc(v___y_1531_);
lean_inc_ref(v_post_1525_);
lean_inc_ref(v_pre_1524_);
v___f_1582_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1582_, 0, v_pre_1524_);
lean_closure_set(v___f_1582_, 1, v_post_1525_);
lean_closure_set(v___f_1582_, 2, v___x_1579_);
lean_closure_set(v___f_1582_, 3, v___x_1580_);
lean_closure_set(v___f_1582_, 4, v___x_1581_);
lean_closure_set(v___f_1582_, 5, v___x_1576_);
lean_closure_set(v___f_1582_, 6, v___y_1531_);
lean_closure_set(v___f_1582_, 7, v_b_1530_);
lean_closure_set(v___f_1582_, 8, v_a_1529_);
v___y_1539_ = v___f_1582_;
goto v___jp_1538_;
}
else
{
lean_object* v___x_1583_; uint8_t v_isInstance_1584_; 
v___x_1583_ = lean_array_fget_borrowed(v___x_1523_, v_a_1529_);
v_isInstance_1584_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*1 + 5);
if (v_isInstance_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___f_1588_; 
lean_inc(v___x_1576_);
v___x_1585_ = lean_box(v_usedLetOnly_1526_);
v___x_1586_ = lean_box(v_skipConstInApp_1527_);
v___x_1587_ = lean_box(v_skipInstances_1528_);
lean_inc(v_a_1529_);
lean_inc(v___y_1531_);
lean_inc_ref(v_post_1525_);
lean_inc_ref(v_pre_1524_);
v___f_1588_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1588_, 0, v_pre_1524_);
lean_closure_set(v___f_1588_, 1, v_post_1525_);
lean_closure_set(v___f_1588_, 2, v___x_1585_);
lean_closure_set(v___f_1588_, 3, v___x_1586_);
lean_closure_set(v___f_1588_, 4, v___x_1587_);
lean_closure_set(v___f_1588_, 5, v___x_1576_);
lean_closure_set(v___f_1588_, 6, v___y_1531_);
lean_closure_set(v___f_1588_, 7, v_b_1530_);
lean_closure_set(v___f_1588_, 8, v_a_1529_);
v___y_1539_ = v___f_1588_;
goto v___jp_1538_;
}
else
{
lean_object* v___x_1589_; lean_object* v___f_1590_; 
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_b_1530_);
v___f_1590_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2___boxed), 7, 1);
lean_closure_set(v___f_1590_, 0, v___x_1589_);
v___y_1539_ = v___f_1590_;
goto v___jp_1538_;
}
}
}
v___jp_1538_:
{
lean_object* v___x_1540_; 
lean_inc(v___y_1536_);
lean_inc_ref(v___y_1535_);
lean_inc(v___y_1534_);
lean_inc_ref(v___y_1533_);
v___x_1540_ = lean_apply_6(v___y_1539_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, lean_box(0));
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1564_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1543_ = v___x_1540_;
v_isShared_1544_ = v_isSharedCheck_1564_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1564_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v_fst_1545_; 
v_fst_1545_ = lean_ctor_get(v_a_1541_, 0);
lean_inc(v_fst_1545_);
if (lean_obj_tag(v_fst_1545_) == 0)
{
lean_object* v_snd_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1557_; 
lean_dec(v_a_1529_);
lean_dec_ref(v_post_1525_);
lean_dec_ref(v_pre_1524_);
v_snd_1546_ = lean_ctor_get(v_a_1541_, 1);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_a_1541_);
if (v_isSharedCheck_1557_ == 0)
{
lean_object* v_unused_1558_; 
v_unused_1558_ = lean_ctor_get(v_a_1541_, 0);
lean_dec(v_unused_1558_);
v___x_1548_ = v_a_1541_;
v_isShared_1549_ = v_isSharedCheck_1557_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_snd_1546_);
lean_dec(v_a_1541_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1557_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v_a_1550_; lean_object* v___x_1552_; 
v_a_1550_ = lean_ctor_get(v_fst_1545_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v_fst_1545_, 1);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v_a_1550_);
v___x_1552_ = v___x_1548_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v_snd_1546_);
v___x_1552_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1554_; 
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1552_);
v___x_1554_ = v___x_1543_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
else
{
lean_object* v_snd_1559_; lean_object* v_a_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_del_object(v___x_1543_);
v_snd_1559_ = lean_ctor_get(v_a_1541_, 1);
lean_inc(v_snd_1559_);
lean_dec(v_a_1541_);
v_a_1560_ = lean_ctor_get(v_fst_1545_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v_fst_1545_, 1);
v___x_1561_ = lean_unsigned_to_nat(1u);
v___x_1562_ = lean_nat_add(v_a_1529_, v___x_1561_);
lean_dec(v_a_1529_);
v_a_1529_ = v___x_1562_;
v_b_1530_ = v_a_1560_;
v___y_1532_ = v_snd_1559_;
goto _start;
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_a_1529_);
lean_dec_ref(v_post_1525_);
lean_dec_ref(v_pre_1524_);
v_a_1565_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1540_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1540_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(uint8_t v_skipInstances_1591_, lean_object* v_pre_1592_, lean_object* v_post_1593_, uint8_t v_usedLetOnly_1594_, uint8_t v_skipConstInApp_1595_, lean_object* v_x_1596_, lean_object* v_x_1597_, lean_object* v_x_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v_f_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; 
if (lean_obj_tag(v_x_1596_) == 5)
{
lean_object* v_fn_1662_; lean_object* v_arg_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v_fn_1662_ = lean_ctor_get(v_x_1596_, 0);
lean_inc_ref(v_fn_1662_);
v_arg_1663_ = lean_ctor_get(v_x_1596_, 1);
lean_inc_ref(v_arg_1663_);
lean_dec_ref_known(v_x_1596_, 2);
v___x_1664_ = lean_array_set(v_x_1597_, v_x_1598_, v_arg_1663_);
v___x_1665_ = lean_unsigned_to_nat(1u);
v___x_1666_ = lean_nat_sub(v_x_1598_, v___x_1665_);
lean_dec(v_x_1598_);
v_x_1596_ = v_fn_1662_;
v_x_1597_ = v___x_1664_;
v_x_1598_ = v___x_1666_;
goto _start;
}
else
{
lean_dec(v_x_1598_);
if (v_skipConstInApp_1595_ == 0)
{
goto v___jp_1657_;
}
else
{
uint8_t v___x_1668_; 
v___x_1668_ = l_Lean_Expr_isConst(v_x_1596_);
if (v___x_1668_ == 0)
{
goto v___jp_1657_;
}
else
{
v_f_1607_ = v_x_1596_;
v___y_1608_ = v___y_1599_;
v___y_1609_ = v___y_1600_;
v___y_1610_ = v___y_1601_;
v___y_1611_ = v___y_1602_;
v___y_1612_ = v___y_1603_;
v___y_1613_ = v___y_1604_;
goto v___jp_1606_;
}
}
}
v___jp_1606_:
{
if (v_skipInstances_1591_ == 0)
{
size_t v_sz_1614_; size_t v___x_1615_; lean_object* v___x_1616_; 
v_sz_1614_ = lean_array_size(v_x_1597_);
v___x_1615_ = ((size_t)0ULL);
lean_inc_ref(v_post_1593_);
lean_inc_ref(v_pre_1592_);
v___x_1616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(v_pre_1592_, v_post_1593_, v_usedLetOnly_1594_, v_skipConstInApp_1595_, v_skipInstances_1591_, v_sz_1614_, v___x_1615_, v_x_1597_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v_a_1617_; lean_object* v_fst_1618_; lean_object* v_snd_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
lean_inc(v_a_1617_);
lean_dec_ref_known(v___x_1616_, 1);
v_fst_1618_ = lean_ctor_get(v_a_1617_, 0);
lean_inc(v_fst_1618_);
v_snd_1619_ = lean_ctor_get(v_a_1617_, 1);
lean_inc(v_snd_1619_);
lean_dec(v_a_1617_);
v___x_1620_ = l_Lean_mkAppN(v_f_1607_, v_fst_1618_);
lean_dec(v_fst_1618_);
v___x_1621_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1592_, v_post_1593_, v_usedLetOnly_1594_, v_skipConstInApp_1595_, v_skipInstances_1591_, v___x_1620_, v___y_1608_, v_snd_1619_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
return v___x_1621_;
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec_ref(v_f_1607_);
lean_dec_ref(v_post_1593_);
lean_dec_ref(v_pre_1592_);
v_a_1622_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1616_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1616_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = lean_array_get_size(v_x_1597_);
lean_inc_ref(v_f_1607_);
v___x_1631_ = l_Lean_Meta_getFunInfoNArgs(v_f_1607_, v___x_1630_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v_paramInfo_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1631_, 1);
v_paramInfo_1633_ = lean_ctor_get(v_a_1632_, 0);
lean_inc_ref(v_paramInfo_1633_);
lean_dec(v_a_1632_);
v___x_1634_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1593_);
lean_inc_ref(v_pre_1592_);
v___x_1635_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v___x_1630_, v_paramInfo_1633_, v_pre_1592_, v_post_1593_, v_usedLetOnly_1594_, v_skipConstInApp_1595_, v_skipInstances_1591_, v___x_1634_, v_x_1597_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec_ref(v_paramInfo_1633_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v_fst_1637_; lean_object* v_snd_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_a_1636_);
lean_dec_ref_known(v___x_1635_, 1);
v_fst_1637_ = lean_ctor_get(v_a_1636_, 0);
lean_inc(v_fst_1637_);
v_snd_1638_ = lean_ctor_get(v_a_1636_, 1);
lean_inc(v_snd_1638_);
lean_dec(v_a_1636_);
v___x_1639_ = l_Lean_mkAppN(v_f_1607_, v_fst_1637_);
lean_dec(v_fst_1637_);
v___x_1640_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1592_, v_post_1593_, v_usedLetOnly_1594_, v_skipConstInApp_1595_, v_skipInstances_1591_, v___x_1639_, v___y_1608_, v_snd_1638_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
return v___x_1640_;
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_dec_ref(v_f_1607_);
lean_dec_ref(v_post_1593_);
lean_dec_ref(v_pre_1592_);
v_a_1641_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1635_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1635_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec(v___y_1609_);
lean_dec_ref(v_f_1607_);
lean_dec_ref(v_x_1597_);
lean_dec_ref(v_post_1593_);
lean_dec_ref(v_pre_1592_);
v_a_1649_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1631_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1631_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
}
v___jp_1657_:
{
lean_object* v___x_1658_; 
lean_inc_ref(v_post_1593_);
lean_inc_ref(v_pre_1592_);
v___x_1658_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1592_, v_post_1593_, v_usedLetOnly_1594_, v_skipConstInApp_1595_, v_skipInstances_1591_, v_x_1596_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v_fst_1660_; lean_object* v_snd_1661_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1658_, 1);
v_fst_1660_ = lean_ctor_get(v_a_1659_, 0);
lean_inc(v_fst_1660_);
v_snd_1661_ = lean_ctor_get(v_a_1659_, 1);
lean_inc(v_snd_1661_);
lean_dec(v_a_1659_);
v_f_1607_ = v_fst_1660_;
v___y_1608_ = v___y_1599_;
v___y_1609_ = v_snd_1661_;
v___y_1610_ = v___y_1601_;
v___y_1611_ = v___y_1602_;
v___y_1612_ = v___y_1603_;
v___y_1613_ = v___y_1604_;
goto v___jp_1606_;
}
else
{
lean_dec_ref(v_x_1597_);
lean_dec_ref(v_post_1593_);
lean_dec_ref(v_pre_1592_);
return v___x_1658_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object* v___x_1669_, lean_object* v_pre_1670_, lean_object* v_e_1671_, lean_object* v_post_1672_, uint8_t v_usedLetOnly_1673_, uint8_t v_skipConstInApp_1674_, uint8_t v_skipInstances_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_Core_checkSystem(v___x_1669_, v___y_1680_, v___y_1681_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v___x_1684_; 
lean_dec_ref_known(v___x_1683_, 1);
lean_inc_ref(v_pre_1670_);
lean_inc(v___y_1681_);
lean_inc_ref(v___y_1680_);
lean_inc(v___y_1679_);
lean_inc_ref(v___y_1678_);
lean_inc_ref(v_e_1671_);
v___x_1684_ = lean_apply_7(v_pre_1670_, v_e_1671_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, lean_box(0));
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1746_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1746_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1746_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v_fst_1689_; lean_object* v_snd_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1745_; 
v_fst_1689_ = lean_ctor_get(v_a_1685_, 0);
v_snd_1690_ = lean_ctor_get(v_a_1685_, 1);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_a_1685_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1692_ = v_a_1685_;
v_isShared_1693_ = v_isSharedCheck_1745_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_snd_1690_);
lean_inc(v_fst_1689_);
lean_dec(v_a_1685_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1745_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___y_1695_; 
switch(lean_obj_tag(v_fst_1689_))
{
case 0:
{
lean_object* v_e_1734_; lean_object* v___x_1736_; 
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_e_1671_);
lean_dec_ref(v_pre_1670_);
v_e_1734_ = lean_ctor_get(v_fst_1689_, 0);
lean_inc_ref(v_e_1734_);
lean_dec_ref_known(v_fst_1689_, 1);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v_e_1734_);
v___x_1736_ = v___x_1692_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_e_1734_);
lean_ctor_set(v_reuseFailAlloc_1740_, 1, v_snd_1690_);
v___x_1736_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1738_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v___x_1736_);
v___x_1738_ = v___x_1687_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
case 1:
{
lean_object* v_e_1741_; lean_object* v___x_1742_; 
lean_del_object(v___x_1692_);
lean_del_object(v___x_1687_);
lean_dec_ref(v_e_1671_);
v_e_1741_ = lean_ctor_get(v_fst_1689_, 0);
lean_inc_ref(v_e_1741_);
lean_dec_ref_known(v_fst_1689_, 1);
v___x_1742_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v_e_1741_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1742_;
}
default: 
{
lean_object* v_e_x3f_1743_; 
lean_del_object(v___x_1692_);
lean_del_object(v___x_1687_);
v_e_x3f_1743_ = lean_ctor_get(v_fst_1689_, 0);
lean_inc(v_e_x3f_1743_);
lean_dec_ref_known(v_fst_1689_, 1);
if (lean_obj_tag(v_e_x3f_1743_) == 0)
{
v___y_1695_ = v_e_1671_;
goto v___jp_1694_;
}
else
{
lean_object* v_val_1744_; 
lean_dec_ref(v_e_1671_);
v_val_1744_ = lean_ctor_get(v_e_x3f_1743_, 0);
lean_inc(v_val_1744_);
lean_dec_ref_known(v_e_x3f_1743_, 1);
v___y_1695_ = v_val_1744_;
goto v___jp_1694_;
}
}
}
v___jp_1694_:
{
switch(lean_obj_tag(v___y_1695_))
{
case 7:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1697_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1696_, v___y_1695_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1697_;
}
case 6:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1698_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1699_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1698_, v___y_1695_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1699_;
}
case 8:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1701_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1700_, v___y_1695_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1701_;
}
case 5:
{
lean_object* v_dummy_1702_; lean_object* v_nargs_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v_dummy_1702_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_1703_ = l_Lean_Expr_getAppNumArgs(v___y_1695_);
lean_inc(v_nargs_1703_);
v___x_1704_ = lean_mk_array(v_nargs_1703_, v_dummy_1702_);
v___x_1705_ = lean_unsigned_to_nat(1u);
v___x_1706_ = lean_nat_sub(v_nargs_1703_, v___x_1705_);
lean_dec(v_nargs_1703_);
v___x_1707_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_skipInstances_1675_, v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v___y_1695_, v___x_1704_, v___x_1706_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1707_;
}
case 10:
{
lean_object* v_data_1708_; lean_object* v_expr_1709_; lean_object* v___x_1710_; 
v_data_1708_ = lean_ctor_get(v___y_1695_, 0);
v_expr_1709_ = lean_ctor_get(v___y_1695_, 1);
lean_inc_ref(v_expr_1709_);
lean_inc_ref(v_post_1672_);
lean_inc_ref(v_pre_1670_);
v___x_1710_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v_expr_1709_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v_fst_1712_; lean_object* v_snd_1713_; size_t v___x_1714_; size_t v___x_1715_; uint8_t v___x_1716_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v___x_1710_, 1);
v_fst_1712_ = lean_ctor_get(v_a_1711_, 0);
lean_inc(v_fst_1712_);
v_snd_1713_ = lean_ctor_get(v_a_1711_, 1);
lean_inc(v_snd_1713_);
lean_dec(v_a_1711_);
v___x_1714_ = lean_ptr_addr(v_expr_1709_);
v___x_1715_ = lean_ptr_addr(v_fst_1712_);
v___x_1716_ = lean_usize_dec_eq(v___x_1714_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_inc(v_data_1708_);
lean_dec_ref_known(v___y_1695_, 2);
v___x_1717_ = l_Lean_Expr_mdata___override(v_data_1708_, v_fst_1712_);
v___x_1718_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1717_, v___y_1676_, v_snd_1713_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1718_;
}
else
{
lean_object* v___x_1719_; 
lean_dec(v_fst_1712_);
v___x_1719_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___y_1695_, v___y_1676_, v_snd_1713_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1719_;
}
}
else
{
lean_dec_ref_known(v___y_1695_, 2);
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_pre_1670_);
return v___x_1710_;
}
}
case 11:
{
lean_object* v_typeName_1720_; lean_object* v_idx_1721_; lean_object* v_struct_1722_; lean_object* v___x_1723_; 
v_typeName_1720_ = lean_ctor_get(v___y_1695_, 0);
v_idx_1721_ = lean_ctor_get(v___y_1695_, 1);
v_struct_1722_ = lean_ctor_get(v___y_1695_, 2);
lean_inc_ref(v_struct_1722_);
lean_inc_ref(v_post_1672_);
lean_inc_ref(v_pre_1670_);
v___x_1723_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v_struct_1722_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v_fst_1725_; lean_object* v_snd_1726_; size_t v___x_1727_; size_t v___x_1728_; uint8_t v___x_1729_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v_fst_1725_ = lean_ctor_get(v_a_1724_, 0);
lean_inc(v_fst_1725_);
v_snd_1726_ = lean_ctor_get(v_a_1724_, 1);
lean_inc(v_snd_1726_);
lean_dec(v_a_1724_);
v___x_1727_ = lean_ptr_addr(v_struct_1722_);
v___x_1728_ = lean_ptr_addr(v_fst_1725_);
v___x_1729_ = lean_usize_dec_eq(v___x_1727_, v___x_1728_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_inc(v_idx_1721_);
lean_inc(v_typeName_1720_);
lean_dec_ref_known(v___y_1695_, 3);
v___x_1730_ = l_Lean_Expr_proj___override(v_typeName_1720_, v_idx_1721_, v_fst_1725_);
v___x_1731_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1730_, v___y_1676_, v_snd_1726_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1731_;
}
else
{
lean_object* v___x_1732_; 
lean_dec(v_fst_1725_);
v___x_1732_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___y_1695_, v___y_1676_, v_snd_1726_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1732_;
}
}
else
{
lean_dec_ref_known(v___y_1695_, 3);
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_pre_1670_);
return v___x_1723_;
}
}
default: 
{
lean_object* v___x_1733_; 
v___x_1733_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1670_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___y_1695_, v___y_1676_, v_snd_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1733_;
}
}
}
}
}
}
else
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_e_1671_);
lean_dec_ref(v_pre_1670_);
v_a_1747_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1684_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1684_);
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
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
lean_dec(v___y_1677_);
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_e_1671_);
lean_dec_ref(v_pre_1670_);
v_a_1755_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___x_1683_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1683_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object* v___x_1763_, lean_object* v_pre_1764_, lean_object* v_e_1765_, lean_object* v_post_1766_, lean_object* v_usedLetOnly_1767_, lean_object* v_skipConstInApp_1768_, lean_object* v_skipInstances_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
uint8_t v_usedLetOnly_boxed_1777_; uint8_t v_skipConstInApp_boxed_1778_; uint8_t v_skipInstances_boxed_1779_; lean_object* v_res_1780_; 
v_usedLetOnly_boxed_1777_ = lean_unbox(v_usedLetOnly_1767_);
v_skipConstInApp_boxed_1778_ = lean_unbox(v_skipConstInApp_1768_);
v_skipInstances_boxed_1779_ = lean_unbox(v_skipInstances_1769_);
v_res_1780_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(v___x_1763_, v_pre_1764_, v_e_1765_, v_post_1766_, v_usedLetOnly_boxed_1777_, v_skipConstInApp_boxed_1778_, v_skipInstances_boxed_1779_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1770_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object* v_pre_1781_, lean_object* v_post_1782_, uint8_t v_usedLetOnly_1783_, uint8_t v_skipConstInApp_1784_, uint8_t v_skipInstances_1785_, lean_object* v_e_1786_, lean_object* v_a_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_inc(v_a_1787_);
v___x_1794_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1794_, 0, lean_box(0));
lean_closure_set(v___x_1794_, 1, lean_box(0));
lean_closure_set(v___x_1794_, 2, v_a_1787_);
v___x_1795_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___x_1794_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1850_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1798_ = v___x_1795_;
v_isShared_1799_ = v_isSharedCheck_1850_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1795_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1850_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_fst_1800_; lean_object* v_snd_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1849_; 
v_fst_1800_ = lean_ctor_get(v_a_1796_, 0);
v_snd_1801_ = lean_ctor_get(v_a_1796_, 1);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_a_1796_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1803_ = v_a_1796_;
v_isShared_1804_ = v_isSharedCheck_1849_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_snd_1801_);
lean_inc(v_fst_1800_);
lean_dec(v_a_1796_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1849_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_fst_1800_, v_e_1786_);
lean_dec(v_fst_1800_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___f_1810_; lean_object* v___x_1811_; 
lean_del_object(v___x_1803_);
lean_del_object(v___x_1798_);
v___x_1806_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0));
v___x_1807_ = lean_box(v_usedLetOnly_1783_);
v___x_1808_ = lean_box(v_skipConstInApp_1784_);
v___x_1809_ = lean_box(v_skipInstances_1785_);
lean_inc_ref(v_e_1786_);
v___f_1810_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1810_, 0, v___x_1806_);
lean_closure_set(v___f_1810_, 1, v_pre_1781_);
lean_closure_set(v___f_1810_, 2, v_e_1786_);
lean_closure_set(v___f_1810_, 3, v_post_1782_);
lean_closure_set(v___f_1810_, 4, v___x_1807_);
lean_closure_set(v___f_1810_, 5, v___x_1808_);
lean_closure_set(v___f_1810_, 6, v___x_1809_);
v___x_1811_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v___f_1810_, v_a_1787_, v_snd_1801_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v_fst_1813_; lean_object* v_snd_1814_; lean_object* v___f_1815_; lean_object* v___x_1816_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v___x_1811_, 1);
v_fst_1813_ = lean_ctor_get(v_a_1812_, 0);
lean_inc_n(v_fst_1813_, 2);
v_snd_1814_ = lean_ctor_get(v_a_1812_, 1);
lean_inc(v_snd_1814_);
lean_dec(v_a_1812_);
lean_inc(v_a_1787_);
v___f_1815_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1815_, 0, v_a_1787_);
lean_closure_set(v___f_1815_, 1, v_e_1786_);
lean_closure_set(v___f_1815_, 2, v_fst_1813_);
v___x_1816_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___f_1815_, v_snd_1814_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1833_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1833_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1833_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v_snd_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1831_; 
v_snd_1821_ = lean_ctor_get(v_a_1817_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_a_1817_);
if (v_isSharedCheck_1831_ == 0)
{
lean_object* v_unused_1832_; 
v_unused_1832_ = lean_ctor_get(v_a_1817_, 0);
lean_dec(v_unused_1832_);
v___x_1823_ = v_a_1817_;
v_isShared_1824_ = v_isSharedCheck_1831_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_snd_1821_);
lean_dec(v_a_1817_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1831_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 0, v_fst_1813_);
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_fst_1813_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_snd_1821_);
v___x_1826_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1828_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1826_);
v___x_1828_ = v___x_1819_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v___x_1826_);
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
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
lean_dec(v_fst_1813_);
v_a_1834_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1816_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1816_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
}
else
{
lean_dec_ref(v_e_1786_);
return v___x_1811_;
}
}
else
{
lean_object* v_val_1842_; lean_object* v___x_1844_; 
lean_dec_ref(v_e_1786_);
lean_dec_ref(v_post_1782_);
lean_dec_ref(v_pre_1781_);
v_val_1842_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_val_1842_);
lean_dec_ref_known(v___x_1805_, 1);
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v_val_1842_);
v___x_1844_ = v___x_1803_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_val_1842_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v_snd_1801_);
v___x_1844_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1846_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1844_);
v___x_1846_ = v___x_1798_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1844_);
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
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec_ref(v_e_1786_);
lean_dec_ref(v_post_1782_);
lean_dec_ref(v_pre_1781_);
v_a_1851_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1795_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1795_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object* v_pre_1859_, lean_object* v_post_1860_, uint8_t v_usedLetOnly_1861_, uint8_t v_skipConstInApp_1862_, uint8_t v_skipInstances_1863_, lean_object* v_fvars_1864_, lean_object* v_e_1865_, lean_object* v_a_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
if (lean_obj_tag(v_e_1865_) == 7)
{
lean_object* v_binderName_1873_; lean_object* v_binderType_1874_; lean_object* v_body_1875_; uint8_t v_binderInfo_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___f_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v_binderName_1873_ = lean_ctor_get(v_e_1865_, 0);
lean_inc(v_binderName_1873_);
v_binderType_1874_ = lean_ctor_get(v_e_1865_, 1);
lean_inc_ref(v_binderType_1874_);
v_body_1875_ = lean_ctor_get(v_e_1865_, 2);
lean_inc_ref(v_body_1875_);
v_binderInfo_1876_ = lean_ctor_get_uint8(v_e_1865_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1865_, 3);
v___x_1877_ = lean_box(v_usedLetOnly_1861_);
v___x_1878_ = lean_box(v_skipConstInApp_1862_);
v___x_1879_ = lean_box(v_skipInstances_1863_);
lean_inc_ref(v_post_1860_);
lean_inc_ref(v_pre_1859_);
lean_inc_ref(v_fvars_1864_);
v___f_1880_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1880_, 0, v_fvars_1864_);
lean_closure_set(v___f_1880_, 1, v_pre_1859_);
lean_closure_set(v___f_1880_, 2, v_post_1860_);
lean_closure_set(v___f_1880_, 3, v___x_1877_);
lean_closure_set(v___f_1880_, 4, v___x_1878_);
lean_closure_set(v___f_1880_, 5, v___x_1879_);
lean_closure_set(v___f_1880_, 6, v_body_1875_);
v___x_1881_ = lean_expr_instantiate_rev(v_binderType_1874_, v_fvars_1864_);
lean_dec_ref(v_fvars_1864_);
lean_dec_ref(v_binderType_1874_);
v___x_1882_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1859_, v_post_1860_, v_usedLetOnly_1861_, v_skipConstInApp_1862_, v_skipInstances_1863_, v___x_1881_, v_a_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v_fst_1884_; lean_object* v_snd_1885_; uint8_t v___x_1886_; lean_object* v___x_1887_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v_fst_1884_ = lean_ctor_get(v_a_1883_, 0);
lean_inc(v_fst_1884_);
v_snd_1885_ = lean_ctor_get(v_a_1883_, 1);
lean_inc(v_snd_1885_);
lean_dec(v_a_1883_);
v___x_1886_ = 0;
v___x_1887_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_binderName_1873_, v_binderInfo_1876_, v_fst_1884_, v___f_1880_, v___x_1886_, v_a_1866_, v_snd_1885_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
return v___x_1887_;
}
else
{
lean_dec_ref(v___f_1880_);
lean_dec(v_binderName_1873_);
return v___x_1882_;
}
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = lean_expr_instantiate_rev(v_e_1865_, v_fvars_1864_);
lean_dec_ref(v_e_1865_);
lean_inc_ref(v_post_1860_);
lean_inc_ref(v_pre_1859_);
v___x_1889_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1859_, v_post_1860_, v_usedLetOnly_1861_, v_skipConstInApp_1862_, v_skipInstances_1863_, v___x_1888_, v_a_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v_fst_1891_; lean_object* v_snd_1892_; uint8_t v___x_1893_; uint8_t v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref_known(v___x_1889_, 1);
v_fst_1891_ = lean_ctor_get(v_a_1890_, 0);
lean_inc(v_fst_1891_);
v_snd_1892_ = lean_ctor_get(v_a_1890_, 1);
lean_inc(v_snd_1892_);
lean_dec(v_a_1890_);
v___x_1893_ = 0;
v___x_1894_ = 1;
v___x_1895_ = 1;
v___x_1896_ = l_Lean_Meta_mkForallFVars(v_fvars_1864_, v_fst_1891_, v___x_1893_, v_usedLetOnly_1861_, v___x_1894_, v___x_1895_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec_ref(v_fvars_1864_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1859_, v_post_1860_, v_usedLetOnly_1861_, v_skipConstInApp_1862_, v_skipInstances_1863_, v_a_1897_, v_a_1866_, v_snd_1892_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
return v___x_1898_;
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_dec(v_snd_1892_);
lean_dec_ref(v_post_1860_);
lean_dec_ref(v_pre_1859_);
v_a_1899_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1896_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1896_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1864_);
lean_dec_ref(v_post_1860_);
lean_dec_ref(v_pre_1859_);
return v___x_1889_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(lean_object* v_fvars_1907_, lean_object* v_pre_1908_, lean_object* v_post_1909_, uint8_t v_usedLetOnly_1910_, uint8_t v_skipConstInApp_1911_, uint8_t v_skipInstances_1912_, lean_object* v_body_1913_, lean_object* v_x_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = lean_array_push(v_fvars_1907_, v_x_1914_);
v___x_1923_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1908_, v_post_1909_, v_usedLetOnly_1910_, v_skipConstInApp_1911_, v_skipInstances_1912_, v___x_1922_, v_body_1913_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8___boxed(lean_object* v_pre_1924_, lean_object* v_post_1925_, lean_object* v_usedLetOnly_1926_, lean_object* v_skipConstInApp_1927_, lean_object* v_skipInstances_1928_, lean_object* v_sz_1929_, lean_object* v_i_1930_, lean_object* v_bs_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
uint8_t v_usedLetOnly_boxed_1939_; uint8_t v_skipConstInApp_boxed_1940_; uint8_t v_skipInstances_boxed_1941_; size_t v_sz_boxed_1942_; size_t v_i_boxed_1943_; lean_object* v_res_1944_; 
v_usedLetOnly_boxed_1939_ = lean_unbox(v_usedLetOnly_1926_);
v_skipConstInApp_boxed_1940_ = lean_unbox(v_skipConstInApp_1927_);
v_skipInstances_boxed_1941_ = lean_unbox(v_skipInstances_1928_);
v_sz_boxed_1942_ = lean_unbox_usize(v_sz_1929_);
lean_dec(v_sz_1929_);
v_i_boxed_1943_ = lean_unbox_usize(v_i_1930_);
lean_dec(v_i_1930_);
v_res_1944_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(v_pre_1924_, v_post_1925_, v_usedLetOnly_boxed_1939_, v_skipConstInApp_boxed_1940_, v_skipInstances_boxed_1941_, v_sz_boxed_1942_, v_i_boxed_1943_, v_bs_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1932_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object* v_pre_1945_, lean_object* v_post_1946_, lean_object* v_usedLetOnly_1947_, lean_object* v_skipConstInApp_1948_, lean_object* v_skipInstances_1949_, lean_object* v_e_1950_, lean_object* v_a_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
uint8_t v_usedLetOnly_boxed_1958_; uint8_t v_skipConstInApp_boxed_1959_; uint8_t v_skipInstances_boxed_1960_; lean_object* v_res_1961_; 
v_usedLetOnly_boxed_1958_ = lean_unbox(v_usedLetOnly_1947_);
v_skipConstInApp_boxed_1959_ = lean_unbox(v_skipConstInApp_1948_);
v_skipInstances_boxed_1960_ = lean_unbox(v_skipInstances_1949_);
v_res_1961_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1945_, v_post_1946_, v_usedLetOnly_boxed_1958_, v_skipConstInApp_boxed_1959_, v_skipInstances_boxed_1960_, v_e_1950_, v_a_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v_a_1951_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object* v_pre_1962_, lean_object* v_post_1963_, lean_object* v_usedLetOnly_1964_, lean_object* v_skipConstInApp_1965_, lean_object* v_skipInstances_1966_, lean_object* v_fvars_1967_, lean_object* v_e_1968_, lean_object* v_a_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
uint8_t v_usedLetOnly_boxed_1976_; uint8_t v_skipConstInApp_boxed_1977_; uint8_t v_skipInstances_boxed_1978_; lean_object* v_res_1979_; 
v_usedLetOnly_boxed_1976_ = lean_unbox(v_usedLetOnly_1964_);
v_skipConstInApp_boxed_1977_ = lean_unbox(v_skipConstInApp_1965_);
v_skipInstances_boxed_1978_ = lean_unbox(v_skipInstances_1966_);
v_res_1979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1962_, v_post_1963_, v_usedLetOnly_boxed_1976_, v_skipConstInApp_boxed_1977_, v_skipInstances_boxed_1978_, v_fvars_1967_, v_e_1968_, v_a_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_a_1969_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object* v_pre_1980_, lean_object* v_post_1981_, lean_object* v_usedLetOnly_1982_, lean_object* v_skipConstInApp_1983_, lean_object* v_skipInstances_1984_, lean_object* v_fvars_1985_, lean_object* v_e_1986_, lean_object* v_a_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
uint8_t v_usedLetOnly_boxed_1994_; uint8_t v_skipConstInApp_boxed_1995_; uint8_t v_skipInstances_boxed_1996_; lean_object* v_res_1997_; 
v_usedLetOnly_boxed_1994_ = lean_unbox(v_usedLetOnly_1982_);
v_skipConstInApp_boxed_1995_ = lean_unbox(v_skipConstInApp_1983_);
v_skipInstances_boxed_1996_ = lean_unbox(v_skipInstances_1984_);
v_res_1997_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1980_, v_post_1981_, v_usedLetOnly_boxed_1994_, v_skipConstInApp_boxed_1995_, v_skipInstances_boxed_1996_, v_fvars_1985_, v_e_1986_, v_a_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v_a_1987_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object* v_pre_1998_, lean_object* v_post_1999_, lean_object* v_usedLetOnly_2000_, lean_object* v_skipConstInApp_2001_, lean_object* v_skipInstances_2002_, lean_object* v_e_2003_, lean_object* v_a_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
uint8_t v_usedLetOnly_boxed_2011_; uint8_t v_skipConstInApp_boxed_2012_; uint8_t v_skipInstances_boxed_2013_; lean_object* v_res_2014_; 
v_usedLetOnly_boxed_2011_ = lean_unbox(v_usedLetOnly_2000_);
v_skipConstInApp_boxed_2012_ = lean_unbox(v_skipConstInApp_2001_);
v_skipInstances_boxed_2013_ = lean_unbox(v_skipInstances_2002_);
v_res_2014_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1998_, v_post_1999_, v_usedLetOnly_boxed_2011_, v_skipConstInApp_boxed_2012_, v_skipInstances_boxed_2013_, v_e_2003_, v_a_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_a_2004_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object* v_pre_2015_, lean_object* v_post_2016_, lean_object* v_usedLetOnly_2017_, lean_object* v_skipConstInApp_2018_, lean_object* v_skipInstances_2019_, lean_object* v_fvars_2020_, lean_object* v_e_2021_, lean_object* v_a_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
uint8_t v_usedLetOnly_boxed_2029_; uint8_t v_skipConstInApp_boxed_2030_; uint8_t v_skipInstances_boxed_2031_; lean_object* v_res_2032_; 
v_usedLetOnly_boxed_2029_ = lean_unbox(v_usedLetOnly_2017_);
v_skipConstInApp_boxed_2030_ = lean_unbox(v_skipConstInApp_2018_);
v_skipInstances_boxed_2031_ = lean_unbox(v_skipInstances_2019_);
v_res_2032_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_2015_, v_post_2016_, v_usedLetOnly_boxed_2029_, v_skipConstInApp_boxed_2030_, v_skipInstances_boxed_2031_, v_fvars_2020_, v_e_2021_, v_a_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v_a_2022_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_2033_, lean_object* v___x_2034_, lean_object* v_pre_2035_, lean_object* v_post_2036_, lean_object* v_usedLetOnly_2037_, lean_object* v_skipConstInApp_2038_, lean_object* v_skipInstances_2039_, lean_object* v_a_2040_, lean_object* v_b_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
uint8_t v_usedLetOnly_boxed_2049_; uint8_t v_skipConstInApp_boxed_2050_; uint8_t v_skipInstances_boxed_2051_; lean_object* v_res_2052_; 
v_usedLetOnly_boxed_2049_ = lean_unbox(v_usedLetOnly_2037_);
v_skipConstInApp_boxed_2050_ = lean_unbox(v_skipConstInApp_2038_);
v_skipInstances_boxed_2051_ = lean_unbox(v_skipInstances_2039_);
v_res_2052_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v_upperBound_2033_, v___x_2034_, v_pre_2035_, v_post_2036_, v_usedLetOnly_boxed_2049_, v_skipConstInApp_boxed_2050_, v_skipInstances_boxed_2051_, v_a_2040_, v_b_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2042_);
lean_dec_ref(v___x_2034_);
lean_dec(v_upperBound_2033_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object* v_skipInstances_2053_, lean_object* v_pre_2054_, lean_object* v_post_2055_, lean_object* v_usedLetOnly_2056_, lean_object* v_skipConstInApp_2057_, lean_object* v_x_2058_, lean_object* v_x_2059_, lean_object* v_x_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
uint8_t v_skipInstances_boxed_2068_; uint8_t v_usedLetOnly_boxed_2069_; uint8_t v_skipConstInApp_boxed_2070_; lean_object* v_res_2071_; 
v_skipInstances_boxed_2068_ = lean_unbox(v_skipInstances_2053_);
v_usedLetOnly_boxed_2069_ = lean_unbox(v_usedLetOnly_2056_);
v_skipConstInApp_boxed_2070_ = lean_unbox(v_skipConstInApp_2057_);
v_res_2071_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_skipInstances_boxed_2068_, v_pre_2054_, v_post_2055_, v_usedLetOnly_boxed_2069_, v_skipConstInApp_boxed_2070_, v_x_2058_, v_x_2059_, v_x_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2061_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object* v_00_u03b1_2072_, lean_object* v_x_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2080_ = lean_apply_1(v_x_2073_, lean_box(0));
v___x_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
lean_ctor_set(v___x_2081_, 1, v___y_2074_);
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2083_, lean_object* v_x_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_){
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(v_00_u03b1_2083_, v_x_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec_ref(v___y_2086_);
return v_res_2091_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2092_ = lean_box(0);
v___x_2093_ = lean_unsigned_to_nat(16u);
v___x_2094_ = lean_mk_array(v___x_2093_, v___x_2092_);
return v___x_2094_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2095_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0);
v___x_2096_ = lean_unsigned_to_nat(0u);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
lean_ctor_set(v___x_2097_, 1, v___x_2095_);
return v___x_2097_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2098_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1);
v___x_2099_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2099_, 0, lean_box(0));
lean_closure_set(v___x_2099_, 1, lean_box(0));
lean_closure_set(v___x_2099_, 2, v___x_2098_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object* v_input_2100_, lean_object* v_pre_2101_, lean_object* v_post_2102_, uint8_t v_usedLetOnly_2103_, uint8_t v_skipConstInApp_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
uint8_t v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v_a_2114_; lean_object* v_fst_2115_; lean_object* v_snd_2116_; lean_object* v___x_2117_; 
v___x_2111_ = 0;
v___x_2112_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2);
v___x_2113_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2112_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
lean_inc(v_a_2114_);
lean_dec_ref(v___x_2113_);
v_fst_2115_ = lean_ctor_get(v_a_2114_, 0);
lean_inc(v_fst_2115_);
v_snd_2116_ = lean_ctor_get(v_a_2114_, 1);
lean_inc(v_snd_2116_);
lean_dec(v_a_2114_);
v___x_2117_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_2101_, v_post_2102_, v_usedLetOnly_2103_, v_skipConstInApp_2104_, v___x_2111_, v_input_2100_, v_fst_2115_, v_snd_2116_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v_fst_2119_; lean_object* v_snd_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2139_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2117_, 1);
v_fst_2119_ = lean_ctor_get(v_a_2118_, 0);
lean_inc(v_fst_2119_);
v_snd_2120_ = lean_ctor_get(v_a_2118_, 1);
lean_inc(v_snd_2120_);
lean_dec(v_a_2118_);
v___x_2121_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2121_, 0, lean_box(0));
lean_closure_set(v___x_2121_, 1, lean_box(0));
lean_closure_set(v___x_2121_, 2, v_fst_2115_);
v___x_2122_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2121_, v_snd_2120_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2139_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2139_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_snd_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2137_; 
v_snd_2127_ = lean_ctor_get(v_a_2123_, 1);
v_isSharedCheck_2137_ = !lean_is_exclusive(v_a_2123_);
if (v_isSharedCheck_2137_ == 0)
{
lean_object* v_unused_2138_; 
v_unused_2138_ = lean_ctor_get(v_a_2123_, 0);
lean_dec(v_unused_2138_);
v___x_2129_ = v_a_2123_;
v_isShared_2130_ = v_isSharedCheck_2137_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_snd_2127_);
lean_dec(v_a_2123_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2137_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v_fst_2119_);
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_fst_2119_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_snd_2127_);
v___x_2132_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2134_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2132_);
v___x_2134_ = v___x_2125_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2132_);
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
}
else
{
lean_dec(v_fst_2115_);
return v___x_2117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object* v_input_2140_, lean_object* v_pre_2141_, lean_object* v_post_2142_, lean_object* v_usedLetOnly_2143_, lean_object* v_skipConstInApp_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
uint8_t v_usedLetOnly_boxed_2151_; uint8_t v_skipConstInApp_boxed_2152_; lean_object* v_res_2153_; 
v_usedLetOnly_boxed_2151_ = lean_unbox(v_usedLetOnly_2143_);
v_skipConstInApp_boxed_2152_ = lean_unbox(v_skipConstInApp_2144_);
v_res_2153_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_input_2140_, v_pre_2141_, v_post_2142_, v_usedLetOnly_boxed_2151_, v_skipConstInApp_boxed_2152_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object* v_e_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_){
_start:
{
lean_object* v___y_2163_; lean_object* v___x_2180_; uint8_t v_transparency_2181_; lean_object* v___f_2182_; lean_object* v___f_2183_; uint8_t v___x_2184_; uint8_t v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2180_ = l_Lean_Meta_Context_config(v_a_2157_);
v_transparency_2181_ = lean_ctor_get_uint8(v___x_2180_, 9);
lean_dec_ref(v___x_2180_);
v___f_2182_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__0));
v___f_2183_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__1));
v___x_2184_ = 0;
v___x_2185_ = 3;
v___x_2186_ = lean_box(0);
v___x_2187_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2181_, v___x_2185_);
if (v___x_2187_ == 0)
{
lean_object* v_keyedConfig_2188_; uint8_t v_trackZetaDelta_2189_; lean_object* v_zetaDeltaSet_2190_; lean_object* v_lctx_2191_; lean_object* v_localInstances_2192_; lean_object* v_defEqCtx_x3f_2193_; lean_object* v_synthPendingDepth_2194_; lean_object* v_customCanUnfoldPredicate_x3f_2195_; uint8_t v_univApprox_2196_; uint8_t v_inTypeClassResolution_2197_; uint8_t v_cacheInferType_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v_keyedConfig_2188_ = lean_ctor_get(v_a_2157_, 0);
v_trackZetaDelta_2189_ = lean_ctor_get_uint8(v_a_2157_, sizeof(void*)*7);
v_zetaDeltaSet_2190_ = lean_ctor_get(v_a_2157_, 1);
v_lctx_2191_ = lean_ctor_get(v_a_2157_, 2);
v_localInstances_2192_ = lean_ctor_get(v_a_2157_, 3);
v_defEqCtx_x3f_2193_ = lean_ctor_get(v_a_2157_, 4);
v_synthPendingDepth_2194_ = lean_ctor_get(v_a_2157_, 5);
v_customCanUnfoldPredicate_x3f_2195_ = lean_ctor_get(v_a_2157_, 6);
v_univApprox_2196_ = lean_ctor_get_uint8(v_a_2157_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2197_ = lean_ctor_get_uint8(v_a_2157_, sizeof(void*)*7 + 2);
v_cacheInferType_2198_ = lean_ctor_get_uint8(v_a_2157_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2188_);
v___x_2199_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2185_, v_keyedConfig_2188_);
lean_inc(v_customCanUnfoldPredicate_x3f_2195_);
lean_inc(v_synthPendingDepth_2194_);
lean_inc(v_defEqCtx_x3f_2193_);
lean_inc_ref(v_localInstances_2192_);
lean_inc_ref(v_lctx_2191_);
lean_inc(v_zetaDeltaSet_2190_);
v___x_2200_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
lean_ctor_set(v___x_2200_, 1, v_zetaDeltaSet_2190_);
lean_ctor_set(v___x_2200_, 2, v_lctx_2191_);
lean_ctor_set(v___x_2200_, 3, v_localInstances_2192_);
lean_ctor_set(v___x_2200_, 4, v_defEqCtx_x3f_2193_);
lean_ctor_set(v___x_2200_, 5, v_synthPendingDepth_2194_);
lean_ctor_set(v___x_2200_, 6, v_customCanUnfoldPredicate_x3f_2195_);
lean_ctor_set_uint8(v___x_2200_, sizeof(void*)*7, v_trackZetaDelta_2189_);
lean_ctor_set_uint8(v___x_2200_, sizeof(void*)*7 + 1, v_univApprox_2196_);
lean_ctor_set_uint8(v___x_2200_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2197_);
lean_ctor_set_uint8(v___x_2200_, sizeof(void*)*7 + 3, v_cacheInferType_2198_);
v___x_2201_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2156_, v___f_2183_, v___f_2182_, v___x_2184_, v___x_2184_, v___x_2186_, v___x_2200_, v_a_2158_, v_a_2159_, v_a_2160_);
lean_dec_ref_known(v___x_2200_, 7);
v___y_2163_ = v___x_2201_;
goto v___jp_2162_;
}
else
{
lean_object* v___x_2202_; 
v___x_2202_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2156_, v___f_2183_, v___f_2182_, v___x_2184_, v___x_2184_, v___x_2186_, v_a_2157_, v_a_2158_, v_a_2159_, v_a_2160_);
v___y_2163_ = v___x_2202_;
goto v___jp_2162_;
}
v___jp_2162_:
{
if (lean_obj_tag(v___y_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v_a_2164_ = lean_ctor_get(v___y_2163_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___y_2163_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___y_2163_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___y_2163_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_a_2172_ = lean_ctor_get(v___y_2163_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___y_2163_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___y_2163_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___y_2163_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object* v_e_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lean_Meta_expandCoe(v_e_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_);
lean_dec(v_a_2207_);
lean_dec_ref(v_a_2206_);
lean_dec(v_a_2205_);
lean_dec_ref(v_a_2204_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object* v_00_u03b2_2210_, lean_object* v_m_2211_, lean_object* v_a_2212_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_2211_, v_a_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2214_, lean_object* v_m_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(v_00_u03b2_2214_, v_m_2215_, v_a_2216_);
lean_dec(v_a_2216_);
lean_dec_ref(v_m_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2218_, lean_object* v_x_2219_, lean_object* v_x_2220_){
_start:
{
uint8_t v___x_2221_; 
v___x_2221_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_2219_, v_x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2222_, lean_object* v_x_2223_, lean_object* v_x_2224_){
_start:
{
uint8_t v_res_2225_; lean_object* v_r_2226_; 
v_res_2225_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(v_00_u03b2_2222_, v_x_2223_, v_x_2224_);
lean_dec_ref(v_x_2224_);
lean_dec_ref(v_x_2223_);
v_r_2226_ = lean_box(v_res_2225_);
return v_r_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2227_, lean_object* v_a_2228_, lean_object* v_x_2229_){
_start:
{
lean_object* v___x_2230_; 
v___x_2230_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_2228_, v_x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2231_, lean_object* v_a_2232_, lean_object* v_x_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(v_00_u03b2_2231_, v_a_2232_, v_x_2233_);
lean_dec(v_x_2233_);
lean_dec(v_a_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object* v_upperBound_2235_, lean_object* v___x_2236_, lean_object* v_pre_2237_, lean_object* v_post_2238_, uint8_t v_usedLetOnly_2239_, uint8_t v_skipConstInApp_2240_, uint8_t v_skipInstances_2241_, lean_object* v___x_2242_, lean_object* v_inst_2243_, lean_object* v_R_2244_, lean_object* v_a_2245_, lean_object* v_b_2246_, lean_object* v_c_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v_upperBound_2235_, v___x_2236_, v_pre_2237_, v_post_2238_, v_usedLetOnly_2239_, v_skipConstInApp_2240_, v_skipInstances_2241_, v_a_2245_, v_b_2246_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object** _args){
lean_object* v_upperBound_2256_ = _args[0];
lean_object* v___x_2257_ = _args[1];
lean_object* v_pre_2258_ = _args[2];
lean_object* v_post_2259_ = _args[3];
lean_object* v_usedLetOnly_2260_ = _args[4];
lean_object* v_skipConstInApp_2261_ = _args[5];
lean_object* v_skipInstances_2262_ = _args[6];
lean_object* v___x_2263_ = _args[7];
lean_object* v_inst_2264_ = _args[8];
lean_object* v_R_2265_ = _args[9];
lean_object* v_a_2266_ = _args[10];
lean_object* v_b_2267_ = _args[11];
lean_object* v_c_2268_ = _args[12];
lean_object* v___y_2269_ = _args[13];
lean_object* v___y_2270_ = _args[14];
lean_object* v___y_2271_ = _args[15];
lean_object* v___y_2272_ = _args[16];
lean_object* v___y_2273_ = _args[17];
lean_object* v___y_2274_ = _args[18];
lean_object* v___y_2275_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2276_; uint8_t v_skipConstInApp_boxed_2277_; uint8_t v_skipInstances_boxed_2278_; lean_object* v_res_2279_; 
v_usedLetOnly_boxed_2276_ = lean_unbox(v_usedLetOnly_2260_);
v_skipConstInApp_boxed_2277_ = lean_unbox(v_skipConstInApp_2261_);
v_skipInstances_boxed_2278_ = lean_unbox(v_skipInstances_2262_);
v_res_2279_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_upperBound_2256_, v___x_2257_, v_pre_2258_, v_post_2259_, v_usedLetOnly_boxed_2276_, v_skipConstInApp_boxed_2277_, v_skipInstances_boxed_2278_, v___x_2263_, v_inst_2264_, v_R_2265_, v_a_2266_, v_b_2267_, v_c_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2269_);
lean_dec(v___x_2263_);
lean_dec_ref(v___x_2257_);
lean_dec(v_upperBound_2256_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object* v_00_u03b2_2280_, lean_object* v_m_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_m_2281_, v_a_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object* v_00_u03b2_2284_, lean_object* v_m_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(v_00_u03b2_2284_, v_m_2285_, v_a_2286_);
lean_dec_ref(v_a_2286_);
lean_dec_ref(v_m_2285_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object* v_00_u03b1_2288_, lean_object* v_name_2289_, uint8_t v_bi_2290_, lean_object* v_type_2291_, lean_object* v_k_2292_, uint8_t v_kind_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_name_2289_, v_bi_2290_, v_type_2291_, v_k_2292_, v_kind_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2302_, lean_object* v_name_2303_, lean_object* v_bi_2304_, lean_object* v_type_2305_, lean_object* v_k_2306_, lean_object* v_kind_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
uint8_t v_bi_boxed_2315_; uint8_t v_kind_boxed_2316_; lean_object* v_res_2317_; 
v_bi_boxed_2315_ = lean_unbox(v_bi_2304_);
v_kind_boxed_2316_ = lean_unbox(v_kind_2307_);
v_res_2317_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(v_00_u03b1_2302_, v_name_2303_, v_bi_boxed_2315_, v_type_2305_, v_k_2306_, v_kind_boxed_2316_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2308_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(lean_object* v_00_u03b1_2318_, lean_object* v_name_2319_, lean_object* v_type_2320_, lean_object* v_val_2321_, lean_object* v_k_2322_, uint8_t v_nondep_2323_, uint8_t v_kind_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v___x_2332_; 
v___x_2332_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_name_2319_, v_type_2320_, v_val_2321_, v_k_2322_, v_nondep_2323_, v_kind_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___boxed(lean_object* v_00_u03b1_2333_, lean_object* v_name_2334_, lean_object* v_type_2335_, lean_object* v_val_2336_, lean_object* v_k_2337_, lean_object* v_nondep_2338_, lean_object* v_kind_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
uint8_t v_nondep_boxed_2347_; uint8_t v_kind_boxed_2348_; lean_object* v_res_2349_; 
v_nondep_boxed_2347_ = lean_unbox(v_nondep_2338_);
v_kind_boxed_2348_ = lean_unbox(v_kind_2339_);
v_res_2349_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(v_00_u03b1_2333_, v_name_2334_, v_type_2335_, v_val_2336_, v_k_2337_, v_nondep_boxed_2347_, v_kind_boxed_2348_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2340_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(lean_object* v_00_u03b1_2350_, lean_object* v_ref_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v___x_2357_; 
v___x_2357_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_2351_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___boxed(lean_object* v_00_u03b1_2358_, lean_object* v_ref_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(v_00_u03b1_2358_, v_ref_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(lean_object* v_00_u03b1_2366_, lean_object* v_x_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v_x_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object* v_00_u03b1_2376_, lean_object* v_x_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_00_u03b1_2376_, v_x_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2378_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object* v_00_u03b2_2386_, lean_object* v_m_2387_, lean_object* v_a_2388_, lean_object* v_b_2389_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_m_2387_, v_a_2388_, v_b_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2391_, lean_object* v_x_2392_, size_t v_x_2393_, lean_object* v_x_2394_){
_start:
{
uint8_t v___x_2395_; 
v___x_2395_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_2392_, v_x_2393_, v_x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2396_, lean_object* v_x_2397_, lean_object* v_x_2398_, lean_object* v_x_2399_){
_start:
{
size_t v_x_39734__boxed_2400_; uint8_t v_res_2401_; lean_object* v_r_2402_; 
v_x_39734__boxed_2400_ = lean_unbox_usize(v_x_2398_);
lean_dec(v_x_2398_);
v_res_2401_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2396_, v_x_2397_, v_x_39734__boxed_2400_, v_x_2399_);
lean_dec_ref(v_x_2399_);
lean_dec_ref(v_x_2397_);
v_r_2402_ = lean_box(v_res_2401_);
return v_r_2402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(lean_object* v_00_u03b2_2403_, lean_object* v_a_2404_, lean_object* v_x_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_2404_, v_x_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___boxed(lean_object* v_00_u03b2_2407_, lean_object* v_a_2408_, lean_object* v_x_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(v_00_u03b2_2407_, v_a_2408_, v_x_2409_);
lean_dec(v_x_2409_);
lean_dec_ref(v_a_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object* v_00_u03b2_2411_, lean_object* v_a_2412_, lean_object* v_x_2413_){
_start:
{
uint8_t v___x_2414_; 
v___x_2414_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_2412_, v_x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object* v_00_u03b2_2415_, lean_object* v_a_2416_, lean_object* v_x_2417_){
_start:
{
uint8_t v_res_2418_; lean_object* v_r_2419_; 
v_res_2418_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(v_00_u03b2_2415_, v_a_2416_, v_x_2417_);
lean_dec(v_x_2417_);
lean_dec_ref(v_a_2416_);
v_r_2419_ = lean_box(v_res_2418_);
return v_r_2419_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object* v_00_u03b2_2420_, lean_object* v_data_2421_){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_data_2421_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26(lean_object* v_00_u03b2_2423_, lean_object* v_a_2424_, lean_object* v_b_2425_, lean_object* v_x_2426_){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_2424_, v_b_2425_, v_x_2426_);
return v___x_2427_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2428_, lean_object* v_keys_2429_, lean_object* v_vals_2430_, lean_object* v_heq_2431_, lean_object* v_i_2432_, lean_object* v_k_2433_){
_start:
{
uint8_t v___x_2434_; 
v___x_2434_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_2429_, v_i_2432_, v_k_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_2435_, lean_object* v_keys_2436_, lean_object* v_vals_2437_, lean_object* v_heq_2438_, lean_object* v_i_2439_, lean_object* v_k_2440_){
_start:
{
uint8_t v_res_2441_; lean_object* v_r_2442_; 
v_res_2441_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(v_00_u03b2_2435_, v_keys_2436_, v_vals_2437_, v_heq_2438_, v_i_2439_, v_k_2440_);
lean_dec_ref(v_k_2440_);
lean_dec_ref(v_vals_2437_);
lean_dec_ref(v_keys_2436_);
v_r_2442_ = lean_box(v_res_2441_);
return v_r_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27(lean_object* v_00_u03b2_2443_, lean_object* v_i_2444_, lean_object* v_source_2445_, lean_object* v_target_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(v_i_2444_, v_source_2445_, v_target_2446_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28(lean_object* v_00_u03b2_2448_, lean_object* v_x_2449_, lean_object* v_x_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(v_x_2449_, v_x_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object* v_name_2452_, lean_object* v_decl_2453_, lean_object* v_ref_2454_){
_start:
{
lean_object* v_defValue_2456_; lean_object* v_descr_2457_; lean_object* v_deprecation_x3f_2458_; lean_object* v___x_2459_; uint8_t v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v_defValue_2456_ = lean_ctor_get(v_decl_2453_, 0);
v_descr_2457_ = lean_ctor_get(v_decl_2453_, 1);
v_deprecation_x3f_2458_ = lean_ctor_get(v_decl_2453_, 2);
v___x_2459_ = lean_alloc_ctor(1, 0, 1);
v___x_2460_ = lean_unbox(v_defValue_2456_);
lean_ctor_set_uint8(v___x_2459_, 0, v___x_2460_);
lean_inc(v_deprecation_x3f_2458_);
lean_inc_ref(v_descr_2457_);
lean_inc_n(v_name_2452_, 2);
v___x_2461_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2461_, 0, v_name_2452_);
lean_ctor_set(v___x_2461_, 1, v_ref_2454_);
lean_ctor_set(v___x_2461_, 2, v___x_2459_);
lean_ctor_set(v___x_2461_, 3, v_descr_2457_);
lean_ctor_set(v___x_2461_, 4, v_deprecation_x3f_2458_);
v___x_2462_ = lean_register_option(v_name_2452_, v___x_2461_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2470_; 
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2470_ == 0)
{
lean_object* v_unused_2471_; 
v_unused_2471_ = lean_ctor_get(v___x_2462_, 0);
lean_dec(v_unused_2471_);
v___x_2464_ = v___x_2462_;
v_isShared_2465_ = v_isSharedCheck_2470_;
goto v_resetjp_2463_;
}
else
{
lean_dec(v___x_2462_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2470_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2466_; lean_object* v___x_2468_; 
lean_inc(v_defValue_2456_);
v___x_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2466_, 0, v_name_2452_);
lean_ctor_set(v___x_2466_, 1, v_defValue_2456_);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2466_);
v___x_2468_ = v___x_2464_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v_name_2452_);
v_a_2472_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2462_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2462_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_2480_, lean_object* v_decl_2481_, lean_object* v_ref_2482_, lean_object* v_a_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v_name_2480_, v_decl_2481_, v_ref_2482_);
lean_dec_ref(v_decl_2481_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2499_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2500_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2501_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2502_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v___x_2499_, v___x_2500_, v___x_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object* v_a_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object* v_msg_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_){
_start:
{
lean_object* v_ref_2511_; lean_object* v___x_2512_; lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2521_; 
v_ref_2511_ = lean_ctor_get(v___y_2508_, 2);
v___x_2512_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msg_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2515_ = v___x_2512_;
v_isShared_2516_ = v_isSharedCheck_2521_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2512_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2521_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2517_; lean_object* v___x_2519_; 
lean_inc(v_ref_2511_);
v___x_2517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2517_, 0, v_ref_2511_);
lean_ctor_set(v___x_2517_, 1, v_a_2513_);
if (v_isShared_2516_ == 0)
{
lean_ctor_set_tag(v___x_2515_, 1);
lean_ctor_set(v___x_2515_, 0, v___x_2517_);
v___x_2519_ = v___x_2515_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2517_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object* v_msg_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
return v_res_2528_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3));
v___x_2537_ = l_Lean_stringToMessageData(v___x_2536_);
return v___x_2537_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5));
v___x_2540_ = l_Lean_stringToMessageData(v___x_2539_);
return v___x_2540_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7));
v___x_2543_ = l_Lean_stringToMessageData(v___x_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object* v_expr_2544_, lean_object* v_expectedType_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v___x_2551_; 
lean_inc(v_a_2549_);
lean_inc_ref(v_a_2548_);
lean_inc(v_a_2547_);
lean_inc_ref(v_a_2546_);
lean_inc_ref(v_expr_2544_);
v___x_2551_ = lean_infer_type(v_expr_2544_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2553_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc_n(v_a_2552_, 2);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = l_Lean_Meta_getLevel(v_a_2552_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2555_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
lean_inc_ref(v_expectedType_2545_);
v___x_2555_ = l_Lean_Meta_getLevel(v_expectedType_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2557_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_2558_ = lean_box(0);
v___x_2559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2556_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
v___x_2560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2560_, 0, v_a_2554_);
lean_ctor_set(v___x_2560_, 1, v___x_2559_);
lean_inc_ref(v___x_2560_);
v___x_2561_ = l_Lean_mkConst(v___x_2557_, v___x_2560_);
v___x_2562_ = lean_unsigned_to_nat(3u);
v___x_2563_ = lean_mk_empty_array_with_capacity(v___x_2562_);
lean_inc(v_a_2552_);
v___x_2564_ = lean_array_push(v___x_2563_, v_a_2552_);
lean_inc_ref(v_expr_2544_);
v___x_2565_ = lean_array_push(v___x_2564_, v_expr_2544_);
lean_inc_ref(v_expectedType_2545_);
v___x_2566_ = lean_array_push(v___x_2565_, v_expectedType_2545_);
v___x_2567_ = l_Lean_mkAppN(v___x_2561_, v___x_2566_);
lean_dec_ref(v___x_2566_);
v___x_2568_ = lean_box(0);
v___x_2569_ = l_Lean_Meta_trySynthInstance(v___x_2567_, v___x_2568_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2667_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2572_ = v___x_2569_;
v_isShared_2573_ = v_isSharedCheck_2667_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2569_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2667_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
switch(lean_obj_tag(v_a_2570_))
{
case 0:
{
lean_object* v___x_2574_; lean_object* v___x_2576_; 
lean_dec_ref_known(v___x_2560_, 2);
lean_dec(v_a_2552_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v___x_2574_ = lean_box(0);
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 0, v___x_2574_);
v___x_2576_ = v___x_2572_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v___x_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
case 1:
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2662_; 
lean_del_object(v___x_2572_);
v_a_2578_ = lean_ctor_get(v_a_2570_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v_a_2570_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2580_ = v_a_2570_;
v_isShared_2581_ = v_isSharedCheck_2662_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v_a_2570_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2662_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2582_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2));
v___x_2583_ = l_Lean_mkConst(v___x_2582_, v___x_2560_);
v___x_2584_ = lean_unsigned_to_nat(4u);
v___x_2585_ = lean_mk_empty_array_with_capacity(v___x_2584_);
v___x_2586_ = lean_array_push(v___x_2585_, v_a_2552_);
lean_inc_ref(v_expr_2544_);
v___x_2587_ = lean_array_push(v___x_2586_, v_expr_2544_);
lean_inc_ref(v_expectedType_2545_);
v___x_2588_ = lean_array_push(v___x_2587_, v_expectedType_2545_);
v___x_2589_ = lean_array_push(v___x_2588_, v_a_2578_);
v___x_2590_ = l_Lean_mkAppN(v___x_2583_, v___x_2589_);
lean_dec_ref(v___x_2589_);
v___x_2591_ = l_Lean_Meta_expandCoe(v___x_2590_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2653_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2594_ = v___x_2591_;
v_isShared_2595_ = v_isSharedCheck_2653_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_a_2592_);
lean_dec(v___x_2591_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2653_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v_fst_2603_; lean_object* v___x_2604_; 
v_fst_2603_ = lean_ctor_get(v_a_2592_, 0);
lean_inc(v_a_2549_);
lean_inc_ref(v_a_2548_);
lean_inc(v_a_2547_);
lean_inc_ref(v_a_2546_);
lean_inc(v_fst_2603_);
v___x_2604_ = lean_infer_type(v_fst_2603_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2606_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___x_2604_, 1);
lean_inc_ref(v_expectedType_2545_);
v___x_2606_ = l_Lean_Meta_isExprDefEq(v_a_2605_, v_expectedType_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; uint8_t v___x_2608_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v___x_2606_, 1);
v___x_2608_ = lean_unbox(v_a_2607_);
lean_dec(v_a_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2634_; 
lean_inc(v_fst_2603_);
lean_del_object(v___x_2594_);
lean_del_object(v___x_2580_);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_a_2592_);
if (v_isSharedCheck_2634_ == 0)
{
lean_object* v_unused_2635_; lean_object* v_unused_2636_; 
v_unused_2635_ = lean_ctor_get(v_a_2592_, 1);
lean_dec(v_unused_2635_);
v_unused_2636_ = lean_ctor_get(v_a_2592_, 0);
lean_dec(v_unused_2636_);
v___x_2610_ = v_a_2592_;
v_isShared_2611_ = v_isSharedCheck_2634_;
goto v_resetjp_2609_;
}
else
{
lean_dec(v_a_2592_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2634_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2615_; 
v___x_2612_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4);
v___x_2613_ = l_Lean_indentExpr(v_expr_2544_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set_tag(v___x_2610_, 7);
lean_ctor_set(v___x_2610_, 1, v___x_2613_);
lean_ctor_set(v___x_2610_, 0, v___x_2612_);
v___x_2615_ = v___x_2610_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v___x_2613_);
v___x_2615_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v___x_2616_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6);
v___x_2617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2615_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = l_Lean_indentExpr(v_expectedType_2545_);
v___x_2619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2617_);
lean_ctor_set(v___x_2619_, 1, v___x_2618_);
v___x_2620_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8);
v___x_2621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2619_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = l_Lean_indentExpr(v_fst_2603_);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2623_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2624_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2624_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
else
{
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
goto v___jp_2596_;
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
lean_del_object(v___x_2594_);
lean_dec(v_a_2592_);
lean_del_object(v___x_2580_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2637_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2606_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2606_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_del_object(v___x_2594_);
lean_dec(v_a_2592_);
lean_del_object(v___x_2580_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2645_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2604_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2604_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
v___jp_2596_:
{
lean_object* v___x_2598_; 
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 0, v_a_2592_);
v___x_2598_ = v___x_2580_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2592_);
v___x_2598_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2600_; 
if (v_isShared_2595_ == 0)
{
lean_ctor_set(v___x_2594_, 0, v___x_2598_);
v___x_2600_ = v___x_2594_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_del_object(v___x_2580_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2654_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2591_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_dec(v___x_2591_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
}
}
default: 
{
lean_object* v___x_2663_; lean_object* v___x_2665_; 
lean_dec_ref_known(v___x_2560_, 2);
lean_dec(v_a_2552_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v___x_2663_ = lean_box(2);
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 0, v___x_2663_);
v___x_2665_ = v___x_2572_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref_known(v___x_2560_, 2);
lean_dec(v_a_2552_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2668_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2569_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2569_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
else
{
lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2683_; 
lean_dec(v_a_2554_);
lean_dec(v_a_2552_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2676_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2678_ = v___x_2555_;
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v___x_2555_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2681_; 
if (v_isShared_2679_ == 0)
{
v___x_2681_ = v___x_2678_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v_a_2676_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
else
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2684_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2553_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2553_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
return v___x_2689_;
}
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_dec_ref(v_expectedType_2545_);
lean_dec_ref(v_expr_2544_);
v_a_2692_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2551_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2551_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object* v_expr_2700_, lean_object* v_expectedType_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2700_, v_expectedType_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_);
lean_dec(v_a_2705_);
lean_dec_ref(v_a_2704_);
lean_dec(v_a_2703_);
lean_dec_ref(v_a_2702_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object* v_00_u03b1_2708_, lean_object* v_msg_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object* v_00_u03b1_2716_, lean_object* v_msg_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(v_00_u03b1_2716_, v_msg_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object* v_expr_2724_, lean_object* v_expectedType_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2724_, v_expectedType_2725_, v_a_2726_, v_a_2727_, v_a_2728_, v_a_2729_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2756_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2756_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2756_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
switch(lean_obj_tag(v_a_2732_))
{
case 0:
{
lean_object* v___x_2736_; lean_object* v___x_2738_; 
v___x_2736_ = lean_box(0);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2736_);
v___x_2738_ = v___x_2734_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2736_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
case 1:
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2751_; 
v_a_2740_ = lean_ctor_get(v_a_2732_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v_a_2732_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2742_ = v_a_2732_;
v_isShared_2743_ = v_isSharedCheck_2751_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v_a_2732_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2751_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v_fst_2744_; lean_object* v___x_2746_; 
v_fst_2744_ = lean_ctor_get(v_a_2740_, 0);
lean_inc(v_fst_2744_);
lean_dec(v_a_2740_);
if (v_isShared_2743_ == 0)
{
lean_ctor_set(v___x_2742_, 0, v_fst_2744_);
v___x_2746_ = v___x_2742_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_fst_2744_);
v___x_2746_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2748_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2746_);
v___x_2748_ = v___x_2734_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2746_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
default: 
{
lean_object* v___x_2752_; lean_object* v___x_2754_; 
v___x_2752_ = lean_box(2);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2752_);
v___x_2754_ = v___x_2734_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v___x_2752_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
}
else
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
v_a_2757_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2759_ = v___x_2731_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2731_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2757_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object* v_expr_2765_, lean_object* v_expectedType_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l_Lean_Meta_coerceSimple_x3f(v_expr_2765_, v_expectedType_2766_, v_a_2767_, v_a_2768_, v_a_2769_, v_a_2770_);
lean_dec(v_a_2770_);
lean_dec_ref(v_a_2769_);
lean_dec(v_a_2768_);
lean_dec_ref(v_a_2767_);
return v_res_2772_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__4(void){
_start:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2780_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__3));
v___x_2781_ = l_Lean_stringToMessageData(v___x_2780_);
return v___x_2781_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__6(void){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__5));
v___x_2784_ = l_Lean_stringToMessageData(v___x_2783_);
return v___x_2784_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__8(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__7));
v___x_2787_ = l_Lean_stringToMessageData(v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object* v_expr_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_){
_start:
{
lean_object* v___x_2794_; 
lean_inc(v_a_2792_);
lean_inc_ref(v_a_2791_);
lean_inc(v_a_2790_);
lean_inc_ref(v_a_2789_);
lean_inc_ref(v_expr_2788_);
v___x_2794_ = lean_infer_type(v_expr_2788_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2796_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc_n(v_a_2795_, 2);
lean_dec_ref_known(v___x_2794_, 1);
v___x_2796_ = l_Lean_Meta_getLevel(v_a_2795_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2798_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_a_2797_);
lean_dec_ref_known(v___x_2796_, 1);
v___x_2798_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2798_) == 0)
{
lean_object* v_a_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_a_2799_ = lean_ctor_get(v___x_2798_, 0);
lean_inc_n(v_a_2799_, 2);
lean_dec_ref_known(v___x_2798_, 1);
v___x_2800_ = l_Lean_mkSort(v_a_2799_);
lean_inc(v_a_2795_);
v___x_2801_ = l_Lean_mkArrow(v_a_2795_, v___x_2800_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2803_; uint8_t v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v___x_2801_, 1);
v___x_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2803_, 0, v_a_2802_);
v___x_2804_ = 0;
v___x_2805_ = lean_box(0);
v___x_2806_ = l_Lean_Meta_mkFreshExprMVar(v___x_2803_, v___x_2804_, v___x_2805_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc_n(v_a_2807_, 2);
lean_dec_ref_known(v___x_2806_, 1);
v___x_2808_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__1));
v___x_2809_ = lean_box(0);
v___x_2810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2810_, 0, v_a_2799_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
v___x_2811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2811_, 0, v_a_2797_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
lean_inc_ref(v___x_2811_);
v___x_2812_ = l_Lean_Expr_const___override(v___x_2808_, v___x_2811_);
lean_inc(v_a_2795_);
v___x_2813_ = l_Lean_mkAppB(v___x_2812_, v_a_2795_, v_a_2807_);
v___x_2814_ = lean_box(0);
v___x_2815_ = l_Lean_Meta_trySynthInstance(v___x_2813_, v___x_2814_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2902_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2818_ = v___x_2815_;
v_isShared_2819_ = v_isSharedCheck_2902_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2815_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2902_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
if (lean_obj_tag(v_a_2816_) == 1)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2898_; 
lean_del_object(v___x_2818_);
v_a_2820_ = lean_ctor_get(v_a_2816_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_a_2816_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2822_ = v_a_2816_;
v_isShared_2823_ = v_isSharedCheck_2898_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v_a_2816_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2898_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2824_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__2));
v___x_2825_ = l_Lean_Expr_const___override(v___x_2824_, v___x_2811_);
lean_inc_ref(v_expr_2788_);
lean_inc(v_a_2820_);
v___x_2826_ = l_Lean_mkApp4(v___x_2825_, v_a_2795_, v_a_2807_, v_a_2820_, v_expr_2788_);
v___x_2827_ = l_Lean_Meta_expandCoe(v___x_2826_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2889_; 
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2830_ = v___x_2827_;
v_isShared_2831_ = v_isSharedCheck_2889_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2889_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v_fst_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2887_; 
v_fst_2832_ = lean_ctor_get(v_a_2828_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_a_2828_);
if (v_isSharedCheck_2887_ == 0)
{
lean_object* v_unused_2888_; 
v_unused_2888_ = lean_ctor_get(v_a_2828_, 1);
lean_dec(v_unused_2888_);
v___x_2834_ = v_a_2828_;
v_isShared_2835_ = v_isSharedCheck_2887_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_fst_2832_);
lean_dec(v_a_2828_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2887_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2843_; 
lean_inc(v_a_2792_);
lean_inc_ref(v_a_2791_);
lean_inc(v_a_2790_);
lean_inc_ref(v_a_2789_);
lean_inc(v_fst_2832_);
v___x_2843_ = lean_infer_type(v_fst_2832_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2845_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2844_);
lean_dec_ref_known(v___x_2843_, 1);
lean_inc(v_a_2792_);
lean_inc_ref(v_a_2791_);
lean_inc(v_a_2790_);
lean_inc_ref(v_a_2789_);
v___x_2845_ = lean_whnf(v_a_2844_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; uint8_t v___x_2847_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v___x_2847_ = l_Lean_Expr_isForall(v_a_2846_);
lean_dec(v_a_2846_);
if (v___x_2847_ == 0)
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
lean_del_object(v___x_2830_);
lean_del_object(v___x_2822_);
v___x_2848_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2849_ = l_Lean_indentExpr(v_expr_2788_);
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 7);
lean_ctor_set(v___x_2834_, 1, v___x_2849_);
lean_ctor_set(v___x_2834_, 0, v___x_2848_);
v___x_2851_ = v___x_2834_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2848_);
lean_ctor_set(v_reuseFailAlloc_2870_, 1, v___x_2849_);
v___x_2851_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
v___x_2852_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__6, &l_Lean_Meta_coerceToFunction_x3f___closed__6_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__6);
v___x_2853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2851_);
lean_ctor_set(v___x_2853_, 1, v___x_2852_);
v___x_2854_ = l_Lean_indentExpr(v_fst_2832_);
v___x_2855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__8, &l_Lean_Meta_coerceToFunction_x3f___closed__8_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__8);
v___x_2857_ = l_Lean_indentExpr(v_a_2820_);
v___x_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = l_Lean_MessageData_hint_x27(v___x_2858_);
v___x_2860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2855_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2860_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_);
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2861_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2861_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
else
{
lean_del_object(v___x_2834_);
lean_dec(v_a_2820_);
lean_dec_ref(v_expr_2788_);
goto v___jp_2836_;
}
}
else
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2878_; 
lean_del_object(v___x_2834_);
lean_dec(v_fst_2832_);
lean_del_object(v___x_2830_);
lean_del_object(v___x_2822_);
lean_dec(v_a_2820_);
lean_dec_ref(v_expr_2788_);
v_a_2871_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2873_ = v___x_2845_;
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v___x_2845_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2871_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_del_object(v___x_2834_);
lean_dec(v_fst_2832_);
lean_del_object(v___x_2830_);
lean_del_object(v___x_2822_);
lean_dec(v_a_2820_);
lean_dec_ref(v_expr_2788_);
v_a_2879_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2843_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2843_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
v___jp_2836_:
{
lean_object* v___x_2838_; 
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v_fst_2832_);
v___x_2838_ = v___x_2822_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_fst_2832_);
v___x_2838_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
lean_object* v___x_2840_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 0, v___x_2838_);
v___x_2840_ = v___x_2830_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2838_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_del_object(v___x_2822_);
lean_dec(v_a_2820_);
lean_dec_ref(v_expr_2788_);
v_a_2890_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2827_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2827_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
}
else
{
lean_object* v___x_2900_; 
lean_dec(v_a_2816_);
lean_dec_ref_known(v___x_2811_, 2);
lean_dec(v_a_2807_);
lean_dec(v_a_2795_);
lean_dec_ref(v_expr_2788_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 0, v___x_2814_);
v___x_2900_ = v___x_2818_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2814_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec_ref_known(v___x_2811_, 2);
lean_dec(v_a_2807_);
lean_dec(v_a_2795_);
lean_dec_ref(v_expr_2788_);
v_a_2903_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2815_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2815_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_dec(v_a_2799_);
lean_dec(v_a_2797_);
lean_dec(v_a_2795_);
lean_dec_ref(v_expr_2788_);
v_a_2911_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___x_2806_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___x_2806_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
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
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec(v_a_2799_);
lean_dec(v_a_2797_);
lean_dec(v_a_2795_);
lean_dec_ref(v_expr_2788_);
v_a_2919_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2801_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2801_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec(v_a_2797_);
lean_dec(v_a_2795_);
lean_dec_ref(v_expr_2788_);
v_a_2927_ = lean_ctor_get(v___x_2798_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2798_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2798_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
else
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2942_; 
lean_dec(v_a_2795_);
lean_dec_ref(v_expr_2788_);
v_a_2935_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2937_ = v___x_2796_;
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v___x_2796_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2940_; 
if (v_isShared_2938_ == 0)
{
v___x_2940_ = v___x_2937_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_a_2935_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
return v___x_2940_;
}
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
lean_dec_ref(v_expr_2788_);
v_a_2943_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2794_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2794_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object* v_expr_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_2951_, v_a_2952_, v_a_2953_, v_a_2954_, v_a_2955_);
lean_dec(v_a_2955_);
lean_dec_ref(v_a_2954_);
lean_dec(v_a_2953_);
lean_dec_ref(v_a_2952_);
return v_res_2957_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__4(void){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2965_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__3));
v___x_2966_ = l_Lean_stringToMessageData(v___x_2965_);
return v___x_2966_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__6(void){
_start:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2968_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__5));
v___x_2969_ = l_Lean_stringToMessageData(v___x_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object* v_expr_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v___x_2976_; 
lean_inc(v_a_2974_);
lean_inc_ref(v_a_2973_);
lean_inc(v_a_2972_);
lean_inc_ref(v_a_2971_);
lean_inc_ref(v_expr_2970_);
v___x_2976_ = lean_infer_type(v_expr_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v___x_2978_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc_n(v_a_2977_, 2);
lean_dec_ref_known(v___x_2976_, 1);
v___x_2978_ = l_Lean_Meta_getLevel(v_a_2977_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2980_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___x_2978_, 1);
v___x_2980_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc_n(v_a_2981_, 2);
lean_dec_ref_known(v___x_2980_, 1);
v___x_2982_ = l_Lean_mkSort(v_a_2981_);
v___x_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
v___x_2984_ = 0;
v___x_2985_ = lean_box(0);
v___x_2986_ = l_Lean_Meta_mkFreshExprMVar(v___x_2983_, v___x_2984_, v___x_2985_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc_n(v_a_2987_, 2);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__1));
v___x_2989_ = lean_box(0);
v___x_2990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2990_, 0, v_a_2981_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
v___x_2991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2991_, 0, v_a_2979_);
lean_ctor_set(v___x_2991_, 1, v___x_2990_);
lean_inc_ref(v___x_2991_);
v___x_2992_ = l_Lean_Expr_const___override(v___x_2988_, v___x_2991_);
lean_inc(v_a_2977_);
v___x_2993_ = l_Lean_mkAppB(v___x_2992_, v_a_2977_, v_a_2987_);
v___x_2994_ = lean_box(0);
v___x_2995_ = l_Lean_Meta_trySynthInstance(v___x_2993_, v___x_2994_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3082_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3082_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3082_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
if (lean_obj_tag(v_a_2996_) == 1)
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3078_; 
lean_del_object(v___x_2998_);
v_a_3000_ = lean_ctor_get(v_a_2996_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v_a_2996_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3002_ = v_a_2996_;
v_isShared_3003_ = v_isSharedCheck_3078_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v_a_2996_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3078_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3004_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__2));
v___x_3005_ = l_Lean_Expr_const___override(v___x_3004_, v___x_2991_);
lean_inc_ref(v_expr_2970_);
lean_inc(v_a_3000_);
v___x_3006_ = l_Lean_mkApp4(v___x_3005_, v_a_2977_, v_a_2987_, v_a_3000_, v_expr_2970_);
v___x_3007_ = l_Lean_Meta_expandCoe(v___x_3006_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3069_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3010_ = v___x_3007_;
v_isShared_3011_ = v_isSharedCheck_3069_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3007_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3069_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v_fst_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3067_; 
v_fst_3012_ = lean_ctor_get(v_a_3008_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v_a_3008_);
if (v_isSharedCheck_3067_ == 0)
{
lean_object* v_unused_3068_; 
v_unused_3068_ = lean_ctor_get(v_a_3008_, 1);
lean_dec(v_unused_3068_);
v___x_3014_ = v_a_3008_;
v_isShared_3015_ = v_isSharedCheck_3067_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_fst_3012_);
lean_dec(v_a_3008_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3067_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3023_; 
lean_inc(v_a_2974_);
lean_inc_ref(v_a_2973_);
lean_inc(v_a_2972_);
lean_inc_ref(v_a_2971_);
lean_inc(v_fst_3012_);
v___x_3023_ = lean_infer_type(v_fst_3012_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v_a_3024_; lean_object* v___x_3025_; 
v_a_3024_ = lean_ctor_get(v___x_3023_, 0);
lean_inc(v_a_3024_);
lean_dec_ref_known(v___x_3023_, 1);
lean_inc(v_a_2974_);
lean_inc_ref(v_a_2973_);
lean_inc(v_a_2972_);
lean_inc_ref(v_a_2971_);
v___x_3025_ = lean_whnf(v_a_3024_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; uint8_t v___x_3027_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_a_3026_);
lean_dec_ref_known(v___x_3025_, 1);
v___x_3027_ = l_Lean_Expr_isSort(v_a_3026_);
lean_dec(v_a_3026_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3031_; 
lean_del_object(v___x_3010_);
lean_del_object(v___x_3002_);
v___x_3028_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_3029_ = l_Lean_indentExpr(v_expr_2970_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set_tag(v___x_3014_, 7);
lean_ctor_set(v___x_3014_, 1, v___x_3029_);
lean_ctor_set(v___x_3014_, 0, v___x_3028_);
v___x_3031_ = v___x_3014_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3028_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v___x_3029_);
v___x_3031_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
v___x_3032_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__4, &l_Lean_Meta_coerceToSort_x3f___closed__4_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__4);
v___x_3033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3031_);
lean_ctor_set(v___x_3033_, 1, v___x_3032_);
v___x_3034_ = l_Lean_indentExpr(v_fst_3012_);
v___x_3035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3033_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
v___x_3036_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__6, &l_Lean_Meta_coerceToSort_x3f___closed__6_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__6);
v___x_3037_ = l_Lean_indentExpr(v_a_3000_);
v___x_3038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3036_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = l_Lean_MessageData_hint_x27(v___x_3038_);
v___x_3040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3035_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
v___x_3041_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_3040_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3041_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3041_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
else
{
lean_del_object(v___x_3014_);
lean_dec(v_a_3000_);
lean_dec_ref(v_expr_2970_);
goto v___jp_3016_;
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
lean_del_object(v___x_3014_);
lean_dec(v_fst_3012_);
lean_del_object(v___x_3010_);
lean_del_object(v___x_3002_);
lean_dec(v_a_3000_);
lean_dec_ref(v_expr_2970_);
v_a_3051_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_3025_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_3025_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_del_object(v___x_3014_);
lean_dec(v_fst_3012_);
lean_del_object(v___x_3010_);
lean_del_object(v___x_3002_);
lean_dec(v_a_3000_);
lean_dec_ref(v_expr_2970_);
v_a_3059_ = lean_ctor_get(v___x_3023_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3023_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3023_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
v___jp_3016_:
{
lean_object* v___x_3018_; 
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 0, v_fst_3012_);
v___x_3018_ = v___x_3002_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_fst_3012_);
v___x_3018_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
lean_object* v___x_3020_; 
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 0, v___x_3018_);
v___x_3020_ = v___x_3010_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3018_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
}
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_del_object(v___x_3002_);
lean_dec(v_a_3000_);
lean_dec_ref(v_expr_2970_);
v_a_3070_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3007_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3007_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
}
else
{
lean_object* v___x_3080_; 
lean_dec(v_a_2996_);
lean_dec_ref_known(v___x_2991_, 2);
lean_dec(v_a_2987_);
lean_dec(v_a_2977_);
lean_dec_ref(v_expr_2970_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v___x_2994_);
v___x_3080_ = v___x_2998_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_2994_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec_ref_known(v___x_2991_, 2);
lean_dec(v_a_2987_);
lean_dec(v_a_2977_);
lean_dec_ref(v_expr_2970_);
v_a_3083_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_2995_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_2995_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec(v_a_2981_);
lean_dec(v_a_2979_);
lean_dec(v_a_2977_);
lean_dec_ref(v_expr_2970_);
v_a_3091_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_2986_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_2986_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
else
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3106_; 
lean_dec(v_a_2979_);
lean_dec(v_a_2977_);
lean_dec_ref(v_expr_2970_);
v_a_3099_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3101_ = v___x_2980_;
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_2980_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3104_; 
if (v_isShared_3102_ == 0)
{
v___x_3104_ = v___x_3101_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_a_3099_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
}
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec(v_a_2977_);
lean_dec_ref(v_expr_2970_);
v_a_3107_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_2978_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_2978_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec_ref(v_expr_2970_);
v_a_3115_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_2976_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_2976_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object* v_expr_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lean_Meta_coerceToSort_x3f(v_expr_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
lean_dec(v_a_3127_);
lean_dec_ref(v_a_3126_);
lean_dec(v_a_3125_);
lean_dec_ref(v_a_3124_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object* v_e_3130_, lean_object* v___y_3131_){
_start:
{
uint8_t v___x_3133_; 
v___x_3133_ = l_Lean_Expr_hasMVar(v_e_3130_);
if (v___x_3133_ == 0)
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3134_, 0, v_e_3130_);
return v___x_3134_;
}
else
{
lean_object* v___x_3135_; lean_object* v_mctx_3136_; lean_object* v___x_3137_; lean_object* v_fst_3138_; lean_object* v_snd_3139_; lean_object* v___x_3140_; lean_object* v_cache_3141_; lean_object* v_zetaDeltaFVarIds_3142_; lean_object* v_postponed_3143_; lean_object* v_diag_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3153_; 
v___x_3135_ = lean_st_ref_get(v___y_3131_);
v_mctx_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc_ref(v_mctx_3136_);
lean_dec(v___x_3135_);
v___x_3137_ = l_Lean_instantiateMVarsCore(v_mctx_3136_, v_e_3130_);
v_fst_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_fst_3138_);
v_snd_3139_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_snd_3139_);
lean_dec_ref(v___x_3137_);
v___x_3140_ = lean_st_ref_take(v___y_3131_);
v_cache_3141_ = lean_ctor_get(v___x_3140_, 1);
v_zetaDeltaFVarIds_3142_ = lean_ctor_get(v___x_3140_, 2);
v_postponed_3143_ = lean_ctor_get(v___x_3140_, 3);
v_diag_3144_ = lean_ctor_get(v___x_3140_, 4);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3153_ == 0)
{
lean_object* v_unused_3154_; 
v_unused_3154_ = lean_ctor_get(v___x_3140_, 0);
lean_dec(v_unused_3154_);
v___x_3146_ = v___x_3140_;
v_isShared_3147_ = v_isSharedCheck_3153_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_diag_3144_);
lean_inc(v_postponed_3143_);
lean_inc(v_zetaDeltaFVarIds_3142_);
lean_inc(v_cache_3141_);
lean_dec(v___x_3140_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3153_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
lean_ctor_set(v___x_3146_, 0, v_snd_3139_);
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_snd_3139_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v_cache_3141_);
lean_ctor_set(v_reuseFailAlloc_3152_, 2, v_zetaDeltaFVarIds_3142_);
lean_ctor_set(v_reuseFailAlloc_3152_, 3, v_postponed_3143_);
lean_ctor_set(v_reuseFailAlloc_3152_, 4, v_diag_3144_);
v___x_3149_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3150_ = lean_st_ref_put(v___y_3131_, v___x_3149_);
v___x_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3151_, 0, v_fst_3138_);
return v___x_3151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object* v_e_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3155_, v___y_3156_);
lean_dec(v___y_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object* v_e_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3159_, v___y_3161_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object* v_e_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(v_e_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object* v_type_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_){
_start:
{
lean_object* v___y_3180_; lean_object* v___x_3219_; uint8_t v_transparency_3220_; uint8_t v___x_3221_; uint8_t v___x_3222_; 
v___x_3219_ = l_Lean_Meta_Context_config(v_a_3174_);
v_transparency_3220_ = lean_ctor_get_uint8(v___x_3219_, 9);
lean_dec_ref(v___x_3219_);
v___x_3221_ = 2;
v___x_3222_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3220_, v___x_3221_);
if (v___x_3222_ == 0)
{
lean_object* v_keyedConfig_3223_; uint8_t v_trackZetaDelta_3224_; lean_object* v_zetaDeltaSet_3225_; lean_object* v_lctx_3226_; lean_object* v_localInstances_3227_; lean_object* v_defEqCtx_x3f_3228_; lean_object* v_synthPendingDepth_3229_; lean_object* v_customCanUnfoldPredicate_x3f_3230_; uint8_t v_univApprox_3231_; uint8_t v_inTypeClassResolution_3232_; uint8_t v_cacheInferType_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v_keyedConfig_3223_ = lean_ctor_get(v_a_3174_, 0);
v_trackZetaDelta_3224_ = lean_ctor_get_uint8(v_a_3174_, sizeof(void*)*7);
v_zetaDeltaSet_3225_ = lean_ctor_get(v_a_3174_, 1);
v_lctx_3226_ = lean_ctor_get(v_a_3174_, 2);
v_localInstances_3227_ = lean_ctor_get(v_a_3174_, 3);
v_defEqCtx_x3f_3228_ = lean_ctor_get(v_a_3174_, 4);
v_synthPendingDepth_3229_ = lean_ctor_get(v_a_3174_, 5);
v_customCanUnfoldPredicate_x3f_3230_ = lean_ctor_get(v_a_3174_, 6);
v_univApprox_3231_ = lean_ctor_get_uint8(v_a_3174_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3232_ = lean_ctor_get_uint8(v_a_3174_, sizeof(void*)*7 + 2);
v_cacheInferType_3233_ = lean_ctor_get_uint8(v_a_3174_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3223_);
v___x_3234_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3221_, v_keyedConfig_3223_);
lean_inc(v_customCanUnfoldPredicate_x3f_3230_);
lean_inc(v_synthPendingDepth_3229_);
lean_inc(v_defEqCtx_x3f_3228_);
lean_inc_ref(v_localInstances_3227_);
lean_inc_ref(v_lctx_3226_);
lean_inc(v_zetaDeltaSet_3225_);
v___x_3235_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
lean_ctor_set(v___x_3235_, 1, v_zetaDeltaSet_3225_);
lean_ctor_set(v___x_3235_, 2, v_lctx_3226_);
lean_ctor_set(v___x_3235_, 3, v_localInstances_3227_);
lean_ctor_set(v___x_3235_, 4, v_defEqCtx_x3f_3228_);
lean_ctor_set(v___x_3235_, 5, v_synthPendingDepth_3229_);
lean_ctor_set(v___x_3235_, 6, v_customCanUnfoldPredicate_x3f_3230_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7, v_trackZetaDelta_3224_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7 + 1, v_univApprox_3231_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3232_);
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*7 + 3, v_cacheInferType_3233_);
lean_inc(v_a_3177_);
lean_inc_ref(v_a_3176_);
lean_inc(v_a_3175_);
v___x_3236_ = lean_whnf(v_type_3173_, v___x_3235_, v_a_3175_, v_a_3176_, v_a_3177_);
v___y_3180_ = v___x_3236_;
goto v___jp_3179_;
}
else
{
lean_object* v___x_3237_; 
lean_inc(v_a_3177_);
lean_inc_ref(v_a_3176_);
lean_inc(v_a_3175_);
lean_inc_ref(v_a_3174_);
v___x_3237_ = lean_whnf(v_type_3173_, v_a_3174_, v_a_3175_, v_a_3176_, v_a_3177_);
v___y_3180_ = v___x_3237_;
goto v___jp_3179_;
}
v___jp_3179_:
{
if (lean_obj_tag(v___y_3180_) == 0)
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3210_; 
v_a_3181_ = lean_ctor_get(v___y_3180_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___y_3180_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3183_ = v___y_3180_;
v_isShared_3184_ = v_isSharedCheck_3210_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___y_3180_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3210_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
if (lean_obj_tag(v_a_3181_) == 5)
{
lean_object* v_fn_3185_; lean_object* v_arg_3186_; lean_object* v___x_3187_; lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3205_; 
lean_del_object(v___x_3183_);
v_fn_3185_ = lean_ctor_get(v_a_3181_, 0);
lean_inc_ref(v_fn_3185_);
v_arg_3186_ = lean_ctor_get(v_a_3181_, 1);
lean_inc_ref(v_arg_3186_);
lean_dec_ref_known(v_a_3181_, 2);
v___x_3187_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_fn_3185_, v_a_3175_);
v_a_3188_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3190_ = v___x_3187_;
v_isShared_3191_ = v_isSharedCheck_3205_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3187_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3205_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3192_; lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3204_; 
v___x_3192_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_arg_3186_, v_a_3175_);
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3204_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3195_ = v___x_3192_;
v_isShared_3196_ = v_isSharedCheck_3204_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3192_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3204_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3197_; lean_object* v___x_3199_; 
v___x_3197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3197_, 0, v_a_3188_);
lean_ctor_set(v___x_3197_, 1, v_a_3193_);
if (v_isShared_3191_ == 0)
{
lean_ctor_set_tag(v___x_3190_, 1);
lean_ctor_set(v___x_3190_, 0, v___x_3197_);
v___x_3199_ = v___x_3190_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
lean_object* v___x_3201_; 
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 0, v___x_3199_);
v___x_3201_ = v___x_3195_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3199_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
}
else
{
lean_object* v___x_3206_; lean_object* v___x_3208_; 
lean_dec(v_a_3181_);
v___x_3206_ = lean_box(0);
if (v_isShared_3184_ == 0)
{
lean_ctor_set(v___x_3183_, 0, v___x_3206_);
v___x_3208_ = v___x_3183_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
v_a_3211_ = lean_ctor_get(v___y_3180_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___y_3180_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___y_3180_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___y_3180_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object* v_type_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lean_Meta_isTypeApp_x3f(v_type_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_);
lean_dec(v_a_3242_);
lean_dec_ref(v_a_3241_);
lean_dec(v_a_3240_);
lean_dec_ref(v_a_3239_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object* v_type_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Lean_Meta_isTypeApp_x3f(v_type_3245_, v_a_3246_, v_a_3247_, v_a_3248_, v_a_3249_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3287_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3254_ = v___x_3251_;
v_isShared_3255_ = v_isSharedCheck_3287_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3251_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3287_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
if (lean_obj_tag(v_a_3252_) == 1)
{
lean_object* v_val_3256_; lean_object* v_fst_3257_; lean_object* v___x_3258_; 
lean_del_object(v___x_3254_);
v_val_3256_ = lean_ctor_get(v_a_3252_, 0);
lean_inc(v_val_3256_);
lean_dec_ref_known(v_a_3252_, 1);
v_fst_3257_ = lean_ctor_get(v_val_3256_, 0);
lean_inc(v_fst_3257_);
lean_dec(v_val_3256_);
v___x_3258_ = l_Lean_Meta_isMonad_x3f(v_fst_3257_, v_a_3246_, v_a_3247_, v_a_3248_, v_a_3249_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3273_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3261_ = v___x_3258_;
v_isShared_3262_ = v_isSharedCheck_3273_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3258_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3273_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
if (lean_obj_tag(v_a_3259_) == 0)
{
uint8_t v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3266_; 
v___x_3263_ = 0;
v___x_3264_ = lean_box(v___x_3263_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3264_);
v___x_3266_ = v___x_3261_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
else
{
uint8_t v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3271_; 
lean_dec_ref_known(v_a_3259_, 1);
v___x_3268_ = 1;
v___x_3269_ = lean_box(v___x_3268_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3269_);
v___x_3271_ = v___x_3261_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v___x_3269_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
v_a_3274_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3258_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3258_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
else
{
uint8_t v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3285_; 
lean_dec(v_a_3252_);
v___x_3282_ = 0;
v___x_3283_ = lean_box(v___x_3282_);
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 0, v___x_3283_);
v___x_3285_ = v___x_3254_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
else
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
v_a_3288_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3251_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3251_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object* v_type_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l_Lean_Meta_isMonadApp(v_type_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_);
lean_dec(v_a_3300_);
lean_dec_ref(v_a_3299_);
lean_dec(v_a_3298_);
lean_dec_ref(v_a_3297_);
return v_res_3302_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object* v_opts_3303_, lean_object* v_opt_3304_){
_start:
{
lean_object* v_name_3305_; lean_object* v_defValue_3306_; lean_object* v_map_3307_; lean_object* v___x_3308_; 
v_name_3305_ = lean_ctor_get(v_opt_3304_, 0);
v_defValue_3306_ = lean_ctor_get(v_opt_3304_, 1);
v_map_3307_ = lean_ctor_get(v_opts_3303_, 0);
v___x_3308_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3307_, v_name_3305_);
if (lean_obj_tag(v___x_3308_) == 0)
{
uint8_t v___x_3309_; 
v___x_3309_ = lean_unbox(v_defValue_3306_);
return v___x_3309_;
}
else
{
lean_object* v_val_3310_; 
v_val_3310_ = lean_ctor_get(v___x_3308_, 0);
lean_inc(v_val_3310_);
lean_dec_ref_known(v___x_3308_, 1);
if (lean_obj_tag(v_val_3310_) == 1)
{
uint8_t v_v_3311_; 
v_v_3311_ = lean_ctor_get_uint8(v_val_3310_, 0);
lean_dec_ref_known(v_val_3310_, 0);
return v_v_3311_;
}
else
{
uint8_t v___x_3312_; 
lean_dec(v_val_3310_);
v___x_3312_ = lean_unbox(v_defValue_3306_);
return v___x_3312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object* v_opts_3313_, lean_object* v_opt_3314_){
_start:
{
uint8_t v_res_3315_; lean_object* v_r_3316_; 
v_res_3315_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_opts_3313_, v_opt_3314_);
lean_dec_ref(v_opt_3314_);
lean_dec_ref(v_opts_3313_);
v_r_3316_ = lean_box(v_res_3315_);
return v_r_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object* v_x_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3325_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0));
v___x_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object* v_x_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_x_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec_ref(v_x_3327_);
return v_res_3333_;
}
}
static lean_object* _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6(void){
_start:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3343_ = lean_unsigned_to_nat(0u);
v___x_3344_ = l_Lean_mkBVar(v___x_3343_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object* v_e_3356_, lean_object* v_expectedType_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_){
_start:
{
lean_object* v_a_3364_; lean_object* v___y_3372_; lean_object* v___x_3382_; lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3786_; 
v___x_3382_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_expectedType_3357_, v_a_3359_);
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3385_ = v___x_3382_;
v_isShared_3386_ = v_isSharedCheck_3786_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3382_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3786_;
goto v_resetjp_3384_;
}
v___jp_3363_:
{
uint8_t v___x_3365_; 
v___x_3365_ = l_Lean_Exception_isInterrupt(v_a_3364_);
if (v___x_3365_ == 0)
{
uint8_t v___x_3366_; 
lean_inc_ref(v_a_3364_);
v___x_3366_ = l_Lean_Exception_isRuntime(v_a_3364_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec_ref(v_a_3364_);
v___x_3367_ = lean_box(0);
v___x_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
return v___x_3368_;
}
else
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3369_, 0, v_a_3364_);
return v___x_3369_;
}
}
else
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3370_, 0, v_a_3364_);
return v___x_3370_;
}
}
v___jp_3371_:
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3381_; 
v_a_3373_ = lean_ctor_get(v___y_3372_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___y_3372_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3375_ = v___y_3372_;
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___y_3372_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v_a_3377_; lean_object* v___x_3379_; 
v_a_3377_ = lean_ctor_get(v_a_3373_, 0);
lean_inc(v_a_3377_);
lean_dec(v_a_3373_);
if (v_isShared_3376_ == 0)
{
lean_ctor_set(v___x_3375_, 0, v_a_3377_);
v___x_3379_ = v___x_3375_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3377_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
v_resetjp_3384_:
{
lean_object* v___x_3387_; 
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
lean_inc_ref(v_e_3356_);
v___x_3387_ = lean_infer_type(v_e_3356_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3389_; lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3777_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
lean_inc(v_a_3388_);
lean_dec_ref_known(v___x_3387_, 1);
v___x_3389_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_a_3388_, v_a_3359_);
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3392_ = v___x_3389_;
v_isShared_3393_ = v_isSharedCheck_3777_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3389_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3777_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3394_; 
lean_inc(v_a_3383_);
v___x_3394_ = l_Lean_Meta_isTypeApp_x3f(v_a_3383_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3768_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3397_ = v___x_3394_;
v_isShared_3398_ = v_isSharedCheck_3768_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3394_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3768_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
if (lean_obj_tag(v_a_3395_) == 1)
{
lean_object* v_val_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3763_; 
lean_del_object(v___x_3397_);
v_val_3399_ = lean_ctor_get(v_a_3395_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v_a_3395_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3401_ = v_a_3395_;
v_isShared_3402_ = v_isSharedCheck_3763_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_val_3399_);
lean_dec(v_a_3395_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3763_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v_fst_3403_; lean_object* v_snd_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3762_; 
v_fst_3403_ = lean_ctor_get(v_val_3399_, 0);
v_snd_3404_ = lean_ctor_get(v_val_3399_, 1);
v_isSharedCheck_3762_ = !lean_is_exclusive(v_val_3399_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3406_ = v_val_3399_;
v_isShared_3407_ = v_isSharedCheck_3762_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_snd_3404_);
lean_inc(v_fst_3403_);
lean_dec(v_val_3399_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3762_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3408_; 
lean_inc(v_a_3390_);
v___x_3408_ = l_Lean_Meta_isTypeApp_x3f(v_a_3390_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3753_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3411_ = v___x_3408_;
v_isShared_3412_ = v_isSharedCheck_3753_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3753_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
if (lean_obj_tag(v_a_3409_) == 1)
{
lean_object* v_val_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3748_; 
lean_del_object(v___x_3411_);
v_val_3413_ = lean_ctor_get(v_a_3409_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v_a_3409_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3415_ = v_a_3409_;
v_isShared_3416_ = v_isSharedCheck_3748_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_val_3413_);
lean_dec(v_a_3409_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3748_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v_fst_3417_; lean_object* v_snd_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3747_; 
v_fst_3417_ = lean_ctor_get(v_val_3413_, 0);
v_snd_3418_ = lean_ctor_get(v_val_3413_, 1);
v_isSharedCheck_3747_ = !lean_is_exclusive(v_val_3413_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3420_ = v_val_3413_;
v_isShared_3421_ = v_isSharedCheck_3747_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_snd_3418_);
lean_inc(v_fst_3417_);
lean_dec(v_val_3413_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3747_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; 
v___x_3422_ = l_Lean_Meta_saveState___redArg(v_a_3359_, v_a_3361_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3424_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3422_, 1);
lean_inc(v_fst_3403_);
lean_inc(v_fst_3417_);
v___x_3424_ = l_Lean_Meta_isExprDefEq(v_fst_3417_, v_fst_3403_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3730_; 
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3427_ = v___x_3424_;
v_isShared_3428_ = v_isSharedCheck_3730_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3424_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3730_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
uint8_t v___x_3429_; 
v___x_3429_ = lean_unbox(v_a_3425_);
lean_dec(v_a_3425_);
if (v___x_3429_ == 0)
{
lean_object* v___x_3430_; lean_object* v___x_3431_; uint8_t v___x_3432_; 
lean_dec(v_a_3423_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_del_object(v___x_3385_);
v___x_3430_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3360_);
v___x_3431_ = l_Lean_Meta_autoLift;
v___x_3432_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v___x_3430_, v___x_3431_);
lean_dec_ref(v___x_3430_);
if (v___x_3432_ == 0)
{
lean_object* v___x_3433_; lean_object* v___x_3435_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3433_ = lean_box(0);
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 0, v___x_3433_);
v___x_3435_ = v___x_3427_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v___x_3433_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
else
{
lean_object* v___x_3437_; 
lean_del_object(v___x_3427_);
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
lean_inc(v_fst_3417_);
v___x_3437_ = lean_infer_type(v_fst_3417_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3439_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3438_);
lean_dec_ref_known(v___x_3437_, 1);
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
v___x_3439_ = lean_whnf(v_a_3438_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3440_);
lean_dec_ref_known(v___x_3439_, 1);
if (lean_obj_tag(v_a_3440_) == 7)
{
lean_object* v_binderType_3441_; 
v_binderType_3441_ = lean_ctor_get(v_a_3440_, 1);
if (lean_obj_tag(v_binderType_3441_) == 3)
{
lean_object* v_body_3442_; 
v_body_3442_ = lean_ctor_get(v_a_3440_, 2);
if (lean_obj_tag(v_body_3442_) == 3)
{
lean_object* v_u_3443_; lean_object* v_u_3444_; lean_object* v___x_3445_; 
lean_inc_ref(v_body_3442_);
lean_inc_ref(v_binderType_3441_);
lean_dec_ref_known(v_a_3440_, 3);
v_u_3443_ = lean_ctor_get(v_binderType_3441_, 0);
lean_inc(v_u_3443_);
lean_dec_ref_known(v_binderType_3441_, 1);
v_u_3444_ = lean_ctor_get(v_body_3442_, 0);
lean_inc(v_u_3444_);
lean_dec_ref_known(v_body_3442_, 1);
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
lean_inc(v_fst_3403_);
v___x_3445_ = lean_infer_type(v_fst_3403_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; lean_object* v___x_3447_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
v___x_3447_ = lean_whnf(v_a_3446_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
lean_dec_ref_known(v___x_3447_, 1);
if (lean_obj_tag(v_a_3448_) == 7)
{
lean_object* v_binderType_3449_; 
v_binderType_3449_ = lean_ctor_get(v_a_3448_, 1);
if (lean_obj_tag(v_binderType_3449_) == 3)
{
lean_object* v_body_3450_; 
v_body_3450_ = lean_ctor_get(v_a_3448_, 2);
if (lean_obj_tag(v_body_3450_) == 3)
{
lean_object* v_u_3451_; lean_object* v_u_3452_; lean_object* v___x_3453_; 
lean_inc_ref(v_body_3450_);
lean_inc_ref(v_binderType_3449_);
lean_dec_ref_known(v_a_3448_, 3);
v_u_3451_ = lean_ctor_get(v_binderType_3449_, 0);
lean_inc(v_u_3451_);
lean_dec_ref_known(v_binderType_3449_, 1);
v_u_3452_ = lean_ctor_get(v_body_3450_, 0);
lean_inc(v_u_3452_);
lean_dec_ref_known(v_body_3450_, 1);
v___x_3453_ = l_Lean_Meta_decLevel(v_u_3443_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3455_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3453_, 1);
v___x_3455_ = l_Lean_Meta_decLevel(v_u_3451_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3455_) == 0)
{
lean_object* v_a_3456_; lean_object* v___x_3457_; 
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
lean_inc(v_a_3456_);
lean_dec_ref_known(v___x_3455_, 1);
lean_inc(v_a_3454_);
v___x_3457_ = l_Lean_Meta_isLevelDefEq(v_a_3454_, v_a_3456_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3622_; 
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3457_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3460_ = v___x_3457_;
v_isShared_3461_ = v_isSharedCheck_3622_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_dec(v___x_3457_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3622_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
uint8_t v___x_3462_; 
v___x_3462_ = lean_unbox(v_a_3458_);
lean_dec(v_a_3458_);
if (v___x_3462_ == 1)
{
lean_object* v___x_3463_; 
lean_del_object(v___x_3460_);
v___x_3463_ = l_Lean_Meta_decLevel(v_u_3444_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3465_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3464_);
lean_dec_ref_known(v___x_3463_, 1);
v___x_3465_ = l_Lean_Meta_decLevel(v_u_3452_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v_a_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3470_; 
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3465_, 1);
v___x_3467_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__1));
v___x_3468_ = lean_box(0);
if (v_isShared_3421_ == 0)
{
lean_ctor_set_tag(v___x_3420_, 1);
lean_ctor_set(v___x_3420_, 1, v___x_3468_);
lean_ctor_set(v___x_3420_, 0, v_a_3466_);
v___x_3470_ = v___x_3420_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_a_3466_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v___x_3468_);
v___x_3470_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
lean_object* v___x_3472_; 
if (v_isShared_3407_ == 0)
{
lean_ctor_set_tag(v___x_3406_, 1);
lean_ctor_set(v___x_3406_, 1, v___x_3470_);
lean_ctor_set(v___x_3406_, 0, v_a_3464_);
v___x_3472_ = v___x_3406_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3464_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v___x_3470_);
v___x_3472_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v___x_3473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3473_, 0, v_a_3454_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
v___x_3474_ = l_Lean_Expr_const___override(v___x_3467_, v___x_3473_);
v___x_3475_ = lean_unsigned_to_nat(2u);
v___x_3476_ = lean_mk_empty_array_with_capacity(v___x_3475_);
lean_inc(v_fst_3417_);
v___x_3477_ = lean_array_push(v___x_3476_, v_fst_3417_);
lean_inc(v_fst_3403_);
v___x_3478_ = lean_array_push(v___x_3477_, v_fst_3403_);
v___x_3479_ = l_Lean_mkAppN(v___x_3474_, v___x_3478_);
lean_dec_ref(v___x_3478_);
v___x_3480_ = lean_box(0);
v___x_3481_ = l_Lean_Meta_trySynthInstance(v___x_3479_, v___x_3480_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3481_) == 0)
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3612_; 
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3484_ = v___x_3481_;
v_isShared_3485_ = v_isSharedCheck_3612_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3481_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3612_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
if (lean_obj_tag(v_a_3482_) == 1)
{
lean_object* v_a_3486_; lean_object* v___x_3487_; 
lean_del_object(v___x_3484_);
v_a_3486_ = lean_ctor_get(v_a_3482_, 0);
lean_inc(v_a_3486_);
lean_dec_ref_known(v_a_3482_, 1);
lean_inc(v_snd_3418_);
v___x_3487_ = l_Lean_Meta_getDecLevel(v_snd_3418_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; lean_object* v___x_3489_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3489_ = l_Lean_Meta_getDecLevel(v_a_3390_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3491_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
lean_inc(v_a_3383_);
v___x_3491_ = l_Lean_Meta_getDecLevel(v_a_3383_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3493_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__3));
v___x_3494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3494_, 0, v_a_3492_);
lean_ctor_set(v___x_3494_, 1, v___x_3468_);
v___x_3495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3495_, 0, v_a_3490_);
lean_ctor_set(v___x_3495_, 1, v___x_3494_);
v___x_3496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3496_, 0, v_a_3488_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
lean_inc_ref(v___x_3496_);
v___x_3497_ = l_Lean_mkConst(v___x_3493_, v___x_3496_);
v___x_3498_ = lean_unsigned_to_nat(5u);
v___x_3499_ = lean_mk_empty_array_with_capacity(v___x_3498_);
lean_inc(v_fst_3417_);
v___x_3500_ = lean_array_push(v___x_3499_, v_fst_3417_);
lean_inc(v_fst_3403_);
v___x_3501_ = lean_array_push(v___x_3500_, v_fst_3403_);
lean_inc(v_a_3486_);
v___x_3502_ = lean_array_push(v___x_3501_, v_a_3486_);
lean_inc(v_snd_3418_);
v___x_3503_ = lean_array_push(v___x_3502_, v_snd_3418_);
lean_inc_ref(v_e_3356_);
v___x_3504_ = lean_array_push(v___x_3503_, v_e_3356_);
v___x_3505_ = l_Lean_mkAppN(v___x_3497_, v___x_3504_);
lean_dec_ref(v___x_3504_);
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
lean_inc_ref(v___x_3505_);
v___x_3506_ = lean_infer_type(v___x_3505_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; lean_object* v___x_3508_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3506_, 1);
lean_inc(v_a_3383_);
v___x_3508_ = l_Lean_Meta_isExprDefEq(v_a_3383_, v_a_3507_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3603_; 
v_a_3509_ = lean_ctor_get(v___x_3508_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3508_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3511_ = v___x_3508_;
v_isShared_3512_ = v_isSharedCheck_3603_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v___x_3508_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3603_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
uint8_t v___x_3513_; 
v___x_3513_ = lean_unbox(v_a_3509_);
lean_dec(v_a_3509_);
if (v___x_3513_ == 0)
{
lean_object* v___x_3514_; 
lean_del_object(v___x_3511_);
lean_dec_ref(v___x_3505_);
lean_del_object(v___x_3415_);
lean_inc(v_fst_3403_);
v___x_3514_ = l_Lean_Meta_isMonad_x3f(v_fst_3403_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3595_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3517_ = v___x_3514_;
v_isShared_3518_ = v_isSharedCheck_3595_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3514_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3595_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
if (lean_obj_tag(v_a_3515_) == 1)
{
lean_object* v_val_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3591_; 
lean_del_object(v___x_3517_);
v_val_3519_ = lean_ctor_get(v_a_3515_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v_a_3515_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3521_ = v_a_3515_;
v_isShared_3522_ = v_isSharedCheck_3591_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_val_3519_);
lean_dec(v_a_3515_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3591_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3523_; 
lean_inc(v_snd_3418_);
v___x_3523_ = l_Lean_Meta_getLevel(v_snd_3418_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v_a_3524_; lean_object* v___x_3525_; 
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3523_, 1);
lean_inc(v_snd_3404_);
v___x_3525_ = l_Lean_Meta_getLevel(v_snd_3404_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; lean_object* v___x_3527_; uint8_t v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3525_, 1);
v___x_3527_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__5));
v___x_3528_ = 0;
v___x_3529_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_3530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3530_, 0, v_a_3526_);
lean_ctor_set(v___x_3530_, 1, v___x_3468_);
v___x_3531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3531_, 0, v_a_3524_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = l_Lean_mkConst(v___x_3529_, v___x_3531_);
v___x_3533_ = lean_obj_once(&l_Lean_Meta_coerceMonadLift_x3f___closed__6, &l_Lean_Meta_coerceMonadLift_x3f___closed__6_once, _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6);
v___x_3534_ = lean_unsigned_to_nat(3u);
v___x_3535_ = lean_mk_empty_array_with_capacity(v___x_3534_);
lean_inc_n(v_snd_3418_, 2);
v___x_3536_ = lean_array_push(v___x_3535_, v_snd_3418_);
v___x_3537_ = lean_array_push(v___x_3536_, v___x_3533_);
lean_inc(v_snd_3404_);
v___x_3538_ = lean_array_push(v___x_3537_, v_snd_3404_);
v___x_3539_ = l_Lean_mkAppN(v___x_3532_, v___x_3538_);
lean_dec_ref(v___x_3538_);
v___x_3540_ = l_Lean_mkForall(v___x_3527_, v___x_3528_, v_snd_3418_, v___x_3539_);
v___x_3541_ = l_Lean_Meta_trySynthInstance(v___x_3540_, v___x_3480_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3587_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3544_ = v___x_3541_;
v_isShared_3545_ = v_isSharedCheck_3587_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3541_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3587_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
if (lean_obj_tag(v_a_3542_) == 1)
{
lean_object* v_a_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
lean_del_object(v___x_3544_);
v_a_3546_ = lean_ctor_get(v_a_3542_, 0);
lean_inc(v_a_3546_);
lean_dec_ref_known(v_a_3542_, 1);
v___x_3547_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__9));
v___x_3548_ = l_Lean_mkConst(v___x_3547_, v___x_3496_);
v___x_3549_ = lean_unsigned_to_nat(8u);
v___x_3550_ = lean_mk_empty_array_with_capacity(v___x_3549_);
v___x_3551_ = lean_array_push(v___x_3550_, v_fst_3417_);
v___x_3552_ = lean_array_push(v___x_3551_, v_fst_3403_);
v___x_3553_ = lean_array_push(v___x_3552_, v_snd_3418_);
v___x_3554_ = lean_array_push(v___x_3553_, v_snd_3404_);
v___x_3555_ = lean_array_push(v___x_3554_, v_a_3486_);
v___x_3556_ = lean_array_push(v___x_3555_, v_a_3546_);
v___x_3557_ = lean_array_push(v___x_3556_, v_val_3519_);
v___x_3558_ = lean_array_push(v___x_3557_, v_e_3356_);
v___x_3559_ = l_Lean_mkAppN(v___x_3548_, v___x_3558_);
lean_dec_ref(v___x_3558_);
v___x_3560_ = l_Lean_Meta_expandCoe(v___x_3559_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v_a_3561_; lean_object* v_fst_3562_; lean_object* v___x_3563_; 
v_a_3561_ = lean_ctor_get(v___x_3560_, 0);
lean_inc(v_a_3561_);
lean_dec_ref_known(v___x_3560_, 1);
v_fst_3562_ = lean_ctor_get(v_a_3561_, 0);
lean_inc_n(v_fst_3562_, 2);
lean_dec(v_a_3561_);
lean_inc(v_a_3361_);
lean_inc_ref(v_a_3360_);
lean_inc(v_a_3359_);
lean_inc_ref(v_a_3358_);
v___x_3563_ = lean_infer_type(v_fst_3562_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3565_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref_known(v___x_3563_, 1);
v___x_3565_ = l_Lean_Meta_isExprDefEq(v_a_3383_, v_a_3564_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3580_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3568_ = v___x_3565_;
v_isShared_3569_ = v_isSharedCheck_3580_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___x_3565_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3580_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
uint8_t v___x_3570_; 
v___x_3570_ = lean_unbox(v_a_3566_);
lean_dec(v_a_3566_);
if (v___x_3570_ == 0)
{
lean_object* v___x_3572_; 
lean_dec(v_fst_3562_);
lean_del_object(v___x_3521_);
if (v_isShared_3569_ == 0)
{
lean_ctor_set(v___x_3568_, 0, v___x_3480_);
v___x_3572_ = v___x_3568_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3480_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
else
{
lean_object* v___x_3575_; 
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 0, v_fst_3562_);
v___x_3575_ = v___x_3521_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_fst_3562_);
v___x_3575_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
lean_object* v___x_3577_; 
if (v_isShared_3569_ == 0)
{
lean_ctor_set(v___x_3568_, 0, v___x_3575_);
v___x_3577_ = v___x_3568_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3575_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
}
else
{
lean_object* v_a_3581_; 
lean_dec(v_fst_3562_);
lean_del_object(v___x_3521_);
v_a_3581_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_a_3581_);
lean_dec_ref_known(v___x_3565_, 1);
v_a_3364_ = v_a_3581_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3582_; 
lean_dec(v_fst_3562_);
lean_del_object(v___x_3521_);
lean_dec(v_a_3383_);
v_a_3582_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___x_3563_, 1);
v_a_3364_ = v_a_3582_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3583_; 
lean_del_object(v___x_3521_);
lean_dec(v_a_3383_);
v_a_3583_ = lean_ctor_get(v___x_3560_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3560_, 1);
v_a_3364_ = v_a_3583_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3585_; 
lean_dec(v_a_3542_);
lean_del_object(v___x_3521_);
lean_dec(v_val_3519_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v___x_3480_);
v___x_3585_ = v___x_3544_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3480_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
else
{
lean_object* v_a_3588_; 
lean_del_object(v___x_3521_);
lean_dec(v_val_3519_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3588_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3541_, 1);
v_a_3364_ = v_a_3588_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3589_; 
lean_dec(v_a_3524_);
lean_del_object(v___x_3521_);
lean_dec(v_val_3519_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3589_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_a_3589_);
lean_dec_ref_known(v___x_3525_, 1);
v_a_3364_ = v_a_3589_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3590_; 
lean_del_object(v___x_3521_);
lean_dec(v_val_3519_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3590_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3590_);
lean_dec_ref_known(v___x_3523_, 1);
v_a_3364_ = v_a_3590_;
goto v___jp_3363_;
}
}
}
else
{
lean_object* v___x_3593_; 
lean_dec(v_a_3515_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 0, v___x_3480_);
v___x_3593_ = v___x_3517_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3480_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
else
{
lean_object* v_a_3596_; 
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3596_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3514_, 1);
v_a_3364_ = v_a_3596_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3598_; 
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
if (v_isShared_3416_ == 0)
{
lean_ctor_set(v___x_3415_, 0, v___x_3505_);
v___x_3598_ = v___x_3415_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v___x_3505_);
v___x_3598_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
lean_object* v___x_3600_; 
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 0, v___x_3598_);
v___x_3600_ = v___x_3511_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v___x_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
}
else
{
lean_object* v_a_3604_; 
lean_dec_ref(v___x_3505_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3604_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3508_, 1);
v_a_3364_ = v_a_3604_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3605_; 
lean_dec_ref(v___x_3505_);
lean_dec_ref_known(v___x_3496_, 2);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3605_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3506_, 1);
v_a_3364_ = v_a_3605_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3606_; 
lean_dec(v_a_3490_);
lean_dec(v_a_3488_);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3606_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3606_);
lean_dec_ref_known(v___x_3491_, 1);
v_a_3364_ = v_a_3606_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3607_; 
lean_dec(v_a_3488_);
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3607_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3489_, 1);
v_a_3364_ = v_a_3607_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3608_; 
lean_dec(v_a_3486_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3608_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3487_, 1);
v_a_3364_ = v_a_3608_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3610_; 
lean_dec(v_a_3482_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 0, v___x_3480_);
v___x_3610_ = v___x_3484_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v___x_3480_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
else
{
lean_object* v_a_3613_; 
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3613_ = lean_ctor_get(v___x_3481_, 0);
lean_inc(v_a_3613_);
lean_dec_ref_known(v___x_3481_, 1);
v_a_3364_ = v_a_3613_;
goto v___jp_3363_;
}
}
}
}
else
{
lean_object* v_a_3616_; 
lean_dec(v_a_3464_);
lean_dec(v_a_3454_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3616_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3465_, 1);
v_a_3364_ = v_a_3616_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3617_; 
lean_dec(v_a_3454_);
lean_dec(v_u_3452_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3617_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3463_, 1);
v_a_3364_ = v_a_3617_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3618_; lean_object* v___x_3620_; 
lean_dec(v_a_3454_);
lean_dec(v_u_3452_);
lean_dec(v_u_3444_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3618_ = lean_box(0);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 0, v___x_3618_);
v___x_3620_ = v___x_3460_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3618_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
else
{
lean_object* v_a_3623_; 
lean_dec(v_a_3454_);
lean_dec(v_u_3452_);
lean_dec(v_u_3444_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3623_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3623_);
lean_dec_ref_known(v___x_3457_, 1);
v_a_3364_ = v_a_3623_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3624_; 
lean_dec(v_a_3454_);
lean_dec(v_u_3452_);
lean_dec(v_u_3444_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3624_ = lean_ctor_get(v___x_3455_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v___x_3455_, 1);
v_a_3364_ = v_a_3624_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3625_; 
lean_dec(v_u_3452_);
lean_dec(v_u_3451_);
lean_dec(v_u_3444_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3625_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3625_);
lean_dec_ref_known(v___x_3453_, 1);
v_a_3364_ = v_a_3625_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3626_; 
lean_dec(v_u_3444_);
lean_dec(v_u_3443_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3626_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3448_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
lean_dec_ref_known(v_a_3448_, 3);
v___y_3372_ = v___x_3626_;
goto v___jp_3371_;
}
}
else
{
lean_object* v___x_3627_; 
lean_dec(v_u_3444_);
lean_dec(v_u_3443_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3627_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3448_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
lean_dec_ref_known(v_a_3448_, 3);
v___y_3372_ = v___x_3627_;
goto v___jp_3371_;
}
}
else
{
lean_object* v___x_3628_; 
lean_dec(v_u_3444_);
lean_dec(v_u_3443_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3628_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3448_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
lean_dec(v_a_3448_);
v___y_3372_ = v___x_3628_;
goto v___jp_3371_;
}
}
else
{
lean_object* v_a_3629_; 
lean_dec(v_u_3444_);
lean_dec(v_u_3443_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3629_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3447_, 1);
v_a_3364_ = v_a_3629_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3630_; 
lean_dec(v_u_3444_);
lean_dec(v_u_3443_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3630_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3630_);
lean_dec_ref_known(v___x_3445_, 1);
v_a_3364_ = v_a_3630_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3631_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3631_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3440_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
lean_dec_ref_known(v_a_3440_, 3);
v___y_3372_ = v___x_3631_;
goto v___jp_3371_;
}
}
else
{
lean_object* v___x_3632_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3632_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3440_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
lean_dec_ref_known(v_a_3440_, 3);
v___y_3372_ = v___x_3632_;
goto v___jp_3371_;
}
}
else
{
lean_object* v___x_3633_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3633_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3440_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
lean_dec(v_a_3440_);
v___y_3372_ = v___x_3633_;
goto v___jp_3371_;
}
}
else
{
lean_object* v_a_3634_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3634_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3634_);
lean_dec_ref_known(v___x_3439_, 1);
v_a_3364_ = v_a_3634_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3635_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3635_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3437_, 1);
v_a_3364_ = v_a_3635_;
goto v___jp_3363_;
}
}
}
else
{
lean_object* v___x_3636_; 
lean_del_object(v___x_3427_);
lean_del_object(v___x_3420_);
lean_del_object(v___x_3406_);
lean_dec(v_a_3390_);
lean_dec(v_a_3383_);
v___x_3636_ = l_Lean_Meta_isMonad_x3f(v_fst_3403_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3729_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3639_ = v___x_3636_;
v_isShared_3640_ = v_isSharedCheck_3729_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3636_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3729_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
if (lean_obj_tag(v_a_3637_) == 1)
{
lean_object* v___x_3641_; lean_object* v___x_3643_; 
v___x_3641_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__11));
if (v_isShared_3416_ == 0)
{
lean_ctor_set(v___x_3415_, 0, v_fst_3417_);
v___x_3643_ = v___x_3415_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_fst_3417_);
v___x_3643_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
lean_object* v___x_3645_; 
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 0, v_snd_3418_);
v___x_3645_ = v___x_3401_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_snd_3418_);
v___x_3645_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
lean_object* v___x_3647_; 
if (v_isShared_3393_ == 0)
{
lean_ctor_set_tag(v___x_3392_, 1);
lean_ctor_set(v___x_3392_, 0, v_snd_3404_);
v___x_3647_ = v___x_3392_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_snd_3404_);
v___x_3647_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
lean_object* v___x_3648_; lean_object* v_a_3650_; lean_object* v___x_3677_; 
v___x_3648_ = lean_box(0);
if (v_isShared_3386_ == 0)
{
lean_ctor_set_tag(v___x_3385_, 1);
lean_ctor_set(v___x_3385_, 0, v_e_3356_);
v___x_3677_ = v___x_3385_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_e_3356_);
v___x_3677_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3676_;
}
v___jp_3649_:
{
uint8_t v___x_3651_; 
v___x_3651_ = l_Lean_Exception_isInterrupt(v_a_3650_);
if (v___x_3651_ == 0)
{
uint8_t v___x_3652_; 
lean_inc_ref(v_a_3650_);
v___x_3652_ = l_Lean_Exception_isRuntime(v_a_3650_);
if (v___x_3652_ == 0)
{
lean_object* v___x_3653_; 
lean_dec_ref(v_a_3650_);
lean_del_object(v___x_3639_);
v___x_3653_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3423_, v_a_3359_, v_a_3361_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3660_ == 0)
{
lean_object* v_unused_3661_; 
v_unused_3661_ = lean_ctor_get(v___x_3653_, 0);
lean_dec(v_unused_3661_);
v___x_3655_ = v___x_3653_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_dec(v___x_3653_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 0, v___x_3648_);
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v___x_3648_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
v_a_3662_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3653_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3653_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
}
else
{
lean_object* v___x_3671_; 
lean_dec(v_a_3423_);
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
lean_ctor_set(v___x_3639_, 0, v_a_3650_);
v___x_3671_ = v___x_3639_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3650_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
else
{
lean_object* v___x_3674_; 
lean_dec(v_a_3423_);
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
lean_ctor_set(v___x_3639_, 0, v_a_3650_);
v___x_3674_ = v___x_3639_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_a_3650_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
v_reusejp_3676_:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3678_ = lean_unsigned_to_nat(6u);
v___x_3679_ = lean_mk_empty_array_with_capacity(v___x_3678_);
v___x_3680_ = lean_array_push(v___x_3679_, v___x_3643_);
v___x_3681_ = lean_array_push(v___x_3680_, v___x_3645_);
v___x_3682_ = lean_array_push(v___x_3681_, v___x_3647_);
v___x_3683_ = lean_array_push(v___x_3682_, v___x_3648_);
v___x_3684_ = lean_array_push(v___x_3683_, v_a_3637_);
v___x_3685_ = lean_array_push(v___x_3684_, v___x_3677_);
v___x_3686_ = l_Lean_Meta_mkAppOptM(v___x_3641_, v___x_3685_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3705_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3689_ = v___x_3686_;
v_isShared_3690_ = v_isSharedCheck_3705_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v___x_3686_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3705_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Lean_Meta_expandCoe(v_a_3687_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3703_; 
lean_del_object(v___x_3639_);
lean_dec(v_a_3423_);
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3694_ = v___x_3691_;
v_isShared_3695_ = v_isSharedCheck_3703_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3691_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3703_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v_fst_3696_; lean_object* v___x_3698_; 
v_fst_3696_ = lean_ctor_get(v_a_3692_, 0);
lean_inc(v_fst_3696_);
lean_dec(v_a_3692_);
if (v_isShared_3690_ == 0)
{
lean_ctor_set_tag(v___x_3689_, 1);
lean_ctor_set(v___x_3689_, 0, v_fst_3696_);
v___x_3698_ = v___x_3689_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_fst_3696_);
v___x_3698_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3700_; 
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 0, v___x_3698_);
v___x_3700_ = v___x_3694_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3698_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
}
else
{
lean_object* v_a_3704_; 
lean_del_object(v___x_3689_);
v_a_3704_ = lean_ctor_get(v___x_3691_, 0);
lean_inc(v_a_3704_);
lean_dec_ref_known(v___x_3691_, 1);
v_a_3650_ = v_a_3704_;
goto v___jp_3649_;
}
}
}
else
{
lean_object* v_a_3706_; 
v_a_3706_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3706_);
lean_dec_ref_known(v___x_3686_, 1);
v_a_3650_ = v_a_3706_;
goto v___jp_3649_;
}
}
}
}
}
}
else
{
lean_object* v___x_3711_; 
lean_del_object(v___x_3639_);
lean_dec(v_a_3637_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_del_object(v___x_3385_);
lean_dec_ref(v_e_3356_);
v___x_3711_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3423_, v_a_3359_, v_a_3361_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3719_; 
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3719_ == 0)
{
lean_object* v_unused_3720_; 
v_unused_3720_ = lean_ctor_get(v___x_3711_, 0);
lean_dec(v_unused_3720_);
v___x_3713_ = v___x_3711_;
v_isShared_3714_ = v_isSharedCheck_3719_;
goto v_resetjp_3712_;
}
else
{
lean_dec(v___x_3711_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3719_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3715_; lean_object* v___x_3717_; 
v___x_3715_ = lean_box(0);
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 0, v___x_3715_);
v___x_3717_ = v___x_3713_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3715_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
v_a_3721_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3711_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3711_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3423_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_dec(v_snd_3404_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_del_object(v___x_3385_);
lean_dec_ref(v_e_3356_);
return v___x_3636_;
}
}
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_dec(v_a_3423_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_dec(v_a_3390_);
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3731_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3424_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3424_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
else
{
lean_object* v_a_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3746_; 
lean_del_object(v___x_3420_);
lean_dec(v_snd_3418_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_dec(v_a_3390_);
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3739_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3741_ = v___x_3422_;
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_a_3739_);
lean_dec(v___x_3422_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3744_; 
if (v_isShared_3742_ == 0)
{
v___x_3744_ = v___x_3741_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3739_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
}
}
}
}
}
}
else
{
lean_object* v___x_3749_; lean_object* v___x_3751_; 
lean_dec(v_a_3409_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_dec(v_a_3390_);
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3749_ = lean_box(0);
if (v_isShared_3412_ == 0)
{
lean_ctor_set(v___x_3411_, 0, v___x_3749_);
v___x_3751_ = v___x_3411_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3749_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_fst_3403_);
lean_del_object(v___x_3401_);
lean_del_object(v___x_3392_);
lean_dec(v_a_3390_);
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3754_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3408_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3408_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
}
}
else
{
lean_object* v___x_3764_; lean_object* v___x_3766_; 
lean_dec(v_a_3395_);
lean_del_object(v___x_3392_);
lean_dec(v_a_3390_);
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v___x_3764_ = lean_box(0);
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 0, v___x_3764_);
v___x_3766_ = v___x_3397_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v___x_3764_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
}
else
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3776_; 
lean_del_object(v___x_3392_);
lean_dec(v_a_3390_);
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3769_ = lean_ctor_get(v___x_3394_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3771_ = v___x_3394_;
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3394_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3774_; 
if (v_isShared_3772_ == 0)
{
v___x_3774_ = v___x_3771_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v_a_3769_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
lean_dec_ref(v_e_3356_);
v_a_3778_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3387_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3387_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object* v_e_3787_, lean_object* v_expectedType_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l_Lean_Meta_coerceMonadLift_x3f(v_e_3787_, v_expectedType_3788_, v_a_3789_, v_a_3790_, v_a_3791_, v_a_3792_);
lean_dec(v_a_3792_);
lean_dec_ref(v_a_3791_);
lean_dec(v_a_3790_);
lean_dec_ref(v_a_3789_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object* v_expr_3795_, lean_object* v_expectedType_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_){
_start:
{
lean_object* v___x_3802_; 
lean_inc_ref(v_expectedType_3796_);
lean_inc_ref(v_expr_3795_);
v___x_3802_ = l_Lean_Meta_coerceMonadLift_x3f(v_expr_3795_, v_expectedType_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3882_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3805_ = v___x_3802_;
v_isShared_3806_ = v_isSharedCheck_3882_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3802_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3882_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
if (lean_obj_tag(v_a_3803_) == 1)
{
lean_object* v_val_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3819_; 
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v_val_3807_ = lean_ctor_get(v_a_3803_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v_a_3803_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3809_ = v_a_3803_;
v_isShared_3810_ = v_isSharedCheck_3819_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_val_3807_);
lean_dec(v_a_3803_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3819_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3814_; 
v___x_3811_ = lean_box(0);
v___x_3812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3812_, 0, v_val_3807_);
lean_ctor_set(v___x_3812_, 1, v___x_3811_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set(v___x_3809_, 0, v___x_3812_);
v___x_3814_ = v___x_3809_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v___x_3812_);
v___x_3814_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
lean_object* v___x_3816_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 0, v___x_3814_);
v___x_3816_ = v___x_3805_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v___x_3814_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
else
{
lean_object* v___x_3820_; 
lean_del_object(v___x_3805_);
lean_dec(v_a_3803_);
lean_inc_ref(v_expectedType_3796_);
v___x_3820_ = l_Lean_Meta_whnfR(v_expectedType_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; uint8_t v___x_3822_; 
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
lean_inc(v_a_3821_);
lean_dec_ref_known(v___x_3820_, 1);
v___x_3822_ = l_Lean_Expr_isForall(v_a_3821_);
lean_dec(v_a_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; 
v___x_3823_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3795_, v_expectedType_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
return v___x_3823_;
}
else
{
lean_object* v___x_3824_; 
lean_inc_ref(v_expr_3795_);
v___x_3824_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_3795_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref_known(v___x_3824_, 1);
if (lean_obj_tag(v_a_3825_) == 1)
{
lean_object* v_val_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3864_; 
v_val_3826_ = lean_ctor_get(v_a_3825_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_a_3825_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3828_ = v_a_3825_;
v_isShared_3829_ = v_isSharedCheck_3864_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_val_3826_);
lean_dec(v_a_3825_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3864_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; 
lean_inc(v_a_3800_);
lean_inc_ref(v_a_3799_);
lean_inc(v_a_3798_);
lean_inc_ref(v_a_3797_);
lean_inc(v_val_3826_);
v___x_3830_ = lean_infer_type(v_val_3826_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; lean_object* v___x_3832_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3831_);
lean_dec_ref_known(v___x_3830_, 1);
lean_inc_ref(v_expectedType_3796_);
v___x_3832_ = l_Lean_Meta_isExprDefEq(v_a_3831_, v_expectedType_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
if (lean_obj_tag(v___x_3832_) == 0)
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3847_; 
v_a_3833_ = lean_ctor_get(v___x_3832_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3832_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3835_ = v___x_3832_;
v_isShared_3836_ = v_isSharedCheck_3847_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3832_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3847_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
uint8_t v___x_3837_; 
v___x_3837_ = lean_unbox(v_a_3833_);
lean_dec(v_a_3833_);
if (v___x_3837_ == 0)
{
lean_object* v___x_3838_; 
lean_del_object(v___x_3835_);
lean_del_object(v___x_3828_);
lean_dec(v_val_3826_);
v___x_3838_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3795_, v_expectedType_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
return v___x_3838_;
}
else
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3842_; 
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v___x_3839_ = lean_box(0);
v___x_3840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3840_, 0, v_val_3826_);
lean_ctor_set(v___x_3840_, 1, v___x_3839_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 0, v___x_3840_);
v___x_3842_ = v___x_3828_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v___x_3840_);
v___x_3842_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
lean_object* v___x_3844_; 
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 0, v___x_3842_);
v___x_3844_ = v___x_3835_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v___x_3842_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_del_object(v___x_3828_);
lean_dec(v_val_3826_);
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v_a_3848_ = lean_ctor_get(v___x_3832_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3832_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3832_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3832_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
else
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3863_; 
lean_del_object(v___x_3828_);
lean_dec(v_val_3826_);
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v_a_3856_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3858_ = v___x_3830_;
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3830_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
}
else
{
lean_object* v___x_3865_; 
lean_dec(v_a_3825_);
v___x_3865_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3795_, v_expectedType_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_);
return v___x_3865_;
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v_a_3866_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3824_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3824_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v_a_3874_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3820_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3820_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_dec_ref(v_expectedType_3796_);
lean_dec_ref(v_expr_3795_);
v_a_3883_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3802_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3802_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object* v_expr_3891_, lean_object* v_expectedType_3892_, lean_object* v_a_3893_, lean_object* v_a_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3891_, v_expectedType_3892_, v_a_3893_, v_a_3894_, v_a_3895_, v_a_3896_);
lean_dec(v_a_3896_);
lean_dec_ref(v_a_3895_);
lean_dec(v_a_3894_);
lean_dec_ref(v_a_3893_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object* v_expr_3899_, lean_object* v_expectedType_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_){
_start:
{
lean_object* v___x_3906_; 
v___x_3906_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3899_, v_expectedType_3900_, v_a_3901_, v_a_3902_, v_a_3903_, v_a_3904_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3931_; 
v_a_3907_ = lean_ctor_get(v___x_3906_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3909_ = v___x_3906_;
v_isShared_3910_ = v_isSharedCheck_3931_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v___x_3906_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3931_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
switch(lean_obj_tag(v_a_3907_))
{
case 0:
{
lean_object* v___x_3911_; lean_object* v___x_3913_; 
v___x_3911_ = lean_box(0);
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 0, v___x_3911_);
v___x_3913_ = v___x_3909_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v___x_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
case 1:
{
lean_object* v_a_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3926_; 
v_a_3915_ = lean_ctor_get(v_a_3907_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v_a_3907_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3917_ = v_a_3907_;
v_isShared_3918_ = v_isSharedCheck_3926_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_a_3915_);
lean_dec(v_a_3907_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3926_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v_fst_3919_; lean_object* v___x_3921_; 
v_fst_3919_ = lean_ctor_get(v_a_3915_, 0);
lean_inc(v_fst_3919_);
lean_dec(v_a_3915_);
if (v_isShared_3918_ == 0)
{
lean_ctor_set(v___x_3917_, 0, v_fst_3919_);
v___x_3921_ = v___x_3917_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_fst_3919_);
v___x_3921_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
lean_object* v___x_3923_; 
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 0, v___x_3921_);
v___x_3923_ = v___x_3909_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v___x_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
return v___x_3923_;
}
}
}
}
default: 
{
lean_object* v___x_3927_; lean_object* v___x_3929_; 
v___x_3927_ = lean_box(2);
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 0, v___x_3927_);
v___x_3929_ = v___x_3909_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
}
}
else
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3939_; 
v_a_3932_ = lean_ctor_get(v___x_3906_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3934_ = v___x_3906_;
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v___x_3906_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object* v_expr_3940_, lean_object* v_expectedType_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l_Lean_Meta_coerce_x3f(v_expr_3940_, v_expectedType_3941_, v_a_3942_, v_a_3943_, v_a_3944_, v_a_3945_);
lean_dec(v_a_3945_);
lean_dec_ref(v_a_3944_);
lean_dec(v_a_3943_);
lean_dec_ref(v_a_3942_);
return v_res_3947_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_coeDeclAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_coeDeclAttr);
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_autoLift = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_autoLift);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Coe(builtin);
}
#ifdef __cplusplus
}
#endif
