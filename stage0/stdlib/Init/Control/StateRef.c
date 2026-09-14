// Lean compiler output
// Module: Init.Control.StateRef
// Imports: public import Init.System.ST public import Init.Control.Reader
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
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_StateRefT_x27_instMonadLift___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_StateRefT_x27_instMonadLift___redArg___closed__0 = (const lean_object*)&l_StateRefT_x27_instMonadLift___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift___redArg();
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_StateRefT_x27_instMonadFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_StateRefT_x27_instMonadFunctor___redArg___closed__0 = (const lean_object*)&l_StateRefT_x27_instMonadFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg();
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_StateRefT_x27_instMonadAttachOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___closed__0 = (const lean_object*)&l_StateRefT_x27_instMonadAttachOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_set___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadControlStateRefT_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadControlStateRefT_x27___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadControlStateRefT_x27___redArg___closed__0 = (const lean_object*)&l_instMonadControlStateRefT_x27___redArg___closed__0_value;
static const lean_closure_object l_instMonadControlStateRefT_x27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadControlStateRefT_x27___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadControlStateRefT_x27___redArg___closed__1 = (const lean_object*)&l_instMonadControlStateRefT_x27___redArg___closed__1_value;
static const lean_ctor_object l_instMonadControlStateRefT_x27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadControlStateRefT_x27___redArg___closed__0_value),((lean_object*)&l_instMonadControlStateRefT_x27___redArg___closed__1_value)}};
static const lean_object* l_instMonadControlStateRefT_x27___redArg___closed__2 = (const lean_object*)&l_instMonadControlStateRefT_x27___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg();
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___boxed(lean_object*);
static lean_once_cell_t l_instMonadControlStateRefT_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMonadControlStateRefT_x27___closed__0;
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__0(lean_object* v_a_1_, lean_object* v_toPure_2_, lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_1_);
lean_ctor_set(v___x_4_, 1, v_s_3_);
v___x_5_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__1(lean_object* v_toPure_6_, lean_object* v_ref_7_, lean_object* v_inst_8_, lean_object* v_toBind_9_, lean_object* v_a_10_){
_start:
{
lean_object* v___f_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___f_11_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__0), 3, 2);
lean_closure_set(v___f_11_, 0, v_a_10_);
lean_closure_set(v___f_11_, 1, v_toPure_6_);
v___x_12_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_12_, 0, lean_box(0));
lean_closure_set(v___x_12_, 1, lean_box(0));
lean_closure_set(v___x_12_, 2, v_ref_7_);
v___x_13_ = lean_apply_2(v_inst_8_, lean_box(0), v___x_12_);
v___x_14_ = lean_apply_4(v_toBind_9_, lean_box(0), lean_box(0), v___x_13_, v___f_11_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg___lam__2(lean_object* v_toPure_15_, lean_object* v_inst_16_, lean_object* v_toBind_17_, lean_object* v_x_18_, lean_object* v_ref_19_){
_start:
{
lean_object* v___f_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_inc(v_toBind_17_);
lean_inc(v_ref_19_);
v___f_20_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__1), 5, 4);
lean_closure_set(v___f_20_, 0, v_toPure_15_);
lean_closure_set(v___f_20_, 1, v_ref_19_);
lean_closure_set(v___f_20_, 2, v_inst_16_);
lean_closure_set(v___f_20_, 3, v_toBind_17_);
v___x_21_ = lean_apply_1(v_x_18_, v_ref_19_);
v___x_22_ = lean_apply_4(v_toBind_17_, lean_box(0), lean_box(0), v___x_21_, v___f_20_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run___redArg(lean_object* v_inst_23_, lean_object* v_inst_24_, lean_object* v_x_25_, lean_object* v_s_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_toPure_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___f_32_; lean_object* v___x_33_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_23_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_23_, 1);
lean_inc_n(v_toBind_28_, 2);
lean_dec_ref(v_inst_23_);
v_toPure_29_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_29_);
lean_dec_ref(v_toApplicative_27_);
v___x_30_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_30_, 0, lean_box(0));
lean_closure_set(v___x_30_, 1, lean_box(0));
lean_closure_set(v___x_30_, 2, v_s_26_);
lean_inc(v_inst_24_);
v___x_31_ = lean_apply_2(v_inst_24_, lean_box(0), v___x_30_);
v___f_32_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_32_, 0, v_toPure_29_);
lean_closure_set(v___f_32_, 1, v_inst_24_);
lean_closure_set(v___f_32_, 2, v_toBind_28_);
lean_closure_set(v___f_32_, 3, v_x_25_);
v___x_33_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v___x_31_, v___f_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run(lean_object* v_00_u03c9_34_, lean_object* v_00_u03c3_35_, lean_object* v_m_36_, lean_object* v_inst_37_, lean_object* v_inst_38_, lean_object* v_00_u03b1_39_, lean_object* v_x_40_, lean_object* v_s_41_){
_start:
{
lean_object* v_toApplicative_42_; lean_object* v_toBind_43_; lean_object* v_toPure_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___f_47_; lean_object* v___x_48_; 
v_toApplicative_42_ = lean_ctor_get(v_inst_37_, 0);
lean_inc_ref(v_toApplicative_42_);
v_toBind_43_ = lean_ctor_get(v_inst_37_, 1);
lean_inc_n(v_toBind_43_, 2);
lean_dec_ref(v_inst_37_);
v_toPure_44_ = lean_ctor_get(v_toApplicative_42_, 1);
lean_inc(v_toPure_44_);
lean_dec_ref(v_toApplicative_42_);
v___x_45_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_45_, 0, lean_box(0));
lean_closure_set(v___x_45_, 1, lean_box(0));
lean_closure_set(v___x_45_, 2, v_s_41_);
lean_inc(v_inst_38_);
v___x_46_ = lean_apply_2(v_inst_38_, lean_box(0), v___x_45_);
v___f_47_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_47_, 0, v_toPure_44_);
lean_closure_set(v___f_47_, 1, v_inst_38_);
lean_closure_set(v___f_47_, 2, v_toBind_43_);
lean_closure_set(v___f_47_, 3, v_x_40_);
v___x_48_ = lean_apply_4(v_toBind_43_, lean_box(0), lean_box(0), v___x_46_, v___f_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg___lam__0(lean_object* v_toPure_49_, lean_object* v_____x_50_){
_start:
{
lean_object* v_fst_51_; lean_object* v___x_52_; 
v_fst_51_ = lean_ctor_get(v_____x_50_, 0);
lean_inc(v_fst_51_);
lean_dec_ref(v_____x_50_);
v___x_52_ = lean_apply_2(v_toPure_49_, lean_box(0), v_fst_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27___redArg(lean_object* v_inst_53_, lean_object* v_inst_54_, lean_object* v_x_55_, lean_object* v_s_56_){
_start:
{
lean_object* v_toApplicative_57_; lean_object* v_toBind_58_; lean_object* v_toPure_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___f_62_; lean_object* v___f_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v_toApplicative_57_ = lean_ctor_get(v_inst_53_, 0);
lean_inc_ref(v_toApplicative_57_);
v_toBind_58_ = lean_ctor_get(v_inst_53_, 1);
lean_inc_n(v_toBind_58_, 3);
lean_dec_ref(v_inst_53_);
v_toPure_59_ = lean_ctor_get(v_toApplicative_57_, 1);
lean_inc_n(v_toPure_59_, 2);
lean_dec_ref(v_toApplicative_57_);
v___x_60_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_60_, 0, lean_box(0));
lean_closure_set(v___x_60_, 1, lean_box(0));
lean_closure_set(v___x_60_, 2, v_s_56_);
lean_inc(v_inst_54_);
v___x_61_ = lean_apply_2(v_inst_54_, lean_box(0), v___x_60_);
v___f_62_ = lean_alloc_closure((void*)(l_StateRefT_x27_run_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_62_, 0, v_toPure_59_);
v___f_63_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_63_, 0, v_toPure_59_);
lean_closure_set(v___f_63_, 1, v_inst_54_);
lean_closure_set(v___f_63_, 2, v_toBind_58_);
lean_closure_set(v___f_63_, 3, v_x_55_);
v___x_64_ = lean_apply_4(v_toBind_58_, lean_box(0), lean_box(0), v___x_61_, v___f_63_);
v___x_65_ = lean_apply_4(v_toBind_58_, lean_box(0), lean_box(0), v___x_64_, v___f_62_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_run_x27(lean_object* v_00_u03c9_66_, lean_object* v_00_u03c3_67_, lean_object* v_m_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_00_u03b1_71_, lean_object* v_x_72_, lean_object* v_s_73_){
_start:
{
lean_object* v_toApplicative_74_; lean_object* v_toBind_75_; lean_object* v_toPure_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v_toApplicative_74_ = lean_ctor_get(v_inst_69_, 0);
lean_inc_ref(v_toApplicative_74_);
v_toBind_75_ = lean_ctor_get(v_inst_69_, 1);
lean_inc_n(v_toBind_75_, 3);
lean_dec_ref(v_inst_69_);
v_toPure_76_ = lean_ctor_get(v_toApplicative_74_, 1);
lean_inc_n(v_toPure_76_, 2);
lean_dec_ref(v_toApplicative_74_);
v___x_77_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_77_, 0, lean_box(0));
lean_closure_set(v___x_77_, 1, lean_box(0));
lean_closure_set(v___x_77_, 2, v_s_73_);
lean_inc(v_inst_70_);
v___x_78_ = lean_apply_2(v_inst_70_, lean_box(0), v___x_77_);
v___f_79_ = lean_alloc_closure((void*)(l_StateRefT_x27_run_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_79_, 0, v_toPure_76_);
v___f_80_ = lean_alloc_closure((void*)(l_StateRefT_x27_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_80_, 0, v_toPure_76_);
lean_closure_set(v___f_80_, 1, v_inst_70_);
lean_closure_set(v___f_80_, 2, v_toBind_75_);
lean_closure_set(v___f_80_, 3, v_x_72_);
v___x_81_ = lean_apply_4(v_toBind_75_, lean_box(0), lean_box(0), v___x_78_, v___f_80_);
v___x_82_ = lean_apply_4(v_toBind_75_, lean_box(0), lean_box(0), v___x_81_, v___f_79_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg(lean_object* v_x_83_){
_start:
{
lean_inc(v_x_83_);
return v_x_83_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___redArg___boxed(lean_object* v_x_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_StateRefT_x27_lift___redArg(v_x_84_);
lean_dec(v_x_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift(lean_object* v_00_u03c9_86_, lean_object* v_00_u03c3_87_, lean_object* v_m_88_, lean_object* v_00_u03b1_89_, lean_object* v_x_90_, lean_object* v___y_91_){
_start:
{
lean_inc(v_x_90_);
return v_x_90_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_lift___boxed(lean_object* v_00_u03c9_92_, lean_object* v_00_u03c3_93_, lean_object* v_m_94_, lean_object* v_00_u03b1_95_, lean_object* v_x_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_StateRefT_x27_lift(v_00_u03c9_92_, v_00_u03c3_93_, v_m_94_, v_00_u03b1_95_, v_x_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec(v_x_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__0(lean_object* v_b_99_, lean_object* v___y_100_, lean_object* v_x_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_box(0);
lean_inc(v___y_100_);
v___x_103_ = lean_apply_2(v_b_99_, v___x_102_, v___y_100_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__0___boxed(lean_object* v_b_104_, lean_object* v___y_105_, lean_object* v_x_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_StateRefT_x27_instMonad___redArg___lam__0(v_b_104_, v___y_105_, v_x_106_);
lean_dec(v___y_105_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__1(lean_object* v_toSeqRight_108_, lean_object* v_00_u03b1_109_, lean_object* v_00_u03b2_110_, lean_object* v_a_111_, lean_object* v_b_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___f_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
lean_inc_n(v___y_113_, 2);
v___f_114_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_114_, 0, v_b_112_);
lean_closure_set(v___f_114_, 1, v___y_113_);
v___x_115_ = lean_apply_1(v_a_111_, v___y_113_);
v___x_116_ = lean_apply_4(v_toSeqRight_108_, lean_box(0), lean_box(0), v___x_115_, v___f_114_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__1___boxed(lean_object* v_toSeqRight_117_, lean_object* v_00_u03b1_118_, lean_object* v_00_u03b2_119_, lean_object* v_a_120_, lean_object* v_b_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_StateRefT_x27_instMonad___redArg___lam__1(v_toSeqRight_117_, v_00_u03b1_118_, v_00_u03b2_119_, v_a_120_, v_b_121_, v___y_122_);
lean_dec(v___y_122_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__3(lean_object* v_toSeqLeft_124_, lean_object* v_00_u03b1_125_, lean_object* v_00_u03b2_126_, lean_object* v_a_127_, lean_object* v_b_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___f_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
lean_inc_n(v___y_129_, 2);
v___f_130_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_130_, 0, v_b_128_);
lean_closure_set(v___f_130_, 1, v___y_129_);
v___x_131_ = lean_apply_1(v_a_127_, v___y_129_);
v___x_132_ = lean_apply_4(v_toSeqLeft_124_, lean_box(0), lean_box(0), v___x_131_, v___f_130_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__3___boxed(lean_object* v_toSeqLeft_133_, lean_object* v_00_u03b1_134_, lean_object* v_00_u03b2_135_, lean_object* v_a_136_, lean_object* v_b_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_StateRefT_x27_instMonad___redArg___lam__3(v_toSeqLeft_133_, v_00_u03b1_134_, v_00_u03b2_135_, v_a_136_, v_b_137_, v___y_138_);
lean_dec(v___y_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__2(lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v_x_142_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_box(0);
lean_inc(v___y_141_);
v___x_144_ = lean_apply_2(v_x_140_, v___x_143_, v___y_141_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__2___boxed(lean_object* v_x_145_, lean_object* v___y_146_, lean_object* v_x_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_StateRefT_x27_instMonad___redArg___lam__2(v_x_145_, v___y_146_, v_x_147_);
lean_dec(v___y_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__4(lean_object* v_toSeq_149_, lean_object* v_00_u03b1_150_, lean_object* v_00_u03b2_151_, lean_object* v_f_152_, lean_object* v_x_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___f_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
lean_inc_n(v___y_154_, 2);
v___f_155_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_155_, 0, v_x_153_);
lean_closure_set(v___f_155_, 1, v___y_154_);
v___x_156_ = lean_apply_1(v_f_152_, v___y_154_);
v___x_157_ = lean_apply_4(v_toSeq_149_, lean_box(0), lean_box(0), v___x_156_, v___f_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__4___boxed(lean_object* v_toSeq_158_, lean_object* v_00_u03b1_159_, lean_object* v_00_u03b2_160_, lean_object* v_f_161_, lean_object* v_x_162_, lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_StateRefT_x27_instMonad___redArg___lam__4(v_toSeq_158_, v_00_u03b1_159_, v_00_u03b2_160_, v_f_161_, v_x_162_, v___y_163_);
lean_dec(v___y_163_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__5(lean_object* v_toFunctor_165_, lean_object* v_00_u03b1_166_, lean_object* v_00_u03b2_167_, lean_object* v_a_168_, lean_object* v_x_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_mapConst_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_mapConst_171_ = lean_ctor_get(v_toFunctor_165_, 1);
lean_inc(v_mapConst_171_);
lean_dec_ref(v_toFunctor_165_);
lean_inc(v___y_170_);
v___x_172_ = lean_apply_1(v_x_169_, v___y_170_);
v___x_173_ = lean_apply_4(v_mapConst_171_, lean_box(0), lean_box(0), v_a_168_, v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__5___boxed(lean_object* v_toFunctor_174_, lean_object* v_00_u03b1_175_, lean_object* v_00_u03b2_176_, lean_object* v_a_177_, lean_object* v_x_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_StateRefT_x27_instMonad___redArg___lam__5(v_toFunctor_174_, v_00_u03b1_175_, v_00_u03b2_176_, v_a_177_, v_x_178_, v___y_179_);
lean_dec(v___y_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__6(lean_object* v_toFunctor_181_, lean_object* v_00_u03b1_182_, lean_object* v_00_u03b2_183_, lean_object* v_f_184_, lean_object* v_x_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_map_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_map_187_ = lean_ctor_get(v_toFunctor_181_, 0);
lean_inc(v_map_187_);
lean_dec_ref(v_toFunctor_181_);
lean_inc(v___y_186_);
v___x_188_ = lean_apply_1(v_x_185_, v___y_186_);
v___x_189_ = lean_apply_4(v_map_187_, lean_box(0), lean_box(0), v_f_184_, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg___lam__6___boxed(lean_object* v_toFunctor_190_, lean_object* v_00_u03b1_191_, lean_object* v_00_u03b2_192_, lean_object* v_f_193_, lean_object* v_x_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_StateRefT_x27_instMonad___redArg___lam__6(v_toFunctor_190_, v_00_u03b1_191_, v_00_u03b2_192_, v_f_193_, v_x_194_, v___y_195_);
lean_dec(v___y_195_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad___redArg(lean_object* v_inst_197_){
_start:
{
lean_object* v_toApplicative_198_; lean_object* v_toFunctor_199_; lean_object* v_toSeq_200_; lean_object* v_toSeqLeft_201_; lean_object* v_toSeqRight_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_218_; 
v_toApplicative_198_ = lean_ctor_get(v_inst_197_, 0);
lean_inc_ref(v_toApplicative_198_);
v_toFunctor_199_ = lean_ctor_get(v_toApplicative_198_, 0);
v_toSeq_200_ = lean_ctor_get(v_toApplicative_198_, 2);
v_toSeqLeft_201_ = lean_ctor_get(v_toApplicative_198_, 3);
v_toSeqRight_202_ = lean_ctor_get(v_toApplicative_198_, 4);
v_isSharedCheck_218_ = !lean_is_exclusive(v_toApplicative_198_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; 
v_unused_219_ = lean_ctor_get(v_toApplicative_198_, 1);
lean_dec(v_unused_219_);
v___x_204_ = v_toApplicative_198_;
v_isShared_205_ = v_isSharedCheck_218_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_toSeqRight_202_);
lean_inc(v_toSeqLeft_201_);
lean_inc(v_toSeq_200_);
lean_inc(v_toFunctor_199_);
lean_dec(v_toApplicative_198_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_218_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___f_206_; lean_object* v___f_207_; lean_object* v___f_208_; lean_object* v___f_209_; lean_object* v___f_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_214_; 
v___f_206_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_206_, 0, v_toSeqRight_202_);
v___f_207_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_207_, 0, v_toSeqLeft_201_);
v___f_208_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_208_, 0, v_toSeq_200_);
lean_inc_ref(v_toFunctor_199_);
v___f_209_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__5___boxed), 6, 1);
lean_closure_set(v___f_209_, 0, v_toFunctor_199_);
v___f_210_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___redArg___lam__6___boxed), 6, 1);
lean_closure_set(v___f_210_, 0, v_toFunctor_199_);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v___f_210_);
lean_ctor_set(v___x_211_, 1, v___f_209_);
lean_inc_ref(v_inst_197_);
v___x_212_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_212_, 0, lean_box(0));
lean_closure_set(v___x_212_, 1, lean_box(0));
lean_closure_set(v___x_212_, 2, v_inst_197_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 4, v___f_206_);
lean_ctor_set(v___x_204_, 3, v___f_207_);
lean_ctor_set(v___x_204_, 2, v___f_208_);
lean_ctor_set(v___x_204_, 1, v___x_212_);
lean_ctor_set(v___x_204_, 0, v___x_211_);
v___x_214_ = v___x_204_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_212_);
lean_ctor_set(v_reuseFailAlloc_217_, 2, v___f_208_);
lean_ctor_set(v_reuseFailAlloc_217_, 3, v___f_207_);
lean_ctor_set(v_reuseFailAlloc_217_, 4, v___f_206_);
v___x_214_ = v_reuseFailAlloc_217_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 3);
lean_closure_set(v___x_215_, 0, lean_box(0));
lean_closure_set(v___x_215_, 1, lean_box(0));
lean_closure_set(v___x_215_, 2, v_inst_197_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
return v___x_216_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonad(lean_object* v_00_u03c9_220_, lean_object* v_00_u03c3_221_, lean_object* v_m_222_, lean_object* v_inst_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_StateRefT_x27_instMonad___redArg(v_inst_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift___redArg(){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = ((lean_object*)(l_StateRefT_x27_instMonadLift___redArg___closed__0));
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift___redArg___boxed(lean_object* v___dummy_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_StateRefT_x27_instMonadLift___redArg();
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadLift(lean_object* v_00_u03c9_230_, lean_object* v_00_u03c3_231_, lean_object* v_m_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = ((lean_object*)(l_StateRefT_x27_instMonadLift___redArg___closed__0));
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0(lean_object* v_00_u03b1_234_, lean_object* v_f_235_, lean_object* v_x_236_, lean_object* v___y_237_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_inc(v___y_237_);
v___x_238_ = lean_apply_1(v_x_236_, v___y_237_);
v___x_239_ = lean_apply_2(v_f_235_, lean_box(0), v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object* v_00_u03b1_240_, lean_object* v_f_241_, lean_object* v_x_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_StateRefT_x27_instMonadFunctor___redArg___lam__0(v_00_u03b1_240_, v_f_241_, v_x_242_, v___y_243_);
lean_dec(v___y_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg(){
_start:
{
lean_object* v___f_247_; 
v___f_247_ = ((lean_object*)(l_StateRefT_x27_instMonadFunctor___redArg___closed__0));
return v___f_247_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor___redArg___boxed(lean_object* v___dummy_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_StateRefT_x27_instMonadFunctor___redArg();
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadFunctor(lean_object* v_00_u03c9_250_, lean_object* v_00_u03c3_251_, lean_object* v_m_252_){
_start:
{
lean_object* v___f_253_; 
v___f_253_ = ((lean_object*)(l_StateRefT_x27_instMonadFunctor___redArg___closed__0));
return v___f_253_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__0(lean_object* v_inst_254_, lean_object* v_00_u03b1_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_failure_257_; lean_object* v___x_258_; 
v_failure_257_ = lean_ctor_get(v_inst_254_, 1);
lean_inc(v_failure_257_);
lean_dec_ref(v_inst_254_);
v___x_258_ = lean_apply_1(v_failure_257_, lean_box(0));
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__0___boxed(lean_object* v_inst_259_, lean_object* v_00_u03b1_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__0(v_inst_259_, v_00_u03b1_260_, v___y_261_);
lean_dec(v___y_261_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__1(lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v_x_265_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_box(0);
lean_inc(v___y_264_);
v___x_267_ = lean_apply_2(v___y_263_, v___x_266_, v___y_264_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__1___boxed(lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v_x_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__1(v___y_268_, v___y_269_, v_x_270_);
lean_dec(v___y_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__2(lean_object* v_inst_272_, lean_object* v_00_u03b1_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_orElse_277_; lean_object* v___f_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_orElse_277_ = lean_ctor_get(v_inst_272_, 2);
lean_inc(v_orElse_277_);
lean_dec_ref(v_inst_272_);
lean_inc_n(v___y_276_, 2);
v___f_278_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_278_, 0, v___y_275_);
lean_closure_set(v___f_278_, 1, v___y_276_);
v___x_279_ = lean_apply_1(v___y_274_, v___y_276_);
v___x_280_ = lean_apply_3(v_orElse_277_, lean_box(0), v___x_279_, v___f_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__2___boxed(lean_object* v_inst_281_, lean_object* v_00_u03b1_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__2(v_inst_281_, v_00_u03b1_282_, v___y_283_, v___y_284_, v___y_285_);
lean_dec(v___y_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object* v_inst_287_, lean_object* v_inst_288_){
_start:
{
lean_object* v___x_289_; lean_object* v_toApplicative_290_; lean_object* v___f_291_; lean_object* v___f_292_; lean_object* v___x_293_; 
v___x_289_ = l_StateRefT_x27_instMonad___redArg(v_inst_288_);
v_toApplicative_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc_ref(v_toApplicative_290_);
lean_dec_ref(v___x_289_);
lean_inc_ref(v_inst_287_);
v___f_291_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_291_, 0, v_inst_287_);
v___f_292_ = lean_alloc_closure((void*)(l_StateRefT_x27_instAlternativeOfMonad___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_292_, 0, v_inst_287_);
v___x_293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_293_, 0, v_toApplicative_290_);
lean_ctor_set(v___x_293_, 1, v___f_291_);
lean_ctor_set(v___x_293_, 2, v___f_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instAlternativeOfMonad(lean_object* v_00_u03c9_294_, lean_object* v_00_u03c3_295_, lean_object* v_m_296_, lean_object* v_inst_297_, lean_object* v_inst_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_StateRefT_x27_instAlternativeOfMonad___redArg(v_inst_297_, v_inst_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__0(lean_object* v_x_300_){
_start:
{
lean_inc(v_x_300_);
return v_x_300_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__0___boxed(lean_object* v_x_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__0(v_x_301_);
lean_dec(v_x_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__1(lean_object* v_toFunctor_303_, lean_object* v_inst_304_, lean_object* v___f_305_, lean_object* v_00_u03b1_306_, lean_object* v_x_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_map_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_map_309_ = lean_ctor_get(v_toFunctor_303_, 0);
lean_inc(v_map_309_);
lean_dec_ref(v_toFunctor_303_);
lean_inc(v___y_308_);
v___x_310_ = lean_apply_1(v_x_307_, v___y_308_);
v___x_311_ = lean_apply_2(v_inst_304_, lean_box(0), v___x_310_);
v___x_312_ = lean_apply_4(v_map_309_, lean_box(0), lean_box(0), v___f_305_, v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__1___boxed(lean_object* v_toFunctor_313_, lean_object* v_inst_314_, lean_object* v___f_315_, lean_object* v_00_u03b1_316_, lean_object* v_x_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__1(v_toFunctor_313_, v_inst_314_, v___f_315_, v_00_u03b1_316_, v_x_317_, v___y_318_);
lean_dec(v___y_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad___redArg(lean_object* v_inst_321_, lean_object* v_inst_322_){
_start:
{
lean_object* v_toApplicative_323_; lean_object* v_toFunctor_324_; lean_object* v___f_325_; lean_object* v___f_326_; 
v_toApplicative_323_ = lean_ctor_get(v_inst_321_, 0);
lean_inc_ref(v_toApplicative_323_);
lean_dec_ref(v_inst_321_);
v_toFunctor_324_ = lean_ctor_get(v_toApplicative_323_, 0);
lean_inc_ref(v_toFunctor_324_);
lean_dec_ref(v_toApplicative_323_);
v___f_325_ = ((lean_object*)(l_StateRefT_x27_instMonadAttachOfMonad___redArg___closed__0));
v___f_326_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadAttachOfMonad___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_326_, 0, v_toFunctor_324_);
lean_closure_set(v___f_326_, 1, v_inst_322_);
lean_closure_set(v___f_326_, 2, v___f_325_);
return v___f_326_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadAttachOfMonad(lean_object* v_00_u03c9_327_, lean_object* v_00_u03c3_328_, lean_object* v_m_329_, lean_object* v_inst_330_, lean_object* v_inst_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_StateRefT_x27_instMonadAttachOfMonad___redArg(v_inst_330_, v_inst_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_get___redArg(lean_object* v_inst_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_inc(v___y_334_);
v___x_335_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_335_, 0, lean_box(0));
lean_closure_set(v___x_335_, 1, lean_box(0));
lean_closure_set(v___x_335_, 2, v___y_334_);
v___x_336_ = lean_apply_2(v_inst_333_, lean_box(0), v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_get___redArg___boxed(lean_object* v_inst_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_StateRefT_x27_get___redArg(v_inst_337_, v___y_338_);
lean_dec(v___y_338_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_get(lean_object* v_00_u03c9_340_, lean_object* v_00_u03c3_341_, lean_object* v_m_342_, lean_object* v_inst_343_, lean_object* v___y_344_){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
lean_inc(v___y_344_);
v___x_345_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_345_, 0, lean_box(0));
lean_closure_set(v___x_345_, 1, lean_box(0));
lean_closure_set(v___x_345_, 2, v___y_344_);
v___x_346_ = lean_apply_2(v_inst_343_, lean_box(0), v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_get___boxed(lean_object* v_00_u03c9_347_, lean_object* v_00_u03c3_348_, lean_object* v_m_349_, lean_object* v_inst_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_StateRefT_x27_get(v_00_u03c9_347_, v_00_u03c3_348_, v_m_349_, v_inst_350_, v___y_351_);
lean_dec(v___y_351_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_set___redArg(lean_object* v_inst_353_, lean_object* v_s_354_, lean_object* v___y_355_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_inc(v___y_355_);
v___x_356_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_356_, 0, lean_box(0));
lean_closure_set(v___x_356_, 1, lean_box(0));
lean_closure_set(v___x_356_, 2, v___y_355_);
lean_closure_set(v___x_356_, 3, v_s_354_);
v___x_357_ = lean_apply_2(v_inst_353_, lean_box(0), v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_set___redArg___boxed(lean_object* v_inst_358_, lean_object* v_s_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_StateRefT_x27_set___redArg(v_inst_358_, v_s_359_, v___y_360_);
lean_dec(v___y_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_set(lean_object* v_00_u03c9_362_, lean_object* v_00_u03c3_363_, lean_object* v_m_364_, lean_object* v_inst_365_, lean_object* v_s_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
lean_inc(v___y_367_);
v___x_368_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_368_, 0, lean_box(0));
lean_closure_set(v___x_368_, 1, lean_box(0));
lean_closure_set(v___x_368_, 2, v___y_367_);
lean_closure_set(v___x_368_, 3, v_s_366_);
v___x_369_ = lean_apply_2(v_inst_365_, lean_box(0), v___x_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_set___boxed(lean_object* v_00_u03c9_370_, lean_object* v_00_u03c3_371_, lean_object* v_m_372_, lean_object* v_inst_373_, lean_object* v_s_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_StateRefT_x27_set(v_00_u03c9_370_, v_00_u03c3_371_, v_m_372_, v_inst_373_, v_s_374_, v___y_375_);
lean_dec(v___y_375_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___redArg(lean_object* v_inst_377_, lean_object* v_f_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_inc(v___y_379_);
v___x_380_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_380_, 0, lean_box(0));
lean_closure_set(v___x_380_, 1, lean_box(0));
lean_closure_set(v___x_380_, 2, lean_box(0));
lean_closure_set(v___x_380_, 3, v___y_379_);
lean_closure_set(v___x_380_, 4, v_f_378_);
v___x_381_ = lean_apply_2(v_inst_377_, lean_box(0), v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___redArg___boxed(lean_object* v_inst_382_, lean_object* v_f_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_StateRefT_x27_modifyGet___redArg(v_inst_382_, v_f_383_, v___y_384_);
lean_dec(v___y_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet(lean_object* v_00_u03c9_386_, lean_object* v_00_u03c3_387_, lean_object* v_m_388_, lean_object* v_00_u03b1_389_, lean_object* v_inst_390_, lean_object* v_f_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
lean_inc(v___y_392_);
v___x_393_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_393_, 0, lean_box(0));
lean_closure_set(v___x_393_, 1, lean_box(0));
lean_closure_set(v___x_393_, 2, lean_box(0));
lean_closure_set(v___x_393_, 3, v___y_392_);
lean_closure_set(v___x_393_, 4, v_f_391_);
v___x_394_ = lean_apply_2(v_inst_390_, lean_box(0), v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_modifyGet___boxed(lean_object* v_00_u03c9_395_, lean_object* v_00_u03c3_396_, lean_object* v_m_397_, lean_object* v_00_u03b1_398_, lean_object* v_inst_399_, lean_object* v_f_400_, lean_object* v___y_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_StateRefT_x27_modifyGet(v_00_u03c9_395_, v_00_u03c3_396_, v_m_397_, v_00_u03b1_398_, v_inst_399_, v_f_400_, v___y_401_);
lean_dec(v___y_401_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0(lean_object* v_inst_403_, lean_object* v_00_u03b1_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
lean_inc(v___y_406_);
v___x_407_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_407_, 0, lean_box(0));
lean_closure_set(v___x_407_, 1, lean_box(0));
lean_closure_set(v___x_407_, 2, lean_box(0));
lean_closure_set(v___x_407_, 3, v___y_406_);
lean_closure_set(v___x_407_, 4, v___y_405_);
v___x_408_ = lean_apply_2(v_inst_403_, lean_box(0), v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0___boxed(lean_object* v_inst_409_, lean_object* v_00_u03b1_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0(v_inst_409_, v_00_u03b1_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(lean_object* v_inst_414_){
_start:
{
lean_object* v___f_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
lean_inc_n(v_inst_414_, 2);
v___f_415_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_415_, 0, v_inst_414_);
v___x_416_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_416_, 0, lean_box(0));
lean_closure_set(v___x_416_, 1, lean_box(0));
lean_closure_set(v___x_416_, 2, lean_box(0));
lean_closure_set(v___x_416_, 3, v_inst_414_);
v___x_417_ = lean_alloc_closure((void*)(l_StateRefT_x27_set___boxed), 6, 4);
lean_closure_set(v___x_417_, 0, lean_box(0));
lean_closure_set(v___x_417_, 1, lean_box(0));
lean_closure_set(v___x_417_, 2, lean_box(0));
lean_closure_set(v___x_417_, 3, v_inst_414_);
v___x_418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
lean_ctor_set(v___x_418_, 2, v___f_415_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST(lean_object* v_00_u03c9_419_, lean_object* v_00_u03c3_420_, lean_object* v_m_421_, lean_object* v_inst_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(v_inst_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0(lean_object* v_inst_424_, lean_object* v_00_u03b1_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_throw_428_; lean_object* v___x_429_; 
v_throw_428_ = lean_ctor_get(v_inst_424_, 0);
lean_inc(v_throw_428_);
lean_dec_ref(v_inst_424_);
v___x_429_ = lean_apply_2(v_throw_428_, lean_box(0), v___y_426_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object* v_inst_430_, lean_object* v_00_u03b1_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_StateRefT_x27_instMonadExceptOf___redArg___lam__0(v_inst_430_, v_00_u03b1_431_, v___y_432_, v___y_433_);
lean_dec(v___y_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__1(lean_object* v_c_435_, lean_object* v___y_436_, lean_object* v_e_437_){
_start:
{
lean_object* v___x_438_; 
lean_inc(v___y_436_);
v___x_438_ = lean_apply_2(v_c_435_, v_e_437_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__1___boxed(lean_object* v_c_439_, lean_object* v___y_440_, lean_object* v_e_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_StateRefT_x27_instMonadExceptOf___redArg___lam__1(v_c_439_, v___y_440_, v_e_441_);
lean_dec(v___y_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object* v_inst_443_, lean_object* v_00_u03b1_444_, lean_object* v_x_445_, lean_object* v_c_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_tryCatch_448_; lean_object* v___f_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v_tryCatch_448_ = lean_ctor_get(v_inst_443_, 1);
lean_inc(v_tryCatch_448_);
lean_dec_ref(v_inst_443_);
lean_inc_n(v___y_447_, 2);
v___f_449_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_449_, 0, v_c_446_);
lean_closure_set(v___f_449_, 1, v___y_447_);
v___x_450_ = lean_apply_1(v_x_445_, v___y_447_);
v___x_451_ = lean_apply_3(v_tryCatch_448_, lean_box(0), v___x_450_, v___f_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object* v_inst_452_, lean_object* v_00_u03b1_453_, lean_object* v_x_454_, lean_object* v_c_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(v_inst_452_, v_00_u03b1_453_, v_x_454_, v_c_455_, v___y_456_);
lean_dec(v___y_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf___redArg(lean_object* v_inst_458_){
_start:
{
lean_object* v___f_459_; lean_object* v___f_460_; lean_object* v___x_461_; 
lean_inc_ref(v_inst_458_);
v___f_459_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_459_, 0, v_inst_458_);
v___f_460_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_460_, 0, v_inst_458_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___f_459_);
lean_ctor_set(v___x_461_, 1, v___f_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_StateRefT_x27_instMonadExceptOf(lean_object* v_00_u03c9_462_, lean_object* v_00_u03c3_463_, lean_object* v_m_464_, lean_object* v_00_u03b5_465_, lean_object* v_inst_466_){
_start:
{
lean_object* v___f_467_; lean_object* v___f_468_; lean_object* v___x_469_; 
lean_inc_ref(v_inst_466_);
v___f_467_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_467_, 0, v_inst_466_);
v___f_468_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_468_, 0, v_inst_466_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v___f_467_);
lean_ctor_set(v___x_469_, 1, v___f_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__0(lean_object* v___y_470_, lean_object* v_00_u03b2_471_, lean_object* v_x_472_){
_start:
{
lean_object* v___x_473_; 
lean_inc(v___y_470_);
v___x_473_ = lean_apply_1(v_x_472_, v___y_470_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__0___boxed(lean_object* v___y_474_, lean_object* v_00_u03b2_475_, lean_object* v_x_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_instMonadControlStateRefT_x27___redArg___lam__0(v___y_474_, v_00_u03b2_475_, v_x_476_);
lean_dec(v___y_474_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__1(lean_object* v_00_u03b1_478_, lean_object* v_f_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___f_481_; lean_object* v___x_482_; 
lean_inc(v___y_480_);
v___f_481_ = lean_alloc_closure((void*)(l_instMonadControlStateRefT_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_481_, 0, v___y_480_);
v___x_482_ = lean_apply_1(v_f_479_, v___f_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__1___boxed(lean_object* v_00_u03b1_483_, lean_object* v_f_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_instMonadControlStateRefT_x27___redArg___lam__1(v_00_u03b1_483_, v_f_484_, v___y_485_);
lean_dec(v___y_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__2(lean_object* v_00_u03b1_487_, lean_object* v_x_488_, lean_object* v___y_489_){
_start:
{
lean_inc(v_x_488_);
return v_x_488_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___lam__2___boxed(lean_object* v_00_u03b1_490_, lean_object* v_x_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_instMonadControlStateRefT_x27___redArg___lam__2(v_00_u03b1_490_, v_x_491_, v___y_492_);
lean_dec(v___y_492_);
lean_dec(v_x_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg(){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = ((lean_object*)(l_instMonadControlStateRefT_x27___redArg___closed__2));
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27___redArg___boxed(lean_object* v___dummy_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_instMonadControlStateRefT_x27___redArg();
return v_res_502_;
}
}
static lean_object* _init_l_instMonadControlStateRefT_x27___closed__0(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_instMonadControlStateRefT_x27___redArg();
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlStateRefT_x27(lean_object* v_00_u03c9_504_, lean_object* v_00_u03c3_505_, lean_object* v_m_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&l_instMonadControlStateRefT_x27___closed__0, &l_instMonadControlStateRefT_x27___closed__0_once, _init_l_instMonadControlStateRefT_x27___closed__0);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__0(lean_object* v_h_508_, lean_object* v___y_509_, lean_object* v_a_x3f_510_){
_start:
{
lean_object* v___x_511_; 
lean_inc(v___y_509_);
v___x_511_ = lean_apply_2(v_h_508_, v_a_x3f_510_, v___y_509_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__0___boxed(lean_object* v_h_512_, lean_object* v___y_513_, lean_object* v_a_x3f_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_instMonadFinallyStateRefT_x27___redArg___lam__0(v_h_512_, v___y_513_, v_a_x3f_514_);
lean_dec(v___y_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__1(lean_object* v_inst_516_, lean_object* v_00_u03b1_517_, lean_object* v_00_u03b2_518_, lean_object* v_x_519_, lean_object* v_h_520_, lean_object* v___y_521_){
_start:
{
lean_object* v___f_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
lean_inc_n(v___y_521_, 2);
v___f_522_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_522_, 0, v_h_520_);
lean_closure_set(v___f_522_, 1, v___y_521_);
v___x_523_ = lean_apply_1(v_x_519_, v___y_521_);
v___x_524_ = lean_apply_4(v_inst_516_, lean_box(0), lean_box(0), v___x_523_, v___f_522_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg___lam__1___boxed(lean_object* v_inst_525_, lean_object* v_00_u03b1_526_, lean_object* v_00_u03b2_527_, lean_object* v_x_528_, lean_object* v_h_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_instMonadFinallyStateRefT_x27___redArg___lam__1(v_inst_525_, v_00_u03b1_526_, v_00_u03b2_527_, v_x_528_, v_h_529_, v___y_530_);
lean_dec(v___y_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27___redArg(lean_object* v_inst_532_){
_start:
{
lean_object* v___f_533_; 
v___f_533_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_533_, 0, v_inst_532_);
return v___f_533_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyStateRefT_x27(lean_object* v_m_534_, lean_object* v_00_u03c9_535_, lean_object* v_00_u03c3_536_, lean_object* v_inst_537_){
_start:
{
lean_object* v___f_538_; 
v___f_538_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_538_, 0, v_inst_537_);
return v___f_538_;
}
}
lean_object* runtime_initialize_Init_System_ST(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Reader(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Control_StateRef(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Reader(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Control_StateRef(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_ST(uint8_t builtin);
lean_object* initialize_Init_Control_Reader(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Control_StateRef(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Reader(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Control_StateRef(builtin);
}
#ifdef __cplusplus
}
#endif
