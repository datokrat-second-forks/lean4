// Lean compiler output
// Module: Init.UDecidable.Instances
// Imports: public import Init.UDecidable public import Init.Data.UInt.Basic public import Init.Data.Char.Basic public import Init.Data.Array.DecidableEq public import Init.Data.Nat.Lemmas
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolForallImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolForallImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolForallImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolForallImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolExistsImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolExistsImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolExistsImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolExistsImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instArrayEqImpl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instArrayEqImpl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instArrayEqImpl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instArrayEqImpl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instArrayEqImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instArrayEqImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolForallImpl___redArg(lean_object* v_inst_1_){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_2_ = 1;
v___x_3_ = lean_box(v___x_2_);
lean_inc_ref(v_inst_1_);
v___x_4_ = lean_apply_1(v_inst_1_, v___x_3_);
v___x_5_ = lean_unbox(v___x_4_);
if (v___x_5_ == 0)
{
uint8_t v___x_6_; 
lean_dec_ref(v_inst_1_);
v___x_6_ = lean_unbox(v___x_4_);
return v___x_6_;
}
else
{
uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_7_ = 0;
v___x_8_ = lean_box(v___x_7_);
v___x_9_ = lean_apply_1(v_inst_1_, v___x_8_);
v___x_10_ = lean_unbox(v___x_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolForallImpl___redArg___boxed(lean_object* v_inst_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_UDecidable_instBoolForallImpl___redArg(v_inst_11_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolForallImpl(lean_object* v_p_14_, lean_object* v_inst_15_){
_start:
{
uint8_t v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_16_ = 1;
v___x_17_ = lean_box(v___x_16_);
lean_inc_ref(v_inst_15_);
v___x_18_ = lean_apply_1(v_inst_15_, v___x_17_);
v___x_19_ = lean_unbox(v___x_18_);
if (v___x_19_ == 0)
{
uint8_t v___x_20_; 
lean_dec_ref(v_inst_15_);
v___x_20_ = lean_unbox(v___x_18_);
return v___x_20_;
}
else
{
uint8_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_21_ = 0;
v___x_22_ = lean_box(v___x_21_);
v___x_23_ = lean_apply_1(v_inst_15_, v___x_22_);
v___x_24_ = lean_unbox(v___x_23_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolForallImpl___boxed(lean_object* v_p_25_, lean_object* v_inst_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l_UDecidable_instBoolForallImpl(v_p_25_, v_inst_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolExistsImpl___redArg(lean_object* v_inst_29_){
_start:
{
uint8_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_30_ = 1;
v___x_31_ = lean_box(v___x_30_);
lean_inc_ref(v_inst_29_);
v___x_32_ = lean_apply_1(v_inst_29_, v___x_31_);
v___x_33_ = lean_unbox(v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_apply_1(v_inst_29_, v___x_32_);
v___x_35_ = lean_unbox(v___x_34_);
return v___x_35_;
}
else
{
uint8_t v___x_36_; 
lean_dec_ref(v_inst_29_);
v___x_36_ = lean_unbox(v___x_32_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolExistsImpl___redArg___boxed(lean_object* v_inst_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l_UDecidable_instBoolExistsImpl___redArg(v_inst_37_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolExistsImpl(lean_object* v_p_40_, lean_object* v_inst_41_){
_start:
{
uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_42_ = 1;
v___x_43_ = lean_box(v___x_42_);
lean_inc_ref(v_inst_41_);
v___x_44_ = lean_apply_1(v_inst_41_, v___x_43_);
v___x_45_ = lean_unbox(v___x_44_);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_46_ = lean_apply_1(v_inst_41_, v___x_44_);
v___x_47_ = lean_unbox(v___x_46_);
return v___x_47_;
}
else
{
uint8_t v___x_48_; 
lean_dec_ref(v_inst_41_);
v___x_48_ = lean_unbox(v___x_44_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolExistsImpl___boxed(lean_object* v_p_49_, lean_object* v_inst_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_UDecidable_instBoolExistsImpl(v_p_49_, v_inst_50_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instArrayEqImpl___redArg___lam__0(lean_object* v_inst_53_, lean_object* v_a_54_, lean_object* v_b_55_){
_start:
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = lean_apply_2(v_inst_53_, v_a_54_, v_b_55_);
v___x_57_ = lean_unbox(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instArrayEqImpl___redArg___lam__0___boxed(lean_object* v_inst_58_, lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_UDecidable_instArrayEqImpl___redArg___lam__0(v_inst_58_, v_a_59_, v_b_60_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instArrayEqImpl___redArg(lean_object* v_inst_63_, lean_object* v_xs_64_, lean_object* v_ys_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_66_ = lean_array_get_size(v_xs_64_);
v___x_67_ = lean_array_get_size(v_ys_65_);
v___x_68_ = lean_nat_dec_eq(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_dec_ref(v_inst_63_);
return v___x_68_;
}
else
{
lean_object* v___f_69_; uint8_t v___x_70_; 
v___f_69_ = lean_alloc_closure((void*)(l_UDecidable_instArrayEqImpl___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_69_, 0, v_inst_63_);
v___x_70_ = l_Array_isEqvAux___redArg(v_xs_64_, v_ys_65_, v___f_69_, v___x_66_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instArrayEqImpl___redArg___boxed(lean_object* v_inst_71_, lean_object* v_xs_72_, lean_object* v_ys_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = l_UDecidable_instArrayEqImpl___redArg(v_inst_71_, v_xs_72_, v_ys_73_);
lean_dec_ref(v_ys_73_);
lean_dec_ref(v_xs_72_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instArrayEqImpl(lean_object* v_00_u03b1_76_, lean_object* v_inst_77_, lean_object* v_xs_78_, lean_object* v_ys_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_array_get_size(v_xs_78_);
v___x_81_ = lean_array_get_size(v_ys_79_);
v___x_82_ = lean_nat_dec_eq(v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
lean_dec_ref(v_inst_77_);
return v___x_82_;
}
else
{
lean_object* v___f_83_; uint8_t v___x_84_; 
v___f_83_ = lean_alloc_closure((void*)(l_UDecidable_instArrayEqImpl___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_83_, 0, v_inst_77_);
v___x_84_ = l_Array_isEqvAux___redArg(v_xs_78_, v_ys_79_, v___f_83_, v___x_80_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instArrayEqImpl___boxed(lean_object* v_00_u03b1_85_, lean_object* v_inst_86_, lean_object* v_xs_87_, lean_object* v_ys_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_UDecidable_instArrayEqImpl(v_00_u03b1_85_, v_inst_86_, v_xs_87_, v_ys_88_);
lean_dec_ref(v_ys_88_);
lean_dec_ref(v_xs_87_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_UDecidable_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_UDecidable_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_UDecidable(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_UDecidable_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_UDecidable_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_UDecidable_Instances(builtin);
}
#ifdef __cplusplus
}
#endif
