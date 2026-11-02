// Lean compiler output
// Module: Init.Data.ByteArray.Lex
// Imports: public import Init.Data.Order.PackageFactories public import Init.Data.Order.Factories public import Init.Data.ByteArray.Lemmas public import Init.Data.Array.Lex.Lemmas public import Init.Data.Ord.Array public import Init.Data.Ord.UInt public import Init.Data.UInt.Package public import Init.Data.Array.Package public import Init.Data.Order.LemmasExtra import Init.Omega import Init.Data.Nat.Compare import Init.Data.Nat.MinMax
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
lean_object* l_ByteArray_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instLT;
LEAN_EXPORT lean_object* l_ByteArray_instLE;
uint8_t lean_byte_array_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_instDecidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instDecidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_instDecidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instDecidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_instUDecidableLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instUDecidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_instUDecidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instUDecidableLE___boxed(lean_object*, lean_object*);
uint8_t lean_byte_array_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_compare___boxed(lean_object*, lean_object*);
static const lean_closure_object l_ByteArray_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ByteArray_instOrd___closed__0 = (const lean_object*)&l_ByteArray_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_ByteArray_instOrd = (const lean_object*)&l_ByteArray_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_ByteArray_Lex_0__ByteArray_instTransNotLt;
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_ByteArray_instLinearOrderPackage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_instLinearOrderPackage___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ByteArray_instLinearOrderPackage___closed__0 = (const lean_object*)&l_ByteArray_instLinearOrderPackage___closed__0_value;
static const lean_closure_object l_ByteArray_instLinearOrderPackage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_instLinearOrderPackage___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ByteArray_instLinearOrderPackage___closed__1 = (const lean_object*)&l_ByteArray_instLinearOrderPackage___closed__1_value;
static const lean_closure_object l_ByteArray_instLinearOrderPackage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ByteArray_instLinearOrderPackage___closed__2 = (const lean_object*)&l_ByteArray_instLinearOrderPackage___closed__2_value;
static lean_once_cell_t l_ByteArray_instLinearOrderPackage___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_ByteArray_instLinearOrderPackage___closed__3;
static lean_once_cell_t l_ByteArray_instLinearOrderPackage___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_ByteArray_instLinearOrderPackage___closed__4;
static lean_once_cell_t l_ByteArray_instLinearOrderPackage___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_ByteArray_instLinearOrderPackage___closed__5;
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage;
static lean_object* _init_l_ByteArray_instLT(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
static lean_object* _init_l_ByteArray_instLE(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_decidableLT___boxed(lean_object* v_a_5_, lean_object* v_b_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = lean_byte_array_dec_lt(v_a_5_, v_b_6_);
lean_dec_ref(v_b_6_);
lean_dec_ref(v_a_5_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_instDecidableLT(lean_object* v_a_9_, lean_object* v_b_10_){
_start:
{
uint8_t v___x_11_; 
v___x_11_ = lean_byte_array_dec_lt(v_a_9_, v_b_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_instDecidableLT___boxed(lean_object* v_a_12_, lean_object* v_b_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_ByteArray_instDecidableLT(v_a_12_, v_b_13_);
lean_dec_ref(v_b_13_);
lean_dec_ref(v_a_12_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_instDecidableLE(lean_object* v_a_16_, lean_object* v_b_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lean_byte_array_dec_lt(v_b_17_, v_a_16_);
if (v___x_18_ == 0)
{
uint8_t v___x_19_; 
v___x_19_ = 1;
return v___x_19_;
}
else
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_instDecidableLE___boxed(lean_object* v_a_21_, lean_object* v_b_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_ByteArray_instDecidableLE(v_a_21_, v_b_22_);
lean_dec_ref(v_b_22_);
lean_dec_ref(v_a_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_instUDecidableLT(lean_object* v_a_25_, lean_object* v_b_26_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = lean_byte_array_dec_lt(v_a_25_, v_b_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_instUDecidableLT___boxed(lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_ByteArray_instUDecidableLT(v_a_28_, v_b_29_);
lean_dec_ref(v_b_29_);
lean_dec_ref(v_a_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_instUDecidableLE(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = l_ByteArray_instDecidableLE(v_a_32_, v_b_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_instUDecidableLE___boxed(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_ByteArray_instUDecidableLE(v_a_35_, v_b_36_);
lean_dec_ref(v_b_36_);
lean_dec_ref(v_a_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_compare___boxed(lean_object* v_a_41_, lean_object* v_b_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = lean_byte_array_compare(v_a_41_, v_b_42_);
lean_dec_ref(v_b_42_);
lean_dec_ref(v_a_41_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
static lean_object* _init_l___private_Init_Data_ByteArray_Lex_0__ByteArray_instTransNotLt(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__0(lean_object* v_a_48_, lean_object* v_b_49_){
_start:
{
uint8_t v___x_50_; 
v___x_50_ = l_ByteArray_instDecidableLE(v_a_48_, v_b_49_);
if (v___x_50_ == 0)
{
lean_inc_ref(v_b_49_);
return v_b_49_;
}
else
{
lean_inc_ref(v_a_48_);
return v_a_48_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__0___boxed(lean_object* v_a_51_, lean_object* v_b_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_ByteArray_instLinearOrderPackage___lam__0(v_a_51_, v_b_52_);
lean_dec_ref(v_b_52_);
lean_dec_ref(v_a_51_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__1(lean_object* v_a_54_, lean_object* v_b_55_){
_start:
{
uint8_t v___x_56_; 
v___x_56_ = l_ByteArray_instDecidableLE(v_b_55_, v_a_54_);
if (v___x_56_ == 0)
{
lean_inc_ref(v_b_55_);
return v_b_55_;
}
else
{
lean_inc_ref(v_a_54_);
return v_a_54_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_instLinearOrderPackage___lam__1___boxed(lean_object* v_a_57_, lean_object* v_b_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_ByteArray_instLinearOrderPackage___lam__1(v_a_57_, v_b_58_);
lean_dec_ref(v_b_58_);
lean_dec_ref(v_a_57_);
return v_res_59_;
}
}
static lean_object* _init_l_ByteArray_instLinearOrderPackage___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v_this_64_; lean_object* v___x_65_; lean_object* v_this_66_; lean_object* v_this_67_; lean_object* v___x_68_; 
v___x_63_ = lean_alloc_closure((void*)(l_ByteArray_instUDecidableLT___boxed), 2, 0);
v_this_64_ = lean_alloc_closure((void*)(l_ByteArray_instUDecidableLE___boxed), 2, 0);
v___x_65_ = ((lean_object*)(l_ByteArray_instLinearOrderPackage___closed__2));
v_this_66_ = lean_box(0);
v_this_67_ = lean_box(0);
v___x_68_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_68_, 0, v_this_67_);
lean_ctor_set(v___x_68_, 1, v_this_66_);
lean_ctor_set(v___x_68_, 2, v___x_65_);
lean_ctor_set(v___x_68_, 3, v_this_64_);
lean_ctor_set(v___x_68_, 4, v___x_63_);
return v___x_68_;
}
}
static lean_object* _init_l_ByteArray_instLinearOrderPackage___closed__4(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = ((lean_object*)(l_ByteArray_instOrd___closed__0));
v___x_70_ = lean_obj_once(&l_ByteArray_instLinearOrderPackage___closed__3, &l_ByteArray_instLinearOrderPackage___closed__3_once, _init_l_ByteArray_instLinearOrderPackage___closed__3);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_l_ByteArray_instLinearOrderPackage___closed__5(void){
_start:
{
lean_object* v___f_72_; lean_object* v___f_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___f_72_ = ((lean_object*)(l_ByteArray_instLinearOrderPackage___closed__1));
v___f_73_ = ((lean_object*)(l_ByteArray_instLinearOrderPackage___closed__0));
v___x_74_ = lean_obj_once(&l_ByteArray_instLinearOrderPackage___closed__4, &l_ByteArray_instLinearOrderPackage___closed__4_once, _init_l_ByteArray_instLinearOrderPackage___closed__4);
v___x_75_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___f_73_);
lean_ctor_set(v___x_75_, 2, v___f_72_);
return v___x_75_;
}
}
static lean_object* _init_l_ByteArray_instLinearOrderPackage(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_ByteArray_instLinearOrderPackage___closed__5, &l_ByteArray_instLinearOrderPackage___closed__5_once, _init_l_ByteArray_instLinearOrderPackage___closed__5);
return v___x_76_;
}
}
lean_object* runtime_initialize_Init_Data_Order_PackageFactories(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Factories(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lex_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_Array(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Package(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Package(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_LemmasExtra(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Compare(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_MinMax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_ByteArray_Lex(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Order_PackageFactories(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Factories(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lex_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_LemmasExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ByteArray_instLT = _init_l_ByteArray_instLT();
lean_mark_persistent(l_ByteArray_instLT);
l_ByteArray_instLE = _init_l_ByteArray_instLE();
lean_mark_persistent(l_ByteArray_instLE);
l___private_Init_Data_ByteArray_Lex_0__ByteArray_instTransNotLt = _init_l___private_Init_Data_ByteArray_Lex_0__ByteArray_instTransNotLt();
l_ByteArray_instLinearOrderPackage = _init_l_ByteArray_instLinearOrderPackage();
lean_mark_persistent(l_ByteArray_instLinearOrderPackage);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_ByteArray_Lex(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Order_PackageFactories(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Factories(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lex_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_Array(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Package(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Package(uint8_t builtin);
lean_object* initialize_Init_Data_Order_LemmasExtra(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Compare(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_MinMax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_ByteArray_Lex(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Order_PackageFactories(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Factories(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lex_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_LemmasExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Lex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_ByteArray_Lex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_ByteArray_Lex(builtin);
}
#ifdef __cplusplus
}
#endif
