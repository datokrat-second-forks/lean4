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
lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize(uint8_t, lean_object*, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders(uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head(uint8_t);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Internal_IndexMultiMap_empty___redArg();
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_headers(uint8_t, lean_object*);
extern lean_object* l_Std_Http_Header_Name_contentLength;
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint16_t l_Std_Http_Status_toCode(lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
uint8_t l_Std_Http_Protocol_H1_Writer_instBEqState_beq(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_date;
lean_object* l_Std_Time_DateTime_toRFC822String(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Database_defaultGetZoneRules(lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
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
lean_object* l_Std_Async_EAsync_toBaseAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_instInhabitedError;
lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_ContextAsync_runIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_discard(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Channel_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Http_Config_toH1Config(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__1_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__3_value;
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
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t);
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
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___redArg(lean_object* v_x_40_){
_start:
{
switch(lean_obj_tag(v_x_40_))
{
case 0:
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(0u);
return v___x_41_;
}
case 1:
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(1u);
return v___x_42_;
}
case 2:
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(2u);
return v___x_43_;
}
case 3:
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(3u);
return v___x_44_;
}
case 4:
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(4u);
return v___x_45_;
}
case 5:
{
lean_object* v___x_46_; 
v___x_46_ = lean_unsigned_to_nat(5u);
return v___x_46_;
}
default: 
{
lean_object* v___x_47_; 
v___x_47_ = lean_unsigned_to_nat(6u);
return v___x_47_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___redArg___boxed(lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___redArg(v_x_48_);
lean_dec(v_x_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx(lean_object* v_00_u03b2_50_, lean_object* v_x_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___redArg(v_x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___boxed(lean_object* v_00_u03b2_53_, lean_object* v_x_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx(v_00_u03b2_53_, v_x_54_);
lean_dec(v_x_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object* v_t_56_, lean_object* v_k_57_){
_start:
{
switch(lean_obj_tag(v_t_56_))
{
case 0:
{
lean_object* v_x_58_; lean_object* v___x_59_; 
v_x_58_ = lean_ctor_get(v_t_56_, 0);
lean_inc(v_x_58_);
lean_dec_ref_known(v_t_56_, 1);
v___x_59_ = lean_apply_1(v_k_57_, v_x_58_);
return v___x_59_;
}
case 1:
{
lean_object* v_x_60_; lean_object* v___x_61_; 
v_x_60_ = lean_ctor_get(v_t_56_, 0);
lean_inc(v_x_60_);
lean_dec_ref_known(v_t_56_, 1);
v___x_61_ = lean_apply_1(v_k_57_, v_x_60_);
return v___x_61_;
}
case 2:
{
uint8_t v_x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_x_62_ = lean_ctor_get_uint8(v_t_56_, 0);
lean_dec_ref_known(v_t_56_, 0);
v___x_63_ = lean_box(v_x_62_);
v___x_64_ = lean_apply_1(v_k_57_, v___x_63_);
return v___x_64_;
}
case 3:
{
lean_object* v_x_65_; lean_object* v___x_66_; 
v_x_65_ = lean_ctor_get(v_t_56_, 0);
lean_inc_ref(v_x_65_);
lean_dec_ref_known(v_t_56_, 1);
v___x_66_ = lean_apply_1(v_k_57_, v_x_65_);
return v___x_66_;
}
default: 
{
lean_dec(v_t_56_);
return v_k_57_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object* v_00_u03b2_67_, lean_object* v_motive_68_, lean_object* v_ctorIdx_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_k_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_70_, v_k_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object* v_00_u03b2_74_, lean_object* v_motive_75_, lean_object* v_ctorIdx_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_k_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(v_00_u03b2_74_, v_motive_75_, v_ctorIdx_76_, v_t_77_, v_h_78_, v_k_79_);
lean_dec(v_ctorIdx_76_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object* v_t_81_, lean_object* v_bytes_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_81_, v_bytes_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object* v_00_u03b2_84_, lean_object* v_motive_85_, lean_object* v_t_86_, lean_object* v_h_87_, lean_object* v_bytes_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_86_, v_bytes_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object* v_t_90_, lean_object* v_responseBody_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_90_, v_responseBody_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object* v_00_u03b2_93_, lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_responseBody_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_95_, v_responseBody_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object* v_t_99_, lean_object* v_bodyInterest_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_99_, v_bodyInterest_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object* v_00_u03b2_102_, lean_object* v_motive_103_, lean_object* v_t_104_, lean_object* v_h_105_, lean_object* v_bodyInterest_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_104_, v_bodyInterest_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object* v_t_108_, lean_object* v_response_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_108_, v_response_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object* v_00_u03b2_111_, lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_response_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_113_, v_response_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object* v_t_117_, lean_object* v_timeout_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_117_, v_timeout_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object* v_00_u03b2_120_, lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_timeout_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_122_, v_timeout_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object* v_t_126_, lean_object* v_shutdown_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_126_, v_shutdown_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object* v_00_u03b2_129_, lean_object* v_motive_130_, lean_object* v_t_131_, lean_object* v_h_132_, lean_object* v_shutdown_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_131_, v_shutdown_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object* v_t_135_, lean_object* v_close_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_135_, v_close_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object* v_00_u03b2_138_, lean_object* v_motive_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_close_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_140_, v_close_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_152_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_164_; 
v_a_156_ = lean_ctor_get(v_x_152_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_152_);
if (v_isSharedCheck_164_ == 0)
{
v___x_158_ = v_x_152_;
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v_x_152_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_163_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
lean_object* v___x_162_; 
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
}
else
{
lean_object* v_a_165_; 
v_a_165_ = lean_ctor_get(v_x_152_, 0);
lean_inc(v_a_165_);
lean_dec_ref_known(v_x_152_, 1);
if (lean_obj_tag(v_a_165_) == 1)
{
lean_object* v_val_166_; 
v_val_166_ = lean_ctor_get(v_a_165_, 0);
lean_inc(v_val_166_);
lean_dec_ref_known(v_a_165_, 1);
if (lean_obj_tag(v_val_166_) == 0)
{
lean_object* v___x_167_; 
v___x_167_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_167_;
}
else
{
lean_dec(v_val_166_);
goto v___jp_154_;
}
}
else
{
lean_dec(v_a_165_);
goto v___jp_154_;
}
}
v___jp_154_:
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1));
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object* v_x_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(v_x_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_a_177_ = lean_ctor_get(v_x_175_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v_x_175_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v_x_175_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v_x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
}
else
{
lean_object* v___x_186_; 
lean_dec_ref_known(v_x_175_, 1);
v___x_186_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1));
return v___x_186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object* v_x_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(v_x_187_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object* v_inst_190_, lean_object* v_handler_191_, lean_object* v___f_192_, lean_object* v_x_193_){
_start:
{
if (lean_obj_tag(v_x_193_) == 0)
{
lean_object* v_a_195_; lean_object* v_onFailure_196_; lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_a_195_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v_x_193_, 1);
v_onFailure_196_ = lean_ctor_get(v_inst_190_, 2);
lean_inc_ref(v_onFailure_196_);
lean_dec_ref(v_inst_190_);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = 0;
v___x_199_ = lean_apply_3(v_onFailure_196_, v_handler_191_, v_a_195_, lean_box(0));
v___x_200_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_197_, v___x_198_, v___x_199_, v___f_192_);
return v___x_200_;
}
else
{
lean_object* v___x_201_; 
lean_dec_ref(v___f_192_);
lean_dec(v_handler_191_);
lean_dec_ref(v_inst_190_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v_x_193_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object* v_inst_202_, lean_object* v_handler_203_, lean_object* v___f_204_, lean_object* v_x_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(v_inst_202_, v_handler_203_, v___f_204_, v_x_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object* v_x_208_){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_210_, 0, v_x_208_);
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object* v_x_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(v_x_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t v_x_216_){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_218_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_218_, 0, v_x_216_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object* v_x_221_, lean_object* v___y_222_){
_start:
{
uint8_t v_x_3688__boxed_223_; lean_object* v_res_224_; 
v_x_3688__boxed_223_ = lean_unbox(v_x_221_);
v_res_224_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(v_x_3688__boxed_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object* v_x_225_){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v_x_225_);
v___x_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object* v_x_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(v_x_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object* v_x_233_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_235_, 0, v_x_233_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object* v_x_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(v_x_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object* v_x_241_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object* v_x_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(v_x_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object* v_x_247_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1));
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object* v_x_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(v_x_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object* v___f_253_, lean_object* v_response_254_, lean_object* v___x_255_, lean_object* v___f_256_, lean_object* v_requestBody_257_, lean_object* v___f_258_, lean_object* v_responseBody_259_, lean_object* v_inst_260_, lean_object* v___f_261_, lean_object* v_____r_262_, lean_object* v_selectables_263_){
_start:
{
lean_object* v_selectables_266_; lean_object* v_selectables_272_; lean_object* v_selectables_278_; 
if (lean_obj_tag(v_responseBody_259_) == 1)
{
lean_object* v_val_283_; lean_object* v_recvSelector_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_selectables_287_; 
v_val_283_ = lean_ctor_get(v_responseBody_259_, 0);
lean_inc(v_val_283_);
lean_dec_ref_known(v_responseBody_259_, 1);
v_recvSelector_284_ = lean_ctor_get(v_inst_260_, 3);
lean_inc_ref(v_recvSelector_284_);
lean_dec_ref(v_inst_260_);
v___x_285_ = lean_apply_1(v_recvSelector_284_, v_val_283_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___f_261_);
v_selectables_287_ = lean_array_push(v_selectables_263_, v___x_286_);
v_selectables_278_ = v_selectables_287_;
goto v___jp_277_;
}
else
{
lean_dec_ref(v___f_261_);
lean_dec_ref(v_inst_260_);
lean_dec(v_responseBody_259_);
v_selectables_278_ = v_selectables_263_;
goto v___jp_277_;
}
v___jp_265_:
{
lean_object* v___x_267_; uint8_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = 0;
v___x_269_ = l_Std_Async_Selectable_one___redArg(v_selectables_266_);
v___x_270_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_267_, v___x_268_, v___x_269_, v___f_253_);
return v___x_270_;
}
v___jp_271_:
{
if (lean_obj_tag(v_response_254_) == 1)
{
lean_object* v_val_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_selectables_276_; 
v_val_273_ = lean_ctor_get(v_response_254_, 0);
lean_inc(v_val_273_);
lean_dec_ref_known(v_response_254_, 1);
v___x_274_ = l_Std_Channel_recvSelector___redArg(v___x_255_, v_val_273_);
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___f_256_);
v_selectables_276_ = lean_array_push(v_selectables_272_, v___x_275_);
v_selectables_266_ = v_selectables_276_;
goto v___jp_265_;
}
else
{
lean_dec_ref(v___f_256_);
lean_dec_ref(v___x_255_);
lean_dec(v_response_254_);
v_selectables_266_ = v_selectables_272_;
goto v___jp_265_;
}
}
v___jp_277_:
{
if (lean_obj_tag(v_requestBody_257_) == 1)
{
lean_object* v_val_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_selectables_282_; 
v_val_279_ = lean_ctor_get(v_requestBody_257_, 0);
lean_inc(v_val_279_);
lean_dec_ref_known(v_requestBody_257_, 1);
v___x_280_ = l_Std_Http_Body_Stream_interestSelector(v_val_279_);
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v___f_258_);
v_selectables_282_ = lean_array_push(v_selectables_278_, v___x_281_);
v_selectables_272_ = v_selectables_282_;
goto v___jp_271_;
}
else
{
lean_dec_ref(v___f_258_);
lean_dec(v_requestBody_257_);
v_selectables_272_ = v_selectables_278_;
goto v___jp_271_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object* v___f_288_, lean_object* v_response_289_, lean_object* v___x_290_, lean_object* v___f_291_, lean_object* v_requestBody_292_, lean_object* v___f_293_, lean_object* v_responseBody_294_, lean_object* v_inst_295_, lean_object* v___f_296_, lean_object* v_____r_297_, lean_object* v_selectables_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_288_, v_response_289_, v___x_290_, v___f_291_, v_requestBody_292_, v___f_293_, v_responseBody_294_, v_inst_295_, v___f_296_, v_____r_297_, v_selectables_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object* v_token_301_, lean_object* v___f_302_, lean_object* v_x_303_){
_start:
{
lean_object* v___x_305_; uint8_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = 0;
v___x_307_ = l_Std_CancellationToken_getCancellationReason(v_token_301_);
v___x_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
v___x_310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_305_, v___x_306_, v___x_309_, v___f_302_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object* v_token_311_, lean_object* v___f_312_, lean_object* v_x_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(v_token_311_, v___f_312_, v_x_313_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object* v___f_316_, lean_object* v_selectables_317_, lean_object* v___f_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_329_; 
lean_dec_ref(v___f_318_);
lean_dec_ref(v_selectables_317_);
lean_dec_ref(v___f_316_);
v_a_321_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_329_ == 0)
{
v___x_323_ = v_x_319_;
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v_x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_328_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
lean_object* v___x_327_; 
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
return v___x_327_;
}
}
}
else
{
lean_object* v_a_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_a_330_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v_x_319_, 1);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_a_330_);
lean_ctor_set(v___x_331_, 1, v___f_316_);
v___x_332_ = lean_array_push(v_selectables_317_, v___x_331_);
v___x_333_ = lean_box(0);
v___x_334_ = lean_apply_3(v___f_318_, v___x_333_, v___x_332_, lean_box(0));
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object* v___f_335_, lean_object* v_selectables_336_, lean_object* v___f_337_, lean_object* v_x_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(v___f_335_, v_selectables_336_, v___f_337_, v_x_338_);
return v_res_340_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_unsigned_to_nat(1000000000u);
v___x_342_ = lean_nat_to_int(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_unsigned_to_nat(1000u);
v___x_344_ = lean_nat_to_int(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_unsigned_to_nat(1000000u);
v___x_346_ = lean_nat_to_int(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object* v_val_347_, lean_object* v___f_348_, lean_object* v_x_349_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
lean_dec_ref(v___f_348_);
v_a_351_ = lean_ctor_get(v_x_349_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v_x_349_);
if (v_isSharedCheck_359_ == 0)
{
v___x_353_ = v_x_349_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v_x_349_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; 
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v_second_361_; lean_object* v_nano_362_; lean_object* v_second_363_; lean_object* v_nano_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v_second_374_; lean_object* v_nano_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_millis_380_; lean_object* v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v_a_360_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v_x_349_, 1);
v_second_361_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_second_361_);
v_nano_362_ = lean_ctor_get(v_a_360_, 1);
lean_inc(v_nano_362_);
lean_dec(v_a_360_);
v_second_363_ = lean_ctor_get(v_val_347_, 0);
v_nano_364_ = lean_ctor_get(v_val_347_, 1);
v___x_365_ = lean_int_neg(v_second_361_);
lean_dec(v_second_361_);
v___x_366_ = lean_int_neg(v_nano_362_);
lean_dec(v_nano_362_);
v___x_367_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_368_ = lean_int_mul(v_second_363_, v___x_367_);
v___x_369_ = lean_int_add(v___x_368_, v_nano_364_);
lean_dec(v___x_368_);
v___x_370_ = lean_int_mul(v___x_365_, v___x_367_);
lean_dec(v___x_365_);
v___x_371_ = lean_int_add(v___x_370_, v___x_366_);
lean_dec(v___x_366_);
lean_dec(v___x_370_);
v___x_372_ = lean_int_add(v___x_369_, v___x_371_);
lean_dec(v___x_371_);
lean_dec(v___x_369_);
v___x_373_ = l_Std_Time_Duration_ofNanoseconds(v___x_372_);
lean_dec(v___x_372_);
v_second_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_second_374_);
v_nano_375_ = lean_ctor_get(v___x_373_, 1);
lean_inc(v_nano_375_);
lean_dec_ref(v___x_373_);
v___x_376_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1);
v___x_377_ = lean_int_mul(v_second_374_, v___x_376_);
lean_dec(v_second_374_);
v___x_378_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_379_ = lean_int_ediv(v_nano_375_, v___x_378_);
lean_dec(v_nano_375_);
v_millis_380_ = lean_int_add(v___x_377_, v___x_379_);
lean_dec(v___x_379_);
lean_dec(v___x_377_);
v___x_381_ = lean_unsigned_to_nat(0u);
v___x_382_ = 0;
v___x_383_ = l_Std_Async_Selector_sleep(v_millis_380_);
lean_dec(v_millis_380_);
v___x_384_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_381_, v___x_382_, v___x_383_, v___f_348_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object* v_val_385_, lean_object* v___f_386_, lean_object* v_x_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(v_val_385_, v___f_386_, v_x_387_);
lean_dec_ref(v_val_385_);
return v_res_389_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = l_instInhabitedError;
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object* v_inst_400_, lean_object* v_inst_401_, lean_object* v_inst_402_, lean_object* v_config_403_, lean_object* v_handler_404_, lean_object* v_sources_405_){
_start:
{
uint8_t v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v_val_411_; lean_object* v_socket_414_; lean_object* v_expect_415_; lean_object* v_response_416_; lean_object* v_responseBody_417_; lean_object* v_requestBody_418_; lean_object* v_timeout_419_; lean_object* v_keepAliveTimeout_420_; lean_object* v_headerTimeout_421_; lean_object* v_connectionContext_422_; lean_object* v___f_423_; lean_object* v___f_424_; lean_object* v___f_425_; lean_object* v___f_426_; lean_object* v___f_427_; lean_object* v___f_428_; lean_object* v___f_429_; lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___f_433_; lean_object* v___y_435_; lean_object* v___y_485_; 
v_socket_414_ = lean_ctor_get(v_sources_405_, 0);
lean_inc(v_socket_414_);
v_expect_415_ = lean_ctor_get(v_sources_405_, 1);
lean_inc(v_expect_415_);
v_response_416_ = lean_ctor_get(v_sources_405_, 2);
lean_inc_n(v_response_416_, 2);
v_responseBody_417_ = lean_ctor_get(v_sources_405_, 3);
lean_inc_n(v_responseBody_417_, 2);
v_requestBody_418_ = lean_ctor_get(v_sources_405_, 4);
lean_inc_n(v_requestBody_418_, 2);
v_timeout_419_ = lean_ctor_get(v_sources_405_, 5);
lean_inc(v_timeout_419_);
v_keepAliveTimeout_420_ = lean_ctor_get(v_sources_405_, 6);
lean_inc(v_keepAliveTimeout_420_);
v_headerTimeout_421_ = lean_ctor_get(v_sources_405_, 7);
lean_inc(v_headerTimeout_421_);
v_connectionContext_422_ = lean_ctor_get(v_sources_405_, 8);
lean_inc_ref(v_connectionContext_422_);
lean_dec_ref(v_sources_405_);
v___f_423_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0));
v___f_424_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1));
v___f_425_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_425_, 0, v_inst_401_);
lean_closure_set(v___f_425_, 1, v_handler_404_);
lean_closure_set(v___f_425_, 2, v___f_424_);
v___f_426_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2));
v___f_427_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3));
v___f_428_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4));
v___f_429_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5));
v___f_430_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6));
v___f_431_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7));
v___x_432_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8);
lean_inc_ref(v_inst_402_);
lean_inc_ref(v___f_425_);
v___f_433_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed), 12, 9);
lean_closure_set(v___f_433_, 0, v___f_425_);
lean_closure_set(v___f_433_, 1, v_response_416_);
lean_closure_set(v___f_433_, 2, v___x_432_);
lean_closure_set(v___f_433_, 3, v___f_426_);
lean_closure_set(v___f_433_, 4, v_requestBody_418_);
lean_closure_set(v___f_433_, 5, v___f_427_);
lean_closure_set(v___f_433_, 6, v_responseBody_417_);
lean_closure_set(v___f_433_, 7, v_inst_402_);
lean_closure_set(v___f_433_, 8, v___f_428_);
if (lean_obj_tag(v_expect_415_) == 0)
{
lean_object* v_defaultPayloadBytes_488_; 
v_defaultPayloadBytes_488_ = lean_ctor_get(v_config_403_, 8);
lean_inc(v_defaultPayloadBytes_488_);
v___y_485_ = v_defaultPayloadBytes_488_;
goto v___jp_484_;
}
else
{
lean_object* v_val_489_; 
v_val_489_ = lean_ctor_get(v_expect_415_, 0);
lean_inc(v_val_489_);
lean_dec_ref_known(v_expect_415_, 1);
v___y_485_ = v_val_489_;
goto v___jp_484_;
}
v___jp_407_:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_412_, 0, v_val_411_);
v___x_413_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_409_, v___y_408_, v___x_412_, v___y_410_);
return v___x_413_;
}
v___jp_434_:
{
lean_object* v_token_436_; lean_object* v___f_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_selectables_442_; 
v_token_436_ = lean_ctor_get(v_connectionContext_422_, 1);
lean_inc_ref_n(v_token_436_, 2);
lean_dec_ref(v_connectionContext_422_);
v___f_437_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed), 4, 2);
lean_closure_set(v___f_437_, 0, v_token_436_);
lean_closure_set(v___f_437_, 1, v___f_423_);
v___x_438_ = l_Std_CancellationToken_selector(v_token_436_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v___f_437_);
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_441_ = lean_mk_empty_array_with_capacity(v___x_440_);
v_selectables_442_ = lean_array_push(v___x_441_, v___x_439_);
if (lean_obj_tag(v_socket_414_) == 1)
{
lean_object* v_val_443_; lean_object* v_recvSelector_444_; uint64_t v_expectedBytes_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_selectables_449_; 
lean_dec_ref(v___f_425_);
lean_dec(v_requestBody_418_);
lean_dec(v_responseBody_417_);
lean_dec(v_response_416_);
lean_dec_ref(v_inst_402_);
v_val_443_ = lean_ctor_get(v_socket_414_, 0);
lean_inc(v_val_443_);
lean_dec_ref_known(v_socket_414_, 1);
v_recvSelector_444_ = lean_ctor_get(v_inst_400_, 2);
lean_inc_ref(v_recvSelector_444_);
lean_dec_ref(v_inst_400_);
v_expectedBytes_445_ = lean_uint64_of_nat(v___y_435_);
lean_dec(v___y_435_);
v___x_446_ = lean_box_uint64(v_expectedBytes_445_);
v___x_447_ = lean_apply_2(v_recvSelector_444_, v_val_443_, v___x_446_);
v___x_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___f_429_);
v_selectables_449_ = lean_array_push(v_selectables_442_, v___x_448_);
if (lean_obj_tag(v_keepAliveTimeout_420_) == 0)
{
if (lean_obj_tag(v_headerTimeout_421_) == 1)
{
lean_object* v_val_450_; lean_object* v___f_451_; lean_object* v___f_452_; lean_object* v___x_453_; uint8_t v___x_454_; lean_object* v___x_455_; 
lean_dec(v_timeout_419_);
v_val_450_ = lean_ctor_get(v_headerTimeout_421_, 0);
lean_inc(v_val_450_);
lean_dec_ref_known(v_headerTimeout_421_, 1);
v___f_451_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_451_, 0, v___f_430_);
lean_closure_set(v___f_451_, 1, v_selectables_449_);
lean_closure_set(v___f_451_, 2, v___f_433_);
v___f_452_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed), 4, 2);
lean_closure_set(v___f_452_, 0, v_val_450_);
lean_closure_set(v___f_452_, 1, v___f_451_);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = 0;
v___x_455_ = lean_get_current_time();
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 1);
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
v___y_408_ = v___x_454_;
v___y_409_ = v___x_453_;
v___y_410_ = v___f_452_;
v_val_411_ = v___x_461_;
goto v___jp_407_;
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_455_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_455_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
lean_ctor_set_tag(v___x_466_, 0);
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
v___y_408_ = v___x_454_;
v___y_409_ = v___x_453_;
v___y_410_ = v___f_452_;
v_val_411_ = v___x_469_;
goto v___jp_407_;
}
}
}
}
else
{
lean_object* v___f_472_; lean_object* v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec(v_headerTimeout_421_);
v___f_472_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_472_, 0, v___f_430_);
lean_closure_set(v___f_472_, 1, v_selectables_449_);
lean_closure_set(v___f_472_, 2, v___f_433_);
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = 0;
v___x_475_ = l_Std_Async_Selector_sleep(v_timeout_419_);
lean_dec(v_timeout_419_);
v___x_476_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_473_, v___x_474_, v___x_475_, v___f_472_);
return v___x_476_;
}
}
else
{
lean_object* v___f_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
lean_dec_ref_known(v_keepAliveTimeout_420_, 1);
lean_dec(v_headerTimeout_421_);
v___f_477_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_477_, 0, v___f_431_);
lean_closure_set(v___f_477_, 1, v_selectables_449_);
lean_closure_set(v___f_477_, 2, v___f_433_);
v___x_478_ = 0;
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = l_Std_Async_Selector_sleep(v_timeout_419_);
lean_dec(v_timeout_419_);
v___x_481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_479_, v___x_478_, v___x_480_, v___f_477_);
return v___x_481_;
}
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v___y_435_);
lean_dec_ref(v___f_433_);
lean_dec(v_headerTimeout_421_);
lean_dec(v_keepAliveTimeout_420_);
lean_dec(v_timeout_419_);
lean_dec(v_socket_414_);
lean_dec_ref(v_inst_400_);
v___x_482_ = lean_box(0);
v___x_483_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_425_, v_response_416_, v___x_432_, v___f_426_, v_requestBody_418_, v___f_427_, v_responseBody_417_, v_inst_402_, v___f_428_, v___x_482_, v_selectables_442_);
return v___x_483_;
}
}
v___jp_484_:
{
lean_object* v_maximumRecvSize_486_; uint8_t v___x_487_; 
v_maximumRecvSize_486_ = lean_ctor_get(v_config_403_, 7);
lean_inc(v_maximumRecvSize_486_);
lean_dec_ref(v_config_403_);
v___x_487_ = lean_nat_dec_le(v___y_485_, v_maximumRecvSize_486_);
if (v___x_487_ == 0)
{
lean_dec(v___y_485_);
v___y_435_ = v_maximumRecvSize_486_;
goto v___jp_434_;
}
else
{
lean_dec(v_maximumRecvSize_486_);
v___y_435_ = v___y_485_;
goto v___jp_434_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_config_493_, lean_object* v_handler_494_, lean_object* v_sources_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_490_, v_inst_491_, v_inst_492_, v_config_493_, v_handler_494_, v_sources_495_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object* v_00_u03b1_498_, lean_object* v_00_u03c3_499_, lean_object* v_00_u03b2_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_inst_503_, lean_object* v_config_504_, lean_object* v_handler_505_, lean_object* v_sources_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_501_, v_inst_502_, v_inst_503_, v_config_504_, v_handler_505_, v_sources_506_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object* v_00_u03b1_509_, lean_object* v_00_u03c3_510_, lean_object* v_00_u03b2_511_, lean_object* v_inst_512_, lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_config_515_, lean_object* v_handler_516_, lean_object* v_sources_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(v_00_u03b1_509_, v_00_u03c3_510_, v_00_u03b2_511_, v_inst_512_, v_inst_513_, v_inst_514_, v_config_515_, v_handler_516_, v_sources_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object* v_machine_520_, lean_object* v_x_521_){
_start:
{
lean_object* v___y_524_; uint8_t v___y_525_; 
if (lean_obj_tag(v_x_521_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_538_; 
lean_dec_ref(v_machine_520_);
v_a_530_ = lean_ctor_get(v_x_521_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_538_ == 0)
{
v___x_532_ = v_x_521_;
v_isShared_533_ = v_isSharedCheck_538_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v_x_521_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_538_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_537_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
lean_object* v___x_536_; 
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
}
else
{
lean_object* v_a_539_; lean_object* v___y_541_; uint8_t v___x_547_; 
v_a_539_ = lean_ctor_get(v_x_521_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v_x_521_, 1);
v___x_547_ = lean_unbox(v_a_539_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; 
v___x_548_ = lean_box(40);
v___y_541_ = v___x_548_;
goto v___jp_540_;
}
else
{
lean_object* v___x_549_; 
v___x_549_ = lean_box(0);
v___y_541_ = v___x_549_;
goto v___jp_540_;
}
v___jp_540_:
{
uint8_t v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_542_ = 0;
lean_inc(v___y_541_);
v___x_543_ = l_Std_Http_Protocol_H1_Machine_canContinue(v___x_542_, v_machine_520_, v___y_541_);
v___x_544_ = lean_unbox(v_a_539_);
lean_dec(v_a_539_);
if (v___x_544_ == 0)
{
uint8_t v___x_545_; 
v___x_545_ = 1;
v___y_524_ = v___x_543_;
v___y_525_ = v___x_545_;
goto v___jp_523_;
}
else
{
uint8_t v___x_546_; 
v___x_546_ = 0;
v___y_524_ = v___x_543_;
v___y_525_ = v___x_546_;
goto v___jp_523_;
}
}
}
v___jp_523_:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_526_ = lean_box(v___y_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v___y_524_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object* v_machine_550_, lean_object* v_x_551_, lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(v_machine_550_, v_x_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t v___y_554_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = lean_box(v___y_554_);
v___x_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
uint8_t v___y_1556__boxed_561_; lean_object* v_res_562_; 
v___y_1556__boxed_561_ = lean_unbox(v___y_559_);
v_res_562_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(v___y_1556__boxed_561_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object* v_x_563_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_565_; 
v_a_564_ = lean_ctor_get(v_x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v_x_563_, 1);
v___x_565_ = lean_task_pure(v_a_564_);
return v___x_565_;
}
else
{
lean_object* v_a_566_; 
v_a_566_ = lean_ctor_get(v_x_563_, 0);
lean_inc_ref(v_a_566_);
lean_dec_ref_known(v_x_563_, 1);
return v_a_566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object* v_a_567_, lean_object* v_x_568_){
_start:
{
if (lean_obj_tag(v_x_568_) == 0)
{
uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec_ref_known(v_x_568_, 1);
v___x_570_ = 0;
v___x_571_ = lean_box(0);
v___x_572_ = lean_box(v___x_570_);
v___x_573_ = l_Std_Channel_send___redArg(v_a_567_, v___x_572_);
lean_dec_ref(v___x_573_);
return v___x_571_;
}
else
{
lean_object* v_a_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_a_574_ = lean_ctor_get(v_x_568_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v_x_568_, 1);
v___x_575_ = lean_box(0);
v___x_576_ = l_Std_Channel_send___redArg(v_a_567_, v_a_574_);
lean_dec_ref(v___x_576_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object* v_a_577_, lean_object* v_x_578_, lean_object* v___y_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(v_a_577_, v_x_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t v___x_581_, lean_object* v_x_582_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_584_ = lean_box(v___x_581_);
v___x_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object* v___x_587_, lean_object* v_x_588_, lean_object* v___y_589_){
_start:
{
uint8_t v___x_1600__boxed_590_; lean_object* v_res_591_; 
v___x_1600__boxed_590_ = lean_unbox(v___x_587_);
v_res_591_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(v___x_1600__boxed_590_, v_x_588_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object* v_connectionContext_592_, uint8_t v___x_593_, lean_object* v_a_594_, lean_object* v___f_595_, lean_object* v___f_596_, lean_object* v___x_597_, uint8_t v___x_598_, lean_object* v___f_599_, lean_object* v_x_600_){
_start:
{
if (lean_obj_tag(v_x_600_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_610_; 
lean_dec_ref(v___f_599_);
lean_dec(v___x_597_);
lean_dec_ref(v___f_596_);
lean_dec_ref(v___f_595_);
lean_dec_ref(v_a_594_);
lean_dec_ref(v_connectionContext_592_);
v_a_602_ = lean_ctor_get(v_x_600_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v_x_600_);
if (v_isSharedCheck_610_ == 0)
{
v___x_604_ = v_x_600_;
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v_x_600_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_609_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; 
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
}
}
else
{
lean_object* v_a_611_; lean_object* v_token_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v_a_611_ = lean_ctor_get(v_x_600_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v_x_600_, 1);
v_token_612_ = lean_ctor_get(v_connectionContext_592_, 1);
lean_inc_ref(v_token_612_);
lean_dec_ref(v_connectionContext_592_);
v___x_613_ = lean_box(v___x_593_);
v___x_614_ = l_Std_Channel_recvSelector___redArg(v___x_613_, v_a_594_);
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___f_595_);
v___x_616_ = l_Std_CancellationToken_selector(v_token_612_);
lean_inc_ref(v___f_596_);
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v___f_596_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v_a_611_);
lean_ctor_set(v___x_618_, 1, v___f_596_);
v___x_619_ = lean_unsigned_to_nat(3u);
v___x_620_ = lean_mk_empty_array_with_capacity(v___x_619_);
v___x_621_ = lean_array_push(v___x_620_, v___x_615_);
v___x_622_ = lean_array_push(v___x_621_, v___x_617_);
v___x_623_ = lean_array_push(v___x_622_, v___x_618_);
v___x_624_ = l_Std_Async_Selectable_one___redArg(v___x_623_);
v___x_625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_597_, v___x_598_, v___x_624_, v___f_599_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object* v_connectionContext_626_, lean_object* v___x_627_, lean_object* v_a_628_, lean_object* v___f_629_, lean_object* v___f_630_, lean_object* v___x_631_, lean_object* v___x_632_, lean_object* v___f_633_, lean_object* v_x_634_, lean_object* v___y_635_){
_start:
{
uint8_t v___x_1615__boxed_636_; uint8_t v___x_1620__boxed_637_; lean_object* v_res_638_; 
v___x_1615__boxed_636_ = lean_unbox(v___x_627_);
v___x_1620__boxed_637_ = lean_unbox(v___x_632_);
v_res_638_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(v_connectionContext_626_, v___x_1615__boxed_636_, v_a_628_, v___f_629_, v___f_630_, v___x_631_, v___x_1620__boxed_637_, v___f_633_, v_x_634_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object* v_config_639_, lean_object* v___x_640_, uint8_t v___x_641_, lean_object* v___f_642_, lean_object* v_x_643_){
_start:
{
if (lean_obj_tag(v_x_643_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v___f_642_);
lean_dec(v___x_640_);
v_a_645_ = lean_ctor_get(v_x_643_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_643_);
if (v_isSharedCheck_653_ == 0)
{
v___x_647_ = v_x_643_;
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v_x_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_652_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; 
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
}
else
{
lean_object* v_lingeringTimeout_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec_ref_known(v_x_643_, 1);
v_lingeringTimeout_654_ = lean_ctor_get(v_config_639_, 4);
v___x_655_ = l_Std_Async_Selector_sleep(v_lingeringTimeout_654_);
v___x_656_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_640_, v___x_641_, v___x_655_, v___f_642_);
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object* v_config_657_, lean_object* v___x_658_, lean_object* v___x_659_, lean_object* v___f_660_, lean_object* v_x_661_, lean_object* v___y_662_){
_start:
{
uint8_t v___x_1689__boxed_663_; lean_object* v_res_664_; 
v___x_1689__boxed_663_ = lean_unbox(v___x_659_);
v_res_664_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(v_config_657_, v___x_658_, v___x_1689__boxed_663_, v___f_660_, v_x_661_);
lean_dec_ref(v_config_657_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object* v_connectionContext_668_, uint8_t v___x_669_, lean_object* v_a_670_, lean_object* v___f_671_, lean_object* v___x_672_, lean_object* v___f_673_, lean_object* v_config_674_, lean_object* v___f_675_, lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_686_; 
lean_dec_ref(v___f_675_);
lean_dec_ref(v_config_674_);
lean_dec_ref(v___f_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___f_671_);
lean_dec_ref(v_a_670_);
lean_dec_ref(v_connectionContext_668_);
v_a_678_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_686_ == 0)
{
v___x_680_ = v_x_676_;
v_isShared_681_ = v_isSharedCheck_686_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v_x_676_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_686_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_685_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_684_; 
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_704_; 
v_a_687_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_704_ == 0)
{
v___x_689_ = v_x_676_;
v_isShared_690_ = v_isSharedCheck_704_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v_x_676_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_704_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
uint8_t v___x_691_; lean_object* v___f_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___f_695_; lean_object* v___x_696_; lean_object* v___f_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_691_ = 0;
v___f_692_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0));
v___x_693_ = lean_box(v___x_669_);
v___x_694_ = lean_box(v___x_691_);
lean_inc_n(v___x_672_, 3);
v___f_695_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed), 10, 8);
lean_closure_set(v___f_695_, 0, v_connectionContext_668_);
lean_closure_set(v___f_695_, 1, v___x_693_);
lean_closure_set(v___f_695_, 2, v_a_670_);
lean_closure_set(v___f_695_, 3, v___f_671_);
lean_closure_set(v___f_695_, 4, v___f_692_);
lean_closure_set(v___f_695_, 5, v___x_672_);
lean_closure_set(v___f_695_, 6, v___x_694_);
lean_closure_set(v___f_695_, 7, v___f_673_);
v___x_696_ = lean_box(v___x_691_);
v___f_697_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_697_, 0, v_config_674_);
lean_closure_set(v___f_697_, 1, v___x_672_);
lean_closure_set(v___f_697_, 2, v___x_696_);
lean_closure_set(v___f_697_, 3, v___f_695_);
v___x_698_ = l_BaseIO_chainTask___redArg(v_a_687_, v___f_675_, v___x_672_, v___x_691_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_698_);
v___x_700_ = v___x_689_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_698_);
v___x_700_ = v_reuseFailAlloc_703_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
v___x_702_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_672_, v___x_691_, v___x_701_, v___f_697_);
return v___x_702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object* v_connectionContext_705_, lean_object* v___x_706_, lean_object* v_a_707_, lean_object* v___f_708_, lean_object* v___x_709_, lean_object* v___f_710_, lean_object* v_config_711_, lean_object* v___f_712_, lean_object* v_x_713_, lean_object* v___y_714_){
_start:
{
uint8_t v___x_1729__boxed_715_; lean_object* v_res_716_; 
v___x_1729__boxed_715_ = lean_unbox(v___x_706_);
v_res_716_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(v_connectionContext_705_, v___x_1729__boxed_715_, v_a_707_, v___f_708_, v___x_709_, v___f_710_, v_config_711_, v___f_712_, v_x_713_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object* v_inst_717_, lean_object* v_handler_718_, lean_object* v_head_719_, lean_object* v_connectionContext_720_, uint8_t v___x_721_, lean_object* v___f_722_, lean_object* v___f_723_, lean_object* v_config_724_, lean_object* v___f_725_, lean_object* v_x_726_){
_start:
{
if (lean_obj_tag(v_x_726_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_736_; 
lean_dec_ref(v___f_725_);
lean_dec_ref(v_config_724_);
lean_dec_ref(v___f_723_);
lean_dec_ref(v___f_722_);
lean_dec_ref(v_connectionContext_720_);
lean_dec_ref(v_head_719_);
lean_dec(v_handler_718_);
lean_dec_ref(v_inst_717_);
v_a_728_ = lean_ctor_get(v_x_726_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_726_);
if (v_isSharedCheck_736_ == 0)
{
v___x_730_ = v_x_726_;
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v_x_726_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
return v___x_734_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_758_; 
v_a_737_ = lean_ctor_get(v_x_726_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v_x_726_);
if (v_isSharedCheck_758_ == 0)
{
v___x_739_ = v_x_726_;
v_isShared_740_ = v_isSharedCheck_758_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v_x_726_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_758_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v_onContinue_741_; lean_object* v___f_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___f_746_; uint8_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_754_; 
v_onContinue_741_ = lean_ctor_get(v_inst_717_, 3);
lean_inc_ref(v_onContinue_741_);
lean_dec_ref(v_inst_717_);
lean_inc(v_a_737_);
v___f_742_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_742_, 0, v_a_737_);
v___x_743_ = lean_apply_2(v_onContinue_741_, v_handler_718_, v_head_719_);
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = lean_box(v___x_721_);
v___f_746_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_746_, 0, v_connectionContext_720_);
lean_closure_set(v___f_746_, 1, v___x_745_);
lean_closure_set(v___f_746_, 2, v_a_737_);
lean_closure_set(v___f_746_, 3, v___f_722_);
lean_closure_set(v___f_746_, 4, v___x_744_);
lean_closure_set(v___f_746_, 5, v___f_723_);
lean_closure_set(v___f_746_, 6, v_config_724_);
lean_closure_set(v___f_746_, 7, v___f_742_);
v___x_747_ = 0;
v___x_748_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_748_, 0, lean_box(0));
lean_closure_set(v___x_748_, 1, lean_box(0));
lean_closure_set(v___x_748_, 2, v___x_743_);
v___x_749_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_749_, 0, lean_box(0));
lean_closure_set(v___x_749_, 1, v___x_748_);
v___x_750_ = lean_io_as_task(v___x_749_, v___x_744_);
v___x_751_ = 1;
v___x_752_ = lean_task_bind(v___x_750_, v___f_725_, v___x_744_, v___x_751_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_752_);
v___x_754_ = v___x_739_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_752_);
v___x_754_ = v_reuseFailAlloc_757_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
v___x_756_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_744_, v___x_747_, v___x_755_, v___f_746_);
return v___x_756_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object* v_inst_759_, lean_object* v_handler_760_, lean_object* v_head_761_, lean_object* v_connectionContext_762_, lean_object* v___x_763_, lean_object* v___f_764_, lean_object* v___f_765_, lean_object* v_config_766_, lean_object* v___f_767_, lean_object* v_x_768_, lean_object* v___y_769_){
_start:
{
uint8_t v___x_1812__boxed_770_; lean_object* v_res_771_; 
v___x_1812__boxed_770_ = lean_unbox(v___x_763_);
v_res_771_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(v_inst_759_, v_handler_760_, v_head_761_, v_connectionContext_762_, v___x_1812__boxed_770_, v___f_764_, v___f_765_, v_config_766_, v___f_767_, v_x_768_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object* v_inst_774_, lean_object* v_handler_775_, lean_object* v_machine_776_, lean_object* v_head_777_, lean_object* v_config_778_, lean_object* v_connectionContext_779_){
_start:
{
lean_object* v___f_781_; lean_object* v___f_782_; lean_object* v___f_783_; uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___f_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___f_781_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_781_, 0, v_machine_776_);
v___f_782_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0));
v___f_783_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1));
v___x_784_ = 0;
v___x_785_ = lean_box(v___x_784_);
v___f_786_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_786_, 0, v_inst_774_);
lean_closure_set(v___f_786_, 1, v_handler_775_);
lean_closure_set(v___f_786_, 2, v_head_777_);
lean_closure_set(v___f_786_, 3, v_connectionContext_779_);
lean_closure_set(v___f_786_, 4, v___x_785_);
lean_closure_set(v___f_786_, 5, v___f_782_);
lean_closure_set(v___f_786_, 6, v___f_781_);
lean_closure_set(v___f_786_, 7, v_config_778_);
lean_closure_set(v___f_786_, 8, v___f_783_);
v___x_787_ = lean_box(0);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = l_Std_CloseableChannel_new___redArg(v___x_787_);
v___x_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
v___x_792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_788_, v___x_784_, v___x_791_, v___f_786_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object* v_inst_793_, lean_object* v_handler_794_, lean_object* v_machine_795_, lean_object* v_head_796_, lean_object* v_config_797_, lean_object* v_connectionContext_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_793_, v_handler_794_, v_machine_795_, v_head_796_, v_config_797_, v_connectionContext_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object* v_00_u03c3_801_, lean_object* v_inst_802_, lean_object* v_handler_803_, lean_object* v_machine_804_, lean_object* v_head_805_, lean_object* v_config_806_, lean_object* v_connectionContext_807_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_802_, v_handler_803_, v_machine_804_, v_head_805_, v_config_806_, v_connectionContext_807_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object* v_00_u03c3_810_, lean_object* v_inst_811_, lean_object* v_handler_812_, lean_object* v_machine_813_, lean_object* v_head_814_, lean_object* v_config_815_, lean_object* v_connectionContext_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(v_00_u03c3_810_, v_inst_811_, v_handler_812_, v_machine_813_, v_head_814_, v_config_815_, v_connectionContext_816_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(lean_object* v_x_819_, lean_object* v_x_820_){
_start:
{
if (lean_obj_tag(v_x_820_) == 0)
{
return v_x_819_;
}
else
{
lean_object* v_key_821_; lean_object* v_value_822_; lean_object* v_tail_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_846_; 
v_key_821_ = lean_ctor_get(v_x_820_, 0);
v_value_822_ = lean_ctor_get(v_x_820_, 1);
v_tail_823_ = lean_ctor_get(v_x_820_, 2);
v_isSharedCheck_846_ = !lean_is_exclusive(v_x_820_);
if (v_isSharedCheck_846_ == 0)
{
v___x_825_ = v_x_820_;
v_isShared_826_ = v_isSharedCheck_846_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_tail_823_);
lean_inc(v_value_822_);
lean_inc(v_key_821_);
lean_dec(v_x_820_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_846_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; uint64_t v___x_828_; uint64_t v___x_829_; uint64_t v___x_830_; uint64_t v_fold_831_; uint64_t v___x_832_; uint64_t v___x_833_; uint64_t v___x_834_; size_t v___x_835_; size_t v___x_836_; size_t v___x_837_; size_t v___x_838_; size_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_827_ = lean_array_get_size(v_x_819_);
v___x_828_ = lean_string_hash(v_key_821_);
v___x_829_ = 32ULL;
v___x_830_ = lean_uint64_shift_right(v___x_828_, v___x_829_);
v_fold_831_ = lean_uint64_xor(v___x_828_, v___x_830_);
v___x_832_ = 16ULL;
v___x_833_ = lean_uint64_shift_right(v_fold_831_, v___x_832_);
v___x_834_ = lean_uint64_xor(v_fold_831_, v___x_833_);
v___x_835_ = lean_uint64_to_usize(v___x_834_);
v___x_836_ = lean_usize_of_nat(v___x_827_);
v___x_837_ = ((size_t)1ULL);
v___x_838_ = lean_usize_sub(v___x_836_, v___x_837_);
v___x_839_ = lean_usize_land(v___x_835_, v___x_838_);
v___x_840_ = lean_array_uget_borrowed(v_x_819_, v___x_839_);
lean_inc(v___x_840_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 2, v___x_840_);
v___x_842_ = v___x_825_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_key_821_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_value_822_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v___x_840_);
v___x_842_ = v_reuseFailAlloc_845_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; 
v___x_843_ = lean_array_uset(v_x_819_, v___x_839_, v___x_842_);
v_x_819_ = v___x_843_;
v_x_820_ = v_tail_823_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(lean_object* v_i_847_, lean_object* v_source_848_, lean_object* v_target_849_){
_start:
{
lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_850_ = lean_array_get_size(v_source_848_);
v___x_851_ = lean_nat_dec_lt(v_i_847_, v___x_850_);
if (v___x_851_ == 0)
{
lean_dec_ref(v_source_848_);
lean_dec(v_i_847_);
return v_target_849_;
}
else
{
lean_object* v_es_852_; lean_object* v___x_853_; lean_object* v_source_854_; lean_object* v_target_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_es_852_ = lean_array_fget(v_source_848_, v_i_847_);
v___x_853_ = lean_box(0);
v_source_854_ = lean_array_fset(v_source_848_, v_i_847_, v___x_853_);
v_target_855_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(v_target_849_, v_es_852_);
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_nat_add(v_i_847_, v___x_856_);
lean_dec(v_i_847_);
v_i_847_ = v___x_857_;
v_source_848_ = v_source_854_;
v_target_849_ = v_target_855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(lean_object* v_data_859_){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v_nbuckets_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_860_ = lean_array_get_size(v_data_859_);
v___x_861_ = lean_unsigned_to_nat(2u);
v_nbuckets_862_ = lean_nat_mul(v___x_860_, v___x_861_);
v___x_863_ = lean_unsigned_to_nat(0u);
v___x_864_ = lean_box(0);
v___x_865_ = lean_mk_array(v_nbuckets_862_, v___x_864_);
v___x_866_ = lean_array_propagate_mark(v_data_859_, v___x_865_);
v___x_867_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(v___x_863_, v_data_859_, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(lean_object* v_i_868_, lean_object* v_x_869_){
_start:
{
if (lean_obj_tag(v_x_869_) == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_870_ = lean_unsigned_to_nat(1u);
v___x_871_ = lean_mk_empty_array_with_capacity(v___x_870_);
v___x_872_ = lean_array_push(v___x_871_, v_i_868_);
v___x_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
else
{
lean_object* v_val_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_882_; 
v_val_874_ = lean_ctor_get(v_x_869_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v_x_869_);
if (v_isSharedCheck_882_ == 0)
{
v___x_876_ = v_x_869_;
v_isShared_877_ = v_isSharedCheck_882_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_val_874_);
lean_dec(v_x_869_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_882_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; lean_object* v___x_880_; 
v___x_878_ = lean_array_push(v_val_874_, v_i_868_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_878_);
v___x_880_ = v___x_876_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(lean_object* v_i_883_, lean_object* v_a_884_, lean_object* v_x_885_){
_start:
{
if (lean_obj_tag(v_x_885_) == 0)
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v_val_888_; lean_object* v___x_889_; 
v___x_886_ = lean_box(0);
v___x_887_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(v_i_883_, v___x_886_);
v_val_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_val_888_);
lean_dec(v___x_887_);
v___x_889_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_889_, 0, v_a_884_);
lean_ctor_set(v___x_889_, 1, v_val_888_);
lean_ctor_set(v___x_889_, 2, v_x_885_);
return v___x_889_;
}
else
{
lean_object* v_key_890_; lean_object* v_value_891_; lean_object* v_tail_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_907_; 
v_key_890_ = lean_ctor_get(v_x_885_, 0);
v_value_891_ = lean_ctor_get(v_x_885_, 1);
v_tail_892_ = lean_ctor_get(v_x_885_, 2);
v_isSharedCheck_907_ = !lean_is_exclusive(v_x_885_);
if (v_isSharedCheck_907_ == 0)
{
v___x_894_ = v_x_885_;
v_isShared_895_ = v_isSharedCheck_907_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_tail_892_);
lean_inc(v_value_891_);
lean_inc(v_key_890_);
lean_dec(v_x_885_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_907_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
uint8_t v___x_896_; 
v___x_896_ = lean_string_dec_eq(v_key_890_, v_a_884_);
if (v___x_896_ == 0)
{
lean_object* v_tail_897_; lean_object* v___x_899_; 
v_tail_897_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(v_i_883_, v_a_884_, v_tail_892_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 2, v_tail_897_);
v___x_899_ = v___x_894_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_key_890_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v_value_891_);
lean_ctor_set(v_reuseFailAlloc_900_, 2, v_tail_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v_val_903_; lean_object* v___x_905_; 
lean_dec(v_key_890_);
v___x_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_901_, 0, v_value_891_);
v___x_902_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(v_i_883_, v___x_901_);
v_val_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_val_903_);
lean_dec(v___x_902_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 1, v_val_903_);
lean_ctor_set(v___x_894_, 0, v_a_884_);
v___x_905_ = v___x_894_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_884_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_val_903_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_tail_892_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(lean_object* v_a_908_, lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
uint8_t v___x_910_; 
v___x_910_ = 0;
return v___x_910_;
}
else
{
lean_object* v_key_911_; lean_object* v_tail_912_; uint8_t v___x_913_; 
v_key_911_ = lean_ctor_get(v_x_909_, 0);
v_tail_912_ = lean_ctor_get(v_x_909_, 2);
v___x_913_ = lean_string_dec_eq(v_key_911_, v_a_908_);
if (v___x_913_ == 0)
{
v_x_909_ = v_tail_912_;
goto _start;
}
else
{
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg___boxed(lean_object* v_a_915_, lean_object* v_x_916_){
_start:
{
uint8_t v_res_917_; lean_object* v_r_918_; 
v_res_917_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_915_, v_x_916_);
lean_dec(v_x_916_);
lean_dec_ref(v_a_915_);
v_r_918_ = lean_box(v_res_917_);
return v_r_918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object* v_i_919_, lean_object* v_m_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_size_922_; lean_object* v_buckets_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_973_; 
v_size_922_ = lean_ctor_get(v_m_920_, 0);
v_buckets_923_ = lean_ctor_get(v_m_920_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_m_920_);
if (v_isSharedCheck_973_ == 0)
{
v___x_925_ = v_m_920_;
v_isShared_926_ = v_isSharedCheck_973_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_buckets_923_);
lean_inc(v_size_922_);
lean_dec(v_m_920_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_973_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v___x_930_; uint64_t v_fold_931_; uint64_t v___x_932_; uint64_t v___x_933_; uint64_t v___x_934_; size_t v___x_935_; size_t v___x_936_; size_t v___x_937_; size_t v___x_938_; size_t v___x_939_; lean_object* v_bkt_940_; uint8_t v___x_941_; 
v___x_927_ = lean_array_get_size(v_buckets_923_);
v___x_928_ = lean_string_hash(v_a_921_);
v___x_929_ = 32ULL;
v___x_930_ = lean_uint64_shift_right(v___x_928_, v___x_929_);
v_fold_931_ = lean_uint64_xor(v___x_928_, v___x_930_);
v___x_932_ = 16ULL;
v___x_933_ = lean_uint64_shift_right(v_fold_931_, v___x_932_);
v___x_934_ = lean_uint64_xor(v_fold_931_, v___x_933_);
v___x_935_ = lean_uint64_to_usize(v___x_934_);
v___x_936_ = lean_usize_of_nat(v___x_927_);
v___x_937_ = ((size_t)1ULL);
v___x_938_ = lean_usize_sub(v___x_936_, v___x_937_);
v___x_939_ = lean_usize_land(v___x_935_, v___x_938_);
v_bkt_940_ = lean_array_uget_borrowed(v_buckets_923_, v___x_939_);
v___x_941_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_921_, v_bkt_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v_size_x27_945_; lean_object* v___x_946_; lean_object* v_buckets_x27_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_mk_empty_array_with_capacity(v___x_942_);
v___x_944_ = lean_array_push(v___x_943_, v_i_919_);
v_size_x27_945_ = lean_nat_add(v_size_922_, v___x_942_);
lean_dec(v_size_922_);
lean_inc(v_bkt_940_);
v___x_946_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_946_, 0, v_a_921_);
lean_ctor_set(v___x_946_, 1, v___x_944_);
lean_ctor_set(v___x_946_, 2, v_bkt_940_);
v_buckets_x27_947_ = lean_array_uset(v_buckets_923_, v___x_939_, v___x_946_);
v___x_948_ = lean_unsigned_to_nat(4u);
v___x_949_ = lean_nat_mul(v_size_x27_945_, v___x_948_);
v___x_950_ = lean_unsigned_to_nat(3u);
v___x_951_ = lean_nat_div(v___x_949_, v___x_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_array_get_size(v_buckets_x27_947_);
v___x_953_ = lean_nat_dec_le(v___x_951_, v___x_952_);
lean_dec(v___x_951_);
if (v___x_953_ == 0)
{
lean_object* v_val_954_; lean_object* v___x_956_; 
v_val_954_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(v_buckets_x27_947_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v_val_954_);
lean_ctor_set(v___x_925_, 0, v_size_x27_945_);
v___x_956_ = v___x_925_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_size_x27_945_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_val_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
else
{
lean_object* v___x_959_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v_buckets_x27_947_);
lean_ctor_set(v___x_925_, 0, v_size_x27_945_);
v___x_959_ = v___x_925_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_size_x27_945_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_buckets_x27_947_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
else
{
lean_object* v___x_961_; lean_object* v_buckets_x27_962_; lean_object* v_bkt_x27_963_; lean_object* v___y_965_; uint8_t v___x_970_; 
lean_inc(v_bkt_940_);
v___x_961_ = lean_box(0);
v_buckets_x27_962_ = lean_array_uset(v_buckets_923_, v___x_939_, v___x_961_);
lean_inc_ref(v_a_921_);
v_bkt_x27_963_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(v_i_919_, v_a_921_, v_bkt_940_);
v___x_970_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_921_, v_bkt_x27_963_);
lean_dec_ref(v_a_921_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = lean_unsigned_to_nat(1u);
v___x_972_ = lean_nat_sub(v_size_922_, v___x_971_);
lean_dec(v_size_922_);
v___y_965_ = v___x_972_;
goto v___jp_964_;
}
else
{
v___y_965_ = v_size_922_;
goto v___jp_964_;
}
v___jp_964_:
{
lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_966_ = lean_array_uset(v_buckets_x27_962_, v___x_939_, v_bkt_x27_963_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v___x_966_);
lean_ctor_set(v___x_925_, 0, v___y_965_);
v___x_968_ = v___x_925_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___y_965_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object* v_entries_974_, lean_object* v___x_975_, lean_object* v_indexes_976_, lean_object* v_status_977_, uint8_t v_version_978_, lean_object* v_x_979_){
_start:
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
lean_dec(v_status_977_);
lean_dec_ref(v_indexes_976_);
lean_dec_ref(v___x_975_);
lean_dec_ref(v_entries_974_);
v_a_981_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_989_ == 0)
{
v___x_983_ = v_x_979_;
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v_x_979_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_988_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_987_; 
v___x_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
return v___x_987_;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1006_; 
v_a_990_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_992_ = v_x_979_;
v_isShared_993_ = v_isSharedCheck_1006_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v_x_979_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1006_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_i_996_; lean_object* v___x_997_; lean_object* v_entries_998_; lean_object* v_indexes_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_994_ = l_Std_Time_DateTime_toRFC822String(v_a_990_);
v___x_995_ = l_Std_Http_Header_Value_ofString_x21(v___x_994_);
v_i_996_ = lean_array_get_size(v_entries_974_);
lean_inc_ref(v___x_975_);
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_975_);
lean_ctor_set(v___x_997_, 1, v___x_995_);
v_entries_998_ = lean_array_push(v_entries_974_, v___x_997_);
v_indexes_999_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(v_i_996_, v_indexes_976_, v___x_975_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v_entries_998_);
lean_ctor_set(v___x_1000_, 1, v_indexes_999_);
v___x_1001_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1001_, 0, v_status_977_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
lean_ctor_set_uint8(v___x_1001_, sizeof(void*)*2, v_version_978_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_1001_);
v___x_1003_ = v___x_992_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object* v_entries_1007_, lean_object* v___x_1008_, lean_object* v_indexes_1009_, lean_object* v_status_1010_, lean_object* v_version_1011_, lean_object* v_x_1012_, lean_object* v___y_1013_){
_start:
{
uint8_t v_version_boxed_1014_; lean_object* v_res_1015_; 
v_version_boxed_1014_ = lean_unbox(v_version_1011_);
v_res_1015_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(v_entries_1007_, v___x_1008_, v_indexes_1009_, v_status_1010_, v_version_boxed_1014_, v_x_1012_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object* v_tz_1016_, lean_object* v_a_1017_, lean_object* v___x_1018_, lean_object* v_x_1019_){
_start:
{
lean_object* v_offset_1020_; lean_object* v_second_1021_; lean_object* v_nano_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_offset_1020_ = lean_ctor_get(v_tz_1016_, 0);
v_second_1021_ = lean_ctor_get(v_a_1017_, 0);
v_nano_1022_ = lean_ctor_get(v_a_1017_, 1);
v___x_1023_ = lean_nat_to_int(v___x_1018_);
v___x_1024_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_1025_ = lean_int_mul(v_second_1021_, v___x_1024_);
v___x_1026_ = lean_int_add(v___x_1025_, v_nano_1022_);
lean_dec(v___x_1025_);
v___x_1027_ = lean_int_mul(v_offset_1020_, v___x_1024_);
v___x_1028_ = lean_int_add(v___x_1027_, v___x_1023_);
lean_dec(v___x_1023_);
lean_dec(v___x_1027_);
v___x_1029_ = lean_int_add(v___x_1026_, v___x_1028_);
lean_dec(v___x_1028_);
lean_dec(v___x_1026_);
v___x_1030_ = l_Std_Time_Duration_ofNanoseconds(v___x_1029_);
lean_dec(v___x_1029_);
v___x_1031_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object* v_tz_1032_, lean_object* v_a_1033_, lean_object* v___x_1034_, lean_object* v_x_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(v_tz_1032_, v_a_1033_, v___x_1034_, v_x_1035_);
lean_dec_ref(v_a_1033_);
lean_dec_ref(v_tz_1032_);
return v_res_1036_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(lean_object* v_m_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_buckets_1039_; lean_object* v___x_1040_; uint64_t v___x_1041_; uint64_t v___x_1042_; uint64_t v___x_1043_; uint64_t v_fold_1044_; uint64_t v___x_1045_; uint64_t v___x_1046_; uint64_t v___x_1047_; size_t v___x_1048_; size_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; size_t v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v_buckets_1039_ = lean_ctor_get(v_m_1037_, 1);
v___x_1040_ = lean_array_get_size(v_buckets_1039_);
v___x_1041_ = lean_string_hash(v_a_1038_);
v___x_1042_ = 32ULL;
v___x_1043_ = lean_uint64_shift_right(v___x_1041_, v___x_1042_);
v_fold_1044_ = lean_uint64_xor(v___x_1041_, v___x_1043_);
v___x_1045_ = 16ULL;
v___x_1046_ = lean_uint64_shift_right(v_fold_1044_, v___x_1045_);
v___x_1047_ = lean_uint64_xor(v_fold_1044_, v___x_1046_);
v___x_1048_ = lean_uint64_to_usize(v___x_1047_);
v___x_1049_ = lean_usize_of_nat(v___x_1040_);
v___x_1050_ = ((size_t)1ULL);
v___x_1051_ = lean_usize_sub(v___x_1049_, v___x_1050_);
v___x_1052_ = lean_usize_land(v___x_1048_, v___x_1051_);
v___x_1053_ = lean_array_uget_borrowed(v_buckets_1039_, v___x_1052_);
v___x_1054_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_1038_, v___x_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg___boxed(lean_object* v_m_1055_, lean_object* v_a_1056_){
_start:
{
uint8_t v_res_1057_; lean_object* v_r_1058_; 
v_res_1057_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(v_m_1055_, v_a_1056_);
lean_dec_ref(v_a_1056_);
lean_dec_ref(v_m_1055_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object* v_config_1060_, lean_object* v_head_1061_){
_start:
{
lean_object* v_headers_1066_; uint8_t v_generateDate_1067_; lean_object* v_status_1068_; uint8_t v_version_1069_; lean_object* v_entries_1070_; lean_object* v_indexes_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___f_1074_; uint8_t v___y_1076_; lean_object* v___y_1077_; lean_object* v_val_1078_; uint8_t v___y_1082_; lean_object* v___y_1083_; lean_object* v_a_1084_; uint8_t v___y_1087_; uint8_t v___x_1108_; 
v_headers_1066_ = lean_ctor_get(v_head_1061_, 1);
v_generateDate_1067_ = lean_ctor_get_uint8(v_config_1060_, sizeof(void*)*24 + 1);
v_status_1068_ = lean_ctor_get(v_head_1061_, 0);
v_version_1069_ = lean_ctor_get_uint8(v_head_1061_, sizeof(void*)*2);
v_entries_1070_ = lean_ctor_get(v_headers_1066_, 0);
v_indexes_1071_ = lean_ctor_get(v_headers_1066_, 1);
v___x_1072_ = l_Std_Http_Header_Name_date;
v___x_1073_ = lean_box(v_version_1069_);
lean_inc(v_status_1068_);
lean_inc_ref(v_indexes_1071_);
lean_inc_ref(v_entries_1070_);
v___f_1074_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1074_, 0, v_entries_1070_);
lean_closure_set(v___f_1074_, 1, v___x_1072_);
lean_closure_set(v___f_1074_, 2, v_indexes_1071_);
lean_closure_set(v___f_1074_, 3, v_status_1068_);
lean_closure_set(v___f_1074_, 4, v___x_1073_);
v___x_1108_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(v_indexes_1071_, v___x_1072_);
if (v___x_1108_ == 0)
{
uint8_t v___x_1109_; 
v___x_1109_ = 1;
v___y_1087_ = v___x_1109_;
goto v___jp_1086_;
}
else
{
uint8_t v___x_1110_; 
v___x_1110_ = 0;
v___y_1087_ = v___x_1110_;
goto v___jp_1086_;
}
v___jp_1063_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1064_, 0, v_head_1061_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
return v___x_1065_;
}
v___jp_1075_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v_val_1078_);
v___x_1080_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_1077_, v___y_1076_, v___x_1079_, v___f_1074_);
return v___x_1080_;
}
v___jp_1081_:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1085_, 0, v_a_1084_);
v___y_1076_ = v___y_1082_;
v___y_1077_ = v___y_1083_;
v_val_1078_ = v___x_1085_;
goto v___jp_1075_;
}
v___jp_1086_:
{
if (v_generateDate_1067_ == 0)
{
lean_dec_ref(v___f_1074_);
goto v___jp_1063_;
}
else
{
if (v___y_1087_ == 0)
{
lean_dec_ref(v___f_1074_);
goto v___jp_1063_;
}
else
{
lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; lean_object* v___x_1091_; 
lean_dec_ref(v_head_1061_);
v___x_1088_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___closed__0));
v___x_1089_ = lean_unsigned_to_nat(0u);
v___x_1090_ = 0;
v___x_1091_ = lean_get_current_time();
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1093_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v___x_1091_, 1);
v___x_1093_ = l_Std_Time_Database_defaultGetZoneRules(v___x_1088_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1105_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1096_ = v___x_1093_;
v_isShared_1097_ = v_isSharedCheck_1105_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1093_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1105_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v_tz_1098_; lean_object* v___f_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1103_; 
lean_inc(v_a_1094_);
v_tz_1098_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v_a_1094_, v_a_1092_);
lean_inc(v_a_1092_);
lean_inc_ref(v_tz_1098_);
v___f_1099_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1099_, 0, v_tz_1098_);
lean_closure_set(v___f_1099_, 1, v_a_1092_);
lean_closure_set(v___f_1099_, 2, v___x_1089_);
v___x_1100_ = lean_mk_thunk(v___f_1099_);
v___x_1101_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
lean_ctor_set(v___x_1101_, 1, v_a_1092_);
lean_ctor_set(v___x_1101_, 2, v_a_1094_);
lean_ctor_set(v___x_1101_, 3, v_tz_1098_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set_tag(v___x_1096_, 1);
lean_ctor_set(v___x_1096_, 0, v___x_1101_);
v___x_1103_ = v___x_1096_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
v___y_1076_ = v___x_1090_;
v___y_1077_ = v___x_1089_;
v_val_1078_ = v___x_1103_;
goto v___jp_1075_;
}
}
}
else
{
lean_object* v_a_1106_; 
lean_dec(v_a_1092_);
v_a_1106_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1093_, 1);
v___y_1082_ = v___x_1090_;
v___y_1083_ = v___x_1089_;
v_a_1084_ = v_a_1106_;
goto v___jp_1081_;
}
}
else
{
lean_object* v_a_1107_; 
v_a_1107_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1091_, 1);
v___y_1082_ = v___x_1090_;
v___y_1083_ = v___x_1089_;
v_a_1084_ = v_a_1107_;
goto v___jp_1081_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object* v_config_1111_, lean_object* v_head_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1111_, v_head_1112_);
lean_dec_ref(v_config_1111_);
return v_res_1114_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object* v_00_u03b2_1115_, lean_object* v_m_1116_, lean_object* v_a_1117_){
_start:
{
uint8_t v___x_1118_; 
v___x_1118_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(v_m_1116_, v_a_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___boxed(lean_object* v_00_u03b2_1119_, lean_object* v_m_1120_, lean_object* v_a_1121_){
_start:
{
uint8_t v_res_1122_; lean_object* v_r_1123_; 
v_res_1122_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(v_00_u03b2_1119_, v_m_1120_, v_a_1121_);
lean_dec_ref(v_a_1121_);
lean_dec_ref(v_m_1120_);
v_r_1123_ = lean_box(v_res_1122_);
return v_r_1123_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2_spec__5(lean_object* v_a_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_nat_to_int(v_a_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object* v_a_1126_){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = lean_nat_to_int(v_a_1126_);
v___x_1128_ = l_Rat_ofInt(v___x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0(lean_object* v_00_u03b2_1129_, lean_object* v_a_1130_, lean_object* v_x_1131_){
_start:
{
uint8_t v___x_1132_; 
v___x_1132_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_1130_, v_x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1133_, lean_object* v_a_1134_, lean_object* v_x_1135_){
_start:
{
uint8_t v_res_1136_; lean_object* v_r_1137_; 
v_res_1136_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0(v_00_u03b2_1133_, v_a_1134_, v_x_1135_);
lean_dec(v_x_1135_);
lean_dec_ref(v_a_1134_);
v_r_1137_ = lean_box(v_res_1136_);
return v_r_1137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1(lean_object* v_00_u03b2_1138_, lean_object* v_data_1139_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(v_data_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1141_, lean_object* v_i_1142_, lean_object* v_source_1143_, lean_object* v_target_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(v_i_1142_, v_source_1143_, v_target_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1146_, lean_object* v_x_1147_, lean_object* v_x_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(v_x_1147_, v_x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object* v___y_1150_, lean_object* v_____r_1151_){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1153_ = lean_box(0);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___y_1150_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object* v___y_1157_, lean_object* v_____r_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(v___y_1157_, v_____r_1158_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object* v___f_1161_, lean_object* v_x_1162_){
_start:
{
if (lean_obj_tag(v_x_1162_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1172_; 
lean_dec_ref(v___f_1161_);
v_a_1164_ = lean_ctor_get(v_x_1162_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_x_1162_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1166_ = v_x_1162_;
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v_x_1162_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
return v___x_1170_;
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1174_; 
v_a_1173_ = lean_ctor_get(v_x_1162_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v_x_1162_, 1);
v___x_1174_ = lean_apply_2(v___f_1161_, v_a_1173_, lean_box(0));
return v___x_1174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object* v___f_1175_, lean_object* v_x_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(v___f_1175_, v_x_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object* v_close_1179_, lean_object* v_body_1180_, lean_object* v___f_1181_, lean_object* v___f_1182_, lean_object* v_x_1183_){
_start:
{
if (lean_obj_tag(v_x_1183_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1193_; 
lean_dec_ref(v___f_1182_);
lean_dec_ref(v___f_1181_);
lean_dec(v_body_1180_);
lean_dec_ref(v_close_1179_);
v_a_1185_ = lean_ctor_get(v_x_1183_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_x_1183_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1187_ = v_x_1183_;
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v_x_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; uint8_t v___x_1195_; 
v_a_1194_ = lean_ctor_get(v_x_1183_, 0);
lean_inc(v_a_1194_);
lean_dec_ref_known(v_x_1183_, 1);
v___x_1195_ = lean_unbox(v_a_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref(v___f_1182_);
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_apply_2(v_close_1179_, v_body_1180_, lean_box(0));
v___x_1198_ = lean_unbox(v_a_1194_);
lean_dec(v_a_1194_);
v___x_1199_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1196_, v___x_1198_, v___x_1197_, v___f_1181_);
return v___x_1199_;
}
else
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
lean_dec(v_a_1194_);
lean_dec_ref(v___f_1181_);
lean_dec(v_body_1180_);
lean_dec_ref(v_close_1179_);
v___x_1200_ = lean_box(0);
v___x_1201_ = lean_apply_2(v___f_1182_, v___x_1200_, lean_box(0));
return v___x_1201_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object* v_close_1202_, lean_object* v_body_1203_, lean_object* v___f_1204_, lean_object* v___f_1205_, lean_object* v_x_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(v_close_1202_, v_body_1203_, v___f_1204_, v___f_1205_, v_x_1206_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object* v___x_1209_, lean_object* v___f_1210_, lean_object* v___f_1211_, lean_object* v_x1_1212_, lean_object* v_x2_1213_){
_start:
{
lean_object* v_fst_1214_; uint8_t v___x_1215_; 
v_fst_1214_ = lean_ctor_get(v_x2_1213_, 0);
lean_inc(v_fst_1214_);
v___x_1215_ = lean_string_dec_eq(v___x_1209_, v_fst_1214_);
if (v___x_1215_ == 0)
{
lean_object* v_entries_1216_; lean_object* v_indexes_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1228_; 
v_entries_1216_ = lean_ctor_get(v_x1_1212_, 0);
v_indexes_1217_ = lean_ctor_get(v_x1_1212_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_x1_1212_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1219_ = v_x1_1212_;
v_isShared_1220_ = v_isSharedCheck_1228_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_indexes_1217_);
lean_inc(v_entries_1216_);
lean_dec(v_x1_1212_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1228_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v_i_1221_; lean_object* v_f_1222_; lean_object* v_entries_1223_; lean_object* v_indexes_1224_; lean_object* v___x_1226_; 
v_i_1221_ = lean_array_get_size(v_entries_1216_);
v_f_1222_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0), 2, 1);
lean_closure_set(v_f_1222_, 0, v_i_1221_);
v_entries_1223_ = lean_array_push(v_entries_1216_, v_x2_1213_);
v_indexes_1224_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1210_, v___f_1211_, v_indexes_1217_, v_fst_1214_, v_f_1222_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 1, v_indexes_1224_);
lean_ctor_set(v___x_1219_, 0, v_entries_1223_);
v___x_1226_ = v___x_1219_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_entries_1223_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_indexes_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_dec(v_fst_1214_);
lean_dec_ref(v_x2_1213_);
lean_dec_ref(v___f_1211_);
lean_dec_ref(v___f_1210_);
return v_x1_1212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object* v___x_1229_, lean_object* v___f_1230_, lean_object* v___f_1231_, lean_object* v_x1_1232_, lean_object* v_x2_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(v___x_1229_, v___f_1230_, v___f_1231_, v_x1_1232_, v_x2_1233_);
lean_dec_ref(v___x_1229_);
return v_res_1234_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1237_; 
v___x_1237_ = l_Std_Internal_IndexMultiMap_empty___redArg();
return v___x_1237_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13(void){
_start:
{
lean_object* v___f_1257_; lean_object* v___f_1258_; lean_object* v___x_1259_; lean_object* v___f_1260_; 
v___f_1257_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___f_1258_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___x_1259_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1260_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_1260_, 0, v___x_1259_);
lean_closure_set(v___f_1260_, 1, v___f_1258_);
lean_closure_set(v___f_1260_, 2, v___f_1257_);
return v___f_1260_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14(void){
_start:
{
lean_object* v___f_1261_; lean_object* v___f_1262_; lean_object* v___x_1263_; lean_object* v___f_1264_; 
v___f_1261_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___f_1262_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___x_1263_ = l_Std_Http_Header_Name_contentLength;
v___f_1264_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_1264_, 0, v___x_1263_);
lean_closure_set(v___f_1264_, 1, v___f_1262_);
lean_closure_set(v___f_1264_, 2, v___f_1261_);
return v___f_1264_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(lean_object* v___y_1265_, lean_object* v_body_1266_, lean_object* v_close_1267_, lean_object* v_isClosed_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v___y_1272_; uint8_t v_omitBody_1273_; lean_object* v___y_1286_; 
if (lean_obj_tag(v_x_1269_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1328_; 
lean_dec_ref(v_isClosed_1268_);
lean_dec_ref(v_close_1267_);
lean_dec(v_body_1266_);
lean_dec_ref(v___y_1265_);
v_a_1320_ = lean_ctor_get(v_x_1269_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v_x_1269_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1322_ = v_x_1269_;
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v_x_1269_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
}
}
else
{
lean_object* v_a_1329_; uint8_t v___y_1331_; uint8_t v___y_1332_; lean_object* v___y_1333_; uint8_t v___y_1334_; uint8_t v___y_1335_; uint8_t v___y_1336_; lean_object* v_writer_1344_; lean_object* v_reader_1345_; lean_object* v_config_1346_; lean_object* v_events_1347_; lean_object* v_error_1348_; lean_object* v_instant_1349_; uint8_t v_keepAlive_1350_; uint8_t v_forcedFlush_1351_; uint8_t v_pullBodyStalled_1352_; lean_object* v_userData_1353_; lean_object* v_outputData_1354_; lean_object* v_state_1355_; lean_object* v_knownSize_1356_; lean_object* v_messageHead_1357_; uint8_t v_sentMessage_1358_; uint8_t v_userClosedBody_1359_; uint8_t v_omitBody_1360_; lean_object* v_userDataBytes_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1444_; 
v_a_1329_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v_x_1269_, 1);
v_writer_1344_ = lean_ctor_get(v___y_1265_, 1);
lean_inc_ref(v_writer_1344_);
v_reader_1345_ = lean_ctor_get(v___y_1265_, 0);
v_config_1346_ = lean_ctor_get(v___y_1265_, 2);
v_events_1347_ = lean_ctor_get(v___y_1265_, 3);
v_error_1348_ = lean_ctor_get(v___y_1265_, 4);
v_instant_1349_ = lean_ctor_get(v___y_1265_, 5);
v_keepAlive_1350_ = lean_ctor_get_uint8(v___y_1265_, sizeof(void*)*6);
v_forcedFlush_1351_ = lean_ctor_get_uint8(v___y_1265_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1352_ = lean_ctor_get_uint8(v___y_1265_, sizeof(void*)*6 + 2);
v_userData_1353_ = lean_ctor_get(v_writer_1344_, 0);
v_outputData_1354_ = lean_ctor_get(v_writer_1344_, 1);
v_state_1355_ = lean_ctor_get(v_writer_1344_, 2);
v_knownSize_1356_ = lean_ctor_get(v_writer_1344_, 3);
v_messageHead_1357_ = lean_ctor_get(v_writer_1344_, 4);
v_sentMessage_1358_ = lean_ctor_get_uint8(v_writer_1344_, sizeof(void*)*6);
v_userClosedBody_1359_ = lean_ctor_get_uint8(v_writer_1344_, sizeof(void*)*6 + 1);
v_omitBody_1360_ = lean_ctor_get_uint8(v_writer_1344_, sizeof(void*)*6 + 2);
v_userDataBytes_1361_ = lean_ctor_get(v_writer_1344_, 5);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_writer_1344_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1363_ = v_writer_1344_;
v_isShared_1364_ = v_isSharedCheck_1444_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_userDataBytes_1361_);
lean_inc(v_messageHead_1357_);
lean_inc(v_knownSize_1356_);
lean_inc(v_state_1355_);
lean_inc(v_outputData_1354_);
lean_inc(v_userData_1353_);
lean_dec(v_writer_1344_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1444_;
goto v_resetjp_1362_;
}
v___jp_1330_:
{
lean_object* v_headerSize_1337_; lean_object* v_machine_1338_; lean_object* v_machine_1339_; lean_object* v_reader_1340_; lean_object* v_state_1341_; 
v_headerSize_1337_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___y_1331_, v_a_1329_, v___y_1334_);
v_machine_1338_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(v___y_1332_, v___y_1333_, v_headerSize_1337_, v___y_1336_);
v_machine_1339_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(v___y_1332_, v_machine_1338_, v_a_1329_);
lean_dec(v_a_1329_);
v_reader_1340_ = lean_ctor_get(v_machine_1339_, 0);
lean_inc_ref(v_reader_1340_);
v_state_1341_ = lean_ctor_get(v_reader_1340_, 0);
lean_inc(v_state_1341_);
lean_dec_ref(v_reader_1340_);
if (lean_obj_tag(v_state_1341_) == 7)
{
lean_dec_ref_known(v_state_1341_, 1);
if (v___y_1335_ == 0)
{
lean_object* v_writer_1342_; uint8_t v_omitBody_1343_; 
v_writer_1342_ = lean_ctor_get(v_machine_1339_, 1);
lean_inc_ref(v_writer_1342_);
v_omitBody_1343_ = lean_ctor_get_uint8(v_writer_1342_, sizeof(void*)*6 + 2);
lean_dec_ref(v_writer_1342_);
v___y_1272_ = v_machine_1339_;
v_omitBody_1273_ = v_omitBody_1343_;
goto v___jp_1271_;
}
else
{
v___y_1286_ = v_machine_1339_;
goto v___jp_1285_;
}
}
else
{
lean_dec(v_state_1341_);
v___y_1286_ = v_machine_1339_;
goto v___jp_1285_;
}
}
v_resetjp_1362_:
{
uint8_t v___y_1366_; lean_object* v___y_1367_; uint8_t v___y_1376_; lean_object* v___y_1377_; uint8_t v___y_1393_; uint8_t v___y_1394_; uint8_t v___y_1395_; uint8_t v___y_1396_; uint8_t v___y_1409_; uint8_t v___y_1410_; uint8_t v___y_1411_; uint8_t v___y_1430_; lean_object* v___x_1438_; uint8_t v___x_1439_; uint8_t v___y_1441_; 
v___x_1438_ = lean_box(1);
v___x_1439_ = l_Std_Http_Protocol_H1_Writer_instBEqState_beq(v_state_1355_, v___x_1438_);
if (v_sentMessage_1358_ == 0)
{
uint8_t v___x_1442_; 
v___x_1442_ = 1;
v___y_1441_ = v___x_1442_;
goto v___jp_1440_;
}
else
{
uint8_t v___x_1443_; 
v___x_1443_ = 0;
v___y_1441_ = v___x_1443_;
goto v___jp_1440_;
}
v___jp_1365_:
{
lean_object* v_message_1368_; lean_object* v___x_2272__overap_1369_; lean_object* v___x_1370_; lean_object* v___x_1372_; 
v_message_1368_ = l_Std_Http_Protocol_H1_Message_Head_setHeaders(v___y_1366_, v_a_1329_, v___y_1367_);
v___x_2272__overap_1369_ = l_Std_Http_Protocol_H1_instEncodeV11Head(v___y_1366_);
v___x_1370_ = lean_apply_2(v___x_2272__overap_1369_, v_outputData_1354_, v_message_1368_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 1, v___x_1370_);
v___x_1372_ = v___x_1363_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_userData_1353_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1374_, 2, v_state_1355_);
lean_ctor_set(v_reuseFailAlloc_1374_, 3, v_knownSize_1356_);
lean_ctor_set(v_reuseFailAlloc_1374_, 4, v_messageHead_1357_);
lean_ctor_set(v_reuseFailAlloc_1374_, 5, v_userDataBytes_1361_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*6, v_sentMessage_1358_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*6 + 1, v_userClosedBody_1359_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*6 + 2, v_omitBody_1360_);
v___x_1372_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1373_; 
v___x_1373_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1373_, 0, v_reader_1345_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
lean_ctor_set(v___x_1373_, 2, v_config_1346_);
lean_ctor_set(v___x_1373_, 3, v_events_1347_);
lean_ctor_set(v___x_1373_, 4, v_error_1348_);
lean_ctor_set(v___x_1373_, 5, v_instant_1349_);
lean_ctor_set_uint8(v___x_1373_, sizeof(void*)*6, v_keepAlive_1350_);
lean_ctor_set_uint8(v___x_1373_, sizeof(void*)*6 + 1, v_forcedFlush_1351_);
lean_ctor_set_uint8(v___x_1373_, sizeof(void*)*6 + 2, v_pullBodyStalled_1352_);
v___y_1272_ = v___x_1373_;
v_omitBody_1273_ = v_omitBody_1360_;
goto v___jp_1271_;
}
}
v___jp_1375_:
{
lean_object* v___x_1378_; lean_object* v___f_1379_; lean_object* v___f_1380_; uint8_t v___x_1381_; 
v___x_1378_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1379_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1380_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1381_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1379_, v___f_1380_, v___x_1378_, v___y_1377_);
if (v___x_1381_ == 0)
{
v___y_1366_ = v___y_1376_;
v___y_1367_ = v___y_1377_;
goto v___jp_1365_;
}
else
{
lean_object* v_entries_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v_entries_1382_ = lean_ctor_get(v___y_1377_, 0);
lean_inc_ref(v_entries_1382_);
lean_dec_ref(v___y_1377_);
v___x_1383_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2);
v___x_1384_ = lean_unsigned_to_nat(0u);
v___x_1385_ = lean_array_get_size(v_entries_1382_);
v___x_1386_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_1387_ = lean_nat_dec_lt(v___x_1384_, v___x_1385_);
if (v___x_1387_ == 0)
{
lean_dec_ref(v_entries_1382_);
v___y_1366_ = v___y_1376_;
v___y_1367_ = v___x_1383_;
goto v___jp_1365_;
}
else
{
lean_object* v___f_1388_; size_t v___x_1389_; size_t v___x_1390_; lean_object* v___x_1391_; 
v___f_1388_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13);
v___x_1389_ = ((size_t)0ULL);
v___x_1390_ = lean_usize_of_nat(v___x_1385_);
v___x_1391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1386_, v___f_1388_, v_entries_1382_, v___x_1389_, v___x_1390_, v___x_1383_);
v___y_1366_ = v___y_1376_;
v___y_1367_ = v___x_1391_;
goto v___jp_1365_;
}
}
}
v___jp_1392_:
{
uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v_indexes_1399_; lean_object* v___x_1400_; lean_object* v_machine_1401_; lean_object* v___x_1402_; lean_object* v___f_1403_; lean_object* v___f_1404_; uint8_t v___x_1405_; 
v___x_1397_ = 1;
v___x_1398_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1397_, v_a_1329_);
v_indexes_1399_ = lean_ctor_get(v___x_1398_, 1);
lean_inc_ref(v_indexes_1399_);
lean_dec_ref(v___x_1398_);
lean_inc(v_a_1329_);
v___x_1400_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1400_, 0, v_userData_1353_);
lean_ctor_set(v___x_1400_, 1, v_outputData_1354_);
lean_ctor_set(v___x_1400_, 2, v_state_1355_);
lean_ctor_set(v___x_1400_, 3, v_knownSize_1356_);
lean_ctor_set(v___x_1400_, 4, v_a_1329_);
lean_ctor_set(v___x_1400_, 5, v_userDataBytes_1361_);
lean_ctor_set_uint8(v___x_1400_, sizeof(void*)*6, v___y_1394_);
lean_ctor_set_uint8(v___x_1400_, sizeof(void*)*6 + 1, v_userClosedBody_1359_);
lean_ctor_set_uint8(v___x_1400_, sizeof(void*)*6 + 2, v_omitBody_1360_);
v_machine_1401_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_machine_1401_, 0, v_reader_1345_);
lean_ctor_set(v_machine_1401_, 1, v___x_1400_);
lean_ctor_set(v_machine_1401_, 2, v_config_1346_);
lean_ctor_set(v_machine_1401_, 3, v_events_1347_);
lean_ctor_set(v_machine_1401_, 4, v_error_1348_);
lean_ctor_set(v_machine_1401_, 5, v_instant_1349_);
lean_ctor_set_uint8(v_machine_1401_, sizeof(void*)*6, v_keepAlive_1350_);
lean_ctor_set_uint8(v_machine_1401_, sizeof(void*)*6 + 1, v_forcedFlush_1351_);
lean_ctor_set_uint8(v_machine_1401_, sizeof(void*)*6 + 2, v_pullBodyStalled_1352_);
v___x_1402_ = l_Std_Http_Header_Name_contentLength;
v___f_1403_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1404_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1405_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1403_, v___f_1404_, v_indexes_1399_, v___x_1402_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; uint8_t v___x_1407_; 
v___x_1406_ = l_Std_Http_Header_Name_transferEncoding;
v___x_1407_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1403_, v___f_1404_, v_indexes_1399_, v___x_1406_);
lean_dec_ref(v_indexes_1399_);
v___y_1331_ = v___x_1397_;
v___y_1332_ = v___y_1393_;
v___y_1333_ = v_machine_1401_;
v___y_1334_ = v___y_1395_;
v___y_1335_ = v___y_1396_;
v___y_1336_ = v___x_1407_;
goto v___jp_1330_;
}
else
{
lean_dec_ref(v_indexes_1399_);
v___y_1331_ = v___x_1397_;
v___y_1332_ = v___y_1393_;
v___y_1333_ = v_machine_1401_;
v___y_1334_ = v___y_1395_;
v___y_1335_ = v___y_1396_;
v___y_1336_ = v___x_1405_;
goto v___jp_1330_;
}
}
v___jp_1408_:
{
if (v___y_1411_ == 0)
{
lean_object* v_state_1412_; 
lean_del_object(v___x_1363_);
lean_dec(v_messageHead_1357_);
v_state_1412_ = lean_ctor_get(v_reader_1345_, 0);
if (lean_obj_tag(v_state_1412_) == 7)
{
v___y_1393_ = v___y_1409_;
v___y_1394_ = v___y_1410_;
v___y_1395_ = v___y_1411_;
v___y_1396_ = v___y_1410_;
goto v___jp_1392_;
}
else
{
v___y_1393_ = v___y_1409_;
v___y_1394_ = v___y_1410_;
v___y_1395_ = v___y_1411_;
v___y_1396_ = v___y_1411_;
goto v___jp_1392_;
}
}
else
{
uint8_t v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___f_1416_; lean_object* v___f_1417_; uint8_t v___x_1418_; 
v___x_1413_ = 1;
v___x_1414_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1413_, v_a_1329_);
v___x_1415_ = l_Std_Http_Header_Name_contentLength;
v___f_1416_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1417_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1418_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1416_, v___f_1417_, v___x_1415_, v___x_1414_);
if (v___x_1418_ == 0)
{
v___y_1376_ = v___x_1413_;
v___y_1377_ = v___x_1414_;
goto v___jp_1375_;
}
else
{
lean_object* v_entries_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v_entries_1419_ = lean_ctor_get(v___x_1414_, 0);
lean_inc_ref(v_entries_1419_);
lean_dec_ref(v___x_1414_);
v___x_1420_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2);
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = lean_array_get_size(v_entries_1419_);
v___x_1423_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_1424_ = lean_nat_dec_lt(v___x_1421_, v___x_1422_);
if (v___x_1424_ == 0)
{
lean_dec_ref(v_entries_1419_);
v___y_1376_ = v___x_1413_;
v___y_1377_ = v___x_1420_;
goto v___jp_1375_;
}
else
{
lean_object* v___f_1425_; size_t v___x_1426_; size_t v___x_1427_; lean_object* v___x_1428_; 
v___f_1425_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14);
v___x_1426_ = ((size_t)0ULL);
v___x_1427_ = lean_usize_of_nat(v___x_1422_);
v___x_1428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1423_, v___f_1425_, v_entries_1419_, v___x_1426_, v___x_1427_, v___x_1420_);
v___y_1376_ = v___x_1413_;
v___y_1377_ = v___x_1428_;
goto v___jp_1375_;
}
}
}
}
v___jp_1429_:
{
if (v___y_1430_ == 0)
{
lean_del_object(v___x_1363_);
lean_dec(v_userDataBytes_1361_);
lean_dec(v_messageHead_1357_);
lean_dec(v_knownSize_1356_);
lean_dec(v_state_1355_);
lean_dec_ref(v_outputData_1354_);
lean_dec_ref(v_userData_1353_);
lean_dec(v_a_1329_);
v___y_1272_ = v___y_1265_;
v_omitBody_1273_ = v_omitBody_1360_;
goto v___jp_1271_;
}
else
{
lean_object* v_status_1431_; uint8_t v___x_1432_; uint16_t v___x_1433_; uint16_t v___x_1434_; uint8_t v___x_1435_; 
lean_inc(v_instant_1349_);
lean_inc(v_error_1348_);
lean_inc_ref(v_events_1347_);
lean_inc_ref(v_config_1346_);
lean_inc_ref(v_reader_1345_);
lean_dec_ref(v___y_1265_);
v_status_1431_ = lean_ctor_get(v_a_1329_, 0);
v___x_1432_ = 0;
v___x_1433_ = 100;
v___x_1434_ = l_Std_Http_Status_toCode(v_status_1431_);
v___x_1435_ = lean_uint16_dec_le(v___x_1433_, v___x_1434_);
if (v___x_1435_ == 0)
{
v___y_1409_ = v___x_1432_;
v___y_1410_ = v___y_1430_;
v___y_1411_ = v___x_1435_;
goto v___jp_1408_;
}
else
{
uint16_t v___x_1436_; uint8_t v___x_1437_; 
v___x_1436_ = 200;
v___x_1437_ = lean_uint16_dec_lt(v___x_1434_, v___x_1436_);
v___y_1409_ = v___x_1432_;
v___y_1410_ = v___y_1430_;
v___y_1411_ = v___x_1437_;
goto v___jp_1408_;
}
}
}
v___jp_1440_:
{
if (v___x_1439_ == 0)
{
v___y_1430_ = v___x_1439_;
goto v___jp_1429_;
}
else
{
v___y_1430_ = v___y_1441_;
goto v___jp_1429_;
}
}
}
}
v___jp_1271_:
{
if (v_omitBody_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec_ref(v_isClosed_1268_);
lean_dec_ref(v_close_1267_);
v___x_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1274_, 0, v_body_1266_);
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___y_1272_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
else
{
lean_object* v___f_1278_; lean_object* v___f_1279_; lean_object* v___f_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___f_1278_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1278_, 0, v___y_1272_);
lean_inc_ref(v___f_1278_);
v___f_1279_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1279_, 0, v___f_1278_);
lean_inc(v_body_1266_);
v___f_1280_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1280_, 0, v_close_1267_);
lean_closure_set(v___f_1280_, 1, v_body_1266_);
lean_closure_set(v___f_1280_, 2, v___f_1279_);
lean_closure_set(v___f_1280_, 3, v___f_1278_);
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = 0;
v___x_1283_ = lean_apply_2(v_isClosed_1268_, v_body_1266_, lean_box(0));
v___x_1284_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1281_, v___x_1282_, v___x_1283_, v___f_1280_);
return v___x_1284_;
}
}
v___jp_1285_:
{
lean_object* v_writer_1287_; lean_object* v_reader_1288_; lean_object* v_config_1289_; lean_object* v_events_1290_; lean_object* v_error_1291_; lean_object* v_instant_1292_; uint8_t v_keepAlive_1293_; uint8_t v_forcedFlush_1294_; uint8_t v_pullBodyStalled_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1319_; 
v_writer_1287_ = lean_ctor_get(v___y_1286_, 1);
v_reader_1288_ = lean_ctor_get(v___y_1286_, 0);
v_config_1289_ = lean_ctor_get(v___y_1286_, 2);
v_events_1290_ = lean_ctor_get(v___y_1286_, 3);
v_error_1291_ = lean_ctor_get(v___y_1286_, 4);
v_instant_1292_ = lean_ctor_get(v___y_1286_, 5);
v_keepAlive_1293_ = lean_ctor_get_uint8(v___y_1286_, sizeof(void*)*6);
v_forcedFlush_1294_ = lean_ctor_get_uint8(v___y_1286_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1295_ = lean_ctor_get_uint8(v___y_1286_, sizeof(void*)*6 + 2);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___y_1286_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1297_ = v___y_1286_;
v_isShared_1298_ = v_isSharedCheck_1319_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_instant_1292_);
lean_inc(v_error_1291_);
lean_inc(v_events_1290_);
lean_inc(v_config_1289_);
lean_inc(v_writer_1287_);
lean_inc(v_reader_1288_);
lean_dec(v___y_1286_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1319_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v_userData_1299_; lean_object* v_outputData_1300_; lean_object* v_knownSize_1301_; lean_object* v_messageHead_1302_; uint8_t v_sentMessage_1303_; uint8_t v_userClosedBody_1304_; uint8_t v_omitBody_1305_; lean_object* v_userDataBytes_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1317_; 
v_userData_1299_ = lean_ctor_get(v_writer_1287_, 0);
v_outputData_1300_ = lean_ctor_get(v_writer_1287_, 1);
v_knownSize_1301_ = lean_ctor_get(v_writer_1287_, 3);
v_messageHead_1302_ = lean_ctor_get(v_writer_1287_, 4);
v_sentMessage_1303_ = lean_ctor_get_uint8(v_writer_1287_, sizeof(void*)*6);
v_userClosedBody_1304_ = lean_ctor_get_uint8(v_writer_1287_, sizeof(void*)*6 + 1);
v_omitBody_1305_ = lean_ctor_get_uint8(v_writer_1287_, sizeof(void*)*6 + 2);
v_userDataBytes_1306_ = lean_ctor_get(v_writer_1287_, 5);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_writer_1287_);
if (v_isSharedCheck_1317_ == 0)
{
lean_object* v_unused_1318_; 
v_unused_1318_ = lean_ctor_get(v_writer_1287_, 2);
lean_dec(v_unused_1318_);
v___x_1308_ = v_writer_1287_;
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_userDataBytes_1306_);
lean_inc(v_messageHead_1302_);
lean_inc(v_knownSize_1301_);
lean_inc(v_outputData_1300_);
lean_inc(v_userData_1299_);
lean_dec(v_writer_1287_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
v___x_1310_ = lean_box(2);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 2, v___x_1310_);
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_userData_1299_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v_outputData_1300_);
lean_ctor_set(v_reuseFailAlloc_1316_, 2, v___x_1310_);
lean_ctor_set(v_reuseFailAlloc_1316_, 3, v_knownSize_1301_);
lean_ctor_set(v_reuseFailAlloc_1316_, 4, v_messageHead_1302_);
lean_ctor_set(v_reuseFailAlloc_1316_, 5, v_userDataBytes_1306_);
lean_ctor_set_uint8(v_reuseFailAlloc_1316_, sizeof(void*)*6, v_sentMessage_1303_);
lean_ctor_set_uint8(v_reuseFailAlloc_1316_, sizeof(void*)*6 + 1, v_userClosedBody_1304_);
lean_ctor_set_uint8(v_reuseFailAlloc_1316_, sizeof(void*)*6 + 2, v_omitBody_1305_);
v___x_1312_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1314_; 
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 1, v___x_1312_);
v___x_1314_ = v___x_1297_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_reader_1288_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v___x_1312_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v_config_1289_);
lean_ctor_set(v_reuseFailAlloc_1315_, 3, v_events_1290_);
lean_ctor_set(v_reuseFailAlloc_1315_, 4, v_error_1291_);
lean_ctor_set(v_reuseFailAlloc_1315_, 5, v_instant_1292_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, sizeof(void*)*6, v_keepAlive_1293_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, sizeof(void*)*6 + 1, v_forcedFlush_1294_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, sizeof(void*)*6 + 2, v_pullBodyStalled_1295_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
v___y_1272_ = v___x_1314_;
v_omitBody_1273_ = v_omitBody_1305_;
goto v___jp_1271_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed(lean_object* v___y_1445_, lean_object* v_body_1446_, lean_object* v_close_1447_, lean_object* v_isClosed_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(v___y_1445_, v_body_1446_, v_close_1447_, v_isClosed_1448_, v_x_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object* v_body_1452_, lean_object* v_close_1453_, lean_object* v_isClosed_1454_, lean_object* v_config_1455_, lean_object* v_line_1456_, lean_object* v_machine_1457_, lean_object* v_x_1458_){
_start:
{
lean_object* v___y_1461_; 
if (lean_obj_tag(v_x_1458_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1475_; 
lean_dec_ref(v_machine_1457_);
lean_dec_ref(v_line_1456_);
lean_dec_ref(v_isClosed_1454_);
lean_dec_ref(v_close_1453_);
lean_dec(v_body_1452_);
v_a_1467_ = lean_ctor_get(v_x_1458_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_x_1458_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1469_ = v_x_1458_;
v_isShared_1470_ = v_isSharedCheck_1475_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v_x_1458_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1475_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___x_1473_; 
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
}
}
else
{
lean_object* v_a_1476_; 
v_a_1476_ = lean_ctor_get(v_x_1458_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v_x_1458_, 1);
if (lean_obj_tag(v_a_1476_) == 1)
{
lean_object* v_writer_1477_; lean_object* v_reader_1478_; lean_object* v_config_1479_; lean_object* v_events_1480_; lean_object* v_error_1481_; lean_object* v_instant_1482_; uint8_t v_keepAlive_1483_; uint8_t v_forcedFlush_1484_; uint8_t v_pullBodyStalled_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1508_; 
v_writer_1477_ = lean_ctor_get(v_machine_1457_, 1);
v_reader_1478_ = lean_ctor_get(v_machine_1457_, 0);
v_config_1479_ = lean_ctor_get(v_machine_1457_, 2);
v_events_1480_ = lean_ctor_get(v_machine_1457_, 3);
v_error_1481_ = lean_ctor_get(v_machine_1457_, 4);
v_instant_1482_ = lean_ctor_get(v_machine_1457_, 5);
v_keepAlive_1483_ = lean_ctor_get_uint8(v_machine_1457_, sizeof(void*)*6);
v_forcedFlush_1484_ = lean_ctor_get_uint8(v_machine_1457_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1485_ = lean_ctor_get_uint8(v_machine_1457_, sizeof(void*)*6 + 2);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_machine_1457_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1487_ = v_machine_1457_;
v_isShared_1488_ = v_isSharedCheck_1508_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_instant_1482_);
lean_inc(v_error_1481_);
lean_inc(v_events_1480_);
lean_inc(v_config_1479_);
lean_inc(v_writer_1477_);
lean_inc(v_reader_1478_);
lean_dec(v_machine_1457_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1508_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v_userData_1489_; lean_object* v_outputData_1490_; lean_object* v_state_1491_; lean_object* v_messageHead_1492_; uint8_t v_sentMessage_1493_; uint8_t v_userClosedBody_1494_; uint8_t v_omitBody_1495_; lean_object* v_userDataBytes_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1506_; 
v_userData_1489_ = lean_ctor_get(v_writer_1477_, 0);
v_outputData_1490_ = lean_ctor_get(v_writer_1477_, 1);
v_state_1491_ = lean_ctor_get(v_writer_1477_, 2);
v_messageHead_1492_ = lean_ctor_get(v_writer_1477_, 4);
v_sentMessage_1493_ = lean_ctor_get_uint8(v_writer_1477_, sizeof(void*)*6);
v_userClosedBody_1494_ = lean_ctor_get_uint8(v_writer_1477_, sizeof(void*)*6 + 1);
v_omitBody_1495_ = lean_ctor_get_uint8(v_writer_1477_, sizeof(void*)*6 + 2);
v_userDataBytes_1496_ = lean_ctor_get(v_writer_1477_, 5);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_writer_1477_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; 
v_unused_1507_ = lean_ctor_get(v_writer_1477_, 3);
lean_dec(v_unused_1507_);
v___x_1498_ = v_writer_1477_;
v_isShared_1499_ = v_isSharedCheck_1506_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_userDataBytes_1496_);
lean_inc(v_messageHead_1492_);
lean_inc(v_state_1491_);
lean_inc(v_outputData_1490_);
lean_inc(v_userData_1489_);
lean_dec(v_writer_1477_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1506_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 3, v_a_1476_);
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_userData_1489_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_outputData_1490_);
lean_ctor_set(v_reuseFailAlloc_1505_, 2, v_state_1491_);
lean_ctor_set(v_reuseFailAlloc_1505_, 3, v_a_1476_);
lean_ctor_set(v_reuseFailAlloc_1505_, 4, v_messageHead_1492_);
lean_ctor_set(v_reuseFailAlloc_1505_, 5, v_userDataBytes_1496_);
lean_ctor_set_uint8(v_reuseFailAlloc_1505_, sizeof(void*)*6, v_sentMessage_1493_);
lean_ctor_set_uint8(v_reuseFailAlloc_1505_, sizeof(void*)*6 + 1, v_userClosedBody_1494_);
lean_ctor_set_uint8(v_reuseFailAlloc_1505_, sizeof(void*)*6 + 2, v_omitBody_1495_);
v___x_1501_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1503_; 
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 1, v___x_1501_);
v___x_1503_ = v___x_1487_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_reader_1478_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1504_, 2, v_config_1479_);
lean_ctor_set(v_reuseFailAlloc_1504_, 3, v_events_1480_);
lean_ctor_set(v_reuseFailAlloc_1504_, 4, v_error_1481_);
lean_ctor_set(v_reuseFailAlloc_1504_, 5, v_instant_1482_);
lean_ctor_set_uint8(v_reuseFailAlloc_1504_, sizeof(void*)*6, v_keepAlive_1483_);
lean_ctor_set_uint8(v_reuseFailAlloc_1504_, sizeof(void*)*6 + 1, v_forcedFlush_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1504_, sizeof(void*)*6 + 2, v_pullBodyStalled_1485_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
v___y_1461_ = v___x_1503_;
goto v___jp_1460_;
}
}
}
}
}
else
{
lean_dec(v_a_1476_);
v___y_1461_ = v_machine_1457_;
goto v___jp_1460_;
}
}
v___jp_1460_:
{
lean_object* v___f_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___f_1462_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1462_, 0, v___y_1461_);
lean_closure_set(v___f_1462_, 1, v_body_1452_);
lean_closure_set(v___f_1462_, 2, v_close_1453_);
lean_closure_set(v___f_1462_, 3, v_isClosed_1454_);
v___x_1463_ = lean_unsigned_to_nat(0u);
v___x_1464_ = 0;
v___x_1465_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1455_, v_line_1456_);
v___x_1466_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1463_, v___x_1464_, v___x_1465_, v___f_1462_);
return v___x_1466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object* v_body_1509_, lean_object* v_close_1510_, lean_object* v_isClosed_1511_, lean_object* v_config_1512_, lean_object* v_line_1513_, lean_object* v_machine_1514_, lean_object* v_x_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(v_body_1509_, v_close_1510_, v_isClosed_1511_, v_config_1512_, v_line_1513_, v_machine_1514_, v_x_1515_);
lean_dec_ref(v_config_1512_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object* v_inst_1518_, lean_object* v_config_1519_, lean_object* v_machine_1520_, lean_object* v_res_1521_){
_start:
{
lean_object* v_close_1523_; lean_object* v_isClosed_1524_; lean_object* v_getKnownSize_1525_; lean_object* v_line_1526_; lean_object* v_body_1527_; lean_object* v___f_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_close_1523_ = lean_ctor_get(v_inst_1518_, 1);
lean_inc_ref(v_close_1523_);
v_isClosed_1524_ = lean_ctor_get(v_inst_1518_, 2);
lean_inc_ref(v_isClosed_1524_);
v_getKnownSize_1525_ = lean_ctor_get(v_inst_1518_, 5);
lean_inc_ref(v_getKnownSize_1525_);
lean_dec_ref(v_inst_1518_);
v_line_1526_ = lean_ctor_get(v_res_1521_, 0);
lean_inc_ref(v_line_1526_);
v_body_1527_ = lean_ctor_get(v_res_1521_, 1);
lean_inc_n(v_body_1527_, 2);
lean_dec_ref(v_res_1521_);
v___f_1528_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_1528_, 0, v_body_1527_);
lean_closure_set(v___f_1528_, 1, v_close_1523_);
lean_closure_set(v___f_1528_, 2, v_isClosed_1524_);
lean_closure_set(v___f_1528_, 3, v_config_1519_);
lean_closure_set(v___f_1528_, 4, v_line_1526_);
lean_closure_set(v___f_1528_, 5, v_machine_1520_);
v___x_1529_ = lean_unsigned_to_nat(0u);
v___x_1530_ = 0;
v___x_1531_ = lean_apply_2(v_getKnownSize_1525_, v_body_1527_, lean_box(0));
v___x_1532_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1529_, v___x_1530_, v___x_1531_, v___f_1528_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object* v_inst_1533_, lean_object* v_config_1534_, lean_object* v_machine_1535_, lean_object* v_res_1536_, lean_object* v___y_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1533_, v_config_1534_, v_machine_1535_, v_res_1536_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object* v_00_u03b2_1539_, lean_object* v_inst_1540_, lean_object* v_config_1541_, lean_object* v_machine_1542_, lean_object* v_res_1543_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1540_, v_config_1541_, v_machine_1542_, v_res_1543_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object* v_00_u03b2_1546_, lean_object* v_inst_1547_, lean_object* v_config_1548_, lean_object* v_machine_1549_, lean_object* v_res_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(v_00_u03b2_1546_, v_inst_1547_, v_config_1548_, v_machine_1549_, v_res_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object* v_____do__lift_1553_, lean_object* v___y_1554_){
_start:
{
uint8_t v_closed_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v_closed_1556_ = lean_ctor_get_uint8(v_____do__lift_1553_, sizeof(void*)*6);
v___x_1557_ = lean_box(v_closed_1556_);
v___x_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object* v_____do__lift_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(v_____do__lift_1560_, v___y_1561_);
lean_dec(v___y_1561_);
lean_dec_ref(v_____do__lift_1560_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object* v___x_1564_, lean_object* v_x_1565_){
_start:
{
if (lean_obj_tag(v_x_1565_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1575_; 
lean_dec_ref(v___x_1564_);
v_a_1567_ = lean_ctor_get(v_x_1565_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_x_1565_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1569_ = v_x_1565_;
v_isShared_1570_ = v_isSharedCheck_1575_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v_x_1565_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1575_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_object* v___x_1573_; 
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
}
}
else
{
lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1584_; 
v_isSharedCheck_1584_ = !lean_is_exclusive(v_x_1565_);
if (v_isSharedCheck_1584_ == 0)
{
lean_object* v_unused_1585_; 
v_unused_1585_ = lean_ctor_get(v_x_1565_, 0);
lean_dec(v_unused_1585_);
v___x_1577_ = v_x_1565_;
v_isShared_1578_ = v_isSharedCheck_1584_;
goto v_resetjp_1576_;
}
else
{
lean_dec(v_x_1565_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1584_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1581_; 
v___x_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1564_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1579_);
v___x_1581_ = v___x_1577_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v___x_1579_);
v___x_1581_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
return v___x_1582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object* v___x_1586_, lean_object* v_x_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(v___x_1586_, v_x_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object* v___x_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; lean_object* v_pendingProducer_1598_; lean_object* v_pendingConsumer_1599_; lean_object* v_interestWaiter_1600_; uint8_t v_closed_1601_; lean_object* v_pendingIncompleteChunk_1602_; lean_object* v_closeError_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1612_; 
v___x_1597_ = lean_st_ref_take(v___y_1595_);
v_pendingProducer_1598_ = lean_ctor_get(v___x_1597_, 0);
v_pendingConsumer_1599_ = lean_ctor_get(v___x_1597_, 1);
v_interestWaiter_1600_ = lean_ctor_get(v___x_1597_, 2);
v_closed_1601_ = lean_ctor_get_uint8(v___x_1597_, sizeof(void*)*6);
v_pendingIncompleteChunk_1602_ = lean_ctor_get(v___x_1597_, 4);
v_closeError_1603_ = lean_ctor_get(v___x_1597_, 5);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1612_ == 0)
{
lean_object* v_unused_1613_; 
v_unused_1613_ = lean_ctor_get(v___x_1597_, 3);
lean_dec(v_unused_1613_);
v___x_1605_ = v___x_1597_;
v_isShared_1606_ = v_isSharedCheck_1612_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_closeError_1603_);
lean_inc(v_pendingIncompleteChunk_1602_);
lean_inc(v_interestWaiter_1600_);
lean_inc(v_pendingConsumer_1599_);
lean_inc(v_pendingProducer_1598_);
lean_dec(v___x_1597_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1612_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 3, v___x_1594_);
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_pendingProducer_1598_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_pendingConsumer_1599_);
lean_ctor_set(v_reuseFailAlloc_1611_, 2, v_interestWaiter_1600_);
lean_ctor_set(v_reuseFailAlloc_1611_, 3, v___x_1594_);
lean_ctor_set(v_reuseFailAlloc_1611_, 4, v_pendingIncompleteChunk_1602_);
lean_ctor_set(v_reuseFailAlloc_1611_, 5, v_closeError_1603_);
lean_ctor_set_uint8(v_reuseFailAlloc_1611_, sizeof(void*)*6, v_closed_1601_);
v___x_1608_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = lean_st_ref_put(v___y_1595_, v___x_1608_);
v___x_1610_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1));
return v___x_1610_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object* v___x_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(v___x_1614_, v___y_1615_);
lean_dec(v___y_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object* v_machine_1618_, lean_object* v_requestStream_1619_, lean_object* v_keepAliveTimeout_1620_, lean_object* v_currentTimeout_1621_, lean_object* v_headerTimeout_1622_, lean_object* v_response_1623_, lean_object* v_respStream_1624_, lean_object* v_expectData_1625_, uint8_t v_handlerDispatched_1626_, lean_object* v_____r_1627_){
_start:
{
uint8_t v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1629_ = 0;
v___x_1630_ = lean_box(0);
v___x_1631_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1631_, 0, v_machine_1618_);
lean_ctor_set(v___x_1631_, 1, v_requestStream_1619_);
lean_ctor_set(v___x_1631_, 2, v_keepAliveTimeout_1620_);
lean_ctor_set(v___x_1631_, 3, v_currentTimeout_1621_);
lean_ctor_set(v___x_1631_, 4, v_headerTimeout_1622_);
lean_ctor_set(v___x_1631_, 5, v_response_1623_);
lean_ctor_set(v___x_1631_, 6, v_respStream_1624_);
lean_ctor_set(v___x_1631_, 7, v_expectData_1625_);
lean_ctor_set(v___x_1631_, 8, v___x_1630_);
lean_ctor_set_uint8(v___x_1631_, sizeof(void*)*9, v___x_1629_);
lean_ctor_set_uint8(v___x_1631_, sizeof(void*)*9 + 1, v_handlerDispatched_1626_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
v___x_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object* v_machine_1635_, lean_object* v_requestStream_1636_, lean_object* v_keepAliveTimeout_1637_, lean_object* v_currentTimeout_1638_, lean_object* v_headerTimeout_1639_, lean_object* v_response_1640_, lean_object* v_respStream_1641_, lean_object* v_expectData_1642_, lean_object* v_handlerDispatched_1643_, lean_object* v_____r_1644_, lean_object* v___y_1645_){
_start:
{
uint8_t v_handlerDispatched_boxed_1646_; lean_object* v_res_1647_; 
v_handlerDispatched_boxed_1646_ = lean_unbox(v_handlerDispatched_1643_);
v_res_1647_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(v_machine_1635_, v_requestStream_1636_, v_keepAliveTimeout_1637_, v_currentTimeout_1638_, v_headerTimeout_1639_, v_response_1640_, v_respStream_1641_, v_expectData_1642_, v_handlerDispatched_boxed_1646_, v_____r_1644_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object* v___f_1648_, lean_object* v_x_1649_){
_start:
{
if (lean_obj_tag(v_x_1649_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v___f_1648_);
v_a_1651_ = lean_ctor_get(v_x_1649_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_x_1649_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1653_ = v_x_1649_;
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v_x_1649_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1661_; 
v_a_1660_ = lean_ctor_get(v_x_1649_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v_x_1649_, 1);
v___x_1661_ = lean_apply_2(v___f_1648_, v_a_1660_, lean_box(0));
return v___x_1661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object* v___f_1662_, lean_object* v_x_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(v___f_1662_, v_x_1663_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object* v_requestStream_1666_, lean_object* v___f_1667_, lean_object* v___f_1668_, lean_object* v_x_1669_){
_start:
{
if (lean_obj_tag(v_x_1669_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1679_; 
lean_dec_ref(v___f_1668_);
lean_dec_ref(v___f_1667_);
lean_dec_ref(v_requestStream_1666_);
v_a_1671_ = lean_ctor_get(v_x_1669_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v_x_1669_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1673_ = v_x_1669_;
v_isShared_1674_ = v_isSharedCheck_1679_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v_x_1669_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1679_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
lean_object* v___x_1677_; 
v___x_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
return v___x_1677_;
}
}
}
else
{
lean_object* v_a_1680_; uint8_t v___x_1681_; 
v_a_1680_ = lean_ctor_get(v_x_1669_, 0);
lean_inc(v_a_1680_);
lean_dec_ref_known(v_x_1669_, 1);
v___x_1681_ = lean_unbox(v_a_1680_);
if (v___x_1681_ == 0)
{
lean_object* v___x_1682_; lean_object* v___x_1683_; uint8_t v___x_1684_; lean_object* v___x_1685_; 
lean_dec_ref(v___f_1668_);
v___x_1682_ = lean_unsigned_to_nat(0u);
v___x_1683_ = l_Std_Http_Body_Stream_close(v_requestStream_1666_);
v___x_1684_ = lean_unbox(v_a_1680_);
lean_dec(v_a_1680_);
v___x_1685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1682_, v___x_1684_, v___x_1683_, v___f_1667_);
return v___x_1685_;
}
else
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
lean_dec(v_a_1680_);
lean_dec_ref(v___f_1667_);
lean_dec_ref(v_requestStream_1666_);
v___x_1686_ = lean_box(0);
v___x_1687_ = lean_apply_2(v___f_1668_, v___x_1686_, lean_box(0));
return v___x_1687_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object* v_requestStream_1688_, lean_object* v___f_1689_, lean_object* v___f_1690_, lean_object* v_x_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(v_requestStream_1688_, v___f_1689_, v___f_1690_, v_x_1691_);
return v_res_1693_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1694_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_1695_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___f_1702_; lean_object* v___f_1703_; 
v___x_1701_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1702_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4));
v___f_1703_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1703_, 0, v___f_1702_);
lean_closure_set(v___f_1703_, 1, v___x_1701_);
return v___f_1703_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1712_; lean_object* v___f_1713_; lean_object* v___f_1714_; 
v___x_1712_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1713_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9));
v___f_1714_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1714_, 0, v___f_1713_);
lean_closure_set(v___f_1714_, 1, v___x_1712_);
return v___f_1714_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11(void){
_start:
{
lean_object* v___f_1715_; lean_object* v___x_1716_; 
v___f_1715_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10);
v___x_1716_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_1716_, 0, lean_box(0));
lean_closure_set(v___x_1716_, 1, lean_box(0));
lean_closure_set(v___x_1716_, 2, lean_box(0));
lean_closure_set(v___x_1716_, 3, v___f_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object* v___y_1717_, lean_object* v___f_1718_, lean_object* v_x_1719_){
_start:
{
if (lean_obj_tag(v_x_1719_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1729_; 
lean_dec_ref(v___f_1718_);
lean_dec_ref(v___y_1717_);
v_a_1721_ = lean_ctor_get(v_x_1719_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v_x_1719_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1723_ = v_x_1719_;
v_isShared_1724_ = v_isSharedCheck_1729_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v_x_1719_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1729_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
return v___x_1727_;
}
}
}
else
{
lean_object* v_machine_1730_; lean_object* v_requestStream_1731_; lean_object* v_keepAliveTimeout_1732_; lean_object* v_currentTimeout_1733_; lean_object* v_headerTimeout_1734_; lean_object* v_response_1735_; lean_object* v_respStream_1736_; lean_object* v_expectData_1737_; uint8_t v_handlerDispatched_1738_; lean_object* v___x_1739_; lean_object* v___f_1740_; lean_object* v___f_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; lean_object* v___f_1746_; lean_object* v___f_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_4870__overap_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec_ref_known(v_x_1719_, 1);
v_machine_1730_ = lean_ctor_get(v___y_1717_, 0);
lean_inc_ref(v_machine_1730_);
v_requestStream_1731_ = lean_ctor_get(v___y_1717_, 1);
lean_inc_ref_n(v_requestStream_1731_, 3);
v_keepAliveTimeout_1732_ = lean_ctor_get(v___y_1717_, 2);
lean_inc(v_keepAliveTimeout_1732_);
v_currentTimeout_1733_ = lean_ctor_get(v___y_1717_, 3);
lean_inc(v_currentTimeout_1733_);
v_headerTimeout_1734_ = lean_ctor_get(v___y_1717_, 4);
lean_inc(v_headerTimeout_1734_);
v_response_1735_ = lean_ctor_get(v___y_1717_, 5);
lean_inc_ref(v_response_1735_);
v_respStream_1736_ = lean_ctor_get(v___y_1717_, 6);
lean_inc(v_respStream_1736_);
v_expectData_1737_ = lean_ctor_get(v___y_1717_, 7);
lean_inc(v_expectData_1737_);
v_handlerDispatched_1738_ = lean_ctor_get_uint8(v___y_1717_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_1717_);
v___x_1739_ = lean_box(v_handlerDispatched_1738_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed), 11, 9);
lean_closure_set(v___f_1740_, 0, v_machine_1730_);
lean_closure_set(v___f_1740_, 1, v_requestStream_1731_);
lean_closure_set(v___f_1740_, 2, v_keepAliveTimeout_1732_);
lean_closure_set(v___f_1740_, 3, v_currentTimeout_1733_);
lean_closure_set(v___f_1740_, 4, v_headerTimeout_1734_);
lean_closure_set(v___f_1740_, 5, v_response_1735_);
lean_closure_set(v___f_1740_, 6, v_respStream_1736_);
lean_closure_set(v___f_1740_, 7, v_expectData_1737_);
lean_closure_set(v___f_1740_, 8, v___x_1739_);
lean_inc_ref(v___f_1740_);
v___f_1741_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1741_, 0, v___f_1740_);
v___f_1742_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1742_, 0, v_requestStream_1731_);
lean_closure_set(v___f_1742_, 1, v___f_1741_);
lean_closure_set(v___f_1742_, 2, v___f_1740_);
v___x_1743_ = lean_unsigned_to_nat(0u);
v___x_1744_ = 0;
v___x_1745_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_1746_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_1747_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_1748_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_1749_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1749_, 0, lean_box(0));
lean_closure_set(v___x_1749_, 1, lean_box(0));
lean_closure_set(v___x_1749_, 2, v___x_1745_);
lean_closure_set(v___x_1749_, 3, lean_box(0));
lean_closure_set(v___x_1749_, 4, lean_box(0));
lean_closure_set(v___x_1749_, 5, v___x_1748_);
lean_closure_set(v___x_1749_, 6, v___f_1718_);
v___x_4870__overap_1750_ = l_Std_Mutex_atomically___redArg(v___x_1745_, v___f_1746_, v___f_1747_, v_requestStream_1731_, v___x_1749_);
v___x_1751_ = lean_apply_1(v___x_4870__overap_1750_, lean_box(0));
v___x_1752_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1743_, v___x_1744_, v___x_1751_, v___f_1742_);
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object* v___y_1753_, lean_object* v___f_1754_, lean_object* v_x_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(v___y_1753_, v___f_1754_, v_x_1755_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object* v___y_1758_, lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___y_1758_);
v_a_1761_ = lean_ctor_get(v_x_1759_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1763_ = v_x_1759_;
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v_x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
}
}
else
{
lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1778_; 
v_isSharedCheck_1778_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v_x_1759_, 0);
lean_dec(v_unused_1779_);
v___x_1771_ = v_x_1759_;
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
else
{
lean_dec(v_x_1759_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1773_; lean_object* v___x_1775_; 
v___x_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___y_1758_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1773_);
v___x_1775_ = v___x_1771_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1773_);
v___x_1775_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
return v___x_1776_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object* v___y_1780_, lean_object* v_x_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(v___y_1780_, v_x_1781_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object* v_requestStream_1784_, lean_object* v___f_1785_, lean_object* v___y_1786_, lean_object* v_x_1787_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1797_; 
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___f_1785_);
lean_dec_ref(v_requestStream_1784_);
v_a_1789_ = lean_ctor_get(v_x_1787_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_x_1787_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1791_ = v_x_1787_;
v_isShared_1792_ = v_isSharedCheck_1797_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v_x_1787_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1797_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
return v___x_1795_;
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1812_; 
v_a_1798_ = lean_ctor_get(v_x_1787_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_x_1787_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1800_ = v_x_1787_;
v_isShared_1801_ = v_isSharedCheck_1812_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v_x_1787_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1812_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
uint8_t v___x_1802_; 
v___x_1802_ = lean_unbox(v_a_1798_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; uint8_t v___x_1805_; lean_object* v___x_1806_; 
lean_del_object(v___x_1800_);
lean_dec_ref(v___y_1786_);
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = l_Std_Http_Body_Stream_close(v_requestStream_1784_);
v___x_1805_ = lean_unbox(v_a_1798_);
lean_dec(v_a_1798_);
v___x_1806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1803_, v___x_1805_, v___x_1804_, v___f_1785_);
return v___x_1806_;
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
lean_dec(v_a_1798_);
lean_dec_ref(v___f_1785_);
lean_dec_ref(v_requestStream_1784_);
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___y_1786_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 0, v___x_1807_);
v___x_1809_ = v___x_1800_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; 
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object* v_requestStream_1813_, lean_object* v___f_1814_, lean_object* v___y_1815_, lean_object* v_x_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(v_requestStream_1813_, v___f_1814_, v___y_1815_, v_x_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object* v_config_1819_, lean_object* v_machine_1820_, lean_object* v_a_1821_, uint8_t v_requiresData_1822_, lean_object* v_expectData_1823_, lean_object* v_pendingHead_1824_, lean_object* v_x_1825_){
_start:
{
if (lean_obj_tag(v_x_1825_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1835_; 
lean_dec(v_pendingHead_1824_);
lean_dec(v_expectData_1823_);
lean_dec_ref(v_a_1821_);
lean_dec_ref(v_machine_1820_);
v_a_1827_ = lean_ctor_get(v_x_1825_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v_x_1825_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1829_ = v_x_1825_;
v_isShared_1830_ = v_isSharedCheck_1835_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v_x_1825_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1835_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
return v___x_1833_;
}
}
}
else
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1850_; 
v_a_1836_ = lean_ctor_get(v_x_1825_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_x_1825_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1838_ = v_x_1825_;
v_isShared_1839_ = v_isSharedCheck_1850_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v_x_1825_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1850_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v_keepAliveTimeout_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; 
v_keepAliveTimeout_1840_ = lean_ctor_get(v_config_1819_, 5);
lean_inc_n(v_keepAliveTimeout_1840_, 2);
v___x_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1841_, 0, v_keepAliveTimeout_1840_);
v___x_1842_ = lean_box(0);
v___x_1843_ = 0;
v___x_1844_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1844_, 0, v_machine_1820_);
lean_ctor_set(v___x_1844_, 1, v_a_1821_);
lean_ctor_set(v___x_1844_, 2, v___x_1841_);
lean_ctor_set(v___x_1844_, 3, v_keepAliveTimeout_1840_);
lean_ctor_set(v___x_1844_, 4, v___x_1842_);
lean_ctor_set(v___x_1844_, 5, v_a_1836_);
lean_ctor_set(v___x_1844_, 6, v___x_1842_);
lean_ctor_set(v___x_1844_, 7, v_expectData_1823_);
lean_ctor_set(v___x_1844_, 8, v_pendingHead_1824_);
lean_ctor_set_uint8(v___x_1844_, sizeof(void*)*9, v_requiresData_1822_);
lean_ctor_set_uint8(v___x_1844_, sizeof(void*)*9 + 1, v___x_1843_);
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1845_);
v___x_1847_ = v___x_1838_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
return v___x_1848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object* v_config_1851_, lean_object* v_machine_1852_, lean_object* v_a_1853_, lean_object* v_requiresData_1854_, lean_object* v_expectData_1855_, lean_object* v_pendingHead_1856_, lean_object* v_x_1857_, lean_object* v___y_1858_){
_start:
{
uint8_t v_requiresData_boxed_1859_; lean_object* v_res_1860_; 
v_requiresData_boxed_1859_ = lean_unbox(v_requiresData_1854_);
v_res_1860_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(v_config_1851_, v_machine_1852_, v_a_1853_, v_requiresData_boxed_1859_, v_expectData_1855_, v_pendingHead_1856_, v_x_1857_);
lean_dec_ref(v_config_1851_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object* v_config_1861_, lean_object* v_machine_1862_, uint8_t v_requiresData_1863_, lean_object* v_expectData_1864_, lean_object* v_pendingHead_1865_, lean_object* v_x_1866_){
_start:
{
if (lean_obj_tag(v_x_1866_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1876_; 
lean_dec(v_pendingHead_1865_);
lean_dec(v_expectData_1864_);
lean_dec_ref(v_machine_1862_);
lean_dec_ref(v_config_1861_);
v_a_1868_ = lean_ctor_get(v_x_1866_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_x_1866_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1870_ = v_x_1866_;
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v_x_1866_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1874_; 
v___x_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
return v___x_1874_;
}
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1892_; 
v_a_1877_ = lean_ctor_get(v_x_1866_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_x_1866_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1879_ = v_x_1866_;
v_isShared_1880_ = v_isSharedCheck_1892_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v_x_1866_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1892_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___f_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1888_; 
v___x_1881_ = lean_box(v_requiresData_1863_);
v___f_1882_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed), 8, 6);
lean_closure_set(v___f_1882_, 0, v_config_1861_);
lean_closure_set(v___f_1882_, 1, v_machine_1862_);
lean_closure_set(v___f_1882_, 2, v_a_1877_);
lean_closure_set(v___f_1882_, 3, v___x_1881_);
lean_closure_set(v___f_1882_, 4, v_expectData_1864_);
lean_closure_set(v___f_1882_, 5, v_pendingHead_1865_);
v___x_1883_ = lean_box(0);
v___x_1884_ = lean_unsigned_to_nat(0u);
v___x_1885_ = 0;
v___x_1886_ = l_Std_CloseableChannel_new___redArg(v___x_1883_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v___x_1886_);
v___x_1888_ = v___x_1879_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1886_);
v___x_1888_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
v___x_1890_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1884_, v___x_1885_, v___x_1889_, v___f_1882_);
return v___x_1890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object* v_config_1893_, lean_object* v_machine_1894_, lean_object* v_requiresData_1895_, lean_object* v_expectData_1896_, lean_object* v_pendingHead_1897_, lean_object* v_x_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v_requiresData_boxed_1900_; lean_object* v_res_1901_; 
v_requiresData_boxed_1900_ = lean_unbox(v_requiresData_1895_);
v_res_1901_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(v_config_1893_, v_machine_1894_, v_requiresData_boxed_1900_, v_expectData_1896_, v_pendingHead_1897_, v_x_1898_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object* v___f_1902_, lean_object* v_____r_1903_){
_start:
{
lean_object* v___x_1905_; uint8_t v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1905_ = lean_unsigned_to_nat(0u);
v___x_1906_ = 0;
v___x_1907_ = l_Std_Http_Body_mkStream();
v___x_1908_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1905_, v___x_1906_, v___x_1907_, v___f_1902_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object* v___f_1909_, lean_object* v_____r_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(v___f_1909_, v_____r_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object* v_close_1913_, lean_object* v_val_1914_, lean_object* v___f_1915_, lean_object* v___f_1916_, lean_object* v_x_1917_){
_start:
{
if (lean_obj_tag(v_x_1917_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1927_; 
lean_dec_ref(v___f_1916_);
lean_dec_ref(v___f_1915_);
lean_dec(v_val_1914_);
lean_dec_ref(v_close_1913_);
v_a_1919_ = lean_ctor_get(v_x_1917_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_x_1917_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1921_ = v_x_1917_;
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v_x_1917_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1925_; 
v___x_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
return v___x_1925_;
}
}
}
else
{
lean_object* v_a_1928_; uint8_t v___x_1929_; 
v_a_1928_ = lean_ctor_get(v_x_1917_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v_x_1917_, 1);
v___x_1929_ = lean_unbox(v_a_1928_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; lean_object* v___x_1933_; 
lean_dec_ref(v___f_1916_);
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = lean_apply_2(v_close_1913_, v_val_1914_, lean_box(0));
v___x_1932_ = lean_unbox(v_a_1928_);
lean_dec(v_a_1928_);
v___x_1933_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1930_, v___x_1932_, v___x_1931_, v___f_1915_);
return v___x_1933_;
}
else
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
lean_dec(v_a_1928_);
lean_dec_ref(v___f_1915_);
lean_dec(v_val_1914_);
lean_dec_ref(v_close_1913_);
v___x_1934_ = lean_box(0);
v___x_1935_ = lean_apply_2(v___f_1916_, v___x_1934_, lean_box(0));
return v___x_1935_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object* v_close_1936_, lean_object* v_val_1937_, lean_object* v___f_1938_, lean_object* v___f_1939_, lean_object* v_x_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(v_close_1936_, v_val_1937_, v___f_1938_, v___f_1939_, v_x_1940_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object* v_respStream_1943_, lean_object* v_inst_1944_, lean_object* v___f_1945_, lean_object* v___f_1946_, lean_object* v_____r_1947_){
_start:
{
if (lean_obj_tag(v_respStream_1943_) == 1)
{
lean_object* v_val_1949_; lean_object* v_close_1950_; lean_object* v_isClosed_1951_; lean_object* v___f_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v_val_1949_ = lean_ctor_get(v_respStream_1943_, 0);
lean_inc_n(v_val_1949_, 2);
lean_dec_ref_known(v_respStream_1943_, 1);
v_close_1950_ = lean_ctor_get(v_inst_1944_, 1);
lean_inc_ref(v_close_1950_);
v_isClosed_1951_ = lean_ctor_get(v_inst_1944_, 2);
lean_inc_ref(v_isClosed_1951_);
lean_dec_ref(v_inst_1944_);
v___f_1952_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed), 6, 4);
lean_closure_set(v___f_1952_, 0, v_close_1950_);
lean_closure_set(v___f_1952_, 1, v_val_1949_);
lean_closure_set(v___f_1952_, 2, v___f_1945_);
lean_closure_set(v___f_1952_, 3, v___f_1946_);
v___x_1953_ = lean_unsigned_to_nat(0u);
v___x_1954_ = 0;
v___x_1955_ = lean_apply_2(v_isClosed_1951_, v_val_1949_, lean_box(0));
v___x_1956_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1953_, v___x_1954_, v___x_1955_, v___f_1952_);
return v___x_1956_;
}
else
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
lean_dec_ref(v___f_1945_);
lean_dec_ref(v_inst_1944_);
lean_dec(v_respStream_1943_);
v___x_1957_ = lean_box(0);
v___x_1958_ = lean_apply_2(v___f_1946_, v___x_1957_, lean_box(0));
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object* v_respStream_1959_, lean_object* v_inst_1960_, lean_object* v___f_1961_, lean_object* v___f_1962_, lean_object* v_____r_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(v_respStream_1959_, v_inst_1960_, v___f_1961_, v___f_1962_, v_____r_1963_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object* v_requestStream_1966_, lean_object* v_keepAliveTimeout_1967_, lean_object* v_currentTimeout_1968_, lean_object* v_headerTimeout_1969_, lean_object* v_response_1970_, lean_object* v_respStream_1971_, uint8_t v_requiresData_1972_, lean_object* v_expectData_1973_, uint8_t v_handlerDispatched_1974_, lean_object* v_pendingHead_1975_, lean_object* v_x_1976_){
_start:
{
if (lean_obj_tag(v_x_1976_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1986_; 
lean_dec(v_pendingHead_1975_);
lean_dec(v_expectData_1973_);
lean_dec(v_respStream_1971_);
lean_dec_ref(v_response_1970_);
lean_dec(v_headerTimeout_1969_);
lean_dec(v_currentTimeout_1968_);
lean_dec(v_keepAliveTimeout_1967_);
lean_dec_ref(v_requestStream_1966_);
v_a_1978_ = lean_ctor_get(v_x_1976_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v_x_1976_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1980_ = v_x_1976_;
v_isShared_1981_ = v_isSharedCheck_1986_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v_x_1976_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1986_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
return v___x_1984_;
}
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_2008_; 
v_a_1987_ = lean_ctor_get(v_x_1976_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v_x_1976_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_1989_ = v_x_1976_;
v_isShared_1990_ = v_isSharedCheck_2008_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v_x_1976_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_2008_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v_snd_1991_; uint8_t v___x_1992_; 
v_snd_1991_ = lean_ctor_get(v_a_1987_, 1);
v___x_1992_ = lean_unbox(v_snd_1991_);
if (v___x_1992_ == 0)
{
lean_object* v_fst_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1997_; 
v_fst_1993_ = lean_ctor_get(v_a_1987_, 0);
lean_inc(v_fst_1993_);
lean_dec(v_a_1987_);
v___x_1994_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1994_, 0, v_fst_1993_);
lean_ctor_set(v___x_1994_, 1, v_requestStream_1966_);
lean_ctor_set(v___x_1994_, 2, v_keepAliveTimeout_1967_);
lean_ctor_set(v___x_1994_, 3, v_currentTimeout_1968_);
lean_ctor_set(v___x_1994_, 4, v_headerTimeout_1969_);
lean_ctor_set(v___x_1994_, 5, v_response_1970_);
lean_ctor_set(v___x_1994_, 6, v_respStream_1971_);
lean_ctor_set(v___x_1994_, 7, v_expectData_1973_);
lean_ctor_set(v___x_1994_, 8, v_pendingHead_1975_);
lean_ctor_set_uint8(v___x_1994_, sizeof(void*)*9, v_requiresData_1972_);
lean_ctor_set_uint8(v___x_1994_, sizeof(void*)*9 + 1, v_handlerDispatched_1974_);
v___x_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1994_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 0, v___x_1995_);
v___x_1997_ = v___x_1989_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1995_);
v___x_1997_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1998_; 
v___x_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1997_);
return v___x_1998_;
}
}
else
{
lean_object* v_fst_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2005_; 
lean_dec(v_pendingHead_1975_);
v_fst_2000_ = lean_ctor_get(v_a_1987_, 0);
lean_inc(v_fst_2000_);
lean_dec(v_a_1987_);
v___x_2001_ = lean_box(0);
v___x_2002_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2002_, 0, v_fst_2000_);
lean_ctor_set(v___x_2002_, 1, v_requestStream_1966_);
lean_ctor_set(v___x_2002_, 2, v_keepAliveTimeout_1967_);
lean_ctor_set(v___x_2002_, 3, v_currentTimeout_1968_);
lean_ctor_set(v___x_2002_, 4, v_headerTimeout_1969_);
lean_ctor_set(v___x_2002_, 5, v_response_1970_);
lean_ctor_set(v___x_2002_, 6, v_respStream_1971_);
lean_ctor_set(v___x_2002_, 7, v_expectData_1973_);
lean_ctor_set(v___x_2002_, 8, v___x_2001_);
lean_ctor_set_uint8(v___x_2002_, sizeof(void*)*9, v_requiresData_1972_);
lean_ctor_set_uint8(v___x_2002_, sizeof(void*)*9 + 1, v_handlerDispatched_1974_);
v___x_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2002_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 0, v___x_2003_);
v___x_2005_ = v___x_1989_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2003_);
v___x_2005_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v___x_2006_; 
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
return v___x_2006_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object* v_requestStream_2009_, lean_object* v_keepAliveTimeout_2010_, lean_object* v_currentTimeout_2011_, lean_object* v_headerTimeout_2012_, lean_object* v_response_2013_, lean_object* v_respStream_2014_, lean_object* v_requiresData_2015_, lean_object* v_expectData_2016_, lean_object* v_handlerDispatched_2017_, lean_object* v_pendingHead_2018_, lean_object* v_x_2019_, lean_object* v___y_2020_){
_start:
{
uint8_t v_requiresData_boxed_2021_; uint8_t v_handlerDispatched_boxed_2022_; lean_object* v_res_2023_; 
v_requiresData_boxed_2021_ = lean_unbox(v_requiresData_2015_);
v_handlerDispatched_boxed_2022_ = lean_unbox(v_handlerDispatched_2017_);
v_res_2023_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(v_requestStream_2009_, v_keepAliveTimeout_2010_, v_currentTimeout_2011_, v_headerTimeout_2012_, v_response_2013_, v_respStream_2014_, v_requiresData_boxed_2021_, v_expectData_2016_, v_handlerDispatched_boxed_2022_, v_pendingHead_2018_, v_x_2019_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object* v_config_2036_, lean_object* v_inst_2037_, lean_object* v___f_2038_, lean_object* v_handler_2039_, lean_object* v___f_2040_, lean_object* v_inst_2041_, lean_object* v___f_2042_, lean_object* v_connectionContext_2043_, lean_object* v_a_2044_, lean_object* v_x_2045_, lean_object* v___y_2046_){
_start:
{
switch(lean_obj_tag(v_a_2044_))
{
case 0:
{
lean_object* v_head_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2091_; 
lean_dec_ref(v_connectionContext_2043_);
lean_dec_ref(v___f_2042_);
lean_dec_ref(v_inst_2041_);
lean_dec_ref(v___f_2040_);
lean_dec(v_handler_2039_);
lean_dec_ref(v___f_2038_);
lean_dec_ref(v_inst_2037_);
v_head_2048_ = lean_ctor_get(v_a_2044_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_a_2044_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2050_ = v_a_2044_;
v_isShared_2051_ = v_isSharedCheck_2091_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_head_2048_);
lean_dec(v_a_2044_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2091_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v_machine_2052_; lean_object* v_requestStream_2053_; lean_object* v_response_2054_; lean_object* v_respStream_2055_; uint8_t v_requiresData_2056_; lean_object* v_expectData_2057_; uint8_t v_handlerDispatched_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2086_; 
v_machine_2052_ = lean_ctor_get(v___y_2046_, 0);
v_requestStream_2053_ = lean_ctor_get(v___y_2046_, 1);
v_response_2054_ = lean_ctor_get(v___y_2046_, 5);
v_respStream_2055_ = lean_ctor_get(v___y_2046_, 6);
v_requiresData_2056_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*9);
v_expectData_2057_ = lean_ctor_get(v___y_2046_, 7);
v_handlerDispatched_2058_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*9 + 1);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___y_2046_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; lean_object* v_unused_2088_; lean_object* v_unused_2089_; lean_object* v_unused_2090_; 
v_unused_2087_ = lean_ctor_get(v___y_2046_, 8);
lean_dec(v_unused_2087_);
v_unused_2088_ = lean_ctor_get(v___y_2046_, 4);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v___y_2046_, 3);
lean_dec(v_unused_2089_);
v_unused_2090_ = lean_ctor_get(v___y_2046_, 2);
lean_dec(v_unused_2090_);
v___x_2060_ = v___y_2046_;
v_isShared_2061_ = v_isSharedCheck_2086_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_expectData_2057_);
lean_inc(v_respStream_2055_);
lean_inc(v_response_2054_);
lean_inc(v_requestStream_2053_);
lean_inc(v_machine_2052_);
lean_dec(v___y_2046_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2086_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v_lingeringTimeout_2062_; lean_object* v___x_2063_; lean_object* v___x_2065_; 
v_lingeringTimeout_2062_ = lean_ctor_get(v_config_2036_, 4);
lean_inc(v_lingeringTimeout_2062_);
lean_dec_ref(v_config_2036_);
v___x_2063_ = lean_box(0);
lean_inc(v_head_2048_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set_tag(v___x_2050_, 1);
v___x_2065_ = v___x_2050_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_head_2048_);
v___x_2065_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
lean_object* v___x_2067_; 
lean_inc_ref(v_requestStream_2053_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 8, v___x_2065_);
lean_ctor_set(v___x_2060_, 4, v___x_2063_);
lean_ctor_set(v___x_2060_, 3, v_lingeringTimeout_2062_);
lean_ctor_set(v___x_2060_, 2, v___x_2063_);
v___x_2067_ = v___x_2060_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_machine_2052_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v_requestStream_2053_);
lean_ctor_set(v_reuseFailAlloc_2084_, 2, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2084_, 3, v_lingeringTimeout_2062_);
lean_ctor_set(v_reuseFailAlloc_2084_, 4, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2084_, 5, v_response_2054_);
lean_ctor_set(v_reuseFailAlloc_2084_, 6, v_respStream_2055_);
lean_ctor_set(v_reuseFailAlloc_2084_, 7, v_expectData_2057_);
lean_ctor_set(v_reuseFailAlloc_2084_, 8, v___x_2065_);
lean_ctor_set_uint8(v_reuseFailAlloc_2084_, sizeof(void*)*9, v_requiresData_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2084_, sizeof(void*)*9 + 1, v_handlerDispatched_2058_);
v___x_2067_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
uint8_t v___x_2068_; uint8_t v___x_2069_; lean_object* v___x_2070_; 
v___x_2068_ = 0;
v___x_2069_ = 1;
v___x_2070_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_2068_, v_head_2048_, v___x_2069_);
lean_dec(v_head_2048_);
if (lean_obj_tag(v___x_2070_) == 1)
{
lean_object* v___f_2071_; lean_object* v___f_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___f_2076_; lean_object* v___f_2077_; lean_object* v___x_5061__overap_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___f_2071_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2071_, 0, v___x_2067_);
v___f_2072_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2072_, 0, v___x_2070_);
v___x_2073_ = lean_unsigned_to_nat(0u);
v___x_2074_ = 0;
v___x_2075_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2076_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2077_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_5061__overap_2078_ = l_Std_Mutex_atomically___redArg(v___x_2075_, v___f_2076_, v___f_2077_, v_requestStream_2053_, v___f_2072_);
v___x_2079_ = lean_apply_1(v___x_5061__overap_2078_, lean_box(0));
v___x_2080_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2073_, v___x_2074_, v___x_2079_, v___f_2071_);
return v___x_2080_;
}
else
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
lean_dec(v___x_2070_);
lean_dec_ref(v_requestStream_2053_);
v___x_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2067_);
v___x_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2082_);
return v___x_2083_;
}
}
}
}
}
}
case 1:
{
lean_object* v_size_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2119_; 
lean_dec_ref(v_connectionContext_2043_);
lean_dec_ref(v___f_2042_);
lean_dec_ref(v_inst_2041_);
lean_dec_ref(v___f_2040_);
lean_dec(v_handler_2039_);
lean_dec_ref(v___f_2038_);
lean_dec_ref(v_inst_2037_);
lean_dec_ref(v_config_2036_);
v_size_2092_ = lean_ctor_get(v_a_2044_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_a_2044_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2094_ = v_a_2044_;
v_isShared_2095_ = v_isSharedCheck_2119_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_size_2092_);
lean_dec(v_a_2044_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2119_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v_machine_2096_; lean_object* v_requestStream_2097_; lean_object* v_keepAliveTimeout_2098_; lean_object* v_currentTimeout_2099_; lean_object* v_headerTimeout_2100_; lean_object* v_response_2101_; lean_object* v_respStream_2102_; uint8_t v_handlerDispatched_2103_; lean_object* v_pendingHead_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2117_; 
v_machine_2096_ = lean_ctor_get(v___y_2046_, 0);
v_requestStream_2097_ = lean_ctor_get(v___y_2046_, 1);
v_keepAliveTimeout_2098_ = lean_ctor_get(v___y_2046_, 2);
v_currentTimeout_2099_ = lean_ctor_get(v___y_2046_, 3);
v_headerTimeout_2100_ = lean_ctor_get(v___y_2046_, 4);
v_response_2101_ = lean_ctor_get(v___y_2046_, 5);
v_respStream_2102_ = lean_ctor_get(v___y_2046_, 6);
v_handlerDispatched_2103_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*9 + 1);
v_pendingHead_2104_ = lean_ctor_get(v___y_2046_, 8);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___y_2046_);
if (v_isSharedCheck_2117_ == 0)
{
lean_object* v_unused_2118_; 
v_unused_2118_ = lean_ctor_get(v___y_2046_, 7);
lean_dec(v_unused_2118_);
v___x_2106_ = v___y_2046_;
v_isShared_2107_ = v_isSharedCheck_2117_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_pendingHead_2104_);
lean_inc(v_respStream_2102_);
lean_inc(v_response_2101_);
lean_inc(v_headerTimeout_2100_);
lean_inc(v_currentTimeout_2099_);
lean_inc(v_keepAliveTimeout_2098_);
lean_inc(v_requestStream_2097_);
lean_inc(v_machine_2096_);
lean_dec(v___y_2046_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2117_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
uint8_t v___x_2108_; lean_object* v___x_2110_; 
v___x_2108_ = 1;
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 7, v_size_2092_);
v___x_2110_ = v___x_2106_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_machine_2096_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_requestStream_2097_);
lean_ctor_set(v_reuseFailAlloc_2116_, 2, v_keepAliveTimeout_2098_);
lean_ctor_set(v_reuseFailAlloc_2116_, 3, v_currentTimeout_2099_);
lean_ctor_set(v_reuseFailAlloc_2116_, 4, v_headerTimeout_2100_);
lean_ctor_set(v_reuseFailAlloc_2116_, 5, v_response_2101_);
lean_ctor_set(v_reuseFailAlloc_2116_, 6, v_respStream_2102_);
lean_ctor_set(v_reuseFailAlloc_2116_, 7, v_size_2092_);
lean_ctor_set(v_reuseFailAlloc_2116_, 8, v_pendingHead_2104_);
lean_ctor_set_uint8(v_reuseFailAlloc_2116_, sizeof(void*)*9 + 1, v_handlerDispatched_2103_);
v___x_2110_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2112_; 
lean_ctor_set_uint8(v___x_2110_, sizeof(void*)*9, v___x_2108_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2110_);
v___x_2112_ = v___x_2094_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2110_);
v___x_2112_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
v___x_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
}
}
}
case 2:
{
lean_object* v_err_2120_; lean_object* v_onFailure_2121_; lean_object* v___f_2122_; lean_object* v___y_2124_; 
lean_dec_ref(v_connectionContext_2043_);
lean_dec_ref(v___f_2042_);
lean_dec_ref(v_inst_2041_);
lean_dec_ref(v___f_2040_);
lean_dec_ref(v_config_2036_);
v_err_2120_ = lean_ctor_get(v_a_2044_, 0);
lean_inc(v_err_2120_);
lean_dec_ref_known(v_a_2044_, 1);
v_onFailure_2121_ = lean_ctor_get(v_inst_2037_, 2);
lean_inc_ref(v_onFailure_2121_);
lean_dec_ref(v_inst_2037_);
v___f_2122_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_2122_, 0, v___y_2046_);
lean_closure_set(v___f_2122_, 1, v___f_2038_);
switch(lean_obj_tag(v_err_2120_))
{
case 0:
{
lean_object* v___x_2130_; 
v___x_2130_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0));
v___y_2124_ = v___x_2130_;
goto v___jp_2123_;
}
case 1:
{
lean_object* v___x_2131_; 
v___x_2131_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1));
v___y_2124_ = v___x_2131_;
goto v___jp_2123_;
}
case 2:
{
lean_object* v___x_2132_; 
v___x_2132_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2));
v___y_2124_ = v___x_2132_;
goto v___jp_2123_;
}
case 3:
{
lean_object* v___x_2133_; 
v___x_2133_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3));
v___y_2124_ = v___x_2133_;
goto v___jp_2123_;
}
case 4:
{
lean_object* v___x_2134_; 
v___x_2134_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4));
v___y_2124_ = v___x_2134_;
goto v___jp_2123_;
}
case 5:
{
lean_object* v___x_2135_; 
v___x_2135_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5));
v___y_2124_ = v___x_2135_;
goto v___jp_2123_;
}
case 6:
{
lean_object* v___x_2136_; 
v___x_2136_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6));
v___y_2124_ = v___x_2136_;
goto v___jp_2123_;
}
case 7:
{
lean_object* v___x_2137_; 
v___x_2137_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7));
v___y_2124_ = v___x_2137_;
goto v___jp_2123_;
}
case 8:
{
lean_object* v___x_2138_; 
v___x_2138_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8));
v___y_2124_ = v___x_2138_;
goto v___jp_2123_;
}
case 9:
{
lean_object* v___x_2139_; 
v___x_2139_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9));
v___y_2124_ = v___x_2139_;
goto v___jp_2123_;
}
case 10:
{
lean_object* v___x_2140_; 
v___x_2140_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10));
v___y_2124_ = v___x_2140_;
goto v___jp_2123_;
}
default: 
{
lean_object* v_message_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v_message_2141_ = lean_ctor_get(v_err_2120_, 0);
lean_inc_ref(v_message_2141_);
lean_dec_ref_known(v_err_2120_, 1);
v___x_2142_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11));
v___x_2143_ = lean_string_append(v___x_2142_, v_message_2141_);
lean_dec_ref(v_message_2141_);
v___y_2124_ = v___x_2143_;
goto v___jp_2123_;
}
}
v___jp_2123_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; uint8_t v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2125_ = lean_mk_io_user_error(v___y_2124_);
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = 0;
v___x_2128_ = lean_apply_3(v_onFailure_2121_, v_handler_2039_, v___x_2125_, lean_box(0));
v___x_2129_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2126_, v___x_2127_, v___x_2128_, v___f_2122_);
return v___x_2129_;
}
}
case 4:
{
lean_object* v_requestStream_2144_; lean_object* v___f_2145_; lean_object* v___f_2146_; lean_object* v___x_2147_; uint8_t v___x_2148_; lean_object* v___x_2149_; lean_object* v___f_2150_; lean_object* v___f_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_5118__overap_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
lean_dec_ref(v_connectionContext_2043_);
lean_dec_ref(v___f_2042_);
lean_dec_ref(v_inst_2041_);
lean_dec(v_handler_2039_);
lean_dec_ref(v___f_2038_);
lean_dec_ref(v_inst_2037_);
lean_dec_ref(v_config_2036_);
v_requestStream_2144_ = lean_ctor_get(v___y_2046_, 1);
lean_inc_ref_n(v_requestStream_2144_, 2);
lean_inc_ref(v___y_2046_);
v___f_2145_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2145_, 0, v___y_2046_);
v___f_2146_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_2146_, 0, v_requestStream_2144_);
lean_closure_set(v___f_2146_, 1, v___f_2145_);
lean_closure_set(v___f_2146_, 2, v___y_2046_);
v___x_2147_ = lean_unsigned_to_nat(0u);
v___x_2148_ = 0;
v___x_2149_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2150_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2151_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2152_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2153_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2153_, 0, lean_box(0));
lean_closure_set(v___x_2153_, 1, lean_box(0));
lean_closure_set(v___x_2153_, 2, v___x_2149_);
lean_closure_set(v___x_2153_, 3, lean_box(0));
lean_closure_set(v___x_2153_, 4, lean_box(0));
lean_closure_set(v___x_2153_, 5, v___x_2152_);
lean_closure_set(v___x_2153_, 6, v___f_2040_);
v___x_5118__overap_2154_ = l_Std_Mutex_atomically___redArg(v___x_2149_, v___f_2150_, v___f_2151_, v_requestStream_2144_, v___x_2153_);
v___x_2155_ = lean_apply_1(v___x_5118__overap_2154_, lean_box(0));
v___x_2156_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2147_, v___x_2148_, v___x_2155_, v___f_2146_);
return v___x_2156_;
}
case 6:
{
lean_object* v_machine_2157_; lean_object* v_requestStream_2158_; lean_object* v_respStream_2159_; uint8_t v_requiresData_2160_; lean_object* v_expectData_2161_; lean_object* v_pendingHead_2162_; lean_object* v___x_2163_; lean_object* v___f_2164_; lean_object* v___f_2165_; lean_object* v___f_2166_; lean_object* v___f_2167_; lean_object* v___f_2168_; lean_object* v___f_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___f_2173_; lean_object* v___f_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_5143__overap_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_dec_ref(v_connectionContext_2043_);
lean_dec_ref(v___f_2040_);
lean_dec(v_handler_2039_);
lean_dec_ref(v___f_2038_);
lean_dec_ref(v_inst_2037_);
v_machine_2157_ = lean_ctor_get(v___y_2046_, 0);
lean_inc_ref(v_machine_2157_);
v_requestStream_2158_ = lean_ctor_get(v___y_2046_, 1);
lean_inc_ref_n(v_requestStream_2158_, 2);
v_respStream_2159_ = lean_ctor_get(v___y_2046_, 6);
lean_inc(v_respStream_2159_);
v_requiresData_2160_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*9);
v_expectData_2161_ = lean_ctor_get(v___y_2046_, 7);
lean_inc(v_expectData_2161_);
v_pendingHead_2162_ = lean_ctor_get(v___y_2046_, 8);
lean_inc(v_pendingHead_2162_);
lean_dec_ref(v___y_2046_);
v___x_2163_ = lean_box(v_requiresData_2160_);
v___f_2164_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed), 7, 5);
lean_closure_set(v___f_2164_, 0, v_config_2036_);
lean_closure_set(v___f_2164_, 1, v_machine_2157_);
lean_closure_set(v___f_2164_, 2, v___x_2163_);
lean_closure_set(v___f_2164_, 3, v_expectData_2161_);
lean_closure_set(v___f_2164_, 4, v_pendingHead_2162_);
v___f_2165_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed), 3, 1);
lean_closure_set(v___f_2165_, 0, v___f_2164_);
lean_inc_ref(v___f_2165_);
v___f_2166_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2166_, 0, v___f_2165_);
v___f_2167_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_2167_, 0, v_respStream_2159_);
lean_closure_set(v___f_2167_, 1, v_inst_2041_);
lean_closure_set(v___f_2167_, 2, v___f_2166_);
lean_closure_set(v___f_2167_, 3, v___f_2165_);
lean_inc_ref(v___f_2167_);
v___f_2168_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2168_, 0, v___f_2167_);
v___f_2169_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_2169_, 0, v_requestStream_2158_);
lean_closure_set(v___f_2169_, 1, v___f_2168_);
lean_closure_set(v___f_2169_, 2, v___f_2167_);
v___x_2170_ = lean_unsigned_to_nat(0u);
v___x_2171_ = 0;
v___x_2172_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2173_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2174_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2175_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2176_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2176_, 0, lean_box(0));
lean_closure_set(v___x_2176_, 1, lean_box(0));
lean_closure_set(v___x_2176_, 2, v___x_2172_);
lean_closure_set(v___x_2176_, 3, lean_box(0));
lean_closure_set(v___x_2176_, 4, lean_box(0));
lean_closure_set(v___x_2176_, 5, v___x_2175_);
lean_closure_set(v___x_2176_, 6, v___f_2042_);
v___x_5143__overap_2177_ = l_Std_Mutex_atomically___redArg(v___x_2172_, v___f_2173_, v___f_2174_, v_requestStream_2158_, v___x_2176_);
v___x_2178_ = lean_apply_1(v___x_5143__overap_2177_, lean_box(0));
v___x_2179_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2170_, v___x_2171_, v___x_2178_, v___f_2169_);
return v___x_2179_;
}
case 7:
{
lean_object* v_pendingHead_2180_; 
lean_dec_ref(v___f_2042_);
lean_dec_ref(v_inst_2041_);
lean_dec_ref(v___f_2040_);
lean_dec_ref(v___f_2038_);
v_pendingHead_2180_ = lean_ctor_get(v___y_2046_, 8);
if (lean_obj_tag(v_pendingHead_2180_) == 1)
{
lean_object* v_machine_2181_; lean_object* v_requestStream_2182_; lean_object* v_keepAliveTimeout_2183_; lean_object* v_currentTimeout_2184_; lean_object* v_headerTimeout_2185_; lean_object* v_response_2186_; lean_object* v_respStream_2187_; uint8_t v_requiresData_2188_; lean_object* v_expectData_2189_; uint8_t v_handlerDispatched_2190_; lean_object* v_val_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___f_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
lean_inc_ref(v_pendingHead_2180_);
v_machine_2181_ = lean_ctor_get(v___y_2046_, 0);
lean_inc_ref(v_machine_2181_);
v_requestStream_2182_ = lean_ctor_get(v___y_2046_, 1);
lean_inc_ref(v_requestStream_2182_);
v_keepAliveTimeout_2183_ = lean_ctor_get(v___y_2046_, 2);
lean_inc(v_keepAliveTimeout_2183_);
v_currentTimeout_2184_ = lean_ctor_get(v___y_2046_, 3);
lean_inc(v_currentTimeout_2184_);
v_headerTimeout_2185_ = lean_ctor_get(v___y_2046_, 4);
lean_inc(v_headerTimeout_2185_);
v_response_2186_ = lean_ctor_get(v___y_2046_, 5);
lean_inc_ref(v_response_2186_);
v_respStream_2187_ = lean_ctor_get(v___y_2046_, 6);
lean_inc(v_respStream_2187_);
v_requiresData_2188_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*9);
v_expectData_2189_ = lean_ctor_get(v___y_2046_, 7);
lean_inc(v_expectData_2189_);
v_handlerDispatched_2190_ = lean_ctor_get_uint8(v___y_2046_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_2046_);
v_val_2191_ = lean_ctor_get(v_pendingHead_2180_, 0);
lean_inc(v_val_2191_);
v___x_2192_ = lean_box(v_requiresData_2188_);
v___x_2193_ = lean_box(v_handlerDispatched_2190_);
v___f_2194_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed), 12, 10);
lean_closure_set(v___f_2194_, 0, v_requestStream_2182_);
lean_closure_set(v___f_2194_, 1, v_keepAliveTimeout_2183_);
lean_closure_set(v___f_2194_, 2, v_currentTimeout_2184_);
lean_closure_set(v___f_2194_, 3, v_headerTimeout_2185_);
lean_closure_set(v___f_2194_, 4, v_response_2186_);
lean_closure_set(v___f_2194_, 5, v_respStream_2187_);
lean_closure_set(v___f_2194_, 6, v___x_2192_);
lean_closure_set(v___f_2194_, 7, v_expectData_2189_);
lean_closure_set(v___f_2194_, 8, v___x_2193_);
lean_closure_set(v___f_2194_, 9, v_pendingHead_2180_);
v___x_2195_ = lean_unsigned_to_nat(0u);
v___x_2196_ = 0;
v___x_2197_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_2037_, v_handler_2039_, v_machine_2181_, v_val_2191_, v_config_2036_, v_connectionContext_2043_);
v___x_2198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2195_, v___x_2196_, v___x_2197_, v___f_2194_);
return v___x_2198_;
}
else
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec_ref(v_connectionContext_2043_);
lean_dec(v_handler_2039_);
lean_dec_ref(v_inst_2037_);
lean_dec_ref(v_config_2036_);
v___x_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___y_2046_);
v___x_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
v___x_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
return v___x_2201_;
}
}
default: 
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
lean_dec(v_a_2044_);
lean_dec_ref(v_connectionContext_2043_);
lean_dec_ref(v___f_2042_);
lean_dec_ref(v_inst_2041_);
lean_dec_ref(v___f_2040_);
lean_dec(v_handler_2039_);
lean_dec_ref(v___f_2038_);
lean_dec_ref(v_inst_2037_);
lean_dec_ref(v_config_2036_);
v___x_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___y_2046_);
v___x_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
v___x_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
return v___x_2204_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object* v_config_2205_, lean_object* v_inst_2206_, lean_object* v___f_2207_, lean_object* v_handler_2208_, lean_object* v___f_2209_, lean_object* v_inst_2210_, lean_object* v___f_2211_, lean_object* v_connectionContext_2212_, lean_object* v_a_2213_, lean_object* v_x_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(v_config_2205_, v_inst_2206_, v___f_2207_, v_handler_2208_, v___f_2209_, v_inst_2210_, v___f_2211_, v_connectionContext_2212_, v_a_2213_, v_x_2214_, v___y_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object* v_x_2218_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2220_, 0, v_x_2218_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object* v_x_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(v_x_2221_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object* v_inst_2226_, lean_object* v_inst_2227_, lean_object* v_handler_2228_, lean_object* v_config_2229_, lean_object* v_connectionContext_2230_, lean_object* v_events_2231_, lean_object* v_state_2232_){
_start:
{
lean_object* v___f_2234_; lean_object* v___f_2235_; lean_object* v___f_2236_; lean_object* v___x_2237_; size_t v_sz_2238_; size_t v___x_2239_; lean_object* v___x_2240_; uint8_t v___x_2241_; lean_object* v___x_4072__overap_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___f_2234_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_2235_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed), 12, 8);
lean_closure_set(v___f_2235_, 0, v_config_2229_);
lean_closure_set(v___f_2235_, 1, v_inst_2226_);
lean_closure_set(v___f_2235_, 2, v___f_2234_);
lean_closure_set(v___f_2235_, 3, v_handler_2228_);
lean_closure_set(v___f_2235_, 4, v___f_2234_);
lean_closure_set(v___f_2235_, 5, v_inst_2227_);
lean_closure_set(v___f_2235_, 6, v___f_2234_);
lean_closure_set(v___f_2235_, 7, v_connectionContext_2230_);
v___f_2236_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1));
v___x_2237_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v_sz_2238_ = lean_array_size(v_events_2231_);
v___x_2239_ = ((size_t)0ULL);
v___x_2240_ = lean_unsigned_to_nat(0u);
v___x_2241_ = 0;
v___x_4072__overap_2242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2237_, v_events_2231_, v___f_2235_, v_sz_2238_, v___x_2239_, v_state_2232_);
v___x_2243_ = lean_apply_1(v___x_4072__overap_2242_, lean_box(0));
v___x_2244_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2240_, v___x_2241_, v___x_2243_, v___f_2236_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object* v_inst_2245_, lean_object* v_inst_2246_, lean_object* v_handler_2247_, lean_object* v_config_2248_, lean_object* v_connectionContext_2249_, lean_object* v_events_2250_, lean_object* v_state_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2245_, v_inst_2246_, v_handler_2247_, v_config_2248_, v_connectionContext_2249_, v_events_2250_, v_state_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object* v_00_u03c3_2254_, lean_object* v_00_u03b2_2255_, lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_handler_2258_, lean_object* v_config_2259_, lean_object* v_connectionContext_2260_, lean_object* v_events_2261_, lean_object* v_state_2262_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2256_, v_inst_2257_, v_handler_2258_, v_config_2259_, v_connectionContext_2260_, v_events_2261_, v_state_2262_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object* v_00_u03c3_2265_, lean_object* v_00_u03b2_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_handler_2269_, lean_object* v_config_2270_, lean_object* v_connectionContext_2271_, lean_object* v_events_2272_, lean_object* v_state_2273_, lean_object* v___y_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(v_00_u03c3_2265_, v_00_u03b2_2266_, v_inst_2267_, v_inst_2268_, v_handler_2269_, v_config_2270_, v_connectionContext_2271_, v_events_2272_, v_state_2273_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object* v_x_2276_){
_start:
{
if (lean_obj_tag(v_x_2276_) == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2278_; 
v_a_2277_ = lean_ctor_get(v_x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v_x_2276_, 1);
v___x_2278_ = lean_task_pure(v_a_2277_);
return v___x_2278_;
}
else
{
lean_object* v_a_2279_; 
v_a_2279_ = lean_ctor_get(v_x_2276_, 0);
lean_inc_ref(v_a_2279_);
lean_dec_ref_known(v_x_2276_, 1);
return v_a_2279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object* v_machine_2280_, lean_object* v_requestStream_2281_, lean_object* v_keepAliveTimeout_2282_, lean_object* v_currentTimeout_2283_, lean_object* v_headerTimeout_2284_, lean_object* v_response_2285_, lean_object* v_respStream_2286_, uint8_t v_requiresData_2287_, lean_object* v_expectData_2288_, lean_object* v_x_2289_){
_start:
{
if (lean_obj_tag(v_x_2289_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_expectData_2288_);
lean_dec(v_respStream_2286_);
lean_dec_ref(v_response_2285_);
lean_dec(v_headerTimeout_2284_);
lean_dec(v_currentTimeout_2283_);
lean_dec(v_keepAliveTimeout_2282_);
lean_dec_ref(v_requestStream_2281_);
lean_dec_ref(v_machine_2280_);
v_a_2291_ = lean_ctor_get(v_x_2289_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_x_2289_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2293_ = v_x_2289_;
v_isShared_2294_ = v_isSharedCheck_2299_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v_x_2289_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2299_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
return v___x_2297_;
}
}
}
else
{
lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2310_; 
v_isSharedCheck_2310_ = !lean_is_exclusive(v_x_2289_);
if (v_isSharedCheck_2310_ == 0)
{
lean_object* v_unused_2311_; 
v_unused_2311_ = lean_ctor_get(v_x_2289_, 0);
lean_dec(v_unused_2311_);
v___x_2301_ = v_x_2289_;
v_isShared_2302_ = v_isSharedCheck_2310_;
goto v_resetjp_2300_;
}
else
{
lean_dec(v_x_2289_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2310_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
uint8_t v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2303_ = 1;
v___x_2304_ = lean_box(0);
v___x_2305_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2305_, 0, v_machine_2280_);
lean_ctor_set(v___x_2305_, 1, v_requestStream_2281_);
lean_ctor_set(v___x_2305_, 2, v_keepAliveTimeout_2282_);
lean_ctor_set(v___x_2305_, 3, v_currentTimeout_2283_);
lean_ctor_set(v___x_2305_, 4, v_headerTimeout_2284_);
lean_ctor_set(v___x_2305_, 5, v_response_2285_);
lean_ctor_set(v___x_2305_, 6, v_respStream_2286_);
lean_ctor_set(v___x_2305_, 7, v_expectData_2288_);
lean_ctor_set(v___x_2305_, 8, v___x_2304_);
lean_ctor_set_uint8(v___x_2305_, sizeof(void*)*9, v_requiresData_2287_);
lean_ctor_set_uint8(v___x_2305_, sizeof(void*)*9 + 1, v___x_2303_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set(v___x_2301_, 0, v___x_2305_);
v___x_2307_ = v___x_2301_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2305_);
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
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object* v_machine_2312_, lean_object* v_requestStream_2313_, lean_object* v_keepAliveTimeout_2314_, lean_object* v_currentTimeout_2315_, lean_object* v_headerTimeout_2316_, lean_object* v_response_2317_, lean_object* v_respStream_2318_, lean_object* v_requiresData_2319_, lean_object* v_expectData_2320_, lean_object* v_x_2321_, lean_object* v___y_2322_){
_start:
{
uint8_t v_requiresData_boxed_2323_; lean_object* v_res_2324_; 
v_requiresData_boxed_2323_ = lean_unbox(v_requiresData_2319_);
v_res_2324_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(v_machine_2312_, v_requestStream_2313_, v_keepAliveTimeout_2314_, v_currentTimeout_2315_, v_headerTimeout_2316_, v_response_2317_, v_respStream_2318_, v_requiresData_boxed_2323_, v_expectData_2320_, v_x_2321_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object* v___x_2325_, lean_object* v_response_2326_, lean_object* v___x_2327_, lean_object* v___f_2328_, lean_object* v_x_2329_){
_start:
{
if (lean_obj_tag(v_x_2329_) == 0)
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2339_; 
lean_dec_ref(v___f_2328_);
lean_dec(v___x_2327_);
lean_dec_ref(v_response_2326_);
lean_dec_ref(v___x_2325_);
v_a_2331_ = lean_ctor_get(v_x_2329_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v_x_2329_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2333_ = v_x_2329_;
v_isShared_2334_ = v_isSharedCheck_2339_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v_x_2329_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2339_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2336_);
return v___x_2337_;
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2354_; 
v_a_2340_ = lean_ctor_get(v_x_2329_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_x_2329_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2342_ = v_x_2329_;
v_isShared_2343_ = v_isSharedCheck_2354_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v_x_2329_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2354_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2350_; 
v___x_2344_ = lean_alloc_closure((void*)(l_Functor_discard), 4, 3);
lean_closure_set(v___x_2344_, 0, lean_box(0));
lean_closure_set(v___x_2344_, 1, lean_box(0));
lean_closure_set(v___x_2344_, 2, v___x_2325_);
v___x_2345_ = lean_alloc_closure((void*)(l_Std_Channel_send___boxed), 4, 2);
lean_closure_set(v___x_2345_, 0, lean_box(0));
lean_closure_set(v___x_2345_, 1, v_response_2326_);
v___x_2346_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2346_, 0, lean_box(0));
lean_closure_set(v___x_2346_, 1, lean_box(0));
lean_closure_set(v___x_2346_, 2, lean_box(0));
lean_closure_set(v___x_2346_, 3, v___x_2344_);
lean_closure_set(v___x_2346_, 4, v___x_2345_);
v___x_2347_ = 0;
lean_inc(v___x_2327_);
v___x_2348_ = l_BaseIO_chainTask___redArg(v_a_2340_, v___x_2346_, v___x_2327_, v___x_2347_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 0, v___x_2348_);
v___x_2350_ = v___x_2342_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
v___x_2352_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2327_, v___x_2347_, v___x_2351_, v___f_2328_);
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object* v___x_2355_, lean_object* v_response_2356_, lean_object* v___x_2357_, lean_object* v___f_2358_, lean_object* v_x_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(v___x_2355_, v_response_2356_, v___x_2357_, v___f_2358_, v_x_2359_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object* v_inst_2368_, lean_object* v_handler_2369_, lean_object* v_extensions_2370_, lean_object* v_connectionContext_2371_, lean_object* v_state_2372_){
_start:
{
lean_object* v___x_2374_; lean_object* v_pendingHead_2375_; 
v___x_2374_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__2));
v_pendingHead_2375_ = lean_ctor_get(v_state_2372_, 8);
lean_inc(v_pendingHead_2375_);
if (lean_obj_tag(v_pendingHead_2375_) == 1)
{
lean_object* v_machine_2376_; lean_object* v_requestStream_2377_; lean_object* v_keepAliveTimeout_2378_; lean_object* v_currentTimeout_2379_; lean_object* v_headerTimeout_2380_; lean_object* v_response_2381_; lean_object* v_respStream_2382_; uint8_t v_requiresData_2383_; lean_object* v_expectData_2384_; lean_object* v_val_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2409_; 
v_machine_2376_ = lean_ctor_get(v_state_2372_, 0);
lean_inc_ref(v_machine_2376_);
v_requestStream_2377_ = lean_ctor_get(v_state_2372_, 1);
lean_inc_ref(v_requestStream_2377_);
v_keepAliveTimeout_2378_ = lean_ctor_get(v_state_2372_, 2);
lean_inc(v_keepAliveTimeout_2378_);
v_currentTimeout_2379_ = lean_ctor_get(v_state_2372_, 3);
lean_inc(v_currentTimeout_2379_);
v_headerTimeout_2380_ = lean_ctor_get(v_state_2372_, 4);
lean_inc(v_headerTimeout_2380_);
v_response_2381_ = lean_ctor_get(v_state_2372_, 5);
lean_inc_ref(v_response_2381_);
v_respStream_2382_ = lean_ctor_get(v_state_2372_, 6);
lean_inc(v_respStream_2382_);
v_requiresData_2383_ = lean_ctor_get_uint8(v_state_2372_, sizeof(void*)*9);
v_expectData_2384_ = lean_ctor_get(v_state_2372_, 7);
lean_inc(v_expectData_2384_);
lean_dec_ref(v_state_2372_);
v_val_2385_ = lean_ctor_get(v_pendingHead_2375_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_pendingHead_2375_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2387_ = v_pendingHead_2375_;
v_isShared_2388_ = v_isSharedCheck_2409_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_val_2385_);
lean_dec(v_pendingHead_2375_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2409_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v_onRequest_2389_; lean_object* v___f_2390_; lean_object* v___x_2391_; lean_object* v___f_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___f_2397_; uint8_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; uint8_t v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2405_; 
v_onRequest_2389_ = lean_ctor_get(v_inst_2368_, 1);
lean_inc_ref(v_onRequest_2389_);
lean_dec_ref(v_inst_2368_);
v___f_2390_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__3));
v___x_2391_ = lean_box(v_requiresData_2383_);
lean_inc_ref(v_response_2381_);
lean_inc_ref(v_requestStream_2377_);
v___f_2392_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed), 11, 9);
lean_closure_set(v___f_2392_, 0, v_machine_2376_);
lean_closure_set(v___f_2392_, 1, v_requestStream_2377_);
lean_closure_set(v___f_2392_, 2, v_keepAliveTimeout_2378_);
lean_closure_set(v___f_2392_, 3, v_currentTimeout_2379_);
lean_closure_set(v___f_2392_, 4, v_headerTimeout_2380_);
lean_closure_set(v___f_2392_, 5, v_response_2381_);
lean_closure_set(v___f_2392_, 6, v_respStream_2382_);
lean_closure_set(v___f_2392_, 7, v___x_2391_);
lean_closure_set(v___f_2392_, 8, v_expectData_2384_);
v___x_2393_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2393_, 0, v_val_2385_);
lean_ctor_set(v___x_2393_, 1, v_requestStream_2377_);
lean_ctor_set(v___x_2393_, 2, v_extensions_2370_);
v___x_2394_ = lean_apply_2(v_onRequest_2389_, v_handler_2369_, v___x_2393_);
v___x_2395_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_runIn___boxed), 4, 3);
lean_closure_set(v___x_2395_, 0, lean_box(0));
lean_closure_set(v___x_2395_, 1, v_connectionContext_2371_);
lean_closure_set(v___x_2395_, 2, v___x_2394_);
v___x_2396_ = lean_unsigned_to_nat(0u);
v___f_2397_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2397_, 0, v___x_2374_);
lean_closure_set(v___f_2397_, 1, v_response_2381_);
lean_closure_set(v___f_2397_, 2, v___x_2396_);
lean_closure_set(v___f_2397_, 3, v___f_2392_);
v___x_2398_ = 0;
v___x_2399_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2399_, 0, lean_box(0));
lean_closure_set(v___x_2399_, 1, lean_box(0));
lean_closure_set(v___x_2399_, 2, v___x_2395_);
v___x_2400_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2400_, 0, lean_box(0));
lean_closure_set(v___x_2400_, 1, v___x_2399_);
v___x_2401_ = lean_io_as_task(v___x_2400_, v___x_2396_);
v___x_2402_ = 1;
v___x_2403_ = lean_task_bind(v___x_2401_, v___f_2390_, v___x_2396_, v___x_2402_);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 0, v___x_2403_);
v___x_2405_ = v___x_2387_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v___x_2403_);
v___x_2405_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
v___x_2407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2396_, v___x_2398_, v___x_2406_, v___f_2397_);
return v___x_2407_;
}
}
}
else
{
lean_object* v___x_2410_; lean_object* v___x_2411_; 
lean_dec(v_pendingHead_2375_);
lean_dec_ref(v_connectionContext_2371_);
lean_dec(v_extensions_2370_);
lean_dec(v_handler_2369_);
lean_dec_ref(v_inst_2368_);
v___x_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2410_, 0, v_state_2372_);
v___x_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2410_);
return v___x_2411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object* v_inst_2412_, lean_object* v_handler_2413_, lean_object* v_extensions_2414_, lean_object* v_connectionContext_2415_, lean_object* v_state_2416_, lean_object* v___y_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2412_, v_handler_2413_, v_extensions_2414_, v_connectionContext_2415_, v_state_2416_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object* v_00_u03c3_2419_, lean_object* v_inst_2420_, lean_object* v_handler_2421_, lean_object* v_extensions_2422_, lean_object* v_connectionContext_2423_, lean_object* v_state_2424_){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2420_, v_handler_2421_, v_extensions_2422_, v_connectionContext_2423_, v_state_2424_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object* v_00_u03c3_2427_, lean_object* v_inst_2428_, lean_object* v_handler_2429_, lean_object* v_extensions_2430_, lean_object* v_connectionContext_2431_, lean_object* v_state_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(v_00_u03c3_2427_, v_inst_2428_, v_handler_2429_, v_extensions_2430_, v_connectionContext_2431_, v_state_2432_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object* v_machine_2435_, lean_object* v_____r_2436_){
_start:
{
lean_object* v_writer_2438_; lean_object* v_reader_2439_; lean_object* v_config_2440_; lean_object* v_events_2441_; lean_object* v_error_2442_; lean_object* v_instant_2443_; uint8_t v_keepAlive_2444_; uint8_t v_forcedFlush_2445_; uint8_t v_pullBodyStalled_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2473_; 
v_writer_2438_ = lean_ctor_get(v_machine_2435_, 1);
v_reader_2439_ = lean_ctor_get(v_machine_2435_, 0);
v_config_2440_ = lean_ctor_get(v_machine_2435_, 2);
v_events_2441_ = lean_ctor_get(v_machine_2435_, 3);
v_error_2442_ = lean_ctor_get(v_machine_2435_, 4);
v_instant_2443_ = lean_ctor_get(v_machine_2435_, 5);
v_keepAlive_2444_ = lean_ctor_get_uint8(v_machine_2435_, sizeof(void*)*6);
v_forcedFlush_2445_ = lean_ctor_get_uint8(v_machine_2435_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2446_ = lean_ctor_get_uint8(v_machine_2435_, sizeof(void*)*6 + 2);
v_isSharedCheck_2473_ = !lean_is_exclusive(v_machine_2435_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2448_ = v_machine_2435_;
v_isShared_2449_ = v_isSharedCheck_2473_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_instant_2443_);
lean_inc(v_error_2442_);
lean_inc(v_events_2441_);
lean_inc(v_config_2440_);
lean_inc(v_writer_2438_);
lean_inc(v_reader_2439_);
lean_dec(v_machine_2435_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2473_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v_userData_2450_; lean_object* v_outputData_2451_; lean_object* v_state_2452_; lean_object* v_knownSize_2453_; lean_object* v_messageHead_2454_; uint8_t v_sentMessage_2455_; uint8_t v_omitBody_2456_; lean_object* v_userDataBytes_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2472_; 
v_userData_2450_ = lean_ctor_get(v_writer_2438_, 0);
v_outputData_2451_ = lean_ctor_get(v_writer_2438_, 1);
v_state_2452_ = lean_ctor_get(v_writer_2438_, 2);
v_knownSize_2453_ = lean_ctor_get(v_writer_2438_, 3);
v_messageHead_2454_ = lean_ctor_get(v_writer_2438_, 4);
v_sentMessage_2455_ = lean_ctor_get_uint8(v_writer_2438_, sizeof(void*)*6);
v_omitBody_2456_ = lean_ctor_get_uint8(v_writer_2438_, sizeof(void*)*6 + 2);
v_userDataBytes_2457_ = lean_ctor_get(v_writer_2438_, 5);
v_isSharedCheck_2472_ = !lean_is_exclusive(v_writer_2438_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2459_ = v_writer_2438_;
v_isShared_2460_ = v_isSharedCheck_2472_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_userDataBytes_2457_);
lean_inc(v_messageHead_2454_);
lean_inc(v_knownSize_2453_);
lean_inc(v_state_2452_);
lean_inc(v_outputData_2451_);
lean_inc(v_userData_2450_);
lean_dec(v_writer_2438_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2472_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
uint8_t v___x_2461_; lean_object* v___x_2463_; 
v___x_2461_ = 1;
if (v_isShared_2460_ == 0)
{
v___x_2463_ = v___x_2459_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_userData_2450_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v_outputData_2451_);
lean_ctor_set(v_reuseFailAlloc_2471_, 2, v_state_2452_);
lean_ctor_set(v_reuseFailAlloc_2471_, 3, v_knownSize_2453_);
lean_ctor_set(v_reuseFailAlloc_2471_, 4, v_messageHead_2454_);
lean_ctor_set(v_reuseFailAlloc_2471_, 5, v_userDataBytes_2457_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, sizeof(void*)*6, v_sentMessage_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, sizeof(void*)*6 + 2, v_omitBody_2456_);
v___x_2463_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2465_; 
lean_ctor_set_uint8(v___x_2463_, sizeof(void*)*6 + 1, v___x_2461_);
if (v_isShared_2449_ == 0)
{
lean_ctor_set(v___x_2448_, 1, v___x_2463_);
v___x_2465_ = v___x_2448_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_reader_2439_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v___x_2463_);
lean_ctor_set(v_reuseFailAlloc_2470_, 2, v_config_2440_);
lean_ctor_set(v_reuseFailAlloc_2470_, 3, v_events_2441_);
lean_ctor_set(v_reuseFailAlloc_2470_, 4, v_error_2442_);
lean_ctor_set(v_reuseFailAlloc_2470_, 5, v_instant_2443_);
lean_ctor_set_uint8(v_reuseFailAlloc_2470_, sizeof(void*)*6, v_keepAlive_2444_);
lean_ctor_set_uint8(v_reuseFailAlloc_2470_, sizeof(void*)*6 + 1, v_forcedFlush_2445_);
lean_ctor_set_uint8(v_reuseFailAlloc_2470_, sizeof(void*)*6 + 2, v_pullBodyStalled_2446_);
v___x_2465_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2466_ = lean_box(0);
v___x_2467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2465_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
v___x_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2468_);
return v___x_2469_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object* v_machine_2474_, lean_object* v_____r_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(v_machine_2474_, v_____r_2475_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object* v_x1_2478_, lean_object* v_x2_2479_){
_start:
{
lean_object* v_data_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v_data_2480_ = lean_ctor_get(v_x2_2479_, 0);
v___x_2481_ = lean_byte_array_size(v_data_2480_);
v___x_2482_ = lean_nat_add(v_x1_2478_, v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object* v_x1_2483_, lean_object* v_x2_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(v_x1_2483_, v_x2_2484_);
lean_dec_ref(v_x2_2484_);
lean_dec(v_x1_2483_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object* v_body_2486_, lean_object* v_machine_2487_, lean_object* v_isClosed_2488_, lean_object* v___f_2489_, lean_object* v___f_2490_, lean_object* v_x_2491_){
_start:
{
lean_object* v___y_2494_; 
if (lean_obj_tag(v_x_2491_) == 0)
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2507_; 
lean_dec_ref(v___f_2490_);
lean_dec_ref(v___f_2489_);
lean_dec_ref(v_isClosed_2488_);
lean_dec_ref(v_machine_2487_);
lean_dec(v_body_2486_);
v_a_2499_ = lean_ctor_get(v_x_2491_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v_x_2491_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2501_ = v_x_2491_;
v_isShared_2502_ = v_isSharedCheck_2507_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v_x_2491_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2507_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2499_);
v___x_2504_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
lean_object* v___x_2505_; 
v___x_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
return v___x_2505_;
}
}
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2571_; 
v_a_2508_ = lean_ctor_get(v_x_2491_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v_x_2491_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2510_ = v_x_2491_;
v_isShared_2511_ = v_isSharedCheck_2571_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v_x_2491_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2571_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
if (lean_obj_tag(v_a_2508_) == 0)
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2515_; 
lean_dec_ref(v___f_2490_);
lean_dec_ref(v___f_2489_);
lean_dec_ref(v_isClosed_2488_);
v___x_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2512_, 0, v_body_2486_);
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v_machine_2487_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
if (v_isShared_2511_ == 0)
{
lean_ctor_set(v___x_2510_, 0, v___x_2513_);
v___x_2515_ = v___x_2510_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v___x_2513_);
v___x_2515_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
lean_object* v___x_2516_; 
v___x_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
return v___x_2516_;
}
}
else
{
lean_object* v_val_2518_; 
lean_del_object(v___x_2510_);
v_val_2518_ = lean_ctor_get(v_a_2508_, 0);
lean_inc(v_val_2518_);
lean_dec_ref_known(v_a_2508_, 1);
if (lean_obj_tag(v_val_2518_) == 0)
{
lean_object* v___x_2519_; uint8_t v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
lean_dec_ref(v___f_2490_);
lean_dec_ref(v_machine_2487_);
v___x_2519_ = lean_unsigned_to_nat(0u);
v___x_2520_ = 0;
v___x_2521_ = lean_apply_2(v_isClosed_2488_, v_body_2486_, lean_box(0));
v___x_2522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2519_, v___x_2520_, v___x_2521_, v___f_2489_);
return v___x_2522_;
}
else
{
lean_object* v_val_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; uint8_t v___x_2529_; 
lean_dec_ref(v___f_2489_);
lean_dec_ref(v_isClosed_2488_);
v_val_2523_ = lean_ctor_get(v_val_2518_, 0);
lean_inc(v_val_2523_);
lean_dec_ref_known(v_val_2518_, 1);
v___x_2524_ = lean_unsigned_to_nat(1u);
v___x_2525_ = lean_mk_empty_array_with_capacity(v___x_2524_);
v___x_2526_ = lean_array_push(v___x_2525_, v_val_2523_);
v___x_2527_ = lean_array_get_size(v___x_2526_);
v___x_2528_ = lean_unsigned_to_nat(0u);
v___x_2529_ = lean_nat_dec_eq(v___x_2527_, v___x_2528_);
if (v___x_2529_ == 0)
{
lean_object* v_reader_2530_; lean_object* v_writer_2531_; lean_object* v_config_2532_; lean_object* v_events_2533_; lean_object* v_error_2534_; lean_object* v_instant_2535_; uint8_t v_keepAlive_2536_; uint8_t v_forcedFlush_2537_; uint8_t v_pullBodyStalled_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2570_; 
v_reader_2530_ = lean_ctor_get(v_machine_2487_, 0);
v_writer_2531_ = lean_ctor_get(v_machine_2487_, 1);
v_config_2532_ = lean_ctor_get(v_machine_2487_, 2);
v_events_2533_ = lean_ctor_get(v_machine_2487_, 3);
v_error_2534_ = lean_ctor_get(v_machine_2487_, 4);
v_instant_2535_ = lean_ctor_get(v_machine_2487_, 5);
v_keepAlive_2536_ = lean_ctor_get_uint8(v_machine_2487_, sizeof(void*)*6);
v_forcedFlush_2537_ = lean_ctor_get_uint8(v_machine_2487_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2538_ = lean_ctor_get_uint8(v_machine_2487_, sizeof(void*)*6 + 2);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_machine_2487_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2540_ = v_machine_2487_;
v_isShared_2541_ = v_isSharedCheck_2570_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_instant_2535_);
lean_inc(v_error_2534_);
lean_inc(v_events_2533_);
lean_inc(v_config_2532_);
lean_inc(v_writer_2531_);
lean_inc(v_reader_2530_);
lean_dec(v_machine_2487_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2570_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___y_2543_; lean_object* v___x_2565_; uint8_t v___x_2566_; 
v___x_2565_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_2566_ = lean_nat_dec_lt(v___x_2528_, v___x_2527_);
if (v___x_2566_ == 0)
{
lean_dec_ref(v___f_2490_);
v___y_2543_ = v___x_2528_;
goto v___jp_2542_;
}
else
{
size_t v___x_2567_; size_t v___x_2568_; lean_object* v___x_2569_; 
v___x_2567_ = ((size_t)0ULL);
v___x_2568_ = lean_usize_of_nat(v___x_2527_);
lean_inc_ref(v___x_2526_);
v___x_2569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2565_, v___f_2490_, v___x_2526_, v___x_2567_, v___x_2568_, v___x_2528_);
v___y_2543_ = v___x_2569_;
goto v___jp_2542_;
}
v___jp_2542_:
{
lean_object* v_userData_2544_; lean_object* v_outputData_2545_; lean_object* v_state_2546_; lean_object* v_knownSize_2547_; lean_object* v_messageHead_2548_; uint8_t v_sentMessage_2549_; uint8_t v_userClosedBody_2550_; uint8_t v_omitBody_2551_; lean_object* v_userDataBytes_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2564_; 
v_userData_2544_ = lean_ctor_get(v_writer_2531_, 0);
v_outputData_2545_ = lean_ctor_get(v_writer_2531_, 1);
v_state_2546_ = lean_ctor_get(v_writer_2531_, 2);
v_knownSize_2547_ = lean_ctor_get(v_writer_2531_, 3);
v_messageHead_2548_ = lean_ctor_get(v_writer_2531_, 4);
v_sentMessage_2549_ = lean_ctor_get_uint8(v_writer_2531_, sizeof(void*)*6);
v_userClosedBody_2550_ = lean_ctor_get_uint8(v_writer_2531_, sizeof(void*)*6 + 1);
v_omitBody_2551_ = lean_ctor_get_uint8(v_writer_2531_, sizeof(void*)*6 + 2);
v_userDataBytes_2552_ = lean_ctor_get(v_writer_2531_, 5);
v_isSharedCheck_2564_ = !lean_is_exclusive(v_writer_2531_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2554_ = v_writer_2531_;
v_isShared_2555_ = v_isSharedCheck_2564_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_userDataBytes_2552_);
lean_inc(v_messageHead_2548_);
lean_inc(v_knownSize_2547_);
lean_inc(v_state_2546_);
lean_inc(v_outputData_2545_);
lean_inc(v_userData_2544_);
lean_dec(v_writer_2531_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2564_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2559_; 
v___x_2556_ = l_Array_append___redArg(v_userData_2544_, v___x_2526_);
lean_dec_ref(v___x_2526_);
v___x_2557_ = lean_nat_add(v_userDataBytes_2552_, v___y_2543_);
lean_dec(v___y_2543_);
lean_dec(v_userDataBytes_2552_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 5, v___x_2557_);
lean_ctor_set(v___x_2554_, 0, v___x_2556_);
v___x_2559_ = v___x_2554_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2556_);
lean_ctor_set(v_reuseFailAlloc_2563_, 1, v_outputData_2545_);
lean_ctor_set(v_reuseFailAlloc_2563_, 2, v_state_2546_);
lean_ctor_set(v_reuseFailAlloc_2563_, 3, v_knownSize_2547_);
lean_ctor_set(v_reuseFailAlloc_2563_, 4, v_messageHead_2548_);
lean_ctor_set(v_reuseFailAlloc_2563_, 5, v___x_2557_);
lean_ctor_set_uint8(v_reuseFailAlloc_2563_, sizeof(void*)*6, v_sentMessage_2549_);
lean_ctor_set_uint8(v_reuseFailAlloc_2563_, sizeof(void*)*6 + 1, v_userClosedBody_2550_);
lean_ctor_set_uint8(v_reuseFailAlloc_2563_, sizeof(void*)*6 + 2, v_omitBody_2551_);
v___x_2559_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
lean_object* v___x_2561_; 
if (v_isShared_2541_ == 0)
{
lean_ctor_set(v___x_2540_, 1, v___x_2559_);
v___x_2561_ = v___x_2540_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_reader_2530_);
lean_ctor_set(v_reuseFailAlloc_2562_, 1, v___x_2559_);
lean_ctor_set(v_reuseFailAlloc_2562_, 2, v_config_2532_);
lean_ctor_set(v_reuseFailAlloc_2562_, 3, v_events_2533_);
lean_ctor_set(v_reuseFailAlloc_2562_, 4, v_error_2534_);
lean_ctor_set(v_reuseFailAlloc_2562_, 5, v_instant_2535_);
lean_ctor_set_uint8(v_reuseFailAlloc_2562_, sizeof(void*)*6, v_keepAlive_2536_);
lean_ctor_set_uint8(v_reuseFailAlloc_2562_, sizeof(void*)*6 + 1, v_forcedFlush_2537_);
lean_ctor_set_uint8(v_reuseFailAlloc_2562_, sizeof(void*)*6 + 2, v_pullBodyStalled_2538_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
v___y_2494_ = v___x_2561_;
goto v___jp_2493_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2526_);
lean_dec_ref(v___f_2490_);
v___y_2494_ = v_machine_2487_;
goto v___jp_2493_;
}
}
}
}
}
v___jp_2493_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2495_, 0, v_body_2486_);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___y_2494_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
return v___x_2498_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object* v_body_2572_, lean_object* v_machine_2573_, lean_object* v_isClosed_2574_, lean_object* v___f_2575_, lean_object* v___f_2576_, lean_object* v_x_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(v_body_2572_, v_machine_2573_, v_isClosed_2574_, v___f_2575_, v___f_2576_, v_x_2577_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object* v_inst_2581_, lean_object* v_machine_2582_, lean_object* v_body_2583_){
_start:
{
lean_object* v_close_2585_; lean_object* v_isClosed_2586_; lean_object* v_tryRecv_2587_; lean_object* v___f_2588_; lean_object* v___f_2589_; lean_object* v___f_2590_; lean_object* v___f_2591_; lean_object* v___f_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v_close_2585_ = lean_ctor_get(v_inst_2581_, 1);
lean_inc_ref(v_close_2585_);
v_isClosed_2586_ = lean_ctor_get(v_inst_2581_, 2);
lean_inc_ref(v_isClosed_2586_);
v_tryRecv_2587_ = lean_ctor_get(v_inst_2581_, 4);
lean_inc_ref(v_tryRecv_2587_);
lean_dec_ref(v_inst_2581_);
lean_inc_ref(v_machine_2582_);
v___f_2588_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2588_, 0, v_machine_2582_);
lean_inc_ref(v___f_2588_);
v___f_2589_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2589_, 0, v___f_2588_);
lean_inc_n(v_body_2583_, 2);
v___f_2590_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2590_, 0, v_close_2585_);
lean_closure_set(v___f_2590_, 1, v_body_2583_);
lean_closure_set(v___f_2590_, 2, v___f_2589_);
lean_closure_set(v___f_2590_, 3, v___f_2588_);
v___f_2591_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___f_2592_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2592_, 0, v_body_2583_);
lean_closure_set(v___f_2592_, 1, v_machine_2582_);
lean_closure_set(v___f_2592_, 2, v_isClosed_2586_);
lean_closure_set(v___f_2592_, 3, v___f_2590_);
lean_closure_set(v___f_2592_, 4, v___f_2591_);
v___x_2593_ = lean_unsigned_to_nat(0u);
v___x_2594_ = 0;
v___x_2595_ = lean_apply_2(v_tryRecv_2587_, v_body_2583_, lean_box(0));
v___x_2596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2593_, v___x_2594_, v___x_2595_, v___f_2592_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object* v_inst_2597_, lean_object* v_machine_2598_, lean_object* v_body_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2597_, v_machine_2598_, v_body_2599_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object* v_00_u03b2_2602_, lean_object* v_inst_2603_, lean_object* v_machine_2604_, lean_object* v_body_2605_){
_start:
{
lean_object* v___x_2607_; 
v___x_2607_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2603_, v_machine_2604_, v_body_2605_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object* v_00_u03b2_2608_, lean_object* v_inst_2609_, lean_object* v_machine_2610_, lean_object* v_body_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(v_00_u03b2_2608_, v_inst_2609_, v_machine_2610_, v_body_2611_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object* v_val_2620_, lean_object* v_____r_2621_, lean_object* v_st_2622_){
_start:
{
lean_object* v_machine_2624_; lean_object* v_requestStream_2625_; lean_object* v_keepAliveTimeout_2626_; lean_object* v_currentTimeout_2627_; lean_object* v_headerTimeout_2628_; lean_object* v_response_2629_; lean_object* v_respStream_2630_; uint8_t v_requiresData_2631_; lean_object* v_expectData_2632_; uint8_t v_handlerDispatched_2633_; lean_object* v_pendingHead_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2719_; 
v_machine_2624_ = lean_ctor_get(v_st_2622_, 0);
v_requestStream_2625_ = lean_ctor_get(v_st_2622_, 1);
v_keepAliveTimeout_2626_ = lean_ctor_get(v_st_2622_, 2);
v_currentTimeout_2627_ = lean_ctor_get(v_st_2622_, 3);
v_headerTimeout_2628_ = lean_ctor_get(v_st_2622_, 4);
v_response_2629_ = lean_ctor_get(v_st_2622_, 5);
v_respStream_2630_ = lean_ctor_get(v_st_2622_, 6);
v_requiresData_2631_ = lean_ctor_get_uint8(v_st_2622_, sizeof(void*)*9);
v_expectData_2632_ = lean_ctor_get(v_st_2622_, 7);
v_handlerDispatched_2633_ = lean_ctor_get_uint8(v_st_2622_, sizeof(void*)*9 + 1);
v_pendingHead_2634_ = lean_ctor_get(v_st_2622_, 8);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_st_2622_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2636_ = v_st_2622_;
v_isShared_2637_ = v_isSharedCheck_2719_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_pendingHead_2634_);
lean_inc(v_expectData_2632_);
lean_inc(v_respStream_2630_);
lean_inc(v_response_2629_);
lean_inc(v_headerTimeout_2628_);
lean_inc(v_currentTimeout_2627_);
lean_inc(v_keepAliveTimeout_2626_);
lean_inc(v_requestStream_2625_);
lean_inc(v_machine_2624_);
lean_dec(v_st_2622_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2719_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___y_2639_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; uint8_t v___y_2655_; uint8_t v___y_2656_; uint8_t v___y_2657_; uint8_t v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v_reader_2684_; lean_object* v_writer_2685_; lean_object* v_config_2686_; lean_object* v_events_2687_; lean_object* v_error_2688_; lean_object* v_instant_2689_; uint8_t v_keepAlive_2690_; uint8_t v_forcedFlush_2691_; lean_object* v_state_2692_; lean_object* v_input_2693_; lean_object* v_messageHead_2694_; lean_object* v_messageCount_2695_; lean_object* v_bodyBytesRead_2696_; lean_object* v_headerBytesRead_2697_; uint8_t v_noMoreInput_2698_; uint8_t v___y_2700_; uint8_t v___y_2701_; uint8_t v___y_2714_; 
v_reader_2684_ = lean_ctor_get(v_machine_2624_, 0);
v_writer_2685_ = lean_ctor_get(v_machine_2624_, 1);
v_config_2686_ = lean_ctor_get(v_machine_2624_, 2);
v_events_2687_ = lean_ctor_get(v_machine_2624_, 3);
v_error_2688_ = lean_ctor_get(v_machine_2624_, 4);
v_instant_2689_ = lean_ctor_get(v_machine_2624_, 5);
v_keepAlive_2690_ = lean_ctor_get_uint8(v_machine_2624_, sizeof(void*)*6);
v_forcedFlush_2691_ = lean_ctor_get_uint8(v_machine_2624_, sizeof(void*)*6 + 1);
v_state_2692_ = lean_ctor_get(v_reader_2684_, 0);
v_input_2693_ = lean_ctor_get(v_reader_2684_, 1);
v_messageHead_2694_ = lean_ctor_get(v_reader_2684_, 2);
v_messageCount_2695_ = lean_ctor_get(v_reader_2684_, 3);
v_bodyBytesRead_2696_ = lean_ctor_get(v_reader_2684_, 4);
v_headerBytesRead_2697_ = lean_ctor_get(v_reader_2684_, 5);
v_noMoreInput_2698_ = lean_ctor_get_uint8(v_reader_2684_, sizeof(void*)*6);
if (lean_obj_tag(v_state_2692_) == 6)
{
uint8_t v___x_2717_; 
v___x_2717_ = 1;
v___y_2714_ = v___x_2717_;
goto v___jp_2713_;
}
else
{
uint8_t v___x_2718_; 
v___x_2718_ = 0;
v___y_2714_ = v___x_2718_;
goto v___jp_2713_;
}
v___jp_2638_:
{
lean_object* v___x_2641_; 
if (v_isShared_2637_ == 0)
{
lean_ctor_set(v___x_2636_, 0, v___y_2639_);
v___x_2641_ = v___x_2636_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___y_2639_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_requestStream_2625_);
lean_ctor_set(v_reuseFailAlloc_2647_, 2, v_keepAliveTimeout_2626_);
lean_ctor_set(v_reuseFailAlloc_2647_, 3, v_currentTimeout_2627_);
lean_ctor_set(v_reuseFailAlloc_2647_, 4, v_headerTimeout_2628_);
lean_ctor_set(v_reuseFailAlloc_2647_, 5, v_response_2629_);
lean_ctor_set(v_reuseFailAlloc_2647_, 6, v_respStream_2630_);
lean_ctor_set(v_reuseFailAlloc_2647_, 7, v_expectData_2632_);
lean_ctor_set(v_reuseFailAlloc_2647_, 8, v_pendingHead_2634_);
lean_ctor_set_uint8(v_reuseFailAlloc_2647_, sizeof(void*)*9, v_requiresData_2631_);
lean_ctor_set_uint8(v_reuseFailAlloc_2647_, sizeof(void*)*9 + 1, v_handlerDispatched_2633_);
v___x_2641_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2642_ = 0;
v___x_2643_ = lean_box(v___x_2642_);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2641_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2644_);
v___x_2646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
return v___x_2646_;
}
}
v___jp_2648_:
{
lean_object* v_maxHeaderBytes_2664_; lean_object* v_maxStartLineLength_2665_; lean_object* v_maxChunkLineLength_2666_; lean_object* v_maxBodySize_2667_; lean_object* v_array_2668_; lean_object* v_idx_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; 
v_maxHeaderBytes_2664_ = lean_ctor_get(v___y_2660_, 2);
v_maxStartLineLength_2665_ = lean_ctor_get(v___y_2660_, 5);
v_maxChunkLineLength_2666_ = lean_ctor_get(v___y_2660_, 13);
v_maxBodySize_2667_ = lean_ctor_get(v___y_2660_, 15);
v_array_2668_ = lean_ctor_get(v___y_2663_, 0);
v_idx_2669_ = lean_ctor_get(v___y_2663_, 1);
v___x_2670_ = lean_nat_add(v_maxBodySize_2667_, v_maxHeaderBytes_2664_);
v___x_2671_ = lean_nat_add(v___x_2670_, v_maxStartLineLength_2665_);
lean_dec(v___x_2670_);
v___x_2672_ = lean_nat_add(v___x_2671_, v_maxChunkLineLength_2666_);
lean_dec(v___x_2671_);
v___x_2673_ = lean_byte_array_size(v_array_2668_);
v___x_2674_ = lean_nat_sub(v___x_2673_, v_idx_2669_);
v___x_2675_ = lean_nat_dec_lt(v___x_2672_, v___x_2674_);
lean_dec(v___x_2674_);
lean_dec(v___x_2672_);
if (v___x_2675_ == 0)
{
lean_object* v___x_2676_; lean_object* v_machine_2677_; 
v___x_2676_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2676_, 0, v___y_2649_);
lean_ctor_set(v___x_2676_, 1, v___y_2663_);
lean_ctor_set(v___x_2676_, 2, v___y_2654_);
lean_ctor_set(v___x_2676_, 3, v___y_2653_);
lean_ctor_set(v___x_2676_, 4, v___y_2650_);
lean_ctor_set(v___x_2676_, 5, v___y_2652_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*6, v___y_2658_);
v_machine_2677_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_machine_2677_, 0, v___x_2676_);
lean_ctor_set(v_machine_2677_, 1, v___y_2659_);
lean_ctor_set(v_machine_2677_, 2, v___y_2660_);
lean_ctor_set(v_machine_2677_, 3, v___y_2661_);
lean_ctor_set(v_machine_2677_, 4, v___y_2662_);
lean_ctor_set(v_machine_2677_, 5, v___y_2651_);
lean_ctor_set_uint8(v_machine_2677_, sizeof(void*)*6, v___y_2655_);
lean_ctor_set_uint8(v_machine_2677_, sizeof(void*)*6 + 1, v___y_2656_);
lean_ctor_set_uint8(v_machine_2677_, sizeof(void*)*6 + 2, v___y_2657_);
v___y_2639_ = v_machine_2677_;
goto v___jp_2638_;
}
else
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_dec(v___y_2662_);
lean_dec(v___y_2649_);
v___x_2678_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0));
v___x_2679_ = lean_array_push(v___y_2661_, v___x_2678_);
v___x_2680_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1));
v___x_2681_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
lean_ctor_set(v___x_2681_, 1, v___y_2663_);
lean_ctor_set(v___x_2681_, 2, v___y_2654_);
lean_ctor_set(v___x_2681_, 3, v___y_2653_);
lean_ctor_set(v___x_2681_, 4, v___y_2650_);
lean_ctor_set(v___x_2681_, 5, v___y_2652_);
lean_ctor_set_uint8(v___x_2681_, sizeof(void*)*6, v___y_2658_);
v___x_2682_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2));
v___x_2683_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2683_, 0, v___x_2681_);
lean_ctor_set(v___x_2683_, 1, v___y_2659_);
lean_ctor_set(v___x_2683_, 2, v___y_2660_);
lean_ctor_set(v___x_2683_, 3, v___x_2679_);
lean_ctor_set(v___x_2683_, 4, v___x_2682_);
lean_ctor_set(v___x_2683_, 5, v___y_2651_);
lean_ctor_set_uint8(v___x_2683_, sizeof(void*)*6, v___y_2655_);
lean_ctor_set_uint8(v___x_2683_, sizeof(void*)*6 + 1, v___y_2656_);
lean_ctor_set_uint8(v___x_2683_, sizeof(void*)*6 + 2, v___y_2657_);
v___y_2639_ = v___x_2683_;
goto v___jp_2638_;
}
}
v___jp_2699_:
{
if (v___y_2700_ == 0)
{
if (v___y_2701_ == 0)
{
lean_object* v_array_2702_; lean_object* v_idx_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; 
lean_inc(v_headerBytesRead_2697_);
lean_inc(v_bodyBytesRead_2696_);
lean_inc(v_messageCount_2695_);
lean_inc(v_messageHead_2694_);
lean_inc_ref(v_input_2693_);
lean_inc(v_state_2692_);
lean_inc(v_instant_2689_);
lean_inc(v_error_2688_);
lean_inc_ref(v_events_2687_);
lean_inc_ref(v_config_2686_);
lean_inc_ref(v_writer_2685_);
lean_dec_ref(v_machine_2624_);
v_array_2702_ = lean_ctor_get(v_input_2693_, 0);
lean_inc_ref(v_array_2702_);
v_idx_2703_ = lean_ctor_get(v_input_2693_, 1);
lean_inc(v_idx_2703_);
lean_dec_ref(v_input_2693_);
v___x_2704_ = lean_byte_array_size(v_array_2702_);
v___x_2705_ = lean_nat_dec_le(v___x_2704_, v_idx_2703_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2706_ = l_ByteArray_extract(v_array_2702_, v_idx_2703_, v___x_2704_);
lean_dec_ref(v_array_2702_);
v___x_2707_ = lean_unsigned_to_nat(0u);
v___x_2708_ = lean_byte_array_size(v___x_2706_);
v___x_2709_ = lean_byte_array_size(v_val_2620_);
v___x_2710_ = lean_byte_array_copy_slice(v_val_2620_, v___x_2707_, v___x_2706_, v___x_2708_, v___x_2709_, v___x_2705_);
lean_dec_ref(v_val_2620_);
v___x_2711_ = l_ByteArray_mkIterator(v___x_2710_);
v___y_2649_ = v_state_2692_;
v___y_2650_ = v_bodyBytesRead_2696_;
v___y_2651_ = v_instant_2689_;
v___y_2652_ = v_headerBytesRead_2697_;
v___y_2653_ = v_messageCount_2695_;
v___y_2654_ = v_messageHead_2694_;
v___y_2655_ = v_keepAlive_2690_;
v___y_2656_ = v_forcedFlush_2691_;
v___y_2657_ = v___y_2701_;
v___y_2658_ = v_noMoreInput_2698_;
v___y_2659_ = v_writer_2685_;
v___y_2660_ = v_config_2686_;
v___y_2661_ = v_events_2687_;
v___y_2662_ = v_error_2688_;
v___y_2663_ = v___x_2711_;
goto v___jp_2648_;
}
else
{
lean_object* v___x_2712_; 
lean_dec(v_idx_2703_);
lean_dec_ref(v_array_2702_);
v___x_2712_ = l_ByteArray_mkIterator(v_val_2620_);
v___y_2649_ = v_state_2692_;
v___y_2650_ = v_bodyBytesRead_2696_;
v___y_2651_ = v_instant_2689_;
v___y_2652_ = v_headerBytesRead_2697_;
v___y_2653_ = v_messageCount_2695_;
v___y_2654_ = v_messageHead_2694_;
v___y_2655_ = v_keepAlive_2690_;
v___y_2656_ = v_forcedFlush_2691_;
v___y_2657_ = v___y_2701_;
v___y_2658_ = v_noMoreInput_2698_;
v___y_2659_ = v_writer_2685_;
v___y_2660_ = v_config_2686_;
v___y_2661_ = v_events_2687_;
v___y_2662_ = v_error_2688_;
v___y_2663_ = v___x_2712_;
goto v___jp_2648_;
}
}
else
{
lean_dec_ref(v_val_2620_);
v___y_2639_ = v_machine_2624_;
goto v___jp_2638_;
}
}
else
{
lean_dec_ref(v_val_2620_);
v___y_2639_ = v_machine_2624_;
goto v___jp_2638_;
}
}
v___jp_2713_:
{
if (lean_obj_tag(v_state_2692_) == 7)
{
uint8_t v___x_2715_; 
v___x_2715_ = 1;
v___y_2700_ = v___y_2714_;
v___y_2701_ = v___x_2715_;
goto v___jp_2699_;
}
else
{
uint8_t v___x_2716_; 
v___x_2716_ = 0;
v___y_2700_ = v___y_2714_;
v___y_2701_ = v___x_2716_;
goto v___jp_2699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object* v_val_2720_, lean_object* v_____r_2721_, lean_object* v_st_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_2720_, v_____r_2721_, v_st_2722_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object* v_config_2725_, lean_object* v_machine_2726_, lean_object* v_requestStream_2727_, lean_object* v_currentTimeout_2728_, lean_object* v_response_2729_, lean_object* v_respStream_2730_, uint8_t v_requiresData_2731_, lean_object* v_expectData_2732_, uint8_t v_handlerDispatched_2733_, lean_object* v_pendingHead_2734_, lean_object* v___f_2735_, lean_object* v_x_2736_){
_start:
{
if (lean_obj_tag(v_x_2736_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2746_; 
lean_dec_ref(v___f_2735_);
lean_dec(v_pendingHead_2734_);
lean_dec(v_expectData_2732_);
lean_dec(v_respStream_2730_);
lean_dec_ref(v_response_2729_);
lean_dec(v_currentTimeout_2728_);
lean_dec_ref(v_requestStream_2727_);
lean_dec_ref(v_machine_2726_);
v_a_2738_ = lean_ctor_get(v_x_2736_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v_x_2736_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2740_ = v_x_2736_;
v_isShared_2741_ = v_isSharedCheck_2746_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v_x_2736_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2746_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
lean_object* v___x_2744_; 
v___x_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
return v___x_2744_;
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v_headerTimeout_2748_; lean_object* v_second_2749_; lean_object* v_nano_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v_second_2754_; lean_object* v_nano_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v_a_2747_ = lean_ctor_get(v_x_2736_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v_x_2736_, 1);
v_headerTimeout_2748_ = lean_ctor_get(v_config_2725_, 6);
v_second_2749_ = lean_ctor_get(v_a_2747_, 0);
lean_inc(v_second_2749_);
v_nano_2750_ = lean_ctor_get(v_a_2747_, 1);
lean_inc(v_nano_2750_);
lean_dec(v_a_2747_);
v___x_2751_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_2752_ = lean_int_mul(v_headerTimeout_2748_, v___x_2751_);
v___x_2753_ = l_Std_Time_Duration_ofNanoseconds(v___x_2752_);
lean_dec(v___x_2752_);
v_second_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_second_2754_);
v_nano_2755_ = lean_ctor_get(v___x_2753_, 1);
lean_inc(v_nano_2755_);
lean_dec_ref(v___x_2753_);
v___x_2756_ = lean_box(0);
v___x_2757_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_2758_ = lean_int_mul(v_second_2749_, v___x_2757_);
lean_dec(v_second_2749_);
v___x_2759_ = lean_int_add(v___x_2758_, v_nano_2750_);
lean_dec(v_nano_2750_);
lean_dec(v___x_2758_);
v___x_2760_ = lean_int_mul(v_second_2754_, v___x_2757_);
lean_dec(v_second_2754_);
v___x_2761_ = lean_int_add(v___x_2760_, v_nano_2755_);
lean_dec(v_nano_2755_);
lean_dec(v___x_2760_);
v___x_2762_ = lean_int_add(v___x_2759_, v___x_2761_);
lean_dec(v___x_2761_);
lean_dec(v___x_2759_);
v___x_2763_ = l_Std_Time_Duration_ofNanoseconds(v___x_2762_);
lean_dec(v___x_2762_);
v___x_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
v___x_2765_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2765_, 0, v_machine_2726_);
lean_ctor_set(v___x_2765_, 1, v_requestStream_2727_);
lean_ctor_set(v___x_2765_, 2, v___x_2756_);
lean_ctor_set(v___x_2765_, 3, v_currentTimeout_2728_);
lean_ctor_set(v___x_2765_, 4, v___x_2764_);
lean_ctor_set(v___x_2765_, 5, v_response_2729_);
lean_ctor_set(v___x_2765_, 6, v_respStream_2730_);
lean_ctor_set(v___x_2765_, 7, v_expectData_2732_);
lean_ctor_set(v___x_2765_, 8, v_pendingHead_2734_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*9, v_requiresData_2731_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*9 + 1, v_handlerDispatched_2733_);
v___x_2766_ = lean_box(0);
v___x_2767_ = lean_apply_3(v___f_2735_, v___x_2766_, v___x_2765_, lean_box(0));
return v___x_2767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object* v_config_2768_, lean_object* v_machine_2769_, lean_object* v_requestStream_2770_, lean_object* v_currentTimeout_2771_, lean_object* v_response_2772_, lean_object* v_respStream_2773_, lean_object* v_requiresData_2774_, lean_object* v_expectData_2775_, lean_object* v_handlerDispatched_2776_, lean_object* v_pendingHead_2777_, lean_object* v___f_2778_, lean_object* v_x_2779_, lean_object* v___y_2780_){
_start:
{
uint8_t v_requiresData_boxed_2781_; uint8_t v_handlerDispatched_boxed_2782_; lean_object* v_res_2783_; 
v_requiresData_boxed_2781_ = lean_unbox(v_requiresData_2774_);
v_handlerDispatched_boxed_2782_ = lean_unbox(v_handlerDispatched_2776_);
v_res_2783_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(v_config_2768_, v_machine_2769_, v_requestStream_2770_, v_currentTimeout_2771_, v_response_2772_, v_respStream_2773_, v_requiresData_boxed_2781_, v_expectData_2775_, v_handlerDispatched_boxed_2782_, v_pendingHead_2777_, v___f_2778_, v_x_2779_);
lean_dec_ref(v_config_2768_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object* v_machine_2784_, lean_object* v_requestStream_2785_, lean_object* v_keepAliveTimeout_2786_, lean_object* v_currentTimeout_2787_, lean_object* v_headerTimeout_2788_, lean_object* v_response_2789_, uint8_t v_requiresData_2790_, lean_object* v_expectData_2791_, uint8_t v_handlerDispatched_2792_, lean_object* v_pendingHead_2793_, lean_object* v_____r_2794_){
_start:
{
lean_object* v_writer_2796_; lean_object* v_reader_2797_; lean_object* v_config_2798_; lean_object* v_events_2799_; lean_object* v_error_2800_; lean_object* v_instant_2801_; uint8_t v_keepAlive_2802_; uint8_t v_forcedFlush_2803_; uint8_t v_pullBodyStalled_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2834_; 
v_writer_2796_ = lean_ctor_get(v_machine_2784_, 1);
v_reader_2797_ = lean_ctor_get(v_machine_2784_, 0);
v_config_2798_ = lean_ctor_get(v_machine_2784_, 2);
v_events_2799_ = lean_ctor_get(v_machine_2784_, 3);
v_error_2800_ = lean_ctor_get(v_machine_2784_, 4);
v_instant_2801_ = lean_ctor_get(v_machine_2784_, 5);
v_keepAlive_2802_ = lean_ctor_get_uint8(v_machine_2784_, sizeof(void*)*6);
v_forcedFlush_2803_ = lean_ctor_get_uint8(v_machine_2784_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2804_ = lean_ctor_get_uint8(v_machine_2784_, sizeof(void*)*6 + 2);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_machine_2784_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2806_ = v_machine_2784_;
v_isShared_2807_ = v_isSharedCheck_2834_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_instant_2801_);
lean_inc(v_error_2800_);
lean_inc(v_events_2799_);
lean_inc(v_config_2798_);
lean_inc(v_writer_2796_);
lean_inc(v_reader_2797_);
lean_dec(v_machine_2784_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2834_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v_userData_2808_; lean_object* v_outputData_2809_; lean_object* v_state_2810_; lean_object* v_knownSize_2811_; lean_object* v_messageHead_2812_; uint8_t v_sentMessage_2813_; uint8_t v_omitBody_2814_; lean_object* v_userDataBytes_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2833_; 
v_userData_2808_ = lean_ctor_get(v_writer_2796_, 0);
v_outputData_2809_ = lean_ctor_get(v_writer_2796_, 1);
v_state_2810_ = lean_ctor_get(v_writer_2796_, 2);
v_knownSize_2811_ = lean_ctor_get(v_writer_2796_, 3);
v_messageHead_2812_ = lean_ctor_get(v_writer_2796_, 4);
v_sentMessage_2813_ = lean_ctor_get_uint8(v_writer_2796_, sizeof(void*)*6);
v_omitBody_2814_ = lean_ctor_get_uint8(v_writer_2796_, sizeof(void*)*6 + 2);
v_userDataBytes_2815_ = lean_ctor_get(v_writer_2796_, 5);
v_isSharedCheck_2833_ = !lean_is_exclusive(v_writer_2796_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2817_ = v_writer_2796_;
v_isShared_2818_ = v_isSharedCheck_2833_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_userDataBytes_2815_);
lean_inc(v_messageHead_2812_);
lean_inc(v_knownSize_2811_);
lean_inc(v_state_2810_);
lean_inc(v_outputData_2809_);
lean_inc(v_userData_2808_);
lean_dec(v_writer_2796_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2833_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
uint8_t v___x_2819_; lean_object* v___x_2821_; 
v___x_2819_ = 1;
if (v_isShared_2818_ == 0)
{
v___x_2821_ = v___x_2817_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_userData_2808_);
lean_ctor_set(v_reuseFailAlloc_2832_, 1, v_outputData_2809_);
lean_ctor_set(v_reuseFailAlloc_2832_, 2, v_state_2810_);
lean_ctor_set(v_reuseFailAlloc_2832_, 3, v_knownSize_2811_);
lean_ctor_set(v_reuseFailAlloc_2832_, 4, v_messageHead_2812_);
lean_ctor_set(v_reuseFailAlloc_2832_, 5, v_userDataBytes_2815_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*6, v_sentMessage_2813_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*6 + 2, v_omitBody_2814_);
v___x_2821_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
lean_object* v___x_2823_; 
lean_ctor_set_uint8(v___x_2821_, sizeof(void*)*6 + 1, v___x_2819_);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 1, v___x_2821_);
v___x_2823_ = v___x_2806_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_reader_2797_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v___x_2821_);
lean_ctor_set(v_reuseFailAlloc_2831_, 2, v_config_2798_);
lean_ctor_set(v_reuseFailAlloc_2831_, 3, v_events_2799_);
lean_ctor_set(v_reuseFailAlloc_2831_, 4, v_error_2800_);
lean_ctor_set(v_reuseFailAlloc_2831_, 5, v_instant_2801_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*6, v_keepAlive_2802_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*6 + 1, v_forcedFlush_2803_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*6 + 2, v_pullBodyStalled_2804_);
v___x_2823_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; uint8_t v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2824_ = lean_box(0);
v___x_2825_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2825_, 0, v___x_2823_);
lean_ctor_set(v___x_2825_, 1, v_requestStream_2785_);
lean_ctor_set(v___x_2825_, 2, v_keepAliveTimeout_2786_);
lean_ctor_set(v___x_2825_, 3, v_currentTimeout_2787_);
lean_ctor_set(v___x_2825_, 4, v_headerTimeout_2788_);
lean_ctor_set(v___x_2825_, 5, v_response_2789_);
lean_ctor_set(v___x_2825_, 6, v___x_2824_);
lean_ctor_set(v___x_2825_, 7, v_expectData_2791_);
lean_ctor_set(v___x_2825_, 8, v_pendingHead_2793_);
lean_ctor_set_uint8(v___x_2825_, sizeof(void*)*9, v_requiresData_2790_);
lean_ctor_set_uint8(v___x_2825_, sizeof(void*)*9 + 1, v_handlerDispatched_2792_);
v___x_2826_ = 0;
v___x_2827_ = lean_box(v___x_2826_);
v___x_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2825_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
v___x_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2828_);
v___x_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2829_);
return v___x_2830_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object* v_machine_2835_, lean_object* v_requestStream_2836_, lean_object* v_keepAliveTimeout_2837_, lean_object* v_currentTimeout_2838_, lean_object* v_headerTimeout_2839_, lean_object* v_response_2840_, lean_object* v_requiresData_2841_, lean_object* v_expectData_2842_, lean_object* v_handlerDispatched_2843_, lean_object* v_pendingHead_2844_, lean_object* v_____r_2845_, lean_object* v___y_2846_){
_start:
{
uint8_t v_requiresData_boxed_2847_; uint8_t v_handlerDispatched_boxed_2848_; lean_object* v_res_2849_; 
v_requiresData_boxed_2847_ = lean_unbox(v_requiresData_2841_);
v_handlerDispatched_boxed_2848_ = lean_unbox(v_handlerDispatched_2843_);
v_res_2849_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_2835_, v_requestStream_2836_, v_keepAliveTimeout_2837_, v_currentTimeout_2838_, v_headerTimeout_2839_, v_response_2840_, v_requiresData_boxed_2847_, v_expectData_2842_, v_handlerDispatched_boxed_2848_, v_pendingHead_2844_, v_____r_2845_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object* v___f_2850_, lean_object* v_x_2851_){
_start:
{
if (lean_obj_tag(v_x_2851_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2861_; 
lean_dec_ref(v___f_2850_);
v_a_2853_ = lean_ctor_get(v_x_2851_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v_x_2851_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2855_ = v_x_2851_;
v_isShared_2856_ = v_isSharedCheck_2861_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v_x_2851_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2861_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_a_2853_);
v___x_2858_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
lean_object* v___x_2859_; 
v___x_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
return v___x_2859_;
}
}
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2863_; 
v_a_2862_ = lean_ctor_get(v_x_2851_, 0);
lean_inc(v_a_2862_);
lean_dec_ref_known(v_x_2851_, 1);
v___x_2863_ = lean_apply_2(v___f_2850_, v_a_2862_, lean_box(0));
return v___x_2863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object* v___f_2864_, lean_object* v_x_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(v___f_2864_, v_x_2865_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object* v_close_2868_, lean_object* v_val_2869_, lean_object* v___f_2870_, lean_object* v___f_2871_, lean_object* v_x_2872_){
_start:
{
if (lean_obj_tag(v_x_2872_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2882_; 
lean_dec_ref(v___f_2871_);
lean_dec_ref(v___f_2870_);
lean_dec(v_val_2869_);
lean_dec_ref(v_close_2868_);
v_a_2874_ = lean_ctor_get(v_x_2872_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v_x_2872_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2876_ = v_x_2872_;
v_isShared_2877_ = v_isSharedCheck_2882_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v_x_2872_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2882_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
lean_object* v___x_2880_; 
v___x_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
return v___x_2880_;
}
}
}
else
{
lean_object* v_a_2883_; uint8_t v___x_2884_; 
v_a_2883_ = lean_ctor_get(v_x_2872_, 0);
lean_inc(v_a_2883_);
lean_dec_ref_known(v_x_2872_, 1);
v___x_2884_ = lean_unbox(v_a_2883_);
if (v___x_2884_ == 0)
{
lean_object* v___x_2885_; lean_object* v___x_2886_; uint8_t v___x_2887_; lean_object* v___x_2888_; 
lean_dec_ref(v___f_2871_);
v___x_2885_ = lean_unsigned_to_nat(0u);
v___x_2886_ = lean_apply_2(v_close_2868_, v_val_2869_, lean_box(0));
v___x_2887_ = lean_unbox(v_a_2883_);
lean_dec(v_a_2883_);
v___x_2888_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2885_, v___x_2887_, v___x_2886_, v___f_2870_);
return v___x_2888_;
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec(v_a_2883_);
lean_dec_ref(v___f_2870_);
lean_dec(v_val_2869_);
lean_dec_ref(v_close_2868_);
v___x_2889_ = lean_box(0);
v___x_2890_ = lean_apply_2(v___f_2871_, v___x_2889_, lean_box(0));
return v___x_2890_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object* v_close_2891_, lean_object* v_val_2892_, lean_object* v___f_2893_, lean_object* v___f_2894_, lean_object* v_x_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(v_close_2891_, v_val_2892_, v___f_2893_, v___f_2894_, v_x_2895_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object* v_inst_2898_, lean_object* v_handler_2899_, lean_object* v_x_2900_){
_start:
{
if (lean_obj_tag(v_x_2900_) == 0)
{
lean_object* v_a_2902_; lean_object* v_onFailure_2903_; lean_object* v___x_2904_; 
v_a_2902_ = lean_ctor_get(v_x_2900_, 0);
lean_inc(v_a_2902_);
lean_dec_ref_known(v_x_2900_, 1);
v_onFailure_2903_ = lean_ctor_get(v_inst_2898_, 2);
lean_inc_ref(v_onFailure_2903_);
lean_dec_ref(v_inst_2898_);
v___x_2904_ = lean_apply_3(v_onFailure_2903_, v_handler_2899_, v_a_2902_, lean_box(0));
return v___x_2904_;
}
else
{
lean_object* v___x_2905_; 
lean_dec(v_handler_2899_);
lean_dec_ref(v_inst_2898_);
v___x_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2905_, 0, v_x_2900_);
return v___x_2905_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object* v_inst_2906_, lean_object* v_handler_2907_, lean_object* v_x_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(v_inst_2906_, v_handler_2907_, v_x_2908_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object* v_st_2911_, lean_object* v_____r_2912_){
_start:
{
uint8_t v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2914_ = 0;
v___x_2915_ = lean_box(v___x_2914_);
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v_st_2911_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
v___x_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
v___x_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2917_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object* v_st_2919_, lean_object* v_____r_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_2919_, v_____r_2920_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object* v_requestStream_2923_, lean_object* v___f_2924_, lean_object* v___f_2925_, lean_object* v_x_2926_){
_start:
{
if (lean_obj_tag(v_x_2926_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2936_; 
lean_dec_ref(v___f_2925_);
lean_dec_ref(v___f_2924_);
lean_dec_ref(v_requestStream_2923_);
v_a_2928_ = lean_ctor_get(v_x_2926_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_x_2926_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2930_ = v_x_2926_;
v_isShared_2931_ = v_isSharedCheck_2936_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v_x_2926_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2936_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
return v___x_2934_;
}
}
}
else
{
lean_object* v_a_2937_; uint8_t v___x_2938_; 
v_a_2937_ = lean_ctor_get(v_x_2926_, 0);
lean_inc(v_a_2937_);
lean_dec_ref_known(v_x_2926_, 1);
v___x_2938_ = lean_unbox(v_a_2937_);
if (v___x_2938_ == 0)
{
lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; lean_object* v___x_2942_; 
lean_dec_ref(v___f_2925_);
v___x_2939_ = lean_unsigned_to_nat(0u);
v___x_2940_ = l_Std_Http_Body_Stream_close(v_requestStream_2923_);
v___x_2941_ = lean_unbox(v_a_2937_);
lean_dec(v_a_2937_);
v___x_2942_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2939_, v___x_2941_, v___x_2940_, v___f_2924_);
return v___x_2942_;
}
else
{
lean_object* v___x_2943_; lean_object* v___x_2944_; 
lean_dec(v_a_2937_);
lean_dec_ref(v___f_2924_);
lean_dec_ref(v_requestStream_2923_);
v___x_2943_ = lean_box(0);
v___x_2944_ = lean_apply_2(v___f_2925_, v___x_2943_, lean_box(0));
return v___x_2944_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object* v_requestStream_2945_, lean_object* v___f_2946_, lean_object* v___f_2947_, lean_object* v_x_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(v_requestStream_2945_, v___f_2946_, v___f_2947_, v_x_2948_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t v_final_2951_, lean_object* v___f_2952_, lean_object* v___f_2953_, lean_object* v_requestStream_2954_, lean_object* v___f_2955_, lean_object* v_x_2956_){
_start:
{
if (lean_obj_tag(v_x_2956_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2966_; 
lean_dec_ref(v___f_2955_);
lean_dec_ref(v_requestStream_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___f_2952_);
v_a_2958_ = lean_ctor_get(v_x_2956_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v_x_2956_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2960_ = v_x_2956_;
v_isShared_2961_ = v_isSharedCheck_2966_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v_x_2956_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2966_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2964_; 
v___x_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
return v___x_2964_;
}
}
}
else
{
lean_dec_ref_known(v_x_2956_, 1);
if (v_final_2951_ == 0)
{
lean_object* v___x_2967_; lean_object* v___x_2968_; 
lean_dec_ref(v___f_2955_);
lean_dec_ref(v_requestStream_2954_);
lean_dec_ref(v___f_2953_);
v___x_2967_ = lean_box(0);
v___x_2968_ = lean_apply_2(v___f_2952_, v___x_2967_, lean_box(0));
return v___x_2968_;
}
else
{
lean_object* v___x_2969_; uint8_t v___x_2970_; lean_object* v___x_2971_; lean_object* v___f_2972_; lean_object* v___f_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_6780__overap_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_dec_ref(v___f_2952_);
v___x_2969_ = lean_unsigned_to_nat(0u);
v___x_2970_ = 0;
v___x_2971_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2972_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2973_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2974_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2975_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2975_, 0, lean_box(0));
lean_closure_set(v___x_2975_, 1, lean_box(0));
lean_closure_set(v___x_2975_, 2, v___x_2971_);
lean_closure_set(v___x_2975_, 3, lean_box(0));
lean_closure_set(v___x_2975_, 4, lean_box(0));
lean_closure_set(v___x_2975_, 5, v___x_2974_);
lean_closure_set(v___x_2975_, 6, v___f_2953_);
v___x_6780__overap_2976_ = l_Std_Mutex_atomically___redArg(v___x_2971_, v___f_2972_, v___f_2973_, v_requestStream_2954_, v___x_2975_);
v___x_2977_ = lean_apply_1(v___x_6780__overap_2976_, lean_box(0));
v___x_2978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2969_, v___x_2970_, v___x_2977_, v___f_2955_);
return v___x_2978_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object* v_final_2979_, lean_object* v___f_2980_, lean_object* v___f_2981_, lean_object* v_requestStream_2982_, lean_object* v___f_2983_, lean_object* v_x_2984_, lean_object* v___y_2985_){
_start:
{
uint8_t v_final_boxed_2986_; lean_object* v_res_2987_; 
v_final_boxed_2986_ = lean_unbox(v_final_2979_);
v_res_2987_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(v_final_boxed_2986_, v___f_2980_, v___f_2981_, v_requestStream_2982_, v___f_2983_, v_x_2984_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object* v_state_2988_, lean_object* v_x_2989_){
_start:
{
if (lean_obj_tag(v_x_2989_) == 0)
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2999_; 
lean_dec_ref(v_state_2988_);
v_a_2991_ = lean_ctor_get(v_x_2989_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v_x_2989_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2993_ = v_x_2989_;
v_isShared_2994_ = v_isSharedCheck_2999_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v_x_2989_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2999_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_a_2991_);
v___x_2996_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
lean_object* v___x_2997_; 
v___x_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2996_);
return v___x_2997_;
}
}
}
else
{
lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3029_; 
v_isSharedCheck_3029_ = !lean_is_exclusive(v_x_2989_);
if (v_isSharedCheck_3029_ == 0)
{
lean_object* v_unused_3030_; 
v_unused_3030_ = lean_ctor_get(v_x_2989_, 0);
lean_dec(v_unused_3030_);
v___x_3001_ = v_x_2989_;
v_isShared_3002_ = v_isSharedCheck_3029_;
goto v_resetjp_3000_;
}
else
{
lean_dec(v_x_2989_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3029_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v_machine_3003_; lean_object* v_requestStream_3004_; lean_object* v_keepAliveTimeout_3005_; lean_object* v_currentTimeout_3006_; lean_object* v_headerTimeout_3007_; lean_object* v_response_3008_; lean_object* v_respStream_3009_; uint8_t v_requiresData_3010_; lean_object* v_expectData_3011_; lean_object* v_pendingHead_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3028_; 
v_machine_3003_ = lean_ctor_get(v_state_2988_, 0);
v_requestStream_3004_ = lean_ctor_get(v_state_2988_, 1);
v_keepAliveTimeout_3005_ = lean_ctor_get(v_state_2988_, 2);
v_currentTimeout_3006_ = lean_ctor_get(v_state_2988_, 3);
v_headerTimeout_3007_ = lean_ctor_get(v_state_2988_, 4);
v_response_3008_ = lean_ctor_get(v_state_2988_, 5);
v_respStream_3009_ = lean_ctor_get(v_state_2988_, 6);
v_requiresData_3010_ = lean_ctor_get_uint8(v_state_2988_, sizeof(void*)*9);
v_expectData_3011_ = lean_ctor_get(v_state_2988_, 7);
v_pendingHead_3012_ = lean_ctor_get(v_state_2988_, 8);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_state_2988_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3014_ = v_state_2988_;
v_isShared_3015_ = v_isSharedCheck_3028_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_pendingHead_3012_);
lean_inc(v_expectData_3011_);
lean_inc(v_respStream_3009_);
lean_inc(v_response_3008_);
lean_inc(v_headerTimeout_3007_);
lean_inc(v_currentTimeout_3006_);
lean_inc(v_keepAliveTimeout_3005_);
lean_inc(v_requestStream_3004_);
lean_inc(v_machine_3003_);
lean_dec(v_state_2988_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3028_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; uint8_t v___x_3018_; lean_object* v___x_3020_; 
v___x_3016_ = lean_box(52);
v___x_3017_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3003_, v___x_3016_);
v___x_3018_ = 0;
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v___x_3017_);
v___x_3020_ = v___x_3014_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3017_);
lean_ctor_set(v_reuseFailAlloc_3027_, 1, v_requestStream_3004_);
lean_ctor_set(v_reuseFailAlloc_3027_, 2, v_keepAliveTimeout_3005_);
lean_ctor_set(v_reuseFailAlloc_3027_, 3, v_currentTimeout_3006_);
lean_ctor_set(v_reuseFailAlloc_3027_, 4, v_headerTimeout_3007_);
lean_ctor_set(v_reuseFailAlloc_3027_, 5, v_response_3008_);
lean_ctor_set(v_reuseFailAlloc_3027_, 6, v_respStream_3009_);
lean_ctor_set(v_reuseFailAlloc_3027_, 7, v_expectData_3011_);
lean_ctor_set(v_reuseFailAlloc_3027_, 8, v_pendingHead_3012_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*9, v_requiresData_3010_);
v___x_3020_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3024_; 
lean_ctor_set_uint8(v___x_3020_, sizeof(void*)*9 + 1, v___x_3018_);
v___x_3021_ = lean_box(v___x_3018_);
v___x_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3020_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 0, v___x_3022_);
v___x_3024_ = v___x_3001_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3022_);
v___x_3024_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3025_; 
v___x_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
return v___x_3025_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object* v_state_3031_, lean_object* v_x_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(v_state_3031_, v_x_3032_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object* v_machine_3035_, lean_object* v_requestStream_3036_, lean_object* v_keepAliveTimeout_3037_, lean_object* v_currentTimeout_3038_, lean_object* v_headerTimeout_3039_, lean_object* v_response_3040_, lean_object* v_respStream_3041_, uint8_t v_requiresData_3042_, lean_object* v_expectData_3043_, lean_object* v_pendingHead_3044_, lean_object* v_____r_3045_){
_start:
{
uint8_t v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3047_ = 0;
v___x_3048_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3048_, 0, v_machine_3035_);
lean_ctor_set(v___x_3048_, 1, v_requestStream_3036_);
lean_ctor_set(v___x_3048_, 2, v_keepAliveTimeout_3037_);
lean_ctor_set(v___x_3048_, 3, v_currentTimeout_3038_);
lean_ctor_set(v___x_3048_, 4, v_headerTimeout_3039_);
lean_ctor_set(v___x_3048_, 5, v_response_3040_);
lean_ctor_set(v___x_3048_, 6, v_respStream_3041_);
lean_ctor_set(v___x_3048_, 7, v_expectData_3043_);
lean_ctor_set(v___x_3048_, 8, v_pendingHead_3044_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*9, v_requiresData_3042_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*9 + 1, v___x_3047_);
v___x_3049_ = lean_box(v___x_3047_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3048_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
v___x_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
v___x_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object* v_machine_3053_, lean_object* v_requestStream_3054_, lean_object* v_keepAliveTimeout_3055_, lean_object* v_currentTimeout_3056_, lean_object* v_headerTimeout_3057_, lean_object* v_response_3058_, lean_object* v_respStream_3059_, lean_object* v_requiresData_3060_, lean_object* v_expectData_3061_, lean_object* v_pendingHead_3062_, lean_object* v_____r_3063_, lean_object* v___y_3064_){
_start:
{
uint8_t v_requiresData_boxed_3065_; lean_object* v_res_3066_; 
v_requiresData_boxed_3065_ = lean_unbox(v_requiresData_3060_);
v_res_3066_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(v_machine_3053_, v_requestStream_3054_, v_keepAliveTimeout_3055_, v_currentTimeout_3056_, v_headerTimeout_3057_, v_response_3058_, v_respStream_3059_, v_requiresData_boxed_3065_, v_expectData_3061_, v_pendingHead_3062_, v_____r_3063_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object* v_close_3067_, lean_object* v_body_3068_, lean_object* v___f_3069_, lean_object* v___f_3070_, lean_object* v_x_3071_){
_start:
{
if (lean_obj_tag(v_x_3071_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3081_; 
lean_dec_ref(v___f_3070_);
lean_dec_ref(v___f_3069_);
lean_dec(v_body_3068_);
lean_dec_ref(v_close_3067_);
v_a_3073_ = lean_ctor_get(v_x_3071_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v_x_3071_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3075_ = v_x_3071_;
v_isShared_3076_ = v_isSharedCheck_3081_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v_x_3071_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3081_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
return v___x_3079_;
}
}
}
else
{
lean_object* v_a_3082_; uint8_t v___x_3083_; 
v_a_3082_ = lean_ctor_get(v_x_3071_, 0);
lean_inc(v_a_3082_);
lean_dec_ref_known(v_x_3071_, 1);
v___x_3083_ = lean_unbox(v_a_3082_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; uint8_t v___x_3086_; lean_object* v___x_3087_; 
lean_dec_ref(v___f_3070_);
v___x_3084_ = lean_unsigned_to_nat(0u);
v___x_3085_ = lean_apply_2(v_close_3067_, v_body_3068_, lean_box(0));
v___x_3086_ = lean_unbox(v_a_3082_);
lean_dec(v_a_3082_);
v___x_3087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3084_, v___x_3086_, v___x_3085_, v___f_3069_);
return v___x_3087_;
}
else
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
lean_dec(v_a_3082_);
lean_dec_ref(v___f_3069_);
lean_dec(v_body_3068_);
lean_dec_ref(v_close_3067_);
v___x_3088_ = lean_box(0);
v___x_3089_ = lean_apply_2(v___f_3070_, v___x_3088_, lean_box(0));
return v___x_3089_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object* v_close_3090_, lean_object* v_body_3091_, lean_object* v___f_3092_, lean_object* v___f_3093_, lean_object* v_x_3094_, lean_object* v___y_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(v_close_3090_, v_body_3091_, v___f_3092_, v___f_3093_, v_x_3094_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object* v_requestStream_3097_, lean_object* v_keepAliveTimeout_3098_, lean_object* v_currentTimeout_3099_, lean_object* v_headerTimeout_3100_, lean_object* v_response_3101_, uint8_t v_requiresData_3102_, lean_object* v_expectData_3103_, uint8_t v___x_3104_, lean_object* v_pendingHead_3105_, lean_object* v_____x_3106_){
_start:
{
lean_object* v_snd_3108_; lean_object* v_fst_3109_; lean_object* v_fst_3110_; lean_object* v_snd_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3121_; 
v_snd_3108_ = lean_ctor_get(v_____x_3106_, 1);
lean_inc(v_snd_3108_);
v_fst_3109_ = lean_ctor_get(v_____x_3106_, 0);
lean_inc(v_fst_3109_);
lean_dec_ref(v_____x_3106_);
v_fst_3110_ = lean_ctor_get(v_snd_3108_, 0);
v_snd_3111_ = lean_ctor_get(v_snd_3108_, 1);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_snd_3108_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3113_ = v_snd_3108_;
v_isShared_3114_ = v_isSharedCheck_3121_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_snd_3111_);
lean_inc(v_fst_3110_);
lean_dec(v_snd_3108_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3121_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3115_; lean_object* v___x_3117_; 
v___x_3115_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3115_, 0, v_fst_3109_);
lean_ctor_set(v___x_3115_, 1, v_requestStream_3097_);
lean_ctor_set(v___x_3115_, 2, v_keepAliveTimeout_3098_);
lean_ctor_set(v___x_3115_, 3, v_currentTimeout_3099_);
lean_ctor_set(v___x_3115_, 4, v_headerTimeout_3100_);
lean_ctor_set(v___x_3115_, 5, v_response_3101_);
lean_ctor_set(v___x_3115_, 6, v_fst_3110_);
lean_ctor_set(v___x_3115_, 7, v_expectData_3103_);
lean_ctor_set(v___x_3115_, 8, v_pendingHead_3105_);
lean_ctor_set_uint8(v___x_3115_, sizeof(void*)*9, v_requiresData_3102_);
lean_ctor_set_uint8(v___x_3115_, sizeof(void*)*9 + 1, v___x_3104_);
if (v_isShared_3114_ == 0)
{
lean_ctor_set(v___x_3113_, 0, v___x_3115_);
v___x_3117_ = v___x_3113_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v___x_3115_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v_snd_3111_);
v___x_3117_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object* v_requestStream_3122_, lean_object* v_keepAliveTimeout_3123_, lean_object* v_currentTimeout_3124_, lean_object* v_headerTimeout_3125_, lean_object* v_response_3126_, lean_object* v_requiresData_3127_, lean_object* v_expectData_3128_, lean_object* v___x_3129_, lean_object* v_pendingHead_3130_, lean_object* v_____x_3131_, lean_object* v___y_3132_){
_start:
{
uint8_t v_requiresData_boxed_3133_; uint8_t v___x_7600__boxed_3134_; lean_object* v_res_3135_; 
v_requiresData_boxed_3133_ = lean_unbox(v_requiresData_3127_);
v___x_7600__boxed_3134_ = lean_unbox(v___x_3129_);
v_res_3135_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(v_requestStream_3122_, v_keepAliveTimeout_3123_, v_currentTimeout_3124_, v_headerTimeout_3125_, v_response_3126_, v_requiresData_boxed_3133_, v_expectData_3128_, v___x_7600__boxed_3134_, v_pendingHead_3130_, v_____x_3131_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object* v___f_3136_, lean_object* v_x_3137_){
_start:
{
if (lean_obj_tag(v_x_3137_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3147_; 
lean_dec_ref(v___f_3136_);
v_a_3139_ = lean_ctor_get(v_x_3137_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_x_3137_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3141_ = v_x_3137_;
v_isShared_3142_ = v_isSharedCheck_3147_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v_x_3137_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3147_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3144_; 
if (v_isShared_3142_ == 0)
{
v___x_3144_ = v___x_3141_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3139_);
v___x_3144_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3145_; 
v___x_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
return v___x_3145_;
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3149_; 
v_a_3148_ = lean_ctor_get(v_x_3137_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v_x_3137_, 1);
v___x_3149_ = lean_apply_2(v___f_3136_, v_a_3148_, lean_box(0));
return v___x_3149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object* v___f_3150_, lean_object* v_x_3151_, lean_object* v___y_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(v___f_3150_, v_x_3151_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(uint8_t v___x_3154_, lean_object* v_x_3155_){
_start:
{
if (lean_obj_tag(v_x_3155_) == 0)
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3165_; 
v_a_3157_ = lean_ctor_get(v_x_3155_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v_x_3155_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3159_ = v_x_3155_;
v_isShared_3160_ = v_isSharedCheck_3165_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v_x_3155_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3165_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
return v___x_3163_;
}
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3185_; 
v_a_3166_ = lean_ctor_get(v_x_3155_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_x_3155_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3168_ = v_x_3155_;
v_isShared_3169_ = v_isSharedCheck_3185_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v_x_3155_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3185_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v_fst_3170_; lean_object* v_snd_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3184_; 
v_fst_3170_ = lean_ctor_get(v_a_3166_, 0);
v_snd_3171_ = lean_ctor_get(v_a_3166_, 1);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_a_3166_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3173_ = v_a_3166_;
v_isShared_3174_ = v_isSharedCheck_3184_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_snd_3171_);
lean_inc(v_fst_3170_);
lean_dec(v_a_3166_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3184_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3175_; lean_object* v___x_3177_; 
v___x_3175_ = lean_box(v___x_3154_);
if (v_isShared_3174_ == 0)
{
lean_ctor_set(v___x_3173_, 1, v___x_3175_);
lean_ctor_set(v___x_3173_, 0, v_snd_3171_);
v___x_3177_ = v___x_3173_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_snd_3171_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v___x_3175_);
v___x_3177_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3178_, 0, v_fst_3170_);
lean_ctor_set(v___x_3178_, 1, v___x_3177_);
if (v_isShared_3169_ == 0)
{
lean_ctor_set(v___x_3168_, 0, v___x_3178_);
v___x_3180_ = v___x_3168_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
lean_object* v___x_3181_; 
v___x_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3180_);
return v___x_3181_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object* v___x_3186_, lean_object* v_x_3187_, lean_object* v___y_3188_){
_start:
{
uint8_t v___x_7668__boxed_3189_; lean_object* v_res_3190_; 
v___x_7668__boxed_3189_ = lean_unbox(v___x_3186_);
v_res_3190_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(v___x_7668__boxed_3189_, v_x_3187_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object* v_snd_3191_, uint8_t v___x_3192_, lean_object* v_fst_3193_, lean_object* v_x_3194_){
_start:
{
if (lean_obj_tag(v_x_3194_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3204_; 
lean_dec_ref(v_fst_3193_);
lean_dec(v_snd_3191_);
v_a_3196_ = lean_ctor_get(v_x_3194_, 0);
v_isSharedCheck_3204_ = !lean_is_exclusive(v_x_3194_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3198_ = v_x_3194_;
v_isShared_3199_ = v_isSharedCheck_3204_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v_x_3194_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3204_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
lean_object* v___x_3202_; 
v___x_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
return v___x_3202_;
}
}
}
else
{
lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3215_; 
v_isSharedCheck_3215_ = !lean_is_exclusive(v_x_3194_);
if (v_isSharedCheck_3215_ == 0)
{
lean_object* v_unused_3216_; 
v_unused_3216_ = lean_ctor_get(v_x_3194_, 0);
lean_dec(v_unused_3216_);
v___x_3206_ = v_x_3194_;
v_isShared_3207_ = v_isSharedCheck_3215_;
goto v_resetjp_3205_;
}
else
{
lean_dec(v_x_3194_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3215_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3212_; 
v___x_3208_ = lean_box(v___x_3192_);
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v_snd_3191_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3210_, 0, v_fst_3193_);
lean_ctor_set(v___x_3210_, 1, v___x_3209_);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 0, v___x_3210_);
v___x_3212_ = v___x_3206_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3210_);
v___x_3212_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
lean_object* v___x_3213_; 
v___x_3213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
return v___x_3213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object* v_snd_3217_, lean_object* v___x_3218_, lean_object* v_fst_3219_, lean_object* v_x_3220_, lean_object* v___y_3221_){
_start:
{
uint8_t v___x_7736__boxed_3222_; lean_object* v_res_3223_; 
v___x_7736__boxed_3222_ = lean_unbox(v___x_3218_);
v_res_3223_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(v_snd_3217_, v___x_7736__boxed_3222_, v_fst_3219_, v_x_3220_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object* v_inst_3224_, lean_object* v_handler_3225_, uint8_t v___x_3226_, lean_object* v___f_3227_, lean_object* v_x_3228_){
_start:
{
if (lean_obj_tag(v_x_3228_) == 0)
{
lean_object* v_a_3230_; lean_object* v_onFailure_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v_a_3230_ = lean_ctor_get(v_x_3228_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v_x_3228_, 1);
v_onFailure_3231_ = lean_ctor_get(v_inst_3224_, 2);
lean_inc_ref(v_onFailure_3231_);
lean_dec_ref(v_inst_3224_);
v___x_3232_ = lean_unsigned_to_nat(0u);
v___x_3233_ = lean_apply_3(v_onFailure_3231_, v_handler_3225_, v_a_3230_, lean_box(0));
v___x_3234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3232_, v___x_3226_, v___x_3233_, v___f_3227_);
return v___x_3234_;
}
else
{
lean_object* v___x_3235_; 
lean_dec_ref(v___f_3227_);
lean_dec(v_handler_3225_);
lean_dec_ref(v_inst_3224_);
v___x_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3235_, 0, v_x_3228_);
return v___x_3235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object* v_inst_3236_, lean_object* v_handler_3237_, lean_object* v___x_3238_, lean_object* v___f_3239_, lean_object* v_x_3240_, lean_object* v___y_3241_){
_start:
{
uint8_t v___x_7794__boxed_3242_; lean_object* v_res_3243_; 
v___x_7794__boxed_3242_ = lean_unbox(v___x_3238_);
v_res_3243_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(v_inst_3236_, v_handler_3237_, v___x_7794__boxed_3242_, v___f_3239_, v_x_3240_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t v___x_3244_, lean_object* v___f_3245_, uint8_t v___x_3246_, lean_object* v_inst_3247_, lean_object* v_handler_3248_, lean_object* v_inst_3249_, lean_object* v___f_3250_, lean_object* v___f_3251_, lean_object* v_x_3252_){
_start:
{
if (lean_obj_tag(v_x_3252_) == 0)
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3262_; 
lean_dec_ref(v___f_3251_);
lean_dec_ref(v___f_3250_);
lean_dec_ref(v_inst_3249_);
lean_dec(v_handler_3248_);
lean_dec_ref(v_inst_3247_);
lean_dec_ref(v___f_3245_);
v_a_3254_ = lean_ctor_get(v_x_3252_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_x_3252_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3256_ = v_x_3252_;
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v_x_3252_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
lean_object* v___x_3260_; 
v___x_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
return v___x_3260_;
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3296_; 
v_a_3263_ = lean_ctor_get(v_x_3252_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v_x_3252_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3265_ = v_x_3252_;
v_isShared_3266_ = v_isSharedCheck_3296_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v_x_3252_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3296_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v_snd_3267_; 
v_snd_3267_ = lean_ctor_get(v_a_3263_, 1);
lean_inc(v_snd_3267_);
if (lean_obj_tag(v_snd_3267_) == 0)
{
lean_object* v_fst_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3283_; 
lean_dec_ref(v___f_3251_);
lean_dec_ref(v___f_3250_);
lean_dec_ref(v_inst_3249_);
lean_dec(v_handler_3248_);
lean_dec_ref(v_inst_3247_);
v_fst_3268_ = lean_ctor_get(v_a_3263_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v_a_3263_);
if (v_isSharedCheck_3283_ == 0)
{
lean_object* v_unused_3284_; 
v_unused_3284_ = lean_ctor_get(v_a_3263_, 1);
lean_dec(v_unused_3284_);
v___x_3270_ = v_a_3263_;
v_isShared_3271_ = v_isSharedCheck_3283_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_fst_3268_);
lean_dec(v_a_3263_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3283_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3272_ = lean_box(v___x_3244_);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 1, v___x_3272_);
lean_ctor_set(v___x_3270_, 0, v_snd_3267_);
v___x_3274_ = v___x_3270_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_snd_3267_);
lean_ctor_set(v_reuseFailAlloc_3282_, 1, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v_fst_3268_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
v___x_3276_ = lean_unsigned_to_nat(0u);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v___x_3275_);
v___x_3278_ = v___x_3265_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3275_);
v___x_3278_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
v___x_3280_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3276_, v___x_3244_, v___x_3279_, v___f_3245_);
return v___x_3280_;
}
}
}
}
else
{
lean_object* v_fst_3285_; lean_object* v_val_3286_; lean_object* v___x_3287_; lean_object* v___f_3288_; lean_object* v___x_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
lean_del_object(v___x_3265_);
lean_dec_ref(v___f_3245_);
v_fst_3285_ = lean_ctor_get(v_a_3263_, 0);
lean_inc_n(v_fst_3285_, 2);
lean_dec(v_a_3263_);
v_val_3286_ = lean_ctor_get(v_snd_3267_, 0);
lean_inc(v_val_3286_);
v___x_3287_ = lean_box(v___x_3246_);
v___f_3288_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed), 5, 3);
lean_closure_set(v___f_3288_, 0, v_snd_3267_);
lean_closure_set(v___f_3288_, 1, v___x_3287_);
lean_closure_set(v___f_3288_, 2, v_fst_3285_);
v___x_3289_ = lean_box(v___x_3244_);
v___f_3290_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed), 6, 4);
lean_closure_set(v___f_3290_, 0, v_inst_3247_);
lean_closure_set(v___f_3290_, 1, v_handler_3248_);
lean_closure_set(v___f_3290_, 2, v___x_3289_);
lean_closure_set(v___f_3290_, 3, v___f_3288_);
v___x_3291_ = lean_unsigned_to_nat(0u);
v___x_3292_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_3249_, v_fst_3285_, v_val_3286_);
v___x_3293_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3291_, v___x_3244_, v___x_3292_, v___f_3250_);
v___x_3294_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3291_, v___x_3244_, v___x_3293_, v___f_3290_);
v___x_3295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3291_, v___x_3244_, v___x_3294_, v___f_3251_);
return v___x_3295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object* v___x_3297_, lean_object* v___f_3298_, lean_object* v___x_3299_, lean_object* v_inst_3300_, lean_object* v_handler_3301_, lean_object* v_inst_3302_, lean_object* v___f_3303_, lean_object* v___f_3304_, lean_object* v_x_3305_, lean_object* v___y_3306_){
_start:
{
uint8_t v___x_7819__boxed_3307_; uint8_t v___x_7821__boxed_3308_; lean_object* v_res_3309_; 
v___x_7819__boxed_3307_ = lean_unbox(v___x_3297_);
v___x_7821__boxed_3308_ = lean_unbox(v___x_3299_);
v_res_3309_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(v___x_7819__boxed_3307_, v___f_3298_, v___x_7821__boxed_3308_, v_inst_3300_, v_handler_3301_, v_inst_3302_, v___f_3303_, v___f_3304_, v_x_3305_);
return v_res_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object* v_state_3310_, lean_object* v_x_3311_){
_start:
{
if (lean_obj_tag(v_x_3311_) == 0)
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3321_; 
lean_dec_ref(v_state_3310_);
v_a_3313_ = lean_ctor_get(v_x_3311_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v_x_3311_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3315_ = v_x_3311_;
v_isShared_3316_ = v_isSharedCheck_3321_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v_x_3311_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3321_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
lean_object* v___x_3319_; 
v___x_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
return v___x_3319_;
}
}
}
else
{
lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3351_; 
v_isSharedCheck_3351_ = !lean_is_exclusive(v_x_3311_);
if (v_isSharedCheck_3351_ == 0)
{
lean_object* v_unused_3352_; 
v_unused_3352_ = lean_ctor_get(v_x_3311_, 0);
lean_dec(v_unused_3352_);
v___x_3323_ = v_x_3311_;
v_isShared_3324_ = v_isSharedCheck_3351_;
goto v_resetjp_3322_;
}
else
{
lean_dec(v_x_3311_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3351_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v_machine_3325_; lean_object* v_requestStream_3326_; lean_object* v_keepAliveTimeout_3327_; lean_object* v_currentTimeout_3328_; lean_object* v_headerTimeout_3329_; lean_object* v_response_3330_; lean_object* v_respStream_3331_; uint8_t v_requiresData_3332_; lean_object* v_expectData_3333_; lean_object* v_pendingHead_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3350_; 
v_machine_3325_ = lean_ctor_get(v_state_3310_, 0);
v_requestStream_3326_ = lean_ctor_get(v_state_3310_, 1);
v_keepAliveTimeout_3327_ = lean_ctor_get(v_state_3310_, 2);
v_currentTimeout_3328_ = lean_ctor_get(v_state_3310_, 3);
v_headerTimeout_3329_ = lean_ctor_get(v_state_3310_, 4);
v_response_3330_ = lean_ctor_get(v_state_3310_, 5);
v_respStream_3331_ = lean_ctor_get(v_state_3310_, 6);
v_requiresData_3332_ = lean_ctor_get_uint8(v_state_3310_, sizeof(void*)*9);
v_expectData_3333_ = lean_ctor_get(v_state_3310_, 7);
v_pendingHead_3334_ = lean_ctor_get(v_state_3310_, 8);
v_isSharedCheck_3350_ = !lean_is_exclusive(v_state_3310_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3336_ = v_state_3310_;
v_isShared_3337_ = v_isSharedCheck_3350_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_pendingHead_3334_);
lean_inc(v_expectData_3333_);
lean_inc(v_respStream_3331_);
lean_inc(v_response_3330_);
lean_inc(v_headerTimeout_3329_);
lean_inc(v_currentTimeout_3328_);
lean_inc(v_keepAliveTimeout_3327_);
lean_inc(v_requestStream_3326_);
lean_inc(v_machine_3325_);
lean_dec(v_state_3310_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3350_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; uint8_t v___x_3340_; lean_object* v___x_3342_; 
v___x_3338_ = lean_box(31);
v___x_3339_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3325_, v___x_3338_);
v___x_3340_ = 0;
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 0, v___x_3339_);
v___x_3342_ = v___x_3336_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v___x_3339_);
lean_ctor_set(v_reuseFailAlloc_3349_, 1, v_requestStream_3326_);
lean_ctor_set(v_reuseFailAlloc_3349_, 2, v_keepAliveTimeout_3327_);
lean_ctor_set(v_reuseFailAlloc_3349_, 3, v_currentTimeout_3328_);
lean_ctor_set(v_reuseFailAlloc_3349_, 4, v_headerTimeout_3329_);
lean_ctor_set(v_reuseFailAlloc_3349_, 5, v_response_3330_);
lean_ctor_set(v_reuseFailAlloc_3349_, 6, v_respStream_3331_);
lean_ctor_set(v_reuseFailAlloc_3349_, 7, v_expectData_3333_);
lean_ctor_set(v_reuseFailAlloc_3349_, 8, v_pendingHead_3334_);
lean_ctor_set_uint8(v_reuseFailAlloc_3349_, sizeof(void*)*9, v_requiresData_3332_);
v___x_3342_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3346_; 
lean_ctor_set_uint8(v___x_3342_, sizeof(void*)*9 + 1, v___x_3340_);
v___x_3343_ = lean_box(v___x_3340_);
v___x_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3342_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set(v___x_3323_, 0, v___x_3344_);
v___x_3346_ = v___x_3323_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3344_);
v___x_3346_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
lean_object* v___x_3347_; 
v___x_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
return v___x_3347_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object* v_state_3353_, lean_object* v_x_3354_, lean_object* v___y_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(v_state_3353_, v_x_3354_);
return v_res_3356_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1));
v___x_3362_ = lean_mk_io_user_error(v___x_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object* v_inst_3363_, lean_object* v_inst_3364_, lean_object* v_handler_3365_, lean_object* v_config_3366_, lean_object* v_event_3367_, lean_object* v_state_3368_){
_start:
{
switch(lean_obj_tag(v_event_3367_))
{
case 0:
{
lean_object* v_x_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3477_; 
lean_dec(v_handler_3365_);
lean_dec_ref(v_inst_3364_);
lean_dec_ref(v_inst_3363_);
v_x_3370_ = lean_ctor_get(v_event_3367_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v_event_3367_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3372_ = v_event_3367_;
v_isShared_3373_ = v_isSharedCheck_3477_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_x_3370_);
lean_dec(v_event_3367_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3477_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
if (lean_obj_tag(v_x_3370_) == 0)
{
lean_object* v_machine_3374_; lean_object* v_reader_3375_; lean_object* v_requestStream_3376_; lean_object* v_keepAliveTimeout_3377_; lean_object* v_currentTimeout_3378_; lean_object* v_headerTimeout_3379_; lean_object* v_response_3380_; lean_object* v_respStream_3381_; uint8_t v_requiresData_3382_; lean_object* v_expectData_3383_; uint8_t v_handlerDispatched_3384_; lean_object* v_pendingHead_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3428_; 
lean_dec_ref(v_config_3366_);
v_machine_3374_ = lean_ctor_get(v_state_3368_, 0);
lean_inc_ref(v_machine_3374_);
v_reader_3375_ = lean_ctor_get(v_machine_3374_, 0);
lean_inc_ref(v_reader_3375_);
v_requestStream_3376_ = lean_ctor_get(v_state_3368_, 1);
v_keepAliveTimeout_3377_ = lean_ctor_get(v_state_3368_, 2);
v_currentTimeout_3378_ = lean_ctor_get(v_state_3368_, 3);
v_headerTimeout_3379_ = lean_ctor_get(v_state_3368_, 4);
v_response_3380_ = lean_ctor_get(v_state_3368_, 5);
v_respStream_3381_ = lean_ctor_get(v_state_3368_, 6);
v_requiresData_3382_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3383_ = lean_ctor_get(v_state_3368_, 7);
v_handlerDispatched_3384_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9 + 1);
v_pendingHead_3385_ = lean_ctor_get(v_state_3368_, 8);
v_isSharedCheck_3428_ = !lean_is_exclusive(v_state_3368_);
if (v_isSharedCheck_3428_ == 0)
{
lean_object* v_unused_3429_; 
v_unused_3429_ = lean_ctor_get(v_state_3368_, 0);
lean_dec(v_unused_3429_);
v___x_3387_ = v_state_3368_;
v_isShared_3388_ = v_isSharedCheck_3428_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_pendingHead_3385_);
lean_inc(v_expectData_3383_);
lean_inc(v_respStream_3381_);
lean_inc(v_response_3380_);
lean_inc(v_headerTimeout_3379_);
lean_inc(v_currentTimeout_3378_);
lean_inc(v_keepAliveTimeout_3377_);
lean_inc(v_requestStream_3376_);
lean_dec(v_state_3368_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3428_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v_writer_3389_; lean_object* v_config_3390_; lean_object* v_events_3391_; lean_object* v_error_3392_; lean_object* v_instant_3393_; uint8_t v_keepAlive_3394_; uint8_t v_forcedFlush_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3426_; 
v_writer_3389_ = lean_ctor_get(v_machine_3374_, 1);
v_config_3390_ = lean_ctor_get(v_machine_3374_, 2);
v_events_3391_ = lean_ctor_get(v_machine_3374_, 3);
v_error_3392_ = lean_ctor_get(v_machine_3374_, 4);
v_instant_3393_ = lean_ctor_get(v_machine_3374_, 5);
v_keepAlive_3394_ = lean_ctor_get_uint8(v_machine_3374_, sizeof(void*)*6);
v_forcedFlush_3395_ = lean_ctor_get_uint8(v_machine_3374_, sizeof(void*)*6 + 1);
v_isSharedCheck_3426_ = !lean_is_exclusive(v_machine_3374_);
if (v_isSharedCheck_3426_ == 0)
{
lean_object* v_unused_3427_; 
v_unused_3427_ = lean_ctor_get(v_machine_3374_, 0);
lean_dec(v_unused_3427_);
v___x_3397_ = v_machine_3374_;
v_isShared_3398_ = v_isSharedCheck_3426_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_instant_3393_);
lean_inc(v_error_3392_);
lean_inc(v_events_3391_);
lean_inc(v_config_3390_);
lean_inc(v_writer_3389_);
lean_dec(v_machine_3374_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3426_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v_state_3399_; lean_object* v_input_3400_; lean_object* v_messageHead_3401_; lean_object* v_messageCount_3402_; lean_object* v_bodyBytesRead_3403_; lean_object* v_headerBytesRead_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3425_; 
v_state_3399_ = lean_ctor_get(v_reader_3375_, 0);
v_input_3400_ = lean_ctor_get(v_reader_3375_, 1);
v_messageHead_3401_ = lean_ctor_get(v_reader_3375_, 2);
v_messageCount_3402_ = lean_ctor_get(v_reader_3375_, 3);
v_bodyBytesRead_3403_ = lean_ctor_get(v_reader_3375_, 4);
v_headerBytesRead_3404_ = lean_ctor_get(v_reader_3375_, 5);
v_isSharedCheck_3425_ = !lean_is_exclusive(v_reader_3375_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3406_ = v_reader_3375_;
v_isShared_3407_ = v_isSharedCheck_3425_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_headerBytesRead_3404_);
lean_inc(v_bodyBytesRead_3403_);
lean_inc(v_messageCount_3402_);
lean_inc(v_messageHead_3401_);
lean_inc(v_input_3400_);
lean_inc(v_state_3399_);
lean_dec(v_reader_3375_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3425_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
uint8_t v___x_3408_; lean_object* v___x_3410_; 
v___x_3408_ = 1;
if (v_isShared_3407_ == 0)
{
v___x_3410_ = v___x_3406_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_state_3399_);
lean_ctor_set(v_reuseFailAlloc_3424_, 1, v_input_3400_);
lean_ctor_set(v_reuseFailAlloc_3424_, 2, v_messageHead_3401_);
lean_ctor_set(v_reuseFailAlloc_3424_, 3, v_messageCount_3402_);
lean_ctor_set(v_reuseFailAlloc_3424_, 4, v_bodyBytesRead_3403_);
lean_ctor_set(v_reuseFailAlloc_3424_, 5, v_headerBytesRead_3404_);
v___x_3410_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
uint8_t v___x_3411_; lean_object* v___x_3413_; 
lean_ctor_set_uint8(v___x_3410_, sizeof(void*)*6, v___x_3408_);
v___x_3411_ = 0;
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 0, v___x_3410_);
v___x_3413_ = v___x_3397_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3423_, 1, v_writer_3389_);
lean_ctor_set(v_reuseFailAlloc_3423_, 2, v_config_3390_);
lean_ctor_set(v_reuseFailAlloc_3423_, 3, v_events_3391_);
lean_ctor_set(v_reuseFailAlloc_3423_, 4, v_error_3392_);
lean_ctor_set(v_reuseFailAlloc_3423_, 5, v_instant_3393_);
lean_ctor_set_uint8(v_reuseFailAlloc_3423_, sizeof(void*)*6, v_keepAlive_3394_);
lean_ctor_set_uint8(v_reuseFailAlloc_3423_, sizeof(void*)*6 + 1, v_forcedFlush_3395_);
v___x_3413_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
lean_object* v___x_3415_; 
lean_ctor_set_uint8(v___x_3413_, sizeof(void*)*6 + 2, v___x_3411_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3413_);
v___x_3415_ = v___x_3387_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v___x_3413_);
lean_ctor_set(v_reuseFailAlloc_3422_, 1, v_requestStream_3376_);
lean_ctor_set(v_reuseFailAlloc_3422_, 2, v_keepAliveTimeout_3377_);
lean_ctor_set(v_reuseFailAlloc_3422_, 3, v_currentTimeout_3378_);
lean_ctor_set(v_reuseFailAlloc_3422_, 4, v_headerTimeout_3379_);
lean_ctor_set(v_reuseFailAlloc_3422_, 5, v_response_3380_);
lean_ctor_set(v_reuseFailAlloc_3422_, 6, v_respStream_3381_);
lean_ctor_set(v_reuseFailAlloc_3422_, 7, v_expectData_3383_);
lean_ctor_set(v_reuseFailAlloc_3422_, 8, v_pendingHead_3385_);
lean_ctor_set_uint8(v_reuseFailAlloc_3422_, sizeof(void*)*9, v_requiresData_3382_);
lean_ctor_set_uint8(v_reuseFailAlloc_3422_, sizeof(void*)*9 + 1, v_handlerDispatched_3384_);
v___x_3415_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3416_ = lean_box(v___x_3411_);
v___x_3417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3415_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
if (v_isShared_3373_ == 0)
{
lean_ctor_set_tag(v___x_3372_, 1);
lean_ctor_set(v___x_3372_, 0, v___x_3417_);
v___x_3419_ = v___x_3372_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
lean_object* v___x_3420_; 
v___x_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
return v___x_3420_;
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
lean_object* v_val_3430_; lean_object* v_machine_3431_; lean_object* v_requestStream_3432_; lean_object* v_keepAliveTimeout_3433_; lean_object* v_currentTimeout_3434_; lean_object* v_response_3435_; lean_object* v_respStream_3436_; uint8_t v_requiresData_3437_; lean_object* v_expectData_3438_; uint8_t v_handlerDispatched_3439_; lean_object* v_pendingHead_3440_; lean_object* v___f_3441_; 
lean_del_object(v___x_3372_);
v_val_3430_ = lean_ctor_get(v_x_3370_, 0);
lean_inc_n(v_val_3430_, 2);
lean_dec_ref_known(v_x_3370_, 1);
v_machine_3431_ = lean_ctor_get(v_state_3368_, 0);
v_requestStream_3432_ = lean_ctor_get(v_state_3368_, 1);
v_keepAliveTimeout_3433_ = lean_ctor_get(v_state_3368_, 2);
lean_inc(v_keepAliveTimeout_3433_);
v_currentTimeout_3434_ = lean_ctor_get(v_state_3368_, 3);
v_response_3435_ = lean_ctor_get(v_state_3368_, 5);
v_respStream_3436_ = lean_ctor_get(v_state_3368_, 6);
v_requiresData_3437_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3438_ = lean_ctor_get(v_state_3368_, 7);
v_handlerDispatched_3439_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9 + 1);
v_pendingHead_3440_ = lean_ctor_get(v_state_3368_, 8);
v___f_3441_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3441_, 0, v_val_3430_);
if (lean_obj_tag(v_keepAliveTimeout_3433_) == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
lean_dec_ref(v___f_3441_);
lean_dec_ref(v_config_3366_);
v___x_3442_ = lean_box(0);
v___x_3443_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_3430_, v___x_3442_, v_state_3368_);
return v___x_3443_;
}
else
{
lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3475_; 
lean_inc(v_pendingHead_3440_);
lean_inc(v_expectData_3438_);
lean_inc(v_respStream_3436_);
lean_inc_ref(v_response_3435_);
lean_inc(v_currentTimeout_3434_);
lean_inc_ref(v_requestStream_3432_);
lean_inc_ref(v_machine_3431_);
lean_dec(v_val_3430_);
lean_dec_ref(v_state_3368_);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_keepAliveTimeout_3433_);
if (v_isSharedCheck_3475_ == 0)
{
lean_object* v_unused_3476_; 
v_unused_3476_ = lean_ctor_get(v_keepAliveTimeout_3433_, 0);
lean_dec(v_unused_3476_);
v___x_3445_ = v_keepAliveTimeout_3433_;
v_isShared_3446_ = v_isSharedCheck_3475_;
goto v_resetjp_3444_;
}
else
{
lean_dec(v_keepAliveTimeout_3433_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3475_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___f_3449_; lean_object* v___x_3450_; uint8_t v___x_3451_; lean_object* v_val_3453_; lean_object* v___x_3458_; 
v___x_3447_ = lean_box(v_requiresData_3437_);
v___x_3448_ = lean_box(v_handlerDispatched_3439_);
v___f_3449_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3449_, 0, v_config_3366_);
lean_closure_set(v___f_3449_, 1, v_machine_3431_);
lean_closure_set(v___f_3449_, 2, v_requestStream_3432_);
lean_closure_set(v___f_3449_, 3, v_currentTimeout_3434_);
lean_closure_set(v___f_3449_, 4, v_response_3435_);
lean_closure_set(v___f_3449_, 5, v_respStream_3436_);
lean_closure_set(v___f_3449_, 6, v___x_3447_);
lean_closure_set(v___f_3449_, 7, v_expectData_3438_);
lean_closure_set(v___f_3449_, 8, v___x_3448_);
lean_closure_set(v___f_3449_, 9, v_pendingHead_3440_);
lean_closure_set(v___f_3449_, 10, v___f_3441_);
v___x_3450_ = lean_unsigned_to_nat(0u);
v___x_3451_ = 0;
v___x_3458_ = lean_get_current_time();
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3466_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3461_ = v___x_3458_;
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3458_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
lean_ctor_set_tag(v___x_3461_, 1);
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3459_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
v_val_3453_ = v___x_3464_;
goto v___jp_3452_;
}
}
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
v_a_3467_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3458_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3458_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set_tag(v___x_3469_, 0);
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
v_val_3453_ = v___x_3472_;
goto v___jp_3452_;
}
}
}
v___jp_3452_:
{
lean_object* v___x_3455_; 
if (v_isShared_3446_ == 0)
{
lean_ctor_set_tag(v___x_3445_, 0);
lean_ctor_set(v___x_3445_, 0, v_val_3453_);
v___x_3455_ = v___x_3445_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_val_3453_);
v___x_3455_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
lean_object* v___x_3456_; 
v___x_3456_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3450_, v___x_3451_, v___x_3455_, v___f_3449_);
return v___x_3456_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_x_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3589_; 
lean_dec_ref(v_config_3366_);
lean_dec(v_handler_3365_);
lean_dec_ref(v_inst_3363_);
v_x_3478_ = lean_ctor_get(v_event_3367_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_event_3367_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3480_ = v_event_3367_;
v_isShared_3481_ = v_isSharedCheck_3589_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_x_3478_);
lean_dec(v_event_3367_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3589_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
if (lean_obj_tag(v_x_3478_) == 0)
{
lean_object* v_machine_3482_; lean_object* v_requestStream_3483_; lean_object* v_keepAliveTimeout_3484_; lean_object* v_currentTimeout_3485_; lean_object* v_headerTimeout_3486_; lean_object* v_response_3487_; lean_object* v_respStream_3488_; uint8_t v_requiresData_3489_; lean_object* v_expectData_3490_; uint8_t v_handlerDispatched_3491_; lean_object* v_pendingHead_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___f_3495_; 
lean_del_object(v___x_3480_);
v_machine_3482_ = lean_ctor_get(v_state_3368_, 0);
lean_inc_ref_n(v_machine_3482_, 2);
v_requestStream_3483_ = lean_ctor_get(v_state_3368_, 1);
lean_inc_ref_n(v_requestStream_3483_, 2);
v_keepAliveTimeout_3484_ = lean_ctor_get(v_state_3368_, 2);
lean_inc_n(v_keepAliveTimeout_3484_, 2);
v_currentTimeout_3485_ = lean_ctor_get(v_state_3368_, 3);
lean_inc_n(v_currentTimeout_3485_, 2);
v_headerTimeout_3486_ = lean_ctor_get(v_state_3368_, 4);
lean_inc_n(v_headerTimeout_3486_, 2);
v_response_3487_ = lean_ctor_get(v_state_3368_, 5);
lean_inc_ref_n(v_response_3487_, 2);
v_respStream_3488_ = lean_ctor_get(v_state_3368_, 6);
lean_inc(v_respStream_3488_);
v_requiresData_3489_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3490_ = lean_ctor_get(v_state_3368_, 7);
lean_inc_n(v_expectData_3490_, 2);
v_handlerDispatched_3491_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9 + 1);
v_pendingHead_3492_ = lean_ctor_get(v_state_3368_, 8);
lean_inc_n(v_pendingHead_3492_, 2);
lean_dec_ref(v_state_3368_);
v___x_3493_ = lean_box(v_requiresData_3489_);
v___x_3494_ = lean_box(v_handlerDispatched_3491_);
v___f_3495_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_3495_, 0, v_machine_3482_);
lean_closure_set(v___f_3495_, 1, v_requestStream_3483_);
lean_closure_set(v___f_3495_, 2, v_keepAliveTimeout_3484_);
lean_closure_set(v___f_3495_, 3, v_currentTimeout_3485_);
lean_closure_set(v___f_3495_, 4, v_headerTimeout_3486_);
lean_closure_set(v___f_3495_, 5, v_response_3487_);
lean_closure_set(v___f_3495_, 6, v___x_3493_);
lean_closure_set(v___f_3495_, 7, v_expectData_3490_);
lean_closure_set(v___f_3495_, 8, v___x_3494_);
lean_closure_set(v___f_3495_, 9, v_pendingHead_3492_);
if (lean_obj_tag(v_respStream_3488_) == 1)
{
lean_object* v_val_3496_; lean_object* v_close_3497_; lean_object* v_isClosed_3498_; lean_object* v___f_3499_; lean_object* v___f_3500_; lean_object* v___x_3501_; uint8_t v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_dec(v_pendingHead_3492_);
lean_dec(v_expectData_3490_);
lean_dec_ref(v_response_3487_);
lean_dec(v_headerTimeout_3486_);
lean_dec(v_currentTimeout_3485_);
lean_dec(v_keepAliveTimeout_3484_);
lean_dec_ref(v_requestStream_3483_);
lean_dec_ref(v_machine_3482_);
v_val_3496_ = lean_ctor_get(v_respStream_3488_, 0);
lean_inc_n(v_val_3496_, 2);
lean_dec_ref_known(v_respStream_3488_, 1);
v_close_3497_ = lean_ctor_get(v_inst_3364_, 1);
lean_inc_ref(v_close_3497_);
v_isClosed_3498_ = lean_ctor_get(v_inst_3364_, 2);
lean_inc_ref(v_isClosed_3498_);
lean_dec_ref(v_inst_3364_);
lean_inc_ref(v___f_3495_);
v___f_3499_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3499_, 0, v___f_3495_);
v___f_3500_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3500_, 0, v_close_3497_);
lean_closure_set(v___f_3500_, 1, v_val_3496_);
lean_closure_set(v___f_3500_, 2, v___f_3499_);
lean_closure_set(v___f_3500_, 3, v___f_3495_);
v___x_3501_ = lean_unsigned_to_nat(0u);
v___x_3502_ = 0;
v___x_3503_ = lean_apply_2(v_isClosed_3498_, v_val_3496_, lean_box(0));
v___x_3504_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3501_, v___x_3502_, v___x_3503_, v___f_3500_);
return v___x_3504_;
}
else
{
lean_object* v___x_3505_; lean_object* v___x_3506_; 
lean_dec_ref(v___f_3495_);
lean_dec(v_respStream_3488_);
lean_dec_ref(v_inst_3364_);
v___x_3505_ = lean_box(0);
v___x_3506_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_3482_, v_requestStream_3483_, v_keepAliveTimeout_3484_, v_currentTimeout_3485_, v_headerTimeout_3486_, v_response_3487_, v_requiresData_3489_, v_expectData_3490_, v_handlerDispatched_3491_, v_pendingHead_3492_, v___x_3505_);
return v___x_3506_;
}
}
else
{
lean_object* v_val_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3588_; 
lean_dec_ref(v_inst_3364_);
v_val_3507_ = lean_ctor_get(v_x_3478_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v_x_3478_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3509_ = v_x_3478_;
v_isShared_3510_ = v_isSharedCheck_3588_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_val_3507_);
lean_dec(v_x_3478_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3588_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v_machine_3511_; lean_object* v_requestStream_3512_; lean_object* v_keepAliveTimeout_3513_; lean_object* v_currentTimeout_3514_; lean_object* v_headerTimeout_3515_; lean_object* v_response_3516_; lean_object* v_respStream_3517_; uint8_t v_requiresData_3518_; lean_object* v_expectData_3519_; uint8_t v_handlerDispatched_3520_; lean_object* v_pendingHead_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3587_; 
v_machine_3511_ = lean_ctor_get(v_state_3368_, 0);
v_requestStream_3512_ = lean_ctor_get(v_state_3368_, 1);
v_keepAliveTimeout_3513_ = lean_ctor_get(v_state_3368_, 2);
v_currentTimeout_3514_ = lean_ctor_get(v_state_3368_, 3);
v_headerTimeout_3515_ = lean_ctor_get(v_state_3368_, 4);
v_response_3516_ = lean_ctor_get(v_state_3368_, 5);
v_respStream_3517_ = lean_ctor_get(v_state_3368_, 6);
v_requiresData_3518_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3519_ = lean_ctor_get(v_state_3368_, 7);
v_handlerDispatched_3520_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9 + 1);
v_pendingHead_3521_ = lean_ctor_get(v_state_3368_, 8);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_state_3368_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3523_ = v_state_3368_;
v_isShared_3524_ = v_isSharedCheck_3587_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_pendingHead_3521_);
lean_inc(v_expectData_3519_);
lean_inc(v_respStream_3517_);
lean_inc(v_response_3516_);
lean_inc(v_headerTimeout_3515_);
lean_inc(v_currentTimeout_3514_);
lean_inc(v_keepAliveTimeout_3513_);
lean_inc(v_requestStream_3512_);
lean_inc(v_machine_3511_);
lean_dec(v_state_3368_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3587_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___y_3526_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3539_ = lean_unsigned_to_nat(1u);
v___x_3540_ = lean_mk_empty_array_with_capacity(v___x_3539_);
v___x_3541_ = lean_array_push(v___x_3540_, v_val_3507_);
v___x_3542_ = lean_array_get_size(v___x_3541_);
v___x_3543_ = lean_unsigned_to_nat(0u);
v___x_3544_ = lean_nat_dec_eq(v___x_3542_, v___x_3543_);
if (v___x_3544_ == 0)
{
lean_object* v_reader_3545_; lean_object* v_writer_3546_; lean_object* v_config_3547_; lean_object* v_events_3548_; lean_object* v_error_3549_; lean_object* v_instant_3550_; uint8_t v_keepAlive_3551_; uint8_t v_forcedFlush_3552_; uint8_t v_pullBodyStalled_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3586_; 
v_reader_3545_ = lean_ctor_get(v_machine_3511_, 0);
v_writer_3546_ = lean_ctor_get(v_machine_3511_, 1);
v_config_3547_ = lean_ctor_get(v_machine_3511_, 2);
v_events_3548_ = lean_ctor_get(v_machine_3511_, 3);
v_error_3549_ = lean_ctor_get(v_machine_3511_, 4);
v_instant_3550_ = lean_ctor_get(v_machine_3511_, 5);
v_keepAlive_3551_ = lean_ctor_get_uint8(v_machine_3511_, sizeof(void*)*6);
v_forcedFlush_3552_ = lean_ctor_get_uint8(v_machine_3511_, sizeof(void*)*6 + 1);
v_pullBodyStalled_3553_ = lean_ctor_get_uint8(v_machine_3511_, sizeof(void*)*6 + 2);
v_isSharedCheck_3586_ = !lean_is_exclusive(v_machine_3511_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3555_ = v_machine_3511_;
v_isShared_3556_ = v_isSharedCheck_3586_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_instant_3550_);
lean_inc(v_error_3549_);
lean_inc(v_events_3548_);
lean_inc(v_config_3547_);
lean_inc(v_writer_3546_);
lean_inc(v_reader_3545_);
lean_dec(v_machine_3511_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3586_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___y_3558_; lean_object* v___x_3580_; uint8_t v___x_3581_; 
v___x_3580_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_3581_ = lean_nat_dec_lt(v___x_3543_, v___x_3542_);
if (v___x_3581_ == 0)
{
v___y_3558_ = v___x_3543_;
goto v___jp_3557_;
}
else
{
lean_object* v___f_3582_; size_t v___x_3583_; size_t v___x_3584_; lean_object* v___x_3585_; 
v___f_3582_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___x_3583_ = ((size_t)0ULL);
v___x_3584_ = lean_usize_of_nat(v___x_3542_);
lean_inc_ref(v___x_3541_);
v___x_3585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3580_, v___f_3582_, v___x_3541_, v___x_3583_, v___x_3584_, v___x_3543_);
v___y_3558_ = v___x_3585_;
goto v___jp_3557_;
}
v___jp_3557_:
{
lean_object* v_userData_3559_; lean_object* v_outputData_3560_; lean_object* v_state_3561_; lean_object* v_knownSize_3562_; lean_object* v_messageHead_3563_; uint8_t v_sentMessage_3564_; uint8_t v_userClosedBody_3565_; uint8_t v_omitBody_3566_; lean_object* v_userDataBytes_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3579_; 
v_userData_3559_ = lean_ctor_get(v_writer_3546_, 0);
v_outputData_3560_ = lean_ctor_get(v_writer_3546_, 1);
v_state_3561_ = lean_ctor_get(v_writer_3546_, 2);
v_knownSize_3562_ = lean_ctor_get(v_writer_3546_, 3);
v_messageHead_3563_ = lean_ctor_get(v_writer_3546_, 4);
v_sentMessage_3564_ = lean_ctor_get_uint8(v_writer_3546_, sizeof(void*)*6);
v_userClosedBody_3565_ = lean_ctor_get_uint8(v_writer_3546_, sizeof(void*)*6 + 1);
v_omitBody_3566_ = lean_ctor_get_uint8(v_writer_3546_, sizeof(void*)*6 + 2);
v_userDataBytes_3567_ = lean_ctor_get(v_writer_3546_, 5);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_writer_3546_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3569_ = v_writer_3546_;
v_isShared_3570_ = v_isSharedCheck_3579_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_userDataBytes_3567_);
lean_inc(v_messageHead_3563_);
lean_inc(v_knownSize_3562_);
lean_inc(v_state_3561_);
lean_inc(v_outputData_3560_);
lean_inc(v_userData_3559_);
lean_dec(v_writer_3546_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3579_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3574_; 
v___x_3571_ = l_Array_append___redArg(v_userData_3559_, v___x_3541_);
lean_dec_ref(v___x_3541_);
v___x_3572_ = lean_nat_add(v_userDataBytes_3567_, v___y_3558_);
lean_dec(v___y_3558_);
lean_dec(v_userDataBytes_3567_);
if (v_isShared_3570_ == 0)
{
lean_ctor_set(v___x_3569_, 5, v___x_3572_);
lean_ctor_set(v___x_3569_, 0, v___x_3571_);
v___x_3574_ = v___x_3569_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3571_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v_outputData_3560_);
lean_ctor_set(v_reuseFailAlloc_3578_, 2, v_state_3561_);
lean_ctor_set(v_reuseFailAlloc_3578_, 3, v_knownSize_3562_);
lean_ctor_set(v_reuseFailAlloc_3578_, 4, v_messageHead_3563_);
lean_ctor_set(v_reuseFailAlloc_3578_, 5, v___x_3572_);
lean_ctor_set_uint8(v_reuseFailAlloc_3578_, sizeof(void*)*6, v_sentMessage_3564_);
lean_ctor_set_uint8(v_reuseFailAlloc_3578_, sizeof(void*)*6 + 1, v_userClosedBody_3565_);
lean_ctor_set_uint8(v_reuseFailAlloc_3578_, sizeof(void*)*6 + 2, v_omitBody_3566_);
v___x_3574_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
lean_object* v___x_3576_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 1, v___x_3574_);
v___x_3576_ = v___x_3555_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_reader_3545_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v___x_3574_);
lean_ctor_set(v_reuseFailAlloc_3577_, 2, v_config_3547_);
lean_ctor_set(v_reuseFailAlloc_3577_, 3, v_events_3548_);
lean_ctor_set(v_reuseFailAlloc_3577_, 4, v_error_3549_);
lean_ctor_set(v_reuseFailAlloc_3577_, 5, v_instant_3550_);
lean_ctor_set_uint8(v_reuseFailAlloc_3577_, sizeof(void*)*6, v_keepAlive_3551_);
lean_ctor_set_uint8(v_reuseFailAlloc_3577_, sizeof(void*)*6 + 1, v_forcedFlush_3552_);
lean_ctor_set_uint8(v_reuseFailAlloc_3577_, sizeof(void*)*6 + 2, v_pullBodyStalled_3553_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
v___y_3526_ = v___x_3576_;
goto v___jp_3525_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3541_);
v___y_3526_ = v_machine_3511_;
goto v___jp_3525_;
}
v___jp_3525_:
{
lean_object* v___x_3528_; 
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 0, v___y_3526_);
v___x_3528_ = v___x_3523_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___y_3526_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v_requestStream_3512_);
lean_ctor_set(v_reuseFailAlloc_3538_, 2, v_keepAliveTimeout_3513_);
lean_ctor_set(v_reuseFailAlloc_3538_, 3, v_currentTimeout_3514_);
lean_ctor_set(v_reuseFailAlloc_3538_, 4, v_headerTimeout_3515_);
lean_ctor_set(v_reuseFailAlloc_3538_, 5, v_response_3516_);
lean_ctor_set(v_reuseFailAlloc_3538_, 6, v_respStream_3517_);
lean_ctor_set(v_reuseFailAlloc_3538_, 7, v_expectData_3519_);
lean_ctor_set(v_reuseFailAlloc_3538_, 8, v_pendingHead_3521_);
lean_ctor_set_uint8(v_reuseFailAlloc_3538_, sizeof(void*)*9, v_requiresData_3518_);
lean_ctor_set_uint8(v_reuseFailAlloc_3538_, sizeof(void*)*9 + 1, v_handlerDispatched_3520_);
v___x_3528_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
uint8_t v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3529_ = 0;
v___x_3530_ = lean_box(v___x_3529_);
v___x_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3528_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
if (v_isShared_3510_ == 0)
{
lean_ctor_set(v___x_3509_, 0, v___x_3531_);
v___x_3533_ = v___x_3509_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3535_; 
if (v_isShared_3481_ == 0)
{
lean_ctor_set_tag(v___x_3480_, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3533_);
v___x_3535_ = v___x_3480_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
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
uint8_t v_x_3590_; 
lean_dec_ref(v_config_3366_);
lean_dec_ref(v_inst_3364_);
v_x_3590_ = lean_ctor_get_uint8(v_event_3367_, 0);
lean_dec_ref_known(v_event_3367_, 0);
if (v_x_3590_ == 0)
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
lean_dec(v_handler_3365_);
lean_dec_ref(v_inst_3363_);
v___x_3591_ = lean_box(v_x_3590_);
v___x_3592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3592_, 0, v_state_3368_);
lean_ctor_set(v___x_3592_, 1, v___x_3591_);
v___x_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3592_);
v___x_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
return v___x_3594_;
}
else
{
lean_object* v_machine_3595_; lean_object* v_requestStream_3596_; lean_object* v_keepAliveTimeout_3597_; lean_object* v_currentTimeout_3598_; lean_object* v_headerTimeout_3599_; lean_object* v_response_3600_; lean_object* v_respStream_3601_; uint8_t v_requiresData_3602_; lean_object* v_expectData_3603_; uint8_t v_handlerDispatched_3604_; lean_object* v_pendingHead_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3655_; 
v_machine_3595_ = lean_ctor_get(v_state_3368_, 0);
v_requestStream_3596_ = lean_ctor_get(v_state_3368_, 1);
v_keepAliveTimeout_3597_ = lean_ctor_get(v_state_3368_, 2);
v_currentTimeout_3598_ = lean_ctor_get(v_state_3368_, 3);
v_headerTimeout_3599_ = lean_ctor_get(v_state_3368_, 4);
v_response_3600_ = lean_ctor_get(v_state_3368_, 5);
v_respStream_3601_ = lean_ctor_get(v_state_3368_, 6);
v_requiresData_3602_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3603_ = lean_ctor_get(v_state_3368_, 7);
v_handlerDispatched_3604_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9 + 1);
v_pendingHead_3605_ = lean_ctor_get(v_state_3368_, 8);
v_isSharedCheck_3655_ = !lean_is_exclusive(v_state_3368_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3607_ = v_state_3368_;
v_isShared_3608_ = v_isSharedCheck_3655_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_pendingHead_3605_);
lean_inc(v_expectData_3603_);
lean_inc(v_respStream_3601_);
lean_inc(v_response_3600_);
lean_inc(v_headerTimeout_3599_);
lean_inc(v_currentTimeout_3598_);
lean_inc(v_keepAliveTimeout_3597_);
lean_inc(v_requestStream_3596_);
lean_inc(v_machine_3595_);
lean_dec(v_state_3368_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3655_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
uint8_t v___x_3609_; lean_object* v___x_3610_; lean_object* v_fst_3611_; lean_object* v_snd_3612_; lean_object* v_reader_3613_; lean_object* v_writer_3614_; lean_object* v_config_3615_; lean_object* v_events_3616_; lean_object* v_error_3617_; lean_object* v_instant_3618_; uint8_t v_keepAlive_3619_; uint8_t v_forcedFlush_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3654_; 
v___x_3609_ = 0;
v___x_3610_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(v___x_3609_, v_machine_3595_);
v_fst_3611_ = lean_ctor_get(v___x_3610_, 0);
lean_inc(v_fst_3611_);
v_snd_3612_ = lean_ctor_get(v___x_3610_, 1);
lean_inc(v_snd_3612_);
lean_dec_ref(v___x_3610_);
v_reader_3613_ = lean_ctor_get(v_fst_3611_, 0);
v_writer_3614_ = lean_ctor_get(v_fst_3611_, 1);
v_config_3615_ = lean_ctor_get(v_fst_3611_, 2);
v_events_3616_ = lean_ctor_get(v_fst_3611_, 3);
v_error_3617_ = lean_ctor_get(v_fst_3611_, 4);
v_instant_3618_ = lean_ctor_get(v_fst_3611_, 5);
v_keepAlive_3619_ = lean_ctor_get_uint8(v_fst_3611_, sizeof(void*)*6);
v_forcedFlush_3620_ = lean_ctor_get_uint8(v_fst_3611_, sizeof(void*)*6 + 1);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_fst_3611_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3622_ = v_fst_3611_;
v_isShared_3623_ = v_isSharedCheck_3654_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_instant_3618_);
lean_inc(v_error_3617_);
lean_inc(v_events_3616_);
lean_inc(v_config_3615_);
lean_inc(v_writer_3614_);
lean_inc(v_reader_3613_);
lean_dec(v_fst_3611_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3654_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___f_3624_; lean_object* v___f_3625_; uint8_t v___y_3627_; 
v___f_3624_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_3625_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3625_, 0, v_inst_3363_);
lean_closure_set(v___f_3625_, 1, v_handler_3365_);
if (lean_obj_tag(v_snd_3612_) == 0)
{
uint8_t v_sentMessage_3650_; 
v_sentMessage_3650_ = lean_ctor_get_uint8(v_writer_3614_, sizeof(void*)*6);
if (v_sentMessage_3650_ == 0)
{
lean_object* v_state_3651_; 
v_state_3651_ = lean_ctor_get(v_reader_3613_, 0);
if (lean_obj_tag(v_state_3651_) == 2)
{
v___y_3627_ = v_x_3590_;
goto v___jp_3626_;
}
else
{
v___y_3627_ = v_sentMessage_3650_;
goto v___jp_3626_;
}
}
else
{
uint8_t v___x_3652_; 
v___x_3652_ = 0;
v___y_3627_ = v___x_3652_;
goto v___jp_3626_;
}
}
else
{
uint8_t v___x_3653_; 
v___x_3653_ = 0;
v___y_3627_ = v___x_3653_;
goto v___jp_3626_;
}
v___jp_3626_:
{
lean_object* v___x_3629_; 
if (v_isShared_3623_ == 0)
{
v___x_3629_ = v___x_3622_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_reader_3613_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_writer_3614_);
lean_ctor_set(v_reuseFailAlloc_3649_, 2, v_config_3615_);
lean_ctor_set(v_reuseFailAlloc_3649_, 3, v_events_3616_);
lean_ctor_set(v_reuseFailAlloc_3649_, 4, v_error_3617_);
lean_ctor_set(v_reuseFailAlloc_3649_, 5, v_instant_3618_);
lean_ctor_set_uint8(v_reuseFailAlloc_3649_, sizeof(void*)*6, v_keepAlive_3619_);
lean_ctor_set_uint8(v_reuseFailAlloc_3649_, sizeof(void*)*6 + 1, v_forcedFlush_3620_);
v___x_3629_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
lean_object* v_st_3631_; 
lean_ctor_set_uint8(v___x_3629_, sizeof(void*)*6 + 2, v___y_3627_);
lean_inc_ref(v_requestStream_3596_);
if (v_isShared_3608_ == 0)
{
lean_ctor_set(v___x_3607_, 0, v___x_3629_);
v_st_3631_ = v___x_3607_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3648_, 1, v_requestStream_3596_);
lean_ctor_set(v_reuseFailAlloc_3648_, 2, v_keepAliveTimeout_3597_);
lean_ctor_set(v_reuseFailAlloc_3648_, 3, v_currentTimeout_3598_);
lean_ctor_set(v_reuseFailAlloc_3648_, 4, v_headerTimeout_3599_);
lean_ctor_set(v_reuseFailAlloc_3648_, 5, v_response_3600_);
lean_ctor_set(v_reuseFailAlloc_3648_, 6, v_respStream_3601_);
lean_ctor_set(v_reuseFailAlloc_3648_, 7, v_expectData_3603_);
lean_ctor_set(v_reuseFailAlloc_3648_, 8, v_pendingHead_3605_);
lean_ctor_set_uint8(v_reuseFailAlloc_3648_, sizeof(void*)*9, v_requiresData_3602_);
lean_ctor_set_uint8(v_reuseFailAlloc_3648_, sizeof(void*)*9 + 1, v_handlerDispatched_3604_);
v_st_3631_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
lean_object* v___f_3632_; 
lean_inc_ref(v_st_3631_);
v___f_3632_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3632_, 0, v_st_3631_);
if (lean_obj_tag(v_snd_3612_) == 1)
{
lean_object* v_val_3633_; uint8_t v_final_3634_; uint8_t v_incomplete_3635_; lean_object* v_chunk_3636_; lean_object* v___f_3637_; lean_object* v___f_3638_; lean_object* v___x_3639_; lean_object* v___f_3640_; lean_object* v___x_3641_; uint8_t v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
lean_dec_ref(v_st_3631_);
v_val_3633_ = lean_ctor_get(v_snd_3612_, 0);
lean_inc(v_val_3633_);
lean_dec_ref_known(v_snd_3612_, 1);
v_final_3634_ = lean_ctor_get_uint8(v_val_3633_, sizeof(void*)*1);
v_incomplete_3635_ = lean_ctor_get_uint8(v_val_3633_, sizeof(void*)*1 + 1);
v_chunk_3636_ = lean_ctor_get(v_val_3633_, 0);
lean_inc_ref(v_chunk_3636_);
lean_dec(v_val_3633_);
lean_inc_ref_n(v___f_3632_, 2);
v___f_3637_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3637_, 0, v___f_3632_);
lean_inc_ref_n(v_requestStream_3596_, 2);
v___f_3638_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3638_, 0, v_requestStream_3596_);
lean_closure_set(v___f_3638_, 1, v___f_3637_);
lean_closure_set(v___f_3638_, 2, v___f_3632_);
v___x_3639_ = lean_box(v_final_3634_);
v___f_3640_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed), 7, 5);
lean_closure_set(v___f_3640_, 0, v___x_3639_);
lean_closure_set(v___f_3640_, 1, v___f_3632_);
lean_closure_set(v___f_3640_, 2, v___f_3624_);
lean_closure_set(v___f_3640_, 3, v_requestStream_3596_);
lean_closure_set(v___f_3640_, 4, v___f_3638_);
v___x_3641_ = lean_unsigned_to_nat(0u);
v___x_3642_ = 0;
v___x_3643_ = l_Std_Http_Body_Stream_send(v_requestStream_3596_, v_chunk_3636_, v_incomplete_3635_);
v___x_3644_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3641_, v___x_3642_, v___x_3643_, v___f_3625_);
v___x_3645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3641_, v___x_3642_, v___x_3644_, v___f_3640_);
return v___x_3645_;
}
else
{
lean_object* v___x_3646_; lean_object* v___x_3647_; 
lean_dec_ref(v___f_3632_);
lean_dec_ref(v___f_3625_);
lean_dec(v_snd_3612_);
lean_dec_ref(v_requestStream_3596_);
v___x_3646_ = lean_box(0);
v___x_3647_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_3631_, v___x_3646_);
return v___x_3647_;
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
lean_object* v_x_3656_; 
v_x_3656_ = lean_ctor_get(v_event_3367_, 0);
lean_inc_ref(v_x_3656_);
lean_dec_ref_known(v_event_3367_, 1);
if (lean_obj_tag(v_x_3656_) == 0)
{
lean_object* v_a_3657_; lean_object* v_onFailure_3658_; lean_object* v___f_3659_; lean_object* v___x_3660_; uint8_t v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
lean_dec_ref(v_config_3366_);
lean_dec_ref(v_inst_3364_);
v_a_3657_ = lean_ctor_get(v_x_3656_, 0);
lean_inc(v_a_3657_);
lean_dec_ref_known(v_x_3656_, 1);
v_onFailure_3658_ = lean_ctor_get(v_inst_3363_, 2);
lean_inc_ref(v_onFailure_3658_);
lean_dec_ref(v_inst_3363_);
v___f_3659_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_3659_, 0, v_state_3368_);
v___x_3660_ = lean_unsigned_to_nat(0u);
v___x_3661_ = 0;
v___x_3662_ = lean_apply_3(v_onFailure_3658_, v_handler_3365_, v_a_3657_, lean_box(0));
v___x_3663_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3660_, v___x_3661_, v___x_3662_, v___f_3659_);
return v___x_3663_;
}
else
{
lean_object* v_machine_3664_; lean_object* v_reader_3665_; lean_object* v_state_3666_; 
v_machine_3664_ = lean_ctor_get(v_state_3368_, 0);
lean_inc_ref(v_machine_3664_);
v_reader_3665_ = lean_ctor_get(v_machine_3664_, 0);
v_state_3666_ = lean_ctor_get(v_reader_3665_, 0);
if (lean_obj_tag(v_state_3666_) == 7)
{
lean_object* v_a_3667_; lean_object* v_requestStream_3668_; lean_object* v_keepAliveTimeout_3669_; lean_object* v_currentTimeout_3670_; lean_object* v_headerTimeout_3671_; lean_object* v_response_3672_; lean_object* v_respStream_3673_; uint8_t v_requiresData_3674_; lean_object* v_expectData_3675_; lean_object* v_pendingHead_3676_; lean_object* v_close_3677_; lean_object* v_isClosed_3678_; lean_object* v_body_3679_; lean_object* v___x_3680_; lean_object* v___f_3681_; lean_object* v___f_3682_; lean_object* v___f_3683_; lean_object* v___x_3684_; uint8_t v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
lean_dec_ref(v_config_3366_);
lean_dec(v_handler_3365_);
lean_dec_ref(v_inst_3363_);
v_a_3667_ = lean_ctor_get(v_x_3656_, 0);
lean_inc(v_a_3667_);
lean_dec_ref_known(v_x_3656_, 1);
v_requestStream_3668_ = lean_ctor_get(v_state_3368_, 1);
lean_inc_ref(v_requestStream_3668_);
v_keepAliveTimeout_3669_ = lean_ctor_get(v_state_3368_, 2);
lean_inc(v_keepAliveTimeout_3669_);
v_currentTimeout_3670_ = lean_ctor_get(v_state_3368_, 3);
lean_inc(v_currentTimeout_3670_);
v_headerTimeout_3671_ = lean_ctor_get(v_state_3368_, 4);
lean_inc(v_headerTimeout_3671_);
v_response_3672_ = lean_ctor_get(v_state_3368_, 5);
lean_inc_ref(v_response_3672_);
v_respStream_3673_ = lean_ctor_get(v_state_3368_, 6);
lean_inc(v_respStream_3673_);
v_requiresData_3674_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3675_ = lean_ctor_get(v_state_3368_, 7);
lean_inc(v_expectData_3675_);
v_pendingHead_3676_ = lean_ctor_get(v_state_3368_, 8);
lean_inc(v_pendingHead_3676_);
lean_dec_ref(v_state_3368_);
v_close_3677_ = lean_ctor_get(v_inst_3364_, 1);
lean_inc_ref(v_close_3677_);
v_isClosed_3678_ = lean_ctor_get(v_inst_3364_, 2);
lean_inc_ref(v_isClosed_3678_);
lean_dec_ref(v_inst_3364_);
v_body_3679_ = lean_ctor_get(v_a_3667_, 1);
lean_inc_n(v_body_3679_, 2);
lean_dec(v_a_3667_);
v___x_3680_ = lean_box(v_requiresData_3674_);
v___f_3681_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_3681_, 0, v_machine_3664_);
lean_closure_set(v___f_3681_, 1, v_requestStream_3668_);
lean_closure_set(v___f_3681_, 2, v_keepAliveTimeout_3669_);
lean_closure_set(v___f_3681_, 3, v_currentTimeout_3670_);
lean_closure_set(v___f_3681_, 4, v_headerTimeout_3671_);
lean_closure_set(v___f_3681_, 5, v_response_3672_);
lean_closure_set(v___f_3681_, 6, v_respStream_3673_);
lean_closure_set(v___f_3681_, 7, v___x_3680_);
lean_closure_set(v___f_3681_, 8, v_expectData_3675_);
lean_closure_set(v___f_3681_, 9, v_pendingHead_3676_);
lean_inc_ref(v___f_3681_);
v___f_3682_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3682_, 0, v___f_3681_);
v___f_3683_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_3683_, 0, v_close_3677_);
lean_closure_set(v___f_3683_, 1, v_body_3679_);
lean_closure_set(v___f_3683_, 2, v___f_3682_);
lean_closure_set(v___f_3683_, 3, v___f_3681_);
v___x_3684_ = lean_unsigned_to_nat(0u);
v___x_3685_ = 0;
v___x_3686_ = lean_apply_2(v_isClosed_3678_, v_body_3679_, lean_box(0));
v___x_3687_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3684_, v___x_3685_, v___x_3686_, v___f_3683_);
return v___x_3687_;
}
else
{
lean_object* v_a_3688_; lean_object* v_requestStream_3689_; lean_object* v_keepAliveTimeout_3690_; lean_object* v_currentTimeout_3691_; lean_object* v_headerTimeout_3692_; lean_object* v_response_3693_; uint8_t v_requiresData_3694_; lean_object* v_expectData_3695_; lean_object* v_pendingHead_3696_; uint8_t v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___f_3700_; lean_object* v___f_3701_; lean_object* v___f_3702_; uint8_t v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___f_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v_a_3688_ = lean_ctor_get(v_x_3656_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v_x_3656_, 1);
v_requestStream_3689_ = lean_ctor_get(v_state_3368_, 1);
lean_inc_ref(v_requestStream_3689_);
v_keepAliveTimeout_3690_ = lean_ctor_get(v_state_3368_, 2);
lean_inc(v_keepAliveTimeout_3690_);
v_currentTimeout_3691_ = lean_ctor_get(v_state_3368_, 3);
lean_inc(v_currentTimeout_3691_);
v_headerTimeout_3692_ = lean_ctor_get(v_state_3368_, 4);
lean_inc(v_headerTimeout_3692_);
v_response_3693_ = lean_ctor_get(v_state_3368_, 5);
lean_inc_ref(v_response_3693_);
v_requiresData_3694_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3695_ = lean_ctor_get(v_state_3368_, 7);
lean_inc(v_expectData_3695_);
v_pendingHead_3696_ = lean_ctor_get(v_state_3368_, 8);
lean_inc(v_pendingHead_3696_);
lean_dec_ref(v_state_3368_);
v___x_3697_ = 0;
v___x_3698_ = lean_box(v_requiresData_3694_);
v___x_3699_ = lean_box(v___x_3697_);
v___f_3700_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed), 11, 9);
lean_closure_set(v___f_3700_, 0, v_requestStream_3689_);
lean_closure_set(v___f_3700_, 1, v_keepAliveTimeout_3690_);
lean_closure_set(v___f_3700_, 2, v_currentTimeout_3691_);
lean_closure_set(v___f_3700_, 3, v_headerTimeout_3692_);
lean_closure_set(v___f_3700_, 4, v_response_3693_);
lean_closure_set(v___f_3700_, 5, v___x_3698_);
lean_closure_set(v___f_3700_, 6, v_expectData_3695_);
lean_closure_set(v___f_3700_, 7, v___x_3699_);
lean_closure_set(v___f_3700_, 8, v_pendingHead_3696_);
v___f_3701_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed), 3, 1);
lean_closure_set(v___f_3701_, 0, v___f_3700_);
v___f_3702_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0));
v___x_3703_ = 1;
v___x_3704_ = lean_box(v___x_3697_);
v___x_3705_ = lean_box(v___x_3703_);
lean_inc_ref(v_inst_3364_);
lean_inc_ref(v___f_3701_);
v___f_3706_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed), 10, 8);
lean_closure_set(v___f_3706_, 0, v___x_3704_);
lean_closure_set(v___f_3706_, 1, v___f_3701_);
lean_closure_set(v___f_3706_, 2, v___x_3705_);
lean_closure_set(v___f_3706_, 3, v_inst_3363_);
lean_closure_set(v___f_3706_, 4, v_handler_3365_);
lean_closure_set(v___f_3706_, 5, v_inst_3364_);
lean_closure_set(v___f_3706_, 6, v___f_3702_);
lean_closure_set(v___f_3706_, 7, v___f_3701_);
v___x_3707_ = lean_unsigned_to_nat(0u);
v___x_3708_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_3364_, v_config_3366_, v_machine_3664_, v_a_3688_);
v___x_3709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3707_, v___x_3697_, v___x_3708_, v___f_3706_);
return v___x_3709_;
}
}
}
case 4:
{
lean_object* v_onFailure_3710_; lean_object* v___f_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; uint8_t v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
lean_dec_ref(v_config_3366_);
lean_dec_ref(v_inst_3364_);
v_onFailure_3710_ = lean_ctor_get(v_inst_3363_, 2);
lean_inc_ref(v_onFailure_3710_);
lean_dec_ref(v_inst_3363_);
v___f_3711_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed), 3, 1);
lean_closure_set(v___f_3711_, 0, v_state_3368_);
v___x_3712_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2);
v___x_3713_ = lean_unsigned_to_nat(0u);
v___x_3714_ = 0;
v___x_3715_ = lean_apply_3(v_onFailure_3710_, v_handler_3365_, v___x_3712_, lean_box(0));
v___x_3716_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3713_, v___x_3714_, v___x_3715_, v___f_3711_);
return v___x_3716_;
}
case 5:
{
lean_object* v_machine_3717_; lean_object* v_requestStream_3718_; lean_object* v_keepAliveTimeout_3719_; lean_object* v_currentTimeout_3720_; lean_object* v_headerTimeout_3721_; lean_object* v_response_3722_; lean_object* v_respStream_3723_; uint8_t v_requiresData_3724_; lean_object* v_expectData_3725_; lean_object* v_pendingHead_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3740_; 
lean_dec_ref(v_config_3366_);
lean_dec(v_handler_3365_);
lean_dec_ref(v_inst_3364_);
lean_dec_ref(v_inst_3363_);
v_machine_3717_ = lean_ctor_get(v_state_3368_, 0);
v_requestStream_3718_ = lean_ctor_get(v_state_3368_, 1);
v_keepAliveTimeout_3719_ = lean_ctor_get(v_state_3368_, 2);
v_currentTimeout_3720_ = lean_ctor_get(v_state_3368_, 3);
v_headerTimeout_3721_ = lean_ctor_get(v_state_3368_, 4);
v_response_3722_ = lean_ctor_get(v_state_3368_, 5);
v_respStream_3723_ = lean_ctor_get(v_state_3368_, 6);
v_requiresData_3724_ = lean_ctor_get_uint8(v_state_3368_, sizeof(void*)*9);
v_expectData_3725_ = lean_ctor_get(v_state_3368_, 7);
v_pendingHead_3726_ = lean_ctor_get(v_state_3368_, 8);
v_isSharedCheck_3740_ = !lean_is_exclusive(v_state_3368_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3728_ = v_state_3368_;
v_isShared_3729_ = v_isSharedCheck_3740_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_pendingHead_3726_);
lean_inc(v_expectData_3725_);
lean_inc(v_respStream_3723_);
lean_inc(v_response_3722_);
lean_inc(v_headerTimeout_3721_);
lean_inc(v_currentTimeout_3720_);
lean_inc(v_keepAliveTimeout_3719_);
lean_inc(v_requestStream_3718_);
lean_inc(v_machine_3717_);
lean_dec(v_state_3368_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3740_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; lean_object* v___x_3734_; 
v___x_3730_ = lean_box(55);
v___x_3731_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3717_, v___x_3730_);
v___x_3732_ = 0;
if (v_isShared_3729_ == 0)
{
lean_ctor_set(v___x_3728_, 0, v___x_3731_);
v___x_3734_ = v___x_3728_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3731_);
lean_ctor_set(v_reuseFailAlloc_3739_, 1, v_requestStream_3718_);
lean_ctor_set(v_reuseFailAlloc_3739_, 2, v_keepAliveTimeout_3719_);
lean_ctor_set(v_reuseFailAlloc_3739_, 3, v_currentTimeout_3720_);
lean_ctor_set(v_reuseFailAlloc_3739_, 4, v_headerTimeout_3721_);
lean_ctor_set(v_reuseFailAlloc_3739_, 5, v_response_3722_);
lean_ctor_set(v_reuseFailAlloc_3739_, 6, v_respStream_3723_);
lean_ctor_set(v_reuseFailAlloc_3739_, 7, v_expectData_3725_);
lean_ctor_set(v_reuseFailAlloc_3739_, 8, v_pendingHead_3726_);
lean_ctor_set_uint8(v_reuseFailAlloc_3739_, sizeof(void*)*9, v_requiresData_3724_);
v___x_3734_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
lean_ctor_set_uint8(v___x_3734_, sizeof(void*)*9 + 1, v___x_3732_);
v___x_3735_ = lean_box(v___x_3732_);
v___x_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3736_);
v___x_3738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3737_);
return v___x_3738_;
}
}
}
default: 
{
uint8_t v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
lean_dec_ref(v_config_3366_);
lean_dec(v_handler_3365_);
lean_dec_ref(v_inst_3364_);
lean_dec_ref(v_inst_3363_);
v___x_3741_ = 1;
v___x_3742_ = lean_box(v___x_3741_);
v___x_3743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3743_, 0, v_state_3368_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
v___x_3744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3743_);
v___x_3745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
return v___x_3745_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object* v_inst_3746_, lean_object* v_inst_3747_, lean_object* v_handler_3748_, lean_object* v_config_3749_, lean_object* v_event_3750_, lean_object* v_state_3751_, lean_object* v___y_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3746_, v_inst_3747_, v_handler_3748_, v_config_3749_, v_event_3750_, v_state_3751_);
return v_res_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object* v_00_u03c3_3754_, lean_object* v_00_u03b2_3755_, lean_object* v_inst_3756_, lean_object* v_inst_3757_, lean_object* v_handler_3758_, lean_object* v_config_3759_, lean_object* v_event_3760_, lean_object* v_state_3761_){
_start:
{
lean_object* v___x_3763_; 
v___x_3763_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3756_, v_inst_3757_, v_handler_3758_, v_config_3759_, v_event_3760_, v_state_3761_);
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object* v_00_u03c3_3764_, lean_object* v_00_u03b2_3765_, lean_object* v_inst_3766_, lean_object* v_inst_3767_, lean_object* v_handler_3768_, lean_object* v_config_3769_, lean_object* v_event_3770_, lean_object* v_state_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(v_00_u03c3_3764_, v_00_u03b2_3765_, v_inst_3766_, v_inst_3767_, v_handler_3768_, v_config_3769_, v_event_3770_, v_state_3771_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object* v_expectData_3774_, lean_object* v_respStream_3775_, lean_object* v_currentTimeout_3776_, lean_object* v_keepAliveTimeout_3777_, lean_object* v_headerTimeout_3778_, lean_object* v_connectionContext_3779_, uint8_t v_handlerDispatched_3780_, lean_object* v_response_3781_, lean_object* v_socket_3782_, uint8_t v_requiresData_3783_, uint8_t v_sentMessage_3784_, lean_object* v_reader_3785_, uint8_t v_requestBodyInterested_3786_, lean_object* v_requestBody_3787_){
_start:
{
lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3796_; uint8_t v___y_3802_; uint8_t v___y_3805_; uint8_t v___y_3806_; uint8_t v___y_3808_; uint8_t v___y_3809_; uint8_t v___y_3810_; uint8_t v___y_3812_; uint8_t v___y_3813_; uint8_t v___y_3816_; 
if (v_handlerDispatched_3780_ == 0)
{
uint8_t v___x_3819_; 
v___x_3819_ = 1;
v___y_3816_ = v___x_3819_;
goto v___jp_3815_;
}
else
{
uint8_t v___x_3820_; 
v___x_3820_ = 0;
v___y_3816_ = v___x_3820_;
goto v___jp_3815_;
}
v___jp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3792_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3792_, 0, v___y_3790_);
lean_ctor_set(v___x_3792_, 1, v_expectData_3774_);
lean_ctor_set(v___x_3792_, 2, v___y_3791_);
lean_ctor_set(v___x_3792_, 3, v_respStream_3775_);
lean_ctor_set(v___x_3792_, 4, v_requestBody_3787_);
lean_ctor_set(v___x_3792_, 5, v_currentTimeout_3776_);
lean_ctor_set(v___x_3792_, 6, v_keepAliveTimeout_3777_);
lean_ctor_set(v___x_3792_, 7, v_headerTimeout_3778_);
lean_ctor_set(v___x_3792_, 8, v_connectionContext_3779_);
v___x_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
v___x_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3793_);
return v___x_3794_;
}
v___jp_3795_:
{
if (v_handlerDispatched_3780_ == 0)
{
lean_object* v___x_3797_; 
lean_dec_ref(v_response_3781_);
v___x_3797_ = lean_box(0);
v___y_3790_ = v___y_3796_;
v___y_3791_ = v___x_3797_;
goto v___jp_3789_;
}
else
{
lean_object* v___x_3798_; 
v___x_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3798_, 0, v_response_3781_);
v___y_3790_ = v___y_3796_;
v___y_3791_ = v___x_3798_;
goto v___jp_3789_;
}
}
v___jp_3799_:
{
lean_object* v___x_3800_; 
v___x_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3800_, 0, v_socket_3782_);
v___y_3796_ = v___x_3800_;
goto v___jp_3795_;
}
v___jp_3801_:
{
if (v_requiresData_3783_ == 0)
{
if (v___y_3802_ == 0)
{
lean_object* v___x_3803_; 
lean_dec(v_socket_3782_);
v___x_3803_ = lean_box(0);
v___y_3796_ = v___x_3803_;
goto v___jp_3795_;
}
else
{
goto v___jp_3799_;
}
}
else
{
goto v___jp_3799_;
}
}
v___jp_3804_:
{
if (v___y_3805_ == 0)
{
v___y_3802_ = v___y_3806_;
goto v___jp_3801_;
}
else
{
v___y_3802_ = v___y_3805_;
goto v___jp_3801_;
}
}
v___jp_3807_:
{
if (v___y_3808_ == 0)
{
v___y_3805_ = v___y_3809_;
v___y_3806_ = v___y_3810_;
goto v___jp_3804_;
}
else
{
v___y_3805_ = v___y_3809_;
v___y_3806_ = v___y_3808_;
goto v___jp_3804_;
}
}
v___jp_3811_:
{
if (v_sentMessage_3784_ == 0)
{
lean_object* v_state_3814_; 
v_state_3814_ = lean_ctor_get(v_reader_3785_, 0);
if (lean_obj_tag(v_state_3814_) == 2)
{
v___y_3808_ = v___y_3813_;
v___y_3809_ = v___y_3812_;
v___y_3810_ = v_requestBodyInterested_3786_;
goto v___jp_3807_;
}
else
{
v___y_3808_ = v___y_3813_;
v___y_3809_ = v___y_3812_;
v___y_3810_ = v_sentMessage_3784_;
goto v___jp_3807_;
}
}
else
{
v___y_3808_ = v___y_3813_;
v___y_3809_ = v___y_3812_;
v___y_3810_ = v_sentMessage_3784_;
goto v___jp_3807_;
}
}
v___jp_3815_:
{
if (lean_obj_tag(v_respStream_3775_) == 0)
{
uint8_t v___x_3817_; 
v___x_3817_ = 0;
v___y_3812_ = v___y_3816_;
v___y_3813_ = v___x_3817_;
goto v___jp_3811_;
}
else
{
uint8_t v___x_3818_; 
v___x_3818_ = 1;
v___y_3812_ = v___y_3816_;
v___y_3813_ = v___x_3818_;
goto v___jp_3811_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object* v_expectData_3821_, lean_object* v_respStream_3822_, lean_object* v_currentTimeout_3823_, lean_object* v_keepAliveTimeout_3824_, lean_object* v_headerTimeout_3825_, lean_object* v_connectionContext_3826_, lean_object* v_handlerDispatched_3827_, lean_object* v_response_3828_, lean_object* v_socket_3829_, lean_object* v_requiresData_3830_, lean_object* v_sentMessage_3831_, lean_object* v_reader_3832_, lean_object* v_requestBodyInterested_3833_, lean_object* v_requestBody_3834_, lean_object* v___y_3835_){
_start:
{
uint8_t v_handlerDispatched_boxed_3836_; uint8_t v_requiresData_boxed_3837_; uint8_t v_sentMessage_boxed_3838_; uint8_t v_requestBodyInterested_boxed_3839_; lean_object* v_res_3840_; 
v_handlerDispatched_boxed_3836_ = lean_unbox(v_handlerDispatched_3827_);
v_requiresData_boxed_3837_ = lean_unbox(v_requiresData_3830_);
v_sentMessage_boxed_3838_ = lean_unbox(v_sentMessage_3831_);
v_requestBodyInterested_boxed_3839_ = lean_unbox(v_requestBodyInterested_3833_);
v_res_3840_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(v_expectData_3821_, v_respStream_3822_, v_currentTimeout_3823_, v_keepAliveTimeout_3824_, v_headerTimeout_3825_, v_connectionContext_3826_, v_handlerDispatched_boxed_3836_, v_response_3828_, v_socket_3829_, v_requiresData_boxed_3837_, v_sentMessage_boxed_3838_, v_reader_3832_, v_requestBodyInterested_boxed_3839_, v_requestBody_3834_);
lean_dec_ref(v_reader_3832_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object* v___f_3841_, lean_object* v_x_3842_){
_start:
{
if (lean_obj_tag(v_x_3842_) == 0)
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3852_; 
lean_dec_ref(v___f_3841_);
v_a_3844_ = lean_ctor_get(v_x_3842_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_x_3842_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3846_ = v_x_3842_;
v_isShared_3847_ = v_isSharedCheck_3852_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v_x_3842_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3852_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3849_; 
if (v_isShared_3847_ == 0)
{
v___x_3849_ = v___x_3846_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3844_);
v___x_3849_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
lean_object* v___x_3850_; 
v___x_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3849_);
return v___x_3850_;
}
}
}
else
{
lean_object* v_a_3853_; lean_object* v___x_3854_; 
v_a_3853_ = lean_ctor_get(v_x_3842_, 0);
lean_inc(v_a_3853_);
lean_dec_ref_known(v_x_3842_, 1);
v___x_3854_ = lean_apply_2(v___f_3841_, v_a_3853_, lean_box(0));
return v___x_3854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object* v___f_3855_, lean_object* v_x_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(v___f_3855_, v_x_3856_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object* v_expectData_3863_, lean_object* v_respStream_3864_, lean_object* v_currentTimeout_3865_, lean_object* v_keepAliveTimeout_3866_, lean_object* v_headerTimeout_3867_, lean_object* v_connectionContext_3868_, uint8_t v_handlerDispatched_3869_, lean_object* v_response_3870_, lean_object* v_socket_3871_, uint8_t v_requiresData_3872_, uint8_t v_sentMessage_3873_, lean_object* v_reader_3874_, uint8_t v_pullBodyStalled_3875_, uint8_t v_requestBodyOpen_3876_, lean_object* v_requestStream_3877_, uint8_t v_requestBodyInterested_3878_){
_start:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___f_3884_; lean_object* v___f_3885_; uint8_t v___y_3887_; 
v___x_3880_ = lean_box(v_handlerDispatched_3869_);
v___x_3881_ = lean_box(v_requiresData_3872_);
v___x_3882_ = lean_box(v_sentMessage_3873_);
v___x_3883_ = lean_box(v_requestBodyInterested_3878_);
lean_inc_ref(v_reader_3874_);
v___f_3884_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed), 15, 13);
lean_closure_set(v___f_3884_, 0, v_expectData_3863_);
lean_closure_set(v___f_3884_, 1, v_respStream_3864_);
lean_closure_set(v___f_3884_, 2, v_currentTimeout_3865_);
lean_closure_set(v___f_3884_, 3, v_keepAliveTimeout_3866_);
lean_closure_set(v___f_3884_, 4, v_headerTimeout_3867_);
lean_closure_set(v___f_3884_, 5, v_connectionContext_3868_);
lean_closure_set(v___f_3884_, 6, v___x_3880_);
lean_closure_set(v___f_3884_, 7, v_response_3870_);
lean_closure_set(v___f_3884_, 8, v_socket_3871_);
lean_closure_set(v___f_3884_, 9, v___x_3881_);
lean_closure_set(v___f_3884_, 10, v___x_3882_);
lean_closure_set(v___f_3884_, 11, v_reader_3874_);
lean_closure_set(v___f_3884_, 12, v___x_3883_);
v___f_3885_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3885_, 0, v___f_3884_);
if (v_sentMessage_3873_ == 0)
{
lean_object* v_state_3891_; 
v_state_3891_ = lean_ctor_get(v_reader_3874_, 0);
lean_inc(v_state_3891_);
lean_dec_ref(v_reader_3874_);
if (lean_obj_tag(v_state_3891_) == 2)
{
lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3902_; 
v_isSharedCheck_3902_ = !lean_is_exclusive(v_state_3891_);
if (v_isSharedCheck_3902_ == 0)
{
lean_object* v_unused_3903_; 
v_unused_3903_ = lean_ctor_get(v_state_3891_, 0);
lean_dec(v_unused_3903_);
v___x_3893_ = v_state_3891_;
v_isShared_3894_ = v_isSharedCheck_3902_;
goto v_resetjp_3892_;
}
else
{
lean_dec(v_state_3891_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3902_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
if (v_pullBodyStalled_3875_ == 0)
{
if (v_requestBodyOpen_3876_ == 0)
{
lean_del_object(v___x_3893_);
lean_dec_ref(v_requestStream_3877_);
v___y_3887_ = v_requestBodyOpen_3876_;
goto v___jp_3886_;
}
else
{
lean_object* v___x_3896_; 
if (v_isShared_3894_ == 0)
{
lean_ctor_set_tag(v___x_3893_, 1);
lean_ctor_set(v___x_3893_, 0, v_requestStream_3877_);
v___x_3896_ = v___x_3893_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_requestStream_3877_);
v___x_3896_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3897_ = lean_unsigned_to_nat(0u);
v___x_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3896_);
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
v___x_3900_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3897_, v_pullBodyStalled_3875_, v___x_3899_, v___f_3885_);
return v___x_3900_;
}
}
}
else
{
lean_del_object(v___x_3893_);
lean_dec_ref(v_requestStream_3877_);
v___y_3887_ = v_sentMessage_3873_;
goto v___jp_3886_;
}
}
}
else
{
lean_dec(v_state_3891_);
lean_dec_ref(v_requestStream_3877_);
v___y_3887_ = v_sentMessage_3873_;
goto v___jp_3886_;
}
}
else
{
uint8_t v___x_3904_; 
lean_dec_ref(v_requestStream_3877_);
lean_dec_ref(v_reader_3874_);
v___x_3904_ = 0;
v___y_3887_ = v___x_3904_;
goto v___jp_3886_;
}
v___jp_3886_:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3889_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1));
v___x_3890_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3888_, v___y_3887_, v___x_3889_, v___f_3885_);
return v___x_3890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_expectData_3905_ = _args[0];
lean_object* v_respStream_3906_ = _args[1];
lean_object* v_currentTimeout_3907_ = _args[2];
lean_object* v_keepAliveTimeout_3908_ = _args[3];
lean_object* v_headerTimeout_3909_ = _args[4];
lean_object* v_connectionContext_3910_ = _args[5];
lean_object* v_handlerDispatched_3911_ = _args[6];
lean_object* v_response_3912_ = _args[7];
lean_object* v_socket_3913_ = _args[8];
lean_object* v_requiresData_3914_ = _args[9];
lean_object* v_sentMessage_3915_ = _args[10];
lean_object* v_reader_3916_ = _args[11];
lean_object* v_pullBodyStalled_3917_ = _args[12];
lean_object* v_requestBodyOpen_3918_ = _args[13];
lean_object* v_requestStream_3919_ = _args[14];
lean_object* v_requestBodyInterested_3920_ = _args[15];
lean_object* v___y_3921_ = _args[16];
_start:
{
uint8_t v_handlerDispatched_boxed_3922_; uint8_t v_requiresData_boxed_3923_; uint8_t v_sentMessage_boxed_3924_; uint8_t v_pullBodyStalled_boxed_3925_; uint8_t v_requestBodyOpen_boxed_3926_; uint8_t v_requestBodyInterested_boxed_3927_; lean_object* v_res_3928_; 
v_handlerDispatched_boxed_3922_ = lean_unbox(v_handlerDispatched_3911_);
v_requiresData_boxed_3923_ = lean_unbox(v_requiresData_3914_);
v_sentMessage_boxed_3924_ = lean_unbox(v_sentMessage_3915_);
v_pullBodyStalled_boxed_3925_ = lean_unbox(v_pullBodyStalled_3917_);
v_requestBodyOpen_boxed_3926_ = lean_unbox(v_requestBodyOpen_3918_);
v_requestBodyInterested_boxed_3927_ = lean_unbox(v_requestBodyInterested_3920_);
v_res_3928_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(v_expectData_3905_, v_respStream_3906_, v_currentTimeout_3907_, v_keepAliveTimeout_3908_, v_headerTimeout_3909_, v_connectionContext_3910_, v_handlerDispatched_boxed_3922_, v_response_3912_, v_socket_3913_, v_requiresData_boxed_3923_, v_sentMessage_boxed_3924_, v_reader_3916_, v_pullBodyStalled_boxed_3925_, v_requestBodyOpen_boxed_3926_, v_requestStream_3919_, v_requestBodyInterested_boxed_3927_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object* v___f_3929_, lean_object* v_x_3930_){
_start:
{
if (lean_obj_tag(v_x_3930_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3940_; 
lean_dec_ref(v___f_3929_);
v_a_3932_ = lean_ctor_get(v_x_3930_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3934_ = v_x_3930_;
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v_x_3930_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
lean_object* v___x_3938_; 
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
return v___x_3938_;
}
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3942_; 
v_a_3941_ = lean_ctor_get(v_x_3930_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v_x_3930_, 1);
v___x_3942_ = lean_apply_2(v___f_3929_, v_a_3941_, lean_box(0));
return v___x_3942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object* v___f_3943_, lean_object* v_x_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(v___f_3943_, v_x_3944_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object* v_expectData_3947_, lean_object* v_respStream_3948_, lean_object* v_currentTimeout_3949_, lean_object* v_keepAliveTimeout_3950_, lean_object* v_headerTimeout_3951_, lean_object* v_connectionContext_3952_, uint8_t v_handlerDispatched_3953_, lean_object* v_response_3954_, lean_object* v_socket_3955_, uint8_t v_requiresData_3956_, uint8_t v_sentMessage_3957_, lean_object* v_reader_3958_, uint8_t v_pullBodyStalled_3959_, lean_object* v_requestStream_3960_, uint8_t v_requestBodyOpen_3961_){
_start:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___f_3968_; lean_object* v___f_3969_; uint8_t v___y_3971_; 
v___x_3963_ = lean_box(v_handlerDispatched_3953_);
v___x_3964_ = lean_box(v_requiresData_3956_);
v___x_3965_ = lean_box(v_sentMessage_3957_);
v___x_3966_ = lean_box(v_pullBodyStalled_3959_);
v___x_3967_ = lean_box(v_requestBodyOpen_3961_);
lean_inc_ref(v_requestStream_3960_);
lean_inc_ref(v_reader_3958_);
v___f_3968_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed), 17, 15);
lean_closure_set(v___f_3968_, 0, v_expectData_3947_);
lean_closure_set(v___f_3968_, 1, v_respStream_3948_);
lean_closure_set(v___f_3968_, 2, v_currentTimeout_3949_);
lean_closure_set(v___f_3968_, 3, v_keepAliveTimeout_3950_);
lean_closure_set(v___f_3968_, 4, v_headerTimeout_3951_);
lean_closure_set(v___f_3968_, 5, v_connectionContext_3952_);
lean_closure_set(v___f_3968_, 6, v___x_3963_);
lean_closure_set(v___f_3968_, 7, v_response_3954_);
lean_closure_set(v___f_3968_, 8, v_socket_3955_);
lean_closure_set(v___f_3968_, 9, v___x_3964_);
lean_closure_set(v___f_3968_, 10, v___x_3965_);
lean_closure_set(v___f_3968_, 11, v_reader_3958_);
lean_closure_set(v___f_3968_, 12, v___x_3966_);
lean_closure_set(v___f_3968_, 13, v___x_3967_);
lean_closure_set(v___f_3968_, 14, v_requestStream_3960_);
v___f_3969_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3969_, 0, v___f_3968_);
if (v_sentMessage_3957_ == 0)
{
lean_object* v_state_3977_; 
v_state_3977_ = lean_ctor_get(v_reader_3958_, 0);
lean_inc(v_state_3977_);
lean_dec_ref(v_reader_3958_);
if (lean_obj_tag(v_state_3977_) == 2)
{
lean_dec_ref_known(v_state_3977_, 1);
if (v_requestBodyOpen_3961_ == 0)
{
lean_dec_ref(v_requestStream_3960_);
v___y_3971_ = v_requestBodyOpen_3961_;
goto v___jp_3970_;
}
else
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v___x_3978_ = lean_unsigned_to_nat(0u);
v___x_3979_ = l_Std_Http_Body_Stream_hasInterest(v_requestStream_3960_);
v___x_3980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3978_, v_sentMessage_3957_, v___x_3979_, v___f_3969_);
return v___x_3980_;
}
}
else
{
lean_dec(v_state_3977_);
lean_dec_ref(v_requestStream_3960_);
v___y_3971_ = v_sentMessage_3957_;
goto v___jp_3970_;
}
}
else
{
uint8_t v___x_3981_; 
lean_dec_ref(v_requestStream_3960_);
lean_dec_ref(v_reader_3958_);
v___x_3981_ = 0;
v___y_3971_ = v___x_3981_;
goto v___jp_3970_;
}
v___jp_3970_:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3972_ = lean_unsigned_to_nat(0u);
v___x_3973_ = lean_box(v___y_3971_);
v___x_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
v___x_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3974_);
v___x_3976_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3972_, v___y_3971_, v___x_3975_, v___f_3969_);
return v___x_3976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object* v_expectData_3982_, lean_object* v_respStream_3983_, lean_object* v_currentTimeout_3984_, lean_object* v_keepAliveTimeout_3985_, lean_object* v_headerTimeout_3986_, lean_object* v_connectionContext_3987_, lean_object* v_handlerDispatched_3988_, lean_object* v_response_3989_, lean_object* v_socket_3990_, lean_object* v_requiresData_3991_, lean_object* v_sentMessage_3992_, lean_object* v_reader_3993_, lean_object* v_pullBodyStalled_3994_, lean_object* v_requestStream_3995_, lean_object* v_requestBodyOpen_3996_, lean_object* v___y_3997_){
_start:
{
uint8_t v_handlerDispatched_boxed_3998_; uint8_t v_requiresData_boxed_3999_; uint8_t v_sentMessage_boxed_4000_; uint8_t v_pullBodyStalled_boxed_4001_; uint8_t v_requestBodyOpen_boxed_4002_; lean_object* v_res_4003_; 
v_handlerDispatched_boxed_3998_ = lean_unbox(v_handlerDispatched_3988_);
v_requiresData_boxed_3999_ = lean_unbox(v_requiresData_3991_);
v_sentMessage_boxed_4000_ = lean_unbox(v_sentMessage_3992_);
v_pullBodyStalled_boxed_4001_ = lean_unbox(v_pullBodyStalled_3994_);
v_requestBodyOpen_boxed_4002_ = lean_unbox(v_requestBodyOpen_3996_);
v_res_4003_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(v_expectData_3982_, v_respStream_3983_, v_currentTimeout_3984_, v_keepAliveTimeout_3985_, v_headerTimeout_3986_, v_connectionContext_3987_, v_handlerDispatched_boxed_3998_, v_response_3989_, v_socket_3990_, v_requiresData_boxed_3999_, v_sentMessage_boxed_4000_, v_reader_3993_, v_pullBodyStalled_boxed_4001_, v_requestStream_3995_, v_requestBodyOpen_boxed_4002_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t v_sentMessage_4004_, lean_object* v___f_4005_, uint8_t v___x_4006_, lean_object* v_x_4007_){
_start:
{
uint8_t v___y_4010_; 
if (lean_obj_tag(v_x_4007_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4024_; 
lean_dec_ref(v___f_4005_);
v_a_4016_ = lean_ctor_get(v_x_4007_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v_x_4007_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4018_ = v_x_4007_;
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v_x_4007_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4021_);
return v___x_4022_;
}
}
}
else
{
lean_object* v_a_4025_; uint8_t v___x_4026_; 
v_a_4025_ = lean_ctor_get(v_x_4007_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v_x_4007_, 1);
v___x_4026_ = lean_unbox(v_a_4025_);
lean_dec(v_a_4025_);
if (v___x_4026_ == 0)
{
v___y_4010_ = v___x_4006_;
goto v___jp_4009_;
}
else
{
v___y_4010_ = v_sentMessage_4004_;
goto v___jp_4009_;
}
}
v___jp_4009_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4011_ = lean_unsigned_to_nat(0u);
v___x_4012_ = lean_box(v___y_4010_);
v___x_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
v___x_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
v___x_4015_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4011_, v_sentMessage_4004_, v___x_4014_, v___f_4005_);
return v___x_4015_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object* v_sentMessage_4027_, lean_object* v___f_4028_, lean_object* v___x_4029_, lean_object* v_x_4030_, lean_object* v___y_4031_){
_start:
{
uint8_t v_sentMessage_boxed_4032_; uint8_t v___x_2541__boxed_4033_; lean_object* v_res_4034_; 
v_sentMessage_boxed_4032_ = lean_unbox(v_sentMessage_4027_);
v___x_2541__boxed_4033_ = lean_unbox(v___x_4029_);
v_res_4034_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(v_sentMessage_boxed_4032_, v___f_4028_, v___x_2541__boxed_4033_, v_x_4030_);
return v_res_4034_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0(void){
_start:
{
lean_object* v___f_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___f_4035_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___x_4036_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4037_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___x_4038_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4038_, 0, lean_box(0));
lean_closure_set(v___x_4038_, 1, lean_box(0));
lean_closure_set(v___x_4038_, 2, v___x_4037_);
lean_closure_set(v___x_4038_, 3, lean_box(0));
lean_closure_set(v___x_4038_, 4, lean_box(0));
lean_closure_set(v___x_4038_, 5, v___x_4036_);
lean_closure_set(v___x_4038_, 6, v___f_4035_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object* v_socket_4039_, lean_object* v_connectionContext_4040_, lean_object* v_state_4041_){
_start:
{
lean_object* v_machine_4043_; lean_object* v_writer_4044_; lean_object* v_requestStream_4045_; lean_object* v_keepAliveTimeout_4046_; lean_object* v_currentTimeout_4047_; lean_object* v_headerTimeout_4048_; lean_object* v_response_4049_; lean_object* v_respStream_4050_; uint8_t v_requiresData_4051_; lean_object* v_expectData_4052_; uint8_t v_handlerDispatched_4053_; lean_object* v_reader_4054_; uint8_t v_pullBodyStalled_4055_; uint8_t v_sentMessage_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___f_4061_; lean_object* v___f_4062_; uint8_t v___y_4064_; 
v_machine_4043_ = lean_ctor_get(v_state_4041_, 0);
lean_inc_ref(v_machine_4043_);
v_writer_4044_ = lean_ctor_get(v_machine_4043_, 1);
lean_inc_ref(v_writer_4044_);
v_requestStream_4045_ = lean_ctor_get(v_state_4041_, 1);
lean_inc_ref_n(v_requestStream_4045_, 2);
v_keepAliveTimeout_4046_ = lean_ctor_get(v_state_4041_, 2);
lean_inc(v_keepAliveTimeout_4046_);
v_currentTimeout_4047_ = lean_ctor_get(v_state_4041_, 3);
lean_inc(v_currentTimeout_4047_);
v_headerTimeout_4048_ = lean_ctor_get(v_state_4041_, 4);
lean_inc(v_headerTimeout_4048_);
v_response_4049_ = lean_ctor_get(v_state_4041_, 5);
lean_inc_ref(v_response_4049_);
v_respStream_4050_ = lean_ctor_get(v_state_4041_, 6);
lean_inc(v_respStream_4050_);
v_requiresData_4051_ = lean_ctor_get_uint8(v_state_4041_, sizeof(void*)*9);
v_expectData_4052_ = lean_ctor_get(v_state_4041_, 7);
lean_inc(v_expectData_4052_);
v_handlerDispatched_4053_ = lean_ctor_get_uint8(v_state_4041_, sizeof(void*)*9 + 1);
lean_dec_ref(v_state_4041_);
v_reader_4054_ = lean_ctor_get(v_machine_4043_, 0);
lean_inc_ref_n(v_reader_4054_, 2);
v_pullBodyStalled_4055_ = lean_ctor_get_uint8(v_machine_4043_, sizeof(void*)*6 + 2);
lean_dec_ref(v_machine_4043_);
v_sentMessage_4056_ = lean_ctor_get_uint8(v_writer_4044_, sizeof(void*)*6);
lean_dec_ref(v_writer_4044_);
v___x_4057_ = lean_box(v_handlerDispatched_4053_);
v___x_4058_ = lean_box(v_requiresData_4051_);
v___x_4059_ = lean_box(v_sentMessage_4056_);
v___x_4060_ = lean_box(v_pullBodyStalled_4055_);
v___f_4061_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed), 16, 14);
lean_closure_set(v___f_4061_, 0, v_expectData_4052_);
lean_closure_set(v___f_4061_, 1, v_respStream_4050_);
lean_closure_set(v___f_4061_, 2, v_currentTimeout_4047_);
lean_closure_set(v___f_4061_, 3, v_keepAliveTimeout_4046_);
lean_closure_set(v___f_4061_, 4, v_headerTimeout_4048_);
lean_closure_set(v___f_4061_, 5, v_connectionContext_4040_);
lean_closure_set(v___f_4061_, 6, v___x_4057_);
lean_closure_set(v___f_4061_, 7, v_response_4049_);
lean_closure_set(v___f_4061_, 8, v_socket_4039_);
lean_closure_set(v___f_4061_, 9, v___x_4058_);
lean_closure_set(v___f_4061_, 10, v___x_4059_);
lean_closure_set(v___f_4061_, 11, v_reader_4054_);
lean_closure_set(v___f_4061_, 12, v___x_4060_);
lean_closure_set(v___f_4061_, 13, v_requestStream_4045_);
v___f_4062_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4062_, 0, v___f_4061_);
if (v_sentMessage_4056_ == 0)
{
lean_object* v_state_4070_; 
v_state_4070_ = lean_ctor_get(v_reader_4054_, 0);
lean_inc(v_state_4070_);
lean_dec_ref(v_reader_4054_);
if (lean_obj_tag(v_state_4070_) == 2)
{
uint8_t v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___f_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___f_4077_; lean_object* v___f_4078_; lean_object* v___x_4079_; lean_object* v___x_2071__overap_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
lean_dec_ref_known(v_state_4070_, 1);
v___x_4071_ = 1;
v___x_4072_ = lean_box(v_sentMessage_4056_);
v___x_4073_ = lean_box(v___x_4071_);
v___f_4074_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4074_, 0, v___x_4072_);
lean_closure_set(v___f_4074_, 1, v___f_4062_);
lean_closure_set(v___f_4074_, 2, v___x_4073_);
v___x_4075_ = lean_unsigned_to_nat(0u);
v___x_4076_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4077_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4078_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4079_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0);
v___x_2071__overap_4080_ = l_Std_Mutex_atomically___redArg(v___x_4076_, v___f_4077_, v___f_4078_, v_requestStream_4045_, v___x_4079_);
v___x_4081_ = lean_apply_1(v___x_2071__overap_4080_, lean_box(0));
v___x_4082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4075_, v_sentMessage_4056_, v___x_4081_, v___f_4074_);
return v___x_4082_;
}
else
{
lean_dec(v_state_4070_);
lean_dec_ref(v_requestStream_4045_);
v___y_4064_ = v_sentMessage_4056_;
goto v___jp_4063_;
}
}
else
{
uint8_t v___x_4083_; 
lean_dec_ref(v_reader_4054_);
lean_dec_ref(v_requestStream_4045_);
v___x_4083_ = 0;
v___y_4064_ = v___x_4083_;
goto v___jp_4063_;
}
v___jp_4063_:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4065_ = lean_unsigned_to_nat(0u);
v___x_4066_ = lean_box(v___y_4064_);
v___x_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4066_);
v___x_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4067_);
v___x_4069_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4065_, v___y_4064_, v___x_4068_, v___f_4062_);
return v___x_4069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object* v_socket_4084_, lean_object* v_connectionContext_4085_, lean_object* v_state_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4084_, v_connectionContext_4085_, v_state_4086_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object* v_00_u03b1_4089_, lean_object* v_00_u03b2_4090_, lean_object* v_inst_4091_, lean_object* v_socket_4092_, lean_object* v_connectionContext_4093_, lean_object* v_state_4094_){
_start:
{
lean_object* v___x_4096_; 
v___x_4096_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4092_, v_connectionContext_4093_, v_state_4094_);
return v___x_4096_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object* v_00_u03b1_4097_, lean_object* v_00_u03b2_4098_, lean_object* v_inst_4099_, lean_object* v_socket_4100_, lean_object* v_connectionContext_4101_, lean_object* v_state_4102_, lean_object* v___y_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(v_00_u03b1_4097_, v_00_u03b2_4098_, v_inst_4099_, v_socket_4100_, v_connectionContext_4101_, v_state_4102_);
lean_dec_ref(v_inst_4099_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object* v_x_4105_){
_start:
{
if (lean_obj_tag(v_x_4105_) == 0)
{
lean_object* v_a_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4115_; 
v_a_4107_ = lean_ctor_get(v_x_4105_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v_x_4105_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4109_ = v_x_4105_;
v_isShared_4110_ = v_isSharedCheck_4115_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_a_4107_);
lean_dec(v_x_4105_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4115_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v___x_4112_; 
if (v_isShared_4110_ == 0)
{
v___x_4112_ = v___x_4109_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4107_);
v___x_4112_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
lean_object* v___x_4113_; 
v___x_4113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4112_);
return v___x_4113_;
}
}
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4125_; 
v_a_4116_ = lean_ctor_get(v_x_4105_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v_x_4105_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4118_ = v_x_4105_;
v_isShared_4119_ = v_isSharedCheck_4125_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v_x_4105_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4125_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4120_; lean_object* v___x_4122_; 
v___x_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4120_, 0, v_a_4116_);
if (v_isShared_4119_ == 0)
{
lean_ctor_set(v___x_4118_, 0, v___x_4120_);
v___x_4122_ = v___x_4118_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v___x_4120_);
v___x_4122_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
lean_object* v___x_4123_; 
v___x_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4122_);
return v___x_4123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object* v_x_4126_, lean_object* v___y_4127_){
_start:
{
lean_object* v_res_4128_; 
v_res_4128_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(v_x_4126_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object* v_x_4133_){
_start:
{
if (lean_obj_tag(v_x_4133_) == 0)
{
lean_object* v_a_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4143_; 
v_a_4135_ = lean_ctor_get(v_x_4133_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v_x_4133_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4137_ = v_x_4133_;
v_isShared_4138_ = v_isSharedCheck_4143_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_a_4135_);
lean_dec(v_x_4133_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4143_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4140_; 
if (v_isShared_4138_ == 0)
{
v___x_4140_ = v___x_4137_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_a_4135_);
v___x_4140_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
lean_object* v___x_4141_; 
v___x_4141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4141_, 0, v___x_4140_);
return v___x_4141_;
}
}
}
else
{
lean_object* v___x_4144_; 
lean_dec_ref_known(v_x_4133_, 1);
v___x_4144_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1));
return v___x_4144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object* v_x_4145_, lean_object* v___y_4146_){
_start:
{
lean_object* v_res_4147_; 
v_res_4147_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(v_x_4145_);
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object* v_onFailure_4148_, lean_object* v_handler_4149_, lean_object* v___f_4150_, lean_object* v_x_4151_){
_start:
{
if (lean_obj_tag(v_x_4151_) == 0)
{
lean_object* v_a_4153_; lean_object* v___x_4154_; uint8_t v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v_a_4153_ = lean_ctor_get(v_x_4151_, 0);
lean_inc(v_a_4153_);
lean_dec_ref_known(v_x_4151_, 1);
v___x_4154_ = lean_unsigned_to_nat(0u);
v___x_4155_ = 0;
v___x_4156_ = lean_apply_3(v_onFailure_4148_, v_handler_4149_, v_a_4153_, lean_box(0));
v___x_4157_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4154_, v___x_4155_, v___x_4156_, v___f_4150_);
return v___x_4157_;
}
else
{
lean_object* v___x_4158_; 
lean_dec_ref(v___f_4150_);
lean_dec(v_handler_4149_);
lean_dec_ref(v_onFailure_4148_);
v___x_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4158_, 0, v_x_4151_);
return v___x_4158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object* v_onFailure_4159_, lean_object* v_handler_4160_, lean_object* v___f_4161_, lean_object* v_x_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(v_onFailure_4159_, v_handler_4160_, v___f_4161_, v_x_4162_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object* v_x_4165_){
_start:
{
if (lean_obj_tag(v_x_4165_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4175_; 
v_a_4167_ = lean_ctor_get(v_x_4165_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v_x_4165_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4169_ = v_x_4165_;
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v_x_4165_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
lean_object* v___x_4173_; 
v___x_4173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4172_);
return v___x_4173_;
}
}
}
else
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4194_; 
v_a_4176_ = lean_ctor_get(v_x_4165_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v_x_4165_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4178_ = v_x_4165_;
v_isShared_4179_ = v_isSharedCheck_4194_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v_x_4165_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4194_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v_snd_4180_; uint8_t v___x_4181_; 
v_snd_4180_ = lean_ctor_get(v_a_4176_, 1);
v___x_4181_ = lean_unbox(v_snd_4180_);
if (v___x_4181_ == 0)
{
lean_object* v_fst_4182_; lean_object* v___x_4183_; lean_object* v___x_4185_; 
v_fst_4182_ = lean_ctor_get(v_a_4176_, 0);
lean_inc(v_fst_4182_);
lean_dec(v_a_4176_);
v___x_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_fst_4182_);
if (v_isShared_4179_ == 0)
{
lean_ctor_set(v___x_4178_, 0, v___x_4183_);
v___x_4185_ = v___x_4178_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v___x_4183_);
v___x_4185_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
lean_object* v___x_4186_; 
v___x_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4186_, 0, v___x_4185_);
return v___x_4186_;
}
}
else
{
lean_object* v_fst_4188_; lean_object* v___x_4189_; lean_object* v___x_4191_; 
v_fst_4188_ = lean_ctor_get(v_a_4176_, 0);
lean_inc(v_fst_4188_);
lean_dec(v_a_4176_);
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v_fst_4188_);
if (v_isShared_4179_ == 0)
{
lean_ctor_set(v___x_4178_, 0, v___x_4189_);
v___x_4191_ = v___x_4178_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v___x_4189_);
v___x_4191_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
lean_object* v___x_4192_; 
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4191_);
return v___x_4192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object* v_x_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_x_4195_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object* v_inst_4198_, lean_object* v_socket_4199_, lean_object* v_____r_4200_){
_start:
{
lean_object* v_val_4203_; lean_object* v_close_4205_; lean_object* v___x_4206_; 
v_close_4205_ = lean_ctor_get(v_inst_4198_, 3);
lean_inc_ref(v_close_4205_);
lean_dec_ref(v_inst_4198_);
v___x_4206_ = lean_apply_2(v_close_4205_, v_socket_4199_, lean_box(0));
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4214_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4209_ = v___x_4206_;
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_dec(v___x_4206_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4212_; 
if (v_isShared_4210_ == 0)
{
lean_ctor_set_tag(v___x_4209_, 1);
v___x_4212_ = v___x_4209_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4207_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
v_val_4203_ = v___x_4212_;
goto v___jp_4202_;
}
}
}
else
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
v_a_4215_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v___x_4206_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4206_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
lean_ctor_set_tag(v___x_4217_, 0);
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
v_val_4203_ = v___x_4220_;
goto v___jp_4202_;
}
}
}
v___jp_4202_:
{
lean_object* v___x_4204_; 
v___x_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4204_, 0, v_val_4203_);
return v___x_4204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object* v_inst_4223_, lean_object* v_socket_4224_, lean_object* v_____r_4225_, lean_object* v___y_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(v_inst_4223_, v_socket_4224_, v_____r_4225_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object* v___f_4228_, lean_object* v_x_4229_){
_start:
{
if (lean_obj_tag(v_x_4229_) == 0)
{
lean_object* v___x_4231_; 
lean_dec_ref(v___f_4228_);
v___x_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4231_, 0, v_x_4229_);
return v___x_4231_;
}
else
{
lean_object* v_a_4232_; lean_object* v___x_4233_; 
v_a_4232_ = lean_ctor_get(v_x_4229_, 0);
lean_inc(v_a_4232_);
lean_dec_ref_known(v_x_4229_, 1);
v___x_4233_ = lean_apply_2(v___f_4228_, v_a_4232_, lean_box(0));
return v___x_4233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object* v___f_4234_, lean_object* v_x_4235_, lean_object* v___y_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(v___f_4234_, v_x_4235_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(lean_object* v_close_4238_, lean_object* v_val_4239_, lean_object* v___f_4240_, lean_object* v___f_4241_, lean_object* v_x_4242_){
_start:
{
if (lean_obj_tag(v_x_4242_) == 0)
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4252_; 
lean_dec_ref(v___f_4241_);
lean_dec_ref(v___f_4240_);
lean_dec(v_val_4239_);
lean_dec_ref(v_close_4238_);
v_a_4244_ = lean_ctor_get(v_x_4242_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v_x_4242_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4246_ = v_x_4242_;
v_isShared_4247_ = v_isSharedCheck_4252_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v_x_4242_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4252_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4249_; 
if (v_isShared_4247_ == 0)
{
v___x_4249_ = v___x_4246_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4244_);
v___x_4249_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
lean_object* v___x_4250_; 
v___x_4250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4249_);
return v___x_4250_;
}
}
}
else
{
lean_object* v_a_4253_; uint8_t v___x_4254_; 
v_a_4253_ = lean_ctor_get(v_x_4242_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v_x_4242_, 1);
v___x_4254_ = lean_unbox(v_a_4253_);
if (v___x_4254_ == 0)
{
lean_object* v___x_4255_; lean_object* v___x_4256_; uint8_t v___x_4257_; lean_object* v___x_4258_; 
lean_dec_ref(v___f_4241_);
v___x_4255_ = lean_unsigned_to_nat(0u);
v___x_4256_ = lean_apply_2(v_close_4238_, v_val_4239_, lean_box(0));
v___x_4257_ = lean_unbox(v_a_4253_);
lean_dec(v_a_4253_);
v___x_4258_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4255_, v___x_4257_, v___x_4256_, v___f_4240_);
return v___x_4258_;
}
else
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
lean_dec(v_a_4253_);
lean_dec_ref(v___f_4240_);
lean_dec(v_val_4239_);
lean_dec_ref(v_close_4238_);
v___x_4259_ = lean_box(0);
v___x_4260_ = lean_apply_2(v___f_4241_, v___x_4259_, lean_box(0));
return v___x_4260_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object* v_close_4261_, lean_object* v_val_4262_, lean_object* v___f_4263_, lean_object* v___f_4264_, lean_object* v_x_4265_, lean_object* v___y_4266_){
_start:
{
lean_object* v_res_4267_; 
v_res_4267_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(v_close_4261_, v_val_4262_, v___f_4263_, v___f_4264_, v_x_4265_);
return v_res_4267_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object* v_respStream_4268_, lean_object* v_responseBodyInstance_4269_, lean_object* v___f_4270_, lean_object* v___f_4271_, lean_object* v_____r_4272_){
_start:
{
if (lean_obj_tag(v_respStream_4268_) == 1)
{
lean_object* v_val_4274_; lean_object* v_close_4275_; lean_object* v_isClosed_4276_; lean_object* v___f_4277_; lean_object* v___x_4278_; uint8_t v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v_val_4274_ = lean_ctor_get(v_respStream_4268_, 0);
lean_inc_n(v_val_4274_, 2);
lean_dec_ref_known(v_respStream_4268_, 1);
v_close_4275_ = lean_ctor_get(v_responseBodyInstance_4269_, 1);
lean_inc_ref(v_close_4275_);
v_isClosed_4276_ = lean_ctor_get(v_responseBodyInstance_4269_, 2);
lean_inc_ref(v_isClosed_4276_);
lean_dec_ref(v_responseBodyInstance_4269_);
v___f_4277_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_4277_, 0, v_close_4275_);
lean_closure_set(v___f_4277_, 1, v_val_4274_);
lean_closure_set(v___f_4277_, 2, v___f_4270_);
lean_closure_set(v___f_4277_, 3, v___f_4271_);
v___x_4278_ = lean_unsigned_to_nat(0u);
v___x_4279_ = 0;
v___x_4280_ = lean_apply_2(v_isClosed_4276_, v_val_4274_, lean_box(0));
v___x_4281_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4278_, v___x_4279_, v___x_4280_, v___f_4277_);
return v___x_4281_;
}
else
{
lean_object* v___x_4282_; lean_object* v___x_4283_; 
lean_dec_ref(v___f_4270_);
lean_dec_ref(v_responseBodyInstance_4269_);
lean_dec(v_respStream_4268_);
v___x_4282_ = lean_box(0);
v___x_4283_ = lean_apply_2(v___f_4271_, v___x_4282_, lean_box(0));
return v___x_4283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object* v_respStream_4284_, lean_object* v_responseBodyInstance_4285_, lean_object* v___f_4286_, lean_object* v___f_4287_, lean_object* v_____r_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(v_respStream_4284_, v_responseBodyInstance_4285_, v___f_4286_, v___f_4287_, v_____r_4288_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object* v_requestStream_4291_, lean_object* v___f_4292_, lean_object* v___f_4293_, lean_object* v_x_4294_){
_start:
{
if (lean_obj_tag(v_x_4294_) == 0)
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4304_; 
lean_dec_ref(v___f_4293_);
lean_dec_ref(v___f_4292_);
lean_dec_ref(v_requestStream_4291_);
v_a_4296_ = lean_ctor_get(v_x_4294_, 0);
v_isSharedCheck_4304_ = !lean_is_exclusive(v_x_4294_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4298_ = v_x_4294_;
v_isShared_4299_ = v_isSharedCheck_4304_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v_x_4294_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4304_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4303_; 
v_reuseFailAlloc_4303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4303_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4303_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
lean_object* v___x_4302_; 
v___x_4302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4301_);
return v___x_4302_;
}
}
}
else
{
lean_object* v_a_4305_; uint8_t v___x_4306_; 
v_a_4305_ = lean_ctor_get(v_x_4294_, 0);
lean_inc(v_a_4305_);
lean_dec_ref_known(v_x_4294_, 1);
v___x_4306_ = lean_unbox(v_a_4305_);
if (v___x_4306_ == 0)
{
lean_object* v___x_4307_; lean_object* v___x_4308_; uint8_t v___x_4309_; lean_object* v___x_4310_; 
lean_dec_ref(v___f_4293_);
v___x_4307_ = lean_unsigned_to_nat(0u);
v___x_4308_ = l_Std_Http_Body_Stream_close(v_requestStream_4291_);
v___x_4309_ = lean_unbox(v_a_4305_);
lean_dec(v_a_4305_);
v___x_4310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4307_, v___x_4309_, v___x_4308_, v___f_4292_);
return v___x_4310_;
}
else
{
lean_object* v___x_4311_; lean_object* v___x_4312_; 
lean_dec(v_a_4305_);
lean_dec_ref(v___f_4292_);
lean_dec_ref(v_requestStream_4291_);
v___x_4311_ = lean_box(0);
v___x_4312_ = lean_apply_2(v___f_4293_, v___x_4311_, lean_box(0));
return v___x_4312_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object* v_requestStream_4313_, lean_object* v___f_4314_, lean_object* v___f_4315_, lean_object* v_x_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(v_requestStream_4313_, v___f_4314_, v___f_4315_, v_x_4316_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object* v_responseBodyInstance_4319_, lean_object* v___f_4320_, lean_object* v___f_4321_, lean_object* v___f_4322_, lean_object* v_x_4323_){
_start:
{
if (lean_obj_tag(v_x_4323_) == 0)
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4333_; 
lean_dec_ref(v___f_4322_);
lean_dec_ref(v___f_4321_);
lean_dec_ref(v___f_4320_);
lean_dec_ref(v_responseBodyInstance_4319_);
v_a_4325_ = lean_ctor_get(v_x_4323_, 0);
v_isSharedCheck_4333_ = !lean_is_exclusive(v_x_4323_);
if (v_isSharedCheck_4333_ == 0)
{
v___x_4327_ = v_x_4323_;
v_isShared_4328_ = v_isSharedCheck_4333_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v_x_4323_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4333_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
lean_object* v___x_4331_; 
v___x_4331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4330_);
return v___x_4331_;
}
}
}
else
{
lean_object* v_a_4334_; lean_object* v_requestStream_4335_; lean_object* v_respStream_4336_; lean_object* v___f_4337_; lean_object* v___f_4338_; lean_object* v___f_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; lean_object* v___x_4342_; lean_object* v___f_4343_; lean_object* v___f_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4428__overap_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v_a_4334_ = lean_ctor_get(v_x_4323_, 0);
lean_inc(v_a_4334_);
lean_dec_ref_known(v_x_4323_, 1);
v_requestStream_4335_ = lean_ctor_get(v_a_4334_, 1);
lean_inc_ref_n(v_requestStream_4335_, 2);
v_respStream_4336_ = lean_ctor_get(v_a_4334_, 6);
lean_inc(v_respStream_4336_);
lean_dec(v_a_4334_);
v___f_4337_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed), 6, 4);
lean_closure_set(v___f_4337_, 0, v_respStream_4336_);
lean_closure_set(v___f_4337_, 1, v_responseBodyInstance_4319_);
lean_closure_set(v___f_4337_, 2, v___f_4320_);
lean_closure_set(v___f_4337_, 3, v___f_4321_);
lean_inc_ref(v___f_4337_);
v___f_4338_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4338_, 0, v___f_4337_);
v___f_4339_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4339_, 0, v_requestStream_4335_);
lean_closure_set(v___f_4339_, 1, v___f_4338_);
lean_closure_set(v___f_4339_, 2, v___f_4337_);
v___x_4340_ = lean_unsigned_to_nat(0u);
v___x_4341_ = 0;
v___x_4342_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4343_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4344_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4345_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4346_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4346_, 0, lean_box(0));
lean_closure_set(v___x_4346_, 1, lean_box(0));
lean_closure_set(v___x_4346_, 2, v___x_4342_);
lean_closure_set(v___x_4346_, 3, lean_box(0));
lean_closure_set(v___x_4346_, 4, lean_box(0));
lean_closure_set(v___x_4346_, 5, v___x_4345_);
lean_closure_set(v___x_4346_, 6, v___f_4322_);
v___x_4428__overap_4347_ = l_Std_Mutex_atomically___redArg(v___x_4342_, v___f_4343_, v___f_4344_, v_requestStream_4335_, v___x_4346_);
v___x_4348_ = lean_apply_1(v___x_4428__overap_4347_, lean_box(0));
v___x_4349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4340_, v___x_4341_, v___x_4348_, v___f_4339_);
return v___x_4349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object* v_responseBodyInstance_4350_, lean_object* v___f_4351_, lean_object* v___f_4352_, lean_object* v___f_4353_, lean_object* v_x_4354_, lean_object* v___y_4355_){
_start:
{
lean_object* v_res_4356_; 
v_res_4356_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(v_responseBodyInstance_4350_, v___f_4351_, v___f_4352_, v___f_4353_, v_x_4354_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object* v_h_4357_, lean_object* v_responseBodyInstance_4358_, lean_object* v_handler_4359_, lean_object* v_config_4360_, lean_object* v___x_4361_, uint8_t v___x_4362_, lean_object* v___f_4363_, lean_object* v_x_4364_){
_start:
{
if (lean_obj_tag(v_x_4364_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4374_; 
lean_dec_ref(v___f_4363_);
lean_dec_ref(v___x_4361_);
lean_dec_ref(v_config_4360_);
lean_dec(v_handler_4359_);
lean_dec_ref(v_responseBodyInstance_4358_);
lean_dec_ref(v_h_4357_);
v_a_4366_ = lean_ctor_get(v_x_4364_, 0);
v_isSharedCheck_4374_ = !lean_is_exclusive(v_x_4364_);
if (v_isSharedCheck_4374_ == 0)
{
v___x_4368_ = v_x_4364_;
v_isShared_4369_ = v_isSharedCheck_4374_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v_x_4364_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4374_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v___x_4371_; 
if (v_isShared_4369_ == 0)
{
v___x_4371_ = v___x_4368_;
goto v_reusejp_4370_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_a_4366_);
v___x_4371_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4370_;
}
v_reusejp_4370_:
{
lean_object* v___x_4372_; 
v___x_4372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4371_);
return v___x_4372_;
}
}
}
else
{
lean_object* v_a_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v_a_4375_ = lean_ctor_get(v_x_4364_, 0);
lean_inc(v_a_4375_);
lean_dec_ref_known(v_x_4364_, 1);
v___x_4376_ = lean_unsigned_to_nat(0u);
v___x_4377_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_h_4357_, v_responseBodyInstance_4358_, v_handler_4359_, v_config_4360_, v_a_4375_, v___x_4361_);
v___x_4378_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4376_, v___x_4362_, v___x_4377_, v___f_4363_);
return v___x_4378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object* v_h_4379_, lean_object* v_responseBodyInstance_4380_, lean_object* v_handler_4381_, lean_object* v_config_4382_, lean_object* v___x_4383_, lean_object* v___x_4384_, lean_object* v___f_4385_, lean_object* v_x_4386_, lean_object* v___y_4387_){
_start:
{
uint8_t v___x_5104__boxed_4388_; lean_object* v_res_4389_; 
v___x_5104__boxed_4388_ = lean_unbox(v___x_4384_);
v_res_4389_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(v_h_4379_, v_responseBodyInstance_4380_, v_handler_4381_, v_config_4382_, v___x_4383_, v___x_5104__boxed_4388_, v___f_4385_, v_x_4386_);
return v_res_4389_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object* v_inst_4390_, lean_object* v_h_4391_, lean_object* v_responseBodyInstance_4392_, lean_object* v_config_4393_, lean_object* v_handler_4394_, uint8_t v___x_4395_, lean_object* v___f_4396_, lean_object* v_x_4397_){
_start:
{
if (lean_obj_tag(v_x_4397_) == 0)
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4407_; 
lean_dec_ref(v___f_4396_);
lean_dec(v_handler_4394_);
lean_dec_ref(v_config_4393_);
lean_dec_ref(v_responseBodyInstance_4392_);
lean_dec_ref(v_h_4391_);
lean_dec_ref(v_inst_4390_);
v_a_4399_ = lean_ctor_get(v_x_4397_, 0);
v_isSharedCheck_4407_ = !lean_is_exclusive(v_x_4397_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4401_ = v_x_4397_;
v_isShared_4402_ = v_isSharedCheck_4407_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v_x_4397_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4407_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
lean_object* v___x_4405_; 
v___x_4405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4404_);
return v___x_4405_;
}
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; 
v_a_4408_ = lean_ctor_get(v_x_4397_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v_x_4397_, 1);
v___x_4409_ = lean_unsigned_to_nat(0u);
v___x_4410_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_4390_, v_h_4391_, v_responseBodyInstance_4392_, v_config_4393_, v_handler_4394_, v_a_4408_);
v___x_4411_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4409_, v___x_4395_, v___x_4410_, v___f_4396_);
return v___x_4411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object* v_inst_4412_, lean_object* v_h_4413_, lean_object* v_responseBodyInstance_4414_, lean_object* v_config_4415_, lean_object* v_handler_4416_, lean_object* v___x_4417_, lean_object* v___f_4418_, lean_object* v_x_4419_, lean_object* v___y_4420_){
_start:
{
uint8_t v___x_5145__boxed_4421_; lean_object* v_res_4422_; 
v___x_5145__boxed_4421_ = lean_unbox(v___x_4417_);
v_res_4422_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(v_inst_4412_, v_h_4413_, v_responseBodyInstance_4414_, v_config_4415_, v_handler_4416_, v___x_5145__boxed_4421_, v___f_4418_, v_x_4419_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t v___x_4423_, lean_object* v_h_4424_, lean_object* v_responseBodyInstance_4425_, lean_object* v_handler_4426_, lean_object* v_config_4427_, lean_object* v___f_4428_, lean_object* v_inst_4429_, lean_object* v_socket_4430_, lean_object* v_connectionContext_4431_, uint8_t v___x_4432_, lean_object* v_x_4433_){
_start:
{
if (lean_obj_tag(v_x_4433_) == 0)
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4443_; 
lean_dec_ref(v_connectionContext_4431_);
lean_dec(v_socket_4430_);
lean_dec_ref(v_inst_4429_);
lean_dec_ref(v___f_4428_);
lean_dec_ref(v_config_4427_);
lean_dec(v_handler_4426_);
lean_dec_ref(v_responseBodyInstance_4425_);
lean_dec_ref(v_h_4424_);
v_a_4435_ = lean_ctor_get(v_x_4433_, 0);
v_isSharedCheck_4443_ = !lean_is_exclusive(v_x_4433_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4437_ = v_x_4433_;
v_isShared_4438_ = v_isSharedCheck_4443_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v_x_4433_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4443_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
lean_object* v___x_4441_; 
v___x_4441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4440_);
return v___x_4441_;
}
}
}
else
{
lean_object* v_a_4444_; lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4486_; 
v_a_4444_ = lean_ctor_get(v_x_4433_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_x_4433_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4446_ = v_x_4433_;
v_isShared_4447_ = v_isSharedCheck_4486_;
goto v_resetjp_4445_;
}
else
{
lean_inc(v_a_4444_);
lean_dec(v_x_4433_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4486_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v_machine_4448_; lean_object* v_requestStream_4449_; lean_object* v_keepAliveTimeout_4450_; lean_object* v_currentTimeout_4451_; lean_object* v_headerTimeout_4452_; lean_object* v_response_4453_; lean_object* v_respStream_4454_; uint8_t v_requiresData_4455_; lean_object* v_expectData_4456_; uint8_t v_handlerDispatched_4457_; lean_object* v_pendingHead_4458_; uint8_t v___y_4469_; uint8_t v___y_4476_; uint8_t v___y_4478_; uint8_t v___y_4479_; uint8_t v___y_4481_; 
v_machine_4448_ = lean_ctor_get(v_a_4444_, 0);
v_requestStream_4449_ = lean_ctor_get(v_a_4444_, 1);
v_keepAliveTimeout_4450_ = lean_ctor_get(v_a_4444_, 2);
v_currentTimeout_4451_ = lean_ctor_get(v_a_4444_, 3);
v_headerTimeout_4452_ = lean_ctor_get(v_a_4444_, 4);
v_response_4453_ = lean_ctor_get(v_a_4444_, 5);
v_respStream_4454_ = lean_ctor_get(v_a_4444_, 6);
v_requiresData_4455_ = lean_ctor_get_uint8(v_a_4444_, sizeof(void*)*9);
v_expectData_4456_ = lean_ctor_get(v_a_4444_, 7);
v_handlerDispatched_4457_ = lean_ctor_get_uint8(v_a_4444_, sizeof(void*)*9 + 1);
v_pendingHead_4458_ = lean_ctor_get(v_a_4444_, 8);
if (lean_obj_tag(v_respStream_4454_) == 0)
{
v___y_4481_ = v___x_4423_;
goto v___jp_4480_;
}
else
{
v___y_4481_ = v___x_4432_;
goto v___jp_4480_;
}
v___jp_4459_:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___f_4462_; lean_object* v___x_4463_; lean_object* v___f_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4460_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4460_, 0, v_machine_4448_);
lean_ctor_set(v___x_4460_, 1, v_requestStream_4449_);
lean_ctor_set(v___x_4460_, 2, v_keepAliveTimeout_4450_);
lean_ctor_set(v___x_4460_, 3, v_currentTimeout_4451_);
lean_ctor_set(v___x_4460_, 4, v_headerTimeout_4452_);
lean_ctor_set(v___x_4460_, 5, v_response_4453_);
lean_ctor_set(v___x_4460_, 6, v_respStream_4454_);
lean_ctor_set(v___x_4460_, 7, v_expectData_4456_);
lean_ctor_set(v___x_4460_, 8, v_pendingHead_4458_);
lean_ctor_set_uint8(v___x_4460_, sizeof(void*)*9, v___x_4423_);
lean_ctor_set_uint8(v___x_4460_, sizeof(void*)*9 + 1, v_handlerDispatched_4457_);
v___x_4461_ = lean_box(v___x_4423_);
lean_inc_ref(v___x_4460_);
lean_inc_ref(v_config_4427_);
lean_inc(v_handler_4426_);
lean_inc_ref(v_responseBodyInstance_4425_);
lean_inc_ref(v_h_4424_);
v___f_4462_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed), 9, 7);
lean_closure_set(v___f_4462_, 0, v_h_4424_);
lean_closure_set(v___f_4462_, 1, v_responseBodyInstance_4425_);
lean_closure_set(v___f_4462_, 2, v_handler_4426_);
lean_closure_set(v___f_4462_, 3, v_config_4427_);
lean_closure_set(v___f_4462_, 4, v___x_4460_);
lean_closure_set(v___f_4462_, 5, v___x_4461_);
lean_closure_set(v___f_4462_, 6, v___f_4428_);
v___x_4463_ = lean_box(v___x_4423_);
v___f_4464_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed), 9, 7);
lean_closure_set(v___f_4464_, 0, v_inst_4429_);
lean_closure_set(v___f_4464_, 1, v_h_4424_);
lean_closure_set(v___f_4464_, 2, v_responseBodyInstance_4425_);
lean_closure_set(v___f_4464_, 3, v_config_4427_);
lean_closure_set(v___f_4464_, 4, v_handler_4426_);
lean_closure_set(v___f_4464_, 5, v___x_4463_);
lean_closure_set(v___f_4464_, 6, v___f_4462_);
v___x_4465_ = lean_unsigned_to_nat(0u);
v___x_4466_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4430_, v_connectionContext_4431_, v___x_4460_);
v___x_4467_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4465_, v___x_4423_, v___x_4466_, v___f_4464_);
return v___x_4467_;
}
v___jp_4468_:
{
if (v_requiresData_4455_ == 0)
{
if (v___y_4469_ == 0)
{
lean_object* v___x_4470_; lean_object* v___x_4472_; 
lean_dec_ref(v_connectionContext_4431_);
lean_dec(v_socket_4430_);
lean_dec_ref(v_inst_4429_);
lean_dec_ref(v___f_4428_);
lean_dec_ref(v_config_4427_);
lean_dec(v_handler_4426_);
lean_dec_ref(v_responseBodyInstance_4425_);
lean_dec_ref(v_h_4424_);
v___x_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4470_, 0, v_a_4444_);
if (v_isShared_4447_ == 0)
{
lean_ctor_set(v___x_4446_, 0, v___x_4470_);
v___x_4472_ = v___x_4446_;
goto v_reusejp_4471_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4470_);
v___x_4472_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4471_;
}
v_reusejp_4471_:
{
lean_object* v___x_4473_; 
v___x_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4473_, 0, v___x_4472_);
return v___x_4473_;
}
}
else
{
lean_inc(v_pendingHead_4458_);
lean_inc(v_expectData_4456_);
lean_inc(v_respStream_4454_);
lean_inc_ref(v_response_4453_);
lean_inc(v_headerTimeout_4452_);
lean_inc(v_currentTimeout_4451_);
lean_inc(v_keepAliveTimeout_4450_);
lean_inc_ref(v_requestStream_4449_);
lean_inc_ref(v_machine_4448_);
lean_del_object(v___x_4446_);
lean_dec(v_a_4444_);
goto v___jp_4459_;
}
}
else
{
lean_inc(v_pendingHead_4458_);
lean_inc(v_expectData_4456_);
lean_inc(v_respStream_4454_);
lean_inc_ref(v_response_4453_);
lean_inc(v_headerTimeout_4452_);
lean_inc(v_currentTimeout_4451_);
lean_inc(v_keepAliveTimeout_4450_);
lean_inc_ref(v_requestStream_4449_);
lean_inc_ref(v_machine_4448_);
lean_del_object(v___x_4446_);
lean_dec(v_a_4444_);
goto v___jp_4459_;
}
}
v___jp_4475_:
{
if (v_handlerDispatched_4457_ == 0)
{
v___y_4469_ = v___y_4476_;
goto v___jp_4468_;
}
else
{
v___y_4469_ = v_handlerDispatched_4457_;
goto v___jp_4468_;
}
}
v___jp_4477_:
{
if (v___y_4478_ == 0)
{
v___y_4476_ = v___y_4479_;
goto v___jp_4475_;
}
else
{
v___y_4476_ = v___y_4478_;
goto v___jp_4475_;
}
}
v___jp_4480_:
{
lean_object* v_writer_4482_; uint8_t v_sentMessage_4483_; 
v_writer_4482_ = lean_ctor_get(v_machine_4448_, 1);
v_sentMessage_4483_ = lean_ctor_get_uint8(v_writer_4482_, sizeof(void*)*6);
if (v_sentMessage_4483_ == 0)
{
lean_object* v_reader_4484_; lean_object* v_state_4485_; 
v_reader_4484_ = lean_ctor_get(v_machine_4448_, 0);
v_state_4485_ = lean_ctor_get(v_reader_4484_, 0);
if (lean_obj_tag(v_state_4485_) == 2)
{
v___y_4478_ = v___y_4481_;
v___y_4479_ = v___x_4432_;
goto v___jp_4477_;
}
else
{
v___y_4478_ = v___y_4481_;
v___y_4479_ = v_sentMessage_4483_;
goto v___jp_4477_;
}
}
else
{
v___y_4478_ = v___y_4481_;
v___y_4479_ = v___x_4423_;
goto v___jp_4477_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object* v___x_4487_, lean_object* v_h_4488_, lean_object* v_responseBodyInstance_4489_, lean_object* v_handler_4490_, lean_object* v_config_4491_, lean_object* v___f_4492_, lean_object* v_inst_4493_, lean_object* v_socket_4494_, lean_object* v_connectionContext_4495_, lean_object* v___x_4496_, lean_object* v_x_4497_, lean_object* v___y_4498_){
_start:
{
uint8_t v___x_5185__boxed_4499_; uint8_t v___x_5188__boxed_4500_; lean_object* v_res_4501_; 
v___x_5185__boxed_4499_ = lean_unbox(v___x_4487_);
v___x_5188__boxed_4500_ = lean_unbox(v___x_4496_);
v_res_4501_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(v___x_5185__boxed_4499_, v_h_4488_, v_responseBodyInstance_4489_, v_handler_4490_, v_config_4491_, v___f_4492_, v_inst_4493_, v_socket_4494_, v_connectionContext_4495_, v___x_5188__boxed_4500_, v_x_4497_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object* v_h_4502_, lean_object* v_handler_4503_, lean_object* v_extensions_4504_, lean_object* v_connectionContext_4505_, uint8_t v___x_4506_, lean_object* v___f_4507_, lean_object* v_x_4508_){
_start:
{
if (lean_obj_tag(v_x_4508_) == 0)
{
lean_object* v_a_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4518_; 
lean_dec_ref(v___f_4507_);
lean_dec_ref(v_connectionContext_4505_);
lean_dec(v_extensions_4504_);
lean_dec(v_handler_4503_);
lean_dec_ref(v_h_4502_);
v_a_4510_ = lean_ctor_get(v_x_4508_, 0);
v_isSharedCheck_4518_ = !lean_is_exclusive(v_x_4508_);
if (v_isSharedCheck_4518_ == 0)
{
v___x_4512_ = v_x_4508_;
v_isShared_4513_ = v_isSharedCheck_4518_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_a_4510_);
lean_dec(v_x_4508_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4518_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4515_; 
if (v_isShared_4513_ == 0)
{
v___x_4515_ = v___x_4512_;
goto v_reusejp_4514_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v_a_4510_);
v___x_4515_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4514_;
}
v_reusejp_4514_:
{
lean_object* v___x_4516_; 
v___x_4516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4515_);
return v___x_4516_;
}
}
}
else
{
lean_object* v_a_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v_a_4519_ = lean_ctor_get(v_x_4508_, 0);
lean_inc(v_a_4519_);
lean_dec_ref_known(v_x_4508_, 1);
v___x_4520_ = lean_unsigned_to_nat(0u);
v___x_4521_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_h_4502_, v_handler_4503_, v_extensions_4504_, v_connectionContext_4505_, v_a_4519_);
v___x_4522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4520_, v___x_4506_, v___x_4521_, v___f_4507_);
return v___x_4522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object* v_h_4523_, lean_object* v_handler_4524_, lean_object* v_extensions_4525_, lean_object* v_connectionContext_4526_, lean_object* v___x_4527_, lean_object* v___f_4528_, lean_object* v_x_4529_, lean_object* v___y_4530_){
_start:
{
uint8_t v___x_5279__boxed_4531_; lean_object* v_res_4532_; 
v___x_5279__boxed_4531_ = lean_unbox(v___x_4527_);
v_res_4532_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(v_h_4523_, v_handler_4524_, v_extensions_4525_, v_connectionContext_4526_, v___x_5279__boxed_4531_, v___f_4528_, v_x_4529_);
return v_res_4532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object* v_h_4533_, lean_object* v_responseBodyInstance_4534_, lean_object* v_handler_4535_, lean_object* v_config_4536_, lean_object* v_connectionContext_4537_, lean_object* v_events_4538_, lean_object* v___x_4539_, uint8_t v___x_4540_, lean_object* v___f_4541_, lean_object* v_____r_4542_){
_start:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; 
v___x_4544_ = lean_unsigned_to_nat(0u);
v___x_4545_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_h_4533_, v_responseBodyInstance_4534_, v_handler_4535_, v_config_4536_, v_connectionContext_4537_, v_events_4538_, v___x_4539_);
v___x_4546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4544_, v___x_4540_, v___x_4545_, v___f_4541_);
return v___x_4546_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object* v_h_4547_, lean_object* v_responseBodyInstance_4548_, lean_object* v_handler_4549_, lean_object* v_config_4550_, lean_object* v_connectionContext_4551_, lean_object* v_events_4552_, lean_object* v___x_4553_, lean_object* v___x_4554_, lean_object* v___f_4555_, lean_object* v_____r_4556_, lean_object* v___y_4557_){
_start:
{
uint8_t v___x_5318__boxed_4558_; lean_object* v_res_4559_; 
v___x_5318__boxed_4558_ = lean_unbox(v___x_4554_);
v_res_4559_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4547_, v_responseBodyInstance_4548_, v_handler_4549_, v_config_4550_, v_connectionContext_4551_, v_events_4552_, v___x_4553_, v___x_5318__boxed_4558_, v___f_4555_, v_____r_4556_);
return v_res_4559_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object* v___x_4560_, lean_object* v___f_4561_, lean_object* v_x_4562_){
_start:
{
if (lean_obj_tag(v_x_4562_) == 0)
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4572_; 
lean_dec_ref(v___f_4561_);
lean_dec_ref(v___x_4560_);
v_a_4564_ = lean_ctor_get(v_x_4562_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v_x_4562_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4566_ = v_x_4562_;
v_isShared_4567_ = v_isSharedCheck_4572_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v_x_4562_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4572_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
lean_object* v___x_4570_; 
v___x_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
return v___x_4570_;
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4584_; 
v_a_4573_ = lean_ctor_get(v_x_4562_, 0);
v_isSharedCheck_4584_ = !lean_is_exclusive(v_x_4562_);
if (v_isSharedCheck_4584_ == 0)
{
v___x_4575_ = v_x_4562_;
v_isShared_4576_ = v_isSharedCheck_4584_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v_x_4562_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4584_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
if (lean_obj_tag(v_a_4573_) == 0)
{
lean_object* v___x_4577_; lean_object* v___x_4579_; 
lean_dec_ref(v___f_4561_);
v___x_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4560_);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v___x_4577_);
v___x_4579_ = v___x_4575_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4577_);
v___x_4579_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
lean_object* v___x_4580_; 
v___x_4580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4580_, 0, v___x_4579_);
return v___x_4580_;
}
}
else
{
lean_object* v_val_4582_; lean_object* v___x_4583_; 
lean_del_object(v___x_4575_);
lean_dec_ref(v___x_4560_);
v_val_4582_ = lean_ctor_get(v_a_4573_, 0);
lean_inc(v_val_4582_);
lean_dec_ref_known(v_a_4573_, 1);
v___x_4583_ = lean_apply_2(v___f_4561_, v_val_4582_, lean_box(0));
return v___x_4583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object* v___x_4585_, lean_object* v___f_4586_, lean_object* v_x_4587_, lean_object* v___y_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(v___x_4585_, v___f_4586_, v_x_4587_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(uint8_t v___x_4590_, lean_object* v_h_4591_, lean_object* v_responseBodyInstance_4592_, lean_object* v_handler_4593_, lean_object* v_config_4594_, lean_object* v___f_4595_, lean_object* v_inst_4596_, lean_object* v_socket_4597_, lean_object* v_connectionContext_4598_, lean_object* v_extensions_4599_, lean_object* v___f_4600_, lean_object* v___f_4601_, lean_object* v_x_4602_, lean_object* v_____s_4603_){
_start:
{
lean_object* v_machine_4605_; lean_object* v_reader_4606_; lean_object* v_requestStream_4607_; lean_object* v_keepAliveTimeout_4608_; lean_object* v_currentTimeout_4609_; lean_object* v_headerTimeout_4610_; lean_object* v_response_4611_; lean_object* v_respStream_4612_; uint8_t v_requiresData_4613_; lean_object* v_expectData_4614_; uint8_t v_handlerDispatched_4615_; lean_object* v_pendingHead_4616_; lean_object* v_writer_4617_; lean_object* v_state_4618_; uint8_t v___x_4619_; 
v_machine_4605_ = lean_ctor_get(v_____s_4603_, 0);
v_reader_4606_ = lean_ctor_get(v_machine_4605_, 0);
v_requestStream_4607_ = lean_ctor_get(v_____s_4603_, 1);
v_keepAliveTimeout_4608_ = lean_ctor_get(v_____s_4603_, 2);
v_currentTimeout_4609_ = lean_ctor_get(v_____s_4603_, 3);
v_headerTimeout_4610_ = lean_ctor_get(v_____s_4603_, 4);
v_response_4611_ = lean_ctor_get(v_____s_4603_, 5);
v_respStream_4612_ = lean_ctor_get(v_____s_4603_, 6);
v_requiresData_4613_ = lean_ctor_get_uint8(v_____s_4603_, sizeof(void*)*9);
v_expectData_4614_ = lean_ctor_get(v_____s_4603_, 7);
v_handlerDispatched_4615_ = lean_ctor_get_uint8(v_____s_4603_, sizeof(void*)*9 + 1);
v_pendingHead_4616_ = lean_ctor_get(v_____s_4603_, 8);
v_writer_4617_ = lean_ctor_get(v_machine_4605_, 1);
v_state_4618_ = lean_ctor_get(v_reader_4606_, 0);
v___x_4619_ = 0;
if (lean_obj_tag(v_state_4618_) == 6)
{
lean_object* v_state_4647_; 
v_state_4647_ = lean_ctor_get(v_writer_4617_, 2);
if (lean_obj_tag(v_state_4647_) == 7)
{
lean_object* v_outputData_4648_; lean_object* v_size_4649_; lean_object* v___x_4650_; uint8_t v___x_4651_; 
v_outputData_4648_ = lean_ctor_get(v_writer_4617_, 1);
v_size_4649_ = lean_ctor_get(v_outputData_4648_, 1);
v___x_4650_ = lean_unsigned_to_nat(0u);
v___x_4651_ = lean_nat_dec_eq(v_size_4649_, v___x_4650_);
if (v___x_4651_ == 0)
{
lean_inc(v_pendingHead_4616_);
lean_inc(v_expectData_4614_);
lean_inc(v_respStream_4612_);
lean_inc_ref(v_response_4611_);
lean_inc(v_headerTimeout_4610_);
lean_inc(v_currentTimeout_4609_);
lean_inc(v_keepAliveTimeout_4608_);
lean_inc_ref(v_requestStream_4607_);
lean_inc_ref(v_machine_4605_);
lean_dec_ref(v_____s_4603_);
goto v___jp_4620_;
}
else
{
lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; 
lean_dec_ref(v___f_4601_);
lean_dec_ref(v___f_4600_);
lean_dec(v_extensions_4599_);
lean_dec_ref(v_connectionContext_4598_);
lean_dec(v_socket_4597_);
lean_dec_ref(v_inst_4596_);
lean_dec_ref(v___f_4595_);
lean_dec_ref(v_config_4594_);
lean_dec(v_handler_4593_);
lean_dec_ref(v_responseBodyInstance_4592_);
lean_dec_ref(v_h_4591_);
v___x_4652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4652_, 0, v_____s_4603_);
v___x_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4652_);
v___x_4654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4654_, 0, v___x_4653_);
return v___x_4654_;
}
}
else
{
lean_inc(v_pendingHead_4616_);
lean_inc(v_expectData_4614_);
lean_inc(v_respStream_4612_);
lean_inc_ref(v_response_4611_);
lean_inc(v_headerTimeout_4610_);
lean_inc(v_currentTimeout_4609_);
lean_inc(v_keepAliveTimeout_4608_);
lean_inc_ref(v_requestStream_4607_);
lean_inc_ref(v_machine_4605_);
lean_dec_ref(v_____s_4603_);
goto v___jp_4620_;
}
}
else
{
lean_inc(v_pendingHead_4616_);
lean_inc(v_expectData_4614_);
lean_inc(v_respStream_4612_);
lean_inc_ref(v_response_4611_);
lean_inc(v_headerTimeout_4610_);
lean_inc(v_currentTimeout_4609_);
lean_inc(v_keepAliveTimeout_4608_);
lean_inc_ref(v_requestStream_4607_);
lean_inc_ref(v_machine_4605_);
lean_dec_ref(v_____s_4603_);
goto v___jp_4620_;
}
v___jp_4620_:
{
lean_object* v___x_4621_; lean_object* v_snd_4622_; lean_object* v_output_4623_; lean_object* v_fst_4624_; lean_object* v_events_4625_; lean_object* v_data_4626_; lean_object* v_size_4627_; uint8_t v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___f_4631_; lean_object* v___x_4632_; lean_object* v___f_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___f_4636_; lean_object* v___x_4637_; uint8_t v___x_4638_; 
v___x_4621_ = l_Std_Http_Protocol_H1_Machine_step(v___x_4619_, v_machine_4605_);
v_snd_4622_ = lean_ctor_get(v___x_4621_, 1);
lean_inc(v_snd_4622_);
v_output_4623_ = lean_ctor_get(v_snd_4622_, 1);
lean_inc_ref(v_output_4623_);
v_fst_4624_ = lean_ctor_get(v___x_4621_, 0);
lean_inc(v_fst_4624_);
lean_dec_ref(v___x_4621_);
v_events_4625_ = lean_ctor_get(v_snd_4622_, 0);
lean_inc_ref_n(v_events_4625_, 2);
lean_dec(v_snd_4622_);
v_data_4626_ = lean_ctor_get(v_output_4623_, 0);
lean_inc_ref(v_data_4626_);
v_size_4627_ = lean_ctor_get(v_output_4623_, 1);
lean_inc(v_size_4627_);
lean_dec_ref(v_output_4623_);
v___x_4628_ = 1;
v___x_4629_ = lean_box(v___x_4590_);
v___x_4630_ = lean_box(v___x_4628_);
lean_inc_ref_n(v_connectionContext_4598_, 3);
lean_inc(v_socket_4597_);
lean_inc_ref(v_inst_4596_);
lean_inc_ref_n(v_config_4594_, 2);
lean_inc_n(v_handler_4593_, 3);
lean_inc_ref_n(v_responseBodyInstance_4592_, 2);
lean_inc_ref_n(v_h_4591_, 3);
v___f_4631_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed), 12, 10);
lean_closure_set(v___f_4631_, 0, v___x_4629_);
lean_closure_set(v___f_4631_, 1, v_h_4591_);
lean_closure_set(v___f_4631_, 2, v_responseBodyInstance_4592_);
lean_closure_set(v___f_4631_, 3, v_handler_4593_);
lean_closure_set(v___f_4631_, 4, v_config_4594_);
lean_closure_set(v___f_4631_, 5, v___f_4595_);
lean_closure_set(v___f_4631_, 6, v_inst_4596_);
lean_closure_set(v___f_4631_, 7, v_socket_4597_);
lean_closure_set(v___f_4631_, 8, v_connectionContext_4598_);
lean_closure_set(v___f_4631_, 9, v___x_4630_);
v___x_4632_ = lean_box(v___x_4590_);
v___f_4633_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed), 8, 6);
lean_closure_set(v___f_4633_, 0, v_h_4591_);
lean_closure_set(v___f_4633_, 1, v_handler_4593_);
lean_closure_set(v___f_4633_, 2, v_extensions_4599_);
lean_closure_set(v___f_4633_, 3, v_connectionContext_4598_);
lean_closure_set(v___f_4633_, 4, v___x_4632_);
lean_closure_set(v___f_4633_, 5, v___f_4631_);
v___x_4634_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4634_, 0, v_fst_4624_);
lean_ctor_set(v___x_4634_, 1, v_requestStream_4607_);
lean_ctor_set(v___x_4634_, 2, v_keepAliveTimeout_4608_);
lean_ctor_set(v___x_4634_, 3, v_currentTimeout_4609_);
lean_ctor_set(v___x_4634_, 4, v_headerTimeout_4610_);
lean_ctor_set(v___x_4634_, 5, v_response_4611_);
lean_ctor_set(v___x_4634_, 6, v_respStream_4612_);
lean_ctor_set(v___x_4634_, 7, v_expectData_4614_);
lean_ctor_set(v___x_4634_, 8, v_pendingHead_4616_);
lean_ctor_set_uint8(v___x_4634_, sizeof(void*)*9, v_requiresData_4613_);
lean_ctor_set_uint8(v___x_4634_, sizeof(void*)*9 + 1, v_handlerDispatched_4615_);
v___x_4635_ = lean_box(v___x_4590_);
lean_inc_ref(v___f_4633_);
lean_inc_ref(v___x_4634_);
v___f_4636_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed), 11, 9);
lean_closure_set(v___f_4636_, 0, v_h_4591_);
lean_closure_set(v___f_4636_, 1, v_responseBodyInstance_4592_);
lean_closure_set(v___f_4636_, 2, v_handler_4593_);
lean_closure_set(v___f_4636_, 3, v_config_4594_);
lean_closure_set(v___f_4636_, 4, v_connectionContext_4598_);
lean_closure_set(v___f_4636_, 5, v_events_4625_);
lean_closure_set(v___f_4636_, 6, v___x_4634_);
lean_closure_set(v___f_4636_, 7, v___x_4635_);
lean_closure_set(v___f_4636_, 8, v___f_4633_);
v___x_4637_ = lean_unsigned_to_nat(0u);
v___x_4638_ = lean_nat_dec_lt(v___x_4637_, v_size_4627_);
lean_dec(v_size_4627_);
if (v___x_4638_ == 0)
{
lean_object* v___x_4639_; lean_object* v___x_4640_; 
lean_dec_ref(v___f_4636_);
lean_dec_ref(v_data_4626_);
lean_dec_ref(v___f_4601_);
lean_dec_ref(v___f_4600_);
lean_dec(v_socket_4597_);
lean_dec_ref(v_inst_4596_);
v___x_4639_ = lean_box(0);
v___x_4640_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4591_, v_responseBodyInstance_4592_, v_handler_4593_, v_config_4594_, v_connectionContext_4598_, v_events_4625_, v___x_4634_, v___x_4590_, v___f_4633_, v___x_4639_);
return v___x_4640_;
}
else
{
lean_object* v_sendAll_4641_; lean_object* v___f_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; 
lean_dec_ref(v___f_4633_);
lean_dec_ref(v_events_4625_);
lean_dec_ref(v_connectionContext_4598_);
lean_dec_ref(v_config_4594_);
lean_dec(v_handler_4593_);
lean_dec_ref(v_responseBodyInstance_4592_);
lean_dec_ref(v_h_4591_);
v_sendAll_4641_ = lean_ctor_get(v_inst_4596_, 1);
lean_inc_ref(v_sendAll_4641_);
lean_dec_ref(v_inst_4596_);
v___f_4642_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 4, 2);
lean_closure_set(v___f_4642_, 0, v___x_4634_);
lean_closure_set(v___f_4642_, 1, v___f_4636_);
v___x_4643_ = lean_apply_3(v_sendAll_4641_, v_socket_4597_, v_data_4626_, lean_box(0));
v___x_4644_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4637_, v___x_4590_, v___x_4643_, v___f_4600_);
v___x_4645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4637_, v___x_4590_, v___x_4644_, v___f_4601_);
v___x_4646_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4637_, v___x_4590_, v___x_4645_, v___f_4642_);
return v___x_4646_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object* v___x_4655_, lean_object* v_h_4656_, lean_object* v_responseBodyInstance_4657_, lean_object* v_handler_4658_, lean_object* v_config_4659_, lean_object* v___f_4660_, lean_object* v_inst_4661_, lean_object* v_socket_4662_, lean_object* v_connectionContext_4663_, lean_object* v_extensions_4664_, lean_object* v___f_4665_, lean_object* v___f_4666_, lean_object* v_x_4667_, lean_object* v_____s_4668_, lean_object* v___y_4669_){
_start:
{
uint8_t v___x_5392__boxed_4670_; lean_object* v_res_4671_; 
v___x_5392__boxed_4670_ = lean_unbox(v___x_4655_);
v_res_4671_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(v___x_5392__boxed_4670_, v_h_4656_, v_responseBodyInstance_4657_, v_handler_4658_, v_config_4659_, v___f_4660_, v_inst_4661_, v_socket_4662_, v_connectionContext_4663_, v_extensions_4664_, v___f_4665_, v___f_4666_, v_x_4667_, v_____s_4668_);
return v_res_4671_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object* v_a_4672_, lean_object* v_x_4673_){
_start:
{
if (lean_obj_tag(v_x_4673_) == 0)
{
lean_object* v_a_4675_; lean_object* v___x_4677_; uint8_t v_isShared_4678_; uint8_t v_isSharedCheck_4683_; 
v_a_4675_ = lean_ctor_get(v_x_4673_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v_x_4673_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4677_ = v_x_4673_;
v_isShared_4678_ = v_isSharedCheck_4683_;
goto v_resetjp_4676_;
}
else
{
lean_inc(v_a_4675_);
lean_dec(v_x_4673_);
v___x_4677_ = lean_box(0);
v_isShared_4678_ = v_isSharedCheck_4683_;
goto v_resetjp_4676_;
}
v_resetjp_4676_:
{
lean_object* v___x_4680_; 
if (v_isShared_4678_ == 0)
{
v___x_4680_ = v___x_4677_;
goto v_reusejp_4679_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4675_);
v___x_4680_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4679_;
}
v_reusejp_4679_:
{
lean_object* v___x_4681_; 
v___x_4681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4681_, 0, v___x_4680_);
return v___x_4681_;
}
}
}
else
{
lean_object* v___x_4684_; lean_object* v___x_4685_; 
lean_dec_ref_known(v_x_4673_, 1);
v___x_4684_ = l_IO_Promise_result_x21___redArg(v_a_4672_);
v___x_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4684_);
return v___x_4685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object* v_a_4686_, lean_object* v_x_4687_, lean_object* v___y_4688_){
_start:
{
lean_object* v_res_4689_; 
v_res_4689_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(v_a_4686_, v_x_4687_);
lean_dec(v_a_4686_);
return v_res_4689_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object* v___f_4690_, lean_object* v___x_4691_, lean_object* v___x_4692_, uint8_t v___x_4693_, lean_object* v_x_4694_){
_start:
{
if (lean_obj_tag(v_x_4694_) == 0)
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4704_; 
lean_dec_ref(v___x_4692_);
lean_dec(v___x_4691_);
lean_dec_ref(v___f_4690_);
v_a_4696_ = lean_ctor_get(v_x_4694_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_x_4694_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4698_ = v_x_4694_;
v_isShared_4699_ = v_isSharedCheck_4704_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v_x_4694_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4704_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
lean_object* v___x_4702_; 
v___x_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
return v___x_4702_;
}
}
}
else
{
lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4716_; 
v_a_4705_ = lean_ctor_get(v_x_4694_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v_x_4694_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4707_ = v_x_4694_;
v_isShared_4708_ = v_isSharedCheck_4716_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_dec(v_x_4694_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4716_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
lean_object* v___f_4709_; lean_object* v___x_4710_; lean_object* v___x_4712_; 
lean_inc(v_a_4705_);
v___f_4709_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_4709_, 0, v_a_4705_);
lean_inc(v___x_4691_);
v___x_4710_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_4690_, v___x_4691_, v_a_4705_, v___x_4692_);
if (v_isShared_4708_ == 0)
{
lean_ctor_set(v___x_4707_, 0, v___x_4710_);
v___x_4712_ = v___x_4707_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v___x_4710_);
v___x_4712_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4713_, 0, v___x_4712_);
v___x_4714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4691_, v___x_4693_, v___x_4713_, v___f_4709_);
return v___x_4714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object* v___f_4717_, lean_object* v___x_4718_, lean_object* v___x_4719_, lean_object* v___x_4720_, lean_object* v_x_4721_, lean_object* v___y_4722_){
_start:
{
uint8_t v___x_5507__boxed_4723_; lean_object* v_res_4724_; 
v___x_5507__boxed_4723_ = lean_unbox(v___x_4720_);
v_res_4724_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(v___f_4717_, v___x_4718_, v___x_4719_, v___x_5507__boxed_4723_, v_x_4721_);
return v_res_4724_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object* v_config_4725_, lean_object* v_h_4726_, lean_object* v_responseBodyInstance_4727_, lean_object* v_handler_4728_, lean_object* v___f_4729_, lean_object* v_inst_4730_, lean_object* v_socket_4731_, lean_object* v_connectionContext_4732_, lean_object* v_extensions_4733_, lean_object* v___f_4734_, lean_object* v___f_4735_, lean_object* v_machine_4736_, lean_object* v_a_4737_, lean_object* v___x_4738_, lean_object* v___f_4739_, lean_object* v_x_4740_){
_start:
{
if (lean_obj_tag(v_x_4740_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4750_; 
lean_dec_ref(v___f_4739_);
lean_dec(v___x_4738_);
lean_dec_ref(v_a_4737_);
lean_dec_ref(v_machine_4736_);
lean_dec_ref(v___f_4735_);
lean_dec_ref(v___f_4734_);
lean_dec(v_extensions_4733_);
lean_dec_ref(v_connectionContext_4732_);
lean_dec(v_socket_4731_);
lean_dec_ref(v_inst_4730_);
lean_dec_ref(v___f_4729_);
lean_dec(v_handler_4728_);
lean_dec_ref(v_responseBodyInstance_4727_);
lean_dec_ref(v_h_4726_);
lean_dec_ref(v_config_4725_);
v_a_4742_ = lean_ctor_get(v_x_4740_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v_x_4740_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4744_ = v_x_4740_;
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v_x_4740_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4747_; 
if (v_isShared_4745_ == 0)
{
v___x_4747_ = v___x_4744_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4742_);
v___x_4747_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
lean_object* v___x_4748_; 
v___x_4748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4748_, 0, v___x_4747_);
return v___x_4748_;
}
}
}
else
{
lean_object* v_a_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4772_; 
v_a_4751_ = lean_ctor_get(v_x_4740_, 0);
v_isSharedCheck_4772_ = !lean_is_exclusive(v_x_4740_);
if (v_isSharedCheck_4772_ == 0)
{
v___x_4753_ = v_x_4740_;
v_isShared_4754_ = v_isSharedCheck_4772_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_a_4751_);
lean_dec(v_x_4740_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4772_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v_keepAliveTimeout_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; uint8_t v___x_4758_; lean_object* v___x_4759_; lean_object* v___f_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___f_4764_; lean_object* v___x_4765_; lean_object* v___x_4767_; 
v_keepAliveTimeout_4755_ = lean_ctor_get(v_config_4725_, 5);
lean_inc_n(v_keepAliveTimeout_4755_, 2);
v___x_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4756_, 0, v_keepAliveTimeout_4755_);
v___x_4757_ = lean_box(0);
v___x_4758_ = 0;
v___x_4759_ = lean_box(v___x_4758_);
v___f_4760_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 15, 12);
lean_closure_set(v___f_4760_, 0, v___x_4759_);
lean_closure_set(v___f_4760_, 1, v_h_4726_);
lean_closure_set(v___f_4760_, 2, v_responseBodyInstance_4727_);
lean_closure_set(v___f_4760_, 3, v_handler_4728_);
lean_closure_set(v___f_4760_, 4, v_config_4725_);
lean_closure_set(v___f_4760_, 5, v___f_4729_);
lean_closure_set(v___f_4760_, 6, v_inst_4730_);
lean_closure_set(v___f_4760_, 7, v_socket_4731_);
lean_closure_set(v___f_4760_, 8, v_connectionContext_4732_);
lean_closure_set(v___f_4760_, 9, v_extensions_4733_);
lean_closure_set(v___f_4760_, 10, v___f_4734_);
lean_closure_set(v___f_4760_, 11, v___f_4735_);
v___x_4761_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4761_, 0, v_machine_4736_);
lean_ctor_set(v___x_4761_, 1, v_a_4737_);
lean_ctor_set(v___x_4761_, 2, v___x_4756_);
lean_ctor_set(v___x_4761_, 3, v_keepAliveTimeout_4755_);
lean_ctor_set(v___x_4761_, 4, v___x_4757_);
lean_ctor_set(v___x_4761_, 5, v_a_4751_);
lean_ctor_set(v___x_4761_, 6, v___x_4757_);
lean_ctor_set(v___x_4761_, 7, v___x_4738_);
lean_ctor_set(v___x_4761_, 8, v___x_4757_);
lean_ctor_set_uint8(v___x_4761_, sizeof(void*)*9, v___x_4758_);
lean_ctor_set_uint8(v___x_4761_, sizeof(void*)*9 + 1, v___x_4758_);
v___x_4762_ = lean_unsigned_to_nat(0u);
v___x_4763_ = lean_box(v___x_4758_);
v___f_4764_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed), 6, 4);
lean_closure_set(v___f_4764_, 0, v___f_4760_);
lean_closure_set(v___f_4764_, 1, v___x_4762_);
lean_closure_set(v___f_4764_, 2, v___x_4761_);
lean_closure_set(v___f_4764_, 3, v___x_4763_);
v___x_4765_ = lean_io_promise_new();
if (v_isShared_4754_ == 0)
{
lean_ctor_set(v___x_4753_, 0, v___x_4765_);
v___x_4767_ = v___x_4753_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4765_);
v___x_4767_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4768_, 0, v___x_4767_);
v___x_4769_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4762_, v___x_4758_, v___x_4768_, v___f_4764_);
v___x_4770_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4762_, v___x_4758_, v___x_4769_, v___f_4739_);
return v___x_4770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_config_4773_ = _args[0];
lean_object* v_h_4774_ = _args[1];
lean_object* v_responseBodyInstance_4775_ = _args[2];
lean_object* v_handler_4776_ = _args[3];
lean_object* v___f_4777_ = _args[4];
lean_object* v_inst_4778_ = _args[5];
lean_object* v_socket_4779_ = _args[6];
lean_object* v_connectionContext_4780_ = _args[7];
lean_object* v_extensions_4781_ = _args[8];
lean_object* v___f_4782_ = _args[9];
lean_object* v___f_4783_ = _args[10];
lean_object* v_machine_4784_ = _args[11];
lean_object* v_a_4785_ = _args[12];
lean_object* v___x_4786_ = _args[13];
lean_object* v___f_4787_ = _args[14];
lean_object* v_x_4788_ = _args[15];
lean_object* v___y_4789_ = _args[16];
_start:
{
lean_object* v_res_4790_; 
v_res_4790_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(v_config_4773_, v_h_4774_, v_responseBodyInstance_4775_, v_handler_4776_, v___f_4777_, v_inst_4778_, v_socket_4779_, v_connectionContext_4780_, v_extensions_4781_, v___f_4782_, v___f_4783_, v_machine_4784_, v_a_4785_, v___x_4786_, v___f_4787_, v_x_4788_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object* v_config_4791_, lean_object* v_h_4792_, lean_object* v_responseBodyInstance_4793_, lean_object* v_handler_4794_, lean_object* v___f_4795_, lean_object* v_inst_4796_, lean_object* v_socket_4797_, lean_object* v_connectionContext_4798_, lean_object* v_extensions_4799_, lean_object* v___f_4800_, lean_object* v___f_4801_, lean_object* v_machine_4802_, lean_object* v___f_4803_, lean_object* v_x_4804_){
_start:
{
if (lean_obj_tag(v_x_4804_) == 0)
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4814_; 
lean_dec_ref(v___f_4803_);
lean_dec_ref(v_machine_4802_);
lean_dec_ref(v___f_4801_);
lean_dec_ref(v___f_4800_);
lean_dec(v_extensions_4799_);
lean_dec_ref(v_connectionContext_4798_);
lean_dec(v_socket_4797_);
lean_dec_ref(v_inst_4796_);
lean_dec_ref(v___f_4795_);
lean_dec(v_handler_4794_);
lean_dec_ref(v_responseBodyInstance_4793_);
lean_dec_ref(v_h_4792_);
lean_dec_ref(v_config_4791_);
v_a_4806_ = lean_ctor_get(v_x_4804_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v_x_4804_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4808_ = v_x_4804_;
v_isShared_4809_ = v_isSharedCheck_4814_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v_x_4804_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4814_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4811_; 
if (v_isShared_4809_ == 0)
{
v___x_4811_ = v___x_4808_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_a_4806_);
v___x_4811_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
lean_object* v___x_4812_; 
v___x_4812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4812_, 0, v___x_4811_);
return v___x_4812_;
}
}
}
else
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4829_; 
v_a_4815_ = lean_ctor_get(v_x_4804_, 0);
v_isSharedCheck_4829_ = !lean_is_exclusive(v_x_4804_);
if (v_isSharedCheck_4829_ == 0)
{
v___x_4817_ = v_x_4804_;
v_isShared_4818_ = v_isSharedCheck_4829_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v_x_4804_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4829_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4819_; lean_object* v___f_4820_; lean_object* v___x_4821_; uint8_t v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4825_; 
v___x_4819_ = lean_box(0);
v___f_4820_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed), 17, 15);
lean_closure_set(v___f_4820_, 0, v_config_4791_);
lean_closure_set(v___f_4820_, 1, v_h_4792_);
lean_closure_set(v___f_4820_, 2, v_responseBodyInstance_4793_);
lean_closure_set(v___f_4820_, 3, v_handler_4794_);
lean_closure_set(v___f_4820_, 4, v___f_4795_);
lean_closure_set(v___f_4820_, 5, v_inst_4796_);
lean_closure_set(v___f_4820_, 6, v_socket_4797_);
lean_closure_set(v___f_4820_, 7, v_connectionContext_4798_);
lean_closure_set(v___f_4820_, 8, v_extensions_4799_);
lean_closure_set(v___f_4820_, 9, v___f_4800_);
lean_closure_set(v___f_4820_, 10, v___f_4801_);
lean_closure_set(v___f_4820_, 11, v_machine_4802_);
lean_closure_set(v___f_4820_, 12, v_a_4815_);
lean_closure_set(v___f_4820_, 13, v___x_4819_);
lean_closure_set(v___f_4820_, 14, v___f_4803_);
v___x_4821_ = lean_unsigned_to_nat(0u);
v___x_4822_ = 0;
v___x_4823_ = l_Std_CloseableChannel_new___redArg(v___x_4819_);
if (v_isShared_4818_ == 0)
{
lean_ctor_set(v___x_4817_, 0, v___x_4823_);
v___x_4825_ = v___x_4817_;
goto v_reusejp_4824_;
}
else
{
lean_object* v_reuseFailAlloc_4828_; 
v_reuseFailAlloc_4828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4828_, 0, v___x_4823_);
v___x_4825_ = v_reuseFailAlloc_4828_;
goto v_reusejp_4824_;
}
v_reusejp_4824_:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4826_, 0, v___x_4825_);
v___x_4827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4821_, v___x_4822_, v___x_4826_, v___f_4820_);
return v___x_4827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object* v_config_4830_, lean_object* v_h_4831_, lean_object* v_responseBodyInstance_4832_, lean_object* v_handler_4833_, lean_object* v___f_4834_, lean_object* v_inst_4835_, lean_object* v_socket_4836_, lean_object* v_connectionContext_4837_, lean_object* v_extensions_4838_, lean_object* v___f_4839_, lean_object* v___f_4840_, lean_object* v_machine_4841_, lean_object* v___f_4842_, lean_object* v_x_4843_, lean_object* v___y_4844_){
_start:
{
lean_object* v_res_4845_; 
v_res_4845_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(v_config_4830_, v_h_4831_, v_responseBodyInstance_4832_, v_handler_4833_, v___f_4834_, v_inst_4835_, v_socket_4836_, v_connectionContext_4837_, v_extensions_4838_, v___f_4839_, v___f_4840_, v_machine_4841_, v___f_4842_, v_x_4843_);
return v_res_4845_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object* v_inst_4849_, lean_object* v_h_4850_, lean_object* v_connection_4851_, lean_object* v_config_4852_, lean_object* v_connectionContext_4853_, lean_object* v_handler_4854_){
_start:
{
lean_object* v_responseBodyInstance_4856_; lean_object* v_onFailure_4857_; lean_object* v_socket_4858_; lean_object* v_machine_4859_; lean_object* v_extensions_4860_; lean_object* v___f_4861_; lean_object* v___f_4862_; lean_object* v___f_4863_; lean_object* v___f_4864_; lean_object* v___f_4865_; lean_object* v___f_4866_; lean_object* v___f_4867_; lean_object* v___f_4868_; lean_object* v___f_4869_; lean_object* v___x_4870_; uint8_t v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v_responseBodyInstance_4856_ = lean_ctor_get(v_h_4850_, 0);
lean_inc_ref_n(v_responseBodyInstance_4856_, 2);
v_onFailure_4857_ = lean_ctor_get(v_h_4850_, 2);
v_socket_4858_ = lean_ctor_get(v_connection_4851_, 0);
lean_inc_n(v_socket_4858_, 2);
v_machine_4859_ = lean_ctor_get(v_connection_4851_, 1);
lean_inc_ref(v_machine_4859_);
v_extensions_4860_ = lean_ctor_get(v_connection_4851_, 2);
lean_inc(v_extensions_4860_);
lean_dec_ref(v_connection_4851_);
v___f_4861_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_4862_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0));
v___f_4863_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1));
lean_inc(v_handler_4854_);
lean_inc_ref(v_onFailure_4857_);
v___f_4864_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4864_, 0, v_onFailure_4857_);
lean_closure_set(v___f_4864_, 1, v_handler_4854_);
lean_closure_set(v___f_4864_, 2, v___f_4863_);
v___f_4865_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2));
lean_inc_ref(v_inst_4849_);
v___f_4866_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4866_, 0, v_inst_4849_);
lean_closure_set(v___f_4866_, 1, v_socket_4858_);
lean_inc_ref(v___f_4866_);
v___f_4867_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4867_, 0, v___f_4866_);
v___f_4868_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4868_, 0, v_responseBodyInstance_4856_);
lean_closure_set(v___f_4868_, 1, v___f_4867_);
lean_closure_set(v___f_4868_, 2, v___f_4866_);
lean_closure_set(v___f_4868_, 3, v___f_4861_);
v___f_4869_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed), 15, 13);
lean_closure_set(v___f_4869_, 0, v_config_4852_);
lean_closure_set(v___f_4869_, 1, v_h_4850_);
lean_closure_set(v___f_4869_, 2, v_responseBodyInstance_4856_);
lean_closure_set(v___f_4869_, 3, v_handler_4854_);
lean_closure_set(v___f_4869_, 4, v___f_4865_);
lean_closure_set(v___f_4869_, 5, v_inst_4849_);
lean_closure_set(v___f_4869_, 6, v_socket_4858_);
lean_closure_set(v___f_4869_, 7, v_connectionContext_4853_);
lean_closure_set(v___f_4869_, 8, v_extensions_4860_);
lean_closure_set(v___f_4869_, 9, v___f_4862_);
lean_closure_set(v___f_4869_, 10, v___f_4864_);
lean_closure_set(v___f_4869_, 11, v_machine_4859_);
lean_closure_set(v___f_4869_, 12, v___f_4868_);
v___x_4870_ = lean_unsigned_to_nat(0u);
v___x_4871_ = 0;
v___x_4872_ = l_Std_Http_Body_mkStream();
v___x_4873_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4870_, v___x_4871_, v___x_4872_, v___f_4869_);
return v___x_4873_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object* v_inst_4874_, lean_object* v_h_4875_, lean_object* v_connection_4876_, lean_object* v_config_4877_, lean_object* v_connectionContext_4878_, lean_object* v_handler_4879_, lean_object* v___y_4880_){
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4874_, v_h_4875_, v_connection_4876_, v_config_4877_, v_connectionContext_4878_, v_handler_4879_);
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object* v_00_u03b1_4882_, lean_object* v_00_u03c3_4883_, lean_object* v_inst_4884_, lean_object* v_h_4885_, lean_object* v_connection_4886_, lean_object* v_config_4887_, lean_object* v_connectionContext_4888_, lean_object* v_handler_4889_){
_start:
{
lean_object* v___x_4891_; 
v___x_4891_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4884_, v_h_4885_, v_connection_4886_, v_config_4887_, v_connectionContext_4888_, v_handler_4889_);
return v___x_4891_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object* v_00_u03b1_4892_, lean_object* v_00_u03c3_4893_, lean_object* v_inst_4894_, lean_object* v_h_4895_, lean_object* v_connection_4896_, lean_object* v_config_4897_, lean_object* v_connectionContext_4898_, lean_object* v_handler_4899_, lean_object* v___y_4900_){
_start:
{
lean_object* v_res_4901_; 
v_res_4901_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(v_00_u03b1_4892_, v_00_u03c3_4893_, v_inst_4894_, v_h_4895_, v_connection_4896_, v_config_4897_, v_connectionContext_4898_, v_handler_4899_);
return v_res_4901_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_4902_; lean_object* v___x_4903_; 
v___x_4902_ = 0;
v___x_4903_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4902_);
return v___x_4903_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4904_ = lean_unsigned_to_nat(4096u);
v___x_4905_ = lean_mk_empty_byte_array(v___x_4904_);
return v___x_4905_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4906_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1);
v___x_4907_ = l_ByteArray_mkIterator(v___x_4906_);
return v___x_4907_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3(void){
_start:
{
uint8_t v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; 
v___x_4908_ = 0;
v___x_4909_ = lean_unsigned_to_nat(0u);
v___x_4910_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0);
v___x_4911_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2);
v___x_4912_ = lean_box(0);
v___x_4913_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_4913_, 0, v___x_4912_);
lean_ctor_set(v___x_4913_, 1, v___x_4911_);
lean_ctor_set(v___x_4913_, 2, v___x_4910_);
lean_ctor_set(v___x_4913_, 3, v___x_4909_);
lean_ctor_set(v___x_4913_, 4, v___x_4909_);
lean_ctor_set(v___x_4913_, 5, v___x_4909_);
lean_ctor_set_uint8(v___x_4913_, sizeof(void*)*6, v___x_4908_);
return v___x_4913_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7(void){
_start:
{
uint8_t v___x_4921_; lean_object* v___x_4922_; 
v___x_4921_ = 1;
v___x_4922_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4921_);
return v___x_4922_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_4923_; uint8_t v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; 
v___x_4923_ = lean_unsigned_to_nat(0u);
v___x_4924_ = 0;
v___x_4925_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7);
v___x_4926_ = lean_box(0);
v___x_4927_ = lean_box(0);
v___x_4928_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6));
v___x_4929_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4));
v___x_4930_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4930_, 0, v___x_4929_);
lean_ctor_set(v___x_4930_, 1, v___x_4928_);
lean_ctor_set(v___x_4930_, 2, v___x_4927_);
lean_ctor_set(v___x_4930_, 3, v___x_4926_);
lean_ctor_set(v___x_4930_, 4, v___x_4925_);
lean_ctor_set(v___x_4930_, 5, v___x_4923_);
lean_ctor_set_uint8(v___x_4930_, sizeof(void*)*6, v___x_4924_);
lean_ctor_set_uint8(v___x_4930_, sizeof(void*)*6 + 1, v___x_4924_);
lean_ctor_set_uint8(v___x_4930_, sizeof(void*)*6 + 2, v___x_4924_);
return v___x_4930_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object* v_config_4931_, lean_object* v_client_4932_, lean_object* v_extensions_4933_, lean_object* v_inst_4934_, lean_object* v_inst_4935_, lean_object* v_handler_4936_, lean_object* v_x_4937_){
_start:
{
if (lean_obj_tag(v_x_4937_) == 0)
{
lean_object* v_a_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4947_; 
lean_dec(v_handler_4936_);
lean_dec_ref(v_inst_4935_);
lean_dec_ref(v_inst_4934_);
lean_dec(v_extensions_4933_);
lean_dec(v_client_4932_);
lean_dec_ref(v_config_4931_);
v_a_4939_ = lean_ctor_get(v_x_4937_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v_x_4937_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4941_ = v_x_4937_;
v_isShared_4942_ = v_isSharedCheck_4947_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_a_4939_);
lean_dec(v_x_4937_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4947_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4944_; 
if (v_isShared_4942_ == 0)
{
v___x_4944_ = v___x_4941_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v_a_4939_);
v___x_4944_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
lean_object* v___x_4945_; 
v___x_4945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4945_, 0, v___x_4944_);
return v___x_4945_;
}
}
}
else
{
lean_object* v_a_4948_; uint8_t v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; uint8_t v_enableKeepAlive_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v_a_4948_ = lean_ctor_get(v_x_4937_, 0);
lean_inc(v_a_4948_);
lean_dec_ref_known(v_x_4937_, 1);
v___x_4949_ = 0;
v___x_4950_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3);
v___x_4951_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5));
v___x_4952_ = lean_box(0);
v___x_4953_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8);
v___x_4954_ = l_Std_Http_Config_toH1Config(v_config_4931_);
v_enableKeepAlive_4955_ = lean_ctor_get_uint8(v___x_4954_, sizeof(void*)*18);
v___x_4956_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4956_, 0, v___x_4950_);
lean_ctor_set(v___x_4956_, 1, v___x_4953_);
lean_ctor_set(v___x_4956_, 2, v___x_4954_);
lean_ctor_set(v___x_4956_, 3, v___x_4951_);
lean_ctor_set(v___x_4956_, 4, v___x_4952_);
lean_ctor_set(v___x_4956_, 5, v___x_4952_);
lean_ctor_set_uint8(v___x_4956_, sizeof(void*)*6, v_enableKeepAlive_4955_);
lean_ctor_set_uint8(v___x_4956_, sizeof(void*)*6 + 1, v___x_4949_);
lean_ctor_set_uint8(v___x_4956_, sizeof(void*)*6 + 2, v___x_4949_);
v___x_4957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4957_, 0, v_client_4932_);
lean_ctor_set(v___x_4957_, 1, v___x_4956_);
lean_ctor_set(v___x_4957_, 2, v_extensions_4933_);
v___x_4958_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4934_, v_inst_4935_, v___x_4957_, v_config_4931_, v_a_4948_, v_handler_4936_);
return v___x_4958_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object* v_config_4959_, lean_object* v_client_4960_, lean_object* v_extensions_4961_, lean_object* v_inst_4962_, lean_object* v_inst_4963_, lean_object* v_handler_4964_, lean_object* v_x_4965_, lean_object* v___y_4966_){
_start:
{
lean_object* v_res_4967_; 
v_res_4967_ = l_Std_Http_Server_serveConnection___redArg___lam__0(v_config_4959_, v_client_4960_, v_extensions_4961_, v_inst_4962_, v_inst_4963_, v_handler_4964_, v_x_4965_);
return v_res_4967_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object* v_inst_4968_, lean_object* v_inst_4969_, lean_object* v_client_4970_, lean_object* v_handler_4971_, lean_object* v_config_4972_, lean_object* v_extensions_4973_, lean_object* v___y_4974_){
_start:
{
lean_object* v___f_4976_; lean_object* v___x_4977_; uint8_t v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; 
v___f_4976_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_4976_, 0, v_config_4972_);
lean_closure_set(v___f_4976_, 1, v_client_4970_);
lean_closure_set(v___f_4976_, 2, v_extensions_4973_);
lean_closure_set(v___f_4976_, 3, v_inst_4968_);
lean_closure_set(v___f_4976_, 4, v_inst_4969_);
lean_closure_set(v___f_4976_, 5, v_handler_4971_);
v___x_4977_ = lean_unsigned_to_nat(0u);
v___x_4978_ = 0;
lean_inc_ref(v___y_4974_);
v___x_4979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4979_, 0, v___y_4974_);
v___x_4980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4979_);
v___x_4981_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4977_, v___x_4978_, v___x_4980_, v___f_4976_);
return v___x_4981_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object* v_inst_4982_, lean_object* v_inst_4983_, lean_object* v_client_4984_, lean_object* v_handler_4985_, lean_object* v_config_4986_, lean_object* v_extensions_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4982_, v_inst_4983_, v_client_4984_, v_handler_4985_, v_config_4986_, v_extensions_4987_, v___y_4988_);
lean_dec_ref(v___y_4988_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object* v_t_4991_, lean_object* v_00_u03c3_4992_, lean_object* v_inst_4993_, lean_object* v_inst_4994_, lean_object* v_client_4995_, lean_object* v_handler_4996_, lean_object* v_config_4997_, lean_object* v_extensions_4998_, lean_object* v___y_4999_){
_start:
{
lean_object* v___x_5001_; 
v___x_5001_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4993_, v_inst_4994_, v_client_4995_, v_handler_4996_, v_config_4997_, v_extensions_4998_, v___y_4999_);
return v___x_5001_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object* v_t_5002_, lean_object* v_00_u03c3_5003_, lean_object* v_inst_5004_, lean_object* v_inst_5005_, lean_object* v_client_5006_, lean_object* v_handler_5007_, lean_object* v_config_5008_, lean_object* v_extensions_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l_Std_Http_Server_serveConnection(v_t_5002_, v_00_u03c3_5003_, v_inst_5004_, v_inst_5005_, v_client_5006_, v_handler_5007_, v_config_5008_, v_extensions_5009_, v___y_5010_);
lean_dec_ref(v___y_5010_);
return v_res_5012_;
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
