// Lean compiler output
// Module: Lean.Meta.Reduce
// Imports: public import Lean.Meta.FunInfo import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
lean_object* l_Lean_Expr_rawNatLit_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__1(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__4;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__7 = (const lean_object*)&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__0(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_reduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_reduce___closed__0;
static lean_once_cell_t l_Lean_Meta_reduce___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_reduce___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_reduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__0(lean_object* v_msg_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(0u);
v___x_3_ = lean_panic_fn_borrowed(v___x_2_, v_msg_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0(lean_object* v_k_4_, lean_object* v___y_5_, lean_object* v_b_6_, lean_object* v_c_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
lean_inc(v___y_11_);
lean_inc_ref(v___y_10_);
lean_inc(v___y_9_);
lean_inc_ref(v___y_8_);
lean_inc(v___y_5_);
v___x_13_ = lean_apply_8(v_k_4_, v_b_6_, v_c_7_, v___y_5_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, lean_box(0));
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0___boxed(lean_object* v_k_14_, lean_object* v___y_15_, lean_object* v_b_16_, lean_object* v_c_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0(v_k_14_, v___y_15_, v_b_16_, v_c_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
lean_dec(v___y_15_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg(lean_object* v_e_24_, lean_object* v_k_25_, uint8_t v_cleanupAnnotations_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v___f_33_; uint8_t v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
lean_inc(v___y_27_);
v___f_33_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_33_, 0, v_k_25_);
lean_closure_set(v___f_33_, 1, v___y_27_);
v___x_34_ = 1;
v___x_35_ = 0;
v___x_36_ = lean_box(0);
v___x_37_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_24_, v___x_34_, v___x_35_, v___x_34_, v___x_35_, v___x_36_, v___f_33_, v_cleanupAnnotations_26_, v___y_28_, v___y_29_, v___y_30_, v___y_31_);
if (lean_obj_tag(v___x_37_) == 0)
{
return v___x_37_;
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_37_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_37_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___boxed(lean_object* v_e_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_48_);
v_res_56_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg(v_e_46_, v_k_47_, v_cleanupAnnotations_boxed_55_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2(lean_object* v_00_u03b1_57_, lean_object* v_e_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg(v_e_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___boxed(lean_object* v_00_u03b1_68_, lean_object* v_e_69_, lean_object* v_k_70_, lean_object* v_cleanupAnnotations_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_78_; lean_object* v_res_79_; 
v_cleanupAnnotations_boxed_78_ = lean_unbox(v_cleanupAnnotations_71_);
v_res_79_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2(v_00_u03b1_68_, v_e_69_, v_k_70_, v_cleanupAnnotations_boxed_78_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg(lean_object* v_type_80_, lean_object* v_k_81_, uint8_t v_cleanupAnnotations_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___f_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
lean_inc(v___y_83_);
v___f_89_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_89_, 0, v_k_81_);
lean_closure_set(v___f_89_, 1, v___y_83_);
v___x_90_ = 0;
v___x_91_ = lean_box(0);
v___x_92_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_90_, v___x_91_, v_type_80_, v___f_89_, v_cleanupAnnotations_82_, v___x_90_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
if (lean_obj_tag(v___x_92_) == 0)
{
return v___x_92_;
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_a_93_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_92_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_92_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg___boxed(lean_object* v_type_101_, lean_object* v_k_102_, lean_object* v_cleanupAnnotations_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_110_; lean_object* v_res_111_; 
v_cleanupAnnotations_boxed_110_ = lean_unbox(v_cleanupAnnotations_103_);
v_res_111_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg(v_type_101_, v_k_102_, v_cleanupAnnotations_boxed_110_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3(lean_object* v_00_u03b1_112_, lean_object* v_type_113_, lean_object* v_k_114_, uint8_t v_cleanupAnnotations_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg(v_type_113_, v_k_114_, v_cleanupAnnotations_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___boxed(lean_object* v_00_u03b1_123_, lean_object* v_type_124_, lean_object* v_k_125_, lean_object* v_cleanupAnnotations_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_133_; lean_object* v_res_134_; 
v_cleanupAnnotations_boxed_133_ = lean_unbox(v_cleanupAnnotations_126_);
v_res_134_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3(v_00_u03b1_123_, v_type_124_, v_k_125_, v_cleanupAnnotations_boxed_133_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11___redArg(lean_object* v_a_135_, lean_object* v_b_136_, lean_object* v_x_137_){
_start:
{
if (lean_obj_tag(v_x_137_) == 0)
{
lean_dec(v_b_136_);
lean_dec_ref(v_a_135_);
return v_x_137_;
}
else
{
lean_object* v_key_138_; lean_object* v_value_139_; lean_object* v_tail_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_152_; 
v_key_138_ = lean_ctor_get(v_x_137_, 0);
v_value_139_ = lean_ctor_get(v_x_137_, 1);
v_tail_140_ = lean_ctor_get(v_x_137_, 2);
v_isSharedCheck_152_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_152_ == 0)
{
v___x_142_ = v_x_137_;
v_isShared_143_ = v_isSharedCheck_152_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_tail_140_);
lean_inc(v_value_139_);
lean_inc(v_key_138_);
lean_dec(v_x_137_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_152_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
uint8_t v___x_144_; 
v___x_144_ = lean_expr_eqv(v_key_138_, v_a_135_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_145_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11___redArg(v_a_135_, v_b_136_, v_tail_140_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 2, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_key_138_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_value_139_);
lean_ctor_set(v_reuseFailAlloc_148_, 2, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
else
{
lean_object* v___x_150_; 
lean_dec(v_value_139_);
lean_dec(v_key_138_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 1, v_b_136_);
lean_ctor_set(v___x_142_, 0, v_a_135_);
v___x_150_ = v___x_142_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_135_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v_b_136_);
lean_ctor_set(v_reuseFailAlloc_151_, 2, v_tail_140_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg(lean_object* v_a_153_, lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
uint8_t v___x_155_; 
v___x_155_ = 0;
return v___x_155_;
}
else
{
lean_object* v_key_156_; lean_object* v_tail_157_; uint8_t v___x_158_; 
v_key_156_ = lean_ctor_get(v_x_154_, 0);
v_tail_157_ = lean_ctor_get(v_x_154_, 2);
v___x_158_ = lean_expr_eqv(v_key_156_, v_a_153_);
if (v___x_158_ == 0)
{
v_x_154_ = v_tail_157_;
goto _start;
}
else
{
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg___boxed(lean_object* v_a_160_, lean_object* v_x_161_){
_start:
{
uint8_t v_res_162_; lean_object* v_r_163_; 
v_res_162_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg(v_a_160_, v_x_161_);
lean_dec(v_x_161_);
lean_dec_ref(v_a_160_);
v_r_163_ = lean_box(v_res_162_);
return v_r_163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11_spec__12___redArg(lean_object* v_x_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
return v_x_164_;
}
else
{
lean_object* v_key_166_; lean_object* v_value_167_; lean_object* v_tail_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_191_; 
v_key_166_ = lean_ctor_get(v_x_165_, 0);
v_value_167_ = lean_ctor_get(v_x_165_, 1);
v_tail_168_ = lean_ctor_get(v_x_165_, 2);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_191_ == 0)
{
v___x_170_ = v_x_165_;
v_isShared_171_ = v_isSharedCheck_191_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_tail_168_);
lean_inc(v_value_167_);
lean_inc(v_key_166_);
lean_dec(v_x_165_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_191_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; uint64_t v_fold_176_; uint64_t v___x_177_; uint64_t v___x_178_; uint64_t v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v___x_182_; size_t v___x_183_; size_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_172_ = lean_array_get_size(v_x_164_);
v___x_173_ = l_Lean_Expr_hash(v_key_166_);
v___x_174_ = 32ULL;
v___x_175_ = lean_uint64_shift_right(v___x_173_, v___x_174_);
v_fold_176_ = lean_uint64_xor(v___x_173_, v___x_175_);
v___x_177_ = 16ULL;
v___x_178_ = lean_uint64_shift_right(v_fold_176_, v___x_177_);
v___x_179_ = lean_uint64_xor(v_fold_176_, v___x_178_);
v___x_180_ = lean_uint64_to_usize(v___x_179_);
v___x_181_ = lean_usize_of_nat(v___x_172_);
v___x_182_ = ((size_t)1ULL);
v___x_183_ = lean_usize_sub(v___x_181_, v___x_182_);
v___x_184_ = lean_usize_land(v___x_180_, v___x_183_);
v___x_185_ = lean_array_uget_borrowed(v_x_164_, v___x_184_);
lean_inc(v___x_185_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 2, v___x_185_);
v___x_187_ = v___x_170_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_key_166_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_value_167_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v___x_185_);
v___x_187_ = v_reuseFailAlloc_190_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_188_; 
v___x_188_ = lean_array_uset(v_x_164_, v___x_184_, v___x_187_);
v_x_164_ = v___x_188_;
v_x_165_ = v_tail_168_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11___redArg(lean_object* v_i_192_, lean_object* v_source_193_, lean_object* v_target_194_){
_start:
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = lean_array_get_size(v_source_193_);
v___x_196_ = lean_nat_dec_lt(v_i_192_, v___x_195_);
if (v___x_196_ == 0)
{
lean_dec_ref(v_source_193_);
lean_dec(v_i_192_);
return v_target_194_;
}
else
{
lean_object* v_es_197_; lean_object* v___x_198_; lean_object* v_source_199_; lean_object* v_target_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_es_197_ = lean_array_fget(v_source_193_, v_i_192_);
v___x_198_ = lean_box(0);
v_source_199_ = lean_array_fset(v_source_193_, v_i_192_, v___x_198_);
v_target_200_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11_spec__12___redArg(v_target_194_, v_es_197_);
v___x_201_ = lean_unsigned_to_nat(1u);
v___x_202_ = lean_nat_add(v_i_192_, v___x_201_);
lean_dec(v_i_192_);
v_i_192_ = v___x_202_;
v_source_193_ = v_source_199_;
v_target_194_ = v_target_200_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10___redArg(lean_object* v_data_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_nbuckets_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_205_ = lean_array_get_size(v_data_204_);
v___x_206_ = lean_unsigned_to_nat(2u);
v_nbuckets_207_ = lean_nat_mul(v___x_205_, v___x_206_);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = lean_box(0);
v___x_210_ = lean_mk_array(v_nbuckets_207_, v___x_209_);
v___x_211_ = lean_array_propagate_mark(v_data_204_, v___x_210_);
v___x_212_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11___redArg(v___x_208_, v_data_204_, v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6___redArg(lean_object* v_m_213_, lean_object* v_a_214_, lean_object* v_b_215_){
_start:
{
lean_object* v_size_216_; lean_object* v_buckets_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_260_; 
v_size_216_ = lean_ctor_get(v_m_213_, 0);
v_buckets_217_ = lean_ctor_get(v_m_213_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v_m_213_);
if (v_isSharedCheck_260_ == 0)
{
v___x_219_ = v_m_213_;
v_isShared_220_ = v_isSharedCheck_260_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_buckets_217_);
lean_inc(v_size_216_);
lean_dec(v_m_213_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_260_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; uint64_t v___x_222_; uint64_t v___x_223_; uint64_t v___x_224_; uint64_t v_fold_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; size_t v___x_229_; size_t v___x_230_; size_t v___x_231_; size_t v___x_232_; size_t v___x_233_; lean_object* v_bkt_234_; uint8_t v___x_235_; 
v___x_221_ = lean_array_get_size(v_buckets_217_);
v___x_222_ = l_Lean_Expr_hash(v_a_214_);
v___x_223_ = 32ULL;
v___x_224_ = lean_uint64_shift_right(v___x_222_, v___x_223_);
v_fold_225_ = lean_uint64_xor(v___x_222_, v___x_224_);
v___x_226_ = 16ULL;
v___x_227_ = lean_uint64_shift_right(v_fold_225_, v___x_226_);
v___x_228_ = lean_uint64_xor(v_fold_225_, v___x_227_);
v___x_229_ = lean_uint64_to_usize(v___x_228_);
v___x_230_ = lean_usize_of_nat(v___x_221_);
v___x_231_ = ((size_t)1ULL);
v___x_232_ = lean_usize_sub(v___x_230_, v___x_231_);
v___x_233_ = lean_usize_land(v___x_229_, v___x_232_);
v_bkt_234_ = lean_array_uget_borrowed(v_buckets_217_, v___x_233_);
v___x_235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg(v_a_214_, v_bkt_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v_size_x27_237_; lean_object* v___x_238_; lean_object* v_buckets_x27_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_236_ = lean_unsigned_to_nat(1u);
v_size_x27_237_ = lean_nat_add(v_size_216_, v___x_236_);
lean_dec(v_size_216_);
lean_inc(v_bkt_234_);
v___x_238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_238_, 0, v_a_214_);
lean_ctor_set(v___x_238_, 1, v_b_215_);
lean_ctor_set(v___x_238_, 2, v_bkt_234_);
v_buckets_x27_239_ = lean_array_uset(v_buckets_217_, v___x_233_, v___x_238_);
v___x_240_ = lean_unsigned_to_nat(4u);
v___x_241_ = lean_nat_mul(v_size_x27_237_, v___x_240_);
v___x_242_ = lean_unsigned_to_nat(3u);
v___x_243_ = lean_nat_div(v___x_241_, v___x_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_array_get_size(v_buckets_x27_239_);
v___x_245_ = lean_nat_dec_le(v___x_243_, v___x_244_);
lean_dec(v___x_243_);
if (v___x_245_ == 0)
{
lean_object* v_val_246_; lean_object* v___x_248_; 
v_val_246_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10___redArg(v_buckets_x27_239_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_val_246_);
lean_ctor_set(v___x_219_, 0, v_size_x27_237_);
v___x_248_ = v___x_219_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_size_x27_237_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_val_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
else
{
lean_object* v___x_251_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_buckets_x27_239_);
lean_ctor_set(v___x_219_, 0, v_size_x27_237_);
v___x_251_ = v___x_219_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_size_x27_237_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_buckets_x27_239_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
else
{
lean_object* v___x_253_; lean_object* v_buckets_x27_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_258_; 
lean_inc(v_bkt_234_);
v___x_253_ = lean_box(0);
v_buckets_x27_254_ = lean_array_uset(v_buckets_217_, v___x_233_, v___x_253_);
v___x_255_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11___redArg(v_a_214_, v_b_215_, v_bkt_234_);
v___x_256_ = lean_array_uset(v_buckets_x27_254_, v___x_233_, v___x_255_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_256_);
v___x_258_ = v___x_219_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_size_216_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = l_Lean_maxRecDepthErrorMessage;
v___x_267_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__3);
v___x_269_ = l_Lean_MessageData_ofFormat(v___x_268_);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__4);
v___x_271_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__2));
v___x_272_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_270_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg(lean_object* v_ref_273_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___closed__5);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v_ref_273_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg___boxed(lean_object* v_ref_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg(v_ref_278_);
return v_res_280_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_box(0);
v___x_282_ = l_Lean_interruptExceptionId;
v___x_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_281_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg(){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___closed__0);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg___boxed(lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg();
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg(lean_object* v_x_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v___y_297_; lean_object* v___y_307_; lean_object* v___y_308_; uint8_t v___y_309_; uint8_t v___y_310_; lean_object* v___y_311_; lean_object* v_toCold_316_; lean_object* v_currRecDepth_317_; lean_object* v_ref_318_; uint8_t v_diag_319_; uint8_t v_suppressElabErrors_320_; lean_object* v_maxRecDepth_321_; lean_object* v_cancelTk_x3f_322_; 
v_toCold_316_ = lean_ctor_get(v___y_293_, 0);
v_currRecDepth_317_ = lean_ctor_get(v___y_293_, 1);
v_ref_318_ = lean_ctor_get(v___y_293_, 2);
v_diag_319_ = lean_ctor_get_uint8(v___y_293_, sizeof(void*)*3);
v_suppressElabErrors_320_ = lean_ctor_get_uint8(v___y_293_, sizeof(void*)*3 + 1);
v_maxRecDepth_321_ = lean_ctor_get(v_toCold_316_, 3);
v_cancelTk_x3f_322_ = lean_ctor_get(v_toCold_316_, 10);
if (lean_obj_tag(v_cancelTk_x3f_322_) == 1)
{
lean_object* v_val_328_; uint8_t v___x_329_; 
v_val_328_ = lean_ctor_get(v_cancelTk_x3f_322_, 0);
v___x_329_ = l_IO_CancelToken_isSet(v_val_328_);
if (v___x_329_ == 0)
{
goto v___jp_323_;
}
else
{
lean_object* v___x_330_; lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec_ref(v_x_289_);
v___x_330_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg();
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
else
{
goto v___jp_323_;
}
v___jp_296_:
{
if (lean_obj_tag(v___y_297_) == 0)
{
return v___y_297_;
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
v_a_298_ = lean_ctor_get(v___y_297_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___y_297_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___y_297_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___y_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
v___jp_306_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_312_ = lean_unsigned_to_nat(1u);
v___x_313_ = lean_nat_add(v___y_307_, v___x_312_);
lean_inc_ref(v___y_311_);
v___x_314_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_314_, 0, v___y_311_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
lean_ctor_set(v___x_314_, 2, v___y_308_);
lean_ctor_set_uint8(v___x_314_, sizeof(void*)*3, v___y_309_);
lean_ctor_set_uint8(v___x_314_, sizeof(void*)*3 + 1, v___y_310_);
lean_inc(v___y_294_);
lean_inc(v___y_292_);
lean_inc_ref(v___y_291_);
lean_inc(v___y_290_);
v___x_315_ = lean_apply_6(v_x_289_, v___y_290_, v___y_291_, v___y_292_, v___x_314_, v___y_294_, lean_box(0));
v___y_297_ = v___x_315_;
goto v___jp_296_;
}
v___jp_323_:
{
lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_nat_dec_eq(v_maxRecDepth_321_, v___x_324_);
if (v___x_325_ == 0)
{
uint8_t v___x_326_; 
v___x_326_ = lean_nat_dec_eq(v_currRecDepth_317_, v_maxRecDepth_321_);
if (v___x_326_ == 0)
{
lean_inc(v_ref_318_);
v___y_307_ = v_currRecDepth_317_;
v___y_308_ = v_ref_318_;
v___y_309_ = v_diag_319_;
v___y_310_ = v_suppressElabErrors_320_;
v___y_311_ = v_toCold_316_;
goto v___jp_306_;
}
else
{
lean_object* v___x_327_; 
lean_dec_ref(v_x_289_);
lean_inc(v_ref_318_);
v___x_327_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg(v_ref_318_);
v___y_297_ = v___x_327_;
goto v___jp_296_;
}
}
else
{
lean_inc(v_ref_318_);
v___y_307_ = v_currRecDepth_317_;
v___y_308_ = v_ref_318_;
v___y_309_ = v_diag_319_;
v___y_310_ = v_suppressElabErrors_320_;
v___y_311_ = v_toCold_316_;
goto v___jp_306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg___boxed(lean_object* v_x_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg(v_x_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg(lean_object* v_a_347_, lean_object* v_x_348_){
_start:
{
if (lean_obj_tag(v_x_348_) == 0)
{
lean_object* v___x_349_; 
v___x_349_ = lean_box(0);
return v___x_349_;
}
else
{
lean_object* v_key_350_; lean_object* v_value_351_; lean_object* v_tail_352_; uint8_t v___x_353_; 
v_key_350_ = lean_ctor_get(v_x_348_, 0);
v_value_351_ = lean_ctor_get(v_x_348_, 1);
v_tail_352_ = lean_ctor_get(v_x_348_, 2);
v___x_353_ = lean_expr_eqv(v_key_350_, v_a_347_);
if (v___x_353_ == 0)
{
v_x_348_ = v_tail_352_;
goto _start;
}
else
{
lean_object* v___x_355_; 
lean_inc(v_value_351_);
v___x_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_355_, 0, v_value_351_);
return v___x_355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg___boxed(lean_object* v_a_356_, lean_object* v_x_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg(v_a_356_, v_x_357_);
lean_dec(v_x_357_);
lean_dec_ref(v_a_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg(lean_object* v_m_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_buckets_361_; lean_object* v___x_362_; uint64_t v___x_363_; uint64_t v___x_364_; uint64_t v___x_365_; uint64_t v_fold_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint64_t v___x_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; size_t v___x_373_; size_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_buckets_361_ = lean_ctor_get(v_m_359_, 1);
v___x_362_ = lean_array_get_size(v_buckets_361_);
v___x_363_ = l_Lean_Expr_hash(v_a_360_);
v___x_364_ = 32ULL;
v___x_365_ = lean_uint64_shift_right(v___x_363_, v___x_364_);
v_fold_366_ = lean_uint64_xor(v___x_363_, v___x_365_);
v___x_367_ = 16ULL;
v___x_368_ = lean_uint64_shift_right(v_fold_366_, v___x_367_);
v___x_369_ = lean_uint64_xor(v_fold_366_, v___x_368_);
v___x_370_ = lean_uint64_to_usize(v___x_369_);
v___x_371_ = lean_usize_of_nat(v___x_362_);
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_sub(v___x_371_, v___x_372_);
v___x_374_ = lean_usize_land(v___x_370_, v___x_373_);
v___x_375_ = lean_array_uget_borrowed(v_buckets_361_, v___x_374_);
v___x_376_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg(v_a_360_, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg___boxed(lean_object* v_m_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg(v_m_377_, v_a_378_);
lean_dec_ref(v_a_378_);
lean_dec_ref(v_m_377_);
return v_res_379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__3(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_383_ = ((lean_object*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__2));
v___x_384_ = lean_unsigned_to_nat(14u);
v___x_385_ = lean_unsigned_to_nat(22u);
v___x_386_ = ((lean_object*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__1));
v___x_387_ = ((lean_object*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__0));
v___x_388_ = l_mkPanicMessageWithDecl(v___x_387_, v___x_386_, v___x_385_, v___x_384_, v___x_383_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__0___boxed(lean_object* v_explicitOnly_389_, lean_object* v_skipTypes_390_, lean_object* v_skipProofs_391_, lean_object* v_a_392_, lean_object* v___x_393_, lean_object* v_xs_394_, lean_object* v_b_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
uint8_t v_explicitOnly_boxed_402_; uint8_t v_skipTypes_boxed_403_; uint8_t v_skipProofs_boxed_404_; uint8_t v_a_19549__boxed_405_; uint8_t v___x_19550__boxed_406_; lean_object* v_res_407_; 
v_explicitOnly_boxed_402_ = lean_unbox(v_explicitOnly_389_);
v_skipTypes_boxed_403_ = lean_unbox(v_skipTypes_390_);
v_skipProofs_boxed_404_ = lean_unbox(v_skipProofs_391_);
v_a_19549__boxed_405_ = lean_unbox(v_a_392_);
v___x_19550__boxed_406_ = lean_unbox(v___x_393_);
v_res_407_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__0(v_explicitOnly_boxed_402_, v_skipTypes_boxed_403_, v_skipProofs_boxed_404_, v_a_19549__boxed_405_, v___x_19550__boxed_406_, v_xs_394_, v_b_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v_xs_394_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__1(uint8_t v_explicitOnly_408_, uint8_t v_skipTypes_409_, uint8_t v_skipProofs_410_, uint8_t v_a_411_, uint8_t v___x_412_, lean_object* v_xs_413_, lean_object* v_b_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_408_, v_skipTypes_409_, v_skipProofs_410_, v_b_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; uint8_t v___x_423_; lean_object* v___x_424_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___x_421_, 1);
v___x_423_ = 1;
v___x_424_ = l_Lean_Meta_mkForallFVars(v_xs_413_, v_a_422_, v_a_411_, v___x_412_, v___x_412_, v___x_423_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
return v___x_424_;
}
else
{
return v___x_421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__1___boxed(lean_object* v_explicitOnly_425_, lean_object* v_skipTypes_426_, lean_object* v_skipProofs_427_, lean_object* v_a_428_, lean_object* v___x_429_, lean_object* v_xs_430_, lean_object* v_b_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
uint8_t v_explicitOnly_boxed_438_; uint8_t v_skipTypes_boxed_439_; uint8_t v_skipProofs_boxed_440_; uint8_t v_a_19562__boxed_441_; uint8_t v___x_19563__boxed_442_; lean_object* v_res_443_; 
v_explicitOnly_boxed_438_ = lean_unbox(v_explicitOnly_425_);
v_skipTypes_boxed_439_ = lean_unbox(v_skipTypes_426_);
v_skipProofs_boxed_440_ = lean_unbox(v_skipProofs_427_);
v_a_19562__boxed_441_ = lean_unbox(v_a_428_);
v___x_19563__boxed_442_ = lean_unbox(v___x_429_);
v_res_443_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__1(v_explicitOnly_boxed_438_, v_skipTypes_boxed_439_, v_skipProofs_boxed_440_, v_a_19562__boxed_441_, v___x_19563__boxed_442_, v_xs_430_, v_b_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v_xs_430_);
return v_res_443_;
}
}
static lean_object* _init_l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__4(void){
_start:
{
lean_object* v___x_444_; lean_object* v_dummy_445_; 
v___x_444_ = lean_box(0);
v_dummy_445_ = l_Lean_Expr_sort___override(v___x_444_);
return v_dummy_445_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg(uint8_t v_explicitOnly_446_, uint8_t v_skipTypes_447_, uint8_t v_skipProofs_448_, lean_object* v_upperBound_449_, lean_object* v_a_450_, uint8_t v_a_451_, lean_object* v_a_452_, lean_object* v_b_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_a_461_; uint8_t v___x_482_; 
v___x_482_ = lean_nat_dec_lt(v_a_452_, v_upperBound_449_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
lean_dec(v_a_452_);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v_b_453_);
return v___x_483_;
}
else
{
lean_object* v_paramInfo_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_paramInfo_484_ = lean_ctor_get(v_a_450_, 0);
v___x_485_ = lean_array_get_size(v_paramInfo_484_);
v___x_486_ = lean_nat_dec_lt(v_a_452_, v___x_485_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_array_get_size(v_b_453_);
v___x_488_ = lean_nat_dec_lt(v_a_452_, v___x_487_);
if (v___x_488_ == 0)
{
v_a_461_ = v_b_453_;
goto v___jp_460_;
}
else
{
lean_object* v_v_489_; lean_object* v___x_490_; lean_object* v_xs_x27_491_; lean_object* v___x_492_; 
v_v_489_ = lean_array_fget(v_b_453_, v_a_452_);
v___x_490_ = lean_box(0);
v_xs_x27_491_ = lean_array_fset(v_b_453_, v_a_452_, v___x_490_);
v___x_492_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_446_, v_skipTypes_447_, v_skipProofs_448_, v_v_489_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___x_494_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_492_, 1);
v___x_494_ = lean_array_fset(v_xs_x27_491_, v_a_452_, v_a_493_);
v_a_461_ = v___x_494_;
goto v___jp_460_;
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec_ref(v_xs_x27_491_);
lean_dec(v_a_452_);
v_a_495_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_492_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_492_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
}
else
{
if (v_explicitOnly_446_ == 0)
{
goto v___jp_465_;
}
else
{
if (v_a_451_ == 0)
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_array_fget_borrowed(v_paramInfo_484_, v_a_452_);
v___x_504_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_503_);
if (v___x_504_ == 0)
{
v_a_461_ = v_b_453_;
goto v___jp_460_;
}
else
{
goto v___jp_465_;
}
}
else
{
goto v___jp_465_;
}
}
}
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = lean_nat_add(v_a_452_, v___x_462_);
lean_dec(v_a_452_);
v_a_452_ = v___x_463_;
v_b_453_ = v_a_461_;
goto _start;
}
v___jp_465_:
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = lean_array_get_size(v_b_453_);
v___x_467_ = lean_nat_dec_lt(v_a_452_, v___x_466_);
if (v___x_467_ == 0)
{
v_a_461_ = v_b_453_;
goto v___jp_460_;
}
else
{
lean_object* v_v_468_; lean_object* v___x_469_; lean_object* v_xs_x27_470_; lean_object* v___x_471_; 
v_v_468_ = lean_array_fget(v_b_453_, v_a_452_);
v___x_469_ = lean_box(0);
v_xs_x27_470_ = lean_array_fset(v_b_453_, v_a_452_, v___x_469_);
v___x_471_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_446_, v_skipTypes_447_, v_skipProofs_448_, v_v_468_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_array_fset(v_xs_x27_470_, v_a_452_, v_a_472_);
v_a_461_ = v___x_473_;
goto v___jp_460_;
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec_ref(v_xs_x27_470_);
lean_dec(v_a_452_);
v_a_474_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_471_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_471_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2(lean_object* v___x_510_, uint8_t v_explicitOnly_511_, uint8_t v_skipTypes_512_, uint8_t v_skipProofs_513_, lean_object* v_e_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_527_; lean_object* v___y_533_; lean_object* v___y_534_; uint8_t v___y_535_; uint8_t v___y_544_; uint8_t v_a_545_; 
if (v_skipTypes_512_ == 0)
{
goto v___jp_610_;
}
else
{
lean_object* v___x_631_; 
lean_inc_ref(v_e_514_);
v___x_631_ = l_Lean_Meta_isType(v_e_514_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_640_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_640_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
uint8_t v___x_636_; 
v___x_636_ = lean_unbox(v_a_632_);
lean_dec(v_a_632_);
if (v___x_636_ == 0)
{
lean_del_object(v___x_634_);
goto v___jp_610_;
}
else
{
lean_object* v___x_638_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v_e_514_);
v___x_638_ = v___x_634_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_e_514_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
lean_dec_ref(v_e_514_);
v_a_641_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_631_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_631_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
v___jp_521_:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = l_Lean_mkAppN(v___y_523_, v___y_522_);
lean_dec_ref(v___y_522_);
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
return v___x_525_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_528_ = lean_unsigned_to_nat(1u);
v___x_529_ = lean_nat_add(v___y_527_, v___x_528_);
lean_dec(v___y_527_);
v___x_530_ = l_Lean_mkRawNatLit(v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
v___jp_532_:
{
if (v___y_535_ == 0)
{
v___y_522_ = v___y_533_;
v___y_523_ = v___y_534_;
goto v___jp_521_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = lean_array_get_borrowed(v___x_510_, v___y_533_, v___x_536_);
v___x_538_ = l_Lean_Expr_isRawNatLit(v___x_537_);
if (v___x_538_ == 0)
{
v___y_522_ = v___y_533_;
v___y_523_ = v___y_534_;
goto v___jp_521_;
}
else
{
lean_object* v___x_539_; 
lean_inc(v___x_537_);
lean_dec_ref(v___y_534_);
lean_dec_ref(v___y_533_);
v___x_539_ = l_Lean_Expr_rawNatLit_x3f(v___x_537_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_obj_once(&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__3, &l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__3_once, _init_l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__3);
v___x_541_ = l_panic___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__0(v___x_540_);
v___y_527_ = v___x_541_;
goto v___jp_526_;
}
else
{
lean_object* v_val_542_; 
v_val_542_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_val_542_);
lean_dec_ref_known(v___x_539_, 1);
v___y_527_ = v_val_542_;
goto v___jp_526_;
}
}
}
}
v___jp_543_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___f_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___f_557_; lean_object* v___x_558_; 
v___x_546_ = lean_box(v_explicitOnly_511_);
v___x_547_ = lean_box(v_skipTypes_512_);
v___x_548_ = lean_box(v_skipProofs_513_);
v___x_549_ = lean_box(v_a_545_);
v___x_550_ = lean_box(v___y_544_);
v___f_551_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__0___boxed), 13, 5);
lean_closure_set(v___f_551_, 0, v___x_546_);
lean_closure_set(v___f_551_, 1, v___x_547_);
lean_closure_set(v___f_551_, 2, v___x_548_);
lean_closure_set(v___f_551_, 3, v___x_549_);
lean_closure_set(v___f_551_, 4, v___x_550_);
v___x_552_ = lean_box(v_explicitOnly_511_);
v___x_553_ = lean_box(v_skipTypes_512_);
v___x_554_ = lean_box(v_skipProofs_513_);
v___x_555_ = lean_box(v_a_545_);
v___x_556_ = lean_box(v___y_544_);
v___f_557_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__1___boxed), 13, 5);
lean_closure_set(v___f_557_, 0, v___x_552_);
lean_closure_set(v___f_557_, 1, v___x_553_);
lean_closure_set(v___f_557_, 2, v___x_554_);
lean_closure_set(v___f_557_, 3, v___x_555_);
lean_closure_set(v___f_557_, 4, v___x_556_);
lean_inc(v___y_519_);
lean_inc_ref(v___y_518_);
lean_inc(v___y_517_);
lean_inc_ref(v___y_516_);
v___x_558_ = lean_whnf(v_e_514_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
switch(lean_obj_tag(v_a_559_))
{
case 5:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
lean_dec_ref_known(v___x_558_, 1);
lean_dec_ref(v___f_557_);
lean_dec_ref(v___f_551_);
v___x_560_ = l_Lean_Expr_getAppFn(v_a_559_);
v___x_561_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_511_, v_skipTypes_512_, v_skipProofs_513_, v___x_560_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc_n(v_a_562_, 2);
lean_dec_ref_known(v___x_561_, 1);
v___x_563_ = l_Lean_Expr_getAppNumArgs(v_a_559_);
lean_inc(v___x_563_);
v___x_564_ = l_Lean_Meta_getFunInfoNArgs(v_a_562_, v___x_563_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; lean_object* v_dummy_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
lean_inc(v_a_565_);
lean_dec_ref_known(v___x_564_, 1);
v_dummy_566_ = lean_obj_once(&l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__4, &l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__4_once, _init_l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__4);
lean_inc(v___x_563_);
v___x_567_ = lean_mk_array(v___x_563_, v_dummy_566_);
v___x_568_ = lean_unsigned_to_nat(1u);
v___x_569_ = lean_nat_sub(v___x_563_, v___x_568_);
lean_dec(v___x_563_);
v___x_570_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_559_, v___x_567_, v___x_569_);
v___x_571_ = lean_array_get_size(v___x_570_);
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg(v_explicitOnly_511_, v_skipTypes_512_, v_skipProofs_513_, v___x_571_, v_a_565_, v_a_545_, v___x_572_, v___x_570_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v_a_565_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v_a_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v_a_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_573_, 1);
v___x_575_ = ((lean_object*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___closed__7));
v___x_576_ = l_Lean_Expr_isConstOf(v_a_562_, v___x_575_);
if (v___x_576_ == 0)
{
v___y_533_ = v_a_574_;
v___y_534_ = v_a_562_;
v___y_535_ = v_a_545_;
goto v___jp_532_;
}
else
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_array_get_size(v_a_574_);
v___x_578_ = lean_nat_dec_eq(v___x_577_, v___x_568_);
v___y_533_ = v_a_574_;
v___y_534_ = v_a_562_;
v___y_535_ = v___x_578_;
goto v___jp_532_;
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v_a_562_);
v_a_579_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_573_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_573_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
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
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec(v___x_563_);
lean_dec(v_a_562_);
lean_dec_ref_known(v_a_559_, 2);
v_a_587_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_564_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_564_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_559_, 2);
return v___x_561_;
}
}
case 6:
{
lean_object* v___x_595_; 
lean_dec_ref_known(v___x_558_, 1);
lean_dec_ref(v___f_557_);
v___x_595_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__2___redArg(v_a_559_, v___f_551_, v_a_545_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
return v___x_595_;
}
case 7:
{
lean_object* v___x_596_; 
lean_dec_ref_known(v___x_558_, 1);
lean_dec_ref(v___f_551_);
v___x_596_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__3___redArg(v_a_559_, v___f_557_, v_a_545_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
return v___x_596_;
}
case 11:
{
lean_object* v_typeName_597_; lean_object* v_idx_598_; lean_object* v_struct_599_; lean_object* v___x_600_; 
lean_dec_ref_known(v___x_558_, 1);
lean_dec_ref(v___f_557_);
lean_dec_ref(v___f_551_);
v_typeName_597_ = lean_ctor_get(v_a_559_, 0);
lean_inc(v_typeName_597_);
v_idx_598_ = lean_ctor_get(v_a_559_, 1);
lean_inc(v_idx_598_);
v_struct_599_ = lean_ctor_get(v_a_559_, 2);
lean_inc_ref(v_struct_599_);
lean_dec_ref_known(v_a_559_, 3);
v___x_600_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_511_, v_skipTypes_512_, v_skipProofs_513_, v_struct_599_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_609_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_609_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_609_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_609_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_605_ = l_Lean_mkProj(v_typeName_597_, v_idx_598_, v_a_601_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_605_);
v___x_607_ = v___x_603_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_dec(v_idx_598_);
lean_dec(v_typeName_597_);
return v___x_600_;
}
}
default: 
{
lean_dec(v_a_559_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v___f_551_);
return v___x_558_;
}
}
}
else
{
lean_dec_ref(v___f_557_);
lean_dec_ref(v___f_551_);
return v___x_558_;
}
}
v___jp_610_:
{
uint8_t v___x_611_; 
v___x_611_ = 1;
if (v_skipProofs_513_ == 0)
{
v___y_544_ = v___x_611_;
v_a_545_ = v_skipProofs_513_;
goto v___jp_543_;
}
else
{
lean_object* v___x_612_; 
lean_inc_ref(v_e_514_);
v___x_612_ = l_Lean_Meta_isProof(v_e_514_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_622_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_622_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_622_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_622_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint8_t v___x_617_; 
v___x_617_ = lean_unbox(v_a_613_);
if (v___x_617_ == 0)
{
uint8_t v___x_618_; 
lean_del_object(v___x_615_);
v___x_618_ = lean_unbox(v_a_613_);
lean_dec(v_a_613_);
v___y_544_ = v___x_611_;
v_a_545_ = v___x_618_;
goto v___jp_543_;
}
else
{
lean_object* v___x_620_; 
lean_dec(v_a_613_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v_e_514_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_e_514_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_dec_ref(v_e_514_);
v_a_623_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_612_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_612_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___boxed(lean_object* v___x_649_, lean_object* v_explicitOnly_650_, lean_object* v_skipTypes_651_, lean_object* v_skipProofs_652_, lean_object* v_e_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
uint8_t v_explicitOnly_boxed_660_; uint8_t v_skipTypes_boxed_661_; uint8_t v_skipProofs_boxed_662_; lean_object* v_res_663_; 
v_explicitOnly_boxed_660_ = lean_unbox(v_explicitOnly_650_);
v_skipTypes_boxed_661_ = lean_unbox(v_skipTypes_651_);
v_skipProofs_boxed_662_ = lean_unbox(v_skipProofs_652_);
v_res_663_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2(v___x_649_, v_explicitOnly_boxed_660_, v_skipTypes_boxed_661_, v_skipProofs_boxed_662_, v_e_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___x_649_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(uint8_t v_explicitOnly_664_, uint8_t v_skipTypes_665_, uint8_t v_skipProofs_666_, lean_object* v_e_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___f_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_674_ = l_Lean_instInhabitedExpr;
v___x_675_ = lean_box(v_explicitOnly_664_);
v___x_676_ = lean_box(v_skipTypes_665_);
v___x_677_ = lean_box(v_skipProofs_666_);
lean_inc_ref(v_e_667_);
v___f_678_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__2___boxed), 11, 5);
lean_closure_set(v___f_678_, 0, v___x_674_);
lean_closure_set(v___f_678_, 1, v___x_675_);
lean_closure_set(v___f_678_, 2, v___x_676_);
lean_closure_set(v___f_678_, 3, v___x_677_);
lean_closure_set(v___f_678_, 4, v_e_667_);
v___x_679_ = lean_st_ref_get(v___y_668_);
v___x_680_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg(v___x_679_, v_e_667_);
lean_dec(v___x_679_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v___x_681_; 
v___x_681_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg(v___f_678_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_692_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_692_ == 0)
{
v___x_684_ = v___x_681_;
v_isShared_685_ = v_isSharedCheck_692_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_692_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_686_ = lean_st_ref_take(v___y_668_);
lean_inc(v_a_682_);
v___x_687_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6___redArg(v___x_686_, v_e_667_, v_a_682_);
v___x_688_ = lean_st_ref_put(v___y_668_, v___x_687_);
if (v_isShared_685_ == 0)
{
v___x_690_ = v___x_684_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_682_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
else
{
lean_dec_ref(v_e_667_);
return v___x_681_;
}
}
else
{
lean_object* v_val_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec_ref(v___f_678_);
lean_dec_ref(v_e_667_);
v_val_693_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_680_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_val_693_);
lean_dec(v___x_680_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
lean_ctor_set_tag(v___x_695_, 0);
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_val_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___lam__0(uint8_t v_explicitOnly_701_, uint8_t v_skipTypes_702_, uint8_t v_skipProofs_703_, uint8_t v_a_704_, uint8_t v___x_705_, lean_object* v_xs_706_, lean_object* v_b_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_701_, v_skipTypes_702_, v_skipProofs_703_, v_b_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v_a_715_; uint8_t v___x_716_; lean_object* v___x_717_; 
v_a_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_a_715_);
lean_dec_ref_known(v___x_714_, 1);
v___x_716_ = 1;
v___x_717_ = l_Lean_Meta_mkLambdaFVars(v_xs_706_, v_a_715_, v_a_704_, v___x_705_, v_a_704_, v___x_705_, v___x_716_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
return v___x_717_;
}
else
{
return v___x_714_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit___boxed(lean_object* v_explicitOnly_718_, lean_object* v_skipTypes_719_, lean_object* v_skipProofs_720_, lean_object* v_e_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
uint8_t v_explicitOnly_boxed_728_; uint8_t v_skipTypes_boxed_729_; uint8_t v_skipProofs_boxed_730_; lean_object* v_res_731_; 
v_explicitOnly_boxed_728_ = lean_unbox(v_explicitOnly_718_);
v_skipTypes_boxed_729_ = lean_unbox(v_skipTypes_719_);
v_skipProofs_boxed_730_ = lean_unbox(v_skipProofs_720_);
v_res_731_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_boxed_728_, v_skipTypes_boxed_729_, v_skipProofs_boxed_730_, v_e_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg___boxed(lean_object* v_explicitOnly_732_, lean_object* v_skipTypes_733_, lean_object* v_skipProofs_734_, lean_object* v_upperBound_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_b_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
uint8_t v_explicitOnly_boxed_746_; uint8_t v_skipTypes_boxed_747_; uint8_t v_skipProofs_boxed_748_; uint8_t v_a_19596__boxed_749_; lean_object* v_res_750_; 
v_explicitOnly_boxed_746_ = lean_unbox(v_explicitOnly_732_);
v_skipTypes_boxed_747_ = lean_unbox(v_skipTypes_733_);
v_skipProofs_boxed_748_ = lean_unbox(v_skipProofs_734_);
v_a_19596__boxed_749_ = lean_unbox(v_a_737_);
v_res_750_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg(v_explicitOnly_boxed_746_, v_skipTypes_boxed_747_, v_skipProofs_boxed_748_, v_upperBound_735_, v_a_736_, v_a_19596__boxed_749_, v_a_738_, v_b_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v_a_736_);
lean_dec(v_upperBound_735_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1(uint8_t v_explicitOnly_751_, uint8_t v_skipTypes_752_, uint8_t v_skipProofs_753_, lean_object* v_upperBound_754_, lean_object* v_a_755_, uint8_t v_a_756_, lean_object* v_inst_757_, lean_object* v_R_758_, lean_object* v_a_759_, lean_object* v_b_760_, lean_object* v_c_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___redArg(v_explicitOnly_751_, v_skipTypes_752_, v_skipProofs_753_, v_upperBound_754_, v_a_755_, v_a_756_, v_a_759_, v_b_760_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1___boxed(lean_object** _args){
lean_object* v_explicitOnly_769_ = _args[0];
lean_object* v_skipTypes_770_ = _args[1];
lean_object* v_skipProofs_771_ = _args[2];
lean_object* v_upperBound_772_ = _args[3];
lean_object* v_a_773_ = _args[4];
lean_object* v_a_774_ = _args[5];
lean_object* v_inst_775_ = _args[6];
lean_object* v_R_776_ = _args[7];
lean_object* v_a_777_ = _args[8];
lean_object* v_b_778_ = _args[9];
lean_object* v_c_779_ = _args[10];
lean_object* v___y_780_ = _args[11];
lean_object* v___y_781_ = _args[12];
lean_object* v___y_782_ = _args[13];
lean_object* v___y_783_ = _args[14];
lean_object* v___y_784_ = _args[15];
lean_object* v___y_785_ = _args[16];
_start:
{
uint8_t v_explicitOnly_boxed_786_; uint8_t v_skipTypes_boxed_787_; uint8_t v_skipProofs_boxed_788_; uint8_t v_a_20115__boxed_789_; lean_object* v_res_790_; 
v_explicitOnly_boxed_786_ = lean_unbox(v_explicitOnly_769_);
v_skipTypes_boxed_787_ = lean_unbox(v_skipTypes_770_);
v_skipProofs_boxed_788_ = lean_unbox(v_skipProofs_771_);
v_a_20115__boxed_789_ = lean_unbox(v_a_774_);
v_res_790_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__1(v_explicitOnly_boxed_786_, v_skipTypes_boxed_787_, v_skipProofs_boxed_788_, v_upperBound_772_, v_a_773_, v_a_20115__boxed_789_, v_inst_775_, v_R_776_, v_a_777_, v_b_778_, v_c_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v_a_773_);
lean_dec(v_upperBound_772_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4(lean_object* v_00_u03b2_791_, lean_object* v_m_792_, lean_object* v_a_793_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___redArg(v_m_792_, v_a_793_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4___boxed(lean_object* v_00_u03b2_795_, lean_object* v_m_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4(v_00_u03b2_795_, v_m_796_, v_a_797_);
lean_dec_ref(v_a_797_);
lean_dec_ref(v_m_796_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6(lean_object* v_00_u03b1_799_, lean_object* v_ref_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___redArg(v_ref_800_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6___boxed(lean_object* v_00_u03b1_805_, lean_object* v_ref_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__6(v_00_u03b1_805_, v_ref_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7(lean_object* v_00_u03b1_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___redArg();
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7___boxed(lean_object* v_00_u03b1_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5_spec__7(v_00_u03b1_816_, v___y_817_, v___y_818_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5(lean_object* v_00_u03b1_821_, lean_object* v_x_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___redArg(v_x_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5___boxed(lean_object* v_00_u03b1_830_, lean_object* v_x_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__5(v_00_u03b1_830_, v_x_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6(lean_object* v_00_u03b2_839_, lean_object* v_m_840_, lean_object* v_a_841_, lean_object* v_b_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6___redArg(v_m_840_, v_a_841_, v_b_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4(lean_object* v_00_u03b2_844_, lean_object* v_a_845_, lean_object* v_x_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___redArg(v_a_845_, v_x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4___boxed(lean_object* v_00_u03b2_848_, lean_object* v_a_849_, lean_object* v_x_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__4_spec__4(v_00_u03b2_848_, v_a_849_, v_x_850_);
lean_dec(v_x_850_);
lean_dec_ref(v_a_849_);
return v_res_851_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9(lean_object* v_00_u03b2_852_, lean_object* v_a_853_, lean_object* v_x_854_){
_start:
{
uint8_t v___x_855_; 
v___x_855_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___redArg(v_a_853_, v_x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9___boxed(lean_object* v_00_u03b2_856_, lean_object* v_a_857_, lean_object* v_x_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__9(v_00_u03b2_856_, v_a_857_, v_x_858_);
lean_dec(v_x_858_);
lean_dec_ref(v_a_857_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10(lean_object* v_00_u03b2_861_, lean_object* v_data_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10___redArg(v_data_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11(lean_object* v_00_u03b2_864_, lean_object* v_a_865_, lean_object* v_b_866_, lean_object* v_x_867_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__11___redArg(v_a_865_, v_b_866_, v_x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11(lean_object* v_00_u03b2_869_, lean_object* v_i_870_, lean_object* v_source_871_, lean_object* v_target_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11___redArg(v_i_870_, v_source_871_, v_target_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, lean_object* v_x_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit_spec__6_spec__10_spec__11_spec__12___redArg(v_x_875_, v_x_876_);
return v___x_877_;
}
}
static lean_object* _init_l_Lean_Meta_reduce___closed__0(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_878_ = lean_box(0);
v___x_879_ = lean_unsigned_to_nat(16u);
v___x_880_ = lean_mk_array(v___x_879_, v___x_878_);
return v___x_880_;
}
}
static lean_object* _init_l_Lean_Meta_reduce___closed__1(void){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_881_ = lean_obj_once(&l_Lean_Meta_reduce___closed__0, &l_Lean_Meta_reduce___closed__0_once, _init_l_Lean_Meta_reduce___closed__0);
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
lean_ctor_set(v___x_883_, 1, v___x_881_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduce(lean_object* v_e_884_, uint8_t v_explicitOnly_885_, uint8_t v_skipTypes_886_, uint8_t v_skipProofs_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_obj_once(&l_Lean_Meta_reduce___closed__1, &l_Lean_Meta_reduce___closed__1_once, _init_l_Lean_Meta_reduce___closed__1);
v___x_894_ = lean_st_mk_ref(v___x_893_);
v___x_895_ = l___private_Lean_Meta_Reduce_0__Lean_Meta_reduce_visit(v_explicitOnly_885_, v_skipTypes_886_, v_skipProofs_887_, v_e_884_, v___x_894_, v___y_888_, v___y_889_, v___y_890_, v___y_891_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_904_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_904_ == 0)
{
v___x_898_ = v___x_895_;
v_isShared_899_ = v_isSharedCheck_904_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_895_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_904_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_900_ = lean_st_ref_get(v___x_894_);
lean_dec(v___x_894_);
lean_dec(v___x_900_);
if (v_isShared_899_ == 0)
{
v___x_902_ = v___x_898_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_896_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
else
{
lean_dec(v___x_894_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduce___boxed(lean_object* v_e_905_, lean_object* v_explicitOnly_906_, lean_object* v_skipTypes_907_, lean_object* v_skipProofs_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
uint8_t v_explicitOnly_boxed_914_; uint8_t v_skipTypes_boxed_915_; uint8_t v_skipProofs_boxed_916_; lean_object* v_res_917_; 
v_explicitOnly_boxed_914_ = lean_unbox(v_explicitOnly_906_);
v_skipTypes_boxed_915_ = lean_unbox(v_skipTypes_907_);
v_skipProofs_boxed_916_ = lean_unbox(v_skipProofs_908_);
v_res_917_ = l_Lean_Meta_reduce(v_e_905_, v_explicitOnly_boxed_914_, v_skipTypes_boxed_915_, v_skipProofs_boxed_916_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceAll(lean_object* v_e_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
uint8_t v___x_924_; lean_object* v___x_925_; 
v___x_924_ = 0;
v___x_925_ = l_Lean_Meta_reduce(v_e_918_, v___x_924_, v___x_924_, v___x_924_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceAll___boxed(lean_object* v_e_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Meta_reduceAll(v_e_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
return v_res_932_;
}
}
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Reduce(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Reduce(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Reduce(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Reduce(builtin);
}
#ifdef __cplusplus
}
#endif
