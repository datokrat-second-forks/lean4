// Lean compiler output
// Module: Std.Async.DNS
// Imports: public import Std.Time public import Std.Internal.UV public import Std.Async.Basic public import Init.Data.Function
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
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Function_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_dns_get_info(lean_object*, lean_object*, uint8_t);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_dns_get_name(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Async_DNS_getAddrInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l_Std_Async_DNS_getAddrInfo___closed__0 = (const lean_object*)&l_Std_Async_DNS_getAddrInfo___closed__0_value;
static const lean_closure_object l_Std_Async_DNS_getAddrInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_DNS_getAddrInfo___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_DNS_getAddrInfo___closed__0_value)} };
static const lean_object* l_Std_Async_DNS_getAddrInfo___closed__1 = (const lean_object*)&l_Std_Async_DNS_getAddrInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_DNS_getNameInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_DNS_getNameInfo___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_DNS_getNameInfo___closed__0 = (const lean_object*)&l_Std_Async_DNS_getNameInfo___closed__0_value;
static const lean_closure_object l_Std_Async_DNS_getNameInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_uncurry, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_DNS_getNameInfo___closed__0_value)} };
static const lean_object* l_Std_Async_DNS_getNameInfo___closed__1 = (const lean_object*)&l_Std_Async_DNS_getNameInfo___closed__1_value;
static const lean_closure_object l_Std_Async_DNS_getNameInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_DNS_getNameInfo___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_DNS_getAddrInfo___closed__0_value)} };
static const lean_object* l_Std_Async_DNS_getNameInfo___closed__2 = (const lean_object*)&l_Std_Async_DNS_getNameInfo___closed__2_value;
static const lean_closure_object l_Std_Async_DNS_getNameInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_DNS_getNameInfo___closed__1_value)} };
static const lean_object* l_Std_Async_DNS_getNameInfo___closed__3 = (const lean_object*)&l_Std_Async_DNS_getNameInfo___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo___lam__0(lean_object* v___x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_mk_io_user_error(v___x_1_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
else
{
lean_object* v_val_5_; 
lean_dec_ref(v___x_1_);
v_val_5_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_val_5_);
return v_val_5_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo___lam__0___boxed(lean_object* v___x_6_, lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Std_Async_DNS_getAddrInfo___lam__0(v___x_6_, v_x_7_);
lean_dec(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo(lean_object* v_host_12_, lean_object* v_service_13_, lean_object* v_addrFamily_14_){
_start:
{
uint8_t v___y_17_; 
if (lean_obj_tag(v_addrFamily_14_) == 0)
{
uint8_t v___x_41_; 
v___x_41_ = 0;
v___y_17_ = v___x_41_;
goto v___jp_16_;
}
else
{
lean_object* v_val_42_; uint8_t v___x_43_; 
v_val_42_ = lean_ctor_get(v_addrFamily_14_, 0);
v___x_43_ = lean_unbox(v_val_42_);
if (v___x_43_ == 0)
{
uint8_t v___x_44_; 
v___x_44_ = 1;
v___y_17_ = v___x_44_;
goto v___jp_16_;
}
else
{
uint8_t v___x_45_; 
v___x_45_ = 2;
v___y_17_ = v___x_45_;
goto v___jp_16_;
}
}
v___jp_16_:
{
lean_object* v___f_18_; lean_object* v___x_19_; 
v___f_18_ = ((lean_object*)(l_Std_Async_DNS_getAddrInfo___closed__1));
v___x_19_ = lean_uv_dns_get_info(v_host_12_, v_service_13_, v___y_17_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_31_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_31_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_31_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_31_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v___x_24_ = lean_io_promise_result_opt(v_a_20_);
lean_dec(v_a_20_);
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = 0;
v___x_27_ = lean_task_map(v___f_18_, v___x_24_, v___x_25_, v___x_26_);
if (v_isShared_23_ == 0)
{
lean_ctor_set_tag(v___x_22_, 1);
lean_ctor_set(v___x_22_, 0, v___x_27_);
v___x_29_ = v___x_22_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v___x_27_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_a_32_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_19_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_19_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 0);
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_a_32_);
v___x_37_ = v_reuseFailAlloc_39_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; 
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getAddrInfo___boxed(lean_object* v_host_46_, lean_object* v_service_47_, lean_object* v_addrFamily_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_Async_DNS_getAddrInfo(v_host_46_, v_service_47_, v_addrFamily_48_);
lean_dec(v_addrFamily_48_);
lean_dec_ref(v_service_47_);
lean_dec_ref(v_host_46_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___lam__0(lean_object* v_host_51_, lean_object* v_service_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_53_, 0, v_host_51_);
lean_ctor_set(v___x_53_, 1, v_service_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___lam__1(lean_object* v___x_54_, lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_mk_io_user_error(v___x_54_);
v___x_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
else
{
lean_object* v_val_58_; 
lean_dec_ref(v___x_54_);
v_val_58_ = lean_ctor_get(v_x_55_, 0);
lean_inc(v_val_58_);
return v_val_58_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___lam__1___boxed(lean_object* v___x_59_, lean_object* v_x_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Std_Async_DNS_getNameInfo___lam__1(v___x_59_, v_x_60_);
lean_dec(v_x_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo(lean_object* v_host_69_){
_start:
{
lean_object* v___f_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; lean_object* v___x_75_; 
v___f_71_ = ((lean_object*)(l_Std_Async_DNS_getNameInfo___closed__2));
v___x_72_ = ((lean_object*)(l_Std_Async_DNS_getNameInfo___closed__3));
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = 0;
v___x_75_ = lean_uv_dns_get_name(v_host_69_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_86_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_86_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_80_ = lean_io_promise_result_opt(v_a_76_);
lean_dec(v_a_76_);
v___x_81_ = lean_task_map(v___f_71_, v___x_80_, v___x_73_, v___x_74_);
v___x_82_ = lean_task_map(v___x_72_, v___x_81_, v___x_73_, v___x_74_);
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 1);
lean_ctor_set(v___x_78_, 0, v___x_82_);
v___x_84_ = v___x_78_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
else
{
lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_95_; 
v_a_87_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_95_ == 0)
{
v___x_89_ = v___x_75_;
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_75_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
lean_ctor_set_tag(v___x_89_, 0);
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_94_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_DNS_getNameInfo___boxed(lean_object* v_host_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Std_Async_DNS_getNameInfo(v_host_96_);
lean_dec_ref(v_host_96_);
return v_res_98_;
}
}
lean_object* runtime_initialize_Std_Time(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_UV(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_DNS(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_UV(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_DNS(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time(uint8_t builtin);
lean_object* initialize_Std_Internal_UV(uint8_t builtin);
lean_object* initialize_Std_Async_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Function(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_DNS(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_UV(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_DNS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_DNS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_DNS(builtin);
}
#ifdef __cplusplus
}
#endif
