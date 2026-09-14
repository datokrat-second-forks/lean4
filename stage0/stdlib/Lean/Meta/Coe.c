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
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
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
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
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
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 308, .m_capacity = 308, .m_length = 307, .m_data = "Tags declarations to be unfolded during coercion elaboration.\n\nThis is mostly used to hide coercion implementation details and show the coerced result instead of\nan application of auxiliary definitions (e.g. `CoeT.coe`, `Coe.coe`). This attribute only works on\nreducible functions and instance projections.\n"};
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
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___f_25_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_27_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_28_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_29_ = 0;
v___x_30_ = lean_box(2);
v___x_31_ = l_Lean_registerTagAttribute(v___x_26_, v___x_27_, v___f_25_, v___x_28_, v___x_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1(){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_37_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0));
v___x_38_ = l_Lean_addBuiltinDocString(v___x_36_, v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3(){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6));
v___x_69_ = l_Lean_addBuiltinDeclarationRanges(v___x_67_, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
return v_res_71_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object* v_env_72_, lean_object* v_declName_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = l_Lean_Meta_coeDeclAttr;
v___x_75_ = l_Lean_TagAttribute_hasTag(v___x_74_, v_env_72_, v_declName_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object* v_env_76_, lean_object* v_declName_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Lean_Meta_isCoeDecl(v_env_76_, v_declName_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object* v_declName_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v_env_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = lean_st_ref_get(v___y_81_);
v_env_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_83_);
v___x_85_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_84_, v_declName_80_);
v___x_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object* v_declName_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_87_, v___y_88_);
lean_dec(v___y_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object* v_declName_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_91_, v___y_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object* v_declName_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(v_declName_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
return v_res_104_;
}
}
static lean_object* _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_box(0);
v___x_106_ = l_Lean_Expr_sort___override(v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object* v_e_107_, lean_object* v_nm_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v___x_114_; 
lean_inc(v_nm_108_);
v___x_114_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_nm_108_, v___y_112_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_137_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_137_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_137_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_137_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
if (lean_obj_tag(v_a_115_) == 1)
{
lean_object* v_val_119_; lean_object* v_numParams_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_val_119_ = lean_ctor_get(v_a_115_, 0);
lean_inc(v_val_119_);
lean_dec_ref_known(v_a_115_, 1);
v_numParams_120_ = lean_ctor_get(v_val_119_, 1);
lean_inc(v_numParams_120_);
lean_dec(v_val_119_);
v___x_121_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v___x_122_ = l_Lean_Expr_getAppNumArgs(v_e_107_);
v___x_123_ = lean_nat_sub(v___x_122_, v_numParams_120_);
lean_dec(v_numParams_120_);
lean_dec(v___x_122_);
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_nat_sub(v___x_123_, v___x_124_);
lean_dec(v___x_123_);
v___x_126_ = l_Lean_Expr_getRevArgD(v_e_107_, v___x_125_, v___x_121_);
lean_dec_ref(v_e_107_);
v___x_127_ = l_Lean_Expr_getAppFn(v___x_126_);
v___x_128_ = l_Lean_Expr_isConst(v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_130_; 
lean_dec_ref(v___x_127_);
lean_dec_ref(v___x_126_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_nm_108_);
v___x_130_ = v___x_117_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_nm_108_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
else
{
lean_object* v___x_132_; 
lean_del_object(v___x_117_);
lean_dec(v_nm_108_);
v___x_132_ = l_Lean_Expr_constName_x21(v___x_127_);
lean_dec_ref(v___x_127_);
v_e_107_ = v___x_126_;
v_nm_108_ = v___x_132_;
goto _start;
}
}
else
{
lean_object* v___x_135_; 
lean_dec(v_a_115_);
lean_dec_ref(v_e_107_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_nm_108_);
v___x_135_ = v___x_117_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_nm_108_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_dec(v_nm_108_);
lean_dec_ref(v_e_107_);
v_a_138_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_114_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_114_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object* v_e_146_, lean_object* v_nm_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_146_, v_nm_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object* v_e_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v_e_154_);
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___y_155_);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object* v_e_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Meta_expandCoe___lam__0(v_e_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object* v_msgData_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v___x_178_; lean_object* v_env_179_; lean_object* v___x_180_; lean_object* v_toCold_181_; lean_object* v_mctx_182_; lean_object* v_lctx_183_; lean_object* v_options_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_178_ = lean_st_ref_get(v___y_176_);
v_env_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc_ref(v_env_179_);
lean_dec(v___x_178_);
v___x_180_ = lean_st_ref_get(v___y_174_);
v_toCold_181_ = lean_ctor_get(v___y_175_, 0);
v_mctx_182_ = lean_ctor_get(v___x_180_, 0);
lean_inc_ref(v_mctx_182_);
lean_dec(v___x_180_);
v_lctx_183_ = lean_ctor_get(v___y_173_, 2);
v_options_184_ = lean_ctor_get(v_toCold_181_, 2);
lean_inc_ref(v_options_184_);
lean_inc_ref(v_lctx_183_);
v___x_185_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_185_, 0, v_env_179_);
lean_ctor_set(v___x_185_, 1, v_mctx_182_);
lean_ctor_set(v___x_185_, 2, v_lctx_183_);
lean_ctor_set(v___x_185_, 3, v_options_184_);
v___x_186_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v_msgData_172_);
v___x_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_msgData_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msgData_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
return v_res_194_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_195_; double v___x_196_; 
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_float_of_nat(v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object* v_cls_200_, lean_object* v_msg_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_ref_208_; lean_object* v___x_209_; lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_255_; 
v_ref_208_ = lean_ctor_get(v___y_205_, 2);
v___x_209_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msg_201_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
v_a_210_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_255_ == 0)
{
v___x_212_ = v___x_209_;
v_isShared_213_ = v_isSharedCheck_255_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_255_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v_traceState_215_; lean_object* v_env_216_; lean_object* v_nextMacroScope_217_; lean_object* v_ngen_218_; lean_object* v_auxDeclNGen_219_; lean_object* v_cache_220_; lean_object* v_messages_221_; lean_object* v_infoState_222_; lean_object* v_snapshotTasks_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_254_; 
v___x_214_ = lean_st_ref_take(v___y_206_);
v_traceState_215_ = lean_ctor_get(v___x_214_, 4);
v_env_216_ = lean_ctor_get(v___x_214_, 0);
v_nextMacroScope_217_ = lean_ctor_get(v___x_214_, 1);
v_ngen_218_ = lean_ctor_get(v___x_214_, 2);
v_auxDeclNGen_219_ = lean_ctor_get(v___x_214_, 3);
v_cache_220_ = lean_ctor_get(v___x_214_, 5);
v_messages_221_ = lean_ctor_get(v___x_214_, 6);
v_infoState_222_ = lean_ctor_get(v___x_214_, 7);
v_snapshotTasks_223_ = lean_ctor_get(v___x_214_, 8);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_254_ == 0)
{
v___x_225_ = v___x_214_;
v_isShared_226_ = v_isSharedCheck_254_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_snapshotTasks_223_);
lean_inc(v_infoState_222_);
lean_inc(v_messages_221_);
lean_inc(v_cache_220_);
lean_inc(v_traceState_215_);
lean_inc(v_auxDeclNGen_219_);
lean_inc(v_ngen_218_);
lean_inc(v_nextMacroScope_217_);
lean_inc(v_env_216_);
lean_dec(v___x_214_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_254_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
uint64_t v_tid_227_; lean_object* v_traces_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_253_; 
v_tid_227_ = lean_ctor_get_uint64(v_traceState_215_, sizeof(void*)*1);
v_traces_228_ = lean_ctor_get(v_traceState_215_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v_traceState_215_);
if (v_isSharedCheck_253_ == 0)
{
v___x_230_ = v_traceState_215_;
v_isShared_231_ = v_isSharedCheck_253_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_traces_228_);
lean_dec(v_traceState_215_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_253_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; lean_object* v___x_233_; double v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_232_ = lean_box(0);
v___x_233_ = lean_box(0);
v___x_234_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0);
v___x_235_ = 0;
v___x_236_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1));
v___x_237_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_237_, 0, v_cls_200_);
lean_ctor_set(v___x_237_, 1, v___x_233_);
lean_ctor_set(v___x_237_, 2, v___x_236_);
lean_ctor_set_float(v___x_237_, sizeof(void*)*3, v___x_234_);
lean_ctor_set_float(v___x_237_, sizeof(void*)*3 + 8, v___x_234_);
lean_ctor_set_uint8(v___x_237_, sizeof(void*)*3 + 16, v___x_235_);
v___x_238_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2));
v___x_239_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v_a_210_);
lean_ctor_set(v___x_239_, 2, v___x_238_);
lean_inc(v_ref_208_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v_ref_208_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = l_Lean_PersistentArray_push___redArg(v_traces_228_, v___x_240_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_241_);
v___x_243_ = v___x_230_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_241_);
lean_ctor_set_uint64(v_reuseFailAlloc_252_, sizeof(void*)*1, v_tid_227_);
v___x_243_ = v_reuseFailAlloc_252_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 4, v___x_243_);
v___x_245_ = v___x_225_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_env_216_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v_nextMacroScope_217_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v_ngen_218_);
lean_ctor_set(v_reuseFailAlloc_251_, 3, v_auxDeclNGen_219_);
lean_ctor_set(v_reuseFailAlloc_251_, 4, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_251_, 5, v_cache_220_);
lean_ctor_set(v_reuseFailAlloc_251_, 6, v_messages_221_);
lean_ctor_set(v_reuseFailAlloc_251_, 7, v_infoState_222_);
lean_ctor_set(v_reuseFailAlloc_251_, 8, v_snapshotTasks_223_);
v___x_245_ = v_reuseFailAlloc_251_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_246_ = lean_st_ref_put(v___y_206_, v___x_245_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_232_);
lean_ctor_set(v___x_247_, 1, v___y_202_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_247_);
v___x_249_ = v___x_212_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object* v_cls_256_, lean_object* v_msg_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_cls_256_, v_msg_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
return v_res_264_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_keys_265_, lean_object* v_i_266_, lean_object* v_k_267_){
_start:
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = lean_array_get_size(v_keys_265_);
v___x_269_ = lean_nat_dec_lt(v_i_266_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec(v_i_266_);
return v___x_269_;
}
else
{
lean_object* v_k_x27_270_; uint8_t v___x_271_; 
v_k_x27_270_ = lean_array_fget_borrowed(v_keys_265_, v_i_266_);
v___x_271_ = l_Lean_instBEqExtraModUse_beq(v_k_267_, v_k_x27_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_nat_add(v_i_266_, v___x_272_);
lean_dec(v_i_266_);
v_i_266_ = v___x_273_;
goto _start;
}
else
{
lean_dec(v_i_266_);
return v___x_269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_keys_275_, lean_object* v_i_276_, lean_object* v_k_277_){
_start:
{
uint8_t v_res_278_; lean_object* v_r_279_; 
v_res_278_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_275_, v_i_276_, v_k_277_);
lean_dec_ref(v_k_277_);
lean_dec_ref(v_keys_275_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_280_, size_t v_x_281_, lean_object* v_x_282_){
_start:
{
if (lean_obj_tag(v_x_280_) == 0)
{
lean_object* v_es_283_; lean_object* v___x_284_; size_t v___x_285_; size_t v___x_286_; lean_object* v_j_287_; lean_object* v___x_288_; 
v_es_283_ = lean_ctor_get(v_x_280_, 0);
v___x_284_ = lean_box(2);
v___x_285_ = ((size_t)31ULL);
v___x_286_ = lean_usize_land(v_x_281_, v___x_285_);
v_j_287_ = lean_usize_to_nat(v___x_286_);
v___x_288_ = lean_array_get_borrowed(v___x_284_, v_es_283_, v_j_287_);
lean_dec(v_j_287_);
switch(lean_obj_tag(v___x_288_))
{
case 0:
{
lean_object* v_key_289_; uint8_t v___x_290_; 
v_key_289_ = lean_ctor_get(v___x_288_, 0);
v___x_290_ = l_Lean_instBEqExtraModUse_beq(v_x_282_, v_key_289_);
return v___x_290_;
}
case 1:
{
lean_object* v_node_291_; size_t v___x_292_; size_t v___x_293_; 
v_node_291_ = lean_ctor_get(v___x_288_, 0);
v___x_292_ = ((size_t)5ULL);
v___x_293_ = lean_usize_shift_right(v_x_281_, v___x_292_);
v_x_280_ = v_node_291_;
v_x_281_ = v___x_293_;
goto _start;
}
default: 
{
uint8_t v___x_295_; 
v___x_295_ = 0;
return v___x_295_;
}
}
}
else
{
lean_object* v_ks_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_ks_296_ = lean_ctor_get(v_x_280_, 0);
v___x_297_ = lean_unsigned_to_nat(0u);
v___x_298_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_ks_296_, v___x_297_, v_x_282_);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
size_t v_x_38523__boxed_302_; uint8_t v_res_303_; lean_object* v_r_304_; 
v_x_38523__boxed_302_ = lean_unbox_usize(v_x_300_);
lean_dec(v_x_300_);
v_res_303_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_299_, v_x_38523__boxed_302_, v_x_301_);
lean_dec_ref(v_x_301_);
lean_dec_ref(v_x_299_);
v_r_304_ = lean_box(v_res_303_);
return v_r_304_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object* v_x_305_, lean_object* v_x_306_){
_start:
{
uint64_t v___x_307_; size_t v___x_308_; uint8_t v___x_309_; 
v___x_307_ = l_Lean_instHashableExtraModUse_hash(v_x_306_);
v___x_308_ = lean_uint64_to_usize(v___x_307_);
v___x_309_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_305_, v___x_308_, v_x_306_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_310_, lean_object* v_x_311_){
_start:
{
uint8_t v_res_312_; lean_object* v_r_313_; 
v_res_312_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_310_, v_x_311_);
lean_dec_ref(v_x_311_);
lean_dec_ref(v_x_310_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_315_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
v___x_321_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
lean_ctor_set(v___x_321_, 2, v___x_320_);
lean_ctor_set(v___x_321_, 3, v___x_320_);
lean_ctor_set(v___x_321_, 4, v___x_320_);
lean_ctor_set(v___x_321_, 5, v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7));
v___x_327_ = l_Lean_stringToMessageData(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9));
v___x_330_ = l_Lean_stringToMessageData(v___x_329_);
return v___x_330_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1));
v___x_332_ = l_Lean_stringToMessageData(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v_cls_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_cls_336_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6));
v___x_337_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13));
v___x_338_ = l_Lean_Name_append(v___x_337_, v_cls_336_);
return v___x_338_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15));
v___x_341_ = l_Lean_stringToMessageData(v___x_340_);
return v___x_341_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17));
v___x_344_ = l_Lean_stringToMessageData(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object* v_mod_349_, uint8_t v_isMeta_350_, lean_object* v_hint_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_env_360_; uint8_t v_isExporting_361_; lean_object* v_entry_362_; lean_object* v___x_363_; lean_object* v_env_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_358_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_359_ = lean_st_ref_get(v___y_356_);
v_env_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc_ref(v_env_360_);
lean_dec(v___x_359_);
v_isExporting_361_ = lean_ctor_get_uint8(v_env_360_, sizeof(void*)*8);
lean_dec_ref(v_env_360_);
lean_inc(v_mod_349_);
v_entry_362_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_362_, 0, v_mod_349_);
lean_ctor_set_uint8(v_entry_362_, sizeof(void*)*1, v_isExporting_361_);
lean_ctor_set_uint8(v_entry_362_, sizeof(void*)*1 + 1, v_isMeta_350_);
v___x_363_ = lean_st_ref_get(v___y_356_);
v_env_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_ref(v_env_364_);
lean_dec(v___x_363_);
v___x_365_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_366_ = lean_box(1);
v___x_367_ = lean_box(0);
v___x_412_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_358_, v___x_365_, v_env_364_, v___x_366_, v___x_367_);
v___x_413_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v___x_412_, v_entry_362_);
lean_dec(v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v_toCold_414_; lean_object* v_options_415_; uint8_t v_hasTrace_416_; 
v_toCold_414_ = lean_ctor_get(v___y_355_, 0);
v_options_415_ = lean_ctor_get(v_toCold_414_, 2);
v_hasTrace_416_ = lean_ctor_get_uint8(v_options_415_, sizeof(void*)*1);
if (v_hasTrace_416_ == 0)
{
lean_dec(v_hint_351_);
lean_dec(v_mod_349_);
v___y_369_ = v___y_352_;
v___y_370_ = v___y_354_;
v___y_371_ = v___y_356_;
goto v___jp_368_;
}
else
{
lean_object* v_inheritedTraceOptions_417_; lean_object* v_cls_418_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_427_; lean_object* v___y_428_; lean_object* v___x_440_; uint8_t v___x_441_; 
v_inheritedTraceOptions_417_ = lean_ctor_get(v_toCold_414_, 11);
v_cls_418_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6));
v___x_440_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14);
v___x_441_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_417_, v_options_415_, v___x_440_);
if (v___x_441_ == 0)
{
lean_dec(v_hint_351_);
lean_dec(v_mod_349_);
v___y_369_ = v___y_352_;
v___y_370_ = v___y_354_;
v___y_371_ = v___y_356_;
goto v___jp_368_;
}
else
{
lean_object* v___x_442_; lean_object* v___y_444_; 
v___x_442_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16);
if (v_isExporting_361_ == 0)
{
lean_object* v___x_451_; 
v___x_451_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21));
v___y_444_ = v___x_451_;
goto v___jp_443_;
}
else
{
lean_object* v___x_452_; 
v___x_452_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22));
v___y_444_ = v___x_452_;
goto v___jp_443_;
}
v___jp_443_:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_inc_ref(v___y_444_);
v___x_445_ = l_Lean_stringToMessageData(v___y_444_);
v___x_446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_442_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18);
v___x_448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_446_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
if (v_isMeta_350_ == 0)
{
lean_object* v___x_449_; 
v___x_449_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19));
v___y_427_ = v___x_448_;
v___y_428_ = v___x_449_;
goto v___jp_426_;
}
else
{
lean_object* v___x_450_; 
v___x_450_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20));
v___y_427_ = v___x_448_;
v___y_428_ = v___x_450_;
goto v___jp_426_;
}
}
}
v___jp_419_:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_422_, 0, v___y_420_);
lean_ctor_set(v___x_422_, 1, v___y_421_);
v___x_423_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_cls_418_, v___x_422_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v_snd_425_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_423_, 1);
v_snd_425_ = lean_ctor_get(v_a_424_, 1);
lean_inc(v_snd_425_);
lean_dec(v_a_424_);
v___y_369_ = v_snd_425_;
v___y_370_ = v___y_354_;
v___y_371_ = v___y_356_;
goto v___jp_368_;
}
else
{
lean_dec_ref_known(v_entry_362_, 1);
return v___x_423_;
}
}
v___jp_426_:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
lean_inc_ref(v___y_428_);
v___x_429_ = l_Lean_stringToMessageData(v___y_428_);
v___x_430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_430_, 0, v___y_427_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8);
v___x_432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = l_Lean_MessageData_ofName(v_mod_349_);
v___x_434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = l_Lean_Name_isAnonymous(v_hint_351_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10);
v___x_437_ = l_Lean_MessageData_ofName(v_hint_351_);
v___x_438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_436_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
v___y_420_ = v___x_434_;
v___y_421_ = v___x_438_;
goto v___jp_419_;
}
else
{
lean_object* v___x_439_; 
lean_dec(v_hint_351_);
v___x_439_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11);
v___y_420_ = v___x_434_;
v___y_421_ = v___x_439_;
goto v___jp_419_;
}
}
}
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
lean_dec_ref_known(v_entry_362_, 1);
lean_dec(v_hint_351_);
lean_dec(v_mod_349_);
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___y_352_);
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
v___jp_368_:
{
lean_object* v___x_372_; lean_object* v_toEnvExtension_373_; lean_object* v_env_374_; lean_object* v_nextMacroScope_375_; lean_object* v_ngen_376_; lean_object* v_auxDeclNGen_377_; lean_object* v_traceState_378_; lean_object* v_messages_379_; lean_object* v_infoState_380_; lean_object* v_snapshotTasks_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_410_; 
v___x_372_ = lean_st_ref_take(v___y_371_);
v_toEnvExtension_373_ = lean_ctor_get(v___x_365_, 0);
v_env_374_ = lean_ctor_get(v___x_372_, 0);
v_nextMacroScope_375_ = lean_ctor_get(v___x_372_, 1);
v_ngen_376_ = lean_ctor_get(v___x_372_, 2);
v_auxDeclNGen_377_ = lean_ctor_get(v___x_372_, 3);
v_traceState_378_ = lean_ctor_get(v___x_372_, 4);
v_messages_379_ = lean_ctor_get(v___x_372_, 6);
v_infoState_380_ = lean_ctor_get(v___x_372_, 7);
v_snapshotTasks_381_ = lean_ctor_get(v___x_372_, 8);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; 
v_unused_411_ = lean_ctor_get(v___x_372_, 5);
lean_dec(v_unused_411_);
v___x_383_ = v___x_372_;
v_isShared_384_ = v_isSharedCheck_410_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_snapshotTasks_381_);
lean_inc(v_infoState_380_);
lean_inc(v_messages_379_);
lean_inc(v_traceState_378_);
lean_inc(v_auxDeclNGen_377_);
lean_inc(v_ngen_376_);
lean_inc(v_nextMacroScope_375_);
lean_inc(v_env_374_);
lean_dec(v___x_372_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_410_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v_asyncMode_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v_asyncMode_385_ = lean_ctor_get(v_toEnvExtension_373_, 2);
v___x_386_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_365_, v_env_374_, v_entry_362_, v_asyncMode_385_, v___x_367_);
v___x_387_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 5, v___x_387_);
lean_ctor_set(v___x_383_, 0, v___x_386_);
v___x_389_ = v___x_383_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_nextMacroScope_375_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_ngen_376_);
lean_ctor_set(v_reuseFailAlloc_409_, 3, v_auxDeclNGen_377_);
lean_ctor_set(v_reuseFailAlloc_409_, 4, v_traceState_378_);
lean_ctor_set(v_reuseFailAlloc_409_, 5, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_409_, 6, v_messages_379_);
lean_ctor_set(v_reuseFailAlloc_409_, 7, v_infoState_380_);
lean_ctor_set(v_reuseFailAlloc_409_, 8, v_snapshotTasks_381_);
v___x_389_ = v_reuseFailAlloc_409_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v_mctx_392_; lean_object* v_zetaDeltaFVarIds_393_; lean_object* v_postponed_394_; lean_object* v_diag_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_407_; 
v___x_390_ = lean_st_ref_put(v___y_371_, v___x_389_);
v___x_391_ = lean_st_ref_take(v___y_370_);
v_mctx_392_ = lean_ctor_get(v___x_391_, 0);
v_zetaDeltaFVarIds_393_ = lean_ctor_get(v___x_391_, 2);
v_postponed_394_ = lean_ctor_get(v___x_391_, 3);
v_diag_395_ = lean_ctor_get(v___x_391_, 4);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_407_ == 0)
{
lean_object* v_unused_408_; 
v_unused_408_ = lean_ctor_get(v___x_391_, 1);
lean_dec(v_unused_408_);
v___x_397_ = v___x_391_;
v_isShared_398_ = v_isSharedCheck_407_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_diag_395_);
lean_inc(v_postponed_394_);
lean_inc(v_zetaDeltaFVarIds_393_);
lean_inc(v_mctx_392_);
lean_dec(v___x_391_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_407_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_399_ = lean_box(0);
v___x_400_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v___x_400_);
v___x_402_ = v___x_397_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_mctx_392_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_406_, 2, v_zetaDeltaFVarIds_393_);
lean_ctor_set(v_reuseFailAlloc_406_, 3, v_postponed_394_);
lean_ctor_set(v_reuseFailAlloc_406_, 4, v_diag_395_);
v___x_402_ = v_reuseFailAlloc_406_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = lean_st_ref_put(v___y_370_, v___x_402_);
v___x_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_399_);
lean_ctor_set(v___x_404_, 1, v___y_369_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object* v_mod_456_, lean_object* v_isMeta_457_, lean_object* v_hint_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
uint8_t v_isMeta_boxed_465_; lean_object* v_res_466_; 
v_isMeta_boxed_465_ = lean_unbox(v_isMeta_457_);
v_res_466_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_mod_456_, v_isMeta_boxed_465_, v_hint_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(lean_object* v_a_467_, lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_468_) == 0)
{
lean_object* v___x_469_; 
v___x_469_ = lean_box(0);
return v___x_469_;
}
else
{
lean_object* v_key_470_; lean_object* v_value_471_; lean_object* v_tail_472_; uint8_t v___x_473_; 
v_key_470_ = lean_ctor_get(v_x_468_, 0);
v_value_471_ = lean_ctor_get(v_x_468_, 1);
v_tail_472_ = lean_ctor_get(v_x_468_, 2);
v___x_473_ = lean_name_eq(v_key_470_, v_a_467_);
if (v___x_473_ == 0)
{
v_x_468_ = v_tail_472_;
goto _start;
}
else
{
lean_object* v___x_475_; 
lean_inc(v_value_471_);
v___x_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_475_, 0, v_value_471_);
return v___x_475_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_476_, lean_object* v_x_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_476_, v_x_477_);
lean_dec(v_x_477_);
lean_dec(v_a_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object* v_m_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_buckets_481_; lean_object* v___x_482_; uint64_t v___y_484_; 
v_buckets_481_ = lean_ctor_get(v_m_479_, 1);
v___x_482_ = lean_array_get_size(v_buckets_481_);
if (lean_obj_tag(v_a_480_) == 0)
{
uint64_t v___x_498_; 
v___x_498_ = 1723ULL;
v___y_484_ = v___x_498_;
goto v___jp_483_;
}
else
{
uint64_t v_hash_499_; 
v_hash_499_ = lean_ctor_get_uint64(v_a_480_, sizeof(void*)*2);
v___y_484_ = v_hash_499_;
goto v___jp_483_;
}
v___jp_483_:
{
uint64_t v___x_485_; uint64_t v___x_486_; uint64_t v_fold_487_; uint64_t v___x_488_; uint64_t v___x_489_; uint64_t v___x_490_; size_t v___x_491_; size_t v___x_492_; size_t v___x_493_; size_t v___x_494_; size_t v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_485_ = 32ULL;
v___x_486_ = lean_uint64_shift_right(v___y_484_, v___x_485_);
v_fold_487_ = lean_uint64_xor(v___y_484_, v___x_486_);
v___x_488_ = 16ULL;
v___x_489_ = lean_uint64_shift_right(v_fold_487_, v___x_488_);
v___x_490_ = lean_uint64_xor(v_fold_487_, v___x_489_);
v___x_491_ = lean_uint64_to_usize(v___x_490_);
v___x_492_ = lean_usize_of_nat(v___x_482_);
v___x_493_ = ((size_t)1ULL);
v___x_494_ = lean_usize_sub(v___x_492_, v___x_493_);
v___x_495_ = lean_usize_land(v___x_491_, v___x_494_);
v___x_496_ = lean_array_uget_borrowed(v_buckets_481_, v___x_495_);
v___x_497_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_480_, v___x_496_);
return v___x_497_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object* v_m_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_500_, v_a_501_);
lean_dec(v_a_501_);
lean_dec_ref(v_m_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object* v___x_503_, lean_object* v_declName_504_, lean_object* v_as_505_, size_t v_sz_506_, size_t v_i_507_, lean_object* v_b_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
uint8_t v___x_515_; 
v___x_515_ = lean_usize_dec_lt(v_i_507_, v_sz_506_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
lean_dec(v_declName_504_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v_b_508_);
lean_ctor_set(v___x_516_, 1, v___y_509_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
return v___x_517_;
}
else
{
lean_object* v___x_518_; lean_object* v_modules_519_; lean_object* v___x_520_; lean_object* v_a_521_; lean_object* v___x_522_; lean_object* v_toImport_523_; lean_object* v_module_524_; lean_object* v___x_525_; uint8_t v___x_526_; lean_object* v___x_527_; 
v___x_518_ = l_Lean_Environment_header(v___x_503_);
v_modules_519_ = lean_ctor_get(v___x_518_, 3);
lean_inc_ref(v_modules_519_);
lean_dec_ref(v___x_518_);
v___x_520_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_521_ = lean_array_uget_borrowed(v_as_505_, v_i_507_);
v___x_522_ = lean_array_get(v___x_520_, v_modules_519_, v_a_521_);
lean_dec_ref(v_modules_519_);
v_toImport_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc_ref(v_toImport_523_);
lean_dec(v___x_522_);
v_module_524_ = lean_ctor_get(v_toImport_523_, 0);
lean_inc(v_module_524_);
lean_dec_ref(v_toImport_523_);
v___x_525_ = lean_box(0);
v___x_526_ = 0;
lean_inc(v_declName_504_);
v___x_527_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_524_, v___x_526_, v_declName_504_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v_snd_529_; size_t v___x_530_; size_t v___x_531_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_527_, 1);
v_snd_529_ = lean_ctor_get(v_a_528_, 1);
lean_inc(v_snd_529_);
lean_dec(v_a_528_);
v___x_530_ = ((size_t)1ULL);
v___x_531_ = lean_usize_add(v_i_507_, v___x_530_);
v_i_507_ = v___x_531_;
v_b_508_ = v___x_525_;
v___y_509_ = v_snd_529_;
goto _start;
}
else
{
lean_dec(v_declName_504_);
return v___x_527_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object* v___x_533_, lean_object* v_declName_534_, lean_object* v_as_535_, lean_object* v_sz_536_, lean_object* v_i_537_, lean_object* v_b_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
size_t v_sz_boxed_545_; size_t v_i_boxed_546_; lean_object* v_res_547_; 
v_sz_boxed_545_ = lean_unbox_usize(v_sz_536_);
lean_dec(v_sz_536_);
v_i_boxed_546_ = lean_unbox_usize(v_i_537_);
lean_dec(v_i_537_);
v_res_547_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v___x_533_, v_declName_534_, v_as_535_, v_sz_boxed_545_, v_i_boxed_546_, v_b_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec_ref(v_as_535_);
lean_dec_ref(v___x_533_);
return v_res_547_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0(void){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Std_HashMap_instInhabited___redArg();
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object* v_declName_551_, uint8_t v_isMeta_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v_env_565_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___x_590_; 
v___x_559_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0);
v___x_560_ = lean_st_ref_get(v___y_557_);
v_env_565_ = lean_ctor_get(v___x_560_, 0);
lean_inc_ref(v_env_565_);
lean_dec(v___x_560_);
v___x_590_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_565_, v_declName_551_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_dec_ref(v_env_565_);
lean_dec(v_declName_551_);
goto v___jp_561_;
}
else
{
lean_object* v_val_591_; lean_object* v___x_592_; lean_object* v_modules_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_val_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_val_591_);
lean_dec_ref_known(v___x_590_, 1);
v___x_592_ = l_Lean_Environment_header(v_env_565_);
v_modules_593_ = lean_ctor_get(v___x_592_, 3);
lean_inc_ref(v_modules_593_);
lean_dec_ref(v___x_592_);
v___x_594_ = lean_array_get_size(v_modules_593_);
v___x_595_ = lean_nat_dec_lt(v_val_591_, v___x_594_);
if (v___x_595_ == 0)
{
lean_dec_ref(v_modules_593_);
lean_dec(v_val_591_);
lean_dec_ref(v_env_565_);
lean_dec(v_declName_551_);
goto v___jp_561_;
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___y_599_; 
v___x_596_ = lean_array_fget(v_modules_593_, v_val_591_);
lean_dec(v_val_591_);
lean_dec_ref(v_modules_593_);
v___x_597_ = lean_st_ref_get(v___y_557_);
if (v_isMeta_552_ == 0)
{
lean_dec(v___x_597_);
v___y_599_ = v_isMeta_552_;
goto v___jp_598_;
}
else
{
lean_object* v_env_612_; uint8_t v___x_613_; 
v_env_612_ = lean_ctor_get(v___x_597_, 0);
lean_inc_ref(v_env_612_);
lean_dec(v___x_597_);
lean_inc(v_declName_551_);
v___x_613_ = l_Lean_isMarkedMeta(v_env_612_, v_declName_551_);
if (v___x_613_ == 0)
{
v___y_599_ = v_isMeta_552_;
goto v___jp_598_;
}
else
{
uint8_t v___x_614_; 
v___x_614_ = 0;
v___y_599_ = v___x_614_;
goto v___jp_598_;
}
}
v___jp_598_:
{
lean_object* v_toImport_600_; lean_object* v_module_601_; lean_object* v___x_602_; 
v_toImport_600_ = lean_ctor_get(v___x_596_, 0);
lean_inc_ref(v_toImport_600_);
lean_dec(v___x_596_);
v_module_601_ = lean_ctor_get(v_toImport_600_, 0);
lean_inc(v_module_601_);
lean_dec_ref(v_toImport_600_);
lean_inc(v_declName_551_);
v___x_602_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_601_, v___y_599_, v_declName_551_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v_snd_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v_snd_604_ = lean_ctor_get(v_a_603_, 1);
lean_inc(v_snd_604_);
lean_dec(v_a_603_);
v___x_605_ = l_Lean_indirectModUseExt;
v___x_606_ = lean_box(1);
v___x_607_ = lean_box(0);
lean_inc_ref(v_env_565_);
v___x_608_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_559_, v___x_605_, v_env_565_, v___x_606_, v___x_607_);
v___x_609_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v___x_608_, v_declName_551_);
lean_dec(v___x_608_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v___x_610_; 
v___x_610_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1));
v___y_567_ = v_snd_604_;
v___y_568_ = v___x_610_;
goto v___jp_566_;
}
else
{
lean_object* v_val_611_; 
v_val_611_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_val_611_);
lean_dec_ref_known(v___x_609_, 1);
v___y_567_ = v_snd_604_;
v___y_568_ = v_val_611_;
goto v___jp_566_;
}
}
else
{
lean_dec_ref(v_env_565_);
lean_dec(v_declName_551_);
return v___x_602_;
}
}
}
}
v___jp_561_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_562_ = lean_box(0);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set(v___x_563_, 1, v___y_553_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
v___jp_566_:
{
lean_object* v___x_569_; size_t v_sz_570_; size_t v___x_571_; lean_object* v___x_572_; 
v___x_569_ = lean_box(0);
v_sz_570_ = lean_array_size(v___y_568_);
v___x_571_ = ((size_t)0ULL);
v___x_572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v_env_565_, v_declName_551_, v___y_568_, v_sz_570_, v___x_571_, v___x_569_, v___y_567_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec_ref(v___y_568_);
lean_dec_ref(v_env_565_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_589_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_589_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_589_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_589_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_snd_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_587_; 
v_snd_577_ = lean_ctor_get(v_a_573_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v_a_573_);
if (v_isSharedCheck_587_ == 0)
{
lean_object* v_unused_588_; 
v_unused_588_ = lean_ctor_get(v_a_573_, 0);
lean_dec(v_unused_588_);
v___x_579_ = v_a_573_;
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_snd_577_);
lean_dec(v_a_573_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_569_);
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_snd_577_);
v___x_582_ = v_reuseFailAlloc_586_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_584_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_582_);
v___x_584_ = v___x_575_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
else
{
return v___x_572_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object* v_declName_615_, lean_object* v_isMeta_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
uint8_t v_isMeta_boxed_623_; lean_object* v_res_624_; 
v_isMeta_boxed_623_ = lean_unbox(v_isMeta_616_);
v_res_624_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_declName_615_, v_isMeta_boxed_623_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object* v_e_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v___y_640_; lean_object* v_f_644_; uint8_t v___x_645_; 
v_f_644_ = l_Lean_Expr_getAppFn(v_e_632_);
v___x_645_ = l_Lean_Expr_isConst(v_f_644_);
if (v___x_645_ == 0)
{
lean_dec_ref(v_f_644_);
lean_dec_ref(v_e_632_);
v___y_640_ = v___y_633_;
goto v___jp_639_;
}
else
{
lean_object* v_declName_646_; lean_object* v___x_647_; lean_object* v_env_648_; uint8_t v___x_649_; 
v_declName_646_ = l_Lean_Expr_constName_x21(v_f_644_);
lean_dec_ref(v_f_644_);
v___x_647_ = lean_st_ref_get(v___y_637_);
v_env_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc_ref(v_env_648_);
lean_dec(v___x_647_);
lean_inc(v_declName_646_);
v___x_649_ = l_Lean_Meta_isCoeDecl(v_env_648_, v_declName_646_);
if (v___x_649_ == 0)
{
lean_dec(v_declName_646_);
lean_dec_ref(v_e_632_);
v___y_640_ = v___y_633_;
goto v___jp_639_;
}
else
{
lean_object* v___x_650_; 
lean_inc(v_declName_646_);
lean_inc_ref(v_e_632_);
v___x_650_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_632_, v_declName_646_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; uint8_t v___x_652_; lean_object* v___x_653_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_651_);
lean_dec_ref_known(v___x_650_, 1);
v___x_652_ = 0;
v___x_653_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_a_651_, v___x_652_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v_snd_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_706_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_653_, 1);
v_snd_655_ = lean_ctor_get(v_a_654_, 1);
v_isSharedCheck_706_ = !lean_is_exclusive(v_a_654_);
if (v_isSharedCheck_706_ == 0)
{
lean_object* v_unused_707_; 
v_unused_707_ = lean_ctor_get(v_a_654_, 0);
lean_dec(v_unused_707_);
v___x_657_ = v_a_654_;
v_isShared_658_ = v_isSharedCheck_706_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_snd_655_);
lean_dec(v_a_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_706_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; 
lean_inc_ref(v_e_632_);
v___x_659_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_632_, v___x_652_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_697_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_697_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_697_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_697_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
if (lean_obj_tag(v_a_660_) == 1)
{
lean_object* v_val_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_696_; 
v_val_664_ = lean_ctor_get(v_a_660_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v_a_660_);
if (v_isSharedCheck_696_ == 0)
{
v___x_666_ = v_a_660_;
v_isShared_667_ = v_isSharedCheck_696_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_val_664_);
lean_dec(v_a_660_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_696_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___y_669_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__3));
v___x_681_ = lean_name_eq(v_declName_646_, v___x_680_);
lean_dec(v_declName_646_);
if (v___x_681_ == 0)
{
lean_dec_ref(v_e_632_);
v___y_669_ = v_snd_655_;
goto v___jp_668_;
}
else
{
lean_object* v_dummy_682_; lean_object* v_nargs_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_dummy_682_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_683_ = l_Lean_Expr_getAppNumArgs(v_e_632_);
lean_inc(v_nargs_683_);
v___x_684_ = lean_mk_array(v_nargs_683_, v_dummy_682_);
v___x_685_ = lean_unsigned_to_nat(1u);
v___x_686_ = lean_nat_sub(v_nargs_683_, v___x_685_);
lean_dec(v_nargs_683_);
v___x_687_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_632_, v___x_684_, v___x_686_);
v___x_688_ = lean_unsigned_to_nat(2u);
v___x_689_ = lean_array_get_size(v___x_687_);
v___x_690_ = lean_nat_dec_lt(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_dec_ref(v___x_687_);
v___y_669_ = v_snd_655_;
goto v___jp_668_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_array_fget(v___x_687_, v___x_688_);
lean_dec_ref(v___x_687_);
v___x_692_ = l_Lean_Expr_getAppFn(v___x_691_);
lean_dec(v___x_691_);
v___x_693_ = l_Lean_Expr_isConst(v___x_692_);
if (v___x_693_ == 0)
{
lean_dec_ref(v___x_692_);
v___y_669_ = v_snd_655_;
goto v___jp_668_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = l_Lean_Expr_constName_x21(v___x_692_);
lean_dec_ref(v___x_692_);
v___x_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v_snd_655_);
v___y_669_ = v___x_695_;
goto v___jp_668_;
}
}
}
v___jp_668_:
{
lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_670_ = l_Lean_Expr_headBeta(v_val_664_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_670_);
v___x_672_ = v___x_666_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_670_);
v___x_672_ = v_reuseFailAlloc_679_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
lean_object* v___x_674_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___y_669_);
lean_ctor_set(v___x_657_, 0, v___x_672_);
v___x_674_ = v___x_657_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___y_669_);
v___x_674_ = v_reuseFailAlloc_678_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
lean_object* v___x_676_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_674_);
v___x_676_ = v___x_662_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_662_);
lean_dec(v_a_660_);
lean_del_object(v___x_657_);
lean_dec(v_declName_646_);
lean_dec_ref(v_e_632_);
v___y_640_ = v_snd_655_;
goto v___jp_639_;
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_del_object(v___x_657_);
lean_dec(v_snd_655_);
lean_dec(v_declName_646_);
lean_dec_ref(v_e_632_);
v_a_698_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_659_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_659_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec(v_declName_646_);
lean_dec_ref(v_e_632_);
v_a_708_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_653_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_653_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec(v_declName_646_);
lean_dec(v___y_633_);
lean_dec_ref(v_e_632_);
v_a_716_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_650_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_650_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
v___jp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_641_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__0));
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___y_640_);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object* v_e_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_Meta_expandCoe___lam__1(v_e_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(lean_object* v_k_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v_b_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v___x_741_; 
lean_inc(v___y_739_);
lean_inc_ref(v___y_738_);
lean_inc(v___y_737_);
lean_inc_ref(v___y_736_);
lean_inc(v___y_733_);
v___x_741_ = lean_apply_8(v_k_732_, v_b_735_, v___y_733_, v___y_734_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, lean_box(0));
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed(lean_object* v_k_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v_b_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(v_k_742_, v___y_743_, v___y_744_, v_b_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_743_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object* v_name_752_, uint8_t v_bi_753_, lean_object* v_type_754_, lean_object* v_k_755_, uint8_t v_kind_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___f_764_; lean_object* v___x_765_; 
lean_inc(v___y_757_);
v___f_764_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_764_, 0, v_k_755_);
lean_closure_set(v___f_764_, 1, v___y_757_);
lean_closure_set(v___f_764_, 2, v___y_758_);
v___x_765_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_752_, v_bi_753_, v_type_754_, v___f_764_, v_kind_756_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
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
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
v_a_774_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_765_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_765_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object* v_name_782_, lean_object* v_bi_783_, lean_object* v_type_784_, lean_object* v_k_785_, lean_object* v_kind_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
uint8_t v_bi_boxed_794_; uint8_t v_kind_boxed_795_; lean_object* v_res_796_; 
v_bi_boxed_794_ = lean_unbox(v_bi_783_);
v_kind_boxed_795_ = lean_unbox(v_kind_786_);
v_res_796_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_name_782_, v_bi_boxed_794_, v_type_784_, v_k_785_, v_kind_boxed_795_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_787_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(lean_object* v_a_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v_a_797_);
lean_ctor_set(v___x_804_, 1, v___y_798_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v_a_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(v_a_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(lean_object* v_name_814_, lean_object* v_type_815_, lean_object* v_val_816_, lean_object* v_k_817_, uint8_t v_nondep_818_, uint8_t v_kind_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v___f_827_; lean_object* v___x_828_; 
lean_inc(v___y_820_);
v___f_827_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_827_, 0, v_k_817_);
lean_closure_set(v___f_827_, 1, v___y_820_);
lean_closure_set(v___f_827_, 2, v___y_821_);
v___x_828_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_814_, v_type_815_, v_val_816_, v___f_827_, v_nondep_818_, v_kind_819_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
v_a_837_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_828_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_828_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg___boxed(lean_object* v_name_845_, lean_object* v_type_846_, lean_object* v_val_847_, lean_object* v_k_848_, lean_object* v_nondep_849_, lean_object* v_kind_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
uint8_t v_nondep_boxed_858_; uint8_t v_kind_boxed_859_; lean_object* v_res_860_; 
v_nondep_boxed_858_ = lean_unbox(v_nondep_849_);
v_kind_boxed_859_ = lean_unbox(v_kind_850_);
v_res_860_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_name_845_, v_type_846_, v_val_847_, v_k_848_, v_nondep_boxed_858_, v_kind_boxed_859_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_851_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(lean_object* v_a_861_, lean_object* v_b_862_, lean_object* v_x_863_){
_start:
{
if (lean_obj_tag(v_x_863_) == 0)
{
lean_dec(v_b_862_);
lean_dec_ref(v_a_861_);
return v_x_863_;
}
else
{
lean_object* v_key_864_; lean_object* v_value_865_; lean_object* v_tail_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_878_; 
v_key_864_ = lean_ctor_get(v_x_863_, 0);
v_value_865_ = lean_ctor_get(v_x_863_, 1);
v_tail_866_ = lean_ctor_get(v_x_863_, 2);
v_isSharedCheck_878_ = !lean_is_exclusive(v_x_863_);
if (v_isSharedCheck_878_ == 0)
{
v___x_868_ = v_x_863_;
v_isShared_869_ = v_isSharedCheck_878_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_tail_866_);
lean_inc(v_value_865_);
lean_inc(v_key_864_);
lean_dec(v_x_863_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_878_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
uint8_t v___x_870_; 
v___x_870_ = l_Lean_ExprStructEq_beq(v_key_864_, v_a_861_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; lean_object* v___x_873_; 
v___x_871_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_861_, v_b_862_, v_tail_866_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 2, v___x_871_);
v___x_873_ = v___x_868_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_key_864_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_value_865_);
lean_ctor_set(v_reuseFailAlloc_874_, 2, v___x_871_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
else
{
lean_object* v___x_876_; 
lean_dec(v_value_865_);
lean_dec(v_key_864_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 1, v_b_862_);
lean_ctor_set(v___x_868_, 0, v_a_861_);
v___x_876_ = v___x_868_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_861_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_b_862_);
lean_ctor_set(v_reuseFailAlloc_877_, 2, v_tail_866_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object* v_a_879_, lean_object* v_x_880_){
_start:
{
if (lean_obj_tag(v_x_880_) == 0)
{
uint8_t v___x_881_; 
v___x_881_ = 0;
return v___x_881_;
}
else
{
lean_object* v_key_882_; lean_object* v_tail_883_; uint8_t v___x_884_; 
v_key_882_ = lean_ctor_get(v_x_880_, 0);
v_tail_883_ = lean_ctor_get(v_x_880_, 2);
v___x_884_ = l_Lean_ExprStructEq_beq(v_key_882_, v_a_879_);
if (v___x_884_ == 0)
{
v_x_880_ = v_tail_883_;
goto _start;
}
else
{
return v___x_884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object* v_a_886_, lean_object* v_x_887_){
_start:
{
uint8_t v_res_888_; lean_object* v_r_889_; 
v_res_888_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_886_, v_x_887_);
lean_dec(v_x_887_);
lean_dec_ref(v_a_886_);
v_r_889_ = lean_box(v_res_888_);
return v_r_889_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
if (lean_obj_tag(v_x_891_) == 0)
{
return v_x_890_;
}
else
{
lean_object* v_key_892_; lean_object* v_value_893_; lean_object* v_tail_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_917_; 
v_key_892_ = lean_ctor_get(v_x_891_, 0);
v_value_893_ = lean_ctor_get(v_x_891_, 1);
v_tail_894_ = lean_ctor_get(v_x_891_, 2);
v_isSharedCheck_917_ = !lean_is_exclusive(v_x_891_);
if (v_isSharedCheck_917_ == 0)
{
v___x_896_ = v_x_891_;
v_isShared_897_ = v_isSharedCheck_917_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_tail_894_);
lean_inc(v_value_893_);
lean_inc(v_key_892_);
lean_dec(v_x_891_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_917_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_898_; uint64_t v___x_899_; uint64_t v___x_900_; uint64_t v___x_901_; uint64_t v_fold_902_; uint64_t v___x_903_; uint64_t v___x_904_; uint64_t v___x_905_; size_t v___x_906_; size_t v___x_907_; size_t v___x_908_; size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; lean_object* v___x_913_; 
v___x_898_ = lean_array_get_size(v_x_890_);
v___x_899_ = l_Lean_ExprStructEq_hash(v_key_892_);
v___x_900_ = 32ULL;
v___x_901_ = lean_uint64_shift_right(v___x_899_, v___x_900_);
v_fold_902_ = lean_uint64_xor(v___x_899_, v___x_901_);
v___x_903_ = 16ULL;
v___x_904_ = lean_uint64_shift_right(v_fold_902_, v___x_903_);
v___x_905_ = lean_uint64_xor(v_fold_902_, v___x_904_);
v___x_906_ = lean_uint64_to_usize(v___x_905_);
v___x_907_ = lean_usize_of_nat(v___x_898_);
v___x_908_ = ((size_t)1ULL);
v___x_909_ = lean_usize_sub(v___x_907_, v___x_908_);
v___x_910_ = lean_usize_land(v___x_906_, v___x_909_);
v___x_911_ = lean_array_uget_borrowed(v_x_890_, v___x_910_);
lean_inc(v___x_911_);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 2, v___x_911_);
v___x_913_ = v___x_896_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_key_892_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_value_893_);
lean_ctor_set(v_reuseFailAlloc_916_, 2, v___x_911_);
v___x_913_ = v_reuseFailAlloc_916_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
lean_object* v___x_914_; 
v___x_914_ = lean_array_uset(v_x_890_, v___x_910_, v___x_913_);
v_x_890_ = v___x_914_;
v_x_891_ = v_tail_894_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(lean_object* v_i_918_, lean_object* v_source_919_, lean_object* v_target_920_){
_start:
{
lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_921_ = lean_array_get_size(v_source_919_);
v___x_922_ = lean_nat_dec_lt(v_i_918_, v___x_921_);
if (v___x_922_ == 0)
{
lean_dec_ref(v_source_919_);
lean_dec(v_i_918_);
return v_target_920_;
}
else
{
lean_object* v_es_923_; lean_object* v___x_924_; lean_object* v_source_925_; lean_object* v_target_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_es_923_ = lean_array_fget(v_source_919_, v_i_918_);
v___x_924_ = lean_box(0);
v_source_925_ = lean_array_fset(v_source_919_, v_i_918_, v___x_924_);
v_target_926_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(v_target_920_, v_es_923_);
v___x_927_ = lean_unsigned_to_nat(1u);
v___x_928_ = lean_nat_add(v_i_918_, v___x_927_);
lean_dec(v_i_918_);
v_i_918_ = v___x_928_;
v_source_919_ = v_source_925_;
v_target_920_ = v_target_926_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object* v_data_930_){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v_nbuckets_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_931_ = lean_array_get_size(v_data_930_);
v___x_932_ = lean_unsigned_to_nat(2u);
v_nbuckets_933_ = lean_nat_mul(v___x_931_, v___x_932_);
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = lean_box(0);
v___x_936_ = lean_mk_array(v_nbuckets_933_, v___x_935_);
v___x_937_ = lean_array_propagate_mark(v_data_930_, v___x_936_);
v___x_938_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(v___x_934_, v_data_930_, v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object* v_m_939_, lean_object* v_a_940_, lean_object* v_b_941_){
_start:
{
lean_object* v_size_942_; lean_object* v_buckets_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_986_; 
v_size_942_ = lean_ctor_get(v_m_939_, 0);
v_buckets_943_ = lean_ctor_get(v_m_939_, 1);
v_isSharedCheck_986_ = !lean_is_exclusive(v_m_939_);
if (v_isSharedCheck_986_ == 0)
{
v___x_945_ = v_m_939_;
v_isShared_946_ = v_isSharedCheck_986_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_buckets_943_);
lean_inc(v_size_942_);
lean_dec(v_m_939_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_986_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; uint64_t v___x_948_; uint64_t v___x_949_; uint64_t v___x_950_; uint64_t v_fold_951_; uint64_t v___x_952_; uint64_t v___x_953_; uint64_t v___x_954_; size_t v___x_955_; size_t v___x_956_; size_t v___x_957_; size_t v___x_958_; size_t v___x_959_; lean_object* v_bkt_960_; uint8_t v___x_961_; 
v___x_947_ = lean_array_get_size(v_buckets_943_);
v___x_948_ = l_Lean_ExprStructEq_hash(v_a_940_);
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
v_bkt_960_ = lean_array_uget_borrowed(v_buckets_943_, v___x_959_);
v___x_961_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_940_, v_bkt_960_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; lean_object* v_size_x27_963_; lean_object* v___x_964_; lean_object* v_buckets_x27_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_962_ = lean_unsigned_to_nat(1u);
v_size_x27_963_ = lean_nat_add(v_size_942_, v___x_962_);
lean_dec(v_size_942_);
lean_inc(v_bkt_960_);
v___x_964_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_964_, 0, v_a_940_);
lean_ctor_set(v___x_964_, 1, v_b_941_);
lean_ctor_set(v___x_964_, 2, v_bkt_960_);
v_buckets_x27_965_ = lean_array_uset(v_buckets_943_, v___x_959_, v___x_964_);
v___x_966_ = lean_unsigned_to_nat(4u);
v___x_967_ = lean_nat_mul(v_size_x27_963_, v___x_966_);
v___x_968_ = lean_unsigned_to_nat(3u);
v___x_969_ = lean_nat_div(v___x_967_, v___x_968_);
lean_dec(v___x_967_);
v___x_970_ = lean_array_get_size(v_buckets_x27_965_);
v___x_971_ = lean_nat_dec_le(v___x_969_, v___x_970_);
lean_dec(v___x_969_);
if (v___x_971_ == 0)
{
lean_object* v_val_972_; lean_object* v___x_974_; 
v_val_972_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_buckets_x27_965_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v_val_972_);
lean_ctor_set(v___x_945_, 0, v_size_x27_963_);
v___x_974_ = v___x_945_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_size_x27_963_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v_val_972_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
else
{
lean_object* v___x_977_; 
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v_buckets_x27_965_);
lean_ctor_set(v___x_945_, 0, v_size_x27_963_);
v___x_977_ = v___x_945_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_size_x27_963_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_buckets_x27_965_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
else
{
lean_object* v___x_979_; lean_object* v_buckets_x27_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
lean_inc(v_bkt_960_);
v___x_979_ = lean_box(0);
v_buckets_x27_980_ = lean_array_uset(v_buckets_943_, v___x_959_, v___x_979_);
v___x_981_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_940_, v_b_941_, v_bkt_960_);
v___x_982_ = lean_array_uset(v_buckets_x27_980_, v___x_959_, v___x_981_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_982_);
v___x_984_ = v___x_945_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_size_942_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object* v___y_987_, lean_object* v_e_988_, lean_object* v_fst_989_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_991_ = lean_st_ref_take(v___y_987_);
v___x_992_ = lean_box(0);
v___x_993_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v___x_991_, v_e_988_, v_fst_989_);
v___x_994_ = lean_st_ref_put(v___y_987_, v___x_993_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object* v___y_995_, lean_object* v_e_996_, lean_object* v_fst_997_, lean_object* v___y_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(v___y_995_, v_e_996_, v_fst_997_);
lean_dec(v___y_995_);
return v_res_999_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = l_Lean_maxRecDepthErrorMessage;
v___x_1006_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3);
v___x_1008_ = l_Lean_MessageData_ofFormat(v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4);
v___x_1010_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2));
v___x_1011_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set(v___x_1011_, 1, v___x_1009_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(lean_object* v_ref_1012_){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v_ref_1012_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___boxed(lean_object* v_ref_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_1017_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(lean_object* v_x_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___y_1029_; lean_object* v_toCold_1046_; lean_object* v_currRecDepth_1047_; lean_object* v_ref_1048_; uint8_t v_diag_1049_; uint8_t v_suppressElabErrors_1050_; lean_object* v_maxRecDepth_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_toCold_1046_ = lean_ctor_get(v___y_1025_, 0);
v_currRecDepth_1047_ = lean_ctor_get(v___y_1025_, 1);
v_ref_1048_ = lean_ctor_get(v___y_1025_, 2);
v_diag_1049_ = lean_ctor_get_uint8(v___y_1025_, sizeof(void*)*3);
v_suppressElabErrors_1050_ = lean_ctor_get_uint8(v___y_1025_, sizeof(void*)*3 + 1);
v_maxRecDepth_1056_ = lean_ctor_get(v_toCold_1046_, 3);
v___x_1057_ = lean_unsigned_to_nat(0u);
v___x_1058_ = lean_nat_dec_eq(v_maxRecDepth_1056_, v___x_1057_);
if (v___x_1058_ == 0)
{
uint8_t v___x_1059_; 
v___x_1059_ = lean_nat_dec_eq(v_currRecDepth_1047_, v_maxRecDepth_1056_);
if (v___x_1059_ == 0)
{
goto v___jp_1051_;
}
else
{
lean_object* v___x_1060_; 
lean_dec(v___y_1022_);
lean_dec_ref(v_x_1020_);
lean_inc(v_ref_1048_);
v___x_1060_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_1048_);
v___y_1029_ = v___x_1060_;
goto v___jp_1028_;
}
}
else
{
goto v___jp_1051_;
}
v___jp_1028_:
{
if (lean_obj_tag(v___y_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
v_a_1030_ = lean_ctor_get(v___y_1029_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___y_1029_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___y_1029_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___y_1029_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
v_a_1038_ = lean_ctor_get(v___y_1029_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___y_1029_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___y_1029_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___y_1029_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
v___jp_1051_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1052_ = lean_unsigned_to_nat(1u);
v___x_1053_ = lean_nat_add(v_currRecDepth_1047_, v___x_1052_);
lean_inc(v_ref_1048_);
lean_inc_ref(v_toCold_1046_);
v___x_1054_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1054_, 0, v_toCold_1046_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
lean_ctor_set(v___x_1054_, 2, v_ref_1048_);
lean_ctor_set_uint8(v___x_1054_, sizeof(void*)*3, v_diag_1049_);
lean_ctor_set_uint8(v___x_1054_, sizeof(void*)*3 + 1, v_suppressElabErrors_1050_);
lean_inc(v___y_1026_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1021_);
v___x_1055_ = lean_apply_7(v_x_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___x_1054_, v___y_1026_, lean_box(0));
v___y_1029_ = v___x_1055_;
goto v___jp_1028_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg___boxed(lean_object* v_x_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v_x_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1062_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(lean_object* v_a_1070_, lean_object* v_x_1071_){
_start:
{
if (lean_obj_tag(v_x_1071_) == 0)
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_box(0);
return v___x_1072_;
}
else
{
lean_object* v_key_1073_; lean_object* v_value_1074_; lean_object* v_tail_1075_; uint8_t v___x_1076_; 
v_key_1073_ = lean_ctor_get(v_x_1071_, 0);
v_value_1074_ = lean_ctor_get(v_x_1071_, 1);
v_tail_1075_ = lean_ctor_get(v_x_1071_, 2);
v___x_1076_ = l_Lean_ExprStructEq_beq(v_key_1073_, v_a_1070_);
if (v___x_1076_ == 0)
{
v_x_1071_ = v_tail_1075_;
goto _start;
}
else
{
lean_object* v___x_1078_; 
lean_inc(v_value_1074_);
v___x_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1078_, 0, v_value_1074_);
return v___x_1078_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg___boxed(lean_object* v_a_1079_, lean_object* v_x_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_1079_, v_x_1080_);
lean_dec(v_x_1080_);
lean_dec_ref(v_a_1079_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object* v_m_1082_, lean_object* v_a_1083_){
_start:
{
lean_object* v_buckets_1084_; lean_object* v___x_1085_; uint64_t v___x_1086_; uint64_t v___x_1087_; uint64_t v___x_1088_; uint64_t v_fold_1089_; uint64_t v___x_1090_; uint64_t v___x_1091_; uint64_t v___x_1092_; size_t v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; size_t v___x_1096_; size_t v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_buckets_1084_ = lean_ctor_get(v_m_1082_, 1);
v___x_1085_ = lean_array_get_size(v_buckets_1084_);
v___x_1086_ = l_Lean_ExprStructEq_hash(v_a_1083_);
v___x_1087_ = 32ULL;
v___x_1088_ = lean_uint64_shift_right(v___x_1086_, v___x_1087_);
v_fold_1089_ = lean_uint64_xor(v___x_1086_, v___x_1088_);
v___x_1090_ = 16ULL;
v___x_1091_ = lean_uint64_shift_right(v_fold_1089_, v___x_1090_);
v___x_1092_ = lean_uint64_xor(v_fold_1089_, v___x_1091_);
v___x_1093_ = lean_uint64_to_usize(v___x_1092_);
v___x_1094_ = lean_usize_of_nat(v___x_1085_);
v___x_1095_ = ((size_t)1ULL);
v___x_1096_ = lean_usize_sub(v___x_1094_, v___x_1095_);
v___x_1097_ = lean_usize_land(v___x_1093_, v___x_1096_);
v___x_1098_ = lean_array_uget_borrowed(v_buckets_1084_, v___x_1097_);
v___x_1099_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_1083_, v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_m_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_m_1100_, v_a_1101_);
lean_dec_ref(v_a_1101_);
lean_dec_ref(v_m_1100_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object* v_00_u03b1_1103_, lean_object* v_x_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1111_ = lean_apply_1(v_x_1104_, lean_box(0));
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v___y_1105_);
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object* v_00_u03b1_1114_, lean_object* v_x_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(v_00_u03b1_1114_, v_x_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed(lean_object* v_fvars_1123_, lean_object* v_pre_1124_, lean_object* v_post_1125_, lean_object* v_usedLetOnly_1126_, lean_object* v_skipConstInApp_1127_, lean_object* v_skipInstances_1128_, lean_object* v_body_1129_, lean_object* v_x_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
uint8_t v_usedLetOnly_boxed_1138_; uint8_t v_skipConstInApp_boxed_1139_; uint8_t v_skipInstances_boxed_1140_; lean_object* v_res_1141_; 
v_usedLetOnly_boxed_1138_ = lean_unbox(v_usedLetOnly_1126_);
v_skipConstInApp_boxed_1139_ = lean_unbox(v_skipConstInApp_1127_);
v_skipInstances_boxed_1140_ = lean_unbox(v_skipInstances_1128_);
v_res_1141_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(v_fvars_1123_, v_pre_1124_, v_post_1125_, v_usedLetOnly_boxed_1138_, v_skipConstInApp_boxed_1139_, v_skipInstances_boxed_1140_, v_body_1129_, v_x_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1131_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object* v_fvars_1145_, lean_object* v_pre_1146_, lean_object* v_post_1147_, uint8_t v_usedLetOnly_1148_, uint8_t v_skipConstInApp_1149_, uint8_t v_skipInstances_1150_, lean_object* v_body_1151_, lean_object* v_x_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = lean_array_push(v_fvars_1145_, v_x_1152_);
v___x_1161_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1146_, v_post_1147_, v_usedLetOnly_1148_, v_skipConstInApp_1149_, v_skipInstances_1150_, v___x_1160_, v_body_1151_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object* v_fvars_1162_, lean_object* v_pre_1163_, lean_object* v_post_1164_, lean_object* v_usedLetOnly_1165_, lean_object* v_skipConstInApp_1166_, lean_object* v_skipInstances_1167_, lean_object* v_body_1168_, lean_object* v_x_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
uint8_t v_usedLetOnly_boxed_1177_; uint8_t v_skipConstInApp_boxed_1178_; uint8_t v_skipInstances_boxed_1179_; lean_object* v_res_1180_; 
v_usedLetOnly_boxed_1177_ = lean_unbox(v_usedLetOnly_1165_);
v_skipConstInApp_boxed_1178_ = lean_unbox(v_skipConstInApp_1166_);
v_skipInstances_boxed_1179_ = lean_unbox(v_skipInstances_1167_);
v_res_1180_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(v_fvars_1162_, v_pre_1163_, v_post_1164_, v_usedLetOnly_boxed_1177_, v_skipConstInApp_boxed_1178_, v_skipInstances_boxed_1179_, v_body_1168_, v_x_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1170_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object* v_pre_1181_, lean_object* v_post_1182_, uint8_t v_usedLetOnly_1183_, uint8_t v_skipConstInApp_1184_, uint8_t v_skipInstances_1185_, lean_object* v_e_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; 
lean_inc_ref(v_post_1182_);
lean_inc(v___y_1192_);
lean_inc_ref(v___y_1191_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc_ref(v_e_1186_);
v___x_1194_ = lean_apply_7(v_post_1182_, v_e_1186_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, lean_box(0));
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1226_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1197_ = v___x_1194_;
v_isShared_1198_ = v_isSharedCheck_1226_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1194_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1226_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v_fst_1199_; lean_object* v_snd_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1225_; 
v_fst_1199_ = lean_ctor_get(v_a_1195_, 0);
v_snd_1200_ = lean_ctor_get(v_a_1195_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_a_1195_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1202_ = v_a_1195_;
v_isShared_1203_ = v_isSharedCheck_1225_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_snd_1200_);
lean_inc(v_fst_1199_);
lean_dec(v_a_1195_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1225_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___y_1205_; 
switch(lean_obj_tag(v_fst_1199_))
{
case 0:
{
lean_object* v_e_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1220_; 
lean_del_object(v___x_1202_);
lean_del_object(v___x_1197_);
lean_dec_ref(v_e_1186_);
lean_dec_ref(v_post_1182_);
lean_dec_ref(v_pre_1181_);
v_e_1212_ = lean_ctor_get(v_fst_1199_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_fst_1199_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1214_ = v_fst_1199_;
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_e_1212_);
lean_dec(v_fst_1199_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v_e_1212_);
lean_ctor_set(v___x_1216_, 1, v_snd_1200_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 0, v___x_1216_);
v___x_1218_ = v___x_1214_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
case 1:
{
lean_object* v_e_1221_; lean_object* v___x_1222_; 
lean_del_object(v___x_1202_);
lean_del_object(v___x_1197_);
lean_dec_ref(v_e_1186_);
v_e_1221_ = lean_ctor_get(v_fst_1199_, 0);
lean_inc_ref(v_e_1221_);
lean_dec_ref_known(v_fst_1199_, 1);
v___x_1222_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1181_, v_post_1182_, v_usedLetOnly_1183_, v_skipConstInApp_1184_, v_skipInstances_1185_, v_e_1221_, v___y_1187_, v_snd_1200_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1222_;
}
default: 
{
lean_object* v_e_x3f_1223_; 
lean_dec_ref(v_post_1182_);
lean_dec_ref(v_pre_1181_);
v_e_x3f_1223_ = lean_ctor_get(v_fst_1199_, 0);
lean_inc(v_e_x3f_1223_);
lean_dec_ref_known(v_fst_1199_, 1);
if (lean_obj_tag(v_e_x3f_1223_) == 0)
{
v___y_1205_ = v_e_1186_;
goto v___jp_1204_;
}
else
{
lean_object* v_val_1224_; 
lean_dec_ref(v_e_1186_);
v_val_1224_ = lean_ctor_get(v_e_x3f_1223_, 0);
lean_inc(v_val_1224_);
lean_dec_ref_known(v_e_x3f_1223_, 1);
v___y_1205_ = v_val_1224_;
goto v___jp_1204_;
}
}
}
v___jp_1204_:
{
lean_object* v___x_1207_; 
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___y_1205_);
v___x_1207_ = v___x_1202_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___y_1205_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_snd_1200_);
v___x_1207_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1209_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v___x_1207_);
v___x_1209_ = v___x_1197_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
lean_dec_ref(v_e_1186_);
lean_dec_ref(v_post_1182_);
lean_dec_ref(v_pre_1181_);
v_a_1227_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1194_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1194_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object* v_pre_1235_, lean_object* v_post_1236_, uint8_t v_usedLetOnly_1237_, uint8_t v_skipConstInApp_1238_, uint8_t v_skipInstances_1239_, lean_object* v_fvars_1240_, lean_object* v_e_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
if (lean_obj_tag(v_e_1241_) == 6)
{
lean_object* v_binderName_1249_; lean_object* v_binderType_1250_; lean_object* v_body_1251_; uint8_t v_binderInfo_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___f_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_binderName_1249_ = lean_ctor_get(v_e_1241_, 0);
lean_inc(v_binderName_1249_);
v_binderType_1250_ = lean_ctor_get(v_e_1241_, 1);
lean_inc_ref(v_binderType_1250_);
v_body_1251_ = lean_ctor_get(v_e_1241_, 2);
lean_inc_ref(v_body_1251_);
v_binderInfo_1252_ = lean_ctor_get_uint8(v_e_1241_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1241_, 3);
v___x_1253_ = lean_box(v_usedLetOnly_1237_);
v___x_1254_ = lean_box(v_skipConstInApp_1238_);
v___x_1255_ = lean_box(v_skipInstances_1239_);
lean_inc_ref(v_post_1236_);
lean_inc_ref(v_pre_1235_);
lean_inc_ref(v_fvars_1240_);
v___f_1256_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1256_, 0, v_fvars_1240_);
lean_closure_set(v___f_1256_, 1, v_pre_1235_);
lean_closure_set(v___f_1256_, 2, v_post_1236_);
lean_closure_set(v___f_1256_, 3, v___x_1253_);
lean_closure_set(v___f_1256_, 4, v___x_1254_);
lean_closure_set(v___f_1256_, 5, v___x_1255_);
lean_closure_set(v___f_1256_, 6, v_body_1251_);
v___x_1257_ = lean_expr_instantiate_rev(v_binderType_1250_, v_fvars_1240_);
lean_dec_ref(v_fvars_1240_);
lean_dec_ref(v_binderType_1250_);
v___x_1258_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1235_, v_post_1236_, v_usedLetOnly_1237_, v_skipConstInApp_1238_, v_skipInstances_1239_, v___x_1257_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v_fst_1260_; lean_object* v_snd_1261_; uint8_t v___x_1262_; lean_object* v___x_1263_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v_fst_1260_ = lean_ctor_get(v_a_1259_, 0);
lean_inc(v_fst_1260_);
v_snd_1261_ = lean_ctor_get(v_a_1259_, 1);
lean_inc(v_snd_1261_);
lean_dec(v_a_1259_);
v___x_1262_ = 0;
v___x_1263_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_binderName_1249_, v_binderInfo_1252_, v_fst_1260_, v___f_1256_, v___x_1262_, v___y_1242_, v_snd_1261_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
return v___x_1263_;
}
else
{
lean_dec_ref(v___f_1256_);
lean_dec(v_binderName_1249_);
return v___x_1258_;
}
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = lean_expr_instantiate_rev(v_e_1241_, v_fvars_1240_);
lean_dec_ref(v_e_1241_);
lean_inc_ref(v_post_1236_);
lean_inc_ref(v_pre_1235_);
v___x_1265_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1235_, v_post_1236_, v_usedLetOnly_1237_, v_skipConstInApp_1238_, v_skipInstances_1239_, v___x_1264_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v_fst_1267_; lean_object* v_snd_1268_; uint8_t v___x_1269_; uint8_t v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
v_fst_1267_ = lean_ctor_get(v_a_1266_, 0);
lean_inc(v_fst_1267_);
v_snd_1268_ = lean_ctor_get(v_a_1266_, 1);
lean_inc(v_snd_1268_);
lean_dec(v_a_1266_);
v___x_1269_ = 0;
v___x_1270_ = 1;
v___x_1271_ = 1;
v___x_1272_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1240_, v_fst_1267_, v___x_1269_, v_usedLetOnly_1237_, v___x_1269_, v___x_1270_, v___x_1271_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec_ref(v_fvars_1240_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1274_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1272_, 1);
v___x_1274_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1235_, v_post_1236_, v_usedLetOnly_1237_, v_skipConstInApp_1238_, v_skipInstances_1239_, v_a_1273_, v___y_1242_, v_snd_1268_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
return v___x_1274_;
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec(v_snd_1268_);
lean_dec_ref(v_post_1236_);
lean_dec_ref(v_pre_1235_);
v_a_1275_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1272_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1272_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1240_);
lean_dec_ref(v_post_1236_);
lean_dec_ref(v_pre_1235_);
return v___x_1265_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object* v_fvars_1283_, lean_object* v_pre_1284_, lean_object* v_post_1285_, uint8_t v_usedLetOnly_1286_, uint8_t v_skipConstInApp_1287_, uint8_t v_skipInstances_1288_, lean_object* v_body_1289_, lean_object* v_x_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = lean_array_push(v_fvars_1283_, v_x_1290_);
v___x_1299_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1284_, v_post_1285_, v_usedLetOnly_1286_, v_skipConstInApp_1287_, v_skipInstances_1288_, v___x_1298_, v_body_1289_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object* v_fvars_1300_, lean_object* v_pre_1301_, lean_object* v_post_1302_, lean_object* v_usedLetOnly_1303_, lean_object* v_skipConstInApp_1304_, lean_object* v_skipInstances_1305_, lean_object* v_body_1306_, lean_object* v_x_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
uint8_t v_usedLetOnly_boxed_1315_; uint8_t v_skipConstInApp_boxed_1316_; uint8_t v_skipInstances_boxed_1317_; lean_object* v_res_1318_; 
v_usedLetOnly_boxed_1315_ = lean_unbox(v_usedLetOnly_1303_);
v_skipConstInApp_boxed_1316_ = lean_unbox(v_skipConstInApp_1304_);
v_skipInstances_boxed_1317_ = lean_unbox(v_skipInstances_1305_);
v_res_1318_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(v_fvars_1300_, v_pre_1301_, v_post_1302_, v_usedLetOnly_boxed_1315_, v_skipConstInApp_boxed_1316_, v_skipInstances_boxed_1317_, v_body_1306_, v_x_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1308_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object* v_pre_1319_, lean_object* v_post_1320_, uint8_t v_usedLetOnly_1321_, uint8_t v_skipConstInApp_1322_, uint8_t v_skipInstances_1323_, lean_object* v_fvars_1324_, lean_object* v_e_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
if (lean_obj_tag(v_e_1325_) == 8)
{
lean_object* v_declName_1333_; lean_object* v_type_1334_; lean_object* v_value_1335_; lean_object* v_body_1336_; uint8_t v_nondep_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___f_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v_declName_1333_ = lean_ctor_get(v_e_1325_, 0);
lean_inc(v_declName_1333_);
v_type_1334_ = lean_ctor_get(v_e_1325_, 1);
lean_inc_ref(v_type_1334_);
v_value_1335_ = lean_ctor_get(v_e_1325_, 2);
lean_inc_ref(v_value_1335_);
v_body_1336_ = lean_ctor_get(v_e_1325_, 3);
lean_inc_ref(v_body_1336_);
v_nondep_1337_ = lean_ctor_get_uint8(v_e_1325_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1325_, 4);
v___x_1338_ = lean_box(v_usedLetOnly_1321_);
v___x_1339_ = lean_box(v_skipConstInApp_1322_);
v___x_1340_ = lean_box(v_skipInstances_1323_);
lean_inc_ref_n(v_post_1320_, 2);
lean_inc_ref_n(v_pre_1319_, 2);
lean_inc_ref(v_fvars_1324_);
v___f_1341_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1341_, 0, v_fvars_1324_);
lean_closure_set(v___f_1341_, 1, v_pre_1319_);
lean_closure_set(v___f_1341_, 2, v_post_1320_);
lean_closure_set(v___f_1341_, 3, v___x_1338_);
lean_closure_set(v___f_1341_, 4, v___x_1339_);
lean_closure_set(v___f_1341_, 5, v___x_1340_);
lean_closure_set(v___f_1341_, 6, v_body_1336_);
v___x_1342_ = lean_expr_instantiate_rev(v_type_1334_, v_fvars_1324_);
lean_dec_ref(v_type_1334_);
v___x_1343_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1319_, v_post_1320_, v_usedLetOnly_1321_, v_skipConstInApp_1322_, v_skipInstances_1323_, v___x_1342_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v_fst_1345_; lean_object* v_snd_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1343_, 1);
v_fst_1345_ = lean_ctor_get(v_a_1344_, 0);
lean_inc(v_fst_1345_);
v_snd_1346_ = lean_ctor_get(v_a_1344_, 1);
lean_inc(v_snd_1346_);
lean_dec(v_a_1344_);
v___x_1347_ = lean_expr_instantiate_rev(v_value_1335_, v_fvars_1324_);
lean_dec_ref(v_fvars_1324_);
lean_dec_ref(v_value_1335_);
v___x_1348_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1319_, v_post_1320_, v_usedLetOnly_1321_, v_skipConstInApp_1322_, v_skipInstances_1323_, v___x_1347_, v___y_1326_, v_snd_1346_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v_fst_1350_; lean_object* v_snd_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v_fst_1350_ = lean_ctor_get(v_a_1349_, 0);
lean_inc(v_fst_1350_);
v_snd_1351_ = lean_ctor_get(v_a_1349_, 1);
lean_inc(v_snd_1351_);
lean_dec(v_a_1349_);
v___x_1352_ = 0;
v___x_1353_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_declName_1333_, v_fst_1345_, v_fst_1350_, v___f_1341_, v_nondep_1337_, v___x_1352_, v___y_1326_, v_snd_1351_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
return v___x_1353_;
}
else
{
lean_dec(v_fst_1345_);
lean_dec_ref(v___f_1341_);
lean_dec(v_declName_1333_);
return v___x_1348_;
}
}
else
{
lean_dec_ref(v___f_1341_);
lean_dec_ref(v_value_1335_);
lean_dec(v_declName_1333_);
lean_dec_ref(v_fvars_1324_);
lean_dec_ref(v_post_1320_);
lean_dec_ref(v_pre_1319_);
return v___x_1343_;
}
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = lean_expr_instantiate_rev(v_e_1325_, v_fvars_1324_);
lean_dec_ref(v_e_1325_);
lean_inc_ref(v_post_1320_);
lean_inc_ref(v_pre_1319_);
v___x_1355_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1319_, v_post_1320_, v_usedLetOnly_1321_, v_skipConstInApp_1322_, v_skipInstances_1323_, v___x_1354_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v_fst_1357_; lean_object* v_snd_1358_; uint8_t v___x_1359_; uint8_t v___x_1360_; lean_object* v___x_1361_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref_known(v___x_1355_, 1);
v_fst_1357_ = lean_ctor_get(v_a_1356_, 0);
lean_inc(v_fst_1357_);
v_snd_1358_ = lean_ctor_get(v_a_1356_, 1);
lean_inc(v_snd_1358_);
lean_dec(v_a_1356_);
v___x_1359_ = 0;
v___x_1360_ = 1;
v___x_1361_ = l_Lean_Meta_mkLetFVars(v_fvars_1324_, v_fst_1357_, v_usedLetOnly_1321_, v___x_1359_, v___x_1360_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
lean_dec_ref(v_fvars_1324_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1319_, v_post_1320_, v_usedLetOnly_1321_, v_skipConstInApp_1322_, v_skipInstances_1323_, v_a_1362_, v___y_1326_, v_snd_1358_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
return v___x_1363_;
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec(v_snd_1358_);
lean_dec_ref(v_post_1320_);
lean_dec_ref(v_pre_1319_);
v_a_1364_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1361_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1361_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1324_);
lean_dec_ref(v_post_1320_);
lean_dec_ref(v_pre_1319_);
return v___x_1355_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(lean_object* v_pre_1372_, lean_object* v_post_1373_, uint8_t v_usedLetOnly_1374_, uint8_t v_skipConstInApp_1375_, uint8_t v_skipInstances_1376_, size_t v_sz_1377_, size_t v_i_1378_, lean_object* v_bs_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
uint8_t v___x_1387_; 
v___x_1387_ = lean_usize_dec_lt(v_i_1378_, v_sz_1377_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
lean_dec_ref(v_post_1373_);
lean_dec_ref(v_pre_1372_);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v_bs_1379_);
lean_ctor_set(v___x_1388_, 1, v___y_1381_);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
else
{
lean_object* v_v_1390_; lean_object* v___x_1391_; lean_object* v_bs_x27_1392_; lean_object* v___x_1393_; 
v_v_1390_ = lean_array_uget(v_bs_1379_, v_i_1378_);
v___x_1391_ = lean_unsigned_to_nat(0u);
v_bs_x27_1392_ = lean_array_uset(v_bs_1379_, v_i_1378_, v___x_1391_);
lean_inc_ref(v_post_1373_);
lean_inc_ref(v_pre_1372_);
v___x_1393_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1372_, v_post_1373_, v_usedLetOnly_1374_, v_skipConstInApp_1375_, v_skipInstances_1376_, v_v_1390_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v_fst_1395_; lean_object* v_snd_1396_; size_t v___x_1397_; size_t v___x_1398_; lean_object* v___x_1399_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v_fst_1395_ = lean_ctor_get(v_a_1394_, 0);
lean_inc(v_fst_1395_);
v_snd_1396_ = lean_ctor_get(v_a_1394_, 1);
lean_inc(v_snd_1396_);
lean_dec(v_a_1394_);
v___x_1397_ = ((size_t)1ULL);
v___x_1398_ = lean_usize_add(v_i_1378_, v___x_1397_);
v___x_1399_ = lean_array_uset(v_bs_x27_1392_, v_i_1378_, v_fst_1395_);
v_i_1378_ = v___x_1398_;
v_bs_1379_ = v___x_1399_;
v___y_1381_ = v_snd_1396_;
goto _start;
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec_ref(v_bs_x27_1392_);
lean_dec_ref(v_post_1373_);
lean_dec_ref(v_pre_1372_);
v_a_1401_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1393_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1393_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(lean_object* v_upperBound_1409_, lean_object* v___x_1410_, lean_object* v_pre_1411_, lean_object* v_post_1412_, uint8_t v_usedLetOnly_1413_, uint8_t v_skipConstInApp_1414_, uint8_t v_skipInstances_1415_, lean_object* v_a_1416_, lean_object* v_b_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v_a_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; uint8_t v___x_1445_; 
v___x_1445_ = lean_nat_dec_lt(v_a_1416_, v_upperBound_1409_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1447_; 
lean_dec(v_a_1416_);
lean_dec_ref(v_post_1412_);
lean_dec_ref(v_pre_1411_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_b_1417_);
lean_ctor_set(v___x_1446_, 1, v___y_1419_);
v___x_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
return v___x_1447_;
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1448_ = lean_array_fget_borrowed(v_b_1417_, v_a_1416_);
v___x_1449_ = lean_array_get_size(v___x_1410_);
v___x_1450_ = lean_nat_dec_lt(v_a_1416_, v___x_1449_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; 
lean_inc(v___x_1448_);
lean_inc_ref(v_post_1412_);
lean_inc_ref(v_pre_1411_);
v___x_1451_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1411_, v_post_1412_, v_usedLetOnly_1413_, v_skipConstInApp_1414_, v_skipInstances_1415_, v___x_1448_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v_fst_1453_; lean_object* v_snd_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v_fst_1453_ = lean_ctor_get(v_a_1452_, 0);
lean_inc(v_fst_1453_);
v_snd_1454_ = lean_ctor_get(v_a_1452_, 1);
lean_inc(v_snd_1454_);
lean_dec(v_a_1452_);
v___x_1455_ = lean_array_fset(v_b_1417_, v_a_1416_, v_fst_1453_);
v___x_1456_ = lean_unsigned_to_nat(1u);
v___x_1457_ = lean_nat_add(v_a_1416_, v___x_1456_);
lean_dec(v_a_1416_);
v_a_1416_ = v___x_1457_;
v_b_1417_ = v___x_1455_;
v___y_1419_ = v_snd_1454_;
goto _start;
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
lean_dec_ref(v_b_1417_);
lean_dec(v_a_1416_);
lean_dec_ref(v_post_1412_);
lean_dec_ref(v_pre_1411_);
v_a_1459_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1451_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1451_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
else
{
lean_object* v___x_1467_; uint8_t v_isInstance_1468_; 
v___x_1467_ = lean_array_fget_borrowed(v___x_1410_, v_a_1416_);
v_isInstance_1468_ = lean_ctor_get_uint8(v___x_1467_, sizeof(void*)*1 + 4);
if (v_isInstance_1468_ == 0)
{
lean_object* v___x_1469_; 
lean_inc(v___x_1448_);
lean_inc_ref(v_post_1412_);
lean_inc_ref(v_pre_1411_);
v___x_1469_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1411_, v_post_1412_, v_usedLetOnly_1413_, v_skipConstInApp_1414_, v_skipInstances_1415_, v___x_1448_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; lean_object* v_fst_1471_; lean_object* v_snd_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1469_, 1);
v_fst_1471_ = lean_ctor_get(v_a_1470_, 0);
lean_inc(v_fst_1471_);
v_snd_1472_ = lean_ctor_get(v_a_1470_, 1);
lean_inc(v_snd_1472_);
lean_dec(v_a_1470_);
v___x_1473_ = lean_array_fset(v_b_1417_, v_a_1416_, v_fst_1471_);
v___x_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
v___x_1475_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(v___x_1474_, v_snd_1472_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v_fst_1477_; lean_object* v_snd_1478_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v_fst_1477_ = lean_ctor_get(v_a_1476_, 0);
lean_inc(v_fst_1477_);
v_snd_1478_ = lean_ctor_get(v_a_1476_, 1);
lean_inc(v_snd_1478_);
lean_dec(v_a_1476_);
v_a_1426_ = v_fst_1477_;
v___y_1427_ = v_snd_1478_;
v___y_1428_ = v___y_1420_;
v___y_1429_ = v___y_1421_;
v___y_1430_ = v___y_1422_;
v___y_1431_ = v___y_1423_;
goto v___jp_1425_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec(v_a_1416_);
lean_dec_ref(v_post_1412_);
lean_dec_ref(v_pre_1411_);
v_a_1479_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1475_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1475_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v_b_1417_);
lean_dec(v_a_1416_);
lean_dec_ref(v_post_1412_);
lean_dec_ref(v_pre_1411_);
v_a_1487_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1469_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1469_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
else
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1495_, 0, v_b_1417_);
v___x_1496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(v___x_1495_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v_fst_1498_; lean_object* v_snd_1499_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1496_, 1);
v_fst_1498_ = lean_ctor_get(v_a_1497_, 0);
lean_inc(v_fst_1498_);
v_snd_1499_ = lean_ctor_get(v_a_1497_, 1);
lean_inc(v_snd_1499_);
lean_dec(v_a_1497_);
v_a_1426_ = v_fst_1498_;
v___y_1427_ = v_snd_1499_;
v___y_1428_ = v___y_1420_;
v___y_1429_ = v___y_1421_;
v___y_1430_ = v___y_1422_;
v___y_1431_ = v___y_1423_;
goto v___jp_1425_;
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec(v_a_1416_);
lean_dec_ref(v_post_1412_);
lean_dec_ref(v_pre_1411_);
v_a_1500_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1496_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1496_);
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
}
}
v___jp_1425_:
{
if (lean_obj_tag(v_a_1426_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1440_; 
lean_dec(v_a_1416_);
lean_dec_ref(v_post_1412_);
lean_dec_ref(v_pre_1411_);
v_a_1432_ = lean_ctor_get(v_a_1426_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_a_1426_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1434_ = v_a_1426_;
v_isShared_1435_ = v_isSharedCheck_1440_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v_a_1426_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1440_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1436_; lean_object* v___x_1438_; 
v___x_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1436_, 0, v_a_1432_);
lean_ctor_set(v___x_1436_, 1, v___y_1427_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1436_);
v___x_1438_ = v___x_1434_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v_a_1441_ = lean_ctor_get(v_a_1426_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v_a_1426_, 1);
v___x_1442_ = lean_unsigned_to_nat(1u);
v___x_1443_ = lean_nat_add(v_a_1416_, v___x_1442_);
lean_dec(v_a_1416_);
v_a_1416_ = v___x_1443_;
v_b_1417_ = v_a_1441_;
v___y_1419_ = v___y_1427_;
v___y_1420_ = v___y_1428_;
v___y_1421_ = v___y_1429_;
v___y_1422_ = v___y_1430_;
v___y_1423_ = v___y_1431_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(uint8_t v_skipInstances_1508_, lean_object* v_pre_1509_, lean_object* v_post_1510_, uint8_t v_usedLetOnly_1511_, uint8_t v_skipConstInApp_1512_, lean_object* v_x_1513_, lean_object* v_x_1514_, lean_object* v_x_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_f_1524_; lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; 
if (lean_obj_tag(v_x_1513_) == 5)
{
lean_object* v_fn_1579_; lean_object* v_arg_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v_fn_1579_ = lean_ctor_get(v_x_1513_, 0);
lean_inc_ref(v_fn_1579_);
v_arg_1580_ = lean_ctor_get(v_x_1513_, 1);
lean_inc_ref(v_arg_1580_);
lean_dec_ref_known(v_x_1513_, 2);
v___x_1581_ = lean_array_set(v_x_1514_, v_x_1515_, v_arg_1580_);
v___x_1582_ = lean_unsigned_to_nat(1u);
v___x_1583_ = lean_nat_sub(v_x_1515_, v___x_1582_);
lean_dec(v_x_1515_);
v_x_1513_ = v_fn_1579_;
v_x_1514_ = v___x_1581_;
v_x_1515_ = v___x_1583_;
goto _start;
}
else
{
lean_dec(v_x_1515_);
if (v_skipConstInApp_1512_ == 0)
{
goto v___jp_1574_;
}
else
{
uint8_t v___x_1585_; 
v___x_1585_ = l_Lean_Expr_isConst(v_x_1513_);
if (v___x_1585_ == 0)
{
goto v___jp_1574_;
}
else
{
v_f_1524_ = v_x_1513_;
v___y_1525_ = v___y_1516_;
v___y_1526_ = v___y_1517_;
v___y_1527_ = v___y_1518_;
v___y_1528_ = v___y_1519_;
v___y_1529_ = v___y_1520_;
v___y_1530_ = v___y_1521_;
goto v___jp_1523_;
}
}
}
v___jp_1523_:
{
if (v_skipInstances_1508_ == 0)
{
size_t v_sz_1531_; size_t v___x_1532_; lean_object* v___x_1533_; 
v_sz_1531_ = lean_array_size(v_x_1514_);
v___x_1532_ = ((size_t)0ULL);
lean_inc_ref(v_post_1510_);
lean_inc_ref(v_pre_1509_);
v___x_1533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(v_pre_1509_, v_post_1510_, v_usedLetOnly_1511_, v_skipConstInApp_1512_, v_skipInstances_1508_, v_sz_1531_, v___x_1532_, v_x_1514_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v_fst_1535_; lean_object* v_snd_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v_fst_1535_ = lean_ctor_get(v_a_1534_, 0);
lean_inc(v_fst_1535_);
v_snd_1536_ = lean_ctor_get(v_a_1534_, 1);
lean_inc(v_snd_1536_);
lean_dec(v_a_1534_);
v___x_1537_ = l_Lean_mkAppN(v_f_1524_, v_fst_1535_);
lean_dec(v_fst_1535_);
v___x_1538_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1509_, v_post_1510_, v_usedLetOnly_1511_, v_skipConstInApp_1512_, v_skipInstances_1508_, v___x_1537_, v___y_1525_, v_snd_1536_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
return v___x_1538_;
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec_ref(v_f_1524_);
lean_dec_ref(v_post_1510_);
lean_dec_ref(v_pre_1509_);
v_a_1539_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1533_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1533_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
else
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = lean_array_get_size(v_x_1514_);
lean_inc_ref(v_f_1524_);
v___x_1548_ = l_Lean_Meta_getFunInfoNArgs(v_f_1524_, v___x_1547_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v_paramInfo_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v_paramInfo_1550_ = lean_ctor_get(v_a_1549_, 0);
lean_inc_ref(v_paramInfo_1550_);
lean_dec(v_a_1549_);
v___x_1551_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1510_);
lean_inc_ref(v_pre_1509_);
v___x_1552_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v___x_1547_, v_paramInfo_1550_, v_pre_1509_, v_post_1510_, v_usedLetOnly_1511_, v_skipConstInApp_1512_, v_skipInstances_1508_, v___x_1551_, v_x_1514_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
lean_dec_ref(v_paramInfo_1550_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; lean_object* v_fst_1554_; lean_object* v_snd_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v_fst_1554_ = lean_ctor_get(v_a_1553_, 0);
lean_inc(v_fst_1554_);
v_snd_1555_ = lean_ctor_get(v_a_1553_, 1);
lean_inc(v_snd_1555_);
lean_dec(v_a_1553_);
v___x_1556_ = l_Lean_mkAppN(v_f_1524_, v_fst_1554_);
lean_dec(v_fst_1554_);
v___x_1557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1509_, v_post_1510_, v_usedLetOnly_1511_, v_skipConstInApp_1512_, v_skipInstances_1508_, v___x_1556_, v___y_1525_, v_snd_1555_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
return v___x_1557_;
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v_f_1524_);
lean_dec_ref(v_post_1510_);
lean_dec_ref(v_pre_1509_);
v_a_1558_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1552_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1552_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_dec(v___y_1526_);
lean_dec_ref(v_f_1524_);
lean_dec_ref(v_x_1514_);
lean_dec_ref(v_post_1510_);
lean_dec_ref(v_pre_1509_);
v_a_1566_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1548_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1548_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
v___jp_1574_:
{
lean_object* v___x_1575_; 
lean_inc_ref(v_post_1510_);
lean_inc_ref(v_pre_1509_);
v___x_1575_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1509_, v_post_1510_, v_usedLetOnly_1511_, v_skipConstInApp_1512_, v_skipInstances_1508_, v_x_1513_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v_fst_1577_; lean_object* v_snd_1578_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1576_);
lean_dec_ref_known(v___x_1575_, 1);
v_fst_1577_ = lean_ctor_get(v_a_1576_, 0);
lean_inc(v_fst_1577_);
v_snd_1578_ = lean_ctor_get(v_a_1576_, 1);
lean_inc(v_snd_1578_);
lean_dec(v_a_1576_);
v_f_1524_ = v_fst_1577_;
v___y_1525_ = v___y_1516_;
v___y_1526_ = v_snd_1578_;
v___y_1527_ = v___y_1518_;
v___y_1528_ = v___y_1519_;
v___y_1529_ = v___y_1520_;
v___y_1530_ = v___y_1521_;
goto v___jp_1523_;
}
else
{
lean_dec_ref(v_x_1514_);
lean_dec_ref(v_post_1510_);
lean_dec_ref(v_pre_1509_);
return v___x_1575_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object* v___x_1586_, lean_object* v_pre_1587_, lean_object* v_e_1588_, lean_object* v_post_1589_, uint8_t v_usedLetOnly_1590_, uint8_t v_skipConstInApp_1591_, uint8_t v_skipInstances_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_Core_checkSystem(v___x_1586_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v___x_1601_; 
lean_dec_ref_known(v___x_1600_, 1);
lean_inc_ref(v_pre_1587_);
lean_inc(v___y_1598_);
lean_inc_ref(v___y_1597_);
lean_inc(v___y_1596_);
lean_inc_ref(v___y_1595_);
lean_inc_ref(v_e_1588_);
v___x_1601_ = lean_apply_7(v_pre_1587_, v_e_1588_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, lean_box(0));
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1663_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1663_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1663_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v_fst_1606_; lean_object* v_snd_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1662_; 
v_fst_1606_ = lean_ctor_get(v_a_1602_, 0);
v_snd_1607_ = lean_ctor_get(v_a_1602_, 1);
v_isSharedCheck_1662_ = !lean_is_exclusive(v_a_1602_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1609_ = v_a_1602_;
v_isShared_1610_ = v_isSharedCheck_1662_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_snd_1607_);
lean_inc(v_fst_1606_);
lean_dec(v_a_1602_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1662_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___y_1612_; 
switch(lean_obj_tag(v_fst_1606_))
{
case 0:
{
lean_object* v_e_1651_; lean_object* v___x_1653_; 
lean_dec_ref(v_post_1589_);
lean_dec_ref(v_e_1588_);
lean_dec_ref(v_pre_1587_);
v_e_1651_ = lean_ctor_get(v_fst_1606_, 0);
lean_inc_ref(v_e_1651_);
lean_dec_ref_known(v_fst_1606_, 1);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v_e_1651_);
v___x_1653_ = v___x_1609_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_e_1651_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_snd_1607_);
v___x_1653_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1655_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v___x_1653_);
v___x_1655_ = v___x_1604_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
case 1:
{
lean_object* v_e_1658_; lean_object* v___x_1659_; 
lean_del_object(v___x_1609_);
lean_del_object(v___x_1604_);
lean_dec_ref(v_e_1588_);
v_e_1658_ = lean_ctor_get(v_fst_1606_, 0);
lean_inc_ref(v_e_1658_);
lean_dec_ref_known(v_fst_1606_, 1);
v___x_1659_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v_e_1658_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1659_;
}
default: 
{
lean_object* v_e_x3f_1660_; 
lean_del_object(v___x_1609_);
lean_del_object(v___x_1604_);
v_e_x3f_1660_ = lean_ctor_get(v_fst_1606_, 0);
lean_inc(v_e_x3f_1660_);
lean_dec_ref_known(v_fst_1606_, 1);
if (lean_obj_tag(v_e_x3f_1660_) == 0)
{
v___y_1612_ = v_e_1588_;
goto v___jp_1611_;
}
else
{
lean_object* v_val_1661_; 
lean_dec_ref(v_e_1588_);
v_val_1661_ = lean_ctor_get(v_e_x3f_1660_, 0);
lean_inc(v_val_1661_);
lean_dec_ref_known(v_e_x3f_1660_, 1);
v___y_1612_ = v_val_1661_;
goto v___jp_1611_;
}
}
}
v___jp_1611_:
{
switch(lean_obj_tag(v___y_1612_))
{
case 7:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1614_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___x_1613_, v___y_1612_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1614_;
}
case 6:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1615_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1616_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___x_1615_, v___y_1612_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1616_;
}
case 8:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1618_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___x_1617_, v___y_1612_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1618_;
}
case 5:
{
lean_object* v_dummy_1619_; lean_object* v_nargs_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v_dummy_1619_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_1620_ = l_Lean_Expr_getAppNumArgs(v___y_1612_);
lean_inc(v_nargs_1620_);
v___x_1621_ = lean_mk_array(v_nargs_1620_, v_dummy_1619_);
v___x_1622_ = lean_unsigned_to_nat(1u);
v___x_1623_ = lean_nat_sub(v_nargs_1620_, v___x_1622_);
lean_dec(v_nargs_1620_);
v___x_1624_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_skipInstances_1592_, v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v___y_1612_, v___x_1621_, v___x_1623_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1624_;
}
case 10:
{
lean_object* v_data_1625_; lean_object* v_expr_1626_; lean_object* v___x_1627_; 
v_data_1625_ = lean_ctor_get(v___y_1612_, 0);
v_expr_1626_ = lean_ctor_get(v___y_1612_, 1);
lean_inc_ref(v_expr_1626_);
lean_inc_ref(v_post_1589_);
lean_inc_ref(v_pre_1587_);
v___x_1627_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v_expr_1626_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v_fst_1629_; lean_object* v_snd_1630_; size_t v___x_1631_; size_t v___x_1632_; uint8_t v___x_1633_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v_fst_1629_ = lean_ctor_get(v_a_1628_, 0);
lean_inc(v_fst_1629_);
v_snd_1630_ = lean_ctor_get(v_a_1628_, 1);
lean_inc(v_snd_1630_);
lean_dec(v_a_1628_);
v___x_1631_ = lean_ptr_addr(v_expr_1626_);
v___x_1632_ = lean_ptr_addr(v_fst_1629_);
v___x_1633_ = lean_usize_dec_eq(v___x_1631_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
lean_inc(v_data_1625_);
lean_dec_ref_known(v___y_1612_, 2);
v___x_1634_ = l_Lean_Expr_mdata___override(v_data_1625_, v_fst_1629_);
v___x_1635_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___x_1634_, v___y_1593_, v_snd_1630_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1635_;
}
else
{
lean_object* v___x_1636_; 
lean_dec(v_fst_1629_);
v___x_1636_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___y_1612_, v___y_1593_, v_snd_1630_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1636_;
}
}
else
{
lean_dec_ref_known(v___y_1612_, 2);
lean_dec_ref(v_post_1589_);
lean_dec_ref(v_pre_1587_);
return v___x_1627_;
}
}
case 11:
{
lean_object* v_typeName_1637_; lean_object* v_idx_1638_; lean_object* v_struct_1639_; lean_object* v___x_1640_; 
v_typeName_1637_ = lean_ctor_get(v___y_1612_, 0);
v_idx_1638_ = lean_ctor_get(v___y_1612_, 1);
v_struct_1639_ = lean_ctor_get(v___y_1612_, 2);
lean_inc_ref(v_struct_1639_);
lean_inc_ref(v_post_1589_);
lean_inc_ref(v_pre_1587_);
v___x_1640_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v_struct_1639_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v_fst_1642_; lean_object* v_snd_1643_; size_t v___x_1644_; size_t v___x_1645_; uint8_t v___x_1646_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v_fst_1642_ = lean_ctor_get(v_a_1641_, 0);
lean_inc(v_fst_1642_);
v_snd_1643_ = lean_ctor_get(v_a_1641_, 1);
lean_inc(v_snd_1643_);
lean_dec(v_a_1641_);
v___x_1644_ = lean_ptr_addr(v_struct_1639_);
v___x_1645_ = lean_ptr_addr(v_fst_1642_);
v___x_1646_ = lean_usize_dec_eq(v___x_1644_, v___x_1645_);
if (v___x_1646_ == 0)
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
lean_inc(v_idx_1638_);
lean_inc(v_typeName_1637_);
lean_dec_ref_known(v___y_1612_, 3);
v___x_1647_ = l_Lean_Expr_proj___override(v_typeName_1637_, v_idx_1638_, v_fst_1642_);
v___x_1648_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___x_1647_, v___y_1593_, v_snd_1643_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1648_;
}
else
{
lean_object* v___x_1649_; 
lean_dec(v_fst_1642_);
v___x_1649_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___y_1612_, v___y_1593_, v_snd_1643_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1649_;
}
}
else
{
lean_dec_ref_known(v___y_1612_, 3);
lean_dec_ref(v_post_1589_);
lean_dec_ref(v_pre_1587_);
return v___x_1640_;
}
}
default: 
{
lean_object* v___x_1650_; 
v___x_1650_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1587_, v_post_1589_, v_usedLetOnly_1590_, v_skipConstInApp_1591_, v_skipInstances_1592_, v___y_1612_, v___y_1593_, v_snd_1607_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1650_;
}
}
}
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_dec_ref(v_post_1589_);
lean_dec_ref(v_e_1588_);
lean_dec_ref(v_pre_1587_);
v_a_1664_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1601_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1601_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
lean_dec(v___y_1594_);
lean_dec_ref(v_post_1589_);
lean_dec_ref(v_e_1588_);
lean_dec_ref(v_pre_1587_);
v_a_1672_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1600_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1600_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object* v___x_1680_, lean_object* v_pre_1681_, lean_object* v_e_1682_, lean_object* v_post_1683_, lean_object* v_usedLetOnly_1684_, lean_object* v_skipConstInApp_1685_, lean_object* v_skipInstances_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
uint8_t v_usedLetOnly_boxed_1694_; uint8_t v_skipConstInApp_boxed_1695_; uint8_t v_skipInstances_boxed_1696_; lean_object* v_res_1697_; 
v_usedLetOnly_boxed_1694_ = lean_unbox(v_usedLetOnly_1684_);
v_skipConstInApp_boxed_1695_ = lean_unbox(v_skipConstInApp_1685_);
v_skipInstances_boxed_1696_ = lean_unbox(v_skipInstances_1686_);
v_res_1697_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(v___x_1680_, v_pre_1681_, v_e_1682_, v_post_1683_, v_usedLetOnly_boxed_1694_, v_skipConstInApp_boxed_1695_, v_skipInstances_boxed_1696_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1687_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object* v_pre_1698_, lean_object* v_post_1699_, uint8_t v_usedLetOnly_1700_, uint8_t v_skipConstInApp_1701_, uint8_t v_skipInstances_1702_, lean_object* v_e_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
lean_inc(v___y_1704_);
v___x_1711_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1711_, 0, lean_box(0));
lean_closure_set(v___x_1711_, 1, lean_box(0));
lean_closure_set(v___x_1711_, 2, v___y_1704_);
v___x_1712_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___x_1711_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1767_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1715_ = v___x_1712_;
v_isShared_1716_ = v_isSharedCheck_1767_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1712_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1767_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v_fst_1717_; lean_object* v_snd_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1766_; 
v_fst_1717_ = lean_ctor_get(v_a_1713_, 0);
v_snd_1718_ = lean_ctor_get(v_a_1713_, 1);
v_isSharedCheck_1766_ = !lean_is_exclusive(v_a_1713_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1720_ = v_a_1713_;
v_isShared_1721_ = v_isSharedCheck_1766_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_snd_1718_);
lean_inc(v_fst_1717_);
lean_dec(v_a_1713_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1766_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_fst_1717_, v_e_1703_);
lean_dec(v_fst_1717_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___f_1727_; lean_object* v___x_1728_; 
lean_del_object(v___x_1720_);
lean_del_object(v___x_1715_);
v___x_1723_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0));
v___x_1724_ = lean_box(v_usedLetOnly_1700_);
v___x_1725_ = lean_box(v_skipConstInApp_1701_);
v___x_1726_ = lean_box(v_skipInstances_1702_);
lean_inc_ref(v_e_1703_);
v___f_1727_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1727_, 0, v___x_1723_);
lean_closure_set(v___f_1727_, 1, v_pre_1698_);
lean_closure_set(v___f_1727_, 2, v_e_1703_);
lean_closure_set(v___f_1727_, 3, v_post_1699_);
lean_closure_set(v___f_1727_, 4, v___x_1724_);
lean_closure_set(v___f_1727_, 5, v___x_1725_);
lean_closure_set(v___f_1727_, 6, v___x_1726_);
v___x_1728_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v___f_1727_, v___y_1704_, v_snd_1718_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v_fst_1730_; lean_object* v_snd_1731_; lean_object* v___f_1732_; lean_object* v___x_1733_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v_fst_1730_ = lean_ctor_get(v_a_1729_, 0);
lean_inc_n(v_fst_1730_, 2);
v_snd_1731_ = lean_ctor_get(v_a_1729_, 1);
lean_inc(v_snd_1731_);
lean_dec(v_a_1729_);
lean_inc(v___y_1704_);
v___f_1732_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1732_, 0, v___y_1704_);
lean_closure_set(v___f_1732_, 1, v_e_1703_);
lean_closure_set(v___f_1732_, 2, v_fst_1730_);
v___x_1733_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___f_1732_, v_snd_1731_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1750_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1736_ = v___x_1733_;
v_isShared_1737_ = v_isSharedCheck_1750_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1750_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v_snd_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1748_; 
v_snd_1738_ = lean_ctor_get(v_a_1734_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_a_1734_);
if (v_isSharedCheck_1748_ == 0)
{
lean_object* v_unused_1749_; 
v_unused_1749_ = lean_ctor_get(v_a_1734_, 0);
lean_dec(v_unused_1749_);
v___x_1740_ = v_a_1734_;
v_isShared_1741_ = v_isSharedCheck_1748_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_snd_1738_);
lean_dec(v_a_1734_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1748_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v_fst_1730_);
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_fst_1730_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v_snd_1738_);
v___x_1743_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1745_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 0, v___x_1743_);
v___x_1745_ = v___x_1736_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v___x_1743_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
lean_dec(v_fst_1730_);
v_a_1751_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1733_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1733_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
else
{
lean_dec_ref(v_e_1703_);
return v___x_1728_;
}
}
else
{
lean_object* v_val_1759_; lean_object* v___x_1761_; 
lean_dec_ref(v_e_1703_);
lean_dec_ref(v_post_1699_);
lean_dec_ref(v_pre_1698_);
v_val_1759_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_val_1759_);
lean_dec_ref_known(v___x_1722_, 1);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v_val_1759_);
v___x_1761_ = v___x_1720_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_val_1759_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_snd_1718_);
v___x_1761_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
lean_object* v___x_1763_; 
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1761_);
v___x_1763_ = v___x_1715_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec_ref(v_e_1703_);
lean_dec_ref(v_post_1699_);
lean_dec_ref(v_pre_1698_);
v_a_1768_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1712_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1712_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object* v_pre_1776_, lean_object* v_post_1777_, uint8_t v_usedLetOnly_1778_, uint8_t v_skipConstInApp_1779_, uint8_t v_skipInstances_1780_, lean_object* v_fvars_1781_, lean_object* v_e_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
if (lean_obj_tag(v_e_1782_) == 7)
{
lean_object* v_binderName_1790_; lean_object* v_binderType_1791_; lean_object* v_body_1792_; uint8_t v_binderInfo_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___f_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v_binderName_1790_ = lean_ctor_get(v_e_1782_, 0);
lean_inc(v_binderName_1790_);
v_binderType_1791_ = lean_ctor_get(v_e_1782_, 1);
lean_inc_ref(v_binderType_1791_);
v_body_1792_ = lean_ctor_get(v_e_1782_, 2);
lean_inc_ref(v_body_1792_);
v_binderInfo_1793_ = lean_ctor_get_uint8(v_e_1782_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1782_, 3);
v___x_1794_ = lean_box(v_usedLetOnly_1778_);
v___x_1795_ = lean_box(v_skipConstInApp_1779_);
v___x_1796_ = lean_box(v_skipInstances_1780_);
lean_inc_ref(v_post_1777_);
lean_inc_ref(v_pre_1776_);
lean_inc_ref(v_fvars_1781_);
v___f_1797_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1797_, 0, v_fvars_1781_);
lean_closure_set(v___f_1797_, 1, v_pre_1776_);
lean_closure_set(v___f_1797_, 2, v_post_1777_);
lean_closure_set(v___f_1797_, 3, v___x_1794_);
lean_closure_set(v___f_1797_, 4, v___x_1795_);
lean_closure_set(v___f_1797_, 5, v___x_1796_);
lean_closure_set(v___f_1797_, 6, v_body_1792_);
v___x_1798_ = lean_expr_instantiate_rev(v_binderType_1791_, v_fvars_1781_);
lean_dec_ref(v_fvars_1781_);
lean_dec_ref(v_binderType_1791_);
v___x_1799_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1776_, v_post_1777_, v_usedLetOnly_1778_, v_skipConstInApp_1779_, v_skipInstances_1780_, v___x_1798_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
if (lean_obj_tag(v___x_1799_) == 0)
{
lean_object* v_a_1800_; lean_object* v_fst_1801_; lean_object* v_snd_1802_; uint8_t v___x_1803_; lean_object* v___x_1804_; 
v_a_1800_ = lean_ctor_get(v___x_1799_, 0);
lean_inc(v_a_1800_);
lean_dec_ref_known(v___x_1799_, 1);
v_fst_1801_ = lean_ctor_get(v_a_1800_, 0);
lean_inc(v_fst_1801_);
v_snd_1802_ = lean_ctor_get(v_a_1800_, 1);
lean_inc(v_snd_1802_);
lean_dec(v_a_1800_);
v___x_1803_ = 0;
v___x_1804_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_binderName_1790_, v_binderInfo_1793_, v_fst_1801_, v___f_1797_, v___x_1803_, v___y_1783_, v_snd_1802_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
return v___x_1804_;
}
else
{
lean_dec_ref(v___f_1797_);
lean_dec(v_binderName_1790_);
return v___x_1799_;
}
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_expr_instantiate_rev(v_e_1782_, v_fvars_1781_);
lean_dec_ref(v_e_1782_);
lean_inc_ref(v_post_1777_);
lean_inc_ref(v_pre_1776_);
v___x_1806_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1776_, v_post_1777_, v_usedLetOnly_1778_, v_skipConstInApp_1779_, v_skipInstances_1780_, v___x_1805_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
if (lean_obj_tag(v___x_1806_) == 0)
{
lean_object* v_a_1807_; lean_object* v_fst_1808_; lean_object* v_snd_1809_; uint8_t v___x_1810_; uint8_t v___x_1811_; uint8_t v___x_1812_; lean_object* v___x_1813_; 
v_a_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_a_1807_);
lean_dec_ref_known(v___x_1806_, 1);
v_fst_1808_ = lean_ctor_get(v_a_1807_, 0);
lean_inc(v_fst_1808_);
v_snd_1809_ = lean_ctor_get(v_a_1807_, 1);
lean_inc(v_snd_1809_);
lean_dec(v_a_1807_);
v___x_1810_ = 0;
v___x_1811_ = 1;
v___x_1812_ = 1;
v___x_1813_ = l_Lean_Meta_mkForallFVars(v_fvars_1781_, v_fst_1808_, v___x_1810_, v_usedLetOnly_1778_, v___x_1811_, v___x_1812_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
lean_dec_ref(v_fvars_1781_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1815_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref_known(v___x_1813_, 1);
v___x_1815_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1776_, v_post_1777_, v_usedLetOnly_1778_, v_skipConstInApp_1779_, v_skipInstances_1780_, v_a_1814_, v___y_1783_, v_snd_1809_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
return v___x_1815_;
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
lean_dec(v_snd_1809_);
lean_dec_ref(v_post_1777_);
lean_dec_ref(v_pre_1776_);
v_a_1816_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1813_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1813_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1781_);
lean_dec_ref(v_post_1777_);
lean_dec_ref(v_pre_1776_);
return v___x_1806_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(lean_object* v_fvars_1824_, lean_object* v_pre_1825_, lean_object* v_post_1826_, uint8_t v_usedLetOnly_1827_, uint8_t v_skipConstInApp_1828_, uint8_t v_skipInstances_1829_, lean_object* v_body_1830_, lean_object* v_x_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_array_push(v_fvars_1824_, v_x_1831_);
v___x_1840_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1825_, v_post_1826_, v_usedLetOnly_1827_, v_skipConstInApp_1828_, v_skipInstances_1829_, v___x_1839_, v_body_1830_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8___boxed(lean_object* v_pre_1841_, lean_object* v_post_1842_, lean_object* v_usedLetOnly_1843_, lean_object* v_skipConstInApp_1844_, lean_object* v_skipInstances_1845_, lean_object* v_sz_1846_, lean_object* v_i_1847_, lean_object* v_bs_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
uint8_t v_usedLetOnly_boxed_1856_; uint8_t v_skipConstInApp_boxed_1857_; uint8_t v_skipInstances_boxed_1858_; size_t v_sz_boxed_1859_; size_t v_i_boxed_1860_; lean_object* v_res_1861_; 
v_usedLetOnly_boxed_1856_ = lean_unbox(v_usedLetOnly_1843_);
v_skipConstInApp_boxed_1857_ = lean_unbox(v_skipConstInApp_1844_);
v_skipInstances_boxed_1858_ = lean_unbox(v_skipInstances_1845_);
v_sz_boxed_1859_ = lean_unbox_usize(v_sz_1846_);
lean_dec(v_sz_1846_);
v_i_boxed_1860_ = lean_unbox_usize(v_i_1847_);
lean_dec(v_i_1847_);
v_res_1861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(v_pre_1841_, v_post_1842_, v_usedLetOnly_boxed_1856_, v_skipConstInApp_boxed_1857_, v_skipInstances_boxed_1858_, v_sz_boxed_1859_, v_i_boxed_1860_, v_bs_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1849_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object* v_pre_1862_, lean_object* v_post_1863_, lean_object* v_usedLetOnly_1864_, lean_object* v_skipConstInApp_1865_, lean_object* v_skipInstances_1866_, lean_object* v_e_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
uint8_t v_usedLetOnly_boxed_1875_; uint8_t v_skipConstInApp_boxed_1876_; uint8_t v_skipInstances_boxed_1877_; lean_object* v_res_1878_; 
v_usedLetOnly_boxed_1875_ = lean_unbox(v_usedLetOnly_1864_);
v_skipConstInApp_boxed_1876_ = lean_unbox(v_skipConstInApp_1865_);
v_skipInstances_boxed_1877_ = lean_unbox(v_skipInstances_1866_);
v_res_1878_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1862_, v_post_1863_, v_usedLetOnly_boxed_1875_, v_skipConstInApp_boxed_1876_, v_skipInstances_boxed_1877_, v_e_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1868_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object* v_pre_1879_, lean_object* v_post_1880_, lean_object* v_usedLetOnly_1881_, lean_object* v_skipConstInApp_1882_, lean_object* v_skipInstances_1883_, lean_object* v_fvars_1884_, lean_object* v_e_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
uint8_t v_usedLetOnly_boxed_1893_; uint8_t v_skipConstInApp_boxed_1894_; uint8_t v_skipInstances_boxed_1895_; lean_object* v_res_1896_; 
v_usedLetOnly_boxed_1893_ = lean_unbox(v_usedLetOnly_1881_);
v_skipConstInApp_boxed_1894_ = lean_unbox(v_skipConstInApp_1882_);
v_skipInstances_boxed_1895_ = lean_unbox(v_skipInstances_1883_);
v_res_1896_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1879_, v_post_1880_, v_usedLetOnly_boxed_1893_, v_skipConstInApp_boxed_1894_, v_skipInstances_boxed_1895_, v_fvars_1884_, v_e_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1886_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object* v_pre_1897_, lean_object* v_post_1898_, lean_object* v_usedLetOnly_1899_, lean_object* v_skipConstInApp_1900_, lean_object* v_skipInstances_1901_, lean_object* v_fvars_1902_, lean_object* v_e_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
uint8_t v_usedLetOnly_boxed_1911_; uint8_t v_skipConstInApp_boxed_1912_; uint8_t v_skipInstances_boxed_1913_; lean_object* v_res_1914_; 
v_usedLetOnly_boxed_1911_ = lean_unbox(v_usedLetOnly_1899_);
v_skipConstInApp_boxed_1912_ = lean_unbox(v_skipConstInApp_1900_);
v_skipInstances_boxed_1913_ = lean_unbox(v_skipInstances_1901_);
v_res_1914_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1897_, v_post_1898_, v_usedLetOnly_boxed_1911_, v_skipConstInApp_boxed_1912_, v_skipInstances_boxed_1913_, v_fvars_1902_, v_e_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1904_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object* v_pre_1915_, lean_object* v_post_1916_, lean_object* v_usedLetOnly_1917_, lean_object* v_skipConstInApp_1918_, lean_object* v_skipInstances_1919_, lean_object* v_e_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
uint8_t v_usedLetOnly_boxed_1928_; uint8_t v_skipConstInApp_boxed_1929_; uint8_t v_skipInstances_boxed_1930_; lean_object* v_res_1931_; 
v_usedLetOnly_boxed_1928_ = lean_unbox(v_usedLetOnly_1917_);
v_skipConstInApp_boxed_1929_ = lean_unbox(v_skipConstInApp_1918_);
v_skipInstances_boxed_1930_ = lean_unbox(v_skipInstances_1919_);
v_res_1931_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1915_, v_post_1916_, v_usedLetOnly_boxed_1928_, v_skipConstInApp_boxed_1929_, v_skipInstances_boxed_1930_, v_e_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1921_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object* v_pre_1932_, lean_object* v_post_1933_, lean_object* v_usedLetOnly_1934_, lean_object* v_skipConstInApp_1935_, lean_object* v_skipInstances_1936_, lean_object* v_fvars_1937_, lean_object* v_e_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
uint8_t v_usedLetOnly_boxed_1946_; uint8_t v_skipConstInApp_boxed_1947_; uint8_t v_skipInstances_boxed_1948_; lean_object* v_res_1949_; 
v_usedLetOnly_boxed_1946_ = lean_unbox(v_usedLetOnly_1934_);
v_skipConstInApp_boxed_1947_ = lean_unbox(v_skipConstInApp_1935_);
v_skipInstances_boxed_1948_ = lean_unbox(v_skipInstances_1936_);
v_res_1949_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1932_, v_post_1933_, v_usedLetOnly_boxed_1946_, v_skipConstInApp_boxed_1947_, v_skipInstances_boxed_1948_, v_fvars_1937_, v_e_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec(v___y_1939_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object* v_skipInstances_1950_, lean_object* v_pre_1951_, lean_object* v_post_1952_, lean_object* v_usedLetOnly_1953_, lean_object* v_skipConstInApp_1954_, lean_object* v_x_1955_, lean_object* v_x_1956_, lean_object* v_x_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
uint8_t v_skipInstances_boxed_1965_; uint8_t v_usedLetOnly_boxed_1966_; uint8_t v_skipConstInApp_boxed_1967_; lean_object* v_res_1968_; 
v_skipInstances_boxed_1965_ = lean_unbox(v_skipInstances_1950_);
v_usedLetOnly_boxed_1966_ = lean_unbox(v_usedLetOnly_1953_);
v_skipConstInApp_boxed_1967_ = lean_unbox(v_skipConstInApp_1954_);
v_res_1968_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_skipInstances_boxed_1965_, v_pre_1951_, v_post_1952_, v_usedLetOnly_boxed_1966_, v_skipConstInApp_boxed_1967_, v_x_1955_, v_x_1956_, v_x_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1958_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_1969_, lean_object* v___x_1970_, lean_object* v_pre_1971_, lean_object* v_post_1972_, lean_object* v_usedLetOnly_1973_, lean_object* v_skipConstInApp_1974_, lean_object* v_skipInstances_1975_, lean_object* v_a_1976_, lean_object* v_b_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
uint8_t v_usedLetOnly_boxed_1985_; uint8_t v_skipConstInApp_boxed_1986_; uint8_t v_skipInstances_boxed_1987_; lean_object* v_res_1988_; 
v_usedLetOnly_boxed_1985_ = lean_unbox(v_usedLetOnly_1973_);
v_skipConstInApp_boxed_1986_ = lean_unbox(v_skipConstInApp_1974_);
v_skipInstances_boxed_1987_ = lean_unbox(v_skipInstances_1975_);
v_res_1988_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v_upperBound_1969_, v___x_1970_, v_pre_1971_, v_post_1972_, v_usedLetOnly_boxed_1985_, v_skipConstInApp_boxed_1986_, v_skipInstances_boxed_1987_, v_a_1976_, v_b_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1978_);
lean_dec_ref(v___x_1970_);
lean_dec(v_upperBound_1969_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object* v_00_u03b1_1989_, lean_object* v_x_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1997_ = lean_apply_1(v_x_1990_, lean_box(0));
v___x_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1997_);
lean_ctor_set(v___x_1998_, 1, v___y_1991_);
v___x_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2000_, lean_object* v_x_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(v_00_u03b1_2000_, v_x_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
return v_res_2008_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2009_ = lean_box(0);
v___x_2010_ = lean_unsigned_to_nat(16u);
v___x_2011_ = lean_mk_array(v___x_2010_, v___x_2009_);
return v___x_2011_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0);
v___x_2013_ = lean_unsigned_to_nat(0u);
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
lean_ctor_set(v___x_2014_, 1, v___x_2012_);
return v___x_2014_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1);
v___x_2016_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2016_, 0, lean_box(0));
lean_closure_set(v___x_2016_, 1, lean_box(0));
lean_closure_set(v___x_2016_, 2, v___x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object* v_input_2017_, lean_object* v_pre_2018_, lean_object* v_post_2019_, uint8_t v_usedLetOnly_2020_, uint8_t v_skipConstInApp_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v_a_2031_; lean_object* v_fst_2032_; lean_object* v_snd_2033_; lean_object* v___x_2034_; 
v___x_2028_ = 0;
v___x_2029_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2);
v___x_2030_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2029_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2031_);
lean_dec_ref(v___x_2030_);
v_fst_2032_ = lean_ctor_get(v_a_2031_, 0);
lean_inc(v_fst_2032_);
v_snd_2033_ = lean_ctor_get(v_a_2031_, 1);
lean_inc(v_snd_2033_);
lean_dec(v_a_2031_);
v___x_2034_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_2018_, v_post_2019_, v_usedLetOnly_2020_, v_skipConstInApp_2021_, v___x_2028_, v_input_2017_, v_fst_2032_, v_snd_2033_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v_fst_2036_; lean_object* v_snd_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2056_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v_fst_2036_ = lean_ctor_get(v_a_2035_, 0);
lean_inc(v_fst_2036_);
v_snd_2037_ = lean_ctor_get(v_a_2035_, 1);
lean_inc(v_snd_2037_);
lean_dec(v_a_2035_);
v___x_2038_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2038_, 0, lean_box(0));
lean_closure_set(v___x_2038_, 1, lean_box(0));
lean_closure_set(v___x_2038_, 2, v_fst_2032_);
v___x_2039_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2038_, v_snd_2037_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2042_ = v___x_2039_;
v_isShared_2043_ = v_isSharedCheck_2056_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2039_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2056_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v_snd_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2054_; 
v_snd_2044_ = lean_ctor_get(v_a_2040_, 1);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_a_2040_);
if (v_isSharedCheck_2054_ == 0)
{
lean_object* v_unused_2055_; 
v_unused_2055_ = lean_ctor_get(v_a_2040_, 0);
lean_dec(v_unused_2055_);
v___x_2046_ = v_a_2040_;
v_isShared_2047_ = v_isSharedCheck_2054_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_snd_2044_);
lean_dec(v_a_2040_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2054_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v_fst_2036_);
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_fst_2036_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_snd_2044_);
v___x_2049_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
lean_object* v___x_2051_; 
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2049_);
v___x_2051_ = v___x_2042_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
}
else
{
lean_dec(v_fst_2032_);
return v___x_2034_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object* v_input_2057_, lean_object* v_pre_2058_, lean_object* v_post_2059_, lean_object* v_usedLetOnly_2060_, lean_object* v_skipConstInApp_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
uint8_t v_usedLetOnly_boxed_2068_; uint8_t v_skipConstInApp_boxed_2069_; lean_object* v_res_2070_; 
v_usedLetOnly_boxed_2068_ = lean_unbox(v_usedLetOnly_2060_);
v_skipConstInApp_boxed_2069_ = lean_unbox(v_skipConstInApp_2061_);
v_res_2070_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_input_2057_, v_pre_2058_, v_post_2059_, v_usedLetOnly_boxed_2068_, v_skipConstInApp_boxed_2069_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object* v_e_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v___y_2080_; lean_object* v___x_2097_; uint8_t v_transparency_2098_; lean_object* v___f_2099_; lean_object* v___f_2100_; uint8_t v___x_2101_; uint8_t v___x_2102_; lean_object* v___x_2103_; uint8_t v___x_2104_; 
v___x_2097_ = l_Lean_Meta_Context_config(v___y_2074_);
v_transparency_2098_ = lean_ctor_get_uint8(v___x_2097_, 9);
lean_dec_ref(v___x_2097_);
v___f_2099_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__0));
v___f_2100_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__1));
v___x_2101_ = 0;
v___x_2102_ = 3;
v___x_2103_ = lean_box(0);
v___x_2104_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2098_, v___x_2102_);
if (v___x_2104_ == 0)
{
lean_object* v_keyedConfig_2105_; uint8_t v_trackZetaDelta_2106_; lean_object* v_zetaDeltaSet_2107_; lean_object* v_lctx_2108_; lean_object* v_localInstances_2109_; lean_object* v_defEqCtx_x3f_2110_; lean_object* v_synthPendingDepth_2111_; lean_object* v_customCanUnfoldPredicate_x3f_2112_; uint8_t v_univApprox_2113_; uint8_t v_inTypeClassResolution_2114_; uint8_t v_cacheInferType_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v_keyedConfig_2105_ = lean_ctor_get(v___y_2074_, 0);
v_trackZetaDelta_2106_ = lean_ctor_get_uint8(v___y_2074_, sizeof(void*)*7);
v_zetaDeltaSet_2107_ = lean_ctor_get(v___y_2074_, 1);
v_lctx_2108_ = lean_ctor_get(v___y_2074_, 2);
v_localInstances_2109_ = lean_ctor_get(v___y_2074_, 3);
v_defEqCtx_x3f_2110_ = lean_ctor_get(v___y_2074_, 4);
v_synthPendingDepth_2111_ = lean_ctor_get(v___y_2074_, 5);
v_customCanUnfoldPredicate_x3f_2112_ = lean_ctor_get(v___y_2074_, 6);
v_univApprox_2113_ = lean_ctor_get_uint8(v___y_2074_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2114_ = lean_ctor_get_uint8(v___y_2074_, sizeof(void*)*7 + 2);
v_cacheInferType_2115_ = lean_ctor_get_uint8(v___y_2074_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2105_);
v___x_2116_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2102_, v_keyedConfig_2105_);
lean_inc(v_customCanUnfoldPredicate_x3f_2112_);
lean_inc(v_synthPendingDepth_2111_);
lean_inc(v_defEqCtx_x3f_2110_);
lean_inc_ref(v_localInstances_2109_);
lean_inc_ref(v_lctx_2108_);
lean_inc(v_zetaDeltaSet_2107_);
v___x_2117_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2117_, 0, v___x_2116_);
lean_ctor_set(v___x_2117_, 1, v_zetaDeltaSet_2107_);
lean_ctor_set(v___x_2117_, 2, v_lctx_2108_);
lean_ctor_set(v___x_2117_, 3, v_localInstances_2109_);
lean_ctor_set(v___x_2117_, 4, v_defEqCtx_x3f_2110_);
lean_ctor_set(v___x_2117_, 5, v_synthPendingDepth_2111_);
lean_ctor_set(v___x_2117_, 6, v_customCanUnfoldPredicate_x3f_2112_);
lean_ctor_set_uint8(v___x_2117_, sizeof(void*)*7, v_trackZetaDelta_2106_);
lean_ctor_set_uint8(v___x_2117_, sizeof(void*)*7 + 1, v_univApprox_2113_);
lean_ctor_set_uint8(v___x_2117_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2114_);
lean_ctor_set_uint8(v___x_2117_, sizeof(void*)*7 + 3, v_cacheInferType_2115_);
v___x_2118_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2073_, v___f_2100_, v___f_2099_, v___x_2101_, v___x_2101_, v___x_2103_, v___x_2117_, v___y_2075_, v___y_2076_, v___y_2077_);
lean_dec_ref_known(v___x_2117_, 7);
v___y_2080_ = v___x_2118_;
goto v___jp_2079_;
}
else
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2073_, v___f_2100_, v___f_2099_, v___x_2101_, v___x_2101_, v___x_2103_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
v___y_2080_ = v___x_2119_;
goto v___jp_2079_;
}
v___jp_2079_:
{
if (lean_obj_tag(v___y_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
v_a_2081_ = lean_ctor_get(v___y_2080_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___y_2080_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___y_2080_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___y_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
v_a_2089_ = lean_ctor_get(v___y_2080_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___y_2080_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___y_2080_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___y_2080_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object* v_e_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lean_Meta_expandCoe(v_e_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object* v_00_u03b2_2127_, lean_object* v_m_2128_, lean_object* v_a_2129_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_2128_, v_a_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2131_, lean_object* v_m_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(v_00_u03b2_2131_, v_m_2132_, v_a_2133_);
lean_dec(v_a_2133_);
lean_dec_ref(v_m_2132_);
return v_res_2134_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2135_, lean_object* v_x_2136_, lean_object* v_x_2137_){
_start:
{
uint8_t v___x_2138_; 
v___x_2138_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_2136_, v_x_2137_);
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2139_, lean_object* v_x_2140_, lean_object* v_x_2141_){
_start:
{
uint8_t v_res_2142_; lean_object* v_r_2143_; 
v_res_2142_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(v_00_u03b2_2139_, v_x_2140_, v_x_2141_);
lean_dec_ref(v_x_2141_);
lean_dec_ref(v_x_2140_);
v_r_2143_ = lean_box(v_res_2142_);
return v_r_2143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2144_, lean_object* v_a_2145_, lean_object* v_x_2146_){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_2145_, v_x_2146_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2148_, lean_object* v_a_2149_, lean_object* v_x_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(v_00_u03b2_2148_, v_a_2149_, v_x_2150_);
lean_dec(v_x_2150_);
lean_dec(v_a_2149_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object* v_upperBound_2152_, lean_object* v___x_2153_, lean_object* v_pre_2154_, lean_object* v_post_2155_, uint8_t v_usedLetOnly_2156_, uint8_t v_skipConstInApp_2157_, uint8_t v_skipInstances_2158_, lean_object* v___x_2159_, lean_object* v_inst_2160_, lean_object* v_R_2161_, lean_object* v_a_2162_, lean_object* v_b_2163_, lean_object* v_c_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v_upperBound_2152_, v___x_2153_, v_pre_2154_, v_post_2155_, v_usedLetOnly_2156_, v_skipConstInApp_2157_, v_skipInstances_2158_, v_a_2162_, v_b_2163_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object** _args){
lean_object* v_upperBound_2173_ = _args[0];
lean_object* v___x_2174_ = _args[1];
lean_object* v_pre_2175_ = _args[2];
lean_object* v_post_2176_ = _args[3];
lean_object* v_usedLetOnly_2177_ = _args[4];
lean_object* v_skipConstInApp_2178_ = _args[5];
lean_object* v_skipInstances_2179_ = _args[6];
lean_object* v___x_2180_ = _args[7];
lean_object* v_inst_2181_ = _args[8];
lean_object* v_R_2182_ = _args[9];
lean_object* v_a_2183_ = _args[10];
lean_object* v_b_2184_ = _args[11];
lean_object* v_c_2185_ = _args[12];
lean_object* v___y_2186_ = _args[13];
lean_object* v___y_2187_ = _args[14];
lean_object* v___y_2188_ = _args[15];
lean_object* v___y_2189_ = _args[16];
lean_object* v___y_2190_ = _args[17];
lean_object* v___y_2191_ = _args[18];
lean_object* v___y_2192_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2193_; uint8_t v_skipConstInApp_boxed_2194_; uint8_t v_skipInstances_boxed_2195_; lean_object* v_res_2196_; 
v_usedLetOnly_boxed_2193_ = lean_unbox(v_usedLetOnly_2177_);
v_skipConstInApp_boxed_2194_ = lean_unbox(v_skipConstInApp_2178_);
v_skipInstances_boxed_2195_ = lean_unbox(v_skipInstances_2179_);
v_res_2196_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_upperBound_2173_, v___x_2174_, v_pre_2175_, v_post_2176_, v_usedLetOnly_boxed_2193_, v_skipConstInApp_boxed_2194_, v_skipInstances_boxed_2195_, v___x_2180_, v_inst_2181_, v_R_2182_, v_a_2183_, v_b_2184_, v_c_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2186_);
lean_dec(v___x_2180_);
lean_dec_ref(v___x_2174_);
lean_dec(v_upperBound_2173_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object* v_00_u03b2_2197_, lean_object* v_m_2198_, lean_object* v_a_2199_){
_start:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_m_2198_, v_a_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object* v_00_u03b2_2201_, lean_object* v_m_2202_, lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(v_00_u03b2_2201_, v_m_2202_, v_a_2203_);
lean_dec_ref(v_a_2203_);
lean_dec_ref(v_m_2202_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object* v_00_u03b1_2205_, lean_object* v_name_2206_, uint8_t v_bi_2207_, lean_object* v_type_2208_, lean_object* v_k_2209_, uint8_t v_kind_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_name_2206_, v_bi_2207_, v_type_2208_, v_k_2209_, v_kind_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2219_, lean_object* v_name_2220_, lean_object* v_bi_2221_, lean_object* v_type_2222_, lean_object* v_k_2223_, lean_object* v_kind_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
uint8_t v_bi_boxed_2232_; uint8_t v_kind_boxed_2233_; lean_object* v_res_2234_; 
v_bi_boxed_2232_ = lean_unbox(v_bi_2221_);
v_kind_boxed_2233_ = lean_unbox(v_kind_2224_);
v_res_2234_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(v_00_u03b1_2219_, v_name_2220_, v_bi_boxed_2232_, v_type_2222_, v_k_2223_, v_kind_boxed_2233_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2225_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(lean_object* v_00_u03b1_2235_, lean_object* v_name_2236_, lean_object* v_type_2237_, lean_object* v_val_2238_, lean_object* v_k_2239_, uint8_t v_nondep_2240_, uint8_t v_kind_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_name_2236_, v_type_2237_, v_val_2238_, v_k_2239_, v_nondep_2240_, v_kind_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___boxed(lean_object* v_00_u03b1_2250_, lean_object* v_name_2251_, lean_object* v_type_2252_, lean_object* v_val_2253_, lean_object* v_k_2254_, lean_object* v_nondep_2255_, lean_object* v_kind_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
uint8_t v_nondep_boxed_2264_; uint8_t v_kind_boxed_2265_; lean_object* v_res_2266_; 
v_nondep_boxed_2264_ = lean_unbox(v_nondep_2255_);
v_kind_boxed_2265_ = lean_unbox(v_kind_2256_);
v_res_2266_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(v_00_u03b1_2250_, v_name_2251_, v_type_2252_, v_val_2253_, v_k_2254_, v_nondep_boxed_2264_, v_kind_boxed_2265_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2257_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(lean_object* v_00_u03b1_2267_, lean_object* v_ref_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_2268_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___boxed(lean_object* v_00_u03b1_2275_, lean_object* v_ref_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(v_00_u03b1_2275_, v_ref_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(lean_object* v_00_u03b1_2283_, lean_object* v_x_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v_x_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object* v_00_u03b1_2293_, lean_object* v_x_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_00_u03b1_2293_, v_x_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2295_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object* v_00_u03b2_2303_, lean_object* v_m_2304_, lean_object* v_a_2305_, lean_object* v_b_2306_){
_start:
{
lean_object* v___x_2307_; 
v___x_2307_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_m_2304_, v_a_2305_, v_b_2306_);
return v___x_2307_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2308_, lean_object* v_x_2309_, size_t v_x_2310_, lean_object* v_x_2311_){
_start:
{
uint8_t v___x_2312_; 
v___x_2312_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_2309_, v_x_2310_, v_x_2311_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2313_, lean_object* v_x_2314_, lean_object* v_x_2315_, lean_object* v_x_2316_){
_start:
{
size_t v_x_41465__boxed_2317_; uint8_t v_res_2318_; lean_object* v_r_2319_; 
v_x_41465__boxed_2317_ = lean_unbox_usize(v_x_2315_);
lean_dec(v_x_2315_);
v_res_2318_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2313_, v_x_2314_, v_x_41465__boxed_2317_, v_x_2316_);
lean_dec_ref(v_x_2316_);
lean_dec_ref(v_x_2314_);
v_r_2319_ = lean_box(v_res_2318_);
return v_r_2319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(lean_object* v_00_u03b2_2320_, lean_object* v_a_2321_, lean_object* v_x_2322_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_2321_, v_x_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___boxed(lean_object* v_00_u03b2_2324_, lean_object* v_a_2325_, lean_object* v_x_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(v_00_u03b2_2324_, v_a_2325_, v_x_2326_);
lean_dec(v_x_2326_);
lean_dec_ref(v_a_2325_);
return v_res_2327_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object* v_00_u03b2_2328_, lean_object* v_a_2329_, lean_object* v_x_2330_){
_start:
{
uint8_t v___x_2331_; 
v___x_2331_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_2329_, v_x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object* v_00_u03b2_2332_, lean_object* v_a_2333_, lean_object* v_x_2334_){
_start:
{
uint8_t v_res_2335_; lean_object* v_r_2336_; 
v_res_2335_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(v_00_u03b2_2332_, v_a_2333_, v_x_2334_);
lean_dec(v_x_2334_);
lean_dec_ref(v_a_2333_);
v_r_2336_ = lean_box(v_res_2335_);
return v_r_2336_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object* v_00_u03b2_2337_, lean_object* v_data_2338_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_data_2338_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26(lean_object* v_00_u03b2_2340_, lean_object* v_a_2341_, lean_object* v_b_2342_, lean_object* v_x_2343_){
_start:
{
lean_object* v___x_2344_; 
v___x_2344_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_2341_, v_b_2342_, v_x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2345_, lean_object* v_keys_2346_, lean_object* v_vals_2347_, lean_object* v_heq_2348_, lean_object* v_i_2349_, lean_object* v_k_2350_){
_start:
{
uint8_t v___x_2351_; 
v___x_2351_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_2346_, v_i_2349_, v_k_2350_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_2352_, lean_object* v_keys_2353_, lean_object* v_vals_2354_, lean_object* v_heq_2355_, lean_object* v_i_2356_, lean_object* v_k_2357_){
_start:
{
uint8_t v_res_2358_; lean_object* v_r_2359_; 
v_res_2358_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(v_00_u03b2_2352_, v_keys_2353_, v_vals_2354_, v_heq_2355_, v_i_2356_, v_k_2357_);
lean_dec_ref(v_k_2357_);
lean_dec_ref(v_vals_2354_);
lean_dec_ref(v_keys_2353_);
v_r_2359_ = lean_box(v_res_2358_);
return v_r_2359_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27(lean_object* v_00_u03b2_2360_, lean_object* v_i_2361_, lean_object* v_source_2362_, lean_object* v_target_2363_){
_start:
{
lean_object* v___x_2364_; 
v___x_2364_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(v_i_2361_, v_source_2362_, v_target_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28(lean_object* v_00_u03b2_2365_, lean_object* v_x_2366_, lean_object* v_x_2367_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(v_x_2366_, v_x_2367_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object* v_name_2369_, lean_object* v_decl_2370_, lean_object* v_ref_2371_){
_start:
{
lean_object* v_defValue_2373_; lean_object* v_descr_2374_; lean_object* v_deprecation_x3f_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_defValue_2373_ = lean_ctor_get(v_decl_2370_, 0);
v_descr_2374_ = lean_ctor_get(v_decl_2370_, 1);
v_deprecation_x3f_2375_ = lean_ctor_get(v_decl_2370_, 2);
v___x_2376_ = lean_alloc_ctor(1, 0, 1);
v___x_2377_ = lean_unbox(v_defValue_2373_);
lean_ctor_set_uint8(v___x_2376_, 0, v___x_2377_);
lean_inc(v_deprecation_x3f_2375_);
lean_inc_ref(v_descr_2374_);
lean_inc_n(v_name_2369_, 2);
v___x_2378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2378_, 0, v_name_2369_);
lean_ctor_set(v___x_2378_, 1, v_ref_2371_);
lean_ctor_set(v___x_2378_, 2, v___x_2376_);
lean_ctor_set(v___x_2378_, 3, v_descr_2374_);
lean_ctor_set(v___x_2378_, 4, v_deprecation_x3f_2375_);
v___x_2379_ = lean_register_option(v_name_2369_, v___x_2378_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2387_; 
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2387_ == 0)
{
lean_object* v_unused_2388_; 
v_unused_2388_ = lean_ctor_get(v___x_2379_, 0);
lean_dec(v_unused_2388_);
v___x_2381_ = v___x_2379_;
v_isShared_2382_ = v_isSharedCheck_2387_;
goto v_resetjp_2380_;
}
else
{
lean_dec(v___x_2379_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2387_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; lean_object* v___x_2385_; 
lean_inc(v_defValue_2373_);
v___x_2383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2383_, 0, v_name_2369_);
lean_ctor_set(v___x_2383_, 1, v_defValue_2373_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v___x_2383_);
v___x_2385_ = v___x_2381_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___x_2383_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2396_; 
lean_dec(v_name_2369_);
v_a_2389_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2391_ = v___x_2379_;
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2379_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2392_ == 0)
{
v___x_2394_ = v___x_2391_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2389_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_2397_, lean_object* v_decl_2398_, lean_object* v_ref_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v_name_2397_, v_decl_2398_, v_ref_2399_);
lean_dec_ref(v_decl_2398_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2416_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2417_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2418_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2419_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v___x_2416_, v___x_2417_, v___x_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object* v_msg_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
lean_object* v_ref_2428_; lean_object* v___x_2429_; lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2438_; 
v_ref_2428_ = lean_ctor_get(v___y_2425_, 2);
v___x_2429_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msg_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
v_a_2430_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2432_ = v___x_2429_;
v_isShared_2433_ = v_isSharedCheck_2438_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2429_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2438_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2434_; lean_object* v___x_2436_; 
lean_inc(v_ref_2428_);
v___x_2434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2434_, 0, v_ref_2428_);
lean_ctor_set(v___x_2434_, 1, v_a_2430_);
if (v_isShared_2433_ == 0)
{
lean_ctor_set_tag(v___x_2432_, 1);
lean_ctor_set(v___x_2432_, 0, v___x_2434_);
v___x_2436_ = v___x_2432_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object* v_msg_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
return v_res_2445_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4(void){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2453_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3));
v___x_2454_ = l_Lean_stringToMessageData(v___x_2453_);
return v___x_2454_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6(void){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2456_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5));
v___x_2457_ = l_Lean_stringToMessageData(v___x_2456_);
return v___x_2457_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8(void){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2459_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7));
v___x_2460_ = l_Lean_stringToMessageData(v___x_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object* v_expr_2461_, lean_object* v_expectedType_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v___x_2468_; 
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc_ref(v_expr_2461_);
v___x_2468_ = lean_infer_type(v_expr_2461_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_a_2469_; lean_object* v___x_2470_; 
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc_n(v_a_2469_, 2);
lean_dec_ref_known(v___x_2468_, 1);
v___x_2470_ = l_Lean_Meta_getLevel(v_a_2469_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2472_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
lean_inc_ref(v_expectedType_2462_);
v___x_2472_ = l_Lean_Meta_getLevel(v_expectedType_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
lean_inc(v_a_2473_);
lean_dec_ref_known(v___x_2472_, 1);
v___x_2474_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_2475_ = lean_box(0);
v___x_2476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2476_, 0, v_a_2473_);
lean_ctor_set(v___x_2476_, 1, v___x_2475_);
v___x_2477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2477_, 0, v_a_2471_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
lean_inc_ref(v___x_2477_);
v___x_2478_ = l_Lean_mkConst(v___x_2474_, v___x_2477_);
v___x_2479_ = lean_unsigned_to_nat(3u);
v___x_2480_ = lean_mk_empty_array_with_capacity(v___x_2479_);
lean_inc(v_a_2469_);
v___x_2481_ = lean_array_push(v___x_2480_, v_a_2469_);
lean_inc_ref(v_expr_2461_);
v___x_2482_ = lean_array_push(v___x_2481_, v_expr_2461_);
lean_inc_ref(v_expectedType_2462_);
v___x_2483_ = lean_array_push(v___x_2482_, v_expectedType_2462_);
v___x_2484_ = l_Lean_mkAppN(v___x_2478_, v___x_2483_);
lean_dec_ref(v___x_2483_);
v___x_2485_ = lean_box(0);
v___x_2486_ = l_Lean_Meta_trySynthInstance(v___x_2484_, v___x_2485_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2584_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2489_ = v___x_2486_;
v_isShared_2490_ = v_isSharedCheck_2584_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2486_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2584_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
switch(lean_obj_tag(v_a_2487_))
{
case 0:
{
lean_object* v___x_2491_; lean_object* v___x_2493_; 
lean_dec_ref_known(v___x_2477_, 2);
lean_dec(v_a_2469_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v___x_2491_ = lean_box(0);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2491_);
v___x_2493_ = v___x_2489_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2491_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
case 1:
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2579_; 
lean_del_object(v___x_2489_);
v_a_2495_ = lean_ctor_get(v_a_2487_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v_a_2487_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2497_ = v_a_2487_;
v_isShared_2498_ = v_isSharedCheck_2579_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v_a_2487_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2579_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2499_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2));
v___x_2500_ = l_Lean_mkConst(v___x_2499_, v___x_2477_);
v___x_2501_ = lean_unsigned_to_nat(4u);
v___x_2502_ = lean_mk_empty_array_with_capacity(v___x_2501_);
v___x_2503_ = lean_array_push(v___x_2502_, v_a_2469_);
lean_inc_ref(v_expr_2461_);
v___x_2504_ = lean_array_push(v___x_2503_, v_expr_2461_);
lean_inc_ref(v_expectedType_2462_);
v___x_2505_ = lean_array_push(v___x_2504_, v_expectedType_2462_);
v___x_2506_ = lean_array_push(v___x_2505_, v_a_2495_);
v___x_2507_ = l_Lean_mkAppN(v___x_2500_, v___x_2506_);
lean_dec_ref(v___x_2506_);
v___x_2508_ = l_Lean_Meta_expandCoe(v___x_2507_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2570_; 
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2511_ = v___x_2508_;
v_isShared_2512_ = v_isSharedCheck_2570_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2570_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v_fst_2520_; lean_object* v___x_2521_; 
v_fst_2520_ = lean_ctor_get(v_a_2509_, 0);
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc(v_fst_2520_);
v___x_2521_ = lean_infer_type(v_fst_2520_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2523_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
lean_inc_ref(v_expectedType_2462_);
v___x_2523_ = l_Lean_Meta_isExprDefEq(v_a_2522_, v_expectedType_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; uint8_t v___x_2525_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
v___x_2525_ = lean_unbox(v_a_2524_);
lean_dec(v_a_2524_);
if (v___x_2525_ == 0)
{
lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2551_; 
lean_inc(v_fst_2520_);
lean_del_object(v___x_2511_);
lean_del_object(v___x_2497_);
v_isSharedCheck_2551_ = !lean_is_exclusive(v_a_2509_);
if (v_isSharedCheck_2551_ == 0)
{
lean_object* v_unused_2552_; lean_object* v_unused_2553_; 
v_unused_2552_ = lean_ctor_get(v_a_2509_, 1);
lean_dec(v_unused_2552_);
v_unused_2553_ = lean_ctor_get(v_a_2509_, 0);
lean_dec(v_unused_2553_);
v___x_2527_ = v_a_2509_;
v_isShared_2528_ = v_isSharedCheck_2551_;
goto v_resetjp_2526_;
}
else
{
lean_dec(v_a_2509_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2551_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2532_; 
v___x_2529_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4);
v___x_2530_ = l_Lean_indentExpr(v_expr_2461_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set_tag(v___x_2527_, 7);
lean_ctor_set(v___x_2527_, 1, v___x_2530_);
lean_ctor_set(v___x_2527_, 0, v___x_2529_);
v___x_2532_ = v___x_2527_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v___x_2529_);
lean_ctor_set(v_reuseFailAlloc_2550_, 1, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
v___x_2533_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6);
v___x_2534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2532_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = l_Lean_indentExpr(v_expectedType_2462_);
v___x_2536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2534_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v___x_2537_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8);
v___x_2538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2536_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
v___x_2539_ = l_Lean_indentExpr(v_fst_2520_);
v___x_2540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2538_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2540_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2541_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2541_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
else
{
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
goto v___jp_2513_;
}
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_del_object(v___x_2511_);
lean_dec(v_a_2509_);
lean_del_object(v___x_2497_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2554_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2523_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2523_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_del_object(v___x_2511_);
lean_dec(v_a_2509_);
lean_del_object(v___x_2497_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2562_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2521_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2521_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
v___jp_2513_:
{
lean_object* v___x_2515_; 
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v_a_2509_);
v___x_2515_ = v___x_2497_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2509_);
v___x_2515_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
lean_object* v___x_2517_; 
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2515_);
v___x_2517_ = v___x_2511_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
lean_del_object(v___x_2497_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2571_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2508_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2508_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
}
default: 
{
lean_object* v___x_2580_; lean_object* v___x_2582_; 
lean_dec_ref_known(v___x_2477_, 2);
lean_dec(v_a_2469_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v___x_2580_ = lean_box(2);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2580_);
v___x_2582_ = v___x_2489_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
lean_dec_ref_known(v___x_2477_, 2);
lean_dec(v_a_2469_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2585_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2587_ = v___x_2486_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2486_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v_a_2471_);
lean_dec(v_a_2469_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2593_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2472_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2472_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec(v_a_2469_);
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2601_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2470_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2470_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
lean_dec_ref(v_expectedType_2462_);
lean_dec_ref(v_expr_2461_);
v_a_2609_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2468_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2468_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object* v_expr_2617_, lean_object* v_expectedType_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2617_, v_expectedType_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object* v_00_u03b1_2625_, lean_object* v_msg_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object* v_00_u03b1_2633_, lean_object* v_msg_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(v_00_u03b1_2633_, v_msg_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object* v_expr_2641_, lean_object* v_expectedType_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2641_, v_expectedType_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2673_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2651_ = v___x_2648_;
v_isShared_2652_ = v_isSharedCheck_2673_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2648_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2673_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
switch(lean_obj_tag(v_a_2649_))
{
case 0:
{
lean_object* v___x_2653_; lean_object* v___x_2655_; 
v___x_2653_ = lean_box(0);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2653_);
v___x_2655_ = v___x_2651_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v___x_2653_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
case 1:
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2668_; 
v_a_2657_ = lean_ctor_get(v_a_2649_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v_a_2649_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2659_ = v_a_2649_;
v_isShared_2660_ = v_isSharedCheck_2668_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v_a_2649_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2668_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v_fst_2661_; lean_object* v___x_2663_; 
v_fst_2661_ = lean_ctor_get(v_a_2657_, 0);
lean_inc(v_fst_2661_);
lean_dec(v_a_2657_);
if (v_isShared_2660_ == 0)
{
lean_ctor_set(v___x_2659_, 0, v_fst_2661_);
v___x_2663_ = v___x_2659_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_fst_2661_);
v___x_2663_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
lean_object* v___x_2665_; 
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2663_);
v___x_2665_ = v___x_2651_;
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
default: 
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = lean_box(2);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2669_);
v___x_2671_ = v___x_2651_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
v_a_2674_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2648_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2648_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object* v_expr_2682_, lean_object* v_expectedType_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lean_Meta_coerceSimple_x3f(v_expr_2682_, v_expectedType_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
return v_res_2689_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__4(void){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2697_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__3));
v___x_2698_ = l_Lean_stringToMessageData(v___x_2697_);
return v___x_2698_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__6(void){
_start:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2700_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__5));
v___x_2701_ = l_Lean_stringToMessageData(v___x_2700_);
return v___x_2701_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__8(void){
_start:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2703_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__7));
v___x_2704_ = l_Lean_stringToMessageData(v___x_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object* v_expr_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v___x_2711_; 
lean_inc(v___y_2709_);
lean_inc_ref(v___y_2708_);
lean_inc(v___y_2707_);
lean_inc_ref(v___y_2706_);
lean_inc_ref(v_expr_2705_);
v___x_2711_ = lean_infer_type(v_expr_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2713_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc_n(v_a_2712_, 2);
lean_dec_ref_known(v___x_2711_, 1);
v___x_2713_ = l_Lean_Meta_getLevel(v_a_2712_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_object* v_a_2714_; lean_object* v___x_2715_; 
v_a_2714_ = lean_ctor_get(v___x_2713_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v___x_2713_, 1);
v___x_2715_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v_a_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v_a_2716_ = lean_ctor_get(v___x_2715_, 0);
lean_inc_n(v_a_2716_, 2);
lean_dec_ref_known(v___x_2715_, 1);
v___x_2717_ = l_Lean_mkSort(v_a_2716_);
lean_inc(v_a_2712_);
v___x_2718_ = l_Lean_mkArrow(v_a_2712_, v___x_2717_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2718_) == 0)
{
lean_object* v_a_2719_; lean_object* v___x_2720_; uint8_t v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
lean_inc(v_a_2719_);
lean_dec_ref_known(v___x_2718_, 1);
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v_a_2719_);
v___x_2721_ = 0;
v___x_2722_ = lean_box(0);
v___x_2723_ = l_Lean_Meta_mkFreshExprMVar(v___x_2720_, v___x_2721_, v___x_2722_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2723_) == 0)
{
lean_object* v_a_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
v_a_2724_ = lean_ctor_get(v___x_2723_, 0);
lean_inc_n(v_a_2724_, 2);
lean_dec_ref_known(v___x_2723_, 1);
v___x_2725_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__1));
v___x_2726_ = lean_box(0);
v___x_2727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2727_, 0, v_a_2716_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
v___x_2728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2728_, 0, v_a_2714_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
lean_inc_ref(v___x_2728_);
v___x_2729_ = l_Lean_Expr_const___override(v___x_2725_, v___x_2728_);
lean_inc(v_a_2712_);
v___x_2730_ = l_Lean_mkAppB(v___x_2729_, v_a_2712_, v_a_2724_);
v___x_2731_ = lean_box(0);
v___x_2732_ = l_Lean_Meta_trySynthInstance(v___x_2730_, v___x_2731_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2819_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2819_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2819_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
if (lean_obj_tag(v_a_2733_) == 1)
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2815_; 
lean_del_object(v___x_2735_);
v_a_2737_ = lean_ctor_get(v_a_2733_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v_a_2733_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2739_ = v_a_2733_;
v_isShared_2740_ = v_isSharedCheck_2815_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v_a_2733_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2815_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2741_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__2));
v___x_2742_ = l_Lean_Expr_const___override(v___x_2741_, v___x_2728_);
lean_inc_ref(v_expr_2705_);
lean_inc(v_a_2737_);
v___x_2743_ = l_Lean_mkApp4(v___x_2742_, v_a_2712_, v_a_2724_, v_a_2737_, v_expr_2705_);
v___x_2744_ = l_Lean_Meta_expandCoe(v___x_2743_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2806_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2747_ = v___x_2744_;
v_isShared_2748_ = v_isSharedCheck_2806_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2744_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2806_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v_fst_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2804_; 
v_fst_2749_ = lean_ctor_get(v_a_2745_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v_a_2745_);
if (v_isSharedCheck_2804_ == 0)
{
lean_object* v_unused_2805_; 
v_unused_2805_ = lean_ctor_get(v_a_2745_, 1);
lean_dec(v_unused_2805_);
v___x_2751_ = v_a_2745_;
v_isShared_2752_ = v_isSharedCheck_2804_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_fst_2749_);
lean_dec(v_a_2745_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2804_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2760_; 
lean_inc(v___y_2709_);
lean_inc_ref(v___y_2708_);
lean_inc(v___y_2707_);
lean_inc_ref(v___y_2706_);
lean_inc(v_fst_2749_);
v___x_2760_ = lean_infer_type(v_fst_2749_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref_known(v___x_2760_, 1);
lean_inc(v___y_2709_);
lean_inc_ref(v___y_2708_);
lean_inc(v___y_2707_);
lean_inc_ref(v___y_2706_);
v___x_2762_ = lean_whnf(v_a_2761_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v_a_2763_; uint8_t v___x_2764_; 
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
lean_inc(v_a_2763_);
lean_dec_ref_known(v___x_2762_, 1);
v___x_2764_ = l_Lean_Expr_isForall(v_a_2763_);
lean_dec(v_a_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2768_; 
lean_del_object(v___x_2747_);
lean_del_object(v___x_2739_);
v___x_2765_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2766_ = l_Lean_indentExpr(v_expr_2705_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set_tag(v___x_2751_, 7);
lean_ctor_set(v___x_2751_, 1, v___x_2766_);
lean_ctor_set(v___x_2751_, 0, v___x_2765_);
v___x_2768_ = v___x_2751_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___x_2765_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v___x_2766_);
v___x_2768_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
v___x_2769_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__6, &l_Lean_Meta_coerceToFunction_x3f___closed__6_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__6);
v___x_2770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2768_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = l_Lean_indentExpr(v_fst_2749_);
v___x_2772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2770_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__8, &l_Lean_Meta_coerceToFunction_x3f___closed__8_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__8);
v___x_2774_ = l_Lean_indentExpr(v_a_2737_);
v___x_2775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
v___x_2776_ = l_Lean_MessageData_hint_x27(v___x_2775_);
v___x_2777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2772_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2777_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2778_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2778_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
else
{
lean_del_object(v___x_2751_);
lean_dec(v_a_2737_);
lean_dec_ref(v_expr_2705_);
goto v___jp_2753_;
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_del_object(v___x_2751_);
lean_dec(v_fst_2749_);
lean_del_object(v___x_2747_);
lean_del_object(v___x_2739_);
lean_dec(v_a_2737_);
lean_dec_ref(v_expr_2705_);
v_a_2788_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2762_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2762_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_del_object(v___x_2751_);
lean_dec(v_fst_2749_);
lean_del_object(v___x_2747_);
lean_del_object(v___x_2739_);
lean_dec(v_a_2737_);
lean_dec_ref(v_expr_2705_);
v_a_2796_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2760_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2760_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
v___jp_2753_:
{
lean_object* v___x_2755_; 
if (v_isShared_2740_ == 0)
{
lean_ctor_set(v___x_2739_, 0, v_fst_2749_);
v___x_2755_ = v___x_2739_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_fst_2749_);
v___x_2755_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
lean_object* v___x_2757_; 
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 0, v___x_2755_);
v___x_2757_ = v___x_2747_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_del_object(v___x_2739_);
lean_dec(v_a_2737_);
lean_dec_ref(v_expr_2705_);
v_a_2807_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2744_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2744_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
else
{
lean_object* v___x_2817_; 
lean_dec(v_a_2733_);
lean_dec_ref_known(v___x_2728_, 2);
lean_dec(v_a_2724_);
lean_dec(v_a_2712_);
lean_dec_ref(v_expr_2705_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2731_);
v___x_2817_ = v___x_2735_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v___x_2731_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec_ref_known(v___x_2728_, 2);
lean_dec(v_a_2724_);
lean_dec(v_a_2712_);
lean_dec_ref(v_expr_2705_);
v_a_2820_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2732_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2732_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec(v_a_2716_);
lean_dec(v_a_2714_);
lean_dec(v_a_2712_);
lean_dec_ref(v_expr_2705_);
v_a_2828_ = lean_ctor_get(v___x_2723_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2723_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2723_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
lean_dec(v_a_2716_);
lean_dec(v_a_2714_);
lean_dec(v_a_2712_);
lean_dec_ref(v_expr_2705_);
v_a_2836_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___x_2718_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2718_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_dec(v_a_2714_);
lean_dec(v_a_2712_);
lean_dec_ref(v_expr_2705_);
v_a_2844_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2715_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2715_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec(v_a_2712_);
lean_dec_ref(v_expr_2705_);
v_a_2852_ = lean_ctor_get(v___x_2713_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2713_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2713_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec_ref(v_expr_2705_);
v_a_2860_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2711_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2711_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object* v_expr_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
return v_res_2874_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__4(void){
_start:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__3));
v___x_2883_ = l_Lean_stringToMessageData(v___x_2882_);
return v___x_2883_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__6(void){
_start:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__5));
v___x_2886_ = l_Lean_stringToMessageData(v___x_2885_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object* v_expr_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v___x_2893_; 
lean_inc(v___y_2891_);
lean_inc_ref(v___y_2890_);
lean_inc(v___y_2889_);
lean_inc_ref(v___y_2888_);
lean_inc_ref(v_expr_2887_);
v___x_2893_ = lean_infer_type(v_expr_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v___x_2895_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc_n(v_a_2894_, 2);
lean_dec_ref_known(v___x_2893_, 1);
v___x_2895_ = l_Lean_Meta_getLevel(v_a_2894_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2897_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
v___x_2897_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; uint8_t v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc_n(v_a_2898_, 2);
lean_dec_ref_known(v___x_2897_, 1);
v___x_2899_ = l_Lean_mkSort(v_a_2898_);
v___x_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
v___x_2901_ = 0;
v___x_2902_ = lean_box(0);
v___x_2903_ = l_Lean_Meta_mkFreshExprMVar(v___x_2900_, v___x_2901_, v___x_2902_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc_n(v_a_2904_, 2);
lean_dec_ref_known(v___x_2903_, 1);
v___x_2905_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__1));
v___x_2906_ = lean_box(0);
v___x_2907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2907_, 0, v_a_2898_);
lean_ctor_set(v___x_2907_, 1, v___x_2906_);
v___x_2908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2908_, 0, v_a_2896_);
lean_ctor_set(v___x_2908_, 1, v___x_2907_);
lean_inc_ref(v___x_2908_);
v___x_2909_ = l_Lean_Expr_const___override(v___x_2905_, v___x_2908_);
lean_inc(v_a_2894_);
v___x_2910_ = l_Lean_mkAppB(v___x_2909_, v_a_2894_, v_a_2904_);
v___x_2911_ = lean_box(0);
v___x_2912_ = l_Lean_Meta_trySynthInstance(v___x_2910_, v___x_2911_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2999_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2915_ = v___x_2912_;
v_isShared_2916_ = v_isSharedCheck_2999_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2912_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2999_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
if (lean_obj_tag(v_a_2913_) == 1)
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2995_; 
lean_del_object(v___x_2915_);
v_a_2917_ = lean_ctor_get(v_a_2913_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v_a_2913_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2919_ = v_a_2913_;
v_isShared_2920_ = v_isSharedCheck_2995_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v_a_2913_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2995_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2921_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__2));
v___x_2922_ = l_Lean_Expr_const___override(v___x_2921_, v___x_2908_);
lean_inc_ref(v_expr_2887_);
lean_inc(v_a_2917_);
v___x_2923_ = l_Lean_mkApp4(v___x_2922_, v_a_2894_, v_a_2904_, v_a_2917_, v_expr_2887_);
v___x_2924_ = l_Lean_Meta_expandCoe(v___x_2923_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2986_; 
v_a_2925_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2927_ = v___x_2924_;
v_isShared_2928_ = v_isSharedCheck_2986_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2924_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2986_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v_fst_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2984_; 
v_fst_2929_ = lean_ctor_get(v_a_2925_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v_a_2925_);
if (v_isSharedCheck_2984_ == 0)
{
lean_object* v_unused_2985_; 
v_unused_2985_ = lean_ctor_get(v_a_2925_, 1);
lean_dec(v_unused_2985_);
v___x_2931_ = v_a_2925_;
v_isShared_2932_ = v_isSharedCheck_2984_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_fst_2929_);
lean_dec(v_a_2925_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2984_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2940_; 
lean_inc(v___y_2891_);
lean_inc_ref(v___y_2890_);
lean_inc(v___y_2889_);
lean_inc_ref(v___y_2888_);
lean_inc(v_fst_2929_);
v___x_2940_ = lean_infer_type(v_fst_2929_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2942_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v___x_2940_, 1);
lean_inc(v___y_2891_);
lean_inc_ref(v___y_2890_);
lean_inc(v___y_2889_);
lean_inc_ref(v___y_2888_);
v___x_2942_ = lean_whnf(v_a_2941_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; uint8_t v___x_2944_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2944_ = l_Lean_Expr_isSort(v_a_2943_);
lean_dec(v_a_2943_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2948_; 
lean_del_object(v___x_2927_);
lean_del_object(v___x_2919_);
v___x_2945_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2946_ = l_Lean_indentExpr(v_expr_2887_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set_tag(v___x_2931_, 7);
lean_ctor_set(v___x_2931_, 1, v___x_2946_);
lean_ctor_set(v___x_2931_, 0, v___x_2945_);
v___x_2948_ = v___x_2931_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2945_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v___x_2946_);
v___x_2948_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
v___x_2949_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__4, &l_Lean_Meta_coerceToSort_x3f___closed__4_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__4);
v___x_2950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2949_);
v___x_2951_ = l_Lean_indentExpr(v_fst_2929_);
v___x_2952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2950_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__6, &l_Lean_Meta_coerceToSort_x3f___closed__6_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__6);
v___x_2954_ = l_Lean_indentExpr(v_a_2917_);
v___x_2955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2953_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
v___x_2956_ = l_Lean_MessageData_hint_x27(v___x_2955_);
v___x_2957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2952_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2957_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2958_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2958_);
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
lean_del_object(v___x_2931_);
lean_dec(v_a_2917_);
lean_dec_ref(v_expr_2887_);
goto v___jp_2933_;
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
lean_del_object(v___x_2931_);
lean_dec(v_fst_2929_);
lean_del_object(v___x_2927_);
lean_del_object(v___x_2919_);
lean_dec(v_a_2917_);
lean_dec_ref(v_expr_2887_);
v_a_2968_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2942_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2942_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
else
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2983_; 
lean_del_object(v___x_2931_);
lean_dec(v_fst_2929_);
lean_del_object(v___x_2927_);
lean_del_object(v___x_2919_);
lean_dec(v_a_2917_);
lean_dec_ref(v_expr_2887_);
v_a_2976_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2978_ = v___x_2940_;
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2940_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_a_2976_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
v___jp_2933_:
{
lean_object* v___x_2935_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 0, v_fst_2929_);
v___x_2935_ = v___x_2919_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_fst_2929_);
v___x_2935_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
lean_object* v___x_2937_; 
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 0, v___x_2935_);
v___x_2937_ = v___x_2927_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v___x_2935_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
lean_del_object(v___x_2919_);
lean_dec(v_a_2917_);
lean_dec_ref(v_expr_2887_);
v_a_2987_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___x_2924_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___x_2924_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
}
else
{
lean_object* v___x_2997_; 
lean_dec(v_a_2913_);
lean_dec_ref_known(v___x_2908_, 2);
lean_dec(v_a_2904_);
lean_dec(v_a_2894_);
lean_dec_ref(v_expr_2887_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2911_);
v___x_2997_ = v___x_2915_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2911_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
lean_dec_ref_known(v___x_2908_, 2);
lean_dec(v_a_2904_);
lean_dec(v_a_2894_);
lean_dec_ref(v_expr_2887_);
v_a_3000_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2912_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2912_);
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
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec(v_a_2898_);
lean_dec(v_a_2896_);
lean_dec(v_a_2894_);
lean_dec_ref(v_expr_2887_);
v_a_3008_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2903_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2903_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec(v_a_2896_);
lean_dec(v_a_2894_);
lean_dec_ref(v_expr_2887_);
v_a_3016_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_2897_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_2897_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_dec(v_a_2894_);
lean_dec_ref(v_expr_2887_);
v_a_3024_ = lean_ctor_get(v___x_2895_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_2895_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_2895_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_dec_ref(v_expr_2887_);
v_a_3032_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_2893_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_2893_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object* v_expr_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v_res_3046_; 
v_res_3046_ = l_Lean_Meta_coerceToSort_x3f(v_expr_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object* v_e_3047_, lean_object* v___y_3048_){
_start:
{
uint8_t v___x_3050_; 
v___x_3050_ = l_Lean_Expr_hasMVar(v_e_3047_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; 
v___x_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3051_, 0, v_e_3047_);
return v___x_3051_;
}
else
{
lean_object* v___x_3052_; lean_object* v_mctx_3053_; lean_object* v___x_3054_; lean_object* v_fst_3055_; lean_object* v_snd_3056_; lean_object* v___x_3057_; lean_object* v_cache_3058_; lean_object* v_zetaDeltaFVarIds_3059_; lean_object* v_postponed_3060_; lean_object* v_diag_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3070_; 
v___x_3052_ = lean_st_ref_get(v___y_3048_);
v_mctx_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc_ref(v_mctx_3053_);
lean_dec(v___x_3052_);
v___x_3054_ = l_Lean_instantiateMVarsCore(v_mctx_3053_, v_e_3047_);
v_fst_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_fst_3055_);
v_snd_3056_ = lean_ctor_get(v___x_3054_, 1);
lean_inc(v_snd_3056_);
lean_dec_ref(v___x_3054_);
v___x_3057_ = lean_st_ref_take(v___y_3048_);
v_cache_3058_ = lean_ctor_get(v___x_3057_, 1);
v_zetaDeltaFVarIds_3059_ = lean_ctor_get(v___x_3057_, 2);
v_postponed_3060_ = lean_ctor_get(v___x_3057_, 3);
v_diag_3061_ = lean_ctor_get(v___x_3057_, 4);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; 
v_unused_3071_ = lean_ctor_get(v___x_3057_, 0);
lean_dec(v_unused_3071_);
v___x_3063_ = v___x_3057_;
v_isShared_3064_ = v_isSharedCheck_3070_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_diag_3061_);
lean_inc(v_postponed_3060_);
lean_inc(v_zetaDeltaFVarIds_3059_);
lean_inc(v_cache_3058_);
lean_dec(v___x_3057_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3070_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
lean_ctor_set(v___x_3063_, 0, v_snd_3056_);
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_snd_3056_);
lean_ctor_set(v_reuseFailAlloc_3069_, 1, v_cache_3058_);
lean_ctor_set(v_reuseFailAlloc_3069_, 2, v_zetaDeltaFVarIds_3059_);
lean_ctor_set(v_reuseFailAlloc_3069_, 3, v_postponed_3060_);
lean_ctor_set(v_reuseFailAlloc_3069_, 4, v_diag_3061_);
v___x_3066_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3067_ = lean_st_ref_put(v___y_3048_, v___x_3066_);
v___x_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3068_, 0, v_fst_3055_);
return v___x_3068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object* v_e_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3072_, v___y_3073_);
lean_dec(v___y_3073_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object* v_e_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3076_, v___y_3078_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object* v_e_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(v_e_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object* v_type_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v___y_3097_; lean_object* v___x_3136_; uint8_t v_transparency_3137_; uint8_t v___x_3138_; uint8_t v___x_3139_; 
v___x_3136_ = l_Lean_Meta_Context_config(v___y_3091_);
v_transparency_3137_ = lean_ctor_get_uint8(v___x_3136_, 9);
lean_dec_ref(v___x_3136_);
v___x_3138_ = 2;
v___x_3139_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3137_, v___x_3138_);
if (v___x_3139_ == 0)
{
lean_object* v_keyedConfig_3140_; uint8_t v_trackZetaDelta_3141_; lean_object* v_zetaDeltaSet_3142_; lean_object* v_lctx_3143_; lean_object* v_localInstances_3144_; lean_object* v_defEqCtx_x3f_3145_; lean_object* v_synthPendingDepth_3146_; lean_object* v_customCanUnfoldPredicate_x3f_3147_; uint8_t v_univApprox_3148_; uint8_t v_inTypeClassResolution_3149_; uint8_t v_cacheInferType_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v_keyedConfig_3140_ = lean_ctor_get(v___y_3091_, 0);
v_trackZetaDelta_3141_ = lean_ctor_get_uint8(v___y_3091_, sizeof(void*)*7);
v_zetaDeltaSet_3142_ = lean_ctor_get(v___y_3091_, 1);
v_lctx_3143_ = lean_ctor_get(v___y_3091_, 2);
v_localInstances_3144_ = lean_ctor_get(v___y_3091_, 3);
v_defEqCtx_x3f_3145_ = lean_ctor_get(v___y_3091_, 4);
v_synthPendingDepth_3146_ = lean_ctor_get(v___y_3091_, 5);
v_customCanUnfoldPredicate_x3f_3147_ = lean_ctor_get(v___y_3091_, 6);
v_univApprox_3148_ = lean_ctor_get_uint8(v___y_3091_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3149_ = lean_ctor_get_uint8(v___y_3091_, sizeof(void*)*7 + 2);
v_cacheInferType_3150_ = lean_ctor_get_uint8(v___y_3091_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3140_);
v___x_3151_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3138_, v_keyedConfig_3140_);
lean_inc(v_customCanUnfoldPredicate_x3f_3147_);
lean_inc(v_synthPendingDepth_3146_);
lean_inc(v_defEqCtx_x3f_3145_);
lean_inc_ref(v_localInstances_3144_);
lean_inc_ref(v_lctx_3143_);
lean_inc(v_zetaDeltaSet_3142_);
v___x_3152_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
lean_ctor_set(v___x_3152_, 1, v_zetaDeltaSet_3142_);
lean_ctor_set(v___x_3152_, 2, v_lctx_3143_);
lean_ctor_set(v___x_3152_, 3, v_localInstances_3144_);
lean_ctor_set(v___x_3152_, 4, v_defEqCtx_x3f_3145_);
lean_ctor_set(v___x_3152_, 5, v_synthPendingDepth_3146_);
lean_ctor_set(v___x_3152_, 6, v_customCanUnfoldPredicate_x3f_3147_);
lean_ctor_set_uint8(v___x_3152_, sizeof(void*)*7, v_trackZetaDelta_3141_);
lean_ctor_set_uint8(v___x_3152_, sizeof(void*)*7 + 1, v_univApprox_3148_);
lean_ctor_set_uint8(v___x_3152_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3149_);
lean_ctor_set_uint8(v___x_3152_, sizeof(void*)*7 + 3, v_cacheInferType_3150_);
lean_inc(v___y_3094_);
lean_inc_ref(v___y_3093_);
lean_inc(v___y_3092_);
v___x_3153_ = lean_whnf(v_type_3090_, v___x_3152_, v___y_3092_, v___y_3093_, v___y_3094_);
v___y_3097_ = v___x_3153_;
goto v___jp_3096_;
}
else
{
lean_object* v___x_3154_; 
lean_inc(v___y_3094_);
lean_inc_ref(v___y_3093_);
lean_inc(v___y_3092_);
lean_inc_ref(v___y_3091_);
v___x_3154_ = lean_whnf(v_type_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_);
v___y_3097_ = v___x_3154_;
goto v___jp_3096_;
}
v___jp_3096_:
{
if (lean_obj_tag(v___y_3097_) == 0)
{
lean_object* v_a_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3127_; 
v_a_3098_ = lean_ctor_get(v___y_3097_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___y_3097_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3100_ = v___y_3097_;
v_isShared_3101_ = v_isSharedCheck_3127_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_a_3098_);
lean_dec(v___y_3097_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3127_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
if (lean_obj_tag(v_a_3098_) == 5)
{
lean_object* v_fn_3102_; lean_object* v_arg_3103_; lean_object* v___x_3104_; lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3122_; 
lean_del_object(v___x_3100_);
v_fn_3102_ = lean_ctor_get(v_a_3098_, 0);
lean_inc_ref(v_fn_3102_);
v_arg_3103_ = lean_ctor_get(v_a_3098_, 1);
lean_inc_ref(v_arg_3103_);
lean_dec_ref_known(v_a_3098_, 2);
v___x_3104_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_fn_3102_, v___y_3092_);
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3107_ = v___x_3104_;
v_isShared_3108_ = v_isSharedCheck_3122_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3122_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3109_; lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3121_; 
v___x_3109_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_arg_3103_, v___y_3092_);
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3112_ = v___x_3109_;
v_isShared_3113_ = v_isSharedCheck_3121_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3109_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3121_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3114_; lean_object* v___x_3116_; 
v___x_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3114_, 0, v_a_3105_);
lean_ctor_set(v___x_3114_, 1, v_a_3110_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set_tag(v___x_3107_, 1);
lean_ctor_set(v___x_3107_, 0, v___x_3114_);
v___x_3116_ = v___x_3107_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v___x_3114_);
v___x_3116_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3118_; 
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v___x_3116_);
v___x_3118_ = v___x_3112_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3125_; 
lean_dec(v_a_3098_);
v___x_3123_ = lean_box(0);
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 0, v___x_3123_);
v___x_3125_ = v___x_3100_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
v_a_3128_ = lean_ctor_get(v___y_3097_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___y_3097_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___y_3097_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___y_3097_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object* v_type_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Lean_Meta_isTypeApp_x3f(v_type_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object* v_type_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = l_Lean_Meta_isTypeApp_x3f(v_type_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3204_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3204_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3204_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3204_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
if (lean_obj_tag(v_a_3169_) == 1)
{
lean_object* v_val_3173_; lean_object* v_fst_3174_; lean_object* v___x_3175_; 
lean_del_object(v___x_3171_);
v_val_3173_ = lean_ctor_get(v_a_3169_, 0);
lean_inc(v_val_3173_);
lean_dec_ref_known(v_a_3169_, 1);
v_fst_3174_ = lean_ctor_get(v_val_3173_, 0);
lean_inc(v_fst_3174_);
lean_dec(v_val_3173_);
v___x_3175_ = l_Lean_Meta_isMonad_x3f(v_fst_3174_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3190_; 
v_a_3176_ = lean_ctor_get(v___x_3175_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3178_ = v___x_3175_;
v_isShared_3179_ = v_isSharedCheck_3190_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_dec(v___x_3175_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3190_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
if (lean_obj_tag(v_a_3176_) == 0)
{
uint8_t v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3183_; 
v___x_3180_ = 0;
v___x_3181_ = lean_box(v___x_3180_);
if (v_isShared_3179_ == 0)
{
lean_ctor_set(v___x_3178_, 0, v___x_3181_);
v___x_3183_ = v___x_3178_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___x_3181_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
else
{
uint8_t v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3188_; 
lean_dec_ref_known(v_a_3176_, 1);
v___x_3185_ = 1;
v___x_3186_ = lean_box(v___x_3185_);
if (v_isShared_3179_ == 0)
{
lean_ctor_set(v___x_3178_, 0, v___x_3186_);
v___x_3188_ = v___x_3178_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v___x_3186_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
v_a_3191_ = lean_ctor_get(v___x_3175_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3175_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3175_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
else
{
uint8_t v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3202_; 
lean_dec(v_a_3169_);
v___x_3199_ = 0;
v___x_3200_ = lean_box(v___x_3199_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3200_);
v___x_3202_ = v___x_3171_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v___x_3200_);
v___x_3202_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
return v___x_3202_;
}
}
}
}
else
{
lean_object* v_a_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3212_; 
v_a_3205_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3207_ = v___x_3168_;
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_a_3205_);
lean_dec(v___x_3168_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object* v_type_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_Lean_Meta_isMonadApp(v_type_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
return v_res_3219_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object* v_opts_3220_, lean_object* v_opt_3221_){
_start:
{
lean_object* v_name_3222_; lean_object* v_defValue_3223_; lean_object* v_map_3224_; lean_object* v___x_3225_; 
v_name_3222_ = lean_ctor_get(v_opt_3221_, 0);
v_defValue_3223_ = lean_ctor_get(v_opt_3221_, 1);
v_map_3224_ = lean_ctor_get(v_opts_3220_, 0);
v___x_3225_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3224_, v_name_3222_);
if (lean_obj_tag(v___x_3225_) == 0)
{
uint8_t v___x_3226_; 
v___x_3226_ = lean_unbox(v_defValue_3223_);
return v___x_3226_;
}
else
{
lean_object* v_val_3227_; 
v_val_3227_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_val_3227_);
lean_dec_ref_known(v___x_3225_, 1);
if (lean_obj_tag(v_val_3227_) == 1)
{
uint8_t v_v_3228_; 
v_v_3228_ = lean_ctor_get_uint8(v_val_3227_, 0);
lean_dec_ref_known(v_val_3227_, 0);
return v_v_3228_;
}
else
{
uint8_t v___x_3229_; 
lean_dec(v_val_3227_);
v___x_3229_ = lean_unbox(v_defValue_3223_);
return v___x_3229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object* v_opts_3230_, lean_object* v_opt_3231_){
_start:
{
uint8_t v_res_3232_; lean_object* v_r_3233_; 
v_res_3232_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_opts_3230_, v_opt_3231_);
lean_dec_ref(v_opt_3231_);
lean_dec_ref(v_opts_3230_);
v_r_3233_ = lean_box(v_res_3232_);
return v_r_3233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object* v_x_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3242_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0));
v___x_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object* v_x_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_x_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec_ref(v_x_3244_);
return v_res_3250_;
}
}
static lean_object* _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6(void){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = lean_unsigned_to_nat(0u);
v___x_3261_ = l_Lean_mkBVar(v___x_3260_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object* v_e_3273_, lean_object* v_expectedType_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v___y_3281_; uint8_t v___y_3282_; lean_object* v_a_3287_; lean_object* v___y_3291_; lean_object* v___x_3301_; lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3706_; 
v___x_3301_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_expectedType_3274_, v___y_3276_);
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3304_ = v___x_3301_;
v_isShared_3305_ = v_isSharedCheck_3706_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3301_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3706_;
goto v_resetjp_3303_;
}
v___jp_3280_:
{
if (v___y_3282_ == 0)
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
lean_dec_ref(v___y_3281_);
v___x_3283_ = lean_box(0);
v___x_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3283_);
return v___x_3284_;
}
else
{
lean_object* v___x_3285_; 
v___x_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3285_, 0, v___y_3281_);
return v___x_3285_;
}
}
v___jp_3286_:
{
uint8_t v___x_3288_; 
v___x_3288_ = l_Lean_Exception_isInterrupt(v_a_3287_);
if (v___x_3288_ == 0)
{
uint8_t v___x_3289_; 
lean_inc_ref(v_a_3287_);
v___x_3289_ = l_Lean_Exception_isRuntime(v_a_3287_);
v___y_3281_ = v_a_3287_;
v___y_3282_ = v___x_3289_;
goto v___jp_3280_;
}
else
{
v___y_3281_ = v_a_3287_;
v___y_3282_ = v___x_3288_;
goto v___jp_3280_;
}
}
v___jp_3290_:
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3300_; 
v_a_3292_ = lean_ctor_get(v___y_3291_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___y_3291_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3294_ = v___y_3291_;
v_isShared_3295_ = v_isSharedCheck_3300_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___y_3291_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3300_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v_a_3296_; lean_object* v___x_3298_; 
v_a_3296_ = lean_ctor_get(v_a_3292_, 0);
lean_inc(v_a_3296_);
lean_dec(v_a_3292_);
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
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; 
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
lean_inc_ref(v_e_3273_);
v___x_3306_ = lean_infer_type(v_e_3273_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3308_; lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3697_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_a_3307_, v___y_3276_);
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3697_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3697_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; 
lean_inc(v_a_3302_);
v___x_3313_ = l_Lean_Meta_isTypeApp_x3f(v_a_3302_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3688_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3316_ = v___x_3313_;
v_isShared_3317_ = v_isSharedCheck_3688_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3313_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3688_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
if (lean_obj_tag(v_a_3314_) == 1)
{
lean_object* v_val_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3683_; 
lean_del_object(v___x_3316_);
v_val_3318_ = lean_ctor_get(v_a_3314_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v_a_3314_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3320_ = v_a_3314_;
v_isShared_3321_ = v_isSharedCheck_3683_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_val_3318_);
lean_dec(v_a_3314_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3683_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v_fst_3322_; lean_object* v_snd_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3682_; 
v_fst_3322_ = lean_ctor_get(v_val_3318_, 0);
v_snd_3323_ = lean_ctor_get(v_val_3318_, 1);
v_isSharedCheck_3682_ = !lean_is_exclusive(v_val_3318_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3325_ = v_val_3318_;
v_isShared_3326_ = v_isSharedCheck_3682_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_snd_3323_);
lean_inc(v_fst_3322_);
lean_dec(v_val_3318_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3682_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3327_; 
lean_inc(v_a_3309_);
v___x_3327_ = l_Lean_Meta_isTypeApp_x3f(v_a_3309_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3673_; 
v_a_3328_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3330_ = v___x_3327_;
v_isShared_3331_ = v_isSharedCheck_3673_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3327_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3673_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
if (lean_obj_tag(v_a_3328_) == 1)
{
lean_object* v_val_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3668_; 
lean_del_object(v___x_3330_);
v_val_3332_ = lean_ctor_get(v_a_3328_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v_a_3328_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3334_ = v_a_3328_;
v_isShared_3335_ = v_isSharedCheck_3668_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_val_3332_);
lean_dec(v_a_3328_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3668_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v_fst_3336_; lean_object* v_snd_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3667_; 
v_fst_3336_ = lean_ctor_get(v_val_3332_, 0);
v_snd_3337_ = lean_ctor_get(v_val_3332_, 1);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_val_3332_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3339_ = v_val_3332_;
v_isShared_3340_ = v_isSharedCheck_3667_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_snd_3337_);
lean_inc(v_fst_3336_);
lean_dec(v_val_3332_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3667_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3341_; 
v___x_3341_ = l_Lean_Meta_saveState___redArg(v___y_3276_, v___y_3278_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v_a_3342_; lean_object* v___x_3343_; 
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
lean_inc(v_a_3342_);
lean_dec_ref_known(v___x_3341_, 1);
lean_inc(v_fst_3322_);
lean_inc(v_fst_3336_);
v___x_3343_ = l_Lean_Meta_isExprDefEq(v_fst_3336_, v_fst_3322_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3650_; 
v_a_3344_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3346_ = v___x_3343_;
v_isShared_3347_ = v_isSharedCheck_3650_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v___x_3343_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3650_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
uint8_t v___x_3348_; 
v___x_3348_ = lean_unbox(v_a_3344_);
lean_dec(v_a_3344_);
if (v___x_3348_ == 0)
{
lean_object* v_toCold_3349_; lean_object* v_options_3350_; lean_object* v___x_3351_; uint8_t v___x_3352_; 
lean_dec(v_a_3342_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_del_object(v___x_3304_);
v_toCold_3349_ = lean_ctor_get(v___y_3277_, 0);
v_options_3350_ = lean_ctor_get(v_toCold_3349_, 2);
v___x_3351_ = l_Lean_Meta_autoLift;
v___x_3352_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_options_3350_, v___x_3351_);
if (v___x_3352_ == 0)
{
lean_object* v___x_3353_; lean_object* v___x_3355_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3353_ = lean_box(0);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v___x_3353_);
v___x_3355_ = v___x_3346_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v___x_3353_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
else
{
lean_object* v___x_3357_; 
lean_del_object(v___x_3346_);
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
lean_inc(v_fst_3336_);
v___x_3357_ = lean_infer_type(v_fst_3336_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v_a_3358_; lean_object* v___x_3359_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___x_3357_, 1);
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
v___x_3359_ = lean_whnf(v_a_3358_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_object* v_a_3360_; 
v_a_3360_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_a_3360_);
lean_dec_ref_known(v___x_3359_, 1);
if (lean_obj_tag(v_a_3360_) == 7)
{
lean_object* v_binderType_3361_; 
v_binderType_3361_ = lean_ctor_get(v_a_3360_, 1);
if (lean_obj_tag(v_binderType_3361_) == 3)
{
lean_object* v_body_3362_; 
v_body_3362_ = lean_ctor_get(v_a_3360_, 2);
if (lean_obj_tag(v_body_3362_) == 3)
{
lean_object* v_u_3363_; lean_object* v_u_3364_; lean_object* v___x_3365_; 
lean_inc_ref(v_body_3362_);
lean_inc_ref(v_binderType_3361_);
lean_dec_ref_known(v_a_3360_, 3);
v_u_3363_ = lean_ctor_get(v_binderType_3361_, 0);
lean_inc(v_u_3363_);
lean_dec_ref_known(v_binderType_3361_, 1);
v_u_3364_ = lean_ctor_get(v_body_3362_, 0);
lean_inc(v_u_3364_);
lean_dec_ref_known(v_body_3362_, 1);
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
lean_inc(v_fst_3322_);
v___x_3365_ = lean_infer_type(v_fst_3322_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3367_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3365_, 1);
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
v___x_3367_ = lean_whnf(v_a_3366_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3367_, 1);
if (lean_obj_tag(v_a_3368_) == 7)
{
lean_object* v_binderType_3369_; 
v_binderType_3369_ = lean_ctor_get(v_a_3368_, 1);
if (lean_obj_tag(v_binderType_3369_) == 3)
{
lean_object* v_body_3370_; 
v_body_3370_ = lean_ctor_get(v_a_3368_, 2);
if (lean_obj_tag(v_body_3370_) == 3)
{
lean_object* v_u_3371_; lean_object* v_u_3372_; lean_object* v___x_3373_; 
lean_inc_ref(v_body_3370_);
lean_inc_ref(v_binderType_3369_);
lean_dec_ref_known(v_a_3368_, 3);
v_u_3371_ = lean_ctor_get(v_binderType_3369_, 0);
lean_inc(v_u_3371_);
lean_dec_ref_known(v_binderType_3369_, 1);
v_u_3372_ = lean_ctor_get(v_body_3370_, 0);
lean_inc(v_u_3372_);
lean_dec_ref_known(v_body_3370_, 1);
v___x_3373_ = l_Lean_Meta_decLevel(v_u_3363_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v___x_3375_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3373_, 1);
v___x_3375_ = l_Lean_Meta_decLevel(v_u_3371_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3377_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref_known(v___x_3375_, 1);
lean_inc(v_a_3374_);
v___x_3377_ = l_Lean_Meta_isLevelDefEq(v_a_3374_, v_a_3376_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3542_; 
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3380_ = v___x_3377_;
v_isShared_3381_ = v_isSharedCheck_3542_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3377_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3542_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
uint8_t v___x_3382_; 
v___x_3382_ = lean_unbox(v_a_3378_);
lean_dec(v_a_3378_);
if (v___x_3382_ == 1)
{
lean_object* v___x_3383_; 
lean_del_object(v___x_3380_);
v___x_3383_ = l_Lean_Meta_decLevel(v_u_3364_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3385_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___x_3383_, 1);
v___x_3385_ = l_Lean_Meta_decLevel(v_u_3372_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3390_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3386_);
lean_dec_ref_known(v___x_3385_, 1);
v___x_3387_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__1));
v___x_3388_ = lean_box(0);
if (v_isShared_3340_ == 0)
{
lean_ctor_set_tag(v___x_3339_, 1);
lean_ctor_set(v___x_3339_, 1, v___x_3388_);
lean_ctor_set(v___x_3339_, 0, v_a_3386_);
v___x_3390_ = v___x_3339_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3386_);
lean_ctor_set(v_reuseFailAlloc_3535_, 1, v___x_3388_);
v___x_3390_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
lean_object* v___x_3392_; 
if (v_isShared_3326_ == 0)
{
lean_ctor_set_tag(v___x_3325_, 1);
lean_ctor_set(v___x_3325_, 1, v___x_3390_);
lean_ctor_set(v___x_3325_, 0, v_a_3384_);
v___x_3392_ = v___x_3325_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3384_);
lean_ctor_set(v_reuseFailAlloc_3534_, 1, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3393_, 0, v_a_3374_);
lean_ctor_set(v___x_3393_, 1, v___x_3392_);
v___x_3394_ = l_Lean_Expr_const___override(v___x_3387_, v___x_3393_);
v___x_3395_ = lean_unsigned_to_nat(2u);
v___x_3396_ = lean_mk_empty_array_with_capacity(v___x_3395_);
lean_inc(v_fst_3336_);
v___x_3397_ = lean_array_push(v___x_3396_, v_fst_3336_);
lean_inc(v_fst_3322_);
v___x_3398_ = lean_array_push(v___x_3397_, v_fst_3322_);
v___x_3399_ = l_Lean_mkAppN(v___x_3394_, v___x_3398_);
lean_dec_ref(v___x_3398_);
v___x_3400_ = lean_box(0);
v___x_3401_ = l_Lean_Meta_trySynthInstance(v___x_3399_, v___x_3400_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3532_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3404_ = v___x_3401_;
v_isShared_3405_ = v_isSharedCheck_3532_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3401_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3532_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
if (lean_obj_tag(v_a_3402_) == 1)
{
lean_object* v_a_3406_; lean_object* v___x_3407_; 
lean_del_object(v___x_3404_);
v_a_3406_ = lean_ctor_get(v_a_3402_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v_a_3402_, 1);
lean_inc(v_snd_3337_);
v___x_3407_ = l_Lean_Meta_getDecLevel(v_snd_3337_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3407_) == 0)
{
lean_object* v_a_3408_; lean_object* v___x_3409_; 
v_a_3408_ = lean_ctor_get(v___x_3407_, 0);
lean_inc(v_a_3408_);
lean_dec_ref_known(v___x_3407_, 1);
v___x_3409_ = l_Lean_Meta_getDecLevel(v_a_3309_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3411_; 
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
lean_inc(v_a_3410_);
lean_dec_ref_known(v___x_3409_, 1);
lean_inc(v_a_3302_);
v___x_3411_ = l_Lean_Meta_getDecLevel(v_a_3302_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3413_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__3));
v___x_3414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3414_, 0, v_a_3412_);
lean_ctor_set(v___x_3414_, 1, v___x_3388_);
v___x_3415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3415_, 0, v_a_3410_);
lean_ctor_set(v___x_3415_, 1, v___x_3414_);
v___x_3416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3416_, 0, v_a_3408_);
lean_ctor_set(v___x_3416_, 1, v___x_3415_);
lean_inc_ref(v___x_3416_);
v___x_3417_ = l_Lean_mkConst(v___x_3413_, v___x_3416_);
v___x_3418_ = lean_unsigned_to_nat(5u);
v___x_3419_ = lean_mk_empty_array_with_capacity(v___x_3418_);
lean_inc(v_fst_3336_);
v___x_3420_ = lean_array_push(v___x_3419_, v_fst_3336_);
lean_inc(v_fst_3322_);
v___x_3421_ = lean_array_push(v___x_3420_, v_fst_3322_);
lean_inc(v_a_3406_);
v___x_3422_ = lean_array_push(v___x_3421_, v_a_3406_);
lean_inc(v_snd_3337_);
v___x_3423_ = lean_array_push(v___x_3422_, v_snd_3337_);
lean_inc_ref(v_e_3273_);
v___x_3424_ = lean_array_push(v___x_3423_, v_e_3273_);
v___x_3425_ = l_Lean_mkAppN(v___x_3417_, v___x_3424_);
lean_dec_ref(v___x_3424_);
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
lean_inc_ref(v___x_3425_);
v___x_3426_ = lean_infer_type(v___x_3425_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3428_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v___x_3426_, 1);
lean_inc(v_a_3302_);
v___x_3428_ = l_Lean_Meta_isExprDefEq(v_a_3302_, v_a_3427_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3523_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3431_ = v___x_3428_;
v_isShared_3432_ = v_isSharedCheck_3523_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3428_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3523_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
uint8_t v___x_3433_; 
v___x_3433_ = lean_unbox(v_a_3429_);
lean_dec(v_a_3429_);
if (v___x_3433_ == 0)
{
lean_object* v___x_3434_; 
lean_del_object(v___x_3431_);
lean_dec_ref(v___x_3425_);
lean_del_object(v___x_3334_);
lean_inc(v_fst_3322_);
v___x_3434_ = l_Lean_Meta_isMonad_x3f(v_fst_3322_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3434_) == 0)
{
lean_object* v_a_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3515_; 
v_a_3435_ = lean_ctor_get(v___x_3434_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3434_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3437_ = v___x_3434_;
v_isShared_3438_ = v_isSharedCheck_3515_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_a_3435_);
lean_dec(v___x_3434_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3515_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
if (lean_obj_tag(v_a_3435_) == 1)
{
lean_object* v_val_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3511_; 
lean_del_object(v___x_3437_);
v_val_3439_ = lean_ctor_get(v_a_3435_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_a_3435_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3441_ = v_a_3435_;
v_isShared_3442_ = v_isSharedCheck_3511_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_val_3439_);
lean_dec(v_a_3435_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3511_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; 
lean_inc(v_snd_3337_);
v___x_3443_ = l_Lean_Meta_getLevel(v_snd_3337_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; lean_object* v___x_3445_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
lean_inc(v_snd_3323_);
v___x_3445_ = l_Lean_Meta_getLevel(v_snd_3323_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; lean_object* v___x_3447_; uint8_t v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
v___x_3447_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__5));
v___x_3448_ = 0;
v___x_3449_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_3450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3450_, 0, v_a_3446_);
lean_ctor_set(v___x_3450_, 1, v___x_3388_);
v___x_3451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3451_, 0, v_a_3444_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = l_Lean_mkConst(v___x_3449_, v___x_3451_);
v___x_3453_ = lean_obj_once(&l_Lean_Meta_coerceMonadLift_x3f___closed__6, &l_Lean_Meta_coerceMonadLift_x3f___closed__6_once, _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6);
v___x_3454_ = lean_unsigned_to_nat(3u);
v___x_3455_ = lean_mk_empty_array_with_capacity(v___x_3454_);
lean_inc_n(v_snd_3337_, 2);
v___x_3456_ = lean_array_push(v___x_3455_, v_snd_3337_);
v___x_3457_ = lean_array_push(v___x_3456_, v___x_3453_);
lean_inc(v_snd_3323_);
v___x_3458_ = lean_array_push(v___x_3457_, v_snd_3323_);
v___x_3459_ = l_Lean_mkAppN(v___x_3452_, v___x_3458_);
lean_dec_ref(v___x_3458_);
v___x_3460_ = l_Lean_mkForall(v___x_3447_, v___x_3448_, v_snd_3337_, v___x_3459_);
v___x_3461_ = l_Lean_Meta_trySynthInstance(v___x_3460_, v___x_3400_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3507_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3507_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3507_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
if (lean_obj_tag(v_a_3462_) == 1)
{
lean_object* v_a_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
lean_del_object(v___x_3464_);
v_a_3466_ = lean_ctor_get(v_a_3462_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v_a_3462_, 1);
v___x_3467_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__9));
v___x_3468_ = l_Lean_mkConst(v___x_3467_, v___x_3416_);
v___x_3469_ = lean_unsigned_to_nat(8u);
v___x_3470_ = lean_mk_empty_array_with_capacity(v___x_3469_);
v___x_3471_ = lean_array_push(v___x_3470_, v_fst_3336_);
v___x_3472_ = lean_array_push(v___x_3471_, v_fst_3322_);
v___x_3473_ = lean_array_push(v___x_3472_, v_snd_3337_);
v___x_3474_ = lean_array_push(v___x_3473_, v_snd_3323_);
v___x_3475_ = lean_array_push(v___x_3474_, v_a_3406_);
v___x_3476_ = lean_array_push(v___x_3475_, v_a_3466_);
v___x_3477_ = lean_array_push(v___x_3476_, v_val_3439_);
v___x_3478_ = lean_array_push(v___x_3477_, v_e_3273_);
v___x_3479_ = l_Lean_mkAppN(v___x_3468_, v___x_3478_);
lean_dec_ref(v___x_3478_);
v___x_3480_ = l_Lean_Meta_expandCoe(v___x_3479_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v_fst_3482_; lean_object* v___x_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v_fst_3482_ = lean_ctor_get(v_a_3481_, 0);
lean_inc_n(v_fst_3482_, 2);
lean_dec(v_a_3481_);
lean_inc(v___y_3278_);
lean_inc_ref(v___y_3277_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
v___x_3483_ = lean_infer_type(v_fst_3482_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; lean_object* v___x_3485_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3483_, 1);
v___x_3485_ = l_Lean_Meta_isExprDefEq(v_a_3302_, v_a_3484_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3500_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3488_ = v___x_3485_;
v_isShared_3489_ = v_isSharedCheck_3500_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3485_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3500_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
uint8_t v___x_3490_; 
v___x_3490_ = lean_unbox(v_a_3486_);
lean_dec(v_a_3486_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3492_; 
lean_dec(v_fst_3482_);
lean_del_object(v___x_3441_);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v___x_3400_);
v___x_3492_ = v___x_3488_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3400_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
return v___x_3492_;
}
}
else
{
lean_object* v___x_3495_; 
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v_fst_3482_);
v___x_3495_ = v___x_3441_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_fst_3482_);
v___x_3495_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3497_; 
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v___x_3495_);
v___x_3497_ = v___x_3488_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
}
else
{
lean_object* v_a_3501_; 
lean_dec(v_fst_3482_);
lean_del_object(v___x_3441_);
v_a_3501_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3501_);
lean_dec_ref_known(v___x_3485_, 1);
v_a_3287_ = v_a_3501_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3502_; 
lean_dec(v_fst_3482_);
lean_del_object(v___x_3441_);
lean_dec(v_a_3302_);
v_a_3502_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3502_);
lean_dec_ref_known(v___x_3483_, 1);
v_a_3287_ = v_a_3502_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3503_; 
lean_del_object(v___x_3441_);
lean_dec(v_a_3302_);
v_a_3503_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3480_, 1);
v_a_3287_ = v_a_3503_;
goto v___jp_3286_;
}
}
else
{
lean_object* v___x_3505_; 
lean_dec(v_a_3462_);
lean_del_object(v___x_3441_);
lean_dec(v_val_3439_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
if (v_isShared_3465_ == 0)
{
lean_ctor_set(v___x_3464_, 0, v___x_3400_);
v___x_3505_ = v___x_3464_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v___x_3400_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
else
{
lean_object* v_a_3508_; 
lean_del_object(v___x_3441_);
lean_dec(v_val_3439_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3508_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3508_);
lean_dec_ref_known(v___x_3461_, 1);
v_a_3287_ = v_a_3508_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3509_; 
lean_dec(v_a_3444_);
lean_del_object(v___x_3441_);
lean_dec(v_val_3439_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3509_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3445_, 1);
v_a_3287_ = v_a_3509_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3510_; 
lean_del_object(v___x_3441_);
lean_dec(v_val_3439_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3510_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v___x_3443_, 1);
v_a_3287_ = v_a_3510_;
goto v___jp_3286_;
}
}
}
else
{
lean_object* v___x_3513_; 
lean_dec(v_a_3435_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 0, v___x_3400_);
v___x_3513_ = v___x_3437_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v___x_3400_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
else
{
lean_object* v_a_3516_; 
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3516_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_a_3516_);
lean_dec_ref_known(v___x_3434_, 1);
v_a_3287_ = v_a_3516_;
goto v___jp_3286_;
}
}
else
{
lean_object* v___x_3518_; 
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 0, v___x_3425_);
v___x_3518_ = v___x_3334_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v___x_3425_);
v___x_3518_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3520_; 
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 0, v___x_3518_);
v___x_3520_ = v___x_3431_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v___x_3518_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
}
else
{
lean_object* v_a_3524_; 
lean_dec_ref(v___x_3425_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3524_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3428_, 1);
v_a_3287_ = v_a_3524_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3525_; 
lean_dec_ref(v___x_3425_);
lean_dec_ref_known(v___x_3416_, 2);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3525_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3426_, 1);
v_a_3287_ = v_a_3525_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3526_; 
lean_dec(v_a_3410_);
lean_dec(v_a_3408_);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3526_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3411_, 1);
v_a_3287_ = v_a_3526_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3527_; 
lean_dec(v_a_3408_);
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3527_ = lean_ctor_get(v___x_3409_, 0);
lean_inc(v_a_3527_);
lean_dec_ref_known(v___x_3409_, 1);
v_a_3287_ = v_a_3527_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3528_; 
lean_dec(v_a_3406_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3528_ = lean_ctor_get(v___x_3407_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v___x_3407_, 1);
v_a_3287_ = v_a_3528_;
goto v___jp_3286_;
}
}
else
{
lean_object* v___x_3530_; 
lean_dec(v_a_3402_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 0, v___x_3400_);
v___x_3530_ = v___x_3404_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3400_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
else
{
lean_object* v_a_3533_; 
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3533_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3401_, 1);
v_a_3287_ = v_a_3533_;
goto v___jp_3286_;
}
}
}
}
else
{
lean_object* v_a_3536_; 
lean_dec(v_a_3384_);
lean_dec(v_a_3374_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3536_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3536_);
lean_dec_ref_known(v___x_3385_, 1);
v_a_3287_ = v_a_3536_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3537_; 
lean_dec(v_a_3374_);
lean_dec(v_u_3372_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3537_ = lean_ctor_get(v___x_3383_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3383_, 1);
v_a_3287_ = v_a_3537_;
goto v___jp_3286_;
}
}
else
{
lean_object* v___x_3538_; lean_object* v___x_3540_; 
lean_dec(v_a_3374_);
lean_dec(v_u_3372_);
lean_dec(v_u_3364_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3538_ = lean_box(0);
if (v_isShared_3381_ == 0)
{
lean_ctor_set(v___x_3380_, 0, v___x_3538_);
v___x_3540_ = v___x_3380_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
else
{
lean_object* v_a_3543_; 
lean_dec(v_a_3374_);
lean_dec(v_u_3372_);
lean_dec(v_u_3364_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3543_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3543_);
lean_dec_ref_known(v___x_3377_, 1);
v_a_3287_ = v_a_3543_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3544_; 
lean_dec(v_a_3374_);
lean_dec(v_u_3372_);
lean_dec(v_u_3364_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3544_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3544_);
lean_dec_ref_known(v___x_3375_, 1);
v_a_3287_ = v_a_3544_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3545_; 
lean_dec(v_u_3372_);
lean_dec(v_u_3371_);
lean_dec(v_u_3364_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3545_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3545_);
lean_dec_ref_known(v___x_3373_, 1);
v_a_3287_ = v_a_3545_;
goto v___jp_3286_;
}
}
else
{
lean_object* v___x_3546_; 
lean_dec(v_u_3364_);
lean_dec(v_u_3363_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3546_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3368_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec_ref_known(v_a_3368_, 3);
v___y_3291_ = v___x_3546_;
goto v___jp_3290_;
}
}
else
{
lean_object* v___x_3547_; 
lean_dec(v_u_3364_);
lean_dec(v_u_3363_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3547_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3368_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec_ref_known(v_a_3368_, 3);
v___y_3291_ = v___x_3547_;
goto v___jp_3290_;
}
}
else
{
lean_object* v___x_3548_; 
lean_dec(v_u_3364_);
lean_dec(v_u_3363_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3548_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3368_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec(v_a_3368_);
v___y_3291_ = v___x_3548_;
goto v___jp_3290_;
}
}
else
{
lean_object* v_a_3549_; 
lean_dec(v_u_3364_);
lean_dec(v_u_3363_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3549_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3549_);
lean_dec_ref_known(v___x_3367_, 1);
v_a_3287_ = v_a_3549_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3550_; 
lean_dec(v_u_3364_);
lean_dec(v_u_3363_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3550_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3365_, 1);
v_a_3287_ = v_a_3550_;
goto v___jp_3286_;
}
}
else
{
lean_object* v___x_3551_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3551_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3360_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec_ref_known(v_a_3360_, 3);
v___y_3291_ = v___x_3551_;
goto v___jp_3290_;
}
}
else
{
lean_object* v___x_3552_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3552_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3360_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec_ref_known(v_a_3360_, 3);
v___y_3291_ = v___x_3552_;
goto v___jp_3290_;
}
}
else
{
lean_object* v___x_3553_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3553_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3360_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec(v_a_3360_);
v___y_3291_ = v___x_3553_;
goto v___jp_3290_;
}
}
else
{
lean_object* v_a_3554_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3554_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_a_3554_);
lean_dec_ref_known(v___x_3359_, 1);
v_a_3287_ = v_a_3554_;
goto v___jp_3286_;
}
}
else
{
lean_object* v_a_3555_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3555_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3357_, 1);
v_a_3287_ = v_a_3555_;
goto v___jp_3286_;
}
}
}
else
{
lean_object* v___x_3556_; 
lean_del_object(v___x_3346_);
lean_del_object(v___x_3339_);
lean_del_object(v___x_3325_);
lean_dec(v_a_3309_);
lean_dec(v_a_3302_);
v___x_3556_ = l_Lean_Meta_isMonad_x3f(v_fst_3322_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3649_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3559_ = v___x_3556_;
v_isShared_3560_ = v_isSharedCheck_3649_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3556_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3649_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
if (lean_obj_tag(v_a_3557_) == 1)
{
lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3561_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__11));
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 0, v_fst_3336_);
v___x_3563_ = v___x_3334_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_fst_3336_);
v___x_3563_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3565_; 
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 0, v_snd_3337_);
v___x_3565_ = v___x_3320_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_snd_3337_);
v___x_3565_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_object* v___x_3567_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set_tag(v___x_3311_, 1);
lean_ctor_set(v___x_3311_, 0, v_snd_3323_);
v___x_3567_ = v___x_3311_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_snd_3323_);
v___x_3567_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
lean_object* v___x_3568_; lean_object* v___y_3570_; uint8_t v___y_3571_; lean_object* v_a_3593_; lean_object* v___x_3597_; 
v___x_3568_ = lean_box(0);
if (v_isShared_3305_ == 0)
{
lean_ctor_set_tag(v___x_3304_, 1);
lean_ctor_set(v___x_3304_, 0, v_e_3273_);
v___x_3597_ = v___x_3304_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_e_3273_);
v___x_3597_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3596_;
}
v___jp_3569_:
{
if (v___y_3571_ == 0)
{
lean_object* v___x_3572_; 
lean_dec_ref(v___y_3570_);
lean_del_object(v___x_3559_);
v___x_3572_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3342_, v___y_3276_, v___y_3278_);
lean_dec(v_a_3342_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3579_ == 0)
{
lean_object* v_unused_3580_; 
v_unused_3580_ = lean_ctor_get(v___x_3572_, 0);
lean_dec(v_unused_3580_);
v___x_3574_ = v___x_3572_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_dec(v___x_3572_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 0, v___x_3568_);
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3568_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
v_a_3581_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3572_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3572_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v___x_3590_; 
lean_dec(v_a_3342_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set_tag(v___x_3559_, 1);
lean_ctor_set(v___x_3559_, 0, v___y_3570_);
v___x_3590_ = v___x_3559_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___y_3570_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
v___jp_3592_:
{
uint8_t v___x_3594_; 
v___x_3594_ = l_Lean_Exception_isInterrupt(v_a_3593_);
if (v___x_3594_ == 0)
{
uint8_t v___x_3595_; 
lean_inc_ref(v_a_3593_);
v___x_3595_ = l_Lean_Exception_isRuntime(v_a_3593_);
v___y_3570_ = v_a_3593_;
v___y_3571_ = v___x_3595_;
goto v___jp_3569_;
}
else
{
v___y_3570_ = v_a_3593_;
v___y_3571_ = v___x_3594_;
goto v___jp_3569_;
}
}
v_reusejp_3596_:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3598_ = lean_unsigned_to_nat(6u);
v___x_3599_ = lean_mk_empty_array_with_capacity(v___x_3598_);
v___x_3600_ = lean_array_push(v___x_3599_, v___x_3563_);
v___x_3601_ = lean_array_push(v___x_3600_, v___x_3565_);
v___x_3602_ = lean_array_push(v___x_3601_, v___x_3567_);
v___x_3603_ = lean_array_push(v___x_3602_, v___x_3568_);
v___x_3604_ = lean_array_push(v___x_3603_, v_a_3557_);
v___x_3605_ = lean_array_push(v___x_3604_, v___x_3597_);
v___x_3606_ = l_Lean_Meta_mkAppOptM(v___x_3561_, v___x_3605_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3625_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3609_ = v___x_3606_;
v_isShared_3610_ = v_isSharedCheck_3625_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3625_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3611_; 
v___x_3611_ = l_Lean_Meta_expandCoe(v_a_3607_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3623_; 
lean_del_object(v___x_3559_);
lean_dec(v_a_3342_);
v_a_3612_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3614_ = v___x_3611_;
v_isShared_3615_ = v_isSharedCheck_3623_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3611_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3623_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v_fst_3616_; lean_object* v___x_3618_; 
v_fst_3616_ = lean_ctor_get(v_a_3612_, 0);
lean_inc(v_fst_3616_);
lean_dec(v_a_3612_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set_tag(v___x_3609_, 1);
lean_ctor_set(v___x_3609_, 0, v_fst_3616_);
v___x_3618_ = v___x_3609_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_fst_3616_);
v___x_3618_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
lean_object* v___x_3620_; 
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v___x_3618_);
v___x_3620_ = v___x_3614_;
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
lean_object* v_a_3624_; 
lean_del_object(v___x_3609_);
v_a_3624_ = lean_ctor_get(v___x_3611_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v___x_3611_, 1);
v_a_3593_ = v_a_3624_;
goto v___jp_3592_;
}
}
}
else
{
lean_object* v_a_3626_; 
v_a_3626_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3626_);
lean_dec_ref_known(v___x_3606_, 1);
v_a_3593_ = v_a_3626_;
goto v___jp_3592_;
}
}
}
}
}
}
else
{
lean_object* v___x_3631_; 
lean_del_object(v___x_3559_);
lean_dec(v_a_3557_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_del_object(v___x_3304_);
lean_dec_ref(v_e_3273_);
v___x_3631_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3342_, v___y_3276_, v___y_3278_);
lean_dec(v_a_3342_);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3639_; 
v_isSharedCheck_3639_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3639_ == 0)
{
lean_object* v_unused_3640_; 
v_unused_3640_ = lean_ctor_get(v___x_3631_, 0);
lean_dec(v_unused_3640_);
v___x_3633_ = v___x_3631_;
v_isShared_3634_ = v_isSharedCheck_3639_;
goto v_resetjp_3632_;
}
else
{
lean_dec(v___x_3631_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3639_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3635_; lean_object* v___x_3637_; 
v___x_3635_ = lean_box(0);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 0, v___x_3635_);
v___x_3637_ = v___x_3633_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3635_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
v_a_3641_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3631_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3631_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3342_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_dec(v_snd_3323_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_del_object(v___x_3304_);
lean_dec_ref(v_e_3273_);
return v___x_3556_;
}
}
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_a_3342_);
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_dec(v_a_3309_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3651_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3343_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3343_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
else
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
lean_del_object(v___x_3339_);
lean_dec(v_snd_3337_);
lean_dec(v_fst_3336_);
lean_del_object(v___x_3334_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_dec(v_a_3309_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3659_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3661_ = v___x_3341_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v___x_3341_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3659_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
}
}
else
{
lean_object* v___x_3669_; lean_object* v___x_3671_; 
lean_dec(v_a_3328_);
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_dec(v_a_3309_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3669_ = lean_box(0);
if (v_isShared_3331_ == 0)
{
lean_ctor_set(v___x_3330_, 0, v___x_3669_);
v___x_3671_ = v___x_3330_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3669_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_del_object(v___x_3325_);
lean_dec(v_snd_3323_);
lean_dec(v_fst_3322_);
lean_del_object(v___x_3320_);
lean_del_object(v___x_3311_);
lean_dec(v_a_3309_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3674_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3327_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3327_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
}
}
else
{
lean_object* v___x_3684_; lean_object* v___x_3686_; 
lean_dec(v_a_3314_);
lean_del_object(v___x_3311_);
lean_dec(v_a_3309_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v___x_3684_ = lean_box(0);
if (v_isShared_3317_ == 0)
{
lean_ctor_set(v___x_3316_, 0, v___x_3684_);
v___x_3686_ = v___x_3316_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_del_object(v___x_3311_);
lean_dec(v_a_3309_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3689_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3313_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3313_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
}
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3705_; 
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec_ref(v_e_3273_);
v_a_3698_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3700_ = v___x_3306_;
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3306_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3703_; 
if (v_isShared_3701_ == 0)
{
v___x_3703_ = v___x_3700_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_a_3698_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object* v_e_3707_, lean_object* v_expectedType_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
lean_object* v_res_3714_; 
v_res_3714_ = l_Lean_Meta_coerceMonadLift_x3f(v_e_3707_, v_expectedType_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
return v_res_3714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object* v_expr_3715_, lean_object* v_expectedType_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_){
_start:
{
lean_object* v___x_3722_; 
lean_inc_ref(v_expectedType_3716_);
lean_inc_ref(v_expr_3715_);
v___x_3722_ = l_Lean_Meta_coerceMonadLift_x3f(v_expr_3715_, v_expectedType_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3802_; 
v_a_3723_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3725_ = v___x_3722_;
v_isShared_3726_ = v_isSharedCheck_3802_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3722_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3802_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
if (lean_obj_tag(v_a_3723_) == 1)
{
lean_object* v_val_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3739_; 
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v_val_3727_ = lean_ctor_get(v_a_3723_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v_a_3723_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3729_ = v_a_3723_;
v_isShared_3730_ = v_isSharedCheck_3739_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_val_3727_);
lean_dec(v_a_3723_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3739_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3734_; 
v___x_3731_ = lean_box(0);
v___x_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3732_, 0, v_val_3727_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3732_);
v___x_3734_ = v___x_3729_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v___x_3732_);
v___x_3734_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3736_; 
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v___x_3734_);
v___x_3736_ = v___x_3725_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v___x_3734_);
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
lean_object* v___x_3740_; 
lean_del_object(v___x_3725_);
lean_dec(v_a_3723_);
lean_inc_ref(v_expectedType_3716_);
v___x_3740_ = l_Lean_Meta_whnfR(v_expectedType_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; uint8_t v___x_3742_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v___x_3740_, 1);
v___x_3742_ = l_Lean_Expr_isForall(v_a_3741_);
lean_dec(v_a_3741_);
if (v___x_3742_ == 0)
{
lean_object* v___x_3743_; 
v___x_3743_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3715_, v_expectedType_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
return v___x_3743_;
}
else
{
lean_object* v___x_3744_; 
lean_inc_ref(v_expr_3715_);
v___x_3744_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_3715_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_a_3745_; 
v_a_3745_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v___x_3744_, 1);
if (lean_obj_tag(v_a_3745_) == 1)
{
lean_object* v_val_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3784_; 
v_val_3746_ = lean_ctor_get(v_a_3745_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_a_3745_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3748_ = v_a_3745_;
v_isShared_3749_ = v_isSharedCheck_3784_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_val_3746_);
lean_dec(v_a_3745_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3784_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; 
lean_inc(v___y_3720_);
lean_inc_ref(v___y_3719_);
lean_inc(v___y_3718_);
lean_inc_ref(v___y_3717_);
lean_inc(v_val_3746_);
v___x_3750_ = lean_infer_type(v_val_3746_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; lean_object* v___x_3752_; 
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
lean_inc(v_a_3751_);
lean_dec_ref_known(v___x_3750_, 1);
lean_inc_ref(v_expectedType_3716_);
v___x_3752_ = l_Lean_Meta_isExprDefEq(v_a_3751_, v_expectedType_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3767_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3755_ = v___x_3752_;
v_isShared_3756_ = v_isSharedCheck_3767_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3752_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3767_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
uint8_t v___x_3757_; 
v___x_3757_ = lean_unbox(v_a_3753_);
lean_dec(v_a_3753_);
if (v___x_3757_ == 0)
{
lean_object* v___x_3758_; 
lean_del_object(v___x_3755_);
lean_del_object(v___x_3748_);
lean_dec(v_val_3746_);
v___x_3758_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3715_, v_expectedType_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
return v___x_3758_;
}
else
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3762_; 
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v___x_3759_ = lean_box(0);
v___x_3760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3760_, 0, v_val_3746_);
lean_ctor_set(v___x_3760_, 1, v___x_3759_);
if (v_isShared_3749_ == 0)
{
lean_ctor_set(v___x_3748_, 0, v___x_3760_);
v___x_3762_ = v___x_3748_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3760_);
v___x_3762_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
lean_object* v___x_3764_; 
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 0, v___x_3762_);
v___x_3764_ = v___x_3755_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
lean_del_object(v___x_3748_);
lean_dec(v_val_3746_);
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v_a_3768_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3752_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v___x_3752_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
else
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3783_; 
lean_del_object(v___x_3748_);
lean_dec(v_val_3746_);
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v_a_3776_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3778_ = v___x_3750_;
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3750_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
else
{
lean_object* v___x_3785_; 
lean_dec(v_a_3745_);
v___x_3785_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3715_, v_expectedType_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
return v___x_3785_;
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v_a_3786_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3744_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3744_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v_a_3794_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3740_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3740_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
}
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_dec_ref(v_expectedType_3716_);
lean_dec_ref(v_expr_3715_);
v_a_3803_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3722_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3722_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object* v_expr_3811_, lean_object* v_expectedType_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3811_, v_expectedType_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_);
lean_dec(v___y_3816_);
lean_dec_ref(v___y_3815_);
lean_dec(v___y_3814_);
lean_dec_ref(v___y_3813_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object* v_expr_3819_, lean_object* v_expectedType_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
lean_object* v___x_3826_; 
v___x_3826_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3819_, v_expectedType_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3851_; 
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3829_ = v___x_3826_;
v_isShared_3830_ = v_isSharedCheck_3851_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3826_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3851_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
switch(lean_obj_tag(v_a_3827_))
{
case 0:
{
lean_object* v___x_3831_; lean_object* v___x_3833_; 
v___x_3831_ = lean_box(0);
if (v_isShared_3830_ == 0)
{
lean_ctor_set(v___x_3829_, 0, v___x_3831_);
v___x_3833_ = v___x_3829_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3831_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
case 1:
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3846_; 
v_a_3835_ = lean_ctor_get(v_a_3827_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v_a_3827_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3837_ = v_a_3827_;
v_isShared_3838_ = v_isSharedCheck_3846_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v_a_3827_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3846_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v_fst_3839_; lean_object* v___x_3841_; 
v_fst_3839_ = lean_ctor_get(v_a_3835_, 0);
lean_inc(v_fst_3839_);
lean_dec(v_a_3835_);
if (v_isShared_3838_ == 0)
{
lean_ctor_set(v___x_3837_, 0, v_fst_3839_);
v___x_3841_ = v___x_3837_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_fst_3839_);
v___x_3841_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
lean_object* v___x_3843_; 
if (v_isShared_3830_ == 0)
{
lean_ctor_set(v___x_3829_, 0, v___x_3841_);
v___x_3843_ = v___x_3829_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3841_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
default: 
{
lean_object* v___x_3847_; lean_object* v___x_3849_; 
v___x_3847_ = lean_box(2);
if (v_isShared_3830_ == 0)
{
lean_ctor_set(v___x_3829_, 0, v___x_3847_);
v___x_3849_ = v___x_3829_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3847_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3826_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3826_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object* v_expr_3860_, lean_object* v_expectedType_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lean_Meta_coerce_x3f(v_expr_3860_, v_expectedType_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v_res_3867_;
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
