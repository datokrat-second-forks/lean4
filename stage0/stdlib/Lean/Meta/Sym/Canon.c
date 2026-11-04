// Lean compiler output
// Module: Lean.Meta.Sym.Canon
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.ExprPtr import Lean.Meta.SynthInstance import Lean.Meta.Sym.SynthInstance import Lean.Meta.Sym.Arith.EvalNum import Lean.Meta.IntInstTesters import Lean.Meta.NatInstTesters import Lean.Meta.LitValues import Lean.Meta.AppBuilder import Lean.Meta.Sym.Eta import Lean.Meta.WHNF import Init.Grind.Util
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
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_etaReduce(lean_object*);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqI___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBitVecValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLitValueModulus_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isCharLit(lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_evalNat_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_isOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isBoolTrue(lean_object*);
uint8_t l_Lean_Expr_isBoolFalse(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "canon"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 1, 190, 45, 30, 82, 81, 176)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 97, 144, 214, 78, 119, 236, 177)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 84, 158, 71, 120, 158, 242, 63)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Canon"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 83, 125, 6, 218, 3, 48, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(154, 171, 198, 108, 141, 151, 61, 31)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 129, 34, 172, 72, 50, 70, 116)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 207, 82, 133, 112, 147, 195, 77)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 103, 41, 34, 191, 138, 48, 228)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 52, 130, 106, 6, 185, 228, 149)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 111, 38, 159, 202, 81, 240, 140)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 83, 198, 225, 249, 91, 57, 132)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 226, 138, 193, 30, 68, 227, 228)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 70, 161, 93, 218, 182, 14, 120)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 112, 163, 177, 100, 91, 121, 218)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 6, 28, 240, 79, 58, 119, 82)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1925315962) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(161, 32, 45, 47, 13, 228, 196, 13)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 31, 210, 182, 50, 29, 226, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 160, 218, 47, 172, 76, 255, 193)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(63, 7, 146, 163, 93, 52, 225, 8)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 105, 192, 171, 214, 131, 43, 105)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 21, 77, 8, 216, 186, 116, 67)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ofNatLT"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 44, 243, 4, 118, 78, 150, 28)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonType"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonInst"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "canonImplicit"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "visit"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to canonicalize instance"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "\nsynthesized instance is not definitionally equal"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33_spec__38___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "\nfailed to synthesize"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "nestedUDecidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(229, 50, 1, 76, 1, 27, 242, 138)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33_spec__38(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_canon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sym canon"};
static const lean_object* l_Lean_Meta_Sym_canon___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_canon___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_79_ = 0;
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_81_ = l_Lean_registerTraceClass(v___x_78_, v___x_79_, v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2____boxed(lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f(lean_object* v_e_89_){
_start:
{
lean_object* v_e_91_; lean_object* v___x_107_; 
v___x_107_ = l_Lean_Expr_consumeMData(v_e_89_);
lean_dec_ref(v_e_89_);
if (lean_obj_tag(v___x_107_) == 9)
{
lean_object* v_a_108_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_a_108_);
if (lean_obj_tag(v_a_108_) == 0)
{
lean_object* v_val_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec_ref_known(v___x_107_, 1);
v_val_109_ = lean_ctor_get(v_a_108_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v_a_108_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v_a_108_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_val_109_);
lean_dec(v_a_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set_tag(v___x_111_, 1);
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_val_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
else
{
lean_dec_ref(v_a_108_);
v_e_91_ = v___x_107_;
goto v___jp_90_;
}
}
else
{
v_e_91_ = v___x_107_;
goto v___jp_90_;
}
v___jp_90_:
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = l_Lean_Expr_cleanupAnnotations(v_e_91_);
lean_dec_ref(v_e_91_);
v___x_93_ = l_Lean_Expr_isApp(v___x_92_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
lean_dec_ref(v___x_92_);
v___x_94_ = lean_box(0);
return v___x_94_;
}
else
{
lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = l_Lean_Expr_appFnCleanup___redArg(v___x_92_);
lean_dec_ref(v___x_92_);
v___x_96_ = l_Lean_Expr_isApp(v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_dec_ref(v___x_95_);
v___x_97_ = lean_box(0);
return v___x_97_;
}
else
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = l_Lean_Expr_appFnCleanup___redArg(v___x_95_);
v___x_99_ = l_Lean_Expr_isApp(v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
lean_dec_ref(v___x_98_);
lean_dec_ref(v___x_95_);
v___x_100_ = lean_box(0);
return v___x_100_;
}
else
{
lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_101_ = l_Lean_Expr_appFnCleanup___redArg(v___x_98_);
lean_dec_ref(v___x_98_);
v___x_102_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_103_ = l_Lean_Expr_isConstOf(v___x_101_, v___x_102_);
lean_dec_ref(v___x_101_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
lean_dec_ref(v___x_95_);
v___x_104_ = lean_box(0);
return v___x_104_;
}
else
{
lean_object* v_arg_105_; 
v_arg_105_ = lean_ctor_get(v___x_95_, 1);
lean_inc_ref(v_arg_105_);
lean_dec_ref(v___x_95_);
v_e_89_ = v_arg_105_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(lean_object* v_args_123_, lean_object* v_a_124_){
_start:
{
lean_object* v___y_130_; uint8_t v___y_131_; lean_object* v___y_135_; lean_object* v___y_136_; lean_object* v___y_137_; uint8_t v___y_138_; lean_object* v_args_165_; uint8_t v_modified_166_; lean_object* v___y_167_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v_modified_197_; 
v___x_195_ = lean_array_get_size(v_args_123_);
v___x_196_ = lean_unsigned_to_nat(3u);
v_modified_197_ = lean_nat_dec_eq(v___x_195_, v___x_196_);
if (v_modified_197_ == 0)
{
lean_dec_ref(v_args_123_);
goto v___jp_126_;
}
else
{
uint8_t v_modified_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_modified_198_ = 0;
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_array_fget_borrowed(v_args_123_, v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_202_ = l_Lean_Expr_isAppOf(v___x_200_, v___x_201_);
if (v___x_202_ == 0)
{
v_args_165_ = v_args_123_;
v_modified_166_ = v_modified_198_;
v___y_167_ = v_a_124_;
goto v___jp_164_;
}
else
{
lean_object* v___x_203_; 
lean_inc(v___x_200_);
v___x_203_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f(v___x_200_);
if (lean_obj_tag(v___x_203_) == 1)
{
lean_object* v_val_204_; lean_object* v___x_205_; lean_object* v_args_206_; 
v_val_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_205_ = l_Lean_mkRawNatLit(v_val_204_);
v_args_206_ = lean_array_fset(v_args_123_, v___x_199_, v___x_205_);
v_args_165_ = v_args_206_;
v_modified_166_ = v_modified_197_;
v___y_167_ = v_a_124_;
goto v___jp_164_;
}
else
{
lean_dec(v___x_203_);
v_args_165_ = v_args_123_;
v_modified_166_ = v_modified_198_;
v___y_167_ = v_a_124_;
goto v___jp_164_;
}
}
}
v___jp_126_:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_box(0);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
v___jp_129_:
{
if (v___y_131_ == 0)
{
lean_dec_ref(v___y_130_);
goto v___jp_126_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_132_, 0, v___y_130_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
v___jp_134_:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_Meta_Structural_isInstOfNatInt___redArg(v___y_137_, v___y_136_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_155_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_155_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_155_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_155_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
uint8_t v___x_144_; 
v___x_144_ = lean_unbox(v_a_140_);
lean_dec(v_a_140_);
if (v___x_144_ == 0)
{
lean_del_object(v___x_142_);
v___y_130_ = v___y_135_;
v___y_131_ = v___y_138_;
goto v___jp_129_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_array_fget_borrowed(v___y_135_, v___x_145_);
v___x_147_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1));
v___x_148_ = l_Lean_Expr_isConstOf(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_149_ = l_Lean_Int_mkType;
v___x_150_ = lean_array_fset(v___y_135_, v___x_145_, v___x_149_);
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_151_);
v___x_153_ = v___x_142_;
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
lean_del_object(v___x_142_);
v___y_130_ = v___y_135_;
v___y_131_ = v___y_138_;
goto v___jp_129_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v___y_135_);
v_a_156_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_139_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_139_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
v___jp_164_:
{
lean_object* v___x_168_; lean_object* v_inst_169_; lean_object* v___x_170_; 
v___x_168_ = lean_unsigned_to_nat(2u);
v_inst_169_ = lean_array_fget_borrowed(v_args_165_, v___x_168_);
lean_inc(v_inst_169_);
v___x_170_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_inst_169_, v___y_167_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_186_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_186_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_186_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_186_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v___x_175_; 
v___x_175_ = lean_unbox(v_a_171_);
lean_dec(v_a_171_);
if (v___x_175_ == 0)
{
lean_inc(v_inst_169_);
lean_del_object(v___x_173_);
v___y_135_ = v_args_165_;
v___y_136_ = v___y_167_;
v___y_137_ = v_inst_169_;
v___y_138_ = v_modified_166_;
goto v___jp_134_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_array_fget_borrowed(v_args_165_, v___x_176_);
v___x_178_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3));
v___x_179_ = l_Lean_Expr_isConstOf(v___x_177_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_180_ = l_Lean_Nat_mkType;
v___x_181_ = lean_array_fset(v_args_165_, v___x_176_, v___x_180_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_182_);
v___x_184_ = v___x_173_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_inc(v_inst_169_);
lean_del_object(v___x_173_);
v___y_135_ = v_args_165_;
v___y_136_ = v___y_167_;
v___y_137_ = v_inst_169_;
v___y_138_ = v_modified_166_;
goto v___jp_134_;
}
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
lean_dec_ref(v_args_165_);
v_a_187_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_170_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_170_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___boxed(lean_object* v_args_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(v_args_207_, v_a_208_);
lean_dec(v_a_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(lean_object* v_args_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(v_args_211_, v_a_213_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___boxed(lean_object* v_args_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(v_args_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
return v_res_224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
v___x_229_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1));
v___x_230_ = l_Lean_mkConst(v___x_229_, v___x_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(lean_object* v_e_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Meta_getBitVecValue_x3f(v_e_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_276_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_276_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_276_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_276_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
if (lean_obj_tag(v_a_238_) == 1)
{
lean_object* v_val_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_271_; 
lean_del_object(v___x_240_);
v_val_242_ = lean_ctor_get(v_a_238_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_a_238_);
if (v_isSharedCheck_271_ == 0)
{
v___x_244_ = v_a_238_;
v_isShared_245_ = v_isSharedCheck_271_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_val_242_);
lean_dec(v_a_238_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_271_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v_fst_246_; lean_object* v_snd_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_fst_246_ = lean_ctor_get(v_val_242_, 0);
lean_inc(v_fst_246_);
v_snd_247_ = lean_ctor_get(v_val_242_, 1);
lean_inc(v_snd_247_);
lean_dec(v_val_242_);
v___x_248_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2);
v___x_249_ = l_Lean_mkNatLit(v_fst_246_);
v___x_250_ = l_Lean_Expr_app___override(v___x_248_, v___x_249_);
v___x_251_ = l_Lean_Meta_mkNumeral(v___x_250_, v_snd_247_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_262_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_262_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 0, v_a_252_);
v___x_257_ = v___x_244_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_261_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_259_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v___x_257_);
v___x_259_ = v___x_254_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_del_object(v___x_244_);
v_a_263_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_251_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_251_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
}
else
{
lean_object* v___x_272_; lean_object* v___x_274_; 
lean_dec(v_a_238_);
v___x_272_ = lean_box(0);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_272_);
v___x_274_ = v___x_240_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_237_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_237_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___boxed(lean_object* v_e_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_291_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_box(0);
v___x_310_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7));
v___x_311_ = l_Lean_mkConst(v___x_310_, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = lean_box(0);
v___x_313_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1));
v___x_314_ = l_Lean_mkConst(v___x_313_, v___x_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object* v_e_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_324_; 
lean_inc_ref(v_e_315_);
v___x_324_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_315_, v_a_317_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_579_; 
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_579_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_579_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_579_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_329_ = l_Lean_Expr_cleanupAnnotations(v_a_325_);
lean_dec(v_a_325_);
v___x_330_ = l_Lean_Expr_isApp(v___x_329_);
if (v___x_330_ == 0)
{
lean_dec_ref(v___x_329_);
lean_del_object(v___x_327_);
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v_arg_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_arg_331_ = lean_ctor_get(v___x_329_, 1);
lean_inc_ref(v_arg_331_);
v___x_332_ = l_Lean_Expr_appFnCleanup___redArg(v___x_329_);
lean_dec_ref(v___x_329_);
v___x_333_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1));
v___x_334_ = l_Lean_Expr_isConstOf(v___x_332_, v___x_333_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
lean_del_object(v___x_327_);
v___x_335_ = l_Lean_Expr_isApp(v___x_332_);
if (v___x_335_ == 0)
{
lean_dec_ref(v___x_332_);
lean_dec_ref(v_arg_331_);
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v_arg_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_arg_336_ = lean_ctor_get(v___x_332_, 1);
lean_inc_ref(v_arg_336_);
v___x_337_ = l_Lean_Expr_appFnCleanup___redArg(v___x_332_);
lean_dec_ref(v___x_332_);
v___x_338_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2));
v___x_339_ = l_Lean_Expr_isConstOf(v___x_337_, v___x_338_);
if (v___x_339_ == 0)
{
uint8_t v___x_340_; 
v___x_340_ = l_Lean_Expr_isApp(v___x_337_);
if (v___x_340_ == 0)
{
lean_dec_ref(v___x_337_);
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_331_);
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v_arg_341_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; 
v_arg_341_ = lean_ctor_get(v___x_337_, 1);
lean_inc_ref(v_arg_341_);
v___x_342_ = l_Lean_Expr_appFnCleanup___redArg(v___x_337_);
lean_dec_ref(v___x_337_);
v___x_343_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_344_ = l_Lean_Expr_isConstOf(v___x_342_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; uint8_t v___x_346_; 
lean_dec_ref(v_arg_336_);
v___x_345_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4));
v___x_346_ = l_Lean_Expr_isConstOf(v___x_342_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; uint8_t v___x_348_; 
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_331_);
v___x_347_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6));
v___x_348_ = l_Lean_Expr_isConstOf(v___x_342_, v___x_347_);
lean_dec_ref(v___x_342_);
if (v___x_348_ == 0)
{
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; 
lean_dec_ref(v___x_342_);
lean_dec_ref(v_e_315_);
v___x_350_ = l_Lean_Meta_getNatValue_x3f(v_arg_341_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_341_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_413_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_413_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_413_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_413_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
if (lean_obj_tag(v_a_351_) == 1)
{
lean_object* v_val_355_; lean_object* v___x_356_; 
lean_del_object(v___x_353_);
v_val_355_ = lean_ctor_get(v_a_351_, 0);
lean_inc(v_val_355_);
lean_dec_ref_known(v_a_351_, 1);
v___x_356_ = l_Lean_Meta_getNatValue_x3f(v_arg_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_331_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_400_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_400_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_400_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_400_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
if (lean_obj_tag(v_a_357_) == 1)
{
lean_object* v_val_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_395_; 
v_val_361_ = lean_ctor_get(v_a_357_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v_a_357_);
if (v_isSharedCheck_395_ == 0)
{
v___x_363_ = v_a_357_;
v_isShared_364_ = v_isSharedCheck_395_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_val_361_);
lean_dec(v_a_357_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_395_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = lean_nat_dec_eq(v_val_355_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
lean_del_object(v___x_359_);
v___x_367_ = lean_obj_once(&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8, &l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8_once, _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8);
lean_inc(v_val_355_);
v___x_368_ = l_Lean_mkNatLit(v_val_355_);
v___x_369_ = l_Lean_Expr_app___override(v___x_367_, v___x_368_);
v___x_370_ = lean_nat_mod(v_val_361_, v_val_355_);
lean_dec(v_val_355_);
lean_dec(v_val_361_);
v___x_371_ = l_Lean_Meta_mkNumeral(v___x_369_, v___x_370_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_382_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_382_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v_a_372_);
v___x_377_ = v___x_363_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_381_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_379_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_377_);
v___x_379_ = v___x_374_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
else
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
lean_del_object(v___x_363_);
v_a_383_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_371_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_371_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
else
{
lean_object* v___x_391_; lean_object* v___x_393_; 
lean_del_object(v___x_363_);
lean_dec(v_val_361_);
lean_dec(v_val_355_);
v___x_391_ = lean_box(0);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_391_);
v___x_393_ = v___x_359_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
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
else
{
lean_object* v___x_396_; lean_object* v___x_398_; 
lean_dec(v_a_357_);
lean_dec(v_val_355_);
v___x_396_ = lean_box(0);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_396_);
v___x_398_ = v___x_359_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_396_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_val_355_);
v_a_401_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_356_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_356_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v___x_409_; lean_object* v___x_411_; 
lean_dec(v_a_351_);
lean_dec_ref(v_arg_331_);
v___x_409_ = lean_box(0);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_409_);
v___x_411_ = v___x_353_;
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
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec_ref(v_arg_331_);
v_a_414_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_350_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_350_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
else
{
lean_object* v___x_422_; 
lean_dec_ref(v___x_342_);
lean_dec_ref(v_arg_331_);
lean_dec_ref(v_e_315_);
lean_inc_ref(v_arg_341_);
v___x_422_ = l_Lean_Meta_getLitValueModulus_x3f(v_arg_341_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_484_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_484_ == 0)
{
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_484_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_484_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
if (lean_obj_tag(v_a_423_) == 1)
{
lean_object* v_val_427_; lean_object* v___x_428_; 
v_val_427_ = lean_ctor_get(v_a_423_, 0);
lean_inc(v_val_427_);
lean_dec_ref_known(v_a_423_, 1);
v___x_428_ = l_Lean_Meta_getNatValue_x3f(v_arg_336_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_336_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_471_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_471_ == 0)
{
v___x_431_ = v___x_428_;
v_isShared_432_ = v_isSharedCheck_471_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_428_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_471_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
if (lean_obj_tag(v_a_429_) == 1)
{
lean_object* v_val_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_466_; 
lean_del_object(v___x_425_);
v_val_438_ = lean_ctor_get(v_a_429_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v_a_429_);
if (v_isSharedCheck_466_ == 0)
{
v___x_440_ = v_a_429_;
v_isShared_441_ = v_isSharedCheck_466_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_val_438_);
lean_dec(v_a_429_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_466_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = lean_nat_dec_eq(v_val_427_, v___x_442_);
if (v___x_443_ == 0)
{
uint8_t v___x_444_; 
v___x_444_ = lean_nat_dec_lt(v_val_438_, v_val_427_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_del_object(v___x_431_);
v___x_445_ = lean_nat_mod(v_val_438_, v_val_427_);
lean_dec(v_val_427_);
lean_dec(v_val_438_);
v___x_446_ = l_Lean_Meta_mkNumeral(v_arg_341_, v___x_445_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_457_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v_a_447_);
v___x_452_ = v___x_440_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_456_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_454_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_452_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_del_object(v___x_440_);
v_a_458_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_446_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_446_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
else
{
lean_del_object(v___x_440_);
lean_dec(v_val_438_);
lean_dec(v_val_427_);
lean_dec_ref(v_arg_341_);
goto v___jp_433_;
}
}
else
{
lean_del_object(v___x_440_);
lean_dec(v_val_438_);
lean_dec(v_val_427_);
lean_dec_ref(v_arg_341_);
goto v___jp_433_;
}
}
}
else
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_del_object(v___x_431_);
lean_dec(v_a_429_);
lean_dec(v_val_427_);
lean_dec_ref(v_arg_341_);
v___x_467_ = lean_box(0);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_467_);
v___x_469_ = v___x_425_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
v___jp_433_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = lean_box(0);
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
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v_val_427_);
lean_del_object(v___x_425_);
lean_dec_ref(v_arg_341_);
v_a_472_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_428_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_428_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_482_; 
lean_dec(v_a_423_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_336_);
v___x_480_ = lean_box(0);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_480_);
v___x_482_ = v___x_425_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_336_);
v_a_485_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_422_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_422_);
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
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
}
else
{
lean_object* v___x_493_; 
lean_dec_ref(v___x_337_);
v___x_493_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
if (lean_obj_tag(v_a_494_) == 1)
{
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_331_);
return v___x_493_;
}
else
{
lean_object* v___x_495_; 
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = l_Lean_Meta_getNatValue_x3f(v_arg_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_331_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_531_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_531_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_531_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_531_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
if (lean_obj_tag(v_a_496_) == 1)
{
lean_object* v_val_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_526_; 
lean_del_object(v___x_498_);
v_val_500_ = lean_ctor_get(v_a_496_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v_a_496_);
if (v_isSharedCheck_526_ == 0)
{
v___x_502_ = v_a_496_;
v_isShared_503_ = v_isSharedCheck_526_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_val_500_);
lean_dec(v_a_496_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_526_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2);
v___x_505_ = l_Lean_Expr_app___override(v___x_504_, v_arg_336_);
v___x_506_ = l_Lean_Meta_mkNumeral(v___x_505_, v_val_500_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_517_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_517_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_517_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_517_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v_a_507_);
v___x_512_ = v___x_502_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_516_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_514_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_512_);
v___x_514_ = v___x_509_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_502_);
v_a_518_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_506_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_506_);
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
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v___x_527_; lean_object* v___x_529_; 
lean_dec(v_a_496_);
lean_dec_ref(v_arg_336_);
v___x_527_ = lean_box(0);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_527_);
v___x_529_ = v___x_498_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
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
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v_arg_336_);
v_a_532_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_495_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_495_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
else
{
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_331_);
return v___x_493_;
}
}
}
}
else
{
uint8_t v___x_540_; 
lean_dec_ref(v___x_332_);
v___x_540_ = l_Lean_Expr_isCharLit(v_e_315_);
lean_dec_ref(v_e_315_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
lean_del_object(v___x_327_);
v___x_541_ = l_Lean_Meta_getNatValue_x3f(v_arg_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_331_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_566_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_566_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_566_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_566_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
if (lean_obj_tag(v_a_542_) == 1)
{
lean_object* v_val_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_561_; 
v_val_546_ = lean_ctor_get(v_a_542_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v_a_542_);
if (v_isSharedCheck_561_ == 0)
{
v___x_548_ = v_a_542_;
v_isShared_549_ = v_isSharedCheck_561_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_val_546_);
lean_dec(v_a_542_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_561_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
uint32_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_550_ = l_Char_ofNat(v_val_546_);
lean_dec(v_val_546_);
v___x_551_ = lean_obj_once(&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9, &l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9_once, _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9);
v___x_552_ = lean_uint32_to_nat(v___x_550_);
v___x_553_ = l_Lean_mkRawNatLit(v___x_552_);
v___x_554_ = l_Lean_Expr_app___override(v___x_551_, v___x_553_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_554_);
v___x_556_ = v___x_548_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_560_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_558_; 
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_556_);
v___x_558_ = v___x_544_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
else
{
lean_object* v___x_562_; lean_object* v___x_564_; 
lean_dec(v_a_542_);
v___x_562_ = lean_box(0);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_562_);
v___x_564_ = v___x_544_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
v_a_567_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_541_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_541_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
else
{
lean_object* v___x_575_; lean_object* v___x_577_; 
lean_dec_ref(v_arg_331_);
v___x_575_ = lean_box(0);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_575_);
v___x_577_ = v___x_327_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
lean_dec_ref(v_e_315_);
v_a_580_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_324_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_324_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
v___jp_321_:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_box(0);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___boxed(lean_object* v_e_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_e_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(lean_object* v_e_597_, lean_object* v_k_598_, uint8_t v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0));
v___x_608_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1));
if (v_a_599_ == 0)
{
lean_object* v___x_609_; lean_object* v_canon_610_; lean_object* v_cache_611_; lean_object* v___x_612_; 
v___x_609_ = lean_st_ref_get(v_a_601_);
v_canon_610_ = lean_ctor_get(v___x_609_, 11);
lean_inc_ref(v_canon_610_);
lean_dec(v___x_609_);
v_cache_611_ = lean_ctor_get(v_canon_610_, 0);
lean_inc_ref(v_cache_611_);
lean_dec_ref(v_canon_610_);
lean_inc_ref(v_e_597_);
v___x_612_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_607_, v___x_608_, v_cache_611_, v_e_597_);
lean_dec_ref(v_cache_611_);
if (lean_obj_tag(v___x_612_) == 1)
{
lean_object* v_val_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref(v_k_598_);
lean_dec_ref(v_e_597_);
v_val_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_val_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 0);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_val_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; 
lean_dec(v___x_612_);
v___x_621_ = lean_box(v_a_599_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
lean_inc(v_a_601_);
lean_inc_ref(v_a_600_);
v___x_622_ = lean_apply_8(v_k_598_, v___x_621_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_663_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_663_ == 0)
{
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_663_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_663_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v_canon_628_; lean_object* v_share_629_; lean_object* v_maxFVar_630_; lean_object* v_proofInstInfo_631_; lean_object* v_proofInstInfoFVar_632_; lean_object* v_inferType_633_; lean_object* v_getLevel_634_; lean_object* v_congrInfo_635_; lean_object* v_congrInfoFixedUDec_636_; lean_object* v_defEqI_637_; lean_object* v_extensions_638_; lean_object* v_issues_639_; lean_object* v_instanceOverrides_640_; uint8_t v_debug_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_662_; 
v___x_627_ = lean_st_ref_take(v_a_601_);
v_canon_628_ = lean_ctor_get(v___x_627_, 11);
v_share_629_ = lean_ctor_get(v___x_627_, 0);
v_maxFVar_630_ = lean_ctor_get(v___x_627_, 1);
v_proofInstInfo_631_ = lean_ctor_get(v___x_627_, 2);
v_proofInstInfoFVar_632_ = lean_ctor_get(v___x_627_, 3);
v_inferType_633_ = lean_ctor_get(v___x_627_, 4);
v_getLevel_634_ = lean_ctor_get(v___x_627_, 5);
v_congrInfo_635_ = lean_ctor_get(v___x_627_, 6);
v_congrInfoFixedUDec_636_ = lean_ctor_get(v___x_627_, 7);
v_defEqI_637_ = lean_ctor_get(v___x_627_, 8);
v_extensions_638_ = lean_ctor_get(v___x_627_, 9);
v_issues_639_ = lean_ctor_get(v___x_627_, 10);
v_instanceOverrides_640_ = lean_ctor_get(v___x_627_, 12);
v_debug_641_ = lean_ctor_get_uint8(v___x_627_, sizeof(void*)*13);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_662_ == 0)
{
v___x_643_ = v___x_627_;
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_instanceOverrides_640_);
lean_inc(v_canon_628_);
lean_inc(v_issues_639_);
lean_inc(v_extensions_638_);
lean_inc(v_defEqI_637_);
lean_inc(v_congrInfoFixedUDec_636_);
lean_inc(v_congrInfo_635_);
lean_inc(v_getLevel_634_);
lean_inc(v_inferType_633_);
lean_inc(v_proofInstInfoFVar_632_);
lean_inc(v_proofInstInfo_631_);
lean_inc(v_maxFVar_630_);
lean_inc(v_share_629_);
lean_dec(v___x_627_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v_cache_645_; lean_object* v_cacheInType_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_661_; 
v_cache_645_ = lean_ctor_get(v_canon_628_, 0);
v_cacheInType_646_ = lean_ctor_get(v_canon_628_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_canon_628_);
if (v_isSharedCheck_661_ == 0)
{
v___x_648_ = v_canon_628_;
v_isShared_649_ = v_isSharedCheck_661_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_cacheInType_646_);
lean_inc(v_cache_645_);
lean_dec(v_canon_628_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_661_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
lean_inc(v_a_623_);
v___x_650_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_607_, v___x_608_, v_cache_645_, v_e_597_, v_a_623_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 0, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_cacheInType_646_);
v___x_652_ = v_reuseFailAlloc_660_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_654_; 
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 11, v___x_652_);
v___x_654_ = v___x_643_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_share_629_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_maxFVar_630_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v_proofInstInfo_631_);
lean_ctor_set(v_reuseFailAlloc_659_, 3, v_proofInstInfoFVar_632_);
lean_ctor_set(v_reuseFailAlloc_659_, 4, v_inferType_633_);
lean_ctor_set(v_reuseFailAlloc_659_, 5, v_getLevel_634_);
lean_ctor_set(v_reuseFailAlloc_659_, 6, v_congrInfo_635_);
lean_ctor_set(v_reuseFailAlloc_659_, 7, v_congrInfoFixedUDec_636_);
lean_ctor_set(v_reuseFailAlloc_659_, 8, v_defEqI_637_);
lean_ctor_set(v_reuseFailAlloc_659_, 9, v_extensions_638_);
lean_ctor_set(v_reuseFailAlloc_659_, 10, v_issues_639_);
lean_ctor_set(v_reuseFailAlloc_659_, 11, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_659_, 12, v_instanceOverrides_640_);
lean_ctor_set_uint8(v_reuseFailAlloc_659_, sizeof(void*)*13, v_debug_641_);
v___x_654_ = v_reuseFailAlloc_659_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = lean_st_ref_put(v_a_601_, v___x_654_);
if (v_isShared_626_ == 0)
{
v___x_657_ = v___x_625_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_623_);
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
}
}
}
else
{
lean_dec_ref(v_e_597_);
return v___x_622_;
}
}
}
else
{
lean_object* v___x_664_; lean_object* v_canon_665_; lean_object* v_cacheInType_666_; lean_object* v___x_667_; 
v___x_664_ = lean_st_ref_get(v_a_601_);
v_canon_665_ = lean_ctor_get(v___x_664_, 11);
lean_inc_ref(v_canon_665_);
lean_dec(v___x_664_);
v_cacheInType_666_ = lean_ctor_get(v_canon_665_, 1);
lean_inc_ref(v_cacheInType_666_);
lean_dec_ref(v_canon_665_);
lean_inc_ref(v_e_597_);
v___x_667_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_607_, v___x_608_, v_cacheInType_666_, v_e_597_);
lean_dec_ref(v_cacheInType_666_);
if (lean_obj_tag(v___x_667_) == 1)
{
lean_object* v_val_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec_ref(v_k_598_);
lean_dec_ref(v_e_597_);
v_val_668_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_val_668_);
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 0);
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_val_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec(v___x_667_);
v___x_676_ = lean_box(v_a_599_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
lean_inc(v_a_601_);
lean_inc_ref(v_a_600_);
v___x_677_ = lean_apply_8(v_k_598_, v___x_676_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_718_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_718_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_718_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_718_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v_canon_683_; lean_object* v_share_684_; lean_object* v_maxFVar_685_; lean_object* v_proofInstInfo_686_; lean_object* v_proofInstInfoFVar_687_; lean_object* v_inferType_688_; lean_object* v_getLevel_689_; lean_object* v_congrInfo_690_; lean_object* v_congrInfoFixedUDec_691_; lean_object* v_defEqI_692_; lean_object* v_extensions_693_; lean_object* v_issues_694_; lean_object* v_instanceOverrides_695_; uint8_t v_debug_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_717_; 
v___x_682_ = lean_st_ref_take(v_a_601_);
v_canon_683_ = lean_ctor_get(v___x_682_, 11);
v_share_684_ = lean_ctor_get(v___x_682_, 0);
v_maxFVar_685_ = lean_ctor_get(v___x_682_, 1);
v_proofInstInfo_686_ = lean_ctor_get(v___x_682_, 2);
v_proofInstInfoFVar_687_ = lean_ctor_get(v___x_682_, 3);
v_inferType_688_ = lean_ctor_get(v___x_682_, 4);
v_getLevel_689_ = lean_ctor_get(v___x_682_, 5);
v_congrInfo_690_ = lean_ctor_get(v___x_682_, 6);
v_congrInfoFixedUDec_691_ = lean_ctor_get(v___x_682_, 7);
v_defEqI_692_ = lean_ctor_get(v___x_682_, 8);
v_extensions_693_ = lean_ctor_get(v___x_682_, 9);
v_issues_694_ = lean_ctor_get(v___x_682_, 10);
v_instanceOverrides_695_ = lean_ctor_get(v___x_682_, 12);
v_debug_696_ = lean_ctor_get_uint8(v___x_682_, sizeof(void*)*13);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_717_ == 0)
{
v___x_698_ = v___x_682_;
v_isShared_699_ = v_isSharedCheck_717_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_instanceOverrides_695_);
lean_inc(v_canon_683_);
lean_inc(v_issues_694_);
lean_inc(v_extensions_693_);
lean_inc(v_defEqI_692_);
lean_inc(v_congrInfoFixedUDec_691_);
lean_inc(v_congrInfo_690_);
lean_inc(v_getLevel_689_);
lean_inc(v_inferType_688_);
lean_inc(v_proofInstInfoFVar_687_);
lean_inc(v_proofInstInfo_686_);
lean_inc(v_maxFVar_685_);
lean_inc(v_share_684_);
lean_dec(v___x_682_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_717_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v_cache_700_; lean_object* v_cacheInType_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_716_; 
v_cache_700_ = lean_ctor_get(v_canon_683_, 0);
v_cacheInType_701_ = lean_ctor_get(v_canon_683_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_canon_683_);
if (v_isSharedCheck_716_ == 0)
{
v___x_703_ = v_canon_683_;
v_isShared_704_ = v_isSharedCheck_716_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_cacheInType_701_);
lean_inc(v_cache_700_);
lean_dec(v_canon_683_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_716_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
lean_inc(v_a_678_);
v___x_705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_607_, v___x_608_, v_cacheInType_701_, v_e_597_, v_a_678_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_705_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_cache_700_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_705_);
v___x_707_ = v_reuseFailAlloc_715_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 11, v___x_707_);
v___x_709_ = v___x_698_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_share_684_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v_maxFVar_685_);
lean_ctor_set(v_reuseFailAlloc_714_, 2, v_proofInstInfo_686_);
lean_ctor_set(v_reuseFailAlloc_714_, 3, v_proofInstInfoFVar_687_);
lean_ctor_set(v_reuseFailAlloc_714_, 4, v_inferType_688_);
lean_ctor_set(v_reuseFailAlloc_714_, 5, v_getLevel_689_);
lean_ctor_set(v_reuseFailAlloc_714_, 6, v_congrInfo_690_);
lean_ctor_set(v_reuseFailAlloc_714_, 7, v_congrInfoFixedUDec_691_);
lean_ctor_set(v_reuseFailAlloc_714_, 8, v_defEqI_692_);
lean_ctor_set(v_reuseFailAlloc_714_, 9, v_extensions_693_);
lean_ctor_set(v_reuseFailAlloc_714_, 10, v_issues_694_);
lean_ctor_set(v_reuseFailAlloc_714_, 11, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_714_, 12, v_instanceOverrides_695_);
lean_ctor_set_uint8(v_reuseFailAlloc_714_, sizeof(void*)*13, v_debug_696_);
v___x_709_ = v_reuseFailAlloc_714_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_710_ = lean_st_ref_put(v_a_601_, v___x_709_);
if (v_isShared_681_ == 0)
{
v___x_712_ = v___x_680_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_678_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_597_);
return v___x_677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___boxed(lean_object* v_e_719_, lean_object* v_k_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
uint8_t v_a_boxed_729_; lean_object* v_res_730_; 
v_a_boxed_729_ = lean_unbox(v_a_721_);
v_res_730_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(v_e_719_, v_k_720_, v_a_boxed_729_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
return v_res_730_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(lean_object* v_e_737_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_738_ = l_Lean_Expr_cleanupAnnotations(v_e_737_);
v___x_739_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1));
v___x_740_ = l_Lean_Expr_isConstOf(v___x_738_, v___x_739_);
if (v___x_740_ == 0)
{
uint8_t v___x_741_; 
v___x_741_ = l_Lean_Expr_isApp(v___x_738_);
if (v___x_741_ == 0)
{
lean_dec_ref(v___x_738_);
return v___x_741_;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = l_Lean_Expr_appFnCleanup___redArg(v___x_738_);
v___x_743_ = l_Lean_Expr_isApp(v___x_742_);
if (v___x_743_ == 0)
{
lean_dec_ref(v___x_742_);
lean_dec_ref(v___x_738_);
return v___x_743_;
}
else
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = l_Lean_Expr_appFnCleanup___redArg(v___x_742_);
v___x_745_ = l_Lean_Expr_isApp(v___x_744_);
if (v___x_745_ == 0)
{
lean_dec_ref(v___x_744_);
lean_dec_ref(v___x_742_);
lean_dec_ref(v___x_738_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_746_ = l_Lean_Expr_appFnCleanup___redArg(v___x_744_);
lean_dec_ref(v___x_744_);
v___x_747_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3));
v___x_748_ = l_Lean_Expr_isConstOf(v___x_746_, v___x_747_);
lean_dec_ref(v___x_746_);
if (v___x_748_ == 0)
{
lean_dec_ref(v___x_742_);
lean_dec_ref(v___x_738_);
return v___x_748_;
}
else
{
lean_object* v_arg_749_; uint8_t v___x_750_; 
v_arg_749_ = lean_ctor_get(v___x_742_, 1);
lean_inc_ref(v_arg_749_);
lean_dec_ref(v___x_742_);
v___x_750_ = l_Lean_Expr_isBoolTrue(v_arg_749_);
lean_dec_ref(v_arg_749_);
if (v___x_750_ == 0)
{
lean_dec_ref(v___x_738_);
return v___x_750_;
}
else
{
lean_object* v_arg_751_; uint8_t v___x_752_; 
v_arg_751_ = lean_ctor_get(v___x_738_, 1);
lean_inc_ref(v_arg_751_);
lean_dec_ref(v___x_738_);
v___x_752_ = l_Lean_Expr_isBoolTrue(v_arg_751_);
lean_dec_ref(v_arg_751_);
return v___x_752_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_738_);
return v___x_740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___boxed(lean_object* v_e_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(v_e_753_);
lean_dec_ref(v_e_753_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(lean_object* v_e_759_){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_760_ = l_Lean_Expr_cleanupAnnotations(v_e_759_);
v___x_761_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1));
v___x_762_ = l_Lean_Expr_isConstOf(v___x_760_, v___x_761_);
if (v___x_762_ == 0)
{
uint8_t v___x_763_; 
v___x_763_ = l_Lean_Expr_isApp(v___x_760_);
if (v___x_763_ == 0)
{
lean_dec_ref(v___x_760_);
return v___x_763_;
}
else
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = l_Lean_Expr_appFnCleanup___redArg(v___x_760_);
v___x_765_ = l_Lean_Expr_isApp(v___x_764_);
if (v___x_765_ == 0)
{
lean_dec_ref(v___x_764_);
lean_dec_ref(v___x_760_);
return v___x_765_;
}
else
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = l_Lean_Expr_appFnCleanup___redArg(v___x_764_);
v___x_767_ = l_Lean_Expr_isApp(v___x_766_);
if (v___x_767_ == 0)
{
lean_dec_ref(v___x_766_);
lean_dec_ref(v___x_764_);
lean_dec_ref(v___x_760_);
return v___x_767_;
}
else
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_768_ = l_Lean_Expr_appFnCleanup___redArg(v___x_766_);
lean_dec_ref(v___x_766_);
v___x_769_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3));
v___x_770_ = l_Lean_Expr_isConstOf(v___x_768_, v___x_769_);
lean_dec_ref(v___x_768_);
if (v___x_770_ == 0)
{
lean_dec_ref(v___x_764_);
lean_dec_ref(v___x_760_);
return v___x_770_;
}
else
{
lean_object* v_arg_771_; uint8_t v___x_772_; 
v_arg_771_ = lean_ctor_get(v___x_764_, 1);
lean_inc_ref(v_arg_771_);
lean_dec_ref(v___x_764_);
v___x_772_ = l_Lean_Expr_isBoolFalse(v_arg_771_);
lean_dec_ref(v_arg_771_);
if (v___x_772_ == 0)
{
lean_dec_ref(v___x_760_);
return v___x_772_;
}
else
{
lean_object* v_arg_773_; uint8_t v___x_774_; 
v_arg_773_ = lean_ctor_get(v___x_760_, 1);
lean_inc_ref(v_arg_773_);
lean_dec_ref(v___x_760_);
v___x_774_ = l_Lean_Expr_isBoolTrue(v_arg_773_);
lean_dec_ref(v_arg_773_);
return v___x_774_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_760_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___boxed(lean_object* v_e_775_){
_start:
{
uint8_t v_res_776_; lean_object* v_r_777_; 
v_res_776_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(v_e_775_);
lean_dec_ref(v_e_775_);
v_r_777_ = lean_box(v_res_776_);
return v_r_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl(uint8_t v_x_778_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_box(v_x_778_);
v___x_780_ = lean_obj_tag_nat(v___x_779_);
lean_dec(v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl___boxed(lean_object* v_x_781_){
_start:
{
uint8_t v_x_4__boxed_782_; lean_object* v_res_783_; 
v_x_4__boxed_782_ = lean_unbox(v_x_781_);
v_res_783_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl(v_x_4__boxed_782_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(lean_object* v_k_784_){
_start:
{
lean_inc(v_k_784_);
return v_k_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object* v_k_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(v_k_785_);
lean_dec(v_k_785_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(lean_object* v_motive_787_, lean_object* v_ctorIdx_788_, uint8_t v_t_789_, lean_object* v_h_790_, lean_object* v_k_791_){
_start:
{
lean_inc(v_k_791_);
return v_k_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___boxed(lean_object* v_motive_792_, lean_object* v_ctorIdx_793_, lean_object* v_t_794_, lean_object* v_h_795_, lean_object* v_k_796_){
_start:
{
uint8_t v_t_boxed_797_; lean_object* v_res_798_; 
v_t_boxed_797_ = lean_unbox(v_t_794_);
v_res_798_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(v_motive_792_, v_ctorIdx_793_, v_t_boxed_797_, v_h_795_, v_k_796_);
lean_dec(v_k_796_);
lean_dec(v_ctorIdx_793_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object* v_canonType_799_){
_start:
{
lean_inc(v_canonType_799_);
return v_canonType_799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object* v_canonType_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(v_canonType_800_);
lean_dec(v_canonType_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(lean_object* v_motive_802_, uint8_t v_t_803_, lean_object* v_h_804_, lean_object* v_canonType_805_){
_start:
{
lean_inc(v_canonType_805_);
return v_canonType_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object* v_motive_806_, lean_object* v_t_807_, lean_object* v_h_808_, lean_object* v_canonType_809_){
_start:
{
uint8_t v_t_boxed_810_; lean_object* v_res_811_; 
v_t_boxed_810_ = lean_unbox(v_t_807_);
v_res_811_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(v_motive_806_, v_t_boxed_810_, v_h_808_, v_canonType_809_);
lean_dec(v_canonType_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object* v_canonInst_812_){
_start:
{
lean_inc(v_canonInst_812_);
return v_canonInst_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object* v_canonInst_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(v_canonInst_813_);
lean_dec(v_canonInst_813_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(lean_object* v_motive_815_, uint8_t v_t_816_, lean_object* v_h_817_, lean_object* v_canonInst_818_){
_start:
{
lean_inc(v_canonInst_818_);
return v_canonInst_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object* v_motive_819_, lean_object* v_t_820_, lean_object* v_h_821_, lean_object* v_canonInst_822_){
_start:
{
uint8_t v_t_boxed_823_; lean_object* v_res_824_; 
v_t_boxed_823_ = lean_unbox(v_t_820_);
v_res_824_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(v_motive_819_, v_t_boxed_823_, v_h_821_, v_canonInst_822_);
lean_dec(v_canonInst_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object* v_canonImplicit_825_){
_start:
{
lean_inc(v_canonImplicit_825_);
return v_canonImplicit_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object* v_canonImplicit_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(v_canonImplicit_826_);
lean_dec(v_canonImplicit_826_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(lean_object* v_motive_828_, uint8_t v_t_829_, lean_object* v_h_830_, lean_object* v_canonImplicit_831_){
_start:
{
lean_inc(v_canonImplicit_831_);
return v_canonImplicit_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object* v_motive_832_, lean_object* v_t_833_, lean_object* v_h_834_, lean_object* v_canonImplicit_835_){
_start:
{
uint8_t v_t_boxed_836_; lean_object* v_res_837_; 
v_t_boxed_836_ = lean_unbox(v_t_833_);
v_res_837_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(v_motive_832_, v_t_boxed_836_, v_h_834_, v_canonImplicit_835_);
lean_dec(v_canonImplicit_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(lean_object* v_visit_838_){
_start:
{
lean_inc(v_visit_838_);
return v_visit_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object* v_visit_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(v_visit_839_);
lean_dec(v_visit_839_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(lean_object* v_motive_841_, uint8_t v_t_842_, lean_object* v_h_843_, lean_object* v_visit_844_){
_start:
{
lean_inc(v_visit_844_);
return v_visit_844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___boxed(lean_object* v_motive_845_, lean_object* v_t_846_, lean_object* v_h_847_, lean_object* v_visit_848_){
_start:
{
uint8_t v_t_boxed_849_; lean_object* v_res_850_; 
v_t_boxed_849_ = lean_unbox(v_t_846_);
v_res_850_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(v_motive_845_, v_t_boxed_849_, v_h_847_, v_visit_848_);
lean_dec(v_visit_848_);
return v_res_850_;
}
}
static uint8_t _init_l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default(void){
_start:
{
uint8_t v___x_851_; 
v___x_851_ = 0;
return v___x_851_;
}
}
static uint8_t _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult(void){
_start:
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(uint8_t v_r_865_, lean_object* v_x_866_){
_start:
{
switch(v_r_865_)
{
case 0:
{
lean_object* v___x_867_; 
v___x_867_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1));
return v___x_867_;
}
case 1:
{
lean_object* v___x_868_; 
v___x_868_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3));
return v___x_868_;
}
case 2:
{
lean_object* v___x_869_; 
v___x_869_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5));
return v___x_869_;
}
default: 
{
lean_object* v___x_870_; 
v___x_870_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7));
return v___x_870_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object* v_r_871_, lean_object* v_x_872_){
_start:
{
uint8_t v_r_boxed_873_; lean_object* v_res_874_; 
v_r_boxed_873_ = lean_unbox(v_r_871_);
v_res_874_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(v_r_boxed_873_, v_x_872_);
lean_dec(v_x_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(lean_object* v_pinfos_877_, lean_object* v_i_878_, lean_object* v_arg_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = lean_array_get_size(v_pinfos_877_);
v___x_936_ = lean_nat_dec_lt(v_i_878_, v___x_935_);
if (v___x_936_ == 0)
{
v___y_886_ = v_a_880_;
v___y_887_ = v_a_881_;
v___y_888_ = v_a_882_;
v___y_889_ = v_a_883_;
goto v___jp_885_;
}
else
{
lean_object* v_pinfo_937_; uint8_t v_isInstance_938_; 
v_pinfo_937_ = lean_array_fget_borrowed(v_pinfos_877_, v_i_878_);
v_isInstance_938_ = lean_ctor_get_uint8(v_pinfo_937_, sizeof(void*)*1 + 5);
if (v_isInstance_938_ == 0)
{
uint8_t v_isProp_939_; 
v_isProp_939_ = lean_ctor_get_uint8(v_pinfo_937_, sizeof(void*)*1 + 2);
if (v_isProp_939_ == 0)
{
uint8_t v___x_940_; 
v___x_940_ = l_Lean_Meta_ParamInfo_isImplicit(v_pinfo_937_);
if (v___x_940_ == 0)
{
v___y_886_ = v_a_880_;
v___y_887_ = v_a_881_;
v___y_888_ = v_a_882_;
v___y_889_ = v_a_883_;
goto v___jp_885_;
}
else
{
lean_object* v___x_941_; 
v___x_941_ = l_Lean_Meta_isTypeFormer(v_arg_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_957_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_957_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_957_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_957_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
uint8_t v___x_946_; 
v___x_946_ = lean_unbox(v_a_942_);
lean_dec(v_a_942_);
if (v___x_946_ == 0)
{
uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_947_ = 2;
v___x_948_ = lean_box(v___x_947_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_948_);
v___x_950_ = v___x_944_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
else
{
uint8_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_952_ = 0;
v___x_953_ = lean_box(v___x_952_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_953_);
v___x_955_ = v___x_944_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
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
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
v_a_958_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_941_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_941_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
else
{
uint8_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref(v_arg_879_);
v___x_966_ = 3;
v___x_967_ = lean_box(v___x_966_);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
}
else
{
uint8_t v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec_ref(v_arg_879_);
v___x_969_ = 1;
v___x_970_ = lean_box(v___x_969_);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
v___jp_885_:
{
lean_object* v___x_890_; 
lean_inc_ref(v_arg_879_);
v___x_890_ = l_Lean_Meta_isProp(v_arg_879_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_926_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_926_ == 0)
{
v___x_893_ = v___x_890_;
v_isShared_894_ = v_isSharedCheck_926_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_890_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_926_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; 
v___x_895_ = lean_unbox(v_a_891_);
lean_dec(v_a_891_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_del_object(v___x_893_);
v___x_896_ = l_Lean_Meta_isTypeFormer(v_arg_879_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_912_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_912_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_912_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_912_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
uint8_t v___x_901_; 
v___x_901_ = lean_unbox(v_a_897_);
lean_dec(v_a_897_);
if (v___x_901_ == 0)
{
uint8_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_902_ = 3;
v___x_903_ = lean_box(v___x_902_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_903_);
v___x_905_ = v___x_899_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
else
{
uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_907_ = 0;
v___x_908_ = lean_box(v___x_907_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_908_);
v___x_910_ = v___x_899_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
v_a_913_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_896_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_896_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
uint8_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
lean_dec_ref(v_arg_879_);
v___x_921_ = 3;
v___x_922_ = lean_box(v___x_921_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_922_);
v___x_924_ = v___x_893_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
lean_dec_ref(v_arg_879_);
v_a_927_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_890_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_890_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon___boxed(lean_object* v_pinfos_972_, lean_object* v_i_973_, lean_object* v_arg_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v_pinfos_972_, v_i_973_, v_arg_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_);
lean_dec(v_a_978_);
lean_dec_ref(v_a_977_);
lean_dec(v_a_976_);
lean_dec_ref(v_a_975_);
lean_dec(v_i_973_);
lean_dec_ref(v_pinfos_972_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(lean_object* v_e_981_, lean_object* v_offset_982_){
_start:
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = lean_unsigned_to_nat(0u);
v___x_984_ = lean_nat_dec_eq(v_offset_982_, v___x_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = l_Lean_mkNatLit(v_offset_982_);
v___x_986_ = l_Lean_mkNatAdd(v_e_981_, v___x_985_);
return v___x_986_;
}
else
{
lean_dec(v_offset_982_);
return v_e_981_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_987_; lean_object* v_dummy_988_; 
v___x_987_ = lean_box(0);
v_dummy_988_ = l_Lean_Expr_sort___override(v___x_987_);
return v_dummy_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(lean_object* v_info_989_, lean_object* v_e_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_){
_start:
{
uint8_t v_fromClass_996_; 
v_fromClass_996_ = lean_ctor_get_uint8(v_info_989_, sizeof(void*)*3);
if (v_fromClass_996_ == 0)
{
lean_object* v___x_997_; 
v___x_997_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_990_, v_fromClass_996_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1033_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1033_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1033_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
if (lean_obj_tag(v_a_998_) == 1)
{
lean_object* v_val_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_del_object(v___x_1000_);
v_val_1002_ = lean_ctor_get(v_a_998_, 0);
lean_inc(v_val_1002_);
lean_dec_ref_known(v_a_998_, 1);
v___x_1003_ = l_Lean_Expr_getAppFn(v_val_1002_);
v___x_1004_ = l_Lean_Meta_reduceProj_x3f(v___x_1003_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
if (lean_obj_tag(v_a_1005_) == 0)
{
lean_dec(v_val_1002_);
return v___x_1004_;
}
else
{
lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1027_; 
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1027_ == 0)
{
lean_object* v_unused_1028_; 
v_unused_1028_ = lean_ctor_get(v___x_1004_, 0);
lean_dec(v_unused_1028_);
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1027_;
goto v_resetjp_1006_;
}
else
{
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1027_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v_val_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1026_; 
v_val_1009_ = lean_ctor_get(v_a_1005_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_a_1005_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1011_ = v_a_1005_;
v_isShared_1012_ = v_isSharedCheck_1026_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_val_1009_);
lean_dec(v_a_1005_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1026_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v_dummy_1013_; lean_object* v_nargs_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1021_; 
v_dummy_1013_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0);
v_nargs_1014_ = l_Lean_Expr_getAppNumArgs(v_val_1002_);
lean_inc(v_nargs_1014_);
v___x_1015_ = lean_mk_array(v_nargs_1014_, v_dummy_1013_);
v___x_1016_ = lean_unsigned_to_nat(1u);
v___x_1017_ = lean_nat_sub(v_nargs_1014_, v___x_1016_);
lean_dec(v_nargs_1014_);
v___x_1018_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_1002_, v___x_1015_, v___x_1017_);
v___x_1019_ = l_Lean_mkAppN(v_val_1009_, v___x_1018_);
lean_dec_ref(v___x_1018_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 0, v___x_1019_);
v___x_1021_ = v___x_1011_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1019_);
v___x_1021_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
lean_object* v___x_1023_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1021_);
v___x_1023_ = v___x_1007_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
}
}
else
{
lean_dec(v_val_1002_);
return v___x_1004_;
}
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1031_; 
lean_dec(v_a_998_);
v___x_1029_ = lean_box(0);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v___x_1029_);
v___x_1031_ = v___x_1000_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
else
{
return v___x_997_;
}
}
else
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec_ref(v_e_990_);
v___x_1034_ = lean_box(0);
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___boxed(lean_object* v_info_1036_, lean_object* v_e_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_info_1036_, v_e_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_);
lean_dec(v_a_1041_);
lean_dec_ref(v_a_1040_);
lean_dec(v_a_1039_);
lean_dec_ref(v_a_1038_);
lean_dec_ref(v_info_1036_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(lean_object* v_info_1044_, lean_object* v_e_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_info_1044_, v_e_1045_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___boxed(lean_object* v_info_1054_, lean_object* v_e_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(v_info_1054_, v_e_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec_ref(v_info_1054_);
return v_res_1063_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(lean_object* v_e_1064_){
_start:
{
lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1065_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3));
v___x_1066_ = l_Lean_Expr_isConstOf(v_e_1064_, v___x_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat___boxed(lean_object* v_e_1067_){
_start:
{
uint8_t v_res_1068_; lean_object* v_r_1069_; 
v_res_1068_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_e_1067_);
lean_dec_ref(v_e_1067_);
v_r_1069_ = lean_box(v_res_1068_);
return v_r_1069_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(lean_object* v_e_1103_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1104_ = l_Lean_Expr_cleanupAnnotations(v_e_1103_);
v___x_1105_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1));
v___x_1106_ = l_Lean_Expr_isConstOf(v___x_1104_, v___x_1105_);
if (v___x_1106_ == 0)
{
uint8_t v___x_1107_; 
v___x_1107_ = l_Lean_Expr_isApp(v___x_1104_);
if (v___x_1107_ == 0)
{
lean_dec_ref(v___x_1104_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1108_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1104_);
lean_dec_ref(v___x_1104_);
v___x_1109_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3));
v___x_1110_ = l_Lean_Expr_isConstOf(v___x_1108_, v___x_1109_);
if (v___x_1110_ == 0)
{
uint8_t v___x_1111_; 
v___x_1111_ = l_Lean_Expr_isApp(v___x_1108_);
if (v___x_1111_ == 0)
{
lean_dec_ref(v___x_1108_);
return v___x_1111_;
}
else
{
lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1112_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1108_);
lean_dec_ref(v___x_1108_);
v___x_1113_ = l_Lean_Expr_isApp(v___x_1112_);
if (v___x_1113_ == 0)
{
lean_dec_ref(v___x_1112_);
return v___x_1113_;
}
else
{
lean_object* v___x_1114_; uint8_t v___x_1115_; 
v___x_1114_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1112_);
lean_dec_ref(v___x_1112_);
v___x_1115_ = l_Lean_Expr_isApp(v___x_1114_);
if (v___x_1115_ == 0)
{
lean_dec_ref(v___x_1114_);
return v___x_1115_;
}
else
{
lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1116_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1114_);
lean_dec_ref(v___x_1114_);
v___x_1117_ = l_Lean_Expr_isApp(v___x_1116_);
if (v___x_1117_ == 0)
{
lean_dec_ref(v___x_1116_);
return v___x_1117_;
}
else
{
lean_object* v___x_1118_; uint8_t v___x_1119_; 
v___x_1118_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1116_);
lean_dec_ref(v___x_1116_);
v___x_1119_ = l_Lean_Expr_isApp(v___x_1118_);
if (v___x_1119_ == 0)
{
lean_dec_ref(v___x_1118_);
return v___x_1119_;
}
else
{
lean_object* v_arg_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v_arg_1120_ = lean_ctor_get(v___x_1118_, 1);
lean_inc_ref(v_arg_1120_);
v___x_1121_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1118_);
lean_dec_ref(v___x_1118_);
v___x_1122_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6));
v___x_1123_ = l_Lean_Expr_isConstOf(v___x_1121_, v___x_1122_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1124_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9));
v___x_1125_ = l_Lean_Expr_isConstOf(v___x_1121_, v___x_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1126_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12));
v___x_1127_ = l_Lean_Expr_isConstOf(v___x_1121_, v___x_1126_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1128_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15));
v___x_1129_ = l_Lean_Expr_isConstOf(v___x_1121_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18));
v___x_1131_ = l_Lean_Expr_isConstOf(v___x_1121_, v___x_1130_);
lean_dec_ref(v___x_1121_);
if (v___x_1131_ == 0)
{
lean_dec_ref(v_arg_1120_);
return v___x_1131_;
}
else
{
uint8_t v___x_1132_; 
v___x_1132_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1120_);
lean_dec_ref(v_arg_1120_);
return v___x_1132_;
}
}
else
{
uint8_t v___x_1133_; 
lean_dec_ref(v___x_1121_);
v___x_1133_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1120_);
lean_dec_ref(v_arg_1120_);
return v___x_1133_;
}
}
else
{
uint8_t v___x_1134_; 
lean_dec_ref(v___x_1121_);
v___x_1134_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1120_);
lean_dec_ref(v_arg_1120_);
return v___x_1134_;
}
}
else
{
uint8_t v___x_1135_; 
lean_dec_ref(v___x_1121_);
v___x_1135_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1120_);
lean_dec_ref(v_arg_1120_);
return v___x_1135_;
}
}
else
{
uint8_t v___x_1136_; 
lean_dec_ref(v___x_1121_);
v___x_1136_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1120_);
lean_dec_ref(v_arg_1120_);
return v___x_1136_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1108_);
return v___x_1110_;
}
}
}
else
{
lean_dec_ref(v___x_1104_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___boxed(lean_object* v_e_1137_){
_start:
{
uint8_t v_res_1138_; lean_object* v_r_1139_; 
v_res_1138_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(v_e_1137_);
lean_dec_ref(v_e_1137_);
v_r_1139_ = lean_box(v_res_1138_);
return v_r_1139_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0));
v___x_1142_ = l_Lean_stringToMessageData(v___x_1141_);
return v___x_1142_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2));
v___x_1145_ = l_Lean_stringToMessageData(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(lean_object* v_e_1146_, lean_object* v_inst_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v___x_1155_; 
lean_inc_ref(v_inst_1147_);
lean_inc_ref(v_e_1146_);
v___x_1155_ = l_Lean_Meta_Sym_isDefEqI___redArg(v_e_1146_, v_inst_1147_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1206_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1206_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1206_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
uint8_t v___x_1160_; 
v___x_1160_ = lean_unbox(v_a_1156_);
lean_dec(v_a_1156_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
lean_del_object(v___x_1158_);
v___x_1161_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1);
lean_inc_ref(v_e_1146_);
v___x_1162_ = l_Lean_indentExpr(v_e_1146_);
v___x_1163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
v___x_1164_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3);
v___x_1165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = l_Lean_indentExpr(v_inst_1147_);
v___x_1167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
v___x_1168_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1148_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1194_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1171_ = v___x_1168_;
v_isShared_1172_ = v_isSharedCheck_1194_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1168_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1194_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
uint8_t v_verbose_1173_; 
v_verbose_1173_ = lean_ctor_get_uint8(v_a_1169_, 0);
lean_dec(v_a_1169_);
if (v_verbose_1173_ == 0)
{
lean_object* v___x_1175_; 
lean_dec_ref_known(v___x_1167_, 2);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v_e_1146_);
v___x_1175_ = v___x_1171_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_e_1146_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
else
{
lean_object* v___x_1177_; 
lean_del_object(v___x_1171_);
v___x_1177_ = l_Lean_Meta_Sym_reportIssue(v___x_1167_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1184_ == 0)
{
lean_object* v_unused_1185_; 
v_unused_1185_ = lean_ctor_get(v___x_1177_, 0);
lean_dec(v_unused_1185_);
v___x_1179_ = v___x_1177_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_dec(v___x_1177_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v_e_1146_);
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_e_1146_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec_ref(v_e_1146_);
v_a_1186_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1177_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1177_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
lean_dec_ref_known(v___x_1167_, 2);
lean_dec_ref(v_e_1146_);
v_a_1195_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1168_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1168_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
else
{
lean_object* v___x_1204_; 
lean_dec_ref(v_e_1146_);
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v_inst_1147_);
v___x_1204_ = v___x_1158_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_inst_1147_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
lean_dec_ref(v_inst_1147_);
lean_dec_ref(v_e_1146_);
v_a_1207_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1155_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1155_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___boxed(lean_object* v_e_1215_, lean_object* v_inst_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_e_1215_, v_inst_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
lean_dec(v_a_1222_);
lean_dec_ref(v_a_1221_);
lean_dec(v_a_1220_);
lean_dec_ref(v_a_1219_);
lean_dec(v_a_1218_);
lean_dec_ref(v_a_1217_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16___redArg(lean_object* v_a_1225_, lean_object* v_b_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1227_) == 0)
{
lean_dec(v_b_1226_);
lean_dec_ref(v_a_1225_);
return v_x_1227_;
}
else
{
lean_object* v_key_1228_; lean_object* v_value_1229_; lean_object* v_tail_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1242_; 
v_key_1228_ = lean_ctor_get(v_x_1227_, 0);
v_value_1229_ = lean_ctor_get(v_x_1227_, 1);
v_tail_1230_ = lean_ctor_get(v_x_1227_, 2);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_x_1227_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1232_ = v_x_1227_;
v_isShared_1233_ = v_isSharedCheck_1242_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_tail_1230_);
lean_inc(v_value_1229_);
lean_inc(v_key_1228_);
lean_dec(v_x_1227_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1242_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
uint8_t v___x_1234_; 
v___x_1234_ = lean_expr_eqv(v_key_1228_, v_a_1225_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16___redArg(v_a_1225_, v_b_1226_, v_tail_1230_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 2, v___x_1235_);
v___x_1237_ = v___x_1232_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_key_1228_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_value_1229_);
lean_ctor_set(v_reuseFailAlloc_1238_, 2, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
else
{
lean_object* v___x_1240_; 
lean_dec(v_value_1229_);
lean_dec(v_key_1228_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 1, v_b_1226_);
lean_ctor_set(v___x_1232_, 0, v_a_1225_);
v___x_1240_ = v___x_1232_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_a_1225_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_b_1226_);
lean_ctor_set(v_reuseFailAlloc_1241_, 2, v_tail_1230_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33_spec__38___redArg(lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
return v_x_1243_;
}
else
{
lean_object* v_key_1245_; lean_object* v_value_1246_; lean_object* v_tail_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1270_; 
v_key_1245_ = lean_ctor_get(v_x_1244_, 0);
v_value_1246_ = lean_ctor_get(v_x_1244_, 1);
v_tail_1247_ = lean_ctor_get(v_x_1244_, 2);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1249_ = v_x_1244_;
v_isShared_1250_ = v_isSharedCheck_1270_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_tail_1247_);
lean_inc(v_value_1246_);
lean_inc(v_key_1245_);
lean_dec(v_x_1244_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1270_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; uint64_t v___x_1252_; uint64_t v___x_1253_; uint64_t v___x_1254_; uint64_t v_fold_1255_; uint64_t v___x_1256_; uint64_t v___x_1257_; uint64_t v___x_1258_; size_t v___x_1259_; size_t v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1251_ = lean_array_get_size(v_x_1243_);
v___x_1252_ = l_Lean_Expr_hash(v_key_1245_);
v___x_1253_ = 32ULL;
v___x_1254_ = lean_uint64_shift_right(v___x_1252_, v___x_1253_);
v_fold_1255_ = lean_uint64_xor(v___x_1252_, v___x_1254_);
v___x_1256_ = 16ULL;
v___x_1257_ = lean_uint64_shift_right(v_fold_1255_, v___x_1256_);
v___x_1258_ = lean_uint64_xor(v_fold_1255_, v___x_1257_);
v___x_1259_ = lean_uint64_to_usize(v___x_1258_);
v___x_1260_ = lean_usize_of_nat(v___x_1251_);
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_sub(v___x_1260_, v___x_1261_);
v___x_1263_ = lean_usize_land(v___x_1259_, v___x_1262_);
v___x_1264_ = lean_array_uget_borrowed(v_x_1243_, v___x_1263_);
lean_inc(v___x_1264_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 2, v___x_1264_);
v___x_1266_ = v___x_1249_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_key_1245_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_value_1246_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
lean_object* v___x_1267_; 
v___x_1267_ = lean_array_uset(v_x_1243_, v___x_1263_, v___x_1266_);
v_x_1243_ = v___x_1267_;
v_x_1244_ = v_tail_1247_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33___redArg(lean_object* v_i_1271_, lean_object* v_source_1272_, lean_object* v_target_1273_){
_start:
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = lean_array_get_size(v_source_1272_);
v___x_1275_ = lean_nat_dec_lt(v_i_1271_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_dec_ref(v_source_1272_);
lean_dec(v_i_1271_);
return v_target_1273_;
}
else
{
lean_object* v_es_1276_; lean_object* v___x_1277_; lean_object* v_source_1278_; lean_object* v_target_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v_es_1276_ = lean_array_fget(v_source_1272_, v_i_1271_);
v___x_1277_ = lean_box(0);
v_source_1278_ = lean_array_fset(v_source_1272_, v_i_1271_, v___x_1277_);
v_target_1279_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33_spec__38___redArg(v_target_1273_, v_es_1276_);
v___x_1280_ = lean_unsigned_to_nat(1u);
v___x_1281_ = lean_nat_add(v_i_1271_, v___x_1280_);
lean_dec(v_i_1271_);
v_i_1271_ = v___x_1281_;
v_source_1272_ = v_source_1278_;
v_target_1273_ = v_target_1279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(lean_object* v_data_1283_){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v_nbuckets_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1284_ = lean_array_get_size(v_data_1283_);
v___x_1285_ = lean_unsigned_to_nat(2u);
v_nbuckets_1286_ = lean_nat_mul(v___x_1284_, v___x_1285_);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_box(0);
v___x_1289_ = lean_mk_array(v_nbuckets_1286_, v___x_1288_);
v___x_1290_ = lean_array_propagate_mark(v_data_1283_, v___x_1289_);
v___x_1291_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33___redArg(v___x_1287_, v_data_1283_, v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(lean_object* v_a_1292_, lean_object* v_x_1293_){
_start:
{
if (lean_obj_tag(v_x_1293_) == 0)
{
uint8_t v___x_1294_; 
v___x_1294_ = 0;
return v___x_1294_;
}
else
{
lean_object* v_key_1295_; lean_object* v_tail_1296_; uint8_t v___x_1297_; 
v_key_1295_ = lean_ctor_get(v_x_1293_, 0);
v_tail_1296_ = lean_ctor_get(v_x_1293_, 2);
v___x_1297_ = lean_expr_eqv(v_key_1295_, v_a_1292_);
if (v___x_1297_ == 0)
{
v_x_1293_ = v_tail_1296_;
goto _start;
}
else
{
return v___x_1297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg___boxed(lean_object* v_a_1299_, lean_object* v_x_1300_){
_start:
{
uint8_t v_res_1301_; lean_object* v_r_1302_; 
v_res_1301_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_a_1299_, v_x_1300_);
lean_dec(v_x_1300_);
lean_dec_ref(v_a_1299_);
v_r_1302_ = lean_box(v_res_1301_);
return v_r_1302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(lean_object* v_m_1303_, lean_object* v_a_1304_, lean_object* v_b_1305_){
_start:
{
lean_object* v_size_1306_; lean_object* v_buckets_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1350_; 
v_size_1306_ = lean_ctor_get(v_m_1303_, 0);
v_buckets_1307_ = lean_ctor_get(v_m_1303_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_m_1303_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1309_ = v_m_1303_;
v_isShared_1310_ = v_isSharedCheck_1350_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_buckets_1307_);
lean_inc(v_size_1306_);
lean_dec(v_m_1303_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1350_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; uint64_t v___x_1312_; uint64_t v___x_1313_; uint64_t v___x_1314_; uint64_t v_fold_1315_; uint64_t v___x_1316_; uint64_t v___x_1317_; uint64_t v___x_1318_; size_t v___x_1319_; size_t v___x_1320_; size_t v___x_1321_; size_t v___x_1322_; size_t v___x_1323_; lean_object* v_bkt_1324_; uint8_t v___x_1325_; 
v___x_1311_ = lean_array_get_size(v_buckets_1307_);
v___x_1312_ = l_Lean_Expr_hash(v_a_1304_);
v___x_1313_ = 32ULL;
v___x_1314_ = lean_uint64_shift_right(v___x_1312_, v___x_1313_);
v_fold_1315_ = lean_uint64_xor(v___x_1312_, v___x_1314_);
v___x_1316_ = 16ULL;
v___x_1317_ = lean_uint64_shift_right(v_fold_1315_, v___x_1316_);
v___x_1318_ = lean_uint64_xor(v_fold_1315_, v___x_1317_);
v___x_1319_ = lean_uint64_to_usize(v___x_1318_);
v___x_1320_ = lean_usize_of_nat(v___x_1311_);
v___x_1321_ = ((size_t)1ULL);
v___x_1322_ = lean_usize_sub(v___x_1320_, v___x_1321_);
v___x_1323_ = lean_usize_land(v___x_1319_, v___x_1322_);
v_bkt_1324_ = lean_array_uget_borrowed(v_buckets_1307_, v___x_1323_);
v___x_1325_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_a_1304_, v_bkt_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; lean_object* v_size_x27_1327_; lean_object* v___x_1328_; lean_object* v_buckets_x27_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; 
v___x_1326_ = lean_unsigned_to_nat(1u);
v_size_x27_1327_ = lean_nat_add(v_size_1306_, v___x_1326_);
lean_dec(v_size_1306_);
lean_inc(v_bkt_1324_);
v___x_1328_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1328_, 0, v_a_1304_);
lean_ctor_set(v___x_1328_, 1, v_b_1305_);
lean_ctor_set(v___x_1328_, 2, v_bkt_1324_);
v_buckets_x27_1329_ = lean_array_uset(v_buckets_1307_, v___x_1323_, v___x_1328_);
v___x_1330_ = lean_unsigned_to_nat(4u);
v___x_1331_ = lean_nat_mul(v_size_x27_1327_, v___x_1330_);
v___x_1332_ = lean_unsigned_to_nat(3u);
v___x_1333_ = lean_nat_div(v___x_1331_, v___x_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_array_get_size(v_buckets_x27_1329_);
v___x_1335_ = lean_nat_dec_le(v___x_1333_, v___x_1334_);
lean_dec(v___x_1333_);
if (v___x_1335_ == 0)
{
lean_object* v_val_1336_; lean_object* v___x_1338_; 
v_val_1336_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(v_buckets_x27_1329_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 1, v_val_1336_);
lean_ctor_set(v___x_1309_, 0, v_size_x27_1327_);
v___x_1338_ = v___x_1309_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_size_x27_1327_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_val_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
else
{
lean_object* v___x_1341_; 
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 1, v_buckets_x27_1329_);
lean_ctor_set(v___x_1309_, 0, v_size_x27_1327_);
v___x_1341_ = v___x_1309_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_size_x27_1327_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v_buckets_x27_1329_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
lean_object* v___x_1343_; lean_object* v_buckets_x27_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1348_; 
lean_inc(v_bkt_1324_);
v___x_1343_ = lean_box(0);
v_buckets_x27_1344_ = lean_array_uset(v_buckets_1307_, v___x_1323_, v___x_1343_);
v___x_1345_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16___redArg(v_a_1304_, v_b_1305_, v_bkt_1324_);
v___x_1346_ = lean_array_uset(v_buckets_x27_1344_, v___x_1323_, v___x_1345_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 1, v___x_1346_);
v___x_1348_ = v___x_1309_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_size_1306_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___x_1346_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0(lean_object* v_k_1351_, uint8_t v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v_b_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_box(v___y_1352_);
lean_inc(v___y_1359_);
lean_inc_ref(v___y_1358_);
lean_inc(v___y_1357_);
lean_inc_ref(v___y_1356_);
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
v___x_1362_ = lean_apply_9(v_k_1351_, v_b_1355_, v___x_1361_, v___y_1353_, v___y_1354_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, lean_box(0));
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0___boxed(lean_object* v_k_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v_b_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
uint8_t v___y_70770__boxed_1373_; lean_object* v_res_1374_; 
v___y_70770__boxed_1373_ = lean_unbox(v___y_1364_);
v_res_1374_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0(v_k_1363_, v___y_70770__boxed_1373_, v___y_1365_, v___y_1366_, v_b_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg(lean_object* v_name_1375_, uint8_t v_bi_1376_, lean_object* v_type_1377_, lean_object* v_k_1378_, uint8_t v_kind_1379_, uint8_t v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; 
v___x_1388_ = lean_box(v___y_1380_);
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
v___f_1389_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1389_, 0, v_k_1378_);
lean_closure_set(v___f_1389_, 1, v___x_1388_);
lean_closure_set(v___f_1389_, 2, v___y_1381_);
lean_closure_set(v___f_1389_, 3, v___y_1382_);
v___x_1390_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1375_, v_bi_1376_, v_type_1377_, v___f_1389_, v_kind_1379_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1390_) == 0)
{
return v___x_1390_;
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1390_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1390_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg___boxed(lean_object* v_name_1399_, lean_object* v_bi_1400_, lean_object* v_type_1401_, lean_object* v_k_1402_, lean_object* v_kind_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
uint8_t v_bi_boxed_1412_; uint8_t v_kind_boxed_1413_; uint8_t v___y_70798__boxed_1414_; lean_object* v_res_1415_; 
v_bi_boxed_1412_ = lean_unbox(v_bi_1400_);
v_kind_boxed_1413_ = lean_unbox(v_kind_1403_);
v___y_70798__boxed_1414_ = lean_unbox(v___y_1404_);
v_res_1415_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg(v_name_1399_, v_bi_boxed_1412_, v_type_1401_, v_k_1402_, v_kind_boxed_1413_, v___y_70798__boxed_1414_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(lean_object* v_declName_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v___x_1419_; lean_object* v_env_1420_; uint8_t v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1419_ = lean_st_ref_get(v___y_1417_);
v_env_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc_ref(v_env_1420_);
lean_dec(v___x_1419_);
v___x_1421_ = l_Lean_Meta_isMatcherCore(v_env_1420_, v_declName_1416_);
v___x_1422_ = lean_box(v___x_1421_);
v___x_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg___boxed(lean_object* v_declName_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_1424_, v___y_1425_);
lean_dec(v___y_1425_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(lean_object* v_declName_1428_, lean_object* v___y_1429_){
_start:
{
lean_object* v___x_1431_; lean_object* v_env_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1431_ = lean_st_ref_get(v___y_1429_);
v_env_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc_ref(v_env_1432_);
lean_dec(v___x_1431_);
v___x_1433_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1432_, v_declName_1428_);
v___x_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg___boxed(lean_object* v_declName_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_1435_, v___y_1436_);
lean_dec(v___y_1436_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__25(lean_object* v_msgData_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v___x_1445_; lean_object* v_env_1446_; uint8_t v___x_1447_; lean_object* v_env_1448_; lean_object* v___x_1449_; lean_object* v_toCold_1450_; lean_object* v_mctx_1451_; lean_object* v_lctx_1452_; lean_object* v_options_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1445_ = lean_st_ref_get(v___y_1443_);
v_env_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc_ref(v_env_1446_);
lean_dec(v___x_1445_);
v___x_1447_ = 0;
v_env_1448_ = l_Lean_Environment_setRecordingDeps(v_env_1446_, v___x_1447_);
v___x_1449_ = lean_st_ref_get(v___y_1441_);
v_toCold_1450_ = lean_ctor_get(v___y_1442_, 0);
v_mctx_1451_ = lean_ctor_get(v___x_1449_, 0);
lean_inc_ref(v_mctx_1451_);
lean_dec(v___x_1449_);
v_lctx_1452_ = lean_ctor_get(v___y_1440_, 2);
v_options_1453_ = lean_ctor_get(v_toCold_1450_, 2);
lean_inc_ref(v_options_1453_);
lean_inc_ref(v_lctx_1452_);
v___x_1454_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1454_, 0, v_env_1448_);
lean_ctor_set(v___x_1454_, 1, v_mctx_1451_);
lean_ctor_set(v___x_1454_, 2, v_lctx_1452_);
lean_ctor_set(v___x_1454_, 3, v_options_1453_);
v___x_1455_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
lean_ctor_set(v___x_1455_, 1, v_msgData_1439_);
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__25___boxed(lean_object* v_msgData_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__25(v_msgData_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
return v_res_1463_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1464_; double v___x_1465_; 
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = lean_float_of_nat(v___x_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(lean_object* v_cls_1469_, lean_object* v_msg_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_ref_1476_; lean_object* v___x_1477_; lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1523_; 
v_ref_1476_ = lean_ctor_get(v___y_1473_, 2);
v___x_1477_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__25(v_msg_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1480_ = v___x_1477_;
v_isShared_1481_ = v_isSharedCheck_1523_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1523_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1482_; lean_object* v_traceState_1483_; lean_object* v_env_1484_; lean_object* v_nextMacroScope_1485_; lean_object* v_ngen_1486_; lean_object* v_auxDeclNGen_1487_; lean_object* v_cache_1488_; lean_object* v_recordedDeps_1489_; lean_object* v_messages_1490_; lean_object* v_infoState_1491_; lean_object* v_snapshotTasks_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1522_; 
v___x_1482_ = lean_st_ref_take(v___y_1474_);
v_traceState_1483_ = lean_ctor_get(v___x_1482_, 4);
v_env_1484_ = lean_ctor_get(v___x_1482_, 0);
v_nextMacroScope_1485_ = lean_ctor_get(v___x_1482_, 1);
v_ngen_1486_ = lean_ctor_get(v___x_1482_, 2);
v_auxDeclNGen_1487_ = lean_ctor_get(v___x_1482_, 3);
v_cache_1488_ = lean_ctor_get(v___x_1482_, 5);
v_recordedDeps_1489_ = lean_ctor_get(v___x_1482_, 6);
v_messages_1490_ = lean_ctor_get(v___x_1482_, 7);
v_infoState_1491_ = lean_ctor_get(v___x_1482_, 8);
v_snapshotTasks_1492_ = lean_ctor_get(v___x_1482_, 9);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1494_ = v___x_1482_;
v_isShared_1495_ = v_isSharedCheck_1522_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_snapshotTasks_1492_);
lean_inc(v_infoState_1491_);
lean_inc(v_messages_1490_);
lean_inc(v_recordedDeps_1489_);
lean_inc(v_cache_1488_);
lean_inc(v_traceState_1483_);
lean_inc(v_auxDeclNGen_1487_);
lean_inc(v_ngen_1486_);
lean_inc(v_nextMacroScope_1485_);
lean_inc(v_env_1484_);
lean_dec(v___x_1482_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1522_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
uint64_t v_tid_1496_; lean_object* v_traces_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1521_; 
v_tid_1496_ = lean_ctor_get_uint64(v_traceState_1483_, sizeof(void*)*1);
v_traces_1497_ = lean_ctor_get(v_traceState_1483_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_traceState_1483_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1499_ = v_traceState_1483_;
v_isShared_1500_ = v_isSharedCheck_1521_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_traces_1497_);
lean_dec(v_traceState_1483_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1521_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; double v___x_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1501_ = lean_box(0);
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0);
v___x_1504_ = 0;
v___x_1505_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1));
v___x_1506_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1506_, 0, v_cls_1469_);
lean_ctor_set(v___x_1506_, 1, v___x_1502_);
lean_ctor_set(v___x_1506_, 2, v___x_1505_);
lean_ctor_set_float(v___x_1506_, sizeof(void*)*3, v___x_1503_);
lean_ctor_set_float(v___x_1506_, sizeof(void*)*3 + 8, v___x_1503_);
lean_ctor_set_uint8(v___x_1506_, sizeof(void*)*3 + 16, v___x_1504_);
v___x_1507_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2));
v___x_1508_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1506_);
lean_ctor_set(v___x_1508_, 1, v_a_1478_);
lean_ctor_set(v___x_1508_, 2, v___x_1507_);
lean_inc(v_ref_1476_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v_ref_1476_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = l_Lean_PersistentArray_push___redArg(v_traces_1497_, v___x_1509_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v___x_1510_);
v___x_1512_ = v___x_1499_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1510_);
lean_ctor_set_uint64(v_reuseFailAlloc_1520_, sizeof(void*)*1, v_tid_1496_);
v___x_1512_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1514_; 
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 4, v___x_1512_);
v___x_1514_ = v___x_1494_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_env_1484_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v_nextMacroScope_1485_);
lean_ctor_set(v_reuseFailAlloc_1519_, 2, v_ngen_1486_);
lean_ctor_set(v_reuseFailAlloc_1519_, 3, v_auxDeclNGen_1487_);
lean_ctor_set(v_reuseFailAlloc_1519_, 4, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1519_, 5, v_cache_1488_);
lean_ctor_set(v_reuseFailAlloc_1519_, 6, v_recordedDeps_1489_);
lean_ctor_set(v_reuseFailAlloc_1519_, 7, v_messages_1490_);
lean_ctor_set(v_reuseFailAlloc_1519_, 8, v_infoState_1491_);
lean_ctor_set(v_reuseFailAlloc_1519_, 9, v_snapshotTasks_1492_);
v___x_1514_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1515_ = lean_st_ref_put(v___y_1474_, v___x_1514_);
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 0, v___x_1501_);
v___x_1517_ = v___x_1480_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1501_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___boxed(lean_object* v_cls_1524_, lean_object* v_msg_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v_cls_1524_, v_msg_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg(lean_object* v_a_1532_, lean_object* v_x_1533_){
_start:
{
if (lean_obj_tag(v_x_1533_) == 0)
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_box(0);
return v___x_1534_;
}
else
{
lean_object* v_key_1535_; lean_object* v_value_1536_; lean_object* v_tail_1537_; uint8_t v___x_1538_; 
v_key_1535_ = lean_ctor_get(v_x_1533_, 0);
v_value_1536_ = lean_ctor_get(v_x_1533_, 1);
v_tail_1537_ = lean_ctor_get(v_x_1533_, 2);
v___x_1538_ = lean_expr_eqv(v_key_1535_, v_a_1532_);
if (v___x_1538_ == 0)
{
v_x_1533_ = v_tail_1537_;
goto _start;
}
else
{
lean_object* v___x_1540_; 
lean_inc(v_value_1536_);
v___x_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_value_1536_);
return v___x_1540_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg___boxed(lean_object* v_a_1541_, lean_object* v_x_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg(v_a_1541_, v_x_1542_);
lean_dec(v_x_1542_);
lean_dec_ref(v_a_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(lean_object* v_m_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_buckets_1546_; lean_object* v___x_1547_; uint64_t v___x_1548_; uint64_t v___x_1549_; uint64_t v___x_1550_; uint64_t v_fold_1551_; uint64_t v___x_1552_; uint64_t v___x_1553_; uint64_t v___x_1554_; size_t v___x_1555_; size_t v___x_1556_; size_t v___x_1557_; size_t v___x_1558_; size_t v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v_buckets_1546_ = lean_ctor_get(v_m_1544_, 1);
v___x_1547_ = lean_array_get_size(v_buckets_1546_);
v___x_1548_ = l_Lean_Expr_hash(v_a_1545_);
v___x_1549_ = 32ULL;
v___x_1550_ = lean_uint64_shift_right(v___x_1548_, v___x_1549_);
v_fold_1551_ = lean_uint64_xor(v___x_1548_, v___x_1550_);
v___x_1552_ = 16ULL;
v___x_1553_ = lean_uint64_shift_right(v_fold_1551_, v___x_1552_);
v___x_1554_ = lean_uint64_xor(v_fold_1551_, v___x_1553_);
v___x_1555_ = lean_uint64_to_usize(v___x_1554_);
v___x_1556_ = lean_usize_of_nat(v___x_1547_);
v___x_1557_ = ((size_t)1ULL);
v___x_1558_ = lean_usize_sub(v___x_1556_, v___x_1557_);
v___x_1559_ = lean_usize_land(v___x_1555_, v___x_1558_);
v___x_1560_ = lean_array_uget_borrowed(v_buckets_1546_, v___x_1559_);
v___x_1561_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg(v_a_1545_, v___x_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg___boxed(lean_object* v_m_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_m_1562_, v_a_1563_);
lean_dec_ref(v_a_1563_);
lean_dec_ref(v_m_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg(lean_object* v_name_1565_, lean_object* v_type_1566_, lean_object* v_val_1567_, lean_object* v_k_1568_, uint8_t v_nondep_1569_, uint8_t v_kind_1570_, uint8_t v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___x_1579_; lean_object* v___f_1580_; lean_object* v___x_1581_; 
v___x_1579_ = lean_box(v___y_1571_);
lean_inc(v___y_1573_);
lean_inc_ref(v___y_1572_);
v___f_1580_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1580_, 0, v_k_1568_);
lean_closure_set(v___f_1580_, 1, v___x_1579_);
lean_closure_set(v___f_1580_, 2, v___y_1572_);
lean_closure_set(v___f_1580_, 3, v___y_1573_);
v___x_1581_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1565_, v_type_1566_, v_val_1567_, v___f_1580_, v_nondep_1569_, v_kind_1570_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
if (lean_obj_tag(v___x_1581_) == 0)
{
return v___x_1581_;
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1581_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg___boxed(lean_object* v_name_1590_, lean_object* v_type_1591_, lean_object* v_val_1592_, lean_object* v_k_1593_, lean_object* v_nondep_1594_, lean_object* v_kind_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
uint8_t v_nondep_boxed_1604_; uint8_t v_kind_boxed_1605_; uint8_t v___y_71047__boxed_1606_; lean_object* v_res_1607_; 
v_nondep_boxed_1604_ = lean_unbox(v_nondep_1594_);
v_kind_boxed_1605_ = lean_unbox(v_kind_1595_);
v___y_71047__boxed_1606_ = lean_unbox(v___y_1596_);
v_res_1607_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg(v_name_1590_, v_type_1591_, v_val_1592_, v_k_1593_, v_nondep_boxed_1604_, v_kind_boxed_1605_, v___y_71047__boxed_1606_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(lean_object* v_msg_1608_){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = l_Lean_instInhabitedExpr;
v___x_1610_ = lean_panic_fn_borrowed(v___x_1609_, v_msg_1608_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed(lean_object* v_fvars_1611_, lean_object* v_body_1612_, lean_object* v_x_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
uint8_t v___y_71259__boxed_1622_; lean_object* v_res_1623_; 
v___y_71259__boxed_1622_ = lean_unbox(v___y_1614_);
v_res_1623_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(v_fvars_1611_, v_body_1612_, v_x_1613_, v___y_71259__boxed_1622_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(lean_object* v_fvars_1626_, lean_object* v_body_1627_, lean_object* v_x_1628_, uint8_t v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = lean_array_push(v_fvars_1626_, v_x_1628_);
v___x_1638_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1637_, v_body_1627_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed(lean_object* v_fvars_1639_, lean_object* v_body_1640_, lean_object* v_x_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
uint8_t v___y_71270__boxed_1650_; lean_object* v_res_1651_; 
v___y_71270__boxed_1650_ = lean_unbox(v___y_1642_);
v_res_1651_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(v_fvars_1639_, v_body_1640_, v_x_1641_, v___y_71270__boxed_1650_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(lean_object* v_fvars_1652_, lean_object* v_e_1653_, uint8_t v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
if (lean_obj_tag(v_e_1653_) == 6)
{
lean_object* v_binderName_1662_; lean_object* v_binderType_1663_; lean_object* v_body_1664_; uint8_t v_binderInfo_1665_; lean_object* v___f_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v_binderName_1662_ = lean_ctor_get(v_e_1653_, 0);
lean_inc(v_binderName_1662_);
v_binderType_1663_ = lean_ctor_get(v_e_1653_, 1);
lean_inc_ref(v_binderType_1663_);
v_body_1664_ = lean_ctor_get(v_e_1653_, 2);
lean_inc_ref(v_body_1664_);
v_binderInfo_1665_ = lean_ctor_get_uint8(v_e_1653_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1653_, 3);
lean_inc_ref(v_fvars_1652_);
v___f_1666_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1666_, 0, v_fvars_1652_);
lean_closure_set(v___f_1666_, 1, v_body_1664_);
v___x_1667_ = lean_expr_instantiate_rev(v_binderType_1663_, v_fvars_1652_);
lean_dec_ref(v_fvars_1652_);
lean_dec_ref(v_binderType_1663_);
v___x_1668_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_1667_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; uint8_t v___x_1670_; lean_object* v___x_1671_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1668_, 1);
v___x_1670_ = 0;
v___x_1671_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg(v_binderName_1662_, v_binderInfo_1665_, v_a_1669_, v___f_1666_, v___x_1670_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
return v___x_1671_;
}
else
{
lean_dec_ref(v___f_1666_);
lean_dec(v_binderName_1662_);
return v___x_1668_;
}
}
else
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_expr_instantiate_rev(v_e_1653_, v_fvars_1652_);
lean_dec_ref(v_e_1653_);
v___x_1673_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1672_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; uint8_t v___x_1675_; uint8_t v___x_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1675_ = 0;
v___x_1676_ = 1;
v___x_1677_ = 1;
v___x_1678_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1652_, v_a_1674_, v___x_1675_, v___x_1676_, v___x_1675_, v___x_1676_, v___x_1677_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
lean_dec_ref(v_fvars_1652_);
return v___x_1678_;
}
else
{
lean_dec_ref(v_fvars_1652_);
return v___x_1673_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(lean_object* v_e_1679_, uint8_t v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
if (v_a_1680_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
v___x_1689_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1688_, v_e_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1690_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
v___x_1691_ = l_Lean_Meta_Sym_etaReduce(v_e_1679_);
lean_dec_ref(v_e_1679_);
v___x_1692_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1690_, v___x_1691_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(lean_object* v_fvars_1693_, lean_object* v_body_1694_, lean_object* v_x_1695_, uint8_t v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1704_ = lean_array_push(v_fvars_1693_, v_x_1695_);
v___x_1705_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_1704_, v_body_1694_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed(lean_object* v_fvars_1706_, lean_object* v_body_1707_, lean_object* v_x_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
uint8_t v___y_71281__boxed_1717_; lean_object* v_res_1718_; 
v___y_71281__boxed_1717_ = lean_unbox(v___y_1709_);
v_res_1718_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(v_fvars_1706_, v_body_1707_, v_x_1708_, v___y_71281__boxed_1717_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(lean_object* v_fvars_1719_, lean_object* v_e_1720_, uint8_t v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_){
_start:
{
if (lean_obj_tag(v_e_1720_) == 8)
{
lean_object* v_declName_1729_; lean_object* v_type_1730_; lean_object* v_value_1731_; lean_object* v_body_1732_; uint8_t v_nondep_1733_; lean_object* v___f_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v_declName_1729_ = lean_ctor_get(v_e_1720_, 0);
lean_inc(v_declName_1729_);
v_type_1730_ = lean_ctor_get(v_e_1720_, 1);
lean_inc_ref(v_type_1730_);
v_value_1731_ = lean_ctor_get(v_e_1720_, 2);
lean_inc_ref(v_value_1731_);
v_body_1732_ = lean_ctor_get(v_e_1720_, 3);
lean_inc_ref(v_body_1732_);
v_nondep_1733_ = lean_ctor_get_uint8(v_e_1720_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1720_, 4);
lean_inc_ref(v_fvars_1719_);
v___f_1734_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1734_, 0, v_fvars_1719_);
lean_closure_set(v___f_1734_, 1, v_body_1732_);
v___x_1735_ = lean_expr_instantiate_rev(v_type_1730_, v_fvars_1719_);
lean_dec_ref(v_type_1730_);
v___x_1736_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_1735_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_a_1737_);
lean_dec_ref_known(v___x_1736_, 1);
v___x_1738_ = lean_expr_instantiate_rev(v_value_1731_, v_fvars_1719_);
lean_dec_ref(v_fvars_1719_);
lean_dec_ref(v_value_1731_);
v___x_1739_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1738_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; uint8_t v___x_1741_; lean_object* v___x_1742_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1741_ = 0;
v___x_1742_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg(v_declName_1729_, v_a_1737_, v_a_1740_, v___f_1734_, v_nondep_1733_, v___x_1741_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
return v___x_1742_;
}
else
{
lean_dec(v_a_1737_);
lean_dec_ref(v___f_1734_);
lean_dec(v_declName_1729_);
return v___x_1739_;
}
}
else
{
lean_dec_ref(v___f_1734_);
lean_dec_ref(v_value_1731_);
lean_dec(v_declName_1729_);
lean_dec_ref(v_fvars_1719_);
return v___x_1736_;
}
}
else
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_expr_instantiate_rev(v_e_1720_, v_fvars_1719_);
lean_dec_ref(v_e_1720_);
v___x_1744_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1743_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; uint8_t v___x_1746_; uint8_t v___x_1747_; uint8_t v___x_1748_; lean_object* v___x_1749_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
v___x_1746_ = 1;
v___x_1747_ = 0;
v___x_1748_ = 1;
v___x_1749_ = l_Lean_Meta_mkLetFVars(v_fvars_1719_, v_a_1745_, v___x_1746_, v___x_1747_, v___x_1748_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
lean_dec_ref(v_fvars_1719_);
return v___x_1749_;
}
else
{
lean_dec_ref(v_fvars_1719_);
return v___x_1744_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1(void){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0));
v___x_1754_ = l_Lean_stringToMessageData(v___x_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(lean_object* v_e_1755_, lean_object* v_type_1756_, uint8_t v_report_1757_, uint8_t v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_){
_start:
{
lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___x_1816_; 
lean_inc_ref(v_type_1756_);
v___x_1816_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_1756_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
if (lean_obj_tag(v_a_1817_) == 1)
{
lean_object* v_val_1818_; lean_object* v___x_1819_; 
lean_dec_ref(v_type_1756_);
v_val_1818_ = lean_ctor_get(v_a_1817_, 0);
lean_inc(v_val_1818_);
lean_dec_ref_known(v_a_1817_, 1);
v___x_1819_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_e_1755_, v_val_1818_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_);
return v___x_1819_;
}
else
{
lean_object* v___x_1820_; 
lean_dec(v_a_1817_);
v___x_1820_ = l_Lean_Expr_getAppFn(v_e_1755_);
if (lean_obj_tag(v___x_1820_) == 4)
{
lean_object* v_declName_1821_; lean_object* v___x_1822_; 
v_declName_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_declName_1821_);
lean_dec_ref_known(v___x_1820_, 2);
v___x_1822_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_1821_, v_a_1764_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
lean_dec_ref_known(v___x_1822_, 1);
if (lean_obj_tag(v_a_1823_) == 1)
{
lean_object* v_val_1824_; uint8_t v___x_1825_; 
v_val_1824_ = lean_ctor_get(v_a_1823_, 0);
lean_inc(v_val_1824_);
lean_dec_ref_known(v_a_1823_, 1);
v___x_1825_ = l_Lean_Expr_isApp(v_e_1755_);
if (v___x_1825_ == 0)
{
lean_dec(v_val_1824_);
v___y_1767_ = v_a_1759_;
v___y_1768_ = v_a_1760_;
v___y_1769_ = v_a_1761_;
v___y_1770_ = v_a_1762_;
v___y_1771_ = v_a_1763_;
v___y_1772_ = v_a_1764_;
goto v___jp_1766_;
}
else
{
uint8_t v_fromClass_1826_; 
v_fromClass_1826_ = lean_ctor_get_uint8(v_val_1824_, sizeof(void*)*3);
lean_dec(v_val_1824_);
if (v_fromClass_1826_ == 0)
{
v___y_1767_ = v_a_1759_;
v___y_1768_ = v_a_1760_;
v___y_1769_ = v_a_1761_;
v___y_1770_ = v_a_1762_;
v___y_1771_ = v_a_1763_;
v___y_1772_ = v_a_1764_;
goto v___jp_1766_;
}
else
{
lean_object* v___x_1827_; 
lean_dec_ref(v_type_1756_);
v___x_1827_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_1755_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_);
return v___x_1827_;
}
}
}
else
{
lean_dec(v_a_1823_);
v___y_1767_ = v_a_1759_;
v___y_1768_ = v_a_1760_;
v___y_1769_ = v_a_1761_;
v___y_1770_ = v_a_1762_;
v___y_1771_ = v_a_1763_;
v___y_1772_ = v_a_1764_;
goto v___jp_1766_;
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
lean_dec_ref(v_type_1756_);
lean_dec_ref(v_e_1755_);
v_a_1828_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1822_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1822_);
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
else
{
lean_dec_ref(v___x_1820_);
v___y_1767_ = v_a_1759_;
v___y_1768_ = v_a_1760_;
v___y_1769_ = v_a_1761_;
v___y_1770_ = v_a_1762_;
v___y_1771_ = v_a_1763_;
v___y_1772_ = v_a_1764_;
goto v___jp_1766_;
}
}
}
else
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1843_; 
lean_dec_ref(v_type_1756_);
lean_dec_ref(v_e_1755_);
v_a_1836_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1838_ = v___x_1816_;
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v___x_1816_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1841_; 
if (v_isShared_1839_ == 0)
{
v___x_1841_ = v___x_1838_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_a_1836_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
v___jp_1766_:
{
if (v_report_1757_ == 0)
{
lean_object* v___x_1773_; 
lean_dec_ref(v_type_1756_);
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v_e_1755_);
return v___x_1773_;
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1774_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1);
lean_inc_ref(v_e_1755_);
v___x_1775_ = l_Lean_indentExpr(v_e_1755_);
v___x_1776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1774_);
lean_ctor_set(v___x_1776_, 1, v___x_1775_);
v___x_1777_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1);
v___x_1778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1776_);
lean_ctor_set(v___x_1778_, 1, v___x_1777_);
v___x_1779_ = l_Lean_indentExpr(v_type_1756_);
v___x_1780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_1767_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1807_; 
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1784_ = v___x_1781_;
v_isShared_1785_ = v_isSharedCheck_1807_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1781_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1807_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
uint8_t v_verbose_1786_; 
v_verbose_1786_ = lean_ctor_get_uint8(v_a_1782_, 0);
lean_dec(v_a_1782_);
if (v_verbose_1786_ == 0)
{
lean_object* v___x_1788_; 
lean_dec_ref_known(v___x_1780_, 2);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 0, v_e_1755_);
v___x_1788_ = v___x_1784_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_e_1755_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
else
{
lean_object* v___x_1790_; 
lean_del_object(v___x_1784_);
v___x_1790_ = l_Lean_Meta_Sym_reportIssue(v___x_1780_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1797_ == 0)
{
lean_object* v_unused_1798_; 
v_unused_1798_ = lean_ctor_get(v___x_1790_, 0);
lean_dec(v_unused_1798_);
v___x_1792_ = v___x_1790_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_dec(v___x_1790_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 0, v_e_1755_);
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_e_1755_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
lean_dec_ref(v_e_1755_);
v_a_1799_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1790_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1790_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
lean_dec_ref_known(v___x_1780_, 2);
lean_dec_ref(v_e_1755_);
v_a_1808_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v___x_1781_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1781_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(lean_object* v_ofNat_1844_, lean_object* v_00_u03b1_1845_, lean_object* v_n_1846_, lean_object* v_inst_1847_, uint8_t v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; uint8_t v___x_1860_; lean_object* v___x_1861_; 
v___x_1856_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0));
v___x_1857_ = l_Lean_Expr_constLevels_x21(v_ofNat_1844_);
v___x_1858_ = l_Lean_mkConst(v___x_1856_, v___x_1857_);
v___x_1859_ = l_Lean_mkAppB(v___x_1858_, v_00_u03b1_1845_, v_n_1846_);
v___x_1860_ = 1;
v___x_1861_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_inst_1847_, v___x_1859_, v___x_1860_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(lean_object* v_e_1862_, uint8_t v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_){
_start:
{
if (v_a_1863_ == 0)
{
uint8_t v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = 1;
v___x_1872_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_1862_, v___x_1871_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_);
return v___x_1872_;
}
else
{
lean_object* v___x_1873_; 
v___x_1873_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_);
return v___x_1873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(lean_object* v_e_1874_, uint8_t v_report_1875_, uint8_t v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v___x_1884_; 
lean_inc(v_a_1882_);
lean_inc_ref(v_a_1881_);
lean_inc(v_a_1880_);
lean_inc_ref(v_a_1879_);
lean_inc_ref(v_e_1874_);
v___x_1884_ = lean_infer_type(v_e_1874_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1886_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc_n(v_a_1885_, 2);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1886_ = l_Lean_Meta_isProp(v_a_1885_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1899_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1889_ = v___x_1886_;
v_isShared_1890_ = v_isSharedCheck_1899_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1899_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
if (v_a_1876_ == 0)
{
uint8_t v___x_1895_; 
v___x_1895_ = lean_unbox(v_a_1887_);
lean_dec(v_a_1887_);
if (v___x_1895_ == 0)
{
lean_del_object(v___x_1889_);
goto v___jp_1891_;
}
else
{
lean_object* v___x_1897_; 
lean_dec(v_a_1885_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v_e_1874_);
v___x_1897_ = v___x_1889_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_e_1874_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
else
{
lean_del_object(v___x_1889_);
lean_dec(v_a_1887_);
goto v___jp_1891_;
}
v___jp_1891_:
{
lean_object* v___x_1892_; 
v___x_1892_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v_a_1885_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1894_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc(v_a_1893_);
lean_dec_ref_known(v___x_1892_, 1);
v___x_1894_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_e_1874_, v_a_1893_, v_report_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
return v___x_1894_;
}
else
{
lean_dec_ref(v_e_1874_);
return v___x_1892_;
}
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec(v_a_1885_);
lean_dec_ref(v_e_1874_);
v_a_1900_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1886_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1886_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
else
{
lean_dec_ref(v_e_1874_);
return v___x_1884_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(lean_object* v_e_1908_, uint8_t v_report_1909_, uint8_t v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_){
_start:
{
if (v_a_1910_ == 0)
{
lean_object* v___x_1918_; lean_object* v_canon_1919_; lean_object* v_cache_1920_; lean_object* v___x_1921_; 
v___x_1918_ = lean_st_ref_get(v_a_1912_);
v_canon_1919_ = lean_ctor_get(v___x_1918_, 11);
lean_inc_ref(v_canon_1919_);
lean_dec(v___x_1918_);
v_cache_1920_ = lean_ctor_get(v_canon_1919_, 0);
lean_inc_ref(v_cache_1920_);
lean_dec_ref(v_canon_1919_);
v___x_1921_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_1920_, v_e_1908_);
lean_dec_ref(v_cache_1920_);
if (lean_obj_tag(v___x_1921_) == 1)
{
lean_object* v_val_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec_ref(v_e_1908_);
v_val_1922_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1921_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_val_1922_);
lean_dec(v___x_1921_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
lean_ctor_set_tag(v___x_1924_, 0);
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_val_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
else
{
lean_object* v___x_1930_; 
lean_dec(v___x_1921_);
lean_inc_ref(v_e_1908_);
v___x_1930_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_1908_, v_report_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1971_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1971_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1971_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v_canon_1936_; lean_object* v_share_1937_; lean_object* v_maxFVar_1938_; lean_object* v_proofInstInfo_1939_; lean_object* v_proofInstInfoFVar_1940_; lean_object* v_inferType_1941_; lean_object* v_getLevel_1942_; lean_object* v_congrInfo_1943_; lean_object* v_congrInfoFixedUDec_1944_; lean_object* v_defEqI_1945_; lean_object* v_extensions_1946_; lean_object* v_issues_1947_; lean_object* v_instanceOverrides_1948_; uint8_t v_debug_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1970_; 
v___x_1935_ = lean_st_ref_take(v_a_1912_);
v_canon_1936_ = lean_ctor_get(v___x_1935_, 11);
v_share_1937_ = lean_ctor_get(v___x_1935_, 0);
v_maxFVar_1938_ = lean_ctor_get(v___x_1935_, 1);
v_proofInstInfo_1939_ = lean_ctor_get(v___x_1935_, 2);
v_proofInstInfoFVar_1940_ = lean_ctor_get(v___x_1935_, 3);
v_inferType_1941_ = lean_ctor_get(v___x_1935_, 4);
v_getLevel_1942_ = lean_ctor_get(v___x_1935_, 5);
v_congrInfo_1943_ = lean_ctor_get(v___x_1935_, 6);
v_congrInfoFixedUDec_1944_ = lean_ctor_get(v___x_1935_, 7);
v_defEqI_1945_ = lean_ctor_get(v___x_1935_, 8);
v_extensions_1946_ = lean_ctor_get(v___x_1935_, 9);
v_issues_1947_ = lean_ctor_get(v___x_1935_, 10);
v_instanceOverrides_1948_ = lean_ctor_get(v___x_1935_, 12);
v_debug_1949_ = lean_ctor_get_uint8(v___x_1935_, sizeof(void*)*13);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1951_ = v___x_1935_;
v_isShared_1952_ = v_isSharedCheck_1970_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_instanceOverrides_1948_);
lean_inc(v_canon_1936_);
lean_inc(v_issues_1947_);
lean_inc(v_extensions_1946_);
lean_inc(v_defEqI_1945_);
lean_inc(v_congrInfoFixedUDec_1944_);
lean_inc(v_congrInfo_1943_);
lean_inc(v_getLevel_1942_);
lean_inc(v_inferType_1941_);
lean_inc(v_proofInstInfoFVar_1940_);
lean_inc(v_proofInstInfo_1939_);
lean_inc(v_maxFVar_1938_);
lean_inc(v_share_1937_);
lean_dec(v___x_1935_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1970_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v_cache_1953_; lean_object* v_cacheInType_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1969_; 
v_cache_1953_ = lean_ctor_get(v_canon_1936_, 0);
v_cacheInType_1954_ = lean_ctor_get(v_canon_1936_, 1);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_canon_1936_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1956_ = v_canon_1936_;
v_isShared_1957_ = v_isSharedCheck_1969_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_cacheInType_1954_);
lean_inc(v_cache_1953_);
lean_dec(v_canon_1936_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1969_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1958_; lean_object* v___x_1960_; 
lean_inc(v_a_1931_);
v___x_1958_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_1953_, v_e_1908_, v_a_1931_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 0, v___x_1958_);
v___x_1960_ = v___x_1956_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1958_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_cacheInType_1954_);
v___x_1960_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
lean_object* v___x_1962_; 
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 11, v___x_1960_);
v___x_1962_ = v___x_1951_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_share_1937_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_maxFVar_1938_);
lean_ctor_set(v_reuseFailAlloc_1967_, 2, v_proofInstInfo_1939_);
lean_ctor_set(v_reuseFailAlloc_1967_, 3, v_proofInstInfoFVar_1940_);
lean_ctor_set(v_reuseFailAlloc_1967_, 4, v_inferType_1941_);
lean_ctor_set(v_reuseFailAlloc_1967_, 5, v_getLevel_1942_);
lean_ctor_set(v_reuseFailAlloc_1967_, 6, v_congrInfo_1943_);
lean_ctor_set(v_reuseFailAlloc_1967_, 7, v_congrInfoFixedUDec_1944_);
lean_ctor_set(v_reuseFailAlloc_1967_, 8, v_defEqI_1945_);
lean_ctor_set(v_reuseFailAlloc_1967_, 9, v_extensions_1946_);
lean_ctor_set(v_reuseFailAlloc_1967_, 10, v_issues_1947_);
lean_ctor_set(v_reuseFailAlloc_1967_, 11, v___x_1960_);
lean_ctor_set(v_reuseFailAlloc_1967_, 12, v_instanceOverrides_1948_);
lean_ctor_set_uint8(v_reuseFailAlloc_1967_, sizeof(void*)*13, v_debug_1949_);
v___x_1962_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1963_ = lean_st_ref_put(v_a_1912_, v___x_1962_);
if (v_isShared_1934_ == 0)
{
v___x_1965_ = v___x_1933_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1931_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1908_);
return v___x_1930_;
}
}
}
else
{
lean_object* v___x_1972_; lean_object* v_canon_1973_; lean_object* v_cacheInType_1974_; lean_object* v___x_1975_; 
v___x_1972_ = lean_st_ref_get(v_a_1912_);
v_canon_1973_ = lean_ctor_get(v___x_1972_, 11);
lean_inc_ref(v_canon_1973_);
lean_dec(v___x_1972_);
v_cacheInType_1974_ = lean_ctor_get(v_canon_1973_, 1);
lean_inc_ref(v_cacheInType_1974_);
lean_dec_ref(v_canon_1973_);
v___x_1975_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_1974_, v_e_1908_);
lean_dec_ref(v_cacheInType_1974_);
if (lean_obj_tag(v___x_1975_) == 1)
{
lean_object* v_val_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v_e_1908_);
v_val_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_val_1976_);
lean_dec(v___x_1975_);
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
else
{
lean_object* v___x_1984_; 
lean_dec(v___x_1975_);
lean_inc_ref(v_e_1908_);
v___x_1984_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_1908_, v_report_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2025_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_2025_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2025_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; lean_object* v_canon_1990_; lean_object* v_share_1991_; lean_object* v_maxFVar_1992_; lean_object* v_proofInstInfo_1993_; lean_object* v_proofInstInfoFVar_1994_; lean_object* v_inferType_1995_; lean_object* v_getLevel_1996_; lean_object* v_congrInfo_1997_; lean_object* v_congrInfoFixedUDec_1998_; lean_object* v_defEqI_1999_; lean_object* v_extensions_2000_; lean_object* v_issues_2001_; lean_object* v_instanceOverrides_2002_; uint8_t v_debug_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2024_; 
v___x_1989_ = lean_st_ref_take(v_a_1912_);
v_canon_1990_ = lean_ctor_get(v___x_1989_, 11);
v_share_1991_ = lean_ctor_get(v___x_1989_, 0);
v_maxFVar_1992_ = lean_ctor_get(v___x_1989_, 1);
v_proofInstInfo_1993_ = lean_ctor_get(v___x_1989_, 2);
v_proofInstInfoFVar_1994_ = lean_ctor_get(v___x_1989_, 3);
v_inferType_1995_ = lean_ctor_get(v___x_1989_, 4);
v_getLevel_1996_ = lean_ctor_get(v___x_1989_, 5);
v_congrInfo_1997_ = lean_ctor_get(v___x_1989_, 6);
v_congrInfoFixedUDec_1998_ = lean_ctor_get(v___x_1989_, 7);
v_defEqI_1999_ = lean_ctor_get(v___x_1989_, 8);
v_extensions_2000_ = lean_ctor_get(v___x_1989_, 9);
v_issues_2001_ = lean_ctor_get(v___x_1989_, 10);
v_instanceOverrides_2002_ = lean_ctor_get(v___x_1989_, 12);
v_debug_2003_ = lean_ctor_get_uint8(v___x_1989_, sizeof(void*)*13);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2005_ = v___x_1989_;
v_isShared_2006_ = v_isSharedCheck_2024_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_instanceOverrides_2002_);
lean_inc(v_canon_1990_);
lean_inc(v_issues_2001_);
lean_inc(v_extensions_2000_);
lean_inc(v_defEqI_1999_);
lean_inc(v_congrInfoFixedUDec_1998_);
lean_inc(v_congrInfo_1997_);
lean_inc(v_getLevel_1996_);
lean_inc(v_inferType_1995_);
lean_inc(v_proofInstInfoFVar_1994_);
lean_inc(v_proofInstInfo_1993_);
lean_inc(v_maxFVar_1992_);
lean_inc(v_share_1991_);
lean_dec(v___x_1989_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2024_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v_cache_2007_; lean_object* v_cacheInType_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2023_; 
v_cache_2007_ = lean_ctor_get(v_canon_1990_, 0);
v_cacheInType_2008_ = lean_ctor_get(v_canon_1990_, 1);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_canon_1990_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2010_ = v_canon_1990_;
v_isShared_2011_ = v_isSharedCheck_2023_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_cacheInType_2008_);
lean_inc(v_cache_2007_);
lean_dec(v_canon_1990_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2023_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2014_; 
lean_inc(v_a_1985_);
v___x_2012_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2008_, v_e_1908_, v_a_1985_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 1, v___x_2012_);
v___x_2014_ = v___x_2010_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_cache_2007_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v___x_2012_);
v___x_2014_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v___x_2016_; 
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 11, v___x_2014_);
v___x_2016_ = v___x_2005_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_share_1991_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v_maxFVar_1992_);
lean_ctor_set(v_reuseFailAlloc_2021_, 2, v_proofInstInfo_1993_);
lean_ctor_set(v_reuseFailAlloc_2021_, 3, v_proofInstInfoFVar_1994_);
lean_ctor_set(v_reuseFailAlloc_2021_, 4, v_inferType_1995_);
lean_ctor_set(v_reuseFailAlloc_2021_, 5, v_getLevel_1996_);
lean_ctor_set(v_reuseFailAlloc_2021_, 6, v_congrInfo_1997_);
lean_ctor_set(v_reuseFailAlloc_2021_, 7, v_congrInfoFixedUDec_1998_);
lean_ctor_set(v_reuseFailAlloc_2021_, 8, v_defEqI_1999_);
lean_ctor_set(v_reuseFailAlloc_2021_, 9, v_extensions_2000_);
lean_ctor_set(v_reuseFailAlloc_2021_, 10, v_issues_2001_);
lean_ctor_set(v_reuseFailAlloc_2021_, 11, v___x_2014_);
lean_ctor_set(v_reuseFailAlloc_2021_, 12, v_instanceOverrides_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13, v_debug_2003_);
v___x_2016_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2017_; lean_object* v___x_2019_; 
v___x_2017_ = lean_st_ref_put(v_a_1912_, v___x_2016_);
if (v_isShared_1988_ == 0)
{
v___x_2019_ = v___x_1987_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_1985_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1908_);
return v___x_1984_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2(void){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2045_ = lean_box(0);
v___x_2046_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1));
v___x_2047_ = l_Lean_mkConst(v___x_2046_, v___x_2045_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(lean_object* v_g_2048_, lean_object* v_prop_2049_, lean_object* v_inst_2050_, lean_object* v_e_2051_, uint8_t v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v___x_2060_; 
lean_inc_ref(v_prop_2049_);
v___x_2060_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2049_, v_a_2052_, v_a_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2103_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2103_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2103_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___y_2066_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2);
lean_inc(v_a_2061_);
v___x_2072_ = l_Lean_Expr_app___override(v___x_2071_, v_a_2061_);
if (v_a_2052_ == 0)
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_2072_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___y_2076_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2074_);
lean_dec_ref_known(v___x_2073_, 1);
if (lean_obj_tag(v_a_2074_) == 0)
{
lean_inc_ref(v_inst_2050_);
v___y_2076_ = v_inst_2050_;
goto v___jp_2075_;
}
else
{
lean_object* v_val_2092_; 
v_val_2092_ = lean_ctor_get(v_a_2074_, 0);
lean_inc(v_val_2092_);
lean_dec_ref_known(v_a_2074_, 1);
v___y_2076_ = v_val_2092_;
goto v___jp_2075_;
}
v___jp_2075_:
{
lean_object* v___x_2077_; 
lean_inc_ref(v_inst_2050_);
v___x_2077_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_inst_2050_, v___y_2076_, v_a_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2091_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2080_ = v___x_2077_;
v_isShared_2081_ = v_isSharedCheck_2091_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2077_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2091_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
size_t v___x_2082_; size_t v___x_2083_; uint8_t v___x_2084_; 
v___x_2082_ = lean_ptr_addr(v_prop_2049_);
lean_dec_ref(v_prop_2049_);
v___x_2083_ = lean_ptr_addr(v_a_2061_);
v___x_2084_ = lean_usize_dec_eq(v___x_2082_, v___x_2083_);
if (v___x_2084_ == 0)
{
lean_del_object(v___x_2080_);
lean_dec_ref(v_e_2051_);
lean_dec_ref(v_inst_2050_);
v___y_2066_ = v_a_2078_;
goto v___jp_2065_;
}
else
{
size_t v___x_2085_; size_t v___x_2086_; uint8_t v___x_2087_; 
v___x_2085_ = lean_ptr_addr(v_inst_2050_);
lean_dec_ref(v_inst_2050_);
v___x_2086_ = lean_ptr_addr(v_a_2078_);
v___x_2087_ = lean_usize_dec_eq(v___x_2085_, v___x_2086_);
if (v___x_2087_ == 0)
{
lean_del_object(v___x_2080_);
lean_dec_ref(v_e_2051_);
v___y_2066_ = v_a_2078_;
goto v___jp_2065_;
}
else
{
lean_object* v___x_2089_; 
lean_dec(v_a_2078_);
lean_del_object(v___x_2063_);
lean_dec(v_a_2061_);
lean_dec_ref(v_g_2048_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v_e_2051_);
v___x_2089_ = v___x_2080_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_e_2051_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
}
}
else
{
lean_del_object(v___x_2063_);
lean_dec(v_a_2061_);
lean_dec_ref(v_e_2051_);
lean_dec_ref(v_inst_2050_);
lean_dec_ref(v_prop_2049_);
lean_dec_ref(v_g_2048_);
return v___x_2077_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_del_object(v___x_2063_);
lean_dec(v_a_2061_);
lean_dec_ref(v_e_2051_);
lean_dec_ref(v_inst_2050_);
lean_dec_ref(v_prop_2049_);
lean_dec_ref(v_g_2048_);
v_a_2093_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2073_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2073_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
uint8_t v___x_2101_; lean_object* v___x_2102_; 
lean_del_object(v___x_2063_);
lean_dec(v_a_2061_);
lean_dec_ref(v_e_2051_);
lean_dec_ref(v_prop_2049_);
lean_dec_ref(v_g_2048_);
v___x_2101_ = 0;
v___x_2102_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_inst_2050_, v___x_2072_, v___x_2101_, v_a_2052_, v_a_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
return v___x_2102_;
}
v___jp_2065_:
{
lean_object* v___x_2067_; lean_object* v___x_2069_; 
v___x_2067_ = l_Lean_mkAppB(v_g_2048_, v_a_2061_, v___y_2066_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2067_);
v___x_2069_ = v___x_2063_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
else
{
lean_dec_ref(v_e_2051_);
lean_dec_ref(v_inst_2050_);
lean_dec_ref(v_prop_2049_);
lean_dec_ref(v_g_2048_);
return v___x_2060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(lean_object* v_g_2104_, lean_object* v_prop_2105_, lean_object* v_h_2106_, lean_object* v_e_2107_, uint8_t v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
if (v_a_2108_ == 0)
{
lean_object* v___x_2116_; lean_object* v_canon_2117_; lean_object* v_cache_2118_; lean_object* v___x_2119_; 
v___x_2116_ = lean_st_ref_get(v_a_2110_);
v_canon_2117_ = lean_ctor_get(v___x_2116_, 11);
lean_inc_ref(v_canon_2117_);
lean_dec(v___x_2116_);
v_cache_2118_ = lean_ctor_get(v_canon_2117_, 0);
lean_inc_ref(v_cache_2118_);
lean_dec_ref(v_canon_2117_);
v___x_2119_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_2118_, v_e_2107_);
lean_dec_ref(v_cache_2118_);
if (lean_obj_tag(v___x_2119_) == 1)
{
lean_object* v_val_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec_ref(v_e_2107_);
lean_dec_ref(v_h_2106_);
lean_dec_ref(v_prop_2105_);
lean_dec_ref(v_g_2104_);
v_val_2120_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2119_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_val_2120_);
lean_dec(v___x_2119_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
lean_ctor_set_tag(v___x_2122_, 0);
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_val_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
else
{
lean_object* v___x_2128_; 
lean_dec(v___x_2119_);
lean_inc_ref(v_e_2107_);
v___x_2128_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_2104_, v_prop_2105_, v_h_2106_, v_e_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2169_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2131_ = v___x_2128_;
v_isShared_2132_ = v_isSharedCheck_2169_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2128_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2169_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2133_; lean_object* v_canon_2134_; lean_object* v_share_2135_; lean_object* v_maxFVar_2136_; lean_object* v_proofInstInfo_2137_; lean_object* v_proofInstInfoFVar_2138_; lean_object* v_inferType_2139_; lean_object* v_getLevel_2140_; lean_object* v_congrInfo_2141_; lean_object* v_congrInfoFixedUDec_2142_; lean_object* v_defEqI_2143_; lean_object* v_extensions_2144_; lean_object* v_issues_2145_; lean_object* v_instanceOverrides_2146_; uint8_t v_debug_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2168_; 
v___x_2133_ = lean_st_ref_take(v_a_2110_);
v_canon_2134_ = lean_ctor_get(v___x_2133_, 11);
v_share_2135_ = lean_ctor_get(v___x_2133_, 0);
v_maxFVar_2136_ = lean_ctor_get(v___x_2133_, 1);
v_proofInstInfo_2137_ = lean_ctor_get(v___x_2133_, 2);
v_proofInstInfoFVar_2138_ = lean_ctor_get(v___x_2133_, 3);
v_inferType_2139_ = lean_ctor_get(v___x_2133_, 4);
v_getLevel_2140_ = lean_ctor_get(v___x_2133_, 5);
v_congrInfo_2141_ = lean_ctor_get(v___x_2133_, 6);
v_congrInfoFixedUDec_2142_ = lean_ctor_get(v___x_2133_, 7);
v_defEqI_2143_ = lean_ctor_get(v___x_2133_, 8);
v_extensions_2144_ = lean_ctor_get(v___x_2133_, 9);
v_issues_2145_ = lean_ctor_get(v___x_2133_, 10);
v_instanceOverrides_2146_ = lean_ctor_get(v___x_2133_, 12);
v_debug_2147_ = lean_ctor_get_uint8(v___x_2133_, sizeof(void*)*13);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2149_ = v___x_2133_;
v_isShared_2150_ = v_isSharedCheck_2168_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_instanceOverrides_2146_);
lean_inc(v_canon_2134_);
lean_inc(v_issues_2145_);
lean_inc(v_extensions_2144_);
lean_inc(v_defEqI_2143_);
lean_inc(v_congrInfoFixedUDec_2142_);
lean_inc(v_congrInfo_2141_);
lean_inc(v_getLevel_2140_);
lean_inc(v_inferType_2139_);
lean_inc(v_proofInstInfoFVar_2138_);
lean_inc(v_proofInstInfo_2137_);
lean_inc(v_maxFVar_2136_);
lean_inc(v_share_2135_);
lean_dec(v___x_2133_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2168_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v_cache_2151_; lean_object* v_cacheInType_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2167_; 
v_cache_2151_ = lean_ctor_get(v_canon_2134_, 0);
v_cacheInType_2152_ = lean_ctor_get(v_canon_2134_, 1);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_canon_2134_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2154_ = v_canon_2134_;
v_isShared_2155_ = v_isSharedCheck_2167_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_cacheInType_2152_);
lean_inc(v_cache_2151_);
lean_dec(v_canon_2134_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2167_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
lean_inc(v_a_2129_);
v___x_2156_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2151_, v_e_2107_, v_a_2129_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2156_);
v___x_2158_ = v___x_2154_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_cacheInType_2152_);
v___x_2158_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2160_; 
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 11, v___x_2158_);
v___x_2160_ = v___x_2149_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_share_2135_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v_maxFVar_2136_);
lean_ctor_set(v_reuseFailAlloc_2165_, 2, v_proofInstInfo_2137_);
lean_ctor_set(v_reuseFailAlloc_2165_, 3, v_proofInstInfoFVar_2138_);
lean_ctor_set(v_reuseFailAlloc_2165_, 4, v_inferType_2139_);
lean_ctor_set(v_reuseFailAlloc_2165_, 5, v_getLevel_2140_);
lean_ctor_set(v_reuseFailAlloc_2165_, 6, v_congrInfo_2141_);
lean_ctor_set(v_reuseFailAlloc_2165_, 7, v_congrInfoFixedUDec_2142_);
lean_ctor_set(v_reuseFailAlloc_2165_, 8, v_defEqI_2143_);
lean_ctor_set(v_reuseFailAlloc_2165_, 9, v_extensions_2144_);
lean_ctor_set(v_reuseFailAlloc_2165_, 10, v_issues_2145_);
lean_ctor_set(v_reuseFailAlloc_2165_, 11, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2165_, 12, v_instanceOverrides_2146_);
lean_ctor_set_uint8(v_reuseFailAlloc_2165_, sizeof(void*)*13, v_debug_2147_);
v___x_2160_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2161_ = lean_st_ref_put(v_a_2110_, v___x_2160_);
if (v_isShared_2132_ == 0)
{
v___x_2163_ = v___x_2131_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_a_2129_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2107_);
return v___x_2128_;
}
}
}
else
{
lean_object* v___x_2170_; lean_object* v_canon_2171_; lean_object* v_cacheInType_2172_; lean_object* v___x_2173_; 
v___x_2170_ = lean_st_ref_get(v_a_2110_);
v_canon_2171_ = lean_ctor_get(v___x_2170_, 11);
lean_inc_ref(v_canon_2171_);
lean_dec(v___x_2170_);
v_cacheInType_2172_ = lean_ctor_get(v_canon_2171_, 1);
lean_inc_ref(v_cacheInType_2172_);
lean_dec_ref(v_canon_2171_);
v___x_2173_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2172_, v_e_2107_);
lean_dec_ref(v_cacheInType_2172_);
if (lean_obj_tag(v___x_2173_) == 1)
{
lean_object* v_val_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_dec_ref(v_e_2107_);
lean_dec_ref(v_h_2106_);
lean_dec_ref(v_prop_2105_);
lean_dec_ref(v_g_2104_);
v_val_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_val_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
lean_ctor_set_tag(v___x_2176_, 0);
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_val_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
else
{
lean_object* v___x_2182_; 
lean_dec(v___x_2173_);
lean_inc_ref(v_e_2107_);
v___x_2182_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_2104_, v_prop_2105_, v_h_2106_, v_e_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2223_; 
v_a_2183_ = lean_ctor_get(v___x_2182_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2185_ = v___x_2182_;
v_isShared_2186_ = v_isSharedCheck_2223_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2182_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2223_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2187_; lean_object* v_canon_2188_; lean_object* v_share_2189_; lean_object* v_maxFVar_2190_; lean_object* v_proofInstInfo_2191_; lean_object* v_proofInstInfoFVar_2192_; lean_object* v_inferType_2193_; lean_object* v_getLevel_2194_; lean_object* v_congrInfo_2195_; lean_object* v_congrInfoFixedUDec_2196_; lean_object* v_defEqI_2197_; lean_object* v_extensions_2198_; lean_object* v_issues_2199_; lean_object* v_instanceOverrides_2200_; uint8_t v_debug_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2222_; 
v___x_2187_ = lean_st_ref_take(v_a_2110_);
v_canon_2188_ = lean_ctor_get(v___x_2187_, 11);
v_share_2189_ = lean_ctor_get(v___x_2187_, 0);
v_maxFVar_2190_ = lean_ctor_get(v___x_2187_, 1);
v_proofInstInfo_2191_ = lean_ctor_get(v___x_2187_, 2);
v_proofInstInfoFVar_2192_ = lean_ctor_get(v___x_2187_, 3);
v_inferType_2193_ = lean_ctor_get(v___x_2187_, 4);
v_getLevel_2194_ = lean_ctor_get(v___x_2187_, 5);
v_congrInfo_2195_ = lean_ctor_get(v___x_2187_, 6);
v_congrInfoFixedUDec_2196_ = lean_ctor_get(v___x_2187_, 7);
v_defEqI_2197_ = lean_ctor_get(v___x_2187_, 8);
v_extensions_2198_ = lean_ctor_get(v___x_2187_, 9);
v_issues_2199_ = lean_ctor_get(v___x_2187_, 10);
v_instanceOverrides_2200_ = lean_ctor_get(v___x_2187_, 12);
v_debug_2201_ = lean_ctor_get_uint8(v___x_2187_, sizeof(void*)*13);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2203_ = v___x_2187_;
v_isShared_2204_ = v_isSharedCheck_2222_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_instanceOverrides_2200_);
lean_inc(v_canon_2188_);
lean_inc(v_issues_2199_);
lean_inc(v_extensions_2198_);
lean_inc(v_defEqI_2197_);
lean_inc(v_congrInfoFixedUDec_2196_);
lean_inc(v_congrInfo_2195_);
lean_inc(v_getLevel_2194_);
lean_inc(v_inferType_2193_);
lean_inc(v_proofInstInfoFVar_2192_);
lean_inc(v_proofInstInfo_2191_);
lean_inc(v_maxFVar_2190_);
lean_inc(v_share_2189_);
lean_dec(v___x_2187_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2222_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_cache_2205_; lean_object* v_cacheInType_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2221_; 
v_cache_2205_ = lean_ctor_get(v_canon_2188_, 0);
v_cacheInType_2206_ = lean_ctor_get(v_canon_2188_, 1);
v_isSharedCheck_2221_ = !lean_is_exclusive(v_canon_2188_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2208_ = v_canon_2188_;
v_isShared_2209_ = v_isSharedCheck_2221_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_cacheInType_2206_);
lean_inc(v_cache_2205_);
lean_dec(v_canon_2188_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2221_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2210_; lean_object* v___x_2212_; 
lean_inc(v_a_2183_);
v___x_2210_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2206_, v_e_2107_, v_a_2183_);
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 1, v___x_2210_);
v___x_2212_ = v___x_2208_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_cache_2205_);
lean_ctor_set(v_reuseFailAlloc_2220_, 1, v___x_2210_);
v___x_2212_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2214_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 11, v___x_2212_);
v___x_2214_ = v___x_2203_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_share_2189_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v_maxFVar_2190_);
lean_ctor_set(v_reuseFailAlloc_2219_, 2, v_proofInstInfo_2191_);
lean_ctor_set(v_reuseFailAlloc_2219_, 3, v_proofInstInfoFVar_2192_);
lean_ctor_set(v_reuseFailAlloc_2219_, 4, v_inferType_2193_);
lean_ctor_set(v_reuseFailAlloc_2219_, 5, v_getLevel_2194_);
lean_ctor_set(v_reuseFailAlloc_2219_, 6, v_congrInfo_2195_);
lean_ctor_set(v_reuseFailAlloc_2219_, 7, v_congrInfoFixedUDec_2196_);
lean_ctor_set(v_reuseFailAlloc_2219_, 8, v_defEqI_2197_);
lean_ctor_set(v_reuseFailAlloc_2219_, 9, v_extensions_2198_);
lean_ctor_set(v_reuseFailAlloc_2219_, 10, v_issues_2199_);
lean_ctor_set(v_reuseFailAlloc_2219_, 11, v___x_2212_);
lean_ctor_set(v_reuseFailAlloc_2219_, 12, v_instanceOverrides_2200_);
lean_ctor_set_uint8(v_reuseFailAlloc_2219_, sizeof(void*)*13, v_debug_2201_);
v___x_2214_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2215_; lean_object* v___x_2217_; 
v___x_2215_ = lean_st_ref_put(v_a_2110_, v___x_2214_);
if (v_isShared_2186_ == 0)
{
v___x_2217_ = v___x_2185_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2183_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2107_);
return v___x_2182_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__2(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2227_ = lean_box(0);
v___x_2228_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__1));
v___x_2229_ = l_Lean_mkConst(v___x_2228_, v___x_2227_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27(lean_object* v_g_2230_, lean_object* v_prop_2231_, lean_object* v_inst_2232_, lean_object* v_e_2233_, uint8_t v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_){
_start:
{
lean_object* v___x_2242_; 
lean_inc_ref(v_prop_2231_);
v___x_2242_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2231_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2281_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2281_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2281_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2247_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___closed__2);
lean_inc(v_a_2243_);
v___x_2248_ = l_Lean_Expr_app___override(v___x_2247_, v_a_2243_);
v___x_2249_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_2248_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2272_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2252_ = v___x_2249_;
v_isShared_2253_ = v_isSharedCheck_2272_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_a_2250_);
lean_dec(v___x_2249_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2272_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___y_2255_; lean_object* v___y_2261_; 
if (lean_obj_tag(v_a_2250_) == 0)
{
lean_inc_ref(v_inst_2232_);
v___y_2261_ = v_inst_2232_;
goto v___jp_2260_;
}
else
{
lean_object* v_val_2271_; 
v_val_2271_ = lean_ctor_get(v_a_2250_, 0);
lean_inc(v_val_2271_);
lean_dec_ref_known(v_a_2250_, 1);
v___y_2261_ = v_val_2271_;
goto v___jp_2260_;
}
v___jp_2254_:
{
lean_object* v___x_2256_; lean_object* v___x_2258_; 
v___x_2256_ = l_Lean_mkAppB(v_g_2230_, v_a_2243_, v___y_2255_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 0, v___x_2256_);
v___x_2258_ = v___x_2252_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2256_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
v___jp_2260_:
{
size_t v___x_2262_; size_t v___x_2263_; uint8_t v___x_2264_; 
v___x_2262_ = lean_ptr_addr(v_prop_2231_);
lean_dec_ref(v_prop_2231_);
v___x_2263_ = lean_ptr_addr(v_a_2243_);
v___x_2264_ = lean_usize_dec_eq(v___x_2262_, v___x_2263_);
if (v___x_2264_ == 0)
{
lean_del_object(v___x_2245_);
lean_dec_ref(v_e_2233_);
lean_dec_ref(v_inst_2232_);
v___y_2255_ = v___y_2261_;
goto v___jp_2254_;
}
else
{
size_t v___x_2265_; size_t v___x_2266_; uint8_t v___x_2267_; 
v___x_2265_ = lean_ptr_addr(v_inst_2232_);
lean_dec_ref(v_inst_2232_);
v___x_2266_ = lean_ptr_addr(v___y_2261_);
v___x_2267_ = lean_usize_dec_eq(v___x_2265_, v___x_2266_);
if (v___x_2267_ == 0)
{
lean_del_object(v___x_2245_);
lean_dec_ref(v_e_2233_);
v___y_2255_ = v___y_2261_;
goto v___jp_2254_;
}
else
{
lean_object* v___x_2269_; 
lean_dec_ref(v___y_2261_);
lean_del_object(v___x_2252_);
lean_dec(v_a_2243_);
lean_dec_ref(v_g_2230_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v_e_2233_);
v___x_2269_ = v___x_2245_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_e_2233_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_del_object(v___x_2245_);
lean_dec(v_a_2243_);
lean_dec_ref(v_e_2233_);
lean_dec_ref(v_inst_2232_);
lean_dec_ref(v_prop_2231_);
lean_dec_ref(v_g_2230_);
v_a_2273_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2249_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2249_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_2233_);
lean_dec_ref(v_inst_2232_);
lean_dec_ref(v_prop_2231_);
lean_dec_ref(v_g_2230_);
return v___x_2242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec(lean_object* v_g_2282_, lean_object* v_prop_2283_, lean_object* v_h_2284_, lean_object* v_e_2285_, uint8_t v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_){
_start:
{
if (v_a_2286_ == 0)
{
lean_object* v___x_2294_; lean_object* v_canon_2295_; lean_object* v_cache_2296_; lean_object* v___x_2297_; 
v___x_2294_ = lean_st_ref_get(v_a_2288_);
v_canon_2295_ = lean_ctor_get(v___x_2294_, 11);
lean_inc_ref(v_canon_2295_);
lean_dec(v___x_2294_);
v_cache_2296_ = lean_ctor_get(v_canon_2295_, 0);
lean_inc_ref(v_cache_2296_);
lean_dec_ref(v_canon_2295_);
v___x_2297_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_2296_, v_e_2285_);
lean_dec_ref(v_cache_2296_);
if (lean_obj_tag(v___x_2297_) == 1)
{
lean_object* v_val_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec_ref(v_e_2285_);
lean_dec_ref(v_h_2284_);
lean_dec_ref(v_prop_2283_);
lean_dec_ref(v_g_2282_);
v_val_2298_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2297_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_val_2298_);
lean_dec(v___x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 0);
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_val_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
else
{
lean_object* v___x_2306_; 
lean_dec(v___x_2297_);
lean_inc_ref(v_e_2285_);
v___x_2306_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27(v_g_2282_, v_prop_2283_, v_h_2284_, v_e_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2347_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2309_ = v___x_2306_;
v_isShared_2310_ = v_isSharedCheck_2347_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2306_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2347_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2311_; lean_object* v_canon_2312_; lean_object* v_share_2313_; lean_object* v_maxFVar_2314_; lean_object* v_proofInstInfo_2315_; lean_object* v_proofInstInfoFVar_2316_; lean_object* v_inferType_2317_; lean_object* v_getLevel_2318_; lean_object* v_congrInfo_2319_; lean_object* v_congrInfoFixedUDec_2320_; lean_object* v_defEqI_2321_; lean_object* v_extensions_2322_; lean_object* v_issues_2323_; lean_object* v_instanceOverrides_2324_; uint8_t v_debug_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2346_; 
v___x_2311_ = lean_st_ref_take(v_a_2288_);
v_canon_2312_ = lean_ctor_get(v___x_2311_, 11);
v_share_2313_ = lean_ctor_get(v___x_2311_, 0);
v_maxFVar_2314_ = lean_ctor_get(v___x_2311_, 1);
v_proofInstInfo_2315_ = lean_ctor_get(v___x_2311_, 2);
v_proofInstInfoFVar_2316_ = lean_ctor_get(v___x_2311_, 3);
v_inferType_2317_ = lean_ctor_get(v___x_2311_, 4);
v_getLevel_2318_ = lean_ctor_get(v___x_2311_, 5);
v_congrInfo_2319_ = lean_ctor_get(v___x_2311_, 6);
v_congrInfoFixedUDec_2320_ = lean_ctor_get(v___x_2311_, 7);
v_defEqI_2321_ = lean_ctor_get(v___x_2311_, 8);
v_extensions_2322_ = lean_ctor_get(v___x_2311_, 9);
v_issues_2323_ = lean_ctor_get(v___x_2311_, 10);
v_instanceOverrides_2324_ = lean_ctor_get(v___x_2311_, 12);
v_debug_2325_ = lean_ctor_get_uint8(v___x_2311_, sizeof(void*)*13);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2327_ = v___x_2311_;
v_isShared_2328_ = v_isSharedCheck_2346_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_instanceOverrides_2324_);
lean_inc(v_canon_2312_);
lean_inc(v_issues_2323_);
lean_inc(v_extensions_2322_);
lean_inc(v_defEqI_2321_);
lean_inc(v_congrInfoFixedUDec_2320_);
lean_inc(v_congrInfo_2319_);
lean_inc(v_getLevel_2318_);
lean_inc(v_inferType_2317_);
lean_inc(v_proofInstInfoFVar_2316_);
lean_inc(v_proofInstInfo_2315_);
lean_inc(v_maxFVar_2314_);
lean_inc(v_share_2313_);
lean_dec(v___x_2311_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2346_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v_cache_2329_; lean_object* v_cacheInType_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2345_; 
v_cache_2329_ = lean_ctor_get(v_canon_2312_, 0);
v_cacheInType_2330_ = lean_ctor_get(v_canon_2312_, 1);
v_isSharedCheck_2345_ = !lean_is_exclusive(v_canon_2312_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2332_ = v_canon_2312_;
v_isShared_2333_ = v_isSharedCheck_2345_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_cacheInType_2330_);
lean_inc(v_cache_2329_);
lean_dec(v_canon_2312_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2345_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2334_; lean_object* v___x_2336_; 
lean_inc(v_a_2307_);
v___x_2334_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2329_, v_e_2285_, v_a_2307_);
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 0, v___x_2334_);
v___x_2336_ = v___x_2332_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2344_, 1, v_cacheInType_2330_);
v___x_2336_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
lean_object* v___x_2338_; 
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 11, v___x_2336_);
v___x_2338_ = v___x_2327_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_share_2313_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_maxFVar_2314_);
lean_ctor_set(v_reuseFailAlloc_2343_, 2, v_proofInstInfo_2315_);
lean_ctor_set(v_reuseFailAlloc_2343_, 3, v_proofInstInfoFVar_2316_);
lean_ctor_set(v_reuseFailAlloc_2343_, 4, v_inferType_2317_);
lean_ctor_set(v_reuseFailAlloc_2343_, 5, v_getLevel_2318_);
lean_ctor_set(v_reuseFailAlloc_2343_, 6, v_congrInfo_2319_);
lean_ctor_set(v_reuseFailAlloc_2343_, 7, v_congrInfoFixedUDec_2320_);
lean_ctor_set(v_reuseFailAlloc_2343_, 8, v_defEqI_2321_);
lean_ctor_set(v_reuseFailAlloc_2343_, 9, v_extensions_2322_);
lean_ctor_set(v_reuseFailAlloc_2343_, 10, v_issues_2323_);
lean_ctor_set(v_reuseFailAlloc_2343_, 11, v___x_2336_);
lean_ctor_set(v_reuseFailAlloc_2343_, 12, v_instanceOverrides_2324_);
lean_ctor_set_uint8(v_reuseFailAlloc_2343_, sizeof(void*)*13, v_debug_2325_);
v___x_2338_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2341_; 
v___x_2339_ = lean_st_ref_put(v_a_2288_, v___x_2338_);
if (v_isShared_2310_ == 0)
{
v___x_2341_ = v___x_2309_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2307_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2285_);
return v___x_2306_;
}
}
}
else
{
lean_object* v___x_2348_; lean_object* v_canon_2349_; lean_object* v_cacheInType_2350_; lean_object* v___x_2351_; 
v___x_2348_ = lean_st_ref_get(v_a_2288_);
v_canon_2349_ = lean_ctor_get(v___x_2348_, 11);
lean_inc_ref(v_canon_2349_);
lean_dec(v___x_2348_);
v_cacheInType_2350_ = lean_ctor_get(v_canon_2349_, 1);
lean_inc_ref(v_cacheInType_2350_);
lean_dec_ref(v_canon_2349_);
v___x_2351_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2350_, v_e_2285_);
lean_dec_ref(v_cacheInType_2350_);
if (lean_obj_tag(v___x_2351_) == 1)
{
lean_object* v_val_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec_ref(v_e_2285_);
lean_dec_ref(v_h_2284_);
lean_dec_ref(v_prop_2283_);
lean_dec_ref(v_g_2282_);
v_val_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_val_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set_tag(v___x_2354_, 0);
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_val_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
lean_object* v___x_2360_; 
lean_dec(v___x_2351_);
lean_inc_ref(v_e_2285_);
v___x_2360_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27(v_g_2282_, v_prop_2283_, v_h_2284_, v_e_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2401_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2363_ = v___x_2360_;
v_isShared_2364_ = v_isSharedCheck_2401_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2360_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2401_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2365_; lean_object* v_canon_2366_; lean_object* v_share_2367_; lean_object* v_maxFVar_2368_; lean_object* v_proofInstInfo_2369_; lean_object* v_proofInstInfoFVar_2370_; lean_object* v_inferType_2371_; lean_object* v_getLevel_2372_; lean_object* v_congrInfo_2373_; lean_object* v_congrInfoFixedUDec_2374_; lean_object* v_defEqI_2375_; lean_object* v_extensions_2376_; lean_object* v_issues_2377_; lean_object* v_instanceOverrides_2378_; uint8_t v_debug_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2400_; 
v___x_2365_ = lean_st_ref_take(v_a_2288_);
v_canon_2366_ = lean_ctor_get(v___x_2365_, 11);
v_share_2367_ = lean_ctor_get(v___x_2365_, 0);
v_maxFVar_2368_ = lean_ctor_get(v___x_2365_, 1);
v_proofInstInfo_2369_ = lean_ctor_get(v___x_2365_, 2);
v_proofInstInfoFVar_2370_ = lean_ctor_get(v___x_2365_, 3);
v_inferType_2371_ = lean_ctor_get(v___x_2365_, 4);
v_getLevel_2372_ = lean_ctor_get(v___x_2365_, 5);
v_congrInfo_2373_ = lean_ctor_get(v___x_2365_, 6);
v_congrInfoFixedUDec_2374_ = lean_ctor_get(v___x_2365_, 7);
v_defEqI_2375_ = lean_ctor_get(v___x_2365_, 8);
v_extensions_2376_ = lean_ctor_get(v___x_2365_, 9);
v_issues_2377_ = lean_ctor_get(v___x_2365_, 10);
v_instanceOverrides_2378_ = lean_ctor_get(v___x_2365_, 12);
v_debug_2379_ = lean_ctor_get_uint8(v___x_2365_, sizeof(void*)*13);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2381_ = v___x_2365_;
v_isShared_2382_ = v_isSharedCheck_2400_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_instanceOverrides_2378_);
lean_inc(v_canon_2366_);
lean_inc(v_issues_2377_);
lean_inc(v_extensions_2376_);
lean_inc(v_defEqI_2375_);
lean_inc(v_congrInfoFixedUDec_2374_);
lean_inc(v_congrInfo_2373_);
lean_inc(v_getLevel_2372_);
lean_inc(v_inferType_2371_);
lean_inc(v_proofInstInfoFVar_2370_);
lean_inc(v_proofInstInfo_2369_);
lean_inc(v_maxFVar_2368_);
lean_inc(v_share_2367_);
lean_dec(v___x_2365_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2400_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v_cache_2383_; lean_object* v_cacheInType_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2399_; 
v_cache_2383_ = lean_ctor_get(v_canon_2366_, 0);
v_cacheInType_2384_ = lean_ctor_get(v_canon_2366_, 1);
v_isSharedCheck_2399_ = !lean_is_exclusive(v_canon_2366_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2386_ = v_canon_2366_;
v_isShared_2387_ = v_isSharedCheck_2399_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_cacheInType_2384_);
lean_inc(v_cache_2383_);
lean_dec(v_canon_2366_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2399_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2388_; lean_object* v___x_2390_; 
lean_inc(v_a_2361_);
v___x_2388_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2384_, v_e_2285_, v_a_2361_);
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 1, v___x_2388_);
v___x_2390_ = v___x_2386_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_cache_2383_);
lean_ctor_set(v_reuseFailAlloc_2398_, 1, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
lean_object* v___x_2392_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 11, v___x_2390_);
v___x_2392_ = v___x_2381_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_share_2367_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_maxFVar_2368_);
lean_ctor_set(v_reuseFailAlloc_2397_, 2, v_proofInstInfo_2369_);
lean_ctor_set(v_reuseFailAlloc_2397_, 3, v_proofInstInfoFVar_2370_);
lean_ctor_set(v_reuseFailAlloc_2397_, 4, v_inferType_2371_);
lean_ctor_set(v_reuseFailAlloc_2397_, 5, v_getLevel_2372_);
lean_ctor_set(v_reuseFailAlloc_2397_, 6, v_congrInfo_2373_);
lean_ctor_set(v_reuseFailAlloc_2397_, 7, v_congrInfoFixedUDec_2374_);
lean_ctor_set(v_reuseFailAlloc_2397_, 8, v_defEqI_2375_);
lean_ctor_set(v_reuseFailAlloc_2397_, 9, v_extensions_2376_);
lean_ctor_set(v_reuseFailAlloc_2397_, 10, v_issues_2377_);
lean_ctor_set(v_reuseFailAlloc_2397_, 11, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2397_, 12, v_instanceOverrides_2378_);
lean_ctor_set_uint8(v_reuseFailAlloc_2397_, sizeof(void*)*13, v_debug_2379_);
v___x_2392_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
lean_object* v___x_2393_; lean_object* v___x_2395_; 
v___x_2393_ = lean_st_ref_put(v_a_2288_, v___x_2392_);
if (v_isShared_2364_ == 0)
{
v___x_2395_ = v___x_2363_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2361_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2285_);
return v___x_2360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(lean_object* v_g_2402_, lean_object* v_prop_2403_, lean_object* v_h_2404_, lean_object* v_e_2405_, uint8_t v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_){
_start:
{
lean_object* v_a_2415_; 
if (v_a_2406_ == 0)
{
lean_object* v___x_2450_; lean_object* v_canon_2451_; lean_object* v_cache_2452_; lean_object* v___x_2453_; 
v___x_2450_ = lean_st_ref_get(v_a_2408_);
v_canon_2451_ = lean_ctor_get(v___x_2450_, 11);
lean_inc_ref(v_canon_2451_);
lean_dec(v___x_2450_);
v_cache_2452_ = lean_ctor_get(v_canon_2451_, 0);
lean_inc_ref(v_cache_2452_);
lean_dec_ref(v_canon_2451_);
v___x_2453_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_2452_, v_e_2405_);
lean_dec_ref(v_cache_2452_);
if (lean_obj_tag(v___x_2453_) == 1)
{
lean_object* v_val_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec_ref(v_e_2405_);
lean_dec_ref(v_h_2404_);
lean_dec_ref(v_prop_2403_);
lean_dec_ref(v_g_2402_);
v_val_2454_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2453_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_val_2454_);
lean_dec(v___x_2453_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set_tag(v___x_2456_, 0);
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_val_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
else
{
lean_object* v___x_2462_; 
lean_dec(v___x_2453_);
lean_inc_ref(v_prop_2403_);
v___x_2462_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2403_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2464_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
lean_inc_n(v_a_2463_, 2);
lean_dec_ref_known(v___x_2462_, 1);
v___x_2464_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_a_2463_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; lean_object* v___y_2467_; lean_object* v___y_2470_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_a_2465_);
lean_dec_ref_known(v___x_2464_, 1);
if (lean_obj_tag(v_a_2465_) == 0)
{
lean_inc_ref(v_h_2404_);
v___y_2470_ = v_h_2404_;
goto v___jp_2469_;
}
else
{
lean_object* v_val_2477_; 
v_val_2477_ = lean_ctor_get(v_a_2465_, 0);
lean_inc(v_val_2477_);
lean_dec_ref_known(v_a_2465_, 1);
v___y_2470_ = v_val_2477_;
goto v___jp_2469_;
}
v___jp_2466_:
{
lean_object* v___x_2468_; 
v___x_2468_ = l_Lean_mkAppB(v_g_2402_, v_a_2463_, v___y_2467_);
v_a_2415_ = v___x_2468_;
goto v___jp_2414_;
}
v___jp_2469_:
{
size_t v___x_2471_; size_t v___x_2472_; uint8_t v___x_2473_; 
v___x_2471_ = lean_ptr_addr(v_prop_2403_);
lean_dec_ref(v_prop_2403_);
v___x_2472_ = lean_ptr_addr(v_a_2463_);
v___x_2473_ = lean_usize_dec_eq(v___x_2471_, v___x_2472_);
if (v___x_2473_ == 0)
{
lean_dec_ref(v_h_2404_);
v___y_2467_ = v___y_2470_;
goto v___jp_2466_;
}
else
{
size_t v___x_2474_; size_t v___x_2475_; uint8_t v___x_2476_; 
v___x_2474_ = lean_ptr_addr(v_h_2404_);
lean_dec_ref(v_h_2404_);
v___x_2475_ = lean_ptr_addr(v___y_2470_);
v___x_2476_ = lean_usize_dec_eq(v___x_2474_, v___x_2475_);
if (v___x_2476_ == 0)
{
v___y_2467_ = v___y_2470_;
goto v___jp_2466_;
}
else
{
lean_dec_ref(v___y_2470_);
lean_dec(v_a_2463_);
lean_dec_ref(v_g_2402_);
lean_inc_ref(v_e_2405_);
v_a_2415_ = v_e_2405_;
goto v___jp_2414_;
}
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_a_2463_);
lean_dec_ref(v_e_2405_);
lean_dec_ref(v_h_2404_);
lean_dec_ref(v_prop_2403_);
lean_dec_ref(v_g_2402_);
v_a_2478_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2464_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2464_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
else
{
lean_dec_ref(v_e_2405_);
lean_dec_ref(v_h_2404_);
lean_dec_ref(v_prop_2403_);
lean_dec_ref(v_g_2402_);
return v___x_2462_;
}
}
}
else
{
lean_object* v___x_2486_; lean_object* v_canon_2487_; lean_object* v_cacheInType_2488_; lean_object* v___x_2489_; 
lean_dec_ref(v_g_2402_);
v___x_2486_ = lean_st_ref_get(v_a_2408_);
v_canon_2487_ = lean_ctor_get(v___x_2486_, 11);
lean_inc_ref(v_canon_2487_);
lean_dec(v___x_2486_);
v_cacheInType_2488_ = lean_ctor_get(v_canon_2487_, 1);
lean_inc_ref(v_cacheInType_2488_);
lean_dec_ref(v_canon_2487_);
v___x_2489_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2488_, v_e_2405_);
lean_dec_ref(v_cacheInType_2488_);
if (lean_obj_tag(v___x_2489_) == 1)
{
lean_object* v_val_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
lean_dec_ref(v_e_2405_);
lean_dec_ref(v_h_2404_);
lean_dec_ref(v_prop_2403_);
v_val_2490_ = lean_ctor_get(v___x_2489_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2489_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_val_2490_);
lean_dec(v___x_2489_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 0);
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_val_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
else
{
lean_object* v___x_2498_; 
lean_dec(v___x_2489_);
v___x_2498_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2403_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; uint8_t v___x_2500_; lean_object* v___x_2501_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2498_, 1);
v___x_2500_ = 0;
v___x_2501_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_h_2404_, v_a_2499_, v___x_2500_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2542_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2504_ = v___x_2501_;
v_isShared_2505_ = v_isSharedCheck_2542_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2501_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2542_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2506_; lean_object* v_canon_2507_; lean_object* v_share_2508_; lean_object* v_maxFVar_2509_; lean_object* v_proofInstInfo_2510_; lean_object* v_proofInstInfoFVar_2511_; lean_object* v_inferType_2512_; lean_object* v_getLevel_2513_; lean_object* v_congrInfo_2514_; lean_object* v_congrInfoFixedUDec_2515_; lean_object* v_defEqI_2516_; lean_object* v_extensions_2517_; lean_object* v_issues_2518_; lean_object* v_instanceOverrides_2519_; uint8_t v_debug_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2541_; 
v___x_2506_ = lean_st_ref_take(v_a_2408_);
v_canon_2507_ = lean_ctor_get(v___x_2506_, 11);
v_share_2508_ = lean_ctor_get(v___x_2506_, 0);
v_maxFVar_2509_ = lean_ctor_get(v___x_2506_, 1);
v_proofInstInfo_2510_ = lean_ctor_get(v___x_2506_, 2);
v_proofInstInfoFVar_2511_ = lean_ctor_get(v___x_2506_, 3);
v_inferType_2512_ = lean_ctor_get(v___x_2506_, 4);
v_getLevel_2513_ = lean_ctor_get(v___x_2506_, 5);
v_congrInfo_2514_ = lean_ctor_get(v___x_2506_, 6);
v_congrInfoFixedUDec_2515_ = lean_ctor_get(v___x_2506_, 7);
v_defEqI_2516_ = lean_ctor_get(v___x_2506_, 8);
v_extensions_2517_ = lean_ctor_get(v___x_2506_, 9);
v_issues_2518_ = lean_ctor_get(v___x_2506_, 10);
v_instanceOverrides_2519_ = lean_ctor_get(v___x_2506_, 12);
v_debug_2520_ = lean_ctor_get_uint8(v___x_2506_, sizeof(void*)*13);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2522_ = v___x_2506_;
v_isShared_2523_ = v_isSharedCheck_2541_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_instanceOverrides_2519_);
lean_inc(v_canon_2507_);
lean_inc(v_issues_2518_);
lean_inc(v_extensions_2517_);
lean_inc(v_defEqI_2516_);
lean_inc(v_congrInfoFixedUDec_2515_);
lean_inc(v_congrInfo_2514_);
lean_inc(v_getLevel_2513_);
lean_inc(v_inferType_2512_);
lean_inc(v_proofInstInfoFVar_2511_);
lean_inc(v_proofInstInfo_2510_);
lean_inc(v_maxFVar_2509_);
lean_inc(v_share_2508_);
lean_dec(v___x_2506_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2541_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v_cache_2524_; lean_object* v_cacheInType_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2540_; 
v_cache_2524_ = lean_ctor_get(v_canon_2507_, 0);
v_cacheInType_2525_ = lean_ctor_get(v_canon_2507_, 1);
v_isSharedCheck_2540_ = !lean_is_exclusive(v_canon_2507_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2527_ = v_canon_2507_;
v_isShared_2528_ = v_isSharedCheck_2540_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_cacheInType_2525_);
lean_inc(v_cache_2524_);
lean_dec(v_canon_2507_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2540_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2529_; lean_object* v___x_2531_; 
lean_inc(v_a_2502_);
v___x_2529_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2525_, v_e_2405_, v_a_2502_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 1, v___x_2529_);
v___x_2531_ = v___x_2527_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_cache_2524_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v___x_2529_);
v___x_2531_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
lean_object* v___x_2533_; 
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 11, v___x_2531_);
v___x_2533_ = v___x_2522_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_share_2508_);
lean_ctor_set(v_reuseFailAlloc_2538_, 1, v_maxFVar_2509_);
lean_ctor_set(v_reuseFailAlloc_2538_, 2, v_proofInstInfo_2510_);
lean_ctor_set(v_reuseFailAlloc_2538_, 3, v_proofInstInfoFVar_2511_);
lean_ctor_set(v_reuseFailAlloc_2538_, 4, v_inferType_2512_);
lean_ctor_set(v_reuseFailAlloc_2538_, 5, v_getLevel_2513_);
lean_ctor_set(v_reuseFailAlloc_2538_, 6, v_congrInfo_2514_);
lean_ctor_set(v_reuseFailAlloc_2538_, 7, v_congrInfoFixedUDec_2515_);
lean_ctor_set(v_reuseFailAlloc_2538_, 8, v_defEqI_2516_);
lean_ctor_set(v_reuseFailAlloc_2538_, 9, v_extensions_2517_);
lean_ctor_set(v_reuseFailAlloc_2538_, 10, v_issues_2518_);
lean_ctor_set(v_reuseFailAlloc_2538_, 11, v___x_2531_);
lean_ctor_set(v_reuseFailAlloc_2538_, 12, v_instanceOverrides_2519_);
lean_ctor_set_uint8(v_reuseFailAlloc_2538_, sizeof(void*)*13, v_debug_2520_);
v___x_2533_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2534_ = lean_st_ref_put(v_a_2408_, v___x_2533_);
if (v_isShared_2505_ == 0)
{
v___x_2536_ = v___x_2504_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2502_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2405_);
return v___x_2501_;
}
}
else
{
lean_dec_ref(v_e_2405_);
lean_dec_ref(v_h_2404_);
return v___x_2498_;
}
}
}
v___jp_2414_:
{
lean_object* v___x_2416_; lean_object* v_canon_2417_; lean_object* v_share_2418_; lean_object* v_maxFVar_2419_; lean_object* v_proofInstInfo_2420_; lean_object* v_proofInstInfoFVar_2421_; lean_object* v_inferType_2422_; lean_object* v_getLevel_2423_; lean_object* v_congrInfo_2424_; lean_object* v_congrInfoFixedUDec_2425_; lean_object* v_defEqI_2426_; lean_object* v_extensions_2427_; lean_object* v_issues_2428_; lean_object* v_instanceOverrides_2429_; uint8_t v_debug_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2449_; 
v___x_2416_ = lean_st_ref_take(v_a_2408_);
v_canon_2417_ = lean_ctor_get(v___x_2416_, 11);
v_share_2418_ = lean_ctor_get(v___x_2416_, 0);
v_maxFVar_2419_ = lean_ctor_get(v___x_2416_, 1);
v_proofInstInfo_2420_ = lean_ctor_get(v___x_2416_, 2);
v_proofInstInfoFVar_2421_ = lean_ctor_get(v___x_2416_, 3);
v_inferType_2422_ = lean_ctor_get(v___x_2416_, 4);
v_getLevel_2423_ = lean_ctor_get(v___x_2416_, 5);
v_congrInfo_2424_ = lean_ctor_get(v___x_2416_, 6);
v_congrInfoFixedUDec_2425_ = lean_ctor_get(v___x_2416_, 7);
v_defEqI_2426_ = lean_ctor_get(v___x_2416_, 8);
v_extensions_2427_ = lean_ctor_get(v___x_2416_, 9);
v_issues_2428_ = lean_ctor_get(v___x_2416_, 10);
v_instanceOverrides_2429_ = lean_ctor_get(v___x_2416_, 12);
v_debug_2430_ = lean_ctor_get_uint8(v___x_2416_, sizeof(void*)*13);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2432_ = v___x_2416_;
v_isShared_2433_ = v_isSharedCheck_2449_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_instanceOverrides_2429_);
lean_inc(v_canon_2417_);
lean_inc(v_issues_2428_);
lean_inc(v_extensions_2427_);
lean_inc(v_defEqI_2426_);
lean_inc(v_congrInfoFixedUDec_2425_);
lean_inc(v_congrInfo_2424_);
lean_inc(v_getLevel_2423_);
lean_inc(v_inferType_2422_);
lean_inc(v_proofInstInfoFVar_2421_);
lean_inc(v_proofInstInfo_2420_);
lean_inc(v_maxFVar_2419_);
lean_inc(v_share_2418_);
lean_dec(v___x_2416_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2449_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v_cache_2434_; lean_object* v_cacheInType_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2448_; 
v_cache_2434_ = lean_ctor_get(v_canon_2417_, 0);
v_cacheInType_2435_ = lean_ctor_get(v_canon_2417_, 1);
v_isSharedCheck_2448_ = !lean_is_exclusive(v_canon_2417_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2437_ = v_canon_2417_;
v_isShared_2438_ = v_isSharedCheck_2448_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_cacheInType_2435_);
lean_inc(v_cache_2434_);
lean_dec(v_canon_2417_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2448_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
lean_inc_ref(v_a_2415_);
v___x_2439_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2434_, v_e_2405_, v_a_2415_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2439_);
v___x_2441_ = v___x_2437_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v___x_2439_);
lean_ctor_set(v_reuseFailAlloc_2447_, 1, v_cacheInType_2435_);
v___x_2441_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
lean_object* v___x_2443_; 
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 11, v___x_2441_);
v___x_2443_ = v___x_2432_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_share_2418_);
lean_ctor_set(v_reuseFailAlloc_2446_, 1, v_maxFVar_2419_);
lean_ctor_set(v_reuseFailAlloc_2446_, 2, v_proofInstInfo_2420_);
lean_ctor_set(v_reuseFailAlloc_2446_, 3, v_proofInstInfoFVar_2421_);
lean_ctor_set(v_reuseFailAlloc_2446_, 4, v_inferType_2422_);
lean_ctor_set(v_reuseFailAlloc_2446_, 5, v_getLevel_2423_);
lean_ctor_set(v_reuseFailAlloc_2446_, 6, v_congrInfo_2424_);
lean_ctor_set(v_reuseFailAlloc_2446_, 7, v_congrInfoFixedUDec_2425_);
lean_ctor_set(v_reuseFailAlloc_2446_, 8, v_defEqI_2426_);
lean_ctor_set(v_reuseFailAlloc_2446_, 9, v_extensions_2427_);
lean_ctor_set(v_reuseFailAlloc_2446_, 10, v_issues_2428_);
lean_ctor_set(v_reuseFailAlloc_2446_, 11, v___x_2441_);
lean_ctor_set(v_reuseFailAlloc_2446_, 12, v_instanceOverrides_2429_);
lean_ctor_set_uint8(v_reuseFailAlloc_2446_, sizeof(void*)*13, v_debug_2430_);
v___x_2443_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = lean_st_ref_put(v_a_2408_, v___x_2443_);
v___x_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2445_, 0, v_a_2415_);
return v___x_2445_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(lean_object* v___x_2543_, lean_object* v_snd_2544_, lean_object* v_a_2545_, uint8_t v___x_2546_, lean_object* v_fst_2547_, lean_object* v_f_2548_, lean_object* v___x_2549_, lean_object* v___x_2550_, lean_object* v___x_2551_, lean_object* v_____r_2552_, uint8_t v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v_arg_x27_2562_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; uint8_t v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; uint8_t v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; uint8_t v___y_2624_; lean_object* v___y_2625_; lean_object* v___x_2645_; 
lean_inc_ref(v___x_2543_);
v___x_2645_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v___x_2551_, v_a_2545_, v___x_2543_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; uint8_t v___x_2647_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2645_, 1);
v___x_2647_ = lean_unbox(v_a_2646_);
lean_dec(v_a_2646_);
switch(v___x_2647_)
{
case 0:
{
lean_object* v___x_2648_; 
lean_inc_ref(v___x_2543_);
v___x_2648_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v___x_2543_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2648_, 1);
v_arg_x27_2562_ = v_a_2649_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2650_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2648_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2648_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
case 1:
{
lean_object* v___x_2658_; 
lean_inc_ref(v___x_2543_);
v___x_2658_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___x_2543_, v___y_2557_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = l_Lean_Expr_cleanupAnnotations(v_a_2659_);
lean_dec(v_a_2659_);
v___x_2661_ = l_Lean_Expr_isApp(v___x_2660_);
if (v___x_2661_ == 0)
{
lean_dec_ref(v___x_2660_);
goto v___jp_2636_;
}
else
{
lean_object* v___x_2662_; uint8_t v___x_2663_; 
v___x_2662_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2660_);
v___x_2663_ = l_Lean_Expr_isApp(v___x_2662_);
if (v___x_2663_ == 0)
{
lean_dec_ref(v___x_2662_);
lean_dec_ref(v___x_2660_);
goto v___jp_2636_;
}
else
{
lean_object* v_arg_2664_; lean_object* v_arg_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; 
v_arg_2664_ = lean_ctor_get(v___x_2660_, 1);
lean_inc_ref(v_arg_2664_);
lean_dec_ref(v___x_2660_);
v_arg_2665_ = lean_ctor_get(v___x_2662_, 1);
lean_inc_ref(v_arg_2665_);
v___x_2666_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2662_);
lean_dec_ref(v___x_2662_);
v___x_2667_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1));
v___x_2668_ = l_Lean_Expr_isConstOf(v___x_2666_, v___x_2667_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; uint8_t v___x_2670_; 
v___x_2669_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2670_ = l_Lean_Expr_isConstOf(v___x_2666_, v___x_2669_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; uint8_t v___x_2672_; 
v___x_2671_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4));
v___x_2672_ = l_Lean_Expr_isConstOf(v___x_2666_, v___x_2671_);
if (v___x_2672_ == 0)
{
lean_dec_ref(v___x_2666_);
lean_dec_ref(v_arg_2665_);
lean_dec_ref(v_arg_2664_);
goto v___jp_2636_;
}
else
{
lean_object* v___x_2673_; 
lean_inc_ref(v___x_2543_);
v___x_2673_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v___x_2666_, v_arg_2665_, v_arg_2664_, v___x_2543_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v_arg_x27_2562_ = v_a_2674_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2675_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2673_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2673_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
}
else
{
lean_object* v___x_2683_; 
lean_inc_ref(v___x_2543_);
v___x_2683_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec(v___x_2666_, v_arg_2665_, v_arg_2664_, v___x_2543_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2683_, 1);
v_arg_x27_2562_ = v_a_2684_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2692_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2685_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2687_ = v___x_2683_;
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v___x_2683_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2685_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
}
else
{
lean_object* v___x_2693_; 
lean_inc_ref(v___x_2543_);
v___x_2693_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(v___x_2666_, v_arg_2665_, v_arg_2664_, v___x_2543_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v___x_2693_, 1);
v_arg_x27_2562_ = v_a_2694_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2695_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2703_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2658_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2658_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
default: 
{
goto v___jp_2574_;
}
}
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2711_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2645_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2645_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
v___jp_2561_:
{
size_t v___x_2563_; size_t v___x_2564_; uint8_t v___x_2565_; 
v___x_2563_ = lean_ptr_addr(v___x_2543_);
lean_dec_ref(v___x_2543_);
v___x_2564_ = lean_ptr_addr(v_arg_x27_2562_);
v___x_2565_ = lean_usize_dec_eq(v___x_2563_, v___x_2564_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
lean_dec(v_fst_2547_);
v___x_2566_ = lean_array_fset(v_snd_2544_, v_a_2545_, v_arg_x27_2562_);
v___x_2567_ = lean_box(v___x_2546_);
v___x_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
lean_ctor_set(v___x_2568_, 1, v___x_2566_);
v___x_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
v___x_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_dec_ref(v_arg_x27_2562_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_fst_2547_);
lean_ctor_set(v___x_2571_, 1, v_snd_2544_);
v___x_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
v___x_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2572_);
return v___x_2573_;
}
}
v___jp_2574_:
{
lean_object* v___x_2575_; 
lean_inc_ref(v___x_2543_);
v___x_2575_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_2543_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref_known(v___x_2575_, 1);
v_arg_x27_2562_ = v_a_2576_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2577_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2575_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2575_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
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
v___jp_2585_:
{
lean_object* v___x_2595_; 
lean_inc_ref(v___x_2543_);
v___x_2595_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(v_f_2548_, v___y_2592_, v___y_2594_, v___x_2543_, v___y_2591_, v___y_2593_, v___y_2588_, v___y_2589_, v___y_2586_, v___y_2590_, v___y_2587_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v_arg_x27_2562_ = v_a_2596_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2597_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2595_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2595_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
v___jp_2605_:
{
lean_object* v___x_2614_; uint8_t v___x_2615_; 
v___x_2614_ = lean_unsigned_to_nat(1u);
v___x_2615_ = lean_nat_dec_lt(v___x_2614_, v___x_2549_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; 
v___x_2616_ = l_outOfBounds___redArg(v___x_2550_);
v___y_2586_ = v___y_2606_;
v___y_2587_ = v___y_2608_;
v___y_2588_ = v___y_2607_;
v___y_2589_ = v___y_2609_;
v___y_2590_ = v___y_2611_;
v___y_2591_ = v___y_2610_;
v___y_2592_ = v___y_2613_;
v___y_2593_ = v___y_2612_;
v___y_2594_ = v___x_2616_;
goto v___jp_2585_;
}
else
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_array_fget_borrowed(v_snd_2544_, v___x_2614_);
lean_inc(v___x_2617_);
v___y_2586_ = v___y_2606_;
v___y_2587_ = v___y_2608_;
v___y_2588_ = v___y_2607_;
v___y_2589_ = v___y_2609_;
v___y_2590_ = v___y_2611_;
v___y_2591_ = v___y_2610_;
v___y_2592_ = v___y_2613_;
v___y_2593_ = v___y_2612_;
v___y_2594_ = v___x_2617_;
goto v___jp_2585_;
}
}
v___jp_2618_:
{
lean_object* v___x_2626_; 
lean_inc_ref(v___x_2543_);
v___x_2626_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v___x_2543_, v___x_2546_, v___y_2624_, v___y_2625_, v___y_2621_, v___y_2622_, v___y_2619_, v___y_2623_, v___y_2620_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref_known(v___x_2626_, 1);
v_arg_x27_2562_ = v_a_2627_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v_fst_2547_);
lean_dec(v_snd_2544_);
lean_dec_ref(v___x_2543_);
v_a_2628_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2626_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2626_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
v___jp_2636_:
{
lean_object* v___x_2637_; uint8_t v___x_2638_; 
v___x_2637_ = lean_unsigned_to_nat(2u);
v___x_2638_ = lean_nat_dec_eq(v_a_2545_, v___x_2637_);
if (v___x_2638_ == 0)
{
v___y_2619_ = v___y_2557_;
v___y_2620_ = v___y_2559_;
v___y_2621_ = v___y_2555_;
v___y_2622_ = v___y_2556_;
v___y_2623_ = v___y_2558_;
v___y_2624_ = v___y_2553_;
v___y_2625_ = v___y_2554_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2639_; uint8_t v___x_2640_; 
v___x_2639_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_2640_ = l_Lean_Expr_isConstOf(v_f_2548_, v___x_2639_);
if (v___x_2640_ == 0)
{
v___y_2619_ = v___y_2557_;
v___y_2620_ = v___y_2559_;
v___y_2621_ = v___y_2555_;
v___y_2622_ = v___y_2556_;
v___y_2623_ = v___y_2558_;
v___y_2624_ = v___y_2553_;
v___y_2625_ = v___y_2554_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = lean_nat_dec_lt(v___x_2641_, v___x_2549_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; 
v___x_2643_ = l_outOfBounds___redArg(v___x_2550_);
v___y_2606_ = v___y_2557_;
v___y_2607_ = v___y_2555_;
v___y_2608_ = v___y_2559_;
v___y_2609_ = v___y_2556_;
v___y_2610_ = v___y_2553_;
v___y_2611_ = v___y_2558_;
v___y_2612_ = v___y_2554_;
v___y_2613_ = v___x_2643_;
goto v___jp_2605_;
}
else
{
lean_object* v___x_2644_; 
v___x_2644_ = lean_array_fget_borrowed(v_snd_2544_, v___x_2641_);
lean_inc(v___x_2644_);
v___y_2606_ = v___y_2557_;
v___y_2607_ = v___y_2555_;
v___y_2608_ = v___y_2559_;
v___y_2609_ = v___y_2556_;
v___y_2610_ = v___y_2553_;
v___y_2611_ = v___y_2558_;
v___y_2612_ = v___y_2554_;
v___y_2613_ = v___x_2644_;
goto v___jp_2605_;
}
}
}
}
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2722_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_2723_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1));
v___x_2724_ = l_Lean_Name_append(v___x_2723_, v___x_2722_);
return v___x_2724_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2726_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3));
v___x_2727_ = l_Lean_stringToMessageData(v___x_2726_);
return v___x_2727_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6(void){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5));
v___x_2730_ = l_Lean_stringToMessageData(v___x_2729_);
return v___x_2730_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8(void){
_start:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2732_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7));
v___x_2733_ = l_Lean_stringToMessageData(v___x_2732_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(lean_object* v_upperBound_2734_, lean_object* v___x_2735_, lean_object* v_f_2736_, lean_object* v___x_2737_, lean_object* v_a_2738_, lean_object* v_b_2739_, uint8_t v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v___y_2749_; uint8_t v___x_2771_; 
v___x_2771_ = lean_nat_dec_lt(v_a_2738_, v_upperBound_2734_);
if (v___x_2771_ == 0)
{
lean_object* v___x_2772_; 
lean_dec(v_a_2738_);
v___x_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2772_, 0, v_b_2739_);
return v___x_2772_;
}
else
{
lean_object* v_toCold_2773_; lean_object* v_options_2774_; lean_object* v_fst_2775_; lean_object* v_snd_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2841_; 
v_toCold_2773_ = lean_ctor_get(v___y_2745_, 0);
v_options_2774_ = lean_ctor_get(v_toCold_2773_, 2);
v_fst_2775_ = lean_ctor_get(v_b_2739_, 0);
v_snd_2776_ = lean_ctor_get(v_b_2739_, 1);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_b_2739_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2778_ = v_b_2739_;
v_isShared_2779_ = v_isSharedCheck_2841_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_snd_2776_);
lean_inc(v_fst_2775_);
lean_dec(v_b_2739_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2841_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v_inheritedTraceOptions_2780_; uint8_t v_hasTrace_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_inheritedTraceOptions_2780_ = lean_ctor_get(v_toCold_2773_, 11);
v_hasTrace_2781_ = lean_ctor_get_uint8(v_options_2774_, sizeof(void*)*1);
v___x_2782_ = l_Lean_instInhabitedExpr;
v___x_2783_ = lean_array_fget(v_snd_2776_, v_a_2738_);
if (v_hasTrace_2781_ == 0)
{
lean_del_object(v___x_2778_);
goto v___jp_2784_;
}
else
{
lean_object* v___x_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; 
v___x_2787_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_2788_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2);
v___x_2789_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2780_, v_options_2774_, v___x_2788_);
if (v___x_2789_ == 0)
{
lean_del_object(v___x_2778_);
goto v___jp_2784_;
}
else
{
lean_object* v___x_2790_; 
lean_inc(v___x_2783_);
v___x_2790_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v___x_2737_, v_a_2738_, v___x_2783_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v___x_2792_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2790_, 1);
lean_inc(v___y_2746_);
lean_inc_ref(v___y_2745_);
lean_inc(v___y_2744_);
lean_inc_ref(v___y_2743_);
lean_inc(v___x_2783_);
v___x_2792_ = lean_infer_type(v___x_2783_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2794_; lean_object* v___y_2796_; uint8_t v___x_2820_; 
v_a_2793_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2792_, 1);
v___x_2794_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4);
v___x_2820_ = lean_unbox(v_a_2791_);
lean_dec(v_a_2791_);
switch(v___x_2820_)
{
case 0:
{
lean_object* v___x_2821_; 
v___x_2821_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1));
v___y_2796_ = v___x_2821_;
goto v___jp_2795_;
}
case 1:
{
lean_object* v___x_2822_; 
v___x_2822_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3));
v___y_2796_ = v___x_2822_;
goto v___jp_2795_;
}
case 2:
{
lean_object* v___x_2823_; 
v___x_2823_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5));
v___y_2796_ = v___x_2823_;
goto v___jp_2795_;
}
default: 
{
lean_object* v___x_2824_; 
v___x_2824_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7));
v___y_2796_ = v___x_2824_;
goto v___jp_2795_;
}
}
v___jp_2795_:
{
lean_object* v___x_2797_; lean_object* v___x_2799_; 
lean_inc(v___y_2796_);
v___x_2797_ = l_Lean_MessageData_ofFormat(v___y_2796_);
if (v_isShared_2779_ == 0)
{
lean_ctor_set_tag(v___x_2778_, 7);
lean_ctor_set(v___x_2778_, 1, v___x_2797_);
lean_ctor_set(v___x_2778_, 0, v___x_2794_);
v___x_2799_ = v___x_2778_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v___x_2797_);
v___x_2799_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2800_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6);
v___x_2801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2799_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
lean_inc(v___x_2783_);
v___x_2802_ = l_Lean_MessageData_ofExpr(v___x_2783_);
v___x_2803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2801_);
lean_ctor_set(v___x_2803_, 1, v___x_2802_);
v___x_2804_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8);
v___x_2805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2803_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
v___x_2806_ = l_Lean_MessageData_ofExpr(v_a_2793_);
v___x_2807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2805_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v___x_2787_, v___x_2807_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2810_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
v___x_2810_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_2783_, v_snd_2776_, v_a_2738_, v___x_2771_, v_fst_2775_, v_f_2736_, v___x_2735_, v___x_2782_, v___x_2737_, v_a_2809_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
v___y_2749_ = v___x_2810_;
goto v___jp_2748_;
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec(v___x_2783_);
lean_dec(v_snd_2776_);
lean_dec(v_fst_2775_);
lean_dec(v_a_2738_);
v_a_2811_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2808_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2808_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_a_2791_);
lean_dec(v___x_2783_);
lean_del_object(v___x_2778_);
lean_dec(v_snd_2776_);
lean_dec(v_fst_2775_);
lean_dec(v_a_2738_);
v_a_2825_ = lean_ctor_get(v___x_2792_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2792_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2792_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2792_);
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
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec(v___x_2783_);
lean_del_object(v___x_2778_);
lean_dec(v_snd_2776_);
lean_dec(v_fst_2775_);
lean_dec(v_a_2738_);
v_a_2833_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2790_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2790_);
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
}
}
v___jp_2784_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2785_ = lean_box(0);
v___x_2786_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_2783_, v_snd_2776_, v_a_2738_, v___x_2771_, v_fst_2775_, v_f_2736_, v___x_2735_, v___x_2782_, v___x_2737_, v___x_2785_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
v___y_2749_ = v___x_2786_;
goto v___jp_2748_;
}
}
}
v___jp_2748_:
{
if (lean_obj_tag(v___y_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2762_; 
v_a_2750_ = lean_ctor_get(v___y_2749_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___y_2749_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2752_ = v___y_2749_;
v_isShared_2753_ = v_isSharedCheck_2762_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___y_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2762_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
if (lean_obj_tag(v_a_2750_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; 
lean_dec(v_a_2738_);
v_a_2754_ = lean_ctor_get(v_a_2750_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v_a_2750_, 1);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v_a_2754_);
v___x_2756_ = v___x_2752_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2754_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
lean_del_object(v___x_2752_);
v_a_2758_ = lean_ctor_get(v_a_2750_, 0);
lean_inc(v_a_2758_);
lean_dec_ref_known(v_a_2750_, 1);
v___x_2759_ = lean_unsigned_to_nat(1u);
v___x_2760_ = lean_nat_add(v_a_2738_, v___x_2759_);
lean_dec(v_a_2738_);
v_a_2738_ = v___x_2760_;
v_b_2739_ = v_a_2758_;
goto _start;
}
}
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec(v_a_2738_);
v_a_2763_ = lean_ctor_get(v___y_2749_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___y_2749_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___y_2749_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___y_2749_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(lean_object* v_e_2842_, lean_object* v_x_2843_, lean_object* v_x_2844_, lean_object* v_x_2845_, uint8_t v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v___y_2855_; uint8_t v_modified_2856_; lean_object* v_f_2857_; uint8_t v___y_2858_; lean_object* v___y_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v_args_2913_; uint8_t v_modified_2914_; uint8_t v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; lean_object* v___y_2919_; lean_object* v___y_2920_; lean_object* v___y_2921_; uint8_t v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; 
if (lean_obj_tag(v_x_2843_) == 5)
{
lean_object* v_fn_2950_; lean_object* v_arg_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_fn_2950_ = lean_ctor_get(v_x_2843_, 0);
lean_inc_ref(v_fn_2950_);
v_arg_2951_ = lean_ctor_get(v_x_2843_, 1);
lean_inc_ref(v_arg_2951_);
lean_dec_ref_known(v_x_2843_, 2);
v___x_2952_ = lean_array_set(v_x_2844_, v_x_2845_, v_arg_2951_);
v___x_2953_ = lean_unsigned_to_nat(1u);
v___x_2954_ = lean_nat_sub(v_x_2845_, v___x_2953_);
lean_dec(v_x_2845_);
v_x_2843_ = v_fn_2950_;
v_x_2844_ = v___x_2952_;
v_x_2845_ = v___x_2954_;
goto _start;
}
else
{
lean_object* v___x_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
lean_dec(v_x_2845_);
v___x_2956_ = lean_array_get_size(v_x_2844_);
v___x_2957_ = lean_unsigned_to_nat(2u);
v___x_2958_ = lean_nat_dec_eq(v___x_2956_, v___x_2957_);
if (v___x_2958_ == 0)
{
v___y_2929_ = v___y_2846_;
v___y_2930_ = v___y_2847_;
v___y_2931_ = v___y_2848_;
v___y_2932_ = v___y_2849_;
v___y_2933_ = v___y_2850_;
v___y_2934_ = v___y_2851_;
v___y_2935_ = v___y_2852_;
goto v___jp_2928_;
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2960_; uint8_t v___x_2961_; 
v___x_2959_ = l_Lean_instInhabitedExpr;
v___x_2960_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1));
v___x_2961_ = l_Lean_Expr_isConstOf(v_x_2843_, v___x_2960_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; uint8_t v___x_2963_; 
v___x_2962_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4));
v___x_2963_ = l_Lean_Expr_isConstOf(v_x_2843_, v___x_2962_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; uint8_t v___x_2965_; 
v___x_2964_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2965_ = l_Lean_Expr_isConstOf(v_x_2843_, v___x_2964_);
if (v___x_2965_ == 0)
{
v___y_2929_ = v___y_2846_;
v___y_2930_ = v___y_2847_;
v___y_2931_ = v___y_2848_;
v___y_2932_ = v___y_2849_;
v___y_2933_ = v___y_2850_;
v___y_2934_ = v___y_2851_;
v___y_2935_ = v___y_2852_;
goto v___jp_2928_;
}
else
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = lean_array_get(v___x_2959_, v_x_2844_, v___x_2966_);
v___x_2968_ = lean_unsigned_to_nat(1u);
v___x_2969_ = lean_array_get(v___x_2959_, v_x_2844_, v___x_2968_);
lean_dec_ref(v_x_2844_);
v___x_2970_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27(v_x_2843_, v___x_2967_, v___x_2969_, v_e_2842_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
return v___x_2970_;
}
}
else
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2971_ = lean_unsigned_to_nat(0u);
v___x_2972_ = lean_array_get(v___x_2959_, v_x_2844_, v___x_2971_);
v___x_2973_ = lean_unsigned_to_nat(1u);
v___x_2974_ = lean_array_get(v___x_2959_, v_x_2844_, v___x_2973_);
lean_dec_ref(v_x_2844_);
v___x_2975_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_x_2843_, v___x_2972_, v___x_2974_, v_e_2842_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
return v___x_2975_;
}
}
else
{
lean_object* v___x_2976_; lean_object* v_prop_2977_; lean_object* v___x_2978_; 
v___x_2976_ = lean_unsigned_to_nat(0u);
v_prop_2977_ = lean_array_get_borrowed(v___x_2959_, v_x_2844_, v___x_2976_);
lean_inc(v_prop_2977_);
v___x_2978_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2977_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2995_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2981_ = v___x_2978_;
v_isShared_2982_ = v_isSharedCheck_2995_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2978_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2995_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
size_t v___x_2983_; size_t v___x_2984_; uint8_t v___x_2985_; 
v___x_2983_ = lean_ptr_addr(v_prop_2977_);
v___x_2984_ = lean_ptr_addr(v_a_2979_);
v___x_2985_ = lean_usize_dec_eq(v___x_2983_, v___x_2984_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2990_; 
lean_dec_ref(v_e_2842_);
v___x_2986_ = lean_unsigned_to_nat(1u);
v___x_2987_ = lean_array_get(v___x_2959_, v_x_2844_, v___x_2986_);
lean_dec_ref(v_x_2844_);
v___x_2988_ = l_Lean_mkAppB(v_x_2843_, v_a_2979_, v___x_2987_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v___x_2988_);
v___x_2990_ = v___x_2981_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2988_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
else
{
lean_object* v___x_2993_; 
lean_dec(v_a_2979_);
lean_dec_ref(v_x_2844_);
lean_dec_ref(v_x_2843_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v_e_2842_);
v___x_2993_ = v___x_2981_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_e_2842_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
else
{
lean_dec_ref(v_x_2844_);
lean_dec_ref(v_x_2843_);
lean_dec_ref(v_e_2842_);
return v___x_2978_;
}
}
}
}
v___jp_2854_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_box(0);
lean_inc_ref(v_f_2857_);
v___x_2866_ = l_Lean_Meta_getFunInfo(v_f_2857_, v___x_2865_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v_paramInfo_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2902_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2866_, 1);
v_paramInfo_2868_ = lean_ctor_get(v_a_2867_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_a_2867_);
if (v_isSharedCheck_2902_ == 0)
{
lean_object* v_unused_2903_; 
v_unused_2903_ = lean_ctor_get(v_a_2867_, 1);
lean_dec(v_unused_2903_);
v___x_2870_ = v_a_2867_;
v_isShared_2871_ = v_isSharedCheck_2902_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_paramInfo_2868_);
lean_dec(v_a_2867_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2902_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2876_; 
v___x_2872_ = lean_array_get_size(v___y_2855_);
v___x_2873_ = lean_unsigned_to_nat(0u);
v___x_2874_ = lean_box(v_modified_2856_);
if (v_isShared_2871_ == 0)
{
lean_ctor_set(v___x_2870_, 1, v___y_2855_);
lean_ctor_set(v___x_2870_, 0, v___x_2874_);
v___x_2876_ = v___x_2870_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2874_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v___y_2855_);
v___x_2876_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
lean_object* v___x_2877_; 
v___x_2877_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v___x_2872_, v___x_2872_, v_f_2857_, v_paramInfo_2868_, v___x_2873_, v___x_2876_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
lean_dec_ref(v_paramInfo_2868_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2892_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2880_ = v___x_2877_;
v_isShared_2881_ = v_isSharedCheck_2892_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2877_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2892_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v_fst_2882_; uint8_t v___x_2883_; 
v_fst_2882_ = lean_ctor_get(v_a_2878_, 0);
v___x_2883_ = lean_unbox(v_fst_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2885_; 
lean_dec(v_a_2878_);
lean_dec_ref(v_f_2857_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v_e_2842_);
v___x_2885_ = v___x_2880_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_e_2842_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
else
{
lean_object* v_snd_2887_; lean_object* v___x_2888_; lean_object* v___x_2890_; 
lean_dec_ref(v_e_2842_);
v_snd_2887_ = lean_ctor_get(v_a_2878_, 1);
lean_inc(v_snd_2887_);
lean_dec(v_a_2878_);
v___x_2888_ = l_Lean_mkAppN(v_f_2857_, v_snd_2887_);
lean_dec(v_snd_2887_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2888_);
v___x_2890_ = v___x_2880_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v___x_2888_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec_ref(v_f_2857_);
lean_dec_ref(v_e_2842_);
v_a_2893_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2877_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2877_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec_ref(v_f_2857_);
lean_dec_ref(v___y_2855_);
lean_dec_ref(v_e_2842_);
v_a_2904_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2866_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2866_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
v___jp_2912_:
{
lean_object* v___x_2922_; 
lean_inc_ref(v_x_2843_);
v___x_2922_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_x_2843_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v_a_2923_; size_t v___x_2924_; size_t v___x_2925_; uint8_t v___x_2926_; 
v_a_2923_ = lean_ctor_get(v___x_2922_, 0);
lean_inc(v_a_2923_);
lean_dec_ref_known(v___x_2922_, 1);
v___x_2924_ = lean_ptr_addr(v_x_2843_);
v___x_2925_ = lean_ptr_addr(v_a_2923_);
v___x_2926_ = lean_usize_dec_eq(v___x_2924_, v___x_2925_);
if (v___x_2926_ == 0)
{
uint8_t v___x_2927_; 
lean_dec_ref(v_x_2843_);
v___x_2927_ = 1;
v___y_2855_ = v_args_2913_;
v_modified_2856_ = v___x_2927_;
v_f_2857_ = v_a_2923_;
v___y_2858_ = v___y_2915_;
v___y_2859_ = v___y_2916_;
v___y_2860_ = v___y_2917_;
v___y_2861_ = v___y_2918_;
v___y_2862_ = v___y_2919_;
v___y_2863_ = v___y_2920_;
v___y_2864_ = v___y_2921_;
goto v___jp_2854_;
}
else
{
lean_dec(v_a_2923_);
v___y_2855_ = v_args_2913_;
v_modified_2856_ = v_modified_2914_;
v_f_2857_ = v_x_2843_;
v___y_2858_ = v___y_2915_;
v___y_2859_ = v___y_2916_;
v___y_2860_ = v___y_2917_;
v___y_2861_ = v___y_2918_;
v___y_2862_ = v___y_2919_;
v___y_2863_ = v___y_2920_;
v___y_2864_ = v___y_2921_;
goto v___jp_2854_;
}
}
else
{
lean_dec_ref(v_args_2913_);
lean_dec_ref(v_x_2843_);
lean_dec_ref(v_e_2842_);
return v___x_2922_;
}
}
v___jp_2928_:
{
uint8_t v_modified_2936_; lean_object* v___x_2937_; uint8_t v_modified_2938_; 
v_modified_2936_ = 0;
v___x_2937_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v_modified_2938_ = l_Lean_Expr_isConstOf(v_x_2843_, v___x_2937_);
if (v_modified_2938_ == 0)
{
v_args_2913_ = v_x_2844_;
v_modified_2914_ = v_modified_2936_;
v___y_2915_ = v___y_2929_;
v___y_2916_ = v___y_2930_;
v___y_2917_ = v___y_2931_;
v___y_2918_ = v___y_2932_;
v___y_2919_ = v___y_2933_;
v___y_2920_ = v___y_2934_;
v___y_2921_ = v___y_2935_;
goto v___jp_2912_;
}
else
{
lean_object* v___x_2939_; 
lean_inc_ref(v_x_2844_);
v___x_2939_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(v_x_2844_, v___y_2933_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2939_, 1);
if (lean_obj_tag(v_a_2940_) == 1)
{
lean_object* v_val_2941_; 
lean_dec_ref(v_x_2844_);
v_val_2941_ = lean_ctor_get(v_a_2940_, 0);
lean_inc(v_val_2941_);
lean_dec_ref_known(v_a_2940_, 1);
v_args_2913_ = v_val_2941_;
v_modified_2914_ = v_modified_2938_;
v___y_2915_ = v___y_2929_;
v___y_2916_ = v___y_2930_;
v___y_2917_ = v___y_2931_;
v___y_2918_ = v___y_2932_;
v___y_2919_ = v___y_2933_;
v___y_2920_ = v___y_2934_;
v___y_2921_ = v___y_2935_;
goto v___jp_2912_;
}
else
{
lean_dec(v_a_2940_);
v_args_2913_ = v_x_2844_;
v_modified_2914_ = v_modified_2936_;
v___y_2915_ = v___y_2929_;
v___y_2916_ = v___y_2930_;
v___y_2917_ = v___y_2931_;
v___y_2918_ = v___y_2932_;
v___y_2919_ = v___y_2933_;
v___y_2920_ = v___y_2934_;
v___y_2921_ = v___y_2935_;
goto v___jp_2912_;
}
}
else
{
lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref(v_x_2844_);
lean_dec_ref(v_x_2843_);
lean_dec_ref(v_e_2842_);
v_a_2942_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2944_ = v___x_2939_;
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2939_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2947_; 
if (v_isShared_2945_ == 0)
{
v___x_2947_ = v___x_2944_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2942_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(lean_object* v_e_2996_, uint8_t v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_){
_start:
{
lean_object* v_dummy_3005_; lean_object* v_nargs_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v_dummy_3005_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0);
v_nargs_3006_ = l_Lean_Expr_getAppNumArgs(v_e_2996_);
lean_inc(v_nargs_3006_);
v___x_3007_ = lean_mk_array(v_nargs_3006_, v_dummy_3005_);
v___x_3008_ = lean_unsigned_to_nat(1u);
v___x_3009_ = lean_nat_sub(v_nargs_3006_, v___x_3008_);
lean_dec(v_nargs_3006_);
lean_inc_ref(v_e_2996_);
v___x_3010_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(v_e_2996_, v_e_2996_, v___x_3007_, v___x_3009_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_, v_a_3003_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(lean_object* v_e_3011_, uint8_t v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
uint8_t v___x_3040_; 
v___x_3040_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(v_e_3011_);
if (v___x_3040_ == 0)
{
lean_object* v_f_3041_; 
v_f_3041_ = l_Lean_Expr_getAppFn(v_e_3011_);
if (lean_obj_tag(v_f_3041_) == 4)
{
lean_object* v_declName_3042_; lean_object* v___x_3043_; uint8_t v___x_3044_; 
v_declName_3042_ = lean_ctor_get(v_f_3041_, 0);
lean_inc(v_declName_3042_);
lean_dec_ref_known(v_f_3041_, 2);
v___x_3043_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2));
v___x_3044_ = lean_name_eq(v_declName_3042_, v___x_3043_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; uint8_t v___x_3046_; 
v___x_3045_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6));
v___x_3046_ = lean_name_eq(v_declName_3042_, v___x_3045_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; uint8_t v___x_3048_; 
v___x_3047_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4));
v___x_3048_ = lean_name_eq(v_declName_3042_, v___x_3047_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3049_; uint8_t v___x_3050_; 
v___x_3049_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_3050_ = lean_name_eq(v_declName_3042_, v___x_3049_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; uint8_t v___x_3052_; 
v___x_3051_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1));
v___x_3052_ = lean_name_eq(v_declName_3042_, v___x_3051_);
if (v___x_3052_ == 0)
{
lean_object* v___x_3053_; 
v___x_3053_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_3042_, v_a_3018_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3083_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3056_ = v___x_3053_;
v_isShared_3057_ = v_isSharedCheck_3083_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3053_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3083_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
if (lean_obj_tag(v_a_3054_) == 1)
{
lean_object* v_val_3058_; lean_object* v___x_3059_; 
lean_del_object(v___x_3056_);
v_val_3058_ = lean_ctor_get(v_a_3054_, 0);
lean_inc(v_val_3058_);
lean_dec_ref_known(v_a_3054_, 1);
lean_inc_ref(v_e_3011_);
v___x_3059_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_val_3058_, v_e_3011_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
lean_dec(v_val_3058_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3071_; 
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3062_ = v___x_3059_;
v_isShared_3063_ = v_isSharedCheck_3071_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3059_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3071_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
if (lean_obj_tag(v_a_3060_) == 0)
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
lean_ctor_set(v___x_3062_, 0, v_e_3011_);
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_e_3011_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
else
{
lean_object* v_val_3067_; lean_object* v___x_3069_; 
lean_dec_ref(v_e_3011_);
v_val_3067_ = lean_ctor_get(v_a_3060_, 0);
lean_inc(v_val_3067_);
lean_dec_ref_known(v_a_3060_, 1);
if (v_isShared_3063_ == 0)
{
lean_ctor_set(v___x_3062_, 0, v_val_3067_);
v___x_3069_ = v___x_3062_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_val_3067_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_dec_ref(v_e_3011_);
v_a_3072_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3059_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3059_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
else
{
lean_object* v___x_3081_; 
lean_dec(v_a_3054_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 0, v_e_3011_);
v___x_3081_ = v___x_3056_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_e_3011_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec_ref(v_e_3011_);
v_a_3084_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3053_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3053_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
else
{
lean_dec(v_declName_3042_);
goto v___jp_3020_;
}
}
else
{
lean_dec(v_declName_3042_);
goto v___jp_3020_;
}
}
else
{
lean_dec(v_declName_3042_);
goto v___jp_3020_;
}
}
else
{
lean_dec(v_declName_3042_);
goto v___jp_3020_;
}
}
else
{
lean_dec(v_declName_3042_);
goto v___jp_3020_;
}
}
else
{
lean_object* v___x_3092_; 
lean_dec_ref(v_f_3041_);
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v_e_3011_);
return v___x_3092_;
}
}
else
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_inc_ref(v_e_3011_);
v___x_3093_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_evalNat_x3f___boxed), 8, 1);
lean_closure_set(v___x_3093_, 0, v_e_3011_);
v___x_3094_ = l_Lean_Meta_Sym_SymM_run___redArg(v___x_3093_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3128_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3097_ = v___x_3094_;
v_isShared_3098_ = v_isSharedCheck_3128_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3094_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3128_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
if (lean_obj_tag(v_a_3095_) == 1)
{
lean_object* v_val_3099_; lean_object* v___x_3100_; lean_object* v___x_3102_; 
lean_dec_ref(v_e_3011_);
v_val_3099_ = lean_ctor_get(v_a_3095_, 0);
lean_inc(v_val_3099_);
lean_dec_ref_known(v_a_3095_, 1);
v___x_3100_ = l_Lean_mkNatLit(v_val_3099_);
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 0, v___x_3100_);
v___x_3102_ = v___x_3097_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3100_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
else
{
lean_object* v___x_3104_; 
lean_del_object(v___x_3097_);
lean_dec(v_a_3095_);
lean_inc_ref(v_e_3011_);
v___x_3104_ = l_Lean_Meta_Sym_Arith_isOffset_x3f(v_e_3011_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3119_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3107_ = v___x_3104_;
v_isShared_3108_ = v_isSharedCheck_3119_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3119_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
if (lean_obj_tag(v_a_3105_) == 1)
{
lean_object* v_val_3109_; lean_object* v_fst_3110_; lean_object* v_snd_3111_; lean_object* v___x_3112_; lean_object* v___x_3114_; 
lean_dec_ref(v_e_3011_);
v_val_3109_ = lean_ctor_get(v_a_3105_, 0);
lean_inc(v_val_3109_);
lean_dec_ref_known(v_a_3105_, 1);
v_fst_3110_ = lean_ctor_get(v_val_3109_, 0);
lean_inc(v_fst_3110_);
v_snd_3111_ = lean_ctor_get(v_val_3109_, 1);
lean_inc(v_snd_3111_);
lean_dec(v_val_3109_);
v___x_3112_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(v_fst_3110_, v_snd_3111_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v___x_3112_);
v___x_3114_ = v___x_3107_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3112_);
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
lean_object* v___x_3117_; 
lean_dec(v_a_3105_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v_e_3011_);
v___x_3117_ = v___x_3107_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_e_3011_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec_ref(v_e_3011_);
v_a_3120_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3104_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3104_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
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
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref(v_e_3011_);
v_a_3129_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3094_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3094_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
v___jp_3020_:
{
lean_object* v___x_3021_; 
lean_inc_ref(v_e_3011_);
v___x_3021_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_e_3011_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3031_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3024_ = v___x_3021_;
v_isShared_3025_ = v_isSharedCheck_3031_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3021_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3031_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
if (lean_obj_tag(v_a_3022_) == 1)
{
lean_object* v_val_3026_; lean_object* v___x_3027_; 
lean_del_object(v___x_3024_);
lean_dec_ref(v_e_3011_);
v_val_3026_ = lean_ctor_get(v_a_3022_, 0);
lean_inc(v_val_3026_);
lean_dec_ref_known(v_a_3022_, 1);
v___x_3027_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_3026_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
return v___x_3027_;
}
else
{
lean_object* v___x_3029_; 
lean_dec(v_a_3022_);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 0, v_e_3011_);
v___x_3029_ = v___x_3024_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_e_3011_);
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
lean_dec_ref(v_e_3011_);
v_a_3032_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_3021_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3021_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(lean_object* v_e_3137_, uint8_t v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3148_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v___x_3146_, 1);
v___x_3148_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(v_a_3147_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_);
return v___x_3148_;
}
else
{
return v___x_3146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(lean_object* v_e_3149_, uint8_t v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_){
_start:
{
lean_object* v___x_3158_; 
v___x_3158_ = l_Lean_Meta_reduceMatcher_x3f(v_e_3149_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_);
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_object* v_a_3159_; 
v_a_3159_ = lean_ctor_get(v___x_3158_, 0);
lean_inc(v_a_3159_);
lean_dec_ref_known(v___x_3158_, 1);
if (lean_obj_tag(v_a_3159_) == 0)
{
lean_object* v_val_3160_; lean_object* v___x_3161_; 
lean_dec_ref(v_e_3149_);
v_val_3160_ = lean_ctor_get(v_a_3159_, 0);
lean_inc_ref(v_val_3160_);
lean_dec_ref_known(v_a_3159_, 1);
v___x_3161_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_3160_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_);
return v___x_3161_;
}
else
{
lean_object* v___x_3162_; 
lean_dec(v_a_3159_);
v___x_3162_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_3149_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_a_3163_; lean_object* v___x_3164_; 
v_a_3163_ = lean_ctor_get(v___x_3162_, 0);
lean_inc(v_a_3163_);
lean_dec_ref_known(v___x_3162_, 1);
v___x_3164_ = l_Lean_Meta_reduceMatcher_x3f(v_a_3163_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3174_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3167_ = v___x_3164_;
v_isShared_3168_ = v_isSharedCheck_3174_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3164_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3174_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
if (lean_obj_tag(v_a_3165_) == 0)
{
lean_object* v_val_3169_; lean_object* v___x_3170_; 
lean_del_object(v___x_3167_);
lean_dec(v_a_3163_);
v_val_3169_ = lean_ctor_get(v_a_3165_, 0);
lean_inc_ref(v_val_3169_);
lean_dec_ref_known(v_a_3165_, 1);
v___x_3170_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_3169_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_);
return v___x_3170_;
}
else
{
lean_object* v___x_3172_; 
lean_dec(v_a_3165_);
if (v_isShared_3168_ == 0)
{
lean_ctor_set(v___x_3167_, 0, v_a_3163_);
v___x_3172_ = v___x_3167_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3163_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
lean_dec(v_a_3163_);
v_a_3175_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3164_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3164_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
return v___x_3162_;
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
lean_dec_ref(v_e_3149_);
v_a_3183_ = lean_ctor_get(v___x_3158_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3158_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3158_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3158_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(lean_object* v_e_3200_, uint8_t v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_){
_start:
{
uint8_t v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___x_3219_; 
lean_inc_ref(v_e_3200_);
v___x_3219_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3200_, v_a_3205_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
v___x_3221_ = l_Lean_Expr_cleanupAnnotations(v_a_3220_);
lean_dec(v_a_3220_);
v___x_3222_ = l_Lean_Expr_isApp(v___x_3221_);
if (v___x_3222_ == 0)
{
lean_dec_ref(v___x_3221_);
v___y_3210_ = v_a_3201_;
v___y_3211_ = v_a_3202_;
v___y_3212_ = v_a_3203_;
v___y_3213_ = v_a_3204_;
v___y_3214_ = v_a_3205_;
v___y_3215_ = v_a_3206_;
v___y_3216_ = v_a_3207_;
goto v___jp_3209_;
}
else
{
lean_object* v___x_3223_; uint8_t v___x_3224_; 
v___x_3223_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3221_);
v___x_3224_ = l_Lean_Expr_isApp(v___x_3223_);
if (v___x_3224_ == 0)
{
lean_dec_ref(v___x_3223_);
lean_dec_ref(v___x_3221_);
v___y_3210_ = v_a_3201_;
v___y_3211_ = v_a_3202_;
v___y_3212_ = v_a_3203_;
v___y_3213_ = v_a_3204_;
v___y_3214_ = v_a_3205_;
v___y_3215_ = v_a_3206_;
v___y_3216_ = v_a_3207_;
goto v___jp_3209_;
}
else
{
lean_object* v_arg_3225_; lean_object* v_arg_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; uint8_t v___x_3229_; 
v_arg_3225_ = lean_ctor_get(v___x_3221_, 1);
lean_inc_ref(v_arg_3225_);
lean_dec_ref(v___x_3221_);
v_arg_3226_ = lean_ctor_get(v___x_3223_, 1);
lean_inc_ref(v_arg_3226_);
v___x_3227_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3223_);
lean_dec_ref(v___x_3223_);
v___x_3228_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_3229_ = l_Lean_Expr_isConstOf(v___x_3227_, v___x_3228_);
if (v___x_3229_ == 0)
{
lean_object* v___x_3230_; uint8_t v___x_3231_; 
v___x_3230_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__4));
v___x_3231_ = l_Lean_Expr_isConstOf(v___x_3227_, v___x_3230_);
if (v___x_3231_ == 0)
{
lean_dec_ref(v___x_3227_);
lean_dec_ref(v_arg_3226_);
lean_dec_ref(v_arg_3225_);
v___y_3210_ = v_a_3201_;
v___y_3211_ = v_a_3202_;
v___y_3212_ = v_a_3203_;
v___y_3213_ = v_a_3204_;
v___y_3214_ = v_a_3205_;
v___y_3215_ = v_a_3206_;
v___y_3216_ = v_a_3207_;
goto v___jp_3209_;
}
else
{
lean_object* v___x_3232_; 
v___x_3232_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v___x_3227_, v_arg_3226_, v_arg_3225_, v_e_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_);
return v___x_3232_;
}
}
else
{
lean_object* v___x_3233_; 
v___x_3233_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec(v___x_3227_, v_arg_3226_, v_arg_3225_, v_e_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_);
return v___x_3233_;
}
}
}
}
else
{
lean_dec_ref(v_e_3200_);
return v___x_3219_;
}
v___jp_3209_:
{
uint8_t v___x_3217_; lean_object* v___x_3218_; 
v___x_3217_ = 0;
v___x_3218_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v_e_3200_, v___x_3217_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
return v___x_3218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(lean_object* v_f_3234_, lean_object* v_00_u03b1_3235_, lean_object* v_c_3236_, lean_object* v_inst_3237_, lean_object* v_a_3238_, lean_object* v_b_3239_, uint8_t v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_){
_start:
{
lean_object* v___x_3248_; 
v___x_3248_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_c_3236_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; uint8_t v___x_3250_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
v___x_3250_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(v_a_3249_);
if (v___x_3250_ == 0)
{
uint8_t v___x_3251_; 
v___x_3251_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(v_a_3249_);
if (v___x_3251_ == 0)
{
lean_object* v___x_3252_; 
v___x_3252_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_00_u03b1_3235_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3254_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3253_);
lean_dec_ref_known(v___x_3252_, 1);
v___x_3254_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(v_inst_3237_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3256_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
lean_inc(v_a_3255_);
lean_dec_ref_known(v___x_3254_, 1);
v___x_3256_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3238_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3258_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 1);
v___x_3258_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3267_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3261_ = v___x_3258_;
v_isShared_3262_ = v_isSharedCheck_3267_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3258_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3267_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3263_; lean_object* v___x_3265_; 
v___x_3263_ = l_Lean_mkApp5(v_f_3234_, v_a_3253_, v_a_3249_, v_a_3255_, v_a_3257_, v_a_3259_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3263_);
v___x_3265_ = v___x_3261_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v___x_3263_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
else
{
lean_dec(v_a_3257_);
lean_dec(v_a_3255_);
lean_dec(v_a_3253_);
lean_dec(v_a_3249_);
lean_dec_ref(v_f_3234_);
return v___x_3258_;
}
}
else
{
lean_dec(v_a_3255_);
lean_dec(v_a_3253_);
lean_dec(v_a_3249_);
lean_dec_ref(v_b_3239_);
lean_dec_ref(v_f_3234_);
return v___x_3256_;
}
}
else
{
lean_dec(v_a_3253_);
lean_dec(v_a_3249_);
lean_dec_ref(v_b_3239_);
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_f_3234_);
return v___x_3254_;
}
}
else
{
lean_dec(v_a_3249_);
lean_dec_ref(v_b_3239_);
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_inst_3237_);
lean_dec_ref(v_f_3234_);
return v___x_3252_;
}
}
else
{
lean_object* v___x_3268_; 
lean_dec(v_a_3249_);
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_inst_3237_);
lean_dec_ref(v_00_u03b1_3235_);
lean_dec_ref(v_f_3234_);
v___x_3268_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
return v___x_3268_;
}
}
else
{
lean_object* v___x_3269_; 
lean_dec(v_a_3249_);
lean_dec_ref(v_b_3239_);
lean_dec_ref(v_inst_3237_);
lean_dec_ref(v_00_u03b1_3235_);
lean_dec_ref(v_f_3234_);
v___x_3269_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3238_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_);
return v___x_3269_;
}
}
else
{
lean_dec_ref(v_b_3239_);
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_inst_3237_);
lean_dec_ref(v_00_u03b1_3235_);
lean_dec_ref(v_f_3234_);
return v___x_3248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(lean_object* v_f_3270_, lean_object* v_00_u03b1_3271_, lean_object* v_c_3272_, lean_object* v_a_3273_, lean_object* v_b_3274_, uint8_t v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_){
_start:
{
lean_object* v___x_3283_; 
v___x_3283_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_c_3272_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; uint8_t v___x_3285_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3284_);
lean_dec_ref_known(v___x_3283_, 1);
v___x_3285_ = l_Lean_Expr_isBoolTrue(v_a_3284_);
if (v___x_3285_ == 0)
{
uint8_t v___x_3286_; 
v___x_3286_ = l_Lean_Expr_isBoolFalse(v_a_3284_);
if (v___x_3286_ == 0)
{
lean_object* v___x_3287_; 
v___x_3287_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_00_u03b1_3271_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; lean_object* v___x_3289_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___x_3287_, 1);
v___x_3289_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3273_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3291_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3290_);
lean_dec_ref_known(v___x_3289_, 1);
v___x_3291_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3300_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3294_ = v___x_3291_;
v_isShared_3295_ = v_isSharedCheck_3300_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___x_3291_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3300_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3296_; lean_object* v___x_3298_; 
v___x_3296_ = l_Lean_mkApp4(v_f_3270_, v_a_3288_, v_a_3284_, v_a_3290_, v_a_3292_);
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 0, v___x_3296_);
v___x_3298_ = v___x_3294_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___x_3296_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
else
{
lean_dec(v_a_3290_);
lean_dec(v_a_3288_);
lean_dec(v_a_3284_);
lean_dec_ref(v_f_3270_);
return v___x_3291_;
}
}
else
{
lean_dec(v_a_3288_);
lean_dec(v_a_3284_);
lean_dec_ref(v_b_3274_);
lean_dec_ref(v_f_3270_);
return v___x_3289_;
}
}
else
{
lean_dec(v_a_3284_);
lean_dec_ref(v_b_3274_);
lean_dec_ref(v_a_3273_);
lean_dec_ref(v_f_3270_);
return v___x_3287_;
}
}
else
{
lean_object* v___x_3301_; 
lean_dec(v_a_3284_);
lean_dec_ref(v_a_3273_);
lean_dec_ref(v_00_u03b1_3271_);
lean_dec_ref(v_f_3270_);
v___x_3301_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
return v___x_3301_;
}
}
else
{
lean_object* v___x_3302_; 
lean_dec(v_a_3284_);
lean_dec_ref(v_b_3274_);
lean_dec_ref(v_00_u03b1_3271_);
lean_dec_ref(v_f_3270_);
v___x_3302_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3273_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
return v___x_3302_;
}
}
else
{
lean_dec_ref(v_b_3274_);
lean_dec_ref(v_a_3273_);
lean_dec_ref(v_00_u03b1_3271_);
lean_dec_ref(v_f_3270_);
return v___x_3283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(lean_object* v_e_3303_, uint8_t v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_){
_start:
{
lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; uint8_t v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; uint8_t v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___x_3348_; 
lean_inc_ref(v_e_3303_);
v___x_3348_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3303_, v_a_3308_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; lean_object* v___x_3350_; uint8_t v___x_3351_; 
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_a_3349_);
lean_dec_ref_known(v___x_3348_, 1);
v___x_3350_ = l_Lean_Expr_cleanupAnnotations(v_a_3349_);
lean_dec(v_a_3349_);
v___x_3351_ = l_Lean_Expr_isApp(v___x_3350_);
if (v___x_3351_ == 0)
{
lean_dec_ref(v___x_3350_);
v___y_3337_ = v_a_3304_;
v___y_3338_ = v_a_3305_;
v___y_3339_ = v_a_3306_;
v___y_3340_ = v_a_3307_;
v___y_3341_ = v_a_3308_;
v___y_3342_ = v_a_3309_;
v___y_3343_ = v_a_3310_;
goto v___jp_3336_;
}
else
{
lean_object* v___x_3352_; uint8_t v___x_3353_; 
v___x_3352_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3350_);
v___x_3353_ = l_Lean_Expr_isApp(v___x_3352_);
if (v___x_3353_ == 0)
{
lean_dec_ref(v___x_3352_);
lean_dec_ref(v___x_3350_);
v___y_3337_ = v_a_3304_;
v___y_3338_ = v_a_3305_;
v___y_3339_ = v_a_3306_;
v___y_3340_ = v_a_3307_;
v___y_3341_ = v_a_3308_;
v___y_3342_ = v_a_3309_;
v___y_3343_ = v_a_3310_;
goto v___jp_3336_;
}
else
{
lean_object* v___x_3354_; uint8_t v___x_3355_; 
v___x_3354_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3352_);
v___x_3355_ = l_Lean_Expr_isApp(v___x_3354_);
if (v___x_3355_ == 0)
{
lean_dec_ref(v___x_3354_);
lean_dec_ref(v___x_3352_);
lean_dec_ref(v___x_3350_);
v___y_3337_ = v_a_3304_;
v___y_3338_ = v_a_3305_;
v___y_3339_ = v_a_3306_;
v___y_3340_ = v_a_3307_;
v___y_3341_ = v_a_3308_;
v___y_3342_ = v_a_3309_;
v___y_3343_ = v_a_3310_;
goto v___jp_3336_;
}
else
{
lean_object* v___x_3356_; uint8_t v___x_3357_; 
v___x_3356_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3354_);
v___x_3357_ = l_Lean_Expr_isApp(v___x_3356_);
if (v___x_3357_ == 0)
{
lean_dec_ref(v___x_3356_);
lean_dec_ref(v___x_3354_);
lean_dec_ref(v___x_3352_);
lean_dec_ref(v___x_3350_);
v___y_3337_ = v_a_3304_;
v___y_3338_ = v_a_3305_;
v___y_3339_ = v_a_3306_;
v___y_3340_ = v_a_3307_;
v___y_3341_ = v_a_3308_;
v___y_3342_ = v_a_3309_;
v___y_3343_ = v_a_3310_;
goto v___jp_3336_;
}
else
{
lean_object* v_arg_3358_; lean_object* v_arg_3359_; lean_object* v_arg_3360_; lean_object* v_arg_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
v_arg_3358_ = lean_ctor_get(v___x_3350_, 1);
lean_inc_ref(v_arg_3358_);
lean_dec_ref(v___x_3350_);
v_arg_3359_ = lean_ctor_get(v___x_3352_, 1);
lean_inc_ref(v_arg_3359_);
lean_dec_ref(v___x_3352_);
v_arg_3360_ = lean_ctor_get(v___x_3354_, 1);
lean_inc_ref(v_arg_3360_);
lean_dec_ref(v___x_3354_);
v_arg_3361_ = lean_ctor_get(v___x_3356_, 1);
lean_inc_ref(v_arg_3361_);
v___x_3362_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3356_);
lean_dec_ref(v___x_3356_);
v___x_3363_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1));
v___x_3364_ = l_Lean_Expr_isConstOf(v___x_3362_, v___x_3363_);
if (v___x_3364_ == 0)
{
uint8_t v___x_3365_; 
v___x_3365_ = l_Lean_Expr_isApp(v___x_3362_);
if (v___x_3365_ == 0)
{
lean_dec_ref(v___x_3362_);
lean_dec_ref(v_arg_3361_);
lean_dec_ref(v_arg_3360_);
lean_dec_ref(v_arg_3359_);
lean_dec_ref(v_arg_3358_);
v___y_3337_ = v_a_3304_;
v___y_3338_ = v_a_3305_;
v___y_3339_ = v_a_3306_;
v___y_3340_ = v_a_3307_;
v___y_3341_ = v_a_3308_;
v___y_3342_ = v_a_3309_;
v___y_3343_ = v_a_3310_;
goto v___jp_3336_;
}
else
{
lean_object* v_arg_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; uint8_t v___x_3369_; 
v_arg_3366_ = lean_ctor_get(v___x_3362_, 1);
lean_inc_ref(v_arg_3366_);
v___x_3367_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3362_);
lean_dec_ref(v___x_3362_);
v___x_3368_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3));
v___x_3369_ = l_Lean_Expr_isConstOf(v___x_3367_, v___x_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3370_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__4));
v___x_3371_ = l_Lean_Expr_isConstOf(v___x_3367_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_dec_ref(v___x_3367_);
lean_dec_ref(v_arg_3366_);
lean_dec_ref(v_arg_3361_);
lean_dec_ref(v_arg_3360_);
lean_dec_ref(v_arg_3359_);
lean_dec_ref(v_arg_3358_);
v___y_3337_ = v_a_3304_;
v___y_3338_ = v_a_3305_;
v___y_3339_ = v_a_3306_;
v___y_3340_ = v_a_3307_;
v___y_3341_ = v_a_3308_;
v___y_3342_ = v_a_3309_;
v___y_3343_ = v_a_3310_;
goto v___jp_3336_;
}
else
{
lean_object* v___x_3372_; 
lean_dec_ref(v_e_3303_);
v___x_3372_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v___x_3367_, v_arg_3366_, v_arg_3361_, v_arg_3360_, v_arg_3359_, v_arg_3358_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_);
return v___x_3372_;
}
}
else
{
lean_object* v___x_3373_; 
lean_dec_ref(v_e_3303_);
v___x_3373_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v___x_3367_, v_arg_3366_, v_arg_3361_, v_arg_3360_, v_arg_3359_, v_arg_3358_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_);
return v___x_3373_;
}
}
}
else
{
lean_object* v___x_3374_; 
lean_dec_ref(v_e_3303_);
v___x_3374_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(v___x_3362_, v_arg_3361_, v_arg_3360_, v_arg_3359_, v_arg_3358_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_);
return v___x_3374_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_3303_);
return v___x_3348_;
}
v___jp_3312_:
{
if (lean_obj_tag(v___y_3314_) == 4)
{
lean_object* v_declName_3321_; lean_object* v___x_3322_; 
v_declName_3321_ = lean_ctor_get(v___y_3314_, 0);
lean_inc(v_declName_3321_);
lean_dec_ref_known(v___y_3314_, 2);
v___x_3322_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_3321_, v___y_3319_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; uint8_t v___x_3324_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3322_, 1);
v___x_3324_ = lean_unbox(v_a_3323_);
lean_dec(v_a_3323_);
if (v___x_3324_ == 0)
{
lean_object* v___x_3325_; 
v___x_3325_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_3303_, v___y_3316_, v___y_3320_, v___y_3315_, v___y_3313_, v___y_3318_, v___y_3317_, v___y_3319_);
return v___x_3325_;
}
else
{
lean_object* v___x_3326_; 
v___x_3326_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(v_e_3303_, v___y_3316_, v___y_3320_, v___y_3315_, v___y_3313_, v___y_3318_, v___y_3317_, v___y_3319_);
return v___x_3326_;
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_dec_ref(v_e_3303_);
v_a_3327_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3322_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3322_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
else
{
lean_object* v___x_3335_; 
lean_dec_ref(v___y_3314_);
v___x_3335_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_3303_, v___y_3316_, v___y_3320_, v___y_3315_, v___y_3313_, v___y_3318_, v___y_3317_, v___y_3319_);
return v___x_3335_;
}
}
v___jp_3336_:
{
lean_object* v___x_3344_; uint8_t v___x_3345_; 
v___x_3344_ = l_Lean_Expr_getAppFn(v_e_3303_);
v___x_3345_ = l_Lean_Expr_isLambda(v___x_3344_);
if (v___x_3345_ == 0)
{
v___y_3313_ = v___y_3340_;
v___y_3314_ = v___x_3344_;
v___y_3315_ = v___y_3339_;
v___y_3316_ = v___y_3337_;
v___y_3317_ = v___y_3342_;
v___y_3318_ = v___y_3341_;
v___y_3319_ = v___y_3343_;
v___y_3320_ = v___y_3338_;
goto v___jp_3312_;
}
else
{
if (v___y_3337_ == 0)
{
v___y_3313_ = v___y_3340_;
v___y_3314_ = v___x_3344_;
v___y_3315_ = v___y_3339_;
v___y_3316_ = v___y_3337_;
v___y_3317_ = v___y_3342_;
v___y_3318_ = v___y_3341_;
v___y_3319_ = v___y_3343_;
v___y_3320_ = v___y_3338_;
goto v___jp_3312_;
}
else
{
lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec_ref(v___x_3344_);
v___x_3346_ = l_Lean_Expr_headBeta(v_e_3303_);
v___x_3347_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_3346_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
return v___x_3347_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3378_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2));
v___x_3379_ = lean_unsigned_to_nat(18u);
v___x_3380_ = lean_unsigned_to_nat(1919u);
v___x_3381_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1));
v___x_3382_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0));
v___x_3383_ = l_mkPanicMessageWithDecl(v___x_3382_, v___x_3381_, v___x_3380_, v___x_3379_, v___x_3378_);
return v___x_3383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(lean_object* v_e_3384_, uint8_t v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; 
v___x_3393_ = l_Lean_Expr_projExpr_x21(v_e_3384_);
v___x_3394_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_3393_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___y_3397_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3395_);
lean_dec_ref_known(v___x_3394_, 1);
if (lean_obj_tag(v_e_3384_) == 11)
{
lean_object* v_typeName_3419_; lean_object* v_idx_3420_; lean_object* v_struct_3421_; size_t v___x_3422_; size_t v___x_3423_; uint8_t v___x_3424_; 
v_typeName_3419_ = lean_ctor_get(v_e_3384_, 0);
v_idx_3420_ = lean_ctor_get(v_e_3384_, 1);
v_struct_3421_ = lean_ctor_get(v_e_3384_, 2);
v___x_3422_ = lean_ptr_addr(v_struct_3421_);
v___x_3423_ = lean_ptr_addr(v_a_3395_);
v___x_3424_ = lean_usize_dec_eq(v___x_3422_, v___x_3423_);
if (v___x_3424_ == 0)
{
lean_object* v___x_3425_; 
lean_inc(v_idx_3420_);
lean_inc(v_typeName_3419_);
lean_dec_ref_known(v_e_3384_, 3);
v___x_3425_ = l_Lean_Expr_proj___override(v_typeName_3419_, v_idx_3420_, v_a_3395_);
v___y_3397_ = v___x_3425_;
goto v___jp_3396_;
}
else
{
lean_dec(v_a_3395_);
v___y_3397_ = v_e_3384_;
goto v___jp_3396_;
}
}
else
{
lean_object* v___x_3426_; lean_object* v___x_3427_; 
lean_dec(v_a_3395_);
lean_dec_ref(v_e_3384_);
v___x_3426_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3);
v___x_3427_ = l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(v___x_3426_);
v___y_3397_ = v___x_3427_;
goto v___jp_3396_;
}
v___jp_3396_:
{
lean_object* v___x_3398_; 
lean_inc_ref(v___y_3397_);
v___x_3398_ = l_Lean_Meta_reduceProj_x3f(v___y_3397_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3410_; 
v_a_3399_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3401_ = v___x_3398_;
v_isShared_3402_ = v_isSharedCheck_3410_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3398_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3410_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
if (lean_obj_tag(v_a_3399_) == 0)
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 0, v___y_3397_);
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___y_3397_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
else
{
lean_object* v_val_3406_; lean_object* v___x_3408_; 
lean_dec_ref(v___y_3397_);
v_val_3406_ = lean_ctor_get(v_a_3399_, 0);
lean_inc(v_val_3406_);
lean_dec_ref_known(v_a_3399_, 1);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 0, v_val_3406_);
v___x_3408_ = v___x_3401_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_val_3406_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec_ref(v___y_3397_);
v_a_3411_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3398_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3398_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_3384_);
return v___x_3394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(lean_object* v_e_3428_, uint8_t v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_){
_start:
{
switch(lean_obj_tag(v_e_3428_))
{
case 7:
{
lean_object* v___x_3437_; 
v___x_3437_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
if (v_a_3429_ == 0)
{
lean_object* v___x_3438_; lean_object* v_canon_3439_; lean_object* v_cache_3440_; lean_object* v___x_3441_; 
v___x_3438_ = lean_st_ref_get(v_a_3431_);
v_canon_3439_ = lean_ctor_get(v___x_3438_, 11);
lean_inc_ref(v_canon_3439_);
lean_dec(v___x_3438_);
v_cache_3440_ = lean_ctor_get(v_canon_3439_, 0);
lean_inc_ref(v_cache_3440_);
lean_dec_ref(v_canon_3439_);
v___x_3441_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3440_, v_e_3428_);
lean_dec_ref(v_cache_3440_);
if (lean_obj_tag(v___x_3441_) == 1)
{
lean_object* v_val_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3449_; 
lean_dec_ref_known(v_e_3428_, 3);
v_val_3442_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3449_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3444_ = v___x_3441_;
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_val_3442_);
lean_dec(v___x_3441_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3447_; 
if (v_isShared_3445_ == 0)
{
lean_ctor_set_tag(v___x_3444_, 0);
v___x_3447_ = v___x_3444_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_val_3442_);
v___x_3447_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
return v___x_3447_;
}
}
}
else
{
lean_object* v___x_3450_; 
lean_dec(v___x_3441_);
lean_inc_ref(v_e_3428_);
v___x_3450_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3437_, v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3491_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3453_ = v___x_3450_;
v_isShared_3454_ = v_isSharedCheck_3491_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3450_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3491_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3455_; lean_object* v_canon_3456_; lean_object* v_share_3457_; lean_object* v_maxFVar_3458_; lean_object* v_proofInstInfo_3459_; lean_object* v_proofInstInfoFVar_3460_; lean_object* v_inferType_3461_; lean_object* v_getLevel_3462_; lean_object* v_congrInfo_3463_; lean_object* v_congrInfoFixedUDec_3464_; lean_object* v_defEqI_3465_; lean_object* v_extensions_3466_; lean_object* v_issues_3467_; lean_object* v_instanceOverrides_3468_; uint8_t v_debug_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3490_; 
v___x_3455_ = lean_st_ref_take(v_a_3431_);
v_canon_3456_ = lean_ctor_get(v___x_3455_, 11);
v_share_3457_ = lean_ctor_get(v___x_3455_, 0);
v_maxFVar_3458_ = lean_ctor_get(v___x_3455_, 1);
v_proofInstInfo_3459_ = lean_ctor_get(v___x_3455_, 2);
v_proofInstInfoFVar_3460_ = lean_ctor_get(v___x_3455_, 3);
v_inferType_3461_ = lean_ctor_get(v___x_3455_, 4);
v_getLevel_3462_ = lean_ctor_get(v___x_3455_, 5);
v_congrInfo_3463_ = lean_ctor_get(v___x_3455_, 6);
v_congrInfoFixedUDec_3464_ = lean_ctor_get(v___x_3455_, 7);
v_defEqI_3465_ = lean_ctor_get(v___x_3455_, 8);
v_extensions_3466_ = lean_ctor_get(v___x_3455_, 9);
v_issues_3467_ = lean_ctor_get(v___x_3455_, 10);
v_instanceOverrides_3468_ = lean_ctor_get(v___x_3455_, 12);
v_debug_3469_ = lean_ctor_get_uint8(v___x_3455_, sizeof(void*)*13);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3471_ = v___x_3455_;
v_isShared_3472_ = v_isSharedCheck_3490_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_instanceOverrides_3468_);
lean_inc(v_canon_3456_);
lean_inc(v_issues_3467_);
lean_inc(v_extensions_3466_);
lean_inc(v_defEqI_3465_);
lean_inc(v_congrInfoFixedUDec_3464_);
lean_inc(v_congrInfo_3463_);
lean_inc(v_getLevel_3462_);
lean_inc(v_inferType_3461_);
lean_inc(v_proofInstInfoFVar_3460_);
lean_inc(v_proofInstInfo_3459_);
lean_inc(v_maxFVar_3458_);
lean_inc(v_share_3457_);
lean_dec(v___x_3455_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3490_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v_cache_3473_; lean_object* v_cacheInType_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3489_; 
v_cache_3473_ = lean_ctor_get(v_canon_3456_, 0);
v_cacheInType_3474_ = lean_ctor_get(v_canon_3456_, 1);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_canon_3456_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3476_ = v_canon_3456_;
v_isShared_3477_ = v_isSharedCheck_3489_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_cacheInType_3474_);
lean_inc(v_cache_3473_);
lean_dec(v_canon_3456_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3489_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3478_; lean_object* v___x_3480_; 
lean_inc(v_a_3451_);
v___x_3478_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3473_, v_e_3428_, v_a_3451_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v___x_3478_);
v___x_3480_ = v___x_3476_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v___x_3478_);
lean_ctor_set(v_reuseFailAlloc_3488_, 1, v_cacheInType_3474_);
v___x_3480_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
lean_object* v___x_3482_; 
if (v_isShared_3472_ == 0)
{
lean_ctor_set(v___x_3471_, 11, v___x_3480_);
v___x_3482_ = v___x_3471_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_share_3457_);
lean_ctor_set(v_reuseFailAlloc_3487_, 1, v_maxFVar_3458_);
lean_ctor_set(v_reuseFailAlloc_3487_, 2, v_proofInstInfo_3459_);
lean_ctor_set(v_reuseFailAlloc_3487_, 3, v_proofInstInfoFVar_3460_);
lean_ctor_set(v_reuseFailAlloc_3487_, 4, v_inferType_3461_);
lean_ctor_set(v_reuseFailAlloc_3487_, 5, v_getLevel_3462_);
lean_ctor_set(v_reuseFailAlloc_3487_, 6, v_congrInfo_3463_);
lean_ctor_set(v_reuseFailAlloc_3487_, 7, v_congrInfoFixedUDec_3464_);
lean_ctor_set(v_reuseFailAlloc_3487_, 8, v_defEqI_3465_);
lean_ctor_set(v_reuseFailAlloc_3487_, 9, v_extensions_3466_);
lean_ctor_set(v_reuseFailAlloc_3487_, 10, v_issues_3467_);
lean_ctor_set(v_reuseFailAlloc_3487_, 11, v___x_3480_);
lean_ctor_set(v_reuseFailAlloc_3487_, 12, v_instanceOverrides_3468_);
lean_ctor_set_uint8(v_reuseFailAlloc_3487_, sizeof(void*)*13, v_debug_3469_);
v___x_3482_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3483_; lean_object* v___x_3485_; 
v___x_3483_ = lean_st_ref_put(v_a_3431_, v___x_3482_);
if (v_isShared_3454_ == 0)
{
v___x_3485_ = v___x_3453_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_a_3451_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 3);
return v___x_3450_;
}
}
}
else
{
lean_object* v___x_3492_; lean_object* v_canon_3493_; lean_object* v_cacheInType_3494_; lean_object* v___x_3495_; 
v___x_3492_ = lean_st_ref_get(v_a_3431_);
v_canon_3493_ = lean_ctor_get(v___x_3492_, 11);
lean_inc_ref(v_canon_3493_);
lean_dec(v___x_3492_);
v_cacheInType_3494_ = lean_ctor_get(v_canon_3493_, 1);
lean_inc_ref(v_cacheInType_3494_);
lean_dec_ref(v_canon_3493_);
v___x_3495_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3494_, v_e_3428_);
lean_dec_ref(v_cacheInType_3494_);
if (lean_obj_tag(v___x_3495_) == 1)
{
lean_object* v_val_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3503_; 
lean_dec_ref_known(v_e_3428_, 3);
v_val_3496_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3498_ = v___x_3495_;
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_val_3496_);
lean_dec(v___x_3495_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
lean_ctor_set_tag(v___x_3498_, 0);
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_val_3496_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
else
{
lean_object* v___x_3504_; 
lean_dec(v___x_3495_);
lean_inc_ref(v_e_3428_);
v___x_3504_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3437_, v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3545_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3507_ = v___x_3504_;
v_isShared_3508_ = v_isSharedCheck_3545_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3545_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3509_; lean_object* v_canon_3510_; lean_object* v_share_3511_; lean_object* v_maxFVar_3512_; lean_object* v_proofInstInfo_3513_; lean_object* v_proofInstInfoFVar_3514_; lean_object* v_inferType_3515_; lean_object* v_getLevel_3516_; lean_object* v_congrInfo_3517_; lean_object* v_congrInfoFixedUDec_3518_; lean_object* v_defEqI_3519_; lean_object* v_extensions_3520_; lean_object* v_issues_3521_; lean_object* v_instanceOverrides_3522_; uint8_t v_debug_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3544_; 
v___x_3509_ = lean_st_ref_take(v_a_3431_);
v_canon_3510_ = lean_ctor_get(v___x_3509_, 11);
v_share_3511_ = lean_ctor_get(v___x_3509_, 0);
v_maxFVar_3512_ = lean_ctor_get(v___x_3509_, 1);
v_proofInstInfo_3513_ = lean_ctor_get(v___x_3509_, 2);
v_proofInstInfoFVar_3514_ = lean_ctor_get(v___x_3509_, 3);
v_inferType_3515_ = lean_ctor_get(v___x_3509_, 4);
v_getLevel_3516_ = lean_ctor_get(v___x_3509_, 5);
v_congrInfo_3517_ = lean_ctor_get(v___x_3509_, 6);
v_congrInfoFixedUDec_3518_ = lean_ctor_get(v___x_3509_, 7);
v_defEqI_3519_ = lean_ctor_get(v___x_3509_, 8);
v_extensions_3520_ = lean_ctor_get(v___x_3509_, 9);
v_issues_3521_ = lean_ctor_get(v___x_3509_, 10);
v_instanceOverrides_3522_ = lean_ctor_get(v___x_3509_, 12);
v_debug_3523_ = lean_ctor_get_uint8(v___x_3509_, sizeof(void*)*13);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3525_ = v___x_3509_;
v_isShared_3526_ = v_isSharedCheck_3544_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_instanceOverrides_3522_);
lean_inc(v_canon_3510_);
lean_inc(v_issues_3521_);
lean_inc(v_extensions_3520_);
lean_inc(v_defEqI_3519_);
lean_inc(v_congrInfoFixedUDec_3518_);
lean_inc(v_congrInfo_3517_);
lean_inc(v_getLevel_3516_);
lean_inc(v_inferType_3515_);
lean_inc(v_proofInstInfoFVar_3514_);
lean_inc(v_proofInstInfo_3513_);
lean_inc(v_maxFVar_3512_);
lean_inc(v_share_3511_);
lean_dec(v___x_3509_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3544_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v_cache_3527_; lean_object* v_cacheInType_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3543_; 
v_cache_3527_ = lean_ctor_get(v_canon_3510_, 0);
v_cacheInType_3528_ = lean_ctor_get(v_canon_3510_, 1);
v_isSharedCheck_3543_ = !lean_is_exclusive(v_canon_3510_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3530_ = v_canon_3510_;
v_isShared_3531_ = v_isSharedCheck_3543_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_cacheInType_3528_);
lean_inc(v_cache_3527_);
lean_dec(v_canon_3510_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3543_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; lean_object* v___x_3534_; 
lean_inc(v_a_3505_);
v___x_3532_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3528_, v_e_3428_, v_a_3505_);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 1, v___x_3532_);
v___x_3534_ = v___x_3530_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_cache_3527_);
lean_ctor_set(v_reuseFailAlloc_3542_, 1, v___x_3532_);
v___x_3534_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3536_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 11, v___x_3534_);
v___x_3536_ = v___x_3525_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_share_3511_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v_maxFVar_3512_);
lean_ctor_set(v_reuseFailAlloc_3541_, 2, v_proofInstInfo_3513_);
lean_ctor_set(v_reuseFailAlloc_3541_, 3, v_proofInstInfoFVar_3514_);
lean_ctor_set(v_reuseFailAlloc_3541_, 4, v_inferType_3515_);
lean_ctor_set(v_reuseFailAlloc_3541_, 5, v_getLevel_3516_);
lean_ctor_set(v_reuseFailAlloc_3541_, 6, v_congrInfo_3517_);
lean_ctor_set(v_reuseFailAlloc_3541_, 7, v_congrInfoFixedUDec_3518_);
lean_ctor_set(v_reuseFailAlloc_3541_, 8, v_defEqI_3519_);
lean_ctor_set(v_reuseFailAlloc_3541_, 9, v_extensions_3520_);
lean_ctor_set(v_reuseFailAlloc_3541_, 10, v_issues_3521_);
lean_ctor_set(v_reuseFailAlloc_3541_, 11, v___x_3534_);
lean_ctor_set(v_reuseFailAlloc_3541_, 12, v_instanceOverrides_3522_);
lean_ctor_set_uint8(v_reuseFailAlloc_3541_, sizeof(void*)*13, v_debug_3523_);
v___x_3536_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
lean_object* v___x_3537_; lean_object* v___x_3539_; 
v___x_3537_ = lean_st_ref_put(v_a_3431_, v___x_3536_);
if (v_isShared_3508_ == 0)
{
v___x_3539_ = v___x_3507_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3505_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 3);
return v___x_3504_;
}
}
}
}
case 6:
{
if (v_a_3429_ == 0)
{
lean_object* v___x_3546_; lean_object* v_canon_3547_; lean_object* v_cache_3548_; lean_object* v___x_3549_; 
v___x_3546_ = lean_st_ref_get(v_a_3431_);
v_canon_3547_ = lean_ctor_get(v___x_3546_, 11);
lean_inc_ref(v_canon_3547_);
lean_dec(v___x_3546_);
v_cache_3548_ = lean_ctor_get(v_canon_3547_, 0);
lean_inc_ref(v_cache_3548_);
lean_dec_ref(v_canon_3547_);
v___x_3549_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3548_, v_e_3428_);
lean_dec_ref(v_cache_3548_);
if (lean_obj_tag(v___x_3549_) == 1)
{
lean_object* v_val_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3557_; 
lean_dec_ref_known(v_e_3428_, 3);
v_val_3550_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3552_ = v___x_3549_;
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_val_3550_);
lean_dec(v___x_3549_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3555_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set_tag(v___x_3552_, 0);
v___x_3555_ = v___x_3552_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_val_3550_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
else
{
lean_object* v___x_3558_; 
lean_dec(v___x_3549_);
lean_inc_ref(v_e_3428_);
v___x_3558_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3599_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3561_ = v___x_3558_;
v_isShared_3562_ = v_isSharedCheck_3599_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3558_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3599_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3563_; lean_object* v_canon_3564_; lean_object* v_share_3565_; lean_object* v_maxFVar_3566_; lean_object* v_proofInstInfo_3567_; lean_object* v_proofInstInfoFVar_3568_; lean_object* v_inferType_3569_; lean_object* v_getLevel_3570_; lean_object* v_congrInfo_3571_; lean_object* v_congrInfoFixedUDec_3572_; lean_object* v_defEqI_3573_; lean_object* v_extensions_3574_; lean_object* v_issues_3575_; lean_object* v_instanceOverrides_3576_; uint8_t v_debug_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3598_; 
v___x_3563_ = lean_st_ref_take(v_a_3431_);
v_canon_3564_ = lean_ctor_get(v___x_3563_, 11);
v_share_3565_ = lean_ctor_get(v___x_3563_, 0);
v_maxFVar_3566_ = lean_ctor_get(v___x_3563_, 1);
v_proofInstInfo_3567_ = lean_ctor_get(v___x_3563_, 2);
v_proofInstInfoFVar_3568_ = lean_ctor_get(v___x_3563_, 3);
v_inferType_3569_ = lean_ctor_get(v___x_3563_, 4);
v_getLevel_3570_ = lean_ctor_get(v___x_3563_, 5);
v_congrInfo_3571_ = lean_ctor_get(v___x_3563_, 6);
v_congrInfoFixedUDec_3572_ = lean_ctor_get(v___x_3563_, 7);
v_defEqI_3573_ = lean_ctor_get(v___x_3563_, 8);
v_extensions_3574_ = lean_ctor_get(v___x_3563_, 9);
v_issues_3575_ = lean_ctor_get(v___x_3563_, 10);
v_instanceOverrides_3576_ = lean_ctor_get(v___x_3563_, 12);
v_debug_3577_ = lean_ctor_get_uint8(v___x_3563_, sizeof(void*)*13);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3579_ = v___x_3563_;
v_isShared_3580_ = v_isSharedCheck_3598_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_instanceOverrides_3576_);
lean_inc(v_canon_3564_);
lean_inc(v_issues_3575_);
lean_inc(v_extensions_3574_);
lean_inc(v_defEqI_3573_);
lean_inc(v_congrInfoFixedUDec_3572_);
lean_inc(v_congrInfo_3571_);
lean_inc(v_getLevel_3570_);
lean_inc(v_inferType_3569_);
lean_inc(v_proofInstInfoFVar_3568_);
lean_inc(v_proofInstInfo_3567_);
lean_inc(v_maxFVar_3566_);
lean_inc(v_share_3565_);
lean_dec(v___x_3563_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3598_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v_cache_3581_; lean_object* v_cacheInType_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3597_; 
v_cache_3581_ = lean_ctor_get(v_canon_3564_, 0);
v_cacheInType_3582_ = lean_ctor_get(v_canon_3564_, 1);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_canon_3564_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3584_ = v_canon_3564_;
v_isShared_3585_ = v_isSharedCheck_3597_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_cacheInType_3582_);
lean_inc(v_cache_3581_);
lean_dec(v_canon_3564_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3597_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3586_; lean_object* v___x_3588_; 
lean_inc(v_a_3559_);
v___x_3586_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3581_, v_e_3428_, v_a_3559_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3586_);
v___x_3588_ = v___x_3584_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v___x_3586_);
lean_ctor_set(v_reuseFailAlloc_3596_, 1, v_cacheInType_3582_);
v___x_3588_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
lean_object* v___x_3590_; 
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 11, v___x_3588_);
v___x_3590_ = v___x_3579_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_share_3565_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v_maxFVar_3566_);
lean_ctor_set(v_reuseFailAlloc_3595_, 2, v_proofInstInfo_3567_);
lean_ctor_set(v_reuseFailAlloc_3595_, 3, v_proofInstInfoFVar_3568_);
lean_ctor_set(v_reuseFailAlloc_3595_, 4, v_inferType_3569_);
lean_ctor_set(v_reuseFailAlloc_3595_, 5, v_getLevel_3570_);
lean_ctor_set(v_reuseFailAlloc_3595_, 6, v_congrInfo_3571_);
lean_ctor_set(v_reuseFailAlloc_3595_, 7, v_congrInfoFixedUDec_3572_);
lean_ctor_set(v_reuseFailAlloc_3595_, 8, v_defEqI_3573_);
lean_ctor_set(v_reuseFailAlloc_3595_, 9, v_extensions_3574_);
lean_ctor_set(v_reuseFailAlloc_3595_, 10, v_issues_3575_);
lean_ctor_set(v_reuseFailAlloc_3595_, 11, v___x_3588_);
lean_ctor_set(v_reuseFailAlloc_3595_, 12, v_instanceOverrides_3576_);
lean_ctor_set_uint8(v_reuseFailAlloc_3595_, sizeof(void*)*13, v_debug_3577_);
v___x_3590_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3591_ = lean_st_ref_put(v_a_3431_, v___x_3590_);
if (v_isShared_3562_ == 0)
{
v___x_3593_ = v___x_3561_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3559_);
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
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 3);
return v___x_3558_;
}
}
}
else
{
lean_object* v___x_3600_; lean_object* v_canon_3601_; lean_object* v_cacheInType_3602_; lean_object* v___x_3603_; 
v___x_3600_ = lean_st_ref_get(v_a_3431_);
v_canon_3601_ = lean_ctor_get(v___x_3600_, 11);
lean_inc_ref(v_canon_3601_);
lean_dec(v___x_3600_);
v_cacheInType_3602_ = lean_ctor_get(v_canon_3601_, 1);
lean_inc_ref(v_cacheInType_3602_);
lean_dec_ref(v_canon_3601_);
v___x_3603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3602_, v_e_3428_);
lean_dec_ref(v_cacheInType_3602_);
if (lean_obj_tag(v___x_3603_) == 1)
{
lean_object* v_val_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3611_; 
lean_dec_ref_known(v_e_3428_, 3);
v_val_3604_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3606_ = v___x_3603_;
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_val_3604_);
lean_dec(v___x_3603_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3609_; 
if (v_isShared_3607_ == 0)
{
lean_ctor_set_tag(v___x_3606_, 0);
v___x_3609_ = v___x_3606_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v_val_3604_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
else
{
lean_object* v___x_3612_; 
lean_dec(v___x_3603_);
lean_inc_ref(v_e_3428_);
v___x_3612_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3653_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3615_ = v___x_3612_;
v_isShared_3616_ = v_isSharedCheck_3653_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3612_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3653_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3617_; lean_object* v_canon_3618_; lean_object* v_share_3619_; lean_object* v_maxFVar_3620_; lean_object* v_proofInstInfo_3621_; lean_object* v_proofInstInfoFVar_3622_; lean_object* v_inferType_3623_; lean_object* v_getLevel_3624_; lean_object* v_congrInfo_3625_; lean_object* v_congrInfoFixedUDec_3626_; lean_object* v_defEqI_3627_; lean_object* v_extensions_3628_; lean_object* v_issues_3629_; lean_object* v_instanceOverrides_3630_; uint8_t v_debug_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3652_; 
v___x_3617_ = lean_st_ref_take(v_a_3431_);
v_canon_3618_ = lean_ctor_get(v___x_3617_, 11);
v_share_3619_ = lean_ctor_get(v___x_3617_, 0);
v_maxFVar_3620_ = lean_ctor_get(v___x_3617_, 1);
v_proofInstInfo_3621_ = lean_ctor_get(v___x_3617_, 2);
v_proofInstInfoFVar_3622_ = lean_ctor_get(v___x_3617_, 3);
v_inferType_3623_ = lean_ctor_get(v___x_3617_, 4);
v_getLevel_3624_ = lean_ctor_get(v___x_3617_, 5);
v_congrInfo_3625_ = lean_ctor_get(v___x_3617_, 6);
v_congrInfoFixedUDec_3626_ = lean_ctor_get(v___x_3617_, 7);
v_defEqI_3627_ = lean_ctor_get(v___x_3617_, 8);
v_extensions_3628_ = lean_ctor_get(v___x_3617_, 9);
v_issues_3629_ = lean_ctor_get(v___x_3617_, 10);
v_instanceOverrides_3630_ = lean_ctor_get(v___x_3617_, 12);
v_debug_3631_ = lean_ctor_get_uint8(v___x_3617_, sizeof(void*)*13);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3633_ = v___x_3617_;
v_isShared_3634_ = v_isSharedCheck_3652_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_instanceOverrides_3630_);
lean_inc(v_canon_3618_);
lean_inc(v_issues_3629_);
lean_inc(v_extensions_3628_);
lean_inc(v_defEqI_3627_);
lean_inc(v_congrInfoFixedUDec_3626_);
lean_inc(v_congrInfo_3625_);
lean_inc(v_getLevel_3624_);
lean_inc(v_inferType_3623_);
lean_inc(v_proofInstInfoFVar_3622_);
lean_inc(v_proofInstInfo_3621_);
lean_inc(v_maxFVar_3620_);
lean_inc(v_share_3619_);
lean_dec(v___x_3617_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3652_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v_cache_3635_; lean_object* v_cacheInType_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3651_; 
v_cache_3635_ = lean_ctor_get(v_canon_3618_, 0);
v_cacheInType_3636_ = lean_ctor_get(v_canon_3618_, 1);
v_isSharedCheck_3651_ = !lean_is_exclusive(v_canon_3618_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3638_ = v_canon_3618_;
v_isShared_3639_ = v_isSharedCheck_3651_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_cacheInType_3636_);
lean_inc(v_cache_3635_);
lean_dec(v_canon_3618_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3651_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3640_; lean_object* v___x_3642_; 
lean_inc(v_a_3613_);
v___x_3640_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3636_, v_e_3428_, v_a_3613_);
if (v_isShared_3639_ == 0)
{
lean_ctor_set(v___x_3638_, 1, v___x_3640_);
v___x_3642_ = v___x_3638_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_cache_3635_);
lean_ctor_set(v_reuseFailAlloc_3650_, 1, v___x_3640_);
v___x_3642_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
lean_object* v___x_3644_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 11, v___x_3642_);
v___x_3644_ = v___x_3633_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_share_3619_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_maxFVar_3620_);
lean_ctor_set(v_reuseFailAlloc_3649_, 2, v_proofInstInfo_3621_);
lean_ctor_set(v_reuseFailAlloc_3649_, 3, v_proofInstInfoFVar_3622_);
lean_ctor_set(v_reuseFailAlloc_3649_, 4, v_inferType_3623_);
lean_ctor_set(v_reuseFailAlloc_3649_, 5, v_getLevel_3624_);
lean_ctor_set(v_reuseFailAlloc_3649_, 6, v_congrInfo_3625_);
lean_ctor_set(v_reuseFailAlloc_3649_, 7, v_congrInfoFixedUDec_3626_);
lean_ctor_set(v_reuseFailAlloc_3649_, 8, v_defEqI_3627_);
lean_ctor_set(v_reuseFailAlloc_3649_, 9, v_extensions_3628_);
lean_ctor_set(v_reuseFailAlloc_3649_, 10, v_issues_3629_);
lean_ctor_set(v_reuseFailAlloc_3649_, 11, v___x_3642_);
lean_ctor_set(v_reuseFailAlloc_3649_, 12, v_instanceOverrides_3630_);
lean_ctor_set_uint8(v_reuseFailAlloc_3649_, sizeof(void*)*13, v_debug_3631_);
v___x_3644_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; lean_object* v___x_3647_; 
v___x_3645_ = lean_st_ref_put(v_a_3431_, v___x_3644_);
if (v_isShared_3616_ == 0)
{
v___x_3647_ = v___x_3615_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3613_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 3);
return v___x_3612_;
}
}
}
}
case 8:
{
lean_object* v___x_3654_; 
v___x_3654_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
if (v_a_3429_ == 0)
{
lean_object* v___x_3655_; lean_object* v_canon_3656_; lean_object* v_cache_3657_; lean_object* v___x_3658_; 
v___x_3655_ = lean_st_ref_get(v_a_3431_);
v_canon_3656_ = lean_ctor_get(v___x_3655_, 11);
lean_inc_ref(v_canon_3656_);
lean_dec(v___x_3655_);
v_cache_3657_ = lean_ctor_get(v_canon_3656_, 0);
lean_inc_ref(v_cache_3657_);
lean_dec_ref(v_canon_3656_);
v___x_3658_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3657_, v_e_3428_);
lean_dec_ref(v_cache_3657_);
if (lean_obj_tag(v___x_3658_) == 1)
{
lean_object* v_val_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
lean_dec_ref_known(v_e_3428_, 4);
v_val_3659_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3661_ = v___x_3658_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_val_3659_);
lean_dec(v___x_3658_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
lean_ctor_set_tag(v___x_3661_, 0);
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_val_3659_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
else
{
lean_object* v___x_3667_; 
lean_dec(v___x_3658_);
lean_inc_ref(v_e_3428_);
v___x_3667_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_3654_, v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3667_) == 0)
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3708_; 
v_a_3668_ = lean_ctor_get(v___x_3667_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3667_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3670_ = v___x_3667_;
v_isShared_3671_ = v_isSharedCheck_3708_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3667_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3708_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v___x_3672_; lean_object* v_canon_3673_; lean_object* v_share_3674_; lean_object* v_maxFVar_3675_; lean_object* v_proofInstInfo_3676_; lean_object* v_proofInstInfoFVar_3677_; lean_object* v_inferType_3678_; lean_object* v_getLevel_3679_; lean_object* v_congrInfo_3680_; lean_object* v_congrInfoFixedUDec_3681_; lean_object* v_defEqI_3682_; lean_object* v_extensions_3683_; lean_object* v_issues_3684_; lean_object* v_instanceOverrides_3685_; uint8_t v_debug_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3707_; 
v___x_3672_ = lean_st_ref_take(v_a_3431_);
v_canon_3673_ = lean_ctor_get(v___x_3672_, 11);
v_share_3674_ = lean_ctor_get(v___x_3672_, 0);
v_maxFVar_3675_ = lean_ctor_get(v___x_3672_, 1);
v_proofInstInfo_3676_ = lean_ctor_get(v___x_3672_, 2);
v_proofInstInfoFVar_3677_ = lean_ctor_get(v___x_3672_, 3);
v_inferType_3678_ = lean_ctor_get(v___x_3672_, 4);
v_getLevel_3679_ = lean_ctor_get(v___x_3672_, 5);
v_congrInfo_3680_ = lean_ctor_get(v___x_3672_, 6);
v_congrInfoFixedUDec_3681_ = lean_ctor_get(v___x_3672_, 7);
v_defEqI_3682_ = lean_ctor_get(v___x_3672_, 8);
v_extensions_3683_ = lean_ctor_get(v___x_3672_, 9);
v_issues_3684_ = lean_ctor_get(v___x_3672_, 10);
v_instanceOverrides_3685_ = lean_ctor_get(v___x_3672_, 12);
v_debug_3686_ = lean_ctor_get_uint8(v___x_3672_, sizeof(void*)*13);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3688_ = v___x_3672_;
v_isShared_3689_ = v_isSharedCheck_3707_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_instanceOverrides_3685_);
lean_inc(v_canon_3673_);
lean_inc(v_issues_3684_);
lean_inc(v_extensions_3683_);
lean_inc(v_defEqI_3682_);
lean_inc(v_congrInfoFixedUDec_3681_);
lean_inc(v_congrInfo_3680_);
lean_inc(v_getLevel_3679_);
lean_inc(v_inferType_3678_);
lean_inc(v_proofInstInfoFVar_3677_);
lean_inc(v_proofInstInfo_3676_);
lean_inc(v_maxFVar_3675_);
lean_inc(v_share_3674_);
lean_dec(v___x_3672_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3707_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v_cache_3690_; lean_object* v_cacheInType_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3706_; 
v_cache_3690_ = lean_ctor_get(v_canon_3673_, 0);
v_cacheInType_3691_ = lean_ctor_get(v_canon_3673_, 1);
v_isSharedCheck_3706_ = !lean_is_exclusive(v_canon_3673_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3693_ = v_canon_3673_;
v_isShared_3694_ = v_isSharedCheck_3706_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_cacheInType_3691_);
lean_inc(v_cache_3690_);
lean_dec(v_canon_3673_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3706_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3695_; lean_object* v___x_3697_; 
lean_inc(v_a_3668_);
v___x_3695_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3690_, v_e_3428_, v_a_3668_);
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3695_);
v___x_3697_ = v___x_3693_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v___x_3695_);
lean_ctor_set(v_reuseFailAlloc_3705_, 1, v_cacheInType_3691_);
v___x_3697_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
lean_object* v___x_3699_; 
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 11, v___x_3697_);
v___x_3699_ = v___x_3688_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_share_3674_);
lean_ctor_set(v_reuseFailAlloc_3704_, 1, v_maxFVar_3675_);
lean_ctor_set(v_reuseFailAlloc_3704_, 2, v_proofInstInfo_3676_);
lean_ctor_set(v_reuseFailAlloc_3704_, 3, v_proofInstInfoFVar_3677_);
lean_ctor_set(v_reuseFailAlloc_3704_, 4, v_inferType_3678_);
lean_ctor_set(v_reuseFailAlloc_3704_, 5, v_getLevel_3679_);
lean_ctor_set(v_reuseFailAlloc_3704_, 6, v_congrInfo_3680_);
lean_ctor_set(v_reuseFailAlloc_3704_, 7, v_congrInfoFixedUDec_3681_);
lean_ctor_set(v_reuseFailAlloc_3704_, 8, v_defEqI_3682_);
lean_ctor_set(v_reuseFailAlloc_3704_, 9, v_extensions_3683_);
lean_ctor_set(v_reuseFailAlloc_3704_, 10, v_issues_3684_);
lean_ctor_set(v_reuseFailAlloc_3704_, 11, v___x_3697_);
lean_ctor_set(v_reuseFailAlloc_3704_, 12, v_instanceOverrides_3685_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, sizeof(void*)*13, v_debug_3686_);
v___x_3699_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
lean_object* v___x_3700_; lean_object* v___x_3702_; 
v___x_3700_ = lean_st_ref_put(v_a_3431_, v___x_3699_);
if (v_isShared_3671_ == 0)
{
v___x_3702_ = v___x_3670_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_a_3668_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 4);
return v___x_3667_;
}
}
}
else
{
lean_object* v___x_3709_; lean_object* v_canon_3710_; lean_object* v_cacheInType_3711_; lean_object* v___x_3712_; 
v___x_3709_ = lean_st_ref_get(v_a_3431_);
v_canon_3710_ = lean_ctor_get(v___x_3709_, 11);
lean_inc_ref(v_canon_3710_);
lean_dec(v___x_3709_);
v_cacheInType_3711_ = lean_ctor_get(v_canon_3710_, 1);
lean_inc_ref(v_cacheInType_3711_);
lean_dec_ref(v_canon_3710_);
v___x_3712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3711_, v_e_3428_);
lean_dec_ref(v_cacheInType_3711_);
if (lean_obj_tag(v___x_3712_) == 1)
{
lean_object* v_val_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
lean_dec_ref_known(v_e_3428_, 4);
v_val_3713_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3712_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_val_3713_);
lean_dec(v___x_3712_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
lean_ctor_set_tag(v___x_3715_, 0);
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_val_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
else
{
lean_object* v___x_3721_; 
lean_dec(v___x_3712_);
lean_inc_ref(v_e_3428_);
v___x_3721_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_3654_, v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3762_; 
v_a_3722_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3724_ = v___x_3721_;
v_isShared_3725_ = v_isSharedCheck_3762_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v___x_3721_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3762_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v___x_3726_; lean_object* v_canon_3727_; lean_object* v_share_3728_; lean_object* v_maxFVar_3729_; lean_object* v_proofInstInfo_3730_; lean_object* v_proofInstInfoFVar_3731_; lean_object* v_inferType_3732_; lean_object* v_getLevel_3733_; lean_object* v_congrInfo_3734_; lean_object* v_congrInfoFixedUDec_3735_; lean_object* v_defEqI_3736_; lean_object* v_extensions_3737_; lean_object* v_issues_3738_; lean_object* v_instanceOverrides_3739_; uint8_t v_debug_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3761_; 
v___x_3726_ = lean_st_ref_take(v_a_3431_);
v_canon_3727_ = lean_ctor_get(v___x_3726_, 11);
v_share_3728_ = lean_ctor_get(v___x_3726_, 0);
v_maxFVar_3729_ = lean_ctor_get(v___x_3726_, 1);
v_proofInstInfo_3730_ = lean_ctor_get(v___x_3726_, 2);
v_proofInstInfoFVar_3731_ = lean_ctor_get(v___x_3726_, 3);
v_inferType_3732_ = lean_ctor_get(v___x_3726_, 4);
v_getLevel_3733_ = lean_ctor_get(v___x_3726_, 5);
v_congrInfo_3734_ = lean_ctor_get(v___x_3726_, 6);
v_congrInfoFixedUDec_3735_ = lean_ctor_get(v___x_3726_, 7);
v_defEqI_3736_ = lean_ctor_get(v___x_3726_, 8);
v_extensions_3737_ = lean_ctor_get(v___x_3726_, 9);
v_issues_3738_ = lean_ctor_get(v___x_3726_, 10);
v_instanceOverrides_3739_ = lean_ctor_get(v___x_3726_, 12);
v_debug_3740_ = lean_ctor_get_uint8(v___x_3726_, sizeof(void*)*13);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3742_ = v___x_3726_;
v_isShared_3743_ = v_isSharedCheck_3761_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_instanceOverrides_3739_);
lean_inc(v_canon_3727_);
lean_inc(v_issues_3738_);
lean_inc(v_extensions_3737_);
lean_inc(v_defEqI_3736_);
lean_inc(v_congrInfoFixedUDec_3735_);
lean_inc(v_congrInfo_3734_);
lean_inc(v_getLevel_3733_);
lean_inc(v_inferType_3732_);
lean_inc(v_proofInstInfoFVar_3731_);
lean_inc(v_proofInstInfo_3730_);
lean_inc(v_maxFVar_3729_);
lean_inc(v_share_3728_);
lean_dec(v___x_3726_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3761_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v_cache_3744_; lean_object* v_cacheInType_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3760_; 
v_cache_3744_ = lean_ctor_get(v_canon_3727_, 0);
v_cacheInType_3745_ = lean_ctor_get(v_canon_3727_, 1);
v_isSharedCheck_3760_ = !lean_is_exclusive(v_canon_3727_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3747_ = v_canon_3727_;
v_isShared_3748_ = v_isSharedCheck_3760_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_cacheInType_3745_);
lean_inc(v_cache_3744_);
lean_dec(v_canon_3727_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3760_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3749_; lean_object* v___x_3751_; 
lean_inc(v_a_3722_);
v___x_3749_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3745_, v_e_3428_, v_a_3722_);
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 1, v___x_3749_);
v___x_3751_ = v___x_3747_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_cache_3744_);
lean_ctor_set(v_reuseFailAlloc_3759_, 1, v___x_3749_);
v___x_3751_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
lean_object* v___x_3753_; 
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 11, v___x_3751_);
v___x_3753_ = v___x_3742_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_share_3728_);
lean_ctor_set(v_reuseFailAlloc_3758_, 1, v_maxFVar_3729_);
lean_ctor_set(v_reuseFailAlloc_3758_, 2, v_proofInstInfo_3730_);
lean_ctor_set(v_reuseFailAlloc_3758_, 3, v_proofInstInfoFVar_3731_);
lean_ctor_set(v_reuseFailAlloc_3758_, 4, v_inferType_3732_);
lean_ctor_set(v_reuseFailAlloc_3758_, 5, v_getLevel_3733_);
lean_ctor_set(v_reuseFailAlloc_3758_, 6, v_congrInfo_3734_);
lean_ctor_set(v_reuseFailAlloc_3758_, 7, v_congrInfoFixedUDec_3735_);
lean_ctor_set(v_reuseFailAlloc_3758_, 8, v_defEqI_3736_);
lean_ctor_set(v_reuseFailAlloc_3758_, 9, v_extensions_3737_);
lean_ctor_set(v_reuseFailAlloc_3758_, 10, v_issues_3738_);
lean_ctor_set(v_reuseFailAlloc_3758_, 11, v___x_3751_);
lean_ctor_set(v_reuseFailAlloc_3758_, 12, v_instanceOverrides_3739_);
lean_ctor_set_uint8(v_reuseFailAlloc_3758_, sizeof(void*)*13, v_debug_3740_);
v___x_3753_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
lean_object* v___x_3754_; lean_object* v___x_3756_; 
v___x_3754_ = lean_st_ref_put(v_a_3431_, v___x_3753_);
if (v_isShared_3725_ == 0)
{
v___x_3756_ = v___x_3724_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3722_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 4);
return v___x_3721_;
}
}
}
}
case 5:
{
if (v_a_3429_ == 0)
{
lean_object* v___x_3763_; lean_object* v_canon_3764_; lean_object* v_cache_3765_; lean_object* v___x_3766_; 
v___x_3763_ = lean_st_ref_get(v_a_3431_);
v_canon_3764_ = lean_ctor_get(v___x_3763_, 11);
lean_inc_ref(v_canon_3764_);
lean_dec(v___x_3763_);
v_cache_3765_ = lean_ctor_get(v_canon_3764_, 0);
lean_inc_ref(v_cache_3765_);
lean_dec_ref(v_canon_3764_);
v___x_3766_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3765_, v_e_3428_);
lean_dec_ref(v_cache_3765_);
if (lean_obj_tag(v___x_3766_) == 1)
{
lean_object* v_val_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
lean_dec_ref_known(v_e_3428_, 2);
v_val_3767_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3766_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_val_3767_);
lean_dec(v___x_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
lean_ctor_set_tag(v___x_3769_, 0);
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_val_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
else
{
lean_object* v___x_3775_; 
lean_dec(v___x_3766_);
lean_inc_ref(v_e_3428_);
v___x_3775_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3775_) == 0)
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3816_; 
v_a_3776_ = lean_ctor_get(v___x_3775_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3778_ = v___x_3775_;
v_isShared_3779_ = v_isSharedCheck_3816_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3775_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3816_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3780_; lean_object* v_canon_3781_; lean_object* v_share_3782_; lean_object* v_maxFVar_3783_; lean_object* v_proofInstInfo_3784_; lean_object* v_proofInstInfoFVar_3785_; lean_object* v_inferType_3786_; lean_object* v_getLevel_3787_; lean_object* v_congrInfo_3788_; lean_object* v_congrInfoFixedUDec_3789_; lean_object* v_defEqI_3790_; lean_object* v_extensions_3791_; lean_object* v_issues_3792_; lean_object* v_instanceOverrides_3793_; uint8_t v_debug_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3815_; 
v___x_3780_ = lean_st_ref_take(v_a_3431_);
v_canon_3781_ = lean_ctor_get(v___x_3780_, 11);
v_share_3782_ = lean_ctor_get(v___x_3780_, 0);
v_maxFVar_3783_ = lean_ctor_get(v___x_3780_, 1);
v_proofInstInfo_3784_ = lean_ctor_get(v___x_3780_, 2);
v_proofInstInfoFVar_3785_ = lean_ctor_get(v___x_3780_, 3);
v_inferType_3786_ = lean_ctor_get(v___x_3780_, 4);
v_getLevel_3787_ = lean_ctor_get(v___x_3780_, 5);
v_congrInfo_3788_ = lean_ctor_get(v___x_3780_, 6);
v_congrInfoFixedUDec_3789_ = lean_ctor_get(v___x_3780_, 7);
v_defEqI_3790_ = lean_ctor_get(v___x_3780_, 8);
v_extensions_3791_ = lean_ctor_get(v___x_3780_, 9);
v_issues_3792_ = lean_ctor_get(v___x_3780_, 10);
v_instanceOverrides_3793_ = lean_ctor_get(v___x_3780_, 12);
v_debug_3794_ = lean_ctor_get_uint8(v___x_3780_, sizeof(void*)*13);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3780_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3796_ = v___x_3780_;
v_isShared_3797_ = v_isSharedCheck_3815_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_instanceOverrides_3793_);
lean_inc(v_canon_3781_);
lean_inc(v_issues_3792_);
lean_inc(v_extensions_3791_);
lean_inc(v_defEqI_3790_);
lean_inc(v_congrInfoFixedUDec_3789_);
lean_inc(v_congrInfo_3788_);
lean_inc(v_getLevel_3787_);
lean_inc(v_inferType_3786_);
lean_inc(v_proofInstInfoFVar_3785_);
lean_inc(v_proofInstInfo_3784_);
lean_inc(v_maxFVar_3783_);
lean_inc(v_share_3782_);
lean_dec(v___x_3780_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3815_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v_cache_3798_; lean_object* v_cacheInType_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3814_; 
v_cache_3798_ = lean_ctor_get(v_canon_3781_, 0);
v_cacheInType_3799_ = lean_ctor_get(v_canon_3781_, 1);
v_isSharedCheck_3814_ = !lean_is_exclusive(v_canon_3781_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3801_ = v_canon_3781_;
v_isShared_3802_ = v_isSharedCheck_3814_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_cacheInType_3799_);
lean_inc(v_cache_3798_);
lean_dec(v_canon_3781_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3814_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3803_; lean_object* v___x_3805_; 
lean_inc(v_a_3776_);
v___x_3803_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3798_, v_e_3428_, v_a_3776_);
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3803_);
v___x_3805_ = v___x_3801_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3803_);
lean_ctor_set(v_reuseFailAlloc_3813_, 1, v_cacheInType_3799_);
v___x_3805_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
lean_object* v___x_3807_; 
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 11, v___x_3805_);
v___x_3807_ = v___x_3796_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_share_3782_);
lean_ctor_set(v_reuseFailAlloc_3812_, 1, v_maxFVar_3783_);
lean_ctor_set(v_reuseFailAlloc_3812_, 2, v_proofInstInfo_3784_);
lean_ctor_set(v_reuseFailAlloc_3812_, 3, v_proofInstInfoFVar_3785_);
lean_ctor_set(v_reuseFailAlloc_3812_, 4, v_inferType_3786_);
lean_ctor_set(v_reuseFailAlloc_3812_, 5, v_getLevel_3787_);
lean_ctor_set(v_reuseFailAlloc_3812_, 6, v_congrInfo_3788_);
lean_ctor_set(v_reuseFailAlloc_3812_, 7, v_congrInfoFixedUDec_3789_);
lean_ctor_set(v_reuseFailAlloc_3812_, 8, v_defEqI_3790_);
lean_ctor_set(v_reuseFailAlloc_3812_, 9, v_extensions_3791_);
lean_ctor_set(v_reuseFailAlloc_3812_, 10, v_issues_3792_);
lean_ctor_set(v_reuseFailAlloc_3812_, 11, v___x_3805_);
lean_ctor_set(v_reuseFailAlloc_3812_, 12, v_instanceOverrides_3793_);
lean_ctor_set_uint8(v_reuseFailAlloc_3812_, sizeof(void*)*13, v_debug_3794_);
v___x_3807_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; lean_object* v___x_3810_; 
v___x_3808_ = lean_st_ref_put(v_a_3431_, v___x_3807_);
if (v_isShared_3779_ == 0)
{
v___x_3810_ = v___x_3778_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v_a_3776_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 2);
return v___x_3775_;
}
}
}
else
{
lean_object* v___x_3817_; lean_object* v_canon_3818_; lean_object* v_cacheInType_3819_; lean_object* v___x_3820_; 
v___x_3817_ = lean_st_ref_get(v_a_3431_);
v_canon_3818_ = lean_ctor_get(v___x_3817_, 11);
lean_inc_ref(v_canon_3818_);
lean_dec(v___x_3817_);
v_cacheInType_3819_ = lean_ctor_get(v_canon_3818_, 1);
lean_inc_ref(v_cacheInType_3819_);
lean_dec_ref(v_canon_3818_);
v___x_3820_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3819_, v_e_3428_);
lean_dec_ref(v_cacheInType_3819_);
if (lean_obj_tag(v___x_3820_) == 1)
{
lean_object* v_val_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_dec_ref_known(v_e_3428_, 2);
v_val_3821_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3820_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_val_3821_);
lean_dec(v___x_3820_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
lean_ctor_set_tag(v___x_3823_, 0);
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_val_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
else
{
lean_object* v___x_3829_; 
lean_dec(v___x_3820_);
lean_inc_ref(v_e_3428_);
v___x_3829_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v_a_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3870_; 
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3829_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3832_ = v___x_3829_;
v_isShared_3833_ = v_isSharedCheck_3870_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_a_3830_);
lean_dec(v___x_3829_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3870_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___x_3834_; lean_object* v_canon_3835_; lean_object* v_share_3836_; lean_object* v_maxFVar_3837_; lean_object* v_proofInstInfo_3838_; lean_object* v_proofInstInfoFVar_3839_; lean_object* v_inferType_3840_; lean_object* v_getLevel_3841_; lean_object* v_congrInfo_3842_; lean_object* v_congrInfoFixedUDec_3843_; lean_object* v_defEqI_3844_; lean_object* v_extensions_3845_; lean_object* v_issues_3846_; lean_object* v_instanceOverrides_3847_; uint8_t v_debug_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3869_; 
v___x_3834_ = lean_st_ref_take(v_a_3431_);
v_canon_3835_ = lean_ctor_get(v___x_3834_, 11);
v_share_3836_ = lean_ctor_get(v___x_3834_, 0);
v_maxFVar_3837_ = lean_ctor_get(v___x_3834_, 1);
v_proofInstInfo_3838_ = lean_ctor_get(v___x_3834_, 2);
v_proofInstInfoFVar_3839_ = lean_ctor_get(v___x_3834_, 3);
v_inferType_3840_ = lean_ctor_get(v___x_3834_, 4);
v_getLevel_3841_ = lean_ctor_get(v___x_3834_, 5);
v_congrInfo_3842_ = lean_ctor_get(v___x_3834_, 6);
v_congrInfoFixedUDec_3843_ = lean_ctor_get(v___x_3834_, 7);
v_defEqI_3844_ = lean_ctor_get(v___x_3834_, 8);
v_extensions_3845_ = lean_ctor_get(v___x_3834_, 9);
v_issues_3846_ = lean_ctor_get(v___x_3834_, 10);
v_instanceOverrides_3847_ = lean_ctor_get(v___x_3834_, 12);
v_debug_3848_ = lean_ctor_get_uint8(v___x_3834_, sizeof(void*)*13);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3850_ = v___x_3834_;
v_isShared_3851_ = v_isSharedCheck_3869_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_instanceOverrides_3847_);
lean_inc(v_canon_3835_);
lean_inc(v_issues_3846_);
lean_inc(v_extensions_3845_);
lean_inc(v_defEqI_3844_);
lean_inc(v_congrInfoFixedUDec_3843_);
lean_inc(v_congrInfo_3842_);
lean_inc(v_getLevel_3841_);
lean_inc(v_inferType_3840_);
lean_inc(v_proofInstInfoFVar_3839_);
lean_inc(v_proofInstInfo_3838_);
lean_inc(v_maxFVar_3837_);
lean_inc(v_share_3836_);
lean_dec(v___x_3834_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3869_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v_cache_3852_; lean_object* v_cacheInType_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3868_; 
v_cache_3852_ = lean_ctor_get(v_canon_3835_, 0);
v_cacheInType_3853_ = lean_ctor_get(v_canon_3835_, 1);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_canon_3835_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3855_ = v_canon_3835_;
v_isShared_3856_ = v_isSharedCheck_3868_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_cacheInType_3853_);
lean_inc(v_cache_3852_);
lean_dec(v_canon_3835_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3868_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3857_; lean_object* v___x_3859_; 
lean_inc(v_a_3830_);
v___x_3857_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3853_, v_e_3428_, v_a_3830_);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 1, v___x_3857_);
v___x_3859_ = v___x_3855_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v_cache_3852_);
lean_ctor_set(v_reuseFailAlloc_3867_, 1, v___x_3857_);
v___x_3859_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3861_; 
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 11, v___x_3859_);
v___x_3861_ = v___x_3850_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_share_3836_);
lean_ctor_set(v_reuseFailAlloc_3866_, 1, v_maxFVar_3837_);
lean_ctor_set(v_reuseFailAlloc_3866_, 2, v_proofInstInfo_3838_);
lean_ctor_set(v_reuseFailAlloc_3866_, 3, v_proofInstInfoFVar_3839_);
lean_ctor_set(v_reuseFailAlloc_3866_, 4, v_inferType_3840_);
lean_ctor_set(v_reuseFailAlloc_3866_, 5, v_getLevel_3841_);
lean_ctor_set(v_reuseFailAlloc_3866_, 6, v_congrInfo_3842_);
lean_ctor_set(v_reuseFailAlloc_3866_, 7, v_congrInfoFixedUDec_3843_);
lean_ctor_set(v_reuseFailAlloc_3866_, 8, v_defEqI_3844_);
lean_ctor_set(v_reuseFailAlloc_3866_, 9, v_extensions_3845_);
lean_ctor_set(v_reuseFailAlloc_3866_, 10, v_issues_3846_);
lean_ctor_set(v_reuseFailAlloc_3866_, 11, v___x_3859_);
lean_ctor_set(v_reuseFailAlloc_3866_, 12, v_instanceOverrides_3847_);
lean_ctor_set_uint8(v_reuseFailAlloc_3866_, sizeof(void*)*13, v_debug_3848_);
v___x_3861_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_object* v___x_3862_; lean_object* v___x_3864_; 
v___x_3862_ = lean_st_ref_put(v_a_3431_, v___x_3861_);
if (v_isShared_3833_ == 0)
{
v___x_3864_ = v___x_3832_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3830_);
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
}
else
{
lean_dec_ref_known(v_e_3428_, 2);
return v___x_3829_;
}
}
}
}
case 11:
{
if (v_a_3429_ == 0)
{
lean_object* v___x_3871_; lean_object* v_canon_3872_; lean_object* v_cache_3873_; lean_object* v___x_3874_; 
v___x_3871_ = lean_st_ref_get(v_a_3431_);
v_canon_3872_ = lean_ctor_get(v___x_3871_, 11);
lean_inc_ref(v_canon_3872_);
lean_dec(v___x_3871_);
v_cache_3873_ = lean_ctor_get(v_canon_3872_, 0);
lean_inc_ref(v_cache_3873_);
lean_dec_ref(v_canon_3872_);
v___x_3874_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3873_, v_e_3428_);
lean_dec_ref(v_cache_3873_);
if (lean_obj_tag(v___x_3874_) == 1)
{
lean_object* v_val_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
lean_dec_ref_known(v_e_3428_, 3);
v_val_3875_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3874_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_val_3875_);
lean_dec(v___x_3874_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
lean_ctor_set_tag(v___x_3877_, 0);
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_val_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
else
{
lean_object* v___x_3883_; 
lean_dec(v___x_3874_);
lean_inc_ref(v_e_3428_);
v___x_3883_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_object* v_a_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3924_; 
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3883_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3886_ = v___x_3883_;
v_isShared_3887_ = v_isSharedCheck_3924_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_a_3884_);
lean_dec(v___x_3883_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3924_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3888_; lean_object* v_canon_3889_; lean_object* v_share_3890_; lean_object* v_maxFVar_3891_; lean_object* v_proofInstInfo_3892_; lean_object* v_proofInstInfoFVar_3893_; lean_object* v_inferType_3894_; lean_object* v_getLevel_3895_; lean_object* v_congrInfo_3896_; lean_object* v_congrInfoFixedUDec_3897_; lean_object* v_defEqI_3898_; lean_object* v_extensions_3899_; lean_object* v_issues_3900_; lean_object* v_instanceOverrides_3901_; uint8_t v_debug_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3923_; 
v___x_3888_ = lean_st_ref_take(v_a_3431_);
v_canon_3889_ = lean_ctor_get(v___x_3888_, 11);
v_share_3890_ = lean_ctor_get(v___x_3888_, 0);
v_maxFVar_3891_ = lean_ctor_get(v___x_3888_, 1);
v_proofInstInfo_3892_ = lean_ctor_get(v___x_3888_, 2);
v_proofInstInfoFVar_3893_ = lean_ctor_get(v___x_3888_, 3);
v_inferType_3894_ = lean_ctor_get(v___x_3888_, 4);
v_getLevel_3895_ = lean_ctor_get(v___x_3888_, 5);
v_congrInfo_3896_ = lean_ctor_get(v___x_3888_, 6);
v_congrInfoFixedUDec_3897_ = lean_ctor_get(v___x_3888_, 7);
v_defEqI_3898_ = lean_ctor_get(v___x_3888_, 8);
v_extensions_3899_ = lean_ctor_get(v___x_3888_, 9);
v_issues_3900_ = lean_ctor_get(v___x_3888_, 10);
v_instanceOverrides_3901_ = lean_ctor_get(v___x_3888_, 12);
v_debug_3902_ = lean_ctor_get_uint8(v___x_3888_, sizeof(void*)*13);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3904_ = v___x_3888_;
v_isShared_3905_ = v_isSharedCheck_3923_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_instanceOverrides_3901_);
lean_inc(v_canon_3889_);
lean_inc(v_issues_3900_);
lean_inc(v_extensions_3899_);
lean_inc(v_defEqI_3898_);
lean_inc(v_congrInfoFixedUDec_3897_);
lean_inc(v_congrInfo_3896_);
lean_inc(v_getLevel_3895_);
lean_inc(v_inferType_3894_);
lean_inc(v_proofInstInfoFVar_3893_);
lean_inc(v_proofInstInfo_3892_);
lean_inc(v_maxFVar_3891_);
lean_inc(v_share_3890_);
lean_dec(v___x_3888_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3923_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v_cache_3906_; lean_object* v_cacheInType_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3922_; 
v_cache_3906_ = lean_ctor_get(v_canon_3889_, 0);
v_cacheInType_3907_ = lean_ctor_get(v_canon_3889_, 1);
v_isSharedCheck_3922_ = !lean_is_exclusive(v_canon_3889_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3909_ = v_canon_3889_;
v_isShared_3910_ = v_isSharedCheck_3922_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_cacheInType_3907_);
lean_inc(v_cache_3906_);
lean_dec(v_canon_3889_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3922_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3911_; lean_object* v___x_3913_; 
lean_inc(v_a_3884_);
v___x_3911_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3906_, v_e_3428_, v_a_3884_);
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 0, v___x_3911_);
v___x_3913_ = v___x_3909_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3921_; 
v_reuseFailAlloc_3921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3921_, 0, v___x_3911_);
lean_ctor_set(v_reuseFailAlloc_3921_, 1, v_cacheInType_3907_);
v___x_3913_ = v_reuseFailAlloc_3921_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
lean_object* v___x_3915_; 
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 11, v___x_3913_);
v___x_3915_ = v___x_3904_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_share_3890_);
lean_ctor_set(v_reuseFailAlloc_3920_, 1, v_maxFVar_3891_);
lean_ctor_set(v_reuseFailAlloc_3920_, 2, v_proofInstInfo_3892_);
lean_ctor_set(v_reuseFailAlloc_3920_, 3, v_proofInstInfoFVar_3893_);
lean_ctor_set(v_reuseFailAlloc_3920_, 4, v_inferType_3894_);
lean_ctor_set(v_reuseFailAlloc_3920_, 5, v_getLevel_3895_);
lean_ctor_set(v_reuseFailAlloc_3920_, 6, v_congrInfo_3896_);
lean_ctor_set(v_reuseFailAlloc_3920_, 7, v_congrInfoFixedUDec_3897_);
lean_ctor_set(v_reuseFailAlloc_3920_, 8, v_defEqI_3898_);
lean_ctor_set(v_reuseFailAlloc_3920_, 9, v_extensions_3899_);
lean_ctor_set(v_reuseFailAlloc_3920_, 10, v_issues_3900_);
lean_ctor_set(v_reuseFailAlloc_3920_, 11, v___x_3913_);
lean_ctor_set(v_reuseFailAlloc_3920_, 12, v_instanceOverrides_3901_);
lean_ctor_set_uint8(v_reuseFailAlloc_3920_, sizeof(void*)*13, v_debug_3902_);
v___x_3915_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
lean_object* v___x_3916_; lean_object* v___x_3918_; 
v___x_3916_ = lean_st_ref_put(v_a_3431_, v___x_3915_);
if (v_isShared_3887_ == 0)
{
v___x_3918_ = v___x_3886_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3884_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 3);
return v___x_3883_;
}
}
}
else
{
lean_object* v___x_3925_; lean_object* v_canon_3926_; lean_object* v_cacheInType_3927_; lean_object* v___x_3928_; 
v___x_3925_ = lean_st_ref_get(v_a_3431_);
v_canon_3926_ = lean_ctor_get(v___x_3925_, 11);
lean_inc_ref(v_canon_3926_);
lean_dec(v___x_3925_);
v_cacheInType_3927_ = lean_ctor_get(v_canon_3926_, 1);
lean_inc_ref(v_cacheInType_3927_);
lean_dec_ref(v_canon_3926_);
v___x_3928_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3927_, v_e_3428_);
lean_dec_ref(v_cacheInType_3927_);
if (lean_obj_tag(v___x_3928_) == 1)
{
lean_object* v_val_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3936_; 
lean_dec_ref_known(v_e_3428_, 3);
v_val_3929_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3931_ = v___x_3928_;
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_val_3929_);
lean_dec(v___x_3928_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
lean_ctor_set_tag(v___x_3931_, 0);
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_val_3929_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
else
{
lean_object* v___x_3937_; 
lean_dec(v___x_3928_);
lean_inc_ref(v_e_3428_);
v___x_3937_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v_a_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3978_; 
v_a_3938_ = lean_ctor_get(v___x_3937_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3940_ = v___x_3937_;
v_isShared_3941_ = v_isSharedCheck_3978_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_a_3938_);
lean_dec(v___x_3937_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3978_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3942_; lean_object* v_canon_3943_; lean_object* v_share_3944_; lean_object* v_maxFVar_3945_; lean_object* v_proofInstInfo_3946_; lean_object* v_proofInstInfoFVar_3947_; lean_object* v_inferType_3948_; lean_object* v_getLevel_3949_; lean_object* v_congrInfo_3950_; lean_object* v_congrInfoFixedUDec_3951_; lean_object* v_defEqI_3952_; lean_object* v_extensions_3953_; lean_object* v_issues_3954_; lean_object* v_instanceOverrides_3955_; uint8_t v_debug_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3977_; 
v___x_3942_ = lean_st_ref_take(v_a_3431_);
v_canon_3943_ = lean_ctor_get(v___x_3942_, 11);
v_share_3944_ = lean_ctor_get(v___x_3942_, 0);
v_maxFVar_3945_ = lean_ctor_get(v___x_3942_, 1);
v_proofInstInfo_3946_ = lean_ctor_get(v___x_3942_, 2);
v_proofInstInfoFVar_3947_ = lean_ctor_get(v___x_3942_, 3);
v_inferType_3948_ = lean_ctor_get(v___x_3942_, 4);
v_getLevel_3949_ = lean_ctor_get(v___x_3942_, 5);
v_congrInfo_3950_ = lean_ctor_get(v___x_3942_, 6);
v_congrInfoFixedUDec_3951_ = lean_ctor_get(v___x_3942_, 7);
v_defEqI_3952_ = lean_ctor_get(v___x_3942_, 8);
v_extensions_3953_ = lean_ctor_get(v___x_3942_, 9);
v_issues_3954_ = lean_ctor_get(v___x_3942_, 10);
v_instanceOverrides_3955_ = lean_ctor_get(v___x_3942_, 12);
v_debug_3956_ = lean_ctor_get_uint8(v___x_3942_, sizeof(void*)*13);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3942_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3958_ = v___x_3942_;
v_isShared_3959_ = v_isSharedCheck_3977_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_instanceOverrides_3955_);
lean_inc(v_canon_3943_);
lean_inc(v_issues_3954_);
lean_inc(v_extensions_3953_);
lean_inc(v_defEqI_3952_);
lean_inc(v_congrInfoFixedUDec_3951_);
lean_inc(v_congrInfo_3950_);
lean_inc(v_getLevel_3949_);
lean_inc(v_inferType_3948_);
lean_inc(v_proofInstInfoFVar_3947_);
lean_inc(v_proofInstInfo_3946_);
lean_inc(v_maxFVar_3945_);
lean_inc(v_share_3944_);
lean_dec(v___x_3942_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3977_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v_cache_3960_; lean_object* v_cacheInType_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3976_; 
v_cache_3960_ = lean_ctor_get(v_canon_3943_, 0);
v_cacheInType_3961_ = lean_ctor_get(v_canon_3943_, 1);
v_isSharedCheck_3976_ = !lean_is_exclusive(v_canon_3943_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3963_ = v_canon_3943_;
v_isShared_3964_ = v_isSharedCheck_3976_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_cacheInType_3961_);
lean_inc(v_cache_3960_);
lean_dec(v_canon_3943_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3976_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3965_; lean_object* v___x_3967_; 
lean_inc(v_a_3938_);
v___x_3965_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3961_, v_e_3428_, v_a_3938_);
if (v_isShared_3964_ == 0)
{
lean_ctor_set(v___x_3963_, 1, v___x_3965_);
v___x_3967_ = v___x_3963_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_cache_3960_);
lean_ctor_set(v_reuseFailAlloc_3975_, 1, v___x_3965_);
v___x_3967_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3969_; 
if (v_isShared_3959_ == 0)
{
lean_ctor_set(v___x_3958_, 11, v___x_3967_);
v___x_3969_ = v___x_3958_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_share_3944_);
lean_ctor_set(v_reuseFailAlloc_3974_, 1, v_maxFVar_3945_);
lean_ctor_set(v_reuseFailAlloc_3974_, 2, v_proofInstInfo_3946_);
lean_ctor_set(v_reuseFailAlloc_3974_, 3, v_proofInstInfoFVar_3947_);
lean_ctor_set(v_reuseFailAlloc_3974_, 4, v_inferType_3948_);
lean_ctor_set(v_reuseFailAlloc_3974_, 5, v_getLevel_3949_);
lean_ctor_set(v_reuseFailAlloc_3974_, 6, v_congrInfo_3950_);
lean_ctor_set(v_reuseFailAlloc_3974_, 7, v_congrInfoFixedUDec_3951_);
lean_ctor_set(v_reuseFailAlloc_3974_, 8, v_defEqI_3952_);
lean_ctor_set(v_reuseFailAlloc_3974_, 9, v_extensions_3953_);
lean_ctor_set(v_reuseFailAlloc_3974_, 10, v_issues_3954_);
lean_ctor_set(v_reuseFailAlloc_3974_, 11, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3974_, 12, v_instanceOverrides_3955_);
lean_ctor_set_uint8(v_reuseFailAlloc_3974_, sizeof(void*)*13, v_debug_3956_);
v___x_3969_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3972_; 
v___x_3970_ = lean_st_ref_put(v_a_3431_, v___x_3969_);
if (v_isShared_3941_ == 0)
{
v___x_3972_ = v___x_3940_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3938_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 3);
return v___x_3937_;
}
}
}
}
case 10:
{
lean_object* v_data_3979_; lean_object* v_expr_3980_; lean_object* v___x_3981_; 
v_data_3979_ = lean_ctor_get(v_e_3428_, 0);
v_expr_3980_ = lean_ctor_get(v_e_3428_, 1);
lean_inc_ref(v_expr_3980_);
v___x_3981_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_expr_3980_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3996_; 
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3984_ = v___x_3981_;
v_isShared_3985_ = v_isSharedCheck_3996_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3981_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3996_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
size_t v___x_3986_; size_t v___x_3987_; uint8_t v___x_3988_; 
v___x_3986_ = lean_ptr_addr(v_expr_3980_);
v___x_3987_ = lean_ptr_addr(v_a_3982_);
v___x_3988_ = lean_usize_dec_eq(v___x_3986_, v___x_3987_);
if (v___x_3988_ == 0)
{
lean_object* v___x_3989_; lean_object* v___x_3991_; 
lean_inc(v_data_3979_);
lean_dec_ref_known(v_e_3428_, 2);
v___x_3989_ = l_Lean_Expr_mdata___override(v_data_3979_, v_a_3982_);
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 0, v___x_3989_);
v___x_3991_ = v___x_3984_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3989_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
else
{
lean_object* v___x_3994_; 
lean_dec(v_a_3982_);
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 0, v_e_3428_);
v___x_3994_ = v___x_3984_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_e_3428_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3428_, 2);
return v___x_3981_;
}
}
default: 
{
lean_object* v___x_3997_; 
v___x_3997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3997_, 0, v_e_3428_);
return v___x_3997_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(lean_object* v_e_3998_, uint8_t v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_){
_start:
{
if (v_a_3999_ == 0)
{
uint8_t v___x_4007_; lean_object* v___x_4008_; 
v___x_4007_ = 1;
lean_inc_ref(v_e_3998_);
v___x_4008_ = l_Lean_Meta_isProp(v_e_3998_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_);
if (lean_obj_tag(v___x_4008_) == 0)
{
lean_object* v_a_4009_; uint8_t v___x_4010_; 
v_a_4009_ = lean_ctor_get(v___x_4008_, 0);
lean_inc(v_a_4009_);
lean_dec_ref_known(v___x_4008_, 1);
v___x_4010_ = lean_unbox(v_a_4009_);
lean_dec(v_a_4009_);
if (v___x_4010_ == 0)
{
lean_object* v___x_4011_; 
v___x_4011_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3998_, v___x_4007_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_);
return v___x_4011_;
}
else
{
lean_object* v___x_4012_; 
v___x_4012_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3998_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_);
return v___x_4012_;
}
}
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
lean_dec_ref(v_e_3998_);
v_a_4013_ = lean_ctor_get(v___x_4008_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___x_4008_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4008_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4019_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
return v___x_4018_;
}
}
}
}
else
{
lean_object* v___x_4021_; 
v___x_4021_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3998_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_);
return v___x_4021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(lean_object* v_fvars_4022_, lean_object* v_e_4023_, uint8_t v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_){
_start:
{
if (lean_obj_tag(v_e_4023_) == 7)
{
lean_object* v_binderName_4032_; lean_object* v_binderType_4033_; lean_object* v_body_4034_; uint8_t v_binderInfo_4035_; lean_object* v___f_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v_binderName_4032_ = lean_ctor_get(v_e_4023_, 0);
lean_inc(v_binderName_4032_);
v_binderType_4033_ = lean_ctor_get(v_e_4023_, 1);
lean_inc_ref(v_binderType_4033_);
v_body_4034_ = lean_ctor_get(v_e_4023_, 2);
lean_inc_ref(v_body_4034_);
v_binderInfo_4035_ = lean_ctor_get_uint8(v_e_4023_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4023_, 3);
lean_inc_ref(v_fvars_4022_);
v___f_4036_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed), 11, 2);
lean_closure_set(v___f_4036_, 0, v_fvars_4022_);
lean_closure_set(v___f_4036_, 1, v_body_4034_);
v___x_4037_ = lean_expr_instantiate_rev(v_binderType_4033_, v_fvars_4022_);
lean_dec_ref(v_fvars_4022_);
lean_dec_ref(v_binderType_4033_);
v___x_4038_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_4037_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; uint8_t v___x_4040_; lean_object* v___x_4041_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4039_);
lean_dec_ref_known(v___x_4038_, 1);
v___x_4040_ = 0;
v___x_4041_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg(v_binderName_4032_, v_binderInfo_4035_, v_a_4039_, v___f_4036_, v___x_4040_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_);
return v___x_4041_;
}
else
{
lean_dec_ref(v___f_4036_);
lean_dec(v_binderName_4032_);
return v___x_4038_;
}
}
else
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4042_ = lean_expr_instantiate_rev(v_e_4023_, v_fvars_4022_);
lean_dec_ref(v_e_4023_);
v___x_4043_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_4042_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_);
if (lean_obj_tag(v___x_4043_) == 0)
{
lean_object* v_a_4044_; uint8_t v___x_4045_; uint8_t v___x_4046_; uint8_t v___x_4047_; lean_object* v___x_4048_; 
v_a_4044_ = lean_ctor_get(v___x_4043_, 0);
lean_inc(v_a_4044_);
lean_dec_ref_known(v___x_4043_, 1);
v___x_4045_ = 0;
v___x_4046_ = 1;
v___x_4047_ = 1;
v___x_4048_ = l_Lean_Meta_mkForallFVars(v_fvars_4022_, v_a_4044_, v___x_4045_, v___x_4046_, v___x_4046_, v___x_4047_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_);
lean_dec_ref(v_fvars_4022_);
return v___x_4048_;
}
else
{
lean_dec_ref(v_fvars_4022_);
return v___x_4043_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(lean_object* v_fvars_4049_, lean_object* v_body_4050_, lean_object* v_x_4051_, uint8_t v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_){
_start:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4060_ = lean_array_push(v_fvars_4049_, v_x_4051_);
v___x_4061_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_4060_, v_body_4050_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
return v___x_4061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost___boxed(lean_object* v_e_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_, lean_object* v_a_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_){
_start:
{
uint8_t v_a_boxed_4071_; lean_object* v_res_4072_; 
v_a_boxed_4071_ = lean_unbox(v_a_4063_);
v_res_4072_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_4062_, v_a_boxed_4071_, v_a_4064_, v_a_4065_, v_a_4066_, v_a_4067_, v_a_4068_, v_a_4069_);
lean_dec(v_a_4069_);
lean_dec_ref(v_a_4068_);
lean_dec(v_a_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_a_4065_);
lean_dec_ref(v_a_4064_);
return v_res_4072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27___boxed(lean_object* v_e_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_){
_start:
{
uint8_t v_a_boxed_4082_; lean_object* v_res_4083_; 
v_a_boxed_4082_ = lean_unbox(v_a_4074_);
v_res_4083_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v_e_4073_, v_a_boxed_4082_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
lean_dec(v_a_4080_);
lean_dec_ref(v_a_4079_);
lean_dec(v_a_4078_);
lean_dec_ref(v_a_4077_);
lean_dec(v_a_4076_);
lean_dec_ref(v_a_4075_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault___boxed(lean_object* v_e_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_){
_start:
{
uint8_t v_a_boxed_4093_; lean_object* v_res_4094_; 
v_a_boxed_4093_ = lean_unbox(v_a_4085_);
v_res_4094_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_4084_, v_a_boxed_4093_, v_a_4086_, v_a_4087_, v_a_4088_, v_a_4089_, v_a_4090_, v_a_4091_);
lean_dec(v_a_4091_);
lean_dec_ref(v_a_4090_);
lean_dec(v_a_4089_);
lean_dec_ref(v_a_4088_);
lean_dec(v_a_4087_);
lean_dec_ref(v_a_4086_);
return v_res_4094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___boxed(lean_object* v_ofNat_4095_, lean_object* v_00_u03b1_4096_, lean_object* v_n_4097_, lean_object* v_inst_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_){
_start:
{
uint8_t v_a_boxed_4107_; lean_object* v_res_4108_; 
v_a_boxed_4107_ = lean_unbox(v_a_4099_);
v_res_4108_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(v_ofNat_4095_, v_00_u03b1_4096_, v_n_4097_, v_inst_4098_, v_a_boxed_4107_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
lean_dec(v_a_4103_);
lean_dec_ref(v_a_4102_);
lean_dec(v_a_4101_);
lean_dec_ref(v_a_4100_);
lean_dec_ref(v_ofNat_4095_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___boxed(lean_object* v_e_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_){
_start:
{
uint8_t v_a_boxed_4118_; lean_object* v_res_4119_; 
v_a_boxed_4118_ = lean_unbox(v_a_4110_);
v_res_4119_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_4109_, v_a_boxed_4118_, v_a_4111_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_, v_a_4116_);
lean_dec(v_a_4116_);
lean_dec_ref(v_a_4115_);
lean_dec(v_a_4114_);
lean_dec_ref(v_a_4113_);
lean_dec(v_a_4112_);
lean_dec_ref(v_a_4111_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType___boxed(lean_object* v_e_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_){
_start:
{
uint8_t v_a_boxed_4129_; lean_object* v_res_4130_; 
v_a_boxed_4129_ = lean_unbox(v_a_4121_);
v_res_4130_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_e_4120_, v_a_boxed_4129_, v_a_4122_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_, v_a_4127_);
lean_dec(v_a_4127_);
lean_dec_ref(v_a_4126_);
lean_dec(v_a_4125_);
lean_dec_ref(v_a_4124_);
lean_dec(v_a_4123_);
lean_dec_ref(v_a_4122_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___boxed(lean_object* v_fvars_4131_, lean_object* v_e_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_){
_start:
{
uint8_t v_a_boxed_4141_; lean_object* v_res_4142_; 
v_a_boxed_4141_ = lean_unbox(v_a_4133_);
v_res_4142_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v_fvars_4131_, v_e_4132_, v_a_boxed_4141_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
lean_dec(v_a_4139_);
lean_dec_ref(v_a_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_a_4136_);
lean_dec(v_a_4135_);
lean_dec_ref(v_a_4134_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___boxed(lean_object* v_fvars_4143_, lean_object* v_e_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_){
_start:
{
uint8_t v_a_boxed_4153_; lean_object* v_res_4154_; 
v_a_boxed_4153_ = lean_unbox(v_a_4145_);
v_res_4154_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v_fvars_4143_, v_e_4144_, v_a_boxed_4153_, v_a_4146_, v_a_4147_, v_a_4148_, v_a_4149_, v_a_4150_, v_a_4151_);
lean_dec(v_a_4151_);
lean_dec_ref(v_a_4150_);
lean_dec(v_a_4149_);
lean_dec_ref(v_a_4148_);
lean_dec(v_a_4147_);
lean_dec_ref(v_a_4146_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27___boxed(lean_object* v_e_4155_, lean_object* v_report_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_){
_start:
{
uint8_t v_report_boxed_4165_; uint8_t v_a_boxed_4166_; lean_object* v_res_4167_; 
v_report_boxed_4165_ = lean_unbox(v_report_4156_);
v_a_boxed_4166_ = lean_unbox(v_a_4157_);
v_res_4167_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_4155_, v_report_boxed_4165_, v_a_boxed_4166_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_);
lean_dec(v_a_4163_);
lean_dec_ref(v_a_4162_);
lean_dec(v_a_4161_);
lean_dec_ref(v_a_4160_);
lean_dec(v_a_4159_);
lean_dec_ref(v_a_4158_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch___boxed(lean_object* v_e_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_){
_start:
{
uint8_t v_a_boxed_4177_; lean_object* v_res_4178_; 
v_a_boxed_4177_ = lean_unbox(v_a_4169_);
v_res_4178_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(v_e_4168_, v_a_boxed_4177_, v_a_4170_, v_a_4171_, v_a_4172_, v_a_4173_, v_a_4174_, v_a_4175_);
lean_dec(v_a_4175_);
lean_dec_ref(v_a_4174_);
lean_dec(v_a_4173_);
lean_dec_ref(v_a_4172_);
lean_dec(v_a_4171_);
lean_dec_ref(v_a_4170_);
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___boxed(lean_object* v_fvars_4179_, lean_object* v_e_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_){
_start:
{
uint8_t v_a_boxed_4189_; lean_object* v_res_4190_; 
v_a_boxed_4189_ = lean_unbox(v_a_4181_);
v_res_4190_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v_fvars_4179_, v_e_4180_, v_a_boxed_4189_, v_a_4182_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_, v_a_4187_);
lean_dec(v_a_4187_);
lean_dec_ref(v_a_4186_);
lean_dec(v_a_4185_);
lean_dec_ref(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec_ref(v_a_4182_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond___boxed(lean_object* v_f_4191_, lean_object* v_00_u03b1_4192_, lean_object* v_c_4193_, lean_object* v_a_4194_, lean_object* v_b_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_, lean_object* v_a_4203_){
_start:
{
uint8_t v_a_boxed_4204_; lean_object* v_res_4205_; 
v_a_boxed_4204_ = lean_unbox(v_a_4196_);
v_res_4205_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(v_f_4191_, v_00_u03b1_4192_, v_c_4193_, v_a_4194_, v_b_4195_, v_a_boxed_4204_, v_a_4197_, v_a_4198_, v_a_4199_, v_a_4200_, v_a_4201_, v_a_4202_);
lean_dec(v_a_4202_);
lean_dec_ref(v_a_4201_);
lean_dec(v_a_4200_);
lean_dec_ref(v_a_4199_);
lean_dec(v_a_4198_);
lean_dec_ref(v_a_4197_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte___boxed(lean_object* v_f_4206_, lean_object* v_00_u03b1_4207_, lean_object* v_c_4208_, lean_object* v_inst_4209_, lean_object* v_a_4210_, lean_object* v_b_4211_, lean_object* v_a_4212_, lean_object* v_a_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_){
_start:
{
uint8_t v_a_boxed_4220_; lean_object* v_res_4221_; 
v_a_boxed_4220_ = lean_unbox(v_a_4212_);
v_res_4221_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v_f_4206_, v_00_u03b1_4207_, v_c_4208_, v_inst_4209_, v_a_4210_, v_b_4211_, v_a_boxed_4220_, v_a_4213_, v_a_4214_, v_a_4215_, v_a_4216_, v_a_4217_, v_a_4218_);
lean_dec(v_a_4218_);
lean_dec_ref(v_a_4217_);
lean_dec(v_a_4216_);
lean_dec_ref(v_a_4215_);
lean_dec(v_a_4214_);
lean_dec_ref(v_a_4213_);
return v_res_4221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___boxed(lean_object* v_e_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_){
_start:
{
uint8_t v_a_boxed_4231_; lean_object* v_res_4232_; 
v_a_boxed_4231_ = lean_unbox(v_a_4223_);
v_res_4232_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_4222_, v_a_boxed_4231_, v_a_4224_, v_a_4225_, v_a_4226_, v_a_4227_, v_a_4228_, v_a_4229_);
lean_dec(v_a_4229_);
lean_dec_ref(v_a_4228_);
lean_dec(v_a_4227_);
lean_dec_ref(v_a_4226_);
lean_dec(v_a_4225_);
lean_dec_ref(v_a_4224_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27___boxed(lean_object* v_g_4233_, lean_object* v_prop_4234_, lean_object* v_inst_4235_, lean_object* v_e_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_, lean_object* v_a_4244_){
_start:
{
uint8_t v_a_boxed_4245_; lean_object* v_res_4246_; 
v_a_boxed_4245_ = lean_unbox(v_a_4237_);
v_res_4246_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec_x27(v_g_4233_, v_prop_4234_, v_inst_4235_, v_e_4236_, v_a_boxed_4245_, v_a_4238_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
lean_dec(v_a_4243_);
lean_dec_ref(v_a_4242_);
lean_dec(v_a_4241_);
lean_dec_ref(v_a_4240_);
lean_dec(v_a_4239_);
lean_dec_ref(v_a_4238_);
return v_res_4246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___boxed(lean_object* v_e_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_, lean_object* v_a_4251_, lean_object* v_a_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_){
_start:
{
uint8_t v_a_boxed_4256_; lean_object* v_res_4257_; 
v_a_boxed_4256_ = lean_unbox(v_a_4248_);
v_res_4257_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(v_e_4247_, v_a_boxed_4256_, v_a_4249_, v_a_4250_, v_a_4251_, v_a_4252_, v_a_4253_, v_a_4254_);
lean_dec(v_a_4254_);
lean_dec_ref(v_a_4253_);
lean_dec(v_a_4252_);
lean_dec_ref(v_a_4251_);
lean_dec(v_a_4250_);
lean_dec_ref(v_a_4249_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___boxed(lean_object* v_g_4258_, lean_object* v_prop_4259_, lean_object* v_inst_4260_, lean_object* v_e_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_){
_start:
{
uint8_t v_a_boxed_4270_; lean_object* v_res_4271_; 
v_a_boxed_4270_ = lean_unbox(v_a_4262_);
v_res_4271_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_4258_, v_prop_4259_, v_inst_4260_, v_e_4261_, v_a_boxed_4270_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_);
lean_dec(v_a_4268_);
lean_dec_ref(v_a_4267_);
lean_dec(v_a_4266_);
lean_dec_ref(v_a_4265_);
lean_dec(v_a_4264_);
lean_dec_ref(v_a_4263_);
return v_res_4271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst___boxed(lean_object* v_e_4272_, lean_object* v_report_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_){
_start:
{
uint8_t v_report_boxed_4282_; uint8_t v_a_boxed_4283_; lean_object* v_res_4284_; 
v_report_boxed_4282_ = lean_unbox(v_report_4273_);
v_a_boxed_4283_ = lean_unbox(v_a_4274_);
v_res_4284_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v_e_4272_, v_report_boxed_4282_, v_a_boxed_4283_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_);
lean_dec(v_a_4280_);
lean_dec_ref(v_a_4279_);
lean_dec(v_a_4278_);
lean_dec_ref(v_a_4277_);
lean_dec(v_a_4276_);
lean_dec_ref(v_a_4275_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec___boxed(lean_object* v_g_4285_, lean_object* v_prop_4286_, lean_object* v_h_4287_, lean_object* v_e_4288_, lean_object* v_a_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
uint8_t v_a_boxed_4297_; lean_object* v_res_4298_; 
v_a_boxed_4297_ = lean_unbox(v_a_4289_);
v_res_4298_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v_g_4285_, v_prop_4286_, v_h_4287_, v_e_4288_, v_a_boxed_4297_, v_a_4290_, v_a_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v_a_4294_);
lean_dec(v_a_4293_);
lean_dec_ref(v_a_4292_);
lean_dec(v_a_4291_);
lean_dec_ref(v_a_4290_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec___boxed(lean_object* v_g_4299_, lean_object* v_prop_4300_, lean_object* v_h_4301_, lean_object* v_e_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_){
_start:
{
uint8_t v_a_boxed_4311_; lean_object* v_res_4312_; 
v_a_boxed_4311_ = lean_unbox(v_a_4303_);
v_res_4312_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstUDec(v_g_4299_, v_prop_4300_, v_h_4301_, v_e_4302_, v_a_boxed_4311_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_, v_a_4308_, v_a_4309_);
lean_dec(v_a_4309_);
lean_dec_ref(v_a_4308_);
lean_dec(v_a_4307_);
lean_dec_ref(v_a_4306_);
lean_dec(v_a_4305_);
lean_dec_ref(v_a_4304_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___boxed(lean_object* v_e_4313_, lean_object* v_type_4314_, lean_object* v_report_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_){
_start:
{
uint8_t v_report_boxed_4324_; uint8_t v_a_boxed_4325_; lean_object* v_res_4326_; 
v_report_boxed_4324_ = lean_unbox(v_report_4315_);
v_a_boxed_4325_ = lean_unbox(v_a_4316_);
v_res_4326_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_e_4313_, v_type_4314_, v_report_boxed_4324_, v_a_boxed_4325_, v_a_4317_, v_a_4318_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_);
lean_dec(v_a_4322_);
lean_dec_ref(v_a_4321_);
lean_dec(v_a_4320_);
lean_dec_ref(v_a_4319_);
lean_dec(v_a_4318_);
lean_dec_ref(v_a_4317_);
return v_res_4326_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___boxed(lean_object* v_upperBound_4327_, lean_object* v___x_4328_, lean_object* v_f_4329_, lean_object* v___x_4330_, lean_object* v_a_4331_, lean_object* v_b_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
uint8_t v___y_71749__boxed_4341_; lean_object* v_res_4342_; 
v___y_71749__boxed_4341_ = lean_unbox(v___y_4333_);
v_res_4342_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v_upperBound_4327_, v___x_4328_, v_f_4329_, v___x_4330_, v_a_4331_, v_b_4332_, v___y_71749__boxed_4341_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec(v___y_4337_);
lean_dec_ref(v___y_4336_);
lean_dec(v___y_4335_);
lean_dec_ref(v___y_4334_);
lean_dec_ref(v___x_4330_);
lean_dec_ref(v_f_4329_);
lean_dec(v___x_4328_);
lean_dec(v_upperBound_4327_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp___boxed(lean_object* v_g_4343_, lean_object* v_prop_4344_, lean_object* v_h_4345_, lean_object* v_e_4346_, lean_object* v_a_4347_, lean_object* v_a_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_){
_start:
{
uint8_t v_a_boxed_4355_; lean_object* v_res_4356_; 
v_a_boxed_4355_ = lean_unbox(v_a_4347_);
v_res_4356_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(v_g_4343_, v_prop_4344_, v_h_4345_, v_e_4346_, v_a_boxed_4355_, v_a_4348_, v_a_4349_, v_a_4350_, v_a_4351_, v_a_4352_, v_a_4353_);
lean_dec(v_a_4353_);
lean_dec_ref(v_a_4352_);
lean_dec(v_a_4351_);
lean_dec_ref(v_a_4350_);
lean_dec(v_a_4349_);
lean_dec_ref(v_a_4348_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___boxed(lean_object* v_e_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_){
_start:
{
uint8_t v_a_boxed_4366_; lean_object* v_res_4367_; 
v_a_boxed_4366_ = lean_unbox(v_a_4358_);
v_res_4367_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_4357_, v_a_boxed_4366_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
lean_dec(v_a_4364_);
lean_dec_ref(v_a_4363_);
lean_dec(v_a_4362_);
lean_dec_ref(v_a_4361_);
lean_dec(v_a_4360_);
lean_dec_ref(v_a_4359_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce___boxed(lean_object* v_e_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_){
_start:
{
uint8_t v_a_boxed_4377_; lean_object* v_res_4378_; 
v_a_boxed_4377_ = lean_unbox(v_a_4369_);
v_res_4378_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(v_e_4368_, v_a_boxed_4377_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_, v_a_4375_);
lean_dec(v_a_4375_);
lean_dec_ref(v_a_4374_);
lean_dec(v_a_4373_);
lean_dec_ref(v_a_4372_);
lean_dec(v_a_4371_);
lean_dec_ref(v_a_4370_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___boxed(lean_object* v_e_4379_, lean_object* v_x_4380_, lean_object* v_x_4381_, lean_object* v_x_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_){
_start:
{
uint8_t v___y_71995__boxed_4391_; lean_object* v_res_4392_; 
v___y_71995__boxed_4391_ = lean_unbox(v___y_4383_);
v_res_4392_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(v_e_4379_, v_x_4380_, v_x_4381_, v_x_4382_, v___y_71995__boxed_4391_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
lean_dec(v___y_4389_);
lean_dec_ref(v___y_4388_);
lean_dec(v___y_4387_);
lean_dec_ref(v___y_4386_);
lean_dec(v___y_4385_);
lean_dec_ref(v___y_4384_);
return v_res_4392_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_4393_ = _args[0];
lean_object* v_snd_4394_ = _args[1];
lean_object* v_a_4395_ = _args[2];
lean_object* v___x_4396_ = _args[3];
lean_object* v_fst_4397_ = _args[4];
lean_object* v_f_4398_ = _args[5];
lean_object* v___x_4399_ = _args[6];
lean_object* v___x_4400_ = _args[7];
lean_object* v___x_4401_ = _args[8];
lean_object* v_____r_4402_ = _args[9];
lean_object* v___y_4403_ = _args[10];
lean_object* v___y_4404_ = _args[11];
lean_object* v___y_4405_ = _args[12];
lean_object* v___y_4406_ = _args[13];
lean_object* v___y_4407_ = _args[14];
lean_object* v___y_4408_ = _args[15];
lean_object* v___y_4409_ = _args[16];
lean_object* v___y_4410_ = _args[17];
_start:
{
uint8_t v___x_72095__boxed_4411_; uint8_t v___y_72100__boxed_4412_; lean_object* v_res_4413_; 
v___x_72095__boxed_4411_ = lean_unbox(v___x_4396_);
v___y_72100__boxed_4412_ = lean_unbox(v___y_4403_);
v_res_4413_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_4393_, v_snd_4394_, v_a_4395_, v___x_72095__boxed_4411_, v_fst_4397_, v_f_4398_, v___x_4399_, v___x_4400_, v___x_4401_, v_____r_4402_, v___y_72100__boxed_4412_, v___y_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_);
lean_dec(v___y_4409_);
lean_dec_ref(v___y_4408_);
lean_dec(v___y_4407_);
lean_dec_ref(v___y_4406_);
lean_dec(v___y_4405_);
lean_dec_ref(v___y_4404_);
lean_dec_ref(v___x_4401_);
lean_dec_ref(v___x_4400_);
lean_dec(v___x_4399_);
lean_dec_ref(v_f_4398_);
lean_dec(v_a_4395_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon___boxed(lean_object* v_e_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_, lean_object* v_a_4418_, lean_object* v_a_4419_, lean_object* v_a_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_){
_start:
{
uint8_t v_a_boxed_4423_; lean_object* v_res_4424_; 
v_a_boxed_4423_ = lean_unbox(v_a_4415_);
v_res_4424_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4414_, v_a_boxed_4423_, v_a_4416_, v_a_4417_, v_a_4418_, v_a_4419_, v_a_4420_, v_a_4421_);
lean_dec(v_a_4421_);
lean_dec_ref(v_a_4420_);
lean_dec(v_a_4419_);
lean_dec_ref(v_a_4418_);
lean_dec(v_a_4417_);
lean_dec_ref(v_a_4416_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(lean_object* v_declName_4425_, uint8_t v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_){
_start:
{
lean_object* v___x_4434_; 
v___x_4434_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_4425_, v___y_4432_);
return v___x_4434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___boxed(lean_object* v_declName_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
uint8_t v___y_75063__boxed_4444_; lean_object* v_res_4445_; 
v___y_75063__boxed_4444_ = lean_unbox(v___y_4436_);
v_res_4445_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(v_declName_4435_, v___y_75063__boxed_4444_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
lean_dec(v___y_4438_);
lean_dec_ref(v___y_4437_);
return v_res_4445_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(lean_object* v_declName_4446_, uint8_t v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_){
_start:
{
lean_object* v___x_4455_; 
v___x_4455_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_4446_, v___y_4453_);
return v___x_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___boxed(lean_object* v_declName_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
uint8_t v___y_75089__boxed_4465_; lean_object* v_res_4466_; 
v___y_75089__boxed_4465_ = lean_unbox(v___y_4457_);
v_res_4466_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(v_declName_4456_, v___y_75089__boxed_4465_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec(v___y_4459_);
lean_dec_ref(v___y_4458_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29(lean_object* v_00_u03b1_4467_, lean_object* v_name_4468_, lean_object* v_type_4469_, lean_object* v_val_4470_, lean_object* v_k_4471_, uint8_t v_nondep_4472_, uint8_t v_kind_4473_, uint8_t v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v___x_4482_; 
v___x_4482_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___redArg(v_name_4468_, v_type_4469_, v_val_4470_, v_k_4471_, v_nondep_4472_, v_kind_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29___boxed(lean_object* v_00_u03b1_4483_, lean_object* v_name_4484_, lean_object* v_type_4485_, lean_object* v_val_4486_, lean_object* v_k_4487_, lean_object* v_nondep_4488_, lean_object* v_kind_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
uint8_t v_nondep_boxed_4498_; uint8_t v_kind_boxed_4499_; uint8_t v___y_75115__boxed_4500_; lean_object* v_res_4501_; 
v_nondep_boxed_4498_ = lean_unbox(v_nondep_4488_);
v_kind_boxed_4499_ = lean_unbox(v_kind_4489_);
v___y_75115__boxed_4500_ = lean_unbox(v___y_4490_);
v_res_4501_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__29(v_00_u03b1_4483_, v_name_4484_, v_type_4485_, v_val_4486_, v_k_4487_, v_nondep_boxed_4498_, v_kind_boxed_4499_, v___y_75115__boxed_4500_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_);
lean_dec(v___y_4496_);
lean_dec_ref(v___y_4495_);
lean_dec(v___y_4494_);
lean_dec_ref(v___y_4493_);
lean_dec(v___y_4492_);
lean_dec_ref(v___y_4491_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32(lean_object* v_00_u03b1_4502_, lean_object* v_name_4503_, uint8_t v_bi_4504_, lean_object* v_type_4505_, lean_object* v_k_4506_, uint8_t v_kind_4507_, uint8_t v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_){
_start:
{
lean_object* v___x_4516_; 
v___x_4516_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___redArg(v_name_4503_, v_bi_4504_, v_type_4505_, v_k_4506_, v_kind_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_);
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32___boxed(lean_object* v_00_u03b1_4517_, lean_object* v_name_4518_, lean_object* v_bi_4519_, lean_object* v_type_4520_, lean_object* v_k_4521_, lean_object* v_kind_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
uint8_t v_bi_boxed_4531_; uint8_t v_kind_boxed_4532_; uint8_t v___y_75141__boxed_4533_; lean_object* v_res_4534_; 
v_bi_boxed_4531_ = lean_unbox(v_bi_4519_);
v_kind_boxed_4532_ = lean_unbox(v_kind_4522_);
v___y_75141__boxed_4533_ = lean_unbox(v___y_4523_);
v_res_4534_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__32(v_00_u03b1_4517_, v_name_4518_, v_bi_boxed_4531_, v_type_4520_, v_k_4521_, v_kind_boxed_4532_, v___y_75141__boxed_4533_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec(v___y_4529_);
lean_dec_ref(v___y_4528_);
lean_dec(v___y_4527_);
lean_dec_ref(v___y_4526_);
lean_dec(v___y_4525_);
lean_dec_ref(v___y_4524_);
return v_res_4534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(lean_object* v_00_u03b2_4535_, lean_object* v_m_4536_, lean_object* v_a_4537_){
_start:
{
lean_object* v___x_4538_; 
v___x_4538_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_m_4536_, v_a_4537_);
return v___x_4538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___boxed(lean_object* v_00_u03b2_4539_, lean_object* v_m_4540_, lean_object* v_a_4541_){
_start:
{
lean_object* v_res_4542_; 
v_res_4542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(v_00_u03b2_4539_, v_m_4540_, v_a_4541_);
lean_dec_ref(v_a_4541_);
lean_dec_ref(v_m_4540_);
return v_res_4542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2(lean_object* v_00_u03b2_4543_, lean_object* v_m_4544_, lean_object* v_a_4545_, lean_object* v_b_4546_){
_start:
{
lean_object* v___x_4547_; 
v___x_4547_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_m_4544_, v_a_4545_, v_b_4546_);
return v___x_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(lean_object* v_cls_4548_, lean_object* v_msg_4549_, uint8_t v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_){
_start:
{
lean_object* v___x_4558_; 
v___x_4558_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v_cls_4548_, v_msg_4549_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
return v___x_4558_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___boxed(lean_object* v_cls_4559_, lean_object* v_msg_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_){
_start:
{
uint8_t v___y_75171__boxed_4569_; lean_object* v_res_4570_; 
v___y_75171__boxed_4569_ = lean_unbox(v___y_4561_);
v_res_4570_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(v_cls_4559_, v_msg_4560_, v___y_75171__boxed_4569_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_);
lean_dec(v___y_4567_);
lean_dec_ref(v___y_4566_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
lean_dec(v___y_4563_);
lean_dec_ref(v___y_4562_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(lean_object* v_upperBound_4571_, lean_object* v___x_4572_, lean_object* v_f_4573_, lean_object* v___x_4574_, lean_object* v_inst_4575_, lean_object* v_R_4576_, lean_object* v_a_4577_, lean_object* v_b_4578_, lean_object* v_c_4579_, uint8_t v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
lean_object* v___x_4588_; 
v___x_4588_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v_upperBound_4571_, v___x_4572_, v_f_4573_, v___x_4574_, v_a_4577_, v_b_4578_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_4589_ = _args[0];
lean_object* v___x_4590_ = _args[1];
lean_object* v_f_4591_ = _args[2];
lean_object* v___x_4592_ = _args[3];
lean_object* v_inst_4593_ = _args[4];
lean_object* v_R_4594_ = _args[5];
lean_object* v_a_4595_ = _args[6];
lean_object* v_b_4596_ = _args[7];
lean_object* v_c_4597_ = _args[8];
lean_object* v___y_4598_ = _args[9];
lean_object* v___y_4599_ = _args[10];
lean_object* v___y_4600_ = _args[11];
lean_object* v___y_4601_ = _args[12];
lean_object* v___y_4602_ = _args[13];
lean_object* v___y_4603_ = _args[14];
lean_object* v___y_4604_ = _args[15];
lean_object* v___y_4605_ = _args[16];
_start:
{
uint8_t v___y_75201__boxed_4606_; lean_object* v_res_4607_; 
v___y_75201__boxed_4606_ = lean_unbox(v___y_4598_);
v_res_4607_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(v_upperBound_4589_, v___x_4590_, v_f_4591_, v___x_4592_, v_inst_4593_, v_R_4594_, v_a_4595_, v_b_4596_, v_c_4597_, v___y_75201__boxed_4606_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_);
lean_dec(v___y_4604_);
lean_dec_ref(v___y_4603_);
lean_dec(v___y_4602_);
lean_dec_ref(v___y_4601_);
lean_dec(v___y_4600_);
lean_dec_ref(v___y_4599_);
lean_dec_ref(v___x_4592_);
lean_dec_ref(v_f_4591_);
lean_dec(v___x_4590_);
lean_dec(v_upperBound_4589_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12(lean_object* v_00_u03b2_4608_, lean_object* v_a_4609_, lean_object* v_x_4610_){
_start:
{
lean_object* v___x_4611_; 
v___x_4611_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___redArg(v_a_4609_, v_x_4610_);
return v___x_4611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12___boxed(lean_object* v_00_u03b2_4612_, lean_object* v_a_4613_, lean_object* v_x_4614_){
_start:
{
lean_object* v_res_4615_; 
v_res_4615_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__12(v_00_u03b2_4612_, v_a_4613_, v_x_4614_);
lean_dec(v_x_4614_);
lean_dec_ref(v_a_4613_);
return v_res_4615_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(lean_object* v_00_u03b2_4616_, lean_object* v_a_4617_, lean_object* v_x_4618_){
_start:
{
uint8_t v___x_4619_; 
v___x_4619_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_a_4617_, v_x_4618_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___boxed(lean_object* v_00_u03b2_4620_, lean_object* v_a_4621_, lean_object* v_x_4622_){
_start:
{
uint8_t v_res_4623_; lean_object* v_r_4624_; 
v_res_4623_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(v_00_u03b2_4620_, v_a_4621_, v_x_4622_);
lean_dec(v_x_4622_);
lean_dec_ref(v_a_4621_);
v_r_4624_ = lean_box(v_res_4623_);
return v_r_4624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15(lean_object* v_00_u03b2_4625_, lean_object* v_data_4626_){
_start:
{
lean_object* v___x_4627_; 
v___x_4627_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(v_data_4626_);
return v___x_4627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16(lean_object* v_00_u03b2_4628_, lean_object* v_a_4629_, lean_object* v_b_4630_, lean_object* v_x_4631_){
_start:
{
lean_object* v___x_4632_; 
v___x_4632_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__16___redArg(v_a_4629_, v_b_4630_, v_x_4631_);
return v___x_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33(lean_object* v_00_u03b2_4633_, lean_object* v_i_4634_, lean_object* v_source_4635_, lean_object* v_target_4636_){
_start:
{
lean_object* v___x_4637_; 
v___x_4637_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33___redArg(v_i_4634_, v_source_4635_, v_target_4636_);
return v___x_4637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33_spec__38(lean_object* v_00_u03b2_4638_, lean_object* v_x_4639_, lean_object* v_x_4640_){
_start:
{
lean_object* v___x_4641_; 
v___x_4641_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15_spec__33_spec__38___redArg(v_x_4639_, v_x_4640_);
return v___x_4641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object* v_pinfos_4642_, lean_object* v_i_4643_, lean_object* v_arg_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_){
_start:
{
lean_object* v___x_4650_; 
v___x_4650_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v_pinfos_4642_, v_i_4643_, v_arg_4644_, v_a_4645_, v_a_4646_, v_a_4647_, v_a_4648_);
if (lean_obj_tag(v___x_4650_) == 0)
{
lean_object* v_a_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4666_; 
v_a_4651_ = lean_ctor_get(v___x_4650_, 0);
v_isSharedCheck_4666_ = !lean_is_exclusive(v___x_4650_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4653_ = v___x_4650_;
v_isShared_4654_ = v_isSharedCheck_4666_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_a_4651_);
lean_dec(v___x_4650_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4666_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
uint8_t v___x_4655_; 
v___x_4655_ = lean_unbox(v_a_4651_);
lean_dec(v_a_4651_);
if (v___x_4655_ == 3)
{
uint8_t v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4659_; 
v___x_4656_ = 0;
v___x_4657_ = lean_box(v___x_4656_);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 0, v___x_4657_);
v___x_4659_ = v___x_4653_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v___x_4657_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
else
{
uint8_t v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4664_; 
v___x_4661_ = 1;
v___x_4662_ = lean_box(v___x_4661_);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 0, v___x_4662_);
v___x_4664_ = v___x_4653_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v___x_4662_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
}
else
{
lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4674_; 
v_a_4667_ = lean_ctor_get(v___x_4650_, 0);
v_isSharedCheck_4674_ = !lean_is_exclusive(v___x_4650_);
if (v_isSharedCheck_4674_ == 0)
{
v___x_4669_ = v___x_4650_;
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v___x_4650_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4672_; 
if (v_isShared_4670_ == 0)
{
v___x_4672_ = v___x_4669_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_a_4667_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport___boxed(lean_object* v_pinfos_4675_, lean_object* v_i_4676_, lean_object* v_arg_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_){
_start:
{
lean_object* v_res_4683_; 
v_res_4683_ = l_Lean_Meta_Sym_Canon_isSupport(v_pinfos_4675_, v_i_4676_, v_arg_4677_, v_a_4678_, v_a_4679_, v_a_4680_, v_a_4681_);
lean_dec(v_a_4681_);
lean_dec_ref(v_a_4680_);
lean_dec(v_a_4679_);
lean_dec_ref(v_a_4678_);
lean_dec(v_i_4676_);
lean_dec_ref(v_pinfos_4675_);
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(lean_object* v_category_4684_, lean_object* v_opts_4685_, lean_object* v_act_4686_, lean_object* v_decl_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_){
_start:
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
lean_inc(v___y_4693_);
lean_inc_ref(v___y_4692_);
lean_inc(v___y_4691_);
lean_inc_ref(v___y_4690_);
lean_inc(v___y_4689_);
lean_inc_ref(v___y_4688_);
v___x_4695_ = lean_apply_6(v_act_4686_, v___y_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_);
v___x_4696_ = l_Lean_profileitIOUnsafe___redArg(v_category_4684_, v_opts_4685_, v___x_4695_, v_decl_4687_);
return v___x_4696_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg___boxed(lean_object* v_category_4697_, lean_object* v_opts_4698_, lean_object* v_act_4699_, lean_object* v_decl_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_){
_start:
{
lean_object* v_res_4708_; 
v_res_4708_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v_category_4697_, v_opts_4698_, v_act_4699_, v_decl_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_);
lean_dec(v___y_4706_);
lean_dec_ref(v___y_4705_);
lean_dec(v___y_4704_);
lean_dec_ref(v___y_4703_);
lean_dec(v___y_4702_);
lean_dec_ref(v___y_4701_);
lean_dec_ref(v_opts_4698_);
lean_dec_ref(v_category_4697_);
return v_res_4708_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(lean_object* v_00_u03b1_4709_, lean_object* v_category_4710_, lean_object* v_opts_4711_, lean_object* v_act_4712_, lean_object* v_decl_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v___x_4721_; 
v___x_4721_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v_category_4710_, v_opts_4711_, v_act_4712_, v_decl_4713_, v___y_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___boxed(lean_object* v_00_u03b1_4722_, lean_object* v_category_4723_, lean_object* v_opts_4724_, lean_object* v_act_4725_, lean_object* v_decl_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_){
_start:
{
lean_object* v_res_4734_; 
v_res_4734_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(v_00_u03b1_4722_, v_category_4723_, v_opts_4724_, v_act_4725_, v_decl_4726_, v___y_4727_, v___y_4728_, v___y_4729_, v___y_4730_, v___y_4731_, v___y_4732_);
lean_dec(v___y_4732_);
lean_dec_ref(v___y_4731_);
lean_dec(v___y_4730_);
lean_dec_ref(v___y_4729_);
lean_dec(v___y_4728_);
lean_dec_ref(v___y_4727_);
lean_dec_ref(v_opts_4724_);
lean_dec_ref(v_category_4723_);
return v_res_4734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0(uint8_t v___x_4735_, lean_object* v_e_4736_, uint8_t v___x_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_){
_start:
{
lean_object* v___y_4746_; lean_object* v___x_4755_; uint8_t v_transparency_4756_; uint8_t v___x_4757_; 
v___x_4755_ = l_Lean_Meta_Context_config(v___y_4740_);
v_transparency_4756_ = lean_ctor_get_uint8(v___x_4755_, 9);
lean_dec_ref(v___x_4755_);
v___x_4757_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4756_, v___x_4735_);
if (v___x_4757_ == 0)
{
lean_object* v_keyedConfig_4758_; uint8_t v_trackZetaDelta_4759_; lean_object* v_zetaDeltaSet_4760_; lean_object* v_lctx_4761_; lean_object* v_localInstances_4762_; lean_object* v_defEqCtx_x3f_4763_; lean_object* v_synthPendingDepth_4764_; lean_object* v_customCanUnfoldPredicate_x3f_4765_; uint8_t v_univApprox_4766_; uint8_t v_inTypeClassResolution_4767_; uint8_t v_cacheInferType_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; 
v_keyedConfig_4758_ = lean_ctor_get(v___y_4740_, 0);
v_trackZetaDelta_4759_ = lean_ctor_get_uint8(v___y_4740_, sizeof(void*)*7);
v_zetaDeltaSet_4760_ = lean_ctor_get(v___y_4740_, 1);
v_lctx_4761_ = lean_ctor_get(v___y_4740_, 2);
v_localInstances_4762_ = lean_ctor_get(v___y_4740_, 3);
v_defEqCtx_x3f_4763_ = lean_ctor_get(v___y_4740_, 4);
v_synthPendingDepth_4764_ = lean_ctor_get(v___y_4740_, 5);
v_customCanUnfoldPredicate_x3f_4765_ = lean_ctor_get(v___y_4740_, 6);
v_univApprox_4766_ = lean_ctor_get_uint8(v___y_4740_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4767_ = lean_ctor_get_uint8(v___y_4740_, sizeof(void*)*7 + 2);
v_cacheInferType_4768_ = lean_ctor_get_uint8(v___y_4740_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4758_);
v___x_4769_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4735_, v_keyedConfig_4758_);
lean_inc(v_customCanUnfoldPredicate_x3f_4765_);
lean_inc(v_synthPendingDepth_4764_);
lean_inc(v_defEqCtx_x3f_4763_);
lean_inc_ref(v_localInstances_4762_);
lean_inc_ref(v_lctx_4761_);
lean_inc(v_zetaDeltaSet_4760_);
v___x_4770_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4770_, 0, v___x_4769_);
lean_ctor_set(v___x_4770_, 1, v_zetaDeltaSet_4760_);
lean_ctor_set(v___x_4770_, 2, v_lctx_4761_);
lean_ctor_set(v___x_4770_, 3, v_localInstances_4762_);
lean_ctor_set(v___x_4770_, 4, v_defEqCtx_x3f_4763_);
lean_ctor_set(v___x_4770_, 5, v_synthPendingDepth_4764_);
lean_ctor_set(v___x_4770_, 6, v_customCanUnfoldPredicate_x3f_4765_);
lean_ctor_set_uint8(v___x_4770_, sizeof(void*)*7, v_trackZetaDelta_4759_);
lean_ctor_set_uint8(v___x_4770_, sizeof(void*)*7 + 1, v_univApprox_4766_);
lean_ctor_set_uint8(v___x_4770_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4767_);
lean_ctor_set_uint8(v___x_4770_, sizeof(void*)*7 + 3, v_cacheInferType_4768_);
v___x_4771_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4736_, v___x_4737_, v___y_4738_, v___y_4739_, v___x_4770_, v___y_4741_, v___y_4742_, v___y_4743_);
lean_dec_ref_known(v___x_4770_, 7);
v___y_4746_ = v___x_4771_;
goto v___jp_4745_;
}
else
{
lean_object* v___x_4772_; 
v___x_4772_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4736_, v___x_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_, v___y_4742_, v___y_4743_);
v___y_4746_ = v___x_4772_;
goto v___jp_4745_;
}
v___jp_4745_:
{
if (lean_obj_tag(v___y_4746_) == 0)
{
return v___y_4746_;
}
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
v_a_4747_ = lean_ctor_get(v___y_4746_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___y_4746_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___y_4746_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___y_4746_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0___boxed(lean_object* v___x_4773_, lean_object* v_e_4774_, lean_object* v___x_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
uint8_t v___x_2117__boxed_4783_; uint8_t v___x_2118__boxed_4784_; lean_object* v_res_4785_; 
v___x_2117__boxed_4783_ = lean_unbox(v___x_4773_);
v___x_2118__boxed_4784_ = lean_unbox(v___x_4775_);
v_res_4785_ = l_Lean_Meta_Sym_canon___lam__0(v___x_2117__boxed_4783_, v_e_4774_, v___x_2118__boxed_4784_, v___y_4776_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec(v___y_4777_);
lean_dec_ref(v___y_4776_);
return v_res_4785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon(lean_object* v_e_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_){
_start:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; uint8_t v___x_4797_; uint8_t v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___f_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4795_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_4792_);
v___x_4796_ = ((lean_object*)(l_Lean_Meta_Sym_canon___closed__0));
v___x_4797_ = 0;
v___x_4798_ = 2;
v___x_4799_ = lean_box(v___x_4798_);
v___x_4800_ = lean_box(v___x_4797_);
v___f_4801_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_canon___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4801_, 0, v___x_4799_);
lean_closure_set(v___f_4801_, 1, v_e_4787_);
lean_closure_set(v___f_4801_, 2, v___x_4800_);
v___x_4802_ = lean_box(0);
v___x_4803_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v___x_4796_, v___x_4795_, v___f_4801_, v___x_4802_, v_a_4788_, v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_, v_a_4793_);
lean_dec_ref(v___x_4795_);
return v___x_4803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___boxed(lean_object* v_e_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l_Lean_Meta_Sym_canon(v_e_4804_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_);
lean_dec(v_a_4810_);
lean_dec_ref(v_a_4809_);
lean_dec(v_a_4808_);
lean_dec_ref(v_a_4807_);
lean_dec(v_a_4806_);
lean_dec_ref(v_a_4805_);
return v_res_4812_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default = _init_l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default();
l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult = _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Canon(builtin);
}
#ifdef __cplusplus
}
#endif
