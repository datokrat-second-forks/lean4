// Lean compiler output
// Module: Lean.Meta.VirtualStructure
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedVirtualStructureInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedVirtualStructureInfo_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedVirtualStructureInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedVirtualStructureInfo_default = (const lean_object*)&l_Lean_instInhabitedVirtualStructureInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedVirtualStructureInfo = (const lean_object*)&l_Lean_instInhabitedVirtualStructureInfo_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprVirtualStructureInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ctorName"};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "projName"};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__12 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__15 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__16;
static const lean_string_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__18;
static lean_once_cell_t l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__19;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__20 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__17_value)}};
static const lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprVirtualStructureInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprVirtualStructureInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprVirtualStructureInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprVirtualStructureInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprVirtualStructureInfo___closed__0 = (const lean_object*)&l_Lean_instReprVirtualStructureInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprVirtualStructureInfo = (const lean_object*)&l_Lean_instReprVirtualStructureInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "virtualStructureTypeExt"};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 143, 249, 183, 44, 91, 204, 115)}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_virtualStructureTypeExt;
static const lean_string_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "virtualStructureCtorExt"};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(197, 112, 209, 8, 41, 16, 117, 43)}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_virtualStructureCtorExt;
static const lean_string_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "virtualStructureProjExt"};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 164, 170, 22, 56, 44, 165, 132)}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_virtualStructureProjExt;
LEAN_EXPORT lean_object* l_Lean_registerVirtualStructure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualStructureInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualCtorInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualProjInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprVirtualStructureInfo_repr_spec__0(lean_object* v_a_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_nat_to_int(v_a_6_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(12u);
v___x_22_ = lean_nat_to_int(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(13u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__0));
v___x_39_ = lean_string_length(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__18, &l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__18_once, _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__18);
v___x_41_ = lean_nat_to_int(v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVirtualStructureInfo_repr___redArg(lean_object* v_x_46_){
_start:
{
lean_object* v_typeName_47_; lean_object* v_ctorName_48_; lean_object* v_projName_49_; lean_object* v_numParams_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_typeName_47_ = lean_ctor_get(v_x_46_, 0);
lean_inc(v_typeName_47_);
v_ctorName_48_ = lean_ctor_get(v_x_46_, 1);
lean_inc(v_ctorName_48_);
v_projName_49_ = lean_ctor_get(v_x_46_, 2);
lean_inc(v_projName_49_);
v_numParams_50_ = lean_ctor_get(v_x_46_, 3);
lean_inc(v_numParams_50_);
lean_dec_ref(v_x_46_);
v___x_51_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__5));
v___x_52_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__6));
v___x_53_ = lean_obj_once(&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__7, &l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__7_once, _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__7);
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = l_Lean_Name_reprPrec(v_typeName_47_, v___x_54_);
v___x_56_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_53_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = 0;
v___x_58_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*1, v___x_57_);
v___x_59_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_52_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__9));
v___x_61_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_59_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = lean_box(1);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__11));
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_51_);
v___x_67_ = l_Lean_Name_reprPrec(v_ctorName_48_, v___x_54_);
v___x_68_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_53_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set_uint8(v___x_69_, sizeof(void*)*1, v___x_57_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_66_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_60_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_62_);
v___x_73_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__13));
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_72_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_51_);
v___x_76_ = l_Lean_Name_reprPrec(v_projName_49_, v___x_54_);
v___x_77_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_53_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_78_, sizeof(void*)*1, v___x_57_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_75_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_60_);
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_62_);
v___x_82_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__15));
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_51_);
v___x_85_ = lean_obj_once(&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__16, &l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__16_once, _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__16);
v___x_86_ = l_Nat_reprFast(v_numParams_50_);
v___x_87_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_85_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*1, v___x_57_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_84_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_obj_once(&l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__19, &l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__19_once, _init_l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__19);
v___x_92_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__20));
v___x_93_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_90_);
v___x_94_ = ((lean_object*)(l_Lean_instReprVirtualStructureInfo_repr___redArg___closed__21));
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_91_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*1, v___x_57_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVirtualStructureInfo_repr(lean_object* v_x_98_, lean_object* v_prec_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_instReprVirtualStructureInfo_repr___redArg(v_x_98_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVirtualStructureInfo_repr___boxed(lean_object* v_x_101_, lean_object* v_prec_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_instReprVirtualStructureInfo_repr(v_x_101_, v_prec_102_);
lean_dec(v_prec_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_106_, lean_object* v_x_107_){
_start:
{
if (lean_obj_tag(v_x_107_) == 0)
{
lean_object* v_k_108_; lean_object* v_v_109_; lean_object* v_l_110_; lean_object* v_r_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_k_108_ = lean_ctor_get(v_x_107_, 1);
v_v_109_ = lean_ctor_get(v_x_107_, 2);
v_l_110_ = lean_ctor_get(v_x_107_, 3);
v_r_111_ = lean_ctor_get(v_x_107_, 4);
v___x_112_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0(v_init_106_, v_l_110_);
lean_inc(v_v_109_);
lean_inc(v_k_108_);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v_k_108_);
lean_ctor_set(v___x_113_, 1, v_v_109_);
v___x_114_ = lean_array_push(v___x_112_, v___x_113_);
v_init_106_ = v___x_114_;
v_x_107_ = v_r_111_;
goto _start;
}
else
{
return v_init_106_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0(v_init_116_, v_x_117_);
lean_dec(v_x_117_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1(lean_object* v_env_119_, lean_object* v_as_120_, size_t v_i_121_, size_t v_stop_122_, lean_object* v_b_123_){
_start:
{
lean_object* v___y_125_; uint8_t v___x_129_; 
v___x_129_ = lean_usize_dec_eq(v_i_121_, v_stop_122_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v_fst_131_; uint8_t v___x_132_; 
v___x_130_ = lean_array_uget_borrowed(v_as_120_, v_i_121_);
v_fst_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc(v_fst_131_);
lean_inc_ref(v_env_119_);
v___x_132_ = l_Lean_Environment_contains(v_env_119_, v_fst_131_, v___x_129_);
if (v___x_132_ == 0)
{
v___y_125_ = v_b_123_;
goto v___jp_124_;
}
else
{
lean_object* v___x_133_; 
lean_inc(v___x_130_);
v___x_133_ = lean_array_push(v_b_123_, v___x_130_);
v___y_125_ = v___x_133_;
goto v___jp_124_;
}
}
else
{
lean_dec_ref(v_env_119_);
return v_b_123_;
}
v___jp_124_:
{
size_t v___x_126_; size_t v___x_127_; 
v___x_126_ = ((size_t)1ULL);
v___x_127_ = lean_usize_add(v_i_121_, v___x_126_);
v_i_121_ = v___x_127_;
v_b_123_ = v___y_125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_134_, lean_object* v_as_135_, lean_object* v_i_136_, lean_object* v_stop_137_, lean_object* v_b_138_){
_start:
{
size_t v_i_boxed_139_; size_t v_stop_boxed_140_; lean_object* v_res_141_; 
v_i_boxed_139_ = lean_unbox_usize(v_i_136_);
lean_dec(v_i_136_);
v_stop_boxed_140_ = lean_unbox_usize(v_stop_137_);
lean_dec(v_stop_137_);
v_res_141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1(v_env_134_, v_as_135_, v_i_boxed_139_, v_stop_boxed_140_, v_b_138_);
lean_dec_ref(v_as_135_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(lean_object* v_env_148_, lean_object* v_s_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_152_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0(v___x_151_, v_s_149_);
v___x_153_ = lean_array_get_size(v___x_152_);
v___x_154_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_155_ = lean_nat_dec_lt(v___x_150_, v___x_153_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
lean_dec_ref(v___x_152_);
lean_dec_ref(v_env_148_);
v___x_156_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
return v___x_156_;
}
else
{
uint8_t v___x_157_; 
v___x_157_ = lean_nat_dec_le(v___x_153_, v___x_153_);
if (v___x_157_ == 0)
{
if (v___x_155_ == 0)
{
lean_object* v___x_158_; 
lean_dec_ref(v___x_152_);
lean_dec_ref(v_env_148_);
v___x_158_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
return v___x_158_;
}
else
{
size_t v___x_159_; size_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_159_ = ((size_t)0ULL);
v___x_160_ = lean_usize_of_nat(v___x_153_);
v___x_161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1(v_env_148_, v___x_152_, v___x_159_, v___x_160_, v___x_154_);
lean_dec_ref(v___x_152_);
lean_inc_ref_n(v___x_161_, 2);
v___x_162_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
lean_ctor_set(v___x_162_, 2, v___x_161_);
return v___x_162_;
}
}
else
{
size_t v___x_163_; size_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = ((size_t)0ULL);
v___x_164_ = lean_usize_of_nat(v___x_153_);
v___x_165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__1(v_env_148_, v___x_152_, v___x_163_, v___x_164_, v___x_154_);
lean_dec_ref(v___x_152_);
lean_inc_ref_n(v___x_165_, 2);
v___x_166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
lean_ctor_set(v___x_166_, 2, v___x_165_);
return v___x_166_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed(lean_object* v_env_167_, lean_object* v_s_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(v_env_167_, v_s_168_);
lean_dec(v_s_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___f_179_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_180_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_181_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_182_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_180_, v___x_181_, v___f_179_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed(lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_();
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(lean_object* v_init_185_, lean_object* v_t_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0_spec__0(v_init_185_, v_t_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_188_, lean_object* v_t_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(v_init_188_, v_t_189_);
lean_dec(v_t_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___f_196_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_197_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_));
v___x_198_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_199_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_197_, v___x_198_, v___f_196_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2____boxed(lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_();
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___f_207_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_208_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_));
v___x_209_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_210_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_208_, v___x_209_, v___f_207_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2____boxed(lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_();
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerVirtualStructure(lean_object* v_env_213_, lean_object* v_info_214_){
_start:
{
lean_object* v_typeName_215_; lean_object* v_ctorName_216_; lean_object* v_projName_217_; lean_object* v___x_218_; lean_object* v_env_219_; lean_object* v___x_220_; lean_object* v_env_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_typeName_215_ = lean_ctor_get(v_info_214_, 0);
v_ctorName_216_ = lean_ctor_get(v_info_214_, 1);
v_projName_217_ = lean_ctor_get(v_info_214_, 2);
lean_inc(v_projName_217_);
v___x_218_ = l_Lean_virtualStructureTypeExt;
lean_inc_ref_n(v_info_214_, 2);
lean_inc(v_typeName_215_);
v_env_219_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_218_, v_env_213_, v_typeName_215_, v_info_214_);
v___x_220_ = l_Lean_virtualStructureCtorExt;
lean_inc(v_ctorName_216_);
v_env_221_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_220_, v_env_219_, v_ctorName_216_, v_info_214_);
v___x_222_ = l_Lean_virtualStructureProjExt;
v___x_223_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_222_, v_env_221_, v_projName_217_, v_info_214_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualStructureInfo_x3f(lean_object* v_env_224_, lean_object* v_typeName_225_){
_start:
{
lean_object* v___x_226_; lean_object* v_toEnvExtension_227_; lean_object* v_asyncMode_228_; lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; 
v___x_226_ = l_Lean_virtualStructureTypeExt;
v_toEnvExtension_227_ = lean_ctor_get(v___x_226_, 0);
v_asyncMode_228_ = lean_ctor_get(v_toEnvExtension_227_, 2);
v___x_229_ = ((lean_object*)(l_Lean_instInhabitedVirtualStructureInfo_default));
v___x_230_ = 0;
v___x_231_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_229_, v___x_226_, v_env_224_, v_typeName_225_, v_asyncMode_228_, v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualCtorInfo_x3f(lean_object* v_env_232_, lean_object* v_ctorName_233_){
_start:
{
lean_object* v___x_234_; lean_object* v_toEnvExtension_235_; lean_object* v_asyncMode_236_; lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v___x_234_ = l_Lean_virtualStructureCtorExt;
v_toEnvExtension_235_ = lean_ctor_get(v___x_234_, 0);
v_asyncMode_236_ = lean_ctor_get(v_toEnvExtension_235_, 2);
v___x_237_ = ((lean_object*)(l_Lean_instInhabitedVirtualStructureInfo_default));
v___x_238_ = 0;
v___x_239_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_237_, v___x_234_, v_env_232_, v_ctorName_233_, v_asyncMode_236_, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualProjInfo_x3f(lean_object* v_env_240_, lean_object* v_projName_241_){
_start:
{
lean_object* v___x_242_; lean_object* v_toEnvExtension_243_; lean_object* v_asyncMode_244_; lean_object* v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; 
v___x_242_ = l_Lean_virtualStructureProjExt;
v_toEnvExtension_243_ = lean_ctor_get(v___x_242_, 0);
v_asyncMode_244_ = lean_ctor_get(v_toEnvExtension_243_, 2);
v___x_245_ = ((lean_object*)(l_Lean_instInhabitedVirtualStructureInfo_default));
v___x_246_ = 0;
v___x_247_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_245_, v___x_242_, v_env_240_, v_projName_241_, v_asyncMode_244_, v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___redArg___lam__0(lean_object* v_typeName_248_, lean_object* v_toPure_249_, lean_object* v_____do__lift_250_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = l_Lean_Environment_getVirtualStructureInfo_x3f(v_____do__lift_250_, v_typeName_248_);
v___x_252_ = lean_apply_2(v_toPure_249_, lean_box(0), v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___redArg(lean_object* v_inst_253_, lean_object* v_inst_254_, lean_object* v_typeName_255_){
_start:
{
lean_object* v_toApplicative_256_; lean_object* v_toBind_257_; lean_object* v_getEnv_258_; lean_object* v_toPure_259_; lean_object* v___f_260_; lean_object* v___x_261_; 
v_toApplicative_256_ = lean_ctor_get(v_inst_253_, 0);
lean_inc_ref(v_toApplicative_256_);
v_toBind_257_ = lean_ctor_get(v_inst_253_, 1);
lean_inc(v_toBind_257_);
lean_dec_ref(v_inst_253_);
v_getEnv_258_ = lean_ctor_get(v_inst_254_, 0);
lean_inc(v_getEnv_258_);
lean_dec_ref(v_inst_254_);
v_toPure_259_ = lean_ctor_get(v_toApplicative_256_, 1);
lean_inc(v_toPure_259_);
lean_dec_ref(v_toApplicative_256_);
v___f_260_ = lean_alloc_closure((void*)(l_Lean_getVirtualStructureInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_260_, 0, v_typeName_255_);
lean_closure_set(v___f_260_, 1, v_toPure_259_);
v___x_261_ = lean_apply_4(v_toBind_257_, lean_box(0), lean_box(0), v_getEnv_258_, v___f_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f(lean_object* v_m_262_, lean_object* v_inst_263_, lean_object* v_inst_264_, lean_object* v_typeName_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lean_getVirtualStructureInfo_x3f___redArg(v_inst_263_, v_inst_264_, v_typeName_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f___redArg___lam__0(lean_object* v_ctorName_267_, lean_object* v_toPure_268_, lean_object* v_____do__lift_269_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = l_Lean_Environment_getVirtualCtorInfo_x3f(v_____do__lift_269_, v_ctorName_267_);
v___x_271_ = lean_apply_2(v_toPure_268_, lean_box(0), v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f___redArg(lean_object* v_inst_272_, lean_object* v_inst_273_, lean_object* v_ctorName_274_){
_start:
{
lean_object* v_toApplicative_275_; lean_object* v_toBind_276_; lean_object* v_getEnv_277_; lean_object* v_toPure_278_; lean_object* v___f_279_; lean_object* v___x_280_; 
v_toApplicative_275_ = lean_ctor_get(v_inst_272_, 0);
lean_inc_ref(v_toApplicative_275_);
v_toBind_276_ = lean_ctor_get(v_inst_272_, 1);
lean_inc(v_toBind_276_);
lean_dec_ref(v_inst_272_);
v_getEnv_277_ = lean_ctor_get(v_inst_273_, 0);
lean_inc(v_getEnv_277_);
lean_dec_ref(v_inst_273_);
v_toPure_278_ = lean_ctor_get(v_toApplicative_275_, 1);
lean_inc(v_toPure_278_);
lean_dec_ref(v_toApplicative_275_);
v___f_279_ = lean_alloc_closure((void*)(l_Lean_getVirtualCtorInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_279_, 0, v_ctorName_274_);
lean_closure_set(v___f_279_, 1, v_toPure_278_);
v___x_280_ = lean_apply_4(v_toBind_276_, lean_box(0), lean_box(0), v_getEnv_277_, v___f_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f(lean_object* v_m_281_, lean_object* v_inst_282_, lean_object* v_inst_283_, lean_object* v_ctorName_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_getVirtualCtorInfo_x3f___redArg(v_inst_282_, v_inst_283_, v_ctorName_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f___redArg___lam__0(lean_object* v_projName_286_, lean_object* v_toPure_287_, lean_object* v_____do__lift_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = l_Lean_Environment_getVirtualProjInfo_x3f(v_____do__lift_288_, v_projName_286_);
v___x_290_ = lean_apply_2(v_toPure_287_, lean_box(0), v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f___redArg(lean_object* v_inst_291_, lean_object* v_inst_292_, lean_object* v_projName_293_){
_start:
{
lean_object* v_toApplicative_294_; lean_object* v_toBind_295_; lean_object* v_getEnv_296_; lean_object* v_toPure_297_; lean_object* v___f_298_; lean_object* v___x_299_; 
v_toApplicative_294_ = lean_ctor_get(v_inst_291_, 0);
lean_inc_ref(v_toApplicative_294_);
v_toBind_295_ = lean_ctor_get(v_inst_291_, 1);
lean_inc(v_toBind_295_);
lean_dec_ref(v_inst_291_);
v_getEnv_296_ = lean_ctor_get(v_inst_292_, 0);
lean_inc(v_getEnv_296_);
lean_dec_ref(v_inst_292_);
v_toPure_297_ = lean_ctor_get(v_toApplicative_294_, 1);
lean_inc(v_toPure_297_);
lean_dec_ref(v_toApplicative_294_);
v___f_298_ = lean_alloc_closure((void*)(l_Lean_getVirtualProjInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_298_, 0, v_projName_293_);
lean_closure_set(v___f_298_, 1, v_toPure_297_);
v___x_299_ = lean_apply_4(v_toBind_295_, lean_box(0), lean_box(0), v_getEnv_296_, v___f_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f(lean_object* v_m_300_, lean_object* v_inst_301_, lean_object* v_inst_302_, lean_object* v_projName_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_getVirtualProjInfo_x3f___redArg(v_inst_301_, v_inst_302_, v_projName_303_);
return v___x_304_;
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_virtualStructureTypeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_virtualStructureTypeExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_virtualStructureCtorExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_virtualStructureCtorExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_virtualStructureProjExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_virtualStructureProjExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_VirtualStructure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_VirtualStructure(builtin);
}
#ifdef __cplusplus
}
#endif
