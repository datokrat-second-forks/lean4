// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.DefaultAlt
// Imports: public import Lean.Compiler.LCNF.Simp.SimpM
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_alphaEqv(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__7 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__8 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__9 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.Simp.DefaultAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.Simp.addDefaultAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(lean_object* v_upperBound_1_, lean_object* v_alts_2_, lean_object* v_code_3_, lean_object* v_a_4_, lean_object* v_b_5_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_nat_dec_lt(v_a_4_, v_upperBound_1_);
if (v___x_6_ == 0)
{
lean_dec(v_a_4_);
lean_dec_ref(v_code_3_);
return v_b_5_;
}
else
{
uint8_t v___x_7_; lean_object* v_n_8_; lean_object* v_a_10_; lean_object* v___y_14_; lean_object* v___x_17_; 
v___x_7_ = 0;
v_n_8_ = lean_unsigned_to_nat(1u);
v___x_17_ = lean_array_fget_borrowed(v_alts_2_, v_a_4_);
switch(lean_obj_tag(v___x_17_))
{
case 0:
{
lean_object* v_code_18_; 
v_code_18_ = lean_ctor_get(v___x_17_, 2);
lean_inc_ref(v_code_18_);
v___y_14_ = v_code_18_;
goto v___jp_13_;
}
case 1:
{
lean_object* v_code_19_; 
v_code_19_ = lean_ctor_get(v___x_17_, 1);
lean_inc_ref(v_code_19_);
v___y_14_ = v_code_19_;
goto v___jp_13_;
}
default: 
{
lean_object* v_code_20_; 
v_code_20_ = lean_ctor_get(v___x_17_, 0);
lean_inc_ref(v_code_20_);
v___y_14_ = v_code_20_;
goto v___jp_13_;
}
}
v___jp_9_:
{
lean_object* v___x_11_; 
v___x_11_ = lean_nat_add(v_a_4_, v_n_8_);
lean_dec(v_a_4_);
v_a_4_ = v___x_11_;
v_b_5_ = v_a_10_;
goto _start;
}
v___jp_13_:
{
uint8_t v___x_15_; 
lean_inc_ref(v_code_3_);
v___x_15_ = l_Lean_Compiler_LCNF_Code_alphaEqv(v___x_7_, v___y_14_, v_code_3_);
if (v___x_15_ == 0)
{
v_a_10_ = v_b_5_;
goto v___jp_9_;
}
else
{
lean_object* v___x_16_; 
v___x_16_ = lean_nat_add(v_b_5_, v_n_8_);
lean_dec(v_b_5_);
v_a_10_ = v___x_16_;
goto v___jp_9_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg___boxed(lean_object* v_upperBound_21_, lean_object* v_alts_22_, lean_object* v_code_23_, lean_object* v_a_24_, lean_object* v_b_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(v_upperBound_21_, v_alts_22_, v_code_23_, v_a_24_, v_b_25_);
lean_dec_ref(v_alts_22_);
lean_dec(v_upperBound_21_);
return v_res_26_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(lean_object* v_alts_28_, lean_object* v_i_29_){
_start:
{
lean_object* v___x_30_; lean_object* v_n_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_30_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0, &l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0);
v_n_31_ = lean_unsigned_to_nat(1u);
v___x_32_ = lean_nat_add(v_i_29_, v_n_31_);
v___x_33_ = lean_array_get_size(v_alts_28_);
v___x_34_ = lean_array_get_borrowed(v___x_30_, v_alts_28_, v_i_29_);
switch(lean_obj_tag(v___x_34_))
{
case 0:
{
lean_object* v_code_35_; lean_object* v___x_36_; 
v_code_35_ = lean_ctor_get(v___x_34_, 2);
lean_inc_ref(v_code_35_);
v___x_36_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(v___x_33_, v_alts_28_, v_code_35_, v___x_32_, v_n_31_);
return v___x_36_;
}
case 1:
{
lean_object* v_code_37_; lean_object* v___x_38_; 
v_code_37_ = lean_ctor_get(v___x_34_, 1);
lean_inc_ref(v_code_37_);
v___x_38_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(v___x_33_, v_alts_28_, v_code_37_, v___x_32_, v_n_31_);
return v___x_38_;
}
default: 
{
lean_object* v_code_39_; lean_object* v___x_40_; 
v_code_39_ = lean_ctor_get(v___x_34_, 0);
lean_inc_ref(v_code_39_);
v___x_40_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(v___x_33_, v_alts_28_, v_code_39_, v___x_32_, v_n_31_);
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___boxed(lean_object* v_alts_41_, lean_object* v_i_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(v_alts_41_, v_i_42_);
lean_dec(v_i_42_);
lean_dec_ref(v_alts_41_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0(lean_object* v_upperBound_44_, lean_object* v_alts_45_, lean_object* v_code_46_, lean_object* v_inst_47_, lean_object* v_R_48_, lean_object* v_a_49_, lean_object* v_b_50_, lean_object* v_c_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___redArg(v_upperBound_44_, v_alts_45_, v_code_46_, v_a_49_, v_b_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0___boxed(lean_object* v_upperBound_53_, lean_object* v_alts_54_, lean_object* v_code_55_, lean_object* v_inst_56_, lean_object* v_R_57_, lean_object* v_a_58_, lean_object* v_b_59_, lean_object* v_c_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf_spec__0(v_upperBound_53_, v_alts_54_, v_code_55_, v_inst_56_, v_R_57_, v_a_58_, v_b_59_, v_c_60_);
lean_dec_ref(v_alts_54_);
lean_dec(v_upperBound_53_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg(lean_object* v_upperBound_62_, lean_object* v_alts_63_, lean_object* v_a_64_, lean_object* v_b_65_){
_start:
{
lean_object* v_a_67_; uint8_t v___x_71_; 
v___x_71_ = lean_nat_dec_lt(v_a_64_, v_upperBound_62_);
if (v___x_71_ == 0)
{
lean_dec(v_a_64_);
return v_b_65_;
}
else
{
lean_object* v_fst_72_; lean_object* v_snd_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_86_; 
v_fst_72_ = lean_ctor_get(v_b_65_, 0);
v_snd_73_ = lean_ctor_get(v_b_65_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_b_65_);
if (v_isSharedCheck_86_ == 0)
{
v___x_75_ = v_b_65_;
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_snd_73_);
lean_inc(v_fst_72_);
lean_dec(v_b_65_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(v_alts_63_, v_a_64_);
v___x_78_ = lean_nat_dec_lt(v_snd_73_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_80_; 
lean_dec(v___x_77_);
if (v_isShared_76_ == 0)
{
v___x_80_ = v___x_75_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_fst_72_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v_snd_73_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
v_a_67_ = v___x_80_;
goto v___jp_66_;
}
}
else
{
lean_object* v___x_82_; lean_object* v___x_84_; 
lean_dec(v_snd_73_);
lean_dec(v_fst_72_);
v___x_82_ = lean_array_fget_borrowed(v_alts_63_, v_a_64_);
lean_inc(v___x_82_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_77_);
lean_ctor_set(v___x_75_, 0, v___x_82_);
v___x_84_ = v___x_75_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_77_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v_a_67_ = v___x_84_;
goto v___jp_66_;
}
}
}
}
v___jp_66_:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_add(v_a_64_, v___x_68_);
lean_dec(v_a_64_);
v_a_64_ = v___x_69_;
v_b_65_ = v_a_67_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg___boxed(lean_object* v_upperBound_87_, lean_object* v_alts_88_, lean_object* v_a_89_, lean_object* v_b_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg(v_upperBound_87_, v_alts_88_, v_a_89_, v_b_90_);
lean_dec_ref(v_alts_88_);
lean_dec(v_upperBound_87_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(lean_object* v_alts_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v_maxAlt_97_; lean_object* v_max_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_fst_101_; lean_object* v_snd_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0, &l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___closed__0);
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = lean_array_get_size(v_alts_92_);
v___x_96_ = lean_unsigned_to_nat(0u);
v_maxAlt_97_ = lean_array_get_borrowed(v___x_93_, v_alts_92_, v___x_96_);
v_max_98_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(v_alts_92_, v___x_96_);
lean_inc(v_maxAlt_97_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v_maxAlt_97_);
lean_ctor_set(v___x_99_, 1, v_max_98_);
v___x_100_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg(v___x_95_, v_alts_92_, v___x_94_, v___x_99_);
v_fst_101_ = lean_ctor_get(v___x_100_, 0);
v_snd_102_ = lean_ctor_get(v___x_100_, 1);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_109_ == 0)
{
v___x_104_ = v___x_100_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_snd_102_);
lean_inc(v_fst_101_);
lean_dec(v___x_100_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_fst_101_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_snd_102_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___boxed(lean_object* v_alts_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(v_alts_110_);
lean_dec_ref(v_alts_110_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0(lean_object* v_upperBound_112_, lean_object* v_alts_113_, lean_object* v_inst_114_, lean_object* v_R_115_, lean_object* v_a_116_, lean_object* v_b_117_, lean_object* v_c_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___redArg(v_upperBound_112_, v_alts_113_, v_a_116_, v_b_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0___boxed(lean_object* v_upperBound_120_, lean_object* v_alts_121_, lean_object* v_inst_122_, lean_object* v_R_123_, lean_object* v_a_124_, lean_object* v_b_125_, lean_object* v_c_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_spec__0(v_upperBound_120_, v_alts_121_, v_inst_122_, v_R_123_, v_a_124_, v_b_125_, v_c_126_);
lean_dec_ref(v_alts_121_);
lean_dec(v_upperBound_120_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(lean_object* v_msg_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___f_147_; lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___f_150_; lean_object* v___f_151_; lean_object* v___f_152_; lean_object* v___f_153_; lean_object* v___f_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v_toApplicative_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_223_; 
v___f_147_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__0));
v___f_148_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__1));
v___f_149_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__2));
v___f_150_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__3));
v___f_151_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__4));
v___f_152_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_152_, 0, v___f_151_);
lean_closure_set(v___f_152_, 1, v___f_150_);
v___f_153_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_153_, 0, v___f_150_);
v___f_154_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__5));
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___f_147_);
lean_ctor_set(v___x_155_, 1, v___f_148_);
v___x_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___f_149_);
lean_ctor_set(v___x_156_, 2, v___f_152_);
lean_ctor_set(v___x_156_, 3, v___f_153_);
lean_ctor_set(v___x_156_, 4, v___f_154_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___f_150_);
v___x_158_ = l_StateRefT_x27_instMonad___redArg(v___x_157_);
v_toApplicative_159_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_223_ == 0)
{
lean_object* v_unused_224_; 
v_unused_224_ = lean_ctor_get(v___x_158_, 1);
lean_dec(v_unused_224_);
v___x_161_ = v___x_158_;
v_isShared_162_ = v_isSharedCheck_223_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_toApplicative_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_223_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v_toFunctor_163_; lean_object* v_toSeq_164_; lean_object* v_toSeqLeft_165_; lean_object* v_toSeqRight_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_221_; 
v_toFunctor_163_ = lean_ctor_get(v_toApplicative_159_, 0);
v_toSeq_164_ = lean_ctor_get(v_toApplicative_159_, 2);
v_toSeqLeft_165_ = lean_ctor_get(v_toApplicative_159_, 3);
v_toSeqRight_166_ = lean_ctor_get(v_toApplicative_159_, 4);
v_isSharedCheck_221_ = !lean_is_exclusive(v_toApplicative_159_);
if (v_isSharedCheck_221_ == 0)
{
lean_object* v_unused_222_; 
v_unused_222_ = lean_ctor_get(v_toApplicative_159_, 1);
lean_dec(v_unused_222_);
v___x_168_ = v_toApplicative_159_;
v_isShared_169_ = v_isSharedCheck_221_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_toSeqRight_166_);
lean_inc(v_toSeqLeft_165_);
lean_inc(v_toSeq_164_);
lean_inc(v_toFunctor_163_);
lean_dec(v_toApplicative_159_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_221_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___f_170_; lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_179_; 
v___f_170_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__6));
v___f_171_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__7));
lean_inc_ref(v_toFunctor_163_);
v___f_172_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_172_, 0, v_toFunctor_163_);
v___f_173_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_173_, 0, v_toFunctor_163_);
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v___f_172_);
lean_ctor_set(v___x_174_, 1, v___f_173_);
v___f_175_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_175_, 0, v_toSeqRight_166_);
v___f_176_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_176_, 0, v_toSeqLeft_165_);
v___f_177_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_177_, 0, v_toSeq_164_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 4, v___f_175_);
lean_ctor_set(v___x_168_, 3, v___f_176_);
lean_ctor_set(v___x_168_, 2, v___f_177_);
lean_ctor_set(v___x_168_, 1, v___f_170_);
lean_ctor_set(v___x_168_, 0, v___x_174_);
v___x_179_ = v___x_168_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v___f_170_);
lean_ctor_set(v_reuseFailAlloc_220_, 2, v___f_177_);
lean_ctor_set(v_reuseFailAlloc_220_, 3, v___f_176_);
lean_ctor_set(v_reuseFailAlloc_220_, 4, v___f_175_);
v___x_179_ = v_reuseFailAlloc_220_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_181_; 
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 1, v___f_171_);
lean_ctor_set(v___x_161_, 0, v___x_179_);
v___x_181_ = v___x_161_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v___f_171_);
v___x_181_ = v_reuseFailAlloc_219_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_182_; lean_object* v_toApplicative_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_217_; 
v___x_182_ = l_StateRefT_x27_instMonad___redArg(v___x_181_);
v_toApplicative_183_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; 
v_unused_218_ = lean_ctor_get(v___x_182_, 1);
lean_dec(v_unused_218_);
v___x_185_ = v___x_182_;
v_isShared_186_ = v_isSharedCheck_217_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_toApplicative_183_);
lean_dec(v___x_182_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_217_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v_toFunctor_187_; lean_object* v_toSeq_188_; lean_object* v_toSeqLeft_189_; lean_object* v_toSeqRight_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_215_; 
v_toFunctor_187_ = lean_ctor_get(v_toApplicative_183_, 0);
v_toSeq_188_ = lean_ctor_get(v_toApplicative_183_, 2);
v_toSeqLeft_189_ = lean_ctor_get(v_toApplicative_183_, 3);
v_toSeqRight_190_ = lean_ctor_get(v_toApplicative_183_, 4);
v_isSharedCheck_215_ = !lean_is_exclusive(v_toApplicative_183_);
if (v_isSharedCheck_215_ == 0)
{
lean_object* v_unused_216_; 
v_unused_216_ = lean_ctor_get(v_toApplicative_183_, 1);
lean_dec(v_unused_216_);
v___x_192_ = v_toApplicative_183_;
v_isShared_193_ = v_isSharedCheck_215_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_toSeqRight_190_);
lean_inc(v_toSeqLeft_189_);
lean_inc(v_toSeq_188_);
lean_inc(v_toFunctor_187_);
lean_dec(v_toApplicative_183_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_215_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___x_198_; lean_object* v___f_199_; lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___x_203_; 
v___f_194_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__8));
v___f_195_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___closed__9));
lean_inc_ref(v_toFunctor_187_);
v___f_196_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_196_, 0, v_toFunctor_187_);
v___f_197_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_197_, 0, v_toFunctor_187_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___f_196_);
lean_ctor_set(v___x_198_, 1, v___f_197_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_199_, 0, v_toSeqRight_190_);
v___f_200_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_200_, 0, v_toSeqLeft_189_);
v___f_201_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_201_, 0, v_toSeq_188_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 4, v___f_199_);
lean_ctor_set(v___x_192_, 3, v___f_200_);
lean_ctor_set(v___x_192_, 2, v___f_201_);
lean_ctor_set(v___x_192_, 1, v___f_194_);
lean_ctor_set(v___x_192_, 0, v___x_198_);
v___x_203_ = v___x_192_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___f_194_);
lean_ctor_set(v_reuseFailAlloc_214_, 2, v___f_201_);
lean_ctor_set(v_reuseFailAlloc_214_, 3, v___f_200_);
lean_ctor_set(v_reuseFailAlloc_214_, 4, v___f_199_);
v___x_203_ = v_reuseFailAlloc_214_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_205_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___f_195_);
lean_ctor_set(v___x_185_, 0, v___x_203_);
v___x_205_ = v___x_185_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___f_195_);
v___x_205_ = v_reuseFailAlloc_213_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_2919__overap_211_; lean_object* v___x_212_; 
v___x_206_ = l_ReaderT_instMonad___redArg(v___x_205_);
v___x_207_ = l_StateRefT_x27_instMonad___redArg(v___x_206_);
v___x_208_ = lean_box(0);
v___x_209_ = l_instInhabitedOfMonad___redArg(v___x_207_, v___x_208_);
v___x_210_ = l_instInhabitedReaderT___redArg(v___x_209_);
v___x_2919__overap_211_ = lean_panic_fn_borrowed(v___x_210_, v_msg_138_);
lean_dec(v___x_210_);
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_143_);
lean_inc_ref(v___y_142_);
lean_inc_ref(v___y_141_);
lean_inc(v___y_140_);
lean_inc_ref(v___y_139_);
v___x_212_ = lean_apply_8(v___x_2919__overap_211_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, lean_box(0));
return v___x_212_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___boxed(lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(v_msg_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_234_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__3(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_238_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__2));
v___x_239_ = lean_unsigned_to_nat(35u);
v___x_240_ = lean_unsigned_to_nat(63u);
v___x_241_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__1));
v___x_242_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__0));
v___x_243_ = l_mkPanicMessageWithDecl(v___x_242_, v___x_241_, v___x_240_, v___x_239_, v___x_238_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(lean_object* v_snd_244_, lean_object* v_fst_245_, lean_object* v_as_246_, size_t v_sz_247_, size_t v_i_248_, lean_object* v_b_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_a_259_; uint8_t v___x_263_; 
v___x_263_ = lean_usize_dec_lt(v_i_248_, v_sz_247_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
lean_dec_ref(v_fst_245_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v_b_249_);
return v___x_264_;
}
else
{
lean_object* v_fst_265_; lean_object* v_snd_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_325_; 
v_fst_265_ = lean_ctor_get(v_b_249_, 0);
v_snd_266_ = lean_ctor_get(v_b_249_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v_b_249_);
if (v_isSharedCheck_325_ == 0)
{
v___x_268_ = v_b_249_;
v_isShared_269_ = v_isSharedCheck_325_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_snd_266_);
lean_inc(v_fst_265_);
lean_dec(v_b_249_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_325_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; uint8_t v_first_271_; lean_object* v_a_277_; uint8_t v___x_278_; lean_object* v___y_280_; lean_object* v___y_281_; lean_object* v___y_318_; 
v___x_270_ = lean_unsigned_to_nat(1u);
v_first_271_ = lean_nat_dec_eq(v_snd_244_, v___x_270_);
v_a_277_ = lean_array_uget_borrowed(v_as_246_, v_i_248_);
v___x_278_ = 0;
switch(lean_obj_tag(v_a_277_))
{
case 0:
{
lean_object* v_code_322_; 
v_code_322_ = lean_ctor_get(v_a_277_, 2);
lean_inc_ref(v_code_322_);
v___y_318_ = v_code_322_;
goto v___jp_317_;
}
case 1:
{
lean_object* v_code_323_; 
v_code_323_ = lean_ctor_get(v_a_277_, 1);
lean_inc_ref(v_code_323_);
v___y_318_ = v_code_323_;
goto v___jp_317_;
}
default: 
{
lean_object* v_code_324_; 
v_code_324_ = lean_ctor_get(v_a_277_, 0);
lean_inc_ref(v_code_324_);
v___y_318_ = v_code_324_;
goto v___jp_317_;
}
}
v___jp_272_:
{
lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_273_ = lean_box(v_first_271_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 1, v___x_273_);
v___x_275_ = v___x_268_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_fst_265_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
v_a_259_ = v___x_275_;
goto v___jp_258_;
}
}
v___jp_279_:
{
uint8_t v___x_282_; 
v___x_282_ = l_Lean_Compiler_LCNF_Code_alphaEqv(v___x_278_, v___y_280_, v___y_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_del_object(v___x_268_);
lean_inc(v_a_277_);
v___x_283_ = lean_array_push(v_fst_265_, v_a_277_);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_snd_266_);
v_a_259_ = v___x_284_;
goto v___jp_258_;
}
else
{
if (lean_obj_tag(v_a_277_) == 0)
{
lean_object* v_params_285_; lean_object* v_code_286_; lean_object* v___x_287_; 
v_params_285_ = lean_ctor_get(v_a_277_, 1);
v_code_286_ = lean_ctor_get(v_a_277_, 2);
v___x_287_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_278_, v_params_285_, v___y_254_);
if (lean_obj_tag(v___x_287_) == 0)
{
uint8_t v___x_288_; 
lean_dec_ref_known(v___x_287_, 1);
v___x_288_ = lean_unbox(v_snd_266_);
lean_dec(v_snd_266_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_278_, v_code_286_, v___y_254_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_dec_ref_known(v___x_289_, 1);
goto v___jp_272_;
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_del_object(v___x_268_);
lean_dec(v_fst_265_);
lean_dec_ref(v_fst_245_);
v_a_290_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_289_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
else
{
goto v___jp_272_;
}
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_del_object(v___x_268_);
lean_dec(v_snd_266_);
lean_dec(v_fst_265_);
lean_dec_ref(v_fst_245_);
v_a_298_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_287_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_287_);
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
else
{
lean_object* v___x_306_; lean_object* v___x_307_; 
lean_del_object(v___x_268_);
v___x_306_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___closed__3);
v___x_307_ = l_panic___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(v___x_306_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v___x_308_; 
lean_dec_ref_known(v___x_307_, 1);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_fst_265_);
lean_ctor_set(v___x_308_, 1, v_snd_266_);
v_a_259_ = v___x_308_;
goto v___jp_258_;
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_snd_266_);
lean_dec(v_fst_265_);
lean_dec_ref(v_fst_245_);
v_a_309_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_307_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_307_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
}
v___jp_317_:
{
switch(lean_obj_tag(v_fst_245_))
{
case 0:
{
lean_object* v_code_319_; 
v_code_319_ = lean_ctor_get(v_fst_245_, 2);
lean_inc_ref(v_code_319_);
v___y_280_ = v___y_318_;
v___y_281_ = v_code_319_;
goto v___jp_279_;
}
case 1:
{
lean_object* v_code_320_; 
v_code_320_ = lean_ctor_get(v_fst_245_, 1);
lean_inc_ref(v_code_320_);
v___y_280_ = v___y_318_;
v___y_281_ = v_code_320_;
goto v___jp_279_;
}
default: 
{
lean_object* v_code_321_; 
v_code_321_ = lean_ctor_get(v_fst_245_, 0);
lean_inc_ref(v_code_321_);
v___y_280_ = v___y_318_;
v___y_281_ = v_code_321_;
goto v___jp_279_;
}
}
}
}
}
v___jp_258_:
{
size_t v___x_260_; size_t v___x_261_; 
v___x_260_ = ((size_t)1ULL);
v___x_261_ = lean_usize_add(v_i_248_, v___x_260_);
v_i_248_ = v___x_261_;
v_b_249_ = v_a_259_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___boxed(lean_object* v_snd_326_, lean_object* v_fst_327_, lean_object* v_as_328_, lean_object* v_sz_329_, lean_object* v_i_330_, lean_object* v_b_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
size_t v_sz_boxed_340_; size_t v_i_boxed_341_; lean_object* v_res_342_; 
v_sz_boxed_340_ = lean_unbox_usize(v_sz_329_);
lean_dec(v_sz_329_);
v_i_boxed_341_ = lean_unbox_usize(v_i_330_);
lean_dec(v_i_330_);
v_res_342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(v_snd_326_, v_fst_327_, v_as_328_, v_sz_boxed_340_, v_i_boxed_341_, v_b_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec_ref(v_as_328_);
lean_dec(v_snd_326_);
return v_res_342_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__2(lean_object* v___x_343_, lean_object* v_as_344_, size_t v_i_345_, size_t v_stop_346_){
_start:
{
uint8_t v___x_347_; 
v___x_347_ = lean_usize_dec_eq(v_i_345_, v_stop_346_);
if (v___x_347_ == 0)
{
uint8_t v___x_348_; lean_object* v___x_349_; 
v___x_348_ = 1;
v___x_349_ = lean_array_uget_borrowed(v_as_344_, v_i_345_);
if (lean_obj_tag(v___x_349_) == 2)
{
return v___x_348_;
}
else
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_dec_le(v___x_343_, v___x_350_);
if (v___x_351_ == 0)
{
size_t v___x_352_; size_t v___x_353_; 
v___x_352_ = ((size_t)1ULL);
v___x_353_ = lean_usize_add(v_i_345_, v___x_352_);
v_i_345_ = v___x_353_;
goto _start;
}
else
{
return v___x_348_;
}
}
}
else
{
uint8_t v___x_355_; 
v___x_355_ = 0;
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__2___boxed(lean_object* v___x_356_, lean_object* v_as_357_, lean_object* v_i_358_, lean_object* v_stop_359_){
_start:
{
size_t v_i_boxed_360_; size_t v_stop_boxed_361_; uint8_t v_res_362_; lean_object* v_r_363_; 
v_i_boxed_360_ = lean_unbox_usize(v_i_358_);
lean_dec(v_i_358_);
v_stop_boxed_361_ = lean_unbox_usize(v_stop_359_);
lean_dec(v_stop_359_);
v_res_362_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__2(v___x_356_, v_as_357_, v_i_boxed_360_, v_stop_boxed_361_);
lean_dec_ref(v_as_357_);
lean_dec(v___x_356_);
v_r_363_ = lean_box(v_res_362_);
return v_r_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object* v_alts_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_421_; 
v___x_385_ = lean_array_get_size(v_alts_370_);
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_421_ = lean_nat_dec_le(v___x_385_, v___x_386_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = lean_nat_dec_lt(v___x_422_, v___x_385_);
if (v___x_423_ == 0)
{
goto v___jp_387_;
}
else
{
if (v___x_423_ == 0)
{
goto v___jp_387_;
}
else
{
size_t v___x_424_; size_t v___x_425_; uint8_t v___x_426_; 
v___x_424_ = ((size_t)0ULL);
v___x_425_ = lean_usize_of_nat(v___x_385_);
v___x_426_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__2(v___x_385_, v_alts_370_, v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
goto v___jp_387_;
}
else
{
lean_object* v___x_427_; 
v___x_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_427_, 0, v_alts_370_);
return v___x_427_;
}
}
}
}
else
{
lean_object* v___x_428_; 
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v_alts_370_);
return v___x_428_;
}
v___jp_379_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_382_, 0, v___y_381_);
v___x_383_ = lean_array_push(v___y_380_, v___x_382_);
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
v___jp_387_:
{
lean_object* v___x_388_; lean_object* v_fst_389_; lean_object* v_snd_390_; uint8_t v_first_391_; 
v___x_388_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(v_alts_370_);
v_fst_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_fst_389_);
v_snd_390_ = lean_ctor_get(v___x_388_, 1);
lean_inc(v_snd_390_);
lean_dec_ref(v___x_388_);
v_first_391_ = lean_nat_dec_eq(v_snd_390_, v___x_386_);
if (v_first_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_372_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v___x_393_; size_t v_sz_394_; size_t v___x_395_; lean_object* v___x_396_; 
lean_dec_ref_known(v___x_392_, 1);
v___x_393_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1));
v_sz_394_ = lean_array_size(v_alts_370_);
v___x_395_ = ((size_t)0ULL);
lean_inc(v_fst_389_);
v___x_396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(v_snd_390_, v_fst_389_, v_alts_370_, v_sz_394_, v___x_395_, v___x_393_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec_ref(v_alts_370_);
lean_dec(v_snd_390_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_397_);
lean_dec_ref_known(v___x_396_, 1);
switch(lean_obj_tag(v_fst_389_))
{
case 0:
{
lean_object* v_fst_398_; lean_object* v_code_399_; 
v_fst_398_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_fst_398_);
lean_dec(v_a_397_);
v_code_399_ = lean_ctor_get(v_fst_389_, 2);
lean_inc_ref(v_code_399_);
lean_dec_ref_known(v_fst_389_, 3);
v___y_380_ = v_fst_398_;
v___y_381_ = v_code_399_;
goto v___jp_379_;
}
case 1:
{
lean_object* v_fst_400_; lean_object* v_code_401_; 
v_fst_400_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_fst_400_);
lean_dec(v_a_397_);
v_code_401_ = lean_ctor_get(v_fst_389_, 1);
lean_inc_ref(v_code_401_);
lean_dec_ref_known(v_fst_389_, 2);
v___y_380_ = v_fst_400_;
v___y_381_ = v_code_401_;
goto v___jp_379_;
}
default: 
{
lean_object* v_fst_402_; lean_object* v_code_403_; 
v_fst_402_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_fst_402_);
lean_dec(v_a_397_);
v_code_403_ = lean_ctor_get(v_fst_389_, 0);
lean_inc_ref(v_code_403_);
lean_dec_ref_known(v_fst_389_, 1);
v___y_380_ = v_fst_402_;
v___y_381_ = v_code_403_;
goto v___jp_379_;
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
lean_dec(v_fst_389_);
v_a_404_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_396_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_396_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_dec(v_snd_390_);
lean_dec(v_fst_389_);
lean_dec_ref(v_alts_370_);
v_a_412_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_392_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_392_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
else
{
lean_object* v___x_420_; 
lean_dec(v_snd_390_);
lean_dec(v_fst_389_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v_alts_370_);
return v___x_420_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___boxed(lean_object* v_alts_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_Compiler_LCNF_Simp_addDefaultAlt(v_alts_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
return v_res_438_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
}
#ifdef __cplusplus
}
#endif
