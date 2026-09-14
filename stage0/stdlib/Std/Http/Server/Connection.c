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
extern lean_object* l_instMonadBaseIO;
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
uint8_t v_x_3710__boxed_223_; lean_object* v_res_224_; 
v_x_3710__boxed_223_ = lean_unbox(v_x_221_);
v_res_224_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(v_x_3710__boxed_223_);
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
lean_object* v___y_408_; lean_object* v___y_409_; uint8_t v___y_410_; lean_object* v_val_411_; lean_object* v_socket_414_; lean_object* v_expect_415_; lean_object* v_response_416_; lean_object* v_responseBody_417_; lean_object* v_requestBody_418_; lean_object* v_timeout_419_; lean_object* v_keepAliveTimeout_420_; lean_object* v_headerTimeout_421_; lean_object* v_connectionContext_422_; lean_object* v___f_423_; lean_object* v___f_424_; lean_object* v___f_425_; lean_object* v___f_426_; lean_object* v___f_427_; lean_object* v___f_428_; lean_object* v___f_429_; lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___f_433_; lean_object* v___y_435_; lean_object* v___y_485_; 
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
v___x_413_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_408_, v___y_410_, v___x_412_, v___y_409_);
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
v___y_408_ = v___x_453_;
v___y_409_ = v___f_452_;
v___y_410_ = v___x_454_;
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
v___y_408_ = v___x_453_;
v___y_409_ = v___f_452_;
v___y_410_ = v___x_454_;
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
uint8_t v___y_1379__boxed_561_; lean_object* v_res_562_; 
v___y_1379__boxed_561_ = lean_unbox(v___y_559_);
v_res_562_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(v___y_1379__boxed_561_);
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
uint8_t v___x_1423__boxed_590_; lean_object* v_res_591_; 
v___x_1423__boxed_590_ = lean_unbox(v___x_587_);
v_res_591_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(v___x_1423__boxed_590_, v_x_588_);
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
uint8_t v___x_1438__boxed_636_; uint8_t v___x_1443__boxed_637_; lean_object* v_res_638_; 
v___x_1438__boxed_636_ = lean_unbox(v___x_627_);
v___x_1443__boxed_637_ = lean_unbox(v___x_632_);
v_res_638_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(v_connectionContext_626_, v___x_1438__boxed_636_, v_a_628_, v___f_629_, v___f_630_, v___x_631_, v___x_1443__boxed_637_, v___f_633_, v_x_634_);
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
uint8_t v___x_1512__boxed_663_; lean_object* v_res_664_; 
v___x_1512__boxed_663_ = lean_unbox(v___x_659_);
v_res_664_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(v_config_657_, v___x_658_, v___x_1512__boxed_663_, v___f_660_, v_x_661_);
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
uint8_t v___x_1552__boxed_715_; lean_object* v_res_716_; 
v___x_1552__boxed_715_ = lean_unbox(v___x_706_);
v_res_716_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(v_connectionContext_705_, v___x_1552__boxed_715_, v_a_707_, v___f_708_, v___x_709_, v___f_710_, v_config_711_, v___f_712_, v_x_713_);
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
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_757_; 
v_a_737_ = lean_ctor_get(v_x_726_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_x_726_);
if (v_isSharedCheck_757_ == 0)
{
v___x_739_ = v_x_726_;
v_isShared_740_ = v_isSharedCheck_757_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v_x_726_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_757_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v_onContinue_741_; lean_object* v___f_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___f_746_; uint8_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
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
v___x_748_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_748_, 0, lean_box(0));
lean_closure_set(v___x_748_, 1, v___x_743_);
v___x_749_ = lean_io_as_task(v___x_748_, v___x_744_);
v___x_750_ = 1;
v___x_751_ = lean_task_bind(v___x_749_, v___f_725_, v___x_744_, v___x_750_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_751_);
v___x_753_ = v___x_739_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_751_);
v___x_753_ = v_reuseFailAlloc_756_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
v___x_755_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_744_, v___x_747_, v___x_754_, v___f_746_);
return v___x_755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object* v_inst_758_, lean_object* v_handler_759_, lean_object* v_head_760_, lean_object* v_connectionContext_761_, lean_object* v___x_762_, lean_object* v___f_763_, lean_object* v___f_764_, lean_object* v_config_765_, lean_object* v___f_766_, lean_object* v_x_767_, lean_object* v___y_768_){
_start:
{
uint8_t v___x_1635__boxed_769_; lean_object* v_res_770_; 
v___x_1635__boxed_769_ = lean_unbox(v___x_762_);
v_res_770_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(v_inst_758_, v_handler_759_, v_head_760_, v_connectionContext_761_, v___x_1635__boxed_769_, v___f_763_, v___f_764_, v_config_765_, v___f_766_, v_x_767_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object* v_inst_773_, lean_object* v_handler_774_, lean_object* v_machine_775_, lean_object* v_head_776_, lean_object* v_config_777_, lean_object* v_connectionContext_778_){
_start:
{
lean_object* v___f_780_; lean_object* v___f_781_; lean_object* v___f_782_; uint8_t v___x_783_; lean_object* v___x_784_; lean_object* v___f_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___f_780_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_780_, 0, v_machine_775_);
v___f_781_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0));
v___f_782_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1));
v___x_783_ = 0;
v___x_784_ = lean_box(v___x_783_);
v___f_785_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_785_, 0, v_inst_773_);
lean_closure_set(v___f_785_, 1, v_handler_774_);
lean_closure_set(v___f_785_, 2, v_head_776_);
lean_closure_set(v___f_785_, 3, v_connectionContext_778_);
lean_closure_set(v___f_785_, 4, v___x_784_);
lean_closure_set(v___f_785_, 5, v___f_781_);
lean_closure_set(v___f_785_, 6, v___f_780_);
lean_closure_set(v___f_785_, 7, v_config_777_);
lean_closure_set(v___f_785_, 8, v___f_782_);
v___x_786_ = lean_box(0);
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l_Std_CloseableChannel_new___redArg(v___x_786_);
v___x_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_787_, v___x_783_, v___x_790_, v___f_785_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object* v_inst_792_, lean_object* v_handler_793_, lean_object* v_machine_794_, lean_object* v_head_795_, lean_object* v_config_796_, lean_object* v_connectionContext_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_792_, v_handler_793_, v_machine_794_, v_head_795_, v_config_796_, v_connectionContext_797_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object* v_00_u03c3_800_, lean_object* v_inst_801_, lean_object* v_handler_802_, lean_object* v_machine_803_, lean_object* v_head_804_, lean_object* v_config_805_, lean_object* v_connectionContext_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_801_, v_handler_802_, v_machine_803_, v_head_804_, v_config_805_, v_connectionContext_806_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object* v_00_u03c3_809_, lean_object* v_inst_810_, lean_object* v_handler_811_, lean_object* v_machine_812_, lean_object* v_head_813_, lean_object* v_config_814_, lean_object* v_connectionContext_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(v_00_u03c3_809_, v_inst_810_, v_handler_811_, v_machine_812_, v_head_813_, v_config_814_, v_connectionContext_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
if (lean_obj_tag(v_x_819_) == 0)
{
return v_x_818_;
}
else
{
lean_object* v_key_820_; lean_object* v_value_821_; lean_object* v_tail_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_845_; 
v_key_820_ = lean_ctor_get(v_x_819_, 0);
v_value_821_ = lean_ctor_get(v_x_819_, 1);
v_tail_822_ = lean_ctor_get(v_x_819_, 2);
v_isSharedCheck_845_ = !lean_is_exclusive(v_x_819_);
if (v_isSharedCheck_845_ == 0)
{
v___x_824_ = v_x_819_;
v_isShared_825_ = v_isSharedCheck_845_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_tail_822_);
lean_inc(v_value_821_);
lean_inc(v_key_820_);
lean_dec(v_x_819_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_845_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; uint64_t v___x_827_; uint64_t v___x_828_; uint64_t v___x_829_; uint64_t v_fold_830_; uint64_t v___x_831_; uint64_t v___x_832_; uint64_t v___x_833_; size_t v___x_834_; size_t v___x_835_; size_t v___x_836_; size_t v___x_837_; size_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_826_ = lean_array_get_size(v_x_818_);
v___x_827_ = lean_string_hash(v_key_820_);
v___x_828_ = 32ULL;
v___x_829_ = lean_uint64_shift_right(v___x_827_, v___x_828_);
v_fold_830_ = lean_uint64_xor(v___x_827_, v___x_829_);
v___x_831_ = 16ULL;
v___x_832_ = lean_uint64_shift_right(v_fold_830_, v___x_831_);
v___x_833_ = lean_uint64_xor(v_fold_830_, v___x_832_);
v___x_834_ = lean_uint64_to_usize(v___x_833_);
v___x_835_ = lean_usize_of_nat(v___x_826_);
v___x_836_ = ((size_t)1ULL);
v___x_837_ = lean_usize_sub(v___x_835_, v___x_836_);
v___x_838_ = lean_usize_land(v___x_834_, v___x_837_);
v___x_839_ = lean_array_uget_borrowed(v_x_818_, v___x_838_);
lean_inc(v___x_839_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 2, v___x_839_);
v___x_841_ = v___x_824_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_key_820_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_value_821_);
lean_ctor_set(v_reuseFailAlloc_844_, 2, v___x_839_);
v___x_841_ = v_reuseFailAlloc_844_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_842_; 
v___x_842_ = lean_array_uset(v_x_818_, v___x_838_, v___x_841_);
v_x_818_ = v___x_842_;
v_x_819_ = v_tail_822_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(lean_object* v_i_846_, lean_object* v_source_847_, lean_object* v_target_848_){
_start:
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = lean_array_get_size(v_source_847_);
v___x_850_ = lean_nat_dec_lt(v_i_846_, v___x_849_);
if (v___x_850_ == 0)
{
lean_dec_ref(v_source_847_);
lean_dec(v_i_846_);
return v_target_848_;
}
else
{
lean_object* v_es_851_; lean_object* v___x_852_; lean_object* v_source_853_; lean_object* v_target_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_es_851_ = lean_array_fget(v_source_847_, v_i_846_);
v___x_852_ = lean_box(0);
v_source_853_ = lean_array_fset(v_source_847_, v_i_846_, v___x_852_);
v_target_854_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(v_target_848_, v_es_851_);
v___x_855_ = lean_unsigned_to_nat(1u);
v___x_856_ = lean_nat_add(v_i_846_, v___x_855_);
lean_dec(v_i_846_);
v_i_846_ = v___x_856_;
v_source_847_ = v_source_853_;
v_target_848_ = v_target_854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(lean_object* v_data_858_){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v_nbuckets_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_859_ = lean_array_get_size(v_data_858_);
v___x_860_ = lean_unsigned_to_nat(2u);
v_nbuckets_861_ = lean_nat_mul(v___x_859_, v___x_860_);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_box(0);
v___x_864_ = lean_mk_array(v_nbuckets_861_, v___x_863_);
v___x_865_ = lean_array_propagate_mark(v_data_858_, v___x_864_);
v___x_866_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(v___x_862_, v_data_858_, v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(lean_object* v_i_867_, lean_object* v_x_868_){
_start:
{
if (lean_obj_tag(v_x_868_) == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_869_ = lean_unsigned_to_nat(1u);
v___x_870_ = lean_mk_empty_array_with_capacity(v___x_869_);
v___x_871_ = lean_array_push(v___x_870_, v_i_867_);
v___x_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
else
{
lean_object* v_val_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_881_; 
v_val_873_ = lean_ctor_get(v_x_868_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_x_868_);
if (v_isSharedCheck_881_ == 0)
{
v___x_875_ = v_x_868_;
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_val_873_);
lean_dec(v_x_868_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_877_; lean_object* v___x_879_; 
v___x_877_ = lean_array_push(v_val_873_, v_i_867_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_877_);
v___x_879_ = v___x_875_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_877_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(lean_object* v_i_882_, lean_object* v_a_883_, lean_object* v_x_884_){
_start:
{
if (lean_obj_tag(v_x_884_) == 0)
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v_val_887_; lean_object* v___x_888_; 
v___x_885_ = lean_box(0);
v___x_886_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(v_i_882_, v___x_885_);
v_val_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_val_887_);
lean_dec(v___x_886_);
v___x_888_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_888_, 0, v_a_883_);
lean_ctor_set(v___x_888_, 1, v_val_887_);
lean_ctor_set(v___x_888_, 2, v_x_884_);
return v___x_888_;
}
else
{
lean_object* v_key_889_; lean_object* v_value_890_; lean_object* v_tail_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_906_; 
v_key_889_ = lean_ctor_get(v_x_884_, 0);
v_value_890_ = lean_ctor_get(v_x_884_, 1);
v_tail_891_ = lean_ctor_get(v_x_884_, 2);
v_isSharedCheck_906_ = !lean_is_exclusive(v_x_884_);
if (v_isSharedCheck_906_ == 0)
{
v___x_893_ = v_x_884_;
v_isShared_894_ = v_isSharedCheck_906_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_tail_891_);
lean_inc(v_value_890_);
lean_inc(v_key_889_);
lean_dec(v_x_884_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_906_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; 
v___x_895_ = lean_string_dec_eq(v_key_889_, v_a_883_);
if (v___x_895_ == 0)
{
lean_object* v_tail_896_; lean_object* v___x_898_; 
v_tail_896_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(v_i_882_, v_a_883_, v_tail_891_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 2, v_tail_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_key_889_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_value_890_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_tail_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v_val_902_; lean_object* v___x_904_; 
lean_dec(v_key_889_);
v___x_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_900_, 0, v_value_890_);
v___x_901_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0(v_i_882_, v___x_900_);
v_val_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_val_902_);
lean_dec(v___x_901_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 1, v_val_902_);
lean_ctor_set(v___x_893_, 0, v_a_883_);
v___x_904_ = v___x_893_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_883_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_val_902_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_tail_891_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(lean_object* v_a_907_, lean_object* v_x_908_){
_start:
{
if (lean_obj_tag(v_x_908_) == 0)
{
uint8_t v___x_909_; 
v___x_909_ = 0;
return v___x_909_;
}
else
{
lean_object* v_key_910_; lean_object* v_tail_911_; uint8_t v___x_912_; 
v_key_910_ = lean_ctor_get(v_x_908_, 0);
v_tail_911_ = lean_ctor_get(v_x_908_, 2);
v___x_912_ = lean_string_dec_eq(v_key_910_, v_a_907_);
if (v___x_912_ == 0)
{
v_x_908_ = v_tail_911_;
goto _start;
}
else
{
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg___boxed(lean_object* v_a_914_, lean_object* v_x_915_){
_start:
{
uint8_t v_res_916_; lean_object* v_r_917_; 
v_res_916_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_914_, v_x_915_);
lean_dec(v_x_915_);
lean_dec_ref(v_a_914_);
v_r_917_ = lean_box(v_res_916_);
return v_r_917_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object* v_i_918_, lean_object* v_m_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_size_921_; lean_object* v_buckets_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_972_; 
v_size_921_ = lean_ctor_get(v_m_919_, 0);
v_buckets_922_ = lean_ctor_get(v_m_919_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v_m_919_);
if (v_isSharedCheck_972_ == 0)
{
v___x_924_ = v_m_919_;
v_isShared_925_ = v_isSharedCheck_972_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_buckets_922_);
lean_inc(v_size_921_);
lean_dec(v_m_919_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_972_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; uint64_t v___x_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v_fold_930_; uint64_t v___x_931_; uint64_t v___x_932_; uint64_t v___x_933_; size_t v___x_934_; size_t v___x_935_; size_t v___x_936_; size_t v___x_937_; size_t v___x_938_; lean_object* v_bkt_939_; uint8_t v___x_940_; 
v___x_926_ = lean_array_get_size(v_buckets_922_);
v___x_927_ = lean_string_hash(v_a_920_);
v___x_928_ = 32ULL;
v___x_929_ = lean_uint64_shift_right(v___x_927_, v___x_928_);
v_fold_930_ = lean_uint64_xor(v___x_927_, v___x_929_);
v___x_931_ = 16ULL;
v___x_932_ = lean_uint64_shift_right(v_fold_930_, v___x_931_);
v___x_933_ = lean_uint64_xor(v_fold_930_, v___x_932_);
v___x_934_ = lean_uint64_to_usize(v___x_933_);
v___x_935_ = lean_usize_of_nat(v___x_926_);
v___x_936_ = ((size_t)1ULL);
v___x_937_ = lean_usize_sub(v___x_935_, v___x_936_);
v___x_938_ = lean_usize_land(v___x_934_, v___x_937_);
v_bkt_939_ = lean_array_uget_borrowed(v_buckets_922_, v___x_938_);
v___x_940_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_920_, v_bkt_939_);
if (v___x_940_ == 0)
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v_size_x27_944_; lean_object* v___x_945_; lean_object* v_buckets_x27_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_941_ = lean_unsigned_to_nat(1u);
v___x_942_ = lean_mk_empty_array_with_capacity(v___x_941_);
v___x_943_ = lean_array_push(v___x_942_, v_i_918_);
v_size_x27_944_ = lean_nat_add(v_size_921_, v___x_941_);
lean_dec(v_size_921_);
lean_inc(v_bkt_939_);
v___x_945_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_945_, 0, v_a_920_);
lean_ctor_set(v___x_945_, 1, v___x_943_);
lean_ctor_set(v___x_945_, 2, v_bkt_939_);
v_buckets_x27_946_ = lean_array_uset(v_buckets_922_, v___x_938_, v___x_945_);
v___x_947_ = lean_unsigned_to_nat(4u);
v___x_948_ = lean_nat_mul(v_size_x27_944_, v___x_947_);
v___x_949_ = lean_unsigned_to_nat(3u);
v___x_950_ = lean_nat_div(v___x_948_, v___x_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_array_get_size(v_buckets_x27_946_);
v___x_952_ = lean_nat_dec_le(v___x_950_, v___x_951_);
lean_dec(v___x_950_);
if (v___x_952_ == 0)
{
lean_object* v_val_953_; lean_object* v___x_955_; 
v_val_953_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(v_buckets_x27_946_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v_val_953_);
lean_ctor_set(v___x_924_, 0, v_size_x27_944_);
v___x_955_ = v___x_924_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_size_x27_944_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_val_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
else
{
lean_object* v___x_958_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v_buckets_x27_946_);
lean_ctor_set(v___x_924_, 0, v_size_x27_944_);
v___x_958_ = v___x_924_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_size_x27_944_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_buckets_x27_946_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
else
{
lean_object* v___x_960_; lean_object* v_buckets_x27_961_; lean_object* v_bkt_x27_962_; lean_object* v___y_964_; uint8_t v___x_969_; 
lean_inc(v_bkt_939_);
v___x_960_ = lean_box(0);
v_buckets_x27_961_ = lean_array_uset(v_buckets_922_, v___x_938_, v___x_960_);
lean_inc_ref(v_a_920_);
v_bkt_x27_962_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2(v_i_918_, v_a_920_, v_bkt_939_);
v___x_969_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_920_, v_bkt_x27_962_);
lean_dec_ref(v_a_920_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_unsigned_to_nat(1u);
v___x_971_ = lean_nat_sub(v_size_921_, v___x_970_);
lean_dec(v_size_921_);
v___y_964_ = v___x_971_;
goto v___jp_963_;
}
else
{
v___y_964_ = v_size_921_;
goto v___jp_963_;
}
v___jp_963_:
{
lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_965_ = lean_array_uset(v_buckets_x27_961_, v___x_938_, v_bkt_x27_962_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v___x_965_);
lean_ctor_set(v___x_924_, 0, v___y_964_);
v___x_967_ = v___x_924_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___y_964_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object* v_entries_973_, lean_object* v___x_974_, lean_object* v_indexes_975_, lean_object* v_status_976_, uint8_t v_version_977_, lean_object* v_x_978_){
_start:
{
if (lean_obj_tag(v_x_978_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_status_976_);
lean_dec_ref(v_indexes_975_);
lean_dec_ref(v___x_974_);
lean_dec_ref(v_entries_973_);
v_a_980_ = lean_ctor_get(v_x_978_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v_x_978_);
if (v_isSharedCheck_988_ == 0)
{
v___x_982_ = v_x_978_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v_x_978_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_987_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1005_; 
v_a_989_ = lean_ctor_get(v_x_978_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_x_978_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_991_ = v_x_978_;
v_isShared_992_ = v_isSharedCheck_1005_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v_x_978_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1005_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v_i_995_; lean_object* v___x_996_; lean_object* v_entries_997_; lean_object* v_indexes_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_993_ = l_Std_Time_DateTime_toRFC822String(v_a_989_);
v___x_994_ = l_Std_Http_Header_Value_ofString_x21(v___x_993_);
v_i_995_ = lean_array_get_size(v_entries_973_);
lean_inc_ref(v___x_974_);
v___x_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_974_);
lean_ctor_set(v___x_996_, 1, v___x_994_);
v_entries_997_ = lean_array_push(v_entries_973_, v___x_996_);
v_indexes_998_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(v_i_995_, v_indexes_975_, v___x_974_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v_entries_997_);
lean_ctor_set(v___x_999_, 1, v_indexes_998_);
v___x_1000_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1000_, 0, v_status_976_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
lean_ctor_set_uint8(v___x_1000_, sizeof(void*)*2, v_version_977_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_1000_);
v___x_1002_ = v___x_991_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
return v___x_1003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object* v_entries_1006_, lean_object* v___x_1007_, lean_object* v_indexes_1008_, lean_object* v_status_1009_, lean_object* v_version_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_){
_start:
{
uint8_t v_version_boxed_1013_; lean_object* v_res_1014_; 
v_version_boxed_1013_ = lean_unbox(v_version_1010_);
v_res_1014_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(v_entries_1006_, v___x_1007_, v_indexes_1008_, v_status_1009_, v_version_boxed_1013_, v_x_1011_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object* v_tz_1015_, lean_object* v_a_1016_, lean_object* v___x_1017_, lean_object* v_x_1018_){
_start:
{
lean_object* v_offset_1019_; lean_object* v_second_1020_; lean_object* v_nano_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_offset_1019_ = lean_ctor_get(v_tz_1015_, 0);
v_second_1020_ = lean_ctor_get(v_a_1016_, 0);
v_nano_1021_ = lean_ctor_get(v_a_1016_, 1);
v___x_1022_ = lean_nat_to_int(v___x_1017_);
v___x_1023_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_1024_ = lean_int_mul(v_second_1020_, v___x_1023_);
v___x_1025_ = lean_int_add(v___x_1024_, v_nano_1021_);
lean_dec(v___x_1024_);
v___x_1026_ = lean_int_mul(v_offset_1019_, v___x_1023_);
v___x_1027_ = lean_int_add(v___x_1026_, v___x_1022_);
lean_dec(v___x_1022_);
lean_dec(v___x_1026_);
v___x_1028_ = lean_int_add(v___x_1025_, v___x_1027_);
lean_dec(v___x_1027_);
lean_dec(v___x_1025_);
v___x_1029_ = l_Std_Time_Duration_ofNanoseconds(v___x_1028_);
lean_dec(v___x_1028_);
v___x_1030_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object* v_tz_1031_, lean_object* v_a_1032_, lean_object* v___x_1033_, lean_object* v_x_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(v_tz_1031_, v_a_1032_, v___x_1033_, v_x_1034_);
lean_dec_ref(v_a_1032_);
lean_dec_ref(v_tz_1031_);
return v_res_1035_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(lean_object* v_m_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_buckets_1038_; lean_object* v___x_1039_; uint64_t v___x_1040_; uint64_t v___x_1041_; uint64_t v___x_1042_; uint64_t v_fold_1043_; uint64_t v___x_1044_; uint64_t v___x_1045_; uint64_t v___x_1046_; size_t v___x_1047_; size_t v___x_1048_; size_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; lean_object* v___x_1052_; uint8_t v___x_1053_; 
v_buckets_1038_ = lean_ctor_get(v_m_1036_, 1);
v___x_1039_ = lean_array_get_size(v_buckets_1038_);
v___x_1040_ = lean_string_hash(v_a_1037_);
v___x_1041_ = 32ULL;
v___x_1042_ = lean_uint64_shift_right(v___x_1040_, v___x_1041_);
v_fold_1043_ = lean_uint64_xor(v___x_1040_, v___x_1042_);
v___x_1044_ = 16ULL;
v___x_1045_ = lean_uint64_shift_right(v_fold_1043_, v___x_1044_);
v___x_1046_ = lean_uint64_xor(v_fold_1043_, v___x_1045_);
v___x_1047_ = lean_uint64_to_usize(v___x_1046_);
v___x_1048_ = lean_usize_of_nat(v___x_1039_);
v___x_1049_ = ((size_t)1ULL);
v___x_1050_ = lean_usize_sub(v___x_1048_, v___x_1049_);
v___x_1051_ = lean_usize_land(v___x_1047_, v___x_1050_);
v___x_1052_ = lean_array_uget_borrowed(v_buckets_1038_, v___x_1051_);
v___x_1053_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_1037_, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg___boxed(lean_object* v_m_1054_, lean_object* v_a_1055_){
_start:
{
uint8_t v_res_1056_; lean_object* v_r_1057_; 
v_res_1056_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(v_m_1054_, v_a_1055_);
lean_dec_ref(v_a_1055_);
lean_dec_ref(v_m_1054_);
v_r_1057_ = lean_box(v_res_1056_);
return v_r_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object* v_config_1059_, lean_object* v_head_1060_){
_start:
{
lean_object* v_headers_1065_; uint8_t v_generateDate_1066_; lean_object* v_status_1067_; uint8_t v_version_1068_; lean_object* v_entries_1069_; lean_object* v_indexes_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___f_1073_; uint8_t v___y_1075_; lean_object* v___y_1076_; lean_object* v_val_1077_; uint8_t v___y_1081_; lean_object* v___y_1082_; lean_object* v_a_1083_; uint8_t v___y_1086_; uint8_t v___x_1107_; 
v_headers_1065_ = lean_ctor_get(v_head_1060_, 1);
v_generateDate_1066_ = lean_ctor_get_uint8(v_config_1059_, sizeof(void*)*24 + 1);
v_status_1067_ = lean_ctor_get(v_head_1060_, 0);
v_version_1068_ = lean_ctor_get_uint8(v_head_1060_, sizeof(void*)*2);
v_entries_1069_ = lean_ctor_get(v_headers_1065_, 0);
v_indexes_1070_ = lean_ctor_get(v_headers_1065_, 1);
v___x_1071_ = l_Std_Http_Header_Name_date;
v___x_1072_ = lean_box(v_version_1068_);
lean_inc(v_status_1067_);
lean_inc_ref(v_indexes_1070_);
lean_inc_ref(v_entries_1069_);
v___f_1073_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1073_, 0, v_entries_1069_);
lean_closure_set(v___f_1073_, 1, v___x_1071_);
lean_closure_set(v___f_1073_, 2, v_indexes_1070_);
lean_closure_set(v___f_1073_, 3, v_status_1067_);
lean_closure_set(v___f_1073_, 4, v___x_1072_);
v___x_1107_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(v_indexes_1070_, v___x_1071_);
if (v___x_1107_ == 0)
{
uint8_t v___x_1108_; 
v___x_1108_ = 1;
v___y_1086_ = v___x_1108_;
goto v___jp_1085_;
}
else
{
uint8_t v___x_1109_; 
v___x_1109_ = 0;
v___y_1086_ = v___x_1109_;
goto v___jp_1085_;
}
v___jp_1062_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1063_, 0, v_head_1060_);
v___x_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
return v___x_1064_;
}
v___jp_1074_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1078_, 0, v_val_1077_);
v___x_1079_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_1076_, v___y_1075_, v___x_1078_, v___f_1073_);
return v___x_1079_;
}
v___jp_1080_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1084_, 0, v_a_1083_);
v___y_1075_ = v___y_1081_;
v___y_1076_ = v___y_1082_;
v_val_1077_ = v___x_1084_;
goto v___jp_1074_;
}
v___jp_1085_:
{
if (v_generateDate_1066_ == 0)
{
lean_dec_ref(v___f_1073_);
goto v___jp_1062_;
}
else
{
if (v___y_1086_ == 0)
{
lean_dec_ref(v___f_1073_);
goto v___jp_1062_;
}
else
{
lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; 
lean_dec_ref(v_head_1060_);
v___x_1087_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___closed__0));
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = 0;
v___x_1090_ = lean_get_current_time();
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = l_Std_Time_Database_defaultGetZoneRules(v___x_1087_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1104_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1095_ = v___x_1092_;
v_isShared_1096_ = v_isSharedCheck_1104_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1092_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1104_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v_tz_1097_; lean_object* v___f_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1102_; 
lean_inc(v_a_1093_);
v_tz_1097_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v_a_1093_, v_a_1091_);
lean_inc(v_a_1091_);
lean_inc_ref(v_tz_1097_);
v___f_1098_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1098_, 0, v_tz_1097_);
lean_closure_set(v___f_1098_, 1, v_a_1091_);
lean_closure_set(v___f_1098_, 2, v___x_1088_);
v___x_1099_ = lean_mk_thunk(v___f_1098_);
v___x_1100_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v_a_1091_);
lean_ctor_set(v___x_1100_, 2, v_a_1093_);
lean_ctor_set(v___x_1100_, 3, v_tz_1097_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set_tag(v___x_1095_, 1);
lean_ctor_set(v___x_1095_, 0, v___x_1100_);
v___x_1102_ = v___x_1095_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
v___y_1075_ = v___x_1089_;
v___y_1076_ = v___x_1088_;
v_val_1077_ = v___x_1102_;
goto v___jp_1074_;
}
}
}
else
{
lean_object* v_a_1105_; 
lean_dec(v_a_1091_);
v_a_1105_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1092_, 1);
v___y_1081_ = v___x_1089_;
v___y_1082_ = v___x_1088_;
v_a_1083_ = v_a_1105_;
goto v___jp_1080_;
}
}
else
{
lean_object* v_a_1106_; 
v_a_1106_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1090_, 1);
v___y_1081_ = v___x_1089_;
v___y_1082_ = v___x_1088_;
v_a_1083_ = v_a_1106_;
goto v___jp_1080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object* v_config_1110_, lean_object* v_head_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1110_, v_head_1111_);
lean_dec_ref(v_config_1110_);
return v_res_1113_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object* v_00_u03b2_1114_, lean_object* v_m_1115_, lean_object* v_a_1116_){
_start:
{
uint8_t v___x_1117_; 
v___x_1117_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___redArg(v_m_1115_, v_a_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1___boxed(lean_object* v_00_u03b2_1118_, lean_object* v_m_1119_, lean_object* v_a_1120_){
_start:
{
uint8_t v_res_1121_; lean_object* v_r_1122_; 
v_res_1121_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(v_00_u03b2_1118_, v_m_1119_, v_a_1120_);
lean_dec_ref(v_a_1120_);
lean_dec_ref(v_m_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2_spec__5(lean_object* v_a_1123_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_nat_to_int(v_a_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object* v_a_1125_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_nat_to_int(v_a_1125_);
v___x_1127_ = l_Rat_ofInt(v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0(lean_object* v_00_u03b2_1128_, lean_object* v_a_1129_, lean_object* v_x_1130_){
_start:
{
uint8_t v___x_1131_; 
v___x_1131_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___redArg(v_a_1129_, v_x_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1132_, lean_object* v_a_1133_, lean_object* v_x_1134_){
_start:
{
uint8_t v_res_1135_; lean_object* v_r_1136_; 
v_res_1135_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__0(v_00_u03b2_1132_, v_a_1133_, v_x_1134_);
lean_dec(v_x_1134_);
lean_dec_ref(v_a_1133_);
v_r_1136_ = lean_box(v_res_1135_);
return v_r_1136_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1(lean_object* v_00_u03b2_1137_, lean_object* v_data_1138_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1___redArg(v_data_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1140_, lean_object* v_i_1141_, lean_object* v_source_1142_, lean_object* v_target_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2___redArg(v_i_1141_, v_source_1142_, v_target_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1145_, lean_object* v_x_1146_, lean_object* v_x_1147_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__1_spec__2_spec__6___redArg(v_x_1146_, v_x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object* v___y_1149_, lean_object* v_____r_1150_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___y_1149_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
v___x_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object* v___y_1156_, lean_object* v_____r_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(v___y_1156_, v_____r_1157_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object* v___f_1160_, lean_object* v_x_1161_){
_start:
{
if (lean_obj_tag(v_x_1161_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1171_; 
lean_dec_ref(v___f_1160_);
v_a_1163_ = lean_ctor_get(v_x_1161_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v_x_1161_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1165_ = v_x_1161_;
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v_x_1161_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
return v___x_1169_;
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1173_; 
v_a_1172_ = lean_ctor_get(v_x_1161_, 0);
lean_inc(v_a_1172_);
lean_dec_ref_known(v_x_1161_, 1);
v___x_1173_ = lean_apply_2(v___f_1160_, v_a_1172_, lean_box(0));
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object* v___f_1174_, lean_object* v_x_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(v___f_1174_, v_x_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object* v_close_1178_, lean_object* v_body_1179_, lean_object* v___f_1180_, lean_object* v___f_1181_, lean_object* v_x_1182_){
_start:
{
if (lean_obj_tag(v_x_1182_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref(v___f_1181_);
lean_dec_ref(v___f_1180_);
lean_dec(v_body_1179_);
lean_dec_ref(v_close_1178_);
v_a_1184_ = lean_ctor_get(v_x_1182_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_x_1182_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1186_ = v_x_1182_;
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v_x_1182_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
}
else
{
lean_object* v_a_1193_; uint8_t v___x_1194_; 
v_a_1193_ = lean_ctor_get(v_x_1182_, 0);
lean_inc(v_a_1193_);
lean_dec_ref_known(v_x_1182_, 1);
v___x_1194_ = lean_unbox(v_a_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; 
lean_dec_ref(v___f_1181_);
v___x_1195_ = lean_unsigned_to_nat(0u);
v___x_1196_ = lean_apply_2(v_close_1178_, v_body_1179_, lean_box(0));
v___x_1197_ = lean_unbox(v_a_1193_);
lean_dec(v_a_1193_);
v___x_1198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1195_, v___x_1197_, v___x_1196_, v___f_1180_);
return v___x_1198_;
}
else
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
lean_dec(v_a_1193_);
lean_dec_ref(v___f_1180_);
lean_dec(v_body_1179_);
lean_dec_ref(v_close_1178_);
v___x_1199_ = lean_box(0);
v___x_1200_ = lean_apply_2(v___f_1181_, v___x_1199_, lean_box(0));
return v___x_1200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object* v_close_1201_, lean_object* v_body_1202_, lean_object* v___f_1203_, lean_object* v___f_1204_, lean_object* v_x_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(v_close_1201_, v_body_1202_, v___f_1203_, v___f_1204_, v_x_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object* v___x_1208_, lean_object* v___f_1209_, lean_object* v___f_1210_, lean_object* v_x1_1211_, lean_object* v_x2_1212_){
_start:
{
lean_object* v_fst_1213_; uint8_t v___x_1214_; 
v_fst_1213_ = lean_ctor_get(v_x2_1212_, 0);
lean_inc(v_fst_1213_);
v___x_1214_ = lean_string_dec_eq(v___x_1208_, v_fst_1213_);
if (v___x_1214_ == 0)
{
lean_object* v_entries_1215_; lean_object* v_indexes_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1227_; 
v_entries_1215_ = lean_ctor_get(v_x1_1211_, 0);
v_indexes_1216_ = lean_ctor_get(v_x1_1211_, 1);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_x1_1211_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1218_ = v_x1_1211_;
v_isShared_1219_ = v_isSharedCheck_1227_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_indexes_1216_);
lean_inc(v_entries_1215_);
lean_dec(v_x1_1211_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1227_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v_i_1220_; lean_object* v_f_1221_; lean_object* v_entries_1222_; lean_object* v_indexes_1223_; lean_object* v___x_1225_; 
v_i_1220_ = lean_array_get_size(v_entries_1215_);
v_f_1221_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0_spec__2___lam__0), 2, 1);
lean_closure_set(v_f_1221_, 0, v_i_1220_);
v_entries_1222_ = lean_array_push(v_entries_1215_, v_x2_1212_);
v_indexes_1223_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v___f_1209_, v___f_1210_, v_indexes_1216_, v_fst_1213_, v_f_1221_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v_indexes_1223_);
lean_ctor_set(v___x_1218_, 0, v_entries_1222_);
v___x_1225_ = v___x_1218_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_entries_1222_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v_indexes_1223_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
else
{
lean_dec(v_fst_1213_);
lean_dec_ref(v_x2_1212_);
lean_dec_ref(v___f_1210_);
lean_dec_ref(v___f_1209_);
return v_x1_1211_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object* v___x_1228_, lean_object* v___f_1229_, lean_object* v___f_1230_, lean_object* v_x1_1231_, lean_object* v_x2_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(v___x_1228_, v___f_1229_, v___f_1230_, v_x1_1231_, v_x2_1232_);
lean_dec_ref(v___x_1228_);
return v_res_1233_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_Std_Internal_IndexMultiMap_empty___redArg();
return v___x_1236_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13(void){
_start:
{
lean_object* v___f_1256_; lean_object* v___f_1257_; lean_object* v___x_1258_; lean_object* v___f_1259_; 
v___f_1256_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___f_1257_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___x_1258_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1259_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_1259_, 0, v___x_1258_);
lean_closure_set(v___f_1259_, 1, v___f_1257_);
lean_closure_set(v___f_1259_, 2, v___f_1256_);
return v___f_1259_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14(void){
_start:
{
lean_object* v___f_1260_; lean_object* v___f_1261_; lean_object* v___x_1262_; lean_object* v___f_1263_; 
v___f_1260_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___f_1261_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___x_1262_ = l_Std_Http_Header_Name_contentLength;
v___f_1263_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_1263_, 0, v___x_1262_);
lean_closure_set(v___f_1263_, 1, v___f_1261_);
lean_closure_set(v___f_1263_, 2, v___f_1260_);
return v___f_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(lean_object* v___y_1264_, lean_object* v_body_1265_, lean_object* v_close_1266_, lean_object* v_isClosed_1267_, lean_object* v_x_1268_){
_start:
{
lean_object* v___y_1271_; uint8_t v_omitBody_1272_; lean_object* v___y_1285_; 
if (lean_obj_tag(v_x_1268_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1327_; 
lean_dec_ref(v_isClosed_1267_);
lean_dec_ref(v_close_1266_);
lean_dec(v_body_1265_);
lean_dec_ref(v___y_1264_);
v_a_1319_ = lean_ctor_get(v_x_1268_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v_x_1268_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1321_ = v_x_1268_;
v_isShared_1322_ = v_isSharedCheck_1327_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v_x_1268_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1327_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
return v___x_1325_;
}
}
}
else
{
lean_object* v_a_1328_; lean_object* v___y_1330_; uint8_t v___y_1331_; uint8_t v___y_1332_; uint8_t v___y_1333_; uint8_t v___y_1334_; uint8_t v___y_1335_; lean_object* v_writer_1343_; lean_object* v_reader_1344_; lean_object* v_config_1345_; lean_object* v_events_1346_; lean_object* v_error_1347_; lean_object* v_instant_1348_; uint8_t v_keepAlive_1349_; uint8_t v_forcedFlush_1350_; uint8_t v_pullBodyStalled_1351_; lean_object* v_userData_1352_; lean_object* v_outputData_1353_; lean_object* v_state_1354_; lean_object* v_knownSize_1355_; lean_object* v_messageHead_1356_; uint8_t v_sentMessage_1357_; uint8_t v_userClosedBody_1358_; uint8_t v_omitBody_1359_; lean_object* v_userDataBytes_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1443_; 
v_a_1328_ = lean_ctor_get(v_x_1268_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v_x_1268_, 1);
v_writer_1343_ = lean_ctor_get(v___y_1264_, 1);
lean_inc_ref(v_writer_1343_);
v_reader_1344_ = lean_ctor_get(v___y_1264_, 0);
v_config_1345_ = lean_ctor_get(v___y_1264_, 2);
v_events_1346_ = lean_ctor_get(v___y_1264_, 3);
v_error_1347_ = lean_ctor_get(v___y_1264_, 4);
v_instant_1348_ = lean_ctor_get(v___y_1264_, 5);
v_keepAlive_1349_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*6);
v_forcedFlush_1350_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1351_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*6 + 2);
v_userData_1352_ = lean_ctor_get(v_writer_1343_, 0);
v_outputData_1353_ = lean_ctor_get(v_writer_1343_, 1);
v_state_1354_ = lean_ctor_get(v_writer_1343_, 2);
v_knownSize_1355_ = lean_ctor_get(v_writer_1343_, 3);
v_messageHead_1356_ = lean_ctor_get(v_writer_1343_, 4);
v_sentMessage_1357_ = lean_ctor_get_uint8(v_writer_1343_, sizeof(void*)*6);
v_userClosedBody_1358_ = lean_ctor_get_uint8(v_writer_1343_, sizeof(void*)*6 + 1);
v_omitBody_1359_ = lean_ctor_get_uint8(v_writer_1343_, sizeof(void*)*6 + 2);
v_userDataBytes_1360_ = lean_ctor_get(v_writer_1343_, 5);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_writer_1343_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1362_ = v_writer_1343_;
v_isShared_1363_ = v_isSharedCheck_1443_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_userDataBytes_1360_);
lean_inc(v_messageHead_1356_);
lean_inc(v_knownSize_1355_);
lean_inc(v_state_1354_);
lean_inc(v_outputData_1353_);
lean_inc(v_userData_1352_);
lean_dec(v_writer_1343_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1443_;
goto v_resetjp_1361_;
}
v___jp_1329_:
{
lean_object* v_headerSize_1336_; lean_object* v_machine_1337_; lean_object* v_machine_1338_; lean_object* v_reader_1339_; lean_object* v_state_1340_; 
v_headerSize_1336_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___y_1331_, v_a_1328_, v___y_1334_);
v_machine_1337_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(v___y_1333_, v___y_1330_, v_headerSize_1336_, v___y_1335_);
v_machine_1338_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(v___y_1333_, v_machine_1337_, v_a_1328_);
lean_dec(v_a_1328_);
v_reader_1339_ = lean_ctor_get(v_machine_1338_, 0);
lean_inc_ref(v_reader_1339_);
v_state_1340_ = lean_ctor_get(v_reader_1339_, 0);
lean_inc(v_state_1340_);
lean_dec_ref(v_reader_1339_);
if (lean_obj_tag(v_state_1340_) == 7)
{
lean_dec_ref_known(v_state_1340_, 1);
if (v___y_1332_ == 0)
{
lean_object* v_writer_1341_; uint8_t v_omitBody_1342_; 
v_writer_1341_ = lean_ctor_get(v_machine_1338_, 1);
lean_inc_ref(v_writer_1341_);
v_omitBody_1342_ = lean_ctor_get_uint8(v_writer_1341_, sizeof(void*)*6 + 2);
lean_dec_ref(v_writer_1341_);
v___y_1271_ = v_machine_1338_;
v_omitBody_1272_ = v_omitBody_1342_;
goto v___jp_1270_;
}
else
{
v___y_1285_ = v_machine_1338_;
goto v___jp_1284_;
}
}
else
{
lean_dec(v_state_1340_);
v___y_1285_ = v_machine_1338_;
goto v___jp_1284_;
}
}
v_resetjp_1361_:
{
uint8_t v___y_1365_; lean_object* v___y_1366_; uint8_t v___y_1375_; lean_object* v___y_1376_; uint8_t v___y_1392_; uint8_t v___y_1393_; uint8_t v___y_1394_; uint8_t v___y_1395_; uint8_t v___y_1408_; uint8_t v___y_1409_; uint8_t v___y_1410_; uint8_t v___y_1429_; lean_object* v___x_1437_; uint8_t v___x_1438_; uint8_t v___y_1440_; 
v___x_1437_ = lean_box(1);
v___x_1438_ = l_Std_Http_Protocol_H1_Writer_instBEqState_beq(v_state_1354_, v___x_1437_);
if (v_sentMessage_1357_ == 0)
{
uint8_t v___x_1441_; 
v___x_1441_ = 1;
v___y_1440_ = v___x_1441_;
goto v___jp_1439_;
}
else
{
uint8_t v___x_1442_; 
v___x_1442_ = 0;
v___y_1440_ = v___x_1442_;
goto v___jp_1439_;
}
v___jp_1364_:
{
lean_object* v_message_1367_; lean_object* v___x_2272__overap_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v_message_1367_ = l_Std_Http_Protocol_H1_Message_Head_setHeaders(v___y_1365_, v_a_1328_, v___y_1366_);
v___x_2272__overap_1368_ = l_Std_Http_Protocol_H1_instEncodeV11Head(v___y_1365_);
v___x_1369_ = lean_apply_2(v___x_2272__overap_1368_, v_outputData_1353_, v_message_1367_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 1, v___x_1369_);
v___x_1371_ = v___x_1362_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_userData_1352_);
lean_ctor_set(v_reuseFailAlloc_1373_, 1, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1373_, 2, v_state_1354_);
lean_ctor_set(v_reuseFailAlloc_1373_, 3, v_knownSize_1355_);
lean_ctor_set(v_reuseFailAlloc_1373_, 4, v_messageHead_1356_);
lean_ctor_set(v_reuseFailAlloc_1373_, 5, v_userDataBytes_1360_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, sizeof(void*)*6, v_sentMessage_1357_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, sizeof(void*)*6 + 1, v_userClosedBody_1358_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, sizeof(void*)*6 + 2, v_omitBody_1359_);
v___x_1371_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1372_, 0, v_reader_1344_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
lean_ctor_set(v___x_1372_, 2, v_config_1345_);
lean_ctor_set(v___x_1372_, 3, v_events_1346_);
lean_ctor_set(v___x_1372_, 4, v_error_1347_);
lean_ctor_set(v___x_1372_, 5, v_instant_1348_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*6, v_keepAlive_1349_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*6 + 1, v_forcedFlush_1350_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*6 + 2, v_pullBodyStalled_1351_);
v___y_1271_ = v___x_1372_;
v_omitBody_1272_ = v_omitBody_1359_;
goto v___jp_1270_;
}
}
v___jp_1374_:
{
lean_object* v___x_1377_; lean_object* v___f_1378_; lean_object* v___f_1379_; uint8_t v___x_1380_; 
v___x_1377_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1378_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1379_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1380_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1378_, v___f_1379_, v___x_1377_, v___y_1376_);
if (v___x_1380_ == 0)
{
v___y_1365_ = v___y_1375_;
v___y_1366_ = v___y_1376_;
goto v___jp_1364_;
}
else
{
lean_object* v_entries_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; uint8_t v___x_1386_; 
v_entries_1381_ = lean_ctor_get(v___y_1376_, 0);
lean_inc_ref(v_entries_1381_);
lean_dec_ref(v___y_1376_);
v___x_1382_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2);
v___x_1383_ = lean_unsigned_to_nat(0u);
v___x_1384_ = lean_array_get_size(v_entries_1381_);
v___x_1385_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_1386_ = lean_nat_dec_lt(v___x_1383_, v___x_1384_);
if (v___x_1386_ == 0)
{
lean_dec_ref(v_entries_1381_);
v___y_1365_ = v___y_1375_;
v___y_1366_ = v___x_1382_;
goto v___jp_1364_;
}
else
{
lean_object* v___f_1387_; size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
v___f_1387_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__13);
v___x_1388_ = ((size_t)0ULL);
v___x_1389_ = lean_usize_of_nat(v___x_1384_);
v___x_1390_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1385_, v___f_1387_, v_entries_1381_, v___x_1388_, v___x_1389_, v___x_1382_);
v___y_1365_ = v___y_1375_;
v___y_1366_ = v___x_1390_;
goto v___jp_1364_;
}
}
}
v___jp_1391_:
{
uint8_t v___x_1396_; lean_object* v___x_1397_; lean_object* v_indexes_1398_; lean_object* v___x_1399_; lean_object* v_machine_1400_; lean_object* v___x_1401_; lean_object* v___f_1402_; lean_object* v___f_1403_; uint8_t v___x_1404_; 
v___x_1396_ = 1;
v___x_1397_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1396_, v_a_1328_);
v_indexes_1398_ = lean_ctor_get(v___x_1397_, 1);
lean_inc_ref(v_indexes_1398_);
lean_dec_ref(v___x_1397_);
lean_inc(v_a_1328_);
v___x_1399_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1399_, 0, v_userData_1352_);
lean_ctor_set(v___x_1399_, 1, v_outputData_1353_);
lean_ctor_set(v___x_1399_, 2, v_state_1354_);
lean_ctor_set(v___x_1399_, 3, v_knownSize_1355_);
lean_ctor_set(v___x_1399_, 4, v_a_1328_);
lean_ctor_set(v___x_1399_, 5, v_userDataBytes_1360_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*6, v___y_1393_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*6 + 1, v_userClosedBody_1358_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*6 + 2, v_omitBody_1359_);
v_machine_1400_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_machine_1400_, 0, v_reader_1344_);
lean_ctor_set(v_machine_1400_, 1, v___x_1399_);
lean_ctor_set(v_machine_1400_, 2, v_config_1345_);
lean_ctor_set(v_machine_1400_, 3, v_events_1346_);
lean_ctor_set(v_machine_1400_, 4, v_error_1347_);
lean_ctor_set(v_machine_1400_, 5, v_instant_1348_);
lean_ctor_set_uint8(v_machine_1400_, sizeof(void*)*6, v_keepAlive_1349_);
lean_ctor_set_uint8(v_machine_1400_, sizeof(void*)*6 + 1, v_forcedFlush_1350_);
lean_ctor_set_uint8(v_machine_1400_, sizeof(void*)*6 + 2, v_pullBodyStalled_1351_);
v___x_1401_ = l_Std_Http_Header_Name_contentLength;
v___f_1402_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1403_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1404_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1402_, v___f_1403_, v_indexes_1398_, v___x_1401_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = l_Std_Http_Header_Name_transferEncoding;
v___x_1406_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_1402_, v___f_1403_, v_indexes_1398_, v___x_1405_);
lean_dec_ref(v_indexes_1398_);
v___y_1330_ = v_machine_1400_;
v___y_1331_ = v___x_1396_;
v___y_1332_ = v___y_1395_;
v___y_1333_ = v___y_1392_;
v___y_1334_ = v___y_1394_;
v___y_1335_ = v___x_1406_;
goto v___jp_1329_;
}
else
{
lean_dec_ref(v_indexes_1398_);
v___y_1330_ = v_machine_1400_;
v___y_1331_ = v___x_1396_;
v___y_1332_ = v___y_1395_;
v___y_1333_ = v___y_1392_;
v___y_1334_ = v___y_1394_;
v___y_1335_ = v___x_1404_;
goto v___jp_1329_;
}
}
v___jp_1407_:
{
if (v___y_1410_ == 0)
{
lean_object* v_state_1411_; 
lean_del_object(v___x_1362_);
lean_dec(v_messageHead_1356_);
v_state_1411_ = lean_ctor_get(v_reader_1344_, 0);
if (lean_obj_tag(v_state_1411_) == 7)
{
v___y_1392_ = v___y_1409_;
v___y_1393_ = v___y_1408_;
v___y_1394_ = v___y_1410_;
v___y_1395_ = v___y_1408_;
goto v___jp_1391_;
}
else
{
v___y_1392_ = v___y_1409_;
v___y_1393_ = v___y_1408_;
v___y_1394_ = v___y_1410_;
v___y_1395_ = v___y_1410_;
goto v___jp_1391_;
}
}
else
{
uint8_t v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___f_1415_; lean_object* v___f_1416_; uint8_t v___x_1417_; 
v___x_1412_ = 1;
v___x_1413_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1412_, v_a_1328_);
v___x_1414_ = l_Std_Http_Header_Name_contentLength;
v___f_1415_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__0));
v___f_1416_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__1));
v___x_1417_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v___f_1415_, v___f_1416_, v___x_1414_, v___x_1413_);
if (v___x_1417_ == 0)
{
v___y_1375_ = v___x_1412_;
v___y_1376_ = v___x_1413_;
goto v___jp_1374_;
}
else
{
lean_object* v_entries_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v_entries_1418_ = lean_ctor_get(v___x_1413_, 0);
lean_inc_ref(v_entries_1418_);
lean_dec_ref(v___x_1413_);
v___x_1419_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__2);
v___x_1420_ = lean_unsigned_to_nat(0u);
v___x_1421_ = lean_array_get_size(v_entries_1418_);
v___x_1422_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_1423_ = lean_nat_dec_lt(v___x_1420_, v___x_1421_);
if (v___x_1423_ == 0)
{
lean_dec_ref(v_entries_1418_);
v___y_1375_ = v___x_1412_;
v___y_1376_ = v___x_1419_;
goto v___jp_1374_;
}
else
{
lean_object* v___f_1424_; size_t v___x_1425_; size_t v___x_1426_; lean_object* v___x_1427_; 
v___f_1424_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__14);
v___x_1425_ = ((size_t)0ULL);
v___x_1426_ = lean_usize_of_nat(v___x_1421_);
v___x_1427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1422_, v___f_1424_, v_entries_1418_, v___x_1425_, v___x_1426_, v___x_1419_);
v___y_1375_ = v___x_1412_;
v___y_1376_ = v___x_1427_;
goto v___jp_1374_;
}
}
}
}
v___jp_1428_:
{
if (v___y_1429_ == 0)
{
lean_del_object(v___x_1362_);
lean_dec(v_userDataBytes_1360_);
lean_dec(v_messageHead_1356_);
lean_dec(v_knownSize_1355_);
lean_dec(v_state_1354_);
lean_dec_ref(v_outputData_1353_);
lean_dec_ref(v_userData_1352_);
lean_dec(v_a_1328_);
v___y_1271_ = v___y_1264_;
v_omitBody_1272_ = v_omitBody_1359_;
goto v___jp_1270_;
}
else
{
lean_object* v_status_1430_; uint8_t v___x_1431_; uint16_t v___x_1432_; uint16_t v___x_1433_; uint8_t v___x_1434_; 
lean_inc(v_instant_1348_);
lean_inc(v_error_1347_);
lean_inc_ref(v_events_1346_);
lean_inc_ref(v_config_1345_);
lean_inc_ref(v_reader_1344_);
lean_dec_ref(v___y_1264_);
v_status_1430_ = lean_ctor_get(v_a_1328_, 0);
v___x_1431_ = 0;
v___x_1432_ = 100;
v___x_1433_ = l_Std_Http_Status_toCode(v_status_1430_);
v___x_1434_ = lean_uint16_dec_le(v___x_1432_, v___x_1433_);
if (v___x_1434_ == 0)
{
v___y_1408_ = v___y_1429_;
v___y_1409_ = v___x_1431_;
v___y_1410_ = v___x_1434_;
goto v___jp_1407_;
}
else
{
uint16_t v___x_1435_; uint8_t v___x_1436_; 
v___x_1435_ = 200;
v___x_1436_ = lean_uint16_dec_lt(v___x_1433_, v___x_1435_);
v___y_1408_ = v___y_1429_;
v___y_1409_ = v___x_1431_;
v___y_1410_ = v___x_1436_;
goto v___jp_1407_;
}
}
}
v___jp_1439_:
{
if (v___x_1438_ == 0)
{
v___y_1429_ = v___x_1438_;
goto v___jp_1428_;
}
else
{
v___y_1429_ = v___y_1440_;
goto v___jp_1428_;
}
}
}
}
v___jp_1270_:
{
if (v_omitBody_1272_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec_ref(v_isClosed_1267_);
lean_dec_ref(v_close_1266_);
v___x_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1273_, 0, v_body_1265_);
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___y_1271_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
return v___x_1276_;
}
else
{
lean_object* v___f_1277_; lean_object* v___f_1278_; lean_object* v___f_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___f_1277_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1277_, 0, v___y_1271_);
lean_inc_ref(v___f_1277_);
v___f_1278_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1278_, 0, v___f_1277_);
lean_inc(v_body_1265_);
v___f_1279_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1279_, 0, v_close_1266_);
lean_closure_set(v___f_1279_, 1, v_body_1265_);
lean_closure_set(v___f_1279_, 2, v___f_1278_);
lean_closure_set(v___f_1279_, 3, v___f_1277_);
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = 0;
v___x_1282_ = lean_apply_2(v_isClosed_1267_, v_body_1265_, lean_box(0));
v___x_1283_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1280_, v___x_1281_, v___x_1282_, v___f_1279_);
return v___x_1283_;
}
}
v___jp_1284_:
{
lean_object* v_writer_1286_; lean_object* v_reader_1287_; lean_object* v_config_1288_; lean_object* v_events_1289_; lean_object* v_error_1290_; lean_object* v_instant_1291_; uint8_t v_keepAlive_1292_; uint8_t v_forcedFlush_1293_; uint8_t v_pullBodyStalled_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1318_; 
v_writer_1286_ = lean_ctor_get(v___y_1285_, 1);
v_reader_1287_ = lean_ctor_get(v___y_1285_, 0);
v_config_1288_ = lean_ctor_get(v___y_1285_, 2);
v_events_1289_ = lean_ctor_get(v___y_1285_, 3);
v_error_1290_ = lean_ctor_get(v___y_1285_, 4);
v_instant_1291_ = lean_ctor_get(v___y_1285_, 5);
v_keepAlive_1292_ = lean_ctor_get_uint8(v___y_1285_, sizeof(void*)*6);
v_forcedFlush_1293_ = lean_ctor_get_uint8(v___y_1285_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1294_ = lean_ctor_get_uint8(v___y_1285_, sizeof(void*)*6 + 2);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___y_1285_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1296_ = v___y_1285_;
v_isShared_1297_ = v_isSharedCheck_1318_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_instant_1291_);
lean_inc(v_error_1290_);
lean_inc(v_events_1289_);
lean_inc(v_config_1288_);
lean_inc(v_writer_1286_);
lean_inc(v_reader_1287_);
lean_dec(v___y_1285_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1318_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v_userData_1298_; lean_object* v_outputData_1299_; lean_object* v_knownSize_1300_; lean_object* v_messageHead_1301_; uint8_t v_sentMessage_1302_; uint8_t v_userClosedBody_1303_; uint8_t v_omitBody_1304_; lean_object* v_userDataBytes_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1316_; 
v_userData_1298_ = lean_ctor_get(v_writer_1286_, 0);
v_outputData_1299_ = lean_ctor_get(v_writer_1286_, 1);
v_knownSize_1300_ = lean_ctor_get(v_writer_1286_, 3);
v_messageHead_1301_ = lean_ctor_get(v_writer_1286_, 4);
v_sentMessage_1302_ = lean_ctor_get_uint8(v_writer_1286_, sizeof(void*)*6);
v_userClosedBody_1303_ = lean_ctor_get_uint8(v_writer_1286_, sizeof(void*)*6 + 1);
v_omitBody_1304_ = lean_ctor_get_uint8(v_writer_1286_, sizeof(void*)*6 + 2);
v_userDataBytes_1305_ = lean_ctor_get(v_writer_1286_, 5);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_writer_1286_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; 
v_unused_1317_ = lean_ctor_get(v_writer_1286_, 2);
lean_dec(v_unused_1317_);
v___x_1307_ = v_writer_1286_;
v_isShared_1308_ = v_isSharedCheck_1316_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_userDataBytes_1305_);
lean_inc(v_messageHead_1301_);
lean_inc(v_knownSize_1300_);
lean_inc(v_outputData_1299_);
lean_inc(v_userData_1298_);
lean_dec(v_writer_1286_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1316_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1309_ = lean_box(2);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 2, v___x_1309_);
v___x_1311_ = v___x_1307_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_userData_1298_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_outputData_1299_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v___x_1309_);
lean_ctor_set(v_reuseFailAlloc_1315_, 3, v_knownSize_1300_);
lean_ctor_set(v_reuseFailAlloc_1315_, 4, v_messageHead_1301_);
lean_ctor_set(v_reuseFailAlloc_1315_, 5, v_userDataBytes_1305_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, sizeof(void*)*6, v_sentMessage_1302_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, sizeof(void*)*6 + 1, v_userClosedBody_1303_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, sizeof(void*)*6 + 2, v_omitBody_1304_);
v___x_1311_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1313_; 
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 1, v___x_1311_);
v___x_1313_ = v___x_1296_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_reader_1287_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v___x_1311_);
lean_ctor_set(v_reuseFailAlloc_1314_, 2, v_config_1288_);
lean_ctor_set(v_reuseFailAlloc_1314_, 3, v_events_1289_);
lean_ctor_set(v_reuseFailAlloc_1314_, 4, v_error_1290_);
lean_ctor_set(v_reuseFailAlloc_1314_, 5, v_instant_1291_);
lean_ctor_set_uint8(v_reuseFailAlloc_1314_, sizeof(void*)*6, v_keepAlive_1292_);
lean_ctor_set_uint8(v_reuseFailAlloc_1314_, sizeof(void*)*6 + 1, v_forcedFlush_1293_);
lean_ctor_set_uint8(v_reuseFailAlloc_1314_, sizeof(void*)*6 + 2, v_pullBodyStalled_1294_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
v___y_1271_ = v___x_1313_;
v_omitBody_1272_ = v_omitBody_1304_;
goto v___jp_1270_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed(lean_object* v___y_1444_, lean_object* v_body_1445_, lean_object* v_close_1446_, lean_object* v_isClosed_1447_, lean_object* v_x_1448_, lean_object* v___y_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(v___y_1444_, v_body_1445_, v_close_1446_, v_isClosed_1447_, v_x_1448_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object* v_body_1451_, lean_object* v_close_1452_, lean_object* v_isClosed_1453_, lean_object* v_config_1454_, lean_object* v_line_1455_, lean_object* v_machine_1456_, lean_object* v_x_1457_){
_start:
{
lean_object* v___y_1460_; 
if (lean_obj_tag(v_x_1457_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1474_; 
lean_dec_ref(v_machine_1456_);
lean_dec_ref(v_line_1455_);
lean_dec_ref(v_isClosed_1453_);
lean_dec_ref(v_close_1452_);
lean_dec(v_body_1451_);
v_a_1466_ = lean_ctor_get(v_x_1457_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_x_1457_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1468_ = v_x_1457_;
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v_x_1457_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
return v___x_1472_;
}
}
}
else
{
lean_object* v_a_1475_; 
v_a_1475_ = lean_ctor_get(v_x_1457_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v_x_1457_, 1);
if (lean_obj_tag(v_a_1475_) == 1)
{
lean_object* v_writer_1476_; lean_object* v_reader_1477_; lean_object* v_config_1478_; lean_object* v_events_1479_; lean_object* v_error_1480_; lean_object* v_instant_1481_; uint8_t v_keepAlive_1482_; uint8_t v_forcedFlush_1483_; uint8_t v_pullBodyStalled_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1507_; 
v_writer_1476_ = lean_ctor_get(v_machine_1456_, 1);
v_reader_1477_ = lean_ctor_get(v_machine_1456_, 0);
v_config_1478_ = lean_ctor_get(v_machine_1456_, 2);
v_events_1479_ = lean_ctor_get(v_machine_1456_, 3);
v_error_1480_ = lean_ctor_get(v_machine_1456_, 4);
v_instant_1481_ = lean_ctor_get(v_machine_1456_, 5);
v_keepAlive_1482_ = lean_ctor_get_uint8(v_machine_1456_, sizeof(void*)*6);
v_forcedFlush_1483_ = lean_ctor_get_uint8(v_machine_1456_, sizeof(void*)*6 + 1);
v_pullBodyStalled_1484_ = lean_ctor_get_uint8(v_machine_1456_, sizeof(void*)*6 + 2);
v_isSharedCheck_1507_ = !lean_is_exclusive(v_machine_1456_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1486_ = v_machine_1456_;
v_isShared_1487_ = v_isSharedCheck_1507_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_instant_1481_);
lean_inc(v_error_1480_);
lean_inc(v_events_1479_);
lean_inc(v_config_1478_);
lean_inc(v_writer_1476_);
lean_inc(v_reader_1477_);
lean_dec(v_machine_1456_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1507_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v_userData_1488_; lean_object* v_outputData_1489_; lean_object* v_state_1490_; lean_object* v_messageHead_1491_; uint8_t v_sentMessage_1492_; uint8_t v_userClosedBody_1493_; uint8_t v_omitBody_1494_; lean_object* v_userDataBytes_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1505_; 
v_userData_1488_ = lean_ctor_get(v_writer_1476_, 0);
v_outputData_1489_ = lean_ctor_get(v_writer_1476_, 1);
v_state_1490_ = lean_ctor_get(v_writer_1476_, 2);
v_messageHead_1491_ = lean_ctor_get(v_writer_1476_, 4);
v_sentMessage_1492_ = lean_ctor_get_uint8(v_writer_1476_, sizeof(void*)*6);
v_userClosedBody_1493_ = lean_ctor_get_uint8(v_writer_1476_, sizeof(void*)*6 + 1);
v_omitBody_1494_ = lean_ctor_get_uint8(v_writer_1476_, sizeof(void*)*6 + 2);
v_userDataBytes_1495_ = lean_ctor_get(v_writer_1476_, 5);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_writer_1476_);
if (v_isSharedCheck_1505_ == 0)
{
lean_object* v_unused_1506_; 
v_unused_1506_ = lean_ctor_get(v_writer_1476_, 3);
lean_dec(v_unused_1506_);
v___x_1497_ = v_writer_1476_;
v_isShared_1498_ = v_isSharedCheck_1505_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_userDataBytes_1495_);
lean_inc(v_messageHead_1491_);
lean_inc(v_state_1490_);
lean_inc(v_outputData_1489_);
lean_inc(v_userData_1488_);
lean_dec(v_writer_1476_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1505_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 3, v_a_1475_);
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_userData_1488_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v_outputData_1489_);
lean_ctor_set(v_reuseFailAlloc_1504_, 2, v_state_1490_);
lean_ctor_set(v_reuseFailAlloc_1504_, 3, v_a_1475_);
lean_ctor_set(v_reuseFailAlloc_1504_, 4, v_messageHead_1491_);
lean_ctor_set(v_reuseFailAlloc_1504_, 5, v_userDataBytes_1495_);
lean_ctor_set_uint8(v_reuseFailAlloc_1504_, sizeof(void*)*6, v_sentMessage_1492_);
lean_ctor_set_uint8(v_reuseFailAlloc_1504_, sizeof(void*)*6 + 1, v_userClosedBody_1493_);
lean_ctor_set_uint8(v_reuseFailAlloc_1504_, sizeof(void*)*6 + 2, v_omitBody_1494_);
v___x_1500_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
lean_object* v___x_1502_; 
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 1, v___x_1500_);
v___x_1502_ = v___x_1486_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_reader_1477_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1503_, 2, v_config_1478_);
lean_ctor_set(v_reuseFailAlloc_1503_, 3, v_events_1479_);
lean_ctor_set(v_reuseFailAlloc_1503_, 4, v_error_1480_);
lean_ctor_set(v_reuseFailAlloc_1503_, 5, v_instant_1481_);
lean_ctor_set_uint8(v_reuseFailAlloc_1503_, sizeof(void*)*6, v_keepAlive_1482_);
lean_ctor_set_uint8(v_reuseFailAlloc_1503_, sizeof(void*)*6 + 1, v_forcedFlush_1483_);
lean_ctor_set_uint8(v_reuseFailAlloc_1503_, sizeof(void*)*6 + 2, v_pullBodyStalled_1484_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
v___y_1460_ = v___x_1502_;
goto v___jp_1459_;
}
}
}
}
}
else
{
lean_dec(v_a_1475_);
v___y_1460_ = v_machine_1456_;
goto v___jp_1459_;
}
}
v___jp_1459_:
{
lean_object* v___f_1461_; lean_object* v___x_1462_; uint8_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___f_1461_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1461_, 0, v___y_1460_);
lean_closure_set(v___f_1461_, 1, v_body_1451_);
lean_closure_set(v___f_1461_, 2, v_close_1452_);
lean_closure_set(v___f_1461_, 3, v_isClosed_1453_);
v___x_1462_ = lean_unsigned_to_nat(0u);
v___x_1463_ = 0;
v___x_1464_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1454_, v_line_1455_);
v___x_1465_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1462_, v___x_1463_, v___x_1464_, v___f_1461_);
return v___x_1465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object* v_body_1508_, lean_object* v_close_1509_, lean_object* v_isClosed_1510_, lean_object* v_config_1511_, lean_object* v_line_1512_, lean_object* v_machine_1513_, lean_object* v_x_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(v_body_1508_, v_close_1509_, v_isClosed_1510_, v_config_1511_, v_line_1512_, v_machine_1513_, v_x_1514_);
lean_dec_ref(v_config_1511_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object* v_inst_1517_, lean_object* v_config_1518_, lean_object* v_machine_1519_, lean_object* v_res_1520_){
_start:
{
lean_object* v_close_1522_; lean_object* v_isClosed_1523_; lean_object* v_getKnownSize_1524_; lean_object* v_line_1525_; lean_object* v_body_1526_; lean_object* v___f_1527_; lean_object* v___x_1528_; uint8_t v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_close_1522_ = lean_ctor_get(v_inst_1517_, 1);
lean_inc_ref(v_close_1522_);
v_isClosed_1523_ = lean_ctor_get(v_inst_1517_, 2);
lean_inc_ref(v_isClosed_1523_);
v_getKnownSize_1524_ = lean_ctor_get(v_inst_1517_, 5);
lean_inc_ref(v_getKnownSize_1524_);
lean_dec_ref(v_inst_1517_);
v_line_1525_ = lean_ctor_get(v_res_1520_, 0);
lean_inc_ref(v_line_1525_);
v_body_1526_ = lean_ctor_get(v_res_1520_, 1);
lean_inc_n(v_body_1526_, 2);
lean_dec_ref(v_res_1520_);
v___f_1527_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_1527_, 0, v_body_1526_);
lean_closure_set(v___f_1527_, 1, v_close_1522_);
lean_closure_set(v___f_1527_, 2, v_isClosed_1523_);
lean_closure_set(v___f_1527_, 3, v_config_1518_);
lean_closure_set(v___f_1527_, 4, v_line_1525_);
lean_closure_set(v___f_1527_, 5, v_machine_1519_);
v___x_1528_ = lean_unsigned_to_nat(0u);
v___x_1529_ = 0;
v___x_1530_ = lean_apply_2(v_getKnownSize_1524_, v_body_1526_, lean_box(0));
v___x_1531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1528_, v___x_1529_, v___x_1530_, v___f_1527_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object* v_inst_1532_, lean_object* v_config_1533_, lean_object* v_machine_1534_, lean_object* v_res_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1532_, v_config_1533_, v_machine_1534_, v_res_1535_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object* v_00_u03b2_1538_, lean_object* v_inst_1539_, lean_object* v_config_1540_, lean_object* v_machine_1541_, lean_object* v_res_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1539_, v_config_1540_, v_machine_1541_, v_res_1542_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object* v_00_u03b2_1545_, lean_object* v_inst_1546_, lean_object* v_config_1547_, lean_object* v_machine_1548_, lean_object* v_res_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(v_00_u03b2_1545_, v_inst_1546_, v_config_1547_, v_machine_1548_, v_res_1549_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object* v_____do__lift_1552_, lean_object* v___y_1553_){
_start:
{
uint8_t v_closed_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v_closed_1555_ = lean_ctor_get_uint8(v_____do__lift_1552_, sizeof(void*)*6);
v___x_1556_ = lean_box(v_closed_1555_);
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object* v_____do__lift_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(v_____do__lift_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v_____do__lift_1559_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object* v___x_1563_, lean_object* v_x_1564_){
_start:
{
if (lean_obj_tag(v_x_1564_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1574_; 
lean_dec_ref(v___x_1563_);
v_a_1566_ = lean_ctor_get(v_x_1564_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_x_1564_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1568_ = v_x_1564_;
v_isShared_1569_ = v_isSharedCheck_1574_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v_x_1564_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1574_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
return v___x_1572_;
}
}
}
else
{
lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1583_; 
v_isSharedCheck_1583_ = !lean_is_exclusive(v_x_1564_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; 
v_unused_1584_ = lean_ctor_get(v_x_1564_, 0);
lean_dec(v_unused_1584_);
v___x_1576_ = v_x_1564_;
v_isShared_1577_ = v_isSharedCheck_1583_;
goto v_resetjp_1575_;
}
else
{
lean_dec(v_x_1564_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1583_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1563_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 0, v___x_1578_);
v___x_1580_ = v___x_1576_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
return v___x_1581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object* v___x_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(v___x_1585_, v_x_1586_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object* v___x_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v___x_1596_; lean_object* v_pendingProducer_1597_; lean_object* v_pendingConsumer_1598_; lean_object* v_interestWaiter_1599_; uint8_t v_closed_1600_; lean_object* v_pendingIncompleteChunk_1601_; lean_object* v_closeError_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1611_; 
v___x_1596_ = lean_st_ref_take(v___y_1594_);
v_pendingProducer_1597_ = lean_ctor_get(v___x_1596_, 0);
v_pendingConsumer_1598_ = lean_ctor_get(v___x_1596_, 1);
v_interestWaiter_1599_ = lean_ctor_get(v___x_1596_, 2);
v_closed_1600_ = lean_ctor_get_uint8(v___x_1596_, sizeof(void*)*6);
v_pendingIncompleteChunk_1601_ = lean_ctor_get(v___x_1596_, 4);
v_closeError_1602_ = lean_ctor_get(v___x_1596_, 5);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1596_, 3);
lean_dec(v_unused_1612_);
v___x_1604_ = v___x_1596_;
v_isShared_1605_ = v_isSharedCheck_1611_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_closeError_1602_);
lean_inc(v_pendingIncompleteChunk_1601_);
lean_inc(v_interestWaiter_1599_);
lean_inc(v_pendingConsumer_1598_);
lean_inc(v_pendingProducer_1597_);
lean_dec(v___x_1596_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1611_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 3, v___x_1593_);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_pendingProducer_1597_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_pendingConsumer_1598_);
lean_ctor_set(v_reuseFailAlloc_1610_, 2, v_interestWaiter_1599_);
lean_ctor_set(v_reuseFailAlloc_1610_, 3, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1610_, 4, v_pendingIncompleteChunk_1601_);
lean_ctor_set(v_reuseFailAlloc_1610_, 5, v_closeError_1602_);
lean_ctor_set_uint8(v_reuseFailAlloc_1610_, sizeof(void*)*6, v_closed_1600_);
v___x_1607_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_st_ref_put(v___y_1594_, v___x_1607_);
v___x_1609_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1));
return v___x_1609_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object* v___x_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(v___x_1613_, v___y_1614_);
lean_dec(v___y_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object* v_machine_1617_, lean_object* v_requestStream_1618_, lean_object* v_keepAliveTimeout_1619_, lean_object* v_currentTimeout_1620_, lean_object* v_headerTimeout_1621_, lean_object* v_response_1622_, lean_object* v_respStream_1623_, lean_object* v_expectData_1624_, uint8_t v_handlerDispatched_1625_, lean_object* v_____r_1626_){
_start:
{
uint8_t v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1628_ = 0;
v___x_1629_ = lean_box(0);
v___x_1630_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1630_, 0, v_machine_1617_);
lean_ctor_set(v___x_1630_, 1, v_requestStream_1618_);
lean_ctor_set(v___x_1630_, 2, v_keepAliveTimeout_1619_);
lean_ctor_set(v___x_1630_, 3, v_currentTimeout_1620_);
lean_ctor_set(v___x_1630_, 4, v_headerTimeout_1621_);
lean_ctor_set(v___x_1630_, 5, v_response_1622_);
lean_ctor_set(v___x_1630_, 6, v_respStream_1623_);
lean_ctor_set(v___x_1630_, 7, v_expectData_1624_);
lean_ctor_set(v___x_1630_, 8, v___x_1629_);
lean_ctor_set_uint8(v___x_1630_, sizeof(void*)*9, v___x_1628_);
lean_ctor_set_uint8(v___x_1630_, sizeof(void*)*9 + 1, v_handlerDispatched_1625_);
v___x_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
v___x_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object* v_machine_1634_, lean_object* v_requestStream_1635_, lean_object* v_keepAliveTimeout_1636_, lean_object* v_currentTimeout_1637_, lean_object* v_headerTimeout_1638_, lean_object* v_response_1639_, lean_object* v_respStream_1640_, lean_object* v_expectData_1641_, lean_object* v_handlerDispatched_1642_, lean_object* v_____r_1643_, lean_object* v___y_1644_){
_start:
{
uint8_t v_handlerDispatched_boxed_1645_; lean_object* v_res_1646_; 
v_handlerDispatched_boxed_1645_ = lean_unbox(v_handlerDispatched_1642_);
v_res_1646_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(v_machine_1634_, v_requestStream_1635_, v_keepAliveTimeout_1636_, v_currentTimeout_1637_, v_headerTimeout_1638_, v_response_1639_, v_respStream_1640_, v_expectData_1641_, v_handlerDispatched_boxed_1645_, v_____r_1643_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object* v___f_1647_, lean_object* v_x_1648_){
_start:
{
if (lean_obj_tag(v_x_1648_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1658_; 
lean_dec_ref(v___f_1647_);
v_a_1650_ = lean_ctor_get(v_x_1648_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_x_1648_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1652_ = v_x_1648_;
v_isShared_1653_ = v_isSharedCheck_1658_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v_x_1648_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1658_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
lean_object* v___x_1656_; 
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
return v___x_1656_;
}
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1660_; 
v_a_1659_ = lean_ctor_get(v_x_1648_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v_x_1648_, 1);
v___x_1660_ = lean_apply_2(v___f_1647_, v_a_1659_, lean_box(0));
return v___x_1660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object* v___f_1661_, lean_object* v_x_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(v___f_1661_, v_x_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object* v_requestStream_1665_, lean_object* v___f_1666_, lean_object* v___f_1667_, lean_object* v_x_1668_){
_start:
{
if (lean_obj_tag(v_x_1668_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1678_; 
lean_dec_ref(v___f_1667_);
lean_dec_ref(v___f_1666_);
lean_dec_ref(v_requestStream_1665_);
v_a_1670_ = lean_ctor_get(v_x_1668_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_x_1668_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1672_ = v_x_1668_;
v_isShared_1673_ = v_isSharedCheck_1678_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v_x_1668_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1678_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
return v___x_1676_;
}
}
}
else
{
lean_object* v_a_1679_; uint8_t v___x_1680_; 
v_a_1679_ = lean_ctor_get(v_x_1668_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v_x_1668_, 1);
v___x_1680_ = lean_unbox(v_a_1679_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; lean_object* v___x_1684_; 
lean_dec_ref(v___f_1667_);
v___x_1681_ = lean_unsigned_to_nat(0u);
v___x_1682_ = l_Std_Http_Body_Stream_close(v_requestStream_1665_);
v___x_1683_ = lean_unbox(v_a_1679_);
lean_dec(v_a_1679_);
v___x_1684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1681_, v___x_1683_, v___x_1682_, v___f_1666_);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec(v_a_1679_);
lean_dec_ref(v___f_1666_);
lean_dec_ref(v_requestStream_1665_);
v___x_1685_ = lean_box(0);
v___x_1686_ = lean_apply_2(v___f_1667_, v___x_1685_, lean_box(0));
return v___x_1686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object* v_requestStream_1687_, lean_object* v___f_1688_, lean_object* v___f_1689_, lean_object* v_x_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(v_requestStream_1687_, v___f_1688_, v___f_1689_, v_x_1690_);
return v_res_1692_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1693_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_1694_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___f_1701_; lean_object* v___f_1702_; 
v___x_1700_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1701_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4));
v___f_1702_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1702_, 0, v___f_1701_);
lean_closure_set(v___f_1702_, 1, v___x_1700_);
return v___f_1702_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___f_1712_; lean_object* v___f_1713_; 
v___x_1711_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1712_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9));
v___f_1713_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1713_, 0, v___f_1712_);
lean_closure_set(v___f_1713_, 1, v___x_1711_);
return v___f_1713_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11(void){
_start:
{
lean_object* v___f_1714_; lean_object* v___x_1715_; 
v___f_1714_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10);
v___x_1715_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_1715_, 0, lean_box(0));
lean_closure_set(v___x_1715_, 1, lean_box(0));
lean_closure_set(v___x_1715_, 2, lean_box(0));
lean_closure_set(v___x_1715_, 3, v___f_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object* v___y_1716_, lean_object* v___f_1717_, lean_object* v_x_1718_){
_start:
{
if (lean_obj_tag(v_x_1718_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v___f_1717_);
lean_dec_ref(v___y_1716_);
v_a_1720_ = lean_ctor_get(v_x_1718_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_x_1718_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1722_ = v_x_1718_;
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v_x_1718_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
}
else
{
lean_object* v_machine_1729_; lean_object* v_requestStream_1730_; lean_object* v_keepAliveTimeout_1731_; lean_object* v_currentTimeout_1732_; lean_object* v_headerTimeout_1733_; lean_object* v_response_1734_; lean_object* v_respStream_1735_; lean_object* v_expectData_1736_; uint8_t v_handlerDispatched_1737_; lean_object* v___x_1738_; lean_object* v___f_1739_; lean_object* v___f_1740_; lean_object* v___f_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___f_1745_; lean_object* v___f_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_4870__overap_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
lean_dec_ref_known(v_x_1718_, 1);
v_machine_1729_ = lean_ctor_get(v___y_1716_, 0);
lean_inc_ref(v_machine_1729_);
v_requestStream_1730_ = lean_ctor_get(v___y_1716_, 1);
lean_inc_ref_n(v_requestStream_1730_, 3);
v_keepAliveTimeout_1731_ = lean_ctor_get(v___y_1716_, 2);
lean_inc(v_keepAliveTimeout_1731_);
v_currentTimeout_1732_ = lean_ctor_get(v___y_1716_, 3);
lean_inc(v_currentTimeout_1732_);
v_headerTimeout_1733_ = lean_ctor_get(v___y_1716_, 4);
lean_inc(v_headerTimeout_1733_);
v_response_1734_ = lean_ctor_get(v___y_1716_, 5);
lean_inc_ref(v_response_1734_);
v_respStream_1735_ = lean_ctor_get(v___y_1716_, 6);
lean_inc(v_respStream_1735_);
v_expectData_1736_ = lean_ctor_get(v___y_1716_, 7);
lean_inc(v_expectData_1736_);
v_handlerDispatched_1737_ = lean_ctor_get_uint8(v___y_1716_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_1716_);
v___x_1738_ = lean_box(v_handlerDispatched_1737_);
v___f_1739_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed), 11, 9);
lean_closure_set(v___f_1739_, 0, v_machine_1729_);
lean_closure_set(v___f_1739_, 1, v_requestStream_1730_);
lean_closure_set(v___f_1739_, 2, v_keepAliveTimeout_1731_);
lean_closure_set(v___f_1739_, 3, v_currentTimeout_1732_);
lean_closure_set(v___f_1739_, 4, v_headerTimeout_1733_);
lean_closure_set(v___f_1739_, 5, v_response_1734_);
lean_closure_set(v___f_1739_, 6, v_respStream_1735_);
lean_closure_set(v___f_1739_, 7, v_expectData_1736_);
lean_closure_set(v___f_1739_, 8, v___x_1738_);
lean_inc_ref(v___f_1739_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1740_, 0, v___f_1739_);
v___f_1741_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1741_, 0, v_requestStream_1730_);
lean_closure_set(v___f_1741_, 1, v___f_1740_);
lean_closure_set(v___f_1741_, 2, v___f_1739_);
v___x_1742_ = lean_unsigned_to_nat(0u);
v___x_1743_ = 0;
v___x_1744_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_1745_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_1746_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_1747_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_1748_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1748_, 0, lean_box(0));
lean_closure_set(v___x_1748_, 1, lean_box(0));
lean_closure_set(v___x_1748_, 2, v___x_1744_);
lean_closure_set(v___x_1748_, 3, lean_box(0));
lean_closure_set(v___x_1748_, 4, lean_box(0));
lean_closure_set(v___x_1748_, 5, v___x_1747_);
lean_closure_set(v___x_1748_, 6, v___f_1717_);
v___x_4870__overap_1749_ = l_Std_Mutex_atomically___redArg(v___x_1744_, v___f_1745_, v___f_1746_, v_requestStream_1730_, v___x_1748_);
v___x_1750_ = lean_apply_1(v___x_4870__overap_1749_, lean_box(0));
v___x_1751_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1742_, v___x_1743_, v___x_1750_, v___f_1741_);
return v___x_1751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object* v___y_1752_, lean_object* v___f_1753_, lean_object* v_x_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(v___y_1752_, v___f_1753_, v_x_1754_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object* v___y_1757_, lean_object* v_x_1758_){
_start:
{
if (lean_obj_tag(v_x_1758_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1768_; 
lean_dec_ref(v___y_1757_);
v_a_1760_ = lean_ctor_get(v_x_1758_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_x_1758_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1762_ = v_x_1758_;
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v_x_1758_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1763_ == 0)
{
v___x_1765_ = v___x_1762_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
return v___x_1766_;
}
}
}
else
{
lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1777_; 
v_isSharedCheck_1777_ = !lean_is_exclusive(v_x_1758_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; 
v_unused_1778_ = lean_ctor_get(v_x_1758_, 0);
lean_dec(v_unused_1778_);
v___x_1770_ = v_x_1758_;
v_isShared_1771_ = v_isSharedCheck_1777_;
goto v_resetjp_1769_;
}
else
{
lean_dec(v_x_1758_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1777_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___y_1757_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1772_);
v___x_1774_ = v___x_1770_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; 
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
return v___x_1775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object* v___y_1779_, lean_object* v_x_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(v___y_1779_, v_x_1780_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object* v_requestStream_1783_, lean_object* v___f_1784_, lean_object* v___y_1785_, lean_object* v_x_1786_){
_start:
{
if (lean_obj_tag(v_x_1786_) == 0)
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1796_; 
lean_dec_ref(v___y_1785_);
lean_dec_ref(v___f_1784_);
lean_dec_ref(v_requestStream_1783_);
v_a_1788_ = lean_ctor_get(v_x_1786_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v_x_1786_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1790_ = v_x_1786_;
v_isShared_1791_ = v_isSharedCheck_1796_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v_x_1786_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1796_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1788_);
v___x_1793_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
return v___x_1794_;
}
}
}
else
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1811_; 
v_a_1797_ = lean_ctor_get(v_x_1786_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_x_1786_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1799_ = v_x_1786_;
v_isShared_1800_ = v_isSharedCheck_1811_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v_x_1786_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1811_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
uint8_t v___x_1801_; 
v___x_1801_ = lean_unbox(v_a_1797_);
if (v___x_1801_ == 0)
{
lean_object* v___x_1802_; lean_object* v___x_1803_; uint8_t v___x_1804_; lean_object* v___x_1805_; 
lean_del_object(v___x_1799_);
lean_dec_ref(v___y_1785_);
v___x_1802_ = lean_unsigned_to_nat(0u);
v___x_1803_ = l_Std_Http_Body_Stream_close(v_requestStream_1783_);
v___x_1804_ = lean_unbox(v_a_1797_);
lean_dec(v_a_1797_);
v___x_1805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1802_, v___x_1804_, v___x_1803_, v___f_1784_);
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; lean_object* v___x_1808_; 
lean_dec(v_a_1797_);
lean_dec_ref(v___f_1784_);
lean_dec_ref(v_requestStream_1783_);
v___x_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___y_1785_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 0, v___x_1806_);
v___x_1808_ = v___x_1799_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1809_; 
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
return v___x_1809_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object* v_requestStream_1812_, lean_object* v___f_1813_, lean_object* v___y_1814_, lean_object* v_x_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(v_requestStream_1812_, v___f_1813_, v___y_1814_, v_x_1815_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object* v_config_1818_, lean_object* v_machine_1819_, lean_object* v_a_1820_, uint8_t v_requiresData_1821_, lean_object* v_expectData_1822_, lean_object* v_pendingHead_1823_, lean_object* v_x_1824_){
_start:
{
if (lean_obj_tag(v_x_1824_) == 0)
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1834_; 
lean_dec(v_pendingHead_1823_);
lean_dec(v_expectData_1822_);
lean_dec_ref(v_a_1820_);
lean_dec_ref(v_machine_1819_);
v_a_1826_ = lean_ctor_get(v_x_1824_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_x_1824_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1828_ = v_x_1824_;
v_isShared_1829_ = v_isSharedCheck_1834_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v_x_1824_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1834_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
lean_object* v___x_1832_; 
v___x_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
return v___x_1832_;
}
}
}
else
{
lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1849_; 
v_a_1835_ = lean_ctor_get(v_x_1824_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_x_1824_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1837_ = v_x_1824_;
v_isShared_1838_ = v_isSharedCheck_1849_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v_x_1824_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1849_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v_keepAliveTimeout_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
v_keepAliveTimeout_1839_ = lean_ctor_get(v_config_1818_, 5);
lean_inc_n(v_keepAliveTimeout_1839_, 2);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v_keepAliveTimeout_1839_);
v___x_1841_ = lean_box(0);
v___x_1842_ = 0;
v___x_1843_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1843_, 0, v_machine_1819_);
lean_ctor_set(v___x_1843_, 1, v_a_1820_);
lean_ctor_set(v___x_1843_, 2, v___x_1840_);
lean_ctor_set(v___x_1843_, 3, v_keepAliveTimeout_1839_);
lean_ctor_set(v___x_1843_, 4, v___x_1841_);
lean_ctor_set(v___x_1843_, 5, v_a_1835_);
lean_ctor_set(v___x_1843_, 6, v___x_1841_);
lean_ctor_set(v___x_1843_, 7, v_expectData_1822_);
lean_ctor_set(v___x_1843_, 8, v_pendingHead_1823_);
lean_ctor_set_uint8(v___x_1843_, sizeof(void*)*9, v_requiresData_1821_);
lean_ctor_set_uint8(v___x_1843_, sizeof(void*)*9 + 1, v___x_1842_);
v___x_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1844_);
v___x_1846_ = v___x_1837_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object* v_config_1850_, lean_object* v_machine_1851_, lean_object* v_a_1852_, lean_object* v_requiresData_1853_, lean_object* v_expectData_1854_, lean_object* v_pendingHead_1855_, lean_object* v_x_1856_, lean_object* v___y_1857_){
_start:
{
uint8_t v_requiresData_boxed_1858_; lean_object* v_res_1859_; 
v_requiresData_boxed_1858_ = lean_unbox(v_requiresData_1853_);
v_res_1859_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(v_config_1850_, v_machine_1851_, v_a_1852_, v_requiresData_boxed_1858_, v_expectData_1854_, v_pendingHead_1855_, v_x_1856_);
lean_dec_ref(v_config_1850_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object* v_config_1860_, lean_object* v_machine_1861_, uint8_t v_requiresData_1862_, lean_object* v_expectData_1863_, lean_object* v_pendingHead_1864_, lean_object* v_x_1865_){
_start:
{
if (lean_obj_tag(v_x_1865_) == 0)
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_pendingHead_1864_);
lean_dec(v_expectData_1863_);
lean_dec_ref(v_machine_1861_);
lean_dec_ref(v_config_1860_);
v_a_1867_ = lean_ctor_get(v_x_1865_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1869_ = v_x_1865_;
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v_x_1865_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1891_; 
v_a_1876_ = lean_ctor_get(v_x_1865_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1878_ = v_x_1865_;
v_isShared_1879_ = v_isSharedCheck_1891_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v_x_1865_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1891_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1880_; lean_object* v___f_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1887_; 
v___x_1880_ = lean_box(v_requiresData_1862_);
v___f_1881_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed), 8, 6);
lean_closure_set(v___f_1881_, 0, v_config_1860_);
lean_closure_set(v___f_1881_, 1, v_machine_1861_);
lean_closure_set(v___f_1881_, 2, v_a_1876_);
lean_closure_set(v___f_1881_, 3, v___x_1880_);
lean_closure_set(v___f_1881_, 4, v_expectData_1863_);
lean_closure_set(v___f_1881_, 5, v_pendingHead_1864_);
v___x_1882_ = lean_box(0);
v___x_1883_ = lean_unsigned_to_nat(0u);
v___x_1884_ = 0;
v___x_1885_ = l_Std_CloseableChannel_new___redArg(v___x_1882_);
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 0, v___x_1885_);
v___x_1887_ = v___x_1878_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
v___x_1889_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1883_, v___x_1884_, v___x_1888_, v___f_1881_);
return v___x_1889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object* v_config_1892_, lean_object* v_machine_1893_, lean_object* v_requiresData_1894_, lean_object* v_expectData_1895_, lean_object* v_pendingHead_1896_, lean_object* v_x_1897_, lean_object* v___y_1898_){
_start:
{
uint8_t v_requiresData_boxed_1899_; lean_object* v_res_1900_; 
v_requiresData_boxed_1899_ = lean_unbox(v_requiresData_1894_);
v_res_1900_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(v_config_1892_, v_machine_1893_, v_requiresData_boxed_1899_, v_expectData_1895_, v_pendingHead_1896_, v_x_1897_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object* v___f_1901_, lean_object* v_____r_1902_){
_start:
{
lean_object* v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = 0;
v___x_1906_ = l_Std_Http_Body_mkStream();
v___x_1907_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1904_, v___x_1905_, v___x_1906_, v___f_1901_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object* v___f_1908_, lean_object* v_____r_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(v___f_1908_, v_____r_1909_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object* v_close_1912_, lean_object* v_val_1913_, lean_object* v___f_1914_, lean_object* v___f_1915_, lean_object* v_x_1916_){
_start:
{
if (lean_obj_tag(v_x_1916_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1926_; 
lean_dec_ref(v___f_1915_);
lean_dec_ref(v___f_1914_);
lean_dec(v_val_1913_);
lean_dec_ref(v_close_1912_);
v_a_1918_ = lean_ctor_get(v_x_1916_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_x_1916_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1920_ = v_x_1916_;
v_isShared_1921_ = v_isSharedCheck_1926_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v_x_1916_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1926_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1923_);
return v___x_1924_;
}
}
}
else
{
lean_object* v_a_1927_; uint8_t v___x_1928_; 
v_a_1927_ = lean_ctor_get(v_x_1916_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v_x_1916_, 1);
v___x_1928_ = lean_unbox(v_a_1927_);
if (v___x_1928_ == 0)
{
lean_object* v___x_1929_; lean_object* v___x_1930_; uint8_t v___x_1931_; lean_object* v___x_1932_; 
lean_dec_ref(v___f_1915_);
v___x_1929_ = lean_unsigned_to_nat(0u);
v___x_1930_ = lean_apply_2(v_close_1912_, v_val_1913_, lean_box(0));
v___x_1931_ = lean_unbox(v_a_1927_);
lean_dec(v_a_1927_);
v___x_1932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1929_, v___x_1931_, v___x_1930_, v___f_1914_);
return v___x_1932_;
}
else
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
lean_dec(v_a_1927_);
lean_dec_ref(v___f_1914_);
lean_dec(v_val_1913_);
lean_dec_ref(v_close_1912_);
v___x_1933_ = lean_box(0);
v___x_1934_ = lean_apply_2(v___f_1915_, v___x_1933_, lean_box(0));
return v___x_1934_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object* v_close_1935_, lean_object* v_val_1936_, lean_object* v___f_1937_, lean_object* v___f_1938_, lean_object* v_x_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(v_close_1935_, v_val_1936_, v___f_1937_, v___f_1938_, v_x_1939_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object* v_respStream_1942_, lean_object* v_inst_1943_, lean_object* v___f_1944_, lean_object* v___f_1945_, lean_object* v_____r_1946_){
_start:
{
if (lean_obj_tag(v_respStream_1942_) == 1)
{
lean_object* v_val_1948_; lean_object* v_close_1949_; lean_object* v_isClosed_1950_; lean_object* v___f_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v_val_1948_ = lean_ctor_get(v_respStream_1942_, 0);
lean_inc_n(v_val_1948_, 2);
lean_dec_ref_known(v_respStream_1942_, 1);
v_close_1949_ = lean_ctor_get(v_inst_1943_, 1);
lean_inc_ref(v_close_1949_);
v_isClosed_1950_ = lean_ctor_get(v_inst_1943_, 2);
lean_inc_ref(v_isClosed_1950_);
lean_dec_ref(v_inst_1943_);
v___f_1951_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed), 6, 4);
lean_closure_set(v___f_1951_, 0, v_close_1949_);
lean_closure_set(v___f_1951_, 1, v_val_1948_);
lean_closure_set(v___f_1951_, 2, v___f_1944_);
lean_closure_set(v___f_1951_, 3, v___f_1945_);
v___x_1952_ = lean_unsigned_to_nat(0u);
v___x_1953_ = 0;
v___x_1954_ = lean_apply_2(v_isClosed_1950_, v_val_1948_, lean_box(0));
v___x_1955_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1952_, v___x_1953_, v___x_1954_, v___f_1951_);
return v___x_1955_;
}
else
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_dec_ref(v___f_1944_);
lean_dec_ref(v_inst_1943_);
lean_dec(v_respStream_1942_);
v___x_1956_ = lean_box(0);
v___x_1957_ = lean_apply_2(v___f_1945_, v___x_1956_, lean_box(0));
return v___x_1957_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object* v_respStream_1958_, lean_object* v_inst_1959_, lean_object* v___f_1960_, lean_object* v___f_1961_, lean_object* v_____r_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(v_respStream_1958_, v_inst_1959_, v___f_1960_, v___f_1961_, v_____r_1962_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object* v_requestStream_1965_, lean_object* v_keepAliveTimeout_1966_, lean_object* v_currentTimeout_1967_, lean_object* v_headerTimeout_1968_, lean_object* v_response_1969_, lean_object* v_respStream_1970_, uint8_t v_requiresData_1971_, lean_object* v_expectData_1972_, uint8_t v_handlerDispatched_1973_, lean_object* v_pendingHead_1974_, lean_object* v_x_1975_){
_start:
{
if (lean_obj_tag(v_x_1975_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1985_; 
lean_dec(v_pendingHead_1974_);
lean_dec(v_expectData_1972_);
lean_dec(v_respStream_1970_);
lean_dec_ref(v_response_1969_);
lean_dec(v_headerTimeout_1968_);
lean_dec(v_currentTimeout_1967_);
lean_dec(v_keepAliveTimeout_1966_);
lean_dec_ref(v_requestStream_1965_);
v_a_1977_ = lean_ctor_get(v_x_1975_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_x_1975_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1979_ = v_x_1975_;
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v_x_1975_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
return v___x_1983_;
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2007_; 
v_a_1986_ = lean_ctor_get(v_x_1975_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v_x_1975_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1988_ = v_x_1975_;
v_isShared_1989_ = v_isSharedCheck_2007_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v_x_1975_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2007_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v_snd_1990_; uint8_t v___x_1991_; 
v_snd_1990_ = lean_ctor_get(v_a_1986_, 1);
v___x_1991_ = lean_unbox(v_snd_1990_);
if (v___x_1991_ == 0)
{
lean_object* v_fst_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1996_; 
v_fst_1992_ = lean_ctor_get(v_a_1986_, 0);
lean_inc(v_fst_1992_);
lean_dec(v_a_1986_);
v___x_1993_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1993_, 0, v_fst_1992_);
lean_ctor_set(v___x_1993_, 1, v_requestStream_1965_);
lean_ctor_set(v___x_1993_, 2, v_keepAliveTimeout_1966_);
lean_ctor_set(v___x_1993_, 3, v_currentTimeout_1967_);
lean_ctor_set(v___x_1993_, 4, v_headerTimeout_1968_);
lean_ctor_set(v___x_1993_, 5, v_response_1969_);
lean_ctor_set(v___x_1993_, 6, v_respStream_1970_);
lean_ctor_set(v___x_1993_, 7, v_expectData_1972_);
lean_ctor_set(v___x_1993_, 8, v_pendingHead_1974_);
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*9, v_requiresData_1971_);
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*9 + 1, v_handlerDispatched_1973_);
v___x_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_1994_);
v___x_1996_ = v___x_1988_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; 
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1996_);
return v___x_1997_;
}
}
else
{
lean_object* v_fst_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2004_; 
lean_dec(v_pendingHead_1974_);
v_fst_1999_ = lean_ctor_get(v_a_1986_, 0);
lean_inc(v_fst_1999_);
lean_dec(v_a_1986_);
v___x_2000_ = lean_box(0);
v___x_2001_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2001_, 0, v_fst_1999_);
lean_ctor_set(v___x_2001_, 1, v_requestStream_1965_);
lean_ctor_set(v___x_2001_, 2, v_keepAliveTimeout_1966_);
lean_ctor_set(v___x_2001_, 3, v_currentTimeout_1967_);
lean_ctor_set(v___x_2001_, 4, v_headerTimeout_1968_);
lean_ctor_set(v___x_2001_, 5, v_response_1969_);
lean_ctor_set(v___x_2001_, 6, v_respStream_1970_);
lean_ctor_set(v___x_2001_, 7, v_expectData_1972_);
lean_ctor_set(v___x_2001_, 8, v___x_2000_);
lean_ctor_set_uint8(v___x_2001_, sizeof(void*)*9, v_requiresData_1971_);
lean_ctor_set_uint8(v___x_2001_, sizeof(void*)*9 + 1, v_handlerDispatched_1973_);
v___x_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_2002_);
v___x_2004_ = v___x_1988_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2005_; 
v___x_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2004_);
return v___x_2005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object* v_requestStream_2008_, lean_object* v_keepAliveTimeout_2009_, lean_object* v_currentTimeout_2010_, lean_object* v_headerTimeout_2011_, lean_object* v_response_2012_, lean_object* v_respStream_2013_, lean_object* v_requiresData_2014_, lean_object* v_expectData_2015_, lean_object* v_handlerDispatched_2016_, lean_object* v_pendingHead_2017_, lean_object* v_x_2018_, lean_object* v___y_2019_){
_start:
{
uint8_t v_requiresData_boxed_2020_; uint8_t v_handlerDispatched_boxed_2021_; lean_object* v_res_2022_; 
v_requiresData_boxed_2020_ = lean_unbox(v_requiresData_2014_);
v_handlerDispatched_boxed_2021_ = lean_unbox(v_handlerDispatched_2016_);
v_res_2022_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(v_requestStream_2008_, v_keepAliveTimeout_2009_, v_currentTimeout_2010_, v_headerTimeout_2011_, v_response_2012_, v_respStream_2013_, v_requiresData_boxed_2020_, v_expectData_2015_, v_handlerDispatched_boxed_2021_, v_pendingHead_2017_, v_x_2018_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object* v_config_2035_, lean_object* v_inst_2036_, lean_object* v___f_2037_, lean_object* v_handler_2038_, lean_object* v___f_2039_, lean_object* v_inst_2040_, lean_object* v___f_2041_, lean_object* v_connectionContext_2042_, lean_object* v_a_2043_, lean_object* v_x_2044_, lean_object* v___y_2045_){
_start:
{
switch(lean_obj_tag(v_a_2043_))
{
case 0:
{
lean_object* v_head_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2090_; 
lean_dec_ref(v_connectionContext_2042_);
lean_dec_ref(v___f_2041_);
lean_dec_ref(v_inst_2040_);
lean_dec_ref(v___f_2039_);
lean_dec(v_handler_2038_);
lean_dec_ref(v___f_2037_);
lean_dec_ref(v_inst_2036_);
v_head_2047_ = lean_ctor_get(v_a_2043_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_a_2043_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2049_ = v_a_2043_;
v_isShared_2050_ = v_isSharedCheck_2090_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_head_2047_);
lean_dec(v_a_2043_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2090_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v_machine_2051_; lean_object* v_requestStream_2052_; lean_object* v_response_2053_; lean_object* v_respStream_2054_; uint8_t v_requiresData_2055_; lean_object* v_expectData_2056_; uint8_t v_handlerDispatched_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2085_; 
v_machine_2051_ = lean_ctor_get(v___y_2045_, 0);
v_requestStream_2052_ = lean_ctor_get(v___y_2045_, 1);
v_response_2053_ = lean_ctor_get(v___y_2045_, 5);
v_respStream_2054_ = lean_ctor_get(v___y_2045_, 6);
v_requiresData_2055_ = lean_ctor_get_uint8(v___y_2045_, sizeof(void*)*9);
v_expectData_2056_ = lean_ctor_get(v___y_2045_, 7);
v_handlerDispatched_2057_ = lean_ctor_get_uint8(v___y_2045_, sizeof(void*)*9 + 1);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___y_2045_);
if (v_isSharedCheck_2085_ == 0)
{
lean_object* v_unused_2086_; lean_object* v_unused_2087_; lean_object* v_unused_2088_; lean_object* v_unused_2089_; 
v_unused_2086_ = lean_ctor_get(v___y_2045_, 8);
lean_dec(v_unused_2086_);
v_unused_2087_ = lean_ctor_get(v___y_2045_, 4);
lean_dec(v_unused_2087_);
v_unused_2088_ = lean_ctor_get(v___y_2045_, 3);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v___y_2045_, 2);
lean_dec(v_unused_2089_);
v___x_2059_ = v___y_2045_;
v_isShared_2060_ = v_isSharedCheck_2085_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_expectData_2056_);
lean_inc(v_respStream_2054_);
lean_inc(v_response_2053_);
lean_inc(v_requestStream_2052_);
lean_inc(v_machine_2051_);
lean_dec(v___y_2045_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2085_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v_lingeringTimeout_2061_; lean_object* v___x_2062_; lean_object* v___x_2064_; 
v_lingeringTimeout_2061_ = lean_ctor_get(v_config_2035_, 4);
lean_inc(v_lingeringTimeout_2061_);
lean_dec_ref(v_config_2035_);
v___x_2062_ = lean_box(0);
lean_inc(v_head_2047_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set_tag(v___x_2049_, 1);
v___x_2064_ = v___x_2049_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_head_2047_);
v___x_2064_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
lean_object* v___x_2066_; 
lean_inc_ref(v_requestStream_2052_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 8, v___x_2064_);
lean_ctor_set(v___x_2059_, 4, v___x_2062_);
lean_ctor_set(v___x_2059_, 3, v_lingeringTimeout_2061_);
lean_ctor_set(v___x_2059_, 2, v___x_2062_);
v___x_2066_ = v___x_2059_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_machine_2051_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_requestStream_2052_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v___x_2062_);
lean_ctor_set(v_reuseFailAlloc_2083_, 3, v_lingeringTimeout_2061_);
lean_ctor_set(v_reuseFailAlloc_2083_, 4, v___x_2062_);
lean_ctor_set(v_reuseFailAlloc_2083_, 5, v_response_2053_);
lean_ctor_set(v_reuseFailAlloc_2083_, 6, v_respStream_2054_);
lean_ctor_set(v_reuseFailAlloc_2083_, 7, v_expectData_2056_);
lean_ctor_set(v_reuseFailAlloc_2083_, 8, v___x_2064_);
lean_ctor_set_uint8(v_reuseFailAlloc_2083_, sizeof(void*)*9, v_requiresData_2055_);
lean_ctor_set_uint8(v_reuseFailAlloc_2083_, sizeof(void*)*9 + 1, v_handlerDispatched_2057_);
v___x_2066_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
uint8_t v___x_2067_; uint8_t v___x_2068_; lean_object* v___x_2069_; 
v___x_2067_ = 0;
v___x_2068_ = 1;
v___x_2069_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_2067_, v_head_2047_, v___x_2068_);
lean_dec(v_head_2047_);
if (lean_obj_tag(v___x_2069_) == 1)
{
lean_object* v___f_2070_; lean_object* v___f_2071_; lean_object* v___x_2072_; uint8_t v___x_2073_; lean_object* v___x_2074_; lean_object* v___f_2075_; lean_object* v___f_2076_; lean_object* v___x_5061__overap_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___f_2070_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2070_, 0, v___x_2066_);
v___f_2071_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2071_, 0, v___x_2069_);
v___x_2072_ = lean_unsigned_to_nat(0u);
v___x_2073_ = 0;
v___x_2074_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2075_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2076_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_5061__overap_2077_ = l_Std_Mutex_atomically___redArg(v___x_2074_, v___f_2075_, v___f_2076_, v_requestStream_2052_, v___f_2071_);
v___x_2078_ = lean_apply_1(v___x_5061__overap_2077_, lean_box(0));
v___x_2079_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2072_, v___x_2073_, v___x_2078_, v___f_2070_);
return v___x_2079_;
}
else
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
lean_dec(v___x_2069_);
lean_dec_ref(v_requestStream_2052_);
v___x_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2066_);
v___x_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
}
}
}
}
case 1:
{
lean_object* v_size_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2118_; 
lean_dec_ref(v_connectionContext_2042_);
lean_dec_ref(v___f_2041_);
lean_dec_ref(v_inst_2040_);
lean_dec_ref(v___f_2039_);
lean_dec(v_handler_2038_);
lean_dec_ref(v___f_2037_);
lean_dec_ref(v_inst_2036_);
lean_dec_ref(v_config_2035_);
v_size_2091_ = lean_ctor_get(v_a_2043_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_a_2043_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2093_ = v_a_2043_;
v_isShared_2094_ = v_isSharedCheck_2118_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_size_2091_);
lean_dec(v_a_2043_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2118_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v_machine_2095_; lean_object* v_requestStream_2096_; lean_object* v_keepAliveTimeout_2097_; lean_object* v_currentTimeout_2098_; lean_object* v_headerTimeout_2099_; lean_object* v_response_2100_; lean_object* v_respStream_2101_; uint8_t v_handlerDispatched_2102_; lean_object* v_pendingHead_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2116_; 
v_machine_2095_ = lean_ctor_get(v___y_2045_, 0);
v_requestStream_2096_ = lean_ctor_get(v___y_2045_, 1);
v_keepAliveTimeout_2097_ = lean_ctor_get(v___y_2045_, 2);
v_currentTimeout_2098_ = lean_ctor_get(v___y_2045_, 3);
v_headerTimeout_2099_ = lean_ctor_get(v___y_2045_, 4);
v_response_2100_ = lean_ctor_get(v___y_2045_, 5);
v_respStream_2101_ = lean_ctor_get(v___y_2045_, 6);
v_handlerDispatched_2102_ = lean_ctor_get_uint8(v___y_2045_, sizeof(void*)*9 + 1);
v_pendingHead_2103_ = lean_ctor_get(v___y_2045_, 8);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___y_2045_);
if (v_isSharedCheck_2116_ == 0)
{
lean_object* v_unused_2117_; 
v_unused_2117_ = lean_ctor_get(v___y_2045_, 7);
lean_dec(v_unused_2117_);
v___x_2105_ = v___y_2045_;
v_isShared_2106_ = v_isSharedCheck_2116_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_pendingHead_2103_);
lean_inc(v_respStream_2101_);
lean_inc(v_response_2100_);
lean_inc(v_headerTimeout_2099_);
lean_inc(v_currentTimeout_2098_);
lean_inc(v_keepAliveTimeout_2097_);
lean_inc(v_requestStream_2096_);
lean_inc(v_machine_2095_);
lean_dec(v___y_2045_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2116_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
uint8_t v___x_2107_; lean_object* v___x_2109_; 
v___x_2107_ = 1;
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 7, v_size_2091_);
v___x_2109_ = v___x_2105_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_machine_2095_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v_requestStream_2096_);
lean_ctor_set(v_reuseFailAlloc_2115_, 2, v_keepAliveTimeout_2097_);
lean_ctor_set(v_reuseFailAlloc_2115_, 3, v_currentTimeout_2098_);
lean_ctor_set(v_reuseFailAlloc_2115_, 4, v_headerTimeout_2099_);
lean_ctor_set(v_reuseFailAlloc_2115_, 5, v_response_2100_);
lean_ctor_set(v_reuseFailAlloc_2115_, 6, v_respStream_2101_);
lean_ctor_set(v_reuseFailAlloc_2115_, 7, v_size_2091_);
lean_ctor_set(v_reuseFailAlloc_2115_, 8, v_pendingHead_2103_);
lean_ctor_set_uint8(v_reuseFailAlloc_2115_, sizeof(void*)*9 + 1, v_handlerDispatched_2102_);
v___x_2109_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2111_; 
lean_ctor_set_uint8(v___x_2109_, sizeof(void*)*9, v___x_2107_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2109_);
v___x_2111_ = v___x_2093_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
}
}
}
}
case 2:
{
lean_object* v_err_2119_; lean_object* v_onFailure_2120_; lean_object* v___f_2121_; lean_object* v___y_2123_; 
lean_dec_ref(v_connectionContext_2042_);
lean_dec_ref(v___f_2041_);
lean_dec_ref(v_inst_2040_);
lean_dec_ref(v___f_2039_);
lean_dec_ref(v_config_2035_);
v_err_2119_ = lean_ctor_get(v_a_2043_, 0);
lean_inc(v_err_2119_);
lean_dec_ref_known(v_a_2043_, 1);
v_onFailure_2120_ = lean_ctor_get(v_inst_2036_, 2);
lean_inc_ref(v_onFailure_2120_);
lean_dec_ref(v_inst_2036_);
v___f_2121_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_2121_, 0, v___y_2045_);
lean_closure_set(v___f_2121_, 1, v___f_2037_);
switch(lean_obj_tag(v_err_2119_))
{
case 0:
{
lean_object* v___x_2129_; 
v___x_2129_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0));
v___y_2123_ = v___x_2129_;
goto v___jp_2122_;
}
case 1:
{
lean_object* v___x_2130_; 
v___x_2130_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1));
v___y_2123_ = v___x_2130_;
goto v___jp_2122_;
}
case 2:
{
lean_object* v___x_2131_; 
v___x_2131_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2));
v___y_2123_ = v___x_2131_;
goto v___jp_2122_;
}
case 3:
{
lean_object* v___x_2132_; 
v___x_2132_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3));
v___y_2123_ = v___x_2132_;
goto v___jp_2122_;
}
case 4:
{
lean_object* v___x_2133_; 
v___x_2133_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4));
v___y_2123_ = v___x_2133_;
goto v___jp_2122_;
}
case 5:
{
lean_object* v___x_2134_; 
v___x_2134_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5));
v___y_2123_ = v___x_2134_;
goto v___jp_2122_;
}
case 6:
{
lean_object* v___x_2135_; 
v___x_2135_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6));
v___y_2123_ = v___x_2135_;
goto v___jp_2122_;
}
case 7:
{
lean_object* v___x_2136_; 
v___x_2136_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7));
v___y_2123_ = v___x_2136_;
goto v___jp_2122_;
}
case 8:
{
lean_object* v___x_2137_; 
v___x_2137_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8));
v___y_2123_ = v___x_2137_;
goto v___jp_2122_;
}
case 9:
{
lean_object* v___x_2138_; 
v___x_2138_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9));
v___y_2123_ = v___x_2138_;
goto v___jp_2122_;
}
case 10:
{
lean_object* v___x_2139_; 
v___x_2139_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10));
v___y_2123_ = v___x_2139_;
goto v___jp_2122_;
}
default: 
{
lean_object* v_message_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v_message_2140_ = lean_ctor_get(v_err_2119_, 0);
lean_inc_ref(v_message_2140_);
lean_dec_ref_known(v_err_2119_, 1);
v___x_2141_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11));
v___x_2142_ = lean_string_append(v___x_2141_, v_message_2140_);
lean_dec_ref(v_message_2140_);
v___y_2123_ = v___x_2142_;
goto v___jp_2122_;
}
}
v___jp_2122_:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; uint8_t v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2124_ = lean_mk_io_user_error(v___y_2123_);
v___x_2125_ = lean_unsigned_to_nat(0u);
v___x_2126_ = 0;
v___x_2127_ = lean_apply_3(v_onFailure_2120_, v_handler_2038_, v___x_2124_, lean_box(0));
v___x_2128_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2125_, v___x_2126_, v___x_2127_, v___f_2121_);
return v___x_2128_;
}
}
case 4:
{
lean_object* v_requestStream_2143_; lean_object* v___f_2144_; lean_object* v___f_2145_; lean_object* v___x_2146_; uint8_t v___x_2147_; lean_object* v___x_2148_; lean_object* v___f_2149_; lean_object* v___f_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_5118__overap_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
lean_dec_ref(v_connectionContext_2042_);
lean_dec_ref(v___f_2041_);
lean_dec_ref(v_inst_2040_);
lean_dec(v_handler_2038_);
lean_dec_ref(v___f_2037_);
lean_dec_ref(v_inst_2036_);
lean_dec_ref(v_config_2035_);
v_requestStream_2143_ = lean_ctor_get(v___y_2045_, 1);
lean_inc_ref_n(v_requestStream_2143_, 2);
lean_inc_ref(v___y_2045_);
v___f_2144_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2144_, 0, v___y_2045_);
v___f_2145_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_2145_, 0, v_requestStream_2143_);
lean_closure_set(v___f_2145_, 1, v___f_2144_);
lean_closure_set(v___f_2145_, 2, v___y_2045_);
v___x_2146_ = lean_unsigned_to_nat(0u);
v___x_2147_ = 0;
v___x_2148_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2149_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2150_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2151_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2152_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2152_, 0, lean_box(0));
lean_closure_set(v___x_2152_, 1, lean_box(0));
lean_closure_set(v___x_2152_, 2, v___x_2148_);
lean_closure_set(v___x_2152_, 3, lean_box(0));
lean_closure_set(v___x_2152_, 4, lean_box(0));
lean_closure_set(v___x_2152_, 5, v___x_2151_);
lean_closure_set(v___x_2152_, 6, v___f_2039_);
v___x_5118__overap_2153_ = l_Std_Mutex_atomically___redArg(v___x_2148_, v___f_2149_, v___f_2150_, v_requestStream_2143_, v___x_2152_);
v___x_2154_ = lean_apply_1(v___x_5118__overap_2153_, lean_box(0));
v___x_2155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2146_, v___x_2147_, v___x_2154_, v___f_2145_);
return v___x_2155_;
}
case 6:
{
lean_object* v_machine_2156_; lean_object* v_requestStream_2157_; lean_object* v_respStream_2158_; uint8_t v_requiresData_2159_; lean_object* v_expectData_2160_; lean_object* v_pendingHead_2161_; lean_object* v___x_2162_; lean_object* v___f_2163_; lean_object* v___f_2164_; lean_object* v___f_2165_; lean_object* v___f_2166_; lean_object* v___f_2167_; lean_object* v___f_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; lean_object* v___x_2171_; lean_object* v___f_2172_; lean_object* v___f_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_5143__overap_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
lean_dec_ref(v_connectionContext_2042_);
lean_dec_ref(v___f_2039_);
lean_dec(v_handler_2038_);
lean_dec_ref(v___f_2037_);
lean_dec_ref(v_inst_2036_);
v_machine_2156_ = lean_ctor_get(v___y_2045_, 0);
lean_inc_ref(v_machine_2156_);
v_requestStream_2157_ = lean_ctor_get(v___y_2045_, 1);
lean_inc_ref_n(v_requestStream_2157_, 2);
v_respStream_2158_ = lean_ctor_get(v___y_2045_, 6);
lean_inc(v_respStream_2158_);
v_requiresData_2159_ = lean_ctor_get_uint8(v___y_2045_, sizeof(void*)*9);
v_expectData_2160_ = lean_ctor_get(v___y_2045_, 7);
lean_inc(v_expectData_2160_);
v_pendingHead_2161_ = lean_ctor_get(v___y_2045_, 8);
lean_inc(v_pendingHead_2161_);
lean_dec_ref(v___y_2045_);
v___x_2162_ = lean_box(v_requiresData_2159_);
v___f_2163_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed), 7, 5);
lean_closure_set(v___f_2163_, 0, v_config_2035_);
lean_closure_set(v___f_2163_, 1, v_machine_2156_);
lean_closure_set(v___f_2163_, 2, v___x_2162_);
lean_closure_set(v___f_2163_, 3, v_expectData_2160_);
lean_closure_set(v___f_2163_, 4, v_pendingHead_2161_);
v___f_2164_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed), 3, 1);
lean_closure_set(v___f_2164_, 0, v___f_2163_);
lean_inc_ref(v___f_2164_);
v___f_2165_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2165_, 0, v___f_2164_);
v___f_2166_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_2166_, 0, v_respStream_2158_);
lean_closure_set(v___f_2166_, 1, v_inst_2040_);
lean_closure_set(v___f_2166_, 2, v___f_2165_);
lean_closure_set(v___f_2166_, 3, v___f_2164_);
lean_inc_ref(v___f_2166_);
v___f_2167_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2167_, 0, v___f_2166_);
v___f_2168_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_2168_, 0, v_requestStream_2157_);
lean_closure_set(v___f_2168_, 1, v___f_2167_);
lean_closure_set(v___f_2168_, 2, v___f_2166_);
v___x_2169_ = lean_unsigned_to_nat(0u);
v___x_2170_ = 0;
v___x_2171_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2172_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2173_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2174_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2175_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2175_, 0, lean_box(0));
lean_closure_set(v___x_2175_, 1, lean_box(0));
lean_closure_set(v___x_2175_, 2, v___x_2171_);
lean_closure_set(v___x_2175_, 3, lean_box(0));
lean_closure_set(v___x_2175_, 4, lean_box(0));
lean_closure_set(v___x_2175_, 5, v___x_2174_);
lean_closure_set(v___x_2175_, 6, v___f_2041_);
v___x_5143__overap_2176_ = l_Std_Mutex_atomically___redArg(v___x_2171_, v___f_2172_, v___f_2173_, v_requestStream_2157_, v___x_2175_);
v___x_2177_ = lean_apply_1(v___x_5143__overap_2176_, lean_box(0));
v___x_2178_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2169_, v___x_2170_, v___x_2177_, v___f_2168_);
return v___x_2178_;
}
case 7:
{
lean_object* v_pendingHead_2179_; 
lean_dec_ref(v___f_2041_);
lean_dec_ref(v_inst_2040_);
lean_dec_ref(v___f_2039_);
lean_dec_ref(v___f_2037_);
v_pendingHead_2179_ = lean_ctor_get(v___y_2045_, 8);
if (lean_obj_tag(v_pendingHead_2179_) == 1)
{
lean_object* v_machine_2180_; lean_object* v_requestStream_2181_; lean_object* v_keepAliveTimeout_2182_; lean_object* v_currentTimeout_2183_; lean_object* v_headerTimeout_2184_; lean_object* v_response_2185_; lean_object* v_respStream_2186_; uint8_t v_requiresData_2187_; lean_object* v_expectData_2188_; uint8_t v_handlerDispatched_2189_; lean_object* v_val_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___f_2193_; lean_object* v___x_2194_; uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
lean_inc_ref(v_pendingHead_2179_);
v_machine_2180_ = lean_ctor_get(v___y_2045_, 0);
lean_inc_ref(v_machine_2180_);
v_requestStream_2181_ = lean_ctor_get(v___y_2045_, 1);
lean_inc_ref(v_requestStream_2181_);
v_keepAliveTimeout_2182_ = lean_ctor_get(v___y_2045_, 2);
lean_inc(v_keepAliveTimeout_2182_);
v_currentTimeout_2183_ = lean_ctor_get(v___y_2045_, 3);
lean_inc(v_currentTimeout_2183_);
v_headerTimeout_2184_ = lean_ctor_get(v___y_2045_, 4);
lean_inc(v_headerTimeout_2184_);
v_response_2185_ = lean_ctor_get(v___y_2045_, 5);
lean_inc_ref(v_response_2185_);
v_respStream_2186_ = lean_ctor_get(v___y_2045_, 6);
lean_inc(v_respStream_2186_);
v_requiresData_2187_ = lean_ctor_get_uint8(v___y_2045_, sizeof(void*)*9);
v_expectData_2188_ = lean_ctor_get(v___y_2045_, 7);
lean_inc(v_expectData_2188_);
v_handlerDispatched_2189_ = lean_ctor_get_uint8(v___y_2045_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_2045_);
v_val_2190_ = lean_ctor_get(v_pendingHead_2179_, 0);
lean_inc(v_val_2190_);
v___x_2191_ = lean_box(v_requiresData_2187_);
v___x_2192_ = lean_box(v_handlerDispatched_2189_);
v___f_2193_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed), 12, 10);
lean_closure_set(v___f_2193_, 0, v_requestStream_2181_);
lean_closure_set(v___f_2193_, 1, v_keepAliveTimeout_2182_);
lean_closure_set(v___f_2193_, 2, v_currentTimeout_2183_);
lean_closure_set(v___f_2193_, 3, v_headerTimeout_2184_);
lean_closure_set(v___f_2193_, 4, v_response_2185_);
lean_closure_set(v___f_2193_, 5, v_respStream_2186_);
lean_closure_set(v___f_2193_, 6, v___x_2191_);
lean_closure_set(v___f_2193_, 7, v_expectData_2188_);
lean_closure_set(v___f_2193_, 8, v___x_2192_);
lean_closure_set(v___f_2193_, 9, v_pendingHead_2179_);
v___x_2194_ = lean_unsigned_to_nat(0u);
v___x_2195_ = 0;
v___x_2196_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_2036_, v_handler_2038_, v_machine_2180_, v_val_2190_, v_config_2035_, v_connectionContext_2042_);
v___x_2197_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2194_, v___x_2195_, v___x_2196_, v___f_2193_);
return v___x_2197_;
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
lean_dec_ref(v_connectionContext_2042_);
lean_dec(v_handler_2038_);
lean_dec_ref(v_inst_2036_);
lean_dec_ref(v_config_2035_);
v___x_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2198_, 0, v___y_2045_);
v___x_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
v___x_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
return v___x_2200_;
}
}
default: 
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
lean_dec(v_a_2043_);
lean_dec_ref(v_connectionContext_2042_);
lean_dec_ref(v___f_2041_);
lean_dec_ref(v_inst_2040_);
lean_dec_ref(v___f_2039_);
lean_dec(v_handler_2038_);
lean_dec_ref(v___f_2037_);
lean_dec_ref(v_inst_2036_);
lean_dec_ref(v_config_2035_);
v___x_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2201_, 0, v___y_2045_);
v___x_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
return v___x_2203_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object* v_config_2204_, lean_object* v_inst_2205_, lean_object* v___f_2206_, lean_object* v_handler_2207_, lean_object* v___f_2208_, lean_object* v_inst_2209_, lean_object* v___f_2210_, lean_object* v_connectionContext_2211_, lean_object* v_a_2212_, lean_object* v_x_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(v_config_2204_, v_inst_2205_, v___f_2206_, v_handler_2207_, v___f_2208_, v_inst_2209_, v___f_2210_, v_connectionContext_2211_, v_a_2212_, v_x_2213_, v___y_2214_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object* v_x_2217_){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2219_, 0, v_x_2217_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object* v_x_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(v_x_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object* v_inst_2225_, lean_object* v_inst_2226_, lean_object* v_handler_2227_, lean_object* v_config_2228_, lean_object* v_connectionContext_2229_, lean_object* v_events_2230_, lean_object* v_state_2231_){
_start:
{
lean_object* v___f_2233_; lean_object* v___f_2234_; lean_object* v___f_2235_; lean_object* v___x_2236_; size_t v_sz_2237_; size_t v___x_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; lean_object* v___x_4072__overap_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___f_2233_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_2234_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed), 12, 8);
lean_closure_set(v___f_2234_, 0, v_config_2228_);
lean_closure_set(v___f_2234_, 1, v_inst_2225_);
lean_closure_set(v___f_2234_, 2, v___f_2233_);
lean_closure_set(v___f_2234_, 3, v_handler_2227_);
lean_closure_set(v___f_2234_, 4, v___f_2233_);
lean_closure_set(v___f_2234_, 5, v_inst_2226_);
lean_closure_set(v___f_2234_, 6, v___f_2233_);
lean_closure_set(v___f_2234_, 7, v_connectionContext_2229_);
v___f_2235_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1));
v___x_2236_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v_sz_2237_ = lean_array_size(v_events_2230_);
v___x_2238_ = ((size_t)0ULL);
v___x_2239_ = lean_unsigned_to_nat(0u);
v___x_2240_ = 0;
v___x_4072__overap_2241_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2236_, v_events_2230_, v___f_2234_, v_sz_2237_, v___x_2238_, v_state_2231_);
v___x_2242_ = lean_apply_1(v___x_4072__overap_2241_, lean_box(0));
v___x_2243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2239_, v___x_2240_, v___x_2242_, v___f_2235_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object* v_inst_2244_, lean_object* v_inst_2245_, lean_object* v_handler_2246_, lean_object* v_config_2247_, lean_object* v_connectionContext_2248_, lean_object* v_events_2249_, lean_object* v_state_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2244_, v_inst_2245_, v_handler_2246_, v_config_2247_, v_connectionContext_2248_, v_events_2249_, v_state_2250_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object* v_00_u03c3_2253_, lean_object* v_00_u03b2_2254_, lean_object* v_inst_2255_, lean_object* v_inst_2256_, lean_object* v_handler_2257_, lean_object* v_config_2258_, lean_object* v_connectionContext_2259_, lean_object* v_events_2260_, lean_object* v_state_2261_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2255_, v_inst_2256_, v_handler_2257_, v_config_2258_, v_connectionContext_2259_, v_events_2260_, v_state_2261_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object* v_00_u03c3_2264_, lean_object* v_00_u03b2_2265_, lean_object* v_inst_2266_, lean_object* v_inst_2267_, lean_object* v_handler_2268_, lean_object* v_config_2269_, lean_object* v_connectionContext_2270_, lean_object* v_events_2271_, lean_object* v_state_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(v_00_u03c3_2264_, v_00_u03b2_2265_, v_inst_2266_, v_inst_2267_, v_handler_2268_, v_config_2269_, v_connectionContext_2270_, v_events_2271_, v_state_2272_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object* v_x_2275_){
_start:
{
if (lean_obj_tag(v_x_2275_) == 0)
{
lean_object* v_a_2276_; lean_object* v___x_2277_; 
v_a_2276_ = lean_ctor_get(v_x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v_x_2275_, 1);
v___x_2277_ = lean_task_pure(v_a_2276_);
return v___x_2277_;
}
else
{
lean_object* v_a_2278_; 
v_a_2278_ = lean_ctor_get(v_x_2275_, 0);
lean_inc_ref(v_a_2278_);
lean_dec_ref_known(v_x_2275_, 1);
return v_a_2278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object* v_machine_2279_, lean_object* v_requestStream_2280_, lean_object* v_keepAliveTimeout_2281_, lean_object* v_currentTimeout_2282_, lean_object* v_headerTimeout_2283_, lean_object* v_response_2284_, lean_object* v_respStream_2285_, uint8_t v_requiresData_2286_, lean_object* v_expectData_2287_, lean_object* v_x_2288_){
_start:
{
if (lean_obj_tag(v_x_2288_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2298_; 
lean_dec(v_expectData_2287_);
lean_dec(v_respStream_2285_);
lean_dec_ref(v_response_2284_);
lean_dec(v_headerTimeout_2283_);
lean_dec(v_currentTimeout_2282_);
lean_dec(v_keepAliveTimeout_2281_);
lean_dec_ref(v_requestStream_2280_);
lean_dec_ref(v_machine_2279_);
v_a_2290_ = lean_ctor_get(v_x_2288_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_x_2288_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2292_ = v_x_2288_;
v_isShared_2293_ = v_isSharedCheck_2298_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v_x_2288_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2298_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
return v___x_2296_;
}
}
}
else
{
lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2309_; 
v_isSharedCheck_2309_ = !lean_is_exclusive(v_x_2288_);
if (v_isSharedCheck_2309_ == 0)
{
lean_object* v_unused_2310_; 
v_unused_2310_ = lean_ctor_get(v_x_2288_, 0);
lean_dec(v_unused_2310_);
v___x_2300_ = v_x_2288_;
v_isShared_2301_ = v_isSharedCheck_2309_;
goto v_resetjp_2299_;
}
else
{
lean_dec(v_x_2288_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2309_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
uint8_t v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2306_; 
v___x_2302_ = 1;
v___x_2303_ = lean_box(0);
v___x_2304_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2304_, 0, v_machine_2279_);
lean_ctor_set(v___x_2304_, 1, v_requestStream_2280_);
lean_ctor_set(v___x_2304_, 2, v_keepAliveTimeout_2281_);
lean_ctor_set(v___x_2304_, 3, v_currentTimeout_2282_);
lean_ctor_set(v___x_2304_, 4, v_headerTimeout_2283_);
lean_ctor_set(v___x_2304_, 5, v_response_2284_);
lean_ctor_set(v___x_2304_, 6, v_respStream_2285_);
lean_ctor_set(v___x_2304_, 7, v_expectData_2287_);
lean_ctor_set(v___x_2304_, 8, v___x_2303_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*9, v_requiresData_2286_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*9 + 1, v___x_2302_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v___x_2304_);
v___x_2306_ = v___x_2300_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2304_);
v___x_2306_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
return v___x_2307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object* v_machine_2311_, lean_object* v_requestStream_2312_, lean_object* v_keepAliveTimeout_2313_, lean_object* v_currentTimeout_2314_, lean_object* v_headerTimeout_2315_, lean_object* v_response_2316_, lean_object* v_respStream_2317_, lean_object* v_requiresData_2318_, lean_object* v_expectData_2319_, lean_object* v_x_2320_, lean_object* v___y_2321_){
_start:
{
uint8_t v_requiresData_boxed_2322_; lean_object* v_res_2323_; 
v_requiresData_boxed_2322_ = lean_unbox(v_requiresData_2318_);
v_res_2323_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(v_machine_2311_, v_requestStream_2312_, v_keepAliveTimeout_2313_, v_currentTimeout_2314_, v_headerTimeout_2315_, v_response_2316_, v_respStream_2317_, v_requiresData_boxed_2322_, v_expectData_2319_, v_x_2320_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object* v_toFunctor_2324_, lean_object* v_response_2325_, lean_object* v___x_2326_, lean_object* v___f_2327_, lean_object* v_x_2328_){
_start:
{
if (lean_obj_tag(v_x_2328_) == 0)
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2338_; 
lean_dec_ref(v___f_2327_);
lean_dec(v___x_2326_);
lean_dec_ref(v_response_2325_);
lean_dec_ref(v_toFunctor_2324_);
v_a_2330_ = lean_ctor_get(v_x_2328_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2332_ = v_x_2328_;
v_isShared_2333_ = v_isSharedCheck_2338_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v_x_2328_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2338_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2336_; 
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2353_; 
v_a_2339_ = lean_ctor_get(v_x_2328_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2341_ = v_x_2328_;
v_isShared_2342_ = v_isSharedCheck_2353_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v_x_2328_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2353_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2343_ = lean_alloc_closure((void*)(l_Functor_discard), 4, 3);
lean_closure_set(v___x_2343_, 0, lean_box(0));
lean_closure_set(v___x_2343_, 1, lean_box(0));
lean_closure_set(v___x_2343_, 2, v_toFunctor_2324_);
v___x_2344_ = lean_alloc_closure((void*)(l_Std_Channel_send___boxed), 4, 2);
lean_closure_set(v___x_2344_, 0, lean_box(0));
lean_closure_set(v___x_2344_, 1, v_response_2325_);
v___x_2345_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2345_, 0, lean_box(0));
lean_closure_set(v___x_2345_, 1, lean_box(0));
lean_closure_set(v___x_2345_, 2, lean_box(0));
lean_closure_set(v___x_2345_, 3, v___x_2343_);
lean_closure_set(v___x_2345_, 4, v___x_2344_);
v___x_2346_ = 0;
lean_inc(v___x_2326_);
v___x_2347_ = l_BaseIO_chainTask___redArg(v_a_2339_, v___x_2345_, v___x_2326_, v___x_2346_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2347_);
v___x_2349_ = v___x_2341_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2349_);
v___x_2351_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2326_, v___x_2346_, v___x_2350_, v___f_2327_);
return v___x_2351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object* v_toFunctor_2354_, lean_object* v_response_2355_, lean_object* v___x_2356_, lean_object* v___f_2357_, lean_object* v_x_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(v_toFunctor_2354_, v_response_2355_, v___x_2356_, v___f_2357_, v_x_2358_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object* v_inst_2362_, lean_object* v_handler_2363_, lean_object* v_extensions_2364_, lean_object* v_connectionContext_2365_, lean_object* v_state_2366_){
_start:
{
lean_object* v___x_2368_; lean_object* v_toApplicative_2369_; lean_object* v_pendingHead_2370_; 
v___x_2368_ = l_instMonadBaseIO;
v_toApplicative_2369_ = lean_ctor_get(v___x_2368_, 0);
v_pendingHead_2370_ = lean_ctor_get(v_state_2366_, 8);
lean_inc(v_pendingHead_2370_);
if (lean_obj_tag(v_pendingHead_2370_) == 1)
{
lean_object* v_toFunctor_2371_; lean_object* v_machine_2372_; lean_object* v_requestStream_2373_; lean_object* v_keepAliveTimeout_2374_; lean_object* v_currentTimeout_2375_; lean_object* v_headerTimeout_2376_; lean_object* v_response_2377_; lean_object* v_respStream_2378_; uint8_t v_requiresData_2379_; lean_object* v_expectData_2380_; lean_object* v_val_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2404_; 
v_toFunctor_2371_ = lean_ctor_get(v_toApplicative_2369_, 0);
v_machine_2372_ = lean_ctor_get(v_state_2366_, 0);
lean_inc_ref(v_machine_2372_);
v_requestStream_2373_ = lean_ctor_get(v_state_2366_, 1);
lean_inc_ref(v_requestStream_2373_);
v_keepAliveTimeout_2374_ = lean_ctor_get(v_state_2366_, 2);
lean_inc(v_keepAliveTimeout_2374_);
v_currentTimeout_2375_ = lean_ctor_get(v_state_2366_, 3);
lean_inc(v_currentTimeout_2375_);
v_headerTimeout_2376_ = lean_ctor_get(v_state_2366_, 4);
lean_inc(v_headerTimeout_2376_);
v_response_2377_ = lean_ctor_get(v_state_2366_, 5);
lean_inc_ref(v_response_2377_);
v_respStream_2378_ = lean_ctor_get(v_state_2366_, 6);
lean_inc(v_respStream_2378_);
v_requiresData_2379_ = lean_ctor_get_uint8(v_state_2366_, sizeof(void*)*9);
v_expectData_2380_ = lean_ctor_get(v_state_2366_, 7);
lean_inc(v_expectData_2380_);
lean_dec_ref(v_state_2366_);
v_val_2381_ = lean_ctor_get(v_pendingHead_2370_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v_pendingHead_2370_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2383_ = v_pendingHead_2370_;
v_isShared_2384_ = v_isSharedCheck_2404_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_val_2381_);
lean_dec(v_pendingHead_2370_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2404_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v_onRequest_2385_; lean_object* v___f_2386_; lean_object* v___x_2387_; lean_object* v___f_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___f_2393_; uint8_t v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; uint8_t v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
v_onRequest_2385_ = lean_ctor_get(v_inst_2362_, 1);
lean_inc_ref(v_onRequest_2385_);
lean_dec_ref(v_inst_2362_);
v___f_2386_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0));
v___x_2387_ = lean_box(v_requiresData_2379_);
lean_inc_ref(v_response_2377_);
lean_inc_ref(v_requestStream_2373_);
v___f_2388_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed), 11, 9);
lean_closure_set(v___f_2388_, 0, v_machine_2372_);
lean_closure_set(v___f_2388_, 1, v_requestStream_2373_);
lean_closure_set(v___f_2388_, 2, v_keepAliveTimeout_2374_);
lean_closure_set(v___f_2388_, 3, v_currentTimeout_2375_);
lean_closure_set(v___f_2388_, 4, v_headerTimeout_2376_);
lean_closure_set(v___f_2388_, 5, v_response_2377_);
lean_closure_set(v___f_2388_, 6, v_respStream_2378_);
lean_closure_set(v___f_2388_, 7, v___x_2387_);
lean_closure_set(v___f_2388_, 8, v_expectData_2380_);
v___x_2389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2389_, 0, v_val_2381_);
lean_ctor_set(v___x_2389_, 1, v_requestStream_2373_);
lean_ctor_set(v___x_2389_, 2, v_extensions_2364_);
v___x_2390_ = lean_apply_2(v_onRequest_2385_, v_handler_2363_, v___x_2389_);
v___x_2391_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_runIn___boxed), 4, 3);
lean_closure_set(v___x_2391_, 0, lean_box(0));
lean_closure_set(v___x_2391_, 1, v_connectionContext_2365_);
lean_closure_set(v___x_2391_, 2, v___x_2390_);
v___x_2392_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_toFunctor_2371_);
v___f_2393_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2393_, 0, v_toFunctor_2371_);
lean_closure_set(v___f_2393_, 1, v_response_2377_);
lean_closure_set(v___f_2393_, 2, v___x_2392_);
lean_closure_set(v___f_2393_, 3, v___f_2388_);
v___x_2394_ = 0;
v___x_2395_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2395_, 0, lean_box(0));
lean_closure_set(v___x_2395_, 1, v___x_2391_);
v___x_2396_ = lean_io_as_task(v___x_2395_, v___x_2392_);
v___x_2397_ = 1;
v___x_2398_ = lean_task_bind(v___x_2396_, v___f_2386_, v___x_2392_, v___x_2397_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 0, v___x_2398_);
v___x_2400_ = v___x_2383_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2400_);
v___x_2402_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2392_, v___x_2394_, v___x_2401_, v___f_2393_);
return v___x_2402_;
}
}
}
else
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
lean_dec(v_pendingHead_2370_);
lean_dec_ref(v_connectionContext_2365_);
lean_dec(v_extensions_2364_);
lean_dec(v_handler_2363_);
lean_dec_ref(v_inst_2362_);
v___x_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2405_, 0, v_state_2366_);
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
return v___x_2406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object* v_inst_2407_, lean_object* v_handler_2408_, lean_object* v_extensions_2409_, lean_object* v_connectionContext_2410_, lean_object* v_state_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2407_, v_handler_2408_, v_extensions_2409_, v_connectionContext_2410_, v_state_2411_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object* v_00_u03c3_2414_, lean_object* v_inst_2415_, lean_object* v_handler_2416_, lean_object* v_extensions_2417_, lean_object* v_connectionContext_2418_, lean_object* v_state_2419_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2415_, v_handler_2416_, v_extensions_2417_, v_connectionContext_2418_, v_state_2419_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object* v_00_u03c3_2422_, lean_object* v_inst_2423_, lean_object* v_handler_2424_, lean_object* v_extensions_2425_, lean_object* v_connectionContext_2426_, lean_object* v_state_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(v_00_u03c3_2422_, v_inst_2423_, v_handler_2424_, v_extensions_2425_, v_connectionContext_2426_, v_state_2427_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object* v_machine_2430_, lean_object* v_____r_2431_){
_start:
{
lean_object* v_writer_2433_; lean_object* v_reader_2434_; lean_object* v_config_2435_; lean_object* v_events_2436_; lean_object* v_error_2437_; lean_object* v_instant_2438_; uint8_t v_keepAlive_2439_; uint8_t v_forcedFlush_2440_; uint8_t v_pullBodyStalled_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2468_; 
v_writer_2433_ = lean_ctor_get(v_machine_2430_, 1);
v_reader_2434_ = lean_ctor_get(v_machine_2430_, 0);
v_config_2435_ = lean_ctor_get(v_machine_2430_, 2);
v_events_2436_ = lean_ctor_get(v_machine_2430_, 3);
v_error_2437_ = lean_ctor_get(v_machine_2430_, 4);
v_instant_2438_ = lean_ctor_get(v_machine_2430_, 5);
v_keepAlive_2439_ = lean_ctor_get_uint8(v_machine_2430_, sizeof(void*)*6);
v_forcedFlush_2440_ = lean_ctor_get_uint8(v_machine_2430_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2441_ = lean_ctor_get_uint8(v_machine_2430_, sizeof(void*)*6 + 2);
v_isSharedCheck_2468_ = !lean_is_exclusive(v_machine_2430_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2443_ = v_machine_2430_;
v_isShared_2444_ = v_isSharedCheck_2468_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_instant_2438_);
lean_inc(v_error_2437_);
lean_inc(v_events_2436_);
lean_inc(v_config_2435_);
lean_inc(v_writer_2433_);
lean_inc(v_reader_2434_);
lean_dec(v_machine_2430_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2468_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v_userData_2445_; lean_object* v_outputData_2446_; lean_object* v_state_2447_; lean_object* v_knownSize_2448_; lean_object* v_messageHead_2449_; uint8_t v_sentMessage_2450_; uint8_t v_omitBody_2451_; lean_object* v_userDataBytes_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2467_; 
v_userData_2445_ = lean_ctor_get(v_writer_2433_, 0);
v_outputData_2446_ = lean_ctor_get(v_writer_2433_, 1);
v_state_2447_ = lean_ctor_get(v_writer_2433_, 2);
v_knownSize_2448_ = lean_ctor_get(v_writer_2433_, 3);
v_messageHead_2449_ = lean_ctor_get(v_writer_2433_, 4);
v_sentMessage_2450_ = lean_ctor_get_uint8(v_writer_2433_, sizeof(void*)*6);
v_omitBody_2451_ = lean_ctor_get_uint8(v_writer_2433_, sizeof(void*)*6 + 2);
v_userDataBytes_2452_ = lean_ctor_get(v_writer_2433_, 5);
v_isSharedCheck_2467_ = !lean_is_exclusive(v_writer_2433_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2454_ = v_writer_2433_;
v_isShared_2455_ = v_isSharedCheck_2467_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_userDataBytes_2452_);
lean_inc(v_messageHead_2449_);
lean_inc(v_knownSize_2448_);
lean_inc(v_state_2447_);
lean_inc(v_outputData_2446_);
lean_inc(v_userData_2445_);
lean_dec(v_writer_2433_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2467_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
uint8_t v___x_2456_; lean_object* v___x_2458_; 
v___x_2456_ = 1;
if (v_isShared_2455_ == 0)
{
v___x_2458_ = v___x_2454_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_userData_2445_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v_outputData_2446_);
lean_ctor_set(v_reuseFailAlloc_2466_, 2, v_state_2447_);
lean_ctor_set(v_reuseFailAlloc_2466_, 3, v_knownSize_2448_);
lean_ctor_set(v_reuseFailAlloc_2466_, 4, v_messageHead_2449_);
lean_ctor_set(v_reuseFailAlloc_2466_, 5, v_userDataBytes_2452_);
lean_ctor_set_uint8(v_reuseFailAlloc_2466_, sizeof(void*)*6, v_sentMessage_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2466_, sizeof(void*)*6 + 2, v_omitBody_2451_);
v___x_2458_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2460_; 
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*6 + 1, v___x_2456_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 1, v___x_2458_);
v___x_2460_ = v___x_2443_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_reader_2434_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2465_, 2, v_config_2435_);
lean_ctor_set(v_reuseFailAlloc_2465_, 3, v_events_2436_);
lean_ctor_set(v_reuseFailAlloc_2465_, 4, v_error_2437_);
lean_ctor_set(v_reuseFailAlloc_2465_, 5, v_instant_2438_);
lean_ctor_set_uint8(v_reuseFailAlloc_2465_, sizeof(void*)*6, v_keepAlive_2439_);
lean_ctor_set_uint8(v_reuseFailAlloc_2465_, sizeof(void*)*6 + 1, v_forcedFlush_2440_);
lean_ctor_set_uint8(v_reuseFailAlloc_2465_, sizeof(void*)*6 + 2, v_pullBodyStalled_2441_);
v___x_2460_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2461_ = lean_box(0);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2460_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object* v_machine_2469_, lean_object* v_____r_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_res_2472_; 
v_res_2472_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(v_machine_2469_, v_____r_2470_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object* v_x1_2473_, lean_object* v_x2_2474_){
_start:
{
lean_object* v_data_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v_data_2475_ = lean_ctor_get(v_x2_2474_, 0);
v___x_2476_ = lean_byte_array_size(v_data_2475_);
v___x_2477_ = lean_nat_add(v_x1_2473_, v___x_2476_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object* v_x1_2478_, lean_object* v_x2_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(v_x1_2478_, v_x2_2479_);
lean_dec_ref(v_x2_2479_);
lean_dec(v_x1_2478_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object* v_body_2481_, lean_object* v_machine_2482_, lean_object* v_isClosed_2483_, lean_object* v___f_2484_, lean_object* v___f_2485_, lean_object* v_x_2486_){
_start:
{
lean_object* v___y_2489_; 
if (lean_obj_tag(v_x_2486_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2502_; 
lean_dec_ref(v___f_2485_);
lean_dec_ref(v___f_2484_);
lean_dec_ref(v_isClosed_2483_);
lean_dec_ref(v_machine_2482_);
lean_dec(v_body_2481_);
v_a_2494_ = lean_ctor_get(v_x_2486_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v_x_2486_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2496_ = v_x_2486_;
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v_x_2486_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2500_; 
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
return v___x_2500_;
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2566_; 
v_a_2503_ = lean_ctor_get(v_x_2486_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_x_2486_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2505_ = v_x_2486_;
v_isShared_2506_ = v_isSharedCheck_2566_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v_x_2486_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2566_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
if (lean_obj_tag(v_a_2503_) == 0)
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2510_; 
lean_dec_ref(v___f_2485_);
lean_dec_ref(v___f_2484_);
lean_dec_ref(v_isClosed_2483_);
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v_body_2481_);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v_machine_2482_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 0, v___x_2508_);
v___x_2510_ = v___x_2505_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2508_);
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
else
{
lean_object* v_val_2513_; 
lean_del_object(v___x_2505_);
v_val_2513_ = lean_ctor_get(v_a_2503_, 0);
lean_inc(v_val_2513_);
lean_dec_ref_known(v_a_2503_, 1);
if (lean_obj_tag(v_val_2513_) == 0)
{
lean_object* v___x_2514_; uint8_t v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec_ref(v___f_2485_);
lean_dec_ref(v_machine_2482_);
v___x_2514_ = lean_unsigned_to_nat(0u);
v___x_2515_ = 0;
v___x_2516_ = lean_apply_2(v_isClosed_2483_, v_body_2481_, lean_box(0));
v___x_2517_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2514_, v___x_2515_, v___x_2516_, v___f_2484_);
return v___x_2517_;
}
else
{
lean_object* v_val_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
lean_dec_ref(v___f_2484_);
lean_dec_ref(v_isClosed_2483_);
v_val_2518_ = lean_ctor_get(v_val_2513_, 0);
lean_inc(v_val_2518_);
lean_dec_ref_known(v_val_2513_, 1);
v___x_2519_ = lean_unsigned_to_nat(1u);
v___x_2520_ = lean_mk_empty_array_with_capacity(v___x_2519_);
v___x_2521_ = lean_array_push(v___x_2520_, v_val_2518_);
v___x_2522_ = lean_array_get_size(v___x_2521_);
v___x_2523_ = lean_unsigned_to_nat(0u);
v___x_2524_ = lean_nat_dec_eq(v___x_2522_, v___x_2523_);
if (v___x_2524_ == 0)
{
lean_object* v_reader_2525_; lean_object* v_writer_2526_; lean_object* v_config_2527_; lean_object* v_events_2528_; lean_object* v_error_2529_; lean_object* v_instant_2530_; uint8_t v_keepAlive_2531_; uint8_t v_forcedFlush_2532_; uint8_t v_pullBodyStalled_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2565_; 
v_reader_2525_ = lean_ctor_get(v_machine_2482_, 0);
v_writer_2526_ = lean_ctor_get(v_machine_2482_, 1);
v_config_2527_ = lean_ctor_get(v_machine_2482_, 2);
v_events_2528_ = lean_ctor_get(v_machine_2482_, 3);
v_error_2529_ = lean_ctor_get(v_machine_2482_, 4);
v_instant_2530_ = lean_ctor_get(v_machine_2482_, 5);
v_keepAlive_2531_ = lean_ctor_get_uint8(v_machine_2482_, sizeof(void*)*6);
v_forcedFlush_2532_ = lean_ctor_get_uint8(v_machine_2482_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2533_ = lean_ctor_get_uint8(v_machine_2482_, sizeof(void*)*6 + 2);
v_isSharedCheck_2565_ = !lean_is_exclusive(v_machine_2482_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2535_ = v_machine_2482_;
v_isShared_2536_ = v_isSharedCheck_2565_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_instant_2530_);
lean_inc(v_error_2529_);
lean_inc(v_events_2528_);
lean_inc(v_config_2527_);
lean_inc(v_writer_2526_);
lean_inc(v_reader_2525_);
lean_dec(v_machine_2482_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2565_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___y_2538_; lean_object* v___x_2560_; uint8_t v___x_2561_; 
v___x_2560_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_2561_ = lean_nat_dec_lt(v___x_2523_, v___x_2522_);
if (v___x_2561_ == 0)
{
lean_dec_ref(v___f_2485_);
v___y_2538_ = v___x_2523_;
goto v___jp_2537_;
}
else
{
size_t v___x_2562_; size_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = ((size_t)0ULL);
v___x_2563_ = lean_usize_of_nat(v___x_2522_);
lean_inc_ref(v___x_2521_);
v___x_2564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2560_, v___f_2485_, v___x_2521_, v___x_2562_, v___x_2563_, v___x_2523_);
v___y_2538_ = v___x_2564_;
goto v___jp_2537_;
}
v___jp_2537_:
{
lean_object* v_userData_2539_; lean_object* v_outputData_2540_; lean_object* v_state_2541_; lean_object* v_knownSize_2542_; lean_object* v_messageHead_2543_; uint8_t v_sentMessage_2544_; uint8_t v_userClosedBody_2545_; uint8_t v_omitBody_2546_; lean_object* v_userDataBytes_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2559_; 
v_userData_2539_ = lean_ctor_get(v_writer_2526_, 0);
v_outputData_2540_ = lean_ctor_get(v_writer_2526_, 1);
v_state_2541_ = lean_ctor_get(v_writer_2526_, 2);
v_knownSize_2542_ = lean_ctor_get(v_writer_2526_, 3);
v_messageHead_2543_ = lean_ctor_get(v_writer_2526_, 4);
v_sentMessage_2544_ = lean_ctor_get_uint8(v_writer_2526_, sizeof(void*)*6);
v_userClosedBody_2545_ = lean_ctor_get_uint8(v_writer_2526_, sizeof(void*)*6 + 1);
v_omitBody_2546_ = lean_ctor_get_uint8(v_writer_2526_, sizeof(void*)*6 + 2);
v_userDataBytes_2547_ = lean_ctor_get(v_writer_2526_, 5);
v_isSharedCheck_2559_ = !lean_is_exclusive(v_writer_2526_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2549_ = v_writer_2526_;
v_isShared_2550_ = v_isSharedCheck_2559_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_userDataBytes_2547_);
lean_inc(v_messageHead_2543_);
lean_inc(v_knownSize_2542_);
lean_inc(v_state_2541_);
lean_inc(v_outputData_2540_);
lean_inc(v_userData_2539_);
lean_dec(v_writer_2526_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2559_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2554_; 
v___x_2551_ = l_Array_append___redArg(v_userData_2539_, v___x_2521_);
lean_dec_ref(v___x_2521_);
v___x_2552_ = lean_nat_add(v_userDataBytes_2547_, v___y_2538_);
lean_dec(v___y_2538_);
lean_dec(v_userDataBytes_2547_);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 5, v___x_2552_);
lean_ctor_set(v___x_2549_, 0, v___x_2551_);
v___x_2554_ = v___x_2549_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2551_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v_outputData_2540_);
lean_ctor_set(v_reuseFailAlloc_2558_, 2, v_state_2541_);
lean_ctor_set(v_reuseFailAlloc_2558_, 3, v_knownSize_2542_);
lean_ctor_set(v_reuseFailAlloc_2558_, 4, v_messageHead_2543_);
lean_ctor_set(v_reuseFailAlloc_2558_, 5, v___x_2552_);
lean_ctor_set_uint8(v_reuseFailAlloc_2558_, sizeof(void*)*6, v_sentMessage_2544_);
lean_ctor_set_uint8(v_reuseFailAlloc_2558_, sizeof(void*)*6 + 1, v_userClosedBody_2545_);
lean_ctor_set_uint8(v_reuseFailAlloc_2558_, sizeof(void*)*6 + 2, v_omitBody_2546_);
v___x_2554_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2556_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 1, v___x_2554_);
v___x_2556_ = v___x_2535_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_reader_2525_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v___x_2554_);
lean_ctor_set(v_reuseFailAlloc_2557_, 2, v_config_2527_);
lean_ctor_set(v_reuseFailAlloc_2557_, 3, v_events_2528_);
lean_ctor_set(v_reuseFailAlloc_2557_, 4, v_error_2529_);
lean_ctor_set(v_reuseFailAlloc_2557_, 5, v_instant_2530_);
lean_ctor_set_uint8(v_reuseFailAlloc_2557_, sizeof(void*)*6, v_keepAlive_2531_);
lean_ctor_set_uint8(v_reuseFailAlloc_2557_, sizeof(void*)*6 + 1, v_forcedFlush_2532_);
lean_ctor_set_uint8(v_reuseFailAlloc_2557_, sizeof(void*)*6 + 2, v_pullBodyStalled_2533_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
v___y_2489_ = v___x_2556_;
goto v___jp_2488_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2521_);
lean_dec_ref(v___f_2485_);
v___y_2489_ = v_machine_2482_;
goto v___jp_2488_;
}
}
}
}
}
v___jp_2488_:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2490_, 0, v_body_2481_);
v___x_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___y_2489_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
v___x_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2491_);
v___x_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
return v___x_2493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object* v_body_2567_, lean_object* v_machine_2568_, lean_object* v_isClosed_2569_, lean_object* v___f_2570_, lean_object* v___f_2571_, lean_object* v_x_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(v_body_2567_, v_machine_2568_, v_isClosed_2569_, v___f_2570_, v___f_2571_, v_x_2572_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object* v_inst_2576_, lean_object* v_machine_2577_, lean_object* v_body_2578_){
_start:
{
lean_object* v_close_2580_; lean_object* v_isClosed_2581_; lean_object* v_tryRecv_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___f_2585_; lean_object* v___f_2586_; lean_object* v___f_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v_close_2580_ = lean_ctor_get(v_inst_2576_, 1);
lean_inc_ref(v_close_2580_);
v_isClosed_2581_ = lean_ctor_get(v_inst_2576_, 2);
lean_inc_ref(v_isClosed_2581_);
v_tryRecv_2582_ = lean_ctor_get(v_inst_2576_, 4);
lean_inc_ref(v_tryRecv_2582_);
lean_dec_ref(v_inst_2576_);
lean_inc_ref(v_machine_2577_);
v___f_2583_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2583_, 0, v_machine_2577_);
lean_inc_ref(v___f_2583_);
v___f_2584_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2584_, 0, v___f_2583_);
lean_inc_n(v_body_2578_, 2);
v___f_2585_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2585_, 0, v_close_2580_);
lean_closure_set(v___f_2585_, 1, v_body_2578_);
lean_closure_set(v___f_2585_, 2, v___f_2584_);
lean_closure_set(v___f_2585_, 3, v___f_2583_);
v___f_2586_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___f_2587_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2587_, 0, v_body_2578_);
lean_closure_set(v___f_2587_, 1, v_machine_2577_);
lean_closure_set(v___f_2587_, 2, v_isClosed_2581_);
lean_closure_set(v___f_2587_, 3, v___f_2585_);
lean_closure_set(v___f_2587_, 4, v___f_2586_);
v___x_2588_ = lean_unsigned_to_nat(0u);
v___x_2589_ = 0;
v___x_2590_ = lean_apply_2(v_tryRecv_2582_, v_body_2578_, lean_box(0));
v___x_2591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2588_, v___x_2589_, v___x_2590_, v___f_2587_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object* v_inst_2592_, lean_object* v_machine_2593_, lean_object* v_body_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2592_, v_machine_2593_, v_body_2594_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object* v_00_u03b2_2597_, lean_object* v_inst_2598_, lean_object* v_machine_2599_, lean_object* v_body_2600_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2598_, v_machine_2599_, v_body_2600_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object* v_00_u03b2_2603_, lean_object* v_inst_2604_, lean_object* v_machine_2605_, lean_object* v_body_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(v_00_u03b2_2603_, v_inst_2604_, v_machine_2605_, v_body_2606_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object* v_val_2615_, lean_object* v_____r_2616_, lean_object* v_st_2617_){
_start:
{
lean_object* v_machine_2619_; lean_object* v_requestStream_2620_; lean_object* v_keepAliveTimeout_2621_; lean_object* v_currentTimeout_2622_; lean_object* v_headerTimeout_2623_; lean_object* v_response_2624_; lean_object* v_respStream_2625_; uint8_t v_requiresData_2626_; lean_object* v_expectData_2627_; uint8_t v_handlerDispatched_2628_; lean_object* v_pendingHead_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2714_; 
v_machine_2619_ = lean_ctor_get(v_st_2617_, 0);
v_requestStream_2620_ = lean_ctor_get(v_st_2617_, 1);
v_keepAliveTimeout_2621_ = lean_ctor_get(v_st_2617_, 2);
v_currentTimeout_2622_ = lean_ctor_get(v_st_2617_, 3);
v_headerTimeout_2623_ = lean_ctor_get(v_st_2617_, 4);
v_response_2624_ = lean_ctor_get(v_st_2617_, 5);
v_respStream_2625_ = lean_ctor_get(v_st_2617_, 6);
v_requiresData_2626_ = lean_ctor_get_uint8(v_st_2617_, sizeof(void*)*9);
v_expectData_2627_ = lean_ctor_get(v_st_2617_, 7);
v_handlerDispatched_2628_ = lean_ctor_get_uint8(v_st_2617_, sizeof(void*)*9 + 1);
v_pendingHead_2629_ = lean_ctor_get(v_st_2617_, 8);
v_isSharedCheck_2714_ = !lean_is_exclusive(v_st_2617_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2631_ = v_st_2617_;
v_isShared_2632_ = v_isSharedCheck_2714_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_pendingHead_2629_);
lean_inc(v_expectData_2627_);
lean_inc(v_respStream_2625_);
lean_inc(v_response_2624_);
lean_inc(v_headerTimeout_2623_);
lean_inc(v_currentTimeout_2622_);
lean_inc(v_keepAliveTimeout_2621_);
lean_inc(v_requestStream_2620_);
lean_inc(v_machine_2619_);
lean_dec(v_st_2617_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2714_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___y_2634_; uint8_t v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; uint8_t v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; uint8_t v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; uint8_t v___y_2657_; lean_object* v___y_2658_; lean_object* v_reader_2679_; lean_object* v_writer_2680_; lean_object* v_config_2681_; lean_object* v_events_2682_; lean_object* v_error_2683_; lean_object* v_instant_2684_; uint8_t v_keepAlive_2685_; uint8_t v_forcedFlush_2686_; lean_object* v_state_2687_; lean_object* v_input_2688_; lean_object* v_messageHead_2689_; lean_object* v_messageCount_2690_; lean_object* v_bodyBytesRead_2691_; lean_object* v_headerBytesRead_2692_; uint8_t v_noMoreInput_2693_; uint8_t v___y_2695_; uint8_t v___y_2696_; uint8_t v___y_2709_; 
v_reader_2679_ = lean_ctor_get(v_machine_2619_, 0);
v_writer_2680_ = lean_ctor_get(v_machine_2619_, 1);
v_config_2681_ = lean_ctor_get(v_machine_2619_, 2);
v_events_2682_ = lean_ctor_get(v_machine_2619_, 3);
v_error_2683_ = lean_ctor_get(v_machine_2619_, 4);
v_instant_2684_ = lean_ctor_get(v_machine_2619_, 5);
v_keepAlive_2685_ = lean_ctor_get_uint8(v_machine_2619_, sizeof(void*)*6);
v_forcedFlush_2686_ = lean_ctor_get_uint8(v_machine_2619_, sizeof(void*)*6 + 1);
v_state_2687_ = lean_ctor_get(v_reader_2679_, 0);
v_input_2688_ = lean_ctor_get(v_reader_2679_, 1);
v_messageHead_2689_ = lean_ctor_get(v_reader_2679_, 2);
v_messageCount_2690_ = lean_ctor_get(v_reader_2679_, 3);
v_bodyBytesRead_2691_ = lean_ctor_get(v_reader_2679_, 4);
v_headerBytesRead_2692_ = lean_ctor_get(v_reader_2679_, 5);
v_noMoreInput_2693_ = lean_ctor_get_uint8(v_reader_2679_, sizeof(void*)*6);
if (lean_obj_tag(v_state_2687_) == 6)
{
uint8_t v___x_2712_; 
v___x_2712_ = 1;
v___y_2709_ = v___x_2712_;
goto v___jp_2708_;
}
else
{
uint8_t v___x_2713_; 
v___x_2713_ = 0;
v___y_2709_ = v___x_2713_;
goto v___jp_2708_;
}
v___jp_2633_:
{
lean_object* v___x_2636_; 
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___y_2634_);
v___x_2636_ = v___x_2631_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___y_2634_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v_requestStream_2620_);
lean_ctor_set(v_reuseFailAlloc_2642_, 2, v_keepAliveTimeout_2621_);
lean_ctor_set(v_reuseFailAlloc_2642_, 3, v_currentTimeout_2622_);
lean_ctor_set(v_reuseFailAlloc_2642_, 4, v_headerTimeout_2623_);
lean_ctor_set(v_reuseFailAlloc_2642_, 5, v_response_2624_);
lean_ctor_set(v_reuseFailAlloc_2642_, 6, v_respStream_2625_);
lean_ctor_set(v_reuseFailAlloc_2642_, 7, v_expectData_2627_);
lean_ctor_set(v_reuseFailAlloc_2642_, 8, v_pendingHead_2629_);
lean_ctor_set_uint8(v_reuseFailAlloc_2642_, sizeof(void*)*9, v_requiresData_2626_);
lean_ctor_set_uint8(v_reuseFailAlloc_2642_, sizeof(void*)*9 + 1, v_handlerDispatched_2628_);
v___x_2636_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
uint8_t v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2637_ = 0;
v___x_2638_ = lean_box(v___x_2637_);
v___x_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2636_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
return v___x_2641_;
}
}
v___jp_2643_:
{
lean_object* v_maxHeaderBytes_2659_; lean_object* v_maxStartLineLength_2660_; lean_object* v_maxChunkLineLength_2661_; lean_object* v_maxBodySize_2662_; lean_object* v_array_2663_; lean_object* v_idx_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; uint8_t v___x_2670_; 
v_maxHeaderBytes_2659_ = lean_ctor_get(v___y_2652_, 2);
v_maxStartLineLength_2660_ = lean_ctor_get(v___y_2652_, 5);
v_maxChunkLineLength_2661_ = lean_ctor_get(v___y_2652_, 13);
v_maxBodySize_2662_ = lean_ctor_get(v___y_2652_, 15);
v_array_2663_ = lean_ctor_get(v___y_2658_, 0);
v_idx_2664_ = lean_ctor_get(v___y_2658_, 1);
v___x_2665_ = lean_nat_add(v_maxBodySize_2662_, v_maxHeaderBytes_2659_);
v___x_2666_ = lean_nat_add(v___x_2665_, v_maxStartLineLength_2660_);
lean_dec(v___x_2665_);
v___x_2667_ = lean_nat_add(v___x_2666_, v_maxChunkLineLength_2661_);
lean_dec(v___x_2666_);
v___x_2668_ = lean_byte_array_size(v_array_2663_);
v___x_2669_ = lean_nat_sub(v___x_2668_, v_idx_2664_);
v___x_2670_ = lean_nat_dec_lt(v___x_2667_, v___x_2669_);
lean_dec(v___x_2669_);
lean_dec(v___x_2667_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; lean_object* v_machine_2672_; 
v___x_2671_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2671_, 0, v___y_2655_);
lean_ctor_set(v___x_2671_, 1, v___y_2658_);
lean_ctor_set(v___x_2671_, 2, v___y_2645_);
lean_ctor_set(v___x_2671_, 3, v___y_2650_);
lean_ctor_set(v___x_2671_, 4, v___y_2648_);
lean_ctor_set(v___x_2671_, 5, v___y_2646_);
lean_ctor_set_uint8(v___x_2671_, sizeof(void*)*6, v___y_2651_);
v_machine_2672_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_machine_2672_, 0, v___x_2671_);
lean_ctor_set(v_machine_2672_, 1, v___y_2649_);
lean_ctor_set(v_machine_2672_, 2, v___y_2652_);
lean_ctor_set(v_machine_2672_, 3, v___y_2654_);
lean_ctor_set(v_machine_2672_, 4, v___y_2653_);
lean_ctor_set(v_machine_2672_, 5, v___y_2656_);
lean_ctor_set_uint8(v_machine_2672_, sizeof(void*)*6, v___y_2647_);
lean_ctor_set_uint8(v_machine_2672_, sizeof(void*)*6 + 1, v___y_2644_);
lean_ctor_set_uint8(v_machine_2672_, sizeof(void*)*6 + 2, v___y_2657_);
v___y_2634_ = v_machine_2672_;
goto v___jp_2633_;
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
lean_dec(v___y_2655_);
lean_dec(v___y_2653_);
v___x_2673_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0));
v___x_2674_ = lean_array_push(v___y_2654_, v___x_2673_);
v___x_2675_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1));
v___x_2676_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v___y_2658_);
lean_ctor_set(v___x_2676_, 2, v___y_2645_);
lean_ctor_set(v___x_2676_, 3, v___y_2650_);
lean_ctor_set(v___x_2676_, 4, v___y_2648_);
lean_ctor_set(v___x_2676_, 5, v___y_2646_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*6, v___y_2651_);
v___x_2677_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2));
v___x_2678_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2678_, 0, v___x_2676_);
lean_ctor_set(v___x_2678_, 1, v___y_2649_);
lean_ctor_set(v___x_2678_, 2, v___y_2652_);
lean_ctor_set(v___x_2678_, 3, v___x_2674_);
lean_ctor_set(v___x_2678_, 4, v___x_2677_);
lean_ctor_set(v___x_2678_, 5, v___y_2656_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*6, v___y_2647_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*6 + 1, v___y_2644_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*6 + 2, v___y_2657_);
v___y_2634_ = v___x_2678_;
goto v___jp_2633_;
}
}
v___jp_2694_:
{
if (v___y_2695_ == 0)
{
if (v___y_2696_ == 0)
{
lean_object* v_array_2697_; lean_object* v_idx_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
lean_inc(v_headerBytesRead_2692_);
lean_inc(v_bodyBytesRead_2691_);
lean_inc(v_messageCount_2690_);
lean_inc(v_messageHead_2689_);
lean_inc_ref(v_input_2688_);
lean_inc(v_state_2687_);
lean_inc(v_instant_2684_);
lean_inc(v_error_2683_);
lean_inc_ref(v_events_2682_);
lean_inc_ref(v_config_2681_);
lean_inc_ref(v_writer_2680_);
lean_dec_ref(v_machine_2619_);
v_array_2697_ = lean_ctor_get(v_input_2688_, 0);
lean_inc_ref(v_array_2697_);
v_idx_2698_ = lean_ctor_get(v_input_2688_, 1);
lean_inc(v_idx_2698_);
lean_dec_ref(v_input_2688_);
v___x_2699_ = lean_byte_array_size(v_array_2697_);
v___x_2700_ = lean_nat_dec_le(v___x_2699_, v_idx_2698_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2701_ = l_ByteArray_extract(v_array_2697_, v_idx_2698_, v___x_2699_);
lean_dec_ref(v_array_2697_);
v___x_2702_ = lean_unsigned_to_nat(0u);
v___x_2703_ = lean_byte_array_size(v___x_2701_);
v___x_2704_ = lean_byte_array_size(v_val_2615_);
v___x_2705_ = lean_byte_array_copy_slice(v_val_2615_, v___x_2702_, v___x_2701_, v___x_2703_, v___x_2704_, v___x_2700_);
lean_dec_ref(v_val_2615_);
v___x_2706_ = l_ByteArray_mkIterator(v___x_2705_);
v___y_2644_ = v_forcedFlush_2686_;
v___y_2645_ = v_messageHead_2689_;
v___y_2646_ = v_headerBytesRead_2692_;
v___y_2647_ = v_keepAlive_2685_;
v___y_2648_ = v_bodyBytesRead_2691_;
v___y_2649_ = v_writer_2680_;
v___y_2650_ = v_messageCount_2690_;
v___y_2651_ = v_noMoreInput_2693_;
v___y_2652_ = v_config_2681_;
v___y_2653_ = v_error_2683_;
v___y_2654_ = v_events_2682_;
v___y_2655_ = v_state_2687_;
v___y_2656_ = v_instant_2684_;
v___y_2657_ = v___y_2696_;
v___y_2658_ = v___x_2706_;
goto v___jp_2643_;
}
else
{
lean_object* v___x_2707_; 
lean_dec(v_idx_2698_);
lean_dec_ref(v_array_2697_);
v___x_2707_ = l_ByteArray_mkIterator(v_val_2615_);
v___y_2644_ = v_forcedFlush_2686_;
v___y_2645_ = v_messageHead_2689_;
v___y_2646_ = v_headerBytesRead_2692_;
v___y_2647_ = v_keepAlive_2685_;
v___y_2648_ = v_bodyBytesRead_2691_;
v___y_2649_ = v_writer_2680_;
v___y_2650_ = v_messageCount_2690_;
v___y_2651_ = v_noMoreInput_2693_;
v___y_2652_ = v_config_2681_;
v___y_2653_ = v_error_2683_;
v___y_2654_ = v_events_2682_;
v___y_2655_ = v_state_2687_;
v___y_2656_ = v_instant_2684_;
v___y_2657_ = v___y_2696_;
v___y_2658_ = v___x_2707_;
goto v___jp_2643_;
}
}
else
{
lean_dec_ref(v_val_2615_);
v___y_2634_ = v_machine_2619_;
goto v___jp_2633_;
}
}
else
{
lean_dec_ref(v_val_2615_);
v___y_2634_ = v_machine_2619_;
goto v___jp_2633_;
}
}
v___jp_2708_:
{
if (lean_obj_tag(v_state_2687_) == 7)
{
uint8_t v___x_2710_; 
v___x_2710_ = 1;
v___y_2695_ = v___y_2709_;
v___y_2696_ = v___x_2710_;
goto v___jp_2694_;
}
else
{
uint8_t v___x_2711_; 
v___x_2711_ = 0;
v___y_2695_ = v___y_2709_;
v___y_2696_ = v___x_2711_;
goto v___jp_2694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object* v_val_2715_, lean_object* v_____r_2716_, lean_object* v_st_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_2715_, v_____r_2716_, v_st_2717_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object* v_config_2720_, lean_object* v_machine_2721_, lean_object* v_requestStream_2722_, lean_object* v_currentTimeout_2723_, lean_object* v_response_2724_, lean_object* v_respStream_2725_, uint8_t v_requiresData_2726_, lean_object* v_expectData_2727_, uint8_t v_handlerDispatched_2728_, lean_object* v_pendingHead_2729_, lean_object* v___f_2730_, lean_object* v_x_2731_){
_start:
{
if (lean_obj_tag(v_x_2731_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v___f_2730_);
lean_dec(v_pendingHead_2729_);
lean_dec(v_expectData_2727_);
lean_dec(v_respStream_2725_);
lean_dec_ref(v_response_2724_);
lean_dec(v_currentTimeout_2723_);
lean_dec_ref(v_requestStream_2722_);
lean_dec_ref(v_machine_2721_);
v_a_2733_ = lean_ctor_get(v_x_2731_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v_x_2731_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2735_ = v_x_2731_;
v_isShared_2736_ = v_isSharedCheck_2741_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v_x_2731_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2741_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2738_);
return v___x_2739_;
}
}
}
else
{
lean_object* v_a_2742_; lean_object* v_headerTimeout_2743_; lean_object* v_second_2744_; lean_object* v_nano_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v_second_2749_; lean_object* v_nano_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v_a_2742_ = lean_ctor_get(v_x_2731_, 0);
lean_inc(v_a_2742_);
lean_dec_ref_known(v_x_2731_, 1);
v_headerTimeout_2743_ = lean_ctor_get(v_config_2720_, 6);
v_second_2744_ = lean_ctor_get(v_a_2742_, 0);
lean_inc(v_second_2744_);
v_nano_2745_ = lean_ctor_get(v_a_2742_, 1);
lean_inc(v_nano_2745_);
lean_dec(v_a_2742_);
v___x_2746_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_2747_ = lean_int_mul(v_headerTimeout_2743_, v___x_2746_);
v___x_2748_ = l_Std_Time_Duration_ofNanoseconds(v___x_2747_);
lean_dec(v___x_2747_);
v_second_2749_ = lean_ctor_get(v___x_2748_, 0);
lean_inc(v_second_2749_);
v_nano_2750_ = lean_ctor_get(v___x_2748_, 1);
lean_inc(v_nano_2750_);
lean_dec_ref(v___x_2748_);
v___x_2751_ = lean_box(0);
v___x_2752_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_2753_ = lean_int_mul(v_second_2744_, v___x_2752_);
lean_dec(v_second_2744_);
v___x_2754_ = lean_int_add(v___x_2753_, v_nano_2745_);
lean_dec(v_nano_2745_);
lean_dec(v___x_2753_);
v___x_2755_ = lean_int_mul(v_second_2749_, v___x_2752_);
lean_dec(v_second_2749_);
v___x_2756_ = lean_int_add(v___x_2755_, v_nano_2750_);
lean_dec(v_nano_2750_);
lean_dec(v___x_2755_);
v___x_2757_ = lean_int_add(v___x_2754_, v___x_2756_);
lean_dec(v___x_2756_);
lean_dec(v___x_2754_);
v___x_2758_ = l_Std_Time_Duration_ofNanoseconds(v___x_2757_);
lean_dec(v___x_2757_);
v___x_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2758_);
v___x_2760_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2760_, 0, v_machine_2721_);
lean_ctor_set(v___x_2760_, 1, v_requestStream_2722_);
lean_ctor_set(v___x_2760_, 2, v___x_2751_);
lean_ctor_set(v___x_2760_, 3, v_currentTimeout_2723_);
lean_ctor_set(v___x_2760_, 4, v___x_2759_);
lean_ctor_set(v___x_2760_, 5, v_response_2724_);
lean_ctor_set(v___x_2760_, 6, v_respStream_2725_);
lean_ctor_set(v___x_2760_, 7, v_expectData_2727_);
lean_ctor_set(v___x_2760_, 8, v_pendingHead_2729_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*9, v_requiresData_2726_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*9 + 1, v_handlerDispatched_2728_);
v___x_2761_ = lean_box(0);
v___x_2762_ = lean_apply_3(v___f_2730_, v___x_2761_, v___x_2760_, lean_box(0));
return v___x_2762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object* v_config_2763_, lean_object* v_machine_2764_, lean_object* v_requestStream_2765_, lean_object* v_currentTimeout_2766_, lean_object* v_response_2767_, lean_object* v_respStream_2768_, lean_object* v_requiresData_2769_, lean_object* v_expectData_2770_, lean_object* v_handlerDispatched_2771_, lean_object* v_pendingHead_2772_, lean_object* v___f_2773_, lean_object* v_x_2774_, lean_object* v___y_2775_){
_start:
{
uint8_t v_requiresData_boxed_2776_; uint8_t v_handlerDispatched_boxed_2777_; lean_object* v_res_2778_; 
v_requiresData_boxed_2776_ = lean_unbox(v_requiresData_2769_);
v_handlerDispatched_boxed_2777_ = lean_unbox(v_handlerDispatched_2771_);
v_res_2778_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(v_config_2763_, v_machine_2764_, v_requestStream_2765_, v_currentTimeout_2766_, v_response_2767_, v_respStream_2768_, v_requiresData_boxed_2776_, v_expectData_2770_, v_handlerDispatched_boxed_2777_, v_pendingHead_2772_, v___f_2773_, v_x_2774_);
lean_dec_ref(v_config_2763_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object* v_machine_2779_, lean_object* v_requestStream_2780_, lean_object* v_keepAliveTimeout_2781_, lean_object* v_currentTimeout_2782_, lean_object* v_headerTimeout_2783_, lean_object* v_response_2784_, uint8_t v_requiresData_2785_, lean_object* v_expectData_2786_, uint8_t v_handlerDispatched_2787_, lean_object* v_pendingHead_2788_, lean_object* v_____r_2789_){
_start:
{
lean_object* v_writer_2791_; lean_object* v_reader_2792_; lean_object* v_config_2793_; lean_object* v_events_2794_; lean_object* v_error_2795_; lean_object* v_instant_2796_; uint8_t v_keepAlive_2797_; uint8_t v_forcedFlush_2798_; uint8_t v_pullBodyStalled_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2829_; 
v_writer_2791_ = lean_ctor_get(v_machine_2779_, 1);
v_reader_2792_ = lean_ctor_get(v_machine_2779_, 0);
v_config_2793_ = lean_ctor_get(v_machine_2779_, 2);
v_events_2794_ = lean_ctor_get(v_machine_2779_, 3);
v_error_2795_ = lean_ctor_get(v_machine_2779_, 4);
v_instant_2796_ = lean_ctor_get(v_machine_2779_, 5);
v_keepAlive_2797_ = lean_ctor_get_uint8(v_machine_2779_, sizeof(void*)*6);
v_forcedFlush_2798_ = lean_ctor_get_uint8(v_machine_2779_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2799_ = lean_ctor_get_uint8(v_machine_2779_, sizeof(void*)*6 + 2);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_machine_2779_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2801_ = v_machine_2779_;
v_isShared_2802_ = v_isSharedCheck_2829_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_instant_2796_);
lean_inc(v_error_2795_);
lean_inc(v_events_2794_);
lean_inc(v_config_2793_);
lean_inc(v_writer_2791_);
lean_inc(v_reader_2792_);
lean_dec(v_machine_2779_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2829_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v_userData_2803_; lean_object* v_outputData_2804_; lean_object* v_state_2805_; lean_object* v_knownSize_2806_; lean_object* v_messageHead_2807_; uint8_t v_sentMessage_2808_; uint8_t v_omitBody_2809_; lean_object* v_userDataBytes_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2828_; 
v_userData_2803_ = lean_ctor_get(v_writer_2791_, 0);
v_outputData_2804_ = lean_ctor_get(v_writer_2791_, 1);
v_state_2805_ = lean_ctor_get(v_writer_2791_, 2);
v_knownSize_2806_ = lean_ctor_get(v_writer_2791_, 3);
v_messageHead_2807_ = lean_ctor_get(v_writer_2791_, 4);
v_sentMessage_2808_ = lean_ctor_get_uint8(v_writer_2791_, sizeof(void*)*6);
v_omitBody_2809_ = lean_ctor_get_uint8(v_writer_2791_, sizeof(void*)*6 + 2);
v_userDataBytes_2810_ = lean_ctor_get(v_writer_2791_, 5);
v_isSharedCheck_2828_ = !lean_is_exclusive(v_writer_2791_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2812_ = v_writer_2791_;
v_isShared_2813_ = v_isSharedCheck_2828_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_userDataBytes_2810_);
lean_inc(v_messageHead_2807_);
lean_inc(v_knownSize_2806_);
lean_inc(v_state_2805_);
lean_inc(v_outputData_2804_);
lean_inc(v_userData_2803_);
lean_dec(v_writer_2791_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2828_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
uint8_t v___x_2814_; lean_object* v___x_2816_; 
v___x_2814_ = 1;
if (v_isShared_2813_ == 0)
{
v___x_2816_ = v___x_2812_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_userData_2803_);
lean_ctor_set(v_reuseFailAlloc_2827_, 1, v_outputData_2804_);
lean_ctor_set(v_reuseFailAlloc_2827_, 2, v_state_2805_);
lean_ctor_set(v_reuseFailAlloc_2827_, 3, v_knownSize_2806_);
lean_ctor_set(v_reuseFailAlloc_2827_, 4, v_messageHead_2807_);
lean_ctor_set(v_reuseFailAlloc_2827_, 5, v_userDataBytes_2810_);
lean_ctor_set_uint8(v_reuseFailAlloc_2827_, sizeof(void*)*6, v_sentMessage_2808_);
lean_ctor_set_uint8(v_reuseFailAlloc_2827_, sizeof(void*)*6 + 2, v_omitBody_2809_);
v___x_2816_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2818_; 
lean_ctor_set_uint8(v___x_2816_, sizeof(void*)*6 + 1, v___x_2814_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 1, v___x_2816_);
v___x_2818_ = v___x_2801_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_reader_2792_);
lean_ctor_set(v_reuseFailAlloc_2826_, 1, v___x_2816_);
lean_ctor_set(v_reuseFailAlloc_2826_, 2, v_config_2793_);
lean_ctor_set(v_reuseFailAlloc_2826_, 3, v_events_2794_);
lean_ctor_set(v_reuseFailAlloc_2826_, 4, v_error_2795_);
lean_ctor_set(v_reuseFailAlloc_2826_, 5, v_instant_2796_);
lean_ctor_set_uint8(v_reuseFailAlloc_2826_, sizeof(void*)*6, v_keepAlive_2797_);
lean_ctor_set_uint8(v_reuseFailAlloc_2826_, sizeof(void*)*6 + 1, v_forcedFlush_2798_);
lean_ctor_set_uint8(v_reuseFailAlloc_2826_, sizeof(void*)*6 + 2, v_pullBodyStalled_2799_);
v___x_2818_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; uint8_t v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2819_ = lean_box(0);
v___x_2820_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2820_, 0, v___x_2818_);
lean_ctor_set(v___x_2820_, 1, v_requestStream_2780_);
lean_ctor_set(v___x_2820_, 2, v_keepAliveTimeout_2781_);
lean_ctor_set(v___x_2820_, 3, v_currentTimeout_2782_);
lean_ctor_set(v___x_2820_, 4, v_headerTimeout_2783_);
lean_ctor_set(v___x_2820_, 5, v_response_2784_);
lean_ctor_set(v___x_2820_, 6, v___x_2819_);
lean_ctor_set(v___x_2820_, 7, v_expectData_2786_);
lean_ctor_set(v___x_2820_, 8, v_pendingHead_2788_);
lean_ctor_set_uint8(v___x_2820_, sizeof(void*)*9, v_requiresData_2785_);
lean_ctor_set_uint8(v___x_2820_, sizeof(void*)*9 + 1, v_handlerDispatched_2787_);
v___x_2821_ = 0;
v___x_2822_ = lean_box(v___x_2821_);
v___x_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2820_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
v___x_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2824_);
return v___x_2825_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object* v_machine_2830_, lean_object* v_requestStream_2831_, lean_object* v_keepAliveTimeout_2832_, lean_object* v_currentTimeout_2833_, lean_object* v_headerTimeout_2834_, lean_object* v_response_2835_, lean_object* v_requiresData_2836_, lean_object* v_expectData_2837_, lean_object* v_handlerDispatched_2838_, lean_object* v_pendingHead_2839_, lean_object* v_____r_2840_, lean_object* v___y_2841_){
_start:
{
uint8_t v_requiresData_boxed_2842_; uint8_t v_handlerDispatched_boxed_2843_; lean_object* v_res_2844_; 
v_requiresData_boxed_2842_ = lean_unbox(v_requiresData_2836_);
v_handlerDispatched_boxed_2843_ = lean_unbox(v_handlerDispatched_2838_);
v_res_2844_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_2830_, v_requestStream_2831_, v_keepAliveTimeout_2832_, v_currentTimeout_2833_, v_headerTimeout_2834_, v_response_2835_, v_requiresData_boxed_2842_, v_expectData_2837_, v_handlerDispatched_boxed_2843_, v_pendingHead_2839_, v_____r_2840_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object* v___f_2845_, lean_object* v_x_2846_){
_start:
{
if (lean_obj_tag(v_x_2846_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2856_; 
lean_dec_ref(v___f_2845_);
v_a_2848_ = lean_ctor_get(v_x_2846_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v_x_2846_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2850_ = v_x_2846_;
v_isShared_2851_ = v_isSharedCheck_2856_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v_x_2846_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2856_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
return v___x_2854_;
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2858_; 
v_a_2857_ = lean_ctor_get(v_x_2846_, 0);
lean_inc(v_a_2857_);
lean_dec_ref_known(v_x_2846_, 1);
v___x_2858_ = lean_apply_2(v___f_2845_, v_a_2857_, lean_box(0));
return v___x_2858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object* v___f_2859_, lean_object* v_x_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(v___f_2859_, v_x_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object* v_close_2863_, lean_object* v_val_2864_, lean_object* v___f_2865_, lean_object* v___f_2866_, lean_object* v_x_2867_){
_start:
{
if (lean_obj_tag(v_x_2867_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2877_; 
lean_dec_ref(v___f_2866_);
lean_dec_ref(v___f_2865_);
lean_dec(v_val_2864_);
lean_dec_ref(v_close_2863_);
v_a_2869_ = lean_ctor_get(v_x_2867_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v_x_2867_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2871_ = v_x_2867_;
v_isShared_2872_ = v_isSharedCheck_2877_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v_x_2867_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2877_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2875_; 
v___x_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
return v___x_2875_;
}
}
}
else
{
lean_object* v_a_2878_; uint8_t v___x_2879_; 
v_a_2878_ = lean_ctor_get(v_x_2867_, 0);
lean_inc(v_a_2878_);
lean_dec_ref_known(v_x_2867_, 1);
v___x_2879_ = lean_unbox(v_a_2878_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; lean_object* v___x_2881_; uint8_t v___x_2882_; lean_object* v___x_2883_; 
lean_dec_ref(v___f_2866_);
v___x_2880_ = lean_unsigned_to_nat(0u);
v___x_2881_ = lean_apply_2(v_close_2863_, v_val_2864_, lean_box(0));
v___x_2882_ = lean_unbox(v_a_2878_);
lean_dec(v_a_2878_);
v___x_2883_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2880_, v___x_2882_, v___x_2881_, v___f_2865_);
return v___x_2883_;
}
else
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
lean_dec(v_a_2878_);
lean_dec_ref(v___f_2865_);
lean_dec(v_val_2864_);
lean_dec_ref(v_close_2863_);
v___x_2884_ = lean_box(0);
v___x_2885_ = lean_apply_2(v___f_2866_, v___x_2884_, lean_box(0));
return v___x_2885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object* v_close_2886_, lean_object* v_val_2887_, lean_object* v___f_2888_, lean_object* v___f_2889_, lean_object* v_x_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(v_close_2886_, v_val_2887_, v___f_2888_, v___f_2889_, v_x_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object* v_inst_2893_, lean_object* v_handler_2894_, lean_object* v_x_2895_){
_start:
{
if (lean_obj_tag(v_x_2895_) == 0)
{
lean_object* v_a_2897_; lean_object* v_onFailure_2898_; lean_object* v___x_2899_; 
v_a_2897_ = lean_ctor_get(v_x_2895_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v_x_2895_, 1);
v_onFailure_2898_ = lean_ctor_get(v_inst_2893_, 2);
lean_inc_ref(v_onFailure_2898_);
lean_dec_ref(v_inst_2893_);
v___x_2899_ = lean_apply_3(v_onFailure_2898_, v_handler_2894_, v_a_2897_, lean_box(0));
return v___x_2899_;
}
else
{
lean_object* v___x_2900_; 
lean_dec(v_handler_2894_);
lean_dec_ref(v_inst_2893_);
v___x_2900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2900_, 0, v_x_2895_);
return v___x_2900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object* v_inst_2901_, lean_object* v_handler_2902_, lean_object* v_x_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v_res_2905_; 
v_res_2905_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(v_inst_2901_, v_handler_2902_, v_x_2903_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object* v_st_2906_, lean_object* v_____r_2907_){
_start:
{
uint8_t v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2909_ = 0;
v___x_2910_ = lean_box(v___x_2909_);
v___x_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2911_, 0, v_st_2906_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
v___x_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
v___x_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object* v_st_2914_, lean_object* v_____r_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_2914_, v_____r_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object* v_requestStream_2918_, lean_object* v___f_2919_, lean_object* v___f_2920_, lean_object* v_x_2921_){
_start:
{
if (lean_obj_tag(v_x_2921_) == 0)
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2931_; 
lean_dec_ref(v___f_2920_);
lean_dec_ref(v___f_2919_);
lean_dec_ref(v_requestStream_2918_);
v_a_2923_ = lean_ctor_get(v_x_2921_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v_x_2921_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2925_ = v_x_2921_;
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v_x_2921_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2923_);
v___x_2928_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; 
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
return v___x_2929_;
}
}
}
else
{
lean_object* v_a_2932_; uint8_t v___x_2933_; 
v_a_2932_ = lean_ctor_get(v_x_2921_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v_x_2921_, 1);
v___x_2933_ = lean_unbox(v_a_2932_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; lean_object* v___x_2935_; uint8_t v___x_2936_; lean_object* v___x_2937_; 
lean_dec_ref(v___f_2920_);
v___x_2934_ = lean_unsigned_to_nat(0u);
v___x_2935_ = l_Std_Http_Body_Stream_close(v_requestStream_2918_);
v___x_2936_ = lean_unbox(v_a_2932_);
lean_dec(v_a_2932_);
v___x_2937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2934_, v___x_2936_, v___x_2935_, v___f_2919_);
return v___x_2937_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec(v_a_2932_);
lean_dec_ref(v___f_2919_);
lean_dec_ref(v_requestStream_2918_);
v___x_2938_ = lean_box(0);
v___x_2939_ = lean_apply_2(v___f_2920_, v___x_2938_, lean_box(0));
return v___x_2939_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object* v_requestStream_2940_, lean_object* v___f_2941_, lean_object* v___f_2942_, lean_object* v_x_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(v_requestStream_2940_, v___f_2941_, v___f_2942_, v_x_2943_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t v_final_2946_, lean_object* v___f_2947_, lean_object* v___f_2948_, lean_object* v_requestStream_2949_, lean_object* v___f_2950_, lean_object* v_x_2951_){
_start:
{
if (lean_obj_tag(v_x_2951_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2961_; 
lean_dec_ref(v___f_2950_);
lean_dec_ref(v_requestStream_2949_);
lean_dec_ref(v___f_2948_);
lean_dec_ref(v___f_2947_);
v_a_2953_ = lean_ctor_get(v_x_2951_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_x_2951_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2955_ = v_x_2951_;
v_isShared_2956_ = v_isSharedCheck_2961_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v_x_2951_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2961_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2958_);
return v___x_2959_;
}
}
}
else
{
lean_dec_ref_known(v_x_2951_, 1);
if (v_final_2946_ == 0)
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec_ref(v___f_2950_);
lean_dec_ref(v_requestStream_2949_);
lean_dec_ref(v___f_2948_);
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_apply_2(v___f_2947_, v___x_2962_, lean_box(0));
return v___x_2963_;
}
else
{
lean_object* v___x_2964_; uint8_t v___x_2965_; lean_object* v___x_2966_; lean_object* v___f_2967_; lean_object* v___f_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_6780__overap_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
lean_dec_ref(v___f_2947_);
v___x_2964_ = lean_unsigned_to_nat(0u);
v___x_2965_ = 0;
v___x_2966_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2967_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2968_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2969_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2970_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2970_, 0, lean_box(0));
lean_closure_set(v___x_2970_, 1, lean_box(0));
lean_closure_set(v___x_2970_, 2, v___x_2966_);
lean_closure_set(v___x_2970_, 3, lean_box(0));
lean_closure_set(v___x_2970_, 4, lean_box(0));
lean_closure_set(v___x_2970_, 5, v___x_2969_);
lean_closure_set(v___x_2970_, 6, v___f_2948_);
v___x_6780__overap_2971_ = l_Std_Mutex_atomically___redArg(v___x_2966_, v___f_2967_, v___f_2968_, v_requestStream_2949_, v___x_2970_);
v___x_2972_ = lean_apply_1(v___x_6780__overap_2971_, lean_box(0));
v___x_2973_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2964_, v___x_2965_, v___x_2972_, v___f_2950_);
return v___x_2973_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object* v_final_2974_, lean_object* v___f_2975_, lean_object* v___f_2976_, lean_object* v_requestStream_2977_, lean_object* v___f_2978_, lean_object* v_x_2979_, lean_object* v___y_2980_){
_start:
{
uint8_t v_final_boxed_2981_; lean_object* v_res_2982_; 
v_final_boxed_2981_ = lean_unbox(v_final_2974_);
v_res_2982_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(v_final_boxed_2981_, v___f_2975_, v___f_2976_, v_requestStream_2977_, v___f_2978_, v_x_2979_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object* v_state_2983_, lean_object* v_x_2984_){
_start:
{
if (lean_obj_tag(v_x_2984_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2994_; 
lean_dec_ref(v_state_2983_);
v_a_2986_ = lean_ctor_get(v_x_2984_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v_x_2984_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2988_ = v_x_2984_;
v_isShared_2989_ = v_isSharedCheck_2994_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v_x_2984_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2994_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
lean_object* v___x_2992_; 
v___x_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
return v___x_2992_;
}
}
}
else
{
lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3024_; 
v_isSharedCheck_3024_ = !lean_is_exclusive(v_x_2984_);
if (v_isSharedCheck_3024_ == 0)
{
lean_object* v_unused_3025_; 
v_unused_3025_ = lean_ctor_get(v_x_2984_, 0);
lean_dec(v_unused_3025_);
v___x_2996_ = v_x_2984_;
v_isShared_2997_ = v_isSharedCheck_3024_;
goto v_resetjp_2995_;
}
else
{
lean_dec(v_x_2984_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3024_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v_machine_2998_; lean_object* v_requestStream_2999_; lean_object* v_keepAliveTimeout_3000_; lean_object* v_currentTimeout_3001_; lean_object* v_headerTimeout_3002_; lean_object* v_response_3003_; lean_object* v_respStream_3004_; uint8_t v_requiresData_3005_; lean_object* v_expectData_3006_; lean_object* v_pendingHead_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3023_; 
v_machine_2998_ = lean_ctor_get(v_state_2983_, 0);
v_requestStream_2999_ = lean_ctor_get(v_state_2983_, 1);
v_keepAliveTimeout_3000_ = lean_ctor_get(v_state_2983_, 2);
v_currentTimeout_3001_ = lean_ctor_get(v_state_2983_, 3);
v_headerTimeout_3002_ = lean_ctor_get(v_state_2983_, 4);
v_response_3003_ = lean_ctor_get(v_state_2983_, 5);
v_respStream_3004_ = lean_ctor_get(v_state_2983_, 6);
v_requiresData_3005_ = lean_ctor_get_uint8(v_state_2983_, sizeof(void*)*9);
v_expectData_3006_ = lean_ctor_get(v_state_2983_, 7);
v_pendingHead_3007_ = lean_ctor_get(v_state_2983_, 8);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_state_2983_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3009_ = v_state_2983_;
v_isShared_3010_ = v_isSharedCheck_3023_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_pendingHead_3007_);
lean_inc(v_expectData_3006_);
lean_inc(v_respStream_3004_);
lean_inc(v_response_3003_);
lean_inc(v_headerTimeout_3002_);
lean_inc(v_currentTimeout_3001_);
lean_inc(v_keepAliveTimeout_3000_);
lean_inc(v_requestStream_2999_);
lean_inc(v_machine_2998_);
lean_dec(v_state_2983_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3023_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; uint8_t v___x_3013_; lean_object* v___x_3015_; 
v___x_3011_ = lean_box(52);
v___x_3012_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_2998_, v___x_3011_);
v___x_3013_ = 0;
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 0, v___x_3012_);
v___x_3015_ = v___x_3009_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v___x_3012_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v_requestStream_2999_);
lean_ctor_set(v_reuseFailAlloc_3022_, 2, v_keepAliveTimeout_3000_);
lean_ctor_set(v_reuseFailAlloc_3022_, 3, v_currentTimeout_3001_);
lean_ctor_set(v_reuseFailAlloc_3022_, 4, v_headerTimeout_3002_);
lean_ctor_set(v_reuseFailAlloc_3022_, 5, v_response_3003_);
lean_ctor_set(v_reuseFailAlloc_3022_, 6, v_respStream_3004_);
lean_ctor_set(v_reuseFailAlloc_3022_, 7, v_expectData_3006_);
lean_ctor_set(v_reuseFailAlloc_3022_, 8, v_pendingHead_3007_);
lean_ctor_set_uint8(v_reuseFailAlloc_3022_, sizeof(void*)*9, v_requiresData_3005_);
v___x_3015_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3019_; 
lean_ctor_set_uint8(v___x_3015_, sizeof(void*)*9 + 1, v___x_3013_);
v___x_3016_ = lean_box(v___x_3013_);
v___x_3017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3015_);
lean_ctor_set(v___x_3017_, 1, v___x_3016_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 0, v___x_3017_);
v___x_3019_ = v___x_2996_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3017_);
v___x_3019_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
lean_object* v___x_3020_; 
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
return v___x_3020_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object* v_state_3026_, lean_object* v_x_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(v_state_3026_, v_x_3027_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object* v_machine_3030_, lean_object* v_requestStream_3031_, lean_object* v_keepAliveTimeout_3032_, lean_object* v_currentTimeout_3033_, lean_object* v_headerTimeout_3034_, lean_object* v_response_3035_, lean_object* v_respStream_3036_, uint8_t v_requiresData_3037_, lean_object* v_expectData_3038_, lean_object* v_pendingHead_3039_, lean_object* v_____r_3040_){
_start:
{
uint8_t v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3042_ = 0;
v___x_3043_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3043_, 0, v_machine_3030_);
lean_ctor_set(v___x_3043_, 1, v_requestStream_3031_);
lean_ctor_set(v___x_3043_, 2, v_keepAliveTimeout_3032_);
lean_ctor_set(v___x_3043_, 3, v_currentTimeout_3033_);
lean_ctor_set(v___x_3043_, 4, v_headerTimeout_3034_);
lean_ctor_set(v___x_3043_, 5, v_response_3035_);
lean_ctor_set(v___x_3043_, 6, v_respStream_3036_);
lean_ctor_set(v___x_3043_, 7, v_expectData_3038_);
lean_ctor_set(v___x_3043_, 8, v_pendingHead_3039_);
lean_ctor_set_uint8(v___x_3043_, sizeof(void*)*9, v_requiresData_3037_);
lean_ctor_set_uint8(v___x_3043_, sizeof(void*)*9 + 1, v___x_3042_);
v___x_3044_ = lean_box(v___x_3042_);
v___x_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3043_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
v___x_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
v___x_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object* v_machine_3048_, lean_object* v_requestStream_3049_, lean_object* v_keepAliveTimeout_3050_, lean_object* v_currentTimeout_3051_, lean_object* v_headerTimeout_3052_, lean_object* v_response_3053_, lean_object* v_respStream_3054_, lean_object* v_requiresData_3055_, lean_object* v_expectData_3056_, lean_object* v_pendingHead_3057_, lean_object* v_____r_3058_, lean_object* v___y_3059_){
_start:
{
uint8_t v_requiresData_boxed_3060_; lean_object* v_res_3061_; 
v_requiresData_boxed_3060_ = lean_unbox(v_requiresData_3055_);
v_res_3061_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(v_machine_3048_, v_requestStream_3049_, v_keepAliveTimeout_3050_, v_currentTimeout_3051_, v_headerTimeout_3052_, v_response_3053_, v_respStream_3054_, v_requiresData_boxed_3060_, v_expectData_3056_, v_pendingHead_3057_, v_____r_3058_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object* v_close_3062_, lean_object* v_body_3063_, lean_object* v___f_3064_, lean_object* v___f_3065_, lean_object* v_x_3066_){
_start:
{
if (lean_obj_tag(v_x_3066_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3076_; 
lean_dec_ref(v___f_3065_);
lean_dec_ref(v___f_3064_);
lean_dec(v_body_3063_);
lean_dec_ref(v_close_3062_);
v_a_3068_ = lean_ctor_get(v_x_3066_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_x_3066_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3070_ = v_x_3066_;
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v_x_3066_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
return v___x_3074_;
}
}
}
else
{
lean_object* v_a_3077_; uint8_t v___x_3078_; 
v_a_3077_ = lean_ctor_get(v_x_3066_, 0);
lean_inc(v_a_3077_);
lean_dec_ref_known(v_x_3066_, 1);
v___x_3078_ = lean_unbox(v_a_3077_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3080_; uint8_t v___x_3081_; lean_object* v___x_3082_; 
lean_dec_ref(v___f_3065_);
v___x_3079_ = lean_unsigned_to_nat(0u);
v___x_3080_ = lean_apply_2(v_close_3062_, v_body_3063_, lean_box(0));
v___x_3081_ = lean_unbox(v_a_3077_);
lean_dec(v_a_3077_);
v___x_3082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3079_, v___x_3081_, v___x_3080_, v___f_3064_);
return v___x_3082_;
}
else
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
lean_dec(v_a_3077_);
lean_dec_ref(v___f_3064_);
lean_dec(v_body_3063_);
lean_dec_ref(v_close_3062_);
v___x_3083_ = lean_box(0);
v___x_3084_ = lean_apply_2(v___f_3065_, v___x_3083_, lean_box(0));
return v___x_3084_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object* v_close_3085_, lean_object* v_body_3086_, lean_object* v___f_3087_, lean_object* v___f_3088_, lean_object* v_x_3089_, lean_object* v___y_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(v_close_3085_, v_body_3086_, v___f_3087_, v___f_3088_, v_x_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object* v_requestStream_3092_, lean_object* v_keepAliveTimeout_3093_, lean_object* v_currentTimeout_3094_, lean_object* v_headerTimeout_3095_, lean_object* v_response_3096_, uint8_t v_requiresData_3097_, lean_object* v_expectData_3098_, uint8_t v___x_3099_, lean_object* v_pendingHead_3100_, lean_object* v_____x_3101_){
_start:
{
lean_object* v_snd_3103_; lean_object* v_fst_3104_; lean_object* v_fst_3105_; lean_object* v_snd_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3116_; 
v_snd_3103_ = lean_ctor_get(v_____x_3101_, 1);
lean_inc(v_snd_3103_);
v_fst_3104_ = lean_ctor_get(v_____x_3101_, 0);
lean_inc(v_fst_3104_);
lean_dec_ref(v_____x_3101_);
v_fst_3105_ = lean_ctor_get(v_snd_3103_, 0);
v_snd_3106_ = lean_ctor_get(v_snd_3103_, 1);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_snd_3103_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3108_ = v_snd_3103_;
v_isShared_3109_ = v_isSharedCheck_3116_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_snd_3106_);
lean_inc(v_fst_3105_);
lean_dec(v_snd_3103_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3116_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3110_; lean_object* v___x_3112_; 
v___x_3110_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3110_, 0, v_fst_3104_);
lean_ctor_set(v___x_3110_, 1, v_requestStream_3092_);
lean_ctor_set(v___x_3110_, 2, v_keepAliveTimeout_3093_);
lean_ctor_set(v___x_3110_, 3, v_currentTimeout_3094_);
lean_ctor_set(v___x_3110_, 4, v_headerTimeout_3095_);
lean_ctor_set(v___x_3110_, 5, v_response_3096_);
lean_ctor_set(v___x_3110_, 6, v_fst_3105_);
lean_ctor_set(v___x_3110_, 7, v_expectData_3098_);
lean_ctor_set(v___x_3110_, 8, v_pendingHead_3100_);
lean_ctor_set_uint8(v___x_3110_, sizeof(void*)*9, v_requiresData_3097_);
lean_ctor_set_uint8(v___x_3110_, sizeof(void*)*9 + 1, v___x_3099_);
if (v_isShared_3109_ == 0)
{
lean_ctor_set(v___x_3108_, 0, v___x_3110_);
v___x_3112_ = v___x_3108_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3110_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v_snd_3106_);
v___x_3112_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
v___x_3114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
return v___x_3114_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object* v_requestStream_3117_, lean_object* v_keepAliveTimeout_3118_, lean_object* v_currentTimeout_3119_, lean_object* v_headerTimeout_3120_, lean_object* v_response_3121_, lean_object* v_requiresData_3122_, lean_object* v_expectData_3123_, lean_object* v___x_3124_, lean_object* v_pendingHead_3125_, lean_object* v_____x_3126_, lean_object* v___y_3127_){
_start:
{
uint8_t v_requiresData_boxed_3128_; uint8_t v___x_7600__boxed_3129_; lean_object* v_res_3130_; 
v_requiresData_boxed_3128_ = lean_unbox(v_requiresData_3122_);
v___x_7600__boxed_3129_ = lean_unbox(v___x_3124_);
v_res_3130_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(v_requestStream_3117_, v_keepAliveTimeout_3118_, v_currentTimeout_3119_, v_headerTimeout_3120_, v_response_3121_, v_requiresData_boxed_3128_, v_expectData_3123_, v___x_7600__boxed_3129_, v_pendingHead_3125_, v_____x_3126_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object* v___f_3131_, lean_object* v_x_3132_){
_start:
{
if (lean_obj_tag(v_x_3132_) == 0)
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3142_; 
lean_dec_ref(v___f_3131_);
v_a_3134_ = lean_ctor_get(v_x_3132_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v_x_3132_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3136_ = v_x_3132_;
v_isShared_3137_ = v_isSharedCheck_3142_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v_x_3132_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3142_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
lean_object* v___x_3140_; 
v___x_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
return v___x_3140_;
}
}
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3144_; 
v_a_3143_ = lean_ctor_get(v_x_3132_, 0);
lean_inc(v_a_3143_);
lean_dec_ref_known(v_x_3132_, 1);
v___x_3144_ = lean_apply_2(v___f_3131_, v_a_3143_, lean_box(0));
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object* v___f_3145_, lean_object* v_x_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(v___f_3145_, v_x_3146_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(uint8_t v___x_3149_, lean_object* v_x_3150_){
_start:
{
if (lean_obj_tag(v_x_3150_) == 0)
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3160_; 
v_a_3152_ = lean_ctor_get(v_x_3150_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v_x_3150_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3154_ = v_x_3150_;
v_isShared_3155_ = v_isSharedCheck_3160_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v_x_3150_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3160_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; 
v___x_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
return v___x_3158_;
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3180_; 
v_a_3161_ = lean_ctor_get(v_x_3150_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_x_3150_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3163_ = v_x_3150_;
v_isShared_3164_ = v_isSharedCheck_3180_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v_x_3150_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3180_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v_fst_3165_; lean_object* v_snd_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3179_; 
v_fst_3165_ = lean_ctor_get(v_a_3161_, 0);
v_snd_3166_ = lean_ctor_get(v_a_3161_, 1);
v_isSharedCheck_3179_ = !lean_is_exclusive(v_a_3161_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3168_ = v_a_3161_;
v_isShared_3169_ = v_isSharedCheck_3179_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_snd_3166_);
lean_inc(v_fst_3165_);
lean_dec(v_a_3161_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3179_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3170_; lean_object* v___x_3172_; 
v___x_3170_ = lean_box(v___x_3149_);
if (v_isShared_3169_ == 0)
{
lean_ctor_set(v___x_3168_, 1, v___x_3170_);
lean_ctor_set(v___x_3168_, 0, v_snd_3166_);
v___x_3172_ = v___x_3168_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_snd_3166_);
lean_ctor_set(v_reuseFailAlloc_3178_, 1, v___x_3170_);
v___x_3172_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
lean_object* v___x_3173_; lean_object* v___x_3175_; 
v___x_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3173_, 0, v_fst_3165_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 0, v___x_3173_);
v___x_3175_ = v___x_3163_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
lean_object* v___x_3176_; 
v___x_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
return v___x_3176_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object* v___x_3181_, lean_object* v_x_3182_, lean_object* v___y_3183_){
_start:
{
uint8_t v___x_7668__boxed_3184_; lean_object* v_res_3185_; 
v___x_7668__boxed_3184_ = lean_unbox(v___x_3181_);
v_res_3185_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(v___x_7668__boxed_3184_, v_x_3182_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object* v_snd_3186_, uint8_t v___x_3187_, lean_object* v_fst_3188_, lean_object* v_x_3189_){
_start:
{
if (lean_obj_tag(v_x_3189_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3199_; 
lean_dec_ref(v_fst_3188_);
lean_dec(v_snd_3186_);
v_a_3191_ = lean_ctor_get(v_x_3189_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v_x_3189_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3193_ = v_x_3189_;
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v_x_3189_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
lean_object* v___x_3197_; 
v___x_3197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
return v___x_3197_;
}
}
}
else
{
lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3210_; 
v_isSharedCheck_3210_ = !lean_is_exclusive(v_x_3189_);
if (v_isSharedCheck_3210_ == 0)
{
lean_object* v_unused_3211_; 
v_unused_3211_ = lean_ctor_get(v_x_3189_, 0);
lean_dec(v_unused_3211_);
v___x_3201_ = v_x_3189_;
v_isShared_3202_ = v_isSharedCheck_3210_;
goto v_resetjp_3200_;
}
else
{
lean_dec(v_x_3189_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3210_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3207_; 
v___x_3203_ = lean_box(v___x_3187_);
v___x_3204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3204_, 0, v_snd_3186_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
v___x_3205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3205_, 0, v_fst_3188_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v___x_3205_);
v___x_3207_ = v___x_3201_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3208_; 
v___x_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
return v___x_3208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object* v_snd_3212_, lean_object* v___x_3213_, lean_object* v_fst_3214_, lean_object* v_x_3215_, lean_object* v___y_3216_){
_start:
{
uint8_t v___x_7736__boxed_3217_; lean_object* v_res_3218_; 
v___x_7736__boxed_3217_ = lean_unbox(v___x_3213_);
v_res_3218_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(v_snd_3212_, v___x_7736__boxed_3217_, v_fst_3214_, v_x_3215_);
return v_res_3218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object* v_inst_3219_, lean_object* v_handler_3220_, uint8_t v___x_3221_, lean_object* v___f_3222_, lean_object* v_x_3223_){
_start:
{
if (lean_obj_tag(v_x_3223_) == 0)
{
lean_object* v_a_3225_; lean_object* v_onFailure_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
v_a_3225_ = lean_ctor_get(v_x_3223_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v_x_3223_, 1);
v_onFailure_3226_ = lean_ctor_get(v_inst_3219_, 2);
lean_inc_ref(v_onFailure_3226_);
lean_dec_ref(v_inst_3219_);
v___x_3227_ = lean_unsigned_to_nat(0u);
v___x_3228_ = lean_apply_3(v_onFailure_3226_, v_handler_3220_, v_a_3225_, lean_box(0));
v___x_3229_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3227_, v___x_3221_, v___x_3228_, v___f_3222_);
return v___x_3229_;
}
else
{
lean_object* v___x_3230_; 
lean_dec_ref(v___f_3222_);
lean_dec(v_handler_3220_);
lean_dec_ref(v_inst_3219_);
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_x_3223_);
return v___x_3230_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object* v_inst_3231_, lean_object* v_handler_3232_, lean_object* v___x_3233_, lean_object* v___f_3234_, lean_object* v_x_3235_, lean_object* v___y_3236_){
_start:
{
uint8_t v___x_7794__boxed_3237_; lean_object* v_res_3238_; 
v___x_7794__boxed_3237_ = lean_unbox(v___x_3233_);
v_res_3238_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(v_inst_3231_, v_handler_3232_, v___x_7794__boxed_3237_, v___f_3234_, v_x_3235_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t v___x_3239_, lean_object* v___f_3240_, uint8_t v___x_3241_, lean_object* v_inst_3242_, lean_object* v_handler_3243_, lean_object* v_inst_3244_, lean_object* v___f_3245_, lean_object* v___f_3246_, lean_object* v_x_3247_){
_start:
{
if (lean_obj_tag(v_x_3247_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3257_; 
lean_dec_ref(v___f_3246_);
lean_dec_ref(v___f_3245_);
lean_dec_ref(v_inst_3244_);
lean_dec(v_handler_3243_);
lean_dec_ref(v_inst_3242_);
lean_dec_ref(v___f_3240_);
v_a_3249_ = lean_ctor_get(v_x_3247_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v_x_3247_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3251_ = v_x_3247_;
v_isShared_3252_ = v_isSharedCheck_3257_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v_x_3247_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3257_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
return v___x_3255_;
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3291_; 
v_a_3258_ = lean_ctor_get(v_x_3247_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v_x_3247_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3260_ = v_x_3247_;
v_isShared_3261_ = v_isSharedCheck_3291_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v_x_3247_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3291_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v_snd_3262_; 
v_snd_3262_ = lean_ctor_get(v_a_3258_, 1);
lean_inc(v_snd_3262_);
if (lean_obj_tag(v_snd_3262_) == 0)
{
lean_object* v_fst_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3278_; 
lean_dec_ref(v___f_3246_);
lean_dec_ref(v___f_3245_);
lean_dec_ref(v_inst_3244_);
lean_dec(v_handler_3243_);
lean_dec_ref(v_inst_3242_);
v_fst_3263_ = lean_ctor_get(v_a_3258_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v_a_3258_);
if (v_isSharedCheck_3278_ == 0)
{
lean_object* v_unused_3279_; 
v_unused_3279_ = lean_ctor_get(v_a_3258_, 1);
lean_dec(v_unused_3279_);
v___x_3265_ = v_a_3258_;
v_isShared_3266_ = v_isSharedCheck_3278_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_fst_3263_);
lean_dec(v_a_3258_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3278_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3267_ = lean_box(v___x_3239_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 1, v___x_3267_);
lean_ctor_set(v___x_3265_, 0, v_snd_3262_);
v___x_3269_ = v___x_3265_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_snd_3262_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v___x_3267_);
v___x_3269_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3273_; 
v___x_3270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3270_, 0, v_fst_3263_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = lean_unsigned_to_nat(0u);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v___x_3270_);
v___x_3273_ = v___x_3260_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v___x_3270_);
v___x_3273_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3273_);
v___x_3275_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3271_, v___x_3239_, v___x_3274_, v___f_3240_);
return v___x_3275_;
}
}
}
}
else
{
lean_object* v_fst_3280_; lean_object* v_val_3281_; lean_object* v___x_3282_; lean_object* v___f_3283_; lean_object* v___x_3284_; lean_object* v___f_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
lean_del_object(v___x_3260_);
lean_dec_ref(v___f_3240_);
v_fst_3280_ = lean_ctor_get(v_a_3258_, 0);
lean_inc_n(v_fst_3280_, 2);
lean_dec(v_a_3258_);
v_val_3281_ = lean_ctor_get(v_snd_3262_, 0);
lean_inc(v_val_3281_);
v___x_3282_ = lean_box(v___x_3241_);
v___f_3283_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed), 5, 3);
lean_closure_set(v___f_3283_, 0, v_snd_3262_);
lean_closure_set(v___f_3283_, 1, v___x_3282_);
lean_closure_set(v___f_3283_, 2, v_fst_3280_);
v___x_3284_ = lean_box(v___x_3239_);
v___f_3285_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed), 6, 4);
lean_closure_set(v___f_3285_, 0, v_inst_3242_);
lean_closure_set(v___f_3285_, 1, v_handler_3243_);
lean_closure_set(v___f_3285_, 2, v___x_3284_);
lean_closure_set(v___f_3285_, 3, v___f_3283_);
v___x_3286_ = lean_unsigned_to_nat(0u);
v___x_3287_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_3244_, v_fst_3280_, v_val_3281_);
v___x_3288_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3286_, v___x_3239_, v___x_3287_, v___f_3245_);
v___x_3289_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3286_, v___x_3239_, v___x_3288_, v___f_3285_);
v___x_3290_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3286_, v___x_3239_, v___x_3289_, v___f_3246_);
return v___x_3290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object* v___x_3292_, lean_object* v___f_3293_, lean_object* v___x_3294_, lean_object* v_inst_3295_, lean_object* v_handler_3296_, lean_object* v_inst_3297_, lean_object* v___f_3298_, lean_object* v___f_3299_, lean_object* v_x_3300_, lean_object* v___y_3301_){
_start:
{
uint8_t v___x_7819__boxed_3302_; uint8_t v___x_7821__boxed_3303_; lean_object* v_res_3304_; 
v___x_7819__boxed_3302_ = lean_unbox(v___x_3292_);
v___x_7821__boxed_3303_ = lean_unbox(v___x_3294_);
v_res_3304_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(v___x_7819__boxed_3302_, v___f_3293_, v___x_7821__boxed_3303_, v_inst_3295_, v_handler_3296_, v_inst_3297_, v___f_3298_, v___f_3299_, v_x_3300_);
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object* v_state_3305_, lean_object* v_x_3306_){
_start:
{
if (lean_obj_tag(v_x_3306_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3316_; 
lean_dec_ref(v_state_3305_);
v_a_3308_ = lean_ctor_get(v_x_3306_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v_x_3306_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3310_ = v_x_3306_;
v_isShared_3311_ = v_isSharedCheck_3316_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v_x_3306_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3316_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3308_);
v___x_3313_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
lean_object* v___x_3314_; 
v___x_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
return v___x_3314_;
}
}
}
else
{
lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3346_; 
v_isSharedCheck_3346_ = !lean_is_exclusive(v_x_3306_);
if (v_isSharedCheck_3346_ == 0)
{
lean_object* v_unused_3347_; 
v_unused_3347_ = lean_ctor_get(v_x_3306_, 0);
lean_dec(v_unused_3347_);
v___x_3318_ = v_x_3306_;
v_isShared_3319_ = v_isSharedCheck_3346_;
goto v_resetjp_3317_;
}
else
{
lean_dec(v_x_3306_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3346_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v_machine_3320_; lean_object* v_requestStream_3321_; lean_object* v_keepAliveTimeout_3322_; lean_object* v_currentTimeout_3323_; lean_object* v_headerTimeout_3324_; lean_object* v_response_3325_; lean_object* v_respStream_3326_; uint8_t v_requiresData_3327_; lean_object* v_expectData_3328_; lean_object* v_pendingHead_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3345_; 
v_machine_3320_ = lean_ctor_get(v_state_3305_, 0);
v_requestStream_3321_ = lean_ctor_get(v_state_3305_, 1);
v_keepAliveTimeout_3322_ = lean_ctor_get(v_state_3305_, 2);
v_currentTimeout_3323_ = lean_ctor_get(v_state_3305_, 3);
v_headerTimeout_3324_ = lean_ctor_get(v_state_3305_, 4);
v_response_3325_ = lean_ctor_get(v_state_3305_, 5);
v_respStream_3326_ = lean_ctor_get(v_state_3305_, 6);
v_requiresData_3327_ = lean_ctor_get_uint8(v_state_3305_, sizeof(void*)*9);
v_expectData_3328_ = lean_ctor_get(v_state_3305_, 7);
v_pendingHead_3329_ = lean_ctor_get(v_state_3305_, 8);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_state_3305_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3331_ = v_state_3305_;
v_isShared_3332_ = v_isSharedCheck_3345_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_pendingHead_3329_);
lean_inc(v_expectData_3328_);
lean_inc(v_respStream_3326_);
lean_inc(v_response_3325_);
lean_inc(v_headerTimeout_3324_);
lean_inc(v_currentTimeout_3323_);
lean_inc(v_keepAliveTimeout_3322_);
lean_inc(v_requestStream_3321_);
lean_inc(v_machine_3320_);
lean_dec(v_state_3305_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3345_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; uint8_t v___x_3335_; lean_object* v___x_3337_; 
v___x_3333_ = lean_box(31);
v___x_3334_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3320_, v___x_3333_);
v___x_3335_ = 0;
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 0, v___x_3334_);
v___x_3337_ = v___x_3331_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3334_);
lean_ctor_set(v_reuseFailAlloc_3344_, 1, v_requestStream_3321_);
lean_ctor_set(v_reuseFailAlloc_3344_, 2, v_keepAliveTimeout_3322_);
lean_ctor_set(v_reuseFailAlloc_3344_, 3, v_currentTimeout_3323_);
lean_ctor_set(v_reuseFailAlloc_3344_, 4, v_headerTimeout_3324_);
lean_ctor_set(v_reuseFailAlloc_3344_, 5, v_response_3325_);
lean_ctor_set(v_reuseFailAlloc_3344_, 6, v_respStream_3326_);
lean_ctor_set(v_reuseFailAlloc_3344_, 7, v_expectData_3328_);
lean_ctor_set(v_reuseFailAlloc_3344_, 8, v_pendingHead_3329_);
lean_ctor_set_uint8(v_reuseFailAlloc_3344_, sizeof(void*)*9, v_requiresData_3327_);
v___x_3337_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3341_; 
lean_ctor_set_uint8(v___x_3337_, sizeof(void*)*9 + 1, v___x_3335_);
v___x_3338_ = lean_box(v___x_3335_);
v___x_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3337_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 0, v___x_3339_);
v___x_3341_ = v___x_3318_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3339_);
v___x_3341_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3342_; 
v___x_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
return v___x_3342_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object* v_state_3348_, lean_object* v_x_3349_, lean_object* v___y_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(v_state_3348_, v_x_3349_);
return v_res_3351_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2(void){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1));
v___x_3357_ = lean_mk_io_user_error(v___x_3356_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object* v_inst_3358_, lean_object* v_inst_3359_, lean_object* v_handler_3360_, lean_object* v_config_3361_, lean_object* v_event_3362_, lean_object* v_state_3363_){
_start:
{
switch(lean_obj_tag(v_event_3362_))
{
case 0:
{
lean_object* v_x_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3472_; 
lean_dec(v_handler_3360_);
lean_dec_ref(v_inst_3359_);
lean_dec_ref(v_inst_3358_);
v_x_3365_ = lean_ctor_get(v_event_3362_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_event_3362_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3367_ = v_event_3362_;
v_isShared_3368_ = v_isSharedCheck_3472_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_x_3365_);
lean_dec(v_event_3362_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3472_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
if (lean_obj_tag(v_x_3365_) == 0)
{
lean_object* v_machine_3369_; lean_object* v_reader_3370_; lean_object* v_requestStream_3371_; lean_object* v_keepAliveTimeout_3372_; lean_object* v_currentTimeout_3373_; lean_object* v_headerTimeout_3374_; lean_object* v_response_3375_; lean_object* v_respStream_3376_; uint8_t v_requiresData_3377_; lean_object* v_expectData_3378_; uint8_t v_handlerDispatched_3379_; lean_object* v_pendingHead_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3423_; 
lean_dec_ref(v_config_3361_);
v_machine_3369_ = lean_ctor_get(v_state_3363_, 0);
lean_inc_ref(v_machine_3369_);
v_reader_3370_ = lean_ctor_get(v_machine_3369_, 0);
lean_inc_ref(v_reader_3370_);
v_requestStream_3371_ = lean_ctor_get(v_state_3363_, 1);
v_keepAliveTimeout_3372_ = lean_ctor_get(v_state_3363_, 2);
v_currentTimeout_3373_ = lean_ctor_get(v_state_3363_, 3);
v_headerTimeout_3374_ = lean_ctor_get(v_state_3363_, 4);
v_response_3375_ = lean_ctor_get(v_state_3363_, 5);
v_respStream_3376_ = lean_ctor_get(v_state_3363_, 6);
v_requiresData_3377_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3378_ = lean_ctor_get(v_state_3363_, 7);
v_handlerDispatched_3379_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9 + 1);
v_pendingHead_3380_ = lean_ctor_get(v_state_3363_, 8);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_state_3363_);
if (v_isSharedCheck_3423_ == 0)
{
lean_object* v_unused_3424_; 
v_unused_3424_ = lean_ctor_get(v_state_3363_, 0);
lean_dec(v_unused_3424_);
v___x_3382_ = v_state_3363_;
v_isShared_3383_ = v_isSharedCheck_3423_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_pendingHead_3380_);
lean_inc(v_expectData_3378_);
lean_inc(v_respStream_3376_);
lean_inc(v_response_3375_);
lean_inc(v_headerTimeout_3374_);
lean_inc(v_currentTimeout_3373_);
lean_inc(v_keepAliveTimeout_3372_);
lean_inc(v_requestStream_3371_);
lean_dec(v_state_3363_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3423_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v_writer_3384_; lean_object* v_config_3385_; lean_object* v_events_3386_; lean_object* v_error_3387_; lean_object* v_instant_3388_; uint8_t v_keepAlive_3389_; uint8_t v_forcedFlush_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3421_; 
v_writer_3384_ = lean_ctor_get(v_machine_3369_, 1);
v_config_3385_ = lean_ctor_get(v_machine_3369_, 2);
v_events_3386_ = lean_ctor_get(v_machine_3369_, 3);
v_error_3387_ = lean_ctor_get(v_machine_3369_, 4);
v_instant_3388_ = lean_ctor_get(v_machine_3369_, 5);
v_keepAlive_3389_ = lean_ctor_get_uint8(v_machine_3369_, sizeof(void*)*6);
v_forcedFlush_3390_ = lean_ctor_get_uint8(v_machine_3369_, sizeof(void*)*6 + 1);
v_isSharedCheck_3421_ = !lean_is_exclusive(v_machine_3369_);
if (v_isSharedCheck_3421_ == 0)
{
lean_object* v_unused_3422_; 
v_unused_3422_ = lean_ctor_get(v_machine_3369_, 0);
lean_dec(v_unused_3422_);
v___x_3392_ = v_machine_3369_;
v_isShared_3393_ = v_isSharedCheck_3421_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_instant_3388_);
lean_inc(v_error_3387_);
lean_inc(v_events_3386_);
lean_inc(v_config_3385_);
lean_inc(v_writer_3384_);
lean_dec(v_machine_3369_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3421_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v_state_3394_; lean_object* v_input_3395_; lean_object* v_messageHead_3396_; lean_object* v_messageCount_3397_; lean_object* v_bodyBytesRead_3398_; lean_object* v_headerBytesRead_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3420_; 
v_state_3394_ = lean_ctor_get(v_reader_3370_, 0);
v_input_3395_ = lean_ctor_get(v_reader_3370_, 1);
v_messageHead_3396_ = lean_ctor_get(v_reader_3370_, 2);
v_messageCount_3397_ = lean_ctor_get(v_reader_3370_, 3);
v_bodyBytesRead_3398_ = lean_ctor_get(v_reader_3370_, 4);
v_headerBytesRead_3399_ = lean_ctor_get(v_reader_3370_, 5);
v_isSharedCheck_3420_ = !lean_is_exclusive(v_reader_3370_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3401_ = v_reader_3370_;
v_isShared_3402_ = v_isSharedCheck_3420_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_headerBytesRead_3399_);
lean_inc(v_bodyBytesRead_3398_);
lean_inc(v_messageCount_3397_);
lean_inc(v_messageHead_3396_);
lean_inc(v_input_3395_);
lean_inc(v_state_3394_);
lean_dec(v_reader_3370_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3420_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
uint8_t v___x_3403_; lean_object* v___x_3405_; 
v___x_3403_ = 1;
if (v_isShared_3402_ == 0)
{
v___x_3405_ = v___x_3401_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_state_3394_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v_input_3395_);
lean_ctor_set(v_reuseFailAlloc_3419_, 2, v_messageHead_3396_);
lean_ctor_set(v_reuseFailAlloc_3419_, 3, v_messageCount_3397_);
lean_ctor_set(v_reuseFailAlloc_3419_, 4, v_bodyBytesRead_3398_);
lean_ctor_set(v_reuseFailAlloc_3419_, 5, v_headerBytesRead_3399_);
v___x_3405_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
uint8_t v___x_3406_; lean_object* v___x_3408_; 
lean_ctor_set_uint8(v___x_3405_, sizeof(void*)*6, v___x_3403_);
v___x_3406_ = 0;
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 0, v___x_3405_);
v___x_3408_ = v___x_3392_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v___x_3405_);
lean_ctor_set(v_reuseFailAlloc_3418_, 1, v_writer_3384_);
lean_ctor_set(v_reuseFailAlloc_3418_, 2, v_config_3385_);
lean_ctor_set(v_reuseFailAlloc_3418_, 3, v_events_3386_);
lean_ctor_set(v_reuseFailAlloc_3418_, 4, v_error_3387_);
lean_ctor_set(v_reuseFailAlloc_3418_, 5, v_instant_3388_);
lean_ctor_set_uint8(v_reuseFailAlloc_3418_, sizeof(void*)*6, v_keepAlive_3389_);
lean_ctor_set_uint8(v_reuseFailAlloc_3418_, sizeof(void*)*6 + 1, v_forcedFlush_3390_);
v___x_3408_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
lean_object* v___x_3410_; 
lean_ctor_set_uint8(v___x_3408_, sizeof(void*)*6 + 2, v___x_3406_);
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 0, v___x_3408_);
v___x_3410_ = v___x_3382_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v___x_3408_);
lean_ctor_set(v_reuseFailAlloc_3417_, 1, v_requestStream_3371_);
lean_ctor_set(v_reuseFailAlloc_3417_, 2, v_keepAliveTimeout_3372_);
lean_ctor_set(v_reuseFailAlloc_3417_, 3, v_currentTimeout_3373_);
lean_ctor_set(v_reuseFailAlloc_3417_, 4, v_headerTimeout_3374_);
lean_ctor_set(v_reuseFailAlloc_3417_, 5, v_response_3375_);
lean_ctor_set(v_reuseFailAlloc_3417_, 6, v_respStream_3376_);
lean_ctor_set(v_reuseFailAlloc_3417_, 7, v_expectData_3378_);
lean_ctor_set(v_reuseFailAlloc_3417_, 8, v_pendingHead_3380_);
lean_ctor_set_uint8(v_reuseFailAlloc_3417_, sizeof(void*)*9, v_requiresData_3377_);
lean_ctor_set_uint8(v_reuseFailAlloc_3417_, sizeof(void*)*9 + 1, v_handlerDispatched_3379_);
v___x_3410_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
v___x_3411_ = lean_box(v___x_3406_);
v___x_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3410_);
lean_ctor_set(v___x_3412_, 1, v___x_3411_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set_tag(v___x_3367_, 1);
lean_ctor_set(v___x_3367_, 0, v___x_3412_);
v___x_3414_ = v___x_3367_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3412_);
v___x_3414_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
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
lean_object* v_val_3425_; lean_object* v_machine_3426_; lean_object* v_requestStream_3427_; lean_object* v_keepAliveTimeout_3428_; lean_object* v_currentTimeout_3429_; lean_object* v_response_3430_; lean_object* v_respStream_3431_; uint8_t v_requiresData_3432_; lean_object* v_expectData_3433_; uint8_t v_handlerDispatched_3434_; lean_object* v_pendingHead_3435_; lean_object* v___f_3436_; 
lean_del_object(v___x_3367_);
v_val_3425_ = lean_ctor_get(v_x_3365_, 0);
lean_inc_n(v_val_3425_, 2);
lean_dec_ref_known(v_x_3365_, 1);
v_machine_3426_ = lean_ctor_get(v_state_3363_, 0);
v_requestStream_3427_ = lean_ctor_get(v_state_3363_, 1);
v_keepAliveTimeout_3428_ = lean_ctor_get(v_state_3363_, 2);
lean_inc(v_keepAliveTimeout_3428_);
v_currentTimeout_3429_ = lean_ctor_get(v_state_3363_, 3);
v_response_3430_ = lean_ctor_get(v_state_3363_, 5);
v_respStream_3431_ = lean_ctor_get(v_state_3363_, 6);
v_requiresData_3432_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3433_ = lean_ctor_get(v_state_3363_, 7);
v_handlerDispatched_3434_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9 + 1);
v_pendingHead_3435_ = lean_ctor_get(v_state_3363_, 8);
v___f_3436_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3436_, 0, v_val_3425_);
if (lean_obj_tag(v_keepAliveTimeout_3428_) == 0)
{
lean_object* v___x_3437_; lean_object* v___x_3438_; 
lean_dec_ref(v___f_3436_);
lean_dec_ref(v_config_3361_);
v___x_3437_ = lean_box(0);
v___x_3438_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_3425_, v___x_3437_, v_state_3363_);
return v___x_3438_;
}
else
{
lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3470_; 
lean_inc(v_pendingHead_3435_);
lean_inc(v_expectData_3433_);
lean_inc(v_respStream_3431_);
lean_inc_ref(v_response_3430_);
lean_inc(v_currentTimeout_3429_);
lean_inc_ref(v_requestStream_3427_);
lean_inc_ref(v_machine_3426_);
lean_dec(v_val_3425_);
lean_dec_ref(v_state_3363_);
v_isSharedCheck_3470_ = !lean_is_exclusive(v_keepAliveTimeout_3428_);
if (v_isSharedCheck_3470_ == 0)
{
lean_object* v_unused_3471_; 
v_unused_3471_ = lean_ctor_get(v_keepAliveTimeout_3428_, 0);
lean_dec(v_unused_3471_);
v___x_3440_ = v_keepAliveTimeout_3428_;
v_isShared_3441_ = v_isSharedCheck_3470_;
goto v_resetjp_3439_;
}
else
{
lean_dec(v_keepAliveTimeout_3428_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3470_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___f_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; lean_object* v_val_3448_; lean_object* v___x_3453_; 
v___x_3442_ = lean_box(v_requiresData_3432_);
v___x_3443_ = lean_box(v_handlerDispatched_3434_);
v___f_3444_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3444_, 0, v_config_3361_);
lean_closure_set(v___f_3444_, 1, v_machine_3426_);
lean_closure_set(v___f_3444_, 2, v_requestStream_3427_);
lean_closure_set(v___f_3444_, 3, v_currentTimeout_3429_);
lean_closure_set(v___f_3444_, 4, v_response_3430_);
lean_closure_set(v___f_3444_, 5, v_respStream_3431_);
lean_closure_set(v___f_3444_, 6, v___x_3442_);
lean_closure_set(v___f_3444_, 7, v_expectData_3433_);
lean_closure_set(v___f_3444_, 8, v___x_3443_);
lean_closure_set(v___f_3444_, 9, v_pendingHead_3435_);
lean_closure_set(v___f_3444_, 10, v___f_3436_);
v___x_3445_ = lean_unsigned_to_nat(0u);
v___x_3446_ = 0;
v___x_3453_ = lean_get_current_time();
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3461_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3456_ = v___x_3453_;
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3453_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
lean_ctor_set_tag(v___x_3456_, 1);
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
v_val_3448_ = v___x_3459_;
goto v___jp_3447_;
}
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
v_a_3462_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3453_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3453_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
lean_ctor_set_tag(v___x_3464_, 0);
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
v_val_3448_ = v___x_3467_;
goto v___jp_3447_;
}
}
}
v___jp_3447_:
{
lean_object* v___x_3450_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set_tag(v___x_3440_, 0);
lean_ctor_set(v___x_3440_, 0, v_val_3448_);
v___x_3450_ = v___x_3440_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_val_3448_);
v___x_3450_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
lean_object* v___x_3451_; 
v___x_3451_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3445_, v___x_3446_, v___x_3450_, v___f_3444_);
return v___x_3451_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_x_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3584_; 
lean_dec_ref(v_config_3361_);
lean_dec(v_handler_3360_);
lean_dec_ref(v_inst_3358_);
v_x_3473_ = lean_ctor_get(v_event_3362_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_event_3362_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3475_ = v_event_3362_;
v_isShared_3476_ = v_isSharedCheck_3584_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_x_3473_);
lean_dec(v_event_3362_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3584_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
if (lean_obj_tag(v_x_3473_) == 0)
{
lean_object* v_machine_3477_; lean_object* v_requestStream_3478_; lean_object* v_keepAliveTimeout_3479_; lean_object* v_currentTimeout_3480_; lean_object* v_headerTimeout_3481_; lean_object* v_response_3482_; lean_object* v_respStream_3483_; uint8_t v_requiresData_3484_; lean_object* v_expectData_3485_; uint8_t v_handlerDispatched_3486_; lean_object* v_pendingHead_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___f_3490_; 
lean_del_object(v___x_3475_);
v_machine_3477_ = lean_ctor_get(v_state_3363_, 0);
lean_inc_ref_n(v_machine_3477_, 2);
v_requestStream_3478_ = lean_ctor_get(v_state_3363_, 1);
lean_inc_ref_n(v_requestStream_3478_, 2);
v_keepAliveTimeout_3479_ = lean_ctor_get(v_state_3363_, 2);
lean_inc_n(v_keepAliveTimeout_3479_, 2);
v_currentTimeout_3480_ = lean_ctor_get(v_state_3363_, 3);
lean_inc_n(v_currentTimeout_3480_, 2);
v_headerTimeout_3481_ = lean_ctor_get(v_state_3363_, 4);
lean_inc_n(v_headerTimeout_3481_, 2);
v_response_3482_ = lean_ctor_get(v_state_3363_, 5);
lean_inc_ref_n(v_response_3482_, 2);
v_respStream_3483_ = lean_ctor_get(v_state_3363_, 6);
lean_inc(v_respStream_3483_);
v_requiresData_3484_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3485_ = lean_ctor_get(v_state_3363_, 7);
lean_inc_n(v_expectData_3485_, 2);
v_handlerDispatched_3486_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9 + 1);
v_pendingHead_3487_ = lean_ctor_get(v_state_3363_, 8);
lean_inc_n(v_pendingHead_3487_, 2);
lean_dec_ref(v_state_3363_);
v___x_3488_ = lean_box(v_requiresData_3484_);
v___x_3489_ = lean_box(v_handlerDispatched_3486_);
v___f_3490_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_3490_, 0, v_machine_3477_);
lean_closure_set(v___f_3490_, 1, v_requestStream_3478_);
lean_closure_set(v___f_3490_, 2, v_keepAliveTimeout_3479_);
lean_closure_set(v___f_3490_, 3, v_currentTimeout_3480_);
lean_closure_set(v___f_3490_, 4, v_headerTimeout_3481_);
lean_closure_set(v___f_3490_, 5, v_response_3482_);
lean_closure_set(v___f_3490_, 6, v___x_3488_);
lean_closure_set(v___f_3490_, 7, v_expectData_3485_);
lean_closure_set(v___f_3490_, 8, v___x_3489_);
lean_closure_set(v___f_3490_, 9, v_pendingHead_3487_);
if (lean_obj_tag(v_respStream_3483_) == 1)
{
lean_object* v_val_3491_; lean_object* v_close_3492_; lean_object* v_isClosed_3493_; lean_object* v___f_3494_; lean_object* v___f_3495_; lean_object* v___x_3496_; uint8_t v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
lean_dec(v_pendingHead_3487_);
lean_dec(v_expectData_3485_);
lean_dec_ref(v_response_3482_);
lean_dec(v_headerTimeout_3481_);
lean_dec(v_currentTimeout_3480_);
lean_dec(v_keepAliveTimeout_3479_);
lean_dec_ref(v_requestStream_3478_);
lean_dec_ref(v_machine_3477_);
v_val_3491_ = lean_ctor_get(v_respStream_3483_, 0);
lean_inc_n(v_val_3491_, 2);
lean_dec_ref_known(v_respStream_3483_, 1);
v_close_3492_ = lean_ctor_get(v_inst_3359_, 1);
lean_inc_ref(v_close_3492_);
v_isClosed_3493_ = lean_ctor_get(v_inst_3359_, 2);
lean_inc_ref(v_isClosed_3493_);
lean_dec_ref(v_inst_3359_);
lean_inc_ref(v___f_3490_);
v___f_3494_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3494_, 0, v___f_3490_);
v___f_3495_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3495_, 0, v_close_3492_);
lean_closure_set(v___f_3495_, 1, v_val_3491_);
lean_closure_set(v___f_3495_, 2, v___f_3494_);
lean_closure_set(v___f_3495_, 3, v___f_3490_);
v___x_3496_ = lean_unsigned_to_nat(0u);
v___x_3497_ = 0;
v___x_3498_ = lean_apply_2(v_isClosed_3493_, v_val_3491_, lean_box(0));
v___x_3499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3496_, v___x_3497_, v___x_3498_, v___f_3495_);
return v___x_3499_;
}
else
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
lean_dec_ref(v___f_3490_);
lean_dec(v_respStream_3483_);
lean_dec_ref(v_inst_3359_);
v___x_3500_ = lean_box(0);
v___x_3501_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_3477_, v_requestStream_3478_, v_keepAliveTimeout_3479_, v_currentTimeout_3480_, v_headerTimeout_3481_, v_response_3482_, v_requiresData_3484_, v_expectData_3485_, v_handlerDispatched_3486_, v_pendingHead_3487_, v___x_3500_);
return v___x_3501_;
}
}
else
{
lean_object* v_val_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3583_; 
lean_dec_ref(v_inst_3359_);
v_val_3502_ = lean_ctor_get(v_x_3473_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_x_3473_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3504_ = v_x_3473_;
v_isShared_3505_ = v_isSharedCheck_3583_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_val_3502_);
lean_dec(v_x_3473_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3583_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v_machine_3506_; lean_object* v_requestStream_3507_; lean_object* v_keepAliveTimeout_3508_; lean_object* v_currentTimeout_3509_; lean_object* v_headerTimeout_3510_; lean_object* v_response_3511_; lean_object* v_respStream_3512_; uint8_t v_requiresData_3513_; lean_object* v_expectData_3514_; uint8_t v_handlerDispatched_3515_; lean_object* v_pendingHead_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3582_; 
v_machine_3506_ = lean_ctor_get(v_state_3363_, 0);
v_requestStream_3507_ = lean_ctor_get(v_state_3363_, 1);
v_keepAliveTimeout_3508_ = lean_ctor_get(v_state_3363_, 2);
v_currentTimeout_3509_ = lean_ctor_get(v_state_3363_, 3);
v_headerTimeout_3510_ = lean_ctor_get(v_state_3363_, 4);
v_response_3511_ = lean_ctor_get(v_state_3363_, 5);
v_respStream_3512_ = lean_ctor_get(v_state_3363_, 6);
v_requiresData_3513_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3514_ = lean_ctor_get(v_state_3363_, 7);
v_handlerDispatched_3515_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9 + 1);
v_pendingHead_3516_ = lean_ctor_get(v_state_3363_, 8);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_state_3363_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3518_ = v_state_3363_;
v_isShared_3519_ = v_isSharedCheck_3582_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_pendingHead_3516_);
lean_inc(v_expectData_3514_);
lean_inc(v_respStream_3512_);
lean_inc(v_response_3511_);
lean_inc(v_headerTimeout_3510_);
lean_inc(v_currentTimeout_3509_);
lean_inc(v_keepAliveTimeout_3508_);
lean_inc(v_requestStream_3507_);
lean_inc(v_machine_3506_);
lean_dec(v_state_3363_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3582_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___y_3521_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3534_ = lean_unsigned_to_nat(1u);
v___x_3535_ = lean_mk_empty_array_with_capacity(v___x_3534_);
v___x_3536_ = lean_array_push(v___x_3535_, v_val_3502_);
v___x_3537_ = lean_array_get_size(v___x_3536_);
v___x_3538_ = lean_unsigned_to_nat(0u);
v___x_3539_ = lean_nat_dec_eq(v___x_3537_, v___x_3538_);
if (v___x_3539_ == 0)
{
lean_object* v_reader_3540_; lean_object* v_writer_3541_; lean_object* v_config_3542_; lean_object* v_events_3543_; lean_object* v_error_3544_; lean_object* v_instant_3545_; uint8_t v_keepAlive_3546_; uint8_t v_forcedFlush_3547_; uint8_t v_pullBodyStalled_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3581_; 
v_reader_3540_ = lean_ctor_get(v_machine_3506_, 0);
v_writer_3541_ = lean_ctor_get(v_machine_3506_, 1);
v_config_3542_ = lean_ctor_get(v_machine_3506_, 2);
v_events_3543_ = lean_ctor_get(v_machine_3506_, 3);
v_error_3544_ = lean_ctor_get(v_machine_3506_, 4);
v_instant_3545_ = lean_ctor_get(v_machine_3506_, 5);
v_keepAlive_3546_ = lean_ctor_get_uint8(v_machine_3506_, sizeof(void*)*6);
v_forcedFlush_3547_ = lean_ctor_get_uint8(v_machine_3506_, sizeof(void*)*6 + 1);
v_pullBodyStalled_3548_ = lean_ctor_get_uint8(v_machine_3506_, sizeof(void*)*6 + 2);
v_isSharedCheck_3581_ = !lean_is_exclusive(v_machine_3506_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3550_ = v_machine_3506_;
v_isShared_3551_ = v_isSharedCheck_3581_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_instant_3545_);
lean_inc(v_error_3544_);
lean_inc(v_events_3543_);
lean_inc(v_config_3542_);
lean_inc(v_writer_3541_);
lean_inc(v_reader_3540_);
lean_dec(v_machine_3506_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3581_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___y_3553_; lean_object* v___x_3575_; uint8_t v___x_3576_; 
v___x_3575_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_3576_ = lean_nat_dec_lt(v___x_3538_, v___x_3537_);
if (v___x_3576_ == 0)
{
v___y_3553_ = v___x_3538_;
goto v___jp_3552_;
}
else
{
lean_object* v___f_3577_; size_t v___x_3578_; size_t v___x_3579_; lean_object* v___x_3580_; 
v___f_3577_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___x_3578_ = ((size_t)0ULL);
v___x_3579_ = lean_usize_of_nat(v___x_3537_);
lean_inc_ref(v___x_3536_);
v___x_3580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3575_, v___f_3577_, v___x_3536_, v___x_3578_, v___x_3579_, v___x_3538_);
v___y_3553_ = v___x_3580_;
goto v___jp_3552_;
}
v___jp_3552_:
{
lean_object* v_userData_3554_; lean_object* v_outputData_3555_; lean_object* v_state_3556_; lean_object* v_knownSize_3557_; lean_object* v_messageHead_3558_; uint8_t v_sentMessage_3559_; uint8_t v_userClosedBody_3560_; uint8_t v_omitBody_3561_; lean_object* v_userDataBytes_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3574_; 
v_userData_3554_ = lean_ctor_get(v_writer_3541_, 0);
v_outputData_3555_ = lean_ctor_get(v_writer_3541_, 1);
v_state_3556_ = lean_ctor_get(v_writer_3541_, 2);
v_knownSize_3557_ = lean_ctor_get(v_writer_3541_, 3);
v_messageHead_3558_ = lean_ctor_get(v_writer_3541_, 4);
v_sentMessage_3559_ = lean_ctor_get_uint8(v_writer_3541_, sizeof(void*)*6);
v_userClosedBody_3560_ = lean_ctor_get_uint8(v_writer_3541_, sizeof(void*)*6 + 1);
v_omitBody_3561_ = lean_ctor_get_uint8(v_writer_3541_, sizeof(void*)*6 + 2);
v_userDataBytes_3562_ = lean_ctor_get(v_writer_3541_, 5);
v_isSharedCheck_3574_ = !lean_is_exclusive(v_writer_3541_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3564_ = v_writer_3541_;
v_isShared_3565_ = v_isSharedCheck_3574_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_userDataBytes_3562_);
lean_inc(v_messageHead_3558_);
lean_inc(v_knownSize_3557_);
lean_inc(v_state_3556_);
lean_inc(v_outputData_3555_);
lean_inc(v_userData_3554_);
lean_dec(v_writer_3541_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3574_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3569_; 
v___x_3566_ = l_Array_append___redArg(v_userData_3554_, v___x_3536_);
lean_dec_ref(v___x_3536_);
v___x_3567_ = lean_nat_add(v_userDataBytes_3562_, v___y_3553_);
lean_dec(v___y_3553_);
lean_dec(v_userDataBytes_3562_);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 5, v___x_3567_);
lean_ctor_set(v___x_3564_, 0, v___x_3566_);
v___x_3569_ = v___x_3564_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3566_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v_outputData_3555_);
lean_ctor_set(v_reuseFailAlloc_3573_, 2, v_state_3556_);
lean_ctor_set(v_reuseFailAlloc_3573_, 3, v_knownSize_3557_);
lean_ctor_set(v_reuseFailAlloc_3573_, 4, v_messageHead_3558_);
lean_ctor_set(v_reuseFailAlloc_3573_, 5, v___x_3567_);
lean_ctor_set_uint8(v_reuseFailAlloc_3573_, sizeof(void*)*6, v_sentMessage_3559_);
lean_ctor_set_uint8(v_reuseFailAlloc_3573_, sizeof(void*)*6 + 1, v_userClosedBody_3560_);
lean_ctor_set_uint8(v_reuseFailAlloc_3573_, sizeof(void*)*6 + 2, v_omitBody_3561_);
v___x_3569_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
lean_object* v___x_3571_; 
if (v_isShared_3551_ == 0)
{
lean_ctor_set(v___x_3550_, 1, v___x_3569_);
v___x_3571_ = v___x_3550_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_reader_3540_);
lean_ctor_set(v_reuseFailAlloc_3572_, 1, v___x_3569_);
lean_ctor_set(v_reuseFailAlloc_3572_, 2, v_config_3542_);
lean_ctor_set(v_reuseFailAlloc_3572_, 3, v_events_3543_);
lean_ctor_set(v_reuseFailAlloc_3572_, 4, v_error_3544_);
lean_ctor_set(v_reuseFailAlloc_3572_, 5, v_instant_3545_);
lean_ctor_set_uint8(v_reuseFailAlloc_3572_, sizeof(void*)*6, v_keepAlive_3546_);
lean_ctor_set_uint8(v_reuseFailAlloc_3572_, sizeof(void*)*6 + 1, v_forcedFlush_3547_);
lean_ctor_set_uint8(v_reuseFailAlloc_3572_, sizeof(void*)*6 + 2, v_pullBodyStalled_3548_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
v___y_3521_ = v___x_3571_;
goto v___jp_3520_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3536_);
v___y_3521_ = v_machine_3506_;
goto v___jp_3520_;
}
v___jp_3520_:
{
lean_object* v___x_3523_; 
if (v_isShared_3519_ == 0)
{
lean_ctor_set(v___x_3518_, 0, v___y_3521_);
v___x_3523_ = v___x_3518_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___y_3521_);
lean_ctor_set(v_reuseFailAlloc_3533_, 1, v_requestStream_3507_);
lean_ctor_set(v_reuseFailAlloc_3533_, 2, v_keepAliveTimeout_3508_);
lean_ctor_set(v_reuseFailAlloc_3533_, 3, v_currentTimeout_3509_);
lean_ctor_set(v_reuseFailAlloc_3533_, 4, v_headerTimeout_3510_);
lean_ctor_set(v_reuseFailAlloc_3533_, 5, v_response_3511_);
lean_ctor_set(v_reuseFailAlloc_3533_, 6, v_respStream_3512_);
lean_ctor_set(v_reuseFailAlloc_3533_, 7, v_expectData_3514_);
lean_ctor_set(v_reuseFailAlloc_3533_, 8, v_pendingHead_3516_);
lean_ctor_set_uint8(v_reuseFailAlloc_3533_, sizeof(void*)*9, v_requiresData_3513_);
lean_ctor_set_uint8(v_reuseFailAlloc_3533_, sizeof(void*)*9 + 1, v_handlerDispatched_3515_);
v___x_3523_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
uint8_t v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3528_; 
v___x_3524_ = 0;
v___x_3525_ = lean_box(v___x_3524_);
v___x_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3523_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3526_);
v___x_3528_ = v___x_3504_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3526_);
v___x_3528_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
lean_object* v___x_3530_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set_tag(v___x_3475_, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3528_);
v___x_3530_ = v___x_3475_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
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
uint8_t v_x_3585_; 
lean_dec_ref(v_config_3361_);
lean_dec_ref(v_inst_3359_);
v_x_3585_ = lean_ctor_get_uint8(v_event_3362_, 0);
lean_dec_ref_known(v_event_3362_, 0);
if (v_x_3585_ == 0)
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
lean_dec(v_handler_3360_);
lean_dec_ref(v_inst_3358_);
v___x_3586_ = lean_box(v_x_3585_);
v___x_3587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3587_, 0, v_state_3363_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3587_);
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
else
{
lean_object* v_machine_3590_; lean_object* v_requestStream_3591_; lean_object* v_keepAliveTimeout_3592_; lean_object* v_currentTimeout_3593_; lean_object* v_headerTimeout_3594_; lean_object* v_response_3595_; lean_object* v_respStream_3596_; uint8_t v_requiresData_3597_; lean_object* v_expectData_3598_; uint8_t v_handlerDispatched_3599_; lean_object* v_pendingHead_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3650_; 
v_machine_3590_ = lean_ctor_get(v_state_3363_, 0);
v_requestStream_3591_ = lean_ctor_get(v_state_3363_, 1);
v_keepAliveTimeout_3592_ = lean_ctor_get(v_state_3363_, 2);
v_currentTimeout_3593_ = lean_ctor_get(v_state_3363_, 3);
v_headerTimeout_3594_ = lean_ctor_get(v_state_3363_, 4);
v_response_3595_ = lean_ctor_get(v_state_3363_, 5);
v_respStream_3596_ = lean_ctor_get(v_state_3363_, 6);
v_requiresData_3597_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3598_ = lean_ctor_get(v_state_3363_, 7);
v_handlerDispatched_3599_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9 + 1);
v_pendingHead_3600_ = lean_ctor_get(v_state_3363_, 8);
v_isSharedCheck_3650_ = !lean_is_exclusive(v_state_3363_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3602_ = v_state_3363_;
v_isShared_3603_ = v_isSharedCheck_3650_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_pendingHead_3600_);
lean_inc(v_expectData_3598_);
lean_inc(v_respStream_3596_);
lean_inc(v_response_3595_);
lean_inc(v_headerTimeout_3594_);
lean_inc(v_currentTimeout_3593_);
lean_inc(v_keepAliveTimeout_3592_);
lean_inc(v_requestStream_3591_);
lean_inc(v_machine_3590_);
lean_dec(v_state_3363_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3650_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
uint8_t v___x_3604_; lean_object* v___x_3605_; lean_object* v_fst_3606_; lean_object* v_snd_3607_; lean_object* v_reader_3608_; lean_object* v_writer_3609_; lean_object* v_config_3610_; lean_object* v_events_3611_; lean_object* v_error_3612_; lean_object* v_instant_3613_; uint8_t v_keepAlive_3614_; uint8_t v_forcedFlush_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3649_; 
v___x_3604_ = 0;
v___x_3605_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(v___x_3604_, v_machine_3590_);
v_fst_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_fst_3606_);
v_snd_3607_ = lean_ctor_get(v___x_3605_, 1);
lean_inc(v_snd_3607_);
lean_dec_ref(v___x_3605_);
v_reader_3608_ = lean_ctor_get(v_fst_3606_, 0);
v_writer_3609_ = lean_ctor_get(v_fst_3606_, 1);
v_config_3610_ = lean_ctor_get(v_fst_3606_, 2);
v_events_3611_ = lean_ctor_get(v_fst_3606_, 3);
v_error_3612_ = lean_ctor_get(v_fst_3606_, 4);
v_instant_3613_ = lean_ctor_get(v_fst_3606_, 5);
v_keepAlive_3614_ = lean_ctor_get_uint8(v_fst_3606_, sizeof(void*)*6);
v_forcedFlush_3615_ = lean_ctor_get_uint8(v_fst_3606_, sizeof(void*)*6 + 1);
v_isSharedCheck_3649_ = !lean_is_exclusive(v_fst_3606_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3617_ = v_fst_3606_;
v_isShared_3618_ = v_isSharedCheck_3649_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_instant_3613_);
lean_inc(v_error_3612_);
lean_inc(v_events_3611_);
lean_inc(v_config_3610_);
lean_inc(v_writer_3609_);
lean_inc(v_reader_3608_);
lean_dec(v_fst_3606_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3649_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___f_3619_; lean_object* v___f_3620_; uint8_t v___y_3622_; 
v___f_3619_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_3620_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3620_, 0, v_inst_3358_);
lean_closure_set(v___f_3620_, 1, v_handler_3360_);
if (lean_obj_tag(v_snd_3607_) == 0)
{
uint8_t v_sentMessage_3645_; 
v_sentMessage_3645_ = lean_ctor_get_uint8(v_writer_3609_, sizeof(void*)*6);
if (v_sentMessage_3645_ == 0)
{
lean_object* v_state_3646_; 
v_state_3646_ = lean_ctor_get(v_reader_3608_, 0);
if (lean_obj_tag(v_state_3646_) == 2)
{
v___y_3622_ = v_x_3585_;
goto v___jp_3621_;
}
else
{
v___y_3622_ = v_sentMessage_3645_;
goto v___jp_3621_;
}
}
else
{
uint8_t v___x_3647_; 
v___x_3647_ = 0;
v___y_3622_ = v___x_3647_;
goto v___jp_3621_;
}
}
else
{
uint8_t v___x_3648_; 
v___x_3648_ = 0;
v___y_3622_ = v___x_3648_;
goto v___jp_3621_;
}
v___jp_3621_:
{
lean_object* v___x_3624_; 
if (v_isShared_3618_ == 0)
{
v___x_3624_ = v___x_3617_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_reader_3608_);
lean_ctor_set(v_reuseFailAlloc_3644_, 1, v_writer_3609_);
lean_ctor_set(v_reuseFailAlloc_3644_, 2, v_config_3610_);
lean_ctor_set(v_reuseFailAlloc_3644_, 3, v_events_3611_);
lean_ctor_set(v_reuseFailAlloc_3644_, 4, v_error_3612_);
lean_ctor_set(v_reuseFailAlloc_3644_, 5, v_instant_3613_);
lean_ctor_set_uint8(v_reuseFailAlloc_3644_, sizeof(void*)*6, v_keepAlive_3614_);
lean_ctor_set_uint8(v_reuseFailAlloc_3644_, sizeof(void*)*6 + 1, v_forcedFlush_3615_);
v___x_3624_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
lean_object* v_st_3626_; 
lean_ctor_set_uint8(v___x_3624_, sizeof(void*)*6 + 2, v___y_3622_);
lean_inc_ref(v_requestStream_3591_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 0, v___x_3624_);
v_st_3626_ = v___x_3602_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v___x_3624_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v_requestStream_3591_);
lean_ctor_set(v_reuseFailAlloc_3643_, 2, v_keepAliveTimeout_3592_);
lean_ctor_set(v_reuseFailAlloc_3643_, 3, v_currentTimeout_3593_);
lean_ctor_set(v_reuseFailAlloc_3643_, 4, v_headerTimeout_3594_);
lean_ctor_set(v_reuseFailAlloc_3643_, 5, v_response_3595_);
lean_ctor_set(v_reuseFailAlloc_3643_, 6, v_respStream_3596_);
lean_ctor_set(v_reuseFailAlloc_3643_, 7, v_expectData_3598_);
lean_ctor_set(v_reuseFailAlloc_3643_, 8, v_pendingHead_3600_);
lean_ctor_set_uint8(v_reuseFailAlloc_3643_, sizeof(void*)*9, v_requiresData_3597_);
lean_ctor_set_uint8(v_reuseFailAlloc_3643_, sizeof(void*)*9 + 1, v_handlerDispatched_3599_);
v_st_3626_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
lean_object* v___f_3627_; 
lean_inc_ref(v_st_3626_);
v___f_3627_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3627_, 0, v_st_3626_);
if (lean_obj_tag(v_snd_3607_) == 1)
{
lean_object* v_val_3628_; uint8_t v_final_3629_; uint8_t v_incomplete_3630_; lean_object* v_chunk_3631_; lean_object* v___f_3632_; lean_object* v___f_3633_; lean_object* v___x_3634_; lean_object* v___f_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
lean_dec_ref(v_st_3626_);
v_val_3628_ = lean_ctor_get(v_snd_3607_, 0);
lean_inc(v_val_3628_);
lean_dec_ref_known(v_snd_3607_, 1);
v_final_3629_ = lean_ctor_get_uint8(v_val_3628_, sizeof(void*)*1);
v_incomplete_3630_ = lean_ctor_get_uint8(v_val_3628_, sizeof(void*)*1 + 1);
v_chunk_3631_ = lean_ctor_get(v_val_3628_, 0);
lean_inc_ref(v_chunk_3631_);
lean_dec(v_val_3628_);
lean_inc_ref_n(v___f_3627_, 2);
v___f_3632_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3632_, 0, v___f_3627_);
lean_inc_ref_n(v_requestStream_3591_, 2);
v___f_3633_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3633_, 0, v_requestStream_3591_);
lean_closure_set(v___f_3633_, 1, v___f_3632_);
lean_closure_set(v___f_3633_, 2, v___f_3627_);
v___x_3634_ = lean_box(v_final_3629_);
v___f_3635_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed), 7, 5);
lean_closure_set(v___f_3635_, 0, v___x_3634_);
lean_closure_set(v___f_3635_, 1, v___f_3627_);
lean_closure_set(v___f_3635_, 2, v___f_3619_);
lean_closure_set(v___f_3635_, 3, v_requestStream_3591_);
lean_closure_set(v___f_3635_, 4, v___f_3633_);
v___x_3636_ = lean_unsigned_to_nat(0u);
v___x_3637_ = 0;
v___x_3638_ = l_Std_Http_Body_Stream_send(v_requestStream_3591_, v_chunk_3631_, v_incomplete_3630_);
v___x_3639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3636_, v___x_3637_, v___x_3638_, v___f_3620_);
v___x_3640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3636_, v___x_3637_, v___x_3639_, v___f_3635_);
return v___x_3640_;
}
else
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
lean_dec_ref(v___f_3627_);
lean_dec_ref(v___f_3620_);
lean_dec(v_snd_3607_);
lean_dec_ref(v_requestStream_3591_);
v___x_3641_ = lean_box(0);
v___x_3642_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_3626_, v___x_3641_);
return v___x_3642_;
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
lean_object* v_x_3651_; 
v_x_3651_ = lean_ctor_get(v_event_3362_, 0);
lean_inc_ref(v_x_3651_);
lean_dec_ref_known(v_event_3362_, 1);
if (lean_obj_tag(v_x_3651_) == 0)
{
lean_object* v_a_3652_; lean_object* v_onFailure_3653_; lean_object* v___f_3654_; lean_object* v___x_3655_; uint8_t v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
lean_dec_ref(v_config_3361_);
lean_dec_ref(v_inst_3359_);
v_a_3652_ = lean_ctor_get(v_x_3651_, 0);
lean_inc(v_a_3652_);
lean_dec_ref_known(v_x_3651_, 1);
v_onFailure_3653_ = lean_ctor_get(v_inst_3358_, 2);
lean_inc_ref(v_onFailure_3653_);
lean_dec_ref(v_inst_3358_);
v___f_3654_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_3654_, 0, v_state_3363_);
v___x_3655_ = lean_unsigned_to_nat(0u);
v___x_3656_ = 0;
v___x_3657_ = lean_apply_3(v_onFailure_3653_, v_handler_3360_, v_a_3652_, lean_box(0));
v___x_3658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3655_, v___x_3656_, v___x_3657_, v___f_3654_);
return v___x_3658_;
}
else
{
lean_object* v_machine_3659_; lean_object* v_reader_3660_; lean_object* v_state_3661_; 
v_machine_3659_ = lean_ctor_get(v_state_3363_, 0);
lean_inc_ref(v_machine_3659_);
v_reader_3660_ = lean_ctor_get(v_machine_3659_, 0);
v_state_3661_ = lean_ctor_get(v_reader_3660_, 0);
if (lean_obj_tag(v_state_3661_) == 7)
{
lean_object* v_a_3662_; lean_object* v_requestStream_3663_; lean_object* v_keepAliveTimeout_3664_; lean_object* v_currentTimeout_3665_; lean_object* v_headerTimeout_3666_; lean_object* v_response_3667_; lean_object* v_respStream_3668_; uint8_t v_requiresData_3669_; lean_object* v_expectData_3670_; lean_object* v_pendingHead_3671_; lean_object* v_close_3672_; lean_object* v_isClosed_3673_; lean_object* v_body_3674_; lean_object* v___x_3675_; lean_object* v___f_3676_; lean_object* v___f_3677_; lean_object* v___f_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
lean_dec_ref(v_config_3361_);
lean_dec(v_handler_3360_);
lean_dec_ref(v_inst_3358_);
v_a_3662_ = lean_ctor_get(v_x_3651_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v_x_3651_, 1);
v_requestStream_3663_ = lean_ctor_get(v_state_3363_, 1);
lean_inc_ref(v_requestStream_3663_);
v_keepAliveTimeout_3664_ = lean_ctor_get(v_state_3363_, 2);
lean_inc(v_keepAliveTimeout_3664_);
v_currentTimeout_3665_ = lean_ctor_get(v_state_3363_, 3);
lean_inc(v_currentTimeout_3665_);
v_headerTimeout_3666_ = lean_ctor_get(v_state_3363_, 4);
lean_inc(v_headerTimeout_3666_);
v_response_3667_ = lean_ctor_get(v_state_3363_, 5);
lean_inc_ref(v_response_3667_);
v_respStream_3668_ = lean_ctor_get(v_state_3363_, 6);
lean_inc(v_respStream_3668_);
v_requiresData_3669_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3670_ = lean_ctor_get(v_state_3363_, 7);
lean_inc(v_expectData_3670_);
v_pendingHead_3671_ = lean_ctor_get(v_state_3363_, 8);
lean_inc(v_pendingHead_3671_);
lean_dec_ref(v_state_3363_);
v_close_3672_ = lean_ctor_get(v_inst_3359_, 1);
lean_inc_ref(v_close_3672_);
v_isClosed_3673_ = lean_ctor_get(v_inst_3359_, 2);
lean_inc_ref(v_isClosed_3673_);
lean_dec_ref(v_inst_3359_);
v_body_3674_ = lean_ctor_get(v_a_3662_, 1);
lean_inc_n(v_body_3674_, 2);
lean_dec(v_a_3662_);
v___x_3675_ = lean_box(v_requiresData_3669_);
v___f_3676_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_3676_, 0, v_machine_3659_);
lean_closure_set(v___f_3676_, 1, v_requestStream_3663_);
lean_closure_set(v___f_3676_, 2, v_keepAliveTimeout_3664_);
lean_closure_set(v___f_3676_, 3, v_currentTimeout_3665_);
lean_closure_set(v___f_3676_, 4, v_headerTimeout_3666_);
lean_closure_set(v___f_3676_, 5, v_response_3667_);
lean_closure_set(v___f_3676_, 6, v_respStream_3668_);
lean_closure_set(v___f_3676_, 7, v___x_3675_);
lean_closure_set(v___f_3676_, 8, v_expectData_3670_);
lean_closure_set(v___f_3676_, 9, v_pendingHead_3671_);
lean_inc_ref(v___f_3676_);
v___f_3677_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3677_, 0, v___f_3676_);
v___f_3678_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_3678_, 0, v_close_3672_);
lean_closure_set(v___f_3678_, 1, v_body_3674_);
lean_closure_set(v___f_3678_, 2, v___f_3677_);
lean_closure_set(v___f_3678_, 3, v___f_3676_);
v___x_3679_ = lean_unsigned_to_nat(0u);
v___x_3680_ = 0;
v___x_3681_ = lean_apply_2(v_isClosed_3673_, v_body_3674_, lean_box(0));
v___x_3682_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3679_, v___x_3680_, v___x_3681_, v___f_3678_);
return v___x_3682_;
}
else
{
lean_object* v_a_3683_; lean_object* v_requestStream_3684_; lean_object* v_keepAliveTimeout_3685_; lean_object* v_currentTimeout_3686_; lean_object* v_headerTimeout_3687_; lean_object* v_response_3688_; uint8_t v_requiresData_3689_; lean_object* v_expectData_3690_; lean_object* v_pendingHead_3691_; uint8_t v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___f_3695_; lean_object* v___f_3696_; lean_object* v___f_3697_; uint8_t v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___f_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v_a_3683_ = lean_ctor_get(v_x_3651_, 0);
lean_inc(v_a_3683_);
lean_dec_ref_known(v_x_3651_, 1);
v_requestStream_3684_ = lean_ctor_get(v_state_3363_, 1);
lean_inc_ref(v_requestStream_3684_);
v_keepAliveTimeout_3685_ = lean_ctor_get(v_state_3363_, 2);
lean_inc(v_keepAliveTimeout_3685_);
v_currentTimeout_3686_ = lean_ctor_get(v_state_3363_, 3);
lean_inc(v_currentTimeout_3686_);
v_headerTimeout_3687_ = lean_ctor_get(v_state_3363_, 4);
lean_inc(v_headerTimeout_3687_);
v_response_3688_ = lean_ctor_get(v_state_3363_, 5);
lean_inc_ref(v_response_3688_);
v_requiresData_3689_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3690_ = lean_ctor_get(v_state_3363_, 7);
lean_inc(v_expectData_3690_);
v_pendingHead_3691_ = lean_ctor_get(v_state_3363_, 8);
lean_inc(v_pendingHead_3691_);
lean_dec_ref(v_state_3363_);
v___x_3692_ = 0;
v___x_3693_ = lean_box(v_requiresData_3689_);
v___x_3694_ = lean_box(v___x_3692_);
v___f_3695_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed), 11, 9);
lean_closure_set(v___f_3695_, 0, v_requestStream_3684_);
lean_closure_set(v___f_3695_, 1, v_keepAliveTimeout_3685_);
lean_closure_set(v___f_3695_, 2, v_currentTimeout_3686_);
lean_closure_set(v___f_3695_, 3, v_headerTimeout_3687_);
lean_closure_set(v___f_3695_, 4, v_response_3688_);
lean_closure_set(v___f_3695_, 5, v___x_3693_);
lean_closure_set(v___f_3695_, 6, v_expectData_3690_);
lean_closure_set(v___f_3695_, 7, v___x_3694_);
lean_closure_set(v___f_3695_, 8, v_pendingHead_3691_);
v___f_3696_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed), 3, 1);
lean_closure_set(v___f_3696_, 0, v___f_3695_);
v___f_3697_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0));
v___x_3698_ = 1;
v___x_3699_ = lean_box(v___x_3692_);
v___x_3700_ = lean_box(v___x_3698_);
lean_inc_ref(v_inst_3359_);
lean_inc_ref(v___f_3696_);
v___f_3701_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed), 10, 8);
lean_closure_set(v___f_3701_, 0, v___x_3699_);
lean_closure_set(v___f_3701_, 1, v___f_3696_);
lean_closure_set(v___f_3701_, 2, v___x_3700_);
lean_closure_set(v___f_3701_, 3, v_inst_3358_);
lean_closure_set(v___f_3701_, 4, v_handler_3360_);
lean_closure_set(v___f_3701_, 5, v_inst_3359_);
lean_closure_set(v___f_3701_, 6, v___f_3697_);
lean_closure_set(v___f_3701_, 7, v___f_3696_);
v___x_3702_ = lean_unsigned_to_nat(0u);
v___x_3703_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_3359_, v_config_3361_, v_machine_3659_, v_a_3683_);
v___x_3704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3702_, v___x_3692_, v___x_3703_, v___f_3701_);
return v___x_3704_;
}
}
}
case 4:
{
lean_object* v_onFailure_3705_; lean_object* v___f_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; uint8_t v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; 
lean_dec_ref(v_config_3361_);
lean_dec_ref(v_inst_3359_);
v_onFailure_3705_ = lean_ctor_get(v_inst_3358_, 2);
lean_inc_ref(v_onFailure_3705_);
lean_dec_ref(v_inst_3358_);
v___f_3706_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed), 3, 1);
lean_closure_set(v___f_3706_, 0, v_state_3363_);
v___x_3707_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2);
v___x_3708_ = lean_unsigned_to_nat(0u);
v___x_3709_ = 0;
v___x_3710_ = lean_apply_3(v_onFailure_3705_, v_handler_3360_, v___x_3707_, lean_box(0));
v___x_3711_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3708_, v___x_3709_, v___x_3710_, v___f_3706_);
return v___x_3711_;
}
case 5:
{
lean_object* v_machine_3712_; lean_object* v_requestStream_3713_; lean_object* v_keepAliveTimeout_3714_; lean_object* v_currentTimeout_3715_; lean_object* v_headerTimeout_3716_; lean_object* v_response_3717_; lean_object* v_respStream_3718_; uint8_t v_requiresData_3719_; lean_object* v_expectData_3720_; lean_object* v_pendingHead_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3735_; 
lean_dec_ref(v_config_3361_);
lean_dec(v_handler_3360_);
lean_dec_ref(v_inst_3359_);
lean_dec_ref(v_inst_3358_);
v_machine_3712_ = lean_ctor_get(v_state_3363_, 0);
v_requestStream_3713_ = lean_ctor_get(v_state_3363_, 1);
v_keepAliveTimeout_3714_ = lean_ctor_get(v_state_3363_, 2);
v_currentTimeout_3715_ = lean_ctor_get(v_state_3363_, 3);
v_headerTimeout_3716_ = lean_ctor_get(v_state_3363_, 4);
v_response_3717_ = lean_ctor_get(v_state_3363_, 5);
v_respStream_3718_ = lean_ctor_get(v_state_3363_, 6);
v_requiresData_3719_ = lean_ctor_get_uint8(v_state_3363_, sizeof(void*)*9);
v_expectData_3720_ = lean_ctor_get(v_state_3363_, 7);
v_pendingHead_3721_ = lean_ctor_get(v_state_3363_, 8);
v_isSharedCheck_3735_ = !lean_is_exclusive(v_state_3363_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3723_ = v_state_3363_;
v_isShared_3724_ = v_isSharedCheck_3735_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_pendingHead_3721_);
lean_inc(v_expectData_3720_);
lean_inc(v_respStream_3718_);
lean_inc(v_response_3717_);
lean_inc(v_headerTimeout_3716_);
lean_inc(v_currentTimeout_3715_);
lean_inc(v_keepAliveTimeout_3714_);
lean_inc(v_requestStream_3713_);
lean_inc(v_machine_3712_);
lean_dec(v_state_3363_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3735_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; uint8_t v___x_3727_; lean_object* v___x_3729_; 
v___x_3725_ = lean_box(55);
v___x_3726_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3712_, v___x_3725_);
v___x_3727_ = 0;
if (v_isShared_3724_ == 0)
{
lean_ctor_set(v___x_3723_, 0, v___x_3726_);
v___x_3729_ = v___x_3723_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v___x_3726_);
lean_ctor_set(v_reuseFailAlloc_3734_, 1, v_requestStream_3713_);
lean_ctor_set(v_reuseFailAlloc_3734_, 2, v_keepAliveTimeout_3714_);
lean_ctor_set(v_reuseFailAlloc_3734_, 3, v_currentTimeout_3715_);
lean_ctor_set(v_reuseFailAlloc_3734_, 4, v_headerTimeout_3716_);
lean_ctor_set(v_reuseFailAlloc_3734_, 5, v_response_3717_);
lean_ctor_set(v_reuseFailAlloc_3734_, 6, v_respStream_3718_);
lean_ctor_set(v_reuseFailAlloc_3734_, 7, v_expectData_3720_);
lean_ctor_set(v_reuseFailAlloc_3734_, 8, v_pendingHead_3721_);
lean_ctor_set_uint8(v_reuseFailAlloc_3734_, sizeof(void*)*9, v_requiresData_3719_);
v___x_3729_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
lean_ctor_set_uint8(v___x_3729_, sizeof(void*)*9 + 1, v___x_3727_);
v___x_3730_ = lean_box(v___x_3727_);
v___x_3731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
return v___x_3733_;
}
}
}
default: 
{
uint8_t v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
lean_dec_ref(v_config_3361_);
lean_dec(v_handler_3360_);
lean_dec_ref(v_inst_3359_);
lean_dec_ref(v_inst_3358_);
v___x_3736_ = 1;
v___x_3737_ = lean_box(v___x_3736_);
v___x_3738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3738_, 0, v_state_3363_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
v___x_3739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3738_);
v___x_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3739_);
return v___x_3740_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object* v_inst_3741_, lean_object* v_inst_3742_, lean_object* v_handler_3743_, lean_object* v_config_3744_, lean_object* v_event_3745_, lean_object* v_state_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3741_, v_inst_3742_, v_handler_3743_, v_config_3744_, v_event_3745_, v_state_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object* v_00_u03c3_3749_, lean_object* v_00_u03b2_3750_, lean_object* v_inst_3751_, lean_object* v_inst_3752_, lean_object* v_handler_3753_, lean_object* v_config_3754_, lean_object* v_event_3755_, lean_object* v_state_3756_){
_start:
{
lean_object* v___x_3758_; 
v___x_3758_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3751_, v_inst_3752_, v_handler_3753_, v_config_3754_, v_event_3755_, v_state_3756_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object* v_00_u03c3_3759_, lean_object* v_00_u03b2_3760_, lean_object* v_inst_3761_, lean_object* v_inst_3762_, lean_object* v_handler_3763_, lean_object* v_config_3764_, lean_object* v_event_3765_, lean_object* v_state_3766_, lean_object* v___y_3767_){
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(v_00_u03c3_3759_, v_00_u03b2_3760_, v_inst_3761_, v_inst_3762_, v_handler_3763_, v_config_3764_, v_event_3765_, v_state_3766_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object* v_expectData_3769_, lean_object* v_respStream_3770_, lean_object* v_currentTimeout_3771_, lean_object* v_keepAliveTimeout_3772_, lean_object* v_headerTimeout_3773_, lean_object* v_connectionContext_3774_, uint8_t v_handlerDispatched_3775_, lean_object* v_response_3776_, lean_object* v_socket_3777_, uint8_t v_requiresData_3778_, uint8_t v_sentMessage_3779_, lean_object* v_reader_3780_, uint8_t v_requestBodyInterested_3781_, lean_object* v_requestBody_3782_){
_start:
{
lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3791_; uint8_t v___y_3797_; uint8_t v___y_3800_; uint8_t v___y_3801_; uint8_t v___y_3803_; uint8_t v___y_3804_; uint8_t v___y_3805_; uint8_t v___y_3807_; uint8_t v___y_3808_; uint8_t v___y_3811_; 
if (v_handlerDispatched_3775_ == 0)
{
uint8_t v___x_3814_; 
v___x_3814_ = 1;
v___y_3811_ = v___x_3814_;
goto v___jp_3810_;
}
else
{
uint8_t v___x_3815_; 
v___x_3815_ = 0;
v___y_3811_ = v___x_3815_;
goto v___jp_3810_;
}
v___jp_3784_:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3787_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3787_, 0, v___y_3785_);
lean_ctor_set(v___x_3787_, 1, v_expectData_3769_);
lean_ctor_set(v___x_3787_, 2, v___y_3786_);
lean_ctor_set(v___x_3787_, 3, v_respStream_3770_);
lean_ctor_set(v___x_3787_, 4, v_requestBody_3782_);
lean_ctor_set(v___x_3787_, 5, v_currentTimeout_3771_);
lean_ctor_set(v___x_3787_, 6, v_keepAliveTimeout_3772_);
lean_ctor_set(v___x_3787_, 7, v_headerTimeout_3773_);
lean_ctor_set(v___x_3787_, 8, v_connectionContext_3774_);
v___x_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
v___x_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3788_);
return v___x_3789_;
}
v___jp_3790_:
{
if (v_handlerDispatched_3775_ == 0)
{
lean_object* v___x_3792_; 
lean_dec_ref(v_response_3776_);
v___x_3792_ = lean_box(0);
v___y_3785_ = v___y_3791_;
v___y_3786_ = v___x_3792_;
goto v___jp_3784_;
}
else
{
lean_object* v___x_3793_; 
v___x_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3793_, 0, v_response_3776_);
v___y_3785_ = v___y_3791_;
v___y_3786_ = v___x_3793_;
goto v___jp_3784_;
}
}
v___jp_3794_:
{
lean_object* v___x_3795_; 
v___x_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3795_, 0, v_socket_3777_);
v___y_3791_ = v___x_3795_;
goto v___jp_3790_;
}
v___jp_3796_:
{
if (v_requiresData_3778_ == 0)
{
if (v___y_3797_ == 0)
{
lean_object* v___x_3798_; 
lean_dec(v_socket_3777_);
v___x_3798_ = lean_box(0);
v___y_3791_ = v___x_3798_;
goto v___jp_3790_;
}
else
{
goto v___jp_3794_;
}
}
else
{
goto v___jp_3794_;
}
}
v___jp_3799_:
{
if (v___y_3800_ == 0)
{
v___y_3797_ = v___y_3801_;
goto v___jp_3796_;
}
else
{
v___y_3797_ = v___y_3800_;
goto v___jp_3796_;
}
}
v___jp_3802_:
{
if (v___y_3804_ == 0)
{
v___y_3800_ = v___y_3803_;
v___y_3801_ = v___y_3805_;
goto v___jp_3799_;
}
else
{
v___y_3800_ = v___y_3803_;
v___y_3801_ = v___y_3804_;
goto v___jp_3799_;
}
}
v___jp_3806_:
{
if (v_sentMessage_3779_ == 0)
{
lean_object* v_state_3809_; 
v_state_3809_ = lean_ctor_get(v_reader_3780_, 0);
if (lean_obj_tag(v_state_3809_) == 2)
{
v___y_3803_ = v___y_3807_;
v___y_3804_ = v___y_3808_;
v___y_3805_ = v_requestBodyInterested_3781_;
goto v___jp_3802_;
}
else
{
v___y_3803_ = v___y_3807_;
v___y_3804_ = v___y_3808_;
v___y_3805_ = v_sentMessage_3779_;
goto v___jp_3802_;
}
}
else
{
v___y_3803_ = v___y_3807_;
v___y_3804_ = v___y_3808_;
v___y_3805_ = v_sentMessage_3779_;
goto v___jp_3802_;
}
}
v___jp_3810_:
{
if (lean_obj_tag(v_respStream_3770_) == 0)
{
uint8_t v___x_3812_; 
v___x_3812_ = 0;
v___y_3807_ = v___y_3811_;
v___y_3808_ = v___x_3812_;
goto v___jp_3806_;
}
else
{
uint8_t v___x_3813_; 
v___x_3813_ = 1;
v___y_3807_ = v___y_3811_;
v___y_3808_ = v___x_3813_;
goto v___jp_3806_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object* v_expectData_3816_, lean_object* v_respStream_3817_, lean_object* v_currentTimeout_3818_, lean_object* v_keepAliveTimeout_3819_, lean_object* v_headerTimeout_3820_, lean_object* v_connectionContext_3821_, lean_object* v_handlerDispatched_3822_, lean_object* v_response_3823_, lean_object* v_socket_3824_, lean_object* v_requiresData_3825_, lean_object* v_sentMessage_3826_, lean_object* v_reader_3827_, lean_object* v_requestBodyInterested_3828_, lean_object* v_requestBody_3829_, lean_object* v___y_3830_){
_start:
{
uint8_t v_handlerDispatched_boxed_3831_; uint8_t v_requiresData_boxed_3832_; uint8_t v_sentMessage_boxed_3833_; uint8_t v_requestBodyInterested_boxed_3834_; lean_object* v_res_3835_; 
v_handlerDispatched_boxed_3831_ = lean_unbox(v_handlerDispatched_3822_);
v_requiresData_boxed_3832_ = lean_unbox(v_requiresData_3825_);
v_sentMessage_boxed_3833_ = lean_unbox(v_sentMessage_3826_);
v_requestBodyInterested_boxed_3834_ = lean_unbox(v_requestBodyInterested_3828_);
v_res_3835_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(v_expectData_3816_, v_respStream_3817_, v_currentTimeout_3818_, v_keepAliveTimeout_3819_, v_headerTimeout_3820_, v_connectionContext_3821_, v_handlerDispatched_boxed_3831_, v_response_3823_, v_socket_3824_, v_requiresData_boxed_3832_, v_sentMessage_boxed_3833_, v_reader_3827_, v_requestBodyInterested_boxed_3834_, v_requestBody_3829_);
lean_dec_ref(v_reader_3827_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object* v___f_3836_, lean_object* v_x_3837_){
_start:
{
if (lean_obj_tag(v_x_3837_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3847_; 
lean_dec_ref(v___f_3836_);
v_a_3839_ = lean_ctor_get(v_x_3837_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v_x_3837_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3841_ = v_x_3837_;
v_isShared_3842_ = v_isSharedCheck_3847_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v_x_3837_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3847_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
lean_object* v___x_3845_; 
v___x_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
return v___x_3845_;
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3849_; 
v_a_3848_ = lean_ctor_get(v_x_3837_, 0);
lean_inc(v_a_3848_);
lean_dec_ref_known(v_x_3837_, 1);
v___x_3849_ = lean_apply_2(v___f_3836_, v_a_3848_, lean_box(0));
return v___x_3849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object* v___f_3850_, lean_object* v_x_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v_res_3853_; 
v_res_3853_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(v___f_3850_, v_x_3851_);
return v_res_3853_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object* v_expectData_3858_, lean_object* v_respStream_3859_, lean_object* v_currentTimeout_3860_, lean_object* v_keepAliveTimeout_3861_, lean_object* v_headerTimeout_3862_, lean_object* v_connectionContext_3863_, uint8_t v_handlerDispatched_3864_, lean_object* v_response_3865_, lean_object* v_socket_3866_, uint8_t v_requiresData_3867_, uint8_t v_sentMessage_3868_, lean_object* v_reader_3869_, uint8_t v_pullBodyStalled_3870_, uint8_t v_requestBodyOpen_3871_, lean_object* v_requestStream_3872_, uint8_t v_requestBodyInterested_3873_){
_start:
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___f_3879_; lean_object* v___f_3880_; uint8_t v___y_3882_; 
v___x_3875_ = lean_box(v_handlerDispatched_3864_);
v___x_3876_ = lean_box(v_requiresData_3867_);
v___x_3877_ = lean_box(v_sentMessage_3868_);
v___x_3878_ = lean_box(v_requestBodyInterested_3873_);
lean_inc_ref(v_reader_3869_);
v___f_3879_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed), 15, 13);
lean_closure_set(v___f_3879_, 0, v_expectData_3858_);
lean_closure_set(v___f_3879_, 1, v_respStream_3859_);
lean_closure_set(v___f_3879_, 2, v_currentTimeout_3860_);
lean_closure_set(v___f_3879_, 3, v_keepAliveTimeout_3861_);
lean_closure_set(v___f_3879_, 4, v_headerTimeout_3862_);
lean_closure_set(v___f_3879_, 5, v_connectionContext_3863_);
lean_closure_set(v___f_3879_, 6, v___x_3875_);
lean_closure_set(v___f_3879_, 7, v_response_3865_);
lean_closure_set(v___f_3879_, 8, v_socket_3866_);
lean_closure_set(v___f_3879_, 9, v___x_3876_);
lean_closure_set(v___f_3879_, 10, v___x_3877_);
lean_closure_set(v___f_3879_, 11, v_reader_3869_);
lean_closure_set(v___f_3879_, 12, v___x_3878_);
v___f_3880_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3880_, 0, v___f_3879_);
if (v_sentMessage_3868_ == 0)
{
lean_object* v_state_3886_; 
v_state_3886_ = lean_ctor_get(v_reader_3869_, 0);
lean_inc(v_state_3886_);
lean_dec_ref(v_reader_3869_);
if (lean_obj_tag(v_state_3886_) == 2)
{
lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3897_; 
v_isSharedCheck_3897_ = !lean_is_exclusive(v_state_3886_);
if (v_isSharedCheck_3897_ == 0)
{
lean_object* v_unused_3898_; 
v_unused_3898_ = lean_ctor_get(v_state_3886_, 0);
lean_dec(v_unused_3898_);
v___x_3888_ = v_state_3886_;
v_isShared_3889_ = v_isSharedCheck_3897_;
goto v_resetjp_3887_;
}
else
{
lean_dec(v_state_3886_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3897_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
if (v_pullBodyStalled_3870_ == 0)
{
if (v_requestBodyOpen_3871_ == 0)
{
lean_del_object(v___x_3888_);
lean_dec_ref(v_requestStream_3872_);
v___y_3882_ = v_requestBodyOpen_3871_;
goto v___jp_3881_;
}
else
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
lean_ctor_set_tag(v___x_3888_, 1);
lean_ctor_set(v___x_3888_, 0, v_requestStream_3872_);
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_requestStream_3872_);
v___x_3891_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3892_ = lean_unsigned_to_nat(0u);
v___x_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3891_);
v___x_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3893_);
v___x_3895_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3892_, v_pullBodyStalled_3870_, v___x_3894_, v___f_3880_);
return v___x_3895_;
}
}
}
else
{
lean_del_object(v___x_3888_);
lean_dec_ref(v_requestStream_3872_);
v___y_3882_ = v_sentMessage_3868_;
goto v___jp_3881_;
}
}
}
else
{
lean_dec(v_state_3886_);
lean_dec_ref(v_requestStream_3872_);
v___y_3882_ = v_sentMessage_3868_;
goto v___jp_3881_;
}
}
else
{
uint8_t v___x_3899_; 
lean_dec_ref(v_requestStream_3872_);
lean_dec_ref(v_reader_3869_);
v___x_3899_ = 0;
v___y_3882_ = v___x_3899_;
goto v___jp_3881_;
}
v___jp_3881_:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3883_ = lean_unsigned_to_nat(0u);
v___x_3884_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1));
v___x_3885_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3883_, v___y_3882_, v___x_3884_, v___f_3880_);
return v___x_3885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_expectData_3900_ = _args[0];
lean_object* v_respStream_3901_ = _args[1];
lean_object* v_currentTimeout_3902_ = _args[2];
lean_object* v_keepAliveTimeout_3903_ = _args[3];
lean_object* v_headerTimeout_3904_ = _args[4];
lean_object* v_connectionContext_3905_ = _args[5];
lean_object* v_handlerDispatched_3906_ = _args[6];
lean_object* v_response_3907_ = _args[7];
lean_object* v_socket_3908_ = _args[8];
lean_object* v_requiresData_3909_ = _args[9];
lean_object* v_sentMessage_3910_ = _args[10];
lean_object* v_reader_3911_ = _args[11];
lean_object* v_pullBodyStalled_3912_ = _args[12];
lean_object* v_requestBodyOpen_3913_ = _args[13];
lean_object* v_requestStream_3914_ = _args[14];
lean_object* v_requestBodyInterested_3915_ = _args[15];
lean_object* v___y_3916_ = _args[16];
_start:
{
uint8_t v_handlerDispatched_boxed_3917_; uint8_t v_requiresData_boxed_3918_; uint8_t v_sentMessage_boxed_3919_; uint8_t v_pullBodyStalled_boxed_3920_; uint8_t v_requestBodyOpen_boxed_3921_; uint8_t v_requestBodyInterested_boxed_3922_; lean_object* v_res_3923_; 
v_handlerDispatched_boxed_3917_ = lean_unbox(v_handlerDispatched_3906_);
v_requiresData_boxed_3918_ = lean_unbox(v_requiresData_3909_);
v_sentMessage_boxed_3919_ = lean_unbox(v_sentMessage_3910_);
v_pullBodyStalled_boxed_3920_ = lean_unbox(v_pullBodyStalled_3912_);
v_requestBodyOpen_boxed_3921_ = lean_unbox(v_requestBodyOpen_3913_);
v_requestBodyInterested_boxed_3922_ = lean_unbox(v_requestBodyInterested_3915_);
v_res_3923_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(v_expectData_3900_, v_respStream_3901_, v_currentTimeout_3902_, v_keepAliveTimeout_3903_, v_headerTimeout_3904_, v_connectionContext_3905_, v_handlerDispatched_boxed_3917_, v_response_3907_, v_socket_3908_, v_requiresData_boxed_3918_, v_sentMessage_boxed_3919_, v_reader_3911_, v_pullBodyStalled_boxed_3920_, v_requestBodyOpen_boxed_3921_, v_requestStream_3914_, v_requestBodyInterested_boxed_3922_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object* v___f_3924_, lean_object* v_x_3925_){
_start:
{
if (lean_obj_tag(v_x_3925_) == 0)
{
lean_object* v_a_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3935_; 
lean_dec_ref(v___f_3924_);
v_a_3927_ = lean_ctor_get(v_x_3925_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v_x_3925_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3929_ = v_x_3925_;
v_isShared_3930_ = v_isSharedCheck_3935_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_a_3927_);
lean_dec(v_x_3925_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3935_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3932_; 
if (v_isShared_3930_ == 0)
{
v___x_3932_ = v___x_3929_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3927_);
v___x_3932_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
lean_object* v___x_3933_; 
v___x_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3932_);
return v___x_3933_;
}
}
}
else
{
lean_object* v_a_3936_; lean_object* v___x_3937_; 
v_a_3936_ = lean_ctor_get(v_x_3925_, 0);
lean_inc(v_a_3936_);
lean_dec_ref_known(v_x_3925_, 1);
v___x_3937_ = lean_apply_2(v___f_3924_, v_a_3936_, lean_box(0));
return v___x_3937_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object* v___f_3938_, lean_object* v_x_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(v___f_3938_, v_x_3939_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object* v_expectData_3942_, lean_object* v_respStream_3943_, lean_object* v_currentTimeout_3944_, lean_object* v_keepAliveTimeout_3945_, lean_object* v_headerTimeout_3946_, lean_object* v_connectionContext_3947_, uint8_t v_handlerDispatched_3948_, lean_object* v_response_3949_, lean_object* v_socket_3950_, uint8_t v_requiresData_3951_, uint8_t v_sentMessage_3952_, lean_object* v_reader_3953_, uint8_t v_pullBodyStalled_3954_, lean_object* v_requestStream_3955_, uint8_t v_requestBodyOpen_3956_){
_start:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___f_3963_; lean_object* v___f_3964_; uint8_t v___y_3966_; 
v___x_3958_ = lean_box(v_handlerDispatched_3948_);
v___x_3959_ = lean_box(v_requiresData_3951_);
v___x_3960_ = lean_box(v_sentMessage_3952_);
v___x_3961_ = lean_box(v_pullBodyStalled_3954_);
v___x_3962_ = lean_box(v_requestBodyOpen_3956_);
lean_inc_ref(v_requestStream_3955_);
lean_inc_ref(v_reader_3953_);
v___f_3963_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed), 17, 15);
lean_closure_set(v___f_3963_, 0, v_expectData_3942_);
lean_closure_set(v___f_3963_, 1, v_respStream_3943_);
lean_closure_set(v___f_3963_, 2, v_currentTimeout_3944_);
lean_closure_set(v___f_3963_, 3, v_keepAliveTimeout_3945_);
lean_closure_set(v___f_3963_, 4, v_headerTimeout_3946_);
lean_closure_set(v___f_3963_, 5, v_connectionContext_3947_);
lean_closure_set(v___f_3963_, 6, v___x_3958_);
lean_closure_set(v___f_3963_, 7, v_response_3949_);
lean_closure_set(v___f_3963_, 8, v_socket_3950_);
lean_closure_set(v___f_3963_, 9, v___x_3959_);
lean_closure_set(v___f_3963_, 10, v___x_3960_);
lean_closure_set(v___f_3963_, 11, v_reader_3953_);
lean_closure_set(v___f_3963_, 12, v___x_3961_);
lean_closure_set(v___f_3963_, 13, v___x_3962_);
lean_closure_set(v___f_3963_, 14, v_requestStream_3955_);
v___f_3964_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3964_, 0, v___f_3963_);
if (v_sentMessage_3952_ == 0)
{
lean_object* v_state_3972_; 
v_state_3972_ = lean_ctor_get(v_reader_3953_, 0);
lean_inc(v_state_3972_);
lean_dec_ref(v_reader_3953_);
if (lean_obj_tag(v_state_3972_) == 2)
{
lean_dec_ref_known(v_state_3972_, 1);
if (v_requestBodyOpen_3956_ == 0)
{
lean_dec_ref(v_requestStream_3955_);
v___y_3966_ = v_requestBodyOpen_3956_;
goto v___jp_3965_;
}
else
{
lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3973_ = lean_unsigned_to_nat(0u);
v___x_3974_ = l_Std_Http_Body_Stream_hasInterest(v_requestStream_3955_);
v___x_3975_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3973_, v_sentMessage_3952_, v___x_3974_, v___f_3964_);
return v___x_3975_;
}
}
else
{
lean_dec(v_state_3972_);
lean_dec_ref(v_requestStream_3955_);
v___y_3966_ = v_sentMessage_3952_;
goto v___jp_3965_;
}
}
else
{
uint8_t v___x_3976_; 
lean_dec_ref(v_requestStream_3955_);
lean_dec_ref(v_reader_3953_);
v___x_3976_ = 0;
v___y_3966_ = v___x_3976_;
goto v___jp_3965_;
}
v___jp_3965_:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3967_ = lean_unsigned_to_nat(0u);
v___x_3968_ = lean_box(v___y_3966_);
v___x_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
v___x_3970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3969_);
v___x_3971_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3967_, v___y_3966_, v___x_3970_, v___f_3964_);
return v___x_3971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object* v_expectData_3977_, lean_object* v_respStream_3978_, lean_object* v_currentTimeout_3979_, lean_object* v_keepAliveTimeout_3980_, lean_object* v_headerTimeout_3981_, lean_object* v_connectionContext_3982_, lean_object* v_handlerDispatched_3983_, lean_object* v_response_3984_, lean_object* v_socket_3985_, lean_object* v_requiresData_3986_, lean_object* v_sentMessage_3987_, lean_object* v_reader_3988_, lean_object* v_pullBodyStalled_3989_, lean_object* v_requestStream_3990_, lean_object* v_requestBodyOpen_3991_, lean_object* v___y_3992_){
_start:
{
uint8_t v_handlerDispatched_boxed_3993_; uint8_t v_requiresData_boxed_3994_; uint8_t v_sentMessage_boxed_3995_; uint8_t v_pullBodyStalled_boxed_3996_; uint8_t v_requestBodyOpen_boxed_3997_; lean_object* v_res_3998_; 
v_handlerDispatched_boxed_3993_ = lean_unbox(v_handlerDispatched_3983_);
v_requiresData_boxed_3994_ = lean_unbox(v_requiresData_3986_);
v_sentMessage_boxed_3995_ = lean_unbox(v_sentMessage_3987_);
v_pullBodyStalled_boxed_3996_ = lean_unbox(v_pullBodyStalled_3989_);
v_requestBodyOpen_boxed_3997_ = lean_unbox(v_requestBodyOpen_3991_);
v_res_3998_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(v_expectData_3977_, v_respStream_3978_, v_currentTimeout_3979_, v_keepAliveTimeout_3980_, v_headerTimeout_3981_, v_connectionContext_3982_, v_handlerDispatched_boxed_3993_, v_response_3984_, v_socket_3985_, v_requiresData_boxed_3994_, v_sentMessage_boxed_3995_, v_reader_3988_, v_pullBodyStalled_boxed_3996_, v_requestStream_3990_, v_requestBodyOpen_boxed_3997_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t v_sentMessage_3999_, lean_object* v___f_4000_, uint8_t v___x_4001_, lean_object* v_x_4002_){
_start:
{
uint8_t v___y_4005_; 
if (lean_obj_tag(v_x_4002_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4019_; 
lean_dec_ref(v___f_4000_);
v_a_4011_ = lean_ctor_get(v_x_4002_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v_x_4002_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4013_ = v_x_4002_;
v_isShared_4014_ = v_isSharedCheck_4019_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v_x_4002_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4019_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
return v___x_4017_;
}
}
}
else
{
lean_object* v_a_4020_; uint8_t v___x_4021_; 
v_a_4020_ = lean_ctor_get(v_x_4002_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v_x_4002_, 1);
v___x_4021_ = lean_unbox(v_a_4020_);
lean_dec(v_a_4020_);
if (v___x_4021_ == 0)
{
v___y_4005_ = v___x_4001_;
goto v___jp_4004_;
}
else
{
v___y_4005_ = v_sentMessage_3999_;
goto v___jp_4004_;
}
}
v___jp_4004_:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v___x_4006_ = lean_unsigned_to_nat(0u);
v___x_4007_ = lean_box(v___y_4005_);
v___x_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4008_, 0, v___x_4007_);
v___x_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4008_);
v___x_4010_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4006_, v_sentMessage_3999_, v___x_4009_, v___f_4000_);
return v___x_4010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object* v_sentMessage_4022_, lean_object* v___f_4023_, lean_object* v___x_4024_, lean_object* v_x_4025_, lean_object* v___y_4026_){
_start:
{
uint8_t v_sentMessage_boxed_4027_; uint8_t v___x_2541__boxed_4028_; lean_object* v_res_4029_; 
v_sentMessage_boxed_4027_ = lean_unbox(v_sentMessage_4022_);
v___x_2541__boxed_4028_ = lean_unbox(v___x_4024_);
v_res_4029_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(v_sentMessage_boxed_4027_, v___f_4023_, v___x_2541__boxed_4028_, v_x_4025_);
return v_res_4029_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0(void){
_start:
{
lean_object* v___f_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___f_4030_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___x_4031_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4032_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___x_4033_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4033_, 0, lean_box(0));
lean_closure_set(v___x_4033_, 1, lean_box(0));
lean_closure_set(v___x_4033_, 2, v___x_4032_);
lean_closure_set(v___x_4033_, 3, lean_box(0));
lean_closure_set(v___x_4033_, 4, lean_box(0));
lean_closure_set(v___x_4033_, 5, v___x_4031_);
lean_closure_set(v___x_4033_, 6, v___f_4030_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object* v_socket_4034_, lean_object* v_connectionContext_4035_, lean_object* v_state_4036_){
_start:
{
lean_object* v_machine_4038_; lean_object* v_writer_4039_; lean_object* v_requestStream_4040_; lean_object* v_keepAliveTimeout_4041_; lean_object* v_currentTimeout_4042_; lean_object* v_headerTimeout_4043_; lean_object* v_response_4044_; lean_object* v_respStream_4045_; uint8_t v_requiresData_4046_; lean_object* v_expectData_4047_; uint8_t v_handlerDispatched_4048_; lean_object* v_reader_4049_; uint8_t v_pullBodyStalled_4050_; uint8_t v_sentMessage_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___f_4056_; lean_object* v___f_4057_; uint8_t v___y_4059_; 
v_machine_4038_ = lean_ctor_get(v_state_4036_, 0);
lean_inc_ref(v_machine_4038_);
v_writer_4039_ = lean_ctor_get(v_machine_4038_, 1);
lean_inc_ref(v_writer_4039_);
v_requestStream_4040_ = lean_ctor_get(v_state_4036_, 1);
lean_inc_ref_n(v_requestStream_4040_, 2);
v_keepAliveTimeout_4041_ = lean_ctor_get(v_state_4036_, 2);
lean_inc(v_keepAliveTimeout_4041_);
v_currentTimeout_4042_ = lean_ctor_get(v_state_4036_, 3);
lean_inc(v_currentTimeout_4042_);
v_headerTimeout_4043_ = lean_ctor_get(v_state_4036_, 4);
lean_inc(v_headerTimeout_4043_);
v_response_4044_ = lean_ctor_get(v_state_4036_, 5);
lean_inc_ref(v_response_4044_);
v_respStream_4045_ = lean_ctor_get(v_state_4036_, 6);
lean_inc(v_respStream_4045_);
v_requiresData_4046_ = lean_ctor_get_uint8(v_state_4036_, sizeof(void*)*9);
v_expectData_4047_ = lean_ctor_get(v_state_4036_, 7);
lean_inc(v_expectData_4047_);
v_handlerDispatched_4048_ = lean_ctor_get_uint8(v_state_4036_, sizeof(void*)*9 + 1);
lean_dec_ref(v_state_4036_);
v_reader_4049_ = lean_ctor_get(v_machine_4038_, 0);
lean_inc_ref_n(v_reader_4049_, 2);
v_pullBodyStalled_4050_ = lean_ctor_get_uint8(v_machine_4038_, sizeof(void*)*6 + 2);
lean_dec_ref(v_machine_4038_);
v_sentMessage_4051_ = lean_ctor_get_uint8(v_writer_4039_, sizeof(void*)*6);
lean_dec_ref(v_writer_4039_);
v___x_4052_ = lean_box(v_handlerDispatched_4048_);
v___x_4053_ = lean_box(v_requiresData_4046_);
v___x_4054_ = lean_box(v_sentMessage_4051_);
v___x_4055_ = lean_box(v_pullBodyStalled_4050_);
v___f_4056_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed), 16, 14);
lean_closure_set(v___f_4056_, 0, v_expectData_4047_);
lean_closure_set(v___f_4056_, 1, v_respStream_4045_);
lean_closure_set(v___f_4056_, 2, v_currentTimeout_4042_);
lean_closure_set(v___f_4056_, 3, v_keepAliveTimeout_4041_);
lean_closure_set(v___f_4056_, 4, v_headerTimeout_4043_);
lean_closure_set(v___f_4056_, 5, v_connectionContext_4035_);
lean_closure_set(v___f_4056_, 6, v___x_4052_);
lean_closure_set(v___f_4056_, 7, v_response_4044_);
lean_closure_set(v___f_4056_, 8, v_socket_4034_);
lean_closure_set(v___f_4056_, 9, v___x_4053_);
lean_closure_set(v___f_4056_, 10, v___x_4054_);
lean_closure_set(v___f_4056_, 11, v_reader_4049_);
lean_closure_set(v___f_4056_, 12, v___x_4055_);
lean_closure_set(v___f_4056_, 13, v_requestStream_4040_);
v___f_4057_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4057_, 0, v___f_4056_);
if (v_sentMessage_4051_ == 0)
{
lean_object* v_state_4065_; 
v_state_4065_ = lean_ctor_get(v_reader_4049_, 0);
lean_inc(v_state_4065_);
lean_dec_ref(v_reader_4049_);
if (lean_obj_tag(v_state_4065_) == 2)
{
uint8_t v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___f_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___f_4072_; lean_object* v___f_4073_; lean_object* v___x_4074_; lean_object* v___x_2071__overap_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
lean_dec_ref_known(v_state_4065_, 1);
v___x_4066_ = 1;
v___x_4067_ = lean_box(v_sentMessage_4051_);
v___x_4068_ = lean_box(v___x_4066_);
v___f_4069_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4069_, 0, v___x_4067_);
lean_closure_set(v___f_4069_, 1, v___f_4057_);
lean_closure_set(v___f_4069_, 2, v___x_4068_);
v___x_4070_ = lean_unsigned_to_nat(0u);
v___x_4071_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4072_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4073_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4074_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0);
v___x_2071__overap_4075_ = l_Std_Mutex_atomically___redArg(v___x_4071_, v___f_4072_, v___f_4073_, v_requestStream_4040_, v___x_4074_);
v___x_4076_ = lean_apply_1(v___x_2071__overap_4075_, lean_box(0));
v___x_4077_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4070_, v_sentMessage_4051_, v___x_4076_, v___f_4069_);
return v___x_4077_;
}
else
{
lean_dec(v_state_4065_);
lean_dec_ref(v_requestStream_4040_);
v___y_4059_ = v_sentMessage_4051_;
goto v___jp_4058_;
}
}
else
{
uint8_t v___x_4078_; 
lean_dec_ref(v_reader_4049_);
lean_dec_ref(v_requestStream_4040_);
v___x_4078_ = 0;
v___y_4059_ = v___x_4078_;
goto v___jp_4058_;
}
v___jp_4058_:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v___x_4060_ = lean_unsigned_to_nat(0u);
v___x_4061_ = lean_box(v___y_4059_);
v___x_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
v___x_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
v___x_4064_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4060_, v___y_4059_, v___x_4063_, v___f_4057_);
return v___x_4064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object* v_socket_4079_, lean_object* v_connectionContext_4080_, lean_object* v_state_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4079_, v_connectionContext_4080_, v_state_4081_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object* v_00_u03b1_4084_, lean_object* v_00_u03b2_4085_, lean_object* v_inst_4086_, lean_object* v_socket_4087_, lean_object* v_connectionContext_4088_, lean_object* v_state_4089_){
_start:
{
lean_object* v___x_4091_; 
v___x_4091_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4087_, v_connectionContext_4088_, v_state_4089_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object* v_00_u03b1_4092_, lean_object* v_00_u03b2_4093_, lean_object* v_inst_4094_, lean_object* v_socket_4095_, lean_object* v_connectionContext_4096_, lean_object* v_state_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v_res_4099_; 
v_res_4099_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(v_00_u03b1_4092_, v_00_u03b2_4093_, v_inst_4094_, v_socket_4095_, v_connectionContext_4096_, v_state_4097_);
lean_dec_ref(v_inst_4094_);
return v_res_4099_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object* v_x_4100_){
_start:
{
if (lean_obj_tag(v_x_4100_) == 0)
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4110_; 
v_a_4102_ = lean_ctor_get(v_x_4100_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v_x_4100_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4104_ = v_x_4100_;
v_isShared_4105_ = v_isSharedCheck_4110_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v_x_4100_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4110_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
lean_object* v___x_4108_; 
v___x_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
return v___x_4108_;
}
}
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4120_; 
v_a_4111_ = lean_ctor_get(v_x_4100_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v_x_4100_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4113_ = v_x_4100_;
v_isShared_4114_ = v_isSharedCheck_4120_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v_x_4100_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4120_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4115_; lean_object* v___x_4117_; 
v___x_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4115_, 0, v_a_4111_);
if (v_isShared_4114_ == 0)
{
lean_ctor_set(v___x_4113_, 0, v___x_4115_);
v___x_4117_ = v___x_4113_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4115_);
v___x_4117_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4118_; 
v___x_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
return v___x_4118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object* v_x_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(v_x_4121_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object* v_x_4128_){
_start:
{
if (lean_obj_tag(v_x_4128_) == 0)
{
lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4138_; 
v_a_4130_ = lean_ctor_get(v_x_4128_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v_x_4128_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4132_ = v_x_4128_;
v_isShared_4133_ = v_isSharedCheck_4138_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_dec(v_x_4128_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4138_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
lean_object* v___x_4136_; 
v___x_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4135_);
return v___x_4136_;
}
}
}
else
{
lean_object* v___x_4139_; 
lean_dec_ref_known(v_x_4128_, 1);
v___x_4139_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1));
return v___x_4139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object* v_x_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v_res_4142_; 
v_res_4142_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(v_x_4140_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object* v_onFailure_4143_, lean_object* v_handler_4144_, lean_object* v___f_4145_, lean_object* v_x_4146_){
_start:
{
if (lean_obj_tag(v_x_4146_) == 0)
{
lean_object* v_a_4148_; lean_object* v___x_4149_; uint8_t v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; 
v_a_4148_ = lean_ctor_get(v_x_4146_, 0);
lean_inc(v_a_4148_);
lean_dec_ref_known(v_x_4146_, 1);
v___x_4149_ = lean_unsigned_to_nat(0u);
v___x_4150_ = 0;
v___x_4151_ = lean_apply_3(v_onFailure_4143_, v_handler_4144_, v_a_4148_, lean_box(0));
v___x_4152_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4149_, v___x_4150_, v___x_4151_, v___f_4145_);
return v___x_4152_;
}
else
{
lean_object* v___x_4153_; 
lean_dec_ref(v___f_4145_);
lean_dec(v_handler_4144_);
lean_dec_ref(v_onFailure_4143_);
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v_x_4146_);
return v___x_4153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object* v_onFailure_4154_, lean_object* v_handler_4155_, lean_object* v___f_4156_, lean_object* v_x_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(v_onFailure_4154_, v_handler_4155_, v___f_4156_, v_x_4157_);
return v_res_4159_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object* v_x_4160_){
_start:
{
if (lean_obj_tag(v_x_4160_) == 0)
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4170_; 
v_a_4162_ = lean_ctor_get(v_x_4160_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v_x_4160_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4164_ = v_x_4160_;
v_isShared_4165_ = v_isSharedCheck_4170_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v_x_4160_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4170_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4162_);
v___x_4167_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
lean_object* v___x_4168_; 
v___x_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4167_);
return v___x_4168_;
}
}
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4189_; 
v_a_4171_ = lean_ctor_get(v_x_4160_, 0);
v_isSharedCheck_4189_ = !lean_is_exclusive(v_x_4160_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4173_ = v_x_4160_;
v_isShared_4174_ = v_isSharedCheck_4189_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v_x_4160_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4189_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v_snd_4175_; uint8_t v___x_4176_; 
v_snd_4175_ = lean_ctor_get(v_a_4171_, 1);
v___x_4176_ = lean_unbox(v_snd_4175_);
if (v___x_4176_ == 0)
{
lean_object* v_fst_4177_; lean_object* v___x_4178_; lean_object* v___x_4180_; 
v_fst_4177_ = lean_ctor_get(v_a_4171_, 0);
lean_inc(v_fst_4177_);
lean_dec(v_a_4171_);
v___x_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4178_, 0, v_fst_4177_);
if (v_isShared_4174_ == 0)
{
lean_ctor_set(v___x_4173_, 0, v___x_4178_);
v___x_4180_ = v___x_4173_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v___x_4178_);
v___x_4180_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
lean_object* v___x_4181_; 
v___x_4181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4180_);
return v___x_4181_;
}
}
else
{
lean_object* v_fst_4183_; lean_object* v___x_4184_; lean_object* v___x_4186_; 
v_fst_4183_ = lean_ctor_get(v_a_4171_, 0);
lean_inc(v_fst_4183_);
lean_dec(v_a_4171_);
v___x_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4184_, 0, v_fst_4183_);
if (v_isShared_4174_ == 0)
{
lean_ctor_set(v___x_4173_, 0, v___x_4184_);
v___x_4186_ = v___x_4173_;
goto v_reusejp_4185_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v___x_4184_);
v___x_4186_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4185_;
}
v_reusejp_4185_:
{
lean_object* v___x_4187_; 
v___x_4187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4186_);
return v___x_4187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object* v_x_4190_, lean_object* v___y_4191_){
_start:
{
lean_object* v_res_4192_; 
v_res_4192_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_x_4190_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object* v_inst_4193_, lean_object* v_socket_4194_, lean_object* v_____r_4195_){
_start:
{
lean_object* v_val_4198_; lean_object* v_close_4200_; lean_object* v___x_4201_; 
v_close_4200_ = lean_ctor_get(v_inst_4193_, 3);
lean_inc_ref(v_close_4200_);
lean_dec_ref(v_inst_4193_);
v___x_4201_ = lean_apply_2(v_close_4200_, v_socket_4194_, lean_box(0));
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4209_; 
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4204_ = v___x_4201_;
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v___x_4201_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
lean_ctor_set_tag(v___x_4204_, 1);
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
v_val_4198_ = v___x_4207_;
goto v___jp_4197_;
}
}
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4217_; 
v_a_4210_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4212_ = v___x_4201_;
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4201_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4213_ == 0)
{
lean_ctor_set_tag(v___x_4212_, 0);
v___x_4215_ = v___x_4212_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
v_val_4198_ = v___x_4215_;
goto v___jp_4197_;
}
}
}
v___jp_4197_:
{
lean_object* v___x_4199_; 
v___x_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4199_, 0, v_val_4198_);
return v___x_4199_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object* v_inst_4218_, lean_object* v_socket_4219_, lean_object* v_____r_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(v_inst_4218_, v_socket_4219_, v_____r_4220_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object* v___f_4223_, lean_object* v_x_4224_){
_start:
{
if (lean_obj_tag(v_x_4224_) == 0)
{
lean_object* v___x_4226_; 
lean_dec_ref(v___f_4223_);
v___x_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4226_, 0, v_x_4224_);
return v___x_4226_;
}
else
{
lean_object* v_a_4227_; lean_object* v___x_4228_; 
v_a_4227_ = lean_ctor_get(v_x_4224_, 0);
lean_inc(v_a_4227_);
lean_dec_ref_known(v_x_4224_, 1);
v___x_4228_ = lean_apply_2(v___f_4223_, v_a_4227_, lean_box(0));
return v___x_4228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object* v___f_4229_, lean_object* v_x_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v_res_4232_; 
v_res_4232_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(v___f_4229_, v_x_4230_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(lean_object* v_close_4233_, lean_object* v_val_4234_, lean_object* v___f_4235_, lean_object* v___f_4236_, lean_object* v_x_4237_){
_start:
{
if (lean_obj_tag(v_x_4237_) == 0)
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4247_; 
lean_dec_ref(v___f_4236_);
lean_dec_ref(v___f_4235_);
lean_dec(v_val_4234_);
lean_dec_ref(v_close_4233_);
v_a_4239_ = lean_ctor_get(v_x_4237_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v_x_4237_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4241_ = v_x_4237_;
v_isShared_4242_ = v_isSharedCheck_4247_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v_x_4237_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4247_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
lean_object* v___x_4245_; 
v___x_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4244_);
return v___x_4245_;
}
}
}
else
{
lean_object* v_a_4248_; uint8_t v___x_4249_; 
v_a_4248_ = lean_ctor_get(v_x_4237_, 0);
lean_inc(v_a_4248_);
lean_dec_ref_known(v_x_4237_, 1);
v___x_4249_ = lean_unbox(v_a_4248_);
if (v___x_4249_ == 0)
{
lean_object* v___x_4250_; lean_object* v___x_4251_; uint8_t v___x_4252_; lean_object* v___x_4253_; 
lean_dec_ref(v___f_4236_);
v___x_4250_ = lean_unsigned_to_nat(0u);
v___x_4251_ = lean_apply_2(v_close_4233_, v_val_4234_, lean_box(0));
v___x_4252_ = lean_unbox(v_a_4248_);
lean_dec(v_a_4248_);
v___x_4253_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4250_, v___x_4252_, v___x_4251_, v___f_4235_);
return v___x_4253_;
}
else
{
lean_object* v___x_4254_; lean_object* v___x_4255_; 
lean_dec(v_a_4248_);
lean_dec_ref(v___f_4235_);
lean_dec(v_val_4234_);
lean_dec_ref(v_close_4233_);
v___x_4254_ = lean_box(0);
v___x_4255_ = lean_apply_2(v___f_4236_, v___x_4254_, lean_box(0));
return v___x_4255_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object* v_close_4256_, lean_object* v_val_4257_, lean_object* v___f_4258_, lean_object* v___f_4259_, lean_object* v_x_4260_, lean_object* v___y_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(v_close_4256_, v_val_4257_, v___f_4258_, v___f_4259_, v_x_4260_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object* v_respStream_4263_, lean_object* v_responseBodyInstance_4264_, lean_object* v___f_4265_, lean_object* v___f_4266_, lean_object* v_____r_4267_){
_start:
{
if (lean_obj_tag(v_respStream_4263_) == 1)
{
lean_object* v_val_4269_; lean_object* v_close_4270_; lean_object* v_isClosed_4271_; lean_object* v___f_4272_; lean_object* v___x_4273_; uint8_t v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; 
v_val_4269_ = lean_ctor_get(v_respStream_4263_, 0);
lean_inc_n(v_val_4269_, 2);
lean_dec_ref_known(v_respStream_4263_, 1);
v_close_4270_ = lean_ctor_get(v_responseBodyInstance_4264_, 1);
lean_inc_ref(v_close_4270_);
v_isClosed_4271_ = lean_ctor_get(v_responseBodyInstance_4264_, 2);
lean_inc_ref(v_isClosed_4271_);
lean_dec_ref(v_responseBodyInstance_4264_);
v___f_4272_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_4272_, 0, v_close_4270_);
lean_closure_set(v___f_4272_, 1, v_val_4269_);
lean_closure_set(v___f_4272_, 2, v___f_4265_);
lean_closure_set(v___f_4272_, 3, v___f_4266_);
v___x_4273_ = lean_unsigned_to_nat(0u);
v___x_4274_ = 0;
v___x_4275_ = lean_apply_2(v_isClosed_4271_, v_val_4269_, lean_box(0));
v___x_4276_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4273_, v___x_4274_, v___x_4275_, v___f_4272_);
return v___x_4276_;
}
else
{
lean_object* v___x_4277_; lean_object* v___x_4278_; 
lean_dec_ref(v___f_4265_);
lean_dec_ref(v_responseBodyInstance_4264_);
lean_dec(v_respStream_4263_);
v___x_4277_ = lean_box(0);
v___x_4278_ = lean_apply_2(v___f_4266_, v___x_4277_, lean_box(0));
return v___x_4278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object* v_respStream_4279_, lean_object* v_responseBodyInstance_4280_, lean_object* v___f_4281_, lean_object* v___f_4282_, lean_object* v_____r_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(v_respStream_4279_, v_responseBodyInstance_4280_, v___f_4281_, v___f_4282_, v_____r_4283_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object* v_requestStream_4286_, lean_object* v___f_4287_, lean_object* v___f_4288_, lean_object* v_x_4289_){
_start:
{
if (lean_obj_tag(v_x_4289_) == 0)
{
lean_object* v_a_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4299_; 
lean_dec_ref(v___f_4288_);
lean_dec_ref(v___f_4287_);
lean_dec_ref(v_requestStream_4286_);
v_a_4291_ = lean_ctor_get(v_x_4289_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v_x_4289_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4293_ = v_x_4289_;
v_isShared_4294_ = v_isSharedCheck_4299_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_a_4291_);
lean_dec(v_x_4289_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4299_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
lean_object* v___x_4296_; 
if (v_isShared_4294_ == 0)
{
v___x_4296_ = v___x_4293_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v_a_4291_);
v___x_4296_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
lean_object* v___x_4297_; 
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
}
}
else
{
lean_object* v_a_4300_; uint8_t v___x_4301_; 
v_a_4300_ = lean_ctor_get(v_x_4289_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v_x_4289_, 1);
v___x_4301_ = lean_unbox(v_a_4300_);
if (v___x_4301_ == 0)
{
lean_object* v___x_4302_; lean_object* v___x_4303_; uint8_t v___x_4304_; lean_object* v___x_4305_; 
lean_dec_ref(v___f_4288_);
v___x_4302_ = lean_unsigned_to_nat(0u);
v___x_4303_ = l_Std_Http_Body_Stream_close(v_requestStream_4286_);
v___x_4304_ = lean_unbox(v_a_4300_);
lean_dec(v_a_4300_);
v___x_4305_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4302_, v___x_4304_, v___x_4303_, v___f_4287_);
return v___x_4305_;
}
else
{
lean_object* v___x_4306_; lean_object* v___x_4307_; 
lean_dec(v_a_4300_);
lean_dec_ref(v___f_4287_);
lean_dec_ref(v_requestStream_4286_);
v___x_4306_ = lean_box(0);
v___x_4307_ = lean_apply_2(v___f_4288_, v___x_4306_, lean_box(0));
return v___x_4307_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object* v_requestStream_4308_, lean_object* v___f_4309_, lean_object* v___f_4310_, lean_object* v_x_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(v_requestStream_4308_, v___f_4309_, v___f_4310_, v_x_4311_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object* v_responseBodyInstance_4314_, lean_object* v___f_4315_, lean_object* v___f_4316_, lean_object* v___f_4317_, lean_object* v_x_4318_){
_start:
{
if (lean_obj_tag(v_x_4318_) == 0)
{
lean_object* v_a_4320_; lean_object* v___x_4322_; uint8_t v_isShared_4323_; uint8_t v_isSharedCheck_4328_; 
lean_dec_ref(v___f_4317_);
lean_dec_ref(v___f_4316_);
lean_dec_ref(v___f_4315_);
lean_dec_ref(v_responseBodyInstance_4314_);
v_a_4320_ = lean_ctor_get(v_x_4318_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v_x_4318_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4322_ = v_x_4318_;
v_isShared_4323_ = v_isSharedCheck_4328_;
goto v_resetjp_4321_;
}
else
{
lean_inc(v_a_4320_);
lean_dec(v_x_4318_);
v___x_4322_ = lean_box(0);
v_isShared_4323_ = v_isSharedCheck_4328_;
goto v_resetjp_4321_;
}
v_resetjp_4321_:
{
lean_object* v___x_4325_; 
if (v_isShared_4323_ == 0)
{
v___x_4325_ = v___x_4322_;
goto v_reusejp_4324_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v_a_4320_);
v___x_4325_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4324_;
}
v_reusejp_4324_:
{
lean_object* v___x_4326_; 
v___x_4326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4326_, 0, v___x_4325_);
return v___x_4326_;
}
}
}
else
{
lean_object* v_a_4329_; lean_object* v_requestStream_4330_; lean_object* v_respStream_4331_; lean_object* v___f_4332_; lean_object* v___f_4333_; lean_object* v___f_4334_; lean_object* v___x_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___f_4338_; lean_object* v___f_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4428__overap_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v_a_4329_ = lean_ctor_get(v_x_4318_, 0);
lean_inc(v_a_4329_);
lean_dec_ref_known(v_x_4318_, 1);
v_requestStream_4330_ = lean_ctor_get(v_a_4329_, 1);
lean_inc_ref_n(v_requestStream_4330_, 2);
v_respStream_4331_ = lean_ctor_get(v_a_4329_, 6);
lean_inc(v_respStream_4331_);
lean_dec(v_a_4329_);
v___f_4332_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed), 6, 4);
lean_closure_set(v___f_4332_, 0, v_respStream_4331_);
lean_closure_set(v___f_4332_, 1, v_responseBodyInstance_4314_);
lean_closure_set(v___f_4332_, 2, v___f_4315_);
lean_closure_set(v___f_4332_, 3, v___f_4316_);
lean_inc_ref(v___f_4332_);
v___f_4333_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4333_, 0, v___f_4332_);
v___f_4334_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4334_, 0, v_requestStream_4330_);
lean_closure_set(v___f_4334_, 1, v___f_4333_);
lean_closure_set(v___f_4334_, 2, v___f_4332_);
v___x_4335_ = lean_unsigned_to_nat(0u);
v___x_4336_ = 0;
v___x_4337_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4338_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4339_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4340_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4341_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4341_, 0, lean_box(0));
lean_closure_set(v___x_4341_, 1, lean_box(0));
lean_closure_set(v___x_4341_, 2, v___x_4337_);
lean_closure_set(v___x_4341_, 3, lean_box(0));
lean_closure_set(v___x_4341_, 4, lean_box(0));
lean_closure_set(v___x_4341_, 5, v___x_4340_);
lean_closure_set(v___x_4341_, 6, v___f_4317_);
v___x_4428__overap_4342_ = l_Std_Mutex_atomically___redArg(v___x_4337_, v___f_4338_, v___f_4339_, v_requestStream_4330_, v___x_4341_);
v___x_4343_ = lean_apply_1(v___x_4428__overap_4342_, lean_box(0));
v___x_4344_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4335_, v___x_4336_, v___x_4343_, v___f_4334_);
return v___x_4344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object* v_responseBodyInstance_4345_, lean_object* v___f_4346_, lean_object* v___f_4347_, lean_object* v___f_4348_, lean_object* v_x_4349_, lean_object* v___y_4350_){
_start:
{
lean_object* v_res_4351_; 
v_res_4351_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(v_responseBodyInstance_4345_, v___f_4346_, v___f_4347_, v___f_4348_, v_x_4349_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object* v_h_4352_, lean_object* v_responseBodyInstance_4353_, lean_object* v_handler_4354_, lean_object* v_config_4355_, lean_object* v___x_4356_, uint8_t v___x_4357_, lean_object* v___f_4358_, lean_object* v_x_4359_){
_start:
{
if (lean_obj_tag(v_x_4359_) == 0)
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4369_; 
lean_dec_ref(v___f_4358_);
lean_dec_ref(v___x_4356_);
lean_dec_ref(v_config_4355_);
lean_dec(v_handler_4354_);
lean_dec_ref(v_responseBodyInstance_4353_);
lean_dec_ref(v_h_4352_);
v_a_4361_ = lean_ctor_get(v_x_4359_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v_x_4359_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4363_ = v_x_4359_;
v_isShared_4364_ = v_isSharedCheck_4369_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v_x_4359_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4369_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
lean_object* v___x_4367_; 
v___x_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4366_);
return v___x_4367_;
}
}
}
else
{
lean_object* v_a_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; 
v_a_4370_ = lean_ctor_get(v_x_4359_, 0);
lean_inc(v_a_4370_);
lean_dec_ref_known(v_x_4359_, 1);
v___x_4371_ = lean_unsigned_to_nat(0u);
v___x_4372_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_h_4352_, v_responseBodyInstance_4353_, v_handler_4354_, v_config_4355_, v_a_4370_, v___x_4356_);
v___x_4373_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4371_, v___x_4357_, v___x_4372_, v___f_4358_);
return v___x_4373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object* v_h_4374_, lean_object* v_responseBodyInstance_4375_, lean_object* v_handler_4376_, lean_object* v_config_4377_, lean_object* v___x_4378_, lean_object* v___x_4379_, lean_object* v___f_4380_, lean_object* v_x_4381_, lean_object* v___y_4382_){
_start:
{
uint8_t v___x_5104__boxed_4383_; lean_object* v_res_4384_; 
v___x_5104__boxed_4383_ = lean_unbox(v___x_4379_);
v_res_4384_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(v_h_4374_, v_responseBodyInstance_4375_, v_handler_4376_, v_config_4377_, v___x_4378_, v___x_5104__boxed_4383_, v___f_4380_, v_x_4381_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object* v_inst_4385_, lean_object* v_h_4386_, lean_object* v_responseBodyInstance_4387_, lean_object* v_config_4388_, lean_object* v_handler_4389_, uint8_t v___x_4390_, lean_object* v___f_4391_, lean_object* v_x_4392_){
_start:
{
if (lean_obj_tag(v_x_4392_) == 0)
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4402_; 
lean_dec_ref(v___f_4391_);
lean_dec(v_handler_4389_);
lean_dec_ref(v_config_4388_);
lean_dec_ref(v_responseBodyInstance_4387_);
lean_dec_ref(v_h_4386_);
lean_dec_ref(v_inst_4385_);
v_a_4394_ = lean_ctor_get(v_x_4392_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v_x_4392_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4396_ = v_x_4392_;
v_isShared_4397_ = v_isSharedCheck_4402_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v_x_4392_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4402_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
lean_object* v___x_4400_; 
v___x_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4399_);
return v___x_4400_;
}
}
}
else
{
lean_object* v_a_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; 
v_a_4403_ = lean_ctor_get(v_x_4392_, 0);
lean_inc(v_a_4403_);
lean_dec_ref_known(v_x_4392_, 1);
v___x_4404_ = lean_unsigned_to_nat(0u);
v___x_4405_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_4385_, v_h_4386_, v_responseBodyInstance_4387_, v_config_4388_, v_handler_4389_, v_a_4403_);
v___x_4406_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4404_, v___x_4390_, v___x_4405_, v___f_4391_);
return v___x_4406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object* v_inst_4407_, lean_object* v_h_4408_, lean_object* v_responseBodyInstance_4409_, lean_object* v_config_4410_, lean_object* v_handler_4411_, lean_object* v___x_4412_, lean_object* v___f_4413_, lean_object* v_x_4414_, lean_object* v___y_4415_){
_start:
{
uint8_t v___x_5145__boxed_4416_; lean_object* v_res_4417_; 
v___x_5145__boxed_4416_ = lean_unbox(v___x_4412_);
v_res_4417_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(v_inst_4407_, v_h_4408_, v_responseBodyInstance_4409_, v_config_4410_, v_handler_4411_, v___x_5145__boxed_4416_, v___f_4413_, v_x_4414_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t v___x_4418_, lean_object* v_h_4419_, lean_object* v_responseBodyInstance_4420_, lean_object* v_handler_4421_, lean_object* v_config_4422_, lean_object* v___f_4423_, lean_object* v_inst_4424_, lean_object* v_socket_4425_, lean_object* v_connectionContext_4426_, uint8_t v___x_4427_, lean_object* v_x_4428_){
_start:
{
if (lean_obj_tag(v_x_4428_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4438_; 
lean_dec_ref(v_connectionContext_4426_);
lean_dec(v_socket_4425_);
lean_dec_ref(v_inst_4424_);
lean_dec_ref(v___f_4423_);
lean_dec_ref(v_config_4422_);
lean_dec(v_handler_4421_);
lean_dec_ref(v_responseBodyInstance_4420_);
lean_dec_ref(v_h_4419_);
v_a_4430_ = lean_ctor_get(v_x_4428_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v_x_4428_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4432_ = v_x_4428_;
v_isShared_4433_ = v_isSharedCheck_4438_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v_x_4428_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4438_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v___x_4435_; 
if (v_isShared_4433_ == 0)
{
v___x_4435_ = v___x_4432_;
goto v_reusejp_4434_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4430_);
v___x_4435_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4434_;
}
v_reusejp_4434_:
{
lean_object* v___x_4436_; 
v___x_4436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4436_, 0, v___x_4435_);
return v___x_4436_;
}
}
}
else
{
lean_object* v_a_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4481_; 
v_a_4439_ = lean_ctor_get(v_x_4428_, 0);
v_isSharedCheck_4481_ = !lean_is_exclusive(v_x_4428_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4441_ = v_x_4428_;
v_isShared_4442_ = v_isSharedCheck_4481_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_a_4439_);
lean_dec(v_x_4428_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4481_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v_machine_4443_; lean_object* v_requestStream_4444_; lean_object* v_keepAliveTimeout_4445_; lean_object* v_currentTimeout_4446_; lean_object* v_headerTimeout_4447_; lean_object* v_response_4448_; lean_object* v_respStream_4449_; uint8_t v_requiresData_4450_; lean_object* v_expectData_4451_; uint8_t v_handlerDispatched_4452_; lean_object* v_pendingHead_4453_; uint8_t v___y_4464_; uint8_t v___y_4471_; uint8_t v___y_4473_; uint8_t v___y_4474_; uint8_t v___y_4476_; 
v_machine_4443_ = lean_ctor_get(v_a_4439_, 0);
v_requestStream_4444_ = lean_ctor_get(v_a_4439_, 1);
v_keepAliveTimeout_4445_ = lean_ctor_get(v_a_4439_, 2);
v_currentTimeout_4446_ = lean_ctor_get(v_a_4439_, 3);
v_headerTimeout_4447_ = lean_ctor_get(v_a_4439_, 4);
v_response_4448_ = lean_ctor_get(v_a_4439_, 5);
v_respStream_4449_ = lean_ctor_get(v_a_4439_, 6);
v_requiresData_4450_ = lean_ctor_get_uint8(v_a_4439_, sizeof(void*)*9);
v_expectData_4451_ = lean_ctor_get(v_a_4439_, 7);
v_handlerDispatched_4452_ = lean_ctor_get_uint8(v_a_4439_, sizeof(void*)*9 + 1);
v_pendingHead_4453_ = lean_ctor_get(v_a_4439_, 8);
if (lean_obj_tag(v_respStream_4449_) == 0)
{
v___y_4476_ = v___x_4418_;
goto v___jp_4475_;
}
else
{
v___y_4476_ = v___x_4427_;
goto v___jp_4475_;
}
v___jp_4454_:
{
lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___f_4457_; lean_object* v___x_4458_; lean_object* v___f_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; 
v___x_4455_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4455_, 0, v_machine_4443_);
lean_ctor_set(v___x_4455_, 1, v_requestStream_4444_);
lean_ctor_set(v___x_4455_, 2, v_keepAliveTimeout_4445_);
lean_ctor_set(v___x_4455_, 3, v_currentTimeout_4446_);
lean_ctor_set(v___x_4455_, 4, v_headerTimeout_4447_);
lean_ctor_set(v___x_4455_, 5, v_response_4448_);
lean_ctor_set(v___x_4455_, 6, v_respStream_4449_);
lean_ctor_set(v___x_4455_, 7, v_expectData_4451_);
lean_ctor_set(v___x_4455_, 8, v_pendingHead_4453_);
lean_ctor_set_uint8(v___x_4455_, sizeof(void*)*9, v___x_4418_);
lean_ctor_set_uint8(v___x_4455_, sizeof(void*)*9 + 1, v_handlerDispatched_4452_);
v___x_4456_ = lean_box(v___x_4418_);
lean_inc_ref(v___x_4455_);
lean_inc_ref(v_config_4422_);
lean_inc(v_handler_4421_);
lean_inc_ref(v_responseBodyInstance_4420_);
lean_inc_ref(v_h_4419_);
v___f_4457_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed), 9, 7);
lean_closure_set(v___f_4457_, 0, v_h_4419_);
lean_closure_set(v___f_4457_, 1, v_responseBodyInstance_4420_);
lean_closure_set(v___f_4457_, 2, v_handler_4421_);
lean_closure_set(v___f_4457_, 3, v_config_4422_);
lean_closure_set(v___f_4457_, 4, v___x_4455_);
lean_closure_set(v___f_4457_, 5, v___x_4456_);
lean_closure_set(v___f_4457_, 6, v___f_4423_);
v___x_4458_ = lean_box(v___x_4418_);
v___f_4459_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed), 9, 7);
lean_closure_set(v___f_4459_, 0, v_inst_4424_);
lean_closure_set(v___f_4459_, 1, v_h_4419_);
lean_closure_set(v___f_4459_, 2, v_responseBodyInstance_4420_);
lean_closure_set(v___f_4459_, 3, v_config_4422_);
lean_closure_set(v___f_4459_, 4, v_handler_4421_);
lean_closure_set(v___f_4459_, 5, v___x_4458_);
lean_closure_set(v___f_4459_, 6, v___f_4457_);
v___x_4460_ = lean_unsigned_to_nat(0u);
v___x_4461_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4425_, v_connectionContext_4426_, v___x_4455_);
v___x_4462_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4460_, v___x_4418_, v___x_4461_, v___f_4459_);
return v___x_4462_;
}
v___jp_4463_:
{
if (v_requiresData_4450_ == 0)
{
if (v___y_4464_ == 0)
{
lean_object* v___x_4465_; lean_object* v___x_4467_; 
lean_dec_ref(v_connectionContext_4426_);
lean_dec(v_socket_4425_);
lean_dec_ref(v_inst_4424_);
lean_dec_ref(v___f_4423_);
lean_dec_ref(v_config_4422_);
lean_dec(v_handler_4421_);
lean_dec_ref(v_responseBodyInstance_4420_);
lean_dec_ref(v_h_4419_);
v___x_4465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4465_, 0, v_a_4439_);
if (v_isShared_4442_ == 0)
{
lean_ctor_set(v___x_4441_, 0, v___x_4465_);
v___x_4467_ = v___x_4441_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v___x_4465_);
v___x_4467_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
lean_object* v___x_4468_; 
v___x_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4468_, 0, v___x_4467_);
return v___x_4468_;
}
}
else
{
lean_inc(v_pendingHead_4453_);
lean_inc(v_expectData_4451_);
lean_inc(v_respStream_4449_);
lean_inc_ref(v_response_4448_);
lean_inc(v_headerTimeout_4447_);
lean_inc(v_currentTimeout_4446_);
lean_inc(v_keepAliveTimeout_4445_);
lean_inc_ref(v_requestStream_4444_);
lean_inc_ref(v_machine_4443_);
lean_del_object(v___x_4441_);
lean_dec(v_a_4439_);
goto v___jp_4454_;
}
}
else
{
lean_inc(v_pendingHead_4453_);
lean_inc(v_expectData_4451_);
lean_inc(v_respStream_4449_);
lean_inc_ref(v_response_4448_);
lean_inc(v_headerTimeout_4447_);
lean_inc(v_currentTimeout_4446_);
lean_inc(v_keepAliveTimeout_4445_);
lean_inc_ref(v_requestStream_4444_);
lean_inc_ref(v_machine_4443_);
lean_del_object(v___x_4441_);
lean_dec(v_a_4439_);
goto v___jp_4454_;
}
}
v___jp_4470_:
{
if (v_handlerDispatched_4452_ == 0)
{
v___y_4464_ = v___y_4471_;
goto v___jp_4463_;
}
else
{
v___y_4464_ = v_handlerDispatched_4452_;
goto v___jp_4463_;
}
}
v___jp_4472_:
{
if (v___y_4473_ == 0)
{
v___y_4471_ = v___y_4474_;
goto v___jp_4470_;
}
else
{
v___y_4471_ = v___y_4473_;
goto v___jp_4470_;
}
}
v___jp_4475_:
{
lean_object* v_writer_4477_; uint8_t v_sentMessage_4478_; 
v_writer_4477_ = lean_ctor_get(v_machine_4443_, 1);
v_sentMessage_4478_ = lean_ctor_get_uint8(v_writer_4477_, sizeof(void*)*6);
if (v_sentMessage_4478_ == 0)
{
lean_object* v_reader_4479_; lean_object* v_state_4480_; 
v_reader_4479_ = lean_ctor_get(v_machine_4443_, 0);
v_state_4480_ = lean_ctor_get(v_reader_4479_, 0);
if (lean_obj_tag(v_state_4480_) == 2)
{
v___y_4473_ = v___y_4476_;
v___y_4474_ = v___x_4427_;
goto v___jp_4472_;
}
else
{
v___y_4473_ = v___y_4476_;
v___y_4474_ = v_sentMessage_4478_;
goto v___jp_4472_;
}
}
else
{
v___y_4473_ = v___y_4476_;
v___y_4474_ = v___x_4418_;
goto v___jp_4472_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object* v___x_4482_, lean_object* v_h_4483_, lean_object* v_responseBodyInstance_4484_, lean_object* v_handler_4485_, lean_object* v_config_4486_, lean_object* v___f_4487_, lean_object* v_inst_4488_, lean_object* v_socket_4489_, lean_object* v_connectionContext_4490_, lean_object* v___x_4491_, lean_object* v_x_4492_, lean_object* v___y_4493_){
_start:
{
uint8_t v___x_5185__boxed_4494_; uint8_t v___x_5188__boxed_4495_; lean_object* v_res_4496_; 
v___x_5185__boxed_4494_ = lean_unbox(v___x_4482_);
v___x_5188__boxed_4495_ = lean_unbox(v___x_4491_);
v_res_4496_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(v___x_5185__boxed_4494_, v_h_4483_, v_responseBodyInstance_4484_, v_handler_4485_, v_config_4486_, v___f_4487_, v_inst_4488_, v_socket_4489_, v_connectionContext_4490_, v___x_5188__boxed_4495_, v_x_4492_);
return v_res_4496_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object* v_h_4497_, lean_object* v_handler_4498_, lean_object* v_extensions_4499_, lean_object* v_connectionContext_4500_, uint8_t v___x_4501_, lean_object* v___f_4502_, lean_object* v_x_4503_){
_start:
{
if (lean_obj_tag(v_x_4503_) == 0)
{
lean_object* v_a_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4513_; 
lean_dec_ref(v___f_4502_);
lean_dec_ref(v_connectionContext_4500_);
lean_dec(v_extensions_4499_);
lean_dec(v_handler_4498_);
lean_dec_ref(v_h_4497_);
v_a_4505_ = lean_ctor_get(v_x_4503_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_x_4503_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4507_ = v_x_4503_;
v_isShared_4508_ = v_isSharedCheck_4513_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_a_4505_);
lean_dec(v_x_4503_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4513_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v___x_4510_; 
if (v_isShared_4508_ == 0)
{
v___x_4510_ = v___x_4507_;
goto v_reusejp_4509_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4505_);
v___x_4510_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4509_;
}
v_reusejp_4509_:
{
lean_object* v___x_4511_; 
v___x_4511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4511_, 0, v___x_4510_);
return v___x_4511_;
}
}
}
else
{
lean_object* v_a_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v_a_4514_ = lean_ctor_get(v_x_4503_, 0);
lean_inc(v_a_4514_);
lean_dec_ref_known(v_x_4503_, 1);
v___x_4515_ = lean_unsigned_to_nat(0u);
v___x_4516_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_h_4497_, v_handler_4498_, v_extensions_4499_, v_connectionContext_4500_, v_a_4514_);
v___x_4517_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4515_, v___x_4501_, v___x_4516_, v___f_4502_);
return v___x_4517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object* v_h_4518_, lean_object* v_handler_4519_, lean_object* v_extensions_4520_, lean_object* v_connectionContext_4521_, lean_object* v___x_4522_, lean_object* v___f_4523_, lean_object* v_x_4524_, lean_object* v___y_4525_){
_start:
{
uint8_t v___x_5279__boxed_4526_; lean_object* v_res_4527_; 
v___x_5279__boxed_4526_ = lean_unbox(v___x_4522_);
v_res_4527_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(v_h_4518_, v_handler_4519_, v_extensions_4520_, v_connectionContext_4521_, v___x_5279__boxed_4526_, v___f_4523_, v_x_4524_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object* v_h_4528_, lean_object* v_responseBodyInstance_4529_, lean_object* v_handler_4530_, lean_object* v_config_4531_, lean_object* v_connectionContext_4532_, lean_object* v_events_4533_, lean_object* v___x_4534_, uint8_t v___x_4535_, lean_object* v___f_4536_, lean_object* v_____r_4537_){
_start:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v___x_4539_ = lean_unsigned_to_nat(0u);
v___x_4540_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_h_4528_, v_responseBodyInstance_4529_, v_handler_4530_, v_config_4531_, v_connectionContext_4532_, v_events_4533_, v___x_4534_);
v___x_4541_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4539_, v___x_4535_, v___x_4540_, v___f_4536_);
return v___x_4541_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object* v_h_4542_, lean_object* v_responseBodyInstance_4543_, lean_object* v_handler_4544_, lean_object* v_config_4545_, lean_object* v_connectionContext_4546_, lean_object* v_events_4547_, lean_object* v___x_4548_, lean_object* v___x_4549_, lean_object* v___f_4550_, lean_object* v_____r_4551_, lean_object* v___y_4552_){
_start:
{
uint8_t v___x_5318__boxed_4553_; lean_object* v_res_4554_; 
v___x_5318__boxed_4553_ = lean_unbox(v___x_4549_);
v_res_4554_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4542_, v_responseBodyInstance_4543_, v_handler_4544_, v_config_4545_, v_connectionContext_4546_, v_events_4547_, v___x_4548_, v___x_5318__boxed_4553_, v___f_4550_, v_____r_4551_);
return v_res_4554_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object* v___x_4555_, lean_object* v___f_4556_, lean_object* v_x_4557_){
_start:
{
if (lean_obj_tag(v_x_4557_) == 0)
{
lean_object* v_a_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4567_; 
lean_dec_ref(v___f_4556_);
lean_dec_ref(v___x_4555_);
v_a_4559_ = lean_ctor_get(v_x_4557_, 0);
v_isSharedCheck_4567_ = !lean_is_exclusive(v_x_4557_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4561_ = v_x_4557_;
v_isShared_4562_ = v_isSharedCheck_4567_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_a_4559_);
lean_dec(v_x_4557_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4567_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4564_; 
if (v_isShared_4562_ == 0)
{
v___x_4564_ = v___x_4561_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_a_4559_);
v___x_4564_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
lean_object* v___x_4565_; 
v___x_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4564_);
return v___x_4565_;
}
}
}
else
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4579_; 
v_a_4568_ = lean_ctor_get(v_x_4557_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v_x_4557_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4570_ = v_x_4557_;
v_isShared_4571_ = v_isSharedCheck_4579_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v_x_4557_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4579_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
if (lean_obj_tag(v_a_4568_) == 0)
{
lean_object* v___x_4572_; lean_object* v___x_4574_; 
lean_dec_ref(v___f_4556_);
v___x_4572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4572_, 0, v___x_4555_);
if (v_isShared_4571_ == 0)
{
lean_ctor_set(v___x_4570_, 0, v___x_4572_);
v___x_4574_ = v___x_4570_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v___x_4572_);
v___x_4574_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
lean_object* v___x_4575_; 
v___x_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4575_, 0, v___x_4574_);
return v___x_4575_;
}
}
else
{
lean_object* v_val_4577_; lean_object* v___x_4578_; 
lean_del_object(v___x_4570_);
lean_dec_ref(v___x_4555_);
v_val_4577_ = lean_ctor_get(v_a_4568_, 0);
lean_inc(v_val_4577_);
lean_dec_ref_known(v_a_4568_, 1);
v___x_4578_ = lean_apply_2(v___f_4556_, v_val_4577_, lean_box(0));
return v___x_4578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object* v___x_4580_, lean_object* v___f_4581_, lean_object* v_x_4582_, lean_object* v___y_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(v___x_4580_, v___f_4581_, v_x_4582_);
return v_res_4584_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(uint8_t v___x_4585_, lean_object* v_h_4586_, lean_object* v_responseBodyInstance_4587_, lean_object* v_handler_4588_, lean_object* v_config_4589_, lean_object* v___f_4590_, lean_object* v_inst_4591_, lean_object* v_socket_4592_, lean_object* v_connectionContext_4593_, lean_object* v_extensions_4594_, lean_object* v___f_4595_, lean_object* v___f_4596_, lean_object* v_x_4597_, lean_object* v_____s_4598_){
_start:
{
lean_object* v_machine_4600_; lean_object* v_reader_4601_; lean_object* v_requestStream_4602_; lean_object* v_keepAliveTimeout_4603_; lean_object* v_currentTimeout_4604_; lean_object* v_headerTimeout_4605_; lean_object* v_response_4606_; lean_object* v_respStream_4607_; uint8_t v_requiresData_4608_; lean_object* v_expectData_4609_; uint8_t v_handlerDispatched_4610_; lean_object* v_pendingHead_4611_; lean_object* v_writer_4612_; lean_object* v_state_4613_; uint8_t v___x_4614_; 
v_machine_4600_ = lean_ctor_get(v_____s_4598_, 0);
v_reader_4601_ = lean_ctor_get(v_machine_4600_, 0);
v_requestStream_4602_ = lean_ctor_get(v_____s_4598_, 1);
v_keepAliveTimeout_4603_ = lean_ctor_get(v_____s_4598_, 2);
v_currentTimeout_4604_ = lean_ctor_get(v_____s_4598_, 3);
v_headerTimeout_4605_ = lean_ctor_get(v_____s_4598_, 4);
v_response_4606_ = lean_ctor_get(v_____s_4598_, 5);
v_respStream_4607_ = lean_ctor_get(v_____s_4598_, 6);
v_requiresData_4608_ = lean_ctor_get_uint8(v_____s_4598_, sizeof(void*)*9);
v_expectData_4609_ = lean_ctor_get(v_____s_4598_, 7);
v_handlerDispatched_4610_ = lean_ctor_get_uint8(v_____s_4598_, sizeof(void*)*9 + 1);
v_pendingHead_4611_ = lean_ctor_get(v_____s_4598_, 8);
v_writer_4612_ = lean_ctor_get(v_machine_4600_, 1);
v_state_4613_ = lean_ctor_get(v_reader_4601_, 0);
v___x_4614_ = 0;
if (lean_obj_tag(v_state_4613_) == 6)
{
lean_object* v_state_4642_; 
v_state_4642_ = lean_ctor_get(v_writer_4612_, 2);
if (lean_obj_tag(v_state_4642_) == 7)
{
lean_object* v_outputData_4643_; lean_object* v_size_4644_; lean_object* v___x_4645_; uint8_t v___x_4646_; 
v_outputData_4643_ = lean_ctor_get(v_writer_4612_, 1);
v_size_4644_ = lean_ctor_get(v_outputData_4643_, 1);
v___x_4645_ = lean_unsigned_to_nat(0u);
v___x_4646_ = lean_nat_dec_eq(v_size_4644_, v___x_4645_);
if (v___x_4646_ == 0)
{
lean_inc(v_pendingHead_4611_);
lean_inc(v_expectData_4609_);
lean_inc(v_respStream_4607_);
lean_inc_ref(v_response_4606_);
lean_inc(v_headerTimeout_4605_);
lean_inc(v_currentTimeout_4604_);
lean_inc(v_keepAliveTimeout_4603_);
lean_inc_ref(v_requestStream_4602_);
lean_inc_ref(v_machine_4600_);
lean_dec_ref(v_____s_4598_);
goto v___jp_4615_;
}
else
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; 
lean_dec_ref(v___f_4596_);
lean_dec_ref(v___f_4595_);
lean_dec(v_extensions_4594_);
lean_dec_ref(v_connectionContext_4593_);
lean_dec(v_socket_4592_);
lean_dec_ref(v_inst_4591_);
lean_dec_ref(v___f_4590_);
lean_dec_ref(v_config_4589_);
lean_dec(v_handler_4588_);
lean_dec_ref(v_responseBodyInstance_4587_);
lean_dec_ref(v_h_4586_);
v___x_4647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4647_, 0, v_____s_4598_);
v___x_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
v___x_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4648_);
return v___x_4649_;
}
}
else
{
lean_inc(v_pendingHead_4611_);
lean_inc(v_expectData_4609_);
lean_inc(v_respStream_4607_);
lean_inc_ref(v_response_4606_);
lean_inc(v_headerTimeout_4605_);
lean_inc(v_currentTimeout_4604_);
lean_inc(v_keepAliveTimeout_4603_);
lean_inc_ref(v_requestStream_4602_);
lean_inc_ref(v_machine_4600_);
lean_dec_ref(v_____s_4598_);
goto v___jp_4615_;
}
}
else
{
lean_inc(v_pendingHead_4611_);
lean_inc(v_expectData_4609_);
lean_inc(v_respStream_4607_);
lean_inc_ref(v_response_4606_);
lean_inc(v_headerTimeout_4605_);
lean_inc(v_currentTimeout_4604_);
lean_inc(v_keepAliveTimeout_4603_);
lean_inc_ref(v_requestStream_4602_);
lean_inc_ref(v_machine_4600_);
lean_dec_ref(v_____s_4598_);
goto v___jp_4615_;
}
v___jp_4615_:
{
lean_object* v___x_4616_; lean_object* v_snd_4617_; lean_object* v_output_4618_; lean_object* v_fst_4619_; lean_object* v_events_4620_; lean_object* v_data_4621_; lean_object* v_size_4622_; uint8_t v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___f_4626_; lean_object* v___x_4627_; lean_object* v___f_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___f_4631_; lean_object* v___x_4632_; uint8_t v___x_4633_; 
v___x_4616_ = l_Std_Http_Protocol_H1_Machine_step(v___x_4614_, v_machine_4600_);
v_snd_4617_ = lean_ctor_get(v___x_4616_, 1);
lean_inc(v_snd_4617_);
v_output_4618_ = lean_ctor_get(v_snd_4617_, 1);
lean_inc_ref(v_output_4618_);
v_fst_4619_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_fst_4619_);
lean_dec_ref(v___x_4616_);
v_events_4620_ = lean_ctor_get(v_snd_4617_, 0);
lean_inc_ref_n(v_events_4620_, 2);
lean_dec(v_snd_4617_);
v_data_4621_ = lean_ctor_get(v_output_4618_, 0);
lean_inc_ref(v_data_4621_);
v_size_4622_ = lean_ctor_get(v_output_4618_, 1);
lean_inc(v_size_4622_);
lean_dec_ref(v_output_4618_);
v___x_4623_ = 1;
v___x_4624_ = lean_box(v___x_4585_);
v___x_4625_ = lean_box(v___x_4623_);
lean_inc_ref_n(v_connectionContext_4593_, 3);
lean_inc(v_socket_4592_);
lean_inc_ref(v_inst_4591_);
lean_inc_ref_n(v_config_4589_, 2);
lean_inc_n(v_handler_4588_, 3);
lean_inc_ref_n(v_responseBodyInstance_4587_, 2);
lean_inc_ref_n(v_h_4586_, 3);
v___f_4626_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed), 12, 10);
lean_closure_set(v___f_4626_, 0, v___x_4624_);
lean_closure_set(v___f_4626_, 1, v_h_4586_);
lean_closure_set(v___f_4626_, 2, v_responseBodyInstance_4587_);
lean_closure_set(v___f_4626_, 3, v_handler_4588_);
lean_closure_set(v___f_4626_, 4, v_config_4589_);
lean_closure_set(v___f_4626_, 5, v___f_4590_);
lean_closure_set(v___f_4626_, 6, v_inst_4591_);
lean_closure_set(v___f_4626_, 7, v_socket_4592_);
lean_closure_set(v___f_4626_, 8, v_connectionContext_4593_);
lean_closure_set(v___f_4626_, 9, v___x_4625_);
v___x_4627_ = lean_box(v___x_4585_);
v___f_4628_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed), 8, 6);
lean_closure_set(v___f_4628_, 0, v_h_4586_);
lean_closure_set(v___f_4628_, 1, v_handler_4588_);
lean_closure_set(v___f_4628_, 2, v_extensions_4594_);
lean_closure_set(v___f_4628_, 3, v_connectionContext_4593_);
lean_closure_set(v___f_4628_, 4, v___x_4627_);
lean_closure_set(v___f_4628_, 5, v___f_4626_);
v___x_4629_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4629_, 0, v_fst_4619_);
lean_ctor_set(v___x_4629_, 1, v_requestStream_4602_);
lean_ctor_set(v___x_4629_, 2, v_keepAliveTimeout_4603_);
lean_ctor_set(v___x_4629_, 3, v_currentTimeout_4604_);
lean_ctor_set(v___x_4629_, 4, v_headerTimeout_4605_);
lean_ctor_set(v___x_4629_, 5, v_response_4606_);
lean_ctor_set(v___x_4629_, 6, v_respStream_4607_);
lean_ctor_set(v___x_4629_, 7, v_expectData_4609_);
lean_ctor_set(v___x_4629_, 8, v_pendingHead_4611_);
lean_ctor_set_uint8(v___x_4629_, sizeof(void*)*9, v_requiresData_4608_);
lean_ctor_set_uint8(v___x_4629_, sizeof(void*)*9 + 1, v_handlerDispatched_4610_);
v___x_4630_ = lean_box(v___x_4585_);
lean_inc_ref(v___f_4628_);
lean_inc_ref(v___x_4629_);
v___f_4631_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed), 11, 9);
lean_closure_set(v___f_4631_, 0, v_h_4586_);
lean_closure_set(v___f_4631_, 1, v_responseBodyInstance_4587_);
lean_closure_set(v___f_4631_, 2, v_handler_4588_);
lean_closure_set(v___f_4631_, 3, v_config_4589_);
lean_closure_set(v___f_4631_, 4, v_connectionContext_4593_);
lean_closure_set(v___f_4631_, 5, v_events_4620_);
lean_closure_set(v___f_4631_, 6, v___x_4629_);
lean_closure_set(v___f_4631_, 7, v___x_4630_);
lean_closure_set(v___f_4631_, 8, v___f_4628_);
v___x_4632_ = lean_unsigned_to_nat(0u);
v___x_4633_ = lean_nat_dec_lt(v___x_4632_, v_size_4622_);
lean_dec(v_size_4622_);
if (v___x_4633_ == 0)
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
lean_dec_ref(v___f_4631_);
lean_dec_ref(v_data_4621_);
lean_dec_ref(v___f_4596_);
lean_dec_ref(v___f_4595_);
lean_dec(v_socket_4592_);
lean_dec_ref(v_inst_4591_);
v___x_4634_ = lean_box(0);
v___x_4635_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4586_, v_responseBodyInstance_4587_, v_handler_4588_, v_config_4589_, v_connectionContext_4593_, v_events_4620_, v___x_4629_, v___x_4585_, v___f_4628_, v___x_4634_);
return v___x_4635_;
}
else
{
lean_object* v_sendAll_4636_; lean_object* v___f_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; 
lean_dec_ref(v___f_4628_);
lean_dec_ref(v_events_4620_);
lean_dec_ref(v_connectionContext_4593_);
lean_dec_ref(v_config_4589_);
lean_dec(v_handler_4588_);
lean_dec_ref(v_responseBodyInstance_4587_);
lean_dec_ref(v_h_4586_);
v_sendAll_4636_ = lean_ctor_get(v_inst_4591_, 1);
lean_inc_ref(v_sendAll_4636_);
lean_dec_ref(v_inst_4591_);
v___f_4637_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 4, 2);
lean_closure_set(v___f_4637_, 0, v___x_4629_);
lean_closure_set(v___f_4637_, 1, v___f_4631_);
v___x_4638_ = lean_apply_3(v_sendAll_4636_, v_socket_4592_, v_data_4621_, lean_box(0));
v___x_4639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4632_, v___x_4585_, v___x_4638_, v___f_4595_);
v___x_4640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4632_, v___x_4585_, v___x_4639_, v___f_4596_);
v___x_4641_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4632_, v___x_4585_, v___x_4640_, v___f_4637_);
return v___x_4641_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object* v___x_4650_, lean_object* v_h_4651_, lean_object* v_responseBodyInstance_4652_, lean_object* v_handler_4653_, lean_object* v_config_4654_, lean_object* v___f_4655_, lean_object* v_inst_4656_, lean_object* v_socket_4657_, lean_object* v_connectionContext_4658_, lean_object* v_extensions_4659_, lean_object* v___f_4660_, lean_object* v___f_4661_, lean_object* v_x_4662_, lean_object* v_____s_4663_, lean_object* v___y_4664_){
_start:
{
uint8_t v___x_5392__boxed_4665_; lean_object* v_res_4666_; 
v___x_5392__boxed_4665_ = lean_unbox(v___x_4650_);
v_res_4666_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(v___x_5392__boxed_4665_, v_h_4651_, v_responseBodyInstance_4652_, v_handler_4653_, v_config_4654_, v___f_4655_, v_inst_4656_, v_socket_4657_, v_connectionContext_4658_, v_extensions_4659_, v___f_4660_, v___f_4661_, v_x_4662_, v_____s_4663_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object* v_a_4667_, lean_object* v_x_4668_){
_start:
{
if (lean_obj_tag(v_x_4668_) == 0)
{
lean_object* v_a_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4678_; 
v_a_4670_ = lean_ctor_get(v_x_4668_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v_x_4668_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4672_ = v_x_4668_;
v_isShared_4673_ = v_isSharedCheck_4678_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_a_4670_);
lean_dec(v_x_4668_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4678_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4675_; 
if (v_isShared_4673_ == 0)
{
v___x_4675_ = v___x_4672_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_a_4670_);
v___x_4675_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
lean_object* v___x_4676_; 
v___x_4676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4676_, 0, v___x_4675_);
return v___x_4676_;
}
}
}
else
{
lean_object* v___x_4679_; lean_object* v___x_4680_; 
lean_dec_ref_known(v_x_4668_, 1);
v___x_4679_ = l_IO_Promise_result_x21___redArg(v_a_4667_);
v___x_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4679_);
return v___x_4680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object* v_a_4681_, lean_object* v_x_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(v_a_4681_, v_x_4682_);
lean_dec(v_a_4681_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object* v___f_4685_, lean_object* v___x_4686_, lean_object* v___x_4687_, uint8_t v___x_4688_, lean_object* v_x_4689_){
_start:
{
if (lean_obj_tag(v_x_4689_) == 0)
{
lean_object* v_a_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4699_; 
lean_dec_ref(v___x_4687_);
lean_dec(v___x_4686_);
lean_dec_ref(v___f_4685_);
v_a_4691_ = lean_ctor_get(v_x_4689_, 0);
v_isSharedCheck_4699_ = !lean_is_exclusive(v_x_4689_);
if (v_isSharedCheck_4699_ == 0)
{
v___x_4693_ = v_x_4689_;
v_isShared_4694_ = v_isSharedCheck_4699_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_a_4691_);
lean_dec(v_x_4689_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4699_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4698_; 
v_reuseFailAlloc_4698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4698_, 0, v_a_4691_);
v___x_4696_ = v_reuseFailAlloc_4698_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
lean_object* v___x_4697_; 
v___x_4697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4697_, 0, v___x_4696_);
return v___x_4697_;
}
}
}
else
{
lean_object* v_a_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4711_; 
v_a_4700_ = lean_ctor_get(v_x_4689_, 0);
v_isSharedCheck_4711_ = !lean_is_exclusive(v_x_4689_);
if (v_isSharedCheck_4711_ == 0)
{
v___x_4702_ = v_x_4689_;
v_isShared_4703_ = v_isSharedCheck_4711_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_a_4700_);
lean_dec(v_x_4689_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4711_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___f_4704_; lean_object* v___x_4705_; lean_object* v___x_4707_; 
lean_inc(v_a_4700_);
v___f_4704_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_4704_, 0, v_a_4700_);
lean_inc(v___x_4686_);
v___x_4705_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_4685_, v___x_4686_, v_a_4700_, v___x_4687_);
if (v_isShared_4703_ == 0)
{
lean_ctor_set(v___x_4702_, 0, v___x_4705_);
v___x_4707_ = v___x_4702_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4710_; 
v_reuseFailAlloc_4710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4710_, 0, v___x_4705_);
v___x_4707_ = v_reuseFailAlloc_4710_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4708_, 0, v___x_4707_);
v___x_4709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4686_, v___x_4688_, v___x_4708_, v___f_4704_);
return v___x_4709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object* v___f_4712_, lean_object* v___x_4713_, lean_object* v___x_4714_, lean_object* v___x_4715_, lean_object* v_x_4716_, lean_object* v___y_4717_){
_start:
{
uint8_t v___x_5507__boxed_4718_; lean_object* v_res_4719_; 
v___x_5507__boxed_4718_ = lean_unbox(v___x_4715_);
v_res_4719_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(v___f_4712_, v___x_4713_, v___x_4714_, v___x_5507__boxed_4718_, v_x_4716_);
return v_res_4719_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object* v_config_4720_, lean_object* v_h_4721_, lean_object* v_responseBodyInstance_4722_, lean_object* v_handler_4723_, lean_object* v___f_4724_, lean_object* v_inst_4725_, lean_object* v_socket_4726_, lean_object* v_connectionContext_4727_, lean_object* v_extensions_4728_, lean_object* v___f_4729_, lean_object* v___f_4730_, lean_object* v_machine_4731_, lean_object* v_a_4732_, lean_object* v___x_4733_, lean_object* v___f_4734_, lean_object* v_x_4735_){
_start:
{
if (lean_obj_tag(v_x_4735_) == 0)
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4745_; 
lean_dec_ref(v___f_4734_);
lean_dec(v___x_4733_);
lean_dec_ref(v_a_4732_);
lean_dec_ref(v_machine_4731_);
lean_dec_ref(v___f_4730_);
lean_dec_ref(v___f_4729_);
lean_dec(v_extensions_4728_);
lean_dec_ref(v_connectionContext_4727_);
lean_dec(v_socket_4726_);
lean_dec_ref(v_inst_4725_);
lean_dec_ref(v___f_4724_);
lean_dec(v_handler_4723_);
lean_dec_ref(v_responseBodyInstance_4722_);
lean_dec_ref(v_h_4721_);
lean_dec_ref(v_config_4720_);
v_a_4737_ = lean_ctor_get(v_x_4735_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v_x_4735_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4739_ = v_x_4735_;
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v_x_4735_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v_a_4737_);
v___x_4742_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
lean_object* v___x_4743_; 
v___x_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4742_);
return v___x_4743_;
}
}
}
else
{
lean_object* v_a_4746_; lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4767_; 
v_a_4746_ = lean_ctor_get(v_x_4735_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v_x_4735_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4748_ = v_x_4735_;
v_isShared_4749_ = v_isSharedCheck_4767_;
goto v_resetjp_4747_;
}
else
{
lean_inc(v_a_4746_);
lean_dec(v_x_4735_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4767_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
lean_object* v_keepAliveTimeout_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; lean_object* v___x_4754_; lean_object* v___f_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___f_4759_; lean_object* v___x_4760_; lean_object* v___x_4762_; 
v_keepAliveTimeout_4750_ = lean_ctor_get(v_config_4720_, 5);
lean_inc_n(v_keepAliveTimeout_4750_, 2);
v___x_4751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4751_, 0, v_keepAliveTimeout_4750_);
v___x_4752_ = lean_box(0);
v___x_4753_ = 0;
v___x_4754_ = lean_box(v___x_4753_);
v___f_4755_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 15, 12);
lean_closure_set(v___f_4755_, 0, v___x_4754_);
lean_closure_set(v___f_4755_, 1, v_h_4721_);
lean_closure_set(v___f_4755_, 2, v_responseBodyInstance_4722_);
lean_closure_set(v___f_4755_, 3, v_handler_4723_);
lean_closure_set(v___f_4755_, 4, v_config_4720_);
lean_closure_set(v___f_4755_, 5, v___f_4724_);
lean_closure_set(v___f_4755_, 6, v_inst_4725_);
lean_closure_set(v___f_4755_, 7, v_socket_4726_);
lean_closure_set(v___f_4755_, 8, v_connectionContext_4727_);
lean_closure_set(v___f_4755_, 9, v_extensions_4728_);
lean_closure_set(v___f_4755_, 10, v___f_4729_);
lean_closure_set(v___f_4755_, 11, v___f_4730_);
v___x_4756_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4756_, 0, v_machine_4731_);
lean_ctor_set(v___x_4756_, 1, v_a_4732_);
lean_ctor_set(v___x_4756_, 2, v___x_4751_);
lean_ctor_set(v___x_4756_, 3, v_keepAliveTimeout_4750_);
lean_ctor_set(v___x_4756_, 4, v___x_4752_);
lean_ctor_set(v___x_4756_, 5, v_a_4746_);
lean_ctor_set(v___x_4756_, 6, v___x_4752_);
lean_ctor_set(v___x_4756_, 7, v___x_4733_);
lean_ctor_set(v___x_4756_, 8, v___x_4752_);
lean_ctor_set_uint8(v___x_4756_, sizeof(void*)*9, v___x_4753_);
lean_ctor_set_uint8(v___x_4756_, sizeof(void*)*9 + 1, v___x_4753_);
v___x_4757_ = lean_unsigned_to_nat(0u);
v___x_4758_ = lean_box(v___x_4753_);
v___f_4759_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed), 6, 4);
lean_closure_set(v___f_4759_, 0, v___f_4755_);
lean_closure_set(v___f_4759_, 1, v___x_4757_);
lean_closure_set(v___f_4759_, 2, v___x_4756_);
lean_closure_set(v___f_4759_, 3, v___x_4758_);
v___x_4760_ = lean_io_promise_new();
if (v_isShared_4749_ == 0)
{
lean_ctor_set(v___x_4748_, 0, v___x_4760_);
v___x_4762_ = v___x_4748_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v___x_4760_);
v___x_4762_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; 
v___x_4763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4762_);
v___x_4764_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4757_, v___x_4753_, v___x_4763_, v___f_4759_);
v___x_4765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4757_, v___x_4753_, v___x_4764_, v___f_4734_);
return v___x_4765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_config_4768_ = _args[0];
lean_object* v_h_4769_ = _args[1];
lean_object* v_responseBodyInstance_4770_ = _args[2];
lean_object* v_handler_4771_ = _args[3];
lean_object* v___f_4772_ = _args[4];
lean_object* v_inst_4773_ = _args[5];
lean_object* v_socket_4774_ = _args[6];
lean_object* v_connectionContext_4775_ = _args[7];
lean_object* v_extensions_4776_ = _args[8];
lean_object* v___f_4777_ = _args[9];
lean_object* v___f_4778_ = _args[10];
lean_object* v_machine_4779_ = _args[11];
lean_object* v_a_4780_ = _args[12];
lean_object* v___x_4781_ = _args[13];
lean_object* v___f_4782_ = _args[14];
lean_object* v_x_4783_ = _args[15];
lean_object* v___y_4784_ = _args[16];
_start:
{
lean_object* v_res_4785_; 
v_res_4785_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(v_config_4768_, v_h_4769_, v_responseBodyInstance_4770_, v_handler_4771_, v___f_4772_, v_inst_4773_, v_socket_4774_, v_connectionContext_4775_, v_extensions_4776_, v___f_4777_, v___f_4778_, v_machine_4779_, v_a_4780_, v___x_4781_, v___f_4782_, v_x_4783_);
return v_res_4785_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object* v_config_4786_, lean_object* v_h_4787_, lean_object* v_responseBodyInstance_4788_, lean_object* v_handler_4789_, lean_object* v___f_4790_, lean_object* v_inst_4791_, lean_object* v_socket_4792_, lean_object* v_connectionContext_4793_, lean_object* v_extensions_4794_, lean_object* v___f_4795_, lean_object* v___f_4796_, lean_object* v_machine_4797_, lean_object* v___f_4798_, lean_object* v_x_4799_){
_start:
{
if (lean_obj_tag(v_x_4799_) == 0)
{
lean_object* v_a_4801_; lean_object* v___x_4803_; uint8_t v_isShared_4804_; uint8_t v_isSharedCheck_4809_; 
lean_dec_ref(v___f_4798_);
lean_dec_ref(v_machine_4797_);
lean_dec_ref(v___f_4796_);
lean_dec_ref(v___f_4795_);
lean_dec(v_extensions_4794_);
lean_dec_ref(v_connectionContext_4793_);
lean_dec(v_socket_4792_);
lean_dec_ref(v_inst_4791_);
lean_dec_ref(v___f_4790_);
lean_dec(v_handler_4789_);
lean_dec_ref(v_responseBodyInstance_4788_);
lean_dec_ref(v_h_4787_);
lean_dec_ref(v_config_4786_);
v_a_4801_ = lean_ctor_get(v_x_4799_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v_x_4799_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4803_ = v_x_4799_;
v_isShared_4804_ = v_isSharedCheck_4809_;
goto v_resetjp_4802_;
}
else
{
lean_inc(v_a_4801_);
lean_dec(v_x_4799_);
v___x_4803_ = lean_box(0);
v_isShared_4804_ = v_isSharedCheck_4809_;
goto v_resetjp_4802_;
}
v_resetjp_4802_:
{
lean_object* v___x_4806_; 
if (v_isShared_4804_ == 0)
{
v___x_4806_ = v___x_4803_;
goto v_reusejp_4805_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_a_4801_);
v___x_4806_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4805_;
}
v_reusejp_4805_:
{
lean_object* v___x_4807_; 
v___x_4807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
return v___x_4807_;
}
}
}
else
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4824_; 
v_a_4810_ = lean_ctor_get(v_x_4799_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v_x_4799_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4812_ = v_x_4799_;
v_isShared_4813_ = v_isSharedCheck_4824_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v_x_4799_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4824_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4814_; lean_object* v___f_4815_; lean_object* v___x_4816_; uint8_t v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4820_; 
v___x_4814_ = lean_box(0);
v___f_4815_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed), 17, 15);
lean_closure_set(v___f_4815_, 0, v_config_4786_);
lean_closure_set(v___f_4815_, 1, v_h_4787_);
lean_closure_set(v___f_4815_, 2, v_responseBodyInstance_4788_);
lean_closure_set(v___f_4815_, 3, v_handler_4789_);
lean_closure_set(v___f_4815_, 4, v___f_4790_);
lean_closure_set(v___f_4815_, 5, v_inst_4791_);
lean_closure_set(v___f_4815_, 6, v_socket_4792_);
lean_closure_set(v___f_4815_, 7, v_connectionContext_4793_);
lean_closure_set(v___f_4815_, 8, v_extensions_4794_);
lean_closure_set(v___f_4815_, 9, v___f_4795_);
lean_closure_set(v___f_4815_, 10, v___f_4796_);
lean_closure_set(v___f_4815_, 11, v_machine_4797_);
lean_closure_set(v___f_4815_, 12, v_a_4810_);
lean_closure_set(v___f_4815_, 13, v___x_4814_);
lean_closure_set(v___f_4815_, 14, v___f_4798_);
v___x_4816_ = lean_unsigned_to_nat(0u);
v___x_4817_ = 0;
v___x_4818_ = l_Std_CloseableChannel_new___redArg(v___x_4814_);
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 0, v___x_4818_);
v___x_4820_ = v___x_4812_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v___x_4818_);
v___x_4820_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4821_, 0, v___x_4820_);
v___x_4822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4816_, v___x_4817_, v___x_4821_, v___f_4815_);
return v___x_4822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object* v_config_4825_, lean_object* v_h_4826_, lean_object* v_responseBodyInstance_4827_, lean_object* v_handler_4828_, lean_object* v___f_4829_, lean_object* v_inst_4830_, lean_object* v_socket_4831_, lean_object* v_connectionContext_4832_, lean_object* v_extensions_4833_, lean_object* v___f_4834_, lean_object* v___f_4835_, lean_object* v_machine_4836_, lean_object* v___f_4837_, lean_object* v_x_4838_, lean_object* v___y_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(v_config_4825_, v_h_4826_, v_responseBodyInstance_4827_, v_handler_4828_, v___f_4829_, v_inst_4830_, v_socket_4831_, v_connectionContext_4832_, v_extensions_4833_, v___f_4834_, v___f_4835_, v_machine_4836_, v___f_4837_, v_x_4838_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object* v_inst_4844_, lean_object* v_h_4845_, lean_object* v_connection_4846_, lean_object* v_config_4847_, lean_object* v_connectionContext_4848_, lean_object* v_handler_4849_){
_start:
{
lean_object* v_responseBodyInstance_4851_; lean_object* v_onFailure_4852_; lean_object* v_socket_4853_; lean_object* v_machine_4854_; lean_object* v_extensions_4855_; lean_object* v___f_4856_; lean_object* v___f_4857_; lean_object* v___f_4858_; lean_object* v___f_4859_; lean_object* v___f_4860_; lean_object* v___f_4861_; lean_object* v___f_4862_; lean_object* v___f_4863_; lean_object* v___f_4864_; lean_object* v___x_4865_; uint8_t v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v_responseBodyInstance_4851_ = lean_ctor_get(v_h_4845_, 0);
lean_inc_ref_n(v_responseBodyInstance_4851_, 2);
v_onFailure_4852_ = lean_ctor_get(v_h_4845_, 2);
v_socket_4853_ = lean_ctor_get(v_connection_4846_, 0);
lean_inc_n(v_socket_4853_, 2);
v_machine_4854_ = lean_ctor_get(v_connection_4846_, 1);
lean_inc_ref(v_machine_4854_);
v_extensions_4855_ = lean_ctor_get(v_connection_4846_, 2);
lean_inc(v_extensions_4855_);
lean_dec_ref(v_connection_4846_);
v___f_4856_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_4857_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0));
v___f_4858_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1));
lean_inc(v_handler_4849_);
lean_inc_ref(v_onFailure_4852_);
v___f_4859_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4859_, 0, v_onFailure_4852_);
lean_closure_set(v___f_4859_, 1, v_handler_4849_);
lean_closure_set(v___f_4859_, 2, v___f_4858_);
v___f_4860_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2));
lean_inc_ref(v_inst_4844_);
v___f_4861_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4861_, 0, v_inst_4844_);
lean_closure_set(v___f_4861_, 1, v_socket_4853_);
lean_inc_ref(v___f_4861_);
v___f_4862_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4862_, 0, v___f_4861_);
v___f_4863_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4863_, 0, v_responseBodyInstance_4851_);
lean_closure_set(v___f_4863_, 1, v___f_4862_);
lean_closure_set(v___f_4863_, 2, v___f_4861_);
lean_closure_set(v___f_4863_, 3, v___f_4856_);
v___f_4864_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed), 15, 13);
lean_closure_set(v___f_4864_, 0, v_config_4847_);
lean_closure_set(v___f_4864_, 1, v_h_4845_);
lean_closure_set(v___f_4864_, 2, v_responseBodyInstance_4851_);
lean_closure_set(v___f_4864_, 3, v_handler_4849_);
lean_closure_set(v___f_4864_, 4, v___f_4860_);
lean_closure_set(v___f_4864_, 5, v_inst_4844_);
lean_closure_set(v___f_4864_, 6, v_socket_4853_);
lean_closure_set(v___f_4864_, 7, v_connectionContext_4848_);
lean_closure_set(v___f_4864_, 8, v_extensions_4855_);
lean_closure_set(v___f_4864_, 9, v___f_4857_);
lean_closure_set(v___f_4864_, 10, v___f_4859_);
lean_closure_set(v___f_4864_, 11, v_machine_4854_);
lean_closure_set(v___f_4864_, 12, v___f_4863_);
v___x_4865_ = lean_unsigned_to_nat(0u);
v___x_4866_ = 0;
v___x_4867_ = l_Std_Http_Body_mkStream();
v___x_4868_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4865_, v___x_4866_, v___x_4867_, v___f_4864_);
return v___x_4868_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object* v_inst_4869_, lean_object* v_h_4870_, lean_object* v_connection_4871_, lean_object* v_config_4872_, lean_object* v_connectionContext_4873_, lean_object* v_handler_4874_, lean_object* v___y_4875_){
_start:
{
lean_object* v_res_4876_; 
v_res_4876_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4869_, v_h_4870_, v_connection_4871_, v_config_4872_, v_connectionContext_4873_, v_handler_4874_);
return v_res_4876_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object* v_00_u03b1_4877_, lean_object* v_00_u03c3_4878_, lean_object* v_inst_4879_, lean_object* v_h_4880_, lean_object* v_connection_4881_, lean_object* v_config_4882_, lean_object* v_connectionContext_4883_, lean_object* v_handler_4884_){
_start:
{
lean_object* v___x_4886_; 
v___x_4886_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4879_, v_h_4880_, v_connection_4881_, v_config_4882_, v_connectionContext_4883_, v_handler_4884_);
return v___x_4886_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object* v_00_u03b1_4887_, lean_object* v_00_u03c3_4888_, lean_object* v_inst_4889_, lean_object* v_h_4890_, lean_object* v_connection_4891_, lean_object* v_config_4892_, lean_object* v_connectionContext_4893_, lean_object* v_handler_4894_, lean_object* v___y_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(v_00_u03b1_4887_, v_00_u03c3_4888_, v_inst_4889_, v_h_4890_, v_connection_4891_, v_config_4892_, v_connectionContext_4893_, v_handler_4894_);
return v_res_4896_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_4897_; lean_object* v___x_4898_; 
v___x_4897_ = 0;
v___x_4898_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4897_);
return v___x_4898_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4899_ = lean_unsigned_to_nat(4096u);
v___x_4900_ = lean_mk_empty_byte_array(v___x_4899_);
return v___x_4900_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4901_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1);
v___x_4902_ = l_ByteArray_mkIterator(v___x_4901_);
return v___x_4902_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3(void){
_start:
{
uint8_t v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; 
v___x_4903_ = 0;
v___x_4904_ = lean_unsigned_to_nat(0u);
v___x_4905_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0);
v___x_4906_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2);
v___x_4907_ = lean_box(0);
v___x_4908_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_4908_, 0, v___x_4907_);
lean_ctor_set(v___x_4908_, 1, v___x_4906_);
lean_ctor_set(v___x_4908_, 2, v___x_4905_);
lean_ctor_set(v___x_4908_, 3, v___x_4904_);
lean_ctor_set(v___x_4908_, 4, v___x_4904_);
lean_ctor_set(v___x_4908_, 5, v___x_4904_);
lean_ctor_set_uint8(v___x_4908_, sizeof(void*)*6, v___x_4903_);
return v___x_4908_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7(void){
_start:
{
uint8_t v___x_4916_; lean_object* v___x_4917_; 
v___x_4916_ = 1;
v___x_4917_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4916_);
return v___x_4917_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_4918_; uint8_t v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; 
v___x_4918_ = lean_unsigned_to_nat(0u);
v___x_4919_ = 0;
v___x_4920_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7);
v___x_4921_ = lean_box(0);
v___x_4922_ = lean_box(0);
v___x_4923_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6));
v___x_4924_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4));
v___x_4925_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4925_, 0, v___x_4924_);
lean_ctor_set(v___x_4925_, 1, v___x_4923_);
lean_ctor_set(v___x_4925_, 2, v___x_4922_);
lean_ctor_set(v___x_4925_, 3, v___x_4921_);
lean_ctor_set(v___x_4925_, 4, v___x_4920_);
lean_ctor_set(v___x_4925_, 5, v___x_4918_);
lean_ctor_set_uint8(v___x_4925_, sizeof(void*)*6, v___x_4919_);
lean_ctor_set_uint8(v___x_4925_, sizeof(void*)*6 + 1, v___x_4919_);
lean_ctor_set_uint8(v___x_4925_, sizeof(void*)*6 + 2, v___x_4919_);
return v___x_4925_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object* v_config_4926_, lean_object* v_client_4927_, lean_object* v_extensions_4928_, lean_object* v_inst_4929_, lean_object* v_inst_4930_, lean_object* v_handler_4931_, lean_object* v_x_4932_){
_start:
{
if (lean_obj_tag(v_x_4932_) == 0)
{
lean_object* v_a_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4942_; 
lean_dec(v_handler_4931_);
lean_dec_ref(v_inst_4930_);
lean_dec_ref(v_inst_4929_);
lean_dec(v_extensions_4928_);
lean_dec(v_client_4927_);
lean_dec_ref(v_config_4926_);
v_a_4934_ = lean_ctor_get(v_x_4932_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v_x_4932_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4936_ = v_x_4932_;
v_isShared_4937_ = v_isSharedCheck_4942_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_a_4934_);
lean_dec(v_x_4932_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4942_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v_a_4934_);
v___x_4939_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
lean_object* v___x_4940_; 
v___x_4940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4939_);
return v___x_4940_;
}
}
}
else
{
lean_object* v_a_4943_; uint8_t v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; uint8_t v_enableKeepAlive_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; 
v_a_4943_ = lean_ctor_get(v_x_4932_, 0);
lean_inc(v_a_4943_);
lean_dec_ref_known(v_x_4932_, 1);
v___x_4944_ = 0;
v___x_4945_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3);
v___x_4946_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5));
v___x_4947_ = lean_box(0);
v___x_4948_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8);
v___x_4949_ = l_Std_Http_Config_toH1Config(v_config_4926_);
v_enableKeepAlive_4950_ = lean_ctor_get_uint8(v___x_4949_, sizeof(void*)*18);
v___x_4951_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4951_, 0, v___x_4945_);
lean_ctor_set(v___x_4951_, 1, v___x_4948_);
lean_ctor_set(v___x_4951_, 2, v___x_4949_);
lean_ctor_set(v___x_4951_, 3, v___x_4946_);
lean_ctor_set(v___x_4951_, 4, v___x_4947_);
lean_ctor_set(v___x_4951_, 5, v___x_4947_);
lean_ctor_set_uint8(v___x_4951_, sizeof(void*)*6, v_enableKeepAlive_4950_);
lean_ctor_set_uint8(v___x_4951_, sizeof(void*)*6 + 1, v___x_4944_);
lean_ctor_set_uint8(v___x_4951_, sizeof(void*)*6 + 2, v___x_4944_);
v___x_4952_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4952_, 0, v_client_4927_);
lean_ctor_set(v___x_4952_, 1, v___x_4951_);
lean_ctor_set(v___x_4952_, 2, v_extensions_4928_);
v___x_4953_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4929_, v_inst_4930_, v___x_4952_, v_config_4926_, v_a_4943_, v_handler_4931_);
return v___x_4953_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object* v_config_4954_, lean_object* v_client_4955_, lean_object* v_extensions_4956_, lean_object* v_inst_4957_, lean_object* v_inst_4958_, lean_object* v_handler_4959_, lean_object* v_x_4960_, lean_object* v___y_4961_){
_start:
{
lean_object* v_res_4962_; 
v_res_4962_ = l_Std_Http_Server_serveConnection___redArg___lam__0(v_config_4954_, v_client_4955_, v_extensions_4956_, v_inst_4957_, v_inst_4958_, v_handler_4959_, v_x_4960_);
return v_res_4962_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object* v_inst_4963_, lean_object* v_inst_4964_, lean_object* v_client_4965_, lean_object* v_handler_4966_, lean_object* v_config_4967_, lean_object* v_extensions_4968_, lean_object* v___y_4969_){
_start:
{
lean_object* v___f_4971_; lean_object* v___x_4972_; uint8_t v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; 
v___f_4971_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_4971_, 0, v_config_4967_);
lean_closure_set(v___f_4971_, 1, v_client_4965_);
lean_closure_set(v___f_4971_, 2, v_extensions_4968_);
lean_closure_set(v___f_4971_, 3, v_inst_4963_);
lean_closure_set(v___f_4971_, 4, v_inst_4964_);
lean_closure_set(v___f_4971_, 5, v_handler_4966_);
v___x_4972_ = lean_unsigned_to_nat(0u);
v___x_4973_ = 0;
lean_inc_ref(v___y_4969_);
v___x_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___y_4969_);
v___x_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4975_, 0, v___x_4974_);
v___x_4976_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4972_, v___x_4973_, v___x_4975_, v___f_4971_);
return v___x_4976_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object* v_inst_4977_, lean_object* v_inst_4978_, lean_object* v_client_4979_, lean_object* v_handler_4980_, lean_object* v_config_4981_, lean_object* v_extensions_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_){
_start:
{
lean_object* v_res_4985_; 
v_res_4985_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4977_, v_inst_4978_, v_client_4979_, v_handler_4980_, v_config_4981_, v_extensions_4982_, v___y_4983_);
lean_dec_ref(v___y_4983_);
return v_res_4985_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object* v_t_4986_, lean_object* v_00_u03c3_4987_, lean_object* v_inst_4988_, lean_object* v_inst_4989_, lean_object* v_client_4990_, lean_object* v_handler_4991_, lean_object* v_config_4992_, lean_object* v_extensions_4993_, lean_object* v___y_4994_){
_start:
{
lean_object* v___x_4996_; 
v___x_4996_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4988_, v_inst_4989_, v_client_4990_, v_handler_4991_, v_config_4992_, v_extensions_4993_, v___y_4994_);
return v___x_4996_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object* v_t_4997_, lean_object* v_00_u03c3_4998_, lean_object* v_inst_4999_, lean_object* v_inst_5000_, lean_object* v_client_5001_, lean_object* v_handler_5002_, lean_object* v_config_5003_, lean_object* v_extensions_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_){
_start:
{
lean_object* v_res_5007_; 
v_res_5007_ = l_Std_Http_Server_serveConnection(v_t_4997_, v_00_u03c3_4998_, v_inst_4999_, v_inst_5000_, v_client_5001_, v_handler_5002_, v_config_5003_, v_extensions_5004_, v___y_5005_);
lean_dec_ref(v___y_5005_);
return v_res_5007_;
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
