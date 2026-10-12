// Lean compiler output
// Module: Init.Data.Function
// Imports: public import Init.Grind.Tactics import Init.NotationExtra import Init.Classical
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
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_curry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_uncurry___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_CanonicalEquivalence_refl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_CanonicalEquivalence_refl___redArg___closed__0 = (const lean_object*)&l_Lean_CanonicalEquivalence_refl___redArg___closed__0_value;
static const lean_ctor_object l_Lean_CanonicalEquivalence_refl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_CanonicalEquivalence_refl___redArg___closed__0_value),((lean_object*)&l_Lean_CanonicalEquivalence_refl___redArg___closed__0_value)}};
static const lean_object* l_Lean_CanonicalEquivalence_refl___redArg___closed__1 = (const lean_object*)&l_Lean_CanonicalEquivalence_refl___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_refl___redArg();
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_refl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_refl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_symm___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_symm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_trans___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_trans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_curry___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v_b_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_2_);
lean_ctor_set(v___x_4_, 1, v_b_3_);
v___x_5_ = lean_apply_1(v_f_1_, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Function_curry(lean_object* v_00_u03b1_6_, lean_object* v_00_u03b2_7_, lean_object* v_00_u03c6_8_, lean_object* v_f_9_, lean_object* v_a_10_, lean_object* v_b_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_12_, 0, v_a_10_);
lean_ctor_set(v___x_12_, 1, v_b_11_);
v___x_13_ = lean_apply_1(v_f_9_, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Function_uncurry___redArg(lean_object* v_f_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_fst_16_; lean_object* v_snd_17_; lean_object* v___x_18_; 
v_fst_16_ = lean_ctor_get(v_a_15_, 0);
lean_inc(v_fst_16_);
v_snd_17_ = lean_ctor_get(v_a_15_, 1);
lean_inc(v_snd_17_);
lean_dec_ref(v_a_15_);
v___x_18_ = lean_apply_2(v_f_14_, v_fst_16_, v_snd_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Function_uncurry(lean_object* v_00_u03b1_19_, lean_object* v_00_u03b2_20_, lean_object* v_00_u03c6_21_, lean_object* v_f_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_fst_24_; lean_object* v_snd_25_; lean_object* v___x_26_; 
v_fst_24_ = lean_ctor_get(v_a_23_, 0);
lean_inc(v_fst_24_);
v_snd_25_ = lean_ctor_get(v_a_23_, 1);
lean_inc(v_snd_25_);
lean_dec_ref(v_a_23_);
v___x_26_ = lean_apply_2(v_f_22_, v_fst_24_, v_snd_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_refl___redArg(){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = ((lean_object*)(l_Lean_CanonicalEquivalence_refl___redArg___closed__1));
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_refl___redArg___boxed(lean_object* v___dummy_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_CanonicalEquivalence_refl___redArg();
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_refl(lean_object* v_00_u03b1_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = ((lean_object*)(l_Lean_CanonicalEquivalence_refl___redArg___closed__1));
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_symm___redArg(lean_object* v_e_36_){
_start:
{
lean_object* v_toFun_37_; lean_object* v_invFun_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_toFun_37_ = lean_ctor_get(v_e_36_, 0);
v_invFun_38_ = lean_ctor_get(v_e_36_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_e_36_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v_e_36_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_invFun_38_);
lean_inc(v_toFun_37_);
lean_dec(v_e_36_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 1, v_toFun_37_);
lean_ctor_set(v___x_40_, 0, v_invFun_38_);
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_invFun_38_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_toFun_37_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_symm(lean_object* v_00_u03b1_46_, lean_object* v_00_u03b2_47_, lean_object* v_e_48_){
_start:
{
lean_object* v_toFun_49_; lean_object* v_invFun_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_toFun_49_ = lean_ctor_get(v_e_48_, 0);
v_invFun_50_ = lean_ctor_get(v_e_48_, 1);
v_isSharedCheck_57_ = !lean_is_exclusive(v_e_48_);
if (v_isSharedCheck_57_ == 0)
{
v___x_52_ = v_e_48_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_invFun_50_);
lean_inc(v_toFun_49_);
lean_dec(v_e_48_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 1, v_toFun_49_);
lean_ctor_set(v___x_52_, 0, v_invFun_50_);
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_invFun_50_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_toFun_49_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_trans___redArg(lean_object* v_e_u2081_58_, lean_object* v_e_u2082_59_){
_start:
{
lean_object* v_toFun_60_; lean_object* v_invFun_61_; lean_object* v_toFun_62_; lean_object* v_invFun_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_72_; 
v_toFun_60_ = lean_ctor_get(v_e_u2082_59_, 0);
lean_inc(v_toFun_60_);
v_invFun_61_ = lean_ctor_get(v_e_u2082_59_, 1);
lean_inc(v_invFun_61_);
lean_dec_ref(v_e_u2082_59_);
v_toFun_62_ = lean_ctor_get(v_e_u2081_58_, 0);
v_invFun_63_ = lean_ctor_get(v_e_u2081_58_, 1);
v_isSharedCheck_72_ = !lean_is_exclusive(v_e_u2081_58_);
if (v_isSharedCheck_72_ == 0)
{
v___x_65_ = v_e_u2081_58_;
v_isShared_66_ = v_isSharedCheck_72_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_invFun_63_);
lean_inc(v_toFun_62_);
lean_dec(v_e_u2081_58_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_72_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_67_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_67_, 0, lean_box(0));
lean_closure_set(v___x_67_, 1, lean_box(0));
lean_closure_set(v___x_67_, 2, lean_box(0));
lean_closure_set(v___x_67_, 3, v_toFun_60_);
lean_closure_set(v___x_67_, 4, v_toFun_62_);
v___x_68_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_68_, 0, lean_box(0));
lean_closure_set(v___x_68_, 1, lean_box(0));
lean_closure_set(v___x_68_, 2, lean_box(0));
lean_closure_set(v___x_68_, 3, v_invFun_63_);
lean_closure_set(v___x_68_, 4, v_invFun_61_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 1, v___x_68_);
lean_ctor_set(v___x_65_, 0, v___x_67_);
v___x_70_ = v___x_65_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CanonicalEquivalence_trans(lean_object* v_00_u03b1_73_, lean_object* v_00_u03b2_74_, lean_object* v_00_u03b3_75_, lean_object* v_e_u2081_76_, lean_object* v_e_u2082_77_){
_start:
{
lean_object* v_toFun_78_; lean_object* v_invFun_79_; lean_object* v_toFun_80_; lean_object* v_invFun_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_90_; 
v_toFun_78_ = lean_ctor_get(v_e_u2082_77_, 0);
lean_inc(v_toFun_78_);
v_invFun_79_ = lean_ctor_get(v_e_u2082_77_, 1);
lean_inc(v_invFun_79_);
lean_dec_ref(v_e_u2082_77_);
v_toFun_80_ = lean_ctor_get(v_e_u2081_76_, 0);
v_invFun_81_ = lean_ctor_get(v_e_u2081_76_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_e_u2081_76_);
if (v_isSharedCheck_90_ == 0)
{
v___x_83_ = v_e_u2081_76_;
v_isShared_84_ = v_isSharedCheck_90_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_invFun_81_);
lean_inc(v_toFun_80_);
lean_dec(v_e_u2081_76_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_90_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_88_; 
v___x_85_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_85_, 0, lean_box(0));
lean_closure_set(v___x_85_, 1, lean_box(0));
lean_closure_set(v___x_85_, 2, lean_box(0));
lean_closure_set(v___x_85_, 3, v_toFun_78_);
lean_closure_set(v___x_85_, 4, v_toFun_80_);
v___x_86_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_86_, 0, lean_box(0));
lean_closure_set(v___x_86_, 1, lean_box(0));
lean_closure_set(v___x_86_, 2, lean_box(0));
lean_closure_set(v___x_86_, 3, v_invFun_81_);
lean_closure_set(v___x_86_, 4, v_invFun_79_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 1, v___x_86_);
lean_ctor_set(v___x_83_, 0, v___x_85_);
v___x_88_ = v___x_83_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_85_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v___x_86_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin);
lean_object* runtime_initialize_Init_Classical(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Function(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_NotationExtra(uint8_t builtin);
lean_object* initialize_Init_Classical(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Function(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Function(builtin);
}
#ifdef __cplusplus
}
#endif
