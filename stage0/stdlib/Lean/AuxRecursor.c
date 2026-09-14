// Lean compiler output
// Module: Lean.AuxRecursor
// Imports: public import Lean.EnvExtension import Init.Data.String.TakeDrop
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkTagDeclarationExtension(lean_object*, lean_object*);
lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
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
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lean_casesOnSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l_Lean_casesOnSuffix___closed__0 = (const lean_object*)&l_Lean_casesOnSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_casesOnSuffix = (const lean_object*)&l_Lean_casesOnSuffix___closed__0_value;
static const lean_string_object l_Lean_recOnSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "recOn"};
static const lean_object* l_Lean_recOnSuffix___closed__0 = (const lean_object*)&l_Lean_recOnSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_recOnSuffix = (const lean_object*)&l_Lean_recOnSuffix___closed__0_value;
static const lean_string_object l_Lean_brecOnSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "brecOn"};
static const lean_object* l_Lean_brecOnSuffix___closed__0 = (const lean_object*)&l_Lean_brecOnSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_brecOnSuffix = (const lean_object*)&l_Lean_brecOnSuffix___closed__0_value;
static const lean_string_object l_Lean_belowSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "below"};
static const lean_object* l_Lean_belowSuffix___closed__0 = (const lean_object*)&l_Lean_belowSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_belowSuffix = (const lean_object*)&l_Lean_belowSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkRecOnName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBRecOnName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelowName(lean_object*);
static const lean_string_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "auxRecExt"};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 237, 166, 221, 148, 106, 49, 53)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_auxRecExt;
LEAN_EXPORT lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
static const lean_string_object l_Lean_isAuxRecursor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_isAuxRecursor___closed__0 = (const lean_object*)&l_Lean_isAuxRecursor___closed__0_value;
static const lean_string_object l_Lean_isAuxRecursor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ndrec_symm"};
static const lean_object* l_Lean_isAuxRecursor___closed__1 = (const lean_object*)&l_Lean_isAuxRecursor___closed__1_value;
static const lean_ctor_object l_Lean_isAuxRecursor___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isAuxRecursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_isAuxRecursor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAuxRecursor___closed__2_value_aux_0),((lean_object*)&l_Lean_isAuxRecursor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 160, 179, 99, 219, 64, 47, 167)}};
static const lean_object* l_Lean_isAuxRecursor___closed__2 = (const lean_object*)&l_Lean_isAuxRecursor___closed__2_value;
static const lean_string_object l_Lean_isAuxRecursor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ndrecOn"};
static const lean_object* l_Lean_isAuxRecursor___closed__3 = (const lean_object*)&l_Lean_isAuxRecursor___closed__3_value;
static const lean_ctor_object l_Lean_isAuxRecursor___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isAuxRecursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_isAuxRecursor___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAuxRecursor___closed__4_value_aux_0),((lean_object*)&l_Lean_isAuxRecursor___closed__3_value),LEAN_SCALAR_PTR_LITERAL(74, 212, 24, 249, 139, 157, 15, 213)}};
static const lean_object* l_Lean_isAuxRecursor___closed__4 = (const lean_object*)&l_Lean_isAuxRecursor___closed__4_value;
static const lean_string_object l_Lean_isAuxRecursor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_isAuxRecursor___closed__5 = (const lean_object*)&l_Lean_isAuxRecursor___closed__5_value;
static const lean_ctor_object l_Lean_isAuxRecursor___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isAuxRecursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_isAuxRecursor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAuxRecursor___closed__6_value_aux_0),((lean_object*)&l_Lean_isAuxRecursor___closed__5_value),LEAN_SCALAR_PTR_LITERAL(115, 164, 251, 202, 217, 58, 77, 179)}};
static const lean_object* l_Lean_isAuxRecursor___closed__6 = (const lean_object*)&l_Lean_isAuxRecursor___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAuxRecursor___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_isAuxRecursorWithSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_isAuxRecursorWithSuffix___closed__0 = (const lean_object*)&l_Lean_isAuxRecursorWithSuffix___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_isAuxRecursorWithSuffix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAuxRecursorWithSuffix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCasesOnRecursor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isRecOnRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRecOnRecursor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isBRecOnRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isBRecOnRecursor___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "AuxRecursor"};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(243, 71, 92, 208, 56, 190, 224, 113)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(94, 87, 119, 208, 23, 13, 32, 194)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 145, 139, 114, 135, 121, 7, 142)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "sparseCasesOnExt"};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(192, 252, 121, 117, 134, 106, 159, 193)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt;
LEAN_EXPORT lean_object* l_Lean_markSparseCasesOn(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isSparseCasesOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isSparseCasesOn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isCasesOnLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCasesOnLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedNoConfusionInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedNoConfusionInfo_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedNoConfusionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedNoConfusionInfo_default = (const lean_object*)&l_Lean_instInhabitedNoConfusionInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedNoConfusionInfo = (const lean_object*)&l_Lean_instInhabitedNoConfusionInfo_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "noConfusionExt"};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(42, 4, 193, 241, 26, 143, 160, 211)}};
static const lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_noConfusionExt;
LEAN_EXPORT lean_object* l_Lean_markNoConfusion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isNoConfusion___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getNoConfusionInfo_spec__0(lean_object*);
static const lean_string_object l_Lean_getNoConfusionInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_getNoConfusionInfo___closed__0 = (const lean_object*)&l_Lean_getNoConfusionInfo___closed__0_value;
static const lean_string_object l_Lean_getNoConfusionInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_getNoConfusionInfo___closed__1 = (const lean_object*)&l_Lean_getNoConfusionInfo___closed__1_value;
static const lean_string_object l_Lean_getNoConfusionInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_getNoConfusionInfo___closed__2 = (const lean_object*)&l_Lean_getNoConfusionInfo___closed__2_value;
static lean_once_cell_t l_Lean_getNoConfusionInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getNoConfusionInfo___closed__3;
LEAN_EXPORT lean_object* l_Lean_getNoConfusionInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnName(lean_object* v_indDeclName_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = ((lean_object*)(l_Lean_casesOnSuffix___closed__0));
v___x_11_ = l_Lean_Name_str___override(v_indDeclName_9_, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkRecOnName(lean_object* v_indDeclName_12_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = ((lean_object*)(l_Lean_recOnSuffix___closed__0));
v___x_14_ = l_Lean_Name_str___override(v_indDeclName_12_, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBRecOnName(lean_object* v_indDeclName_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = ((lean_object*)(l_Lean_brecOnSuffix___closed__0));
v___x_17_ = l_Lean_Name_str___override(v_indDeclName_15_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelowName(lean_object* v_indDeclName_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l_Lean_belowSuffix___closed__0));
v___x_20_ = l_Lean_Name_str___override(v_indDeclName_18_, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_));
v___x_30_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_));
v___x_31_ = l_Lean_mkTagDeclarationExtension(v___x_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2____boxed(lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_();
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_markAuxRecursor(lean_object* v_env_34_, lean_object* v_declName_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = l_Lean_auxRecExt;
v___x_37_ = l_Lean_TagDeclarationExtension_tag(v___x_36_, v_env_34_, v_declName_35_);
return v___x_37_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAuxRecursor(lean_object* v_env_51_, lean_object* v_declName_52_){
_start:
{
uint8_t v___y_54_; lean_object* v___x_59_; lean_object* v_toEnvExtension_60_; lean_object* v_asyncMode_61_; uint8_t v___x_62_; 
v___x_59_ = l_Lean_auxRecExt;
v_toEnvExtension_60_ = lean_ctor_get(v___x_59_, 0);
v_asyncMode_61_ = lean_ctor_get(v_toEnvExtension_60_, 2);
lean_inc(v_declName_52_);
v___x_62_ = l_Lean_TagDeclarationExtension_isTagged(v___x_59_, v_env_51_, v_declName_52_, v_asyncMode_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_isAuxRecursor___closed__6));
v___x_64_ = lean_name_eq(v_declName_52_, v___x_63_);
v___y_54_ = v___x_64_;
goto v___jp_53_;
}
else
{
v___y_54_ = v___x_62_;
goto v___jp_53_;
}
v___jp_53_:
{
if (v___y_54_ == 0)
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = ((lean_object*)(l_Lean_isAuxRecursor___closed__2));
v___x_56_ = lean_name_eq(v_declName_52_, v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = ((lean_object*)(l_Lean_isAuxRecursor___closed__4));
v___x_58_ = lean_name_eq(v_declName_52_, v___x_57_);
lean_dec(v_declName_52_);
return v___x_58_;
}
else
{
lean_dec(v_declName_52_);
return v___x_56_;
}
}
else
{
lean_dec(v_declName_52_);
return v___y_54_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isAuxRecursor___boxed(lean_object* v_env_65_, lean_object* v_declName_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l_Lean_isAuxRecursor(v_env_65_, v_declName_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAuxRecursorWithSuffix(lean_object* v_env_70_, lean_object* v_declName_71_, lean_object* v_suffix_72_){
_start:
{
if (lean_obj_tag(v_declName_71_) == 1)
{
lean_object* v_str_73_; uint8_t v___x_74_; 
v_str_73_ = lean_ctor_get(v_declName_71_, 1);
v___x_74_ = lean_string_dec_eq(v_str_73_, v_suffix_72_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_75_ = ((lean_object*)(l_Lean_isAuxRecursorWithSuffix___closed__0));
v___x_76_ = lean_string_append(v_suffix_72_, v___x_75_);
v___x_77_ = lean_string_utf8_byte_size(v_str_73_);
v___x_78_ = lean_string_utf8_byte_size(v___x_76_);
v___x_79_ = lean_nat_dec_le(v___x_78_, v___x_77_);
if (v___x_79_ == 0)
{
lean_dec_ref(v___x_76_);
lean_dec_ref_known(v_declName_71_, 2);
lean_dec_ref(v_env_70_);
return v___x_79_;
}
else
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = lean_string_memcmp(v_str_73_, v___x_76_, v___x_80_, v___x_80_, v___x_78_);
lean_dec_ref(v___x_76_);
if (v___x_81_ == 0)
{
lean_dec_ref_known(v_declName_71_, 2);
lean_dec_ref(v_env_70_);
return v___x_81_;
}
else
{
uint8_t v___x_82_; 
v___x_82_ = l_Lean_isAuxRecursor(v_env_70_, v_declName_71_);
return v___x_82_;
}
}
}
else
{
uint8_t v___x_83_; 
lean_dec_ref(v_suffix_72_);
v___x_83_ = l_Lean_isAuxRecursor(v_env_70_, v_declName_71_);
return v___x_83_;
}
}
else
{
uint8_t v___x_84_; 
lean_dec_ref(v_suffix_72_);
lean_dec(v_declName_71_);
lean_dec_ref(v_env_70_);
v___x_84_ = 0;
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isAuxRecursorWithSuffix___boxed(lean_object* v_env_85_, lean_object* v_declName_86_, lean_object* v_suffix_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Lean_isAuxRecursorWithSuffix(v_env_85_, v_declName_86_, v_suffix_87_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT uint8_t l_Lean_isCasesOnRecursor(lean_object* v_env_90_, lean_object* v_declName_91_){
_start:
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = ((lean_object*)(l_Lean_casesOnSuffix___closed__0));
v___x_93_ = l_Lean_isAuxRecursorWithSuffix(v_env_90_, v_declName_91_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCasesOnRecursor___boxed(lean_object* v_env_94_, lean_object* v_declName_95_){
_start:
{
uint8_t v_res_96_; lean_object* v_r_97_; 
v_res_96_ = l_Lean_isCasesOnRecursor(v_env_94_, v_declName_95_);
v_r_97_ = lean_box(v_res_96_);
return v_r_97_;
}
}
LEAN_EXPORT uint8_t l_Lean_isRecOnRecursor(lean_object* v_env_98_, lean_object* v_declName_99_){
_start:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = ((lean_object*)(l_Lean_recOnSuffix___closed__0));
v___x_101_ = l_Lean_isAuxRecursorWithSuffix(v_env_98_, v_declName_99_, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRecOnRecursor___boxed(lean_object* v_env_102_, lean_object* v_declName_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l_Lean_isRecOnRecursor(v_env_102_, v_declName_103_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT uint8_t l_Lean_isBRecOnRecursor(lean_object* v_env_106_, lean_object* v_declName_107_){
_start:
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = ((lean_object*)(l_Lean_brecOnSuffix___closed__0));
v___x_109_ = l_Lean_isAuxRecursorWithSuffix(v_env_106_, v_declName_107_, v___x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBRecOnRecursor___boxed(lean_object* v_env_110_, lean_object* v_declName_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = l_Lean_isBRecOnRecursor(v_env_110_, v_declName_111_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_));
v___x_137_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_));
v___x_138_ = l_Lean_mkTagDeclarationExtension(v___x_136_, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2____boxed(lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_();
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_markSparseCasesOn(lean_object* v_env_141_, lean_object* v_declName_142_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt;
v___x_144_ = l_Lean_TagDeclarationExtension_tag(v___x_143_, v_env_141_, v_declName_142_);
return v___x_144_;
}
}
LEAN_EXPORT uint8_t l_Lean_isSparseCasesOn(lean_object* v_env_145_, lean_object* v_declName_146_){
_start:
{
lean_object* v___x_147_; lean_object* v_toEnvExtension_148_; lean_object* v_asyncMode_149_; uint8_t v___x_150_; 
v___x_147_ = l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt;
v_toEnvExtension_148_ = lean_ctor_get(v___x_147_, 0);
v_asyncMode_149_ = lean_ctor_get(v_toEnvExtension_148_, 2);
v___x_150_ = l_Lean_TagDeclarationExtension_isTagged(v___x_147_, v_env_145_, v_declName_146_, v_asyncMode_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_isSparseCasesOn___boxed(lean_object* v_env_151_, lean_object* v_declName_152_){
_start:
{
uint8_t v_res_153_; lean_object* v_r_154_; 
v_res_153_ = l_Lean_isSparseCasesOn(v_env_151_, v_declName_152_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT uint8_t l_Lean_isCasesOnLike(lean_object* v_env_155_, lean_object* v_declName_156_){
_start:
{
uint8_t v___x_157_; 
lean_inc(v_declName_156_);
lean_inc_ref(v_env_155_);
v___x_157_ = l_Lean_isCasesOnRecursor(v_env_155_, v_declName_156_);
if (v___x_157_ == 0)
{
uint8_t v___x_158_; 
v___x_158_ = l_Lean_isSparseCasesOn(v_env_155_, v_declName_156_);
return v___x_158_;
}
else
{
lean_dec(v_declName_156_);
lean_dec_ref(v_env_155_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCasesOnLike___boxed(lean_object* v_env_159_, lean_object* v_declName_160_){
_start:
{
uint8_t v_res_161_; lean_object* v_r_162_; 
v_res_161_ = l_Lean_isCasesOnLike(v_env_159_, v_declName_160_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx(lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v___x_164_; 
v___x_164_ = lean_unsigned_to_nat(0u);
return v___x_164_;
}
else
{
lean_object* v___x_165_; 
v___x_165_ = lean_unsigned_to_nat(1u);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx___boxed(lean_object* v_x_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_NoConfusionInfo_ctorIdx(v_x_166_);
lean_dec_ref(v_x_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___redArg(lean_object* v_t_168_, lean_object* v_k_169_){
_start:
{
if (lean_obj_tag(v_t_168_) == 0)
{
lean_object* v_arity_170_; lean_object* v_lhs_171_; lean_object* v_rhs_172_; lean_object* v___x_173_; 
v_arity_170_ = lean_ctor_get(v_t_168_, 0);
lean_inc(v_arity_170_);
v_lhs_171_ = lean_ctor_get(v_t_168_, 1);
lean_inc(v_lhs_171_);
v_rhs_172_ = lean_ctor_get(v_t_168_, 2);
lean_inc(v_rhs_172_);
lean_dec_ref_known(v_t_168_, 3);
v___x_173_ = lean_apply_3(v_k_169_, v_arity_170_, v_lhs_171_, v_rhs_172_);
return v___x_173_;
}
else
{
lean_object* v_arity_174_; lean_object* v_fields_175_; lean_object* v___x_176_; 
v_arity_174_ = lean_ctor_get(v_t_168_, 0);
lean_inc(v_arity_174_);
v_fields_175_ = lean_ctor_get(v_t_168_, 1);
lean_inc(v_fields_175_);
lean_dec_ref_known(v_t_168_, 2);
v___x_176_ = lean_apply_2(v_k_169_, v_arity_174_, v_fields_175_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim(lean_object* v_motive_177_, lean_object* v_ctorIdx_178_, lean_object* v_t_179_, lean_object* v_h_180_, lean_object* v_k_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_179_, v_k_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___boxed(lean_object* v_motive_183_, lean_object* v_ctorIdx_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_k_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_NoConfusionInfo_ctorElim(v_motive_183_, v_ctorIdx_184_, v_t_185_, v_h_186_, v_k_187_);
lean_dec(v_ctorIdx_184_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim___redArg(lean_object* v_t_189_, lean_object* v_regular_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_189_, v_regular_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim(lean_object* v_motive_192_, lean_object* v_t_193_, lean_object* v_h_194_, lean_object* v_regular_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_193_, v_regular_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim___redArg(lean_object* v_t_197_, lean_object* v_perCtor_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_197_, v_perCtor_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim(lean_object* v_motive_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_perCtor_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_201_, v_perCtor_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity(lean_object* v_x_209_){
_start:
{
lean_object* v_arity_210_; 
v_arity_210_ = lean_ctor_get(v_x_209_, 0);
lean_inc(v_arity_210_);
return v_arity_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity___boxed(lean_object* v_x_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_NoConfusionInfo_arity(v_x_211_);
lean_dec_ref(v_x_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0(lean_object* v_env_213_, lean_object* v_as_214_, size_t v_i_215_, size_t v_stop_216_, lean_object* v_b_217_){
_start:
{
lean_object* v___y_219_; uint8_t v___x_223_; 
v___x_223_ = lean_usize_dec_eq(v_i_215_, v_stop_216_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; lean_object* v_fst_225_; uint8_t v___x_226_; 
v___x_224_ = lean_array_uget_borrowed(v_as_214_, v_i_215_);
v_fst_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_fst_225_);
lean_inc_ref(v_env_213_);
v___x_226_ = l_Lean_Environment_contains(v_env_213_, v_fst_225_, v___x_223_);
if (v___x_226_ == 0)
{
v___y_219_ = v_b_217_;
goto v___jp_218_;
}
else
{
lean_object* v___x_227_; 
lean_inc(v___x_224_);
v___x_227_ = lean_array_push(v_b_217_, v___x_224_);
v___y_219_ = v___x_227_;
goto v___jp_218_;
}
}
else
{
lean_dec_ref(v_env_213_);
return v_b_217_;
}
v___jp_218_:
{
size_t v___x_220_; size_t v___x_221_; 
v___x_220_ = ((size_t)1ULL);
v___x_221_ = lean_usize_add(v_i_215_, v___x_220_);
v_i_215_ = v___x_221_;
v_b_217_ = v___y_219_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_228_, lean_object* v_as_229_, lean_object* v_i_230_, lean_object* v_stop_231_, lean_object* v_b_232_){
_start:
{
size_t v_i_boxed_233_; size_t v_stop_boxed_234_; lean_object* v_res_235_; 
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_stop_boxed_234_ = lean_unbox_usize(v_stop_231_);
lean_dec(v_stop_231_);
v_res_235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0(v_env_228_, v_as_229_, v_i_boxed_233_, v_stop_boxed_234_, v_b_232_);
lean_dec_ref(v_as_229_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_(lean_object* v_env_240_, lean_object* v_s_241_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_242_ = l_Lean_NameMap_toArray___redArg(v_s_241_);
v___x_243_ = lean_unsigned_to_nat(0u);
v___x_244_ = lean_array_get_size(v___x_242_);
v___x_245_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_));
v___x_246_ = lean_nat_dec_lt(v___x_243_, v___x_244_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; 
lean_dec_ref(v___x_242_);
lean_dec_ref(v_env_240_);
v___x_247_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_));
return v___x_247_;
}
else
{
uint8_t v___x_248_; 
v___x_248_ = lean_nat_dec_le(v___x_244_, v___x_244_);
if (v___x_248_ == 0)
{
if (v___x_246_ == 0)
{
lean_object* v___x_249_; 
lean_dec_ref(v___x_242_);
lean_dec_ref(v_env_240_);
v___x_249_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_));
return v___x_249_;
}
else
{
size_t v___x_250_; size_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_250_ = ((size_t)0ULL);
v___x_251_ = lean_usize_of_nat(v___x_244_);
v___x_252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0(v_env_240_, v___x_242_, v___x_250_, v___x_251_, v___x_245_);
lean_dec_ref(v___x_242_);
lean_inc_ref_n(v___x_252_, 2);
v___x_253_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_ctor_set(v___x_253_, 2, v___x_252_);
return v___x_253_;
}
}
else
{
size_t v___x_254_; size_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_254_ = ((size_t)0ULL);
v___x_255_ = lean_usize_of_nat(v___x_244_);
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2__spec__0(v_env_240_, v___x_242_, v___x_254_, v___x_255_, v___x_245_);
lean_dec_ref(v___x_242_);
lean_inc_ref_n(v___x_256_, 2);
v___x_257_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
lean_ctor_set(v___x_257_, 2, v___x_256_);
return v___x_257_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2____boxed(lean_object* v_env_258_, lean_object* v_s_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_(v_env_258_, v_s_259_);
lean_dec(v_s_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___f_267_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_));
v___x_268_ = ((lean_object*)(l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_));
v___x_269_ = lean_box(2);
v___x_270_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_268_, v___x_269_, v___f_267_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2____boxed(lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_();
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_markNoConfusion(lean_object* v_env_273_, lean_object* v_n_274_, lean_object* v_info_275_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = l_Lean_noConfusionExt;
v___x_277_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_276_, v_env_273_, v_n_274_, v_info_275_);
return v___x_277_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNoConfusion(lean_object* v_env_278_, lean_object* v_n_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = ((lean_object*)(l_Lean_instInhabitedNoConfusionInfo_default));
v___x_281_ = l_Lean_noConfusionExt;
v___x_282_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_280_, v___x_281_, v_env_278_, v_n_279_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_isNoConfusion___boxed(lean_object* v_env_283_, lean_object* v_n_284_){
_start:
{
uint8_t v_res_285_; lean_object* v_r_286_; 
v_res_285_ = l_Lean_isNoConfusion(v_env_283_, v_n_284_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getNoConfusionInfo_spec__0(lean_object* v_msg_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = ((lean_object*)(l_Lean_instInhabitedNoConfusionInfo_default));
v___x_289_ = lean_panic_fn_borrowed(v___x_288_, v_msg_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_getNoConfusionInfo___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_293_ = ((lean_object*)(l_Lean_getNoConfusionInfo___closed__2));
v___x_294_ = lean_unsigned_to_nat(14u);
v___x_295_ = lean_unsigned_to_nat(22u);
v___x_296_ = ((lean_object*)(l_Lean_getNoConfusionInfo___closed__1));
v___x_297_ = ((lean_object*)(l_Lean_getNoConfusionInfo___closed__0));
v___x_298_ = l_mkPanicMessageWithDecl(v___x_297_, v___x_296_, v___x_295_, v___x_294_, v___x_293_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNoConfusionInfo(lean_object* v_env_299_, lean_object* v_n_300_){
_start:
{
lean_object* v___x_301_; lean_object* v_toEnvExtension_302_; lean_object* v_asyncMode_303_; lean_object* v___x_304_; uint8_t v___x_305_; lean_object* v___x_306_; 
v___x_301_ = l_Lean_noConfusionExt;
v_toEnvExtension_302_ = lean_ctor_get(v___x_301_, 0);
v_asyncMode_303_ = lean_ctor_get(v_toEnvExtension_302_, 2);
v___x_304_ = ((lean_object*)(l_Lean_instInhabitedNoConfusionInfo_default));
v___x_305_ = 0;
v___x_306_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_304_, v___x_301_, v_env_299_, v_n_300_, v_asyncMode_303_, v___x_305_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_Lean_getNoConfusionInfo___closed__3, &l_Lean_getNoConfusionInfo___closed__3_once, _init_l_Lean_getNoConfusionInfo___closed__3);
v___x_308_ = l_panic___at___00Lean_getNoConfusionInfo_spec__0(v___x_307_);
return v___x_308_;
}
else
{
lean_object* v_val_309_; 
v_val_309_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_val_309_);
lean_dec_ref_known(v___x_306_, 1);
return v_val_309_;
}
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AuxRecursor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3890270560____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_auxRecExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_auxRecExt);
lean_dec_ref(res);
res = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_235549338____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt);
lean_dec_ref(res);
res = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_1899236304____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_noConfusionExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_noConfusionExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AuxRecursor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AuxRecursor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AuxRecursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AuxRecursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AuxRecursor(builtin);
}
#ifdef __cplusplus
}
#endif
