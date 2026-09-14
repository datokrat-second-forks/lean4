// Lean compiler output
// Module: Lean.Compiler.LCNF.MonoTypes
// Imports: public import Lean.Compiler.LCNF.Util public import Lean.Compiler.LCNF.BaseTypes public import Lean.Compiler.LCNF.Irrelevant
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getOtherDeclBaseType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_erasedExpr;
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MonoTypes"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 163, 188, 36, 234, 230, 12, 164)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(15, 104, 138, 221, 40, 128, 66, 209)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 193, 97, 55, 202, 162, 3, 38)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(144, 79, 120, 160, 44, 67, 75, 103)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 5, 59, 84, 4, 22, 180, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "trivialStructureInfoExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(9, 26, 11, 215, 188, 118, 90, 171)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_getParamTypes_go(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_getParamTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_getParamTypes___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getParamTypes___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParamTypes(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_toMonoType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toMonoType___closed__0;
static const lean_string_object l_Lean_Compiler_LCNF_toMonoType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l_Lean_Compiler_LCNF_toMonoType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_toMonoType___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Compiler.LCNF.MonoTypes.0.Lean.Compiler.LCNF.toMonoType.visitApp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Compiler.LCNF.MonoTypes"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcAny"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "monoTypeExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(38, 30, 14, 157, 163, 232, 91, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_monoTypeExt;
static lean_once_cell_t l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "` was not compiled; `compileDecls` must run on inductive types first"};
static const lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(lean_object* v_env_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_, lean_object* v_b_5_){
_start:
{
lean_object* v___y_7_; uint8_t v___x_11_; 
v___x_11_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; lean_object* v_fst_13_; uint8_t v___x_14_; 
v___x_12_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
v_fst_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_fst_13_);
lean_inc_ref(v_env_1_);
v___x_14_ = l_Lean_Environment_contains(v_env_1_, v_fst_13_, v___x_11_);
if (v___x_14_ == 0)
{
v___y_7_ = v_b_5_;
goto v___jp_6_;
}
else
{
lean_object* v___x_15_; 
lean_inc(v___x_12_);
v___x_15_ = lean_array_push(v_b_5_, v___x_12_);
v___y_7_ = v___x_15_;
goto v___jp_6_;
}
}
else
{
lean_dec_ref(v_env_1_);
return v_b_5_;
}
v___jp_6_:
{
size_t v___x_8_; size_t v___x_9_; 
v___x_8_ = ((size_t)1ULL);
v___x_9_ = lean_usize_add(v_i_3_, v___x_8_);
v_i_3_ = v___x_9_;
v_b_5_ = v___y_7_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_16_, lean_object* v_as_17_, lean_object* v_i_18_, lean_object* v_stop_19_, lean_object* v_b_20_){
_start:
{
size_t v_i_boxed_21_; size_t v_stop_boxed_22_; lean_object* v_res_23_; 
v_i_boxed_21_ = lean_unbox_usize(v_i_18_);
lean_dec(v_i_18_);
v_stop_boxed_22_ = lean_unbox_usize(v_stop_19_);
lean_dec(v_stop_19_);
v_res_23_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(v_env_16_, v_as_17_, v_i_boxed_21_, v_stop_boxed_22_, v_b_20_);
lean_dec_ref(v_as_17_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(lean_object* v___x_24_, lean_object* v_env_25_, lean_object* v_s_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_27_ = l_Lean_NameMap_toArray___redArg(v_s_26_);
v___x_28_ = lean_array_get_size(v___x_27_);
v___x_29_ = lean_mk_empty_array_with_capacity(v___x_24_);
v___x_30_ = lean_nat_dec_lt(v___x_24_, v___x_28_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; 
lean_dec_ref(v___x_27_);
lean_dec_ref(v_env_25_);
lean_inc_ref_n(v___x_29_, 2);
v___x_31_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_31_, 0, v___x_29_);
lean_ctor_set(v___x_31_, 1, v___x_29_);
lean_ctor_set(v___x_31_, 2, v___x_29_);
return v___x_31_;
}
else
{
uint8_t v___x_32_; 
v___x_32_ = lean_nat_dec_le(v___x_28_, v___x_28_);
if (v___x_32_ == 0)
{
if (v___x_30_ == 0)
{
lean_object* v___x_33_; 
lean_dec_ref(v___x_27_);
lean_dec_ref(v_env_25_);
lean_inc_ref_n(v___x_29_, 2);
v___x_33_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_33_, 0, v___x_29_);
lean_ctor_set(v___x_33_, 1, v___x_29_);
lean_ctor_set(v___x_33_, 2, v___x_29_);
return v___x_33_;
}
else
{
size_t v___x_34_; size_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_34_ = ((size_t)0ULL);
v___x_35_ = lean_usize_of_nat(v___x_28_);
v___x_36_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(v_env_25_, v___x_27_, v___x_34_, v___x_35_, v___x_29_);
lean_dec_ref(v___x_27_);
lean_inc_ref_n(v___x_36_, 2);
v___x_37_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
lean_ctor_set(v___x_37_, 2, v___x_36_);
return v___x_37_;
}
}
else
{
size_t v___x_38_; size_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = ((size_t)0ULL);
v___x_39_ = lean_usize_of_nat(v___x_28_);
v___x_40_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(v_env_25_, v___x_27_, v___x_38_, v___x_39_, v___x_29_);
lean_dec_ref(v___x_27_);
lean_inc_ref_n(v___x_40_, 2);
v___x_41_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
lean_ctor_set(v___x_41_, 2, v___x_40_);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object* v___x_42_, lean_object* v_env_43_, lean_object* v_s_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(v___x_42_, v_env_43_, v_s_44_);
lean_dec(v_s_44_);
lean_dec(v___x_42_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___f_85_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_));
v___x_86_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_));
v___x_87_ = lean_box(0);
v___x_88_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_86_, v___x_87_, v___f_85_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_();
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0(lean_object* v_type_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_97_; 
lean_inc_ref(v_type_91_);
v___x_97_ = l_Lean_Meta_isProp(v_type_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; uint8_t v___x_99_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_a_98_);
v___x_99_ = lean_unbox(v_a_98_);
lean_dec(v_a_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
lean_dec_ref_known(v___x_97_, 1);
v___x_100_ = l_Lean_Meta_isTypeFormerType(v_type_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_);
return v___x_100_;
}
else
{
lean_dec_ref(v_type_91_);
return v___x_97_;
}
}
else
{
lean_dec_ref(v_type_91_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0___boxed(lean_object* v_type_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0(v_type_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(lean_object* v_declName_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___f_113_ = ((lean_object*)(l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0));
v___x_114_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
v___x_115_ = l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(v___x_114_, v___f_113_, v_declName_109_, v_a_110_, v_a_111_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___boxed(lean_object* v_declName_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(v_declName_116_, v_a_117_, v_a_118_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object* v_declName_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
v___x_126_ = l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(v___x_125_, v_declName_121_, v_a_122_, v_a_123_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f___boxed(lean_object* v_declName_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_declName_127_, v_a_128_, v_a_129_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_getParamTypes_go(lean_object* v_type_132_, lean_object* v_r_133_){
_start:
{
if (lean_obj_tag(v_type_132_) == 7)
{
lean_object* v_binderType_134_; lean_object* v_body_135_; lean_object* v___x_136_; 
v_binderType_134_ = lean_ctor_get(v_type_132_, 1);
lean_inc_ref(v_binderType_134_);
v_body_135_ = lean_ctor_get(v_type_132_, 2);
lean_inc_ref(v_body_135_);
lean_dec_ref_known(v_type_132_, 3);
v___x_136_ = lean_array_push(v_r_133_, v_binderType_134_);
v_type_132_ = v_body_135_;
v_r_133_ = v___x_136_;
goto _start;
}
else
{
lean_dec_ref(v_type_132_);
return v_r_133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParamTypes(lean_object* v_type_140_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = ((lean_object*)(l_Lean_Compiler_LCNF_getParamTypes___closed__0));
v___x_142_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_getParamTypes_go(v_type_140_, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(lean_object* v_msg_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___f_148_; lean_object* v___x_3010__overap_149_; lean_object* v___x_150_; 
v___f_148_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0));
v___x_3010__overap_149_ = lean_panic_fn_borrowed(v___f_148_, v_msg_144_);
lean_inc(v___y_146_);
lean_inc_ref(v___y_145_);
v___x_150_ = lean_apply_3(v___x_3010__overap_149_, v___y_145_, v___y_146_, lean_box(0));
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___boxed(lean_object* v_msg_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(v_msg_151_, v___y_152_, v___y_153_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
return v_res_155_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMonoType___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v_dummy_157_; 
v___x_156_ = lean_box(0);
v_dummy_157_ = l_Lean_Expr_sort___override(v___x_156_);
return v_dummy_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object* v_type_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_type_163_; 
v_type_163_ = l_Lean_Expr_headBeta(v_type_159_);
switch(lean_obj_tag(v_type_163_))
{
case 4:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = ((lean_object*)(l_Lean_Compiler_LCNF_getParamTypes___closed__0));
v___x_165_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(v_type_163_, v___x_164_, v_a_160_, v_a_161_);
return v___x_165_;
}
case 5:
{
lean_object* v_dummy_166_; lean_object* v_nargs_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_dummy_166_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMonoType___closed__0, &l_Lean_Compiler_LCNF_toMonoType___closed__0_once, _init_l_Lean_Compiler_LCNF_toMonoType___closed__0);
v_nargs_167_ = l_Lean_Expr_getAppNumArgs(v_type_163_);
lean_inc(v_nargs_167_);
v___x_168_ = lean_mk_array(v_nargs_167_, v_dummy_166_);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_nat_sub(v_nargs_167_, v___x_169_);
lean_dec(v_nargs_167_);
v___x_171_ = l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(v_type_163_, v___x_168_, v___x_170_, v_a_160_, v_a_161_);
return v___x_171_;
}
case 7:
{
lean_object* v_binderName_172_; lean_object* v_binderType_173_; lean_object* v_body_174_; uint8_t v_binderInfo_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_binderName_172_ = lean_ctor_get(v_type_163_, 0);
lean_inc(v_binderName_172_);
v_binderType_173_ = lean_ctor_get(v_type_163_, 1);
lean_inc_ref(v_binderType_173_);
v_body_174_ = lean_ctor_get(v_type_163_, 2);
lean_inc_ref(v_body_174_);
v_binderInfo_175_ = lean_ctor_get_uint8(v_type_163_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_163_, 3);
v___x_176_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_177_ = lean_expr_instantiate1(v_body_174_, v___x_176_);
lean_dec_ref(v_body_174_);
v___x_178_ = l_Lean_Compiler_LCNF_toMonoType(v___x_177_, v_a_160_, v_a_161_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_205_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_205_ == 0)
{
v___x_181_ = v___x_178_;
v_isShared_182_ = v_isSharedCheck_205_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_205_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___y_184_; lean_object* v___y_185_; 
if (lean_obj_tag(v_a_179_) == 4)
{
lean_object* v_declName_196_; 
v_declName_196_ = lean_ctor_get(v_a_179_, 0);
if (lean_obj_tag(v_declName_196_) == 1)
{
lean_object* v_pre_197_; 
v_pre_197_ = lean_ctor_get(v_declName_196_, 0);
if (lean_obj_tag(v_pre_197_) == 0)
{
lean_object* v_str_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_str_198_ = lean_ctor_get(v_declName_196_, 1);
v___x_199_ = ((lean_object*)(l_Lean_Compiler_LCNF_toMonoType___closed__1));
v___x_200_ = lean_string_dec_eq(v_str_198_, v___x_199_);
if (v___x_200_ == 0)
{
lean_del_object(v___x_181_);
v___y_184_ = v_a_160_;
v___y_185_ = v_a_161_;
goto v___jp_183_;
}
else
{
lean_object* v___x_201_; lean_object* v___x_203_; 
lean_dec_ref_known(v_a_179_, 2);
lean_dec_ref(v_binderType_173_);
lean_dec(v_binderName_172_);
v___x_201_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_201_);
v___x_203_ = v___x_181_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
else
{
lean_del_object(v___x_181_);
v___y_184_ = v_a_160_;
v___y_185_ = v_a_161_;
goto v___jp_183_;
}
}
else
{
lean_del_object(v___x_181_);
v___y_184_ = v_a_160_;
v___y_185_ = v_a_161_;
goto v___jp_183_;
}
}
else
{
lean_del_object(v___x_181_);
v___y_184_ = v_a_160_;
v___y_185_ = v_a_161_;
goto v___jp_183_;
}
v___jp_183_:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_173_, v___y_184_, v___y_185_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_195_; 
v_a_187_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_195_ == 0)
{
v___x_189_ = v___x_186_;
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = l_Lean_Expr_forallE___override(v_binderName_172_, v_a_187_, v_a_179_, v_binderInfo_175_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_191_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_dec(v_a_179_);
lean_dec(v_binderName_172_);
return v___x_186_;
}
}
}
}
else
{
lean_dec_ref(v_binderType_173_);
lean_dec(v_binderName_172_);
return v___x_178_;
}
}
case 3:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec_ref_known(v_type_163_, 1);
v___x_206_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
return v___x_207_;
}
case 10:
{
lean_object* v_data_208_; lean_object* v_expr_209_; lean_object* v___x_210_; 
v_data_208_ = lean_ctor_get(v_type_163_, 0);
lean_inc(v_data_208_);
v_expr_209_ = lean_ctor_get(v_type_163_, 1);
lean_inc_ref(v_expr_209_);
lean_dec_ref_known(v_type_163_, 2);
v___x_210_ = l_Lean_Compiler_LCNF_toMonoType(v_expr_209_, v_a_160_, v_a_161_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_219_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_219_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_219_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_219_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_215_ = l_Lean_Expr_mdata___override(v_data_208_, v_a_211_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_215_);
v___x_217_ = v___x_213_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
else
{
lean_dec(v_data_208_);
return v___x_210_;
}
}
default: 
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec_ref(v_type_163_);
v___x_220_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_225_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2));
v___x_226_ = lean_unsigned_to_nat(50u);
v___x_227_ = lean_unsigned_to_nat(81u);
v___x_228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1));
v___x_229_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0));
v___x_230_ = l_mkPanicMessageWithDecl(v___x_229_, v___x_228_, v___x_227_, v___x_226_, v___x_225_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(uint8_t v___x_231_, lean_object* v_as_232_, size_t v_sz_233_, size_t v_i_234_, lean_object* v_b_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_a_240_; uint8_t v___x_244_; 
v___x_244_ = lean_usize_dec_lt(v_i_234_, v_sz_233_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v_b_235_);
return v___x_245_;
}
else
{
lean_object* v_fst_246_; lean_object* v_snd_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_296_; 
v_fst_246_ = lean_ctor_get(v_b_235_, 0);
v_snd_247_ = lean_ctor_get(v_b_235_, 1);
v_isSharedCheck_296_ = !lean_is_exclusive(v_b_235_);
if (v_isSharedCheck_296_ == 0)
{
v___x_249_ = v_b_235_;
v_isShared_250_ = v_isSharedCheck_296_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_snd_247_);
lean_inc(v_fst_246_);
lean_dec(v_b_235_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_296_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; 
lean_inc(v_snd_247_);
v___x_251_ = l_Lean_Expr_headBeta(v_snd_247_);
if (lean_obj_tag(v___x_251_) == 7)
{
lean_object* v_binderType_252_; lean_object* v_body_253_; lean_object* v_a_254_; lean_object* v___x_255_; lean_object* v_result_257_; uint8_t v___y_275_; 
lean_dec(v_snd_247_);
v_binderType_252_ = lean_ctor_get(v___x_251_, 1);
lean_inc_ref(v_binderType_252_);
v_body_253_ = lean_ctor_get(v___x_251_, 2);
lean_inc_ref(v_body_253_);
lean_dec_ref_known(v___x_251_, 3);
v_a_254_ = lean_array_uget_borrowed(v_as_232_, v_i_234_);
lean_inc(v_a_254_);
v___x_255_ = l_Lean_Expr_headBeta(v_a_254_);
switch(lean_obj_tag(v_binderType_252_))
{
case 4:
{
lean_object* v_declName_278_; 
v_declName_278_ = lean_ctor_get(v_binderType_252_, 0);
lean_inc(v_declName_278_);
lean_dec_ref_known(v_binderType_252_, 2);
if (lean_obj_tag(v_declName_278_) == 1)
{
lean_object* v_pre_279_; 
v_pre_279_ = lean_ctor_get(v_declName_278_, 0);
if (lean_obj_tag(v_pre_279_) == 0)
{
lean_object* v_str_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v_str_280_ = lean_ctor_get(v_declName_278_, 1);
lean_inc_ref(v_str_280_);
lean_dec_ref_known(v_declName_278_, 2);
v___x_281_ = ((lean_object*)(l_Lean_Compiler_LCNF_toMonoType___closed__1));
v___x_282_ = lean_string_dec_eq(v_str_280_, v___x_281_);
lean_dec_ref(v_str_280_);
if (v___x_282_ == 0)
{
v___y_275_ = v___x_231_;
goto v___jp_274_;
}
else
{
goto v___jp_262_;
}
}
else
{
lean_dec_ref_known(v_declName_278_, 2);
v___y_275_ = v___x_231_;
goto v___jp_274_;
}
}
else
{
lean_dec(v_declName_278_);
v___y_275_ = v___x_231_;
goto v___jp_274_;
}
}
case 3:
{
lean_dec_ref_known(v_binderType_252_, 1);
goto v___jp_262_;
}
default: 
{
lean_dec_ref(v_binderType_252_);
v___y_275_ = v___x_231_;
goto v___jp_274_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_258_ = lean_expr_instantiate1(v_body_253_, v___x_255_);
lean_dec_ref(v___x_255_);
lean_dec_ref(v_body_253_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v___x_258_);
lean_ctor_set(v___x_249_, 0, v_result_257_);
v___x_260_ = v___x_249_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_result_257_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_258_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
v_a_240_ = v___x_260_;
goto v___jp_239_;
}
}
v___jp_262_:
{
lean_object* v___x_263_; 
lean_inc_ref(v___x_255_);
v___x_263_ = l_Lean_Compiler_LCNF_toMonoType(v___x_255_, v___y_236_, v___y_237_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_265_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_264_);
lean_dec_ref_known(v___x_263_, 1);
v___x_265_ = l_Lean_Expr_app___override(v_fst_246_, v_a_264_);
v_result_257_ = v___x_265_;
goto v___jp_256_;
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
lean_dec_ref(v___x_255_);
lean_dec_ref(v_body_253_);
lean_del_object(v___x_249_);
lean_dec(v_fst_246_);
v_a_266_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_263_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_263_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
v___jp_274_:
{
if (v___y_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_277_ = l_Lean_Expr_app___override(v_fst_246_, v___x_276_);
v_result_257_ = v___x_277_;
goto v___jp_256_;
}
else
{
goto v___jp_262_;
}
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec_ref(v___x_251_);
v___x_283_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3);
v___x_284_ = l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(v___x_283_, v___y_236_, v___y_237_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v___x_286_; 
lean_dec_ref_known(v___x_284_, 1);
if (v_isShared_250_ == 0)
{
v___x_286_ = v___x_249_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_fst_246_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_snd_247_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
v_a_240_ = v___x_286_;
goto v___jp_239_;
}
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_del_object(v___x_249_);
lean_dec(v_snd_247_);
lean_dec(v_fst_246_);
v_a_288_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_284_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_284_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
}
}
v___jp_239_:
{
size_t v___x_241_; size_t v___x_242_; 
v___x_241_ = ((size_t)1ULL);
v___x_242_ = lean_usize_add(v_i_234_, v___x_241_);
v_i_234_ = v___x_242_;
v_b_235_ = v_a_240_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(lean_object* v_f_298_, lean_object* v_args_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
if (lean_obj_tag(v_f_298_) == 4)
{
lean_object* v_declName_303_; lean_object* v_us_304_; lean_object* v___x_305_; lean_object* v___y_307_; lean_object* v___y_308_; 
v_declName_303_ = lean_ctor_get(v_f_298_, 0);
lean_inc(v_declName_303_);
v_us_304_ = lean_ctor_get(v_f_298_, 1);
lean_inc(v_us_304_);
lean_dec_ref_known(v_f_298_, 2);
v___x_305_ = l_Lean_instInhabitedExpr;
if (lean_obj_tag(v_declName_303_) == 1)
{
lean_object* v_pre_368_; 
v_pre_368_ = lean_ctor_get(v_declName_303_, 0);
if (lean_obj_tag(v_pre_368_) == 0)
{
lean_object* v_str_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v_str_369_ = lean_ctor_get(v_declName_303_, 1);
v___x_370_ = ((lean_object*)(l_Lean_Compiler_LCNF_toMonoType___closed__1));
v___x_371_ = lean_string_dec_eq(v_str_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0));
v___x_373_ = lean_string_dec_eq(v_str_369_, v___x_372_);
if (v___x_373_ == 0)
{
v___y_307_ = v_a_300_;
v___y_308_ = v_a_301_;
goto v___jp_306_;
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; 
lean_dec_ref_known(v_declName_303_, 2);
lean_dec(v_us_304_);
lean_dec_ref(v_args_299_);
v___x_374_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
return v___x_375_;
}
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; 
lean_dec_ref_known(v_declName_303_, 2);
lean_dec(v_us_304_);
lean_dec_ref(v_args_299_);
v___x_376_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
else
{
v___y_307_ = v_a_300_;
v___y_308_ = v_a_301_;
goto v___jp_306_;
}
}
else
{
v___y_307_ = v_a_300_;
v___y_308_ = v_a_301_;
goto v___jp_306_;
}
v___jp_306_:
{
lean_object* v___x_309_; 
lean_inc(v_declName_303_);
v___x_309_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_declName_303_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_310_);
lean_dec_ref_known(v___x_309_, 1);
if (lean_obj_tag(v_a_310_) == 1)
{
lean_object* v_val_311_; lean_object* v_ctorName_312_; lean_object* v_numParams_313_; lean_object* v_fieldIdx_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v_us_304_);
lean_dec(v_declName_303_);
v_val_311_ = lean_ctor_get(v_a_310_, 0);
lean_inc(v_val_311_);
lean_dec_ref_known(v_a_310_, 1);
v_ctorName_312_ = lean_ctor_get(v_val_311_, 0);
lean_inc(v_ctorName_312_);
v_numParams_313_ = lean_ctor_get(v_val_311_, 1);
lean_inc(v_numParams_313_);
v_fieldIdx_314_ = lean_ctor_get(v_val_311_, 2);
lean_inc(v_fieldIdx_314_);
lean_dec(v_val_311_);
v___x_315_ = lean_box(0);
v___x_316_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_ctorName_312_, v___x_315_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_316_, 1);
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = l_Array_toSubarray___redArg(v_args_299_, v___x_318_, v_numParams_313_);
v___x_320_ = l_Subarray_copy___redArg(v___x_319_);
v___x_321_ = l_Lean_Compiler_LCNF_instantiateForall(v_a_317_, v___x_320_, v___y_307_, v___y_308_);
lean_dec_ref(v___x_320_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_a_322_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_321_, 1);
v___x_323_ = l_Lean_Compiler_LCNF_getParamTypes(v_a_322_);
v___x_324_ = lean_array_get(v___x_305_, v___x_323_, v_fieldIdx_314_);
lean_dec(v_fieldIdx_314_);
lean_dec_ref(v___x_323_);
v___x_325_ = l_Lean_Compiler_LCNF_toMonoType(v___x_324_, v___y_307_, v___y_308_);
return v___x_325_;
}
else
{
lean_dec(v_fieldIdx_314_);
return v___x_321_;
}
}
else
{
lean_dec(v_fieldIdx_314_);
lean_dec(v_numParams_313_);
lean_dec_ref(v_args_299_);
return v___x_316_;
}
}
else
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
lean_dec(v_a_310_);
v___x_326_ = lean_box(0);
lean_inc(v_declName_303_);
v___x_327_ = l_Lean_mkConst(v_declName_303_, v___x_326_);
v___x_328_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_declName_303_, v_us_304_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_359_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_359_ == 0)
{
v___x_331_ = v___x_328_;
v_isShared_332_ = v_isSharedCheck_359_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_328_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_359_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
uint8_t v___x_333_; 
v___x_333_ = l_Lean_Expr_isErased(v_a_329_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; size_t v_sz_335_; size_t v___x_336_; lean_object* v___x_337_; 
lean_del_object(v___x_331_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_327_);
lean_ctor_set(v___x_334_, 1, v_a_329_);
v_sz_335_ = lean_array_size(v_args_299_);
v___x_336_ = ((size_t)0ULL);
v___x_337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(v___x_333_, v_args_299_, v_sz_335_, v___x_336_, v___x_334_, v___y_307_, v___y_308_);
lean_dec_ref(v_args_299_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_346_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_346_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_346_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_346_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v_fst_342_; lean_object* v___x_344_; 
v_fst_342_ = lean_ctor_get(v_a_338_, 0);
lean_inc(v_fst_342_);
lean_dec(v_a_338_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v_fst_342_);
v___x_344_ = v___x_340_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_fst_342_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
v_a_347_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_337_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_337_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
else
{
lean_object* v___x_355_; lean_object* v___x_357_; 
lean_dec(v_a_329_);
lean_dec_ref(v___x_327_);
lean_dec_ref(v_args_299_);
v___x_355_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_355_);
v___x_357_ = v___x_331_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
else
{
lean_dec_ref(v___x_327_);
lean_dec_ref(v_args_299_);
return v___x_328_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_us_304_);
lean_dec(v_declName_303_);
lean_dec_ref(v_args_299_);
v_a_360_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_309_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_309_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; 
lean_dec_ref(v_args_299_);
lean_dec_ref(v_f_298_);
v___x_378_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
return v___x_379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(lean_object* v_x_380_, lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
if (lean_obj_tag(v_x_380_) == 5)
{
lean_object* v_fn_386_; lean_object* v_arg_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_fn_386_ = lean_ctor_get(v_x_380_, 0);
lean_inc_ref(v_fn_386_);
v_arg_387_ = lean_ctor_get(v_x_380_, 1);
lean_inc_ref(v_arg_387_);
lean_dec_ref_known(v_x_380_, 2);
v___x_388_ = lean_array_set(v_x_381_, v_x_382_, v_arg_387_);
v___x_389_ = lean_unsigned_to_nat(1u);
v___x_390_ = lean_nat_sub(v_x_382_, v___x_389_);
lean_dec(v_x_382_);
v_x_380_ = v_fn_386_;
v_x_381_ = v___x_388_;
v_x_382_ = v___x_390_;
goto _start;
}
else
{
lean_object* v___x_392_; 
lean_dec(v_x_382_);
v___x_392_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(v_x_380_, v_x_381_, v___y_383_, v___y_384_);
return v___x_392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3___boxed(lean_object* v_x_393_, lean_object* v_x_394_, lean_object* v_x_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(v_x_393_, v_x_394_, v_x_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType___boxed(lean_object* v_type_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Compiler_LCNF_toMonoType(v_type_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___boxed(lean_object* v___x_405_, lean_object* v_as_406_, lean_object* v_sz_407_, lean_object* v_i_408_, lean_object* v_b_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
uint8_t v___x_3486__boxed_413_; size_t v_sz_boxed_414_; size_t v_i_boxed_415_; lean_object* v_res_416_; 
v___x_3486__boxed_413_ = lean_unbox(v___x_405_);
v_sz_boxed_414_ = lean_unbox_usize(v_sz_407_);
lean_dec(v_sz_407_);
v_i_boxed_415_ = lean_unbox_usize(v_i_408_);
lean_dec(v_i_408_);
v_res_416_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(v___x_3486__boxed_413_, v_as_406_, v_sz_boxed_414_, v_i_boxed_415_, v_b_409_, v___y_410_, v___y_411_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec_ref(v_as_406_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___boxed(lean_object* v_f_417_, lean_object* v_args_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(v_f_417_, v_args_418_, v_a_419_, v_a_420_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(lean_object* v_env_423_, lean_object* v_as_424_, size_t v_i_425_, size_t v_stop_426_, lean_object* v_b_427_){
_start:
{
lean_object* v___y_429_; uint8_t v___x_433_; 
v___x_433_ = lean_usize_dec_eq(v_i_425_, v_stop_426_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v_fst_435_; uint8_t v___x_436_; 
v___x_434_ = lean_array_uget_borrowed(v_as_424_, v_i_425_);
v_fst_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_fst_435_);
lean_inc_ref(v_env_423_);
v___x_436_ = l_Lean_Environment_contains(v_env_423_, v_fst_435_, v___x_433_);
if (v___x_436_ == 0)
{
v___y_429_ = v_b_427_;
goto v___jp_428_;
}
else
{
lean_object* v___x_437_; 
lean_inc(v___x_434_);
v___x_437_ = lean_array_push(v_b_427_, v___x_434_);
v___y_429_ = v___x_437_;
goto v___jp_428_;
}
}
else
{
lean_dec_ref(v_env_423_);
return v_b_427_;
}
v___jp_428_:
{
size_t v___x_430_; size_t v___x_431_; 
v___x_430_ = ((size_t)1ULL);
v___x_431_ = lean_usize_add(v_i_425_, v___x_430_);
v_i_425_ = v___x_431_;
v_b_427_ = v___y_429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_438_, lean_object* v_as_439_, lean_object* v_i_440_, lean_object* v_stop_441_, lean_object* v_b_442_){
_start:
{
size_t v_i_boxed_443_; size_t v_stop_boxed_444_; lean_object* v_res_445_; 
v_i_boxed_443_ = lean_unbox_usize(v_i_440_);
lean_dec(v_i_440_);
v_stop_boxed_444_ = lean_unbox_usize(v_stop_441_);
lean_dec(v_stop_441_);
v_res_445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(v_env_438_, v_as_439_, v_i_boxed_443_, v_stop_boxed_444_, v_b_442_);
lean_dec_ref(v_as_439_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(lean_object* v_env_450_, lean_object* v_s_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_452_ = l_Lean_NameMap_toArray___redArg(v_s_451_);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_array_get_size(v___x_452_);
v___x_455_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_456_ = lean_nat_dec_lt(v___x_453_, v___x_454_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; 
lean_dec_ref(v___x_452_);
lean_dec_ref(v_env_450_);
v___x_457_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
return v___x_457_;
}
else
{
uint8_t v___x_458_; 
v___x_458_ = lean_nat_dec_le(v___x_454_, v___x_454_);
if (v___x_458_ == 0)
{
if (v___x_456_ == 0)
{
lean_object* v___x_459_; 
lean_dec_ref(v___x_452_);
lean_dec_ref(v_env_450_);
v___x_459_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
return v___x_459_;
}
else
{
size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_460_ = ((size_t)0ULL);
v___x_461_ = lean_usize_of_nat(v___x_454_);
v___x_462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(v_env_450_, v___x_452_, v___x_460_, v___x_461_, v___x_455_);
lean_dec_ref(v___x_452_);
lean_inc_ref_n(v___x_462_, 2);
v___x_463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
lean_ctor_set(v___x_463_, 2, v___x_462_);
return v___x_463_;
}
}
else
{
size_t v___x_464_; size_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_464_ = ((size_t)0ULL);
v___x_465_ = lean_usize_of_nat(v___x_454_);
v___x_466_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(v_env_450_, v___x_452_, v___x_464_, v___x_465_, v___x_455_);
lean_dec_ref(v___x_452_);
lean_inc_ref_n(v___x_466_, 2);
v___x_467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
lean_ctor_set(v___x_467_, 2, v___x_466_);
return v___x_467_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object* v_env_468_, lean_object* v_s_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(v_env_468_, v_s_469_);
lean_dec(v_s_469_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___f_479_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_480_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_481_ = lean_box(0);
v___x_482_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_480_, v___x_481_, v___f_479_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_();
return v_res_484_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0(void){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_485_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1);
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType(lean_object* v_declName_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v_env_496_; lean_object* v___x_497_; lean_object* v_toEnvExtension_498_; lean_object* v_asyncMode_499_; uint8_t v___x_500_; lean_object* v___x_501_; 
v___x_494_ = l_Lean_instInhabitedExpr;
v___x_495_ = lean_st_ref_get(v_a_492_);
v_env_496_ = lean_ctor_get(v___x_495_, 0);
lean_inc_ref(v_env_496_);
lean_dec(v___x_495_);
v___x_497_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_498_ = lean_ctor_get(v___x_497_, 0);
v_asyncMode_499_ = lean_ctor_get(v_toEnvExtension_498_, 2);
v___x_500_ = 0;
lean_inc(v_declName_490_);
v___x_501_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_494_, v___x_497_, v_env_496_, v_declName_490_, v_asyncMode_499_, v___x_500_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = lean_box(0);
lean_inc(v_declName_490_);
v___x_503_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_declName_490_, v___x_502_, v_a_491_, v_a_492_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_505_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v___x_505_ = l_Lean_Compiler_LCNF_toMonoType(v_a_504_, v_a_491_, v_a_492_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_534_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_534_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_534_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_534_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v_env_511_; lean_object* v_nextMacroScope_512_; lean_object* v_ngen_513_; lean_object* v_auxDeclNGen_514_; lean_object* v_traceState_515_; lean_object* v_messages_516_; lean_object* v_infoState_517_; lean_object* v_snapshotTasks_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_532_; 
v___x_510_ = lean_st_ref_take(v_a_492_);
v_env_511_ = lean_ctor_get(v___x_510_, 0);
v_nextMacroScope_512_ = lean_ctor_get(v___x_510_, 1);
v_ngen_513_ = lean_ctor_get(v___x_510_, 2);
v_auxDeclNGen_514_ = lean_ctor_get(v___x_510_, 3);
v_traceState_515_ = lean_ctor_get(v___x_510_, 4);
v_messages_516_ = lean_ctor_get(v___x_510_, 6);
v_infoState_517_ = lean_ctor_get(v___x_510_, 7);
v_snapshotTasks_518_ = lean_ctor_get(v___x_510_, 8);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v___x_510_, 5);
lean_dec(v_unused_533_);
v___x_520_ = v___x_510_;
v_isShared_521_ = v_isSharedCheck_532_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_snapshotTasks_518_);
lean_inc(v_infoState_517_);
lean_inc(v_messages_516_);
lean_inc(v_traceState_515_);
lean_inc(v_auxDeclNGen_514_);
lean_inc(v_ngen_513_);
lean_inc(v_nextMacroScope_512_);
lean_inc(v_env_511_);
lean_dec(v___x_510_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_532_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_526_; 
v___x_522_ = lean_box(0);
v___x_523_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_497_, v_env_511_, v_declName_490_, v_a_506_);
v___x_524_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 5, v___x_524_);
lean_ctor_set(v___x_520_, 0, v___x_523_);
v___x_526_ = v___x_520_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_523_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_nextMacroScope_512_);
lean_ctor_set(v_reuseFailAlloc_531_, 2, v_ngen_513_);
lean_ctor_set(v_reuseFailAlloc_531_, 3, v_auxDeclNGen_514_);
lean_ctor_set(v_reuseFailAlloc_531_, 4, v_traceState_515_);
lean_ctor_set(v_reuseFailAlloc_531_, 5, v___x_524_);
lean_ctor_set(v_reuseFailAlloc_531_, 6, v_messages_516_);
lean_ctor_set(v_reuseFailAlloc_531_, 7, v_infoState_517_);
lean_ctor_set(v_reuseFailAlloc_531_, 8, v_snapshotTasks_518_);
v___x_526_ = v_reuseFailAlloc_531_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_527_ = lean_st_ref_put(v_a_492_, v___x_526_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_522_);
v___x_529_ = v___x_508_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_522_);
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
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec(v_declName_490_);
v_a_535_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_505_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_505_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec(v_declName_490_);
v_a_543_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_503_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_503_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
else
{
lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_558_; 
lean_dec(v_declName_490_);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; 
v_unused_559_ = lean_ctor_get(v___x_501_, 0);
lean_dec(v_unused_559_);
v___x_552_ = v___x_501_;
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
else
{
lean_dec(v___x_501_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_554_ = lean_box(0);
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 0);
lean_ctor_set(v___x_552_, 0, v___x_554_);
v___x_556_ = v___x_552_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___boxed(lean_object* v_declName_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_Compiler_LCNF_setOtherDeclMonoType(v_declName_560_, v_a_561_, v_a_562_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___lam__0(lean_object* v___x_565_, lean_object* v_declName_566_, lean_object* v_a_567_, lean_object* v_x_568_){
_start:
{
lean_object* v_addEntryFn_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_addEntryFn_569_ = lean_ctor_get(v___x_565_, 3);
lean_inc(v_addEntryFn_569_);
lean_dec_ref(v___x_565_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_declName_566_);
lean_ctor_set(v___x_570_, 1, v_a_567_);
v___x_571_ = lean_apply_2(v_addEntryFn_569_, v_x_568_, v___x_570_);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_574_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0);
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_576_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
lean_ctor_set(v___x_576_, 2, v___x_575_);
lean_ctor_set(v___x_576_, 3, v___x_575_);
lean_ctor_set(v___x_576_, 4, v___x_574_);
lean_ctor_set(v___x_576_, 5, v___x_574_);
lean_ctor_set(v___x_576_, 6, v___x_574_);
lean_ctor_set(v___x_576_, 7, v___x_574_);
lean_ctor_set(v___x_576_, 8, v___x_574_);
lean_ctor_set(v___x_576_, 9, v___x_574_);
lean_ctor_set(v___x_576_, 10, v___x_574_);
return v___x_576_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = lean_unsigned_to_nat(32u);
v___x_578_ = lean_mk_empty_array_with_capacity(v___x_577_);
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_580_ = ((size_t)5ULL);
v___x_581_ = lean_unsigned_to_nat(0u);
v___x_582_ = lean_unsigned_to_nat(32u);
v___x_583_ = lean_mk_empty_array_with_capacity(v___x_582_);
v___x_584_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2);
v___x_585_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
lean_ctor_set(v___x_585_, 2, v___x_581_);
lean_ctor_set(v___x_585_, 3, v___x_581_);
lean_ctor_set_usize(v___x_585_, 4, v___x_580_);
return v___x_585_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_586_ = lean_box(1);
v___x_587_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3);
v___x_588_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0);
v___x_589_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
lean_ctor_set(v___x_589_, 2, v___x_586_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(lean_object* v_msgData_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v___x_594_; lean_object* v_toCold_595_; lean_object* v_env_596_; lean_object* v_options_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_594_ = lean_st_ref_get(v___y_592_);
v_toCold_595_ = lean_ctor_get(v___y_591_, 0);
v_env_596_ = lean_ctor_get(v___x_594_, 0);
lean_inc_ref(v_env_596_);
lean_dec(v___x_594_);
v_options_597_ = lean_ctor_get(v_toCold_595_, 2);
v___x_598_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1);
v___x_599_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_597_);
v___x_600_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_600_, 0, v_env_596_);
lean_ctor_set(v___x_600_, 1, v___x_598_);
lean_ctor_set(v___x_600_, 2, v___x_599_);
lean_ctor_set(v___x_600_, 3, v_options_597_);
v___x_601_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v_msgData_590_);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___boxed(lean_object* v_msgData_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(v_msgData_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(lean_object* v_msg_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_ref_612_; lean_object* v___x_613_; lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_622_; 
v_ref_612_ = lean_ctor_get(v___y_609_, 2);
v___x_613_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(v_msg_608_, v___y_609_, v___y_610_);
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_622_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_620_; 
lean_inc(v_ref_612_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v_ref_612_);
lean_ctor_set(v___x_618_, 1, v_a_614_);
if (v_isShared_617_ == 0)
{
lean_ctor_set_tag(v___x_616_, 1);
lean_ctor_set(v___x_616_, 0, v___x_618_);
v___x_620_ = v___x_616_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg___boxed(lean_object* v_msg_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(v_msg_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_627_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = ((lean_object*)(l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0));
v___x_630_ = l_Lean_stringToMessageData(v___x_629_);
return v___x_630_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2));
v___x_633_ = l_Lean_stringToMessageData(v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType(lean_object* v_declName_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v_env_680_; lean_object* v___x_681_; lean_object* v_toEnvExtension_682_; lean_object* v_asyncMode_683_; uint8_t v___x_684_; lean_object* v___x_685_; 
v___x_678_ = l_Lean_instInhabitedExpr;
v___x_679_ = lean_st_ref_get(v_a_636_);
v_env_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc_ref(v_env_680_);
lean_dec(v___x_679_);
v___x_681_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_682_ = lean_ctor_get(v___x_681_, 0);
v_asyncMode_683_ = lean_ctor_get(v_toEnvExtension_682_, 2);
v___x_684_ = 0;
lean_inc(v_declName_634_);
v___x_685_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_678_, v___x_681_, v_env_680_, v_declName_634_, v_asyncMode_683_, v___x_684_);
if (lean_obj_tag(v___x_685_) == 1)
{
lean_object* v_val_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec(v_declName_634_);
v_val_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_val_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
lean_ctor_set_tag(v___x_688_, 0);
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_val_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
else
{
lean_object* v___x_694_; lean_object* v_env_710_; uint8_t v___x_711_; lean_object* v___x_712_; 
lean_dec(v___x_685_);
v___x_694_ = lean_st_ref_get(v_a_636_);
v_env_710_ = lean_ctor_get(v___x_694_, 0);
lean_inc_ref(v_env_710_);
lean_dec(v___x_694_);
v___x_711_ = 0;
lean_inc(v_declName_634_);
v___x_712_ = l_Lean_Environment_find_x3f(v_env_710_, v_declName_634_, v___x_711_);
if (lean_obj_tag(v___x_712_) == 1)
{
lean_object* v_val_713_; 
v_val_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_val_713_);
lean_dec_ref_known(v___x_712_, 1);
switch(lean_obj_tag(v_val_713_))
{
case 5:
{
lean_dec_ref_known(v_val_713_, 1);
goto v___jp_695_;
}
case 6:
{
lean_dec_ref_known(v_val_713_, 1);
goto v___jp_695_;
}
default: 
{
lean_dec(v_val_713_);
v___y_639_ = v_a_635_;
v___y_640_ = v_a_636_;
goto v___jp_638_;
}
}
}
else
{
lean_dec(v___x_712_);
v___y_639_ = v_a_635_;
v___y_640_ = v_a_636_;
goto v___jp_638_;
}
v___jp_695_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
v___x_696_ = lean_obj_once(&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1, &l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1_once, _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1);
v___x_697_ = l_Lean_MessageData_ofName(v_declName_634_);
v___x_698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = lean_obj_once(&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3, &l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3_once, _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3);
v___x_700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(v___x_700_, v_a_635_, v_a_636_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
v___jp_638_:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_box(0);
lean_inc(v_declName_634_);
v___x_642_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_declName_634_, v___x_641_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v___x_644_ = l_Lean_Compiler_LCNF_toMonoType(v_a_643_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_677_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_677_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_677_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_677_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; lean_object* v_env_650_; lean_object* v_nextMacroScope_651_; lean_object* v_ngen_652_; lean_object* v_auxDeclNGen_653_; lean_object* v_traceState_654_; lean_object* v_messages_655_; lean_object* v_infoState_656_; lean_object* v_snapshotTasks_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_675_; 
v___x_649_ = lean_st_ref_take(v___y_640_);
v_env_650_ = lean_ctor_get(v___x_649_, 0);
v_nextMacroScope_651_ = lean_ctor_get(v___x_649_, 1);
v_ngen_652_ = lean_ctor_get(v___x_649_, 2);
v_auxDeclNGen_653_ = lean_ctor_get(v___x_649_, 3);
v_traceState_654_ = lean_ctor_get(v___x_649_, 4);
v_messages_655_ = lean_ctor_get(v___x_649_, 6);
v_infoState_656_ = lean_ctor_get(v___x_649_, 7);
v_snapshotTasks_657_ = lean_ctor_get(v___x_649_, 8);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v___x_649_, 5);
lean_dec(v_unused_676_);
v___x_659_ = v___x_649_;
v_isShared_660_ = v_isSharedCheck_675_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_snapshotTasks_657_);
lean_inc(v_infoState_656_);
lean_inc(v_messages_655_);
lean_inc(v_traceState_654_);
lean_inc(v_auxDeclNGen_653_);
lean_inc(v_ngen_652_);
lean_inc(v_nextMacroScope_651_);
lean_inc(v_env_650_);
lean_dec(v___x_649_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_675_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v_toEnvExtension_662_; lean_object* v_asyncMode_663_; lean_object* v___f_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_669_; 
v___x_661_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_662_ = lean_ctor_get(v___x_661_, 0);
v_asyncMode_663_ = lean_ctor_get(v_toEnvExtension_662_, 2);
lean_inc(v_a_645_);
v___f_664_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_getOtherDeclMonoType___lam__0), 4, 3);
lean_closure_set(v___f_664_, 0, v___x_661_);
lean_closure_set(v___f_664_, 1, v_declName_634_);
lean_closure_set(v___f_664_, 2, v_a_645_);
v___x_665_ = lean_box(0);
v___x_666_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_661_, v_env_650_, v___f_664_, v_asyncMode_663_, v___x_665_);
v___x_667_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 5, v___x_667_);
lean_ctor_set(v___x_659_, 0, v___x_666_);
v___x_669_ = v___x_659_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v_nextMacroScope_651_);
lean_ctor_set(v_reuseFailAlloc_674_, 2, v_ngen_652_);
lean_ctor_set(v_reuseFailAlloc_674_, 3, v_auxDeclNGen_653_);
lean_ctor_set(v_reuseFailAlloc_674_, 4, v_traceState_654_);
lean_ctor_set(v_reuseFailAlloc_674_, 5, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_674_, 6, v_messages_655_);
lean_ctor_set(v_reuseFailAlloc_674_, 7, v_infoState_656_);
lean_ctor_set(v_reuseFailAlloc_674_, 8, v_snapshotTasks_657_);
v___x_669_ = v_reuseFailAlloc_674_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_670_ = lean_st_ref_put(v___y_640_, v___x_669_);
if (v_isShared_648_ == 0)
{
v___x_672_ = v___x_647_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_645_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
}
else
{
lean_dec(v_declName_634_);
return v___x_644_;
}
}
else
{
lean_dec(v_declName_634_);
return v___x_642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___boxed(lean_object* v_declName_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v___y_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Compiler_LCNF_getOtherDeclMonoType(v_declName_714_, v_a_715_, v_a_716_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0(lean_object* v_00_u03b1_719_, lean_object* v_msg_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(v_msg_720_, v___y_721_, v___y_722_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___boxed(lean_object* v_00_u03b1_725_, lean_object* v_msg_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0(v_00_u03b1_725_, v_msg_726_, v___y_727_, v___y_728_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
return v_res_730_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_BaseTypes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_BaseTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_monoTypeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_monoTypeExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Util(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_BaseTypes(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_BaseTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
}
#ifdef __cplusplus
}
#endif
