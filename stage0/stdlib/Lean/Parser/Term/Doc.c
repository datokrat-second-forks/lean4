// Lean compiler output
// Module: Lean.Parser.Term.Doc
// Imports: public import Lean.Parser.Extension
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "recommendedSpellingByNameExt"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 37, 190, 246, 145, 148, 24, 135)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(193, 208, 209, 98, 233, 154, 255, 115)}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__11_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__11_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__11_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__12_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__12_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__12_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__13_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__11_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__12_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__13_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__13_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__14_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__13_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__14_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__14_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_recommendedSpellingByNameExt;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "recommendedSpellingExt"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 37, 190, 246, 145, 148, 24, 135)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 98, 124, 104, 70, 9, 210, 178)}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__5_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__6_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__7_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__8_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__9_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_recommendedSpellingExt;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_addRecommendedSpelling(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "   "};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = " * The recommended spelling of `"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` in identifiers is `"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__2 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ".\n\n"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__3 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__3_value;
static const lean_array_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__4 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__4_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__5 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__5_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ").\n\n"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__6 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__6_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__7 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__7_value;
static const lean_string_object l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__8 = (const lean_object*)&l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingString_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Term_Doc_getRecommendedSpellingString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "\n\nConventions for notations in identifiers:\n\n"};
static const lean_object* l_Lean_Parser_Term_Doc_getRecommendedSpellingString___closed__0 = (const lean_object*)&l_Lean_Parser_Term_Doc_getRecommendedSpellingString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_getRecommendedSpellingString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1(lean_object* v_fst_3_, lean_object* v_as_4_, size_t v_i_5_, size_t v_stop_6_, lean_object* v_b_7_){
_start:
{
uint8_t v___x_8_; 
v___x_8_ = lean_usize_dec_eq(v_i_5_, v_stop_6_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; size_t v___x_14_; size_t v___x_15_; 
v___x_9_ = lean_array_uget_borrowed(v_as_4_, v_i_5_);
v___x_10_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___closed__0));
v___x_11_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_b_7_, v___x_9_, v___x_10_);
lean_inc_ref(v_fst_3_);
v___x_12_ = lean_array_push(v___x_11_, v_fst_3_);
lean_inc(v___x_9_);
v___x_13_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_9_, v___x_12_, v_b_7_);
v___x_14_ = ((size_t)1ULL);
v___x_15_ = lean_usize_add(v_i_5_, v___x_14_);
v_i_5_ = v___x_15_;
v_b_7_ = v___x_13_;
goto _start;
}
else
{
lean_dec_ref(v_fst_3_);
return v_b_7_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___boxed(lean_object* v_fst_17_, lean_object* v_as_18_, lean_object* v_i_19_, lean_object* v_stop_20_, lean_object* v_b_21_){
_start:
{
size_t v_i_boxed_22_; size_t v_stop_boxed_23_; lean_object* v_res_24_; 
v_i_boxed_22_ = lean_unbox_usize(v_i_19_);
lean_dec(v_i_19_);
v_stop_boxed_23_ = lean_unbox_usize(v_stop_20_);
lean_dec(v_stop_20_);
v_res_24_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1(v_fst_17_, v_as_18_, v_i_boxed_22_, v_stop_boxed_23_, v_b_21_);
lean_dec_ref(v_as_18_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v_es_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_fst_27_; lean_object* v_snd_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v_fst_27_ = lean_ctor_get(v_x_26_, 0);
lean_inc(v_fst_27_);
v_snd_28_ = lean_ctor_get(v_x_26_, 1);
lean_inc(v_snd_28_);
lean_dec_ref(v_x_26_);
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_array_get_size(v_snd_28_);
v___x_31_ = lean_nat_dec_lt(v___x_29_, v___x_30_);
if (v___x_31_ == 0)
{
lean_dec(v_snd_28_);
lean_dec(v_fst_27_);
return v_es_25_;
}
else
{
uint8_t v___x_32_; 
v___x_32_ = lean_nat_dec_le(v___x_30_, v___x_30_);
if (v___x_32_ == 0)
{
if (v___x_31_ == 0)
{
lean_dec(v_snd_28_);
lean_dec(v_fst_27_);
return v_es_25_;
}
else
{
size_t v___x_33_; size_t v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((size_t)0ULL);
v___x_34_ = lean_usize_of_nat(v___x_30_);
v___x_35_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1(v_fst_27_, v_snd_28_, v___x_33_, v___x_34_, v_es_25_);
lean_dec(v_snd_28_);
return v___x_35_;
}
}
else
{
size_t v___x_36_; size_t v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((size_t)0ULL);
v___x_37_ = lean_usize_of_nat(v___x_30_);
v___x_38_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1(v_fst_27_, v_snd_28_, v___x_36_, v___x_37_, v_es_25_);
lean_dec(v_snd_28_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v_a_39_, lean_object* v_src_40_, lean_object* v_tgt_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_42_, 0, v_src_40_);
lean_ctor_set(v___x_42_, 1, v_tgt_41_);
v___x_43_ = lean_array_push(v_a_39_, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object* v_x1_44_, lean_object* v_x2_45_){
_start:
{
lean_object* v_fst_46_; lean_object* v_fst_47_; uint8_t v___x_48_; 
v_fst_46_ = lean_ctor_get(v_x1_44_, 0);
v_fst_47_ = lean_ctor_get(v_x2_45_, 0);
v___x_48_ = l_Lean_Name_quickLt(v_fst_46_, v_fst_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0___boxed(lean_object* v_x1_49_, lean_object* v_x2_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(v_x1_49_, v_x2_50_);
lean_dec_ref(v_x2_50_);
lean_dec_ref(v_x1_49_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_hi_53_, lean_object* v_pivot_54_, lean_object* v_as_55_, lean_object* v_i_56_, lean_object* v_k_57_){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = lean_nat_dec_lt(v_k_57_, v_hi_53_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_k_57_);
v___x_59_ = lean_array_fswap(v_as_55_, v_i_56_, v_hi_53_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_i_56_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; lean_object* v_fst_62_; lean_object* v_fst_63_; uint8_t v___x_64_; 
v___x_61_ = lean_array_fget_borrowed(v_as_55_, v_k_57_);
v_fst_62_ = lean_ctor_get(v___x_61_, 0);
v_fst_63_ = lean_ctor_get(v_pivot_54_, 0);
v___x_64_ = l_Lean_Name_quickLt(v_fst_62_, v_fst_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(1u);
v___x_66_ = lean_nat_add(v_k_57_, v___x_65_);
lean_dec(v_k_57_);
v_k_57_ = v___x_66_;
goto _start;
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_68_ = lean_array_fswap(v_as_55_, v_i_56_, v_k_57_);
v___x_69_ = lean_unsigned_to_nat(1u);
v___x_70_ = lean_nat_add(v_i_56_, v___x_69_);
lean_dec(v_i_56_);
v___x_71_ = lean_nat_add(v_k_57_, v___x_69_);
lean_dec(v_k_57_);
v_as_55_ = v___x_68_;
v_i_56_ = v___x_70_;
v_k_57_ = v___x_71_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_hi_73_, lean_object* v_pivot_74_, lean_object* v_as_75_, lean_object* v_i_76_, lean_object* v_k_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg(v_hi_73_, v_pivot_74_, v_as_75_, v_i_76_, v_k_77_);
lean_dec_ref(v_pivot_74_);
lean_dec(v_hi_73_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(lean_object* v_n_79_, lean_object* v_as_80_, lean_object* v_lo_81_, lean_object* v_hi_82_){
_start:
{
lean_object* v___y_84_; uint8_t v___x_94_; 
v___x_94_ = lean_nat_dec_lt(v_lo_81_, v_hi_82_);
if (v___x_94_ == 0)
{
lean_dec(v_lo_81_);
return v_as_80_;
}
else
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v_mid_97_; lean_object* v___y_99_; lean_object* v___y_105_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_95_ = lean_nat_add(v_lo_81_, v_hi_82_);
v___x_96_ = lean_unsigned_to_nat(1u);
v_mid_97_ = lean_nat_shiftr(v___x_95_, v___x_96_);
lean_dec(v___x_95_);
v___x_110_ = lean_array_fget_borrowed(v_as_80_, v_mid_97_);
v___x_111_ = lean_array_fget_borrowed(v_as_80_, v_lo_81_);
v___x_112_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(v___x_110_, v___x_111_);
if (v___x_112_ == 0)
{
v___y_105_ = v_as_80_;
goto v___jp_104_;
}
else
{
lean_object* v___x_113_; 
v___x_113_ = lean_array_fswap(v_as_80_, v_lo_81_, v_mid_97_);
v___y_105_ = v___x_113_;
goto v___jp_104_;
}
v___jp_98_:
{
lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_100_ = lean_array_fget_borrowed(v___y_99_, v_mid_97_);
v___x_101_ = lean_array_fget_borrowed(v___y_99_, v_hi_82_);
v___x_102_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(v___x_100_, v___x_101_);
if (v___x_102_ == 0)
{
lean_dec(v_mid_97_);
v___y_84_ = v___y_99_;
goto v___jp_83_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_array_fswap(v___y_99_, v_mid_97_, v_hi_82_);
lean_dec(v_mid_97_);
v___y_84_ = v___x_103_;
goto v___jp_83_;
}
}
v___jp_104_:
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_106_ = lean_array_fget_borrowed(v___y_105_, v_hi_82_);
v___x_107_ = lean_array_fget_borrowed(v___y_105_, v_lo_81_);
v___x_108_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(v___x_106_, v___x_107_);
if (v___x_108_ == 0)
{
v___y_99_ = v___y_105_;
goto v___jp_98_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_array_fswap(v___y_105_, v_lo_81_, v_hi_82_);
v___y_99_ = v___x_109_;
goto v___jp_98_;
}
}
}
v___jp_83_:
{
lean_object* v_pivot_85_; lean_object* v___x_86_; lean_object* v_fst_87_; lean_object* v_snd_88_; uint8_t v___x_89_; 
v_pivot_85_ = lean_array_fget(v___y_84_, v_hi_82_);
lean_inc_n(v_lo_81_, 2);
v___x_86_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg(v_hi_82_, v_pivot_85_, v___y_84_, v_lo_81_, v_lo_81_);
lean_dec(v_pivot_85_);
v_fst_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_fst_87_);
v_snd_88_ = lean_ctor_get(v___x_86_, 1);
lean_inc(v_snd_88_);
lean_dec_ref(v___x_86_);
v___x_89_ = lean_nat_dec_le(v_hi_82_, v_fst_87_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(v_n_79_, v_snd_88_, v_lo_81_, v_fst_87_);
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_add(v_fst_87_, v___x_91_);
lean_dec(v_fst_87_);
v_as_80_ = v___x_90_;
v_lo_81_ = v___x_92_;
goto _start;
}
else
{
lean_dec(v_fst_87_);
lean_dec(v_lo_81_);
return v_snd_88_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_n_114_, lean_object* v_as_115_, lean_object* v_lo_116_, lean_object* v_hi_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(v_n_114_, v_as_115_, v_lo_116_, v_hi_117_);
lean_dec(v_hi_117_);
lean_dec(v_n_114_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v___f_121_, lean_object* v_x_122_, lean_object* v_s_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___y_129_; lean_object* v___y_130_; uint8_t v___x_133_; 
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_));
v___x_126_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_121_, v___x_125_, v_s_123_);
v___x_127_ = lean_array_get_size(v___x_126_);
v___x_133_ = lean_nat_dec_eq(v___x_127_, v___x_124_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___y_137_; uint8_t v___x_139_; 
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = lean_nat_sub(v___x_127_, v___x_134_);
v___x_139_ = lean_nat_dec_le(v___x_124_, v___x_135_);
if (v___x_139_ == 0)
{
lean_inc(v___x_135_);
v___y_137_ = v___x_135_;
goto v___jp_136_;
}
else
{
v___y_137_ = v___x_124_;
goto v___jp_136_;
}
v___jp_136_:
{
uint8_t v___x_138_; 
v___x_138_ = lean_nat_dec_le(v___y_137_, v___x_135_);
if (v___x_138_ == 0)
{
lean_dec(v___x_135_);
lean_inc(v___y_137_);
v___y_129_ = v___y_137_;
v___y_130_ = v___y_137_;
goto v___jp_128_;
}
else
{
v___y_129_ = v___y_137_;
v___y_130_ = v___x_135_;
goto v___jp_128_;
}
}
}
else
{
lean_object* v___x_140_; 
lean_inc_n(v___x_126_, 2);
v___x_140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_140_, 0, v___x_126_);
lean_ctor_set(v___x_140_, 1, v___x_126_);
lean_ctor_set(v___x_140_, 2, v___x_126_);
return v___x_140_;
}
v___jp_128_:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(v___x_127_, v___x_126_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_inc_ref_n(v___x_131_, 2);
v___x_132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
lean_ctor_set(v___x_132_, 2, v___x_131_);
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object* v___f_141_, lean_object* v_x_142_, lean_object* v_s_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(v___f_141_, v_x_142_, v_s_143_);
lean_dec_ref(v_x_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v_x_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_box(0);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object* v_x_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(v_x_147_);
lean_dec(v_x_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__5_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v___f_149_, lean_object* v_es_150_){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_));
v___x_153_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_149_, v___x_152_, v_es_150_);
v___x_154_ = lean_array_get_size(v___x_153_);
v___x_155_ = lean_nat_dec_eq(v___x_154_, v___x_151_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___y_159_; uint8_t v___x_163_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_sub(v___x_154_, v___x_156_);
v___x_163_ = lean_nat_dec_le(v___x_151_, v___x_157_);
if (v___x_163_ == 0)
{
lean_inc(v___x_157_);
v___y_159_ = v___x_157_;
goto v___jp_158_;
}
else
{
v___y_159_ = v___x_151_;
goto v___jp_158_;
}
v___jp_158_:
{
uint8_t v___x_160_; 
v___x_160_ = lean_nat_dec_le(v___y_159_, v___x_157_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
lean_dec(v___x_157_);
lean_inc(v___y_159_);
v___x_161_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(v___x_154_, v___x_153_, v___y_159_, v___y_159_);
lean_dec(v___y_159_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(v___x_154_, v___x_153_, v___y_159_, v___x_157_);
lean_dec(v___x_157_);
return v___x_162_;
}
}
}
else
{
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v___x_164_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object* v___x_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(v___x_167_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(lean_object* v___x_170_, lean_object* v_x_171_, lean_object* v___y_172_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_170_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object* v___x_175_, lean_object* v_x_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__6_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(v___x_175_, v_x_176_, v___y_177_);
lean_dec_ref(v___y_177_);
lean_dec_ref(v_x_176_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__14_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_));
v___x_216_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2____boxed(lean_object* v___y_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_();
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0(lean_object* v_n_219_, lean_object* v_as_220_, lean_object* v_lo_221_, lean_object* v_hi_222_, lean_object* v_w_223_, lean_object* v_hlo_224_, lean_object* v_hhi_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg(v_n_219_, v_as_220_, v_lo_221_, v_hi_222_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___boxed(lean_object* v_n_227_, lean_object* v_as_228_, lean_object* v_lo_229_, lean_object* v_hi_230_, lean_object* v_w_231_, lean_object* v_hlo_232_, lean_object* v_hhi_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0(v_n_227_, v_as_228_, v_lo_229_, v_hi_230_, v_w_231_, v_hlo_232_, v_hhi_233_);
lean_dec(v_hi_230_);
lean_dec(v_n_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_n_235_, lean_object* v_lo_236_, lean_object* v_hi_237_, lean_object* v_hhi_238_, lean_object* v_pivot_239_, lean_object* v_as_240_, lean_object* v_i_241_, lean_object* v_k_242_, lean_object* v_ilo_243_, lean_object* v_ik_244_, lean_object* v_w_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___redArg(v_hi_237_, v_pivot_239_, v_as_240_, v_i_241_, v_k_242_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_n_247_, lean_object* v_lo_248_, lean_object* v_hi_249_, lean_object* v_hhi_250_, lean_object* v_pivot_251_, lean_object* v_as_252_, lean_object* v_i_253_, lean_object* v_k_254_, lean_object* v_ilo_255_, lean_object* v_ik_256_, lean_object* v_w_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0_spec__0(v_n_247_, v_lo_248_, v_hi_249_, v_hhi_250_, v_pivot_251_, v_as_252_, v_i_253_, v_k_254_, v_ilo_255_, v_ik_256_, v_w_257_);
lean_dec_ref(v_pivot_251_);
lean_dec(v_hi_249_);
lean_dec(v_lo_248_);
lean_dec(v_n_247_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object* v___y_259_){
_start:
{
lean_inc_ref(v___y_259_);
return v___y_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__0_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(v___y_260_);
lean_dec_ref(v___y_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object* v_x_262_, lean_object* v_s_263_){
_start:
{
lean_object* v___x_264_; 
lean_inc_ref_n(v_s_263_, 2);
v___x_264_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_264_, 0, v_s_263_);
lean_ctor_set(v___x_264_, 1, v_s_263_);
lean_ctor_set(v___x_264_, 2, v_s_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object* v_x_265_, lean_object* v_s_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__1_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(v_x_265_, v_s_266_);
lean_dec_ref(v_x_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object* v_x_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_box(0);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object* v_x_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__2_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(v_x_270_);
lean_dec_ref(v_x_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object* v___x_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object* v___x_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__3_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(v___x_275_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(lean_object* v___x_278_, lean_object* v_x_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_278_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object* v___x_283_, lean_object* v_x_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___lam__4_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(v___x_283_, v_x_284_, v___y_285_);
lean_dec_ref(v___y_285_);
lean_dec_ref(v_x_284_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn___closed__10_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_));
v___x_319_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2____boxed(lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_();
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_addRecommendedSpelling(lean_object* v_env_322_, lean_object* v_rec_323_, lean_object* v_names_324_){
_start:
{
lean_object* v___x_325_; lean_object* v_toEnvExtension_326_; lean_object* v_asyncMode_327_; lean_object* v___x_328_; lean_object* v_toEnvExtension_329_; lean_object* v_asyncMode_330_; lean_object* v___x_331_; lean_object* v_env_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_325_ = l_Lean_Parser_Term_Doc_recommendedSpellingExt;
v_toEnvExtension_326_ = lean_ctor_get(v___x_325_, 0);
v_asyncMode_327_ = lean_ctor_get(v_toEnvExtension_326_, 2);
v___x_328_ = l_Lean_Parser_Term_Doc_recommendedSpellingByNameExt;
v_toEnvExtension_329_ = lean_ctor_get(v___x_328_, 0);
v_asyncMode_330_ = lean_ctor_get(v_toEnvExtension_329_, 2);
v___x_331_ = lean_box(0);
lean_inc_ref(v_rec_323_);
v_env_332_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_325_, v_env_322_, v_rec_323_, v_asyncMode_327_, v___x_331_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v_rec_323_);
lean_ctor_set(v___x_333_, 1, v_names_324_);
v___x_334_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_328_, v_env_332_, v___x_333_, v_asyncMode_330_, v___x_331_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg(lean_object* v_as_335_, lean_object* v_k_336_, lean_object* v_x_337_, lean_object* v_x_338_){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v_m_341_; lean_object* v_a_342_; uint8_t v___x_343_; 
v___x_339_ = lean_nat_add(v_x_337_, v_x_338_);
v___x_340_ = lean_unsigned_to_nat(1u);
v_m_341_ = lean_nat_shiftr(v___x_339_, v___x_340_);
lean_dec(v___x_339_);
v_a_342_ = lean_array_fget_borrowed(v_as_335_, v_m_341_);
v___x_343_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(v_a_342_, v_k_336_);
if (v___x_343_ == 0)
{
uint8_t v___x_344_; 
lean_dec(v_x_338_);
v___x_344_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__0___redArg___lam__0(v_k_336_, v_a_342_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec(v_m_341_);
lean_dec(v_x_337_);
lean_inc(v_a_342_);
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v_a_342_);
return v___x_345_;
}
else
{
lean_object* v___x_346_; uint8_t v___x_347_; lean_object* v___x_348_; uint8_t v___y_350_; 
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_nat_dec_eq(v_m_341_, v___x_346_);
v___x_348_ = lean_nat_sub(v_m_341_, v___x_340_);
lean_dec(v_m_341_);
if (v___x_347_ == 0)
{
uint8_t v___x_353_; 
v___x_353_ = lean_nat_dec_lt(v___x_348_, v_x_337_);
v___y_350_ = v___x_353_;
goto v___jp_349_;
}
else
{
v___y_350_ = v___x_347_;
goto v___jp_349_;
}
v___jp_349_:
{
if (v___y_350_ == 0)
{
v_x_338_ = v___x_348_;
goto _start;
}
else
{
lean_object* v___x_352_; 
lean_dec(v___x_348_);
lean_dec(v_x_337_);
v___x_352_ = lean_box(0);
return v___x_352_;
}
}
}
}
else
{
lean_object* v___x_354_; uint8_t v___x_355_; 
lean_dec(v_x_337_);
v___x_354_ = lean_nat_add(v_m_341_, v___x_340_);
lean_dec(v_m_341_);
v___x_355_ = lean_nat_dec_le(v___x_354_, v_x_338_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
lean_dec(v___x_354_);
lean_dec(v_x_338_);
v___x_356_ = lean_box(0);
return v___x_356_;
}
else
{
v_x_337_ = v___x_354_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg___boxed(lean_object* v_as_358_, lean_object* v_k_359_, lean_object* v_x_360_, lean_object* v_x_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg(v_as_358_, v_k_359_, v_x_360_, v_x_361_);
lean_dec_ref(v_k_359_);
lean_dec_ref(v_as_358_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__1(lean_object* v_declName_363_, lean_object* v_as_364_, size_t v_sz_365_, size_t v_i_366_, lean_object* v_b_367_){
_start:
{
lean_object* v_a_369_; uint8_t v___x_373_; 
v___x_373_ = lean_usize_dec_lt(v_i_366_, v_sz_365_);
if (v___x_373_ == 0)
{
lean_dec(v_declName_363_);
return v_b_367_;
}
else
{
lean_object* v___x_374_; lean_object* v_a_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_374_ = lean_unsigned_to_nat(0u);
v_a_375_ = lean_array_uget_borrowed(v_as_364_, v_i_366_);
v___x_376_ = lean_array_get_size(v_a_375_);
v___x_377_ = lean_nat_dec_lt(v___x_374_, v___x_376_);
if (v___x_377_ == 0)
{
v_a_369_ = v_b_367_;
goto v___jp_368_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_nat_sub(v___x_376_, v___x_378_);
v___x_380_ = lean_nat_dec_le(v___x_374_, v___x_379_);
if (v___x_380_ == 0)
{
lean_dec(v___x_379_);
v_a_369_ = v_b_367_;
goto v___jp_368_;
}
else
{
lean_object* v_spellings_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_spellings_381_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___closed__0));
lean_inc(v_declName_363_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v_declName_363_);
lean_ctor_set(v___x_382_, 1, v_spellings_381_);
v___x_383_ = l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg(v_a_375_, v___x_382_, v___x_374_, v___x_379_);
lean_dec_ref_known(v___x_382_, 2);
if (lean_obj_tag(v___x_383_) == 1)
{
lean_object* v_val_384_; lean_object* v_snd_385_; lean_object* v___x_386_; 
v_val_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_val_384_);
lean_dec_ref_known(v___x_383_, 1);
v_snd_385_ = lean_ctor_get(v_val_384_, 1);
lean_inc(v_snd_385_);
lean_dec(v_val_384_);
v___x_386_ = l_Array_append___redArg(v_b_367_, v_snd_385_);
lean_dec(v_snd_385_);
v_a_369_ = v___x_386_;
goto v___jp_368_;
}
else
{
lean_dec(v___x_383_);
v_a_369_ = v_b_367_;
goto v___jp_368_;
}
}
}
}
v___jp_368_:
{
size_t v___x_370_; size_t v___x_371_; 
v___x_370_ = ((size_t)1ULL);
v___x_371_ = lean_usize_add(v_i_366_, v___x_370_);
v_i_366_ = v___x_371_;
v_b_367_ = v_a_369_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__1___boxed(lean_object* v_declName_387_, lean_object* v_as_388_, lean_object* v_sz_389_, lean_object* v_i_390_, lean_object* v_b_391_){
_start:
{
size_t v_sz_boxed_392_; size_t v_i_boxed_393_; lean_object* v_res_394_; 
v_sz_boxed_392_ = lean_unbox_usize(v_sz_389_);
lean_dec(v_sz_389_);
v_i_boxed_393_ = lean_unbox_usize(v_i_390_);
lean_dec(v_i_390_);
v_res_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__1(v_declName_387_, v_as_388_, v_sz_boxed_392_, v_i_boxed_393_, v_b_391_);
lean_dec_ref(v_as_388_);
return v_res_394_;
}
}
static lean_object* _init_l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName___closed__0(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_box(1);
v___x_396_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName(lean_object* v_env_397_, lean_object* v_declName_398_){
_start:
{
lean_object* v___x_399_; lean_object* v_toEnvExtension_400_; lean_object* v_asyncMode_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v_importedEntries_406_; lean_object* v_spellings_407_; size_t v_sz_408_; size_t v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_399_ = l_Lean_Parser_Term_Doc_recommendedSpellingByNameExt;
v_toEnvExtension_400_ = lean_ctor_get(v___x_399_, 0);
v_asyncMode_401_ = lean_ctor_get(v_toEnvExtension_400_, 2);
v___x_402_ = lean_box(1);
v___x_403_ = lean_obj_once(&l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName___closed__0, &l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName___closed__0_once, _init_l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName___closed__0);
v___x_404_ = lean_box(0);
lean_inc_ref(v_env_397_);
v___x_405_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_403_, v_toEnvExtension_400_, v_env_397_, v_asyncMode_401_, v___x_404_);
v_importedEntries_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc_ref(v_importedEntries_406_);
lean_dec(v___x_405_);
v_spellings_407_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2__spec__1___closed__0));
v_sz_408_ = lean_array_size(v_importedEntries_406_);
v___x_409_ = ((size_t)0ULL);
lean_inc(v_declName_398_);
v___x_410_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__1(v_declName_398_, v_importedEntries_406_, v_sz_408_, v___x_409_, v_spellings_407_);
lean_dec_ref(v_importedEntries_406_);
v___x_411_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_402_, v___x_399_, v_env_397_, v_asyncMode_401_, v___x_404_);
v___x_412_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_411_, v_declName_398_);
lean_dec(v_declName_398_);
lean_dec(v___x_411_);
if (lean_obj_tag(v___x_412_) == 1)
{
lean_object* v_val_413_; lean_object* v___x_414_; 
v_val_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_val_413_);
lean_dec_ref_known(v___x_412_, 1);
v___x_414_ = l_Array_append___redArg(v___x_410_, v_val_413_);
lean_dec(v_val_413_);
return v___x_414_;
}
else
{
lean_dec(v___x_412_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0(lean_object* v_as_415_, lean_object* v_k_416_, lean_object* v_x_417_, lean_object* v_x_418_, lean_object* v_x_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___redArg(v_as_415_, v_k_416_, v_x_417_, v_x_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0___boxed(lean_object* v_as_421_, lean_object* v_k_422_, lean_object* v_x_423_, lean_object* v_x_424_, lean_object* v_x_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Array_binSearchAux___at___00Lean_Parser_Term_Doc_getRecommendedSpellingsForName_spec__0(v_as_421_, v_k_422_, v_x_423_, v_x_424_, v_x_425_);
lean_dec_ref(v_k_422_);
lean_dec_ref(v_as_421_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine_spec__0(lean_object* v_s_427_, lean_object* v_pos_428_){
_start:
{
lean_object* v_str_429_; lean_object* v_startInclusive_430_; lean_object* v_endExclusive_431_; lean_object* v___x_432_; lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v_decide_443_; 
v_str_429_ = lean_ctor_get(v_s_427_, 0);
v_startInclusive_430_ = lean_ctor_get(v_s_427_, 1);
v_endExclusive_431_ = lean_ctor_get(v_s_427_, 2);
v___x_432_ = lean_nat_add(v_startInclusive_430_, v_pos_428_);
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = lean_nat_sub(v_endExclusive_431_, v___x_432_);
v_decide_443_ = lean_nat_dec_eq(v___x_441_, v___x_442_);
lean_dec(v___x_442_);
if (v_decide_443_ == 0)
{
uint32_t v___x_444_; uint32_t v___x_445_; uint8_t v___x_446_; 
v___x_444_ = lean_string_utf8_get_fast(v_str_429_, v___x_432_);
v___x_445_ = 32;
v___x_446_ = lean_uint32_dec_eq(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
uint32_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = 9;
v___x_448_ = lean_uint32_dec_eq(v___x_444_, v___x_447_);
if (v___x_448_ == 0)
{
uint32_t v___x_449_; uint8_t v___x_450_; 
v___x_449_ = 13;
v___x_450_ = lean_uint32_dec_eq(v___x_444_, v___x_449_);
if (v___x_450_ == 0)
{
uint32_t v___x_451_; uint8_t v___x_452_; 
v___x_451_ = 10;
v___x_452_ = lean_uint32_dec_eq(v___x_444_, v___x_451_);
if (v___x_452_ == 0)
{
lean_dec(v___x_432_);
return v_pos_428_;
}
else
{
goto v___jp_433_;
}
}
else
{
goto v___jp_433_;
}
}
else
{
goto v___jp_433_;
}
}
else
{
goto v___jp_433_;
}
}
else
{
lean_dec(v___x_432_);
return v_pos_428_;
}
v___jp_433_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_434_ = lean_string_utf8_next_fast(v_str_429_, v___x_432_);
v___x_435_ = lean_nat_sub(v___x_434_, v___x_432_);
lean_dec(v___x_432_);
v___x_436_ = lean_nat_add(v_pos_428_, v___x_435_);
lean_dec(v___x_435_);
v___x_437_ = lean_unsigned_to_nat(1u);
v___x_438_ = lean_nat_add(v_pos_428_, v___x_437_);
v___x_439_ = lean_nat_dec_le(v___x_438_, v___x_436_);
lean_dec(v___x_438_);
if (v___x_439_ == 0)
{
lean_dec(v___x_436_);
return v_pos_428_;
}
else
{
lean_dec(v_pos_428_);
v_pos_428_ = v___x_436_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine_spec__0___boxed(lean_object* v_s_453_, lean_object* v_pos_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine_spec__0(v_s_453_, v_pos_454_);
lean_dec_ref(v_s_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine(lean_object* v_str_458_){
_start:
{
lean_object* v___y_460_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v_decide_467_; 
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = lean_string_utf8_byte_size(v_str_458_);
lean_inc_ref(v_str_458_);
v___x_465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_465_, 0, v_str_458_);
lean_ctor_set(v___x_465_, 1, v___x_463_);
lean_ctor_set(v___x_465_, 2, v___x_464_);
v___x_466_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine_spec__0(v___x_465_, v___x_463_);
lean_dec_ref_known(v___x_465_, 3);
v_decide_467_ = lean_nat_dec_eq(v___x_466_, v___x_464_);
lean_dec(v___x_466_);
if (v_decide_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__1));
v___x_469_ = lean_string_append(v___x_468_, v_str_458_);
lean_dec_ref(v_str_458_);
v___y_460_ = v___x_469_;
goto v___jp_459_;
}
else
{
v___y_460_ = v_str_458_;
goto v___jp_459_;
}
v___jp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine___closed__0));
v___x_462_ = lean_string_append(v___y_460_, v___x_461_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg(){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg___closed__0));
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg___boxed(lean_object* v___dummy_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg();
return v_res_475_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0(void){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___redArg();
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0(lean_object* v_s_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___boxed(lean_object* v_s_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0(v_s_479_);
lean_dec_ref(v_s_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg(lean_object* v_val_481_, lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v_a_484_, lean_object* v_b_485_){
_start:
{
lean_object* v_it_487_; lean_object* v_startInclusive_488_; lean_object* v_endExclusive_489_; 
if (lean_obj_tag(v_a_484_) == 0)
{
lean_object* v_currPos_494_; lean_object* v_searcher_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_518_; 
v_currPos_494_ = lean_ctor_get(v_a_484_, 0);
v_searcher_495_ = lean_ctor_get(v_a_484_, 1);
v_isSharedCheck_518_ = !lean_is_exclusive(v_a_484_);
if (v_isSharedCheck_518_ == 0)
{
v___x_497_ = v_a_484_;
v_isShared_498_ = v_isSharedCheck_518_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_searcher_495_);
lean_inc(v_currPos_494_);
lean_dec(v_a_484_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_518_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
uint8_t v_decide_499_; 
v_decide_499_ = lean_nat_dec_eq(v_searcher_495_, v___x_483_);
if (v_decide_499_ == 0)
{
uint32_t v___x_500_; uint32_t v___x_501_; uint8_t v___x_502_; 
v___x_500_ = 10;
v___x_501_ = lean_string_utf8_get_fast(v_val_481_, v_searcher_495_);
v___x_502_ = lean_uint32_dec_eq(v___x_501_, v___x_500_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_503_ = lean_string_utf8_next_fast(v_val_481_, v_searcher_495_);
lean_dec(v_searcher_495_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v___x_503_);
v___x_505_ = v___x_497_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_currPos_494_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_507_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
v_a_484_ = v___x_505_;
goto _start;
}
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v_slice_511_; lean_object* v_nextIt_513_; 
v___x_508_ = lean_string_utf8_next_fast(v_val_481_, v_searcher_495_);
v___x_509_ = lean_nat_sub(v___x_508_, v_searcher_495_);
v___x_510_ = lean_nat_add(v_searcher_495_, v___x_509_);
lean_dec(v___x_509_);
v_slice_511_ = l_String_Slice_subslice_x21(v___x_482_, v_currPos_494_, v_searcher_495_);
lean_inc(v___x_510_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v___x_510_);
lean_ctor_set(v___x_497_, 0, v___x_510_);
v_nextIt_513_ = v___x_497_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_510_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v___x_510_);
v_nextIt_513_ = v_reuseFailAlloc_516_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v_startInclusive_514_; lean_object* v_endExclusive_515_; 
v_startInclusive_514_ = lean_ctor_get(v_slice_511_, 0);
lean_inc(v_startInclusive_514_);
v_endExclusive_515_ = lean_ctor_get(v_slice_511_, 1);
lean_inc(v_endExclusive_515_);
lean_dec_ref(v_slice_511_);
v_it_487_ = v_nextIt_513_;
v_startInclusive_488_ = v_startInclusive_514_;
v_endExclusive_489_ = v_endExclusive_515_;
goto v___jp_486_;
}
}
}
else
{
lean_object* v___x_517_; 
lean_del_object(v___x_497_);
lean_dec(v_searcher_495_);
v___x_517_ = lean_box(1);
lean_inc(v___x_483_);
v_it_487_ = v___x_517_;
v_startInclusive_488_ = v_currPos_494_;
v_endExclusive_489_ = v___x_483_;
goto v___jp_486_;
}
}
}
else
{
lean_dec(v___x_483_);
lean_dec_ref(v_val_481_);
return v_b_485_;
}
v___jp_486_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
lean_inc_ref(v_val_481_);
v___x_490_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_490_, 0, v_val_481_);
lean_ctor_set(v___x_490_, 1, v_startInclusive_488_);
lean_ctor_set(v___x_490_, 2, v_endExclusive_489_);
v___x_491_ = l_String_Slice_toString(v___x_490_);
lean_dec_ref_known(v___x_490_, 3);
v___x_492_ = lean_array_push(v_b_485_, v___x_491_);
v_a_484_ = v_it_487_;
v_b_485_ = v___x_492_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg___boxed(lean_object* v_val_519_, lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_a_522_, lean_object* v_b_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg(v_val_519_, v___x_520_, v___x_521_, v_a_522_, v_b_523_);
lean_dec_ref(v___x_520_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__3(lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
if (lean_obj_tag(v_a_525_) == 0)
{
lean_object* v___x_527_; 
v___x_527_ = l_List_reverse___redArg(v_a_526_);
return v___x_527_;
}
else
{
lean_object* v_head_528_; lean_object* v_tail_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_538_; 
v_head_528_ = lean_ctor_get(v_a_525_, 0);
v_tail_529_ = lean_ctor_get(v_a_525_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_a_525_);
if (v_isSharedCheck_538_ == 0)
{
v___x_531_ = v_a_525_;
v_isShared_532_ = v_isSharedCheck_538_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_tail_529_);
lean_inc(v_head_528_);
lean_dec(v_a_525_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_538_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_533_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_indentLine(v_head_528_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 1, v_a_526_);
lean_ctor_set(v___x_531_, 0, v___x_533_);
v___x_535_ = v___x_531_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v_a_526_);
v___x_535_ = v_reuseFailAlloc_537_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
v_a_525_ = v_tail_529_;
v_a_526_ = v___x_535_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2(lean_object* v_s_539_, lean_object* v_pos_540_){
_start:
{
lean_object* v_str_541_; lean_object* v_startInclusive_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v_decide_546_; 
v_str_541_ = lean_ctor_get(v_s_539_, 0);
v_startInclusive_542_ = lean_ctor_get(v_s_539_, 1);
v___x_543_ = lean_nat_add(v_startInclusive_542_, v_pos_540_);
v___x_544_ = lean_nat_sub(v___x_543_, v_startInclusive_542_);
v___x_545_ = lean_unsigned_to_nat(0u);
v_decide_546_ = lean_nat_dec_eq(v___x_544_, v___x_545_);
if (v_decide_546_ == 0)
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_555_; uint32_t v___x_556_; uint32_t v___x_557_; uint8_t v___x_558_; 
lean_inc(v_startInclusive_542_);
lean_inc_ref(v_str_541_);
v___x_547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_547_, 0, v_str_541_);
lean_ctor_set(v___x_547_, 1, v_startInclusive_542_);
lean_ctor_set(v___x_547_, 2, v___x_543_);
v___x_548_ = lean_unsigned_to_nat(1u);
v___x_549_ = lean_nat_sub(v___x_544_, v___x_548_);
lean_dec(v___x_544_);
v___x_550_ = l_String_Slice_posLE(v___x_547_, v___x_549_);
lean_dec_ref_known(v___x_547_, 3);
v___x_555_ = lean_nat_add(v_startInclusive_542_, v___x_550_);
v___x_556_ = lean_string_utf8_get_fast(v_str_541_, v___x_555_);
lean_dec(v___x_555_);
v___x_557_ = 32;
v___x_558_ = lean_uint32_dec_eq(v___x_556_, v___x_557_);
if (v___x_558_ == 0)
{
uint32_t v___x_559_; uint8_t v___x_560_; 
v___x_559_ = 9;
v___x_560_ = lean_uint32_dec_eq(v___x_556_, v___x_559_);
if (v___x_560_ == 0)
{
uint32_t v___x_561_; uint8_t v___x_562_; 
v___x_561_ = 13;
v___x_562_ = lean_uint32_dec_eq(v___x_556_, v___x_561_);
if (v___x_562_ == 0)
{
uint32_t v___x_563_; uint8_t v___x_564_; 
v___x_563_ = 10;
v___x_564_ = lean_uint32_dec_eq(v___x_556_, v___x_563_);
if (v___x_564_ == 0)
{
lean_dec(v___x_550_);
return v_pos_540_;
}
else
{
goto v___jp_551_;
}
}
else
{
goto v___jp_551_;
}
}
else
{
goto v___jp_551_;
}
}
else
{
goto v___jp_551_;
}
v___jp_551_:
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_nat_add(v___x_550_, v___x_548_);
v___x_553_ = lean_nat_dec_le(v___x_552_, v_pos_540_);
lean_dec(v___x_552_);
if (v___x_553_ == 0)
{
lean_dec(v___x_550_);
return v_pos_540_;
}
else
{
lean_dec(v_pos_540_);
v_pos_540_ = v___x_550_;
goto _start;
}
}
}
else
{
lean_dec(v___x_544_);
lean_dec(v___x_543_);
return v_pos_540_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2___boxed(lean_object* v_s_565_, lean_object* v_pos_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2(v_s_565_, v_pos_566_);
lean_dec_ref(v_s_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4(lean_object* v_x_568_, lean_object* v_x_569_){
_start:
{
if (lean_obj_tag(v_x_569_) == 0)
{
return v_x_568_;
}
else
{
lean_object* v_head_570_; lean_object* v_tail_571_; lean_object* v___x_572_; 
v_head_570_ = lean_ctor_get(v_x_569_, 0);
v_tail_571_ = lean_ctor_get(v_x_569_, 1);
v___x_572_ = lean_string_append(v_x_568_, v_head_570_);
v_x_568_ = v___x_572_;
v_x_569_ = v_tail_571_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4___boxed(lean_object* v_x_574_, lean_object* v_x_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4(v_x_574_, v_x_575_);
lean_dec(v_x_575_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet(lean_object* v_spelling_587_){
_start:
{
lean_object* v_notation_588_; lean_object* v_recommendedSpelling_589_; lean_object* v_additionalInformation_x3f_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_635_; 
v_notation_588_ = lean_ctor_get(v_spelling_587_, 0);
v_recommendedSpelling_589_ = lean_ctor_get(v_spelling_587_, 1);
v_additionalInformation_x3f_590_ = lean_ctor_get(v_spelling_587_, 2);
v_isSharedCheck_635_ = !lean_is_exclusive(v_spelling_587_);
if (v_isSharedCheck_635_ == 0)
{
v___x_592_ = v_spelling_587_;
v_isShared_593_ = v_isSharedCheck_635_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_additionalInformation_x3f_590_);
lean_inc(v_recommendedSpelling_589_);
lean_inc(v_notation_588_);
lean_dec(v_spelling_587_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_635_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v_firstLine_600_; 
v___x_594_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__0));
v___x_595_ = lean_string_append(v___x_594_, v_notation_588_);
lean_dec_ref(v_notation_588_);
v___x_596_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__1));
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
v___x_598_ = lean_string_append(v___x_597_, v_recommendedSpelling_589_);
lean_dec_ref(v_recommendedSpelling_589_);
v___x_599_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__2));
v_firstLine_600_ = lean_string_append(v___x_598_, v___x_599_);
if (lean_obj_tag(v_additionalInformation_x3f_590_) == 0)
{
lean_del_object(v___x_592_);
goto v___jp_601_;
}
else
{
lean_object* v_val_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_608_; 
v_val_604_ = lean_ctor_get(v_additionalInformation_x3f_590_, 0);
lean_inc_n(v_val_604_, 2);
lean_dec_ref_known(v_additionalInformation_x3f_590_, 1);
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_string_utf8_byte_size(v_val_604_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 2, v___x_606_);
lean_ctor_set(v___x_592_, 1, v___x_605_);
lean_ctor_set(v___x_592_, 0, v_val_604_);
v___x_608_ = v___x_592_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_val_604_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_605_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v___x_606_);
v___x_608_ = v_reuseFailAlloc_634_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_609_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__0___closed__0);
v___x_610_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__4));
v___x_611_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg(v_val_604_, v___x_608_, v___x_606_, v___x_609_, v___x_610_);
lean_dec_ref(v___x_608_);
v___x_612_ = lean_array_to_list(v___x_611_);
if (lean_obj_tag(v___x_612_) == 0)
{
goto v___jp_601_;
}
else
{
lean_object* v_tail_613_; 
v_tail_613_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_tail_613_);
if (lean_obj_tag(v_tail_613_) == 0)
{
lean_object* v_head_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_head_614_ = lean_ctor_get(v___x_612_, 0);
lean_inc_n(v_head_614_, 2);
lean_dec_ref_known(v___x_612_, 2);
v___x_615_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__5));
v___x_616_ = lean_string_utf8_byte_size(v_head_614_);
v___x_617_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_617_, 0, v_head_614_);
lean_ctor_set(v___x_617_, 1, v___x_605_);
lean_ctor_set(v___x_617_, 2, v___x_616_);
v___x_618_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2(v___x_617_, v___x_616_);
lean_dec_ref_known(v___x_617_, 3);
v___x_619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_619_, 0, v_head_614_);
lean_ctor_set(v___x_619_, 1, v___x_605_);
lean_ctor_set(v___x_619_, 2, v___x_618_);
v___x_620_ = l_String_Slice_toString(v___x_619_);
lean_dec_ref_known(v___x_619_, 3);
v___x_621_ = lean_string_append(v___x_615_, v___x_620_);
lean_dec_ref(v___x_620_);
v___x_622_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__6));
v___x_623_ = lean_string_append(v___x_621_, v___x_622_);
v___x_624_ = lean_string_append(v_firstLine_600_, v___x_623_);
lean_dec_ref(v___x_623_);
return v___x_624_;
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec(v_tail_613_);
v___x_625_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__3));
v___x_626_ = lean_string_append(v_firstLine_600_, v___x_625_);
v___x_627_ = lean_box(0);
v___x_628_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__3(v___x_612_, v___x_627_);
v___x_629_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__7));
v___x_630_ = l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4(v___x_629_, v___x_628_);
lean_dec(v___x_628_);
v___x_631_ = lean_string_append(v___x_626_, v___x_630_);
lean_dec_ref(v___x_630_);
v___x_632_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__8));
v___x_633_ = lean_string_append(v___x_631_, v___x_632_);
return v___x_633_;
}
}
}
}
v___jp_601_:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__3));
v___x_603_ = lean_string_append(v_firstLine_600_, v___x_602_);
return v___x_603_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1(lean_object* v_val_636_, lean_object* v___x_637_, lean_object* v___x_638_, lean_object* v_inst_639_, lean_object* v_R_640_, lean_object* v_a_641_, lean_object* v_b_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___redArg(v_val_636_, v___x_637_, v___x_638_, v_a_641_, v_b_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1___boxed(lean_object* v_val_644_, lean_object* v___x_645_, lean_object* v___x_646_, lean_object* v_inst_647_, lean_object* v_R_648_, lean_object* v_a_649_, lean_object* v_b_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__1(v_val_644_, v___x_645_, v___x_646_, v_inst_647_, v_R_648_, v_a_649_, v_b_650_);
lean_dec_ref(v___x_645_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingString_spec__0(lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
if (lean_obj_tag(v_a_652_) == 0)
{
lean_object* v___x_654_; 
v___x_654_ = l_List_reverse___redArg(v_a_653_);
return v___x_654_;
}
else
{
lean_object* v_head_655_; lean_object* v_tail_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_665_; 
v_head_655_ = lean_ctor_get(v_a_652_, 0);
v_tail_656_ = lean_ctor_get(v_a_652_, 1);
v_isSharedCheck_665_ = !lean_is_exclusive(v_a_652_);
if (v_isSharedCheck_665_ == 0)
{
v___x_658_ = v_a_652_;
v_isShared_659_ = v_isSharedCheck_665_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_tail_656_);
lean_inc(v_head_655_);
lean_dec(v_a_652_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_665_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_660_; lean_object* v___x_662_; 
v___x_660_ = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet(v_head_655_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v_a_653_);
lean_ctor_set(v___x_658_, 0, v___x_660_);
v___x_662_ = v___x_658_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_660_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_a_653_);
v___x_662_ = v_reuseFailAlloc_664_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
v_a_652_ = v_tail_656_;
v_a_653_ = v___x_662_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_Doc_getRecommendedSpellingString(lean_object* v_env_667_, lean_object* v_declName_668_){
_start:
{
lean_object* v_spellings_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v_spellings_669_ = l_Lean_Parser_Term_Doc_getRecommendedSpellingsForName(v_env_667_, v_declName_668_);
v___x_670_ = lean_array_get_size(v_spellings_669_);
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_nat_dec_eq(v___x_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_673_ = ((lean_object*)(l_Lean_Parser_Term_Doc_getRecommendedSpellingString___closed__0));
v___x_674_ = lean_array_to_list(v_spellings_669_);
v___x_675_ = lean_box(0);
v___x_676_ = l_List_mapTR_loop___at___00Lean_Parser_Term_Doc_getRecommendedSpellingString_spec__0(v___x_674_, v___x_675_);
v___x_677_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__7));
v___x_678_ = l_List_foldl___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__4(v___x_677_, v___x_676_);
lean_dec(v___x_676_);
v___x_679_ = lean_string_append(v___x_673_, v___x_678_);
lean_dec_ref(v___x_678_);
v___x_680_ = lean_string_utf8_byte_size(v___x_679_);
lean_inc_ref(v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_671_);
lean_ctor_set(v___x_681_, 2, v___x_680_);
v___x_682_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet_spec__2(v___x_681_, v___x_680_);
lean_dec_ref_known(v___x_681_, 3);
v___x_683_ = lean_string_utf8_extract_fast(v___x_679_, v___x_671_, v___x_682_);
lean_dec(v___x_682_);
lean_dec_ref(v___x_679_);
return v___x_683_;
}
else
{
lean_object* v___x_684_; 
lean_dec_ref(v_spellings_669_);
v___x_684_ = ((lean_object*)(l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_getRecommendedSpellingString_bullet___closed__7));
return v___x_684_;
}
}
}
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Term_Doc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_383197578____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Term_Doc_recommendedSpellingByNameExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Term_Doc_recommendedSpellingByNameExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Doc_0__Lean_Parser_Term_Doc_initFn_00___x40_Lean_Parser_Term_Doc_205972326____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Term_Doc_recommendedSpellingExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Term_Doc_recommendedSpellingExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Term_Doc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Term_Doc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Term_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Term_Doc(builtin);
}
#ifdef __cplusplus
}
#endif
