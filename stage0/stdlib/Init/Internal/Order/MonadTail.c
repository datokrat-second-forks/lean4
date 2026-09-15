// Lean compiler output
// Module: Init.Internal.Order.MonadTail
// Imports: public import Init.Internal.Order.Basic import all Init.System.ST
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
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_MonadTail_congr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_MonadTail_congr___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_MonadTail_congr___redArg___closed__0 = (const lean_object*)&l_Lean_Order_MonadTail_congr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Order_MonadTail_congr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Order_MonadTail_congr___redArg___closed__0_value),((lean_object*)&l_Lean_Order_MonadTail_congr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Order_MonadTail_congr___redArg___closed__1 = (const lean_object*)&l_Lean_Order_MonadTail_congr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailId___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailId___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailId___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Order_instMonadTailId = (const lean_object*)&l_Lean_Order_instMonadTailId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailStateT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailStateT___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailStateT___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailStateT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailExceptT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailExceptT___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailExceptT___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailExceptT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailExcept___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailExcept___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailExcept___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailExcept___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOption___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailOption___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailOption___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailOption___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Order_instMonadTailOption = (const lean_object*)&l_Lean_Order_instMonadTailOption___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailReaderT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailReaderT___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailReaderT___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailReaderT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOSTOfNonempty___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOSTOfNonempty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOSTOfNonempty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailST___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailST___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailST___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailST___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailBaseIO___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailBaseIO___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailBaseIO___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Order_instMonadTailBaseIO = (const lean_object*)&l_Lean_Order_instMonadTailBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailESTOfNonempty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailESTOfNonempty___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailESTOfNonempty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailEIOOfNonempty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailEIOOfNonempty___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailEIOOfNonempty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailIO___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Order_instMonadTailIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Order_instMonadTailIO___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Order_instMonadTailIO___closed__0 = (const lean_object*)&l_Lean_Order_instMonadTailIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Order_instMonadTailIO = (const lean_object*)&l_Lean_Order_instMonadTailIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg___lam__0(lean_object* v_i_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(0);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg___lam__0___boxed(lean_object* v_i_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Order_MonadTail_congr___redArg___lam__0(v_i_5_, v___y_6_, v___y_7_);
lean_dec_ref(v_i_5_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg(){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = ((lean_object*)(l_Lean_Order_MonadTail_congr___redArg___closed__1));
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___redArg___boxed(lean_object* v___dummy_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lean_Order_MonadTail_congr___redArg();
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr(lean_object* v_m_16_, lean_object* v_n_17_, lean_object* v_e_18_, lean_object* v_b_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = ((lean_object*)(l_Lean_Order_MonadTail_congr___redArg___closed__1));
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonadTail_congr___boxed(lean_object* v_m_21_, lean_object* v_n_22_, lean_object* v_e_23_, lean_object* v_b_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Order_MonadTail_congr(v_m_21_, v_n_22_, v_e_23_, v_b_24_);
lean_dec(v_b_24_);
lean_dec_ref(v_e_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailId___lam__0(lean_object* v_00_u03b1_26_, lean_object* v_inst_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_box(0);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___redArg___lam__0(lean_object* v_00_u03b1_31_, lean_object* v_inst_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_box(0);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___redArg(){
_start:
{
lean_object* v___f_36_; 
v___f_36_ = ((lean_object*)(l_Lean_Order_instMonadTailStateT___redArg___closed__0));
return v___f_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___redArg___boxed(lean_object* v___dummy_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Order_instMonadTailStateT___redArg();
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT(lean_object* v_00_u03c3_39_, lean_object* v_m_40_, lean_object* v_inst_41_, lean_object* v_inst_42_){
_start:
{
lean_object* v___f_43_; 
v___f_43_ = ((lean_object*)(l_Lean_Order_instMonadTailStateT___redArg___closed__0));
return v___f_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateT___boxed(lean_object* v_00_u03c3_44_, lean_object* v_m_45_, lean_object* v_inst_46_, lean_object* v_inst_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_Order_instMonadTailStateT(v_00_u03c3_44_, v_m_45_, v_inst_46_, v_inst_47_);
lean_dec_ref(v_inst_47_);
lean_dec_ref(v_inst_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___redArg___lam__0(lean_object* v_00_u03b2_49_, lean_object* v_inst_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_box(0);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___redArg(){
_start:
{
lean_object* v___f_54_; 
v___f_54_ = ((lean_object*)(l_Lean_Order_instMonadTailExceptT___redArg___closed__0));
return v___f_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___redArg___boxed(lean_object* v___dummy_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Order_instMonadTailExceptT___redArg();
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT(lean_object* v_00_u03b5_57_, lean_object* v_m_58_, lean_object* v_inst_59_, lean_object* v_inst_60_){
_start:
{
lean_object* v___f_61_; 
v___f_61_ = ((lean_object*)(l_Lean_Order_instMonadTailExceptT___redArg___closed__0));
return v___f_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExceptT___boxed(lean_object* v_00_u03b5_62_, lean_object* v_m_63_, lean_object* v_inst_64_, lean_object* v_inst_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Order_instMonadTailExceptT(v_00_u03b5_62_, v_m_63_, v_inst_64_, v_inst_65_);
lean_dec_ref(v_inst_65_);
lean_dec_ref(v_inst_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept___redArg___lam__0(lean_object* v_00_u03b2_67_, lean_object* v_inst_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_box(0);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept___redArg(){
_start:
{
lean_object* v___f_72_; 
v___f_72_ = ((lean_object*)(l_Lean_Order_instMonadTailExcept___redArg___closed__0));
return v___f_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept___redArg___boxed(lean_object* v___dummy_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Order_instMonadTailExcept___redArg();
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailExcept(lean_object* v_00_u03b5_75_){
_start:
{
lean_object* v___f_76_; 
v___f_76_ = ((lean_object*)(l_Lean_Order_instMonadTailExcept___redArg___closed__0));
return v___f_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT___redArg(){
_start:
{
lean_object* v___f_78_; 
v___f_78_ = ((lean_object*)(l_Lean_Order_instMonadTailExceptT___redArg___closed__0));
return v___f_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT___redArg___boxed(lean_object* v___dummy_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Order_instMonadTailOptionT___redArg();
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT(lean_object* v_m_81_, lean_object* v_inst_82_, lean_object* v_inst_83_){
_start:
{
lean_object* v___f_84_; 
v___f_84_ = ((lean_object*)(l_Lean_Order_instMonadTailExceptT___redArg___closed__0));
return v___f_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOptionT___boxed(lean_object* v_m_85_, lean_object* v_inst_86_, lean_object* v_inst_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Order_instMonadTailOptionT(v_m_85_, v_inst_86_, v_inst_87_);
lean_dec_ref(v_inst_87_);
lean_dec_ref(v_inst_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailOption___lam__0(lean_object* v_x_89_, lean_object* v_inst_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_box(0);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___redArg___lam__0(lean_object* v_00_u03b1_94_, lean_object* v_inst_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_box(0);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___redArg(){
_start:
{
lean_object* v___f_99_; 
v___f_99_ = ((lean_object*)(l_Lean_Order_instMonadTailReaderT___redArg___closed__0));
return v___f_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___redArg___boxed(lean_object* v___dummy_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_Order_instMonadTailReaderT___redArg();
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT(lean_object* v_00_u03c1_102_, lean_object* v_m_103_, lean_object* v_inst_104_, lean_object* v_inst_105_){
_start:
{
lean_object* v___f_106_; 
v___f_106_ = ((lean_object*)(l_Lean_Order_instMonadTailReaderT___redArg___closed__0));
return v___f_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailReaderT___boxed(lean_object* v_00_u03c1_107_, lean_object* v_m_108_, lean_object* v_inst_109_, lean_object* v_inst_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_Order_instMonadTailReaderT(v_00_u03c1_107_, v_m_108_, v_inst_109_, v_inst_110_);
lean_dec_ref(v_inst_110_);
lean_dec_ref(v_inst_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOSTOfNonempty___redArg(){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_box(0);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOSTOfNonempty___redArg___boxed(lean_object* v___dummy_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_Order_instCCPOSTOfNonempty___redArg();
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOSTOfNonempty(lean_object* v_00_u03b1_116_, lean_object* v_00_u03c3_117_, lean_object* v_inst_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_box(0);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST___redArg___lam__0(lean_object* v_x_120_, lean_object* v_inst_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_box(0);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST___redArg(){
_start:
{
lean_object* v___f_125_; 
v___f_125_ = ((lean_object*)(l_Lean_Order_instMonadTailST___redArg___closed__0));
return v___f_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST___redArg___boxed(lean_object* v___dummy_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_Order_instMonadTailST___redArg();
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailST(lean_object* v_00_u03c3_128_){
_start:
{
lean_object* v___f_129_; 
v___f_129_ = ((lean_object*)(l_Lean_Order_instMonadTailST___redArg___closed__0));
return v___f_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailBaseIO___lam__0(lean_object* v_00_u03b2_130_, lean_object* v_x_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_box(0);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg___lam__0(lean_object* v_x_135_, lean_object* v_inst_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_box(0);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg(){
_start:
{
lean_object* v___f_140_; 
v___f_140_ = ((lean_object*)(l_Lean_Order_instMonadTailESTOfNonempty___redArg___closed__0));
return v___f_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty___redArg___boxed(lean_object* v___dummy_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Order_instMonadTailESTOfNonempty___redArg();
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailESTOfNonempty(lean_object* v_00_u03b5_143_, lean_object* v_00_u03c3_144_, lean_object* v_inst_145_){
_start:
{
lean_object* v___f_146_; 
v___f_146_ = ((lean_object*)(l_Lean_Order_instMonadTailESTOfNonempty___redArg___closed__0));
return v___f_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg___lam__0(lean_object* v_00_u03b2_147_, lean_object* v_x_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_box(0);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg(){
_start:
{
lean_object* v___f_152_; 
v___f_152_ = ((lean_object*)(l_Lean_Order_instMonadTailEIOOfNonempty___redArg___closed__0));
return v___f_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty___redArg___boxed(lean_object* v___dummy_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_Order_instMonadTailEIOOfNonempty___redArg();
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailEIOOfNonempty(lean_object* v_00_u03b5_155_, lean_object* v_inst_156_){
_start:
{
lean_object* v___f_157_; 
v___f_157_ = ((lean_object*)(l_Lean_Order_instMonadTailEIOOfNonempty___redArg___closed__0));
return v___f_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailIO___lam__0(lean_object* v_00_u03b2_158_, lean_object* v_inst_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_box(0);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27___redArg(){
_start:
{
lean_object* v___f_164_; 
v___f_164_ = ((lean_object*)(l_Lean_Order_instMonadTailReaderT___redArg___closed__0));
return v___f_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27___redArg___boxed(lean_object* v___dummy_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Order_instMonadTailStateRefT_x27___redArg();
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27(lean_object* v_00_u03c9_167_, lean_object* v_00_u03c3_168_, lean_object* v_m_169_, lean_object* v_inst_170_, lean_object* v_inst_171_){
_start:
{
lean_object* v___f_172_; 
v___f_172_ = ((lean_object*)(l_Lean_Order_instMonadTailReaderT___redArg___closed__0));
return v___f_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instMonadTailStateRefT_x27___boxed(lean_object* v_00_u03c9_173_, lean_object* v_00_u03c3_174_, lean_object* v_m_175_, lean_object* v_inst_176_, lean_object* v_inst_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Order_instMonadTailStateRefT_x27(v_00_u03c9_173_, v_00_u03c3_174_, v_m_175_, v_inst_176_, v_inst_177_);
lean_dec_ref(v_inst_177_);
lean_dec_ref(v_inst_176_);
return v_res_178_;
}
}
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_System_ST(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Internal_Order_MonadTail(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Internal_Order_MonadTail(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* initialize_Init_System_ST(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Internal_Order_MonadTail(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_MonadTail(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Internal_Order_MonadTail(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Internal_Order_MonadTail(builtin);
}
#ifdef __cplusplus
}
#endif
