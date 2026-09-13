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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__value;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(lean_object* v_env_106_, lean_object* v_as_107_, size_t v_i_108_, size_t v_stop_109_, lean_object* v_b_110_){
_start:
{
lean_object* v___y_112_; uint8_t v___x_116_; 
v___x_116_ = lean_usize_dec_eq(v_i_108_, v_stop_109_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v_fst_118_; uint8_t v___x_119_; 
v___x_117_ = lean_array_uget_borrowed(v_as_107_, v_i_108_);
v_fst_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_fst_118_);
lean_inc_ref(v_env_106_);
v___x_119_ = l_Lean_Environment_contains(v_env_106_, v_fst_118_, v___x_116_);
if (v___x_119_ == 0)
{
v___y_112_ = v_b_110_;
goto v___jp_111_;
}
else
{
lean_object* v___x_120_; 
lean_inc(v___x_117_);
v___x_120_ = lean_array_push(v_b_110_, v___x_117_);
v___y_112_ = v___x_120_;
goto v___jp_111_;
}
}
else
{
lean_dec_ref(v_env_106_);
return v_b_110_;
}
v___jp_111_:
{
size_t v___x_113_; size_t v___x_114_; 
v___x_113_ = ((size_t)1ULL);
v___x_114_ = lean_usize_add(v_i_108_, v___x_113_);
v_i_108_ = v___x_114_;
v_b_110_ = v___y_112_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_121_, lean_object* v_as_122_, lean_object* v_i_123_, lean_object* v_stop_124_, lean_object* v_b_125_){
_start:
{
size_t v_i_boxed_126_; size_t v_stop_boxed_127_; lean_object* v_res_128_; 
v_i_boxed_126_ = lean_unbox_usize(v_i_123_);
lean_dec(v_i_123_);
v_stop_boxed_127_ = lean_unbox_usize(v_stop_124_);
lean_dec(v_stop_124_);
v_res_128_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(v_env_121_, v_as_122_, v_i_boxed_126_, v_stop_boxed_127_, v_b_125_);
lean_dec_ref(v_as_122_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(lean_object* v_env_133_, lean_object* v_s_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_135_ = l_Lean_NameMap_toArray___redArg(v_s_134_);
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_array_get_size(v___x_135_);
v___x_138_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_139_ = lean_nat_dec_lt(v___x_136_, v___x_137_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; 
lean_dec_ref(v___x_135_);
lean_dec_ref(v_env_133_);
v___x_140_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = lean_nat_dec_le(v___x_137_, v___x_137_);
if (v___x_141_ == 0)
{
if (v___x_139_ == 0)
{
lean_object* v___x_142_; 
lean_dec_ref(v___x_135_);
lean_dec_ref(v_env_133_);
v___x_142_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
return v___x_142_;
}
else
{
size_t v___x_143_; size_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = ((size_t)0ULL);
v___x_144_ = lean_usize_of_nat(v___x_137_);
v___x_145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(v_env_133_, v___x_135_, v___x_143_, v___x_144_, v___x_138_);
lean_dec_ref(v___x_135_);
lean_inc_ref_n(v___x_145_, 2);
v___x_146_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
lean_ctor_set(v___x_146_, 2, v___x_145_);
return v___x_146_;
}
}
else
{
size_t v___x_147_; size_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = ((size_t)0ULL);
v___x_148_ = lean_usize_of_nat(v___x_137_);
v___x_149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2__spec__0(v_env_133_, v___x_135_, v___x_147_, v___x_148_, v___x_138_);
lean_dec_ref(v___x_135_);
lean_inc_ref_n(v___x_149_, 2);
v___x_150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
lean_ctor_set(v___x_150_, 2, v___x_149_);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed(lean_object* v_env_151_, lean_object* v_s_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___lam__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(v_env_151_, v_s_152_);
lean_dec(v_s_152_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___f_163_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_164_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__3_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_165_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_166_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_164_, v___x_165_, v___f_163_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2____boxed(lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_();
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___f_174_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_175_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_));
v___x_176_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_177_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_175_, v___x_176_, v___f_174_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2____boxed(lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_1481358098____hygCtx___hyg_2_();
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___f_185_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__0_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_186_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__1_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_));
v___x_187_ = ((lean_object*)(l___private_Lean_Meta_VirtualStructure_0__Lean_initFn___closed__4_00___x40_Lean_Meta_VirtualStructure_1144079978____hygCtx___hyg_2_));
v___x_188_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_186_, v___x_187_, v___f_185_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2____boxed(lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Meta_VirtualStructure_0__Lean_initFn_00___x40_Lean_Meta_VirtualStructure_194073479____hygCtx___hyg_2_();
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerVirtualStructure(lean_object* v_env_191_, lean_object* v_info_192_){
_start:
{
lean_object* v_typeName_193_; lean_object* v_ctorName_194_; lean_object* v_projName_195_; lean_object* v___x_196_; lean_object* v_env_197_; lean_object* v___x_198_; lean_object* v_env_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_typeName_193_ = lean_ctor_get(v_info_192_, 0);
v_ctorName_194_ = lean_ctor_get(v_info_192_, 1);
v_projName_195_ = lean_ctor_get(v_info_192_, 2);
lean_inc(v_projName_195_);
v___x_196_ = l_Lean_virtualStructureTypeExt;
lean_inc_ref_n(v_info_192_, 2);
lean_inc(v_typeName_193_);
v_env_197_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_196_, v_env_191_, v_typeName_193_, v_info_192_);
v___x_198_ = l_Lean_virtualStructureCtorExt;
lean_inc(v_ctorName_194_);
v_env_199_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_198_, v_env_197_, v_ctorName_194_, v_info_192_);
v___x_200_ = l_Lean_virtualStructureProjExt;
v___x_201_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_200_, v_env_199_, v_projName_195_, v_info_192_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualStructureInfo_x3f(lean_object* v_env_202_, lean_object* v_typeName_203_){
_start:
{
lean_object* v___x_204_; lean_object* v_toEnvExtension_205_; lean_object* v_asyncMode_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; 
v___x_204_ = l_Lean_virtualStructureTypeExt;
v_toEnvExtension_205_ = lean_ctor_get(v___x_204_, 0);
v_asyncMode_206_ = lean_ctor_get(v_toEnvExtension_205_, 2);
v___x_207_ = ((lean_object*)(l_Lean_instInhabitedVirtualStructureInfo_default));
v___x_208_ = 0;
v___x_209_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_207_, v___x_204_, v_env_202_, v_typeName_203_, v_asyncMode_206_, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualCtorInfo_x3f(lean_object* v_env_210_, lean_object* v_ctorName_211_){
_start:
{
lean_object* v___x_212_; lean_object* v_toEnvExtension_213_; lean_object* v_asyncMode_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; 
v___x_212_ = l_Lean_virtualStructureCtorExt;
v_toEnvExtension_213_ = lean_ctor_get(v___x_212_, 0);
v_asyncMode_214_ = lean_ctor_get(v_toEnvExtension_213_, 2);
v___x_215_ = ((lean_object*)(l_Lean_instInhabitedVirtualStructureInfo_default));
v___x_216_ = 0;
v___x_217_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_215_, v___x_212_, v_env_210_, v_ctorName_211_, v_asyncMode_214_, v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getVirtualProjInfo_x3f(lean_object* v_env_218_, lean_object* v_projName_219_){
_start:
{
lean_object* v___x_220_; lean_object* v_toEnvExtension_221_; lean_object* v_asyncMode_222_; lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_225_; 
v___x_220_ = l_Lean_virtualStructureProjExt;
v_toEnvExtension_221_ = lean_ctor_get(v___x_220_, 0);
v_asyncMode_222_ = lean_ctor_get(v_toEnvExtension_221_, 2);
v___x_223_ = ((lean_object*)(l_Lean_instInhabitedVirtualStructureInfo_default));
v___x_224_ = 0;
v___x_225_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_223_, v___x_220_, v_env_218_, v_projName_219_, v_asyncMode_222_, v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___redArg___lam__0(lean_object* v_typeName_226_, lean_object* v_toPure_227_, lean_object* v_____do__lift_228_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = l_Lean_Environment_getVirtualStructureInfo_x3f(v_____do__lift_228_, v_typeName_226_);
v___x_230_ = lean_apply_2(v_toPure_227_, lean_box(0), v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___redArg(lean_object* v_inst_231_, lean_object* v_inst_232_, lean_object* v_typeName_233_){
_start:
{
lean_object* v_toApplicative_234_; lean_object* v_toBind_235_; lean_object* v_getEnv_236_; lean_object* v_toPure_237_; lean_object* v___f_238_; lean_object* v___x_239_; 
v_toApplicative_234_ = lean_ctor_get(v_inst_231_, 0);
lean_inc_ref(v_toApplicative_234_);
v_toBind_235_ = lean_ctor_get(v_inst_231_, 1);
lean_inc(v_toBind_235_);
lean_dec_ref(v_inst_231_);
v_getEnv_236_ = lean_ctor_get(v_inst_232_, 0);
lean_inc(v_getEnv_236_);
lean_dec_ref(v_inst_232_);
v_toPure_237_ = lean_ctor_get(v_toApplicative_234_, 1);
lean_inc(v_toPure_237_);
lean_dec_ref(v_toApplicative_234_);
v___f_238_ = lean_alloc_closure((void*)(l_Lean_getVirtualStructureInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_238_, 0, v_typeName_233_);
lean_closure_set(v___f_238_, 1, v_toPure_237_);
v___x_239_ = lean_apply_4(v_toBind_235_, lean_box(0), lean_box(0), v_getEnv_236_, v___f_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f(lean_object* v_m_240_, lean_object* v_inst_241_, lean_object* v_inst_242_, lean_object* v_typeName_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_getVirtualStructureInfo_x3f___redArg(v_inst_241_, v_inst_242_, v_typeName_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f___redArg___lam__0(lean_object* v_ctorName_245_, lean_object* v_toPure_246_, lean_object* v_____do__lift_247_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = l_Lean_Environment_getVirtualCtorInfo_x3f(v_____do__lift_247_, v_ctorName_245_);
v___x_249_ = lean_apply_2(v_toPure_246_, lean_box(0), v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f___redArg(lean_object* v_inst_250_, lean_object* v_inst_251_, lean_object* v_ctorName_252_){
_start:
{
lean_object* v_toApplicative_253_; lean_object* v_toBind_254_; lean_object* v_getEnv_255_; lean_object* v_toPure_256_; lean_object* v___f_257_; lean_object* v___x_258_; 
v_toApplicative_253_ = lean_ctor_get(v_inst_250_, 0);
lean_inc_ref(v_toApplicative_253_);
v_toBind_254_ = lean_ctor_get(v_inst_250_, 1);
lean_inc(v_toBind_254_);
lean_dec_ref(v_inst_250_);
v_getEnv_255_ = lean_ctor_get(v_inst_251_, 0);
lean_inc(v_getEnv_255_);
lean_dec_ref(v_inst_251_);
v_toPure_256_ = lean_ctor_get(v_toApplicative_253_, 1);
lean_inc(v_toPure_256_);
lean_dec_ref(v_toApplicative_253_);
v___f_257_ = lean_alloc_closure((void*)(l_Lean_getVirtualCtorInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_257_, 0, v_ctorName_252_);
lean_closure_set(v___f_257_, 1, v_toPure_256_);
v___x_258_ = lean_apply_4(v_toBind_254_, lean_box(0), lean_box(0), v_getEnv_255_, v___f_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualCtorInfo_x3f(lean_object* v_m_259_, lean_object* v_inst_260_, lean_object* v_inst_261_, lean_object* v_ctorName_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_getVirtualCtorInfo_x3f___redArg(v_inst_260_, v_inst_261_, v_ctorName_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f___redArg___lam__0(lean_object* v_projName_264_, lean_object* v_toPure_265_, lean_object* v_____do__lift_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = l_Lean_Environment_getVirtualProjInfo_x3f(v_____do__lift_266_, v_projName_264_);
v___x_268_ = lean_apply_2(v_toPure_265_, lean_box(0), v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f___redArg(lean_object* v_inst_269_, lean_object* v_inst_270_, lean_object* v_projName_271_){
_start:
{
lean_object* v_toApplicative_272_; lean_object* v_toBind_273_; lean_object* v_getEnv_274_; lean_object* v_toPure_275_; lean_object* v___f_276_; lean_object* v___x_277_; 
v_toApplicative_272_ = lean_ctor_get(v_inst_269_, 0);
lean_inc_ref(v_toApplicative_272_);
v_toBind_273_ = lean_ctor_get(v_inst_269_, 1);
lean_inc(v_toBind_273_);
lean_dec_ref(v_inst_269_);
v_getEnv_274_ = lean_ctor_get(v_inst_270_, 0);
lean_inc(v_getEnv_274_);
lean_dec_ref(v_inst_270_);
v_toPure_275_ = lean_ctor_get(v_toApplicative_272_, 1);
lean_inc(v_toPure_275_);
lean_dec_ref(v_toApplicative_272_);
v___f_276_ = lean_alloc_closure((void*)(l_Lean_getVirtualProjInfo_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_276_, 0, v_projName_271_);
lean_closure_set(v___f_276_, 1, v_toPure_275_);
v___x_277_ = lean_apply_4(v_toBind_273_, lean_box(0), lean_box(0), v_getEnv_274_, v___f_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualProjInfo_x3f(lean_object* v_m_278_, lean_object* v_inst_279_, lean_object* v_inst_280_, lean_object* v_projName_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_getVirtualProjInfo_x3f___redArg(v_inst_279_, v_inst_280_, v_projName_281_);
return v___x_282_;
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
