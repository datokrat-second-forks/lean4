// Lean compiler output
// Module: Lean.OriginalConstKind
// Imports: public import Lean.Environment import Lean.EnvExtension
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___lam__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___lam__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__1_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__1_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__1_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__2_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__2_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__2_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__3_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__1_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__2_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__3_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__3_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__4_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "OriginalConstKind"};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__4_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__4_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__5_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__3_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__4_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(38, 35, 30, 26, 3, 124, 68, 19)}};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__5_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__5_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__6_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_OriginalConstKind_0__Lean_initFn___lam__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__6_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__6_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__7_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__5_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(47, 229, 144, 138, 87, 216, 24, 80)}};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__7_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__7_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__8_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__7_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__2_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 180, 73, 87, 233, 249, 201, 103)}};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__8_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__8_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__9_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "privateConstKindsExt"};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__9_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__9_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__10_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__8_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__9_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(114, 164, 33, 147, 211, 59, 75, 212)}};
static const lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__10_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__10_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
LEAN_EXPORT lean_object* l_Lean_getOriginalConstKind_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_wasOriginallyDefn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_wasOriginallyDefn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_wasOriginallyTheorem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0(lean_object* v_env_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_, lean_object* v_b_5_){
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_16_, lean_object* v_as_17_, lean_object* v_i_18_, lean_object* v_stop_19_, lean_object* v_b_20_){
_start:
{
size_t v_i_boxed_21_; size_t v_stop_boxed_22_; lean_object* v_res_23_; 
v_i_boxed_21_ = lean_unbox_usize(v_i_18_);
lean_dec(v_i_18_);
v_stop_boxed_22_ = lean_unbox_usize(v_stop_19_);
lean_dec(v_stop_19_);
v_res_23_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0(v_env_16_, v_as_17_, v_i_boxed_21_, v_stop_boxed_22_, v_b_20_);
lean_dec_ref(v_as_17_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___lam__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_(lean_object* v___x_24_, lean_object* v_env_25_, lean_object* v_s_26_){
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
v___x_36_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0(v_env_25_, v___x_27_, v___x_34_, v___x_35_, v___x_29_);
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
v___x_40_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2__spec__0(v_env_25_, v___x_27_, v___x_38_, v___x_39_, v___x_29_);
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
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn___lam__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2____boxed(lean_object* v___x_42_, lean_object* v_env_43_, lean_object* v_s_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l___private_Lean_OriginalConstKind_0__Lean_initFn___lam__0_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_(v___x_42_, v_env_43_, v_s_44_);
lean_dec(v_s_44_);
lean_dec(v___x_42_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___f_71_ = ((lean_object*)(l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__6_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_));
v___x_72_ = ((lean_object*)(l___private_Lean_OriginalConstKind_0__Lean_initFn___closed__10_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_));
v___x_73_ = lean_box(0);
v___x_74_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_72_, v___x_73_, v___f_71_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2____boxed(lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_();
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOriginalConstKind_x3f(lean_object* v_env_77_, lean_object* v_declName_78_){
_start:
{
uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_79_ = 0;
v___x_80_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_81_ = lean_box(1);
v___x_82_ = 0;
v___x_83_ = lean_box(v___x_79_);
lean_inc(v_declName_78_);
lean_inc_ref(v_env_77_);
v___x_84_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_83_, v___x_80_, v_env_77_, v_declName_78_, v___x_81_, v___x_82_);
if (lean_obj_tag(v___x_84_) == 0)
{
uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = 0;
v___x_86_ = l_Lean_Environment_setExporting(v_env_77_, v___x_85_);
v___x_87_ = l_Lean_Environment_findAsync_x3f(v___x_86_, v_declName_78_, v___x_85_);
if (lean_obj_tag(v___x_87_) == 0)
{
return v___x_84_;
}
else
{
lean_object* v_val_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_97_; 
v_val_88_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_97_ == 0)
{
v___x_90_ = v___x_87_;
v_isShared_91_ = v_isSharedCheck_97_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_val_88_);
lean_dec(v___x_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_97_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
uint8_t v_kind_92_; lean_object* v___x_93_; lean_object* v___x_95_; 
v_kind_92_ = lean_ctor_get_uint8(v_val_88_, sizeof(void*)*3);
lean_dec(v_val_88_);
v___x_93_ = lean_box(v_kind_92_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 0, v___x_93_);
v___x_95_ = v___x_90_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
else
{
lean_dec(v_declName_78_);
lean_dec_ref(v_env_77_);
return v___x_84_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_wasOriginallyDefn(lean_object* v_env_98_, lean_object* v_declName_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_getOriginalConstKind_x3f(v_env_98_, v_declName_99_);
if (lean_obj_tag(v___x_100_) == 0)
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
else
{
lean_object* v_val_102_; uint8_t v___x_103_; 
v_val_102_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_val_102_);
lean_dec_ref_known(v___x_100_, 1);
v___x_103_ = lean_unbox(v_val_102_);
lean_dec(v_val_102_);
if (v___x_103_ == 0)
{
uint8_t v___x_104_; 
v___x_104_ = 1;
return v___x_104_;
}
else
{
uint8_t v___x_105_; 
v___x_105_ = 0;
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_wasOriginallyDefn___boxed(lean_object* v_env_106_, lean_object* v_declName_107_){
_start:
{
uint8_t v_res_108_; lean_object* v_r_109_; 
v_res_108_ = l_Lean_wasOriginallyDefn(v_env_106_, v_declName_107_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT uint8_t l_Lean_wasOriginallyTheorem(lean_object* v_env_110_, lean_object* v_declName_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_getOriginalConstKind_x3f(v_env_110_, v_declName_111_);
if (lean_obj_tag(v___x_112_) == 0)
{
uint8_t v___x_113_; 
v___x_113_ = 0;
return v___x_113_;
}
else
{
lean_object* v_val_114_; uint8_t v___x_115_; 
v_val_114_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_val_114_);
lean_dec_ref_known(v___x_112_, 1);
v___x_115_ = lean_unbox(v_val_114_);
lean_dec(v_val_114_);
if (v___x_115_ == 1)
{
uint8_t v___x_116_; 
v___x_116_ = 1;
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_wasOriginallyTheorem___boxed(lean_object* v_env_118_, lean_object* v_declName_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Lean_wasOriginallyTheorem(v_env_118_, v_declName_119_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_OriginalConstKind_0__Lean_initFn_00___x40_Lean_OriginalConstKind_2239415342____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_OriginalConstKind(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_OriginalConstKind(builtin);
}
#ifdef __cplusplus
}
#endif
