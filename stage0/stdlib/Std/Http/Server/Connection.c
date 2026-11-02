// Lean compiler output
// Module: Std.Http.Server.Connection
// Imports: public import Std.Async.TCP public import Std.Async.ContextAsync public import Std.Http.Transport public import Std.Http.Protocol.H1 public import Std.Http.Server.Config public import Std.Http.Server.Handler
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ByteArray_mkIterator(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_get_current_time();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(uint8_t, lean_object*);
lean_object* l_Std_Http_Body_Stream_close(lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Stream_send(lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Http_Protocol_H1_Machine_closeWithError(lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders(uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head(uint8_t);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Internal_IndexMultiMap_empty___redArg();
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize(uint8_t, lean_object*, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(uint8_t, lean_object*, lean_object*);
uint8_t l_Std_Http_Protocol_H1_Writer_instBEqState_beq(lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_headers(uint8_t, lean_object*);
extern lean_object* l_Std_Http_Header_Name_contentLength;
uint16_t l_Std_Http_Status_toCode(lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
extern lean_object* l_Std_Http_Header_Name_date;
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Std_Time_DateTime_toHTTPDateString(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
lean_object* l_Std_Http_Body_mkStream();
lean_object* l_Std_Http_Protocol_H1_Machine_canContinue(uint8_t, lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Channel_send___redArg(lean_object*, lean_object*);
lean_object* l_Std_Channel_recvSelector___redArg(lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_Std_Async_Selector_sleep(lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object*);
lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead(uint8_t);
lean_object* lean_mk_empty_byte_array(lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Std_Http_Protocol_H1_Machine_step(uint8_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Http_Config_toH1Config(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Functor_discard(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Channel_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Http"};
static const lean_object* l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "RemoteAddr"};
static const lean_object* l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(62, 74, 245, 198, 196, 207, 141, 173)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(3, 137, 82, 156, 27, 230, 60, 168)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_2),((lean_object*)&l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(136, 13, 149, 223, 202, 48, 50, 45)}};
static const lean_object* l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instImpl_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instTypeNameRemoteAddr = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_Server_instToStringRemoteAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___closed__0 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instToStringRemoteAddr = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__7_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__8_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__9_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__4_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__10 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__10_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__10_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__5_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__6_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__7_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__8_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__11 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__11_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__11_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__9_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Invalid status line"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Invalid header"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Timeout"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Entity too large"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "URI too long"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unsupported version"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Invalid chunk"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Connection closed"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Bad message"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Too many headers"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Headers too large"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Other error: "};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "request header timeout"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3;
static const lean_array_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4_value;
static const lean_array_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value;
static const lean_ctor_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0(lean_object* v_addr_15_){
_start:
{
if (lean_obj_tag(v_addr_15_) == 0)
{
lean_object* v_addr_16_; lean_object* v_addr_17_; uint16_t v_port_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_addr_16_ = lean_ctor_get(v_addr_15_, 0);
v_addr_17_ = lean_ctor_get(v_addr_16_, 0);
v_port_18_ = lean_ctor_get_uint16(v_addr_16_, sizeof(void*)*1);
v___x_19_ = lean_uv_ntop_v4(v_addr_17_);
v___x_20_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0));
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
v___x_22_ = lean_uint16_to_nat(v_port_18_);
v___x_23_ = l_Nat_reprFast(v___x_22_);
v___x_24_ = lean_string_append(v___x_21_, v___x_23_);
lean_dec_ref(v___x_23_);
return v___x_24_;
}
else
{
lean_object* v_addr_25_; lean_object* v_addr_26_; uint16_t v_port_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_addr_25_ = lean_ctor_get(v_addr_15_, 0);
v_addr_26_ = lean_ctor_get(v_addr_25_, 0);
v_port_27_ = lean_ctor_get_uint16(v_addr_25_, sizeof(void*)*1);
v___x_28_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1));
v___x_29_ = lean_uv_ntop_v6(v_addr_26_);
v___x_30_ = lean_string_append(v___x_28_, v___x_29_);
lean_dec_ref(v___x_29_);
v___x_31_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2));
v___x_32_ = lean_string_append(v___x_30_, v___x_31_);
v___x_33_ = lean_uint16_to_nat(v_port_27_);
v___x_34_ = l_Nat_reprFast(v___x_33_);
v___x_35_ = lean_string_append(v___x_32_, v___x_34_);
lean_dec_ref(v___x_34_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed(lean_object* v_addr_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Http_Server_instToStringRemoteAddr___lam__0(v_addr_36_);
lean_dec_ref(v_addr_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(lean_object* v_x_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_obj_tag_nat(v_x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg___boxed(lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(v_x_42_);
lean_dec(v_x_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(lean_object* v_00_u03b2_44_, lean_object* v_x_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_tag_nat(v_x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___boxed(lean_object* v_00_u03b2_47_, lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(v_00_u03b2_47_, v_x_48_);
lean_dec(v_x_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object* v_t_50_, lean_object* v_k_51_){
_start:
{
switch(lean_obj_tag(v_t_50_))
{
case 0:
{
lean_object* v_x_52_; lean_object* v___x_53_; 
v_x_52_ = lean_ctor_get(v_t_50_, 0);
lean_inc(v_x_52_);
lean_dec_ref_known(v_t_50_, 1);
v___x_53_ = lean_apply_1(v_k_51_, v_x_52_);
return v___x_53_;
}
case 1:
{
lean_object* v_x_54_; lean_object* v___x_55_; 
v_x_54_ = lean_ctor_get(v_t_50_, 0);
lean_inc(v_x_54_);
lean_dec_ref_known(v_t_50_, 1);
v___x_55_ = lean_apply_1(v_k_51_, v_x_54_);
return v___x_55_;
}
case 2:
{
uint8_t v_x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_x_56_ = lean_ctor_get_uint8(v_t_50_, 0);
lean_dec_ref_known(v_t_50_, 0);
v___x_57_ = lean_box(v_x_56_);
v___x_58_ = lean_apply_1(v_k_51_, v___x_57_);
return v___x_58_;
}
case 3:
{
lean_object* v_x_59_; lean_object* v___x_60_; 
v_x_59_ = lean_ctor_get(v_t_50_, 0);
lean_inc_ref(v_x_59_);
lean_dec_ref_known(v_t_50_, 1);
v___x_60_ = lean_apply_1(v_k_51_, v_x_59_);
return v___x_60_;
}
default: 
{
lean_dec(v_t_50_);
return v_k_51_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object* v_00_u03b2_61_, lean_object* v_motive_62_, lean_object* v_ctorIdx_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_k_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_64_, v_k_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object* v_00_u03b2_68_, lean_object* v_motive_69_, lean_object* v_ctorIdx_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_k_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(v_00_u03b2_68_, v_motive_69_, v_ctorIdx_70_, v_t_71_, v_h_72_, v_k_73_);
lean_dec(v_ctorIdx_70_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object* v_t_75_, lean_object* v_bytes_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_75_, v_bytes_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object* v_00_u03b2_78_, lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_bytes_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_80_, v_bytes_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object* v_t_84_, lean_object* v_responseBody_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_84_, v_responseBody_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object* v_00_u03b2_87_, lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_responseBody_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_89_, v_responseBody_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object* v_t_93_, lean_object* v_bodyInterest_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_93_, v_bodyInterest_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object* v_00_u03b2_96_, lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_bodyInterest_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_98_, v_bodyInterest_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object* v_t_102_, lean_object* v_response_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_102_, v_response_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object* v_00_u03b2_105_, lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_response_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_107_, v_response_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object* v_t_111_, lean_object* v_timeout_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_111_, v_timeout_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object* v_00_u03b2_114_, lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_timeout_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_116_, v_timeout_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object* v_t_120_, lean_object* v_shutdown_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_120_, v_shutdown_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object* v_00_u03b2_123_, lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_shutdown_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_125_, v_shutdown_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object* v_t_129_, lean_object* v_close_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_129_, v_close_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object* v_00_u03b2_132_, lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_close_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_134_, v_close_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object* v_x_146_){
_start:
{
if (lean_obj_tag(v_x_146_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_158_; 
v_a_150_ = lean_ctor_get(v_x_146_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_146_);
if (v_isSharedCheck_158_ == 0)
{
v___x_152_ = v_x_146_;
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v_x_146_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_157_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; 
v_a_159_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_a_159_);
lean_dec_ref_known(v_x_146_, 1);
if (lean_obj_tag(v_a_159_) == 1)
{
lean_object* v_val_160_; 
v_val_160_ = lean_ctor_get(v_a_159_, 0);
lean_inc(v_val_160_);
lean_dec_ref_known(v_a_159_, 1);
if (lean_obj_tag(v_val_160_) == 0)
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_161_;
}
else
{
lean_dec(v_val_160_);
goto v___jp_148_;
}
}
else
{
lean_dec(v_a_159_);
goto v___jp_148_;
}
}
v___jp_148_:
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1));
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object* v_x_162_, lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(v_x_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object* v_x_169_){
_start:
{
if (lean_obj_tag(v_x_169_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_179_; 
v_a_171_ = lean_ctor_get(v_x_169_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_179_ == 0)
{
v___x_173_ = v_x_169_;
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v_x_169_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_178_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
return v___x_177_;
}
}
}
else
{
lean_object* v___x_180_; 
lean_dec_ref_known(v_x_169_, 1);
v___x_180_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1));
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object* v_x_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(v_x_181_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object* v_inst_184_, lean_object* v_handler_185_, lean_object* v___f_186_, lean_object* v_x_187_){
_start:
{
if (lean_obj_tag(v_x_187_) == 0)
{
lean_object* v_a_189_; lean_object* v_onFailure_190_; lean_object* v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_a_189_ = lean_ctor_get(v_x_187_, 0);
lean_inc(v_a_189_);
lean_dec_ref_known(v_x_187_, 1);
v_onFailure_190_ = lean_ctor_get(v_inst_184_, 2);
lean_inc_ref(v_onFailure_190_);
lean_dec_ref(v_inst_184_);
v___x_191_ = lean_unsigned_to_nat(0u);
v___x_192_ = 0;
v___x_193_ = lean_apply_3(v_onFailure_190_, v_handler_185_, v_a_189_, lean_box(0));
v___x_194_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_191_, v___x_192_, v___x_193_, v___f_186_);
return v___x_194_;
}
else
{
lean_object* v___x_195_; 
lean_dec_ref(v___f_186_);
lean_dec(v_handler_185_);
lean_dec_ref(v_inst_184_);
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v_x_187_);
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object* v_inst_196_, lean_object* v_handler_197_, lean_object* v___f_198_, lean_object* v_x_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(v_inst_196_, v_handler_197_, v___f_198_, v_x_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object* v_x_202_){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_204_, 0, v_x_202_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object* v_x_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(v_x_207_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t v_x_210_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_212_, 0, v_x_210_);
v___x_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object* v_x_215_, lean_object* v___y_216_){
_start:
{
uint8_t v_x_3730__boxed_217_; lean_object* v_res_218_; 
v_x_3730__boxed_217_ = lean_unbox(v_x_215_);
v_res_218_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(v_x_3730__boxed_217_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object* v_x_219_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v_x_219_);
v___x_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object* v_x_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(v_x_224_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object* v_x_227_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v_x_227_);
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object* v_x_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(v_x_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object* v_x_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object* v_x_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(v_x_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object* v_x_241_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1));
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object* v_x_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(v_x_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object* v___f_247_, lean_object* v_response_248_, lean_object* v___x_249_, lean_object* v___f_250_, lean_object* v_requestBody_251_, lean_object* v___f_252_, lean_object* v_responseBody_253_, lean_object* v_inst_254_, lean_object* v___f_255_, lean_object* v_____r_256_, lean_object* v_selectables_257_){
_start:
{
lean_object* v_selectables_260_; lean_object* v_selectables_266_; lean_object* v_selectables_272_; 
if (lean_obj_tag(v_responseBody_253_) == 1)
{
lean_object* v_val_277_; lean_object* v_recvSelector_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_selectables_281_; 
v_val_277_ = lean_ctor_get(v_responseBody_253_, 0);
lean_inc(v_val_277_);
lean_dec_ref_known(v_responseBody_253_, 1);
v_recvSelector_278_ = lean_ctor_get(v_inst_254_, 3);
lean_inc_ref(v_recvSelector_278_);
lean_dec_ref(v_inst_254_);
v___x_279_ = lean_apply_1(v_recvSelector_278_, v_val_277_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___f_255_);
v_selectables_281_ = lean_array_push(v_selectables_257_, v___x_280_);
v_selectables_272_ = v_selectables_281_;
goto v___jp_271_;
}
else
{
lean_dec_ref(v___f_255_);
lean_dec_ref(v_inst_254_);
lean_dec(v_responseBody_253_);
v_selectables_272_ = v_selectables_257_;
goto v___jp_271_;
}
v___jp_259_:
{
lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = 0;
v___x_263_ = l_Std_Async_Selectable_one___redArg(v_selectables_260_);
v___x_264_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_261_, v___x_262_, v___x_263_, v___f_247_);
return v___x_264_;
}
v___jp_265_:
{
if (lean_obj_tag(v_response_248_) == 1)
{
lean_object* v_val_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v_selectables_270_; 
v_val_267_ = lean_ctor_get(v_response_248_, 0);
lean_inc(v_val_267_);
lean_dec_ref_known(v_response_248_, 1);
v___x_268_ = l_Std_Channel_recvSelector___redArg(v___x_249_, v_val_267_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___f_250_);
v_selectables_270_ = lean_array_push(v_selectables_266_, v___x_269_);
v_selectables_260_ = v_selectables_270_;
goto v___jp_259_;
}
else
{
lean_dec_ref(v___f_250_);
lean_dec_ref(v___x_249_);
lean_dec(v_response_248_);
v_selectables_260_ = v_selectables_266_;
goto v___jp_259_;
}
}
v___jp_271_:
{
if (lean_obj_tag(v_requestBody_251_) == 1)
{
lean_object* v_val_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_selectables_276_; 
v_val_273_ = lean_ctor_get(v_requestBody_251_, 0);
lean_inc(v_val_273_);
lean_dec_ref_known(v_requestBody_251_, 1);
v___x_274_ = l_Std_Http_Body_Stream_interestSelector(v_val_273_);
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___f_252_);
v_selectables_276_ = lean_array_push(v_selectables_272_, v___x_275_);
v_selectables_266_ = v_selectables_276_;
goto v___jp_265_;
}
else
{
lean_dec_ref(v___f_252_);
lean_dec(v_requestBody_251_);
v_selectables_266_ = v_selectables_272_;
goto v___jp_265_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object* v___f_282_, lean_object* v_response_283_, lean_object* v___x_284_, lean_object* v___f_285_, lean_object* v_requestBody_286_, lean_object* v___f_287_, lean_object* v_responseBody_288_, lean_object* v_inst_289_, lean_object* v___f_290_, lean_object* v_____r_291_, lean_object* v_selectables_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_282_, v_response_283_, v___x_284_, v___f_285_, v_requestBody_286_, v___f_287_, v_responseBody_288_, v_inst_289_, v___f_290_, v_____r_291_, v_selectables_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object* v_token_295_, lean_object* v___f_296_, lean_object* v_x_297_){
_start:
{
lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = 0;
v___x_301_ = l_Std_CancellationToken_getCancellationReason(v_token_295_);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
v___x_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
v___x_304_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_299_, v___x_300_, v___x_303_, v___f_296_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object* v_token_305_, lean_object* v___f_306_, lean_object* v_x_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(v_token_305_, v___f_306_, v_x_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object* v___f_310_, lean_object* v_selectables_311_, lean_object* v___f_312_, lean_object* v_x_313_){
_start:
{
if (lean_obj_tag(v_x_313_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_323_; 
lean_dec_ref(v___f_312_);
lean_dec_ref(v_selectables_311_);
lean_dec_ref(v___f_310_);
v_a_315_ = lean_ctor_get(v_x_313_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v_x_313_);
if (v_isSharedCheck_323_ == 0)
{
v___x_317_ = v_x_313_;
v_isShared_318_ = v_isSharedCheck_323_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v_x_313_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_323_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_322_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; 
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_a_324_ = lean_ctor_get(v_x_313_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v_x_313_, 1);
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v_a_324_);
lean_ctor_set(v___x_325_, 1, v___f_310_);
v___x_326_ = lean_array_push(v_selectables_311_, v___x_325_);
v___x_327_ = lean_box(0);
v___x_328_ = lean_apply_3(v___f_312_, v___x_327_, v___x_326_, lean_box(0));
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object* v___f_329_, lean_object* v_selectables_330_, lean_object* v___f_331_, lean_object* v_x_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(v___f_329_, v_selectables_330_, v___f_331_, v_x_332_);
return v_res_334_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(1000000000u);
v___x_336_ = lean_nat_to_int(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(1000u);
v___x_338_ = lean_nat_to_int(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_unsigned_to_nat(1000000u);
v___x_340_ = lean_nat_to_int(v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object* v_val_341_, lean_object* v___f_342_, lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v___f_342_);
v_a_345_ = lean_ctor_get(v_x_343_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_353_ == 0)
{
v___x_347_ = v_x_343_;
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v_x_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_352_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
}
else
{
lean_object* v_a_354_; lean_object* v_second_355_; lean_object* v_nano_356_; lean_object* v_second_357_; lean_object* v_nano_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v_nanos_363_; lean_object* v___x_364_; lean_object* v_nanos_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v_second_368_; lean_object* v_nano_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v_millis_374_; lean_object* v___x_375_; uint8_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_a_354_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v_x_343_, 1);
v_second_355_ = lean_ctor_get(v_a_354_, 0);
lean_inc(v_second_355_);
v_nano_356_ = lean_ctor_get(v_a_354_, 1);
lean_inc(v_nano_356_);
lean_dec(v_a_354_);
v_second_357_ = lean_ctor_get(v_val_341_, 0);
v_nano_358_ = lean_ctor_get(v_val_341_, 1);
v___x_359_ = lean_int_neg(v_second_355_);
lean_dec(v_second_355_);
v___x_360_ = lean_int_neg(v_nano_356_);
lean_dec(v_nano_356_);
v___x_361_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_362_ = lean_int_mul(v_second_357_, v___x_361_);
v_nanos_363_ = lean_int_add(v___x_362_, v_nano_358_);
lean_dec(v___x_362_);
v___x_364_ = lean_int_mul(v___x_359_, v___x_361_);
lean_dec(v___x_359_);
v_nanos_365_ = lean_int_add(v___x_364_, v___x_360_);
lean_dec(v___x_360_);
lean_dec(v___x_364_);
v___x_366_ = lean_int_add(v_nanos_363_, v_nanos_365_);
lean_dec(v_nanos_365_);
lean_dec(v_nanos_363_);
v___x_367_ = l_Std_Time_Duration_ofNanoseconds(v___x_366_);
lean_dec(v___x_366_);
v_second_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_second_368_);
v_nano_369_ = lean_ctor_get(v___x_367_, 1);
lean_inc(v_nano_369_);
lean_dec_ref(v___x_367_);
v___x_370_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1);
v___x_371_ = lean_int_mul(v_second_368_, v___x_370_);
lean_dec(v_second_368_);
v___x_372_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_373_ = lean_int_ediv(v_nano_369_, v___x_372_);
lean_dec(v_nano_369_);
v_millis_374_ = lean_int_add(v___x_371_, v___x_373_);
lean_dec(v___x_373_);
lean_dec(v___x_371_);
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = 0;
v___x_377_ = l_Std_Async_Selector_sleep(v_millis_374_);
lean_dec(v_millis_374_);
v___x_378_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_375_, v___x_376_, v___x_377_, v___f_342_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object* v_val_379_, lean_object* v___f_380_, lean_object* v_x_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(v_val_379_, v___f_380_, v_x_381_);
lean_dec_ref(v_val_379_);
return v_res_383_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = l_instInhabitedError;
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v_config_397_, lean_object* v_handler_398_, lean_object* v_sources_399_){
_start:
{
uint8_t v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v_val_405_; lean_object* v_socket_408_; lean_object* v_expect_409_; lean_object* v_response_410_; lean_object* v_responseBody_411_; lean_object* v_requestBody_412_; lean_object* v_timeout_413_; lean_object* v_keepAliveTimeout_414_; lean_object* v_headerTimeout_415_; lean_object* v_connectionContext_416_; lean_object* v___f_417_; lean_object* v___f_418_; lean_object* v___f_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___f_422_; lean_object* v___f_423_; lean_object* v___f_424_; lean_object* v___f_425_; lean_object* v___x_426_; lean_object* v___f_427_; lean_object* v___y_429_; lean_object* v___y_479_; 
v_socket_408_ = lean_ctor_get(v_sources_399_, 0);
lean_inc(v_socket_408_);
v_expect_409_ = lean_ctor_get(v_sources_399_, 1);
lean_inc(v_expect_409_);
v_response_410_ = lean_ctor_get(v_sources_399_, 2);
lean_inc_n(v_response_410_, 2);
v_responseBody_411_ = lean_ctor_get(v_sources_399_, 3);
lean_inc_n(v_responseBody_411_, 2);
v_requestBody_412_ = lean_ctor_get(v_sources_399_, 4);
lean_inc_n(v_requestBody_412_, 2);
v_timeout_413_ = lean_ctor_get(v_sources_399_, 5);
lean_inc(v_timeout_413_);
v_keepAliveTimeout_414_ = lean_ctor_get(v_sources_399_, 6);
lean_inc(v_keepAliveTimeout_414_);
v_headerTimeout_415_ = lean_ctor_get(v_sources_399_, 7);
lean_inc(v_headerTimeout_415_);
v_connectionContext_416_ = lean_ctor_get(v_sources_399_, 8);
lean_inc_ref(v_connectionContext_416_);
lean_dec_ref(v_sources_399_);
v___f_417_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0));
v___f_418_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1));
v___f_419_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_419_, 0, v_inst_395_);
lean_closure_set(v___f_419_, 1, v_handler_398_);
lean_closure_set(v___f_419_, 2, v___f_418_);
v___f_420_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2));
v___f_421_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3));
v___f_422_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4));
v___f_423_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5));
v___f_424_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6));
v___f_425_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7));
v___x_426_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8);
lean_inc_ref(v_inst_396_);
lean_inc_ref(v___f_419_);
v___f_427_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed), 12, 9);
lean_closure_set(v___f_427_, 0, v___f_419_);
lean_closure_set(v___f_427_, 1, v_response_410_);
lean_closure_set(v___f_427_, 2, v___x_426_);
lean_closure_set(v___f_427_, 3, v___f_420_);
lean_closure_set(v___f_427_, 4, v_requestBody_412_);
lean_closure_set(v___f_427_, 5, v___f_421_);
lean_closure_set(v___f_427_, 6, v_responseBody_411_);
lean_closure_set(v___f_427_, 7, v_inst_396_);
lean_closure_set(v___f_427_, 8, v___f_422_);
if (lean_obj_tag(v_expect_409_) == 0)
{
lean_object* v_defaultPayloadBytes_482_; 
v_defaultPayloadBytes_482_ = lean_ctor_get(v_config_397_, 8);
lean_inc(v_defaultPayloadBytes_482_);
v___y_479_ = v_defaultPayloadBytes_482_;
goto v___jp_478_;
}
else
{
lean_object* v_val_483_; 
v_val_483_ = lean_ctor_get(v_expect_409_, 0);
lean_inc(v_val_483_);
lean_dec_ref_known(v_expect_409_, 1);
v___y_479_ = v_val_483_;
goto v___jp_478_;
}
v___jp_401_:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v_val_405_);
v___x_407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_404_, v___y_402_, v___x_406_, v___y_403_);
return v___x_407_;
}
v___jp_428_:
{
lean_object* v_token_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_selectables_436_; 
v_token_430_ = lean_ctor_get(v_connectionContext_416_, 1);
lean_inc_ref_n(v_token_430_, 2);
lean_dec_ref(v_connectionContext_416_);
v___f_431_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed), 4, 2);
lean_closure_set(v___f_431_, 0, v_token_430_);
lean_closure_set(v___f_431_, 1, v___f_417_);
v___x_432_ = l_Std_CancellationToken_selector(v_token_430_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___f_431_);
v___x_434_ = lean_unsigned_to_nat(1u);
v___x_435_ = lean_mk_empty_array_with_capacity(v___x_434_);
v_selectables_436_ = lean_array_push(v___x_435_, v___x_433_);
if (lean_obj_tag(v_socket_408_) == 1)
{
lean_object* v_val_437_; lean_object* v_recvSelector_438_; uint64_t v_expectedBytes_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v_selectables_443_; 
lean_dec_ref(v___f_419_);
lean_dec(v_requestBody_412_);
lean_dec(v_responseBody_411_);
lean_dec(v_response_410_);
lean_dec_ref(v_inst_396_);
v_val_437_ = lean_ctor_get(v_socket_408_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v_socket_408_, 1);
v_recvSelector_438_ = lean_ctor_get(v_inst_394_, 2);
lean_inc_ref(v_recvSelector_438_);
lean_dec_ref(v_inst_394_);
v_expectedBytes_439_ = lean_uint64_of_nat(v___y_429_);
lean_dec(v___y_429_);
v___x_440_ = lean_box_uint64(v_expectedBytes_439_);
v___x_441_ = lean_apply_2(v_recvSelector_438_, v_val_437_, v___x_440_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___f_423_);
v_selectables_443_ = lean_array_push(v_selectables_436_, v___x_442_);
if (lean_obj_tag(v_keepAliveTimeout_414_) == 0)
{
if (lean_obj_tag(v_headerTimeout_415_) == 1)
{
lean_object* v_val_444_; lean_object* v___f_445_; lean_object* v___f_446_; lean_object* v___x_447_; uint8_t v___x_448_; lean_object* v___x_449_; 
lean_dec(v_timeout_413_);
v_val_444_ = lean_ctor_get(v_headerTimeout_415_, 0);
lean_inc(v_val_444_);
lean_dec_ref_known(v_headerTimeout_415_, 1);
v___f_445_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_445_, 0, v___f_424_);
lean_closure_set(v___f_445_, 1, v_selectables_443_);
lean_closure_set(v___f_445_, 2, v___f_427_);
v___f_446_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed), 4, 2);
lean_closure_set(v___f_446_, 0, v_val_444_);
lean_closure_set(v___f_446_, 1, v___f_445_);
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = 0;
v___x_449_ = lean_get_current_time();
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
lean_ctor_set_tag(v___x_452_, 1);
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
v___y_402_ = v___x_448_;
v___y_403_ = v___f_446_;
v___y_404_ = v___x_447_;
v_val_405_ = v___x_455_;
goto v___jp_401_;
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_a_458_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_449_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_449_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 0);
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
v___y_402_ = v___x_448_;
v___y_403_ = v___f_446_;
v___y_404_ = v___x_447_;
v_val_405_ = v___x_463_;
goto v___jp_401_;
}
}
}
}
else
{
lean_object* v___f_466_; lean_object* v___x_467_; uint8_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
lean_dec(v_headerTimeout_415_);
v___f_466_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_466_, 0, v___f_424_);
lean_closure_set(v___f_466_, 1, v_selectables_443_);
lean_closure_set(v___f_466_, 2, v___f_427_);
v___x_467_ = lean_unsigned_to_nat(0u);
v___x_468_ = 0;
v___x_469_ = l_Std_Async_Selector_sleep(v_timeout_413_);
lean_dec(v_timeout_413_);
v___x_470_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_467_, v___x_468_, v___x_469_, v___f_466_);
return v___x_470_;
}
}
else
{
lean_object* v___f_471_; uint8_t v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec_ref_known(v_keepAliveTimeout_414_, 1);
lean_dec(v_headerTimeout_415_);
v___f_471_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_471_, 0, v___f_425_);
lean_closure_set(v___f_471_, 1, v_selectables_443_);
lean_closure_set(v___f_471_, 2, v___f_427_);
v___x_472_ = 0;
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = l_Std_Async_Selector_sleep(v_timeout_413_);
lean_dec(v_timeout_413_);
v___x_475_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_473_, v___x_472_, v___x_474_, v___f_471_);
return v___x_475_;
}
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; 
lean_dec(v___y_429_);
lean_dec_ref(v___f_427_);
lean_dec(v_headerTimeout_415_);
lean_dec(v_keepAliveTimeout_414_);
lean_dec(v_timeout_413_);
lean_dec(v_socket_408_);
lean_dec_ref(v_inst_394_);
v___x_476_ = lean_box(0);
v___x_477_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_419_, v_response_410_, v___x_426_, v___f_420_, v_requestBody_412_, v___f_421_, v_responseBody_411_, v_inst_396_, v___f_422_, v___x_476_, v_selectables_436_);
return v___x_477_;
}
}
v___jp_478_:
{
lean_object* v_maximumRecvSize_480_; uint8_t v___x_481_; 
v_maximumRecvSize_480_ = lean_ctor_get(v_config_397_, 7);
lean_inc(v_maximumRecvSize_480_);
lean_dec_ref(v_config_397_);
v___x_481_ = lean_nat_dec_le(v___y_479_, v_maximumRecvSize_480_);
if (v___x_481_ == 0)
{
lean_dec(v___y_479_);
v___y_429_ = v_maximumRecvSize_480_;
goto v___jp_428_;
}
else
{
lean_dec(v_maximumRecvSize_480_);
v___y_429_ = v___y_479_;
goto v___jp_428_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object* v_inst_484_, lean_object* v_inst_485_, lean_object* v_inst_486_, lean_object* v_config_487_, lean_object* v_handler_488_, lean_object* v_sources_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_484_, v_inst_485_, v_inst_486_, v_config_487_, v_handler_488_, v_sources_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object* v_00_u03b1_492_, lean_object* v_00_u03c3_493_, lean_object* v_00_u03b2_494_, lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_inst_497_, lean_object* v_config_498_, lean_object* v_handler_499_, lean_object* v_sources_500_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_495_, v_inst_496_, v_inst_497_, v_config_498_, v_handler_499_, v_sources_500_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object* v_00_u03b1_503_, lean_object* v_00_u03c3_504_, lean_object* v_00_u03b2_505_, lean_object* v_inst_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_config_509_, lean_object* v_handler_510_, lean_object* v_sources_511_, lean_object* v_a_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(v_00_u03b1_503_, v_00_u03c3_504_, v_00_u03b2_505_, v_inst_506_, v_inst_507_, v_inst_508_, v_config_509_, v_handler_510_, v_sources_511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object* v_machine_514_, lean_object* v_x_515_){
_start:
{
lean_object* v___y_518_; uint8_t v___y_519_; 
if (lean_obj_tag(v_x_515_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_532_; 
lean_dec_ref(v_machine_514_);
v_a_524_ = lean_ctor_get(v_x_515_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v_x_515_);
if (v_isSharedCheck_532_ == 0)
{
v___x_526_ = v_x_515_;
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v_x_515_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_531_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; 
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___y_535_; uint8_t v___x_541_; 
v_a_533_ = lean_ctor_get(v_x_515_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v_x_515_, 1);
v___x_541_ = lean_unbox(v_a_533_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_box(40);
v___y_535_ = v___x_542_;
goto v___jp_534_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_box(0);
v___y_535_ = v___x_543_;
goto v___jp_534_;
}
v___jp_534_:
{
uint8_t v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = 0;
lean_inc(v___y_535_);
v___x_537_ = l_Std_Http_Protocol_H1_Machine_canContinue(v___x_536_, v_machine_514_, v___y_535_);
v___x_538_ = lean_unbox(v_a_533_);
lean_dec(v_a_533_);
if (v___x_538_ == 0)
{
uint8_t v___x_539_; 
v___x_539_ = 1;
v___y_518_ = v___x_537_;
v___y_519_ = v___x_539_;
goto v___jp_517_;
}
else
{
uint8_t v___x_540_; 
v___x_540_ = 0;
v___y_518_ = v___x_537_;
v___y_519_ = v___x_540_;
goto v___jp_517_;
}
}
}
v___jp_517_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_520_ = lean_box(v___y_519_);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v___y_518_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object* v_machine_544_, lean_object* v_x_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(v_machine_544_, v_x_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t v___y_548_){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = lean_box(v___y_548_);
v___x_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
uint8_t v___y_1377__boxed_555_; lean_object* v_res_556_; 
v___y_1377__boxed_555_ = lean_unbox(v___y_553_);
v_res_556_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(v___y_1377__boxed_555_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object* v_x_557_){
_start:
{
if (lean_obj_tag(v_x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_559_; 
v_a_558_ = lean_ctor_get(v_x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v_x_557_, 1);
v___x_559_ = lean_task_pure(v_a_558_);
return v___x_559_;
}
else
{
lean_object* v_a_560_; 
v_a_560_ = lean_ctor_get(v_x_557_, 0);
lean_inc_ref(v_a_560_);
lean_dec_ref_known(v_x_557_, 1);
return v_a_560_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object* v_a_561_, lean_object* v_x_562_){
_start:
{
if (lean_obj_tag(v_x_562_) == 0)
{
uint8_t v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec_ref_known(v_x_562_, 1);
v___x_564_ = 0;
v___x_565_ = lean_box(0);
v___x_566_ = lean_box(v___x_564_);
v___x_567_ = l_Std_Channel_send___redArg(v_a_561_, v___x_566_);
lean_dec_ref(v___x_567_);
return v___x_565_;
}
else
{
lean_object* v_a_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v_a_568_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v_x_562_, 1);
v___x_569_ = lean_box(0);
v___x_570_ = l_Std_Channel_send___redArg(v_a_561_, v_a_568_);
lean_dec_ref(v___x_570_);
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object* v_a_571_, lean_object* v_x_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(v_a_571_, v_x_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t v___x_575_, lean_object* v_x_576_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = lean_box(v___x_575_);
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
v___x_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object* v___x_581_, lean_object* v_x_582_, lean_object* v___y_583_){
_start:
{
uint8_t v___x_1421__boxed_584_; lean_object* v_res_585_; 
v___x_1421__boxed_584_ = lean_unbox(v___x_581_);
v_res_585_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(v___x_1421__boxed_584_, v_x_582_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object* v_connectionContext_586_, uint8_t v___x_587_, lean_object* v_a_588_, lean_object* v___f_589_, lean_object* v___f_590_, lean_object* v___x_591_, uint8_t v___x_592_, lean_object* v___f_593_, lean_object* v_x_594_){
_start:
{
if (lean_obj_tag(v_x_594_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_604_; 
lean_dec_ref(v___f_593_);
lean_dec(v___x_591_);
lean_dec_ref(v___f_590_);
lean_dec_ref(v___f_589_);
lean_dec_ref(v_a_588_);
lean_dec_ref(v_connectionContext_586_);
v_a_596_ = lean_ctor_get(v_x_594_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_604_ == 0)
{
v___x_598_ = v_x_594_;
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v_x_594_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_603_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_602_; 
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v_token_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_a_605_ = lean_ctor_get(v_x_594_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v_x_594_, 1);
v_token_606_ = lean_ctor_get(v_connectionContext_586_, 1);
lean_inc_ref(v_token_606_);
lean_dec_ref(v_connectionContext_586_);
v___x_607_ = lean_box(v___x_587_);
v___x_608_ = l_Std_Channel_recvSelector___redArg(v___x_607_, v_a_588_);
v___x_609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
lean_ctor_set(v___x_609_, 1, v___f_589_);
v___x_610_ = l_Std_CancellationToken_selector(v_token_606_);
lean_inc_ref(v___f_590_);
v___x_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
lean_ctor_set(v___x_611_, 1, v___f_590_);
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v_a_605_);
lean_ctor_set(v___x_612_, 1, v___f_590_);
v___x_613_ = lean_unsigned_to_nat(3u);
v___x_614_ = lean_mk_empty_array_with_capacity(v___x_613_);
v___x_615_ = lean_array_push(v___x_614_, v___x_609_);
v___x_616_ = lean_array_push(v___x_615_, v___x_611_);
v___x_617_ = lean_array_push(v___x_616_, v___x_612_);
v___x_618_ = l_Std_Async_Selectable_one___redArg(v___x_617_);
v___x_619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_591_, v___x_592_, v___x_618_, v___f_593_);
return v___x_619_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object* v_connectionContext_620_, lean_object* v___x_621_, lean_object* v_a_622_, lean_object* v___f_623_, lean_object* v___f_624_, lean_object* v___x_625_, lean_object* v___x_626_, lean_object* v___f_627_, lean_object* v_x_628_, lean_object* v___y_629_){
_start:
{
uint8_t v___x_1436__boxed_630_; uint8_t v___x_1441__boxed_631_; lean_object* v_res_632_; 
v___x_1436__boxed_630_ = lean_unbox(v___x_621_);
v___x_1441__boxed_631_ = lean_unbox(v___x_626_);
v_res_632_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(v_connectionContext_620_, v___x_1436__boxed_630_, v_a_622_, v___f_623_, v___f_624_, v___x_625_, v___x_1441__boxed_631_, v___f_627_, v_x_628_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object* v_config_633_, lean_object* v___x_634_, uint8_t v___x_635_, lean_object* v___f_636_, lean_object* v_x_637_){
_start:
{
if (lean_obj_tag(v_x_637_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_647_; 
lean_dec_ref(v___f_636_);
lean_dec(v___x_634_);
v_a_639_ = lean_ctor_get(v_x_637_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v_x_637_);
if (v_isSharedCheck_647_ == 0)
{
v___x_641_ = v_x_637_;
v_isShared_642_ = v_isSharedCheck_647_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v_x_637_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_647_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_645_; 
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
}
else
{
lean_object* v_lingeringTimeout_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
lean_dec_ref_known(v_x_637_, 1);
v_lingeringTimeout_648_ = lean_ctor_get(v_config_633_, 4);
v___x_649_ = l_Std_Async_Selector_sleep(v_lingeringTimeout_648_);
v___x_650_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_634_, v___x_635_, v___x_649_, v___f_636_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object* v_config_651_, lean_object* v___x_652_, lean_object* v___x_653_, lean_object* v___f_654_, lean_object* v_x_655_, lean_object* v___y_656_){
_start:
{
uint8_t v___x_1510__boxed_657_; lean_object* v_res_658_; 
v___x_1510__boxed_657_ = lean_unbox(v___x_653_);
v_res_658_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(v_config_651_, v___x_652_, v___x_1510__boxed_657_, v___f_654_, v_x_655_);
lean_dec_ref(v_config_651_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object* v_connectionContext_662_, uint8_t v___x_663_, lean_object* v_a_664_, lean_object* v___f_665_, lean_object* v___x_666_, lean_object* v___f_667_, lean_object* v_config_668_, lean_object* v___f_669_, lean_object* v_x_670_){
_start:
{
if (lean_obj_tag(v_x_670_) == 0)
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_680_; 
lean_dec_ref(v___f_669_);
lean_dec_ref(v_config_668_);
lean_dec_ref(v___f_667_);
lean_dec(v___x_666_);
lean_dec_ref(v___f_665_);
lean_dec_ref(v_a_664_);
lean_dec_ref(v_connectionContext_662_);
v_a_672_ = lean_ctor_get(v_x_670_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_680_ == 0)
{
v___x_674_ = v_x_670_;
v_isShared_675_ = v_isSharedCheck_680_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v_x_670_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_680_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_679_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; 
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_698_; 
v_a_681_ = lean_ctor_get(v_x_670_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_698_ == 0)
{
v___x_683_ = v_x_670_;
v_isShared_684_ = v_isSharedCheck_698_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v_x_670_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_698_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
uint8_t v___x_685_; lean_object* v___f_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___f_689_; lean_object* v___x_690_; lean_object* v___f_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_685_ = 0;
v___f_686_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0));
v___x_687_ = lean_box(v___x_663_);
v___x_688_ = lean_box(v___x_685_);
lean_inc_n(v___x_666_, 3);
v___f_689_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed), 10, 8);
lean_closure_set(v___f_689_, 0, v_connectionContext_662_);
lean_closure_set(v___f_689_, 1, v___x_687_);
lean_closure_set(v___f_689_, 2, v_a_664_);
lean_closure_set(v___f_689_, 3, v___f_665_);
lean_closure_set(v___f_689_, 4, v___f_686_);
lean_closure_set(v___f_689_, 5, v___x_666_);
lean_closure_set(v___f_689_, 6, v___x_688_);
lean_closure_set(v___f_689_, 7, v___f_667_);
v___x_690_ = lean_box(v___x_685_);
v___f_691_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_691_, 0, v_config_668_);
lean_closure_set(v___f_691_, 1, v___x_666_);
lean_closure_set(v___f_691_, 2, v___x_690_);
lean_closure_set(v___f_691_, 3, v___f_689_);
v___x_692_ = l_BaseIO_chainTask___redArg(v_a_681_, v___f_669_, v___x_666_, v___x_685_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 0, v___x_692_);
v___x_694_ = v___x_683_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_697_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
v___x_696_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_666_, v___x_685_, v___x_695_, v___f_691_);
return v___x_696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object* v_connectionContext_699_, lean_object* v___x_700_, lean_object* v_a_701_, lean_object* v___f_702_, lean_object* v___x_703_, lean_object* v___f_704_, lean_object* v_config_705_, lean_object* v___f_706_, lean_object* v_x_707_, lean_object* v___y_708_){
_start:
{
uint8_t v___x_1550__boxed_709_; lean_object* v_res_710_; 
v___x_1550__boxed_709_ = lean_unbox(v___x_700_);
v_res_710_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(v_connectionContext_699_, v___x_1550__boxed_709_, v_a_701_, v___f_702_, v___x_703_, v___f_704_, v_config_705_, v___f_706_, v_x_707_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object* v_inst_711_, lean_object* v_handler_712_, lean_object* v_head_713_, lean_object* v_connectionContext_714_, uint8_t v___x_715_, lean_object* v___f_716_, lean_object* v___f_717_, lean_object* v_config_718_, lean_object* v___f_719_, lean_object* v_x_720_){
_start:
{
if (lean_obj_tag(v_x_720_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_730_; 
lean_dec_ref(v___f_719_);
lean_dec_ref(v_config_718_);
lean_dec_ref(v___f_717_);
lean_dec_ref(v___f_716_);
lean_dec_ref(v_connectionContext_714_);
lean_dec_ref(v_head_713_);
lean_dec(v_handler_712_);
lean_dec_ref(v_inst_711_);
v_a_722_ = lean_ctor_get(v_x_720_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_730_ == 0)
{
v___x_724_ = v_x_720_;
v_isShared_725_ = v_isSharedCheck_730_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v_x_720_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_730_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_728_; 
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
return v___x_728_;
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_751_; 
v_a_731_ = lean_ctor_get(v_x_720_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_751_ == 0)
{
v___x_733_ = v_x_720_;
v_isShared_734_ = v_isSharedCheck_751_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v_x_720_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_751_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_onContinue_735_; lean_object* v___f_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___f_740_; uint8_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
v_onContinue_735_ = lean_ctor_get(v_inst_711_, 3);
lean_inc_ref(v_onContinue_735_);
lean_dec_ref(v_inst_711_);
lean_inc(v_a_731_);
v___f_736_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_736_, 0, v_a_731_);
v___x_737_ = lean_apply_2(v_onContinue_735_, v_handler_712_, v_head_713_);
v___x_738_ = lean_unsigned_to_nat(0u);
v___x_739_ = lean_box(v___x_715_);
v___f_740_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_740_, 0, v_connectionContext_714_);
lean_closure_set(v___f_740_, 1, v___x_739_);
lean_closure_set(v___f_740_, 2, v_a_731_);
lean_closure_set(v___f_740_, 3, v___f_716_);
lean_closure_set(v___f_740_, 4, v___x_738_);
lean_closure_set(v___f_740_, 5, v___f_717_);
lean_closure_set(v___f_740_, 6, v_config_718_);
lean_closure_set(v___f_740_, 7, v___f_736_);
v___x_741_ = 0;
v___x_742_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_742_, 0, lean_box(0));
lean_closure_set(v___x_742_, 1, v___x_737_);
v___x_743_ = lean_io_as_task(v___x_742_, v___x_738_);
v___x_744_ = 1;
v___x_745_ = lean_task_bind(v___x_743_, v___f_719_, v___x_738_, v___x_744_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_745_);
v___x_747_ = v___x_733_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_745_);
v___x_747_ = v_reuseFailAlloc_750_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
v___x_749_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_738_, v___x_741_, v___x_748_, v___f_740_);
return v___x_749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object* v_inst_752_, lean_object* v_handler_753_, lean_object* v_head_754_, lean_object* v_connectionContext_755_, lean_object* v___x_756_, lean_object* v___f_757_, lean_object* v___f_758_, lean_object* v_config_759_, lean_object* v___f_760_, lean_object* v_x_761_, lean_object* v___y_762_){
_start:
{
uint8_t v___x_1633__boxed_763_; lean_object* v_res_764_; 
v___x_1633__boxed_763_ = lean_unbox(v___x_756_);
v_res_764_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(v_inst_752_, v_handler_753_, v_head_754_, v_connectionContext_755_, v___x_1633__boxed_763_, v___f_757_, v___f_758_, v_config_759_, v___f_760_, v_x_761_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object* v_inst_767_, lean_object* v_handler_768_, lean_object* v_machine_769_, lean_object* v_head_770_, lean_object* v_config_771_, lean_object* v_connectionContext_772_){
_start:
{
lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___f_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___f_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___f_774_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_774_, 0, v_machine_769_);
v___f_775_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0));
v___f_776_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1));
v___x_777_ = 0;
v___x_778_ = lean_box(v___x_777_);
v___f_779_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_779_, 0, v_inst_767_);
lean_closure_set(v___f_779_, 1, v_handler_768_);
lean_closure_set(v___f_779_, 2, v_head_770_);
lean_closure_set(v___f_779_, 3, v_connectionContext_772_);
lean_closure_set(v___f_779_, 4, v___x_778_);
lean_closure_set(v___f_779_, 5, v___f_775_);
lean_closure_set(v___f_779_, 6, v___f_774_);
lean_closure_set(v___f_779_, 7, v_config_771_);
lean_closure_set(v___f_779_, 8, v___f_776_);
v___x_780_ = lean_box(0);
v___x_781_ = lean_unsigned_to_nat(0u);
v___x_782_ = l_Std_CloseableChannel_new___redArg(v___x_780_);
v___x_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
v___x_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
v___x_785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_781_, v___x_777_, v___x_784_, v___f_779_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object* v_inst_786_, lean_object* v_handler_787_, lean_object* v_machine_788_, lean_object* v_head_789_, lean_object* v_config_790_, lean_object* v_connectionContext_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_786_, v_handler_787_, v_machine_788_, v_head_789_, v_config_790_, v_connectionContext_791_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object* v_00_u03c3_794_, lean_object* v_inst_795_, lean_object* v_handler_796_, lean_object* v_machine_797_, lean_object* v_head_798_, lean_object* v_config_799_, lean_object* v_connectionContext_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_795_, v_handler_796_, v_machine_797_, v_head_798_, v_config_799_, v_connectionContext_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object* v_00_u03c3_803_, lean_object* v_inst_804_, lean_object* v_handler_805_, lean_object* v_machine_806_, lean_object* v_head_807_, lean_object* v_config_808_, lean_object* v_connectionContext_809_, lean_object* v_a_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(v_00_u03c3_803_, v_inst_804_, v_handler_805_, v_machine_806_, v_head_807_, v_config_808_, v_connectionContext_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object* v_a_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = lean_nat_to_int(v_a_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object* v_a_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Rat_ofInt(v_a_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object* v_tz_816_, lean_object* v_a_817_, lean_object* v___x_818_, lean_object* v_x_819_){
_start:
{
lean_object* v_offset_820_; lean_object* v_second_821_; lean_object* v_nano_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v_nanos_826_; lean_object* v___x_827_; lean_object* v_nanos_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v_offset_820_ = lean_ctor_get(v_tz_816_, 0);
v_second_821_ = lean_ctor_get(v_a_817_, 0);
v_nano_822_ = lean_ctor_get(v_a_817_, 1);
v___x_823_ = lean_nat_to_int(v___x_818_);
v___x_824_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_825_ = lean_int_mul(v_second_821_, v___x_824_);
v_nanos_826_ = lean_int_add(v___x_825_, v_nano_822_);
lean_dec(v___x_825_);
v___x_827_ = lean_int_mul(v_offset_820_, v___x_824_);
v_nanos_828_ = lean_int_add(v___x_827_, v___x_823_);
lean_dec(v___x_823_);
lean_dec(v___x_827_);
v___x_829_ = lean_int_add(v_nanos_826_, v_nanos_828_);
lean_dec(v_nanos_828_);
lean_dec(v_nanos_826_);
v___x_830_ = l_Std_Time_Duration_ofNanoseconds(v___x_829_);
lean_dec(v___x_829_);
v___x_831_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object* v_tz_832_, lean_object* v_a_833_, lean_object* v___x_834_, lean_object* v_x_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(v_tz_832_, v_a_833_, v___x_834_, v_x_835_);
lean_dec_ref(v_a_833_);
lean_dec_ref(v_tz_832_);
return v_res_836_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(lean_object* v_a_837_, lean_object* v_x_838_){
_start:
{
if (lean_obj_tag(v_x_838_) == 0)
{
uint8_t v___x_839_; 
v___x_839_ = 0;
return v___x_839_;
}
else
{
lean_object* v_key_840_; lean_object* v_tail_841_; uint8_t v___x_842_; 
v_key_840_ = lean_ctor_get(v_x_838_, 0);
v_tail_841_ = lean_ctor_get(v_x_838_, 2);
v___x_842_ = lean_string_dec_eq(v_key_840_, v_a_837_);
if (v___x_842_ == 0)
{
v_x_838_ = v_tail_841_;
goto _start;
}
else
{
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg___boxed(lean_object* v_a_844_, lean_object* v_x_845_){
_start:
{
uint8_t v_res_846_; lean_object* v_r_847_; 
v_res_846_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(v_a_844_, v_x_845_);
lean_dec(v_x_845_);
lean_dec_ref(v_a_844_);
v_r_847_ = lean_box(v_res_846_);
return v_r_847_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5_spec__7___redArg(lean_object* v_x_848_, lean_object* v_x_849_){
_start:
{
if (lean_obj_tag(v_x_849_) == 0)
{
return v_x_848_;
}
else
{
lean_object* v_key_850_; lean_object* v_value_851_; lean_object* v_tail_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_875_; 
v_key_850_ = lean_ctor_get(v_x_849_, 0);
v_value_851_ = lean_ctor_get(v_x_849_, 1);
v_tail_852_ = lean_ctor_get(v_x_849_, 2);
v_isSharedCheck_875_ = !lean_is_exclusive(v_x_849_);
if (v_isSharedCheck_875_ == 0)
{
v___x_854_ = v_x_849_;
v_isShared_855_ = v_isSharedCheck_875_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_tail_852_);
lean_inc(v_value_851_);
lean_inc(v_key_850_);
lean_dec(v_x_849_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_875_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_856_; uint64_t v___x_857_; uint64_t v___x_858_; uint64_t v___x_859_; uint64_t v_fold_860_; uint64_t v___x_861_; uint64_t v___x_862_; uint64_t v___x_863_; size_t v___x_864_; size_t v___x_865_; size_t v___x_866_; size_t v___x_867_; size_t v___x_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_856_ = lean_array_get_size(v_x_848_);
v___x_857_ = lean_string_hash(v_key_850_);
v___x_858_ = 32ULL;
v___x_859_ = lean_uint64_shift_right(v___x_857_, v___x_858_);
v_fold_860_ = lean_uint64_xor(v___x_857_, v___x_859_);
v___x_861_ = 16ULL;
v___x_862_ = lean_uint64_shift_right(v_fold_860_, v___x_861_);
v___x_863_ = lean_uint64_xor(v_fold_860_, v___x_862_);
v___x_864_ = lean_uint64_to_usize(v___x_863_);
v___x_865_ = lean_usize_of_nat(v___x_856_);
v___x_866_ = ((size_t)1ULL);
v___x_867_ = lean_usize_sub(v___x_865_, v___x_866_);
v___x_868_ = lean_usize_land(v___x_864_, v___x_867_);
v___x_869_ = lean_array_uget_borrowed(v_x_848_, v___x_868_);
lean_inc(v___x_869_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 2, v___x_869_);
v___x_871_ = v___x_854_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_key_850_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_value_851_);
lean_ctor_set(v_reuseFailAlloc_874_, 2, v___x_869_);
v___x_871_ = v_reuseFailAlloc_874_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; 
v___x_872_ = lean_array_uset(v_x_848_, v___x_868_, v___x_871_);
v_x_848_ = v___x_872_;
v_x_849_ = v_tail_852_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5___redArg(lean_object* v_i_876_, lean_object* v_source_877_, lean_object* v_target_878_){
_start:
{
lean_object* v___x_879_; uint8_t v___x_880_; 
v___x_879_ = lean_array_get_size(v_source_877_);
v___x_880_ = lean_nat_dec_lt(v_i_876_, v___x_879_);
if (v___x_880_ == 0)
{
lean_dec_ref(v_source_877_);
lean_dec(v_i_876_);
return v_target_878_;
}
else
{
lean_object* v_es_881_; lean_object* v___x_882_; lean_object* v_source_883_; lean_object* v_target_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_es_881_ = lean_array_fget(v_source_877_, v_i_876_);
v___x_882_ = lean_box(0);
v_source_883_ = lean_array_fset(v_source_877_, v_i_876_, v___x_882_);
v_target_884_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5_spec__7___redArg(v_target_878_, v_es_881_);
v___x_885_ = lean_unsigned_to_nat(1u);
v___x_886_ = lean_nat_add(v_i_876_, v___x_885_);
lean_dec(v_i_876_);
v_i_876_ = v___x_886_;
v_source_877_ = v_source_883_;
v_target_878_ = v_target_884_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4___redArg(lean_object* v_data_888_){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v_nbuckets_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_889_ = lean_array_get_size(v_data_888_);
v___x_890_ = lean_unsigned_to_nat(2u);
v_nbuckets_891_ = lean_nat_mul(v___x_889_, v___x_890_);
v___x_892_ = lean_unsigned_to_nat(0u);
v___x_893_ = lean_box(0);
v___x_894_ = lean_mk_array(v_nbuckets_891_, v___x_893_);
v___x_895_ = lean_array_propagate_mark(v_data_888_, v___x_894_);
v___x_896_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5___redArg(v___x_892_, v_data_888_, v___x_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5___lam__0(lean_object* v_i_897_, lean_object* v_x_898_){
_start:
{
if (lean_obj_tag(v_x_898_) == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_899_ = lean_unsigned_to_nat(1u);
v___x_900_ = lean_mk_empty_array_with_capacity(v___x_899_);
v___x_901_ = lean_array_push(v___x_900_, v_i_897_);
v___x_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
return v___x_902_;
}
else
{
lean_object* v_val_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_911_; 
v_val_903_ = lean_ctor_get(v_x_898_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v_x_898_);
if (v_isSharedCheck_911_ == 0)
{
v___x_905_ = v_x_898_;
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_val_903_);
lean_dec(v_x_898_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = lean_array_push(v_val_903_, v_i_897_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_907_);
v___x_909_ = v___x_905_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5(lean_object* v_i_912_, lean_object* v_a_913_, lean_object* v_x_914_){
_start:
{
if (lean_obj_tag(v_x_914_) == 0)
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v_val_917_; lean_object* v___x_918_; 
v___x_915_ = lean_box(0);
v___x_916_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5___lam__0(v_i_912_, v___x_915_);
v_val_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_val_917_);
lean_dec(v___x_916_);
v___x_918_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_918_, 0, v_a_913_);
lean_ctor_set(v___x_918_, 1, v_val_917_);
lean_ctor_set(v___x_918_, 2, v_x_914_);
return v___x_918_;
}
else
{
lean_object* v_key_919_; lean_object* v_value_920_; lean_object* v_tail_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_936_; 
v_key_919_ = lean_ctor_get(v_x_914_, 0);
v_value_920_ = lean_ctor_get(v_x_914_, 1);
v_tail_921_ = lean_ctor_get(v_x_914_, 2);
v_isSharedCheck_936_ = !lean_is_exclusive(v_x_914_);
if (v_isSharedCheck_936_ == 0)
{
v___x_923_ = v_x_914_;
v_isShared_924_ = v_isSharedCheck_936_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_tail_921_);
lean_inc(v_value_920_);
lean_inc(v_key_919_);
lean_dec(v_x_914_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_936_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
uint8_t v___x_925_; 
v___x_925_ = lean_string_dec_eq(v_key_919_, v_a_913_);
if (v___x_925_ == 0)
{
lean_object* v_tail_926_; lean_object* v___x_928_; 
v_tail_926_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5(v_i_912_, v_a_913_, v_tail_921_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 2, v_tail_926_);
v___x_928_ = v___x_923_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_key_919_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_value_920_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_tail_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
else
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_val_932_; lean_object* v___x_934_; 
lean_dec(v_key_919_);
v___x_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_930_, 0, v_value_920_);
v___x_931_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5___lam__0(v_i_912_, v___x_930_);
v_val_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_val_932_);
lean_dec(v___x_931_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 1, v_val_932_);
lean_ctor_set(v___x_923_, 0, v_a_913_);
v___x_934_ = v___x_923_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_913_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_val_932_);
lean_ctor_set(v_reuseFailAlloc_935_, 2, v_tail_921_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(lean_object* v_i_937_, lean_object* v_m_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_size_940_; lean_object* v_buckets_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_991_; 
v_size_940_ = lean_ctor_get(v_m_938_, 0);
v_buckets_941_ = lean_ctor_get(v_m_938_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v_m_938_);
if (v_isSharedCheck_991_ == 0)
{
v___x_943_ = v_m_938_;
v_isShared_944_ = v_isSharedCheck_991_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_buckets_941_);
lean_inc(v_size_940_);
lean_dec(v_m_938_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_991_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; uint64_t v___x_946_; uint64_t v___x_947_; uint64_t v___x_948_; uint64_t v_fold_949_; uint64_t v___x_950_; uint64_t v___x_951_; uint64_t v___x_952_; size_t v___x_953_; size_t v___x_954_; size_t v___x_955_; size_t v___x_956_; size_t v___x_957_; lean_object* v_bkt_958_; uint8_t v___x_959_; 
v___x_945_ = lean_array_get_size(v_buckets_941_);
v___x_946_ = lean_string_hash(v_a_939_);
v___x_947_ = 32ULL;
v___x_948_ = lean_uint64_shift_right(v___x_946_, v___x_947_);
v_fold_949_ = lean_uint64_xor(v___x_946_, v___x_948_);
v___x_950_ = 16ULL;
v___x_951_ = lean_uint64_shift_right(v_fold_949_, v___x_950_);
v___x_952_ = lean_uint64_xor(v_fold_949_, v___x_951_);
v___x_953_ = lean_uint64_to_usize(v___x_952_);
v___x_954_ = lean_usize_of_nat(v___x_945_);
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_sub(v___x_954_, v___x_955_);
v___x_957_ = lean_usize_land(v___x_953_, v___x_956_);
v_bkt_958_ = lean_array_uget_borrowed(v_buckets_941_, v___x_957_);
v___x_959_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(v_a_939_, v_bkt_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v_size_x27_963_; lean_object* v___x_964_; lean_object* v_buckets_x27_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_960_ = lean_unsigned_to_nat(1u);
v___x_961_ = lean_mk_empty_array_with_capacity(v___x_960_);
v___x_962_ = lean_array_push(v___x_961_, v_i_937_);
v_size_x27_963_ = lean_nat_add(v_size_940_, v___x_960_);
lean_dec(v_size_940_);
lean_inc(v_bkt_958_);
v___x_964_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_964_, 0, v_a_939_);
lean_ctor_set(v___x_964_, 1, v___x_962_);
lean_ctor_set(v___x_964_, 2, v_bkt_958_);
v_buckets_x27_965_ = lean_array_uset(v_buckets_941_, v___x_957_, v___x_964_);
v___x_966_ = lean_unsigned_to_nat(4u);
v___x_967_ = lean_nat_mul(v_size_x27_963_, v___x_966_);
v___x_968_ = lean_unsigned_to_nat(3u);
v___x_969_ = lean_nat_div(v___x_967_, v___x_968_);
lean_dec(v___x_967_);
v___x_970_ = lean_array_get_size(v_buckets_x27_965_);
v___x_971_ = lean_nat_dec_le(v___x_969_, v___x_970_);
lean_dec(v___x_969_);
if (v___x_971_ == 0)
{
lean_object* v_val_972_; lean_object* v___x_974_; 
v_val_972_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4___redArg(v_buckets_x27_965_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_val_972_);
lean_ctor_set(v___x_943_, 0, v_size_x27_963_);
v___x_974_ = v___x_943_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_size_x27_963_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v_val_972_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
else
{
lean_object* v___x_977_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_buckets_x27_965_);
lean_ctor_set(v___x_943_, 0, v_size_x27_963_);
v___x_977_ = v___x_943_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_size_x27_963_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_buckets_x27_965_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
else
{
lean_object* v___x_979_; lean_object* v_buckets_x27_980_; lean_object* v_bkt_x27_981_; lean_object* v___y_983_; uint8_t v___x_988_; 
lean_inc(v_bkt_958_);
v___x_979_ = lean_box(0);
v_buckets_x27_980_ = lean_array_uset(v_buckets_941_, v___x_957_, v___x_979_);
lean_inc_ref(v_a_939_);
v_bkt_x27_981_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5(v_i_937_, v_a_939_, v_bkt_958_);
v___x_988_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(v_a_939_, v_bkt_x27_981_);
lean_dec_ref(v_a_939_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_unsigned_to_nat(1u);
v___x_990_ = lean_nat_sub(v_size_940_, v___x_989_);
lean_dec(v_size_940_);
v___y_983_ = v___x_990_;
goto v___jp_982_;
}
else
{
v___y_983_ = v_size_940_;
goto v___jp_982_;
}
v___jp_982_:
{
lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_984_ = lean_array_uset(v_buckets_x27_980_, v___x_957_, v_bkt_x27_981_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_984_);
lean_ctor_set(v___x_943_, 0, v___y_983_);
v___x_986_ = v___x_943_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___y_983_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_nat_to_int(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2));
v___x_998_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0);
v___x_999_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(v___x_998_, v___x_997_, v___x_997_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object* v_entries_1000_, lean_object* v_indexes_1001_, lean_object* v_status_1002_, uint8_t v_version_1003_, lean_object* v_x_1004_){
_start:
{
if (lean_obj_tag(v_x_1004_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1014_; 
lean_dec(v_status_1002_);
lean_dec_ref(v_indexes_1001_);
lean_dec_ref(v_entries_1000_);
v_a_1006_ = lean_ctor_get(v_x_1004_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_x_1004_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1008_ = v_x_1004_;
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v_x_1004_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1038_; 
v_a_1015_ = lean_ctor_get(v_x_1004_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_x_1004_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1017_ = v_x_1004_;
v_isShared_1018_ = v_isSharedCheck_1038_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v_x_1004_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1038_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v_tz_1021_; lean_object* v___f_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v_i_1028_; lean_object* v___x_1029_; lean_object* v_entries_1030_; lean_object* v_indexes_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3);
v_tz_1021_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_1020_, v_a_1015_);
lean_inc(v_a_1015_);
lean_inc_ref(v_tz_1021_);
v___f_1022_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1022_, 0, v_tz_1021_);
lean_closure_set(v___f_1022_, 1, v_a_1015_);
lean_closure_set(v___f_1022_, 2, v___x_1019_);
v___x_1023_ = lean_mk_thunk(v___f_1022_);
v___x_1024_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
lean_ctor_set(v___x_1024_, 1, v_a_1015_);
lean_ctor_set(v___x_1024_, 2, v___x_1020_);
lean_ctor_set(v___x_1024_, 3, v_tz_1021_);
v___x_1025_ = l_Std_Http_Header_Name_date;
v___x_1026_ = l_Std_Time_DateTime_toHTTPDateString(v___x_1024_);
v___x_1027_ = l_Std_Http_Header_Value_ofString_x21(v___x_1026_);
v_i_1028_ = lean_array_get_size(v_entries_1000_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1025_);
lean_ctor_set(v___x_1029_, 1, v___x_1027_);
v_entries_1030_ = lean_array_push(v_entries_1000_, v___x_1029_);
v_indexes_1031_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(v_i_1028_, v_indexes_1001_, v___x_1025_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_entries_1030_);
lean_ctor_set(v___x_1032_, 1, v_indexes_1031_);
v___x_1033_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1033_, 0, v_status_1002_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
lean_ctor_set_uint8(v___x_1033_, sizeof(void*)*2, v_version_1003_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v___x_1033_);
v___x_1035_ = v___x_1017_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
return v___x_1036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object* v_entries_1039_, lean_object* v_indexes_1040_, lean_object* v_status_1041_, lean_object* v_version_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v_version_boxed_1045_; lean_object* v_res_1046_; 
v_version_boxed_1045_ = lean_unbox(v_version_1042_);
v_res_1046_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(v_entries_1039_, v_indexes_1040_, v_status_1041_, v_version_boxed_1045_, v_x_1043_);
return v_res_1046_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg(lean_object* v_m_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_buckets_1049_; lean_object* v___x_1050_; uint64_t v___x_1051_; uint64_t v___x_1052_; uint64_t v___x_1053_; uint64_t v_fold_1054_; uint64_t v___x_1055_; uint64_t v___x_1056_; uint64_t v___x_1057_; size_t v___x_1058_; size_t v___x_1059_; size_t v___x_1060_; size_t v___x_1061_; size_t v___x_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; 
v_buckets_1049_ = lean_ctor_get(v_m_1047_, 1);
v___x_1050_ = lean_array_get_size(v_buckets_1049_);
v___x_1051_ = lean_string_hash(v_a_1048_);
v___x_1052_ = 32ULL;
v___x_1053_ = lean_uint64_shift_right(v___x_1051_, v___x_1052_);
v_fold_1054_ = lean_uint64_xor(v___x_1051_, v___x_1053_);
v___x_1055_ = 16ULL;
v___x_1056_ = lean_uint64_shift_right(v_fold_1054_, v___x_1055_);
v___x_1057_ = lean_uint64_xor(v_fold_1054_, v___x_1056_);
v___x_1058_ = lean_uint64_to_usize(v___x_1057_);
v___x_1059_ = lean_usize_of_nat(v___x_1050_);
v___x_1060_ = ((size_t)1ULL);
v___x_1061_ = lean_usize_sub(v___x_1059_, v___x_1060_);
v___x_1062_ = lean_usize_land(v___x_1058_, v___x_1061_);
v___x_1063_ = lean_array_uget_borrowed(v_buckets_1049_, v___x_1062_);
v___x_1064_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(v_a_1048_, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg___boxed(lean_object* v_m_1065_, lean_object* v_a_1066_){
_start:
{
uint8_t v_res_1067_; lean_object* v_r_1068_; 
v_res_1067_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg(v_m_1065_, v_a_1066_);
lean_dec_ref(v_a_1066_);
lean_dec_ref(v_m_1065_);
v_r_1068_ = lean_box(v_res_1067_);
return v_r_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object* v_config_1069_, lean_object* v_head_1070_){
_start:
{
uint8_t v_generateDate_1075_; 
v_generateDate_1075_ = lean_ctor_get_uint8(v_config_1069_, sizeof(void*)*24 + 1);
if (v_generateDate_1075_ == 0)
{
goto v___jp_1072_;
}
else
{
lean_object* v_headers_1076_; lean_object* v_status_1077_; uint8_t v_version_1078_; lean_object* v_entries_1079_; lean_object* v_indexes_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v_headers_1076_ = lean_ctor_get(v_head_1070_, 1);
v_status_1077_ = lean_ctor_get(v_head_1070_, 0);
v_version_1078_ = lean_ctor_get_uint8(v_head_1070_, sizeof(void*)*2);
v_entries_1079_ = lean_ctor_get(v_headers_1076_, 0);
v_indexes_1080_ = lean_ctor_get(v_headers_1076_, 1);
v___x_1081_ = l_Std_Http_Header_Name_date;
v___x_1082_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg(v_indexes_1080_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___f_1084_; lean_object* v___x_1085_; lean_object* v_val_1087_; lean_object* v___x_1090_; 
lean_inc_ref(v_indexes_1080_);
lean_inc_ref(v_entries_1079_);
lean_inc(v_status_1077_);
lean_dec_ref(v_head_1070_);
v___x_1083_ = lean_box(v_version_1078_);
v___f_1084_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed), 6, 4);
lean_closure_set(v___f_1084_, 0, v_entries_1079_);
lean_closure_set(v___f_1084_, 1, v_indexes_1080_);
lean_closure_set(v___f_1084_, 2, v_status_1077_);
lean_closure_set(v___f_1084_, 3, v___x_1083_);
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1090_ = lean_get_current_time();
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 1);
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
v_val_1087_ = v___x_1096_;
goto v___jp_1086_;
}
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
v_a_1099_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1090_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1090_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set_tag(v___x_1101_, 0);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
v_val_1087_ = v___x_1104_;
goto v___jp_1086_;
}
}
}
v___jp_1086_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1088_, 0, v_val_1087_);
v___x_1089_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1085_, v___x_1082_, v___x_1088_, v___f_1084_);
return v___x_1089_;
}
}
else
{
goto v___jp_1072_;
}
}
v___jp_1072_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_head_1070_);
v___x_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
return v___x_1074_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object* v_config_1107_, lean_object* v_head_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1107_, v_head_1108_);
lean_dec_ref(v_config_1107_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object* v_a_1111_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lean_nat_to_int(v_a_1111_);
v___x_1113_ = l_Rat_ofInt(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4(lean_object* v_00_u03b2_1114_, lean_object* v_m_1115_, lean_object* v_a_1116_){
_start:
{
uint8_t v___x_1117_; 
v___x_1117_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___redArg(v_m_1115_, v_a_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4___boxed(lean_object* v_00_u03b2_1118_, lean_object* v_m_1119_, lean_object* v_a_1120_){
_start:
{
uint8_t v_res_1121_; lean_object* v_r_1122_; 
v_res_1121_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__4(v_00_u03b2_1118_, v_m_1119_, v_a_1120_);
lean_dec_ref(v_a_1120_);
lean_dec_ref(v_m_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3(lean_object* v_00_u03b2_1123_, lean_object* v_a_1124_, lean_object* v_x_1125_){
_start:
{
uint8_t v___x_1126_; 
v___x_1126_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___redArg(v_a_1124_, v_x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3___boxed(lean_object* v_00_u03b2_1127_, lean_object* v_a_1128_, lean_object* v_x_1129_){
_start:
{
uint8_t v_res_1130_; lean_object* v_r_1131_; 
v_res_1130_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__3(v_00_u03b2_1127_, v_a_1128_, v_x_1129_);
lean_dec(v_x_1129_);
lean_dec_ref(v_a_1128_);
v_r_1131_ = lean_box(v_res_1130_);
return v_r_1131_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4(lean_object* v_00_u03b2_1132_, lean_object* v_data_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4___redArg(v_data_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1135_, lean_object* v_i_1136_, lean_object* v_source_1137_, lean_object* v_target_1138_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5___redArg(v_i_1136_, v_source_1137_, v_target_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5_spec__7(lean_object* v_00_u03b2_1140_, lean_object* v_x_1141_, lean_object* v_x_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__4_spec__5_spec__7___redArg(v_x_1141_, v_x_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object* v___y_1144_, lean_object* v_____r_1145_){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___y_1144_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
v___x_1150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object* v___y_1151_, lean_object* v_____r_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(v___y_1151_, v_____r_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object* v___f_1155_, lean_object* v_x_1156_){
_start:
{
if (lean_obj_tag(v_x_1156_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1166_; 
lean_dec_ref(v___f_1155_);
v_a_1158_ = lean_ctor_get(v_x_1156_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1156_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1160_ = v_x_1156_;
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v_x_1156_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1168_; 
v_a_1167_ = lean_ctor_get(v_x_1156_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v_x_1156_, 1);
v___x_1168_ = lean_apply_2(v___f_1155_, v_a_1167_, lean_box(0));
return v___x_1168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object* v___f_1169_, lean_object* v_x_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(v___f_1169_, v_x_1170_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object* v_close_1173_, lean_object* v_body_1174_, lean_object* v___f_1175_, lean_object* v___f_1176_, lean_object* v_x_1177_){
_start:
{
if (lean_obj_tag(v_x_1177_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1187_; 
lean_dec_ref(v___f_1176_);
lean_dec_ref(v___f_1175_);
lean_dec(v_body_1174_);
lean_dec_ref(v_close_1173_);
v_a_1179_ = lean_ctor_get(v_x_1177_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_x_1177_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1181_ = v_x_1177_;
v_isShared_1182_ = v_isSharedCheck_1187_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v_x_1177_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1187_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
}
}
else
{
lean_object* v_a_1188_; uint8_t v___x_1189_; 
v_a_1188_ = lean_ctor_get(v_x_1177_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v_x_1177_, 1);
v___x_1189_ = lean_unbox(v_a_1188_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; lean_object* v___x_1193_; 
lean_dec_ref(v___f_1176_);
v___x_1190_ = lean_unsigned_to_nat(0u);
v___x_1191_ = lean_apply_2(v_close_1173_, v_body_1174_, lean_box(0));
v___x_1192_ = lean_unbox(v_a_1188_);
lean_dec(v_a_1188_);
v___x_1193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1190_, v___x_1192_, v___x_1191_, v___f_1175_);
return v___x_1193_;
}
else
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec(v_a_1188_);
lean_dec_ref(v___f_1175_);
lean_dec(v_body_1174_);
lean_dec_ref(v_close_1173_);
v___x_1194_ = lean_box(0);
v___x_1195_ = lean_apply_2(v___f_1176_, v___x_1194_, lean_box(0));
return v___x_1195_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object* v_close_1196_, lean_object* v_body_1197_, lean_object* v___f_1198_, lean_object* v___f_1199_, lean_object* v_x_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(v_close_1196_, v_body_1197_, v___f_1198_, v___f_1199_, v_x_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object* v___x_1203_, lean_object* v___f_1204_, lean_object* v___f_1205_, lean_object* v_x1_1206_, lean_object* v_x2_1207_){
_start:
{
lean_object* v_fst_1208_; uint8_t v___x_1209_; 
v_fst_1208_ = lean_ctor_get(v_x2_1207_, 0);
lean_inc(v_fst_1208_);
v___x_1209_ = lean_string_dec_eq(v___x_1203_, v_fst_1208_);
if (v___x_1209_ == 0)
{
lean_object* v_entries_1210_; lean_object* v_indexes_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1222_; 
v_entries_1210_ = lean_ctor_get(v_x1_1206_, 0);
v_indexes_1211_ = lean_ctor_get(v_x1_1206_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_x1_1206_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1213_ = v_x1_1206_;
v_isShared_1214_ = v_isSharedCheck_1222_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_indexes_1211_);
lean_inc(v_entries_1210_);
lean_dec(v_x1_1206_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1222_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_i_1215_; lean_object* v_f_1216_; lean_object* v_entries_1217_; lean_object* v_indexes_1218_; lean_object* v___x_1220_; 
v_i_1215_ = lean_array_get_size(v_entries_1210_);
v_f_1216_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3_spec__5___lam__0), 2, 1);
lean_closure_set(v_f_1216_, 0, v_i_1215_);
v_entries_1217_ = lean_array_push(v_entries_1210_, v_x2_1207_);
v_indexes_1218_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1204_, v___f_1205_, v_indexes_1211_, v_fst_1208_, v_f_1216_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v_indexes_1218_);
lean_ctor_set(v___x_1213_, 0, v_entries_1217_);
v___x_1220_ = v___x_1213_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_entries_1217_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_indexes_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
else
{
lean_dec(v_fst_1208_);
lean_dec_ref(v_x2_1207_);
lean_dec_ref(v___f_1205_);
lean_dec_ref(v___f_1204_);
return v_x1_1206_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object* v___x_1223_, lean_object* v___f_1224_, lean_object* v___f_1225_, lean_object* v_x1_1226_, lean_object* v_x2_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(v___x_1223_, v___f_1224_, v___f_1225_, v_x1_1226_, v_x2_1227_);
lean_dec_ref(v___x_1223_);
return v_res_1228_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Std_Internal_IndexMultiMap_empty___redArg();
return v___x_1231_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13(void){
_start:
{
lean_object* v___f_1251_; lean_object* v___f_1252_; lean_object* v___x_1253_; lean_object* v___f_1254_; 
v___f_1251_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___f_1252_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___x_1253_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1254_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_1254_, 0, v___x_1253_);
lean_closure_set(v___f_1254_, 1, v___f_1252_);
lean_closure_set(v___f_1254_, 2, v___f_1251_);
return v___f_1254_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14(void){
_start:
{
lean_object* v___f_1255_; lean_object* v___f_1256_; lean_object* v___x_1257_; lean_object* v___f_1258_; 
v___f_1255_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___f_1256_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___x_1257_ = l_Std_Http_Header_Name_contentLength;
v___f_1258_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_1258_, 0, v___x_1257_);
lean_closure_set(v___f_1258_, 1, v___f_1256_);
lean_closure_set(v___f_1258_, 2, v___f_1255_);
return v___f_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(lean_object* v___y_1259_, lean_object* v_body_1260_, lean_object* v_close_1261_, lean_object* v_isClosed_1262_, lean_object* v_x_1263_){
_start:
{
lean_object* v___y_1266_; uint8_t v_omitBody_1267_; lean_object* v_reader_1280_; lean_object* v_writer_1281_; lean_object* v_config_1282_; lean_object* v_events_1283_; lean_object* v_error_1284_; lean_object* v_instant_1285_; uint8_t v_keepAlive_1286_; uint8_t v_forcedFlush_1287_; uint8_t v_pullBodyStalled_1288_; lean_object* v___y_1308_; uint8_t v___y_1312_; lean_object* v___y_1313_; uint8_t v___y_1314_; 
if (lean_obj_tag(v_x_1263_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v_isClosed_1262_);
lean_dec_ref(v_close_1261_);
lean_dec(v_body_1260_);
lean_dec_ref(v___y_1259_);
v_a_1324_ = lean_ctor_get(v_x_1263_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_x_1263_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1326_ = v_x_1263_;
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v_x_1263_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
return v___x_1330_;
}
}
}
else
{
lean_object* v_writer_1333_; lean_object* v_a_1334_; lean_object* v_reader_1335_; lean_object* v_config_1336_; lean_object* v_events_1337_; lean_object* v_error_1338_; lean_object* v_instant_1339_; uint8_t v_keepAlive_1340_; uint8_t v_forcedFlush_1341_; uint8_t v_pullBodyStalled_1342_; lean_object* v_userData_1343_; lean_object* v_outputData_1344_; lean_object* v_state_1345_; lean_object* v_knownSize_1346_; lean_object* v_messageHead_1347_; uint8_t v_sentMessage_1348_; uint8_t v_userClosedBody_1349_; uint8_t v_omitBody_1350_; lean_object* v_userDataBytes_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1455_; 
v_writer_1333_ = lean_ctor_get(v___y_1259_, 1);
lean_inc_ref(v_writer_1333_);
v_a_1334_ = lean_ctor_get(v_x_1263_, 0);
lean_inc(v_a_1334_);
lean_dec_ref_known(v_x_1263_, 1);
v_reader_1335_ = lean_ctor_get(v___y_1259_, 0);
v_config_1336_ = lean_ctor_get(v___y_1259_, 2);
v_events_1337_ = lean_ctor_get(v___y_1259_, 3);
v_error_1338_ = lean_ctor_get(v___y_1259_, 4);
v_instant_1339_ = lean_ctor_get(v___y_1259_, 5);
v_keepAlive_1340_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*6);
v_forcedFlush_1341_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1342_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*6 + 2);
v_userData_1343_ = lean_ctor_get(v_writer_1333_, 0);
v_outputData_1344_ = lean_ctor_get(v_writer_1333_, 1);
v_state_1345_ = lean_ctor_get(v_writer_1333_, 2);
v_knownSize_1346_ = lean_ctor_get(v_writer_1333_, 3);
v_messageHead_1347_ = lean_ctor_get(v_writer_1333_, 4);
v_sentMessage_1348_ = lean_ctor_get_uint8(v_writer_1333_, sizeof(void*)*6);
v_userClosedBody_1349_ = lean_ctor_get_uint8(v_writer_1333_, sizeof(void*)*6 + 1);
v_omitBody_1350_ = lean_ctor_get_uint8(v_writer_1333_, sizeof(void*)*6 + 2);
v_userDataBytes_1351_ = lean_ctor_get(v_writer_1333_, 5);
v_isSharedCheck_1455_ = !lean_is_exclusive(v_writer_1333_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1353_ = v_writer_1333_;
v_isShared_1354_ = v_isSharedCheck_1455_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_userDataBytes_1351_);
lean_inc(v_messageHead_1347_);
lean_inc(v_knownSize_1346_);
lean_inc(v_state_1345_);
lean_inc(v_outputData_1344_);
lean_inc(v_userData_1343_);
lean_dec(v_writer_1333_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1455_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
uint8_t v___y_1356_; lean_object* v___y_1357_; uint8_t v___y_1366_; lean_object* v___y_1367_; uint8_t v___x_1382_; uint8_t v___y_1384_; uint8_t v___y_1385_; lean_object* v___y_1386_; uint8_t v___y_1387_; uint8_t v___y_1388_; lean_object* v___x_1402_; uint8_t v___x_1403_; uint8_t v___x_1404_; uint8_t v___y_1406_; uint8_t v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; uint8_t v___y_1411_; lean_object* v___y_1412_; uint8_t v___y_1413_; uint8_t v___y_1417_; uint8_t v___y_1418_; uint8_t v___y_1429_; uint8_t v___y_1432_; 
v___x_1382_ = 0;
v___x_1402_ = lean_box(1);
v___x_1403_ = l_Std_Http_Protocol_H1_Writer_instBEqState_beq(v_state_1345_, v___x_1402_);
v___x_1404_ = 1;
if (v___x_1403_ == 0)
{
v___y_1432_ = v___x_1403_;
goto v___jp_1431_;
}
else
{
v___y_1432_ = v___x_1404_;
goto v___jp_1431_;
}
v___jp_1355_:
{
lean_object* v_message_1358_; lean_object* v___x_2036__overap_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
v_message_1358_ = l_Std_Http_Protocol_H1_Message_Head_setHeaders(v___y_1356_, v_a_1334_, v___y_1357_);
v___x_2036__overap_1359_ = l_Std_Http_Protocol_H1_instEncodeV11Head(v___y_1356_);
v___x_1360_ = lean_apply_2(v___x_2036__overap_1359_, v_outputData_1344_, v_message_1358_);
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 1, v___x_1360_);
v___x_1362_ = v___x_1353_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_userData_1343_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1364_, 2, v_state_1345_);
lean_ctor_set(v_reuseFailAlloc_1364_, 3, v_knownSize_1346_);
lean_ctor_set(v_reuseFailAlloc_1364_, 4, v_messageHead_1347_);
lean_ctor_set(v_reuseFailAlloc_1364_, 5, v_userDataBytes_1351_);
lean_ctor_set_uint8(v_reuseFailAlloc_1364_, sizeof(void*)*6, v_sentMessage_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1364_, sizeof(void*)*6 + 1, v_userClosedBody_1349_);
lean_ctor_set_uint8(v_reuseFailAlloc_1364_, sizeof(void*)*6 + 2, v_omitBody_1350_);
v___x_1362_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1363_, 0, v_reader_1335_);
lean_ctor_set(v___x_1363_, 1, v___x_1362_);
lean_ctor_set(v___x_1363_, 2, v_config_1336_);
lean_ctor_set(v___x_1363_, 3, v_events_1337_);
lean_ctor_set(v___x_1363_, 4, v_error_1338_);
lean_ctor_set(v___x_1363_, 5, v_instant_1339_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*6, v_keepAlive_1340_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*6 + 1, v_forcedFlush_1341_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*6 + 2, v_pullBodyStalled_1342_);
v___y_1266_ = v___x_1363_;
v_omitBody_1267_ = v_omitBody_1350_;
goto v___jp_1265_;
}
}
v___jp_1365_:
{
lean_object* v___x_1368_; lean_object* v___f_1369_; lean_object* v___f_1370_; uint8_t v___x_1371_; 
v___x_1368_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1369_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1370_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1371_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1369_, v___f_1370_, v___x_1368_, v___y_1367_);
if (v___x_1371_ == 0)
{
v___y_1356_ = v___y_1366_;
v___y_1357_ = v___y_1367_;
goto v___jp_1355_;
}
else
{
lean_object* v_entries_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_entries_1372_ = lean_ctor_get(v___y_1367_, 0);
lean_inc_ref(v_entries_1372_);
lean_dec_ref(v___y_1367_);
v___x_1373_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2);
v___x_1374_ = lean_unsigned_to_nat(0u);
v___x_1375_ = lean_array_get_size(v_entries_1372_);
v___x_1376_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_1377_ = lean_nat_dec_lt(v___x_1374_, v___x_1375_);
if (v___x_1377_ == 0)
{
lean_dec_ref(v_entries_1372_);
v___y_1356_ = v___y_1366_;
v___y_1357_ = v___x_1373_;
goto v___jp_1355_;
}
else
{
lean_object* v___f_1378_; size_t v___x_1379_; size_t v___x_1380_; lean_object* v___x_1381_; 
v___f_1378_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13);
v___x_1379_ = ((size_t)0ULL);
v___x_1380_ = lean_usize_of_nat(v___x_1375_);
v___x_1381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1376_, v___f_1378_, v_entries_1372_, v___x_1379_, v___x_1380_, v___x_1373_);
v___y_1356_ = v___y_1366_;
v___y_1357_ = v___x_1381_;
goto v___jp_1355_;
}
}
}
v___jp_1383_:
{
lean_object* v_headerSize_1389_; lean_object* v_machine_1390_; lean_object* v_machine_1391_; lean_object* v_reader_1392_; lean_object* v_state_1393_; 
v_headerSize_1389_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___y_1385_, v_a_1334_, v___y_1387_);
v_machine_1390_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(v___x_1382_, v___y_1386_, v_headerSize_1389_, v___y_1388_);
v_machine_1391_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(v___x_1382_, v_machine_1390_, v_a_1334_);
lean_dec(v_a_1334_);
v_reader_1392_ = lean_ctor_get(v_machine_1391_, 0);
v_state_1393_ = lean_ctor_get(v_reader_1392_, 0);
if (lean_obj_tag(v_state_1393_) == 7)
{
v___y_1312_ = v___y_1384_;
v___y_1313_ = v_machine_1391_;
v___y_1314_ = v___y_1387_;
goto v___jp_1311_;
}
else
{
if (v___y_1387_ == 0)
{
lean_object* v_writer_1394_; lean_object* v_config_1395_; lean_object* v_events_1396_; lean_object* v_error_1397_; lean_object* v_instant_1398_; uint8_t v_keepAlive_1399_; uint8_t v_forcedFlush_1400_; uint8_t v_pullBodyStalled_1401_; 
lean_inc_ref(v_reader_1392_);
v_writer_1394_ = lean_ctor_get(v_machine_1391_, 1);
lean_inc_ref(v_writer_1394_);
v_config_1395_ = lean_ctor_get(v_machine_1391_, 2);
lean_inc_ref(v_config_1395_);
v_events_1396_ = lean_ctor_get(v_machine_1391_, 3);
lean_inc_ref(v_events_1396_);
v_error_1397_ = lean_ctor_get(v_machine_1391_, 4);
lean_inc(v_error_1397_);
v_instant_1398_ = lean_ctor_get(v_machine_1391_, 5);
lean_inc(v_instant_1398_);
v_keepAlive_1399_ = lean_ctor_get_uint8(v_machine_1391_, sizeof(void*)*6);
v_forcedFlush_1400_ = lean_ctor_get_uint8(v_machine_1391_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1401_ = lean_ctor_get_uint8(v_machine_1391_, sizeof(void*)*6 + 2);
lean_dec_ref(v_machine_1391_);
v_reader_1280_ = v_reader_1392_;
v_writer_1281_ = v_writer_1394_;
v_config_1282_ = v_config_1395_;
v_events_1283_ = v_events_1396_;
v_error_1284_ = v_error_1397_;
v_instant_1285_ = v_instant_1398_;
v_keepAlive_1286_ = v_keepAlive_1399_;
v_forcedFlush_1287_ = v_forcedFlush_1400_;
v_pullBodyStalled_1288_ = v_pullBodyStalled_1401_;
goto v___jp_1279_;
}
else
{
v___y_1312_ = v___y_1384_;
v___y_1313_ = v_machine_1391_;
v___y_1314_ = v___y_1387_;
goto v___jp_1311_;
}
}
}
v___jp_1405_:
{
lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1414_ = l_Std_Http_Header_Name_transferEncoding;
v___x_1415_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___y_1409_, v___y_1408_, v___y_1412_, v___x_1414_);
lean_dec_ref(v___y_1412_);
if (v___x_1415_ == 0)
{
if (v___y_1413_ == 0)
{
v___y_1384_ = v___y_1406_;
v___y_1385_ = v___y_1407_;
v___y_1386_ = v___y_1410_;
v___y_1387_ = v___y_1411_;
v___y_1388_ = v___x_1415_;
goto v___jp_1383_;
}
else
{
v___y_1384_ = v___y_1406_;
v___y_1385_ = v___y_1407_;
v___y_1386_ = v___y_1410_;
v___y_1387_ = v___y_1411_;
v___y_1388_ = v___y_1413_;
goto v___jp_1383_;
}
}
else
{
if (v___y_1413_ == 0)
{
v___y_1384_ = v___y_1406_;
v___y_1385_ = v___y_1407_;
v___y_1386_ = v___y_1410_;
v___y_1387_ = v___y_1411_;
v___y_1388_ = v___x_1404_;
goto v___jp_1383_;
}
else
{
v___y_1384_ = v___y_1406_;
v___y_1385_ = v___y_1407_;
v___y_1386_ = v___y_1410_;
v___y_1387_ = v___y_1411_;
v___y_1388_ = v___y_1413_;
goto v___jp_1383_;
}
}
}
v___jp_1416_:
{
uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v_indexes_1421_; lean_object* v___x_1422_; lean_object* v_machine_1423_; lean_object* v___x_1424_; lean_object* v___f_1425_; lean_object* v___f_1426_; uint8_t v___x_1427_; 
v___x_1419_ = 1;
v___x_1420_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1419_, v_a_1334_);
v_indexes_1421_ = lean_ctor_get(v___x_1420_, 1);
lean_inc_ref(v_indexes_1421_);
lean_dec_ref(v___x_1420_);
lean_inc(v_a_1334_);
v___x_1422_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1422_, 0, v_userData_1343_);
lean_ctor_set(v___x_1422_, 1, v_outputData_1344_);
lean_ctor_set(v___x_1422_, 2, v_state_1345_);
lean_ctor_set(v___x_1422_, 3, v_knownSize_1346_);
lean_ctor_set(v___x_1422_, 4, v_a_1334_);
lean_ctor_set(v___x_1422_, 5, v_userDataBytes_1351_);
lean_ctor_set_uint8(v___x_1422_, sizeof(void*)*6, v___x_1404_);
lean_ctor_set_uint8(v___x_1422_, sizeof(void*)*6 + 1, v_userClosedBody_1349_);
lean_ctor_set_uint8(v___x_1422_, sizeof(void*)*6 + 2, v_omitBody_1350_);
v_machine_1423_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_machine_1423_, 0, v_reader_1335_);
lean_ctor_set(v_machine_1423_, 1, v___x_1422_);
lean_ctor_set(v_machine_1423_, 2, v_config_1336_);
lean_ctor_set(v_machine_1423_, 3, v_events_1337_);
lean_ctor_set(v_machine_1423_, 4, v_error_1338_);
lean_ctor_set(v_machine_1423_, 5, v_instant_1339_);
lean_ctor_set_uint8(v_machine_1423_, sizeof(void*)*6, v_keepAlive_1340_);
lean_ctor_set_uint8(v_machine_1423_, sizeof(void*)*6 + 1, v_forcedFlush_1341_);
lean_ctor_set_uint8(v_machine_1423_, sizeof(void*)*6 + 2, v_pullBodyStalled_1342_);
v___x_1424_ = l_Std_Http_Header_Name_contentLength;
v___f_1425_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1426_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1427_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1425_, v___f_1426_, v_indexes_1421_, v___x_1424_);
if (v___x_1427_ == 0)
{
v___y_1406_ = v___y_1418_;
v___y_1407_ = v___x_1419_;
v___y_1408_ = v___f_1426_;
v___y_1409_ = v___f_1425_;
v___y_1410_ = v_machine_1423_;
v___y_1411_ = v___y_1417_;
v___y_1412_ = v_indexes_1421_;
v___y_1413_ = v___x_1427_;
goto v___jp_1405_;
}
else
{
v___y_1406_ = v___y_1418_;
v___y_1407_ = v___x_1419_;
v___y_1408_ = v___f_1426_;
v___y_1409_ = v___f_1425_;
v___y_1410_ = v_machine_1423_;
v___y_1411_ = v___y_1417_;
v___y_1412_ = v_indexes_1421_;
v___y_1413_ = v___x_1404_;
goto v___jp_1405_;
}
}
v___jp_1428_:
{
lean_object* v_state_1430_; 
v_state_1430_ = lean_ctor_get(v_reader_1335_, 0);
if (lean_obj_tag(v_state_1430_) == 7)
{
v___y_1417_ = v___y_1429_;
v___y_1418_ = v___x_1404_;
goto v___jp_1416_;
}
else
{
v___y_1417_ = v___y_1429_;
v___y_1418_ = v___y_1429_;
goto v___jp_1416_;
}
}
v___jp_1431_:
{
if (v_sentMessage_1348_ == 0)
{
if (v___y_1432_ == 0)
{
lean_del_object(v___x_1353_);
lean_dec(v_userDataBytes_1351_);
lean_dec(v_messageHead_1347_);
lean_dec(v_knownSize_1346_);
lean_dec(v_state_1345_);
lean_dec_ref(v_outputData_1344_);
lean_dec_ref(v_userData_1343_);
lean_dec(v_a_1334_);
v___y_1266_ = v___y_1259_;
v_omitBody_1267_ = v_omitBody_1350_;
goto v___jp_1265_;
}
else
{
lean_object* v_status_1433_; uint16_t v___x_1434_; uint16_t v___x_1435_; uint8_t v___x_1436_; 
lean_inc(v_instant_1339_);
lean_inc(v_error_1338_);
lean_inc_ref(v_events_1337_);
lean_inc_ref(v_config_1336_);
lean_inc_ref(v_reader_1335_);
lean_dec_ref(v___y_1259_);
v_status_1433_ = lean_ctor_get(v_a_1334_, 0);
v___x_1434_ = 100;
v___x_1435_ = l_Std_Http_Status_toCode(v_status_1433_);
v___x_1436_ = lean_uint16_dec_le(v___x_1434_, v___x_1435_);
if (v___x_1436_ == 0)
{
lean_del_object(v___x_1353_);
lean_dec(v_messageHead_1347_);
v___y_1429_ = v___x_1436_;
goto v___jp_1428_;
}
else
{
uint16_t v___x_1437_; uint8_t v___x_1438_; 
v___x_1437_ = 200;
v___x_1438_ = lean_uint16_dec_lt(v___x_1435_, v___x_1437_);
if (v___x_1438_ == 0)
{
lean_del_object(v___x_1353_);
lean_dec(v_messageHead_1347_);
v___y_1429_ = v___x_1438_;
goto v___jp_1428_;
}
else
{
uint8_t v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___f_1442_; lean_object* v___f_1443_; uint8_t v___x_1444_; 
v___x_1439_ = 1;
v___x_1440_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1439_, v_a_1334_);
v___x_1441_ = l_Std_Http_Header_Name_contentLength;
v___f_1442_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1443_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1444_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1442_, v___f_1443_, v___x_1441_, v___x_1440_);
if (v___x_1444_ == 0)
{
v___y_1366_ = v___x_1439_;
v___y_1367_ = v___x_1440_;
goto v___jp_1365_;
}
else
{
lean_object* v_entries_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v_entries_1445_ = lean_ctor_get(v___x_1440_, 0);
lean_inc_ref(v_entries_1445_);
lean_dec_ref(v___x_1440_);
v___x_1446_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2);
v___x_1447_ = lean_unsigned_to_nat(0u);
v___x_1448_ = lean_array_get_size(v_entries_1445_);
v___x_1449_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_1450_ = lean_nat_dec_lt(v___x_1447_, v___x_1448_);
if (v___x_1450_ == 0)
{
lean_dec_ref(v_entries_1445_);
v___y_1366_ = v___x_1439_;
v___y_1367_ = v___x_1446_;
goto v___jp_1365_;
}
else
{
lean_object* v___f_1451_; size_t v___x_1452_; size_t v___x_1453_; lean_object* v___x_1454_; 
v___f_1451_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14);
v___x_1452_ = ((size_t)0ULL);
v___x_1453_ = lean_usize_of_nat(v___x_1448_);
v___x_1454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1449_, v___f_1451_, v_entries_1445_, v___x_1452_, v___x_1453_, v___x_1446_);
v___y_1366_ = v___x_1439_;
v___y_1367_ = v___x_1454_;
goto v___jp_1365_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1353_);
lean_dec(v_userDataBytes_1351_);
lean_dec(v_messageHead_1347_);
lean_dec(v_knownSize_1346_);
lean_dec(v_state_1345_);
lean_dec_ref(v_outputData_1344_);
lean_dec_ref(v_userData_1343_);
lean_dec(v_a_1334_);
v___y_1266_ = v___y_1259_;
v_omitBody_1267_ = v_omitBody_1350_;
goto v___jp_1265_;
}
}
}
}
v___jp_1265_:
{
if (v_omitBody_1267_ == 0)
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec_ref(v_isClosed_1262_);
lean_dec_ref(v_close_1261_);
v___x_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1268_, 0, v_body_1260_);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___y_1266_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
else
{
lean_object* v___f_1272_; lean_object* v___f_1273_; lean_object* v___f_1274_; lean_object* v___x_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___f_1272_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1272_, 0, v___y_1266_);
lean_inc_ref(v___f_1272_);
v___f_1273_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1273_, 0, v___f_1272_);
lean_inc(v_body_1260_);
v___f_1274_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1274_, 0, v_close_1261_);
lean_closure_set(v___f_1274_, 1, v_body_1260_);
lean_closure_set(v___f_1274_, 2, v___f_1273_);
lean_closure_set(v___f_1274_, 3, v___f_1272_);
v___x_1275_ = lean_unsigned_to_nat(0u);
v___x_1276_ = 0;
v___x_1277_ = lean_apply_2(v_isClosed_1262_, v_body_1260_, lean_box(0));
v___x_1278_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1275_, v___x_1276_, v___x_1277_, v___f_1274_);
return v___x_1278_;
}
}
v___jp_1279_:
{
lean_object* v_userData_1289_; lean_object* v_outputData_1290_; lean_object* v_knownSize_1291_; lean_object* v_messageHead_1292_; uint8_t v_sentMessage_1293_; uint8_t v_userClosedBody_1294_; uint8_t v_omitBody_1295_; lean_object* v_userDataBytes_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1305_; 
v_userData_1289_ = lean_ctor_get(v_writer_1281_, 0);
v_outputData_1290_ = lean_ctor_get(v_writer_1281_, 1);
v_knownSize_1291_ = lean_ctor_get(v_writer_1281_, 3);
v_messageHead_1292_ = lean_ctor_get(v_writer_1281_, 4);
v_sentMessage_1293_ = lean_ctor_get_uint8(v_writer_1281_, sizeof(void*)*6);
v_userClosedBody_1294_ = lean_ctor_get_uint8(v_writer_1281_, sizeof(void*)*6 + 1);
v_omitBody_1295_ = lean_ctor_get_uint8(v_writer_1281_, sizeof(void*)*6 + 2);
v_userDataBytes_1296_ = lean_ctor_get(v_writer_1281_, 5);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_writer_1281_);
if (v_isSharedCheck_1305_ == 0)
{
lean_object* v_unused_1306_; 
v_unused_1306_ = lean_ctor_get(v_writer_1281_, 2);
lean_dec(v_unused_1306_);
v___x_1298_ = v_writer_1281_;
v_isShared_1299_ = v_isSharedCheck_1305_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_userDataBytes_1296_);
lean_inc(v_messageHead_1292_);
lean_inc(v_knownSize_1291_);
lean_inc(v_outputData_1290_);
lean_inc(v_userData_1289_);
lean_dec(v_writer_1281_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1305_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1300_ = lean_box(2);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 2, v___x_1300_);
v___x_1302_ = v___x_1298_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_userData_1289_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_outputData_1290_);
lean_ctor_set(v_reuseFailAlloc_1304_, 2, v___x_1300_);
lean_ctor_set(v_reuseFailAlloc_1304_, 3, v_knownSize_1291_);
lean_ctor_set(v_reuseFailAlloc_1304_, 4, v_messageHead_1292_);
lean_ctor_set(v_reuseFailAlloc_1304_, 5, v_userDataBytes_1296_);
lean_ctor_set_uint8(v_reuseFailAlloc_1304_, sizeof(void*)*6, v_sentMessage_1293_);
lean_ctor_set_uint8(v_reuseFailAlloc_1304_, sizeof(void*)*6 + 1, v_userClosedBody_1294_);
lean_ctor_set_uint8(v_reuseFailAlloc_1304_, sizeof(void*)*6 + 2, v_omitBody_1295_);
v___x_1302_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1303_, 0, v_reader_1280_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
lean_ctor_set(v___x_1303_, 2, v_config_1282_);
lean_ctor_set(v___x_1303_, 3, v_events_1283_);
lean_ctor_set(v___x_1303_, 4, v_error_1284_);
lean_ctor_set(v___x_1303_, 5, v_instant_1285_);
lean_ctor_set_uint8(v___x_1303_, sizeof(void*)*6, v_keepAlive_1286_);
lean_ctor_set_uint8(v___x_1303_, sizeof(void*)*6 + 1, v_forcedFlush_1287_);
lean_ctor_set_uint8(v___x_1303_, sizeof(void*)*6 + 2, v_pullBodyStalled_1288_);
v___y_1266_ = v___x_1303_;
v_omitBody_1267_ = v_omitBody_1295_;
goto v___jp_1265_;
}
}
}
v___jp_1307_:
{
lean_object* v_writer_1309_; uint8_t v_omitBody_1310_; 
v_writer_1309_ = lean_ctor_get(v___y_1308_, 1);
v_omitBody_1310_ = lean_ctor_get_uint8(v_writer_1309_, sizeof(void*)*6 + 2);
v___y_1266_ = v___y_1308_;
v_omitBody_1267_ = v_omitBody_1310_;
goto v___jp_1265_;
}
v___jp_1311_:
{
if (v___y_1312_ == 0)
{
v___y_1308_ = v___y_1313_;
goto v___jp_1307_;
}
else
{
if (v___y_1314_ == 0)
{
lean_object* v_reader_1315_; lean_object* v_writer_1316_; lean_object* v_config_1317_; lean_object* v_events_1318_; lean_object* v_error_1319_; lean_object* v_instant_1320_; uint8_t v_keepAlive_1321_; uint8_t v_forcedFlush_1322_; uint8_t v_pullBodyStalled_1323_; 
v_reader_1315_ = lean_ctor_get(v___y_1313_, 0);
lean_inc_ref(v_reader_1315_);
v_writer_1316_ = lean_ctor_get(v___y_1313_, 1);
lean_inc_ref(v_writer_1316_);
v_config_1317_ = lean_ctor_get(v___y_1313_, 2);
lean_inc_ref(v_config_1317_);
v_events_1318_ = lean_ctor_get(v___y_1313_, 3);
lean_inc_ref(v_events_1318_);
v_error_1319_ = lean_ctor_get(v___y_1313_, 4);
lean_inc(v_error_1319_);
v_instant_1320_ = lean_ctor_get(v___y_1313_, 5);
lean_inc(v_instant_1320_);
v_keepAlive_1321_ = lean_ctor_get_uint8(v___y_1313_, sizeof(void*)*6);
v_forcedFlush_1322_ = lean_ctor_get_uint8(v___y_1313_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1323_ = lean_ctor_get_uint8(v___y_1313_, sizeof(void*)*6 + 2);
lean_dec_ref(v___y_1313_);
v_reader_1280_ = v_reader_1315_;
v_writer_1281_ = v_writer_1316_;
v_config_1282_ = v_config_1317_;
v_events_1283_ = v_events_1318_;
v_error_1284_ = v_error_1319_;
v_instant_1285_ = v_instant_1320_;
v_keepAlive_1286_ = v_keepAlive_1321_;
v_forcedFlush_1287_ = v_forcedFlush_1322_;
v_pullBodyStalled_1288_ = v_pullBodyStalled_1323_;
goto v___jp_1279_;
}
else
{
v___y_1308_ = v___y_1313_;
goto v___jp_1307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed(lean_object* v___y_1456_, lean_object* v_body_1457_, lean_object* v_close_1458_, lean_object* v_isClosed_1459_, lean_object* v_x_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(v___y_1456_, v_body_1457_, v_close_1458_, v_isClosed_1459_, v_x_1460_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object* v_body_1463_, lean_object* v_close_1464_, lean_object* v_isClosed_1465_, lean_object* v_config_1466_, lean_object* v_line_1467_, lean_object* v_machine_1468_, lean_object* v_x_1469_){
_start:
{
lean_object* v___y_1472_; 
if (lean_obj_tag(v_x_1469_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v_machine_1468_);
lean_dec_ref(v_line_1467_);
lean_dec_ref(v_isClosed_1465_);
lean_dec_ref(v_close_1464_);
lean_dec(v_body_1463_);
v_a_1478_ = lean_ctor_get(v_x_1469_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_x_1469_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1480_ = v_x_1469_;
v_isShared_1481_ = v_isSharedCheck_1486_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v_x_1469_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1486_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
return v___x_1484_;
}
}
}
else
{
lean_object* v_a_1487_; 
v_a_1487_ = lean_ctor_get(v_x_1469_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v_x_1469_, 1);
if (lean_obj_tag(v_a_1487_) == 1)
{
lean_object* v_writer_1488_; lean_object* v_reader_1489_; lean_object* v_config_1490_; lean_object* v_events_1491_; lean_object* v_error_1492_; lean_object* v_instant_1493_; uint8_t v_keepAlive_1494_; uint8_t v_forcedFlush_1495_; uint8_t v_pullBodyStalled_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1519_; 
v_writer_1488_ = lean_ctor_get(v_machine_1468_, 1);
v_reader_1489_ = lean_ctor_get(v_machine_1468_, 0);
v_config_1490_ = lean_ctor_get(v_machine_1468_, 2);
v_events_1491_ = lean_ctor_get(v_machine_1468_, 3);
v_error_1492_ = lean_ctor_get(v_machine_1468_, 4);
v_instant_1493_ = lean_ctor_get(v_machine_1468_, 5);
v_keepAlive_1494_ = lean_ctor_get_uint8(v_machine_1468_, sizeof(void*)*6);
v_forcedFlush_1495_ = lean_ctor_get_uint8(v_machine_1468_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1496_ = lean_ctor_get_uint8(v_machine_1468_, sizeof(void*)*6 + 2);
v_isSharedCheck_1519_ = !lean_is_exclusive(v_machine_1468_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1498_ = v_machine_1468_;
v_isShared_1499_ = v_isSharedCheck_1519_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_instant_1493_);
lean_inc(v_error_1492_);
lean_inc(v_events_1491_);
lean_inc(v_config_1490_);
lean_inc(v_writer_1488_);
lean_inc(v_reader_1489_);
lean_dec(v_machine_1468_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1519_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v_userData_1500_; lean_object* v_outputData_1501_; lean_object* v_state_1502_; lean_object* v_messageHead_1503_; uint8_t v_sentMessage_1504_; uint8_t v_userClosedBody_1505_; uint8_t v_omitBody_1506_; lean_object* v_userDataBytes_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1517_; 
v_userData_1500_ = lean_ctor_get(v_writer_1488_, 0);
v_outputData_1501_ = lean_ctor_get(v_writer_1488_, 1);
v_state_1502_ = lean_ctor_get(v_writer_1488_, 2);
v_messageHead_1503_ = lean_ctor_get(v_writer_1488_, 4);
v_sentMessage_1504_ = lean_ctor_get_uint8(v_writer_1488_, sizeof(void*)*6);
v_userClosedBody_1505_ = lean_ctor_get_uint8(v_writer_1488_, sizeof(void*)*6 + 1);
v_omitBody_1506_ = lean_ctor_get_uint8(v_writer_1488_, sizeof(void*)*6 + 2);
v_userDataBytes_1507_ = lean_ctor_get(v_writer_1488_, 5);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_writer_1488_);
if (v_isSharedCheck_1517_ == 0)
{
lean_object* v_unused_1518_; 
v_unused_1518_ = lean_ctor_get(v_writer_1488_, 3);
lean_dec(v_unused_1518_);
v___x_1509_ = v_writer_1488_;
v_isShared_1510_ = v_isSharedCheck_1517_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_userDataBytes_1507_);
lean_inc(v_messageHead_1503_);
lean_inc(v_state_1502_);
lean_inc(v_outputData_1501_);
lean_inc(v_userData_1500_);
lean_dec(v_writer_1488_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1517_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 3, v_a_1487_);
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_userData_1500_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_outputData_1501_);
lean_ctor_set(v_reuseFailAlloc_1516_, 2, v_state_1502_);
lean_ctor_set(v_reuseFailAlloc_1516_, 3, v_a_1487_);
lean_ctor_set(v_reuseFailAlloc_1516_, 4, v_messageHead_1503_);
lean_ctor_set(v_reuseFailAlloc_1516_, 5, v_userDataBytes_1507_);
lean_ctor_set_uint8(v_reuseFailAlloc_1516_, sizeof(void*)*6, v_sentMessage_1504_);
lean_ctor_set_uint8(v_reuseFailAlloc_1516_, sizeof(void*)*6 + 1, v_userClosedBody_1505_);
lean_ctor_set_uint8(v_reuseFailAlloc_1516_, sizeof(void*)*6 + 2, v_omitBody_1506_);
v___x_1512_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1514_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1512_);
v___x_1514_ = v___x_1498_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_reader_1489_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1515_, 2, v_config_1490_);
lean_ctor_set(v_reuseFailAlloc_1515_, 3, v_events_1491_);
lean_ctor_set(v_reuseFailAlloc_1515_, 4, v_error_1492_);
lean_ctor_set(v_reuseFailAlloc_1515_, 5, v_instant_1493_);
lean_ctor_set_uint8(v_reuseFailAlloc_1515_, sizeof(void*)*6, v_keepAlive_1494_);
lean_ctor_set_uint8(v_reuseFailAlloc_1515_, sizeof(void*)*6 + 1, v_forcedFlush_1495_);
lean_ctor_set_uint8(v_reuseFailAlloc_1515_, sizeof(void*)*6 + 2, v_pullBodyStalled_1496_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
v___y_1472_ = v___x_1514_;
goto v___jp_1471_;
}
}
}
}
}
else
{
lean_dec(v_a_1487_);
v___y_1472_ = v_machine_1468_;
goto v___jp_1471_;
}
}
v___jp_1471_:
{
lean_object* v___f_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___f_1473_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1473_, 0, v___y_1472_);
lean_closure_set(v___f_1473_, 1, v_body_1463_);
lean_closure_set(v___f_1473_, 2, v_close_1464_);
lean_closure_set(v___f_1473_, 3, v_isClosed_1465_);
v___x_1474_ = lean_unsigned_to_nat(0u);
v___x_1475_ = 0;
v___x_1476_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1466_, v_line_1467_);
v___x_1477_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1474_, v___x_1475_, v___x_1476_, v___f_1473_);
return v___x_1477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object* v_body_1520_, lean_object* v_close_1521_, lean_object* v_isClosed_1522_, lean_object* v_config_1523_, lean_object* v_line_1524_, lean_object* v_machine_1525_, lean_object* v_x_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(v_body_1520_, v_close_1521_, v_isClosed_1522_, v_config_1523_, v_line_1524_, v_machine_1525_, v_x_1526_);
lean_dec_ref(v_config_1523_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object* v_inst_1529_, lean_object* v_config_1530_, lean_object* v_machine_1531_, lean_object* v_res_1532_){
_start:
{
lean_object* v_close_1534_; lean_object* v_isClosed_1535_; lean_object* v_getKnownSize_1536_; lean_object* v_line_1537_; lean_object* v_body_1538_; lean_object* v___f_1539_; lean_object* v___x_1540_; uint8_t v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v_close_1534_ = lean_ctor_get(v_inst_1529_, 1);
lean_inc_ref(v_close_1534_);
v_isClosed_1535_ = lean_ctor_get(v_inst_1529_, 2);
lean_inc_ref(v_isClosed_1535_);
v_getKnownSize_1536_ = lean_ctor_get(v_inst_1529_, 5);
lean_inc_ref(v_getKnownSize_1536_);
lean_dec_ref(v_inst_1529_);
v_line_1537_ = lean_ctor_get(v_res_1532_, 0);
lean_inc_ref(v_line_1537_);
v_body_1538_ = lean_ctor_get(v_res_1532_, 1);
lean_inc_n(v_body_1538_, 2);
lean_dec_ref(v_res_1532_);
v___f_1539_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_1539_, 0, v_body_1538_);
lean_closure_set(v___f_1539_, 1, v_close_1534_);
lean_closure_set(v___f_1539_, 2, v_isClosed_1535_);
lean_closure_set(v___f_1539_, 3, v_config_1530_);
lean_closure_set(v___f_1539_, 4, v_line_1537_);
lean_closure_set(v___f_1539_, 5, v_machine_1531_);
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = 0;
v___x_1542_ = lean_apply_2(v_getKnownSize_1536_, v_body_1538_, lean_box(0));
v___x_1543_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1540_, v___x_1541_, v___x_1542_, v___f_1539_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object* v_inst_1544_, lean_object* v_config_1545_, lean_object* v_machine_1546_, lean_object* v_res_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1544_, v_config_1545_, v_machine_1546_, v_res_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object* v_00_u03b2_1550_, lean_object* v_inst_1551_, lean_object* v_config_1552_, lean_object* v_machine_1553_, lean_object* v_res_1554_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1551_, v_config_1552_, v_machine_1553_, v_res_1554_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object* v_00_u03b2_1557_, lean_object* v_inst_1558_, lean_object* v_config_1559_, lean_object* v_machine_1560_, lean_object* v_res_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(v_00_u03b2_1557_, v_inst_1558_, v_config_1559_, v_machine_1560_, v_res_1561_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object* v_____do__lift_1564_, lean_object* v___y_1565_){
_start:
{
uint8_t v_closed_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v_closed_1567_ = lean_ctor_get_uint8(v_____do__lift_1564_, sizeof(void*)*6);
v___x_1568_ = lean_box(v_closed_1567_);
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object* v_____do__lift_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(v_____do__lift_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v_____do__lift_1571_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object* v___x_1575_, lean_object* v_x_1576_){
_start:
{
if (lean_obj_tag(v_x_1576_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1586_; 
lean_dec_ref(v___x_1575_);
v_a_1578_ = lean_ctor_get(v_x_1576_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1580_ = v_x_1576_;
v_isShared_1581_ = v_isSharedCheck_1586_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v_x_1576_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1586_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
return v___x_1584_;
}
}
}
else
{
lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1595_; 
v_isSharedCheck_1595_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; 
v_unused_1596_ = lean_ctor_get(v_x_1576_, 0);
lean_dec(v_unused_1596_);
v___x_1588_ = v_x_1576_;
v_isShared_1589_ = v_isSharedCheck_1595_;
goto v_resetjp_1587_;
}
else
{
lean_dec(v_x_1576_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1595_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1590_; lean_object* v___x_1592_; 
v___x_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1575_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 0, v___x_1590_);
v___x_1592_ = v___x_1588_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1590_);
v___x_1592_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
return v___x_1593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object* v___x_1597_, lean_object* v_x_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(v___x_1597_, v_x_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object* v___x_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v___x_1608_; lean_object* v_pendingProducer_1609_; lean_object* v_pendingConsumer_1610_; lean_object* v_interestWaiter_1611_; uint8_t v_closed_1612_; lean_object* v_pendingIncompleteChunk_1613_; lean_object* v_closeError_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1623_; 
v___x_1608_ = lean_st_ref_take(v___y_1606_);
v_pendingProducer_1609_ = lean_ctor_get(v___x_1608_, 0);
v_pendingConsumer_1610_ = lean_ctor_get(v___x_1608_, 1);
v_interestWaiter_1611_ = lean_ctor_get(v___x_1608_, 2);
v_closed_1612_ = lean_ctor_get_uint8(v___x_1608_, sizeof(void*)*6);
v_pendingIncompleteChunk_1613_ = lean_ctor_get(v___x_1608_, 4);
v_closeError_1614_ = lean_ctor_get(v___x_1608_, 5);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1623_ == 0)
{
lean_object* v_unused_1624_; 
v_unused_1624_ = lean_ctor_get(v___x_1608_, 3);
lean_dec(v_unused_1624_);
v___x_1616_ = v___x_1608_;
v_isShared_1617_ = v_isSharedCheck_1623_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_closeError_1614_);
lean_inc(v_pendingIncompleteChunk_1613_);
lean_inc(v_interestWaiter_1611_);
lean_inc(v_pendingConsumer_1610_);
lean_inc(v_pendingProducer_1609_);
lean_dec(v___x_1608_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1623_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 3, v___x_1605_);
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_pendingProducer_1609_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_pendingConsumer_1610_);
lean_ctor_set(v_reuseFailAlloc_1622_, 2, v_interestWaiter_1611_);
lean_ctor_set(v_reuseFailAlloc_1622_, 3, v___x_1605_);
lean_ctor_set(v_reuseFailAlloc_1622_, 4, v_pendingIncompleteChunk_1613_);
lean_ctor_set(v_reuseFailAlloc_1622_, 5, v_closeError_1614_);
lean_ctor_set_uint8(v_reuseFailAlloc_1622_, sizeof(void*)*6, v_closed_1612_);
v___x_1619_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = lean_st_ref_put(v___y_1606_, v___x_1619_);
v___x_1621_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1));
return v___x_1621_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object* v___x_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(v___x_1625_, v___y_1626_);
lean_dec(v___y_1626_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object* v_machine_1629_, lean_object* v_requestStream_1630_, lean_object* v_keepAliveTimeout_1631_, lean_object* v_currentTimeout_1632_, lean_object* v_headerTimeout_1633_, lean_object* v_response_1634_, lean_object* v_respStream_1635_, lean_object* v_expectData_1636_, uint8_t v_handlerDispatched_1637_, lean_object* v_____r_1638_){
_start:
{
uint8_t v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1640_ = 0;
v___x_1641_ = lean_box(0);
v___x_1642_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1642_, 0, v_machine_1629_);
lean_ctor_set(v___x_1642_, 1, v_requestStream_1630_);
lean_ctor_set(v___x_1642_, 2, v_keepAliveTimeout_1631_);
lean_ctor_set(v___x_1642_, 3, v_currentTimeout_1632_);
lean_ctor_set(v___x_1642_, 4, v_headerTimeout_1633_);
lean_ctor_set(v___x_1642_, 5, v_response_1634_);
lean_ctor_set(v___x_1642_, 6, v_respStream_1635_);
lean_ctor_set(v___x_1642_, 7, v_expectData_1636_);
lean_ctor_set(v___x_1642_, 8, v___x_1641_);
lean_ctor_set_uint8(v___x_1642_, sizeof(void*)*9, v___x_1640_);
lean_ctor_set_uint8(v___x_1642_, sizeof(void*)*9 + 1, v_handlerDispatched_1637_);
v___x_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
v___x_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object* v_machine_1646_, lean_object* v_requestStream_1647_, lean_object* v_keepAliveTimeout_1648_, lean_object* v_currentTimeout_1649_, lean_object* v_headerTimeout_1650_, lean_object* v_response_1651_, lean_object* v_respStream_1652_, lean_object* v_expectData_1653_, lean_object* v_handlerDispatched_1654_, lean_object* v_____r_1655_, lean_object* v___y_1656_){
_start:
{
uint8_t v_handlerDispatched_boxed_1657_; lean_object* v_res_1658_; 
v_handlerDispatched_boxed_1657_ = lean_unbox(v_handlerDispatched_1654_);
v_res_1658_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(v_machine_1646_, v_requestStream_1647_, v_keepAliveTimeout_1648_, v_currentTimeout_1649_, v_headerTimeout_1650_, v_response_1651_, v_respStream_1652_, v_expectData_1653_, v_handlerDispatched_boxed_1657_, v_____r_1655_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object* v___f_1659_, lean_object* v_x_1660_){
_start:
{
if (lean_obj_tag(v_x_1660_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1670_; 
lean_dec_ref(v___f_1659_);
v_a_1662_ = lean_ctor_get(v_x_1660_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_x_1660_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1664_ = v_x_1660_;
v_isShared_1665_ = v_isSharedCheck_1670_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v_x_1660_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1670_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
return v___x_1668_;
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1672_; 
v_a_1671_ = lean_ctor_get(v_x_1660_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v_x_1660_, 1);
v___x_1672_ = lean_apply_2(v___f_1659_, v_a_1671_, lean_box(0));
return v___x_1672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object* v___f_1673_, lean_object* v_x_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(v___f_1673_, v_x_1674_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object* v_requestStream_1677_, lean_object* v___f_1678_, lean_object* v___f_1679_, lean_object* v_x_1680_){
_start:
{
if (lean_obj_tag(v_x_1680_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1690_; 
lean_dec_ref(v___f_1679_);
lean_dec_ref(v___f_1678_);
lean_dec_ref(v_requestStream_1677_);
v_a_1682_ = lean_ctor_get(v_x_1680_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v_x_1680_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1684_ = v_x_1680_;
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v_x_1680_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
return v___x_1688_;
}
}
}
else
{
lean_object* v_a_1691_; uint8_t v___x_1692_; 
v_a_1691_ = lean_ctor_get(v_x_1680_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v_x_1680_, 1);
v___x_1692_ = lean_unbox(v_a_1691_);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; lean_object* v___x_1694_; uint8_t v___x_1695_; lean_object* v___x_1696_; 
lean_dec_ref(v___f_1679_);
v___x_1693_ = lean_unsigned_to_nat(0u);
v___x_1694_ = l_Std_Http_Body_Stream_close(v_requestStream_1677_);
v___x_1695_ = lean_unbox(v_a_1691_);
lean_dec(v_a_1691_);
v___x_1696_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1693_, v___x_1695_, v___x_1694_, v___f_1678_);
return v___x_1696_;
}
else
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec(v_a_1691_);
lean_dec_ref(v___f_1678_);
lean_dec_ref(v_requestStream_1677_);
v___x_1697_ = lean_box(0);
v___x_1698_ = lean_apply_2(v___f_1679_, v___x_1697_, lean_box(0));
return v___x_1698_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object* v_requestStream_1699_, lean_object* v___f_1700_, lean_object* v___f_1701_, lean_object* v_x_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(v_requestStream_1699_, v___f_1700_, v___f_1701_, v_x_1702_);
return v_res_1704_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1705_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_1706_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1712_; lean_object* v___f_1713_; lean_object* v___f_1714_; 
v___x_1712_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1713_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4));
v___f_1714_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1714_, 0, v___f_1713_);
lean_closure_set(v___f_1714_, 1, v___x_1712_);
return v___f_1714_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1723_; lean_object* v___f_1724_; lean_object* v___f_1725_; 
v___x_1723_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1724_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9));
v___f_1725_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1725_, 0, v___f_1724_);
lean_closure_set(v___f_1725_, 1, v___x_1723_);
return v___f_1725_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11(void){
_start:
{
lean_object* v___f_1726_; lean_object* v___x_1727_; 
v___f_1726_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10);
v___x_1727_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_1727_, 0, lean_box(0));
lean_closure_set(v___x_1727_, 1, lean_box(0));
lean_closure_set(v___x_1727_, 2, lean_box(0));
lean_closure_set(v___x_1727_, 3, v___f_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object* v___y_1728_, lean_object* v___f_1729_, lean_object* v_x_1730_){
_start:
{
if (lean_obj_tag(v_x_1730_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1740_; 
lean_dec_ref(v___f_1729_);
lean_dec_ref(v___y_1728_);
v_a_1732_ = lean_ctor_get(v_x_1730_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_x_1730_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1734_ = v_x_1730_;
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v_x_1730_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; 
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
return v___x_1738_;
}
}
}
else
{
lean_object* v_machine_1741_; lean_object* v_requestStream_1742_; lean_object* v_keepAliveTimeout_1743_; lean_object* v_currentTimeout_1744_; lean_object* v_headerTimeout_1745_; lean_object* v_response_1746_; lean_object* v_respStream_1747_; lean_object* v_expectData_1748_; uint8_t v_handlerDispatched_1749_; lean_object* v___x_1750_; lean_object* v___f_1751_; lean_object* v___f_1752_; lean_object* v___f_1753_; lean_object* v___x_1754_; uint8_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___f_1757_; lean_object* v___f_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_4870__overap_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec_ref_known(v_x_1730_, 1);
v_machine_1741_ = lean_ctor_get(v___y_1728_, 0);
lean_inc_ref(v_machine_1741_);
v_requestStream_1742_ = lean_ctor_get(v___y_1728_, 1);
lean_inc_ref_n(v_requestStream_1742_, 3);
v_keepAliveTimeout_1743_ = lean_ctor_get(v___y_1728_, 2);
lean_inc(v_keepAliveTimeout_1743_);
v_currentTimeout_1744_ = lean_ctor_get(v___y_1728_, 3);
lean_inc(v_currentTimeout_1744_);
v_headerTimeout_1745_ = lean_ctor_get(v___y_1728_, 4);
lean_inc(v_headerTimeout_1745_);
v_response_1746_ = lean_ctor_get(v___y_1728_, 5);
lean_inc_ref(v_response_1746_);
v_respStream_1747_ = lean_ctor_get(v___y_1728_, 6);
lean_inc(v_respStream_1747_);
v_expectData_1748_ = lean_ctor_get(v___y_1728_, 7);
lean_inc(v_expectData_1748_);
v_handlerDispatched_1749_ = lean_ctor_get_uint8(v___y_1728_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_1728_);
v___x_1750_ = lean_box(v_handlerDispatched_1749_);
v___f_1751_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed), 11, 9);
lean_closure_set(v___f_1751_, 0, v_machine_1741_);
lean_closure_set(v___f_1751_, 1, v_requestStream_1742_);
lean_closure_set(v___f_1751_, 2, v_keepAliveTimeout_1743_);
lean_closure_set(v___f_1751_, 3, v_currentTimeout_1744_);
lean_closure_set(v___f_1751_, 4, v_headerTimeout_1745_);
lean_closure_set(v___f_1751_, 5, v_response_1746_);
lean_closure_set(v___f_1751_, 6, v_respStream_1747_);
lean_closure_set(v___f_1751_, 7, v_expectData_1748_);
lean_closure_set(v___f_1751_, 8, v___x_1750_);
lean_inc_ref(v___f_1751_);
v___f_1752_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1752_, 0, v___f_1751_);
v___f_1753_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1753_, 0, v_requestStream_1742_);
lean_closure_set(v___f_1753_, 1, v___f_1752_);
lean_closure_set(v___f_1753_, 2, v___f_1751_);
v___x_1754_ = lean_unsigned_to_nat(0u);
v___x_1755_ = 0;
v___x_1756_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_1757_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_1758_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_1759_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_1760_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1760_, 0, lean_box(0));
lean_closure_set(v___x_1760_, 1, lean_box(0));
lean_closure_set(v___x_1760_, 2, v___x_1756_);
lean_closure_set(v___x_1760_, 3, lean_box(0));
lean_closure_set(v___x_1760_, 4, lean_box(0));
lean_closure_set(v___x_1760_, 5, v___x_1759_);
lean_closure_set(v___x_1760_, 6, v___f_1729_);
v___x_4870__overap_1761_ = l_Std_Mutex_atomically___redArg(v___x_1756_, v___f_1757_, v___f_1758_, v_requestStream_1742_, v___x_1760_);
v___x_1762_ = lean_apply_1(v___x_4870__overap_1761_, lean_box(0));
v___x_1763_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1754_, v___x_1755_, v___x_1762_, v___f_1753_);
return v___x_1763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object* v___y_1764_, lean_object* v___f_1765_, lean_object* v_x_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(v___y_1764_, v___f_1765_, v_x_1766_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object* v___y_1769_, lean_object* v_x_1770_){
_start:
{
if (lean_obj_tag(v_x_1770_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1780_; 
lean_dec_ref(v___y_1769_);
v_a_1772_ = lean_ctor_get(v_x_1770_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_x_1770_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1774_ = v_x_1770_;
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v_x_1770_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
return v___x_1778_;
}
}
}
else
{
lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1789_; 
v_isSharedCheck_1789_ = !lean_is_exclusive(v_x_1770_);
if (v_isSharedCheck_1789_ == 0)
{
lean_object* v_unused_1790_; 
v_unused_1790_ = lean_ctor_get(v_x_1770_, 0);
lean_dec(v_unused_1790_);
v___x_1782_ = v_x_1770_;
v_isShared_1783_ = v_isSharedCheck_1789_;
goto v_resetjp_1781_;
}
else
{
lean_dec(v_x_1770_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1789_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; lean_object* v___x_1786_; 
v___x_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1784_, 0, v___y_1769_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 0, v___x_1784_);
v___x_1786_ = v___x_1782_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1784_);
v___x_1786_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1787_; 
v___x_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1786_);
return v___x_1787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object* v___y_1791_, lean_object* v_x_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(v___y_1791_, v_x_1792_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object* v_requestStream_1795_, lean_object* v___f_1796_, lean_object* v___y_1797_, lean_object* v_x_1798_){
_start:
{
if (lean_obj_tag(v_x_1798_) == 0)
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1808_; 
lean_dec_ref(v___y_1797_);
lean_dec_ref(v___f_1796_);
lean_dec_ref(v_requestStream_1795_);
v_a_1800_ = lean_ctor_get(v_x_1798_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_x_1798_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1802_ = v_x_1798_;
v_isShared_1803_ = v_isSharedCheck_1808_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v_x_1798_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1808_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_a_1800_);
v___x_1805_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
return v___x_1806_;
}
}
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1823_; 
v_a_1809_ = lean_ctor_get(v_x_1798_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_x_1798_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1811_ = v_x_1798_;
v_isShared_1812_ = v_isSharedCheck_1823_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v_x_1798_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1823_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
uint8_t v___x_1813_; 
v___x_1813_ = lean_unbox(v_a_1809_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; lean_object* v___x_1817_; 
lean_del_object(v___x_1811_);
lean_dec_ref(v___y_1797_);
v___x_1814_ = lean_unsigned_to_nat(0u);
v___x_1815_ = l_Std_Http_Body_Stream_close(v_requestStream_1795_);
v___x_1816_ = lean_unbox(v_a_1809_);
lean_dec(v_a_1809_);
v___x_1817_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1814_, v___x_1816_, v___x_1815_, v___f_1796_);
return v___x_1817_;
}
else
{
lean_object* v___x_1818_; lean_object* v___x_1820_; 
lean_dec(v_a_1809_);
lean_dec_ref(v___f_1796_);
lean_dec_ref(v_requestStream_1795_);
v___x_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___y_1797_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 0, v___x_1818_);
v___x_1820_ = v___x_1811_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1818_);
v___x_1820_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1821_; 
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1820_);
return v___x_1821_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object* v_requestStream_1824_, lean_object* v___f_1825_, lean_object* v___y_1826_, lean_object* v_x_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(v_requestStream_1824_, v___f_1825_, v___y_1826_, v_x_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object* v_config_1830_, lean_object* v_machine_1831_, lean_object* v_a_1832_, uint8_t v_requiresData_1833_, lean_object* v_expectData_1834_, lean_object* v_pendingHead_1835_, lean_object* v_x_1836_){
_start:
{
if (lean_obj_tag(v_x_1836_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1846_; 
lean_dec(v_pendingHead_1835_);
lean_dec(v_expectData_1834_);
lean_dec_ref(v_a_1832_);
lean_dec_ref(v_machine_1831_);
v_a_1838_ = lean_ctor_get(v_x_1836_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_x_1836_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1840_ = v_x_1836_;
v_isShared_1841_ = v_isSharedCheck_1846_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v_x_1836_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1846_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1844_; 
v___x_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
return v___x_1844_;
}
}
}
else
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1861_; 
v_a_1847_ = lean_ctor_get(v_x_1836_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v_x_1836_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1849_ = v_x_1836_;
v_isShared_1850_ = v_isSharedCheck_1861_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v_x_1836_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1861_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v_keepAliveTimeout_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1858_; 
v_keepAliveTimeout_1851_ = lean_ctor_get(v_config_1830_, 5);
lean_inc_n(v_keepAliveTimeout_1851_, 2);
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v_keepAliveTimeout_1851_);
v___x_1853_ = lean_box(0);
v___x_1854_ = 0;
v___x_1855_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1855_, 0, v_machine_1831_);
lean_ctor_set(v___x_1855_, 1, v_a_1832_);
lean_ctor_set(v___x_1855_, 2, v___x_1852_);
lean_ctor_set(v___x_1855_, 3, v_keepAliveTimeout_1851_);
lean_ctor_set(v___x_1855_, 4, v___x_1853_);
lean_ctor_set(v___x_1855_, 5, v_a_1847_);
lean_ctor_set(v___x_1855_, 6, v___x_1853_);
lean_ctor_set(v___x_1855_, 7, v_expectData_1834_);
lean_ctor_set(v___x_1855_, 8, v_pendingHead_1835_);
lean_ctor_set_uint8(v___x_1855_, sizeof(void*)*9, v_requiresData_1833_);
lean_ctor_set_uint8(v___x_1855_, sizeof(void*)*9 + 1, v___x_1854_);
v___x_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1856_);
v___x_1858_ = v___x_1849_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
return v___x_1859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object* v_config_1862_, lean_object* v_machine_1863_, lean_object* v_a_1864_, lean_object* v_requiresData_1865_, lean_object* v_expectData_1866_, lean_object* v_pendingHead_1867_, lean_object* v_x_1868_, lean_object* v___y_1869_){
_start:
{
uint8_t v_requiresData_boxed_1870_; lean_object* v_res_1871_; 
v_requiresData_boxed_1870_ = lean_unbox(v_requiresData_1865_);
v_res_1871_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(v_config_1862_, v_machine_1863_, v_a_1864_, v_requiresData_boxed_1870_, v_expectData_1866_, v_pendingHead_1867_, v_x_1868_);
lean_dec_ref(v_config_1862_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object* v_config_1872_, lean_object* v_machine_1873_, uint8_t v_requiresData_1874_, lean_object* v_expectData_1875_, lean_object* v_pendingHead_1876_, lean_object* v_x_1877_){
_start:
{
if (lean_obj_tag(v_x_1877_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1887_; 
lean_dec(v_pendingHead_1876_);
lean_dec(v_expectData_1875_);
lean_dec_ref(v_machine_1873_);
lean_dec_ref(v_config_1872_);
v_a_1879_ = lean_ctor_get(v_x_1877_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_x_1877_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1881_ = v_x_1877_;
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v_x_1877_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1884_);
return v___x_1885_;
}
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1903_; 
v_a_1888_ = lean_ctor_get(v_x_1877_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_x_1877_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1890_ = v_x_1877_;
v_isShared_1891_ = v_isSharedCheck_1903_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v_x_1877_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1903_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1892_; lean_object* v___f_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1899_; 
v___x_1892_ = lean_box(v_requiresData_1874_);
v___f_1893_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed), 8, 6);
lean_closure_set(v___f_1893_, 0, v_config_1872_);
lean_closure_set(v___f_1893_, 1, v_machine_1873_);
lean_closure_set(v___f_1893_, 2, v_a_1888_);
lean_closure_set(v___f_1893_, 3, v___x_1892_);
lean_closure_set(v___f_1893_, 4, v_expectData_1875_);
lean_closure_set(v___f_1893_, 5, v_pendingHead_1876_);
v___x_1894_ = lean_box(0);
v___x_1895_ = lean_unsigned_to_nat(0u);
v___x_1896_ = 0;
v___x_1897_ = l_Std_CloseableChannel_new___redArg(v___x_1894_);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 0, v___x_1897_);
v___x_1899_ = v___x_1890_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v___x_1897_);
v___x_1899_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
v___x_1901_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1895_, v___x_1896_, v___x_1900_, v___f_1893_);
return v___x_1901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object* v_config_1904_, lean_object* v_machine_1905_, lean_object* v_requiresData_1906_, lean_object* v_expectData_1907_, lean_object* v_pendingHead_1908_, lean_object* v_x_1909_, lean_object* v___y_1910_){
_start:
{
uint8_t v_requiresData_boxed_1911_; lean_object* v_res_1912_; 
v_requiresData_boxed_1911_ = lean_unbox(v_requiresData_1906_);
v_res_1912_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(v_config_1904_, v_machine_1905_, v_requiresData_boxed_1911_, v_expectData_1907_, v_pendingHead_1908_, v_x_1909_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object* v___f_1913_, lean_object* v_____r_1914_){
_start:
{
lean_object* v___x_1916_; uint8_t v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1916_ = lean_unsigned_to_nat(0u);
v___x_1917_ = 0;
v___x_1918_ = l_Std_Http_Body_mkStream();
v___x_1919_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1916_, v___x_1917_, v___x_1918_, v___f_1913_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object* v___f_1920_, lean_object* v_____r_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(v___f_1920_, v_____r_1921_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object* v_close_1924_, lean_object* v_val_1925_, lean_object* v___f_1926_, lean_object* v___f_1927_, lean_object* v_x_1928_){
_start:
{
if (lean_obj_tag(v_x_1928_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1938_; 
lean_dec_ref(v___f_1927_);
lean_dec_ref(v___f_1926_);
lean_dec(v_val_1925_);
lean_dec_ref(v_close_1924_);
v_a_1930_ = lean_ctor_get(v_x_1928_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_x_1928_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1932_ = v_x_1928_;
v_isShared_1933_ = v_isSharedCheck_1938_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v_x_1928_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1938_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1935_);
return v___x_1936_;
}
}
}
else
{
lean_object* v_a_1939_; uint8_t v___x_1940_; 
v_a_1939_ = lean_ctor_get(v_x_1928_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v_x_1928_, 1);
v___x_1940_ = lean_unbox(v_a_1939_);
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; lean_object* v___x_1944_; 
lean_dec_ref(v___f_1927_);
v___x_1941_ = lean_unsigned_to_nat(0u);
v___x_1942_ = lean_apply_2(v_close_1924_, v_val_1925_, lean_box(0));
v___x_1943_ = lean_unbox(v_a_1939_);
lean_dec(v_a_1939_);
v___x_1944_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1941_, v___x_1943_, v___x_1942_, v___f_1926_);
return v___x_1944_;
}
else
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_dec(v_a_1939_);
lean_dec_ref(v___f_1926_);
lean_dec(v_val_1925_);
lean_dec_ref(v_close_1924_);
v___x_1945_ = lean_box(0);
v___x_1946_ = lean_apply_2(v___f_1927_, v___x_1945_, lean_box(0));
return v___x_1946_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object* v_close_1947_, lean_object* v_val_1948_, lean_object* v___f_1949_, lean_object* v___f_1950_, lean_object* v_x_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(v_close_1947_, v_val_1948_, v___f_1949_, v___f_1950_, v_x_1951_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object* v_respStream_1954_, lean_object* v_inst_1955_, lean_object* v___f_1956_, lean_object* v___f_1957_, lean_object* v_____r_1958_){
_start:
{
if (lean_obj_tag(v_respStream_1954_) == 1)
{
lean_object* v_val_1960_; lean_object* v_close_1961_; lean_object* v_isClosed_1962_; lean_object* v___f_1963_; lean_object* v___x_1964_; uint8_t v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v_val_1960_ = lean_ctor_get(v_respStream_1954_, 0);
lean_inc_n(v_val_1960_, 2);
lean_dec_ref_known(v_respStream_1954_, 1);
v_close_1961_ = lean_ctor_get(v_inst_1955_, 1);
lean_inc_ref(v_close_1961_);
v_isClosed_1962_ = lean_ctor_get(v_inst_1955_, 2);
lean_inc_ref(v_isClosed_1962_);
lean_dec_ref(v_inst_1955_);
v___f_1963_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed), 6, 4);
lean_closure_set(v___f_1963_, 0, v_close_1961_);
lean_closure_set(v___f_1963_, 1, v_val_1960_);
lean_closure_set(v___f_1963_, 2, v___f_1956_);
lean_closure_set(v___f_1963_, 3, v___f_1957_);
v___x_1964_ = lean_unsigned_to_nat(0u);
v___x_1965_ = 0;
v___x_1966_ = lean_apply_2(v_isClosed_1962_, v_val_1960_, lean_box(0));
v___x_1967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1964_, v___x_1965_, v___x_1966_, v___f_1963_);
return v___x_1967_;
}
else
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
lean_dec_ref(v___f_1956_);
lean_dec_ref(v_inst_1955_);
lean_dec(v_respStream_1954_);
v___x_1968_ = lean_box(0);
v___x_1969_ = lean_apply_2(v___f_1957_, v___x_1968_, lean_box(0));
return v___x_1969_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object* v_respStream_1970_, lean_object* v_inst_1971_, lean_object* v___f_1972_, lean_object* v___f_1973_, lean_object* v_____r_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(v_respStream_1970_, v_inst_1971_, v___f_1972_, v___f_1973_, v_____r_1974_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object* v_requestStream_1977_, lean_object* v_keepAliveTimeout_1978_, lean_object* v_currentTimeout_1979_, lean_object* v_headerTimeout_1980_, lean_object* v_response_1981_, lean_object* v_respStream_1982_, uint8_t v_requiresData_1983_, lean_object* v_expectData_1984_, uint8_t v_handlerDispatched_1985_, lean_object* v_pendingHead_1986_, lean_object* v_x_1987_){
_start:
{
if (lean_obj_tag(v_x_1987_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1997_; 
lean_dec(v_pendingHead_1986_);
lean_dec(v_expectData_1984_);
lean_dec(v_respStream_1982_);
lean_dec_ref(v_response_1981_);
lean_dec(v_headerTimeout_1980_);
lean_dec(v_currentTimeout_1979_);
lean_dec(v_keepAliveTimeout_1978_);
lean_dec_ref(v_requestStream_1977_);
v_a_1989_ = lean_ctor_get(v_x_1987_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_x_1987_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1991_ = v_x_1987_;
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v_x_1987_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1989_);
v___x_1994_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1994_);
return v___x_1995_;
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2019_; 
v_a_1998_ = lean_ctor_get(v_x_1987_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_x_1987_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2000_ = v_x_1987_;
v_isShared_2001_ = v_isSharedCheck_2019_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v_x_1987_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2019_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v_snd_2002_; uint8_t v___x_2003_; 
v_snd_2002_ = lean_ctor_get(v_a_1998_, 1);
v___x_2003_ = lean_unbox(v_snd_2002_);
if (v___x_2003_ == 0)
{
lean_object* v_fst_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v_fst_2004_ = lean_ctor_get(v_a_1998_, 0);
lean_inc(v_fst_2004_);
lean_dec(v_a_1998_);
v___x_2005_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2005_, 0, v_fst_2004_);
lean_ctor_set(v___x_2005_, 1, v_requestStream_1977_);
lean_ctor_set(v___x_2005_, 2, v_keepAliveTimeout_1978_);
lean_ctor_set(v___x_2005_, 3, v_currentTimeout_1979_);
lean_ctor_set(v___x_2005_, 4, v_headerTimeout_1980_);
lean_ctor_set(v___x_2005_, 5, v_response_1981_);
lean_ctor_set(v___x_2005_, 6, v_respStream_1982_);
lean_ctor_set(v___x_2005_, 7, v_expectData_1984_);
lean_ctor_set(v___x_2005_, 8, v_pendingHead_1986_);
lean_ctor_set_uint8(v___x_2005_, sizeof(void*)*9, v_requiresData_1983_);
lean_ctor_set_uint8(v___x_2005_, sizeof(void*)*9 + 1, v_handlerDispatched_1985_);
v___x_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2006_);
v___x_2008_ = v___x_2000_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2008_);
return v___x_2009_;
}
}
else
{
lean_object* v_fst_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2016_; 
lean_dec(v_pendingHead_1986_);
v_fst_2011_ = lean_ctor_get(v_a_1998_, 0);
lean_inc(v_fst_2011_);
lean_dec(v_a_1998_);
v___x_2012_ = lean_box(0);
v___x_2013_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2013_, 0, v_fst_2011_);
lean_ctor_set(v___x_2013_, 1, v_requestStream_1977_);
lean_ctor_set(v___x_2013_, 2, v_keepAliveTimeout_1978_);
lean_ctor_set(v___x_2013_, 3, v_currentTimeout_1979_);
lean_ctor_set(v___x_2013_, 4, v_headerTimeout_1980_);
lean_ctor_set(v___x_2013_, 5, v_response_1981_);
lean_ctor_set(v___x_2013_, 6, v_respStream_1982_);
lean_ctor_set(v___x_2013_, 7, v_expectData_1984_);
lean_ctor_set(v___x_2013_, 8, v___x_2012_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*9, v_requiresData_1983_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*9 + 1, v_handlerDispatched_1985_);
v___x_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2014_);
v___x_2016_ = v___x_2000_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
return v___x_2017_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object* v_requestStream_2020_, lean_object* v_keepAliveTimeout_2021_, lean_object* v_currentTimeout_2022_, lean_object* v_headerTimeout_2023_, lean_object* v_response_2024_, lean_object* v_respStream_2025_, lean_object* v_requiresData_2026_, lean_object* v_expectData_2027_, lean_object* v_handlerDispatched_2028_, lean_object* v_pendingHead_2029_, lean_object* v_x_2030_, lean_object* v___y_2031_){
_start:
{
uint8_t v_requiresData_boxed_2032_; uint8_t v_handlerDispatched_boxed_2033_; lean_object* v_res_2034_; 
v_requiresData_boxed_2032_ = lean_unbox(v_requiresData_2026_);
v_handlerDispatched_boxed_2033_ = lean_unbox(v_handlerDispatched_2028_);
v_res_2034_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(v_requestStream_2020_, v_keepAliveTimeout_2021_, v_currentTimeout_2022_, v_headerTimeout_2023_, v_response_2024_, v_respStream_2025_, v_requiresData_boxed_2032_, v_expectData_2027_, v_handlerDispatched_boxed_2033_, v_pendingHead_2029_, v_x_2030_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object* v_config_2047_, lean_object* v_inst_2048_, lean_object* v___f_2049_, lean_object* v_handler_2050_, lean_object* v___f_2051_, lean_object* v_inst_2052_, lean_object* v___f_2053_, lean_object* v_connectionContext_2054_, lean_object* v_a_2055_, lean_object* v_x_2056_, lean_object* v___y_2057_){
_start:
{
switch(lean_obj_tag(v_a_2055_))
{
case 0:
{
lean_object* v_head_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2102_; 
lean_dec_ref(v_connectionContext_2054_);
lean_dec_ref(v___f_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v___f_2051_);
lean_dec(v_handler_2050_);
lean_dec_ref(v___f_2049_);
lean_dec_ref(v_inst_2048_);
v_head_2059_ = lean_ctor_get(v_a_2055_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_a_2055_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2061_ = v_a_2055_;
v_isShared_2062_ = v_isSharedCheck_2102_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_head_2059_);
lean_dec(v_a_2055_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2102_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v_machine_2063_; lean_object* v_requestStream_2064_; lean_object* v_response_2065_; lean_object* v_respStream_2066_; uint8_t v_requiresData_2067_; lean_object* v_expectData_2068_; uint8_t v_handlerDispatched_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2097_; 
v_machine_2063_ = lean_ctor_get(v___y_2057_, 0);
v_requestStream_2064_ = lean_ctor_get(v___y_2057_, 1);
v_response_2065_ = lean_ctor_get(v___y_2057_, 5);
v_respStream_2066_ = lean_ctor_get(v___y_2057_, 6);
v_requiresData_2067_ = lean_ctor_get_uint8(v___y_2057_, sizeof(void*)*9);
v_expectData_2068_ = lean_ctor_get(v___y_2057_, 7);
v_handlerDispatched_2069_ = lean_ctor_get_uint8(v___y_2057_, sizeof(void*)*9 + 1);
v_isSharedCheck_2097_ = !lean_is_exclusive(v___y_2057_);
if (v_isSharedCheck_2097_ == 0)
{
lean_object* v_unused_2098_; lean_object* v_unused_2099_; lean_object* v_unused_2100_; lean_object* v_unused_2101_; 
v_unused_2098_ = lean_ctor_get(v___y_2057_, 8);
lean_dec(v_unused_2098_);
v_unused_2099_ = lean_ctor_get(v___y_2057_, 4);
lean_dec(v_unused_2099_);
v_unused_2100_ = lean_ctor_get(v___y_2057_, 3);
lean_dec(v_unused_2100_);
v_unused_2101_ = lean_ctor_get(v___y_2057_, 2);
lean_dec(v_unused_2101_);
v___x_2071_ = v___y_2057_;
v_isShared_2072_ = v_isSharedCheck_2097_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_expectData_2068_);
lean_inc(v_respStream_2066_);
lean_inc(v_response_2065_);
lean_inc(v_requestStream_2064_);
lean_inc(v_machine_2063_);
lean_dec(v___y_2057_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2097_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v_lingeringTimeout_2073_; lean_object* v___x_2074_; lean_object* v___x_2076_; 
v_lingeringTimeout_2073_ = lean_ctor_get(v_config_2047_, 4);
lean_inc(v_lingeringTimeout_2073_);
lean_dec_ref(v_config_2047_);
v___x_2074_ = lean_box(0);
lean_inc(v_head_2059_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set_tag(v___x_2061_, 1);
v___x_2076_ = v___x_2061_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_head_2059_);
v___x_2076_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2078_; 
lean_inc_ref(v_requestStream_2064_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 8, v___x_2076_);
lean_ctor_set(v___x_2071_, 4, v___x_2074_);
lean_ctor_set(v___x_2071_, 3, v_lingeringTimeout_2073_);
lean_ctor_set(v___x_2071_, 2, v___x_2074_);
v___x_2078_ = v___x_2071_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_machine_2063_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_requestStream_2064_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2095_, 3, v_lingeringTimeout_2073_);
lean_ctor_set(v_reuseFailAlloc_2095_, 4, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2095_, 5, v_response_2065_);
lean_ctor_set(v_reuseFailAlloc_2095_, 6, v_respStream_2066_);
lean_ctor_set(v_reuseFailAlloc_2095_, 7, v_expectData_2068_);
lean_ctor_set(v_reuseFailAlloc_2095_, 8, v___x_2076_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*9, v_requiresData_2067_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*9 + 1, v_handlerDispatched_2069_);
v___x_2078_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
uint8_t v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = 0;
v___x_2080_ = 1;
v___x_2081_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_2079_, v_head_2059_, v___x_2080_);
lean_dec(v_head_2059_);
if (lean_obj_tag(v___x_2081_) == 1)
{
lean_object* v___f_2082_; lean_object* v___f_2083_; lean_object* v___x_2084_; uint8_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___f_2087_; lean_object* v___f_2088_; lean_object* v___x_5061__overap_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___f_2082_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2082_, 0, v___x_2078_);
v___f_2083_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2083_, 0, v___x_2081_);
v___x_2084_ = lean_unsigned_to_nat(0u);
v___x_2085_ = 0;
v___x_2086_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2087_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2088_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_5061__overap_2089_ = l_Std_Mutex_atomically___redArg(v___x_2086_, v___f_2087_, v___f_2088_, v_requestStream_2064_, v___f_2083_);
v___x_2090_ = lean_apply_1(v___x_5061__overap_2089_, lean_box(0));
v___x_2091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2084_, v___x_2085_, v___x_2090_, v___f_2082_);
return v___x_2091_;
}
else
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_dec(v___x_2081_);
lean_dec_ref(v_requestStream_2064_);
v___x_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2078_);
v___x_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
v___x_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
return v___x_2094_;
}
}
}
}
}
}
case 1:
{
lean_object* v_size_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2130_; 
lean_dec_ref(v_connectionContext_2054_);
lean_dec_ref(v___f_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v___f_2051_);
lean_dec(v_handler_2050_);
lean_dec_ref(v___f_2049_);
lean_dec_ref(v_inst_2048_);
lean_dec_ref(v_config_2047_);
v_size_2103_ = lean_ctor_get(v_a_2055_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_a_2055_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2105_ = v_a_2055_;
v_isShared_2106_ = v_isSharedCheck_2130_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_size_2103_);
lean_dec(v_a_2055_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2130_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v_machine_2107_; lean_object* v_requestStream_2108_; lean_object* v_keepAliveTimeout_2109_; lean_object* v_currentTimeout_2110_; lean_object* v_headerTimeout_2111_; lean_object* v_response_2112_; lean_object* v_respStream_2113_; uint8_t v_handlerDispatched_2114_; lean_object* v_pendingHead_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2128_; 
v_machine_2107_ = lean_ctor_get(v___y_2057_, 0);
v_requestStream_2108_ = lean_ctor_get(v___y_2057_, 1);
v_keepAliveTimeout_2109_ = lean_ctor_get(v___y_2057_, 2);
v_currentTimeout_2110_ = lean_ctor_get(v___y_2057_, 3);
v_headerTimeout_2111_ = lean_ctor_get(v___y_2057_, 4);
v_response_2112_ = lean_ctor_get(v___y_2057_, 5);
v_respStream_2113_ = lean_ctor_get(v___y_2057_, 6);
v_handlerDispatched_2114_ = lean_ctor_get_uint8(v___y_2057_, sizeof(void*)*9 + 1);
v_pendingHead_2115_ = lean_ctor_get(v___y_2057_, 8);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___y_2057_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v___y_2057_, 7);
lean_dec(v_unused_2129_);
v___x_2117_ = v___y_2057_;
v_isShared_2118_ = v_isSharedCheck_2128_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_pendingHead_2115_);
lean_inc(v_respStream_2113_);
lean_inc(v_response_2112_);
lean_inc(v_headerTimeout_2111_);
lean_inc(v_currentTimeout_2110_);
lean_inc(v_keepAliveTimeout_2109_);
lean_inc(v_requestStream_2108_);
lean_inc(v_machine_2107_);
lean_dec(v___y_2057_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2128_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
uint8_t v___x_2119_; lean_object* v___x_2121_; 
v___x_2119_ = 1;
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 7, v_size_2103_);
v___x_2121_ = v___x_2117_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_machine_2107_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v_requestStream_2108_);
lean_ctor_set(v_reuseFailAlloc_2127_, 2, v_keepAliveTimeout_2109_);
lean_ctor_set(v_reuseFailAlloc_2127_, 3, v_currentTimeout_2110_);
lean_ctor_set(v_reuseFailAlloc_2127_, 4, v_headerTimeout_2111_);
lean_ctor_set(v_reuseFailAlloc_2127_, 5, v_response_2112_);
lean_ctor_set(v_reuseFailAlloc_2127_, 6, v_respStream_2113_);
lean_ctor_set(v_reuseFailAlloc_2127_, 7, v_size_2103_);
lean_ctor_set(v_reuseFailAlloc_2127_, 8, v_pendingHead_2115_);
lean_ctor_set_uint8(v_reuseFailAlloc_2127_, sizeof(void*)*9 + 1, v_handlerDispatched_2114_);
v___x_2121_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2123_; 
lean_ctor_set_uint8(v___x_2121_, sizeof(void*)*9, v___x_2119_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2121_);
v___x_2123_ = v___x_2105_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
return v___x_2125_;
}
}
}
}
}
case 2:
{
lean_object* v_err_2131_; lean_object* v_onFailure_2132_; lean_object* v___f_2133_; lean_object* v___y_2135_; 
lean_dec_ref(v_connectionContext_2054_);
lean_dec_ref(v___f_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v___f_2051_);
lean_dec_ref(v_config_2047_);
v_err_2131_ = lean_ctor_get(v_a_2055_, 0);
lean_inc(v_err_2131_);
lean_dec_ref_known(v_a_2055_, 1);
v_onFailure_2132_ = lean_ctor_get(v_inst_2048_, 2);
lean_inc_ref(v_onFailure_2132_);
lean_dec_ref(v_inst_2048_);
v___f_2133_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_2133_, 0, v___y_2057_);
lean_closure_set(v___f_2133_, 1, v___f_2049_);
switch(lean_obj_tag(v_err_2131_))
{
case 0:
{
lean_object* v___x_2141_; 
v___x_2141_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0));
v___y_2135_ = v___x_2141_;
goto v___jp_2134_;
}
case 1:
{
lean_object* v___x_2142_; 
v___x_2142_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1));
v___y_2135_ = v___x_2142_;
goto v___jp_2134_;
}
case 2:
{
lean_object* v___x_2143_; 
v___x_2143_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2));
v___y_2135_ = v___x_2143_;
goto v___jp_2134_;
}
case 3:
{
lean_object* v___x_2144_; 
v___x_2144_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3));
v___y_2135_ = v___x_2144_;
goto v___jp_2134_;
}
case 4:
{
lean_object* v___x_2145_; 
v___x_2145_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4));
v___y_2135_ = v___x_2145_;
goto v___jp_2134_;
}
case 5:
{
lean_object* v___x_2146_; 
v___x_2146_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5));
v___y_2135_ = v___x_2146_;
goto v___jp_2134_;
}
case 6:
{
lean_object* v___x_2147_; 
v___x_2147_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6));
v___y_2135_ = v___x_2147_;
goto v___jp_2134_;
}
case 7:
{
lean_object* v___x_2148_; 
v___x_2148_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7));
v___y_2135_ = v___x_2148_;
goto v___jp_2134_;
}
case 8:
{
lean_object* v___x_2149_; 
v___x_2149_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8));
v___y_2135_ = v___x_2149_;
goto v___jp_2134_;
}
case 9:
{
lean_object* v___x_2150_; 
v___x_2150_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9));
v___y_2135_ = v___x_2150_;
goto v___jp_2134_;
}
case 10:
{
lean_object* v___x_2151_; 
v___x_2151_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10));
v___y_2135_ = v___x_2151_;
goto v___jp_2134_;
}
default: 
{
lean_object* v_message_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v_message_2152_ = lean_ctor_get(v_err_2131_, 0);
lean_inc_ref(v_message_2152_);
lean_dec_ref_known(v_err_2131_, 1);
v___x_2153_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11));
v___x_2154_ = lean_string_append(v___x_2153_, v_message_2152_);
lean_dec_ref(v_message_2152_);
v___y_2135_ = v___x_2154_;
goto v___jp_2134_;
}
}
v___jp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2136_ = lean_mk_io_user_error(v___y_2135_);
v___x_2137_ = lean_unsigned_to_nat(0u);
v___x_2138_ = 0;
v___x_2139_ = lean_apply_3(v_onFailure_2132_, v_handler_2050_, v___x_2136_, lean_box(0));
v___x_2140_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2137_, v___x_2138_, v___x_2139_, v___f_2133_);
return v___x_2140_;
}
}
case 4:
{
lean_object* v_requestStream_2155_; lean_object* v___f_2156_; lean_object* v___f_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___f_2161_; lean_object* v___f_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_5118__overap_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
lean_dec_ref(v_connectionContext_2054_);
lean_dec_ref(v___f_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec(v_handler_2050_);
lean_dec_ref(v___f_2049_);
lean_dec_ref(v_inst_2048_);
lean_dec_ref(v_config_2047_);
v_requestStream_2155_ = lean_ctor_get(v___y_2057_, 1);
lean_inc_ref_n(v_requestStream_2155_, 2);
lean_inc_ref(v___y_2057_);
v___f_2156_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2156_, 0, v___y_2057_);
v___f_2157_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_2157_, 0, v_requestStream_2155_);
lean_closure_set(v___f_2157_, 1, v___f_2156_);
lean_closure_set(v___f_2157_, 2, v___y_2057_);
v___x_2158_ = lean_unsigned_to_nat(0u);
v___x_2159_ = 0;
v___x_2160_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2161_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2162_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2163_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2164_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2164_, 0, lean_box(0));
lean_closure_set(v___x_2164_, 1, lean_box(0));
lean_closure_set(v___x_2164_, 2, v___x_2160_);
lean_closure_set(v___x_2164_, 3, lean_box(0));
lean_closure_set(v___x_2164_, 4, lean_box(0));
lean_closure_set(v___x_2164_, 5, v___x_2163_);
lean_closure_set(v___x_2164_, 6, v___f_2051_);
v___x_5118__overap_2165_ = l_Std_Mutex_atomically___redArg(v___x_2160_, v___f_2161_, v___f_2162_, v_requestStream_2155_, v___x_2164_);
v___x_2166_ = lean_apply_1(v___x_5118__overap_2165_, lean_box(0));
v___x_2167_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2158_, v___x_2159_, v___x_2166_, v___f_2157_);
return v___x_2167_;
}
case 6:
{
lean_object* v_machine_2168_; lean_object* v_requestStream_2169_; lean_object* v_respStream_2170_; uint8_t v_requiresData_2171_; lean_object* v_expectData_2172_; lean_object* v_pendingHead_2173_; lean_object* v___x_2174_; lean_object* v___f_2175_; lean_object* v___f_2176_; lean_object* v___f_2177_; lean_object* v___f_2178_; lean_object* v___f_2179_; lean_object* v___f_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; lean_object* v___x_2183_; lean_object* v___f_2184_; lean_object* v___f_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_5143__overap_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
lean_dec_ref(v_connectionContext_2054_);
lean_dec_ref(v___f_2051_);
lean_dec(v_handler_2050_);
lean_dec_ref(v___f_2049_);
lean_dec_ref(v_inst_2048_);
v_machine_2168_ = lean_ctor_get(v___y_2057_, 0);
lean_inc_ref(v_machine_2168_);
v_requestStream_2169_ = lean_ctor_get(v___y_2057_, 1);
lean_inc_ref_n(v_requestStream_2169_, 2);
v_respStream_2170_ = lean_ctor_get(v___y_2057_, 6);
lean_inc(v_respStream_2170_);
v_requiresData_2171_ = lean_ctor_get_uint8(v___y_2057_, sizeof(void*)*9);
v_expectData_2172_ = lean_ctor_get(v___y_2057_, 7);
lean_inc(v_expectData_2172_);
v_pendingHead_2173_ = lean_ctor_get(v___y_2057_, 8);
lean_inc(v_pendingHead_2173_);
lean_dec_ref(v___y_2057_);
v___x_2174_ = lean_box(v_requiresData_2171_);
v___f_2175_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed), 7, 5);
lean_closure_set(v___f_2175_, 0, v_config_2047_);
lean_closure_set(v___f_2175_, 1, v_machine_2168_);
lean_closure_set(v___f_2175_, 2, v___x_2174_);
lean_closure_set(v___f_2175_, 3, v_expectData_2172_);
lean_closure_set(v___f_2175_, 4, v_pendingHead_2173_);
v___f_2176_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed), 3, 1);
lean_closure_set(v___f_2176_, 0, v___f_2175_);
lean_inc_ref(v___f_2176_);
v___f_2177_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2177_, 0, v___f_2176_);
v___f_2178_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_2178_, 0, v_respStream_2170_);
lean_closure_set(v___f_2178_, 1, v_inst_2052_);
lean_closure_set(v___f_2178_, 2, v___f_2177_);
lean_closure_set(v___f_2178_, 3, v___f_2176_);
lean_inc_ref(v___f_2178_);
v___f_2179_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2179_, 0, v___f_2178_);
v___f_2180_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_2180_, 0, v_requestStream_2169_);
lean_closure_set(v___f_2180_, 1, v___f_2179_);
lean_closure_set(v___f_2180_, 2, v___f_2178_);
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = 0;
v___x_2183_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2184_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2185_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2186_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2187_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2187_, 0, lean_box(0));
lean_closure_set(v___x_2187_, 1, lean_box(0));
lean_closure_set(v___x_2187_, 2, v___x_2183_);
lean_closure_set(v___x_2187_, 3, lean_box(0));
lean_closure_set(v___x_2187_, 4, lean_box(0));
lean_closure_set(v___x_2187_, 5, v___x_2186_);
lean_closure_set(v___x_2187_, 6, v___f_2053_);
v___x_5143__overap_2188_ = l_Std_Mutex_atomically___redArg(v___x_2183_, v___f_2184_, v___f_2185_, v_requestStream_2169_, v___x_2187_);
v___x_2189_ = lean_apply_1(v___x_5143__overap_2188_, lean_box(0));
v___x_2190_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2181_, v___x_2182_, v___x_2189_, v___f_2180_);
return v___x_2190_;
}
case 7:
{
lean_object* v_pendingHead_2191_; 
lean_dec_ref(v___f_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v___f_2051_);
lean_dec_ref(v___f_2049_);
v_pendingHead_2191_ = lean_ctor_get(v___y_2057_, 8);
if (lean_obj_tag(v_pendingHead_2191_) == 1)
{
lean_object* v_machine_2192_; lean_object* v_requestStream_2193_; lean_object* v_keepAliveTimeout_2194_; lean_object* v_currentTimeout_2195_; lean_object* v_headerTimeout_2196_; lean_object* v_response_2197_; lean_object* v_respStream_2198_; uint8_t v_requiresData_2199_; lean_object* v_expectData_2200_; uint8_t v_handlerDispatched_2201_; lean_object* v_val_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___f_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_inc_ref(v_pendingHead_2191_);
v_machine_2192_ = lean_ctor_get(v___y_2057_, 0);
lean_inc_ref(v_machine_2192_);
v_requestStream_2193_ = lean_ctor_get(v___y_2057_, 1);
lean_inc_ref(v_requestStream_2193_);
v_keepAliveTimeout_2194_ = lean_ctor_get(v___y_2057_, 2);
lean_inc(v_keepAliveTimeout_2194_);
v_currentTimeout_2195_ = lean_ctor_get(v___y_2057_, 3);
lean_inc(v_currentTimeout_2195_);
v_headerTimeout_2196_ = lean_ctor_get(v___y_2057_, 4);
lean_inc(v_headerTimeout_2196_);
v_response_2197_ = lean_ctor_get(v___y_2057_, 5);
lean_inc_ref(v_response_2197_);
v_respStream_2198_ = lean_ctor_get(v___y_2057_, 6);
lean_inc(v_respStream_2198_);
v_requiresData_2199_ = lean_ctor_get_uint8(v___y_2057_, sizeof(void*)*9);
v_expectData_2200_ = lean_ctor_get(v___y_2057_, 7);
lean_inc(v_expectData_2200_);
v_handlerDispatched_2201_ = lean_ctor_get_uint8(v___y_2057_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_2057_);
v_val_2202_ = lean_ctor_get(v_pendingHead_2191_, 0);
lean_inc(v_val_2202_);
v___x_2203_ = lean_box(v_requiresData_2199_);
v___x_2204_ = lean_box(v_handlerDispatched_2201_);
v___f_2205_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed), 12, 10);
lean_closure_set(v___f_2205_, 0, v_requestStream_2193_);
lean_closure_set(v___f_2205_, 1, v_keepAliveTimeout_2194_);
lean_closure_set(v___f_2205_, 2, v_currentTimeout_2195_);
lean_closure_set(v___f_2205_, 3, v_headerTimeout_2196_);
lean_closure_set(v___f_2205_, 4, v_response_2197_);
lean_closure_set(v___f_2205_, 5, v_respStream_2198_);
lean_closure_set(v___f_2205_, 6, v___x_2203_);
lean_closure_set(v___f_2205_, 7, v_expectData_2200_);
lean_closure_set(v___f_2205_, 8, v___x_2204_);
lean_closure_set(v___f_2205_, 9, v_pendingHead_2191_);
v___x_2206_ = lean_unsigned_to_nat(0u);
v___x_2207_ = 0;
v___x_2208_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_2048_, v_handler_2050_, v_machine_2192_, v_val_2202_, v_config_2047_, v_connectionContext_2054_);
v___x_2209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2206_, v___x_2207_, v___x_2208_, v___f_2205_);
return v___x_2209_;
}
else
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_dec_ref(v_connectionContext_2054_);
lean_dec(v_handler_2050_);
lean_dec_ref(v_inst_2048_);
lean_dec_ref(v_config_2047_);
v___x_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2210_, 0, v___y_2057_);
v___x_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2210_);
v___x_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
return v___x_2212_;
}
}
default: 
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_dec(v_a_2055_);
lean_dec_ref(v_connectionContext_2054_);
lean_dec_ref(v___f_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v___f_2051_);
lean_dec(v_handler_2050_);
lean_dec_ref(v___f_2049_);
lean_dec_ref(v_inst_2048_);
lean_dec_ref(v_config_2047_);
v___x_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___y_2057_);
v___x_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
v___x_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
return v___x_2215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object* v_config_2216_, lean_object* v_inst_2217_, lean_object* v___f_2218_, lean_object* v_handler_2219_, lean_object* v___f_2220_, lean_object* v_inst_2221_, lean_object* v___f_2222_, lean_object* v_connectionContext_2223_, lean_object* v_a_2224_, lean_object* v_x_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(v_config_2216_, v_inst_2217_, v___f_2218_, v_handler_2219_, v___f_2220_, v_inst_2221_, v___f_2222_, v_connectionContext_2223_, v_a_2224_, v_x_2225_, v___y_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object* v_x_2229_){
_start:
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v_x_2229_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object* v_x_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(v_x_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object* v_inst_2237_, lean_object* v_inst_2238_, lean_object* v_handler_2239_, lean_object* v_config_2240_, lean_object* v_connectionContext_2241_, lean_object* v_events_2242_, lean_object* v_state_2243_){
_start:
{
lean_object* v___f_2245_; lean_object* v___f_2246_; lean_object* v___f_2247_; lean_object* v___x_2248_; size_t v_sz_2249_; size_t v___x_2250_; lean_object* v___x_2251_; uint8_t v___x_2252_; lean_object* v___x_4072__overap_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___f_2245_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_2246_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed), 12, 8);
lean_closure_set(v___f_2246_, 0, v_config_2240_);
lean_closure_set(v___f_2246_, 1, v_inst_2237_);
lean_closure_set(v___f_2246_, 2, v___f_2245_);
lean_closure_set(v___f_2246_, 3, v_handler_2239_);
lean_closure_set(v___f_2246_, 4, v___f_2245_);
lean_closure_set(v___f_2246_, 5, v_inst_2238_);
lean_closure_set(v___f_2246_, 6, v___f_2245_);
lean_closure_set(v___f_2246_, 7, v_connectionContext_2241_);
v___f_2247_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1));
v___x_2248_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v_sz_2249_ = lean_array_size(v_events_2242_);
v___x_2250_ = ((size_t)0ULL);
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = 0;
v___x_4072__overap_2253_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2248_, v_events_2242_, v___f_2246_, v_sz_2249_, v___x_2250_, v_state_2243_);
v___x_2254_ = lean_apply_1(v___x_4072__overap_2253_, lean_box(0));
v___x_2255_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2251_, v___x_2252_, v___x_2254_, v___f_2247_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_handler_2258_, lean_object* v_config_2259_, lean_object* v_connectionContext_2260_, lean_object* v_events_2261_, lean_object* v_state_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2256_, v_inst_2257_, v_handler_2258_, v_config_2259_, v_connectionContext_2260_, v_events_2261_, v_state_2262_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object* v_00_u03c3_2265_, lean_object* v_00_u03b2_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_handler_2269_, lean_object* v_config_2270_, lean_object* v_connectionContext_2271_, lean_object* v_events_2272_, lean_object* v_state_2273_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2267_, v_inst_2268_, v_handler_2269_, v_config_2270_, v_connectionContext_2271_, v_events_2272_, v_state_2273_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object* v_00_u03c3_2276_, lean_object* v_00_u03b2_2277_, lean_object* v_inst_2278_, lean_object* v_inst_2279_, lean_object* v_handler_2280_, lean_object* v_config_2281_, lean_object* v_connectionContext_2282_, lean_object* v_events_2283_, lean_object* v_state_2284_, lean_object* v_a_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(v_00_u03c3_2276_, v_00_u03b2_2277_, v_inst_2278_, v_inst_2279_, v_handler_2280_, v_config_2281_, v_connectionContext_2282_, v_events_2283_, v_state_2284_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object* v_x_2287_){
_start:
{
if (lean_obj_tag(v_x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2289_; 
v_a_2288_ = lean_ctor_get(v_x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v_x_2287_, 1);
v___x_2289_ = lean_task_pure(v_a_2288_);
return v___x_2289_;
}
else
{
lean_object* v_a_2290_; 
v_a_2290_ = lean_ctor_get(v_x_2287_, 0);
lean_inc_ref(v_a_2290_);
lean_dec_ref_known(v_x_2287_, 1);
return v_a_2290_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object* v_machine_2291_, lean_object* v_requestStream_2292_, lean_object* v_keepAliveTimeout_2293_, lean_object* v_currentTimeout_2294_, lean_object* v_headerTimeout_2295_, lean_object* v_response_2296_, lean_object* v_respStream_2297_, uint8_t v_requiresData_2298_, lean_object* v_expectData_2299_, lean_object* v_x_2300_){
_start:
{
if (lean_obj_tag(v_x_2300_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2310_; 
lean_dec(v_expectData_2299_);
lean_dec(v_respStream_2297_);
lean_dec_ref(v_response_2296_);
lean_dec(v_headerTimeout_2295_);
lean_dec(v_currentTimeout_2294_);
lean_dec(v_keepAliveTimeout_2293_);
lean_dec_ref(v_requestStream_2292_);
lean_dec_ref(v_machine_2291_);
v_a_2302_ = lean_ctor_get(v_x_2300_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v_x_2300_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2304_ = v_x_2300_;
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v_x_2300_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2308_; 
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2307_);
return v___x_2308_;
}
}
}
else
{
lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2321_; 
v_isSharedCheck_2321_ = !lean_is_exclusive(v_x_2300_);
if (v_isSharedCheck_2321_ == 0)
{
lean_object* v_unused_2322_; 
v_unused_2322_ = lean_ctor_get(v_x_2300_, 0);
lean_dec(v_unused_2322_);
v___x_2312_ = v_x_2300_;
v_isShared_2313_ = v_isSharedCheck_2321_;
goto v_resetjp_2311_;
}
else
{
lean_dec(v_x_2300_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2321_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
uint8_t v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2318_; 
v___x_2314_ = 1;
v___x_2315_ = lean_box(0);
v___x_2316_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2316_, 0, v_machine_2291_);
lean_ctor_set(v___x_2316_, 1, v_requestStream_2292_);
lean_ctor_set(v___x_2316_, 2, v_keepAliveTimeout_2293_);
lean_ctor_set(v___x_2316_, 3, v_currentTimeout_2294_);
lean_ctor_set(v___x_2316_, 4, v_headerTimeout_2295_);
lean_ctor_set(v___x_2316_, 5, v_response_2296_);
lean_ctor_set(v___x_2316_, 6, v_respStream_2297_);
lean_ctor_set(v___x_2316_, 7, v_expectData_2299_);
lean_ctor_set(v___x_2316_, 8, v___x_2315_);
lean_ctor_set_uint8(v___x_2316_, sizeof(void*)*9, v_requiresData_2298_);
lean_ctor_set_uint8(v___x_2316_, sizeof(void*)*9 + 1, v___x_2314_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2316_);
v___x_2318_ = v___x_2312_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
return v___x_2319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object* v_machine_2323_, lean_object* v_requestStream_2324_, lean_object* v_keepAliveTimeout_2325_, lean_object* v_currentTimeout_2326_, lean_object* v_headerTimeout_2327_, lean_object* v_response_2328_, lean_object* v_respStream_2329_, lean_object* v_requiresData_2330_, lean_object* v_expectData_2331_, lean_object* v_x_2332_, lean_object* v___y_2333_){
_start:
{
uint8_t v_requiresData_boxed_2334_; lean_object* v_res_2335_; 
v_requiresData_boxed_2334_ = lean_unbox(v_requiresData_2330_);
v_res_2335_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(v_machine_2323_, v_requestStream_2324_, v_keepAliveTimeout_2325_, v_currentTimeout_2326_, v_headerTimeout_2327_, v_response_2328_, v_respStream_2329_, v_requiresData_boxed_2334_, v_expectData_2331_, v_x_2332_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object* v_toFunctor_2336_, lean_object* v_response_2337_, lean_object* v___x_2338_, lean_object* v___f_2339_, lean_object* v_x_2340_){
_start:
{
if (lean_obj_tag(v_x_2340_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2350_; 
lean_dec_ref(v___f_2339_);
lean_dec(v___x_2338_);
lean_dec_ref(v_response_2337_);
lean_dec_ref(v_toFunctor_2336_);
v_a_2342_ = lean_ctor_get(v_x_2340_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_x_2340_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2344_ = v_x_2340_;
v_isShared_2345_ = v_isSharedCheck_2350_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v_x_2340_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2350_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
lean_object* v___x_2348_; 
v___x_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
return v___x_2348_;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2365_; 
v_a_2351_ = lean_ctor_get(v_x_2340_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v_x_2340_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2353_ = v_x_2340_;
v_isShared_2354_ = v_isSharedCheck_2365_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v_x_2340_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2365_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; uint8_t v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2355_ = lean_alloc_closure((void*)(l_Functor_discard), 4, 3);
lean_closure_set(v___x_2355_, 0, lean_box(0));
lean_closure_set(v___x_2355_, 1, lean_box(0));
lean_closure_set(v___x_2355_, 2, v_toFunctor_2336_);
v___x_2356_ = lean_alloc_closure((void*)(l_Std_Channel_send___boxed), 4, 2);
lean_closure_set(v___x_2356_, 0, lean_box(0));
lean_closure_set(v___x_2356_, 1, v_response_2337_);
v___x_2357_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2357_, 0, lean_box(0));
lean_closure_set(v___x_2357_, 1, lean_box(0));
lean_closure_set(v___x_2357_, 2, lean_box(0));
lean_closure_set(v___x_2357_, 3, v___x_2355_);
lean_closure_set(v___x_2357_, 4, v___x_2356_);
v___x_2358_ = 0;
lean_inc(v___x_2338_);
v___x_2359_ = l_BaseIO_chainTask___redArg(v_a_2351_, v___x_2357_, v___x_2338_, v___x_2358_);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v___x_2359_);
v___x_2361_ = v___x_2353_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
v___x_2363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2338_, v___x_2358_, v___x_2362_, v___f_2339_);
return v___x_2363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object* v_toFunctor_2366_, lean_object* v_response_2367_, lean_object* v___x_2368_, lean_object* v___f_2369_, lean_object* v_x_2370_, lean_object* v___y_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(v_toFunctor_2366_, v_response_2367_, v___x_2368_, v___f_2369_, v_x_2370_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object* v_inst_2374_, lean_object* v_handler_2375_, lean_object* v_extensions_2376_, lean_object* v_connectionContext_2377_, lean_object* v_state_2378_){
_start:
{
lean_object* v___x_2380_; lean_object* v_toApplicative_2381_; lean_object* v_pendingHead_2382_; 
v___x_2380_ = l_instMonadBaseIO;
v_toApplicative_2381_ = lean_ctor_get(v___x_2380_, 0);
v_pendingHead_2382_ = lean_ctor_get(v_state_2378_, 8);
lean_inc(v_pendingHead_2382_);
if (lean_obj_tag(v_pendingHead_2382_) == 1)
{
lean_object* v_toFunctor_2383_; lean_object* v_machine_2384_; lean_object* v_requestStream_2385_; lean_object* v_keepAliveTimeout_2386_; lean_object* v_currentTimeout_2387_; lean_object* v_headerTimeout_2388_; lean_object* v_response_2389_; lean_object* v_respStream_2390_; uint8_t v_requiresData_2391_; lean_object* v_expectData_2392_; lean_object* v_val_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2415_; 
v_toFunctor_2383_ = lean_ctor_get(v_toApplicative_2381_, 0);
v_machine_2384_ = lean_ctor_get(v_state_2378_, 0);
lean_inc_ref(v_machine_2384_);
v_requestStream_2385_ = lean_ctor_get(v_state_2378_, 1);
lean_inc_ref(v_requestStream_2385_);
v_keepAliveTimeout_2386_ = lean_ctor_get(v_state_2378_, 2);
lean_inc(v_keepAliveTimeout_2386_);
v_currentTimeout_2387_ = lean_ctor_get(v_state_2378_, 3);
lean_inc(v_currentTimeout_2387_);
v_headerTimeout_2388_ = lean_ctor_get(v_state_2378_, 4);
lean_inc(v_headerTimeout_2388_);
v_response_2389_ = lean_ctor_get(v_state_2378_, 5);
lean_inc_ref(v_response_2389_);
v_respStream_2390_ = lean_ctor_get(v_state_2378_, 6);
lean_inc(v_respStream_2390_);
v_requiresData_2391_ = lean_ctor_get_uint8(v_state_2378_, sizeof(void*)*9);
v_expectData_2392_ = lean_ctor_get(v_state_2378_, 7);
lean_inc(v_expectData_2392_);
lean_dec_ref(v_state_2378_);
v_val_2393_ = lean_ctor_get(v_pendingHead_2382_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_pendingHead_2382_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2395_ = v_pendingHead_2382_;
v_isShared_2396_ = v_isSharedCheck_2415_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_val_2393_);
lean_dec(v_pendingHead_2382_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2415_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v_onRequest_2397_; lean_object* v___f_2398_; lean_object* v___x_2399_; lean_object* v___f_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___f_2404_; uint8_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
v_onRequest_2397_ = lean_ctor_get(v_inst_2374_, 1);
lean_inc_ref(v_onRequest_2397_);
lean_dec_ref(v_inst_2374_);
v___f_2398_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0));
v___x_2399_ = lean_box(v_requiresData_2391_);
lean_inc_ref(v_response_2389_);
lean_inc_ref(v_requestStream_2385_);
v___f_2400_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed), 11, 9);
lean_closure_set(v___f_2400_, 0, v_machine_2384_);
lean_closure_set(v___f_2400_, 1, v_requestStream_2385_);
lean_closure_set(v___f_2400_, 2, v_keepAliveTimeout_2386_);
lean_closure_set(v___f_2400_, 3, v_currentTimeout_2387_);
lean_closure_set(v___f_2400_, 4, v_headerTimeout_2388_);
lean_closure_set(v___f_2400_, 5, v_response_2389_);
lean_closure_set(v___f_2400_, 6, v_respStream_2390_);
lean_closure_set(v___f_2400_, 7, v___x_2399_);
lean_closure_set(v___f_2400_, 8, v_expectData_2392_);
v___x_2401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2401_, 0, v_val_2393_);
lean_ctor_set(v___x_2401_, 1, v_requestStream_2385_);
lean_ctor_set(v___x_2401_, 2, v_extensions_2376_);
v___x_2402_ = lean_apply_3(v_onRequest_2397_, v_handler_2375_, v___x_2401_, v_connectionContext_2377_);
v___x_2403_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_toFunctor_2383_);
v___f_2404_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2404_, 0, v_toFunctor_2383_);
lean_closure_set(v___f_2404_, 1, v_response_2389_);
lean_closure_set(v___f_2404_, 2, v___x_2403_);
lean_closure_set(v___f_2404_, 3, v___f_2400_);
v___x_2405_ = 0;
v___x_2406_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2406_, 0, lean_box(0));
lean_closure_set(v___x_2406_, 1, v___x_2402_);
v___x_2407_ = lean_io_as_task(v___x_2406_, v___x_2403_);
v___x_2408_ = 1;
v___x_2409_ = lean_task_bind(v___x_2407_, v___f_2398_, v___x_2403_, v___x_2408_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 0, v___x_2409_);
v___x_2411_ = v___x_2395_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
v___x_2413_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2403_, v___x_2405_, v___x_2412_, v___f_2404_);
return v___x_2413_;
}
}
}
else
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
lean_dec(v_pendingHead_2382_);
lean_dec_ref(v_connectionContext_2377_);
lean_dec(v_extensions_2376_);
lean_dec(v_handler_2375_);
lean_dec_ref(v_inst_2374_);
v___x_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2416_, 0, v_state_2378_);
v___x_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2416_);
return v___x_2417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object* v_inst_2418_, lean_object* v_handler_2419_, lean_object* v_extensions_2420_, lean_object* v_connectionContext_2421_, lean_object* v_state_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2418_, v_handler_2419_, v_extensions_2420_, v_connectionContext_2421_, v_state_2422_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object* v_00_u03c3_2425_, lean_object* v_inst_2426_, lean_object* v_handler_2427_, lean_object* v_extensions_2428_, lean_object* v_connectionContext_2429_, lean_object* v_state_2430_){
_start:
{
lean_object* v___x_2432_; 
v___x_2432_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2426_, v_handler_2427_, v_extensions_2428_, v_connectionContext_2429_, v_state_2430_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object* v_00_u03c3_2433_, lean_object* v_inst_2434_, lean_object* v_handler_2435_, lean_object* v_extensions_2436_, lean_object* v_connectionContext_2437_, lean_object* v_state_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(v_00_u03c3_2433_, v_inst_2434_, v_handler_2435_, v_extensions_2436_, v_connectionContext_2437_, v_state_2438_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object* v_machine_2441_, lean_object* v_____r_2442_){
_start:
{
lean_object* v_writer_2444_; lean_object* v_reader_2445_; lean_object* v_config_2446_; lean_object* v_events_2447_; lean_object* v_error_2448_; lean_object* v_instant_2449_; uint8_t v_keepAlive_2450_; uint8_t v_forcedFlush_2451_; uint8_t v_pullBodyStalled_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2479_; 
v_writer_2444_ = lean_ctor_get(v_machine_2441_, 1);
v_reader_2445_ = lean_ctor_get(v_machine_2441_, 0);
v_config_2446_ = lean_ctor_get(v_machine_2441_, 2);
v_events_2447_ = lean_ctor_get(v_machine_2441_, 3);
v_error_2448_ = lean_ctor_get(v_machine_2441_, 4);
v_instant_2449_ = lean_ctor_get(v_machine_2441_, 5);
v_keepAlive_2450_ = lean_ctor_get_uint8(v_machine_2441_, sizeof(void*)*6);
v_forcedFlush_2451_ = lean_ctor_get_uint8(v_machine_2441_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2452_ = lean_ctor_get_uint8(v_machine_2441_, sizeof(void*)*6 + 2);
v_isSharedCheck_2479_ = !lean_is_exclusive(v_machine_2441_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2454_ = v_machine_2441_;
v_isShared_2455_ = v_isSharedCheck_2479_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_instant_2449_);
lean_inc(v_error_2448_);
lean_inc(v_events_2447_);
lean_inc(v_config_2446_);
lean_inc(v_writer_2444_);
lean_inc(v_reader_2445_);
lean_dec(v_machine_2441_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2479_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v_userData_2456_; lean_object* v_outputData_2457_; lean_object* v_state_2458_; lean_object* v_knownSize_2459_; lean_object* v_messageHead_2460_; uint8_t v_sentMessage_2461_; uint8_t v_omitBody_2462_; lean_object* v_userDataBytes_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2478_; 
v_userData_2456_ = lean_ctor_get(v_writer_2444_, 0);
v_outputData_2457_ = lean_ctor_get(v_writer_2444_, 1);
v_state_2458_ = lean_ctor_get(v_writer_2444_, 2);
v_knownSize_2459_ = lean_ctor_get(v_writer_2444_, 3);
v_messageHead_2460_ = lean_ctor_get(v_writer_2444_, 4);
v_sentMessage_2461_ = lean_ctor_get_uint8(v_writer_2444_, sizeof(void*)*6);
v_omitBody_2462_ = lean_ctor_get_uint8(v_writer_2444_, sizeof(void*)*6 + 2);
v_userDataBytes_2463_ = lean_ctor_get(v_writer_2444_, 5);
v_isSharedCheck_2478_ = !lean_is_exclusive(v_writer_2444_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2465_ = v_writer_2444_;
v_isShared_2466_ = v_isSharedCheck_2478_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_userDataBytes_2463_);
lean_inc(v_messageHead_2460_);
lean_inc(v_knownSize_2459_);
lean_inc(v_state_2458_);
lean_inc(v_outputData_2457_);
lean_inc(v_userData_2456_);
lean_dec(v_writer_2444_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2478_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
uint8_t v___x_2467_; lean_object* v___x_2469_; 
v___x_2467_ = 1;
if (v_isShared_2466_ == 0)
{
v___x_2469_ = v___x_2465_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_userData_2456_);
lean_ctor_set(v_reuseFailAlloc_2477_, 1, v_outputData_2457_);
lean_ctor_set(v_reuseFailAlloc_2477_, 2, v_state_2458_);
lean_ctor_set(v_reuseFailAlloc_2477_, 3, v_knownSize_2459_);
lean_ctor_set(v_reuseFailAlloc_2477_, 4, v_messageHead_2460_);
lean_ctor_set(v_reuseFailAlloc_2477_, 5, v_userDataBytes_2463_);
lean_ctor_set_uint8(v_reuseFailAlloc_2477_, sizeof(void*)*6, v_sentMessage_2461_);
lean_ctor_set_uint8(v_reuseFailAlloc_2477_, sizeof(void*)*6 + 2, v_omitBody_2462_);
v___x_2469_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2471_; 
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*6 + 1, v___x_2467_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 1, v___x_2469_);
v___x_2471_ = v___x_2454_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_reader_2445_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2476_, 2, v_config_2446_);
lean_ctor_set(v_reuseFailAlloc_2476_, 3, v_events_2447_);
lean_ctor_set(v_reuseFailAlloc_2476_, 4, v_error_2448_);
lean_ctor_set(v_reuseFailAlloc_2476_, 5, v_instant_2449_);
lean_ctor_set_uint8(v_reuseFailAlloc_2476_, sizeof(void*)*6, v_keepAlive_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2476_, sizeof(void*)*6 + 1, v_forcedFlush_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2476_, sizeof(void*)*6 + 2, v_pullBodyStalled_2452_);
v___x_2471_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2472_ = lean_box(0);
v___x_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2471_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
v___x_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2473_);
v___x_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2474_);
return v___x_2475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object* v_machine_2480_, lean_object* v_____r_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(v_machine_2480_, v_____r_2481_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object* v_x1_2484_, lean_object* v_x2_2485_){
_start:
{
lean_object* v_data_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v_data_2486_ = lean_ctor_get(v_x2_2485_, 0);
v___x_2487_ = lean_byte_array_size(v_data_2486_);
v___x_2488_ = lean_nat_add(v_x1_2484_, v___x_2487_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object* v_x1_2489_, lean_object* v_x2_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(v_x1_2489_, v_x2_2490_);
lean_dec_ref(v_x2_2490_);
lean_dec(v_x1_2489_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object* v_body_2492_, lean_object* v_machine_2493_, lean_object* v_isClosed_2494_, lean_object* v___f_2495_, lean_object* v___f_2496_, lean_object* v_x_2497_){
_start:
{
lean_object* v___y_2500_; 
if (lean_obj_tag(v_x_2497_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2513_; 
lean_dec_ref(v___f_2496_);
lean_dec_ref(v___f_2495_);
lean_dec_ref(v_isClosed_2494_);
lean_dec_ref(v_machine_2493_);
lean_dec(v_body_2492_);
v_a_2505_ = lean_ctor_get(v_x_2497_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v_x_2497_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2507_ = v_x_2497_;
v_isShared_2508_ = v_isSharedCheck_2513_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v_x_2497_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2513_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2510_; 
if (v_isShared_2508_ == 0)
{
v___x_2510_ = v___x_2507_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2505_);
v___x_2510_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
return v___x_2511_;
}
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2577_; 
v_a_2514_ = lean_ctor_get(v_x_2497_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v_x_2497_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2516_ = v_x_2497_;
v_isShared_2517_ = v_isSharedCheck_2577_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v_x_2497_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2577_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
if (lean_obj_tag(v_a_2514_) == 0)
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2521_; 
lean_dec_ref(v___f_2496_);
lean_dec_ref(v___f_2495_);
lean_dec_ref(v_isClosed_2494_);
v___x_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2518_, 0, v_body_2492_);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v_machine_2493_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 0, v___x_2519_);
v___x_2521_ = v___x_2516_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2519_);
v___x_2521_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
lean_object* v___x_2522_; 
v___x_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
return v___x_2522_;
}
}
else
{
lean_object* v_val_2524_; 
lean_del_object(v___x_2516_);
v_val_2524_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_val_2524_);
lean_dec_ref_known(v_a_2514_, 1);
if (lean_obj_tag(v_val_2524_) == 0)
{
lean_object* v___x_2525_; uint8_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
lean_dec_ref(v___f_2496_);
lean_dec_ref(v_machine_2493_);
v___x_2525_ = lean_unsigned_to_nat(0u);
v___x_2526_ = 0;
v___x_2527_ = lean_apply_2(v_isClosed_2494_, v_body_2492_, lean_box(0));
v___x_2528_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2525_, v___x_2526_, v___x_2527_, v___f_2495_);
return v___x_2528_;
}
else
{
lean_object* v_val_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; uint8_t v___x_2535_; 
lean_dec_ref(v___f_2495_);
lean_dec_ref(v_isClosed_2494_);
v_val_2529_ = lean_ctor_get(v_val_2524_, 0);
lean_inc(v_val_2529_);
lean_dec_ref_known(v_val_2524_, 1);
v___x_2530_ = lean_unsigned_to_nat(1u);
v___x_2531_ = lean_mk_empty_array_with_capacity(v___x_2530_);
v___x_2532_ = lean_array_push(v___x_2531_, v_val_2529_);
v___x_2533_ = lean_array_get_size(v___x_2532_);
v___x_2534_ = lean_unsigned_to_nat(0u);
v___x_2535_ = lean_nat_dec_eq(v___x_2533_, v___x_2534_);
if (v___x_2535_ == 0)
{
lean_object* v_reader_2536_; lean_object* v_writer_2537_; lean_object* v_config_2538_; lean_object* v_events_2539_; lean_object* v_error_2540_; lean_object* v_instant_2541_; uint8_t v_keepAlive_2542_; uint8_t v_forcedFlush_2543_; uint8_t v_pullBodyStalled_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2576_; 
v_reader_2536_ = lean_ctor_get(v_machine_2493_, 0);
v_writer_2537_ = lean_ctor_get(v_machine_2493_, 1);
v_config_2538_ = lean_ctor_get(v_machine_2493_, 2);
v_events_2539_ = lean_ctor_get(v_machine_2493_, 3);
v_error_2540_ = lean_ctor_get(v_machine_2493_, 4);
v_instant_2541_ = lean_ctor_get(v_machine_2493_, 5);
v_keepAlive_2542_ = lean_ctor_get_uint8(v_machine_2493_, sizeof(void*)*6);
v_forcedFlush_2543_ = lean_ctor_get_uint8(v_machine_2493_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2544_ = lean_ctor_get_uint8(v_machine_2493_, sizeof(void*)*6 + 2);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_machine_2493_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2546_ = v_machine_2493_;
v_isShared_2547_ = v_isSharedCheck_2576_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_instant_2541_);
lean_inc(v_error_2540_);
lean_inc(v_events_2539_);
lean_inc(v_config_2538_);
lean_inc(v_writer_2537_);
lean_inc(v_reader_2536_);
lean_dec(v_machine_2493_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2576_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___y_2549_; lean_object* v___x_2571_; uint8_t v___x_2572_; 
v___x_2571_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_2572_ = lean_nat_dec_lt(v___x_2534_, v___x_2533_);
if (v___x_2572_ == 0)
{
lean_dec_ref(v___f_2496_);
v___y_2549_ = v___x_2534_;
goto v___jp_2548_;
}
else
{
size_t v___x_2573_; size_t v___x_2574_; lean_object* v___x_2575_; 
v___x_2573_ = ((size_t)0ULL);
v___x_2574_ = lean_usize_of_nat(v___x_2533_);
lean_inc_ref(v___x_2532_);
v___x_2575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2571_, v___f_2496_, v___x_2532_, v___x_2573_, v___x_2574_, v___x_2534_);
v___y_2549_ = v___x_2575_;
goto v___jp_2548_;
}
v___jp_2548_:
{
lean_object* v_userData_2550_; lean_object* v_outputData_2551_; lean_object* v_state_2552_; lean_object* v_knownSize_2553_; lean_object* v_messageHead_2554_; uint8_t v_sentMessage_2555_; uint8_t v_userClosedBody_2556_; uint8_t v_omitBody_2557_; lean_object* v_userDataBytes_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2570_; 
v_userData_2550_ = lean_ctor_get(v_writer_2537_, 0);
v_outputData_2551_ = lean_ctor_get(v_writer_2537_, 1);
v_state_2552_ = lean_ctor_get(v_writer_2537_, 2);
v_knownSize_2553_ = lean_ctor_get(v_writer_2537_, 3);
v_messageHead_2554_ = lean_ctor_get(v_writer_2537_, 4);
v_sentMessage_2555_ = lean_ctor_get_uint8(v_writer_2537_, sizeof(void*)*6);
v_userClosedBody_2556_ = lean_ctor_get_uint8(v_writer_2537_, sizeof(void*)*6 + 1);
v_omitBody_2557_ = lean_ctor_get_uint8(v_writer_2537_, sizeof(void*)*6 + 2);
v_userDataBytes_2558_ = lean_ctor_get(v_writer_2537_, 5);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_writer_2537_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2560_ = v_writer_2537_;
v_isShared_2561_ = v_isSharedCheck_2570_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_userDataBytes_2558_);
lean_inc(v_messageHead_2554_);
lean_inc(v_knownSize_2553_);
lean_inc(v_state_2552_);
lean_inc(v_outputData_2551_);
lean_inc(v_userData_2550_);
lean_dec(v_writer_2537_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2570_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2565_; 
v___x_2562_ = l_Array_append___redArg(v_userData_2550_, v___x_2532_);
lean_dec_ref(v___x_2532_);
v___x_2563_ = lean_nat_add(v_userDataBytes_2558_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec(v_userDataBytes_2558_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 5, v___x_2563_);
lean_ctor_set(v___x_2560_, 0, v___x_2562_);
v___x_2565_ = v___x_2560_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v___x_2562_);
lean_ctor_set(v_reuseFailAlloc_2569_, 1, v_outputData_2551_);
lean_ctor_set(v_reuseFailAlloc_2569_, 2, v_state_2552_);
lean_ctor_set(v_reuseFailAlloc_2569_, 3, v_knownSize_2553_);
lean_ctor_set(v_reuseFailAlloc_2569_, 4, v_messageHead_2554_);
lean_ctor_set(v_reuseFailAlloc_2569_, 5, v___x_2563_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*6, v_sentMessage_2555_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*6 + 1, v_userClosedBody_2556_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*6 + 2, v_omitBody_2557_);
v___x_2565_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
lean_object* v___x_2567_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 1, v___x_2565_);
v___x_2567_ = v___x_2546_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_reader_2536_);
lean_ctor_set(v_reuseFailAlloc_2568_, 1, v___x_2565_);
lean_ctor_set(v_reuseFailAlloc_2568_, 2, v_config_2538_);
lean_ctor_set(v_reuseFailAlloc_2568_, 3, v_events_2539_);
lean_ctor_set(v_reuseFailAlloc_2568_, 4, v_error_2540_);
lean_ctor_set(v_reuseFailAlloc_2568_, 5, v_instant_2541_);
lean_ctor_set_uint8(v_reuseFailAlloc_2568_, sizeof(void*)*6, v_keepAlive_2542_);
lean_ctor_set_uint8(v_reuseFailAlloc_2568_, sizeof(void*)*6 + 1, v_forcedFlush_2543_);
lean_ctor_set_uint8(v_reuseFailAlloc_2568_, sizeof(void*)*6 + 2, v_pullBodyStalled_2544_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
v___y_2500_ = v___x_2567_;
goto v___jp_2499_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2532_);
lean_dec_ref(v___f_2496_);
v___y_2500_ = v_machine_2493_;
goto v___jp_2499_;
}
}
}
}
}
v___jp_2499_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_body_2492_);
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v___y_2500_);
lean_ctor_set(v___x_2502_, 1, v___x_2501_);
v___x_2503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
v___x_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
return v___x_2504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object* v_body_2578_, lean_object* v_machine_2579_, lean_object* v_isClosed_2580_, lean_object* v___f_2581_, lean_object* v___f_2582_, lean_object* v_x_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(v_body_2578_, v_machine_2579_, v_isClosed_2580_, v___f_2581_, v___f_2582_, v_x_2583_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object* v_inst_2587_, lean_object* v_machine_2588_, lean_object* v_body_2589_){
_start:
{
lean_object* v_close_2591_; lean_object* v_isClosed_2592_; lean_object* v_tryRecv_2593_; lean_object* v___f_2594_; lean_object* v___f_2595_; lean_object* v___f_2596_; lean_object* v___f_2597_; lean_object* v___f_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v_close_2591_ = lean_ctor_get(v_inst_2587_, 1);
lean_inc_ref(v_close_2591_);
v_isClosed_2592_ = lean_ctor_get(v_inst_2587_, 2);
lean_inc_ref(v_isClosed_2592_);
v_tryRecv_2593_ = lean_ctor_get(v_inst_2587_, 4);
lean_inc_ref(v_tryRecv_2593_);
lean_dec_ref(v_inst_2587_);
lean_inc_ref(v_machine_2588_);
v___f_2594_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2594_, 0, v_machine_2588_);
lean_inc_ref(v___f_2594_);
v___f_2595_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2595_, 0, v___f_2594_);
lean_inc_n(v_body_2589_, 2);
v___f_2596_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2596_, 0, v_close_2591_);
lean_closure_set(v___f_2596_, 1, v_body_2589_);
lean_closure_set(v___f_2596_, 2, v___f_2595_);
lean_closure_set(v___f_2596_, 3, v___f_2594_);
v___f_2597_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___f_2598_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2598_, 0, v_body_2589_);
lean_closure_set(v___f_2598_, 1, v_machine_2588_);
lean_closure_set(v___f_2598_, 2, v_isClosed_2592_);
lean_closure_set(v___f_2598_, 3, v___f_2596_);
lean_closure_set(v___f_2598_, 4, v___f_2597_);
v___x_2599_ = lean_unsigned_to_nat(0u);
v___x_2600_ = 0;
v___x_2601_ = lean_apply_2(v_tryRecv_2593_, v_body_2589_, lean_box(0));
v___x_2602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2599_, v___x_2600_, v___x_2601_, v___f_2598_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object* v_inst_2603_, lean_object* v_machine_2604_, lean_object* v_body_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2603_, v_machine_2604_, v_body_2605_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object* v_00_u03b2_2608_, lean_object* v_inst_2609_, lean_object* v_machine_2610_, lean_object* v_body_2611_){
_start:
{
lean_object* v___x_2613_; 
v___x_2613_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2609_, v_machine_2610_, v_body_2611_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object* v_00_u03b2_2614_, lean_object* v_inst_2615_, lean_object* v_machine_2616_, lean_object* v_body_2617_, lean_object* v_a_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(v_00_u03b2_2614_, v_inst_2615_, v_machine_2616_, v_body_2617_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object* v_val_2626_, lean_object* v_____r_2627_, lean_object* v_st_2628_){
_start:
{
lean_object* v_machine_2630_; lean_object* v_requestStream_2631_; lean_object* v_keepAliveTimeout_2632_; lean_object* v_currentTimeout_2633_; lean_object* v_headerTimeout_2634_; lean_object* v_response_2635_; lean_object* v_respStream_2636_; uint8_t v_requiresData_2637_; lean_object* v_expectData_2638_; uint8_t v_handlerDispatched_2639_; lean_object* v_pendingHead_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2722_; 
v_machine_2630_ = lean_ctor_get(v_st_2628_, 0);
v_requestStream_2631_ = lean_ctor_get(v_st_2628_, 1);
v_keepAliveTimeout_2632_ = lean_ctor_get(v_st_2628_, 2);
v_currentTimeout_2633_ = lean_ctor_get(v_st_2628_, 3);
v_headerTimeout_2634_ = lean_ctor_get(v_st_2628_, 4);
v_response_2635_ = lean_ctor_get(v_st_2628_, 5);
v_respStream_2636_ = lean_ctor_get(v_st_2628_, 6);
v_requiresData_2637_ = lean_ctor_get_uint8(v_st_2628_, sizeof(void*)*9);
v_expectData_2638_ = lean_ctor_get(v_st_2628_, 7);
v_handlerDispatched_2639_ = lean_ctor_get_uint8(v_st_2628_, sizeof(void*)*9 + 1);
v_pendingHead_2640_ = lean_ctor_get(v_st_2628_, 8);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_st_2628_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2642_ = v_st_2628_;
v_isShared_2643_ = v_isSharedCheck_2722_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_pendingHead_2640_);
lean_inc(v_expectData_2638_);
lean_inc(v_respStream_2636_);
lean_inc(v_response_2635_);
lean_inc(v_headerTimeout_2634_);
lean_inc(v_currentTimeout_2633_);
lean_inc(v_keepAliveTimeout_2632_);
lean_inc(v_requestStream_2631_);
lean_inc(v_machine_2630_);
lean_dec(v_st_2628_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2722_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___y_2645_; lean_object* v_reader_2654_; lean_object* v_state_2655_; 
v_reader_2654_ = lean_ctor_get(v_machine_2630_, 0);
lean_inc_ref(v_reader_2654_);
v_state_2655_ = lean_ctor_get(v_reader_2654_, 0);
lean_inc(v_state_2655_);
if (lean_obj_tag(v_state_2655_) == 6)
{
lean_dec_ref(v_reader_2654_);
lean_dec_ref(v_val_2626_);
v___y_2645_ = v_machine_2630_;
goto v___jp_2644_;
}
else
{
if (lean_obj_tag(v_state_2655_) == 7)
{
lean_dec_ref_known(v_state_2655_, 1);
lean_dec_ref(v_reader_2654_);
lean_dec_ref(v_val_2626_);
v___y_2645_ = v_machine_2630_;
goto v___jp_2644_;
}
else
{
lean_object* v_input_2656_; lean_object* v_writer_2657_; lean_object* v_config_2658_; lean_object* v_events_2659_; lean_object* v_error_2660_; lean_object* v_instant_2661_; uint8_t v_keepAlive_2662_; uint8_t v_forcedFlush_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2720_; 
v_input_2656_ = lean_ctor_get(v_reader_2654_, 1);
lean_inc_ref(v_input_2656_);
v_writer_2657_ = lean_ctor_get(v_machine_2630_, 1);
v_config_2658_ = lean_ctor_get(v_machine_2630_, 2);
v_events_2659_ = lean_ctor_get(v_machine_2630_, 3);
v_error_2660_ = lean_ctor_get(v_machine_2630_, 4);
v_instant_2661_ = lean_ctor_get(v_machine_2630_, 5);
v_keepAlive_2662_ = lean_ctor_get_uint8(v_machine_2630_, sizeof(void*)*6);
v_forcedFlush_2663_ = lean_ctor_get_uint8(v_machine_2630_, sizeof(void*)*6 + 1);
v_isSharedCheck_2720_ = !lean_is_exclusive(v_machine_2630_);
if (v_isSharedCheck_2720_ == 0)
{
lean_object* v_unused_2721_; 
v_unused_2721_ = lean_ctor_get(v_machine_2630_, 0);
lean_dec(v_unused_2721_);
v___x_2665_ = v_machine_2630_;
v_isShared_2666_ = v_isSharedCheck_2720_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_instant_2661_);
lean_inc(v_error_2660_);
lean_inc(v_events_2659_);
lean_inc(v_config_2658_);
lean_inc(v_writer_2657_);
lean_dec(v_machine_2630_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2720_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v_messageHead_2667_; lean_object* v_messageCount_2668_; lean_object* v_bodyBytesRead_2669_; lean_object* v_headerBytesRead_2670_; uint8_t v_noMoreInput_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2717_; 
v_messageHead_2667_ = lean_ctor_get(v_reader_2654_, 2);
v_messageCount_2668_ = lean_ctor_get(v_reader_2654_, 3);
v_bodyBytesRead_2669_ = lean_ctor_get(v_reader_2654_, 4);
v_headerBytesRead_2670_ = lean_ctor_get(v_reader_2654_, 5);
v_noMoreInput_2671_ = lean_ctor_get_uint8(v_reader_2654_, sizeof(void*)*6);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_reader_2654_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; lean_object* v_unused_2719_; 
v_unused_2718_ = lean_ctor_get(v_reader_2654_, 1);
lean_dec(v_unused_2718_);
v_unused_2719_ = lean_ctor_get(v_reader_2654_, 0);
lean_dec(v_unused_2719_);
v___x_2673_ = v_reader_2654_;
v_isShared_2674_ = v_isSharedCheck_2717_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_headerBytesRead_2670_);
lean_inc(v_bodyBytesRead_2669_);
lean_inc(v_messageCount_2668_);
lean_inc(v_messageHead_2667_);
lean_dec(v_reader_2654_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2717_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v_array_2675_; lean_object* v_idx_2676_; uint8_t v___x_2677_; lean_object* v___y_2679_; lean_object* v___x_2708_; uint8_t v___x_2709_; 
v_array_2675_ = lean_ctor_get(v_input_2656_, 0);
lean_inc_ref(v_array_2675_);
v_idx_2676_ = lean_ctor_get(v_input_2656_, 1);
lean_inc(v_idx_2676_);
lean_dec_ref(v_input_2656_);
v___x_2677_ = 0;
v___x_2708_ = lean_byte_array_size(v_array_2675_);
v___x_2709_ = lean_nat_dec_le(v___x_2708_, v_idx_2676_);
if (v___x_2709_ == 0)
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2710_ = l_ByteArray_extract(v_array_2675_, v_idx_2676_, v___x_2708_);
lean_dec_ref(v_array_2675_);
v___x_2711_ = lean_unsigned_to_nat(0u);
v___x_2712_ = lean_byte_array_size(v___x_2710_);
v___x_2713_ = lean_byte_array_size(v_val_2626_);
v___x_2714_ = lean_byte_array_copy_slice(v_val_2626_, v___x_2711_, v___x_2710_, v___x_2712_, v___x_2713_, v___x_2709_);
lean_dec_ref(v_val_2626_);
v___x_2715_ = l_ByteArray_mkIterator(v___x_2714_);
v___y_2679_ = v___x_2715_;
goto v___jp_2678_;
}
else
{
lean_object* v___x_2716_; 
lean_dec(v_idx_2676_);
lean_dec_ref(v_array_2675_);
v___x_2716_ = l_ByteArray_mkIterator(v_val_2626_);
v___y_2679_ = v___x_2716_;
goto v___jp_2678_;
}
v___jp_2678_:
{
lean_object* v_maxHeaderBytes_2680_; lean_object* v_maxStartLineLength_2681_; lean_object* v_maxChunkLineLength_2682_; lean_object* v_maxBodySize_2683_; lean_object* v_array_2684_; lean_object* v_idx_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; uint8_t v___x_2691_; 
v_maxHeaderBytes_2680_ = lean_ctor_get(v_config_2658_, 2);
v_maxStartLineLength_2681_ = lean_ctor_get(v_config_2658_, 5);
v_maxChunkLineLength_2682_ = lean_ctor_get(v_config_2658_, 13);
v_maxBodySize_2683_ = lean_ctor_get(v_config_2658_, 15);
v_array_2684_ = lean_ctor_get(v___y_2679_, 0);
v_idx_2685_ = lean_ctor_get(v___y_2679_, 1);
v___x_2686_ = lean_nat_add(v_maxBodySize_2683_, v_maxHeaderBytes_2680_);
v___x_2687_ = lean_nat_add(v___x_2686_, v_maxStartLineLength_2681_);
lean_dec(v___x_2686_);
v___x_2688_ = lean_nat_add(v___x_2687_, v_maxChunkLineLength_2682_);
lean_dec(v___x_2687_);
v___x_2689_ = lean_byte_array_size(v_array_2684_);
v___x_2690_ = lean_nat_sub(v___x_2689_, v_idx_2685_);
v___x_2691_ = lean_nat_dec_lt(v___x_2688_, v___x_2690_);
lean_dec(v___x_2690_);
lean_dec(v___x_2688_);
if (v___x_2691_ == 0)
{
lean_object* v___x_2693_; 
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 1, v___y_2679_);
v___x_2693_ = v___x_2673_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_state_2655_);
lean_ctor_set(v_reuseFailAlloc_2697_, 1, v___y_2679_);
lean_ctor_set(v_reuseFailAlloc_2697_, 2, v_messageHead_2667_);
lean_ctor_set(v_reuseFailAlloc_2697_, 3, v_messageCount_2668_);
lean_ctor_set(v_reuseFailAlloc_2697_, 4, v_bodyBytesRead_2669_);
lean_ctor_set(v_reuseFailAlloc_2697_, 5, v_headerBytesRead_2670_);
lean_ctor_set_uint8(v_reuseFailAlloc_2697_, sizeof(void*)*6, v_noMoreInput_2671_);
v___x_2693_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
lean_object* v_machine_2695_; 
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 0, v___x_2693_);
v_machine_2695_ = v___x_2665_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2693_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_writer_2657_);
lean_ctor_set(v_reuseFailAlloc_2696_, 2, v_config_2658_);
lean_ctor_set(v_reuseFailAlloc_2696_, 3, v_events_2659_);
lean_ctor_set(v_reuseFailAlloc_2696_, 4, v_error_2660_);
lean_ctor_set(v_reuseFailAlloc_2696_, 5, v_instant_2661_);
lean_ctor_set_uint8(v_reuseFailAlloc_2696_, sizeof(void*)*6, v_keepAlive_2662_);
lean_ctor_set_uint8(v_reuseFailAlloc_2696_, sizeof(void*)*6 + 1, v_forcedFlush_2663_);
v_machine_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_ctor_set_uint8(v_machine_2695_, sizeof(void*)*6 + 2, v___x_2677_);
v___y_2645_ = v_machine_2695_;
goto v___jp_2644_;
}
}
}
else
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2702_; 
lean_dec(v_error_2660_);
lean_dec(v_state_2655_);
v___x_2698_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0));
v___x_2699_ = lean_array_push(v_events_2659_, v___x_2698_);
v___x_2700_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1));
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 1, v___y_2679_);
lean_ctor_set(v___x_2673_, 0, v___x_2700_);
v___x_2702_ = v___x_2673_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v___x_2700_);
lean_ctor_set(v_reuseFailAlloc_2707_, 1, v___y_2679_);
lean_ctor_set(v_reuseFailAlloc_2707_, 2, v_messageHead_2667_);
lean_ctor_set(v_reuseFailAlloc_2707_, 3, v_messageCount_2668_);
lean_ctor_set(v_reuseFailAlloc_2707_, 4, v_bodyBytesRead_2669_);
lean_ctor_set(v_reuseFailAlloc_2707_, 5, v_headerBytesRead_2670_);
lean_ctor_set_uint8(v_reuseFailAlloc_2707_, sizeof(void*)*6, v_noMoreInput_2671_);
v___x_2702_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
lean_object* v___x_2703_; lean_object* v___x_2705_; 
v___x_2703_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2));
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 4, v___x_2703_);
lean_ctor_set(v___x_2665_, 3, v___x_2699_);
lean_ctor_set(v___x_2665_, 0, v___x_2702_);
v___x_2705_ = v___x_2665_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2702_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v_writer_2657_);
lean_ctor_set(v_reuseFailAlloc_2706_, 2, v_config_2658_);
lean_ctor_set(v_reuseFailAlloc_2706_, 3, v___x_2699_);
lean_ctor_set(v_reuseFailAlloc_2706_, 4, v___x_2703_);
lean_ctor_set(v_reuseFailAlloc_2706_, 5, v_instant_2661_);
lean_ctor_set_uint8(v_reuseFailAlloc_2706_, sizeof(void*)*6, v_keepAlive_2662_);
lean_ctor_set_uint8(v_reuseFailAlloc_2706_, sizeof(void*)*6 + 1, v_forcedFlush_2663_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_ctor_set_uint8(v___x_2705_, sizeof(void*)*6 + 2, v___x_2677_);
v___y_2645_ = v___x_2705_;
goto v___jp_2644_;
}
}
}
}
}
}
}
}
v___jp_2644_:
{
lean_object* v___x_2647_; 
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v___y_2645_);
v___x_2647_ = v___x_2642_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___y_2645_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_requestStream_2631_);
lean_ctor_set(v_reuseFailAlloc_2653_, 2, v_keepAliveTimeout_2632_);
lean_ctor_set(v_reuseFailAlloc_2653_, 3, v_currentTimeout_2633_);
lean_ctor_set(v_reuseFailAlloc_2653_, 4, v_headerTimeout_2634_);
lean_ctor_set(v_reuseFailAlloc_2653_, 5, v_response_2635_);
lean_ctor_set(v_reuseFailAlloc_2653_, 6, v_respStream_2636_);
lean_ctor_set(v_reuseFailAlloc_2653_, 7, v_expectData_2638_);
lean_ctor_set(v_reuseFailAlloc_2653_, 8, v_pendingHead_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2653_, sizeof(void*)*9, v_requiresData_2637_);
lean_ctor_set_uint8(v_reuseFailAlloc_2653_, sizeof(void*)*9 + 1, v_handlerDispatched_2639_);
v___x_2647_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
uint8_t v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2648_ = 0;
v___x_2649_ = lean_box(v___x_2648_);
v___x_2650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2647_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
v___x_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
return v___x_2652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object* v_val_2723_, lean_object* v_____r_2724_, lean_object* v_st_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_2723_, v_____r_2724_, v_st_2725_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object* v_config_2728_, lean_object* v_machine_2729_, lean_object* v_requestStream_2730_, lean_object* v_currentTimeout_2731_, lean_object* v_response_2732_, lean_object* v_respStream_2733_, uint8_t v_requiresData_2734_, lean_object* v_expectData_2735_, uint8_t v_handlerDispatched_2736_, lean_object* v_pendingHead_2737_, lean_object* v___f_2738_, lean_object* v_x_2739_){
_start:
{
if (lean_obj_tag(v_x_2739_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2749_; 
lean_dec_ref(v___f_2738_);
lean_dec(v_pendingHead_2737_);
lean_dec(v_expectData_2735_);
lean_dec(v_respStream_2733_);
lean_dec_ref(v_response_2732_);
lean_dec(v_currentTimeout_2731_);
lean_dec_ref(v_requestStream_2730_);
lean_dec_ref(v_machine_2729_);
v_a_2741_ = lean_ctor_get(v_x_2739_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_x_2739_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2743_ = v_x_2739_;
v_isShared_2744_ = v_isSharedCheck_2749_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v_x_2739_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2749_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2747_; 
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
return v___x_2747_;
}
}
}
else
{
lean_object* v_a_2750_; lean_object* v_headerTimeout_2751_; lean_object* v_second_2752_; lean_object* v_nano_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v_second_2757_; lean_object* v_nano_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v_nanos_2762_; lean_object* v___x_2763_; lean_object* v_nanos_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v_a_2750_ = lean_ctor_get(v_x_2739_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v_x_2739_, 1);
v_headerTimeout_2751_ = lean_ctor_get(v_config_2728_, 6);
v_second_2752_ = lean_ctor_get(v_a_2750_, 0);
lean_inc(v_second_2752_);
v_nano_2753_ = lean_ctor_get(v_a_2750_, 1);
lean_inc(v_nano_2753_);
lean_dec(v_a_2750_);
v___x_2754_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_2755_ = lean_int_mul(v_headerTimeout_2751_, v___x_2754_);
v___x_2756_ = l_Std_Time_Duration_ofNanoseconds(v___x_2755_);
lean_dec(v___x_2755_);
v_second_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_second_2757_);
v_nano_2758_ = lean_ctor_get(v___x_2756_, 1);
lean_inc(v_nano_2758_);
lean_dec_ref(v___x_2756_);
v___x_2759_ = lean_box(0);
v___x_2760_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_2761_ = lean_int_mul(v_second_2752_, v___x_2760_);
lean_dec(v_second_2752_);
v_nanos_2762_ = lean_int_add(v___x_2761_, v_nano_2753_);
lean_dec(v_nano_2753_);
lean_dec(v___x_2761_);
v___x_2763_ = lean_int_mul(v_second_2757_, v___x_2760_);
lean_dec(v_second_2757_);
v_nanos_2764_ = lean_int_add(v___x_2763_, v_nano_2758_);
lean_dec(v_nano_2758_);
lean_dec(v___x_2763_);
v___x_2765_ = lean_int_add(v_nanos_2762_, v_nanos_2764_);
lean_dec(v_nanos_2764_);
lean_dec(v_nanos_2762_);
v___x_2766_ = l_Std_Time_Duration_ofNanoseconds(v___x_2765_);
lean_dec(v___x_2765_);
v___x_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2766_);
v___x_2768_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2768_, 0, v_machine_2729_);
lean_ctor_set(v___x_2768_, 1, v_requestStream_2730_);
lean_ctor_set(v___x_2768_, 2, v___x_2759_);
lean_ctor_set(v___x_2768_, 3, v_currentTimeout_2731_);
lean_ctor_set(v___x_2768_, 4, v___x_2767_);
lean_ctor_set(v___x_2768_, 5, v_response_2732_);
lean_ctor_set(v___x_2768_, 6, v_respStream_2733_);
lean_ctor_set(v___x_2768_, 7, v_expectData_2735_);
lean_ctor_set(v___x_2768_, 8, v_pendingHead_2737_);
lean_ctor_set_uint8(v___x_2768_, sizeof(void*)*9, v_requiresData_2734_);
lean_ctor_set_uint8(v___x_2768_, sizeof(void*)*9 + 1, v_handlerDispatched_2736_);
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_apply_3(v___f_2738_, v___x_2769_, v___x_2768_, lean_box(0));
return v___x_2770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object* v_config_2771_, lean_object* v_machine_2772_, lean_object* v_requestStream_2773_, lean_object* v_currentTimeout_2774_, lean_object* v_response_2775_, lean_object* v_respStream_2776_, lean_object* v_requiresData_2777_, lean_object* v_expectData_2778_, lean_object* v_handlerDispatched_2779_, lean_object* v_pendingHead_2780_, lean_object* v___f_2781_, lean_object* v_x_2782_, lean_object* v___y_2783_){
_start:
{
uint8_t v_requiresData_boxed_2784_; uint8_t v_handlerDispatched_boxed_2785_; lean_object* v_res_2786_; 
v_requiresData_boxed_2784_ = lean_unbox(v_requiresData_2777_);
v_handlerDispatched_boxed_2785_ = lean_unbox(v_handlerDispatched_2779_);
v_res_2786_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(v_config_2771_, v_machine_2772_, v_requestStream_2773_, v_currentTimeout_2774_, v_response_2775_, v_respStream_2776_, v_requiresData_boxed_2784_, v_expectData_2778_, v_handlerDispatched_boxed_2785_, v_pendingHead_2780_, v___f_2781_, v_x_2782_);
lean_dec_ref(v_config_2771_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object* v_machine_2787_, lean_object* v_requestStream_2788_, lean_object* v_keepAliveTimeout_2789_, lean_object* v_currentTimeout_2790_, lean_object* v_headerTimeout_2791_, lean_object* v_response_2792_, uint8_t v_requiresData_2793_, lean_object* v_expectData_2794_, uint8_t v_handlerDispatched_2795_, lean_object* v_pendingHead_2796_, lean_object* v_____r_2797_){
_start:
{
lean_object* v_writer_2799_; lean_object* v_reader_2800_; lean_object* v_config_2801_; lean_object* v_events_2802_; lean_object* v_error_2803_; lean_object* v_instant_2804_; uint8_t v_keepAlive_2805_; uint8_t v_forcedFlush_2806_; uint8_t v_pullBodyStalled_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2837_; 
v_writer_2799_ = lean_ctor_get(v_machine_2787_, 1);
v_reader_2800_ = lean_ctor_get(v_machine_2787_, 0);
v_config_2801_ = lean_ctor_get(v_machine_2787_, 2);
v_events_2802_ = lean_ctor_get(v_machine_2787_, 3);
v_error_2803_ = lean_ctor_get(v_machine_2787_, 4);
v_instant_2804_ = lean_ctor_get(v_machine_2787_, 5);
v_keepAlive_2805_ = lean_ctor_get_uint8(v_machine_2787_, sizeof(void*)*6);
v_forcedFlush_2806_ = lean_ctor_get_uint8(v_machine_2787_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2807_ = lean_ctor_get_uint8(v_machine_2787_, sizeof(void*)*6 + 2);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_machine_2787_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2809_ = v_machine_2787_;
v_isShared_2810_ = v_isSharedCheck_2837_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_instant_2804_);
lean_inc(v_error_2803_);
lean_inc(v_events_2802_);
lean_inc(v_config_2801_);
lean_inc(v_writer_2799_);
lean_inc(v_reader_2800_);
lean_dec(v_machine_2787_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2837_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v_userData_2811_; lean_object* v_outputData_2812_; lean_object* v_state_2813_; lean_object* v_knownSize_2814_; lean_object* v_messageHead_2815_; uint8_t v_sentMessage_2816_; uint8_t v_omitBody_2817_; lean_object* v_userDataBytes_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2836_; 
v_userData_2811_ = lean_ctor_get(v_writer_2799_, 0);
v_outputData_2812_ = lean_ctor_get(v_writer_2799_, 1);
v_state_2813_ = lean_ctor_get(v_writer_2799_, 2);
v_knownSize_2814_ = lean_ctor_get(v_writer_2799_, 3);
v_messageHead_2815_ = lean_ctor_get(v_writer_2799_, 4);
v_sentMessage_2816_ = lean_ctor_get_uint8(v_writer_2799_, sizeof(void*)*6);
v_omitBody_2817_ = lean_ctor_get_uint8(v_writer_2799_, sizeof(void*)*6 + 2);
v_userDataBytes_2818_ = lean_ctor_get(v_writer_2799_, 5);
v_isSharedCheck_2836_ = !lean_is_exclusive(v_writer_2799_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2820_ = v_writer_2799_;
v_isShared_2821_ = v_isSharedCheck_2836_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_userDataBytes_2818_);
lean_inc(v_messageHead_2815_);
lean_inc(v_knownSize_2814_);
lean_inc(v_state_2813_);
lean_inc(v_outputData_2812_);
lean_inc(v_userData_2811_);
lean_dec(v_writer_2799_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2836_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
uint8_t v___x_2822_; lean_object* v___x_2824_; 
v___x_2822_ = 1;
if (v_isShared_2821_ == 0)
{
v___x_2824_ = v___x_2820_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_userData_2811_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_outputData_2812_);
lean_ctor_set(v_reuseFailAlloc_2835_, 2, v_state_2813_);
lean_ctor_set(v_reuseFailAlloc_2835_, 3, v_knownSize_2814_);
lean_ctor_set(v_reuseFailAlloc_2835_, 4, v_messageHead_2815_);
lean_ctor_set(v_reuseFailAlloc_2835_, 5, v_userDataBytes_2818_);
lean_ctor_set_uint8(v_reuseFailAlloc_2835_, sizeof(void*)*6, v_sentMessage_2816_);
lean_ctor_set_uint8(v_reuseFailAlloc_2835_, sizeof(void*)*6 + 2, v_omitBody_2817_);
v___x_2824_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
lean_object* v___x_2826_; 
lean_ctor_set_uint8(v___x_2824_, sizeof(void*)*6 + 1, v___x_2822_);
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 1, v___x_2824_);
v___x_2826_ = v___x_2809_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_reader_2800_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v___x_2824_);
lean_ctor_set(v_reuseFailAlloc_2834_, 2, v_config_2801_);
lean_ctor_set(v_reuseFailAlloc_2834_, 3, v_events_2802_);
lean_ctor_set(v_reuseFailAlloc_2834_, 4, v_error_2803_);
lean_ctor_set(v_reuseFailAlloc_2834_, 5, v_instant_2804_);
lean_ctor_set_uint8(v_reuseFailAlloc_2834_, sizeof(void*)*6, v_keepAlive_2805_);
lean_ctor_set_uint8(v_reuseFailAlloc_2834_, sizeof(void*)*6 + 1, v_forcedFlush_2806_);
lean_ctor_set_uint8(v_reuseFailAlloc_2834_, sizeof(void*)*6 + 2, v_pullBodyStalled_2807_);
v___x_2826_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2827_ = lean_box(0);
v___x_2828_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
lean_ctor_set(v___x_2828_, 1, v_requestStream_2788_);
lean_ctor_set(v___x_2828_, 2, v_keepAliveTimeout_2789_);
lean_ctor_set(v___x_2828_, 3, v_currentTimeout_2790_);
lean_ctor_set(v___x_2828_, 4, v_headerTimeout_2791_);
lean_ctor_set(v___x_2828_, 5, v_response_2792_);
lean_ctor_set(v___x_2828_, 6, v___x_2827_);
lean_ctor_set(v___x_2828_, 7, v_expectData_2794_);
lean_ctor_set(v___x_2828_, 8, v_pendingHead_2796_);
lean_ctor_set_uint8(v___x_2828_, sizeof(void*)*9, v_requiresData_2793_);
lean_ctor_set_uint8(v___x_2828_, sizeof(void*)*9 + 1, v_handlerDispatched_2795_);
v___x_2829_ = 0;
v___x_2830_ = lean_box(v___x_2829_);
v___x_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2828_);
lean_ctor_set(v___x_2831_, 1, v___x_2830_);
v___x_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2831_);
v___x_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2832_);
return v___x_2833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object* v_machine_2838_, lean_object* v_requestStream_2839_, lean_object* v_keepAliveTimeout_2840_, lean_object* v_currentTimeout_2841_, lean_object* v_headerTimeout_2842_, lean_object* v_response_2843_, lean_object* v_requiresData_2844_, lean_object* v_expectData_2845_, lean_object* v_handlerDispatched_2846_, lean_object* v_pendingHead_2847_, lean_object* v_____r_2848_, lean_object* v___y_2849_){
_start:
{
uint8_t v_requiresData_boxed_2850_; uint8_t v_handlerDispatched_boxed_2851_; lean_object* v_res_2852_; 
v_requiresData_boxed_2850_ = lean_unbox(v_requiresData_2844_);
v_handlerDispatched_boxed_2851_ = lean_unbox(v_handlerDispatched_2846_);
v_res_2852_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_2838_, v_requestStream_2839_, v_keepAliveTimeout_2840_, v_currentTimeout_2841_, v_headerTimeout_2842_, v_response_2843_, v_requiresData_boxed_2850_, v_expectData_2845_, v_handlerDispatched_boxed_2851_, v_pendingHead_2847_, v_____r_2848_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object* v___f_2853_, lean_object* v_x_2854_){
_start:
{
if (lean_obj_tag(v_x_2854_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2864_; 
lean_dec_ref(v___f_2853_);
v_a_2856_ = lean_ctor_get(v_x_2854_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v_x_2854_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2858_ = v_x_2854_;
v_isShared_2859_ = v_isSharedCheck_2864_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v_x_2854_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2864_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
lean_object* v___x_2862_; 
v___x_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
return v___x_2862_;
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2866_; 
v_a_2865_ = lean_ctor_get(v_x_2854_, 0);
lean_inc(v_a_2865_);
lean_dec_ref_known(v_x_2854_, 1);
v___x_2866_ = lean_apply_2(v___f_2853_, v_a_2865_, lean_box(0));
return v___x_2866_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object* v___f_2867_, lean_object* v_x_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(v___f_2867_, v_x_2868_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object* v_close_2871_, lean_object* v_val_2872_, lean_object* v___f_2873_, lean_object* v___f_2874_, lean_object* v_x_2875_){
_start:
{
if (lean_obj_tag(v_x_2875_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2885_; 
lean_dec_ref(v___f_2874_);
lean_dec_ref(v___f_2873_);
lean_dec(v_val_2872_);
lean_dec_ref(v_close_2871_);
v_a_2877_ = lean_ctor_get(v_x_2875_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_x_2875_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2879_ = v_x_2875_;
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v_x_2875_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
}
}
else
{
lean_object* v_a_2886_; uint8_t v___x_2887_; 
v_a_2886_ = lean_ctor_get(v_x_2875_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v_x_2875_, 1);
v___x_2887_ = lean_unbox(v_a_2886_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2888_; lean_object* v___x_2889_; uint8_t v___x_2890_; lean_object* v___x_2891_; 
lean_dec_ref(v___f_2874_);
v___x_2888_ = lean_unsigned_to_nat(0u);
v___x_2889_ = lean_apply_2(v_close_2871_, v_val_2872_, lean_box(0));
v___x_2890_ = lean_unbox(v_a_2886_);
lean_dec(v_a_2886_);
v___x_2891_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2888_, v___x_2890_, v___x_2889_, v___f_2873_);
return v___x_2891_;
}
else
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
lean_dec(v_a_2886_);
lean_dec_ref(v___f_2873_);
lean_dec(v_val_2872_);
lean_dec_ref(v_close_2871_);
v___x_2892_ = lean_box(0);
v___x_2893_ = lean_apply_2(v___f_2874_, v___x_2892_, lean_box(0));
return v___x_2893_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object* v_close_2894_, lean_object* v_val_2895_, lean_object* v___f_2896_, lean_object* v___f_2897_, lean_object* v_x_2898_, lean_object* v___y_2899_){
_start:
{
lean_object* v_res_2900_; 
v_res_2900_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(v_close_2894_, v_val_2895_, v___f_2896_, v___f_2897_, v_x_2898_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object* v_inst_2901_, lean_object* v_handler_2902_, lean_object* v_x_2903_){
_start:
{
if (lean_obj_tag(v_x_2903_) == 0)
{
lean_object* v_a_2905_; lean_object* v_onFailure_2906_; lean_object* v___x_2907_; 
v_a_2905_ = lean_ctor_get(v_x_2903_, 0);
lean_inc(v_a_2905_);
lean_dec_ref_known(v_x_2903_, 1);
v_onFailure_2906_ = lean_ctor_get(v_inst_2901_, 2);
lean_inc_ref(v_onFailure_2906_);
lean_dec_ref(v_inst_2901_);
v___x_2907_ = lean_apply_3(v_onFailure_2906_, v_handler_2902_, v_a_2905_, lean_box(0));
return v___x_2907_;
}
else
{
lean_object* v___x_2908_; 
lean_dec(v_handler_2902_);
lean_dec_ref(v_inst_2901_);
v___x_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2908_, 0, v_x_2903_);
return v___x_2908_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object* v_inst_2909_, lean_object* v_handler_2910_, lean_object* v_x_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(v_inst_2909_, v_handler_2910_, v_x_2911_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object* v_st_2914_, lean_object* v_____r_2915_){
_start:
{
uint8_t v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2917_ = 0;
v___x_2918_ = lean_box(v___x_2917_);
v___x_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2919_, 0, v_st_2914_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2919_);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object* v_st_2922_, lean_object* v_____r_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_2922_, v_____r_2923_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object* v_requestStream_2926_, lean_object* v___f_2927_, lean_object* v___f_2928_, lean_object* v_x_2929_){
_start:
{
if (lean_obj_tag(v_x_2929_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2939_; 
lean_dec_ref(v___f_2928_);
lean_dec_ref(v___f_2927_);
lean_dec_ref(v_requestStream_2926_);
v_a_2931_ = lean_ctor_get(v_x_2929_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v_x_2929_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2933_ = v_x_2929_;
v_isShared_2934_ = v_isSharedCheck_2939_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v_x_2929_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2939_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
lean_object* v___x_2937_; 
v___x_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
return v___x_2937_;
}
}
}
else
{
lean_object* v_a_2940_; uint8_t v___x_2941_; 
v_a_2940_ = lean_ctor_get(v_x_2929_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v_x_2929_, 1);
v___x_2941_ = lean_unbox(v_a_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; lean_object* v___x_2945_; 
lean_dec_ref(v___f_2928_);
v___x_2942_ = lean_unsigned_to_nat(0u);
v___x_2943_ = l_Std_Http_Body_Stream_close(v_requestStream_2926_);
v___x_2944_ = lean_unbox(v_a_2940_);
lean_dec(v_a_2940_);
v___x_2945_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2942_, v___x_2944_, v___x_2943_, v___f_2927_);
return v___x_2945_;
}
else
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
lean_dec(v_a_2940_);
lean_dec_ref(v___f_2927_);
lean_dec_ref(v_requestStream_2926_);
v___x_2946_ = lean_box(0);
v___x_2947_ = lean_apply_2(v___f_2928_, v___x_2946_, lean_box(0));
return v___x_2947_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object* v_requestStream_2948_, lean_object* v___f_2949_, lean_object* v___f_2950_, lean_object* v_x_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(v_requestStream_2948_, v___f_2949_, v___f_2950_, v_x_2951_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t v_final_2954_, lean_object* v___f_2955_, lean_object* v___f_2956_, lean_object* v_requestStream_2957_, lean_object* v___f_2958_, lean_object* v_x_2959_){
_start:
{
if (lean_obj_tag(v_x_2959_) == 0)
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2969_; 
lean_dec_ref(v___f_2958_);
lean_dec_ref(v_requestStream_2957_);
lean_dec_ref(v___f_2956_);
lean_dec_ref(v___f_2955_);
v_a_2961_ = lean_ctor_get(v_x_2959_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v_x_2959_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2963_ = v_x_2959_;
v_isShared_2964_ = v_isSharedCheck_2969_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v_x_2959_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2969_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
lean_object* v___x_2967_; 
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2966_);
return v___x_2967_;
}
}
}
else
{
lean_dec_ref_known(v_x_2959_, 1);
if (v_final_2954_ == 0)
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
lean_dec_ref(v___f_2958_);
lean_dec_ref(v_requestStream_2957_);
lean_dec_ref(v___f_2956_);
v___x_2970_ = lean_box(0);
v___x_2971_ = lean_apply_2(v___f_2955_, v___x_2970_, lean_box(0));
return v___x_2971_;
}
else
{
lean_object* v___x_2972_; uint8_t v___x_2973_; lean_object* v___x_2974_; lean_object* v___f_2975_; lean_object* v___f_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_6682__overap_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
lean_dec_ref(v___f_2955_);
v___x_2972_ = lean_unsigned_to_nat(0u);
v___x_2973_ = 0;
v___x_2974_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2975_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2976_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2977_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2978_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2978_, 0, lean_box(0));
lean_closure_set(v___x_2978_, 1, lean_box(0));
lean_closure_set(v___x_2978_, 2, v___x_2974_);
lean_closure_set(v___x_2978_, 3, lean_box(0));
lean_closure_set(v___x_2978_, 4, lean_box(0));
lean_closure_set(v___x_2978_, 5, v___x_2977_);
lean_closure_set(v___x_2978_, 6, v___f_2956_);
v___x_6682__overap_2979_ = l_Std_Mutex_atomically___redArg(v___x_2974_, v___f_2975_, v___f_2976_, v_requestStream_2957_, v___x_2978_);
v___x_2980_ = lean_apply_1(v___x_6682__overap_2979_, lean_box(0));
v___x_2981_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2972_, v___x_2973_, v___x_2980_, v___f_2958_);
return v___x_2981_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object* v_final_2982_, lean_object* v___f_2983_, lean_object* v___f_2984_, lean_object* v_requestStream_2985_, lean_object* v___f_2986_, lean_object* v_x_2987_, lean_object* v___y_2988_){
_start:
{
uint8_t v_final_boxed_2989_; lean_object* v_res_2990_; 
v_final_boxed_2989_ = lean_unbox(v_final_2982_);
v_res_2990_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(v_final_boxed_2989_, v___f_2983_, v___f_2984_, v_requestStream_2985_, v___f_2986_, v_x_2987_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object* v_state_2991_, lean_object* v_x_2992_){
_start:
{
if (lean_obj_tag(v_x_2992_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3002_; 
lean_dec_ref(v_state_2991_);
v_a_2994_ = lean_ctor_get(v_x_2992_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v_x_2992_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2996_ = v_x_2992_;
v_isShared_2997_ = v_isSharedCheck_3002_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v_x_2992_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3002_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3000_; 
v___x_3000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2999_);
return v___x_3000_;
}
}
}
else
{
lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3032_; 
v_isSharedCheck_3032_ = !lean_is_exclusive(v_x_2992_);
if (v_isSharedCheck_3032_ == 0)
{
lean_object* v_unused_3033_; 
v_unused_3033_ = lean_ctor_get(v_x_2992_, 0);
lean_dec(v_unused_3033_);
v___x_3004_ = v_x_2992_;
v_isShared_3005_ = v_isSharedCheck_3032_;
goto v_resetjp_3003_;
}
else
{
lean_dec(v_x_2992_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3032_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v_machine_3006_; lean_object* v_requestStream_3007_; lean_object* v_keepAliveTimeout_3008_; lean_object* v_currentTimeout_3009_; lean_object* v_headerTimeout_3010_; lean_object* v_response_3011_; lean_object* v_respStream_3012_; uint8_t v_requiresData_3013_; lean_object* v_expectData_3014_; lean_object* v_pendingHead_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3031_; 
v_machine_3006_ = lean_ctor_get(v_state_2991_, 0);
v_requestStream_3007_ = lean_ctor_get(v_state_2991_, 1);
v_keepAliveTimeout_3008_ = lean_ctor_get(v_state_2991_, 2);
v_currentTimeout_3009_ = lean_ctor_get(v_state_2991_, 3);
v_headerTimeout_3010_ = lean_ctor_get(v_state_2991_, 4);
v_response_3011_ = lean_ctor_get(v_state_2991_, 5);
v_respStream_3012_ = lean_ctor_get(v_state_2991_, 6);
v_requiresData_3013_ = lean_ctor_get_uint8(v_state_2991_, sizeof(void*)*9);
v_expectData_3014_ = lean_ctor_get(v_state_2991_, 7);
v_pendingHead_3015_ = lean_ctor_get(v_state_2991_, 8);
v_isSharedCheck_3031_ = !lean_is_exclusive(v_state_2991_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3017_ = v_state_2991_;
v_isShared_3018_ = v_isSharedCheck_3031_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_pendingHead_3015_);
lean_inc(v_expectData_3014_);
lean_inc(v_respStream_3012_);
lean_inc(v_response_3011_);
lean_inc(v_headerTimeout_3010_);
lean_inc(v_currentTimeout_3009_);
lean_inc(v_keepAliveTimeout_3008_);
lean_inc(v_requestStream_3007_);
lean_inc(v_machine_3006_);
lean_dec(v_state_2991_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3031_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; lean_object* v___x_3023_; 
v___x_3019_ = lean_box(52);
v___x_3020_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3006_, v___x_3019_);
v___x_3021_ = 0;
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 0, v___x_3020_);
v___x_3023_ = v___x_3017_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3020_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v_requestStream_3007_);
lean_ctor_set(v_reuseFailAlloc_3030_, 2, v_keepAliveTimeout_3008_);
lean_ctor_set(v_reuseFailAlloc_3030_, 3, v_currentTimeout_3009_);
lean_ctor_set(v_reuseFailAlloc_3030_, 4, v_headerTimeout_3010_);
lean_ctor_set(v_reuseFailAlloc_3030_, 5, v_response_3011_);
lean_ctor_set(v_reuseFailAlloc_3030_, 6, v_respStream_3012_);
lean_ctor_set(v_reuseFailAlloc_3030_, 7, v_expectData_3014_);
lean_ctor_set(v_reuseFailAlloc_3030_, 8, v_pendingHead_3015_);
lean_ctor_set_uint8(v_reuseFailAlloc_3030_, sizeof(void*)*9, v_requiresData_3013_);
v___x_3023_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3027_; 
lean_ctor_set_uint8(v___x_3023_, sizeof(void*)*9 + 1, v___x_3021_);
v___x_3024_ = lean_box(v___x_3021_);
v___x_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3023_);
lean_ctor_set(v___x_3025_, 1, v___x_3024_);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 0, v___x_3025_);
v___x_3027_ = v___x_3004_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3028_; 
v___x_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
return v___x_3028_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object* v_state_3034_, lean_object* v_x_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(v_state_3034_, v_x_3035_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object* v_machine_3038_, lean_object* v_requestStream_3039_, lean_object* v_keepAliveTimeout_3040_, lean_object* v_currentTimeout_3041_, lean_object* v_headerTimeout_3042_, lean_object* v_response_3043_, lean_object* v_respStream_3044_, uint8_t v_requiresData_3045_, lean_object* v_expectData_3046_, lean_object* v_pendingHead_3047_, lean_object* v_____r_3048_){
_start:
{
uint8_t v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3050_ = 0;
v___x_3051_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3051_, 0, v_machine_3038_);
lean_ctor_set(v___x_3051_, 1, v_requestStream_3039_);
lean_ctor_set(v___x_3051_, 2, v_keepAliveTimeout_3040_);
lean_ctor_set(v___x_3051_, 3, v_currentTimeout_3041_);
lean_ctor_set(v___x_3051_, 4, v_headerTimeout_3042_);
lean_ctor_set(v___x_3051_, 5, v_response_3043_);
lean_ctor_set(v___x_3051_, 6, v_respStream_3044_);
lean_ctor_set(v___x_3051_, 7, v_expectData_3046_);
lean_ctor_set(v___x_3051_, 8, v_pendingHead_3047_);
lean_ctor_set_uint8(v___x_3051_, sizeof(void*)*9, v_requiresData_3045_);
lean_ctor_set_uint8(v___x_3051_, sizeof(void*)*9 + 1, v___x_3050_);
v___x_3052_ = lean_box(v___x_3050_);
v___x_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3051_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
v___x_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3053_);
v___x_3055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
return v___x_3055_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object* v_machine_3056_, lean_object* v_requestStream_3057_, lean_object* v_keepAliveTimeout_3058_, lean_object* v_currentTimeout_3059_, lean_object* v_headerTimeout_3060_, lean_object* v_response_3061_, lean_object* v_respStream_3062_, lean_object* v_requiresData_3063_, lean_object* v_expectData_3064_, lean_object* v_pendingHead_3065_, lean_object* v_____r_3066_, lean_object* v___y_3067_){
_start:
{
uint8_t v_requiresData_boxed_3068_; lean_object* v_res_3069_; 
v_requiresData_boxed_3068_ = lean_unbox(v_requiresData_3063_);
v_res_3069_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(v_machine_3056_, v_requestStream_3057_, v_keepAliveTimeout_3058_, v_currentTimeout_3059_, v_headerTimeout_3060_, v_response_3061_, v_respStream_3062_, v_requiresData_boxed_3068_, v_expectData_3064_, v_pendingHead_3065_, v_____r_3066_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object* v_close_3070_, lean_object* v_body_3071_, lean_object* v___f_3072_, lean_object* v___f_3073_, lean_object* v_x_3074_){
_start:
{
if (lean_obj_tag(v_x_3074_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3084_; 
lean_dec_ref(v___f_3073_);
lean_dec_ref(v___f_3072_);
lean_dec(v_body_3071_);
lean_dec_ref(v_close_3070_);
v_a_3076_ = lean_ctor_get(v_x_3074_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_x_3074_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3078_ = v_x_3074_;
v_isShared_3079_ = v_isSharedCheck_3084_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v_x_3074_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3084_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3081_);
return v___x_3082_;
}
}
}
else
{
lean_object* v_a_3085_; uint8_t v___x_3086_; 
v_a_3085_ = lean_ctor_get(v_x_3074_, 0);
lean_inc(v_a_3085_);
lean_dec_ref_known(v_x_3074_, 1);
v___x_3086_ = lean_unbox(v_a_3085_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; lean_object* v___x_3088_; uint8_t v___x_3089_; lean_object* v___x_3090_; 
lean_dec_ref(v___f_3073_);
v___x_3087_ = lean_unsigned_to_nat(0u);
v___x_3088_ = lean_apply_2(v_close_3070_, v_body_3071_, lean_box(0));
v___x_3089_ = lean_unbox(v_a_3085_);
lean_dec(v_a_3085_);
v___x_3090_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3087_, v___x_3089_, v___x_3088_, v___f_3072_);
return v___x_3090_;
}
else
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
lean_dec(v_a_3085_);
lean_dec_ref(v___f_3072_);
lean_dec(v_body_3071_);
lean_dec_ref(v_close_3070_);
v___x_3091_ = lean_box(0);
v___x_3092_ = lean_apply_2(v___f_3073_, v___x_3091_, lean_box(0));
return v___x_3092_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object* v_close_3093_, lean_object* v_body_3094_, lean_object* v___f_3095_, lean_object* v___f_3096_, lean_object* v_x_3097_, lean_object* v___y_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(v_close_3093_, v_body_3094_, v___f_3095_, v___f_3096_, v_x_3097_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object* v_requestStream_3100_, lean_object* v_keepAliveTimeout_3101_, lean_object* v_currentTimeout_3102_, lean_object* v_headerTimeout_3103_, lean_object* v_response_3104_, uint8_t v_requiresData_3105_, lean_object* v_expectData_3106_, uint8_t v___x_3107_, lean_object* v_pendingHead_3108_, lean_object* v_____x_3109_){
_start:
{
lean_object* v_snd_3111_; lean_object* v_fst_3112_; lean_object* v_fst_3113_; lean_object* v_snd_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3124_; 
v_snd_3111_ = lean_ctor_get(v_____x_3109_, 1);
lean_inc(v_snd_3111_);
v_fst_3112_ = lean_ctor_get(v_____x_3109_, 0);
lean_inc(v_fst_3112_);
lean_dec_ref(v_____x_3109_);
v_fst_3113_ = lean_ctor_get(v_snd_3111_, 0);
v_snd_3114_ = lean_ctor_get(v_snd_3111_, 1);
v_isSharedCheck_3124_ = !lean_is_exclusive(v_snd_3111_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3116_ = v_snd_3111_;
v_isShared_3117_ = v_isSharedCheck_3124_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_snd_3114_);
lean_inc(v_fst_3113_);
lean_dec(v_snd_3111_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3124_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v___x_3120_; 
v___x_3118_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3118_, 0, v_fst_3112_);
lean_ctor_set(v___x_3118_, 1, v_requestStream_3100_);
lean_ctor_set(v___x_3118_, 2, v_keepAliveTimeout_3101_);
lean_ctor_set(v___x_3118_, 3, v_currentTimeout_3102_);
lean_ctor_set(v___x_3118_, 4, v_headerTimeout_3103_);
lean_ctor_set(v___x_3118_, 5, v_response_3104_);
lean_ctor_set(v___x_3118_, 6, v_fst_3113_);
lean_ctor_set(v___x_3118_, 7, v_expectData_3106_);
lean_ctor_set(v___x_3118_, 8, v_pendingHead_3108_);
lean_ctor_set_uint8(v___x_3118_, sizeof(void*)*9, v_requiresData_3105_);
lean_ctor_set_uint8(v___x_3118_, sizeof(void*)*9 + 1, v___x_3107_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 0, v___x_3118_);
v___x_3120_ = v___x_3116_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3118_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_snd_3114_);
v___x_3120_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
return v___x_3122_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object* v_requestStream_3125_, lean_object* v_keepAliveTimeout_3126_, lean_object* v_currentTimeout_3127_, lean_object* v_headerTimeout_3128_, lean_object* v_response_3129_, lean_object* v_requiresData_3130_, lean_object* v_expectData_3131_, lean_object* v___x_3132_, lean_object* v_pendingHead_3133_, lean_object* v_____x_3134_, lean_object* v___y_3135_){
_start:
{
uint8_t v_requiresData_boxed_3136_; uint8_t v___x_7492__boxed_3137_; lean_object* v_res_3138_; 
v_requiresData_boxed_3136_ = lean_unbox(v_requiresData_3130_);
v___x_7492__boxed_3137_ = lean_unbox(v___x_3132_);
v_res_3138_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(v_requestStream_3125_, v_keepAliveTimeout_3126_, v_currentTimeout_3127_, v_headerTimeout_3128_, v_response_3129_, v_requiresData_boxed_3136_, v_expectData_3131_, v___x_7492__boxed_3137_, v_pendingHead_3133_, v_____x_3134_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object* v___f_3139_, lean_object* v_x_3140_){
_start:
{
if (lean_obj_tag(v_x_3140_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3150_; 
lean_dec_ref(v___f_3139_);
v_a_3142_ = lean_ctor_get(v_x_3140_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v_x_3140_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3144_ = v_x_3140_;
v_isShared_3145_ = v_isSharedCheck_3150_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v_x_3140_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3150_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3142_);
v___x_3147_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3148_; 
v___x_3148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
return v___x_3148_;
}
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3152_; 
v_a_3151_ = lean_ctor_get(v_x_3140_, 0);
lean_inc(v_a_3151_);
lean_dec_ref_known(v_x_3140_, 1);
v___x_3152_ = lean_apply_2(v___f_3139_, v_a_3151_, lean_box(0));
return v___x_3152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object* v___f_3153_, lean_object* v_x_3154_, lean_object* v___y_3155_){
_start:
{
lean_object* v_res_3156_; 
v_res_3156_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(v___f_3153_, v_x_3154_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(uint8_t v___x_3157_, lean_object* v_x_3158_){
_start:
{
if (lean_obj_tag(v_x_3158_) == 0)
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3168_; 
v_a_3160_ = lean_ctor_get(v_x_3158_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v_x_3158_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3162_ = v_x_3158_;
v_isShared_3163_ = v_isSharedCheck_3168_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v_x_3158_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3168_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3165_; 
if (v_isShared_3163_ == 0)
{
v___x_3165_ = v___x_3162_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3160_);
v___x_3165_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
lean_object* v___x_3166_; 
v___x_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
return v___x_3166_;
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3188_; 
v_a_3169_ = lean_ctor_get(v_x_3158_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v_x_3158_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3171_ = v_x_3158_;
v_isShared_3172_ = v_isSharedCheck_3188_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v_x_3158_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3188_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v_fst_3173_; lean_object* v_snd_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3187_; 
v_fst_3173_ = lean_ctor_get(v_a_3169_, 0);
v_snd_3174_ = lean_ctor_get(v_a_3169_, 1);
v_isSharedCheck_3187_ = !lean_is_exclusive(v_a_3169_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3176_ = v_a_3169_;
v_isShared_3177_ = v_isSharedCheck_3187_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_snd_3174_);
lean_inc(v_fst_3173_);
lean_dec(v_a_3169_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3187_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3178_ = lean_box(v___x_3157_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 1, v___x_3178_);
lean_ctor_set(v___x_3176_, 0, v_snd_3174_);
v___x_3180_ = v___x_3176_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v_snd_3174_);
lean_ctor_set(v_reuseFailAlloc_3186_, 1, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
lean_object* v___x_3181_; lean_object* v___x_3183_; 
v___x_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3181_, 0, v_fst_3173_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3181_);
v___x_3183_ = v___x_3171_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v___x_3181_);
v___x_3183_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
lean_object* v___x_3184_; 
v___x_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
return v___x_3184_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object* v___x_3189_, lean_object* v_x_3190_, lean_object* v___y_3191_){
_start:
{
uint8_t v___x_7560__boxed_3192_; lean_object* v_res_3193_; 
v___x_7560__boxed_3192_ = lean_unbox(v___x_3189_);
v_res_3193_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(v___x_7560__boxed_3192_, v_x_3190_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object* v_snd_3194_, uint8_t v___x_3195_, lean_object* v_fst_3196_, lean_object* v_x_3197_){
_start:
{
if (lean_obj_tag(v_x_3197_) == 0)
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3207_; 
lean_dec_ref(v_fst_3196_);
lean_dec(v_snd_3194_);
v_a_3199_ = lean_ctor_get(v_x_3197_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v_x_3197_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3201_ = v_x_3197_;
v_isShared_3202_ = v_isSharedCheck_3207_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v_x_3197_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3207_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3204_);
return v___x_3205_;
}
}
}
else
{
lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3218_; 
v_isSharedCheck_3218_ = !lean_is_exclusive(v_x_3197_);
if (v_isSharedCheck_3218_ == 0)
{
lean_object* v_unused_3219_; 
v_unused_3219_ = lean_ctor_get(v_x_3197_, 0);
lean_dec(v_unused_3219_);
v___x_3209_ = v_x_3197_;
v_isShared_3210_ = v_isSharedCheck_3218_;
goto v_resetjp_3208_;
}
else
{
lean_dec(v_x_3197_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3218_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3215_; 
v___x_3211_ = lean_box(v___x_3195_);
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v_snd_3194_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v_fst_3196_);
lean_ctor_set(v___x_3213_, 1, v___x_3212_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 0, v___x_3213_);
v___x_3215_ = v___x_3209_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v___x_3213_);
v___x_3215_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
lean_object* v___x_3216_; 
v___x_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
return v___x_3216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object* v_snd_3220_, lean_object* v___x_3221_, lean_object* v_fst_3222_, lean_object* v_x_3223_, lean_object* v___y_3224_){
_start:
{
uint8_t v___x_7628__boxed_3225_; lean_object* v_res_3226_; 
v___x_7628__boxed_3225_ = lean_unbox(v___x_3221_);
v_res_3226_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(v_snd_3220_, v___x_7628__boxed_3225_, v_fst_3222_, v_x_3223_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object* v_inst_3227_, lean_object* v_handler_3228_, uint8_t v___x_3229_, lean_object* v___f_3230_, lean_object* v_x_3231_){
_start:
{
if (lean_obj_tag(v_x_3231_) == 0)
{
lean_object* v_a_3233_; lean_object* v_onFailure_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v_a_3233_ = lean_ctor_get(v_x_3231_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v_x_3231_, 1);
v_onFailure_3234_ = lean_ctor_get(v_inst_3227_, 2);
lean_inc_ref(v_onFailure_3234_);
lean_dec_ref(v_inst_3227_);
v___x_3235_ = lean_unsigned_to_nat(0u);
v___x_3236_ = lean_apply_3(v_onFailure_3234_, v_handler_3228_, v_a_3233_, lean_box(0));
v___x_3237_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3235_, v___x_3229_, v___x_3236_, v___f_3230_);
return v___x_3237_;
}
else
{
lean_object* v___x_3238_; 
lean_dec_ref(v___f_3230_);
lean_dec(v_handler_3228_);
lean_dec_ref(v_inst_3227_);
v___x_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3238_, 0, v_x_3231_);
return v___x_3238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object* v_inst_3239_, lean_object* v_handler_3240_, lean_object* v___x_3241_, lean_object* v___f_3242_, lean_object* v_x_3243_, lean_object* v___y_3244_){
_start:
{
uint8_t v___x_7686__boxed_3245_; lean_object* v_res_3246_; 
v___x_7686__boxed_3245_ = lean_unbox(v___x_3241_);
v_res_3246_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(v_inst_3239_, v_handler_3240_, v___x_7686__boxed_3245_, v___f_3242_, v_x_3243_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t v___x_3247_, lean_object* v___f_3248_, uint8_t v___x_3249_, lean_object* v_inst_3250_, lean_object* v_handler_3251_, lean_object* v_inst_3252_, lean_object* v___f_3253_, lean_object* v___f_3254_, lean_object* v_x_3255_){
_start:
{
if (lean_obj_tag(v_x_3255_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3265_; 
lean_dec_ref(v___f_3254_);
lean_dec_ref(v___f_3253_);
lean_dec_ref(v_inst_3252_);
lean_dec(v_handler_3251_);
lean_dec_ref(v_inst_3250_);
lean_dec_ref(v___f_3248_);
v_a_3257_ = lean_ctor_get(v_x_3255_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v_x_3255_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3259_ = v_x_3255_;
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v_x_3255_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3262_; 
if (v_isShared_3260_ == 0)
{
v___x_3262_ = v___x_3259_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3257_);
v___x_3262_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3263_; 
v___x_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
return v___x_3263_;
}
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3299_; 
v_a_3266_ = lean_ctor_get(v_x_3255_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v_x_3255_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3268_ = v_x_3255_;
v_isShared_3269_ = v_isSharedCheck_3299_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v_x_3255_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3299_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v_snd_3270_; 
v_snd_3270_ = lean_ctor_get(v_a_3266_, 1);
lean_inc(v_snd_3270_);
if (lean_obj_tag(v_snd_3270_) == 0)
{
lean_object* v_fst_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3286_; 
lean_dec_ref(v___f_3254_);
lean_dec_ref(v___f_3253_);
lean_dec_ref(v_inst_3252_);
lean_dec(v_handler_3251_);
lean_dec_ref(v_inst_3250_);
v_fst_3271_ = lean_ctor_get(v_a_3266_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_a_3266_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; 
v_unused_3287_ = lean_ctor_get(v_a_3266_, 1);
lean_dec(v_unused_3287_);
v___x_3273_ = v_a_3266_;
v_isShared_3274_ = v_isSharedCheck_3286_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_fst_3271_);
lean_dec(v_a_3266_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3286_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3275_ = lean_box(v___x_3247_);
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 1, v___x_3275_);
lean_ctor_set(v___x_3273_, 0, v_snd_3270_);
v___x_3277_ = v___x_3273_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_snd_3270_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3281_; 
v___x_3278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3278_, 0, v_fst_3271_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = lean_unsigned_to_nat(0u);
if (v_isShared_3269_ == 0)
{
lean_ctor_set(v___x_3268_, 0, v___x_3278_);
v___x_3281_ = v___x_3268_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3278_);
v___x_3281_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3281_);
v___x_3283_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3279_, v___x_3247_, v___x_3282_, v___f_3248_);
return v___x_3283_;
}
}
}
}
else
{
lean_object* v_fst_3288_; lean_object* v_val_3289_; lean_object* v___x_3290_; lean_object* v___f_3291_; lean_object* v___x_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
lean_del_object(v___x_3268_);
lean_dec_ref(v___f_3248_);
v_fst_3288_ = lean_ctor_get(v_a_3266_, 0);
lean_inc_n(v_fst_3288_, 2);
lean_dec(v_a_3266_);
v_val_3289_ = lean_ctor_get(v_snd_3270_, 0);
lean_inc(v_val_3289_);
v___x_3290_ = lean_box(v___x_3249_);
v___f_3291_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed), 5, 3);
lean_closure_set(v___f_3291_, 0, v_snd_3270_);
lean_closure_set(v___f_3291_, 1, v___x_3290_);
lean_closure_set(v___f_3291_, 2, v_fst_3288_);
v___x_3292_ = lean_box(v___x_3247_);
v___f_3293_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed), 6, 4);
lean_closure_set(v___f_3293_, 0, v_inst_3250_);
lean_closure_set(v___f_3293_, 1, v_handler_3251_);
lean_closure_set(v___f_3293_, 2, v___x_3292_);
lean_closure_set(v___f_3293_, 3, v___f_3291_);
v___x_3294_ = lean_unsigned_to_nat(0u);
v___x_3295_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_3252_, v_fst_3288_, v_val_3289_);
v___x_3296_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3294_, v___x_3247_, v___x_3295_, v___f_3253_);
v___x_3297_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3294_, v___x_3247_, v___x_3296_, v___f_3293_);
v___x_3298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3294_, v___x_3247_, v___x_3297_, v___f_3254_);
return v___x_3298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object* v___x_3300_, lean_object* v___f_3301_, lean_object* v___x_3302_, lean_object* v_inst_3303_, lean_object* v_handler_3304_, lean_object* v_inst_3305_, lean_object* v___f_3306_, lean_object* v___f_3307_, lean_object* v_x_3308_, lean_object* v___y_3309_){
_start:
{
uint8_t v___x_7711__boxed_3310_; uint8_t v___x_7713__boxed_3311_; lean_object* v_res_3312_; 
v___x_7711__boxed_3310_ = lean_unbox(v___x_3300_);
v___x_7713__boxed_3311_ = lean_unbox(v___x_3302_);
v_res_3312_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(v___x_7711__boxed_3310_, v___f_3301_, v___x_7713__boxed_3311_, v_inst_3303_, v_handler_3304_, v_inst_3305_, v___f_3306_, v___f_3307_, v_x_3308_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object* v_state_3313_, lean_object* v_x_3314_){
_start:
{
if (lean_obj_tag(v_x_3314_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3324_; 
lean_dec_ref(v_state_3313_);
v_a_3316_ = lean_ctor_get(v_x_3314_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v_x_3314_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3318_ = v_x_3314_;
v_isShared_3319_ = v_isSharedCheck_3324_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v_x_3314_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3324_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
lean_object* v___x_3322_; 
v___x_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3322_, 0, v___x_3321_);
return v___x_3322_;
}
}
}
else
{
lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3354_; 
v_isSharedCheck_3354_ = !lean_is_exclusive(v_x_3314_);
if (v_isSharedCheck_3354_ == 0)
{
lean_object* v_unused_3355_; 
v_unused_3355_ = lean_ctor_get(v_x_3314_, 0);
lean_dec(v_unused_3355_);
v___x_3326_ = v_x_3314_;
v_isShared_3327_ = v_isSharedCheck_3354_;
goto v_resetjp_3325_;
}
else
{
lean_dec(v_x_3314_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3354_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v_machine_3328_; lean_object* v_requestStream_3329_; lean_object* v_keepAliveTimeout_3330_; lean_object* v_currentTimeout_3331_; lean_object* v_headerTimeout_3332_; lean_object* v_response_3333_; lean_object* v_respStream_3334_; uint8_t v_requiresData_3335_; lean_object* v_expectData_3336_; lean_object* v_pendingHead_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3353_; 
v_machine_3328_ = lean_ctor_get(v_state_3313_, 0);
v_requestStream_3329_ = lean_ctor_get(v_state_3313_, 1);
v_keepAliveTimeout_3330_ = lean_ctor_get(v_state_3313_, 2);
v_currentTimeout_3331_ = lean_ctor_get(v_state_3313_, 3);
v_headerTimeout_3332_ = lean_ctor_get(v_state_3313_, 4);
v_response_3333_ = lean_ctor_get(v_state_3313_, 5);
v_respStream_3334_ = lean_ctor_get(v_state_3313_, 6);
v_requiresData_3335_ = lean_ctor_get_uint8(v_state_3313_, sizeof(void*)*9);
v_expectData_3336_ = lean_ctor_get(v_state_3313_, 7);
v_pendingHead_3337_ = lean_ctor_get(v_state_3313_, 8);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_state_3313_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3339_ = v_state_3313_;
v_isShared_3340_ = v_isSharedCheck_3353_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_pendingHead_3337_);
lean_inc(v_expectData_3336_);
lean_inc(v_respStream_3334_);
lean_inc(v_response_3333_);
lean_inc(v_headerTimeout_3332_);
lean_inc(v_currentTimeout_3331_);
lean_inc(v_keepAliveTimeout_3330_);
lean_inc(v_requestStream_3329_);
lean_inc(v_machine_3328_);
lean_dec(v_state_3313_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3353_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; lean_object* v___x_3345_; 
v___x_3341_ = lean_box(31);
v___x_3342_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3328_, v___x_3341_);
v___x_3343_ = 0;
if (v_isShared_3340_ == 0)
{
lean_ctor_set(v___x_3339_, 0, v___x_3342_);
v___x_3345_ = v___x_3339_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___x_3342_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_requestStream_3329_);
lean_ctor_set(v_reuseFailAlloc_3352_, 2, v_keepAliveTimeout_3330_);
lean_ctor_set(v_reuseFailAlloc_3352_, 3, v_currentTimeout_3331_);
lean_ctor_set(v_reuseFailAlloc_3352_, 4, v_headerTimeout_3332_);
lean_ctor_set(v_reuseFailAlloc_3352_, 5, v_response_3333_);
lean_ctor_set(v_reuseFailAlloc_3352_, 6, v_respStream_3334_);
lean_ctor_set(v_reuseFailAlloc_3352_, 7, v_expectData_3336_);
lean_ctor_set(v_reuseFailAlloc_3352_, 8, v_pendingHead_3337_);
lean_ctor_set_uint8(v_reuseFailAlloc_3352_, sizeof(void*)*9, v_requiresData_3335_);
v___x_3345_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3349_; 
lean_ctor_set_uint8(v___x_3345_, sizeof(void*)*9 + 1, v___x_3343_);
v___x_3346_ = lean_box(v___x_3343_);
v___x_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3345_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 0, v___x_3347_);
v___x_3349_ = v___x_3326_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3347_);
v___x_3349_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
return v___x_3350_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object* v_state_3356_, lean_object* v_x_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(v_state_3356_, v_x_3357_);
return v_res_3359_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2(void){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1));
v___x_3365_ = lean_mk_io_user_error(v___x_3364_);
return v___x_3365_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object* v_inst_3366_, lean_object* v_inst_3367_, lean_object* v_handler_3368_, lean_object* v_config_3369_, lean_object* v_event_3370_, lean_object* v_state_3371_){
_start:
{
switch(lean_obj_tag(v_event_3370_))
{
case 0:
{
lean_object* v_x_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3480_; 
lean_dec(v_handler_3368_);
lean_dec_ref(v_inst_3367_);
lean_dec_ref(v_inst_3366_);
v_x_3373_ = lean_ctor_get(v_event_3370_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v_event_3370_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3375_ = v_event_3370_;
v_isShared_3376_ = v_isSharedCheck_3480_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_x_3373_);
lean_dec(v_event_3370_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3480_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
if (lean_obj_tag(v_x_3373_) == 0)
{
lean_object* v_machine_3377_; lean_object* v_reader_3378_; lean_object* v_requestStream_3379_; lean_object* v_keepAliveTimeout_3380_; lean_object* v_currentTimeout_3381_; lean_object* v_headerTimeout_3382_; lean_object* v_response_3383_; lean_object* v_respStream_3384_; uint8_t v_requiresData_3385_; lean_object* v_expectData_3386_; uint8_t v_handlerDispatched_3387_; lean_object* v_pendingHead_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3431_; 
lean_dec_ref(v_config_3369_);
v_machine_3377_ = lean_ctor_get(v_state_3371_, 0);
lean_inc_ref(v_machine_3377_);
v_reader_3378_ = lean_ctor_get(v_machine_3377_, 0);
lean_inc_ref(v_reader_3378_);
v_requestStream_3379_ = lean_ctor_get(v_state_3371_, 1);
v_keepAliveTimeout_3380_ = lean_ctor_get(v_state_3371_, 2);
v_currentTimeout_3381_ = lean_ctor_get(v_state_3371_, 3);
v_headerTimeout_3382_ = lean_ctor_get(v_state_3371_, 4);
v_response_3383_ = lean_ctor_get(v_state_3371_, 5);
v_respStream_3384_ = lean_ctor_get(v_state_3371_, 6);
v_requiresData_3385_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3386_ = lean_ctor_get(v_state_3371_, 7);
v_handlerDispatched_3387_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9 + 1);
v_pendingHead_3388_ = lean_ctor_get(v_state_3371_, 8);
v_isSharedCheck_3431_ = !lean_is_exclusive(v_state_3371_);
if (v_isSharedCheck_3431_ == 0)
{
lean_object* v_unused_3432_; 
v_unused_3432_ = lean_ctor_get(v_state_3371_, 0);
lean_dec(v_unused_3432_);
v___x_3390_ = v_state_3371_;
v_isShared_3391_ = v_isSharedCheck_3431_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_pendingHead_3388_);
lean_inc(v_expectData_3386_);
lean_inc(v_respStream_3384_);
lean_inc(v_response_3383_);
lean_inc(v_headerTimeout_3382_);
lean_inc(v_currentTimeout_3381_);
lean_inc(v_keepAliveTimeout_3380_);
lean_inc(v_requestStream_3379_);
lean_dec(v_state_3371_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3431_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v_writer_3392_; lean_object* v_config_3393_; lean_object* v_events_3394_; lean_object* v_error_3395_; lean_object* v_instant_3396_; uint8_t v_keepAlive_3397_; uint8_t v_forcedFlush_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3429_; 
v_writer_3392_ = lean_ctor_get(v_machine_3377_, 1);
v_config_3393_ = lean_ctor_get(v_machine_3377_, 2);
v_events_3394_ = lean_ctor_get(v_machine_3377_, 3);
v_error_3395_ = lean_ctor_get(v_machine_3377_, 4);
v_instant_3396_ = lean_ctor_get(v_machine_3377_, 5);
v_keepAlive_3397_ = lean_ctor_get_uint8(v_machine_3377_, sizeof(void*)*6);
v_forcedFlush_3398_ = lean_ctor_get_uint8(v_machine_3377_, sizeof(void*)*6 + 1);
v_isSharedCheck_3429_ = !lean_is_exclusive(v_machine_3377_);
if (v_isSharedCheck_3429_ == 0)
{
lean_object* v_unused_3430_; 
v_unused_3430_ = lean_ctor_get(v_machine_3377_, 0);
lean_dec(v_unused_3430_);
v___x_3400_ = v_machine_3377_;
v_isShared_3401_ = v_isSharedCheck_3429_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_instant_3396_);
lean_inc(v_error_3395_);
lean_inc(v_events_3394_);
lean_inc(v_config_3393_);
lean_inc(v_writer_3392_);
lean_dec(v_machine_3377_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3429_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v_state_3402_; lean_object* v_input_3403_; lean_object* v_messageHead_3404_; lean_object* v_messageCount_3405_; lean_object* v_bodyBytesRead_3406_; lean_object* v_headerBytesRead_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3428_; 
v_state_3402_ = lean_ctor_get(v_reader_3378_, 0);
v_input_3403_ = lean_ctor_get(v_reader_3378_, 1);
v_messageHead_3404_ = lean_ctor_get(v_reader_3378_, 2);
v_messageCount_3405_ = lean_ctor_get(v_reader_3378_, 3);
v_bodyBytesRead_3406_ = lean_ctor_get(v_reader_3378_, 4);
v_headerBytesRead_3407_ = lean_ctor_get(v_reader_3378_, 5);
v_isSharedCheck_3428_ = !lean_is_exclusive(v_reader_3378_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3409_ = v_reader_3378_;
v_isShared_3410_ = v_isSharedCheck_3428_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_headerBytesRead_3407_);
lean_inc(v_bodyBytesRead_3406_);
lean_inc(v_messageCount_3405_);
lean_inc(v_messageHead_3404_);
lean_inc(v_input_3403_);
lean_inc(v_state_3402_);
lean_dec(v_reader_3378_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3428_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
uint8_t v___x_3411_; lean_object* v___x_3413_; 
v___x_3411_ = 1;
if (v_isShared_3410_ == 0)
{
v___x_3413_ = v___x_3409_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v_state_3402_);
lean_ctor_set(v_reuseFailAlloc_3427_, 1, v_input_3403_);
lean_ctor_set(v_reuseFailAlloc_3427_, 2, v_messageHead_3404_);
lean_ctor_set(v_reuseFailAlloc_3427_, 3, v_messageCount_3405_);
lean_ctor_set(v_reuseFailAlloc_3427_, 4, v_bodyBytesRead_3406_);
lean_ctor_set(v_reuseFailAlloc_3427_, 5, v_headerBytesRead_3407_);
v___x_3413_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
uint8_t v___x_3414_; lean_object* v___x_3416_; 
lean_ctor_set_uint8(v___x_3413_, sizeof(void*)*6, v___x_3411_);
v___x_3414_ = 0;
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 0, v___x_3413_);
v___x_3416_ = v___x_3400_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3413_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v_writer_3392_);
lean_ctor_set(v_reuseFailAlloc_3426_, 2, v_config_3393_);
lean_ctor_set(v_reuseFailAlloc_3426_, 3, v_events_3394_);
lean_ctor_set(v_reuseFailAlloc_3426_, 4, v_error_3395_);
lean_ctor_set(v_reuseFailAlloc_3426_, 5, v_instant_3396_);
lean_ctor_set_uint8(v_reuseFailAlloc_3426_, sizeof(void*)*6, v_keepAlive_3397_);
lean_ctor_set_uint8(v_reuseFailAlloc_3426_, sizeof(void*)*6 + 1, v_forcedFlush_3398_);
v___x_3416_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3418_; 
lean_ctor_set_uint8(v___x_3416_, sizeof(void*)*6 + 2, v___x_3414_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3416_);
v___x_3418_ = v___x_3390_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3416_);
lean_ctor_set(v_reuseFailAlloc_3425_, 1, v_requestStream_3379_);
lean_ctor_set(v_reuseFailAlloc_3425_, 2, v_keepAliveTimeout_3380_);
lean_ctor_set(v_reuseFailAlloc_3425_, 3, v_currentTimeout_3381_);
lean_ctor_set(v_reuseFailAlloc_3425_, 4, v_headerTimeout_3382_);
lean_ctor_set(v_reuseFailAlloc_3425_, 5, v_response_3383_);
lean_ctor_set(v_reuseFailAlloc_3425_, 6, v_respStream_3384_);
lean_ctor_set(v_reuseFailAlloc_3425_, 7, v_expectData_3386_);
lean_ctor_set(v_reuseFailAlloc_3425_, 8, v_pendingHead_3388_);
lean_ctor_set_uint8(v_reuseFailAlloc_3425_, sizeof(void*)*9, v_requiresData_3385_);
lean_ctor_set_uint8(v_reuseFailAlloc_3425_, sizeof(void*)*9 + 1, v_handlerDispatched_3387_);
v___x_3418_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3422_; 
v___x_3419_ = lean_box(v___x_3414_);
v___x_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3418_);
lean_ctor_set(v___x_3420_, 1, v___x_3419_);
if (v_isShared_3376_ == 0)
{
lean_ctor_set_tag(v___x_3375_, 1);
lean_ctor_set(v___x_3375_, 0, v___x_3420_);
v___x_3422_ = v___x_3375_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3420_);
v___x_3422_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
lean_object* v___x_3423_; 
v___x_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
return v___x_3423_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_val_3433_; lean_object* v_machine_3434_; lean_object* v_requestStream_3435_; lean_object* v_keepAliveTimeout_3436_; lean_object* v_currentTimeout_3437_; lean_object* v_response_3438_; lean_object* v_respStream_3439_; uint8_t v_requiresData_3440_; lean_object* v_expectData_3441_; uint8_t v_handlerDispatched_3442_; lean_object* v_pendingHead_3443_; lean_object* v___f_3444_; 
lean_del_object(v___x_3375_);
v_val_3433_ = lean_ctor_get(v_x_3373_, 0);
lean_inc_n(v_val_3433_, 2);
lean_dec_ref_known(v_x_3373_, 1);
v_machine_3434_ = lean_ctor_get(v_state_3371_, 0);
v_requestStream_3435_ = lean_ctor_get(v_state_3371_, 1);
v_keepAliveTimeout_3436_ = lean_ctor_get(v_state_3371_, 2);
lean_inc(v_keepAliveTimeout_3436_);
v_currentTimeout_3437_ = lean_ctor_get(v_state_3371_, 3);
v_response_3438_ = lean_ctor_get(v_state_3371_, 5);
v_respStream_3439_ = lean_ctor_get(v_state_3371_, 6);
v_requiresData_3440_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3441_ = lean_ctor_get(v_state_3371_, 7);
v_handlerDispatched_3442_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9 + 1);
v_pendingHead_3443_ = lean_ctor_get(v_state_3371_, 8);
v___f_3444_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3444_, 0, v_val_3433_);
if (lean_obj_tag(v_keepAliveTimeout_3436_) == 0)
{
lean_object* v___x_3445_; lean_object* v___x_3446_; 
lean_dec_ref(v___f_3444_);
lean_dec_ref(v_config_3369_);
v___x_3445_ = lean_box(0);
v___x_3446_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_3433_, v___x_3445_, v_state_3371_);
return v___x_3446_;
}
else
{
lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3478_; 
lean_inc(v_pendingHead_3443_);
lean_inc(v_expectData_3441_);
lean_inc(v_respStream_3439_);
lean_inc_ref(v_response_3438_);
lean_inc(v_currentTimeout_3437_);
lean_inc_ref(v_requestStream_3435_);
lean_inc_ref(v_machine_3434_);
lean_dec(v_val_3433_);
lean_dec_ref(v_state_3371_);
v_isSharedCheck_3478_ = !lean_is_exclusive(v_keepAliveTimeout_3436_);
if (v_isSharedCheck_3478_ == 0)
{
lean_object* v_unused_3479_; 
v_unused_3479_ = lean_ctor_get(v_keepAliveTimeout_3436_, 0);
lean_dec(v_unused_3479_);
v___x_3448_ = v_keepAliveTimeout_3436_;
v_isShared_3449_ = v_isSharedCheck_3478_;
goto v_resetjp_3447_;
}
else
{
lean_dec(v_keepAliveTimeout_3436_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3478_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___f_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; lean_object* v_val_3456_; lean_object* v___x_3461_; 
v___x_3450_ = lean_box(v_requiresData_3440_);
v___x_3451_ = lean_box(v_handlerDispatched_3442_);
v___f_3452_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3452_, 0, v_config_3369_);
lean_closure_set(v___f_3452_, 1, v_machine_3434_);
lean_closure_set(v___f_3452_, 2, v_requestStream_3435_);
lean_closure_set(v___f_3452_, 3, v_currentTimeout_3437_);
lean_closure_set(v___f_3452_, 4, v_response_3438_);
lean_closure_set(v___f_3452_, 5, v_respStream_3439_);
lean_closure_set(v___f_3452_, 6, v___x_3450_);
lean_closure_set(v___f_3452_, 7, v_expectData_3441_);
lean_closure_set(v___f_3452_, 8, v___x_3451_);
lean_closure_set(v___f_3452_, 9, v_pendingHead_3443_);
lean_closure_set(v___f_3452_, 10, v___f_3444_);
v___x_3453_ = lean_unsigned_to_nat(0u);
v___x_3454_ = 0;
v___x_3461_ = lean_get_current_time();
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
lean_ctor_set_tag(v___x_3464_, 1);
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
v_val_3456_ = v___x_3467_;
goto v___jp_3455_;
}
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
v_a_3470_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3461_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3461_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
lean_ctor_set_tag(v___x_3472_, 0);
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
v_val_3456_ = v___x_3475_;
goto v___jp_3455_;
}
}
}
v___jp_3455_:
{
lean_object* v___x_3458_; 
if (v_isShared_3449_ == 0)
{
lean_ctor_set_tag(v___x_3448_, 0);
lean_ctor_set(v___x_3448_, 0, v_val_3456_);
v___x_3458_ = v___x_3448_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_val_3456_);
v___x_3458_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
lean_object* v___x_3459_; 
v___x_3459_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3453_, v___x_3454_, v___x_3458_, v___f_3452_);
return v___x_3459_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_x_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3592_; 
lean_dec_ref(v_config_3369_);
lean_dec(v_handler_3368_);
lean_dec_ref(v_inst_3366_);
v_x_3481_ = lean_ctor_get(v_event_3370_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v_event_3370_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3483_ = v_event_3370_;
v_isShared_3484_ = v_isSharedCheck_3592_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_x_3481_);
lean_dec(v_event_3370_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3592_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
if (lean_obj_tag(v_x_3481_) == 0)
{
lean_object* v_machine_3485_; lean_object* v_requestStream_3486_; lean_object* v_keepAliveTimeout_3487_; lean_object* v_currentTimeout_3488_; lean_object* v_headerTimeout_3489_; lean_object* v_response_3490_; lean_object* v_respStream_3491_; uint8_t v_requiresData_3492_; lean_object* v_expectData_3493_; uint8_t v_handlerDispatched_3494_; lean_object* v_pendingHead_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___f_3498_; 
lean_del_object(v___x_3483_);
v_machine_3485_ = lean_ctor_get(v_state_3371_, 0);
lean_inc_ref_n(v_machine_3485_, 2);
v_requestStream_3486_ = lean_ctor_get(v_state_3371_, 1);
lean_inc_ref_n(v_requestStream_3486_, 2);
v_keepAliveTimeout_3487_ = lean_ctor_get(v_state_3371_, 2);
lean_inc_n(v_keepAliveTimeout_3487_, 2);
v_currentTimeout_3488_ = lean_ctor_get(v_state_3371_, 3);
lean_inc_n(v_currentTimeout_3488_, 2);
v_headerTimeout_3489_ = lean_ctor_get(v_state_3371_, 4);
lean_inc_n(v_headerTimeout_3489_, 2);
v_response_3490_ = lean_ctor_get(v_state_3371_, 5);
lean_inc_ref_n(v_response_3490_, 2);
v_respStream_3491_ = lean_ctor_get(v_state_3371_, 6);
lean_inc(v_respStream_3491_);
v_requiresData_3492_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3493_ = lean_ctor_get(v_state_3371_, 7);
lean_inc_n(v_expectData_3493_, 2);
v_handlerDispatched_3494_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9 + 1);
v_pendingHead_3495_ = lean_ctor_get(v_state_3371_, 8);
lean_inc_n(v_pendingHead_3495_, 2);
lean_dec_ref(v_state_3371_);
v___x_3496_ = lean_box(v_requiresData_3492_);
v___x_3497_ = lean_box(v_handlerDispatched_3494_);
v___f_3498_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_3498_, 0, v_machine_3485_);
lean_closure_set(v___f_3498_, 1, v_requestStream_3486_);
lean_closure_set(v___f_3498_, 2, v_keepAliveTimeout_3487_);
lean_closure_set(v___f_3498_, 3, v_currentTimeout_3488_);
lean_closure_set(v___f_3498_, 4, v_headerTimeout_3489_);
lean_closure_set(v___f_3498_, 5, v_response_3490_);
lean_closure_set(v___f_3498_, 6, v___x_3496_);
lean_closure_set(v___f_3498_, 7, v_expectData_3493_);
lean_closure_set(v___f_3498_, 8, v___x_3497_);
lean_closure_set(v___f_3498_, 9, v_pendingHead_3495_);
if (lean_obj_tag(v_respStream_3491_) == 1)
{
lean_object* v_val_3499_; lean_object* v_close_3500_; lean_object* v_isClosed_3501_; lean_object* v___f_3502_; lean_object* v___f_3503_; lean_object* v___x_3504_; uint8_t v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
lean_dec(v_pendingHead_3495_);
lean_dec(v_expectData_3493_);
lean_dec_ref(v_response_3490_);
lean_dec(v_headerTimeout_3489_);
lean_dec(v_currentTimeout_3488_);
lean_dec(v_keepAliveTimeout_3487_);
lean_dec_ref(v_requestStream_3486_);
lean_dec_ref(v_machine_3485_);
v_val_3499_ = lean_ctor_get(v_respStream_3491_, 0);
lean_inc_n(v_val_3499_, 2);
lean_dec_ref_known(v_respStream_3491_, 1);
v_close_3500_ = lean_ctor_get(v_inst_3367_, 1);
lean_inc_ref(v_close_3500_);
v_isClosed_3501_ = lean_ctor_get(v_inst_3367_, 2);
lean_inc_ref(v_isClosed_3501_);
lean_dec_ref(v_inst_3367_);
lean_inc_ref(v___f_3498_);
v___f_3502_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3502_, 0, v___f_3498_);
v___f_3503_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3503_, 0, v_close_3500_);
lean_closure_set(v___f_3503_, 1, v_val_3499_);
lean_closure_set(v___f_3503_, 2, v___f_3502_);
lean_closure_set(v___f_3503_, 3, v___f_3498_);
v___x_3504_ = lean_unsigned_to_nat(0u);
v___x_3505_ = 0;
v___x_3506_ = lean_apply_2(v_isClosed_3501_, v_val_3499_, lean_box(0));
v___x_3507_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3504_, v___x_3505_, v___x_3506_, v___f_3503_);
return v___x_3507_;
}
else
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
lean_dec_ref(v___f_3498_);
lean_dec(v_respStream_3491_);
lean_dec_ref(v_inst_3367_);
v___x_3508_ = lean_box(0);
v___x_3509_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_3485_, v_requestStream_3486_, v_keepAliveTimeout_3487_, v_currentTimeout_3488_, v_headerTimeout_3489_, v_response_3490_, v_requiresData_3492_, v_expectData_3493_, v_handlerDispatched_3494_, v_pendingHead_3495_, v___x_3508_);
return v___x_3509_;
}
}
else
{
lean_object* v_val_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3591_; 
lean_dec_ref(v_inst_3367_);
v_val_3510_ = lean_ctor_get(v_x_3481_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v_x_3481_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3512_ = v_x_3481_;
v_isShared_3513_ = v_isSharedCheck_3591_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_val_3510_);
lean_dec(v_x_3481_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3591_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v_machine_3514_; lean_object* v_requestStream_3515_; lean_object* v_keepAliveTimeout_3516_; lean_object* v_currentTimeout_3517_; lean_object* v_headerTimeout_3518_; lean_object* v_response_3519_; lean_object* v_respStream_3520_; uint8_t v_requiresData_3521_; lean_object* v_expectData_3522_; uint8_t v_handlerDispatched_3523_; lean_object* v_pendingHead_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3590_; 
v_machine_3514_ = lean_ctor_get(v_state_3371_, 0);
v_requestStream_3515_ = lean_ctor_get(v_state_3371_, 1);
v_keepAliveTimeout_3516_ = lean_ctor_get(v_state_3371_, 2);
v_currentTimeout_3517_ = lean_ctor_get(v_state_3371_, 3);
v_headerTimeout_3518_ = lean_ctor_get(v_state_3371_, 4);
v_response_3519_ = lean_ctor_get(v_state_3371_, 5);
v_respStream_3520_ = lean_ctor_get(v_state_3371_, 6);
v_requiresData_3521_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3522_ = lean_ctor_get(v_state_3371_, 7);
v_handlerDispatched_3523_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9 + 1);
v_pendingHead_3524_ = lean_ctor_get(v_state_3371_, 8);
v_isSharedCheck_3590_ = !lean_is_exclusive(v_state_3371_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3526_ = v_state_3371_;
v_isShared_3527_ = v_isSharedCheck_3590_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_pendingHead_3524_);
lean_inc(v_expectData_3522_);
lean_inc(v_respStream_3520_);
lean_inc(v_response_3519_);
lean_inc(v_headerTimeout_3518_);
lean_inc(v_currentTimeout_3517_);
lean_inc(v_keepAliveTimeout_3516_);
lean_inc(v_requestStream_3515_);
lean_inc(v_machine_3514_);
lean_dec(v_state_3371_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3590_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___y_3529_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
v___x_3542_ = lean_unsigned_to_nat(1u);
v___x_3543_ = lean_mk_empty_array_with_capacity(v___x_3542_);
v___x_3544_ = lean_array_push(v___x_3543_, v_val_3510_);
v___x_3545_ = lean_array_get_size(v___x_3544_);
v___x_3546_ = lean_unsigned_to_nat(0u);
v___x_3547_ = lean_nat_dec_eq(v___x_3545_, v___x_3546_);
if (v___x_3547_ == 0)
{
lean_object* v_reader_3548_; lean_object* v_writer_3549_; lean_object* v_config_3550_; lean_object* v_events_3551_; lean_object* v_error_3552_; lean_object* v_instant_3553_; uint8_t v_keepAlive_3554_; uint8_t v_forcedFlush_3555_; uint8_t v_pullBodyStalled_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3589_; 
v_reader_3548_ = lean_ctor_get(v_machine_3514_, 0);
v_writer_3549_ = lean_ctor_get(v_machine_3514_, 1);
v_config_3550_ = lean_ctor_get(v_machine_3514_, 2);
v_events_3551_ = lean_ctor_get(v_machine_3514_, 3);
v_error_3552_ = lean_ctor_get(v_machine_3514_, 4);
v_instant_3553_ = lean_ctor_get(v_machine_3514_, 5);
v_keepAlive_3554_ = lean_ctor_get_uint8(v_machine_3514_, sizeof(void*)*6);
v_forcedFlush_3555_ = lean_ctor_get_uint8(v_machine_3514_, sizeof(void*)*6 + 1);
v_pullBodyStalled_3556_ = lean_ctor_get_uint8(v_machine_3514_, sizeof(void*)*6 + 2);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_machine_3514_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3558_ = v_machine_3514_;
v_isShared_3559_ = v_isSharedCheck_3589_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_instant_3553_);
lean_inc(v_error_3552_);
lean_inc(v_events_3551_);
lean_inc(v_config_3550_);
lean_inc(v_writer_3549_);
lean_inc(v_reader_3548_);
lean_dec(v_machine_3514_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3589_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___y_3561_; lean_object* v___x_3583_; uint8_t v___x_3584_; 
v___x_3583_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_3584_ = lean_nat_dec_lt(v___x_3546_, v___x_3545_);
if (v___x_3584_ == 0)
{
v___y_3561_ = v___x_3546_;
goto v___jp_3560_;
}
else
{
lean_object* v___f_3585_; size_t v___x_3586_; size_t v___x_3587_; lean_object* v___x_3588_; 
v___f_3585_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___x_3586_ = ((size_t)0ULL);
v___x_3587_ = lean_usize_of_nat(v___x_3545_);
lean_inc_ref(v___x_3544_);
v___x_3588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3583_, v___f_3585_, v___x_3544_, v___x_3586_, v___x_3587_, v___x_3546_);
v___y_3561_ = v___x_3588_;
goto v___jp_3560_;
}
v___jp_3560_:
{
lean_object* v_userData_3562_; lean_object* v_outputData_3563_; lean_object* v_state_3564_; lean_object* v_knownSize_3565_; lean_object* v_messageHead_3566_; uint8_t v_sentMessage_3567_; uint8_t v_userClosedBody_3568_; uint8_t v_omitBody_3569_; lean_object* v_userDataBytes_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3582_; 
v_userData_3562_ = lean_ctor_get(v_writer_3549_, 0);
v_outputData_3563_ = lean_ctor_get(v_writer_3549_, 1);
v_state_3564_ = lean_ctor_get(v_writer_3549_, 2);
v_knownSize_3565_ = lean_ctor_get(v_writer_3549_, 3);
v_messageHead_3566_ = lean_ctor_get(v_writer_3549_, 4);
v_sentMessage_3567_ = lean_ctor_get_uint8(v_writer_3549_, sizeof(void*)*6);
v_userClosedBody_3568_ = lean_ctor_get_uint8(v_writer_3549_, sizeof(void*)*6 + 1);
v_omitBody_3569_ = lean_ctor_get_uint8(v_writer_3549_, sizeof(void*)*6 + 2);
v_userDataBytes_3570_ = lean_ctor_get(v_writer_3549_, 5);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_writer_3549_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3572_ = v_writer_3549_;
v_isShared_3573_ = v_isSharedCheck_3582_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_userDataBytes_3570_);
lean_inc(v_messageHead_3566_);
lean_inc(v_knownSize_3565_);
lean_inc(v_state_3564_);
lean_inc(v_outputData_3563_);
lean_inc(v_userData_3562_);
lean_dec(v_writer_3549_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3582_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3577_; 
v___x_3574_ = l_Array_append___redArg(v_userData_3562_, v___x_3544_);
lean_dec_ref(v___x_3544_);
v___x_3575_ = lean_nat_add(v_userDataBytes_3570_, v___y_3561_);
lean_dec(v___y_3561_);
lean_dec(v_userDataBytes_3570_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set(v___x_3572_, 5, v___x_3575_);
lean_ctor_set(v___x_3572_, 0, v___x_3574_);
v___x_3577_ = v___x_3572_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3574_);
lean_ctor_set(v_reuseFailAlloc_3581_, 1, v_outputData_3563_);
lean_ctor_set(v_reuseFailAlloc_3581_, 2, v_state_3564_);
lean_ctor_set(v_reuseFailAlloc_3581_, 3, v_knownSize_3565_);
lean_ctor_set(v_reuseFailAlloc_3581_, 4, v_messageHead_3566_);
lean_ctor_set(v_reuseFailAlloc_3581_, 5, v___x_3575_);
lean_ctor_set_uint8(v_reuseFailAlloc_3581_, sizeof(void*)*6, v_sentMessage_3567_);
lean_ctor_set_uint8(v_reuseFailAlloc_3581_, sizeof(void*)*6 + 1, v_userClosedBody_3568_);
lean_ctor_set_uint8(v_reuseFailAlloc_3581_, sizeof(void*)*6 + 2, v_omitBody_3569_);
v___x_3577_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
lean_object* v___x_3579_; 
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 1, v___x_3577_);
v___x_3579_ = v___x_3558_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_reader_3548_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v___x_3577_);
lean_ctor_set(v_reuseFailAlloc_3580_, 2, v_config_3550_);
lean_ctor_set(v_reuseFailAlloc_3580_, 3, v_events_3551_);
lean_ctor_set(v_reuseFailAlloc_3580_, 4, v_error_3552_);
lean_ctor_set(v_reuseFailAlloc_3580_, 5, v_instant_3553_);
lean_ctor_set_uint8(v_reuseFailAlloc_3580_, sizeof(void*)*6, v_keepAlive_3554_);
lean_ctor_set_uint8(v_reuseFailAlloc_3580_, sizeof(void*)*6 + 1, v_forcedFlush_3555_);
lean_ctor_set_uint8(v_reuseFailAlloc_3580_, sizeof(void*)*6 + 2, v_pullBodyStalled_3556_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
v___y_3529_ = v___x_3579_;
goto v___jp_3528_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3544_);
v___y_3529_ = v_machine_3514_;
goto v___jp_3528_;
}
v___jp_3528_:
{
lean_object* v___x_3531_; 
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 0, v___y_3529_);
v___x_3531_ = v___x_3526_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___y_3529_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v_requestStream_3515_);
lean_ctor_set(v_reuseFailAlloc_3541_, 2, v_keepAliveTimeout_3516_);
lean_ctor_set(v_reuseFailAlloc_3541_, 3, v_currentTimeout_3517_);
lean_ctor_set(v_reuseFailAlloc_3541_, 4, v_headerTimeout_3518_);
lean_ctor_set(v_reuseFailAlloc_3541_, 5, v_response_3519_);
lean_ctor_set(v_reuseFailAlloc_3541_, 6, v_respStream_3520_);
lean_ctor_set(v_reuseFailAlloc_3541_, 7, v_expectData_3522_);
lean_ctor_set(v_reuseFailAlloc_3541_, 8, v_pendingHead_3524_);
lean_ctor_set_uint8(v_reuseFailAlloc_3541_, sizeof(void*)*9, v_requiresData_3521_);
lean_ctor_set_uint8(v_reuseFailAlloc_3541_, sizeof(void*)*9 + 1, v_handlerDispatched_3523_);
v___x_3531_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
uint8_t v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3532_ = 0;
v___x_3533_ = lean_box(v___x_3532_);
v___x_3534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3531_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 0, v___x_3534_);
v___x_3536_ = v___x_3512_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
lean_object* v___x_3538_; 
if (v_isShared_3484_ == 0)
{
lean_ctor_set_tag(v___x_3483_, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3536_);
v___x_3538_ = v___x_3483_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
}
}
}
}
}
case 2:
{
uint8_t v_x_3593_; 
lean_dec_ref(v_config_3369_);
lean_dec_ref(v_inst_3367_);
v_x_3593_ = lean_ctor_get_uint8(v_event_3370_, 0);
lean_dec_ref_known(v_event_3370_, 0);
if (v_x_3593_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
lean_dec(v_handler_3368_);
lean_dec_ref(v_inst_3366_);
v___x_3594_ = lean_box(v_x_3593_);
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v_state_3371_);
lean_ctor_set(v___x_3595_, 1, v___x_3594_);
v___x_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3595_);
v___x_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
return v___x_3597_;
}
else
{
lean_object* v_machine_3598_; lean_object* v_requestStream_3599_; lean_object* v_keepAliveTimeout_3600_; lean_object* v_currentTimeout_3601_; lean_object* v_headerTimeout_3602_; lean_object* v_response_3603_; lean_object* v_respStream_3604_; uint8_t v_requiresData_3605_; lean_object* v_expectData_3606_; uint8_t v_handlerDispatched_3607_; lean_object* v_pendingHead_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3658_; 
v_machine_3598_ = lean_ctor_get(v_state_3371_, 0);
v_requestStream_3599_ = lean_ctor_get(v_state_3371_, 1);
v_keepAliveTimeout_3600_ = lean_ctor_get(v_state_3371_, 2);
v_currentTimeout_3601_ = lean_ctor_get(v_state_3371_, 3);
v_headerTimeout_3602_ = lean_ctor_get(v_state_3371_, 4);
v_response_3603_ = lean_ctor_get(v_state_3371_, 5);
v_respStream_3604_ = lean_ctor_get(v_state_3371_, 6);
v_requiresData_3605_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3606_ = lean_ctor_get(v_state_3371_, 7);
v_handlerDispatched_3607_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9 + 1);
v_pendingHead_3608_ = lean_ctor_get(v_state_3371_, 8);
v_isSharedCheck_3658_ = !lean_is_exclusive(v_state_3371_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3610_ = v_state_3371_;
v_isShared_3611_ = v_isSharedCheck_3658_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_pendingHead_3608_);
lean_inc(v_expectData_3606_);
lean_inc(v_respStream_3604_);
lean_inc(v_response_3603_);
lean_inc(v_headerTimeout_3602_);
lean_inc(v_currentTimeout_3601_);
lean_inc(v_keepAliveTimeout_3600_);
lean_inc(v_requestStream_3599_);
lean_inc(v_machine_3598_);
lean_dec(v_state_3371_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3658_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
uint8_t v___x_3612_; lean_object* v___x_3613_; lean_object* v_fst_3614_; lean_object* v_snd_3615_; lean_object* v_reader_3616_; lean_object* v_writer_3617_; lean_object* v_config_3618_; lean_object* v_events_3619_; lean_object* v_error_3620_; lean_object* v_instant_3621_; uint8_t v_keepAlive_3622_; uint8_t v_forcedFlush_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3657_; 
v___x_3612_ = 0;
v___x_3613_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(v___x_3612_, v_machine_3598_);
v_fst_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_fst_3614_);
v_snd_3615_ = lean_ctor_get(v___x_3613_, 1);
lean_inc(v_snd_3615_);
lean_dec_ref(v___x_3613_);
v_reader_3616_ = lean_ctor_get(v_fst_3614_, 0);
v_writer_3617_ = lean_ctor_get(v_fst_3614_, 1);
v_config_3618_ = lean_ctor_get(v_fst_3614_, 2);
v_events_3619_ = lean_ctor_get(v_fst_3614_, 3);
v_error_3620_ = lean_ctor_get(v_fst_3614_, 4);
v_instant_3621_ = lean_ctor_get(v_fst_3614_, 5);
v_keepAlive_3622_ = lean_ctor_get_uint8(v_fst_3614_, sizeof(void*)*6);
v_forcedFlush_3623_ = lean_ctor_get_uint8(v_fst_3614_, sizeof(void*)*6 + 1);
v_isSharedCheck_3657_ = !lean_is_exclusive(v_fst_3614_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3625_ = v_fst_3614_;
v_isShared_3626_ = v_isSharedCheck_3657_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_instant_3621_);
lean_inc(v_error_3620_);
lean_inc(v_events_3619_);
lean_inc(v_config_3618_);
lean_inc(v_writer_3617_);
lean_inc(v_reader_3616_);
lean_dec(v_fst_3614_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3657_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___f_3627_; lean_object* v___f_3628_; uint8_t v___y_3630_; 
v___f_3627_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_3628_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3628_, 0, v_inst_3366_);
lean_closure_set(v___f_3628_, 1, v_handler_3368_);
if (lean_obj_tag(v_snd_3615_) == 0)
{
uint8_t v_sentMessage_3653_; 
v_sentMessage_3653_ = lean_ctor_get_uint8(v_writer_3617_, sizeof(void*)*6);
if (v_sentMessage_3653_ == 0)
{
lean_object* v_state_3654_; 
v_state_3654_ = lean_ctor_get(v_reader_3616_, 0);
if (lean_obj_tag(v_state_3654_) == 2)
{
v___y_3630_ = v_x_3593_;
goto v___jp_3629_;
}
else
{
v___y_3630_ = v_sentMessage_3653_;
goto v___jp_3629_;
}
}
else
{
uint8_t v___x_3655_; 
v___x_3655_ = 0;
v___y_3630_ = v___x_3655_;
goto v___jp_3629_;
}
}
else
{
uint8_t v___x_3656_; 
v___x_3656_ = 0;
v___y_3630_ = v___x_3656_;
goto v___jp_3629_;
}
v___jp_3629_:
{
lean_object* v___x_3632_; 
if (v_isShared_3626_ == 0)
{
v___x_3632_ = v___x_3625_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_reader_3616_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_writer_3617_);
lean_ctor_set(v_reuseFailAlloc_3652_, 2, v_config_3618_);
lean_ctor_set(v_reuseFailAlloc_3652_, 3, v_events_3619_);
lean_ctor_set(v_reuseFailAlloc_3652_, 4, v_error_3620_);
lean_ctor_set(v_reuseFailAlloc_3652_, 5, v_instant_3621_);
lean_ctor_set_uint8(v_reuseFailAlloc_3652_, sizeof(void*)*6, v_keepAlive_3622_);
lean_ctor_set_uint8(v_reuseFailAlloc_3652_, sizeof(void*)*6 + 1, v_forcedFlush_3623_);
v___x_3632_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
lean_object* v_st_3634_; 
lean_ctor_set_uint8(v___x_3632_, sizeof(void*)*6 + 2, v___y_3630_);
lean_inc_ref(v_requestStream_3599_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3632_);
v_st_3634_ = v___x_3610_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3632_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v_requestStream_3599_);
lean_ctor_set(v_reuseFailAlloc_3651_, 2, v_keepAliveTimeout_3600_);
lean_ctor_set(v_reuseFailAlloc_3651_, 3, v_currentTimeout_3601_);
lean_ctor_set(v_reuseFailAlloc_3651_, 4, v_headerTimeout_3602_);
lean_ctor_set(v_reuseFailAlloc_3651_, 5, v_response_3603_);
lean_ctor_set(v_reuseFailAlloc_3651_, 6, v_respStream_3604_);
lean_ctor_set(v_reuseFailAlloc_3651_, 7, v_expectData_3606_);
lean_ctor_set(v_reuseFailAlloc_3651_, 8, v_pendingHead_3608_);
lean_ctor_set_uint8(v_reuseFailAlloc_3651_, sizeof(void*)*9, v_requiresData_3605_);
lean_ctor_set_uint8(v_reuseFailAlloc_3651_, sizeof(void*)*9 + 1, v_handlerDispatched_3607_);
v_st_3634_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
lean_object* v___f_3635_; 
lean_inc_ref(v_st_3634_);
v___f_3635_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3635_, 0, v_st_3634_);
if (lean_obj_tag(v_snd_3615_) == 1)
{
lean_object* v_val_3636_; uint8_t v_final_3637_; uint8_t v_incomplete_3638_; lean_object* v_chunk_3639_; lean_object* v___f_3640_; lean_object* v___f_3641_; lean_object* v___x_3642_; lean_object* v___f_3643_; lean_object* v___x_3644_; uint8_t v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
lean_dec_ref(v_st_3634_);
v_val_3636_ = lean_ctor_get(v_snd_3615_, 0);
lean_inc(v_val_3636_);
lean_dec_ref_known(v_snd_3615_, 1);
v_final_3637_ = lean_ctor_get_uint8(v_val_3636_, sizeof(void*)*1);
v_incomplete_3638_ = lean_ctor_get_uint8(v_val_3636_, sizeof(void*)*1 + 1);
v_chunk_3639_ = lean_ctor_get(v_val_3636_, 0);
lean_inc_ref(v_chunk_3639_);
lean_dec(v_val_3636_);
lean_inc_ref_n(v___f_3635_, 2);
v___f_3640_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3640_, 0, v___f_3635_);
lean_inc_ref_n(v_requestStream_3599_, 2);
v___f_3641_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3641_, 0, v_requestStream_3599_);
lean_closure_set(v___f_3641_, 1, v___f_3640_);
lean_closure_set(v___f_3641_, 2, v___f_3635_);
v___x_3642_ = lean_box(v_final_3637_);
v___f_3643_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed), 7, 5);
lean_closure_set(v___f_3643_, 0, v___x_3642_);
lean_closure_set(v___f_3643_, 1, v___f_3635_);
lean_closure_set(v___f_3643_, 2, v___f_3627_);
lean_closure_set(v___f_3643_, 3, v_requestStream_3599_);
lean_closure_set(v___f_3643_, 4, v___f_3641_);
v___x_3644_ = lean_unsigned_to_nat(0u);
v___x_3645_ = 0;
v___x_3646_ = l_Std_Http_Body_Stream_send(v_requestStream_3599_, v_chunk_3639_, v_incomplete_3638_);
v___x_3647_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3644_, v___x_3645_, v___x_3646_, v___f_3628_);
v___x_3648_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3644_, v___x_3645_, v___x_3647_, v___f_3643_);
return v___x_3648_;
}
else
{
lean_object* v___x_3649_; lean_object* v___x_3650_; 
lean_dec_ref(v___f_3635_);
lean_dec_ref(v___f_3628_);
lean_dec(v_snd_3615_);
lean_dec_ref(v_requestStream_3599_);
v___x_3649_ = lean_box(0);
v___x_3650_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_3634_, v___x_3649_);
return v___x_3650_;
}
}
}
}
}
}
}
}
case 3:
{
lean_object* v_x_3659_; 
v_x_3659_ = lean_ctor_get(v_event_3370_, 0);
lean_inc_ref(v_x_3659_);
lean_dec_ref_known(v_event_3370_, 1);
if (lean_obj_tag(v_x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v_onFailure_3661_; lean_object* v___f_3662_; lean_object* v___x_3663_; uint8_t v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
lean_dec_ref(v_config_3369_);
lean_dec_ref(v_inst_3367_);
v_a_3660_ = lean_ctor_get(v_x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v_x_3659_, 1);
v_onFailure_3661_ = lean_ctor_get(v_inst_3366_, 2);
lean_inc_ref(v_onFailure_3661_);
lean_dec_ref(v_inst_3366_);
v___f_3662_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_3662_, 0, v_state_3371_);
v___x_3663_ = lean_unsigned_to_nat(0u);
v___x_3664_ = 0;
v___x_3665_ = lean_apply_3(v_onFailure_3661_, v_handler_3368_, v_a_3660_, lean_box(0));
v___x_3666_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3663_, v___x_3664_, v___x_3665_, v___f_3662_);
return v___x_3666_;
}
else
{
lean_object* v_machine_3667_; lean_object* v_reader_3668_; lean_object* v_state_3669_; 
v_machine_3667_ = lean_ctor_get(v_state_3371_, 0);
lean_inc_ref(v_machine_3667_);
v_reader_3668_ = lean_ctor_get(v_machine_3667_, 0);
v_state_3669_ = lean_ctor_get(v_reader_3668_, 0);
if (lean_obj_tag(v_state_3669_) == 7)
{
lean_object* v_a_3670_; lean_object* v_requestStream_3671_; lean_object* v_keepAliveTimeout_3672_; lean_object* v_currentTimeout_3673_; lean_object* v_headerTimeout_3674_; lean_object* v_response_3675_; lean_object* v_respStream_3676_; uint8_t v_requiresData_3677_; lean_object* v_expectData_3678_; lean_object* v_pendingHead_3679_; lean_object* v_close_3680_; lean_object* v_isClosed_3681_; lean_object* v_body_3682_; lean_object* v___x_3683_; lean_object* v___f_3684_; lean_object* v___f_3685_; lean_object* v___f_3686_; lean_object* v___x_3687_; uint8_t v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
lean_dec_ref(v_config_3369_);
lean_dec(v_handler_3368_);
lean_dec_ref(v_inst_3366_);
v_a_3670_ = lean_ctor_get(v_x_3659_, 0);
lean_inc(v_a_3670_);
lean_dec_ref_known(v_x_3659_, 1);
v_requestStream_3671_ = lean_ctor_get(v_state_3371_, 1);
lean_inc_ref(v_requestStream_3671_);
v_keepAliveTimeout_3672_ = lean_ctor_get(v_state_3371_, 2);
lean_inc(v_keepAliveTimeout_3672_);
v_currentTimeout_3673_ = lean_ctor_get(v_state_3371_, 3);
lean_inc(v_currentTimeout_3673_);
v_headerTimeout_3674_ = lean_ctor_get(v_state_3371_, 4);
lean_inc(v_headerTimeout_3674_);
v_response_3675_ = lean_ctor_get(v_state_3371_, 5);
lean_inc_ref(v_response_3675_);
v_respStream_3676_ = lean_ctor_get(v_state_3371_, 6);
lean_inc(v_respStream_3676_);
v_requiresData_3677_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3678_ = lean_ctor_get(v_state_3371_, 7);
lean_inc(v_expectData_3678_);
v_pendingHead_3679_ = lean_ctor_get(v_state_3371_, 8);
lean_inc(v_pendingHead_3679_);
lean_dec_ref(v_state_3371_);
v_close_3680_ = lean_ctor_get(v_inst_3367_, 1);
lean_inc_ref(v_close_3680_);
v_isClosed_3681_ = lean_ctor_get(v_inst_3367_, 2);
lean_inc_ref(v_isClosed_3681_);
lean_dec_ref(v_inst_3367_);
v_body_3682_ = lean_ctor_get(v_a_3670_, 1);
lean_inc_n(v_body_3682_, 2);
lean_dec(v_a_3670_);
v___x_3683_ = lean_box(v_requiresData_3677_);
v___f_3684_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_3684_, 0, v_machine_3667_);
lean_closure_set(v___f_3684_, 1, v_requestStream_3671_);
lean_closure_set(v___f_3684_, 2, v_keepAliveTimeout_3672_);
lean_closure_set(v___f_3684_, 3, v_currentTimeout_3673_);
lean_closure_set(v___f_3684_, 4, v_headerTimeout_3674_);
lean_closure_set(v___f_3684_, 5, v_response_3675_);
lean_closure_set(v___f_3684_, 6, v_respStream_3676_);
lean_closure_set(v___f_3684_, 7, v___x_3683_);
lean_closure_set(v___f_3684_, 8, v_expectData_3678_);
lean_closure_set(v___f_3684_, 9, v_pendingHead_3679_);
lean_inc_ref(v___f_3684_);
v___f_3685_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3685_, 0, v___f_3684_);
v___f_3686_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_3686_, 0, v_close_3680_);
lean_closure_set(v___f_3686_, 1, v_body_3682_);
lean_closure_set(v___f_3686_, 2, v___f_3685_);
lean_closure_set(v___f_3686_, 3, v___f_3684_);
v___x_3687_ = lean_unsigned_to_nat(0u);
v___x_3688_ = 0;
v___x_3689_ = lean_apply_2(v_isClosed_3681_, v_body_3682_, lean_box(0));
v___x_3690_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3687_, v___x_3688_, v___x_3689_, v___f_3686_);
return v___x_3690_;
}
else
{
lean_object* v_a_3691_; lean_object* v_requestStream_3692_; lean_object* v_keepAliveTimeout_3693_; lean_object* v_currentTimeout_3694_; lean_object* v_headerTimeout_3695_; lean_object* v_response_3696_; uint8_t v_requiresData_3697_; lean_object* v_expectData_3698_; lean_object* v_pendingHead_3699_; uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___f_3703_; lean_object* v___f_3704_; lean_object* v___f_3705_; uint8_t v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___f_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v_a_3691_ = lean_ctor_get(v_x_3659_, 0);
lean_inc(v_a_3691_);
lean_dec_ref_known(v_x_3659_, 1);
v_requestStream_3692_ = lean_ctor_get(v_state_3371_, 1);
lean_inc_ref(v_requestStream_3692_);
v_keepAliveTimeout_3693_ = lean_ctor_get(v_state_3371_, 2);
lean_inc(v_keepAliveTimeout_3693_);
v_currentTimeout_3694_ = lean_ctor_get(v_state_3371_, 3);
lean_inc(v_currentTimeout_3694_);
v_headerTimeout_3695_ = lean_ctor_get(v_state_3371_, 4);
lean_inc(v_headerTimeout_3695_);
v_response_3696_ = lean_ctor_get(v_state_3371_, 5);
lean_inc_ref(v_response_3696_);
v_requiresData_3697_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3698_ = lean_ctor_get(v_state_3371_, 7);
lean_inc(v_expectData_3698_);
v_pendingHead_3699_ = lean_ctor_get(v_state_3371_, 8);
lean_inc(v_pendingHead_3699_);
lean_dec_ref(v_state_3371_);
v___x_3700_ = 0;
v___x_3701_ = lean_box(v_requiresData_3697_);
v___x_3702_ = lean_box(v___x_3700_);
v___f_3703_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed), 11, 9);
lean_closure_set(v___f_3703_, 0, v_requestStream_3692_);
lean_closure_set(v___f_3703_, 1, v_keepAliveTimeout_3693_);
lean_closure_set(v___f_3703_, 2, v_currentTimeout_3694_);
lean_closure_set(v___f_3703_, 3, v_headerTimeout_3695_);
lean_closure_set(v___f_3703_, 4, v_response_3696_);
lean_closure_set(v___f_3703_, 5, v___x_3701_);
lean_closure_set(v___f_3703_, 6, v_expectData_3698_);
lean_closure_set(v___f_3703_, 7, v___x_3702_);
lean_closure_set(v___f_3703_, 8, v_pendingHead_3699_);
v___f_3704_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed), 3, 1);
lean_closure_set(v___f_3704_, 0, v___f_3703_);
v___f_3705_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0));
v___x_3706_ = 1;
v___x_3707_ = lean_box(v___x_3700_);
v___x_3708_ = lean_box(v___x_3706_);
lean_inc_ref(v_inst_3367_);
lean_inc_ref(v___f_3704_);
v___f_3709_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed), 10, 8);
lean_closure_set(v___f_3709_, 0, v___x_3707_);
lean_closure_set(v___f_3709_, 1, v___f_3704_);
lean_closure_set(v___f_3709_, 2, v___x_3708_);
lean_closure_set(v___f_3709_, 3, v_inst_3366_);
lean_closure_set(v___f_3709_, 4, v_handler_3368_);
lean_closure_set(v___f_3709_, 5, v_inst_3367_);
lean_closure_set(v___f_3709_, 6, v___f_3705_);
lean_closure_set(v___f_3709_, 7, v___f_3704_);
v___x_3710_ = lean_unsigned_to_nat(0u);
v___x_3711_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_3367_, v_config_3369_, v_machine_3667_, v_a_3691_);
v___x_3712_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3710_, v___x_3700_, v___x_3711_, v___f_3709_);
return v___x_3712_;
}
}
}
case 4:
{
lean_object* v_onFailure_3713_; lean_object* v___f_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; uint8_t v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
lean_dec_ref(v_config_3369_);
lean_dec_ref(v_inst_3367_);
v_onFailure_3713_ = lean_ctor_get(v_inst_3366_, 2);
lean_inc_ref(v_onFailure_3713_);
lean_dec_ref(v_inst_3366_);
v___f_3714_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed), 3, 1);
lean_closure_set(v___f_3714_, 0, v_state_3371_);
v___x_3715_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2);
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = 0;
v___x_3718_ = lean_apply_3(v_onFailure_3713_, v_handler_3368_, v___x_3715_, lean_box(0));
v___x_3719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3716_, v___x_3717_, v___x_3718_, v___f_3714_);
return v___x_3719_;
}
case 5:
{
lean_object* v_machine_3720_; lean_object* v_requestStream_3721_; lean_object* v_keepAliveTimeout_3722_; lean_object* v_currentTimeout_3723_; lean_object* v_headerTimeout_3724_; lean_object* v_response_3725_; lean_object* v_respStream_3726_; uint8_t v_requiresData_3727_; lean_object* v_expectData_3728_; lean_object* v_pendingHead_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3743_; 
lean_dec_ref(v_config_3369_);
lean_dec(v_handler_3368_);
lean_dec_ref(v_inst_3367_);
lean_dec_ref(v_inst_3366_);
v_machine_3720_ = lean_ctor_get(v_state_3371_, 0);
v_requestStream_3721_ = lean_ctor_get(v_state_3371_, 1);
v_keepAliveTimeout_3722_ = lean_ctor_get(v_state_3371_, 2);
v_currentTimeout_3723_ = lean_ctor_get(v_state_3371_, 3);
v_headerTimeout_3724_ = lean_ctor_get(v_state_3371_, 4);
v_response_3725_ = lean_ctor_get(v_state_3371_, 5);
v_respStream_3726_ = lean_ctor_get(v_state_3371_, 6);
v_requiresData_3727_ = lean_ctor_get_uint8(v_state_3371_, sizeof(void*)*9);
v_expectData_3728_ = lean_ctor_get(v_state_3371_, 7);
v_pendingHead_3729_ = lean_ctor_get(v_state_3371_, 8);
v_isSharedCheck_3743_ = !lean_is_exclusive(v_state_3371_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3731_ = v_state_3371_;
v_isShared_3732_ = v_isSharedCheck_3743_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_pendingHead_3729_);
lean_inc(v_expectData_3728_);
lean_inc(v_respStream_3726_);
lean_inc(v_response_3725_);
lean_inc(v_headerTimeout_3724_);
lean_inc(v_currentTimeout_3723_);
lean_inc(v_keepAliveTimeout_3722_);
lean_inc(v_requestStream_3721_);
lean_inc(v_machine_3720_);
lean_dec(v_state_3371_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3743_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; lean_object* v___x_3737_; 
v___x_3733_ = lean_box(55);
v___x_3734_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3720_, v___x_3733_);
v___x_3735_ = 0;
if (v_isShared_3732_ == 0)
{
lean_ctor_set(v___x_3731_, 0, v___x_3734_);
v___x_3737_ = v___x_3731_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v___x_3734_);
lean_ctor_set(v_reuseFailAlloc_3742_, 1, v_requestStream_3721_);
lean_ctor_set(v_reuseFailAlloc_3742_, 2, v_keepAliveTimeout_3722_);
lean_ctor_set(v_reuseFailAlloc_3742_, 3, v_currentTimeout_3723_);
lean_ctor_set(v_reuseFailAlloc_3742_, 4, v_headerTimeout_3724_);
lean_ctor_set(v_reuseFailAlloc_3742_, 5, v_response_3725_);
lean_ctor_set(v_reuseFailAlloc_3742_, 6, v_respStream_3726_);
lean_ctor_set(v_reuseFailAlloc_3742_, 7, v_expectData_3728_);
lean_ctor_set(v_reuseFailAlloc_3742_, 8, v_pendingHead_3729_);
lean_ctor_set_uint8(v_reuseFailAlloc_3742_, sizeof(void*)*9, v_requiresData_3727_);
v___x_3737_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
lean_ctor_set_uint8(v___x_3737_, sizeof(void*)*9 + 1, v___x_3735_);
v___x_3738_ = lean_box(v___x_3735_);
v___x_3739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3737_);
lean_ctor_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3739_);
v___x_3741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3740_);
return v___x_3741_;
}
}
}
default: 
{
uint8_t v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
lean_dec_ref(v_config_3369_);
lean_dec(v_handler_3368_);
lean_dec_ref(v_inst_3367_);
lean_dec_ref(v_inst_3366_);
v___x_3744_ = 1;
v___x_3745_ = lean_box(v___x_3744_);
v___x_3746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3746_, 0, v_state_3371_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
v___x_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
return v___x_3748_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object* v_inst_3749_, lean_object* v_inst_3750_, lean_object* v_handler_3751_, lean_object* v_config_3752_, lean_object* v_event_3753_, lean_object* v_state_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3749_, v_inst_3750_, v_handler_3751_, v_config_3752_, v_event_3753_, v_state_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object* v_00_u03c3_3757_, lean_object* v_00_u03b2_3758_, lean_object* v_inst_3759_, lean_object* v_inst_3760_, lean_object* v_handler_3761_, lean_object* v_config_3762_, lean_object* v_event_3763_, lean_object* v_state_3764_){
_start:
{
lean_object* v___x_3766_; 
v___x_3766_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3759_, v_inst_3760_, v_handler_3761_, v_config_3762_, v_event_3763_, v_state_3764_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object* v_00_u03c3_3767_, lean_object* v_00_u03b2_3768_, lean_object* v_inst_3769_, lean_object* v_inst_3770_, lean_object* v_handler_3771_, lean_object* v_config_3772_, lean_object* v_event_3773_, lean_object* v_state_3774_, lean_object* v_a_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(v_00_u03c3_3767_, v_00_u03b2_3768_, v_inst_3769_, v_inst_3770_, v_handler_3771_, v_config_3772_, v_event_3773_, v_state_3774_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object* v_connectionContext_3777_, uint8_t v_handlerDispatched_3778_, lean_object* v_expectData_3779_, lean_object* v_keepAliveTimeout_3780_, lean_object* v_currentTimeout_3781_, lean_object* v_headerTimeout_3782_, lean_object* v_respStream_3783_, lean_object* v_response_3784_, lean_object* v_socket_3785_, uint8_t v_requiresData_3786_, uint8_t v_sentMessage_3787_, lean_object* v_reader_3788_, uint8_t v_requestBodyInterested_3789_, lean_object* v_requestBody_3790_){
_start:
{
lean_object* v___y_3793_; lean_object* v___y_3794_; lean_object* v___y_3795_; lean_object* v___y_3796_; lean_object* v___y_3797_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3804_; 
if (v_requiresData_3786_ == 0)
{
if (v_handlerDispatched_3778_ == 0)
{
goto v___jp_3807_;
}
else
{
if (lean_obj_tag(v_respStream_3783_) == 0)
{
if (v_sentMessage_3787_ == 0)
{
lean_object* v_state_3811_; 
v_state_3811_ = lean_ctor_get(v_reader_3788_, 0);
if (lean_obj_tag(v_state_3811_) == 2)
{
if (v_requestBodyInterested_3789_ == 0)
{
lean_dec(v_socket_3785_);
goto v___jp_3809_;
}
else
{
goto v___jp_3807_;
}
}
else
{
lean_dec(v_socket_3785_);
goto v___jp_3809_;
}
}
else
{
goto v___jp_3807_;
}
}
else
{
goto v___jp_3807_;
}
}
}
else
{
goto v___jp_3807_;
}
v___jp_3792_:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3800_, 0, v___y_3796_);
lean_ctor_set(v___x_3800_, 1, v___y_3793_);
lean_ctor_set(v___x_3800_, 2, v___y_3799_);
lean_ctor_set(v___x_3800_, 3, v___y_3798_);
lean_ctor_set(v___x_3800_, 4, v_requestBody_3790_);
lean_ctor_set(v___x_3800_, 5, v___y_3795_);
lean_ctor_set(v___x_3800_, 6, v___y_3794_);
lean_ctor_set(v___x_3800_, 7, v___y_3797_);
lean_ctor_set(v___x_3800_, 8, v_connectionContext_3777_);
v___x_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
v___x_3802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3801_);
return v___x_3802_;
}
v___jp_3803_:
{
if (v_handlerDispatched_3778_ == 0)
{
lean_object* v___x_3805_; 
lean_dec_ref(v_response_3784_);
v___x_3805_ = lean_box(0);
v___y_3793_ = v_expectData_3779_;
v___y_3794_ = v_keepAliveTimeout_3780_;
v___y_3795_ = v_currentTimeout_3781_;
v___y_3796_ = v___y_3804_;
v___y_3797_ = v_headerTimeout_3782_;
v___y_3798_ = v_respStream_3783_;
v___y_3799_ = v___x_3805_;
goto v___jp_3792_;
}
else
{
lean_object* v___x_3806_; 
v___x_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3806_, 0, v_response_3784_);
v___y_3793_ = v_expectData_3779_;
v___y_3794_ = v_keepAliveTimeout_3780_;
v___y_3795_ = v_currentTimeout_3781_;
v___y_3796_ = v___y_3804_;
v___y_3797_ = v_headerTimeout_3782_;
v___y_3798_ = v_respStream_3783_;
v___y_3799_ = v___x_3806_;
goto v___jp_3792_;
}
}
v___jp_3807_:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3808_, 0, v_socket_3785_);
v___y_3804_ = v___x_3808_;
goto v___jp_3803_;
}
v___jp_3809_:
{
lean_object* v___x_3810_; 
v___x_3810_ = lean_box(0);
v___y_3804_ = v___x_3810_;
goto v___jp_3803_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object* v_connectionContext_3812_, lean_object* v_handlerDispatched_3813_, lean_object* v_expectData_3814_, lean_object* v_keepAliveTimeout_3815_, lean_object* v_currentTimeout_3816_, lean_object* v_headerTimeout_3817_, lean_object* v_respStream_3818_, lean_object* v_response_3819_, lean_object* v_socket_3820_, lean_object* v_requiresData_3821_, lean_object* v_sentMessage_3822_, lean_object* v_reader_3823_, lean_object* v_requestBodyInterested_3824_, lean_object* v_requestBody_3825_, lean_object* v___y_3826_){
_start:
{
uint8_t v_handlerDispatched_boxed_3827_; uint8_t v_requiresData_boxed_3828_; uint8_t v_sentMessage_boxed_3829_; uint8_t v_requestBodyInterested_boxed_3830_; lean_object* v_res_3831_; 
v_handlerDispatched_boxed_3827_ = lean_unbox(v_handlerDispatched_3813_);
v_requiresData_boxed_3828_ = lean_unbox(v_requiresData_3821_);
v_sentMessage_boxed_3829_ = lean_unbox(v_sentMessage_3822_);
v_requestBodyInterested_boxed_3830_ = lean_unbox(v_requestBodyInterested_3824_);
v_res_3831_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(v_connectionContext_3812_, v_handlerDispatched_boxed_3827_, v_expectData_3814_, v_keepAliveTimeout_3815_, v_currentTimeout_3816_, v_headerTimeout_3817_, v_respStream_3818_, v_response_3819_, v_socket_3820_, v_requiresData_boxed_3828_, v_sentMessage_boxed_3829_, v_reader_3823_, v_requestBodyInterested_boxed_3830_, v_requestBody_3825_);
lean_dec_ref(v_reader_3823_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object* v___f_3832_, lean_object* v_x_3833_){
_start:
{
if (lean_obj_tag(v_x_3833_) == 0)
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3843_; 
lean_dec_ref(v___f_3832_);
v_a_3835_ = lean_ctor_get(v_x_3833_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v_x_3833_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3837_ = v_x_3833_;
v_isShared_3838_ = v_isSharedCheck_3843_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v_x_3833_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3843_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3840_; 
if (v_isShared_3838_ == 0)
{
v___x_3840_ = v___x_3837_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3835_);
v___x_3840_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
lean_object* v___x_3841_; 
v___x_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3840_);
return v___x_3841_;
}
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3845_; 
v_a_3844_ = lean_ctor_get(v_x_3833_, 0);
lean_inc(v_a_3844_);
lean_dec_ref_known(v_x_3833_, 1);
v___x_3845_ = lean_apply_2(v___f_3832_, v_a_3844_, lean_box(0));
return v___x_3845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object* v___f_3846_, lean_object* v_x_3847_, lean_object* v___y_3848_){
_start:
{
lean_object* v_res_3849_; 
v_res_3849_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(v___f_3846_, v_x_3847_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object* v_connectionContext_3854_, uint8_t v_handlerDispatched_3855_, lean_object* v_expectData_3856_, lean_object* v_keepAliveTimeout_3857_, lean_object* v_currentTimeout_3858_, lean_object* v_headerTimeout_3859_, lean_object* v_respStream_3860_, lean_object* v_response_3861_, lean_object* v_socket_3862_, uint8_t v_requiresData_3863_, uint8_t v_sentMessage_3864_, lean_object* v_reader_3865_, uint8_t v_pullBodyStalled_3866_, uint8_t v_requestBodyOpen_3867_, lean_object* v_requestStream_3868_, uint8_t v_requestBodyInterested_3869_){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___f_3875_; lean_object* v___f_3876_; uint8_t v___y_3878_; 
v___x_3871_ = lean_box(v_handlerDispatched_3855_);
v___x_3872_ = lean_box(v_requiresData_3863_);
v___x_3873_ = lean_box(v_sentMessage_3864_);
v___x_3874_ = lean_box(v_requestBodyInterested_3869_);
lean_inc_ref(v_reader_3865_);
v___f_3875_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed), 15, 13);
lean_closure_set(v___f_3875_, 0, v_connectionContext_3854_);
lean_closure_set(v___f_3875_, 1, v___x_3871_);
lean_closure_set(v___f_3875_, 2, v_expectData_3856_);
lean_closure_set(v___f_3875_, 3, v_keepAliveTimeout_3857_);
lean_closure_set(v___f_3875_, 4, v_currentTimeout_3858_);
lean_closure_set(v___f_3875_, 5, v_headerTimeout_3859_);
lean_closure_set(v___f_3875_, 6, v_respStream_3860_);
lean_closure_set(v___f_3875_, 7, v_response_3861_);
lean_closure_set(v___f_3875_, 8, v_socket_3862_);
lean_closure_set(v___f_3875_, 9, v___x_3872_);
lean_closure_set(v___f_3875_, 10, v___x_3873_);
lean_closure_set(v___f_3875_, 11, v_reader_3865_);
lean_closure_set(v___f_3875_, 12, v___x_3874_);
v___f_3876_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3876_, 0, v___f_3875_);
if (v_sentMessage_3864_ == 0)
{
lean_object* v_state_3882_; 
v_state_3882_ = lean_ctor_get(v_reader_3865_, 0);
lean_inc(v_state_3882_);
lean_dec_ref(v_reader_3865_);
if (lean_obj_tag(v_state_3882_) == 2)
{
lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3893_; 
v_isSharedCheck_3893_ = !lean_is_exclusive(v_state_3882_);
if (v_isSharedCheck_3893_ == 0)
{
lean_object* v_unused_3894_; 
v_unused_3894_ = lean_ctor_get(v_state_3882_, 0);
lean_dec(v_unused_3894_);
v___x_3884_ = v_state_3882_;
v_isShared_3885_ = v_isSharedCheck_3893_;
goto v_resetjp_3883_;
}
else
{
lean_dec(v_state_3882_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3893_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
if (v_pullBodyStalled_3866_ == 0)
{
if (v_requestBodyOpen_3867_ == 0)
{
lean_del_object(v___x_3884_);
lean_dec_ref(v_requestStream_3868_);
v___y_3878_ = v_requestBodyOpen_3867_;
goto v___jp_3877_;
}
else
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
lean_ctor_set_tag(v___x_3884_, 1);
lean_ctor_set(v___x_3884_, 0, v_requestStream_3868_);
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_requestStream_3868_);
v___x_3887_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3887_);
v___x_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3890_, 0, v___x_3889_);
v___x_3891_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3888_, v_pullBodyStalled_3866_, v___x_3890_, v___f_3876_);
return v___x_3891_;
}
}
}
else
{
lean_del_object(v___x_3884_);
lean_dec_ref(v_requestStream_3868_);
v___y_3878_ = v_sentMessage_3864_;
goto v___jp_3877_;
}
}
}
else
{
lean_dec(v_state_3882_);
lean_dec_ref(v_requestStream_3868_);
v___y_3878_ = v_sentMessage_3864_;
goto v___jp_3877_;
}
}
else
{
uint8_t v___x_3895_; 
lean_dec_ref(v_requestStream_3868_);
lean_dec_ref(v_reader_3865_);
v___x_3895_ = 0;
v___y_3878_ = v___x_3895_;
goto v___jp_3877_;
}
v___jp_3877_:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3879_ = lean_unsigned_to_nat(0u);
v___x_3880_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1));
v___x_3881_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3879_, v___y_3878_, v___x_3880_, v___f_3876_);
return v___x_3881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_connectionContext_3896_ = _args[0];
lean_object* v_handlerDispatched_3897_ = _args[1];
lean_object* v_expectData_3898_ = _args[2];
lean_object* v_keepAliveTimeout_3899_ = _args[3];
lean_object* v_currentTimeout_3900_ = _args[4];
lean_object* v_headerTimeout_3901_ = _args[5];
lean_object* v_respStream_3902_ = _args[6];
lean_object* v_response_3903_ = _args[7];
lean_object* v_socket_3904_ = _args[8];
lean_object* v_requiresData_3905_ = _args[9];
lean_object* v_sentMessage_3906_ = _args[10];
lean_object* v_reader_3907_ = _args[11];
lean_object* v_pullBodyStalled_3908_ = _args[12];
lean_object* v_requestBodyOpen_3909_ = _args[13];
lean_object* v_requestStream_3910_ = _args[14];
lean_object* v_requestBodyInterested_3911_ = _args[15];
lean_object* v___y_3912_ = _args[16];
_start:
{
uint8_t v_handlerDispatched_boxed_3913_; uint8_t v_requiresData_boxed_3914_; uint8_t v_sentMessage_boxed_3915_; uint8_t v_pullBodyStalled_boxed_3916_; uint8_t v_requestBodyOpen_boxed_3917_; uint8_t v_requestBodyInterested_boxed_3918_; lean_object* v_res_3919_; 
v_handlerDispatched_boxed_3913_ = lean_unbox(v_handlerDispatched_3897_);
v_requiresData_boxed_3914_ = lean_unbox(v_requiresData_3905_);
v_sentMessage_boxed_3915_ = lean_unbox(v_sentMessage_3906_);
v_pullBodyStalled_boxed_3916_ = lean_unbox(v_pullBodyStalled_3908_);
v_requestBodyOpen_boxed_3917_ = lean_unbox(v_requestBodyOpen_3909_);
v_requestBodyInterested_boxed_3918_ = lean_unbox(v_requestBodyInterested_3911_);
v_res_3919_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(v_connectionContext_3896_, v_handlerDispatched_boxed_3913_, v_expectData_3898_, v_keepAliveTimeout_3899_, v_currentTimeout_3900_, v_headerTimeout_3901_, v_respStream_3902_, v_response_3903_, v_socket_3904_, v_requiresData_boxed_3914_, v_sentMessage_boxed_3915_, v_reader_3907_, v_pullBodyStalled_boxed_3916_, v_requestBodyOpen_boxed_3917_, v_requestStream_3910_, v_requestBodyInterested_boxed_3918_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object* v___f_3920_, lean_object* v_x_3921_){
_start:
{
if (lean_obj_tag(v_x_3921_) == 0)
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3931_; 
lean_dec_ref(v___f_3920_);
v_a_3923_ = lean_ctor_get(v_x_3921_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v_x_3921_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3925_ = v_x_3921_;
v_isShared_3926_ = v_isSharedCheck_3931_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v_x_3921_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3931_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
lean_object* v___x_3929_; 
v___x_3929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3928_);
return v___x_3929_;
}
}
}
else
{
lean_object* v_a_3932_; lean_object* v___x_3933_; 
v_a_3932_ = lean_ctor_get(v_x_3921_, 0);
lean_inc(v_a_3932_);
lean_dec_ref_known(v_x_3921_, 1);
v___x_3933_ = lean_apply_2(v___f_3920_, v_a_3932_, lean_box(0));
return v___x_3933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object* v___f_3934_, lean_object* v_x_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v_res_3937_; 
v_res_3937_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(v___f_3934_, v_x_3935_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object* v_connectionContext_3938_, uint8_t v_handlerDispatched_3939_, lean_object* v_expectData_3940_, lean_object* v_keepAliveTimeout_3941_, lean_object* v_currentTimeout_3942_, lean_object* v_headerTimeout_3943_, lean_object* v_respStream_3944_, lean_object* v_response_3945_, lean_object* v_socket_3946_, uint8_t v_requiresData_3947_, uint8_t v_sentMessage_3948_, lean_object* v_reader_3949_, uint8_t v_pullBodyStalled_3950_, lean_object* v_requestStream_3951_, uint8_t v_requestBodyOpen_3952_){
_start:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___f_3959_; lean_object* v___f_3960_; uint8_t v___y_3962_; 
v___x_3954_ = lean_box(v_handlerDispatched_3939_);
v___x_3955_ = lean_box(v_requiresData_3947_);
v___x_3956_ = lean_box(v_sentMessage_3948_);
v___x_3957_ = lean_box(v_pullBodyStalled_3950_);
v___x_3958_ = lean_box(v_requestBodyOpen_3952_);
lean_inc_ref(v_requestStream_3951_);
lean_inc_ref(v_reader_3949_);
v___f_3959_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed), 17, 15);
lean_closure_set(v___f_3959_, 0, v_connectionContext_3938_);
lean_closure_set(v___f_3959_, 1, v___x_3954_);
lean_closure_set(v___f_3959_, 2, v_expectData_3940_);
lean_closure_set(v___f_3959_, 3, v_keepAliveTimeout_3941_);
lean_closure_set(v___f_3959_, 4, v_currentTimeout_3942_);
lean_closure_set(v___f_3959_, 5, v_headerTimeout_3943_);
lean_closure_set(v___f_3959_, 6, v_respStream_3944_);
lean_closure_set(v___f_3959_, 7, v_response_3945_);
lean_closure_set(v___f_3959_, 8, v_socket_3946_);
lean_closure_set(v___f_3959_, 9, v___x_3955_);
lean_closure_set(v___f_3959_, 10, v___x_3956_);
lean_closure_set(v___f_3959_, 11, v_reader_3949_);
lean_closure_set(v___f_3959_, 12, v___x_3957_);
lean_closure_set(v___f_3959_, 13, v___x_3958_);
lean_closure_set(v___f_3959_, 14, v_requestStream_3951_);
v___f_3960_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3960_, 0, v___f_3959_);
if (v_sentMessage_3948_ == 0)
{
lean_object* v_state_3968_; 
v_state_3968_ = lean_ctor_get(v_reader_3949_, 0);
lean_inc(v_state_3968_);
lean_dec_ref(v_reader_3949_);
if (lean_obj_tag(v_state_3968_) == 2)
{
lean_dec_ref_known(v_state_3968_, 1);
if (v_requestBodyOpen_3952_ == 0)
{
lean_dec_ref(v_requestStream_3951_);
v___y_3962_ = v_requestBodyOpen_3952_;
goto v___jp_3961_;
}
else
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = lean_unsigned_to_nat(0u);
v___x_3970_ = l_Std_Http_Body_Stream_hasInterest(v_requestStream_3951_);
v___x_3971_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3969_, v_sentMessage_3948_, v___x_3970_, v___f_3960_);
return v___x_3971_;
}
}
else
{
lean_dec(v_state_3968_);
lean_dec_ref(v_requestStream_3951_);
v___y_3962_ = v_sentMessage_3948_;
goto v___jp_3961_;
}
}
else
{
uint8_t v___x_3972_; 
lean_dec_ref(v_requestStream_3951_);
lean_dec_ref(v_reader_3949_);
v___x_3972_ = 0;
v___y_3962_ = v___x_3972_;
goto v___jp_3961_;
}
v___jp_3961_:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3963_ = lean_unsigned_to_nat(0u);
v___x_3964_ = lean_box(v___y_3962_);
v___x_3965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
v___x_3967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3963_, v___y_3962_, v___x_3966_, v___f_3960_);
return v___x_3967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object* v_connectionContext_3973_, lean_object* v_handlerDispatched_3974_, lean_object* v_expectData_3975_, lean_object* v_keepAliveTimeout_3976_, lean_object* v_currentTimeout_3977_, lean_object* v_headerTimeout_3978_, lean_object* v_respStream_3979_, lean_object* v_response_3980_, lean_object* v_socket_3981_, lean_object* v_requiresData_3982_, lean_object* v_sentMessage_3983_, lean_object* v_reader_3984_, lean_object* v_pullBodyStalled_3985_, lean_object* v_requestStream_3986_, lean_object* v_requestBodyOpen_3987_, lean_object* v___y_3988_){
_start:
{
uint8_t v_handlerDispatched_boxed_3989_; uint8_t v_requiresData_boxed_3990_; uint8_t v_sentMessage_boxed_3991_; uint8_t v_pullBodyStalled_boxed_3992_; uint8_t v_requestBodyOpen_boxed_3993_; lean_object* v_res_3994_; 
v_handlerDispatched_boxed_3989_ = lean_unbox(v_handlerDispatched_3974_);
v_requiresData_boxed_3990_ = lean_unbox(v_requiresData_3982_);
v_sentMessage_boxed_3991_ = lean_unbox(v_sentMessage_3983_);
v_pullBodyStalled_boxed_3992_ = lean_unbox(v_pullBodyStalled_3985_);
v_requestBodyOpen_boxed_3993_ = lean_unbox(v_requestBodyOpen_3987_);
v_res_3994_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(v_connectionContext_3973_, v_handlerDispatched_boxed_3989_, v_expectData_3975_, v_keepAliveTimeout_3976_, v_currentTimeout_3977_, v_headerTimeout_3978_, v_respStream_3979_, v_response_3980_, v_socket_3981_, v_requiresData_boxed_3990_, v_sentMessage_boxed_3991_, v_reader_3984_, v_pullBodyStalled_boxed_3992_, v_requestStream_3986_, v_requestBodyOpen_boxed_3993_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t v_sentMessage_3995_, lean_object* v___f_3996_, uint8_t v___x_3997_, lean_object* v_x_3998_){
_start:
{
uint8_t v___y_4001_; 
if (lean_obj_tag(v_x_3998_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4015_; 
lean_dec_ref(v___f_3996_);
v_a_4007_ = lean_ctor_get(v_x_3998_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v_x_3998_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4009_ = v_x_3998_;
v_isShared_4010_ = v_isSharedCheck_4015_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v_x_3998_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4015_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
lean_object* v___x_4013_; 
v___x_4013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
return v___x_4013_;
}
}
}
else
{
lean_object* v_a_4016_; uint8_t v___x_4017_; 
v_a_4016_ = lean_ctor_get(v_x_3998_, 0);
lean_inc(v_a_4016_);
lean_dec_ref_known(v_x_3998_, 1);
v___x_4017_ = lean_unbox(v_a_4016_);
lean_dec(v_a_4016_);
if (v___x_4017_ == 0)
{
v___y_4001_ = v___x_3997_;
goto v___jp_4000_;
}
else
{
v___y_4001_ = v_sentMessage_3995_;
goto v___jp_4000_;
}
}
v___jp_4000_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
v___x_4002_ = lean_unsigned_to_nat(0u);
v___x_4003_ = lean_box(v___y_4001_);
v___x_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
v___x_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4004_);
v___x_4006_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4002_, v_sentMessage_3995_, v___x_4005_, v___f_3996_);
return v___x_4006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object* v_sentMessage_4018_, lean_object* v___f_4019_, lean_object* v___x_4020_, lean_object* v_x_4021_, lean_object* v___y_4022_){
_start:
{
uint8_t v_sentMessage_boxed_4023_; uint8_t v___x_2884__boxed_4024_; lean_object* v_res_4025_; 
v_sentMessage_boxed_4023_ = lean_unbox(v_sentMessage_4018_);
v___x_2884__boxed_4024_ = lean_unbox(v___x_4020_);
v_res_4025_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(v_sentMessage_boxed_4023_, v___f_4019_, v___x_2884__boxed_4024_, v_x_4021_);
return v_res_4025_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0(void){
_start:
{
lean_object* v___f_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___f_4026_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___x_4027_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4028_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___x_4029_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4029_, 0, lean_box(0));
lean_closure_set(v___x_4029_, 1, lean_box(0));
lean_closure_set(v___x_4029_, 2, v___x_4028_);
lean_closure_set(v___x_4029_, 3, lean_box(0));
lean_closure_set(v___x_4029_, 4, lean_box(0));
lean_closure_set(v___x_4029_, 5, v___x_4027_);
lean_closure_set(v___x_4029_, 6, v___f_4026_);
return v___x_4029_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object* v_socket_4030_, lean_object* v_connectionContext_4031_, lean_object* v_state_4032_){
_start:
{
lean_object* v_machine_4034_; lean_object* v_writer_4035_; lean_object* v_requestStream_4036_; lean_object* v_keepAliveTimeout_4037_; lean_object* v_currentTimeout_4038_; lean_object* v_headerTimeout_4039_; lean_object* v_response_4040_; lean_object* v_respStream_4041_; uint8_t v_requiresData_4042_; lean_object* v_expectData_4043_; uint8_t v_handlerDispatched_4044_; lean_object* v_reader_4045_; uint8_t v_pullBodyStalled_4046_; uint8_t v_sentMessage_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___f_4052_; lean_object* v___f_4053_; uint8_t v___y_4055_; 
v_machine_4034_ = lean_ctor_get(v_state_4032_, 0);
lean_inc_ref(v_machine_4034_);
v_writer_4035_ = lean_ctor_get(v_machine_4034_, 1);
lean_inc_ref(v_writer_4035_);
v_requestStream_4036_ = lean_ctor_get(v_state_4032_, 1);
lean_inc_ref_n(v_requestStream_4036_, 2);
v_keepAliveTimeout_4037_ = lean_ctor_get(v_state_4032_, 2);
lean_inc(v_keepAliveTimeout_4037_);
v_currentTimeout_4038_ = lean_ctor_get(v_state_4032_, 3);
lean_inc(v_currentTimeout_4038_);
v_headerTimeout_4039_ = lean_ctor_get(v_state_4032_, 4);
lean_inc(v_headerTimeout_4039_);
v_response_4040_ = lean_ctor_get(v_state_4032_, 5);
lean_inc_ref(v_response_4040_);
v_respStream_4041_ = lean_ctor_get(v_state_4032_, 6);
lean_inc(v_respStream_4041_);
v_requiresData_4042_ = lean_ctor_get_uint8(v_state_4032_, sizeof(void*)*9);
v_expectData_4043_ = lean_ctor_get(v_state_4032_, 7);
lean_inc(v_expectData_4043_);
v_handlerDispatched_4044_ = lean_ctor_get_uint8(v_state_4032_, sizeof(void*)*9 + 1);
lean_dec_ref(v_state_4032_);
v_reader_4045_ = lean_ctor_get(v_machine_4034_, 0);
lean_inc_ref_n(v_reader_4045_, 2);
v_pullBodyStalled_4046_ = lean_ctor_get_uint8(v_machine_4034_, sizeof(void*)*6 + 2);
lean_dec_ref(v_machine_4034_);
v_sentMessage_4047_ = lean_ctor_get_uint8(v_writer_4035_, sizeof(void*)*6);
lean_dec_ref(v_writer_4035_);
v___x_4048_ = lean_box(v_handlerDispatched_4044_);
v___x_4049_ = lean_box(v_requiresData_4042_);
v___x_4050_ = lean_box(v_sentMessage_4047_);
v___x_4051_ = lean_box(v_pullBodyStalled_4046_);
v___f_4052_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed), 16, 14);
lean_closure_set(v___f_4052_, 0, v_connectionContext_4031_);
lean_closure_set(v___f_4052_, 1, v___x_4048_);
lean_closure_set(v___f_4052_, 2, v_expectData_4043_);
lean_closure_set(v___f_4052_, 3, v_keepAliveTimeout_4037_);
lean_closure_set(v___f_4052_, 4, v_currentTimeout_4038_);
lean_closure_set(v___f_4052_, 5, v_headerTimeout_4039_);
lean_closure_set(v___f_4052_, 6, v_respStream_4041_);
lean_closure_set(v___f_4052_, 7, v_response_4040_);
lean_closure_set(v___f_4052_, 8, v_socket_4030_);
lean_closure_set(v___f_4052_, 9, v___x_4049_);
lean_closure_set(v___f_4052_, 10, v___x_4050_);
lean_closure_set(v___f_4052_, 11, v_reader_4045_);
lean_closure_set(v___f_4052_, 12, v___x_4051_);
lean_closure_set(v___f_4052_, 13, v_requestStream_4036_);
v___f_4053_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4053_, 0, v___f_4052_);
if (v_sentMessage_4047_ == 0)
{
lean_object* v_state_4061_; 
v_state_4061_ = lean_ctor_get(v_reader_4045_, 0);
lean_inc(v_state_4061_);
lean_dec_ref(v_reader_4045_);
if (lean_obj_tag(v_state_4061_) == 2)
{
uint8_t v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___f_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___f_4068_; lean_object* v___f_4069_; lean_object* v___x_4070_; lean_object* v___x_2534__overap_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
lean_dec_ref_known(v_state_4061_, 1);
v___x_4062_ = 1;
v___x_4063_ = lean_box(v_sentMessage_4047_);
v___x_4064_ = lean_box(v___x_4062_);
v___f_4065_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4065_, 0, v___x_4063_);
lean_closure_set(v___f_4065_, 1, v___f_4053_);
lean_closure_set(v___f_4065_, 2, v___x_4064_);
v___x_4066_ = lean_unsigned_to_nat(0u);
v___x_4067_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4068_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4069_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4070_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0);
v___x_2534__overap_4071_ = l_Std_Mutex_atomically___redArg(v___x_4067_, v___f_4068_, v___f_4069_, v_requestStream_4036_, v___x_4070_);
v___x_4072_ = lean_apply_1(v___x_2534__overap_4071_, lean_box(0));
v___x_4073_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4066_, v_sentMessage_4047_, v___x_4072_, v___f_4065_);
return v___x_4073_;
}
else
{
lean_dec(v_state_4061_);
lean_dec_ref(v_requestStream_4036_);
v___y_4055_ = v_sentMessage_4047_;
goto v___jp_4054_;
}
}
else
{
uint8_t v___x_4074_; 
lean_dec_ref(v_reader_4045_);
lean_dec_ref(v_requestStream_4036_);
v___x_4074_ = 0;
v___y_4055_ = v___x_4074_;
goto v___jp_4054_;
}
v___jp_4054_:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; 
v___x_4056_ = lean_unsigned_to_nat(0u);
v___x_4057_ = lean_box(v___y_4055_);
v___x_4058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4057_);
v___x_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
v___x_4060_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4056_, v___y_4055_, v___x_4059_, v___f_4053_);
return v___x_4060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object* v_socket_4075_, lean_object* v_connectionContext_4076_, lean_object* v_state_4077_, lean_object* v_a_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4075_, v_connectionContext_4076_, v_state_4077_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object* v_00_u03b1_4080_, lean_object* v_00_u03b2_4081_, lean_object* v_inst_4082_, lean_object* v_socket_4083_, lean_object* v_connectionContext_4084_, lean_object* v_state_4085_){
_start:
{
lean_object* v___x_4087_; 
v___x_4087_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4083_, v_connectionContext_4084_, v_state_4085_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object* v_00_u03b1_4088_, lean_object* v_00_u03b2_4089_, lean_object* v_inst_4090_, lean_object* v_socket_4091_, lean_object* v_connectionContext_4092_, lean_object* v_state_4093_, lean_object* v_a_4094_){
_start:
{
lean_object* v_res_4095_; 
v_res_4095_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(v_00_u03b1_4088_, v_00_u03b2_4089_, v_inst_4090_, v_socket_4091_, v_connectionContext_4092_, v_state_4093_);
lean_dec_ref(v_inst_4090_);
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object* v_x_4096_){
_start:
{
if (lean_obj_tag(v_x_4096_) == 0)
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4106_; 
v_a_4098_ = lean_ctor_get(v_x_4096_, 0);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_x_4096_);
if (v_isSharedCheck_4106_ == 0)
{
v___x_4100_ = v_x_4096_;
v_isShared_4101_ = v_isSharedCheck_4106_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v_x_4096_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4106_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4103_; 
if (v_isShared_4101_ == 0)
{
v___x_4103_ = v___x_4100_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v_a_4098_);
v___x_4103_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
lean_object* v___x_4104_; 
v___x_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
return v___x_4104_;
}
}
}
else
{
lean_object* v_a_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4116_; 
v_a_4107_ = lean_ctor_get(v_x_4096_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v_x_4096_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4109_ = v_x_4096_;
v_isShared_4110_ = v_isSharedCheck_4116_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_a_4107_);
lean_dec(v_x_4096_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4116_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v___x_4111_; lean_object* v___x_4113_; 
v___x_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4111_, 0, v_a_4107_);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 0, v___x_4111_);
v___x_4113_ = v___x_4109_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v___x_4111_);
v___x_4113_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
lean_object* v___x_4114_; 
v___x_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4113_);
return v___x_4114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object* v_x_4117_, lean_object* v___y_4118_){
_start:
{
lean_object* v_res_4119_; 
v_res_4119_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(v_x_4117_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object* v_x_4124_){
_start:
{
if (lean_obj_tag(v_x_4124_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4134_; 
v_a_4126_ = lean_ctor_get(v_x_4124_, 0);
v_isSharedCheck_4134_ = !lean_is_exclusive(v_x_4124_);
if (v_isSharedCheck_4134_ == 0)
{
v___x_4128_ = v_x_4124_;
v_isShared_4129_ = v_isSharedCheck_4134_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_a_4126_);
lean_dec(v_x_4124_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4134_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4131_; 
if (v_isShared_4129_ == 0)
{
v___x_4131_ = v___x_4128_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v_a_4126_);
v___x_4131_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
lean_object* v___x_4132_; 
v___x_4132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4132_, 0, v___x_4131_);
return v___x_4132_;
}
}
}
else
{
lean_object* v___x_4135_; 
lean_dec_ref_known(v_x_4124_, 1);
v___x_4135_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1));
return v___x_4135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object* v_x_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(v_x_4136_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object* v_onFailure_4139_, lean_object* v_handler_4140_, lean_object* v___f_4141_, lean_object* v_x_4142_){
_start:
{
if (lean_obj_tag(v_x_4142_) == 0)
{
lean_object* v_a_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; 
v_a_4144_ = lean_ctor_get(v_x_4142_, 0);
lean_inc(v_a_4144_);
lean_dec_ref_known(v_x_4142_, 1);
v___x_4145_ = lean_unsigned_to_nat(0u);
v___x_4146_ = 0;
v___x_4147_ = lean_apply_3(v_onFailure_4139_, v_handler_4140_, v_a_4144_, lean_box(0));
v___x_4148_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4145_, v___x_4146_, v___x_4147_, v___f_4141_);
return v___x_4148_;
}
else
{
lean_object* v___x_4149_; 
lean_dec_ref(v___f_4141_);
lean_dec(v_handler_4140_);
lean_dec_ref(v_onFailure_4139_);
v___x_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4149_, 0, v_x_4142_);
return v___x_4149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object* v_onFailure_4150_, lean_object* v_handler_4151_, lean_object* v___f_4152_, lean_object* v_x_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(v_onFailure_4150_, v_handler_4151_, v___f_4152_, v_x_4153_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object* v_x_4156_){
_start:
{
if (lean_obj_tag(v_x_4156_) == 0)
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4166_; 
v_a_4158_ = lean_ctor_get(v_x_4156_, 0);
v_isSharedCheck_4166_ = !lean_is_exclusive(v_x_4156_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4160_ = v_x_4156_;
v_isShared_4161_ = v_isSharedCheck_4166_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v_x_4156_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4166_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
lean_object* v___x_4164_; 
v___x_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4163_);
return v___x_4164_;
}
}
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4185_; 
v_a_4167_ = lean_ctor_get(v_x_4156_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v_x_4156_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4169_ = v_x_4156_;
v_isShared_4170_ = v_isSharedCheck_4185_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v_x_4156_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4185_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v_snd_4171_; uint8_t v___x_4172_; 
v_snd_4171_ = lean_ctor_get(v_a_4167_, 1);
v___x_4172_ = lean_unbox(v_snd_4171_);
if (v___x_4172_ == 0)
{
lean_object* v_fst_4173_; lean_object* v___x_4174_; lean_object* v___x_4176_; 
v_fst_4173_ = lean_ctor_get(v_a_4167_, 0);
lean_inc(v_fst_4173_);
lean_dec(v_a_4167_);
v___x_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4174_, 0, v_fst_4173_);
if (v_isShared_4170_ == 0)
{
lean_ctor_set(v___x_4169_, 0, v___x_4174_);
v___x_4176_ = v___x_4169_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v___x_4174_);
v___x_4176_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
lean_object* v___x_4177_; 
v___x_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4176_);
return v___x_4177_;
}
}
else
{
lean_object* v_fst_4179_; lean_object* v___x_4180_; lean_object* v___x_4182_; 
v_fst_4179_ = lean_ctor_get(v_a_4167_, 0);
lean_inc(v_fst_4179_);
lean_dec(v_a_4167_);
v___x_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4180_, 0, v_fst_4179_);
if (v_isShared_4170_ == 0)
{
lean_ctor_set(v___x_4169_, 0, v___x_4180_);
v___x_4182_ = v___x_4169_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v___x_4180_);
v___x_4182_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
lean_object* v___x_4183_; 
v___x_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
return v___x_4183_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object* v_x_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_x_4186_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object* v_inst_4189_, lean_object* v_socket_4190_, lean_object* v_____r_4191_){
_start:
{
lean_object* v_val_4194_; lean_object* v_close_4196_; lean_object* v___x_4197_; 
v_close_4196_ = lean_ctor_get(v_inst_4189_, 3);
lean_inc_ref(v_close_4196_);
lean_dec_ref(v_inst_4189_);
v___x_4197_ = lean_apply_2(v_close_4196_, v_socket_4190_, lean_box(0));
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4205_; 
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4200_ = v___x_4197_;
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v___x_4197_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4203_; 
if (v_isShared_4201_ == 0)
{
lean_ctor_set_tag(v___x_4200_, 1);
v___x_4203_ = v___x_4200_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_a_4198_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
v_val_4194_ = v___x_4203_;
goto v___jp_4193_;
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
v_a_4206_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4197_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4197_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
lean_ctor_set_tag(v___x_4208_, 0);
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
v_val_4194_ = v___x_4211_;
goto v___jp_4193_;
}
}
}
v___jp_4193_:
{
lean_object* v___x_4195_; 
v___x_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4195_, 0, v_val_4194_);
return v___x_4195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object* v_inst_4214_, lean_object* v_socket_4215_, lean_object* v_____r_4216_, lean_object* v___y_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(v_inst_4214_, v_socket_4215_, v_____r_4216_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object* v___f_4219_, lean_object* v_x_4220_){
_start:
{
if (lean_obj_tag(v_x_4220_) == 0)
{
lean_object* v___x_4222_; 
lean_dec_ref(v___f_4219_);
v___x_4222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4222_, 0, v_x_4220_);
return v___x_4222_;
}
else
{
lean_object* v_a_4223_; lean_object* v___x_4224_; 
v_a_4223_ = lean_ctor_get(v_x_4220_, 0);
lean_inc(v_a_4223_);
lean_dec_ref_known(v_x_4220_, 1);
v___x_4224_ = lean_apply_2(v___f_4219_, v_a_4223_, lean_box(0));
return v___x_4224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object* v___f_4225_, lean_object* v_x_4226_, lean_object* v___y_4227_){
_start:
{
lean_object* v_res_4228_; 
v_res_4228_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(v___f_4225_, v_x_4226_);
return v_res_4228_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(lean_object* v_close_4229_, lean_object* v_val_4230_, lean_object* v___f_4231_, lean_object* v___f_4232_, lean_object* v_x_4233_){
_start:
{
if (lean_obj_tag(v_x_4233_) == 0)
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4243_; 
lean_dec_ref(v___f_4232_);
lean_dec_ref(v___f_4231_);
lean_dec(v_val_4230_);
lean_dec_ref(v_close_4229_);
v_a_4235_ = lean_ctor_get(v_x_4233_, 0);
v_isSharedCheck_4243_ = !lean_is_exclusive(v_x_4233_);
if (v_isSharedCheck_4243_ == 0)
{
v___x_4237_ = v_x_4233_;
v_isShared_4238_ = v_isSharedCheck_4243_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v_x_4233_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4243_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
lean_object* v___x_4241_; 
v___x_4241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4240_);
return v___x_4241_;
}
}
}
else
{
lean_object* v_a_4244_; uint8_t v___x_4245_; 
v_a_4244_ = lean_ctor_get(v_x_4233_, 0);
lean_inc(v_a_4244_);
lean_dec_ref_known(v_x_4233_, 1);
v___x_4245_ = lean_unbox(v_a_4244_);
if (v___x_4245_ == 0)
{
lean_object* v___x_4246_; lean_object* v___x_4247_; uint8_t v___x_4248_; lean_object* v___x_4249_; 
lean_dec_ref(v___f_4232_);
v___x_4246_ = lean_unsigned_to_nat(0u);
v___x_4247_ = lean_apply_2(v_close_4229_, v_val_4230_, lean_box(0));
v___x_4248_ = lean_unbox(v_a_4244_);
lean_dec(v_a_4244_);
v___x_4249_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4246_, v___x_4248_, v___x_4247_, v___f_4231_);
return v___x_4249_;
}
else
{
lean_object* v___x_4250_; lean_object* v___x_4251_; 
lean_dec(v_a_4244_);
lean_dec_ref(v___f_4231_);
lean_dec(v_val_4230_);
lean_dec_ref(v_close_4229_);
v___x_4250_ = lean_box(0);
v___x_4251_ = lean_apply_2(v___f_4232_, v___x_4250_, lean_box(0));
return v___x_4251_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object* v_close_4252_, lean_object* v_val_4253_, lean_object* v___f_4254_, lean_object* v___f_4255_, lean_object* v_x_4256_, lean_object* v___y_4257_){
_start:
{
lean_object* v_res_4258_; 
v_res_4258_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(v_close_4252_, v_val_4253_, v___f_4254_, v___f_4255_, v_x_4256_);
return v_res_4258_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object* v_respStream_4259_, lean_object* v_responseBodyInstance_4260_, lean_object* v___f_4261_, lean_object* v___f_4262_, lean_object* v_____r_4263_){
_start:
{
if (lean_obj_tag(v_respStream_4259_) == 1)
{
lean_object* v_val_4265_; lean_object* v_close_4266_; lean_object* v_isClosed_4267_; lean_object* v___f_4268_; lean_object* v___x_4269_; uint8_t v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v_val_4265_ = lean_ctor_get(v_respStream_4259_, 0);
lean_inc_n(v_val_4265_, 2);
lean_dec_ref_known(v_respStream_4259_, 1);
v_close_4266_ = lean_ctor_get(v_responseBodyInstance_4260_, 1);
lean_inc_ref(v_close_4266_);
v_isClosed_4267_ = lean_ctor_get(v_responseBodyInstance_4260_, 2);
lean_inc_ref(v_isClosed_4267_);
lean_dec_ref(v_responseBodyInstance_4260_);
v___f_4268_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_4268_, 0, v_close_4266_);
lean_closure_set(v___f_4268_, 1, v_val_4265_);
lean_closure_set(v___f_4268_, 2, v___f_4261_);
lean_closure_set(v___f_4268_, 3, v___f_4262_);
v___x_4269_ = lean_unsigned_to_nat(0u);
v___x_4270_ = 0;
v___x_4271_ = lean_apply_2(v_isClosed_4267_, v_val_4265_, lean_box(0));
v___x_4272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4269_, v___x_4270_, v___x_4271_, v___f_4268_);
return v___x_4272_;
}
else
{
lean_object* v___x_4273_; lean_object* v___x_4274_; 
lean_dec_ref(v___f_4261_);
lean_dec_ref(v_responseBodyInstance_4260_);
lean_dec(v_respStream_4259_);
v___x_4273_ = lean_box(0);
v___x_4274_ = lean_apply_2(v___f_4262_, v___x_4273_, lean_box(0));
return v___x_4274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object* v_respStream_4275_, lean_object* v_responseBodyInstance_4276_, lean_object* v___f_4277_, lean_object* v___f_4278_, lean_object* v_____r_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(v_respStream_4275_, v_responseBodyInstance_4276_, v___f_4277_, v___f_4278_, v_____r_4279_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object* v_requestStream_4282_, lean_object* v___f_4283_, lean_object* v___f_4284_, lean_object* v_x_4285_){
_start:
{
if (lean_obj_tag(v_x_4285_) == 0)
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4295_; 
lean_dec_ref(v___f_4284_);
lean_dec_ref(v___f_4283_);
lean_dec_ref(v_requestStream_4282_);
v_a_4287_ = lean_ctor_get(v_x_4285_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v_x_4285_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4289_ = v_x_4285_;
v_isShared_4290_ = v_isSharedCheck_4295_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v_x_4285_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4295_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
lean_object* v___x_4293_; 
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
return v___x_4293_;
}
}
}
else
{
lean_object* v_a_4296_; uint8_t v___x_4297_; 
v_a_4296_ = lean_ctor_get(v_x_4285_, 0);
lean_inc(v_a_4296_);
lean_dec_ref_known(v_x_4285_, 1);
v___x_4297_ = lean_unbox(v_a_4296_);
if (v___x_4297_ == 0)
{
lean_object* v___x_4298_; lean_object* v___x_4299_; uint8_t v___x_4300_; lean_object* v___x_4301_; 
lean_dec_ref(v___f_4284_);
v___x_4298_ = lean_unsigned_to_nat(0u);
v___x_4299_ = l_Std_Http_Body_Stream_close(v_requestStream_4282_);
v___x_4300_ = lean_unbox(v_a_4296_);
lean_dec(v_a_4296_);
v___x_4301_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4298_, v___x_4300_, v___x_4299_, v___f_4283_);
return v___x_4301_;
}
else
{
lean_object* v___x_4302_; lean_object* v___x_4303_; 
lean_dec(v_a_4296_);
lean_dec_ref(v___f_4283_);
lean_dec_ref(v_requestStream_4282_);
v___x_4302_ = lean_box(0);
v___x_4303_ = lean_apply_2(v___f_4284_, v___x_4302_, lean_box(0));
return v___x_4303_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object* v_requestStream_4304_, lean_object* v___f_4305_, lean_object* v___f_4306_, lean_object* v_x_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(v_requestStream_4304_, v___f_4305_, v___f_4306_, v_x_4307_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object* v_responseBodyInstance_4310_, lean_object* v___f_4311_, lean_object* v___f_4312_, lean_object* v___f_4313_, lean_object* v_x_4314_){
_start:
{
if (lean_obj_tag(v_x_4314_) == 0)
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4324_; 
lean_dec_ref(v___f_4313_);
lean_dec_ref(v___f_4312_);
lean_dec_ref(v___f_4311_);
lean_dec_ref(v_responseBodyInstance_4310_);
v_a_4316_ = lean_ctor_get(v_x_4314_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v_x_4314_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4318_ = v_x_4314_;
v_isShared_4319_ = v_isSharedCheck_4324_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v_x_4314_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4324_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
lean_object* v___x_4321_; 
if (v_isShared_4319_ == 0)
{
v___x_4321_ = v___x_4318_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4316_);
v___x_4321_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
lean_object* v___x_4322_; 
v___x_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4322_, 0, v___x_4321_);
return v___x_4322_;
}
}
}
else
{
lean_object* v_a_4325_; lean_object* v_requestStream_4326_; lean_object* v_respStream_4327_; lean_object* v___f_4328_; lean_object* v___f_4329_; lean_object* v___f_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; lean_object* v___x_4333_; lean_object* v___f_4334_; lean_object* v___f_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4531__overap_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v_a_4325_ = lean_ctor_get(v_x_4314_, 0);
lean_inc(v_a_4325_);
lean_dec_ref_known(v_x_4314_, 1);
v_requestStream_4326_ = lean_ctor_get(v_a_4325_, 1);
lean_inc_ref_n(v_requestStream_4326_, 2);
v_respStream_4327_ = lean_ctor_get(v_a_4325_, 6);
lean_inc(v_respStream_4327_);
lean_dec(v_a_4325_);
v___f_4328_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed), 6, 4);
lean_closure_set(v___f_4328_, 0, v_respStream_4327_);
lean_closure_set(v___f_4328_, 1, v_responseBodyInstance_4310_);
lean_closure_set(v___f_4328_, 2, v___f_4311_);
lean_closure_set(v___f_4328_, 3, v___f_4312_);
lean_inc_ref(v___f_4328_);
v___f_4329_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4329_, 0, v___f_4328_);
v___f_4330_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4330_, 0, v_requestStream_4326_);
lean_closure_set(v___f_4330_, 1, v___f_4329_);
lean_closure_set(v___f_4330_, 2, v___f_4328_);
v___x_4331_ = lean_unsigned_to_nat(0u);
v___x_4332_ = 0;
v___x_4333_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4334_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4335_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4336_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4337_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4337_, 0, lean_box(0));
lean_closure_set(v___x_4337_, 1, lean_box(0));
lean_closure_set(v___x_4337_, 2, v___x_4333_);
lean_closure_set(v___x_4337_, 3, lean_box(0));
lean_closure_set(v___x_4337_, 4, lean_box(0));
lean_closure_set(v___x_4337_, 5, v___x_4336_);
lean_closure_set(v___x_4337_, 6, v___f_4313_);
v___x_4531__overap_4338_ = l_Std_Mutex_atomically___redArg(v___x_4333_, v___f_4334_, v___f_4335_, v_requestStream_4326_, v___x_4337_);
v___x_4339_ = lean_apply_1(v___x_4531__overap_4338_, lean_box(0));
v___x_4340_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4331_, v___x_4332_, v___x_4339_, v___f_4330_);
return v___x_4340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object* v_responseBodyInstance_4341_, lean_object* v___f_4342_, lean_object* v___f_4343_, lean_object* v___f_4344_, lean_object* v_x_4345_, lean_object* v___y_4346_){
_start:
{
lean_object* v_res_4347_; 
v_res_4347_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(v_responseBodyInstance_4341_, v___f_4342_, v___f_4343_, v___f_4344_, v_x_4345_);
return v_res_4347_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object* v_h_4348_, lean_object* v_responseBodyInstance_4349_, lean_object* v_handler_4350_, lean_object* v_config_4351_, lean_object* v___x_4352_, uint8_t v___x_4353_, lean_object* v___f_4354_, lean_object* v_x_4355_){
_start:
{
if (lean_obj_tag(v_x_4355_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4365_; 
lean_dec_ref(v___f_4354_);
lean_dec_ref(v___x_4352_);
lean_dec_ref(v_config_4351_);
lean_dec(v_handler_4350_);
lean_dec_ref(v_responseBodyInstance_4349_);
lean_dec_ref(v_h_4348_);
v_a_4357_ = lean_ctor_get(v_x_4355_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v_x_4355_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4359_ = v_x_4355_;
v_isShared_4360_ = v_isSharedCheck_4365_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v_x_4355_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4365_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4362_);
return v___x_4363_;
}
}
}
else
{
lean_object* v_a_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; 
v_a_4366_ = lean_ctor_get(v_x_4355_, 0);
lean_inc(v_a_4366_);
lean_dec_ref_known(v_x_4355_, 1);
v___x_4367_ = lean_unsigned_to_nat(0u);
v___x_4368_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_h_4348_, v_responseBodyInstance_4349_, v_handler_4350_, v_config_4351_, v_a_4366_, v___x_4352_);
v___x_4369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4367_, v___x_4353_, v___x_4368_, v___f_4354_);
return v___x_4369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object* v_h_4370_, lean_object* v_responseBodyInstance_4371_, lean_object* v_handler_4372_, lean_object* v_config_4373_, lean_object* v___x_4374_, lean_object* v___x_4375_, lean_object* v___f_4376_, lean_object* v_x_4377_, lean_object* v___y_4378_){
_start:
{
uint8_t v___x_5197__boxed_4379_; lean_object* v_res_4380_; 
v___x_5197__boxed_4379_ = lean_unbox(v___x_4375_);
v_res_4380_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(v_h_4370_, v_responseBodyInstance_4371_, v_handler_4372_, v_config_4373_, v___x_4374_, v___x_5197__boxed_4379_, v___f_4376_, v_x_4377_);
return v_res_4380_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object* v_inst_4381_, lean_object* v_h_4382_, lean_object* v_responseBodyInstance_4383_, lean_object* v_config_4384_, lean_object* v_handler_4385_, uint8_t v___x_4386_, lean_object* v___f_4387_, lean_object* v_x_4388_){
_start:
{
if (lean_obj_tag(v_x_4388_) == 0)
{
lean_object* v_a_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4398_; 
lean_dec_ref(v___f_4387_);
lean_dec(v_handler_4385_);
lean_dec_ref(v_config_4384_);
lean_dec_ref(v_responseBodyInstance_4383_);
lean_dec_ref(v_h_4382_);
lean_dec_ref(v_inst_4381_);
v_a_4390_ = lean_ctor_get(v_x_4388_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v_x_4388_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4392_ = v_x_4388_;
v_isShared_4393_ = v_isSharedCheck_4398_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_a_4390_);
lean_dec(v_x_4388_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4398_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v___x_4395_; 
if (v_isShared_4393_ == 0)
{
v___x_4395_ = v___x_4392_;
goto v_reusejp_4394_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_a_4390_);
v___x_4395_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4394_;
}
v_reusejp_4394_:
{
lean_object* v___x_4396_; 
v___x_4396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4396_, 0, v___x_4395_);
return v___x_4396_;
}
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; 
v_a_4399_ = lean_ctor_get(v_x_4388_, 0);
lean_inc(v_a_4399_);
lean_dec_ref_known(v_x_4388_, 1);
v___x_4400_ = lean_unsigned_to_nat(0u);
v___x_4401_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_4381_, v_h_4382_, v_responseBodyInstance_4383_, v_config_4384_, v_handler_4385_, v_a_4399_);
v___x_4402_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4400_, v___x_4386_, v___x_4401_, v___f_4387_);
return v___x_4402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object* v_inst_4403_, lean_object* v_h_4404_, lean_object* v_responseBodyInstance_4405_, lean_object* v_config_4406_, lean_object* v_handler_4407_, lean_object* v___x_4408_, lean_object* v___f_4409_, lean_object* v_x_4410_, lean_object* v___y_4411_){
_start:
{
uint8_t v___x_5238__boxed_4412_; lean_object* v_res_4413_; 
v___x_5238__boxed_4412_ = lean_unbox(v___x_4408_);
v_res_4413_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(v_inst_4403_, v_h_4404_, v_responseBodyInstance_4405_, v_config_4406_, v_handler_4407_, v___x_5238__boxed_4412_, v___f_4409_, v_x_4410_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t v___x_4414_, lean_object* v_h_4415_, lean_object* v_responseBodyInstance_4416_, lean_object* v_handler_4417_, lean_object* v_config_4418_, lean_object* v___f_4419_, lean_object* v_inst_4420_, lean_object* v_socket_4421_, lean_object* v_connectionContext_4422_, lean_object* v_x_4423_){
_start:
{
if (lean_obj_tag(v_x_4423_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4433_; 
lean_dec_ref(v_connectionContext_4422_);
lean_dec(v_socket_4421_);
lean_dec_ref(v_inst_4420_);
lean_dec_ref(v___f_4419_);
lean_dec_ref(v_config_4418_);
lean_dec(v_handler_4417_);
lean_dec_ref(v_responseBodyInstance_4416_);
lean_dec_ref(v_h_4415_);
v_a_4425_ = lean_ctor_get(v_x_4423_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v_x_4423_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4427_ = v_x_4423_;
v_isShared_4428_ = v_isSharedCheck_4433_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v_x_4423_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4433_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4430_; 
if (v_isShared_4428_ == 0)
{
v___x_4430_ = v___x_4427_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4425_);
v___x_4430_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
lean_object* v___x_4431_; 
v___x_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4430_);
return v___x_4431_;
}
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4468_; 
v_a_4434_ = lean_ctor_get(v_x_4423_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_x_4423_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4436_ = v_x_4423_;
v_isShared_4437_ = v_isSharedCheck_4468_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v_x_4423_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4468_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v_machine_4444_; lean_object* v_requestStream_4445_; lean_object* v_keepAliveTimeout_4446_; lean_object* v_currentTimeout_4447_; lean_object* v_headerTimeout_4448_; lean_object* v_response_4449_; lean_object* v_respStream_4450_; uint8_t v_requiresData_4451_; lean_object* v_expectData_4452_; uint8_t v_handlerDispatched_4453_; lean_object* v_pendingHead_4454_; 
v_machine_4444_ = lean_ctor_get(v_a_4434_, 0);
v_requestStream_4445_ = lean_ctor_get(v_a_4434_, 1);
v_keepAliveTimeout_4446_ = lean_ctor_get(v_a_4434_, 2);
v_currentTimeout_4447_ = lean_ctor_get(v_a_4434_, 3);
v_headerTimeout_4448_ = lean_ctor_get(v_a_4434_, 4);
v_response_4449_ = lean_ctor_get(v_a_4434_, 5);
v_respStream_4450_ = lean_ctor_get(v_a_4434_, 6);
v_requiresData_4451_ = lean_ctor_get_uint8(v_a_4434_, sizeof(void*)*9);
v_expectData_4452_ = lean_ctor_get(v_a_4434_, 7);
v_handlerDispatched_4453_ = lean_ctor_get_uint8(v_a_4434_, sizeof(void*)*9 + 1);
v_pendingHead_4454_ = lean_ctor_get(v_a_4434_, 8);
if (v_requiresData_4451_ == 0)
{
if (v_handlerDispatched_4453_ == 0)
{
if (lean_obj_tag(v_respStream_4450_) == 0)
{
lean_object* v_writer_4464_; uint8_t v_sentMessage_4465_; 
v_writer_4464_ = lean_ctor_get(v_machine_4444_, 1);
v_sentMessage_4465_ = lean_ctor_get_uint8(v_writer_4464_, sizeof(void*)*6);
if (v_sentMessage_4465_ == 0)
{
lean_object* v_reader_4466_; lean_object* v_state_4467_; 
v_reader_4466_ = lean_ctor_get(v_machine_4444_, 0);
v_state_4467_ = lean_ctor_get(v_reader_4466_, 0);
if (lean_obj_tag(v_state_4467_) == 2)
{
lean_inc(v_respStream_4450_);
lean_inc(v_pendingHead_4454_);
lean_inc(v_expectData_4452_);
lean_inc_ref(v_response_4449_);
lean_inc(v_headerTimeout_4448_);
lean_inc(v_currentTimeout_4447_);
lean_inc(v_keepAliveTimeout_4446_);
lean_inc_ref(v_requestStream_4445_);
lean_inc_ref(v_machine_4444_);
lean_del_object(v___x_4436_);
lean_dec(v_a_4434_);
goto v___jp_4455_;
}
else
{
lean_dec_ref(v_connectionContext_4422_);
lean_dec(v_socket_4421_);
lean_dec_ref(v_inst_4420_);
lean_dec_ref(v___f_4419_);
lean_dec_ref(v_config_4418_);
lean_dec(v_handler_4417_);
lean_dec_ref(v_responseBodyInstance_4416_);
lean_dec_ref(v_h_4415_);
goto v___jp_4438_;
}
}
else
{
lean_dec_ref(v_connectionContext_4422_);
lean_dec(v_socket_4421_);
lean_dec_ref(v_inst_4420_);
lean_dec_ref(v___f_4419_);
lean_dec_ref(v_config_4418_);
lean_dec(v_handler_4417_);
lean_dec_ref(v_responseBodyInstance_4416_);
lean_dec_ref(v_h_4415_);
goto v___jp_4438_;
}
}
else
{
lean_inc_ref(v_respStream_4450_);
lean_inc(v_pendingHead_4454_);
lean_inc(v_expectData_4452_);
lean_inc_ref(v_response_4449_);
lean_inc(v_headerTimeout_4448_);
lean_inc(v_currentTimeout_4447_);
lean_inc(v_keepAliveTimeout_4446_);
lean_inc_ref(v_requestStream_4445_);
lean_inc_ref(v_machine_4444_);
lean_del_object(v___x_4436_);
lean_dec(v_a_4434_);
goto v___jp_4455_;
}
}
else
{
lean_inc(v_pendingHead_4454_);
lean_inc(v_expectData_4452_);
lean_inc(v_respStream_4450_);
lean_inc_ref(v_response_4449_);
lean_inc(v_headerTimeout_4448_);
lean_inc(v_currentTimeout_4447_);
lean_inc(v_keepAliveTimeout_4446_);
lean_inc_ref(v_requestStream_4445_);
lean_inc_ref(v_machine_4444_);
lean_del_object(v___x_4436_);
lean_dec(v_a_4434_);
goto v___jp_4455_;
}
}
else
{
lean_inc(v_pendingHead_4454_);
lean_inc(v_expectData_4452_);
lean_inc(v_respStream_4450_);
lean_inc_ref(v_response_4449_);
lean_inc(v_headerTimeout_4448_);
lean_inc(v_currentTimeout_4447_);
lean_inc(v_keepAliveTimeout_4446_);
lean_inc_ref(v_requestStream_4445_);
lean_inc_ref(v_machine_4444_);
lean_del_object(v___x_4436_);
lean_dec(v_a_4434_);
goto v___jp_4455_;
}
v___jp_4438_:
{
lean_object* v___x_4439_; lean_object* v___x_4441_; 
v___x_4439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4439_, 0, v_a_4434_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4439_);
v___x_4441_ = v___x_4436_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v___x_4439_);
v___x_4441_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
lean_object* v___x_4442_; 
v___x_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4441_);
return v___x_4442_;
}
}
v___jp_4455_:
{
lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___f_4458_; lean_object* v___x_4459_; lean_object* v___f_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4456_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4456_, 0, v_machine_4444_);
lean_ctor_set(v___x_4456_, 1, v_requestStream_4445_);
lean_ctor_set(v___x_4456_, 2, v_keepAliveTimeout_4446_);
lean_ctor_set(v___x_4456_, 3, v_currentTimeout_4447_);
lean_ctor_set(v___x_4456_, 4, v_headerTimeout_4448_);
lean_ctor_set(v___x_4456_, 5, v_response_4449_);
lean_ctor_set(v___x_4456_, 6, v_respStream_4450_);
lean_ctor_set(v___x_4456_, 7, v_expectData_4452_);
lean_ctor_set(v___x_4456_, 8, v_pendingHead_4454_);
lean_ctor_set_uint8(v___x_4456_, sizeof(void*)*9, v___x_4414_);
lean_ctor_set_uint8(v___x_4456_, sizeof(void*)*9 + 1, v_handlerDispatched_4453_);
v___x_4457_ = lean_box(v___x_4414_);
lean_inc_ref(v___x_4456_);
lean_inc_ref(v_config_4418_);
lean_inc(v_handler_4417_);
lean_inc_ref(v_responseBodyInstance_4416_);
lean_inc_ref(v_h_4415_);
v___f_4458_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed), 9, 7);
lean_closure_set(v___f_4458_, 0, v_h_4415_);
lean_closure_set(v___f_4458_, 1, v_responseBodyInstance_4416_);
lean_closure_set(v___f_4458_, 2, v_handler_4417_);
lean_closure_set(v___f_4458_, 3, v_config_4418_);
lean_closure_set(v___f_4458_, 4, v___x_4456_);
lean_closure_set(v___f_4458_, 5, v___x_4457_);
lean_closure_set(v___f_4458_, 6, v___f_4419_);
v___x_4459_ = lean_box(v___x_4414_);
v___f_4460_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed), 9, 7);
lean_closure_set(v___f_4460_, 0, v_inst_4420_);
lean_closure_set(v___f_4460_, 1, v_h_4415_);
lean_closure_set(v___f_4460_, 2, v_responseBodyInstance_4416_);
lean_closure_set(v___f_4460_, 3, v_config_4418_);
lean_closure_set(v___f_4460_, 4, v_handler_4417_);
lean_closure_set(v___f_4460_, 5, v___x_4459_);
lean_closure_set(v___f_4460_, 6, v___f_4458_);
v___x_4461_ = lean_unsigned_to_nat(0u);
v___x_4462_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4421_, v_connectionContext_4422_, v___x_4456_);
v___x_4463_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4461_, v___x_4414_, v___x_4462_, v___f_4460_);
return v___x_4463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object* v___x_4469_, lean_object* v_h_4470_, lean_object* v_responseBodyInstance_4471_, lean_object* v_handler_4472_, lean_object* v_config_4473_, lean_object* v___f_4474_, lean_object* v_inst_4475_, lean_object* v_socket_4476_, lean_object* v_connectionContext_4477_, lean_object* v_x_4478_, lean_object* v___y_4479_){
_start:
{
uint8_t v___x_5278__boxed_4480_; lean_object* v_res_4481_; 
v___x_5278__boxed_4480_ = lean_unbox(v___x_4469_);
v_res_4481_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(v___x_5278__boxed_4480_, v_h_4470_, v_responseBodyInstance_4471_, v_handler_4472_, v_config_4473_, v___f_4474_, v_inst_4475_, v_socket_4476_, v_connectionContext_4477_, v_x_4478_);
return v_res_4481_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object* v_h_4482_, lean_object* v_handler_4483_, lean_object* v_extensions_4484_, lean_object* v_connectionContext_4485_, uint8_t v___x_4486_, lean_object* v___f_4487_, lean_object* v_x_4488_){
_start:
{
if (lean_obj_tag(v_x_4488_) == 0)
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4498_; 
lean_dec_ref(v___f_4487_);
lean_dec_ref(v_connectionContext_4485_);
lean_dec(v_extensions_4484_);
lean_dec(v_handler_4483_);
lean_dec_ref(v_h_4482_);
v_a_4490_ = lean_ctor_get(v_x_4488_, 0);
v_isSharedCheck_4498_ = !lean_is_exclusive(v_x_4488_);
if (v_isSharedCheck_4498_ == 0)
{
v___x_4492_ = v_x_4488_;
v_isShared_4493_ = v_isSharedCheck_4498_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v_x_4488_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4498_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v_a_4490_);
v___x_4495_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
lean_object* v___x_4496_; 
v___x_4496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4495_);
return v___x_4496_;
}
}
}
else
{
lean_object* v_a_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v_a_4499_ = lean_ctor_get(v_x_4488_, 0);
lean_inc(v_a_4499_);
lean_dec_ref_known(v_x_4488_, 1);
v___x_4500_ = lean_unsigned_to_nat(0u);
v___x_4501_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_h_4482_, v_handler_4483_, v_extensions_4484_, v_connectionContext_4485_, v_a_4499_);
v___x_4502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4500_, v___x_4486_, v___x_4501_, v___f_4487_);
return v___x_4502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object* v_h_4503_, lean_object* v_handler_4504_, lean_object* v_extensions_4505_, lean_object* v_connectionContext_4506_, lean_object* v___x_4507_, lean_object* v___f_4508_, lean_object* v_x_4509_, lean_object* v___y_4510_){
_start:
{
uint8_t v___x_5353__boxed_4511_; lean_object* v_res_4512_; 
v___x_5353__boxed_4511_ = lean_unbox(v___x_4507_);
v_res_4512_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(v_h_4503_, v_handler_4504_, v_extensions_4505_, v_connectionContext_4506_, v___x_5353__boxed_4511_, v___f_4508_, v_x_4509_);
return v_res_4512_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object* v_h_4513_, lean_object* v_responseBodyInstance_4514_, lean_object* v_handler_4515_, lean_object* v_config_4516_, lean_object* v_connectionContext_4517_, lean_object* v_events_4518_, lean_object* v___x_4519_, uint8_t v___x_4520_, lean_object* v___f_4521_, lean_object* v_____r_4522_){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = lean_unsigned_to_nat(0u);
v___x_4525_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_h_4513_, v_responseBodyInstance_4514_, v_handler_4515_, v_config_4516_, v_connectionContext_4517_, v_events_4518_, v___x_4519_);
v___x_4526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4524_, v___x_4520_, v___x_4525_, v___f_4521_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object* v_h_4527_, lean_object* v_responseBodyInstance_4528_, lean_object* v_handler_4529_, lean_object* v_config_4530_, lean_object* v_connectionContext_4531_, lean_object* v_events_4532_, lean_object* v___x_4533_, lean_object* v___x_4534_, lean_object* v___f_4535_, lean_object* v_____r_4536_, lean_object* v___y_4537_){
_start:
{
uint8_t v___x_5392__boxed_4538_; lean_object* v_res_4539_; 
v___x_5392__boxed_4538_ = lean_unbox(v___x_4534_);
v_res_4539_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4527_, v_responseBodyInstance_4528_, v_handler_4529_, v_config_4530_, v_connectionContext_4531_, v_events_4532_, v___x_4533_, v___x_5392__boxed_4538_, v___f_4535_, v_____r_4536_);
return v_res_4539_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object* v___x_4540_, lean_object* v___f_4541_, lean_object* v_x_4542_){
_start:
{
if (lean_obj_tag(v_x_4542_) == 0)
{
lean_object* v_a_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4552_; 
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___x_4540_);
v_a_4544_ = lean_ctor_get(v_x_4542_, 0);
v_isSharedCheck_4552_ = !lean_is_exclusive(v_x_4542_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4546_ = v_x_4542_;
v_isShared_4547_ = v_isSharedCheck_4552_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_a_4544_);
lean_dec(v_x_4542_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4552_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4549_; 
if (v_isShared_4547_ == 0)
{
v___x_4549_ = v___x_4546_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v_a_4544_);
v___x_4549_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
lean_object* v___x_4550_; 
v___x_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4549_);
return v___x_4550_;
}
}
}
else
{
lean_object* v_a_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4564_; 
v_a_4553_ = lean_ctor_get(v_x_4542_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v_x_4542_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4555_ = v_x_4542_;
v_isShared_4556_ = v_isSharedCheck_4564_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_a_4553_);
lean_dec(v_x_4542_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4564_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
if (lean_obj_tag(v_a_4553_) == 0)
{
lean_object* v___x_4557_; lean_object* v___x_4559_; 
lean_dec_ref(v___f_4541_);
v___x_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4540_);
if (v_isShared_4556_ == 0)
{
lean_ctor_set(v___x_4555_, 0, v___x_4557_);
v___x_4559_ = v___x_4555_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v___x_4557_);
v___x_4559_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
lean_object* v___x_4560_; 
v___x_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4560_, 0, v___x_4559_);
return v___x_4560_;
}
}
else
{
lean_object* v_val_4562_; lean_object* v___x_4563_; 
lean_del_object(v___x_4555_);
lean_dec_ref(v___x_4540_);
v_val_4562_ = lean_ctor_get(v_a_4553_, 0);
lean_inc(v_val_4562_);
lean_dec_ref_known(v_a_4553_, 1);
v___x_4563_ = lean_apply_2(v___f_4541_, v_val_4562_, lean_box(0));
return v___x_4563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object* v___x_4565_, lean_object* v___f_4566_, lean_object* v_x_4567_, lean_object* v___y_4568_){
_start:
{
lean_object* v_res_4569_; 
v_res_4569_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(v___x_4565_, v___f_4566_, v_x_4567_);
return v_res_4569_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(lean_object* v_h_4570_, lean_object* v_responseBodyInstance_4571_, lean_object* v_handler_4572_, lean_object* v_config_4573_, lean_object* v_connectionContext_4574_, uint8_t v___x_4575_, lean_object* v___f_4576_, lean_object* v_inst_4577_, lean_object* v_socket_4578_, lean_object* v___f_4579_, lean_object* v___f_4580_, lean_object* v_x_4581_, lean_object* v_____s_4582_){
_start:
{
lean_object* v_machine_4584_; lean_object* v_reader_4585_; lean_object* v_requestStream_4586_; lean_object* v_keepAliveTimeout_4587_; lean_object* v_currentTimeout_4588_; lean_object* v_headerTimeout_4589_; lean_object* v_response_4590_; lean_object* v_respStream_4591_; uint8_t v_requiresData_4592_; lean_object* v_expectData_4593_; uint8_t v_handlerDispatched_4594_; lean_object* v_pendingHead_4595_; lean_object* v_writer_4596_; lean_object* v_state_4597_; uint8_t v___x_4598_; 
v_machine_4584_ = lean_ctor_get(v_____s_4582_, 0);
v_reader_4585_ = lean_ctor_get(v_machine_4584_, 0);
v_requestStream_4586_ = lean_ctor_get(v_____s_4582_, 1);
v_keepAliveTimeout_4587_ = lean_ctor_get(v_____s_4582_, 2);
v_currentTimeout_4588_ = lean_ctor_get(v_____s_4582_, 3);
v_headerTimeout_4589_ = lean_ctor_get(v_____s_4582_, 4);
v_response_4590_ = lean_ctor_get(v_____s_4582_, 5);
v_respStream_4591_ = lean_ctor_get(v_____s_4582_, 6);
v_requiresData_4592_ = lean_ctor_get_uint8(v_____s_4582_, sizeof(void*)*9);
v_expectData_4593_ = lean_ctor_get(v_____s_4582_, 7);
v_handlerDispatched_4594_ = lean_ctor_get_uint8(v_____s_4582_, sizeof(void*)*9 + 1);
v_pendingHead_4595_ = lean_ctor_get(v_____s_4582_, 8);
v_writer_4596_ = lean_ctor_get(v_machine_4584_, 1);
v_state_4597_ = lean_ctor_get(v_reader_4585_, 0);
v___x_4598_ = 0;
if (lean_obj_tag(v_state_4597_) == 6)
{
lean_object* v_state_4620_; 
v_state_4620_ = lean_ctor_get(v_writer_4596_, 2);
if (lean_obj_tag(v_state_4620_) == 7)
{
lean_object* v_outputData_4621_; lean_object* v_size_4622_; lean_object* v___x_4623_; uint8_t v___x_4624_; 
v_outputData_4621_ = lean_ctor_get(v_writer_4596_, 1);
v_size_4622_ = lean_ctor_get(v_outputData_4621_, 1);
v___x_4623_ = lean_unsigned_to_nat(0u);
v___x_4624_ = lean_nat_dec_eq(v_size_4622_, v___x_4623_);
if (v___x_4624_ == 0)
{
lean_inc(v_pendingHead_4595_);
lean_inc(v_expectData_4593_);
lean_inc(v_respStream_4591_);
lean_inc_ref(v_response_4590_);
lean_inc(v_headerTimeout_4589_);
lean_inc(v_currentTimeout_4588_);
lean_inc(v_keepAliveTimeout_4587_);
lean_inc_ref(v_requestStream_4586_);
lean_inc_ref(v_machine_4584_);
lean_dec_ref(v_____s_4582_);
goto v___jp_4599_;
}
else
{
lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; 
lean_dec_ref(v___f_4580_);
lean_dec_ref(v___f_4579_);
lean_dec(v_socket_4578_);
lean_dec_ref(v_inst_4577_);
lean_dec_ref(v___f_4576_);
lean_dec_ref(v_connectionContext_4574_);
lean_dec_ref(v_config_4573_);
lean_dec(v_handler_4572_);
lean_dec_ref(v_responseBodyInstance_4571_);
lean_dec_ref(v_h_4570_);
v___x_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4625_, 0, v_____s_4582_);
v___x_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4626_, 0, v___x_4625_);
v___x_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4627_, 0, v___x_4626_);
return v___x_4627_;
}
}
else
{
lean_inc(v_pendingHead_4595_);
lean_inc(v_expectData_4593_);
lean_inc(v_respStream_4591_);
lean_inc_ref(v_response_4590_);
lean_inc(v_headerTimeout_4589_);
lean_inc(v_currentTimeout_4588_);
lean_inc(v_keepAliveTimeout_4587_);
lean_inc_ref(v_requestStream_4586_);
lean_inc_ref(v_machine_4584_);
lean_dec_ref(v_____s_4582_);
goto v___jp_4599_;
}
}
else
{
lean_inc(v_pendingHead_4595_);
lean_inc(v_expectData_4593_);
lean_inc(v_respStream_4591_);
lean_inc_ref(v_response_4590_);
lean_inc(v_headerTimeout_4589_);
lean_inc(v_currentTimeout_4588_);
lean_inc(v_keepAliveTimeout_4587_);
lean_inc_ref(v_requestStream_4586_);
lean_inc_ref(v_machine_4584_);
lean_dec_ref(v_____s_4582_);
goto v___jp_4599_;
}
v___jp_4599_:
{
lean_object* v___x_4600_; lean_object* v_snd_4601_; lean_object* v_output_4602_; lean_object* v_fst_4603_; lean_object* v_events_4604_; lean_object* v_data_4605_; lean_object* v_size_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___f_4609_; lean_object* v___x_4610_; uint8_t v___x_4611_; 
v___x_4600_ = l_Std_Http_Protocol_H1_Machine_step(v___x_4598_, v_machine_4584_);
v_snd_4601_ = lean_ctor_get(v___x_4600_, 1);
lean_inc(v_snd_4601_);
v_output_4602_ = lean_ctor_get(v_snd_4601_, 1);
lean_inc_ref(v_output_4602_);
v_fst_4603_ = lean_ctor_get(v___x_4600_, 0);
lean_inc(v_fst_4603_);
lean_dec_ref(v___x_4600_);
v_events_4604_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc_ref_n(v_events_4604_, 2);
lean_dec(v_snd_4601_);
v_data_4605_ = lean_ctor_get(v_output_4602_, 0);
lean_inc_ref(v_data_4605_);
v_size_4606_ = lean_ctor_get(v_output_4602_, 1);
lean_inc(v_size_4606_);
lean_dec_ref(v_output_4602_);
v___x_4607_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4607_, 0, v_fst_4603_);
lean_ctor_set(v___x_4607_, 1, v_requestStream_4586_);
lean_ctor_set(v___x_4607_, 2, v_keepAliveTimeout_4587_);
lean_ctor_set(v___x_4607_, 3, v_currentTimeout_4588_);
lean_ctor_set(v___x_4607_, 4, v_headerTimeout_4589_);
lean_ctor_set(v___x_4607_, 5, v_response_4590_);
lean_ctor_set(v___x_4607_, 6, v_respStream_4591_);
lean_ctor_set(v___x_4607_, 7, v_expectData_4593_);
lean_ctor_set(v___x_4607_, 8, v_pendingHead_4595_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*9, v_requiresData_4592_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*9 + 1, v_handlerDispatched_4594_);
v___x_4608_ = lean_box(v___x_4575_);
lean_inc_ref(v___f_4576_);
lean_inc_ref(v___x_4607_);
lean_inc_ref(v_connectionContext_4574_);
lean_inc_ref(v_config_4573_);
lean_inc(v_handler_4572_);
lean_inc_ref(v_responseBodyInstance_4571_);
lean_inc_ref(v_h_4570_);
v___f_4609_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed), 11, 9);
lean_closure_set(v___f_4609_, 0, v_h_4570_);
lean_closure_set(v___f_4609_, 1, v_responseBodyInstance_4571_);
lean_closure_set(v___f_4609_, 2, v_handler_4572_);
lean_closure_set(v___f_4609_, 3, v_config_4573_);
lean_closure_set(v___f_4609_, 4, v_connectionContext_4574_);
lean_closure_set(v___f_4609_, 5, v_events_4604_);
lean_closure_set(v___f_4609_, 6, v___x_4607_);
lean_closure_set(v___f_4609_, 7, v___x_4608_);
lean_closure_set(v___f_4609_, 8, v___f_4576_);
v___x_4610_ = lean_unsigned_to_nat(0u);
v___x_4611_ = lean_nat_dec_lt(v___x_4610_, v_size_4606_);
lean_dec(v_size_4606_);
if (v___x_4611_ == 0)
{
lean_object* v___x_4612_; lean_object* v___x_4613_; 
lean_dec_ref(v___f_4609_);
lean_dec_ref(v_data_4605_);
lean_dec_ref(v___f_4580_);
lean_dec_ref(v___f_4579_);
lean_dec(v_socket_4578_);
lean_dec_ref(v_inst_4577_);
v___x_4612_ = lean_box(0);
v___x_4613_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4570_, v_responseBodyInstance_4571_, v_handler_4572_, v_config_4573_, v_connectionContext_4574_, v_events_4604_, v___x_4607_, v___x_4575_, v___f_4576_, v___x_4612_);
return v___x_4613_;
}
else
{
lean_object* v_sendAll_4614_; lean_object* v___f_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
lean_dec_ref(v_events_4604_);
lean_dec_ref(v___f_4576_);
lean_dec_ref(v_connectionContext_4574_);
lean_dec_ref(v_config_4573_);
lean_dec(v_handler_4572_);
lean_dec_ref(v_responseBodyInstance_4571_);
lean_dec_ref(v_h_4570_);
v_sendAll_4614_ = lean_ctor_get(v_inst_4577_, 1);
lean_inc_ref(v_sendAll_4614_);
lean_dec_ref(v_inst_4577_);
v___f_4615_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 4, 2);
lean_closure_set(v___f_4615_, 0, v___x_4607_);
lean_closure_set(v___f_4615_, 1, v___f_4609_);
v___x_4616_ = lean_apply_3(v_sendAll_4614_, v_socket_4578_, v_data_4605_, lean_box(0));
v___x_4617_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4610_, v___x_4575_, v___x_4616_, v___f_4579_);
v___x_4618_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4610_, v___x_4575_, v___x_4617_, v___f_4580_);
v___x_4619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4610_, v___x_4575_, v___x_4618_, v___f_4615_);
return v___x_4619_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object* v_h_4628_, lean_object* v_responseBodyInstance_4629_, lean_object* v_handler_4630_, lean_object* v_config_4631_, lean_object* v_connectionContext_4632_, lean_object* v___x_4633_, lean_object* v___f_4634_, lean_object* v_inst_4635_, lean_object* v_socket_4636_, lean_object* v___f_4637_, lean_object* v___f_4638_, lean_object* v_x_4639_, lean_object* v_____s_4640_, lean_object* v___y_4641_){
_start:
{
uint8_t v___x_5466__boxed_4642_; lean_object* v_res_4643_; 
v___x_5466__boxed_4642_ = lean_unbox(v___x_4633_);
v_res_4643_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(v_h_4628_, v_responseBodyInstance_4629_, v_handler_4630_, v_config_4631_, v_connectionContext_4632_, v___x_5466__boxed_4642_, v___f_4634_, v_inst_4635_, v_socket_4636_, v___f_4637_, v___f_4638_, v_x_4639_, v_____s_4640_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object* v_a_4644_, lean_object* v_x_4645_){
_start:
{
if (lean_obj_tag(v_x_4645_) == 0)
{
lean_object* v_a_4647_; lean_object* v___x_4649_; uint8_t v_isShared_4650_; uint8_t v_isSharedCheck_4655_; 
v_a_4647_ = lean_ctor_get(v_x_4645_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v_x_4645_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4649_ = v_x_4645_;
v_isShared_4650_ = v_isSharedCheck_4655_;
goto v_resetjp_4648_;
}
else
{
lean_inc(v_a_4647_);
lean_dec(v_x_4645_);
v___x_4649_ = lean_box(0);
v_isShared_4650_ = v_isSharedCheck_4655_;
goto v_resetjp_4648_;
}
v_resetjp_4648_:
{
lean_object* v___x_4652_; 
if (v_isShared_4650_ == 0)
{
v___x_4652_ = v___x_4649_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_a_4647_);
v___x_4652_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
lean_object* v___x_4653_; 
v___x_4653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4652_);
return v___x_4653_;
}
}
}
else
{
lean_object* v___x_4656_; lean_object* v___x_4657_; 
lean_dec_ref_known(v_x_4645_, 1);
v___x_4656_ = l_IO_Promise_result_x21___redArg(v_a_4644_);
v___x_4657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4657_, 0, v___x_4656_);
return v___x_4657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object* v_a_4658_, lean_object* v_x_4659_, lean_object* v___y_4660_){
_start:
{
lean_object* v_res_4661_; 
v_res_4661_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(v_a_4658_, v_x_4659_);
lean_dec(v_a_4658_);
return v_res_4661_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object* v___f_4662_, lean_object* v___x_4663_, lean_object* v___x_4664_, uint8_t v___x_4665_, lean_object* v_x_4666_){
_start:
{
if (lean_obj_tag(v_x_4666_) == 0)
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4676_; 
lean_dec_ref(v___x_4664_);
lean_dec(v___x_4663_);
lean_dec_ref(v___f_4662_);
v_a_4668_ = lean_ctor_get(v_x_4666_, 0);
v_isSharedCheck_4676_ = !lean_is_exclusive(v_x_4666_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4670_ = v_x_4666_;
v_isShared_4671_ = v_isSharedCheck_4676_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v_x_4666_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4676_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4675_; 
v_reuseFailAlloc_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4675_, 0, v_a_4668_);
v___x_4673_ = v_reuseFailAlloc_4675_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
lean_object* v___x_4674_; 
v___x_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4674_, 0, v___x_4673_);
return v___x_4674_;
}
}
}
else
{
lean_object* v_a_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4688_; 
v_a_4677_ = lean_ctor_get(v_x_4666_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v_x_4666_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4679_ = v_x_4666_;
v_isShared_4680_ = v_isSharedCheck_4688_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_a_4677_);
lean_dec(v_x_4666_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4688_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v___f_4681_; lean_object* v___x_4682_; lean_object* v___x_4684_; 
lean_inc(v_a_4677_);
v___f_4681_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_4681_, 0, v_a_4677_);
lean_inc(v___x_4663_);
v___x_4682_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_4662_, v___x_4663_, v_a_4677_, v___x_4664_);
if (v_isShared_4680_ == 0)
{
lean_ctor_set(v___x_4679_, 0, v___x_4682_);
v___x_4684_ = v___x_4679_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4682_);
v___x_4684_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4684_);
v___x_4686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4663_, v___x_4665_, v___x_4685_, v___f_4681_);
return v___x_4686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object* v___f_4689_, lean_object* v___x_4690_, lean_object* v___x_4691_, lean_object* v___x_4692_, lean_object* v_x_4693_, lean_object* v___y_4694_){
_start:
{
uint8_t v___x_5569__boxed_4695_; lean_object* v_res_4696_; 
v___x_5569__boxed_4695_ = lean_unbox(v___x_4692_);
v_res_4696_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(v___f_4689_, v___x_4690_, v___x_4691_, v___x_5569__boxed_4695_, v_x_4693_);
return v_res_4696_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object* v_config_4697_, lean_object* v_h_4698_, lean_object* v_responseBodyInstance_4699_, lean_object* v_handler_4700_, lean_object* v___f_4701_, lean_object* v_inst_4702_, lean_object* v_socket_4703_, lean_object* v_connectionContext_4704_, lean_object* v_extensions_4705_, lean_object* v___f_4706_, lean_object* v___f_4707_, lean_object* v_machine_4708_, lean_object* v_a_4709_, lean_object* v___x_4710_, lean_object* v___f_4711_, lean_object* v_x_4712_){
_start:
{
if (lean_obj_tag(v_x_4712_) == 0)
{
lean_object* v_a_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4722_; 
lean_dec_ref(v___f_4711_);
lean_dec(v___x_4710_);
lean_dec_ref(v_a_4709_);
lean_dec_ref(v_machine_4708_);
lean_dec_ref(v___f_4707_);
lean_dec_ref(v___f_4706_);
lean_dec(v_extensions_4705_);
lean_dec_ref(v_connectionContext_4704_);
lean_dec(v_socket_4703_);
lean_dec_ref(v_inst_4702_);
lean_dec_ref(v___f_4701_);
lean_dec(v_handler_4700_);
lean_dec_ref(v_responseBodyInstance_4699_);
lean_dec_ref(v_h_4698_);
lean_dec_ref(v_config_4697_);
v_a_4714_ = lean_ctor_get(v_x_4712_, 0);
v_isSharedCheck_4722_ = !lean_is_exclusive(v_x_4712_);
if (v_isSharedCheck_4722_ == 0)
{
v___x_4716_ = v_x_4712_;
v_isShared_4717_ = v_isSharedCheck_4722_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_a_4714_);
lean_dec(v_x_4712_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4722_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4719_; 
if (v_isShared_4717_ == 0)
{
v___x_4719_ = v___x_4716_;
goto v_reusejp_4718_;
}
else
{
lean_object* v_reuseFailAlloc_4721_; 
v_reuseFailAlloc_4721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4721_, 0, v_a_4714_);
v___x_4719_ = v_reuseFailAlloc_4721_;
goto v_reusejp_4718_;
}
v_reusejp_4718_:
{
lean_object* v___x_4720_; 
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4719_);
return v___x_4720_;
}
}
}
else
{
lean_object* v_a_4723_; lean_object* v___x_4725_; uint8_t v_isShared_4726_; uint8_t v_isSharedCheck_4748_; 
v_a_4723_ = lean_ctor_get(v_x_4712_, 0);
v_isSharedCheck_4748_ = !lean_is_exclusive(v_x_4712_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4725_ = v_x_4712_;
v_isShared_4726_ = v_isSharedCheck_4748_;
goto v_resetjp_4724_;
}
else
{
lean_inc(v_a_4723_);
lean_dec(v_x_4712_);
v___x_4725_ = lean_box(0);
v_isShared_4726_ = v_isSharedCheck_4748_;
goto v_resetjp_4724_;
}
v_resetjp_4724_:
{
lean_object* v_keepAliveTimeout_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; uint8_t v___x_4730_; lean_object* v___x_4731_; lean_object* v___f_4732_; lean_object* v___x_4733_; lean_object* v___f_4734_; lean_object* v___x_4735_; lean_object* v___f_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___f_4740_; lean_object* v___x_4741_; lean_object* v___x_4743_; 
v_keepAliveTimeout_4727_ = lean_ctor_get(v_config_4697_, 5);
lean_inc_n(v_keepAliveTimeout_4727_, 2);
v___x_4728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4728_, 0, v_keepAliveTimeout_4727_);
v___x_4729_ = lean_box(0);
v___x_4730_ = 0;
v___x_4731_ = lean_box(v___x_4730_);
lean_inc_ref_n(v_connectionContext_4704_, 2);
lean_inc(v_socket_4703_);
lean_inc_ref(v_inst_4702_);
lean_inc_ref(v_config_4697_);
lean_inc_n(v_handler_4700_, 2);
lean_inc_ref(v_responseBodyInstance_4699_);
lean_inc_ref_n(v_h_4698_, 2);
v___f_4732_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed), 11, 9);
lean_closure_set(v___f_4732_, 0, v___x_4731_);
lean_closure_set(v___f_4732_, 1, v_h_4698_);
lean_closure_set(v___f_4732_, 2, v_responseBodyInstance_4699_);
lean_closure_set(v___f_4732_, 3, v_handler_4700_);
lean_closure_set(v___f_4732_, 4, v_config_4697_);
lean_closure_set(v___f_4732_, 5, v___f_4701_);
lean_closure_set(v___f_4732_, 6, v_inst_4702_);
lean_closure_set(v___f_4732_, 7, v_socket_4703_);
lean_closure_set(v___f_4732_, 8, v_connectionContext_4704_);
v___x_4733_ = lean_box(v___x_4730_);
v___f_4734_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed), 8, 6);
lean_closure_set(v___f_4734_, 0, v_h_4698_);
lean_closure_set(v___f_4734_, 1, v_handler_4700_);
lean_closure_set(v___f_4734_, 2, v_extensions_4705_);
lean_closure_set(v___f_4734_, 3, v_connectionContext_4704_);
lean_closure_set(v___f_4734_, 4, v___x_4733_);
lean_closure_set(v___f_4734_, 5, v___f_4732_);
v___x_4735_ = lean_box(v___x_4730_);
v___f_4736_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 14, 11);
lean_closure_set(v___f_4736_, 0, v_h_4698_);
lean_closure_set(v___f_4736_, 1, v_responseBodyInstance_4699_);
lean_closure_set(v___f_4736_, 2, v_handler_4700_);
lean_closure_set(v___f_4736_, 3, v_config_4697_);
lean_closure_set(v___f_4736_, 4, v_connectionContext_4704_);
lean_closure_set(v___f_4736_, 5, v___x_4735_);
lean_closure_set(v___f_4736_, 6, v___f_4734_);
lean_closure_set(v___f_4736_, 7, v_inst_4702_);
lean_closure_set(v___f_4736_, 8, v_socket_4703_);
lean_closure_set(v___f_4736_, 9, v___f_4706_);
lean_closure_set(v___f_4736_, 10, v___f_4707_);
v___x_4737_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4737_, 0, v_machine_4708_);
lean_ctor_set(v___x_4737_, 1, v_a_4709_);
lean_ctor_set(v___x_4737_, 2, v___x_4728_);
lean_ctor_set(v___x_4737_, 3, v_keepAliveTimeout_4727_);
lean_ctor_set(v___x_4737_, 4, v___x_4729_);
lean_ctor_set(v___x_4737_, 5, v_a_4723_);
lean_ctor_set(v___x_4737_, 6, v___x_4729_);
lean_ctor_set(v___x_4737_, 7, v___x_4710_);
lean_ctor_set(v___x_4737_, 8, v___x_4729_);
lean_ctor_set_uint8(v___x_4737_, sizeof(void*)*9, v___x_4730_);
lean_ctor_set_uint8(v___x_4737_, sizeof(void*)*9 + 1, v___x_4730_);
v___x_4738_ = lean_unsigned_to_nat(0u);
v___x_4739_ = lean_box(v___x_4730_);
v___f_4740_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed), 6, 4);
lean_closure_set(v___f_4740_, 0, v___f_4736_);
lean_closure_set(v___f_4740_, 1, v___x_4738_);
lean_closure_set(v___f_4740_, 2, v___x_4737_);
lean_closure_set(v___f_4740_, 3, v___x_4739_);
v___x_4741_ = lean_io_promise_new();
if (v_isShared_4726_ == 0)
{
lean_ctor_set(v___x_4725_, 0, v___x_4741_);
v___x_4743_ = v___x_4725_;
goto v_reusejp_4742_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v___x_4741_);
v___x_4743_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4742_;
}
v_reusejp_4742_:
{
lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
v___x_4744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4743_);
v___x_4745_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4738_, v___x_4730_, v___x_4744_, v___f_4740_);
v___x_4746_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4738_, v___x_4730_, v___x_4745_, v___f_4711_);
return v___x_4746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_config_4749_ = _args[0];
lean_object* v_h_4750_ = _args[1];
lean_object* v_responseBodyInstance_4751_ = _args[2];
lean_object* v_handler_4752_ = _args[3];
lean_object* v___f_4753_ = _args[4];
lean_object* v_inst_4754_ = _args[5];
lean_object* v_socket_4755_ = _args[6];
lean_object* v_connectionContext_4756_ = _args[7];
lean_object* v_extensions_4757_ = _args[8];
lean_object* v___f_4758_ = _args[9];
lean_object* v___f_4759_ = _args[10];
lean_object* v_machine_4760_ = _args[11];
lean_object* v_a_4761_ = _args[12];
lean_object* v___x_4762_ = _args[13];
lean_object* v___f_4763_ = _args[14];
lean_object* v_x_4764_ = _args[15];
lean_object* v___y_4765_ = _args[16];
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(v_config_4749_, v_h_4750_, v_responseBodyInstance_4751_, v_handler_4752_, v___f_4753_, v_inst_4754_, v_socket_4755_, v_connectionContext_4756_, v_extensions_4757_, v___f_4758_, v___f_4759_, v_machine_4760_, v_a_4761_, v___x_4762_, v___f_4763_, v_x_4764_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object* v_config_4767_, lean_object* v_h_4768_, lean_object* v_responseBodyInstance_4769_, lean_object* v_handler_4770_, lean_object* v___f_4771_, lean_object* v_inst_4772_, lean_object* v_socket_4773_, lean_object* v_connectionContext_4774_, lean_object* v_extensions_4775_, lean_object* v___f_4776_, lean_object* v___f_4777_, lean_object* v_machine_4778_, lean_object* v___f_4779_, lean_object* v_x_4780_){
_start:
{
if (lean_obj_tag(v_x_4780_) == 0)
{
lean_object* v_a_4782_; lean_object* v___x_4784_; uint8_t v_isShared_4785_; uint8_t v_isSharedCheck_4790_; 
lean_dec_ref(v___f_4779_);
lean_dec_ref(v_machine_4778_);
lean_dec_ref(v___f_4777_);
lean_dec_ref(v___f_4776_);
lean_dec(v_extensions_4775_);
lean_dec_ref(v_connectionContext_4774_);
lean_dec(v_socket_4773_);
lean_dec_ref(v_inst_4772_);
lean_dec_ref(v___f_4771_);
lean_dec(v_handler_4770_);
lean_dec_ref(v_responseBodyInstance_4769_);
lean_dec_ref(v_h_4768_);
lean_dec_ref(v_config_4767_);
v_a_4782_ = lean_ctor_get(v_x_4780_, 0);
v_isSharedCheck_4790_ = !lean_is_exclusive(v_x_4780_);
if (v_isSharedCheck_4790_ == 0)
{
v___x_4784_ = v_x_4780_;
v_isShared_4785_ = v_isSharedCheck_4790_;
goto v_resetjp_4783_;
}
else
{
lean_inc(v_a_4782_);
lean_dec(v_x_4780_);
v___x_4784_ = lean_box(0);
v_isShared_4785_ = v_isSharedCheck_4790_;
goto v_resetjp_4783_;
}
v_resetjp_4783_:
{
lean_object* v___x_4787_; 
if (v_isShared_4785_ == 0)
{
v___x_4787_ = v___x_4784_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4789_; 
v_reuseFailAlloc_4789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4789_, 0, v_a_4782_);
v___x_4787_ = v_reuseFailAlloc_4789_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
lean_object* v___x_4788_; 
v___x_4788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
return v___x_4788_;
}
}
}
else
{
lean_object* v_a_4791_; lean_object* v___x_4793_; uint8_t v_isShared_4794_; uint8_t v_isSharedCheck_4805_; 
v_a_4791_ = lean_ctor_get(v_x_4780_, 0);
v_isSharedCheck_4805_ = !lean_is_exclusive(v_x_4780_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4793_ = v_x_4780_;
v_isShared_4794_ = v_isSharedCheck_4805_;
goto v_resetjp_4792_;
}
else
{
lean_inc(v_a_4791_);
lean_dec(v_x_4780_);
v___x_4793_ = lean_box(0);
v_isShared_4794_ = v_isSharedCheck_4805_;
goto v_resetjp_4792_;
}
v_resetjp_4792_:
{
lean_object* v___x_4795_; lean_object* v___f_4796_; lean_object* v___x_4797_; uint8_t v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4801_; 
v___x_4795_ = lean_box(0);
v___f_4796_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed), 17, 15);
lean_closure_set(v___f_4796_, 0, v_config_4767_);
lean_closure_set(v___f_4796_, 1, v_h_4768_);
lean_closure_set(v___f_4796_, 2, v_responseBodyInstance_4769_);
lean_closure_set(v___f_4796_, 3, v_handler_4770_);
lean_closure_set(v___f_4796_, 4, v___f_4771_);
lean_closure_set(v___f_4796_, 5, v_inst_4772_);
lean_closure_set(v___f_4796_, 6, v_socket_4773_);
lean_closure_set(v___f_4796_, 7, v_connectionContext_4774_);
lean_closure_set(v___f_4796_, 8, v_extensions_4775_);
lean_closure_set(v___f_4796_, 9, v___f_4776_);
lean_closure_set(v___f_4796_, 10, v___f_4777_);
lean_closure_set(v___f_4796_, 11, v_machine_4778_);
lean_closure_set(v___f_4796_, 12, v_a_4791_);
lean_closure_set(v___f_4796_, 13, v___x_4795_);
lean_closure_set(v___f_4796_, 14, v___f_4779_);
v___x_4797_ = lean_unsigned_to_nat(0u);
v___x_4798_ = 0;
v___x_4799_ = l_Std_CloseableChannel_new___redArg(v___x_4795_);
if (v_isShared_4794_ == 0)
{
lean_ctor_set(v___x_4793_, 0, v___x_4799_);
v___x_4801_ = v___x_4793_;
goto v_reusejp_4800_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v___x_4799_);
v___x_4801_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4800_;
}
v_reusejp_4800_:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4801_);
v___x_4803_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4797_, v___x_4798_, v___x_4802_, v___f_4796_);
return v___x_4803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object* v_config_4806_, lean_object* v_h_4807_, lean_object* v_responseBodyInstance_4808_, lean_object* v_handler_4809_, lean_object* v___f_4810_, lean_object* v_inst_4811_, lean_object* v_socket_4812_, lean_object* v_connectionContext_4813_, lean_object* v_extensions_4814_, lean_object* v___f_4815_, lean_object* v___f_4816_, lean_object* v_machine_4817_, lean_object* v___f_4818_, lean_object* v_x_4819_, lean_object* v___y_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(v_config_4806_, v_h_4807_, v_responseBodyInstance_4808_, v_handler_4809_, v___f_4810_, v_inst_4811_, v_socket_4812_, v_connectionContext_4813_, v_extensions_4814_, v___f_4815_, v___f_4816_, v_machine_4817_, v___f_4818_, v_x_4819_);
return v_res_4821_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object* v_inst_4825_, lean_object* v_h_4826_, lean_object* v_connection_4827_, lean_object* v_config_4828_, lean_object* v_connectionContext_4829_, lean_object* v_handler_4830_){
_start:
{
lean_object* v_responseBodyInstance_4832_; lean_object* v_onFailure_4833_; lean_object* v_socket_4834_; lean_object* v_machine_4835_; lean_object* v_extensions_4836_; lean_object* v___f_4837_; lean_object* v___f_4838_; lean_object* v___f_4839_; lean_object* v___f_4840_; lean_object* v___f_4841_; lean_object* v___f_4842_; lean_object* v___f_4843_; lean_object* v___f_4844_; lean_object* v___f_4845_; lean_object* v___x_4846_; uint8_t v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v_responseBodyInstance_4832_ = lean_ctor_get(v_h_4826_, 0);
lean_inc_ref_n(v_responseBodyInstance_4832_, 2);
v_onFailure_4833_ = lean_ctor_get(v_h_4826_, 2);
v_socket_4834_ = lean_ctor_get(v_connection_4827_, 0);
lean_inc_n(v_socket_4834_, 2);
v_machine_4835_ = lean_ctor_get(v_connection_4827_, 1);
lean_inc_ref(v_machine_4835_);
v_extensions_4836_ = lean_ctor_get(v_connection_4827_, 2);
lean_inc(v_extensions_4836_);
lean_dec_ref(v_connection_4827_);
v___f_4837_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_4838_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0));
v___f_4839_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1));
lean_inc(v_handler_4830_);
lean_inc_ref(v_onFailure_4833_);
v___f_4840_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4840_, 0, v_onFailure_4833_);
lean_closure_set(v___f_4840_, 1, v_handler_4830_);
lean_closure_set(v___f_4840_, 2, v___f_4839_);
v___f_4841_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2));
lean_inc_ref(v_inst_4825_);
v___f_4842_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4842_, 0, v_inst_4825_);
lean_closure_set(v___f_4842_, 1, v_socket_4834_);
lean_inc_ref(v___f_4842_);
v___f_4843_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4843_, 0, v___f_4842_);
v___f_4844_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4844_, 0, v_responseBodyInstance_4832_);
lean_closure_set(v___f_4844_, 1, v___f_4843_);
lean_closure_set(v___f_4844_, 2, v___f_4842_);
lean_closure_set(v___f_4844_, 3, v___f_4837_);
v___f_4845_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed), 15, 13);
lean_closure_set(v___f_4845_, 0, v_config_4828_);
lean_closure_set(v___f_4845_, 1, v_h_4826_);
lean_closure_set(v___f_4845_, 2, v_responseBodyInstance_4832_);
lean_closure_set(v___f_4845_, 3, v_handler_4830_);
lean_closure_set(v___f_4845_, 4, v___f_4841_);
lean_closure_set(v___f_4845_, 5, v_inst_4825_);
lean_closure_set(v___f_4845_, 6, v_socket_4834_);
lean_closure_set(v___f_4845_, 7, v_connectionContext_4829_);
lean_closure_set(v___f_4845_, 8, v_extensions_4836_);
lean_closure_set(v___f_4845_, 9, v___f_4838_);
lean_closure_set(v___f_4845_, 10, v___f_4840_);
lean_closure_set(v___f_4845_, 11, v_machine_4835_);
lean_closure_set(v___f_4845_, 12, v___f_4844_);
v___x_4846_ = lean_unsigned_to_nat(0u);
v___x_4847_ = 0;
v___x_4848_ = l_Std_Http_Body_mkStream();
v___x_4849_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4846_, v___x_4847_, v___x_4848_, v___f_4845_);
return v___x_4849_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object* v_inst_4850_, lean_object* v_h_4851_, lean_object* v_connection_4852_, lean_object* v_config_4853_, lean_object* v_connectionContext_4854_, lean_object* v_handler_4855_, lean_object* v_a_4856_){
_start:
{
lean_object* v_res_4857_; 
v_res_4857_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4850_, v_h_4851_, v_connection_4852_, v_config_4853_, v_connectionContext_4854_, v_handler_4855_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object* v_00_u03b1_4858_, lean_object* v_00_u03c3_4859_, lean_object* v_inst_4860_, lean_object* v_h_4861_, lean_object* v_connection_4862_, lean_object* v_config_4863_, lean_object* v_connectionContext_4864_, lean_object* v_handler_4865_){
_start:
{
lean_object* v___x_4867_; 
v___x_4867_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4860_, v_h_4861_, v_connection_4862_, v_config_4863_, v_connectionContext_4864_, v_handler_4865_);
return v___x_4867_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object* v_00_u03b1_4868_, lean_object* v_00_u03c3_4869_, lean_object* v_inst_4870_, lean_object* v_h_4871_, lean_object* v_connection_4872_, lean_object* v_config_4873_, lean_object* v_connectionContext_4874_, lean_object* v_handler_4875_, lean_object* v_a_4876_){
_start:
{
lean_object* v_res_4877_; 
v_res_4877_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(v_00_u03b1_4868_, v_00_u03c3_4869_, v_inst_4870_, v_h_4871_, v_connection_4872_, v_config_4873_, v_connectionContext_4874_, v_handler_4875_);
return v_res_4877_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_4878_; lean_object* v___x_4879_; 
v___x_4878_ = 0;
v___x_4879_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4878_);
return v___x_4879_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; 
v___x_4880_ = lean_unsigned_to_nat(4096u);
v___x_4881_ = lean_mk_empty_byte_array(v___x_4880_);
return v___x_4881_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___x_4882_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1);
v___x_4883_ = l_ByteArray_mkIterator(v___x_4882_);
return v___x_4883_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3(void){
_start:
{
uint8_t v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4884_ = 0;
v___x_4885_ = lean_unsigned_to_nat(0u);
v___x_4886_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0);
v___x_4887_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2);
v___x_4888_ = lean_box(0);
v___x_4889_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_4889_, 0, v___x_4888_);
lean_ctor_set(v___x_4889_, 1, v___x_4887_);
lean_ctor_set(v___x_4889_, 2, v___x_4886_);
lean_ctor_set(v___x_4889_, 3, v___x_4885_);
lean_ctor_set(v___x_4889_, 4, v___x_4885_);
lean_ctor_set(v___x_4889_, 5, v___x_4885_);
lean_ctor_set_uint8(v___x_4889_, sizeof(void*)*6, v___x_4884_);
return v___x_4889_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7(void){
_start:
{
uint8_t v___x_4897_; lean_object* v___x_4898_; 
v___x_4897_ = 1;
v___x_4898_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4897_);
return v___x_4898_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_4899_; uint8_t v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; 
v___x_4899_ = lean_unsigned_to_nat(0u);
v___x_4900_ = 0;
v___x_4901_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7);
v___x_4902_ = lean_box(0);
v___x_4903_ = lean_box(0);
v___x_4904_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6));
v___x_4905_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4));
v___x_4906_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4906_, 0, v___x_4905_);
lean_ctor_set(v___x_4906_, 1, v___x_4904_);
lean_ctor_set(v___x_4906_, 2, v___x_4903_);
lean_ctor_set(v___x_4906_, 3, v___x_4902_);
lean_ctor_set(v___x_4906_, 4, v___x_4901_);
lean_ctor_set(v___x_4906_, 5, v___x_4899_);
lean_ctor_set_uint8(v___x_4906_, sizeof(void*)*6, v___x_4900_);
lean_ctor_set_uint8(v___x_4906_, sizeof(void*)*6 + 1, v___x_4900_);
lean_ctor_set_uint8(v___x_4906_, sizeof(void*)*6 + 2, v___x_4900_);
return v___x_4906_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object* v_config_4907_, lean_object* v_client_4908_, lean_object* v_extensions_4909_, lean_object* v_inst_4910_, lean_object* v_inst_4911_, lean_object* v_handler_4912_, lean_object* v_x_4913_){
_start:
{
if (lean_obj_tag(v_x_4913_) == 0)
{
lean_object* v_a_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4923_; 
lean_dec(v_handler_4912_);
lean_dec_ref(v_inst_4911_);
lean_dec_ref(v_inst_4910_);
lean_dec(v_extensions_4909_);
lean_dec(v_client_4908_);
lean_dec_ref(v_config_4907_);
v_a_4915_ = lean_ctor_get(v_x_4913_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v_x_4913_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4917_ = v_x_4913_;
v_isShared_4918_ = v_isSharedCheck_4923_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_a_4915_);
lean_dec(v_x_4913_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4923_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4920_; 
if (v_isShared_4918_ == 0)
{
v___x_4920_ = v___x_4917_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4915_);
v___x_4920_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
lean_object* v___x_4921_; 
v___x_4921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4921_, 0, v___x_4920_);
return v___x_4921_;
}
}
}
else
{
lean_object* v_a_4924_; uint8_t v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; uint8_t v_enableKeepAlive_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; 
v_a_4924_ = lean_ctor_get(v_x_4913_, 0);
lean_inc(v_a_4924_);
lean_dec_ref_known(v_x_4913_, 1);
v___x_4925_ = 0;
v___x_4926_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3);
v___x_4927_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5));
v___x_4928_ = lean_box(0);
v___x_4929_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8);
v___x_4930_ = l_Std_Http_Config_toH1Config(v_config_4907_);
v_enableKeepAlive_4931_ = lean_ctor_get_uint8(v___x_4930_, sizeof(void*)*18);
v___x_4932_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4932_, 0, v___x_4926_);
lean_ctor_set(v___x_4932_, 1, v___x_4929_);
lean_ctor_set(v___x_4932_, 2, v___x_4930_);
lean_ctor_set(v___x_4932_, 3, v___x_4927_);
lean_ctor_set(v___x_4932_, 4, v___x_4928_);
lean_ctor_set(v___x_4932_, 5, v___x_4928_);
lean_ctor_set_uint8(v___x_4932_, sizeof(void*)*6, v_enableKeepAlive_4931_);
lean_ctor_set_uint8(v___x_4932_, sizeof(void*)*6 + 1, v___x_4925_);
lean_ctor_set_uint8(v___x_4932_, sizeof(void*)*6 + 2, v___x_4925_);
v___x_4933_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4933_, 0, v_client_4908_);
lean_ctor_set(v___x_4933_, 1, v___x_4932_);
lean_ctor_set(v___x_4933_, 2, v_extensions_4909_);
v___x_4934_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4910_, v_inst_4911_, v___x_4933_, v_config_4907_, v_a_4924_, v_handler_4912_);
return v___x_4934_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object* v_config_4935_, lean_object* v_client_4936_, lean_object* v_extensions_4937_, lean_object* v_inst_4938_, lean_object* v_inst_4939_, lean_object* v_handler_4940_, lean_object* v_x_4941_, lean_object* v___y_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = l_Std_Http_Server_serveConnection___redArg___lam__0(v_config_4935_, v_client_4936_, v_extensions_4937_, v_inst_4938_, v_inst_4939_, v_handler_4940_, v_x_4941_);
return v_res_4943_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object* v_inst_4944_, lean_object* v_inst_4945_, lean_object* v_client_4946_, lean_object* v_handler_4947_, lean_object* v_config_4948_, lean_object* v_extensions_4949_, lean_object* v_a_4950_){
_start:
{
lean_object* v___f_4952_; lean_object* v___x_4953_; uint8_t v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; 
v___f_4952_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_4952_, 0, v_config_4948_);
lean_closure_set(v___f_4952_, 1, v_client_4946_);
lean_closure_set(v___f_4952_, 2, v_extensions_4949_);
lean_closure_set(v___f_4952_, 3, v_inst_4944_);
lean_closure_set(v___f_4952_, 4, v_inst_4945_);
lean_closure_set(v___f_4952_, 5, v_handler_4947_);
v___x_4953_ = lean_unsigned_to_nat(0u);
v___x_4954_ = 0;
lean_inc_ref(v_a_4950_);
v___x_4955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4955_, 0, v_a_4950_);
v___x_4956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4956_, 0, v___x_4955_);
v___x_4957_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4953_, v___x_4954_, v___x_4956_, v___f_4952_);
return v___x_4957_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object* v_inst_4958_, lean_object* v_inst_4959_, lean_object* v_client_4960_, lean_object* v_handler_4961_, lean_object* v_config_4962_, lean_object* v_extensions_4963_, lean_object* v_a_4964_, lean_object* v_a_4965_){
_start:
{
lean_object* v_res_4966_; 
v_res_4966_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4958_, v_inst_4959_, v_client_4960_, v_handler_4961_, v_config_4962_, v_extensions_4963_, v_a_4964_);
lean_dec_ref(v_a_4964_);
return v_res_4966_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object* v_t_4967_, lean_object* v_00_u03c3_4968_, lean_object* v_inst_4969_, lean_object* v_inst_4970_, lean_object* v_client_4971_, lean_object* v_handler_4972_, lean_object* v_config_4973_, lean_object* v_extensions_4974_, lean_object* v_a_4975_){
_start:
{
lean_object* v___x_4977_; 
v___x_4977_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4969_, v_inst_4970_, v_client_4971_, v_handler_4972_, v_config_4973_, v_extensions_4974_, v_a_4975_);
return v___x_4977_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object* v_t_4978_, lean_object* v_00_u03c3_4979_, lean_object* v_inst_4980_, lean_object* v_inst_4981_, lean_object* v_client_4982_, lean_object* v_handler_4983_, lean_object* v_config_4984_, lean_object* v_extensions_4985_, lean_object* v_a_4986_, lean_object* v_a_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l_Std_Http_Server_serveConnection(v_t_4978_, v_00_u03c3_4979_, v_inst_4980_, v_inst_4981_, v_client_4982_, v_handler_4983_, v_config_4984_, v_extensions_4985_, v_a_4986_);
lean_dec_ref(v_a_4986_);
return v_res_4988_;
}
}
lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Protocol_H1(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Handler(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Async_TCP(uint8_t builtin);
lean_object* initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* initialize_Std_Http_Transport(uint8_t builtin);
lean_object* initialize_Std_Http_Protocol_H1(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Handler(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Server_Connection(builtin);
}
#ifdef __cplusplus
}
#endif
