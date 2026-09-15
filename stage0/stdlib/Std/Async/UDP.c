// Lean compiler output
// Module: Std.Async.UDP
// Imports: public import Std.Time public import Std.Internal.UV.UDP public import Std.Async.Select
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
lean_object* lean_uv_udp_recv(lean_object*, uint64_t);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_udp_set_ttl(lean_object*, uint32_t);
lean_object* lean_uv_udp_send(lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_udp_getsockname(lean_object*);
lean_object* lean_uv_udp_set_broadcast(lean_object*, uint8_t);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_uv_udp_wait_readable(lean_object*);
lean_object* lean_uv_udp_cancel_recv(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_uv_udp_new();
lean_object* lean_uv_udp_connect(lean_object*, lean_object*);
uint8_t l_IO_Promise_isResolved___redArg(lean_object*);
lean_object* lean_uv_udp_set_multicast_loop(lean_object*, uint8_t);
lean_object* lean_uv_udp_set_multicast_interface(lean_object*, lean_object*);
lean_object* lean_uv_udp_set_multicast_ttl(lean_object*, uint32_t);
lean_object* lean_uv_udp_getpeername(lean_object*);
lean_object* lean_uv_udp_set_membership(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_udp_bind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_mk();
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_bind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_bind___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_connect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_connect___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Async_UDP_Socket_sendAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l_Std_Async_UDP_Socket_sendAll___closed__0 = (const lean_object*)&l_Std_Async_UDP_Socket_sendAll___closed__0_value;
static const lean_closure_object l_Std_Async_UDP_Socket_sendAll___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_UDP_Socket_sendAll___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_UDP_Socket_sendAll___closed__0_value)} };
static const lean_object* l_Std_Async_UDP_Socket_sendAll___closed__1 = (const lean_object*)&l_Std_Async_UDP_Socket_sendAll___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_UDP_Socket_recv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_UDP_Socket_recv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_UDP_Socket_sendAll___closed__0_value)} };
static const lean_object* l_Std_Async_UDP_Socket_recv___closed__0 = (const lean_object*)&l_Std_Async_UDP_Socket_recv___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__2(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__0 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__1 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_UDP_Socket_recvSelector___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_UDP_Socket_recvSelector___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__4___closed__0 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__4(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__0 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__0_value;
static const lean_ctor_object l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__0_value)}};
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__1 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__6(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__8(lean_object*, uint64_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__7(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__10___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_UDP_Socket_recvSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_UDP_Socket_recvSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___closed__0 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___closed__0_value;
static const lean_closure_object l_Std_Async_UDP_Socket_recvSelector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_UDP_Socket_recvSelector___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_UDP_Socket_recvSelector___closed__1 = (const lean_object*)&l_Std_Async_UDP_Socket_recvSelector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getSockName(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getSockName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getPeerName(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getPeerName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setBroadcast(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setBroadcast___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastLoop(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastLoop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastTTL(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastTTL___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMembership(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMembership___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastInterface(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastInterface___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setTTL(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setTTL___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_Async_UDP_Membership_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Async_UDP_Membership_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_Async_UDP_Membership_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim___redArg(lean_object* v_leaveGroup_22_){
_start:
{
lean_inc(v_leaveGroup_22_);
return v_leaveGroup_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim___redArg___boxed(lean_object* v_leaveGroup_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Async_UDP_Membership_leaveGroup_elim___redArg(v_leaveGroup_23_);
lean_dec(v_leaveGroup_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_leaveGroup_28_){
_start:
{
lean_inc(v_leaveGroup_28_);
return v_leaveGroup_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_leaveGroup_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_leaveGroup_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_Async_UDP_Membership_leaveGroup_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_leaveGroup_32_);
lean_dec(v_leaveGroup_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim___redArg(lean_object* v_enterGroup_35_){
_start:
{
lean_inc(v_enterGroup_35_);
return v_enterGroup_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim___redArg___boxed(lean_object* v_enterGroup_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Async_UDP_Membership_enterGroup_elim___redArg(v_enterGroup_36_);
lean_dec(v_enterGroup_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_enterGroup_41_){
_start:
{
lean_inc(v_enterGroup_41_);
return v_enterGroup_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Membership_enterGroup_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_enterGroup_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_Async_UDP_Membership_enterGroup_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_enterGroup_45_);
lean_dec(v_enterGroup_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_mk(){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_uv_udp_new();
if (lean_obj_tag(v___x_49_) == 0)
{
lean_object* v_a_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_a_50_ = lean_ctor_get(v___x_49_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_49_);
if (v_isSharedCheck_57_ == 0)
{
v___x_52_ = v___x_49_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_a_50_);
lean_dec(v___x_49_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_a_50_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_a_58_ = lean_ctor_get(v___x_49_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_49_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_49_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_49_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_mk___boxed(lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Std_Async_UDP_Socket_mk();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_bind(lean_object* v_s_68_, lean_object* v_addr_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_uv_udp_bind(v_s_68_, v_addr_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_bind___boxed(lean_object* v_s_72_, lean_object* v_addr_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Std_Async_UDP_Socket_bind(v_s_72_, v_addr_73_);
lean_dec_ref(v_addr_73_);
lean_dec(v_s_72_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_connect(lean_object* v_s_76_, lean_object* v_addr_77_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_uv_udp_connect(v_s_76_, v_addr_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_connect___boxed(lean_object* v_s_80_, lean_object* v_addr_81_, lean_object* v___y_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Std_Async_UDP_Socket_connect(v_s_80_, v_addr_81_);
lean_dec_ref(v_addr_81_);
lean_dec(v_s_80_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll___lam__0(lean_object* v___x_84_, lean_object* v_x_85_){
_start:
{
if (lean_obj_tag(v_x_85_) == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_mk_io_user_error(v___x_84_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
else
{
lean_object* v_val_88_; 
lean_dec_ref(v___x_84_);
v_val_88_ = lean_ctor_get(v_x_85_, 0);
lean_inc(v_val_88_);
return v_val_88_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll___lam__0___boxed(lean_object* v___x_89_, lean_object* v_x_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_Async_UDP_Socket_sendAll___lam__0(v___x_89_, v_x_90_);
lean_dec(v_x_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll(lean_object* v_s_95_, lean_object* v_data_96_, lean_object* v_addr_97_){
_start:
{
lean_object* v___f_99_; lean_object* v___x_100_; 
v___f_99_ = ((lean_object*)(l_Std_Async_UDP_Socket_sendAll___closed__1));
v___x_100_ = lean_uv_udp_send(v_s_95_, v_data_96_, v_addr_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_112_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_112_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_112_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_112_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_105_ = lean_io_promise_result_opt(v_a_101_);
lean_dec(v_a_101_);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = 0;
v___x_108_ = lean_task_map(v___f_99_, v___x_105_, v___x_106_, v___x_107_);
if (v_isShared_104_ == 0)
{
lean_ctor_set_tag(v___x_103_, 1);
lean_ctor_set(v___x_103_, 0, v___x_108_);
v___x_110_ = v___x_103_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
else
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_121_; 
v_a_113_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_121_ == 0)
{
v___x_115_ = v___x_100_;
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_100_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set_tag(v___x_115_, 0);
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_113_);
v___x_118_ = v_reuseFailAlloc_120_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_sendAll___boxed(lean_object* v_s_122_, lean_object* v_data_123_, lean_object* v_addr_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Std_Async_UDP_Socket_sendAll(v_s_122_, v_data_123_, v_addr_124_);
lean_dec(v_addr_124_);
lean_dec(v_s_122_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_send(lean_object* v_s_127_, lean_object* v_data_128_, lean_object* v_addr_129_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___f_134_; lean_object* v___x_135_; 
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_mk_empty_array_with_capacity(v___x_131_);
v___x_133_ = lean_array_push(v___x_132_, v_data_128_);
v___f_134_ = ((lean_object*)(l_Std_Async_UDP_Socket_sendAll___closed__1));
v___x_135_ = lean_uv_udp_send(v_s_127_, v___x_133_, v_addr_129_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_147_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_147_ == 0)
{
v___x_138_ = v___x_135_;
v_isShared_139_ = v_isSharedCheck_147_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_147_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___x_145_; 
v___x_140_ = lean_io_promise_result_opt(v_a_136_);
lean_dec(v_a_136_);
v___x_141_ = lean_unsigned_to_nat(0u);
v___x_142_ = 0;
v___x_143_ = lean_task_map(v___f_134_, v___x_140_, v___x_141_, v___x_142_);
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 1);
lean_ctor_set(v___x_138_, 0, v___x_143_);
v___x_145_ = v___x_138_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_156_; 
v_a_148_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_156_ == 0)
{
v___x_150_ = v___x_135_;
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_135_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set_tag(v___x_150_, 0);
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_155_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_send___boxed(lean_object* v_s_157_, lean_object* v_data_158_, lean_object* v_addr_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Std_Async_UDP_Socket_send(v_s_157_, v_data_158_, v_addr_159_);
lean_dec(v_addr_159_);
lean_dec(v_s_157_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv___lam__0(lean_object* v___x_162_, lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_mk_io_user_error(v___x_162_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v_val_166_; 
lean_dec_ref(v___x_162_);
v_val_166_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_val_166_);
return v_val_166_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv___lam__0___boxed(lean_object* v___x_167_, lean_object* v_x_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Std_Async_UDP_Socket_recv___lam__0(v___x_167_, v_x_168_);
lean_dec(v_x_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv(lean_object* v_s_172_, uint64_t v_size_173_){
_start:
{
lean_object* v___f_175_; lean_object* v___x_176_; 
v___f_175_ = ((lean_object*)(l_Std_Async_UDP_Socket_recv___closed__0));
v___x_176_ = lean_uv_udp_recv(v_s_172_, v_size_173_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_188_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_188_ == 0)
{
v___x_179_ = v___x_176_;
v_isShared_180_ = v_isSharedCheck_188_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_188_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_181_ = lean_io_promise_result_opt(v_a_177_);
lean_dec(v_a_177_);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = 0;
v___x_184_ = lean_task_map(v___f_175_, v___x_181_, v___x_182_, v___x_183_);
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 1);
lean_ctor_set(v___x_179_, 0, v___x_184_);
v___x_186_ = v___x_179_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_197_; 
v_a_189_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_197_ == 0)
{
v___x_191_ = v___x_176_;
v_isShared_192_ = v_isSharedCheck_197_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_176_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_197_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 0);
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_196_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recv___boxed(lean_object* v_s_198_, lean_object* v_size_199_, lean_object* v___y_200_){
_start:
{
uint64_t v_size_boxed_201_; lean_object* v_res_202_; 
v_size_boxed_201_ = lean_unbox_uint64(v_size_199_);
lean_dec_ref(v_size_199_);
v_res_202_ = l_Std_Async_UDP_Socket_recv(v_s_198_, v_size_boxed_201_);
lean_dec(v_s_198_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg(lean_object* v_e_203_){
_start:
{
if (lean_obj_tag(v_e_203_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_214_; 
v_a_205_ = lean_ctor_get(v_e_203_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_e_203_);
if (v_isSharedCheck_214_ == 0)
{
v___x_207_ = v_e_203_;
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v_e_203_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_209_ = lean_io_error_to_string(v_a_205_);
v___x_210_ = lean_mk_io_user_error(v___x_209_);
if (v_isShared_208_ == 0)
{
lean_ctor_set_tag(v___x_207_, 1);
lean_ctor_set(v___x_207_, 0, v___x_210_);
v___x_212_ = v___x_207_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
v_a_215_ = lean_ctor_get(v_e_203_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v_e_203_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v_e_203_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v_e_203_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
lean_ctor_set_tag(v___x_217_, 0);
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg___boxed(lean_object* v_e_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg(v_e_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0(lean_object* v_00_u03b1_226_, lean_object* v_e_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg(v_e_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___boxed(lean_object* v_00_u03b1_230_, lean_object* v_e_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0(v_00_u03b1_230_, v_e_231_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__0(lean_object* v_x_234_){
_start:
{
if (lean_obj_tag(v_x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_236_; 
v_a_235_ = lean_ctor_get(v_x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v_x_234_, 1);
v___x_236_ = lean_task_pure(v_a_235_);
return v___x_236_;
}
else
{
lean_object* v_a_237_; 
v_a_237_ = lean_ctor_get(v_x_234_, 0);
lean_inc_ref(v_a_237_);
lean_dec_ref_known(v_x_234_, 1);
return v_a_237_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__2(lean_object* v_s_238_, uint64_t v_size_239_, lean_object* v___x_240_){
_start:
{
lean_object* v___f_242_; lean_object* v___x_243_; 
v___f_242_ = ((lean_object*)(l_Std_Async_UDP_Socket_recv___closed__0));
v___x_243_ = lean_uv_udp_recv(v_s_238_, v_size_239_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_254_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_254_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_254_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_254_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_248_ = lean_io_promise_result_opt(v_a_244_);
lean_dec(v_a_244_);
v___x_249_ = 0;
v___x_250_ = lean_task_map(v___f_242_, v___x_248_, v___x_240_, v___x_249_);
if (v_isShared_247_ == 0)
{
lean_ctor_set_tag(v___x_246_, 1);
lean_ctor_set(v___x_246_, 0, v___x_250_);
v___x_252_ = v___x_246_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_263_; 
lean_dec(v___x_240_);
v_a_255_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_263_ == 0)
{
v___x_257_ = v___x_243_;
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_243_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_262_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; 
v___x_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__2___boxed(lean_object* v_s_264_, lean_object* v_size_265_, lean_object* v___x_266_, lean_object* v___y_267_){
_start:
{
uint64_t v_size_boxed_268_; lean_object* v_res_269_; 
v_size_boxed_268_ = lean_unbox_uint64(v_size_265_);
lean_dec_ref(v_size_265_);
v_res_269_ = l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__2(v_s_264_, v_size_boxed_268_, v___x_266_);
lean_dec(v_s_264_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1(lean_object* v_s_271_, uint64_t v_size_272_, lean_object* v_val_273_, lean_object* v_w_274_, lean_object* v_lose_275_){
_start:
{
lean_object* v_finished_277_; lean_object* v_promise_278_; lean_object* v_a_280_; lean_object* v___f_284_; uint8_t v___y_286_; lean_object* v___x_296_; uint8_t v___y_298_; uint8_t v___x_305_; 
v_finished_277_ = lean_ctor_get(v_w_274_, 0);
v_promise_278_ = lean_ctor_get(v_w_274_, 1);
v___f_284_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___closed__0));
v___x_296_ = lean_st_ref_take(v_finished_277_);
v___x_305_ = lean_unbox(v___x_296_);
lean_dec(v___x_296_);
if (v___x_305_ == 0)
{
uint8_t v___x_306_; 
v___x_306_ = 1;
v___y_298_ = v___x_306_;
goto v___jp_297_;
}
else
{
uint8_t v___x_307_; 
v___x_307_ = 0;
v___y_298_ = v___x_307_;
goto v___jp_297_;
}
v___jp_279_:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v_a_280_);
v___x_282_ = lean_io_promise_resolve(v___x_281_, v_promise_278_);
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
return v___x_283_;
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___f_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = lean_box_uint64(v_size_272_);
v___f_289_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_289_, 0, v_s_271_);
lean_closure_set(v___f_289_, 1, v___x_288_);
lean_closure_set(v___f_289_, 2, v___x_287_);
v___x_290_ = lean_io_as_task(v___f_289_, v___x_287_);
v___x_291_ = lean_task_bind(v___x_290_, v___f_284_, v___x_287_, v___y_286_);
v___x_292_ = lean_task_get_own(v___x_291_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v_a_280_ = v_a_293_;
goto v___jp_279_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_io_promise_resolve(v___x_292_, v_promise_278_);
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
v___jp_297_:
{
uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = 1;
v___x_300_ = lean_box(v___x_299_);
v___x_301_ = lean_st_ref_put(v_finished_277_, v___x_300_);
if (v___y_298_ == 0)
{
lean_object* v___x_302_; 
lean_dec_ref(v_val_273_);
lean_dec(v_s_271_);
v___x_302_ = lean_apply_1(v_lose_275_, lean_box(0));
return v___x_302_;
}
else
{
lean_object* v___x_303_; 
lean_dec_ref(v_lose_275_);
v___x_303_ = l_IO_ofExcept___at___00Std_Async_UDP_Socket_recvSelector_spec__0___redArg(v_val_273_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_dec_ref_known(v___x_303_, 1);
v___y_286_ = v___y_298_;
goto v___jp_285_;
}
else
{
if (lean_obj_tag(v___x_303_) == 0)
{
lean_dec_ref_known(v___x_303_, 1);
v___y_286_ = v___y_298_;
goto v___jp_285_;
}
else
{
lean_object* v_a_304_; 
lean_dec(v_s_271_);
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
v_a_280_ = v_a_304_;
goto v___jp_279_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___boxed(lean_object* v_s_308_, lean_object* v_size_309_, lean_object* v_val_310_, lean_object* v_w_311_, lean_object* v_lose_312_, lean_object* v___y_313_){
_start:
{
uint64_t v_size_boxed_314_; lean_object* v_res_315_; 
v_size_boxed_314_ = lean_unbox_uint64(v_size_309_);
lean_dec_ref(v_size_309_);
v_res_315_ = l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1(v_s_308_, v_size_boxed_314_, v_val_310_, v_w_311_, v_lose_312_);
lean_dec_ref(v_w_311_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__0(lean_object* v_x_320_){
_start:
{
if (lean_obj_tag(v_x_320_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_330_; 
v_a_322_ = lean_ctor_get(v_x_320_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_320_);
if (v_isSharedCheck_330_ == 0)
{
v___x_324_ = v_x_320_;
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v_x_320_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_329_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; 
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
}
}
else
{
lean_object* v___x_331_; 
lean_dec_ref_known(v_x_320_, 1);
v___x_331_ = ((lean_object*)(l_Std_Async_UDP_Socket_recvSelector___lam__0___closed__1));
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__0___boxed(lean_object* v_x_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Std_Async_UDP_Socket_recvSelector___lam__0(v_x_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__1(lean_object* v_x_335_){
_start:
{
if (lean_obj_tag(v_x_335_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_345_; 
v_a_337_ = lean_ctor_get(v_x_335_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v_x_335_);
if (v_isSharedCheck_345_ == 0)
{
v___x_339_ = v_x_335_;
v_isShared_340_ = v_isSharedCheck_345_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v_x_335_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_345_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_344_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_343_; 
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_355_; 
v_a_346_ = lean_ctor_get(v_x_335_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v_x_335_);
if (v_isSharedCheck_355_ == 0)
{
v___x_348_ = v_x_335_;
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v_x_335_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_352_; 
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v_a_346_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_350_);
v___x_352_ = v___x_348_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_350_);
v___x_352_ = v_reuseFailAlloc_354_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
lean_object* v___x_353_; 
v___x_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__1___boxed(lean_object* v_x_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Std_Async_UDP_Socket_recvSelector___lam__1(v_x_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__3(lean_object* v_s_359_){
_start:
{
lean_object* v_val_362_; lean_object* v___x_364_; 
v___x_364_ = lean_uv_udp_cancel_recv(v_s_359_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 1);
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
v_val_362_ = v___x_370_;
goto v___jp_361_;
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_373_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_364_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_364_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set_tag(v___x_375_, 0);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
v_val_362_ = v___x_378_;
goto v___jp_361_;
}
}
}
v___jp_361_:
{
lean_object* v___x_363_; 
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v_val_362_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__3___boxed(lean_object* v_s_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Std_Async_UDP_Socket_recvSelector___lam__3(v_s_381_);
lean_dec(v_s_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__2(lean_object* v___x_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__2___boxed(lean_object* v___x_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Std_Async_UDP_Socket_recvSelector___lam__2(v___x_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__4(lean_object* v_s_392_, uint64_t v_size_393_, lean_object* v_waiter_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_a_398_; 
if (lean_obj_tag(v_a_395_) == 0)
{
lean_object* v___x_400_; 
lean_dec(v_s_392_);
v___x_400_ = lean_box(0);
v_a_398_ = v___x_400_;
goto v___jp_397_;
}
else
{
lean_object* v_val_401_; lean_object* v___f_402_; lean_object* v___x_403_; 
v_val_401_ = lean_ctor_get(v_a_395_, 0);
lean_inc(v_val_401_);
lean_dec_ref_known(v_a_395_, 1);
v___f_402_ = ((lean_object*)(l_Std_Async_UDP_Socket_recvSelector___lam__4___closed__0));
v___x_403_ = l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1(v_s_392_, v_size_393_, v_val_401_, v_waiter_394_, v___f_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v_a_398_ = v_a_404_;
goto v___jp_397_;
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
v_a_405_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_403_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_403_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 0);
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
v___jp_397_:
{
lean_object* v___x_399_; 
v___x_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_399_, 0, v_a_398_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__4___boxed(lean_object* v_s_413_, lean_object* v_size_414_, lean_object* v_waiter_415_, lean_object* v_a_416_, lean_object* v___y_417_){
_start:
{
uint64_t v_size_boxed_418_; lean_object* v_res_419_; 
v_size_boxed_418_ = lean_unbox_uint64(v_size_414_);
lean_dec_ref(v_size_414_);
v_res_419_ = l_Std_Async_UDP_Socket_recvSelector___lam__4(v_s_413_, v_size_boxed_418_, v_waiter_415_, v_a_416_);
lean_dec_ref(v_waiter_415_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__5(lean_object* v___f_424_, lean_object* v_x_425_){
_start:
{
if (lean_obj_tag(v_x_425_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_435_; 
lean_dec_ref(v___f_424_);
v_a_427_ = lean_ctor_get(v_x_425_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_435_ == 0)
{
v___x_429_ = v_x_425_;
v_isShared_430_ = v_isSharedCheck_435_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v_x_425_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_435_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_434_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
lean_object* v___x_433_; 
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_a_436_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v_x_425_, 1);
v___x_437_ = lean_io_promise_result_opt(v_a_436_);
lean_dec(v_a_436_);
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = 0;
v___x_440_ = lean_io_map_task(v___f_424_, v___x_437_, v___x_438_, v___x_439_);
lean_dec_ref(v___x_440_);
v___x_441_ = ((lean_object*)(l_Std_Async_UDP_Socket_recvSelector___lam__5___closed__1));
return v___x_441_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__5___boxed(lean_object* v___f_442_, lean_object* v_x_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Std_Async_UDP_Socket_recvSelector___lam__5(v___f_442_, v_x_443_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__6(lean_object* v_s_446_, uint64_t v_size_447_, lean_object* v_waiter_448_){
_start:
{
lean_object* v___x_450_; lean_object* v___f_451_; lean_object* v___f_452_; lean_object* v___x_453_; uint8_t v___x_454_; lean_object* v_val_456_; lean_object* v___x_459_; 
v___x_450_ = lean_box_uint64(v_size_447_);
lean_inc(v_s_446_);
v___f_451_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__4___boxed), 5, 3);
lean_closure_set(v___f_451_, 0, v_s_446_);
lean_closure_set(v___f_451_, 1, v___x_450_);
lean_closure_set(v___f_451_, 2, v_waiter_448_);
v___f_452_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__5___boxed), 3, 1);
lean_closure_set(v___f_452_, 0, v___f_451_);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = 0;
v___x_459_ = lean_uv_udp_wait_readable(v_s_446_);
lean_dec(v_s_446_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set_tag(v___x_462_, 1);
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
v_val_456_ = v___x_465_;
goto v___jp_455_;
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_a_468_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_459_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_459_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
lean_ctor_set_tag(v___x_470_, 0);
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
v_val_456_ = v___x_473_;
goto v___jp_455_;
}
}
}
v___jp_455_:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v_val_456_);
v___x_458_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_453_, v___x_454_, v___x_457_, v___f_452_);
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__6___boxed(lean_object* v_s_476_, lean_object* v_size_477_, lean_object* v_waiter_478_, lean_object* v___y_479_){
_start:
{
uint64_t v_size_boxed_480_; lean_object* v_res_481_; 
v_size_boxed_480_ = lean_unbox_uint64(v_size_477_);
lean_dec_ref(v_size_477_);
v_res_481_ = l_Std_Async_UDP_Socket_recvSelector___lam__6(v_s_476_, v_size_boxed_480_, v_waiter_478_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__8(lean_object* v_s_482_, uint64_t v_size_483_, lean_object* v___x_484_, uint8_t v___x_485_){
_start:
{
lean_object* v___f_487_; lean_object* v___x_488_; 
v___f_487_ = ((lean_object*)(l_Std_Async_UDP_Socket_recv___closed__0));
v___x_488_ = lean_uv_udp_recv(v_s_482_, v_size_483_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_498_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_498_ == 0)
{
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_498_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_498_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_496_; 
v___x_493_ = lean_io_promise_result_opt(v_a_489_);
lean_dec(v_a_489_);
v___x_494_ = lean_task_map(v___f_487_, v___x_493_, v___x_484_, v___x_485_);
if (v_isShared_492_ == 0)
{
lean_ctor_set_tag(v___x_491_, 1);
lean_ctor_set(v___x_491_, 0, v___x_494_);
v___x_496_ = v___x_491_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_507_; 
lean_dec(v___x_484_);
v_a_499_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_507_ == 0)
{
v___x_501_ = v___x_488_;
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_488_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set_tag(v___x_501_, 0);
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_506_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_505_; 
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
return v___x_505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__8___boxed(lean_object* v_s_508_, lean_object* v_size_509_, lean_object* v___x_510_, lean_object* v___x_511_, lean_object* v___y_512_){
_start:
{
uint64_t v_size_boxed_513_; uint8_t v___x_4624__boxed_514_; lean_object* v_res_515_; 
v_size_boxed_513_ = lean_unbox_uint64(v_size_509_);
lean_dec_ref(v_size_509_);
v___x_4624__boxed_514_ = lean_unbox(v___x_511_);
v_res_515_ = l_Std_Async_UDP_Socket_recvSelector___lam__8(v_s_508_, v_size_boxed_513_, v___x_510_, v___x_4624__boxed_514_);
lean_dec(v_s_508_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__7(lean_object* v___f_516_, lean_object* v_s_517_, uint64_t v_size_518_, lean_object* v___f_519_, lean_object* v___f_520_, lean_object* v_x_521_){
_start:
{
if (lean_obj_tag(v_x_521_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_531_; 
lean_dec_ref(v___f_520_);
lean_dec_ref(v___f_519_);
lean_dec(v_s_517_);
lean_dec_ref(v___f_516_);
v_a_523_ = lean_ctor_get(v_x_521_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_531_ == 0)
{
v___x_525_ = v_x_521_;
v_isShared_526_ = v_isSharedCheck_531_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v_x_521_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_531_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_530_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; 
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_563_; 
v_a_532_ = lean_ctor_get(v_x_521_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_563_ == 0)
{
v___x_534_ = v_x_521_;
v_isShared_535_ = v_isSharedCheck_563_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v_x_521_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_563_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
uint8_t v___x_536_; 
v___x_536_ = lean_unbox(v_a_532_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; lean_object* v_val_539_; lean_object* v___x_543_; 
lean_dec_ref(v___f_520_);
lean_dec_ref(v___f_519_);
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_543_ = lean_uv_udp_cancel_recv(v_s_517_);
lean_dec(v_s_517_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_546_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v_a_544_);
v___x_546_ = v___x_534_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
v_val_539_ = v___x_546_;
goto v___jp_538_;
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; 
v_a_548_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v___x_543_, 1);
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 0);
lean_ctor_set(v___x_534_, 0, v_a_548_);
v___x_550_ = v___x_534_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
v_val_539_ = v___x_550_;
goto v___jp_538_;
}
}
v___jp_538_:
{
lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; 
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v_val_539_);
v___x_541_ = lean_unbox(v_a_532_);
lean_dec(v_a_532_);
v___x_542_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_537_, v___x_541_, v___x_540_, v___f_516_);
return v___x_542_;
}
}
else
{
lean_object* v___x_552_; uint8_t v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___f_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_del_object(v___x_534_);
lean_dec_ref(v___f_516_);
v___x_552_ = lean_unsigned_to_nat(0u);
v___x_553_ = 0;
v___x_554_ = lean_box_uint64(v_size_518_);
v___x_555_ = lean_box(v___x_553_);
v___f_556_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__8___boxed), 5, 4);
lean_closure_set(v___f_556_, 0, v_s_517_);
lean_closure_set(v___f_556_, 1, v___x_554_);
lean_closure_set(v___f_556_, 2, v___x_552_);
lean_closure_set(v___f_556_, 3, v___x_555_);
v___x_557_ = lean_io_as_task(v___f_556_, v___x_552_);
v___x_558_ = lean_unbox(v_a_532_);
lean_dec(v_a_532_);
v___x_559_ = lean_task_bind(v___x_557_, v___f_519_, v___x_552_, v___x_558_);
v___x_560_ = lean_task_get_own(v___x_559_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
v___x_562_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_552_, v___x_553_, v___x_561_, v___f_520_);
return v___x_562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__7___boxed(lean_object* v___f_564_, lean_object* v_s_565_, lean_object* v_size_566_, lean_object* v___f_567_, lean_object* v___f_568_, lean_object* v_x_569_, lean_object* v___y_570_){
_start:
{
uint64_t v_size_boxed_571_; lean_object* v_res_572_; 
v_size_boxed_571_ = lean_unbox_uint64(v_size_566_);
lean_dec_ref(v_size_566_);
v_res_572_ = l_Std_Async_UDP_Socket_recvSelector___lam__7(v___f_564_, v_s_565_, v_size_boxed_571_, v___f_567_, v___f_568_, v_x_569_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__9(lean_object* v___f_573_, lean_object* v_x_574_){
_start:
{
if (lean_obj_tag(v_x_574_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
lean_dec_ref(v___f_573_);
v_a_576_ = lean_ctor_get(v_x_574_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v_x_574_);
if (v_isSharedCheck_584_ == 0)
{
v___x_578_ = v_x_574_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v_x_574_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_583_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
lean_object* v___x_582_; 
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_598_; 
v_a_585_ = lean_ctor_get(v_x_574_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v_x_574_);
if (v_isSharedCheck_598_ == 0)
{
v___x_587_ = v_x_574_;
v_isShared_588_ = v_isSharedCheck_598_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v_x_574_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_598_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; uint8_t v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = 0;
v___x_591_ = l_IO_Promise_isResolved___redArg(v_a_585_);
lean_dec(v_a_585_);
v___x_592_ = lean_box(v___x_591_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_592_);
v___x_594_ = v___x_587_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_597_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
v___x_596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_589_, v___x_590_, v___x_595_, v___f_573_);
return v___x_596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__9___boxed(lean_object* v___f_599_, lean_object* v_x_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Std_Async_UDP_Socket_recvSelector___lam__9(v___f_599_, v_x_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__10(lean_object* v___f_603_, lean_object* v_s_604_){
_start:
{
lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v_val_609_; lean_object* v___x_612_; 
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = 0;
v___x_612_ = lean_uv_udp_wait_readable(v_s_604_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 1);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
v_val_609_ = v___x_618_;
goto v___jp_608_;
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
v_a_621_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_612_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_612_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set_tag(v___x_623_, 0);
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
v_val_609_ = v___x_626_;
goto v___jp_608_;
}
}
}
v___jp_608_:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_610_, 0, v_val_609_);
v___x_611_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_606_, v___x_607_, v___x_610_, v___f_603_);
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___lam__10___boxed(lean_object* v___f_629_, lean_object* v_s_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Std_Async_UDP_Socket_recvSelector___lam__10(v___f_629_, v_s_630_);
lean_dec(v_s_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector(lean_object* v_s_635_, uint64_t v_size_636_){
_start:
{
lean_object* v___f_637_; lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___f_640_; lean_object* v___x_641_; lean_object* v___f_642_; lean_object* v___x_643_; lean_object* v___f_644_; lean_object* v___f_645_; lean_object* v___f_646_; lean_object* v___x_647_; 
v___f_637_ = ((lean_object*)(l_Std_Async_UDP_Socket_recvSelector___closed__0));
v___f_638_ = ((lean_object*)(l_Std_Async_UDP_Socket_recvSelector___closed__1));
v___f_639_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_Async_UDP_Socket_recvSelector_spec__1___closed__0));
lean_inc_n(v_s_635_, 3);
v___f_640_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__3___boxed), 2, 1);
lean_closure_set(v___f_640_, 0, v_s_635_);
v___x_641_ = lean_box_uint64(v_size_636_);
v___f_642_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__6___boxed), 4, 2);
lean_closure_set(v___f_642_, 0, v_s_635_);
lean_closure_set(v___f_642_, 1, v___x_641_);
v___x_643_ = lean_box_uint64(v_size_636_);
v___f_644_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__7___boxed), 7, 5);
lean_closure_set(v___f_644_, 0, v___f_637_);
lean_closure_set(v___f_644_, 1, v_s_635_);
lean_closure_set(v___f_644_, 2, v___x_643_);
lean_closure_set(v___f_644_, 3, v___f_639_);
lean_closure_set(v___f_644_, 4, v___f_638_);
v___f_645_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__9___boxed), 3, 1);
lean_closure_set(v___f_645_, 0, v___f_644_);
v___f_646_ = lean_alloc_closure((void*)(l_Std_Async_UDP_Socket_recvSelector___lam__10___boxed), 3, 2);
lean_closure_set(v___f_646_, 0, v___f_645_);
lean_closure_set(v___f_646_, 1, v_s_635_);
v___x_647_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_647_, 0, v___f_646_);
lean_ctor_set(v___x_647_, 1, v___f_642_);
lean_ctor_set(v___x_647_, 2, v___f_640_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_recvSelector___boxed(lean_object* v_s_648_, lean_object* v_size_649_){
_start:
{
uint64_t v_size_boxed_650_; lean_object* v_res_651_; 
v_size_boxed_650_ = lean_unbox_uint64(v_size_649_);
lean_dec_ref(v_size_649_);
v_res_651_ = l_Std_Async_UDP_Socket_recvSelector(v_s_648_, v_size_boxed_650_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getSockName(lean_object* v_s_652_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = lean_uv_udp_getsockname(v_s_652_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getSockName___boxed(lean_object* v_s_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Std_Async_UDP_Socket_getSockName(v_s_655_);
lean_dec(v_s_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getPeerName(lean_object* v_s_658_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = lean_uv_udp_getpeername(v_s_658_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_getPeerName___boxed(lean_object* v_s_661_, lean_object* v___y_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Std_Async_UDP_Socket_getPeerName(v_s_661_);
lean_dec(v_s_661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setBroadcast(lean_object* v_s_664_, uint8_t v_enable_665_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lean_uv_udp_set_broadcast(v_s_664_, v_enable_665_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setBroadcast___boxed(lean_object* v_s_668_, lean_object* v_enable_669_, lean_object* v___y_670_){
_start:
{
uint8_t v_enable_boxed_671_; lean_object* v_res_672_; 
v_enable_boxed_671_ = lean_unbox(v_enable_669_);
v_res_672_ = l_Std_Async_UDP_Socket_setBroadcast(v_s_668_, v_enable_boxed_671_);
lean_dec(v_s_668_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastLoop(lean_object* v_s_673_, uint8_t v_enable_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lean_uv_udp_set_multicast_loop(v_s_673_, v_enable_674_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastLoop___boxed(lean_object* v_s_677_, lean_object* v_enable_678_, lean_object* v___y_679_){
_start:
{
uint8_t v_enable_boxed_680_; lean_object* v_res_681_; 
v_enable_boxed_680_ = lean_unbox(v_enable_678_);
v_res_681_ = l_Std_Async_UDP_Socket_setMulticastLoop(v_s_677_, v_enable_boxed_680_);
lean_dec(v_s_677_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastTTL(lean_object* v_s_682_, uint32_t v_ttl_683_){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = lean_uv_udp_set_multicast_ttl(v_s_682_, v_ttl_683_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastTTL___boxed(lean_object* v_s_686_, lean_object* v_ttl_687_, lean_object* v___y_688_){
_start:
{
uint32_t v_ttl_boxed_689_; lean_object* v_res_690_; 
v_ttl_boxed_689_ = lean_unbox_uint32(v_ttl_687_);
lean_dec(v_ttl_687_);
v_res_690_ = l_Std_Async_UDP_Socket_setMulticastTTL(v_s_686_, v_ttl_boxed_689_);
lean_dec(v_s_686_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMembership(lean_object* v_s_691_, lean_object* v_multicastAddr_692_, lean_object* v_interfaceAddr_693_, uint8_t v_membership_694_){
_start:
{
if (v_membership_694_ == 0)
{
uint8_t v___x_696_; lean_object* v___x_697_; 
v___x_696_ = 0;
v___x_697_ = lean_uv_udp_set_membership(v_s_691_, v_multicastAddr_692_, v_interfaceAddr_693_, v___x_696_);
return v___x_697_;
}
else
{
uint8_t v___x_698_; lean_object* v___x_699_; 
v___x_698_ = 1;
v___x_699_ = lean_uv_udp_set_membership(v_s_691_, v_multicastAddr_692_, v_interfaceAddr_693_, v___x_698_);
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMembership___boxed(lean_object* v_s_700_, lean_object* v_multicastAddr_701_, lean_object* v_interfaceAddr_702_, lean_object* v_membership_703_, lean_object* v___y_704_){
_start:
{
uint8_t v_membership_boxed_705_; lean_object* v_res_706_; 
v_membership_boxed_705_ = lean_unbox(v_membership_703_);
v_res_706_ = l_Std_Async_UDP_Socket_setMembership(v_s_700_, v_multicastAddr_701_, v_interfaceAddr_702_, v_membership_boxed_705_);
lean_dec(v_interfaceAddr_702_);
lean_dec_ref(v_multicastAddr_701_);
lean_dec(v_s_700_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastInterface(lean_object* v_s_707_, lean_object* v_interfaceAddr_708_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = lean_uv_udp_set_multicast_interface(v_s_707_, v_interfaceAddr_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setMulticastInterface___boxed(lean_object* v_s_711_, lean_object* v_interfaceAddr_712_, lean_object* v___y_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Std_Async_UDP_Socket_setMulticastInterface(v_s_711_, v_interfaceAddr_712_);
lean_dec_ref(v_interfaceAddr_712_);
lean_dec(v_s_711_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setTTL(lean_object* v_s_715_, uint32_t v_ttl_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_uv_udp_set_ttl(v_s_715_, v_ttl_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_UDP_Socket_setTTL___boxed(lean_object* v_s_719_, lean_object* v_ttl_720_, lean_object* v___y_721_){
_start:
{
uint32_t v_ttl_boxed_722_; lean_object* v_res_723_; 
v_ttl_boxed_722_ = lean_unbox_uint32(v_ttl_720_);
lean_dec(v_ttl_720_);
v_res_723_ = l_Std_Async_UDP_Socket_setTTL(v_s_719_, v_ttl_boxed_722_);
lean_dec(v_s_719_);
return v_res_723_;
}
}
lean_object* runtime_initialize_Std_Time(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_UV_UDP(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Select(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_UDP(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_UV_UDP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_UDP(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time(uint8_t builtin);
lean_object* initialize_Std_Internal_UV_UDP(uint8_t builtin);
lean_object* initialize_Std_Async_Select(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_UDP(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_UV_UDP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_UDP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_UDP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_UDP(builtin);
}
#ifdef __cplusplus
}
#endif
