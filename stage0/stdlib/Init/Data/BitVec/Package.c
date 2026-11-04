// Lean compiler output
// Module: Init.Data.BitVec.Package
// Imports: public import Init.Data.BitVec.Basic public import Init.Data.Order.PackageFactories public import Init.Data.BitVec.Lemmas import Init.Data.Nat.Compare import Init.Data.Nat.Order
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
lean_object* l_instOrdBitVec___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableLtBitVec___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Nat_ble___boxed(lean_object*, lean_object*);
lean_object* l_Nat_beq___boxed(lean_object*, lean_object*);
lean_object* l_BitVec_instMax___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_BitVec_instMin___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_BitVec_instLinearOrderPackage___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_ble___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__0 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__0_value;
static const lean_closure_object l_BitVec_instLinearOrderPackage___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instDecidableLtBitVec___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__1 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__1_value;
static const lean_closure_object l_BitVec_instLinearOrderPackage___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__2 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__2_value;
static const lean_closure_object l_BitVec_instLinearOrderPackage___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdBitVec___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__3 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__3_value;
static const lean_closure_object l_BitVec_instLinearOrderPackage___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_BitVec_instMin___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__4 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__4_value;
static const lean_closure_object l_BitVec_instLinearOrderPackage___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_BitVec_instMax___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__5 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__5_value;
static const lean_ctor_object l_BitVec_instLinearOrderPackage___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__2_value),((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__0_value),((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__1_value)}};
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__6 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__6_value;
static const lean_ctor_object l_BitVec_instLinearOrderPackage___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__6_value),((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__3_value)}};
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__7 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__7_value;
static const lean_ctor_object l_BitVec_instLinearOrderPackage___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__7_value),((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__4_value),((lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__5_value)}};
static const lean_object* l_BitVec_instLinearOrderPackage___redArg___closed__8 = (const lean_object*)&l_BitVec_instLinearOrderPackage___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage___redArg();
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage___redArg___boxed(lean_object*);
static lean_once_cell_t l_BitVec_instLinearOrderPackage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_BitVec_instLinearOrderPackage___closed__0;
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage(lean_object*);
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage___boxed(lean_object*);
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage___redArg(){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = ((lean_object*)(l_BitVec_instLinearOrderPackage___redArg___closed__8));
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage___redArg___boxed(lean_object* v___dummy_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_BitVec_instLinearOrderPackage___redArg();
return v_res_23_;
}
}
static lean_object* _init_l_BitVec_instLinearOrderPackage___closed__0(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_BitVec_instLinearOrderPackage___redArg();
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage(lean_object* v_w_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_BitVec_instLinearOrderPackage___closed__0, &l_BitVec_instLinearOrderPackage___closed__0_once, _init_l_BitVec_instLinearOrderPackage___closed__0);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_BitVec_instLinearOrderPackage___boxed(lean_object* v_w_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_BitVec_instLinearOrderPackage(v_w_27_);
lean_dec(v_w_27_);
return v_res_28_;
}
}
lean_object* runtime_initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_PackageFactories(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Compare(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_BitVec_Package(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_PackageFactories(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_BitVec_Package(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Order_PackageFactories(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Compare(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_BitVec_Package(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_PackageFactories(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_BitVec_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_BitVec_Package(builtin);
}
#ifdef __cplusplus
}
#endif
