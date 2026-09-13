// Lean compiler output
// Module: Lean.ProjFns
// Imports: public import Lean.EnvExtension
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
static const lean_ctor_object l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedProjectionFunctionInfo_default = (const lean_object*)&l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedProjectionFunctionInfo = (const lean_object*)&l_Lean_instInhabitedProjectionFunctionInfo_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprProjectionFunctionInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ctorName"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fromClass"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19;
static lean_once_cell_t l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprProjectionFunctionInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprProjectionFunctionInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprProjectionFunctionInfo___closed__0 = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprProjectionFunctionInfo = (const lean_object*)&l_Lean_instReprProjectionFunctionInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "projectionFnInfoExt"};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 172, 107, 39, 139, 106, 85, 71)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_projectionFnInfoExt;
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_isProjectionFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAuxParentProjectionInfo_default = (const lean_object*)&l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAuxParentProjectionInfo = (const lean_object*)&l_Lean_instInhabitedAuxParentProjectionInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__0_value),((lean_object*)&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprAuxParentProjectionInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprAuxParentProjectionInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprAuxParentProjectionInfo___closed__0 = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprAuxParentProjectionInfo = (const lean_object*)&l_Lean_instReprAuxParentProjectionInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "auxParentProjInfoExt"};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(4, 64, 229, 66, 82, 134, 114, 43)}};
static const lean_object* l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_auxParentProjInfoExt;
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getAuxParentProjectionInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprProjectionFunctionInfo_repr_spec__0(lean_object* v_a_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_nat_to_int(v_a_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(12u);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(13u);
v___x_31_ = lean_nat_to_int(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(5u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__0));
v___x_42_ = lean_string_length(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__19);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___redArg(lean_object* v_x_49_){
_start:
{
lean_object* v_ctorName_50_; lean_object* v_numParams_51_; lean_object* v_i_52_; uint8_t v_fromClass_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_ctorName_50_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_ctorName_50_);
v_numParams_51_ = lean_ctor_get(v_x_49_, 1);
lean_inc(v_numParams_51_);
v_i_52_ = lean_ctor_get(v_x_49_, 2);
lean_inc(v_i_52_);
v_fromClass_53_ = lean_ctor_get_uint8(v_x_49_, sizeof(void*)*3);
lean_dec_ref(v_x_49_);
v___x_54_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5));
v___x_55_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__6));
v___x_56_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__7);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = l_Lean_Name_reprPrec(v_ctorName_50_, v___x_57_);
v___x_59_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_56_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = 0;
v___x_61_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_61_, 0, v___x_59_);
lean_ctor_set_uint8(v___x_61_, sizeof(void*)*1, v___x_60_);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_55_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9));
v___x_64_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = lean_box(1);
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__11));
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_54_);
v___x_70_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12);
v___x_71_ = l_Nat_reprFast(v_numParams_51_);
v___x_72_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
v___x_73_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_70_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set_uint8(v___x_74_, sizeof(void*)*1, v___x_60_);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_69_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_63_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_65_);
v___x_78_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__14));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_54_);
v___x_81_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__15);
v___x_82_ = l_Nat_reprFast(v_i_52_);
v___x_83_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
v___x_84_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_81_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___x_60_);
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_80_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_63_);
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_65_);
v___x_89_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17));
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_54_);
v___x_92_ = l_Bool_repr___redArg(v_fromClass_53_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_70_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_60_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_91_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20);
v___x_97_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21));
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_95_);
v___x_99_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_96_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_60_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr(lean_object* v_x_103_, lean_object* v_prec_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_instReprProjectionFunctionInfo_repr___redArg(v_x_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprProjectionFunctionInfo_repr___boxed(lean_object* v_x_106_, lean_object* v_prec_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_instReprProjectionFunctionInfo_repr(v_x_106_, v_prec_107_);
lean_dec(v_prec_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(lean_object* v_env_111_, lean_object* v_as_112_, size_t v_i_113_, size_t v_stop_114_, lean_object* v_b_115_){
_start:
{
lean_object* v___y_117_; uint8_t v___x_121_; 
v___x_121_ = lean_usize_dec_eq(v_i_113_, v_stop_114_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; lean_object* v_fst_123_; uint8_t v___x_124_; 
v___x_122_ = lean_array_uget_borrowed(v_as_112_, v_i_113_);
v_fst_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_fst_123_);
lean_inc_ref(v_env_111_);
v___x_124_ = l_Lean_Environment_contains(v_env_111_, v_fst_123_, v___x_121_);
if (v___x_124_ == 0)
{
v___y_117_ = v_b_115_;
goto v___jp_116_;
}
else
{
lean_object* v___x_125_; 
lean_inc(v___x_122_);
v___x_125_ = lean_array_push(v_b_115_, v___x_122_);
v___y_117_ = v___x_125_;
goto v___jp_116_;
}
}
else
{
lean_dec_ref(v_env_111_);
return v_b_115_;
}
v___jp_116_:
{
size_t v___x_118_; size_t v___x_119_; 
v___x_118_ = ((size_t)1ULL);
v___x_119_ = lean_usize_add(v_i_113_, v___x_118_);
v_i_113_ = v___x_119_;
v_b_115_ = v___y_117_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_126_, lean_object* v_as_127_, lean_object* v_i_128_, lean_object* v_stop_129_, lean_object* v_b_130_){
_start:
{
size_t v_i_boxed_131_; size_t v_stop_boxed_132_; lean_object* v_res_133_; 
v_i_boxed_131_ = lean_unbox_usize(v_i_128_);
lean_dec(v_i_128_);
v_stop_boxed_132_ = lean_unbox_usize(v_stop_129_);
lean_dec(v_stop_129_);
v_res_133_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(v_env_126_, v_as_127_, v_i_boxed_131_, v_stop_boxed_132_, v_b_130_);
lean_dec_ref(v_as_127_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(lean_object* v_env_138_, lean_object* v_s_139_){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_140_ = l_Lean_NameMap_toArray___redArg(v_s_139_);
v___x_141_ = lean_unsigned_to_nat(0u);
v___x_142_ = lean_array_get_size(v___x_140_);
v___x_143_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_144_ = lean_nat_dec_lt(v___x_141_, v___x_142_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; 
lean_dec_ref(v___x_140_);
lean_dec_ref(v_env_138_);
v___x_145_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
return v___x_145_;
}
else
{
uint8_t v___x_146_; 
v___x_146_ = lean_nat_dec_le(v___x_142_, v___x_142_);
if (v___x_146_ == 0)
{
if (v___x_144_ == 0)
{
lean_object* v___x_147_; 
lean_dec_ref(v___x_140_);
lean_dec_ref(v_env_138_);
v___x_147_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
return v___x_147_;
}
else
{
size_t v___x_148_; size_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_148_ = ((size_t)0ULL);
v___x_149_ = lean_usize_of_nat(v___x_142_);
v___x_150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(v_env_138_, v___x_140_, v___x_148_, v___x_149_, v___x_143_);
lean_dec_ref(v___x_140_);
lean_inc_ref_n(v___x_150_, 2);
v___x_151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
lean_ctor_set(v___x_151_, 2, v___x_150_);
return v___x_151_;
}
}
else
{
size_t v___x_152_; size_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_152_ = ((size_t)0ULL);
v___x_153_ = lean_usize_of_nat(v___x_142_);
v___x_154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2__spec__0(v_env_138_, v___x_140_, v___x_152_, v___x_153_, v___x_143_);
lean_dec_ref(v___x_140_);
lean_inc_ref_n(v___x_154_, 2);
v___x_155_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
lean_ctor_set(v___x_155_, 2, v___x_154_);
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object* v_env_156_, lean_object* v_s_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(v_env_156_, v_s_157_);
lean_dec(v_s_157_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___f_168_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_169_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__3_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_170_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_171_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_169_, v___x_170_, v___f_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2____boxed(lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_();
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo(lean_object* v_env_174_, lean_object* v_projName_175_, lean_object* v_ctorName_176_, lean_object* v_numParams_177_, lean_object* v_i_178_, uint8_t v_fromClass_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = l_Lean_projectionFnInfoExt;
v___x_181_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_181_, 0, v_ctorName_176_);
lean_ctor_set(v___x_181_, 1, v_numParams_177_);
lean_ctor_set(v___x_181_, 2, v_i_178_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*3, v_fromClass_179_);
v___x_182_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_180_, v_env_174_, v_projName_175_, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_addProjectionFnInfo___boxed(lean_object* v_env_183_, lean_object* v_projName_184_, lean_object* v_ctorName_185_, lean_object* v_numParams_186_, lean_object* v_i_187_, lean_object* v_fromClass_188_){
_start:
{
uint8_t v_fromClass_boxed_189_; lean_object* v_res_190_; 
v_fromClass_boxed_189_ = lean_unbox(v_fromClass_188_);
v_res_190_ = l_Lean_addProjectionFnInfo(v_env_183_, v_projName_184_, v_ctorName_185_, v_numParams_186_, v_i_187_, v_fromClass_boxed_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object* v_env_191_, lean_object* v_projName_192_){
_start:
{
lean_object* v___x_193_; lean_object* v_toEnvExtension_194_; lean_object* v_asyncMode_195_; lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; 
v___x_193_ = l_Lean_projectionFnInfoExt;
v_toEnvExtension_194_ = lean_ctor_get(v___x_193_, 0);
v_asyncMode_195_ = lean_ctor_get(v_toEnvExtension_194_, 2);
v___x_196_ = ((lean_object*)(l_Lean_instInhabitedProjectionFunctionInfo_default));
v___x_197_ = 0;
v___x_198_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_196_, v___x_193_, v_env_191_, v_projName_192_, v_asyncMode_195_, v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_isProjectionFn(lean_object* v_env_199_, lean_object* v_declName_200_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_201_ = ((lean_object*)(l_Lean_instInhabitedProjectionFunctionInfo_default));
v___x_202_ = l_Lean_projectionFnInfoExt;
v___x_203_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_201_, v___x_202_, v_env_199_, v_declName_200_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_isProjectionFn___boxed(lean_object* v_env_204_, lean_object* v_declName_205_){
_start:
{
uint8_t v_res_206_; lean_object* v_r_207_; 
v_res_206_ = l_Lean_Environment_isProjectionFn(v_env_204_, v_declName_205_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object* v_env_208_, lean_object* v_projName_209_){
_start:
{
lean_object* v___x_210_; 
lean_inc_ref(v_env_208_);
v___x_210_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_208_, v_projName_209_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v___x_211_; 
lean_dec_ref(v_env_208_);
v___x_211_ = lean_box(0);
return v___x_211_;
}
else
{
lean_object* v_val_212_; lean_object* v_ctorName_213_; uint8_t v___x_214_; lean_object* v___x_215_; 
v_val_212_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v___x_210_, 1);
v_ctorName_213_ = lean_ctor_get(v_val_212_, 0);
lean_inc(v_ctorName_213_);
lean_dec(v_val_212_);
v___x_214_ = 0;
v___x_215_ = l_Lean_Environment_find_x3f(v_env_208_, v_ctorName_213_, v___x_214_);
if (lean_obj_tag(v___x_215_) == 1)
{
lean_object* v_val_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_226_; 
v_val_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_226_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_226_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_val_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_226_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
if (lean_obj_tag(v_val_216_) == 6)
{
lean_object* v_val_220_; lean_object* v_induct_221_; lean_object* v___x_223_; 
v_val_220_ = lean_ctor_get(v_val_216_, 0);
lean_inc_ref(v_val_220_);
lean_dec_ref_known(v_val_216_, 1);
v_induct_221_ = lean_ctor_get(v_val_220_, 1);
lean_inc(v_induct_221_);
lean_dec_ref(v_val_220_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v_induct_221_);
v___x_223_ = v___x_218_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_induct_221_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
else
{
lean_object* v___x_225_; 
lean_del_object(v___x_218_);
lean_dec(v_val_216_);
v___x_225_ = lean_box(0);
return v___x_225_;
}
}
}
else
{
lean_object* v___x_227_; 
lean_dec(v___x_215_);
v___x_227_ = lean_box(0);
return v___x_227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg___lam__0(lean_object* v_declName_228_, lean_object* v_toPure_229_, lean_object* v_____do__lift_230_){
_start:
{
uint8_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_231_ = l_Lean_Environment_isProjectionFn(v_____do__lift_230_, v_declName_228_);
v___x_232_ = lean_box(v___x_231_);
v___x_233_ = lean_apply_2(v_toPure_229_, lean_box(0), v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___redArg(lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_declName_236_){
_start:
{
lean_object* v_toApplicative_237_; lean_object* v_toBind_238_; lean_object* v_getEnv_239_; lean_object* v_toPure_240_; lean_object* v___f_241_; lean_object* v___x_242_; 
v_toApplicative_237_ = lean_ctor_get(v_inst_235_, 0);
lean_inc_ref(v_toApplicative_237_);
v_toBind_238_ = lean_ctor_get(v_inst_235_, 1);
lean_inc(v_toBind_238_);
lean_dec_ref(v_inst_235_);
v_getEnv_239_ = lean_ctor_get(v_inst_234_, 0);
lean_inc(v_getEnv_239_);
lean_dec_ref(v_inst_234_);
v_toPure_240_ = lean_ctor_get(v_toApplicative_237_, 1);
lean_inc(v_toPure_240_);
lean_dec_ref(v_toApplicative_237_);
v___f_241_ = lean_alloc_closure((void*)(l_Lean_isProjectionFn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_241_, 0, v_declName_236_);
lean_closure_set(v___f_241_, 1, v_toPure_240_);
v___x_242_ = lean_apply_4(v_toBind_238_, lean_box(0), lean_box(0), v_getEnv_239_, v___f_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn(lean_object* v_m_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_declName_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_isProjectionFn___redArg(v_inst_244_, v_inst_245_, v_declName_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg___lam__0(lean_object* v_declName_248_, lean_object* v_toPure_249_, lean_object* v_____do__lift_250_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_____do__lift_250_, v_declName_248_);
v___x_252_ = lean_apply_2(v_toPure_249_, lean_box(0), v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___redArg(lean_object* v_inst_253_, lean_object* v_inst_254_, lean_object* v_declName_255_){
_start:
{
lean_object* v_toApplicative_256_; lean_object* v_toBind_257_; lean_object* v_getEnv_258_; lean_object* v_toPure_259_; lean_object* v___f_260_; lean_object* v___x_261_; 
v_toApplicative_256_ = lean_ctor_get(v_inst_254_, 0);
lean_inc_ref(v_toApplicative_256_);
v_toBind_257_ = lean_ctor_get(v_inst_254_, 1);
lean_inc(v_toBind_257_);
lean_dec_ref(v_inst_254_);
v_getEnv_258_ = lean_ctor_get(v_inst_253_, 0);
lean_inc(v_getEnv_258_);
lean_dec_ref(v_inst_253_);
v_toPure_259_ = lean_ctor_get(v_toApplicative_256_, 1);
lean_inc(v_toPure_259_);
lean_dec_ref(v_toApplicative_256_);
v___f_260_ = lean_alloc_closure((void*)(l_Lean_getProjectionFnInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_260_, 0, v_declName_255_);
lean_closure_set(v___f_260_, 1, v_toPure_259_);
v___x_261_ = lean_apply_4(v_toBind_257_, lean_box(0), lean_box(0), v_getEnv_258_, v___f_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f(lean_object* v_m_262_, lean_object* v_inst_263_, lean_object* v_inst_264_, lean_object* v_declName_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lean_getProjectionFnInfo_x3f___redArg(v_inst_263_, v_inst_264_, v_declName_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___redArg(lean_object* v_x_278_){
_start:
{
lean_object* v_numParams_279_; uint8_t v_fromClass_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_313_; 
v_numParams_279_ = lean_ctor_get(v_x_278_, 0);
v_fromClass_280_ = lean_ctor_get_uint8(v_x_278_, sizeof(void*)*1);
v_isSharedCheck_313_ = !lean_is_exclusive(v_x_278_);
if (v_isSharedCheck_313_ == 0)
{
v___x_282_ = v_x_278_;
v_isShared_283_ = v_isSharedCheck_313_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_numParams_279_);
lean_dec(v_x_278_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_313_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; lean_object* v___x_292_; 
v___x_284_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__5));
v___x_285_ = ((lean_object*)(l_Lean_instReprAuxParentProjectionInfo_repr___redArg___closed__1));
v___x_286_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__12);
v___x_287_ = l_Nat_reprFast(v_numParams_279_);
v___x_288_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
v___x_289_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_286_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = 0;
if (v_isShared_283_ == 0)
{
lean_ctor_set_tag(v___x_282_, 6);
lean_ctor_set(v___x_282_, 0, v___x_289_);
v___x_292_ = v___x_282_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_289_);
v___x_292_ = v_reuseFailAlloc_312_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
lean_ctor_set_uint8(v___x_292_, sizeof(void*)*1, v___x_290_);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_285_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__9));
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = lean_box(1);
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__17));
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_284_);
v___x_301_ = l_Bool_repr___redArg(v_fromClass_280_);
v___x_302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_286_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_290_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_300_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_obj_once(&l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20, &l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20_once, _init_l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__20);
v___x_306_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__21));
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_304_);
v___x_308_ = ((lean_object*)(l_Lean_instReprProjectionFunctionInfo_repr___redArg___closed__22));
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_305_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*1, v___x_290_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr(lean_object* v_x_314_, lean_object* v_prec_315_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_instReprAuxParentProjectionInfo_repr___redArg(v_x_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprAuxParentProjectionInfo_repr___boxed(lean_object* v_x_317_, lean_object* v_prec_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_instReprAuxParentProjectionInfo_repr(v_x_317_, v_prec_318_);
lean_dec(v_prec_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(lean_object* v_env_322_, lean_object* v_as_323_, size_t v_i_324_, size_t v_stop_325_, lean_object* v_b_326_){
_start:
{
lean_object* v___y_328_; uint8_t v___x_332_; 
v___x_332_ = lean_usize_dec_eq(v_i_324_, v_stop_325_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v_fst_334_; uint8_t v___x_335_; 
v___x_333_ = lean_array_uget_borrowed(v_as_323_, v_i_324_);
v_fst_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_fst_334_);
lean_inc_ref(v_env_322_);
v___x_335_ = l_Lean_Environment_contains(v_env_322_, v_fst_334_, v___x_332_);
if (v___x_335_ == 0)
{
v___y_328_ = v_b_326_;
goto v___jp_327_;
}
else
{
lean_object* v___x_336_; 
lean_inc(v___x_333_);
v___x_336_ = lean_array_push(v_b_326_, v___x_333_);
v___y_328_ = v___x_336_;
goto v___jp_327_;
}
}
else
{
lean_dec_ref(v_env_322_);
return v_b_326_;
}
v___jp_327_:
{
size_t v___x_329_; size_t v___x_330_; 
v___x_329_ = ((size_t)1ULL);
v___x_330_ = lean_usize_add(v_i_324_, v___x_329_);
v_i_324_ = v___x_330_;
v_b_326_ = v___y_328_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_337_, lean_object* v_as_338_, lean_object* v_i_339_, lean_object* v_stop_340_, lean_object* v_b_341_){
_start:
{
size_t v_i_boxed_342_; size_t v_stop_boxed_343_; lean_object* v_res_344_; 
v_i_boxed_342_ = lean_unbox_usize(v_i_339_);
lean_dec(v_i_339_);
v_stop_boxed_343_ = lean_unbox_usize(v_stop_340_);
lean_dec(v_stop_340_);
v_res_344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(v_env_337_, v_as_338_, v_i_boxed_342_, v_stop_boxed_343_, v_b_341_);
lean_dec_ref(v_as_338_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(lean_object* v_env_349_, lean_object* v_s_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_351_ = l_Lean_NameMap_toArray___redArg(v_s_350_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = lean_array_get_size(v___x_351_);
v___x_354_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_355_ = lean_nat_dec_lt(v___x_352_, v___x_353_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
lean_dec_ref(v___x_351_);
lean_dec_ref(v_env_349_);
v___x_356_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
return v___x_356_;
}
else
{
uint8_t v___x_357_; 
v___x_357_ = lean_nat_dec_le(v___x_353_, v___x_353_);
if (v___x_357_ == 0)
{
if (v___x_355_ == 0)
{
lean_object* v___x_358_; 
lean_dec_ref(v___x_351_);
lean_dec_ref(v_env_349_);
v___x_358_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
return v___x_358_;
}
else
{
size_t v___x_359_; size_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_359_ = ((size_t)0ULL);
v___x_360_ = lean_usize_of_nat(v___x_353_);
v___x_361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(v_env_349_, v___x_351_, v___x_359_, v___x_360_, v___x_354_);
lean_dec_ref(v___x_351_);
lean_inc_ref_n(v___x_361_, 2);
v___x_362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
lean_ctor_set(v___x_362_, 2, v___x_361_);
return v___x_362_;
}
}
else
{
size_t v___x_363_; size_t v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_363_ = ((size_t)0ULL);
v___x_364_ = lean_usize_of_nat(v___x_353_);
v___x_365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2__spec__0(v_env_349_, v___x_351_, v___x_363_, v___x_364_, v___x_354_);
lean_dec_ref(v___x_351_);
lean_inc_ref_n(v___x_365_, 2);
v___x_366_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
lean_ctor_set(v___x_366_, 2, v___x_365_);
return v___x_366_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object* v_env_367_, lean_object* v_s_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lean_ProjFns_0__Lean_initFn___lam__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(v_env_367_, v_s_368_);
lean_dec(v_s_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___f_376_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__0_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_377_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__2_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_));
v___x_378_ = ((lean_object*)(l___private_Lean_ProjFns_0__Lean_initFn___closed__4_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_));
v___x_379_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_377_, v___x_378_, v___f_376_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2____boxed(lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_();
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo(lean_object* v_env_382_, lean_object* v_projName_383_, lean_object* v_numParams_384_, uint8_t v_fromClass_385_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = l_Lean_auxParentProjInfoExt;
v___x_387_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_387_, 0, v_numParams_384_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*1, v_fromClass_385_);
v___x_388_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_386_, v_env_382_, v_projName_383_, v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAuxParentProjectionInfo___boxed(lean_object* v_env_389_, lean_object* v_projName_390_, lean_object* v_numParams_391_, lean_object* v_fromClass_392_){
_start:
{
uint8_t v_fromClass_boxed_393_; lean_object* v_res_394_; 
v_fromClass_boxed_393_ = lean_unbox(v_fromClass_392_);
v_res_394_ = l_Lean_addAuxParentProjectionInfo(v_env_389_, v_projName_390_, v_numParams_391_, v_fromClass_boxed_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getAuxParentProjectionInfo_x3f(lean_object* v_env_395_, lean_object* v_projName_396_){
_start:
{
lean_object* v___x_397_; lean_object* v_toEnvExtension_398_; lean_object* v_asyncMode_399_; lean_object* v___x_400_; uint8_t v___x_401_; lean_object* v___x_402_; 
v___x_397_ = l_Lean_auxParentProjInfoExt;
v_toEnvExtension_398_ = lean_ctor_get(v___x_397_, 0);
v_asyncMode_399_ = lean_ctor_get(v_toEnvExtension_398_, 2);
v___x_400_ = ((lean_object*)(l_Lean_instInhabitedAuxParentProjectionInfo_default));
v___x_401_ = 0;
v___x_402_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_400_, v___x_397_, v_env_395_, v_projName_396_, v_asyncMode_399_, v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg___lam__0(lean_object* v_declName_403_, lean_object* v_toPure_404_, lean_object* v_____do__lift_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = l_Lean_Environment_getAuxParentProjectionInfo_x3f(v_____do__lift_405_, v_declName_403_);
v___x_407_ = lean_apply_2(v_toPure_404_, lean_box(0), v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f___redArg(lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_declName_410_){
_start:
{
lean_object* v_toApplicative_411_; lean_object* v_toBind_412_; lean_object* v_getEnv_413_; lean_object* v_toPure_414_; lean_object* v___f_415_; lean_object* v___x_416_; 
v_toApplicative_411_ = lean_ctor_get(v_inst_409_, 0);
lean_inc_ref(v_toApplicative_411_);
v_toBind_412_ = lean_ctor_get(v_inst_409_, 1);
lean_inc(v_toBind_412_);
lean_dec_ref(v_inst_409_);
v_getEnv_413_ = lean_ctor_get(v_inst_408_, 0);
lean_inc(v_getEnv_413_);
lean_dec_ref(v_inst_408_);
v_toPure_414_ = lean_ctor_get(v_toApplicative_411_, 1);
lean_inc(v_toPure_414_);
lean_dec_ref(v_toApplicative_411_);
v___f_415_ = lean_alloc_closure((void*)(l_Lean_getAuxParentProjectionInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_415_, 0, v_declName_410_);
lean_closure_set(v___f_415_, 1, v_toPure_414_);
v___x_416_ = lean_apply_4(v_toBind_412_, lean_box(0), lean_box(0), v_getEnv_413_, v___f_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAuxParentProjectionInfo_x3f(lean_object* v_m_417_, lean_object* v_inst_418_, lean_object* v_inst_419_, lean_object* v_declName_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_getAuxParentProjectionInfo_x3f___redArg(v_inst_418_, v_inst_419_, v_declName_420_);
return v___x_421_;
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_2268652983____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_projectionFnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_projectionFnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_ProjFns_0__Lean_initFn_00___x40_Lean_ProjFns_496916995____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_auxParentProjInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_auxParentProjInfoExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ProjFns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ProjFns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ProjFns(builtin);
}
#ifdef __cplusplus
}
#endif
