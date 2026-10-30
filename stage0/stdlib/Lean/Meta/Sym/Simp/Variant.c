// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Variant
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.ScopedEnvExtension
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "symSimpVariantExtension"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 101, 167, 211, 231, 20, 82, 40)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_symSimpVariantExtension;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object* v_x_15_, lean_object* v_a_16_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_17_, 0, v_a_16_);
lean_inc_ref_n(v___x_17_, 2);
v___x_18_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
lean_ctor_set(v___x_18_, 2, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object* v_x_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(v_x_19_, v_a_20_);
lean_dec_ref(v_x_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object* v_a_22_, lean_object* v_b_23_, lean_object* v_x_24_){
_start:
{
if (lean_obj_tag(v_x_24_) == 0)
{
lean_dec(v_b_23_);
lean_dec(v_a_22_);
return v_x_24_;
}
else
{
lean_object* v_key_25_; lean_object* v_value_26_; lean_object* v_tail_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_39_; 
v_key_25_ = lean_ctor_get(v_x_24_, 0);
v_value_26_ = lean_ctor_get(v_x_24_, 1);
v_tail_27_ = lean_ctor_get(v_x_24_, 2);
v_isSharedCheck_39_ = !lean_is_exclusive(v_x_24_);
if (v_isSharedCheck_39_ == 0)
{
v___x_29_ = v_x_24_;
v_isShared_30_ = v_isSharedCheck_39_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_tail_27_);
lean_inc(v_value_26_);
lean_inc(v_key_25_);
lean_dec(v_x_24_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_39_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
uint8_t v___x_31_; 
v___x_31_ = lean_name_eq(v_key_25_, v_a_22_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(v_a_22_, v_b_23_, v_tail_27_);
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 2, v___x_32_);
v___x_34_ = v___x_29_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_key_25_);
lean_ctor_set(v_reuseFailAlloc_35_, 1, v_value_26_);
lean_ctor_set(v_reuseFailAlloc_35_, 2, v___x_32_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
else
{
lean_object* v___x_37_; 
lean_dec(v_value_26_);
lean_dec(v_key_25_);
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 1, v_b_23_);
lean_ctor_set(v___x_29_, 0, v_a_22_);
v___x_37_ = v___x_29_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_22_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v_b_23_);
lean_ctor_set(v_reuseFailAlloc_38_, 2, v_tail_27_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_40_, lean_object* v_x_41_){
_start:
{
if (lean_obj_tag(v_x_41_) == 0)
{
return v_x_40_;
}
else
{
lean_object* v_key_42_; lean_object* v_value_43_; lean_object* v_tail_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_70_; 
v_key_42_ = lean_ctor_get(v_x_41_, 0);
v_value_43_ = lean_ctor_get(v_x_41_, 1);
v_tail_44_ = lean_ctor_get(v_x_41_, 2);
v_isSharedCheck_70_ = !lean_is_exclusive(v_x_41_);
if (v_isSharedCheck_70_ == 0)
{
v___x_46_ = v_x_41_;
v_isShared_47_ = v_isSharedCheck_70_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_tail_44_);
lean_inc(v_value_43_);
lean_inc(v_key_42_);
lean_dec(v_x_41_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_70_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; uint64_t v___y_50_; 
v___x_48_ = lean_array_get_size(v_x_40_);
if (lean_obj_tag(v_key_42_) == 0)
{
uint64_t v___x_68_; 
v___x_68_ = 1723ULL;
v___y_50_ = v___x_68_;
goto v___jp_49_;
}
else
{
uint64_t v_hash_69_; 
v_hash_69_ = lean_ctor_get_uint64(v_key_42_, sizeof(void*)*2);
v___y_50_ = v_hash_69_;
goto v___jp_49_;
}
v___jp_49_:
{
uint64_t v___x_51_; uint64_t v___x_52_; uint64_t v_fold_53_; uint64_t v___x_54_; uint64_t v___x_55_; uint64_t v___x_56_; size_t v___x_57_; size_t v___x_58_; size_t v___x_59_; size_t v___x_60_; size_t v___x_61_; lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_51_ = 32ULL;
v___x_52_ = lean_uint64_shift_right(v___y_50_, v___x_51_);
v_fold_53_ = lean_uint64_xor(v___y_50_, v___x_52_);
v___x_54_ = 16ULL;
v___x_55_ = lean_uint64_shift_right(v_fold_53_, v___x_54_);
v___x_56_ = lean_uint64_xor(v_fold_53_, v___x_55_);
v___x_57_ = lean_uint64_to_usize(v___x_56_);
v___x_58_ = lean_usize_of_nat(v___x_48_);
v___x_59_ = ((size_t)1ULL);
v___x_60_ = lean_usize_sub(v___x_58_, v___x_59_);
v___x_61_ = lean_usize_land(v___x_57_, v___x_60_);
v___x_62_ = lean_array_uget_borrowed(v_x_40_, v___x_61_);
lean_inc(v___x_62_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 2, v___x_62_);
v___x_64_ = v___x_46_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_key_42_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v_value_43_);
lean_ctor_set(v_reuseFailAlloc_67_, 2, v___x_62_);
v___x_64_ = v_reuseFailAlloc_67_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
lean_object* v___x_65_; 
v___x_65_ = lean_array_uset(v_x_40_, v___x_61_, v___x_64_);
v_x_40_ = v___x_65_;
v_x_41_ = v_tail_44_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object* v_i_71_, lean_object* v_source_72_, lean_object* v_target_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_array_get_size(v_source_72_);
v___x_75_ = lean_nat_dec_lt(v_i_71_, v___x_74_);
if (v___x_75_ == 0)
{
lean_dec_ref(v_source_72_);
lean_dec(v_i_71_);
return v_target_73_;
}
else
{
lean_object* v_es_76_; lean_object* v___x_77_; lean_object* v_source_78_; lean_object* v_target_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_es_76_ = lean_array_fget(v_source_72_, v_i_71_);
v___x_77_ = lean_box(0);
v_source_78_ = lean_array_fset(v_source_72_, v_i_71_, v___x_77_);
v_target_79_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(v_target_73_, v_es_76_);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_add(v_i_71_, v___x_80_);
lean_dec(v_i_71_);
v_i_71_ = v___x_81_;
v_source_72_ = v_source_78_;
v_target_73_ = v_target_79_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_data_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v_nbuckets_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_84_ = lean_array_get_size(v_data_83_);
v___x_85_ = lean_unsigned_to_nat(2u);
v_nbuckets_86_ = lean_nat_mul(v___x_84_, v___x_85_);
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = lean_box(0);
v___x_89_ = lean_mk_array(v_nbuckets_86_, v___x_88_);
v___x_90_ = lean_array_propagate_mark(v_data_83_, v___x_89_);
v___x_91_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v___x_87_, v_data_83_, v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_a_92_, lean_object* v_x_93_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
else
{
lean_object* v_key_95_; lean_object* v_tail_96_; uint8_t v___x_97_; 
v_key_95_ = lean_ctor_get(v_x_93_, 0);
v_tail_96_ = lean_ctor_get(v_x_93_, 2);
v___x_97_ = lean_name_eq(v_key_95_, v_a_92_);
if (v___x_97_ == 0)
{
v_x_93_ = v_tail_96_;
goto _start;
}
else
{
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_a_99_, lean_object* v_x_100_){
_start:
{
uint8_t v_res_101_; lean_object* v_r_102_; 
v_res_101_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_99_, v_x_100_);
lean_dec(v_x_100_);
lean_dec(v_a_99_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_103_, lean_object* v_a_104_, lean_object* v_b_105_){
_start:
{
lean_object* v_size_106_; lean_object* v_buckets_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_153_; 
v_size_106_ = lean_ctor_get(v_m_103_, 0);
v_buckets_107_ = lean_ctor_get(v_m_103_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v_m_103_);
if (v_isSharedCheck_153_ == 0)
{
v___x_109_ = v_m_103_;
v_isShared_110_ = v_isSharedCheck_153_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_buckets_107_);
lean_inc(v_size_106_);
lean_dec(v_m_103_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_153_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_111_; uint64_t v___y_113_; 
v___x_111_ = lean_array_get_size(v_buckets_107_);
if (lean_obj_tag(v_a_104_) == 0)
{
uint64_t v___x_151_; 
v___x_151_ = 1723ULL;
v___y_113_ = v___x_151_;
goto v___jp_112_;
}
else
{
uint64_t v_hash_152_; 
v_hash_152_ = lean_ctor_get_uint64(v_a_104_, sizeof(void*)*2);
v___y_113_ = v_hash_152_;
goto v___jp_112_;
}
v___jp_112_:
{
uint64_t v___x_114_; uint64_t v___x_115_; uint64_t v_fold_116_; uint64_t v___x_117_; uint64_t v___x_118_; uint64_t v___x_119_; size_t v___x_120_; size_t v___x_121_; size_t v___x_122_; size_t v___x_123_; size_t v___x_124_; lean_object* v_bkt_125_; uint8_t v___x_126_; 
v___x_114_ = 32ULL;
v___x_115_ = lean_uint64_shift_right(v___y_113_, v___x_114_);
v_fold_116_ = lean_uint64_xor(v___y_113_, v___x_115_);
v___x_117_ = 16ULL;
v___x_118_ = lean_uint64_shift_right(v_fold_116_, v___x_117_);
v___x_119_ = lean_uint64_xor(v_fold_116_, v___x_118_);
v___x_120_ = lean_uint64_to_usize(v___x_119_);
v___x_121_ = lean_usize_of_nat(v___x_111_);
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_sub(v___x_121_, v___x_122_);
v___x_124_ = lean_usize_land(v___x_120_, v___x_123_);
v_bkt_125_ = lean_array_uget_borrowed(v_buckets_107_, v___x_124_);
v___x_126_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_104_, v_bkt_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v_size_x27_128_; lean_object* v___x_129_; lean_object* v_buckets_x27_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_127_ = lean_unsigned_to_nat(1u);
v_size_x27_128_ = lean_nat_add(v_size_106_, v___x_127_);
lean_dec(v_size_106_);
lean_inc(v_bkt_125_);
v___x_129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_129_, 0, v_a_104_);
lean_ctor_set(v___x_129_, 1, v_b_105_);
lean_ctor_set(v___x_129_, 2, v_bkt_125_);
v_buckets_x27_130_ = lean_array_uset(v_buckets_107_, v___x_124_, v___x_129_);
v___x_131_ = lean_unsigned_to_nat(4u);
v___x_132_ = lean_nat_mul(v_size_x27_128_, v___x_131_);
v___x_133_ = lean_unsigned_to_nat(3u);
v___x_134_ = lean_nat_div(v___x_132_, v___x_133_);
lean_dec(v___x_132_);
v___x_135_ = lean_array_get_size(v_buckets_x27_130_);
v___x_136_ = lean_nat_dec_le(v___x_134_, v___x_135_);
lean_dec(v___x_134_);
if (v___x_136_ == 0)
{
lean_object* v_val_137_; lean_object* v___x_139_; 
v_val_137_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(v_buckets_x27_130_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v_val_137_);
lean_ctor_set(v___x_109_, 0, v_size_x27_128_);
v___x_139_ = v___x_109_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_size_x27_128_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v_val_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
else
{
lean_object* v___x_142_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v_buckets_x27_130_);
lean_ctor_set(v___x_109_, 0, v_size_x27_128_);
v___x_142_ = v___x_109_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_size_x27_128_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v_buckets_x27_130_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
else
{
lean_object* v___x_144_; lean_object* v_buckets_x27_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
lean_inc(v_bkt_125_);
v___x_144_ = lean_box(0);
v_buckets_x27_145_ = lean_array_uset(v_buckets_107_, v___x_124_, v___x_144_);
v___x_146_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(v_a_104_, v_b_105_, v_bkt_125_);
v___x_147_ = lean_array_uset(v_buckets_x27_145_, v___x_124_, v___x_146_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v___x_147_);
v___x_149_ = v___x_109_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_size_106_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object* v_map_154_, lean_object* v_entry_155_){
_start:
{
lean_object* v_name_156_; lean_object* v_variant_157_; lean_object* v___x_158_; 
v_name_156_ = lean_ctor_get(v_entry_155_, 0);
lean_inc(v_name_156_);
v_variant_157_ = lean_ctor_get(v_entry_155_, 1);
lean_inc_ref(v_variant_157_);
lean_dec_ref(v_entry_155_);
v___x_158_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(v_map_154_, v_name_156_, v_variant_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object* v___y_159_){
_start:
{
lean_inc_ref(v___y_159_);
return v___y_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(v___y_160_);
lean_dec_ref(v___y_160_);
return v_res_161_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_box(0);
v___x_169_ = lean_unsigned_to_nat(16u);
v___x_170_ = lean_mk_array(v___x_169_, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_);
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v___x_171_);
return v___x_173_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_174_; uint8_t v___x_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_178_; lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_174_ = lean_box(0);
v___x_175_ = 0;
v___f_176_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___f_177_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___x_178_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_);
v___f_179_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___x_180_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___x_181_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___f_179_);
lean_ctor_set(v___x_181_, 2, v___x_178_);
lean_ctor_set(v___x_181_, 3, v___f_177_);
lean_ctor_set(v___x_181_, 4, v___f_176_);
lean_ctor_set(v___x_181_, 5, v___x_174_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*6, v___x_175_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*6 + 1, v___x_175_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_);
v___x_184_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_();
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_187_, lean_object* v_m_188_, lean_object* v_a_189_, lean_object* v_b_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(v_m_188_, v_a_189_, v_b_190_);
return v___x_191_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_192_, lean_object* v_a_193_, lean_object* v_x_194_){
_start:
{
uint8_t v___x_195_; 
v___x_195_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_193_, v_x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_196_, lean_object* v_a_197_, lean_object* v_x_198_){
_start:
{
uint8_t v_res_199_; lean_object* v_r_200_; 
v_res_199_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_196_, v_a_197_, v_x_198_);
lean_dec(v_x_198_);
lean_dec(v_a_197_);
v_r_200_ = lean_box(v_res_199_);
return v_r_200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b2_201_, lean_object* v_data_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(v_data_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_00_u03b2_204_, lean_object* v_a_205_, lean_object* v_b_206_, lean_object* v_x_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(v_a_205_, v_b_206_, v_x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object* v_00_u03b2_209_, lean_object* v_i_210_, lean_object* v_source_211_, lean_object* v_target_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_i_210_, v_source_211_, v_target_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(v_x_215_, v_x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(lean_object* v_a_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_box(0);
return v___x_220_;
}
else
{
lean_object* v_key_221_; lean_object* v_value_222_; lean_object* v_tail_223_; uint8_t v___x_224_; 
v_key_221_ = lean_ctor_get(v_x_219_, 0);
v_value_222_ = lean_ctor_get(v_x_219_, 1);
v_tail_223_ = lean_ctor_get(v_x_219_, 2);
v___x_224_ = lean_name_eq(v_key_221_, v_a_218_);
if (v___x_224_ == 0)
{
v_x_219_ = v_tail_223_;
goto _start;
}
else
{
lean_object* v___x_226_; 
lean_inc(v_value_222_);
v___x_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_226_, 0, v_value_222_);
return v___x_226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_227_, lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(v_a_227_, v_x_228_);
lean_dec(v_x_228_);
lean_dec(v_a_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(lean_object* v_m_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_buckets_232_; lean_object* v___x_233_; uint64_t v___y_235_; 
v_buckets_232_ = lean_ctor_get(v_m_230_, 1);
v___x_233_ = lean_array_get_size(v_buckets_232_);
if (lean_obj_tag(v_a_231_) == 0)
{
uint64_t v___x_249_; 
v___x_249_ = 1723ULL;
v___y_235_ = v___x_249_;
goto v___jp_234_;
}
else
{
uint64_t v_hash_250_; 
v_hash_250_ = lean_ctor_get_uint64(v_a_231_, sizeof(void*)*2);
v___y_235_ = v_hash_250_;
goto v___jp_234_;
}
v___jp_234_:
{
uint64_t v___x_236_; uint64_t v___x_237_; uint64_t v_fold_238_; uint64_t v___x_239_; uint64_t v___x_240_; uint64_t v___x_241_; size_t v___x_242_; size_t v___x_243_; size_t v___x_244_; size_t v___x_245_; size_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_236_ = 32ULL;
v___x_237_ = lean_uint64_shift_right(v___y_235_, v___x_236_);
v_fold_238_ = lean_uint64_xor(v___y_235_, v___x_237_);
v___x_239_ = 16ULL;
v___x_240_ = lean_uint64_shift_right(v_fold_238_, v___x_239_);
v___x_241_ = lean_uint64_xor(v_fold_238_, v___x_240_);
v___x_242_ = lean_uint64_to_usize(v___x_241_);
v___x_243_ = lean_usize_of_nat(v___x_233_);
v___x_244_ = ((size_t)1ULL);
v___x_245_ = lean_usize_sub(v___x_243_, v___x_244_);
v___x_246_ = lean_usize_land(v___x_242_, v___x_245_);
v___x_247_ = lean_array_uget_borrowed(v_buckets_232_, v___x_246_);
v___x_248_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(v_a_231_, v___x_247_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg___boxed(lean_object* v_m_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(v_m_251_, v_a_252_);
lean_dec(v_a_252_);
lean_dec_ref(v_m_251_);
return v_res_253_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Std_HashMap_instInhabited___redArg();
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(lean_object* v_env_255_, lean_object* v_name_256_){
_start:
{
lean_object* v___x_257_; lean_object* v_ext_258_; lean_object* v_toEnvExtension_259_; lean_object* v_asyncMode_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_257_ = l_Lean_Meta_Sym_Simp_symSimpVariantExtension;
v_ext_258_ = lean_ctor_get(v___x_257_, 1);
v_toEnvExtension_259_ = lean_ctor_get(v_ext_258_, 0);
v_asyncMode_260_ = lean_ctor_get(v_toEnvExtension_259_, 2);
v___x_261_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0, &l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0_once, _init_l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0);
v___x_262_ = 0;
v___x_263_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_261_, v___x_257_, v_env_255_, v_asyncMode_260_, v___x_262_);
v___x_264_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(v___x_263_, v_name_256_);
lean_dec(v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___boxed(lean_object* v_env_265_, lean_object* v_name_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(v_env_265_, v_name_266_);
lean_dec(v_name_266_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0(lean_object* v_00_u03b2_268_, lean_object* v_m_269_, lean_object* v_a_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(v_m_269_, v_a_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___boxed(lean_object* v_00_u03b2_272_, lean_object* v_m_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0(v_00_u03b2_272_, v_m_273_, v_a_274_);
lean_dec(v_a_274_);
lean_dec_ref(v_m_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0(lean_object* v_00_u03b2_276_, lean_object* v_a_277_, lean_object* v_x_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(v_a_277_, v_x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_280_, lean_object* v_a_281_, lean_object* v_x_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0(v_00_u03b2_280_, v_a_281_, v_x_282_);
lean_dec(v_x_282_);
lean_dec(v_a_281_);
return v_res_283_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Sym_Simp_symSimpVariantExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Sym_Simp_symSimpVariantExtension);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Variant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Variant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Variant(builtin);
}
#ifdef __cplusplus
}
#endif
