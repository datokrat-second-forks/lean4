// Lean compiler output
// Module: Init.Data.String.Compare
// Imports: public import Init.Data.ByteArray.Lex import Init.Data.String.Basic
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
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLT;
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLE;
LEAN_EXPORT uint8_t l_String_decLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_decLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instUDecidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instUDecidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instUDecidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instUDecidableLE___boxed(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_compare___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instOrd___closed__0 = (const lean_object*)&l_String_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_String_instOrd = (const lean_object*)&l_String_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_instLinearOrderPackage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instLinearOrderPackage___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instLinearOrderPackage___closed__0 = (const lean_object*)&l_String_instLinearOrderPackage___closed__0_value;
static const lean_closure_object l_String_instLinearOrderPackage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instLinearOrderPackage___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instLinearOrderPackage___closed__1 = (const lean_object*)&l_String_instLinearOrderPackage___closed__1_value;
static lean_once_cell_t l_String_instLinearOrderPackage___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_instLinearOrderPackage___closed__2;
static lean_once_cell_t l_String_instLinearOrderPackage___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_instLinearOrderPackage___closed__3;
static lean_once_cell_t l_String_instLinearOrderPackage___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_instLinearOrderPackage___closed__4;
static lean_once_cell_t l_String_instLinearOrderPackage___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_instLinearOrderPackage___closed__5;
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage;
static lean_object* _init_l_String_instLT(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_String_decidableLT___boxed(lean_object* v_s_u2081_4_, lean_object* v_s_u2082_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = lean_string_dec_lt(v_s_u2081_4_, v_s_u2082_5_);
lean_dec_ref(v_s_u2082_5_);
lean_dec_ref(v_s_u2081_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
static lean_object* _init_l_String_instLE(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_box(0);
return v___x_8_;
}
}
LEAN_EXPORT uint8_t l_String_decLE(lean_object* v_s_u2081_9_, lean_object* v_s_u2082_10_){
_start:
{
uint8_t v___x_11_; 
v___x_11_ = lean_string_dec_lt(v_s_u2082_10_, v_s_u2081_9_);
if (v___x_11_ == 0)
{
uint8_t v___x_12_; 
v___x_12_ = 1;
return v___x_12_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_String_decLE___boxed(lean_object* v_s_u2081_14_, lean_object* v_s_u2082_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = l_String_decLE(v_s_u2081_14_, v_s_u2082_15_);
lean_dec_ref(v_s_u2082_15_);
lean_dec_ref(v_s_u2081_14_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l_String_instUDecidableLT(lean_object* v_a_18_, lean_object* v_b_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = lean_string_dec_lt(v_a_18_, v_b_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_String_instUDecidableLT___boxed(lean_object* v_a_21_, lean_object* v_b_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_String_instUDecidableLT(v_a_21_, v_b_22_);
lean_dec_ref(v_b_22_);
lean_dec_ref(v_a_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint8_t l_String_instUDecidableLE(lean_object* v_a_25_, lean_object* v_b_26_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = l_String_decLE(v_a_25_, v_b_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_String_instUDecidableLE___boxed(lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_String_instUDecidableLE(v_a_28_, v_b_29_);
lean_dec_ref(v_b_29_);
lean_dec_ref(v_a_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT lean_object* l_String_compare___boxed(lean_object* v_s_u2081_34_, lean_object* v_s_u2082_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = lean_string_compare(v_s_u2081_34_, v_s_u2082_35_);
lean_dec_ref(v_s_u2082_35_);
lean_dec_ref(v_s_u2081_34_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__0(lean_object* v_a_40_, lean_object* v_b_41_){
_start:
{
uint8_t v___x_42_; 
v___x_42_ = l_String_decLE(v_a_40_, v_b_41_);
if (v___x_42_ == 0)
{
lean_inc_ref(v_b_41_);
return v_b_41_;
}
else
{
lean_inc_ref(v_a_40_);
return v_a_40_;
}
}
}
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__0___boxed(lean_object* v_a_43_, lean_object* v_b_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_String_instLinearOrderPackage___lam__0(v_a_43_, v_b_44_);
lean_dec_ref(v_b_44_);
lean_dec_ref(v_a_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__1(lean_object* v_a_46_, lean_object* v_b_47_){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = l_String_decLE(v_b_47_, v_a_46_);
if (v___x_48_ == 0)
{
lean_inc_ref(v_b_47_);
return v_b_47_;
}
else
{
lean_inc_ref(v_a_46_);
return v_a_46_;
}
}
}
LEAN_EXPORT lean_object* l_String_instLinearOrderPackage___lam__1___boxed(lean_object* v_a_49_, lean_object* v_b_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_String_instLinearOrderPackage___lam__1(v_a_49_, v_b_50_);
lean_dec_ref(v_b_50_);
lean_dec_ref(v_a_49_);
return v_res_51_;
}
}
static lean_object* _init_l_String_instLinearOrderPackage___closed__2(void){
_start:
{
lean_object* v___x_54_; lean_object* v___f_55_; 
v___x_54_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_55_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_55_, 0, v___x_54_);
return v___f_55_;
}
}
static lean_object* _init_l_String_instLinearOrderPackage___closed__3(void){
_start:
{
lean_object* v___x_56_; lean_object* v_this_57_; lean_object* v___f_58_; lean_object* v_this_59_; lean_object* v_this_60_; lean_object* v___x_61_; 
v___x_56_ = lean_alloc_closure((void*)(l_String_instUDecidableLT___boxed), 2, 0);
v_this_57_ = lean_alloc_closure((void*)(l_String_instUDecidableLE___boxed), 2, 0);
v___f_58_ = lean_obj_once(&l_String_instLinearOrderPackage___closed__2, &l_String_instLinearOrderPackage___closed__2_once, _init_l_String_instLinearOrderPackage___closed__2);
v_this_59_ = lean_box(0);
v_this_60_ = lean_box(0);
v___x_61_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_61_, 0, v_this_60_);
lean_ctor_set(v___x_61_, 1, v_this_59_);
lean_ctor_set(v___x_61_, 2, v___f_58_);
lean_ctor_set(v___x_61_, 3, v_this_57_);
lean_ctor_set(v___x_61_, 4, v___x_56_);
return v___x_61_;
}
}
static lean_object* _init_l_String_instLinearOrderPackage___closed__4(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = ((lean_object*)(l_String_instOrd___closed__0));
v___x_63_ = lean_obj_once(&l_String_instLinearOrderPackage___closed__3, &l_String_instLinearOrderPackage___closed__3_once, _init_l_String_instLinearOrderPackage___closed__3);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l_String_instLinearOrderPackage___closed__5(void){
_start:
{
lean_object* v___f_65_; lean_object* v___f_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___f_65_ = ((lean_object*)(l_String_instLinearOrderPackage___closed__1));
v___f_66_ = ((lean_object*)(l_String_instLinearOrderPackage___closed__0));
v___x_67_ = lean_obj_once(&l_String_instLinearOrderPackage___closed__4, &l_String_instLinearOrderPackage___closed__4_once, _init_l_String_instLinearOrderPackage___closed__4);
v___x_68_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___f_66_);
lean_ctor_set(v___x_68_, 2, v___f_65_);
return v___x_68_;
}
}
static lean_object* _init_l_String_instLinearOrderPackage(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_obj_once(&l_String_instLinearOrderPackage___closed__5, &l_String_instLinearOrderPackage___closed__5_once, _init_l_String_instLinearOrderPackage___closed__5);
return v___x_69_;
}
}
lean_object* runtime_initialize_Init_Data_ByteArray_Lex(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Compare(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_ByteArray_Lex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_instLT = _init_l_String_instLT();
lean_mark_persistent(l_String_instLT);
l_String_instLE = _init_l_String_instLE();
lean_mark_persistent(l_String_instLE);
l_String_instLinearOrderPackage = _init_l_String_instLinearOrderPackage();
lean_mark_persistent(l_String_instLinearOrderPackage);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Compare(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ByteArray_Lex(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Compare(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ByteArray_Lex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Compare(builtin);
}
#ifdef __cplusplus
}
#endif
