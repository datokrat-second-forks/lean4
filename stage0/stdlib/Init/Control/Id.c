// Lean compiler output
// Module: Init.Control.Id
// Imports: public import Init.Control.MonadAttach
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Id_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Id_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Id_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Id_run___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Id_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_run___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Id_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__0 = (const lean_object*)&l_Id_instMonad___closed__0_value;
static const lean_closure_object l_Id_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__1 = (const lean_object*)&l_Id_instMonad___closed__1_value;
static const lean_closure_object l_Id_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__2 = (const lean_object*)&l_Id_instMonad___closed__2_value;
static const lean_closure_object l_Id_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__3 = (const lean_object*)&l_Id_instMonad___closed__3_value;
static const lean_closure_object l_Id_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__4 = (const lean_object*)&l_Id_instMonad___closed__4_value;
static const lean_closure_object l_Id_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__5 = (const lean_object*)&l_Id_instMonad___closed__5_value;
static const lean_closure_object l_Id_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_instMonad___closed__6 = (const lean_object*)&l_Id_instMonad___closed__6_value;
static const lean_ctor_object l_Id_instMonad___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Id_instMonad___closed__0_value),((lean_object*)&l_Id_instMonad___closed__1_value)}};
static const lean_object* l_Id_instMonad___closed__7 = (const lean_object*)&l_Id_instMonad___closed__7_value;
static const lean_ctor_object l_Id_instMonad___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Id_instMonad___closed__7_value),((lean_object*)&l_Id_instMonad___closed__2_value),((lean_object*)&l_Id_instMonad___closed__3_value),((lean_object*)&l_Id_instMonad___closed__4_value),((lean_object*)&l_Id_instMonad___closed__5_value)}};
static const lean_object* l_Id_instMonad___closed__8 = (const lean_object*)&l_Id_instMonad___closed__8_value;
static const lean_ctor_object l_Id_instMonad___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Id_instMonad___closed__8_value),((lean_object*)&l_Id_instMonad___closed__6_value)}};
static const lean_object* l_Id_instMonad___closed__9 = (const lean_object*)&l_Id_instMonad___closed__9_value;
LEAN_EXPORT const lean_object* l_Id_instMonad = (const lean_object*)&l_Id_instMonad___closed__9_value;
LEAN_EXPORT const lean_object* l_Id_hasBind = (const lean_object*)&l_Id_instMonad___closed__6_value;
LEAN_EXPORT lean_object* l_Id_instOfNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Id_instOfNat___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Id_instOfNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instOfNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonadLiftTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonadLiftTOfPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Id_instMonadLiftTOfPure(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Id_instMonadAttach = (const lean_object*)&l_Id_instMonad___closed__2_value;
LEAN_EXPORT lean_object* l_ForIn_toArray___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_ForIn_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ForIn_toArray___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ForIn_toArray___redArg___closed__0 = (const lean_object*)&l_ForIn_toArray___redArg___closed__0_value;
static const lean_array_object l_ForIn_toArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_ForIn_toArray___redArg___closed__1 = (const lean_object*)&l_ForIn_toArray___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_ForIn_toArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForIn_toArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForIn_toList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForIn_toList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_mk___redArg(lean_object* v_run_1_){
_start:
{
lean_inc(v_run_1_);
return v_run_1_;
}
}
LEAN_EXPORT lean_object* l_Id_mk___redArg___boxed(lean_object* v_run_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Id_mk___redArg(v_run_2_);
lean_dec(v_run_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Id_mk(lean_object* v_00_u03b1_4_, lean_object* v_run_5_){
_start:
{
lean_inc(v_run_5_);
return v_run_5_;
}
}
LEAN_EXPORT lean_object* l_Id_mk___boxed(lean_object* v_00_u03b1_6_, lean_object* v_run_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Id_mk(v_00_u03b1_6_, v_run_7_);
lean_dec(v_run_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Id_run___redArg(lean_object* v_self_9_){
_start:
{
lean_inc(v_self_9_);
return v_self_9_;
}
}
LEAN_EXPORT lean_object* l_Id_run___redArg___boxed(lean_object* v_self_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Id_run___redArg(v_self_10_);
lean_dec(v_self_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Id_run(lean_object* v_00_u03b1_12_, lean_object* v_self_13_){
_start:
{
lean_inc(v_self_13_);
return v_self_13_;
}
}
LEAN_EXPORT lean_object* l_Id_run___boxed(lean_object* v_00_u03b1_14_, lean_object* v_self_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Id_run(v_00_u03b1_14_, v_self_15_);
lean_dec(v_self_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__0(lean_object* v_00_u03b1_17_, lean_object* v_00_u03b2_18_, lean_object* v_f_19_, lean_object* v_x_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_apply_1(v_f_19_, v_x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__1(lean_object* v_00_u03b1_22_, lean_object* v_00_u03b2_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_inc(v___y_24_);
return v___y_24_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__1___boxed(lean_object* v_00_u03b1_26_, lean_object* v_00_u03b2_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Id_instMonad___lam__1(v_00_u03b1_26_, v_00_u03b2_27_, v___y_28_, v___y_29_);
lean_dec(v___y_29_);
lean_dec(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__2(lean_object* v_00_u03b1_31_, lean_object* v_x_32_){
_start:
{
lean_inc(v_x_32_);
return v_x_32_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__2___boxed(lean_object* v_00_u03b1_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Id_instMonad___lam__2(v_00_u03b1_33_, v_x_34_);
lean_dec(v_x_34_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__3(lean_object* v_00_u03b1_36_, lean_object* v_00_u03b2_37_, lean_object* v_f_38_, lean_object* v_x_39_){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = lean_box(0);
v___x_41_ = lean_apply_1(v_x_39_, v___x_40_);
v___x_42_ = lean_apply_1(v_f_38_, v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__4(lean_object* v_00_u03b1_43_, lean_object* v_00_u03b2_44_, lean_object* v_x_45_, lean_object* v_y_46_){
_start:
{
lean_inc(v_x_45_);
return v_x_45_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__4___boxed(lean_object* v_00_u03b1_47_, lean_object* v_00_u03b2_48_, lean_object* v_x_49_, lean_object* v_y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Id_instMonad___lam__4(v_00_u03b1_47_, v_00_u03b2_48_, v_x_49_, v_y_50_);
lean_dec(v_y_50_);
lean_dec(v_x_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__5(lean_object* v_00_u03b1_52_, lean_object* v_00_u03b2_53_, lean_object* v_x_54_, lean_object* v_y_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_apply_1(v_y_55_, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__5___boxed(lean_object* v_00_u03b1_58_, lean_object* v_00_u03b2_59_, lean_object* v_x_60_, lean_object* v_y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Id_instMonad___lam__5(v_00_u03b1_58_, v_00_u03b2_59_, v_x_60_, v_y_61_);
lean_dec(v_x_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonad___lam__6(lean_object* v_00_u03b1_63_, lean_object* v_00_u03b2_64_, lean_object* v_x_65_, lean_object* v_f_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_apply_1(v_f_66_, v_x_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Id_instOfNat___redArg(lean_object* v_inst_89_){
_start:
{
lean_inc(v_inst_89_);
return v_inst_89_;
}
}
LEAN_EXPORT lean_object* l_Id_instOfNat___redArg___boxed(lean_object* v_inst_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Id_instOfNat___redArg(v_inst_90_);
lean_dec(v_inst_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Id_instOfNat(lean_object* v_00_u03b1_92_, lean_object* v_n_93_, lean_object* v_inst_94_){
_start:
{
lean_inc(v_inst_94_);
return v_inst_94_;
}
}
LEAN_EXPORT lean_object* l_Id_instOfNat___boxed(lean_object* v_00_u03b1_95_, lean_object* v_n_96_, lean_object* v_inst_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Id_instOfNat(v_00_u03b1_95_, v_n_96_, v_inst_97_);
lean_dec(v_inst_97_);
lean_dec(v_n_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonadLiftTOfPure___redArg___lam__0(lean_object* v_inst_99_, lean_object* v_00_u03b1_100_, lean_object* v_x_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_apply_2(v_inst_99_, lean_box(0), v_x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonadLiftTOfPure___redArg(lean_object* v_inst_103_){
_start:
{
lean_object* v___f_104_; 
v___f_104_ = lean_alloc_closure((void*)(l_Id_instMonadLiftTOfPure___redArg___lam__0), 3, 1);
lean_closure_set(v___f_104_, 0, v_inst_103_);
return v___f_104_;
}
}
LEAN_EXPORT lean_object* l_Id_instMonadLiftTOfPure(lean_object* v_m_105_, lean_object* v_inst_106_){
_start:
{
lean_object* v___f_107_; 
v___f_107_ = lean_alloc_closure((void*)(l_Id_instMonadLiftTOfPure___redArg___lam__0), 3, 1);
lean_closure_set(v___f_107_, 0, v_inst_106_);
return v___f_107_;
}
}
LEAN_EXPORT lean_object* l_ForIn_toArray___redArg___lam__0(lean_object* v_a_109_, lean_object* v_acc_110_){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_array_push(v_acc_110_, v_a_109_);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_ForIn_toArray___redArg(lean_object* v_inst_116_, lean_object* v_xs_117_){
_start:
{
lean_object* v___f_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___f_118_ = ((lean_object*)(l_ForIn_toArray___redArg___closed__0));
v___x_119_ = ((lean_object*)(l_ForIn_toArray___redArg___closed__1));
v___x_120_ = lean_apply_4(v_inst_116_, lean_box(0), v_xs_117_, v___x_119_, v___f_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_ForIn_toArray(lean_object* v_00_u03c1_121_, lean_object* v_00_u03b1_122_, lean_object* v_inst_123_, lean_object* v_xs_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_ForIn_toArray___redArg(v_inst_123_, v_xs_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_ForIn_toList___redArg(lean_object* v_inst_126_, lean_object* v_xs_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = l_ForIn_toArray___redArg(v_inst_126_, v_xs_127_);
v___x_129_ = lean_array_to_list(v___x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_ForIn_toList(lean_object* v_00_u03c1_130_, lean_object* v_00_u03b1_131_, lean_object* v_inst_132_, lean_object* v_xs_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_ForIn_toList___redArg(v_inst_132_, v_xs_133_);
return v___x_134_;
}
}
lean_object* runtime_initialize_Init_Control_MonadAttach(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Control_Id(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_MonadAttach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Control_Id(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_MonadAttach(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Control_Id(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_MonadAttach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Control_Id(builtin);
}
#ifdef __cplusplus
}
#endif
