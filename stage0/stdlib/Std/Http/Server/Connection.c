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
uint8_t v___y_1384__boxed_561_; lean_object* v_res_562_; 
v___y_1384__boxed_561_ = lean_unbox(v___y_559_);
v_res_562_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(v___y_1384__boxed_561_);
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
uint8_t v___x_1428__boxed_590_; lean_object* v_res_591_; 
v___x_1428__boxed_590_ = lean_unbox(v___x_587_);
v_res_591_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(v___x_1428__boxed_590_, v_x_588_);
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
uint8_t v___x_1443__boxed_636_; uint8_t v___x_1448__boxed_637_; lean_object* v_res_638_; 
v___x_1443__boxed_636_ = lean_unbox(v___x_627_);
v___x_1448__boxed_637_ = lean_unbox(v___x_632_);
v_res_638_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(v_connectionContext_626_, v___x_1443__boxed_636_, v_a_628_, v___f_629_, v___f_630_, v___x_631_, v___x_1448__boxed_637_, v___f_633_, v_x_634_);
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
uint8_t v___x_1517__boxed_663_; lean_object* v_res_664_; 
v___x_1517__boxed_663_ = lean_unbox(v___x_659_);
v_res_664_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(v_config_657_, v___x_658_, v___x_1517__boxed_663_, v___f_660_, v_x_661_);
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
uint8_t v___x_1557__boxed_715_; lean_object* v_res_716_; 
v___x_1557__boxed_715_ = lean_unbox(v___x_706_);
v_res_716_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(v_connectionContext_705_, v___x_1557__boxed_715_, v_a_707_, v___f_708_, v___x_709_, v___f_710_, v_config_711_, v___f_712_, v_x_713_);
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
uint8_t v___x_1640__boxed_770_; lean_object* v_res_771_; 
v___x_1640__boxed_770_ = lean_unbox(v___x_763_);
v_res_771_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(v_inst_759_, v_handler_760_, v_head_761_, v_connectionContext_762_, v___x_1640__boxed_770_, v___f_764_, v___f_765_, v_config_766_, v___f_767_, v_x_768_);
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
lean_object* v_a_1329_; lean_object* v___y_1331_; uint8_t v___y_1332_; uint8_t v___y_1333_; uint8_t v___y_1334_; uint8_t v___y_1335_; uint8_t v___y_1336_; lean_object* v_writer_1344_; lean_object* v_reader_1345_; lean_object* v_config_1346_; lean_object* v_events_1347_; lean_object* v_error_1348_; lean_object* v_instant_1349_; uint8_t v_keepAlive_1350_; uint8_t v_forcedFlush_1351_; uint8_t v_pullBodyStalled_1352_; lean_object* v_userData_1353_; lean_object* v_outputData_1354_; lean_object* v_state_1355_; lean_object* v_knownSize_1356_; lean_object* v_messageHead_1357_; uint8_t v_sentMessage_1358_; uint8_t v_userClosedBody_1359_; uint8_t v_omitBody_1360_; lean_object* v_userDataBytes_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1444_; 
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
v_headerSize_1337_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___y_1332_, v_a_1329_, v___y_1335_);
v_machine_1338_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(v___y_1334_, v___y_1331_, v_headerSize_1337_, v___y_1336_);
v_machine_1339_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(v___y_1334_, v_machine_1338_, v_a_1329_);
lean_dec(v_a_1329_);
v_reader_1340_ = lean_ctor_get(v_machine_1339_, 0);
lean_inc_ref(v_reader_1340_);
v_state_1341_ = lean_ctor_get(v_reader_1340_, 0);
lean_inc(v_state_1341_);
lean_dec_ref(v_reader_1340_);
if (lean_obj_tag(v_state_1341_) == 7)
{
lean_dec_ref_known(v_state_1341_, 1);
if (v___y_1333_ == 0)
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
v___y_1331_ = v_machine_1401_;
v___y_1332_ = v___x_1397_;
v___y_1333_ = v___y_1396_;
v___y_1334_ = v___y_1393_;
v___y_1335_ = v___y_1395_;
v___y_1336_ = v___x_1407_;
goto v___jp_1330_;
}
else
{
lean_dec_ref(v_indexes_1399_);
v___y_1331_ = v_machine_1401_;
v___y_1332_ = v___x_1397_;
v___y_1333_ = v___y_1396_;
v___y_1334_ = v___y_1393_;
v___y_1335_ = v___y_1395_;
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
v___y_1393_ = v___y_1410_;
v___y_1394_ = v___y_1409_;
v___y_1395_ = v___y_1411_;
v___y_1396_ = v___y_1409_;
goto v___jp_1392_;
}
else
{
v___y_1393_ = v___y_1410_;
v___y_1394_ = v___y_1409_;
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
v___y_1409_ = v___y_1430_;
v___y_1410_ = v___x_1432_;
v___y_1411_ = v___x_1435_;
goto v___jp_1408_;
}
else
{
uint16_t v___x_1436_; uint8_t v___x_1437_; 
v___x_1436_ = 200;
v___x_1437_ = lean_uint16_dec_lt(v___x_1434_, v___x_1436_);
v___y_1409_ = v___y_1430_;
v___y_1410_ = v___x_1432_;
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
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object* v_toFunctor_2325_, lean_object* v_response_2326_, lean_object* v___x_2327_, lean_object* v___f_2328_, lean_object* v_x_2329_){
_start:
{
if (lean_obj_tag(v_x_2329_) == 0)
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2339_; 
lean_dec_ref(v___f_2328_);
lean_dec(v___x_2327_);
lean_dec_ref(v_response_2326_);
lean_dec_ref(v_toFunctor_2325_);
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
lean_closure_set(v___x_2344_, 2, v_toFunctor_2325_);
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
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object* v_toFunctor_2355_, lean_object* v_response_2356_, lean_object* v___x_2357_, lean_object* v___f_2358_, lean_object* v_x_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(v_toFunctor_2355_, v_response_2356_, v___x_2357_, v___f_2358_, v_x_2359_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object* v_inst_2363_, lean_object* v_handler_2364_, lean_object* v_extensions_2365_, lean_object* v_connectionContext_2366_, lean_object* v_state_2367_){
_start:
{
lean_object* v___x_2369_; lean_object* v_toApplicative_2370_; lean_object* v_pendingHead_2371_; 
v___x_2369_ = l_instMonadBaseIO;
v_toApplicative_2370_ = lean_ctor_get(v___x_2369_, 0);
v_pendingHead_2371_ = lean_ctor_get(v_state_2367_, 8);
lean_inc(v_pendingHead_2371_);
if (lean_obj_tag(v_pendingHead_2371_) == 1)
{
lean_object* v_toFunctor_2372_; lean_object* v_machine_2373_; lean_object* v_requestStream_2374_; lean_object* v_keepAliveTimeout_2375_; lean_object* v_currentTimeout_2376_; lean_object* v_headerTimeout_2377_; lean_object* v_response_2378_; lean_object* v_respStream_2379_; uint8_t v_requiresData_2380_; lean_object* v_expectData_2381_; lean_object* v_val_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2406_; 
v_toFunctor_2372_ = lean_ctor_get(v_toApplicative_2370_, 0);
v_machine_2373_ = lean_ctor_get(v_state_2367_, 0);
lean_inc_ref(v_machine_2373_);
v_requestStream_2374_ = lean_ctor_get(v_state_2367_, 1);
lean_inc_ref(v_requestStream_2374_);
v_keepAliveTimeout_2375_ = lean_ctor_get(v_state_2367_, 2);
lean_inc(v_keepAliveTimeout_2375_);
v_currentTimeout_2376_ = lean_ctor_get(v_state_2367_, 3);
lean_inc(v_currentTimeout_2376_);
v_headerTimeout_2377_ = lean_ctor_get(v_state_2367_, 4);
lean_inc(v_headerTimeout_2377_);
v_response_2378_ = lean_ctor_get(v_state_2367_, 5);
lean_inc_ref(v_response_2378_);
v_respStream_2379_ = lean_ctor_get(v_state_2367_, 6);
lean_inc(v_respStream_2379_);
v_requiresData_2380_ = lean_ctor_get_uint8(v_state_2367_, sizeof(void*)*9);
v_expectData_2381_ = lean_ctor_get(v_state_2367_, 7);
lean_inc(v_expectData_2381_);
lean_dec_ref(v_state_2367_);
v_val_2382_ = lean_ctor_get(v_pendingHead_2371_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_pendingHead_2371_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2384_ = v_pendingHead_2371_;
v_isShared_2385_ = v_isSharedCheck_2406_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_val_2382_);
lean_dec(v_pendingHead_2371_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2406_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v_onRequest_2386_; lean_object* v___f_2387_; lean_object* v___x_2388_; lean_object* v___f_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___f_2394_; uint8_t v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2402_; 
v_onRequest_2386_ = lean_ctor_get(v_inst_2363_, 1);
lean_inc_ref(v_onRequest_2386_);
lean_dec_ref(v_inst_2363_);
v___f_2387_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0));
v___x_2388_ = lean_box(v_requiresData_2380_);
lean_inc_ref(v_response_2378_);
lean_inc_ref(v_requestStream_2374_);
v___f_2389_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed), 11, 9);
lean_closure_set(v___f_2389_, 0, v_machine_2373_);
lean_closure_set(v___f_2389_, 1, v_requestStream_2374_);
lean_closure_set(v___f_2389_, 2, v_keepAliveTimeout_2375_);
lean_closure_set(v___f_2389_, 3, v_currentTimeout_2376_);
lean_closure_set(v___f_2389_, 4, v_headerTimeout_2377_);
lean_closure_set(v___f_2389_, 5, v_response_2378_);
lean_closure_set(v___f_2389_, 6, v_respStream_2379_);
lean_closure_set(v___f_2389_, 7, v___x_2388_);
lean_closure_set(v___f_2389_, 8, v_expectData_2381_);
v___x_2390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2390_, 0, v_val_2382_);
lean_ctor_set(v___x_2390_, 1, v_requestStream_2374_);
lean_ctor_set(v___x_2390_, 2, v_extensions_2365_);
v___x_2391_ = lean_apply_2(v_onRequest_2386_, v_handler_2364_, v___x_2390_);
v___x_2392_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_runIn___boxed), 4, 3);
lean_closure_set(v___x_2392_, 0, lean_box(0));
lean_closure_set(v___x_2392_, 1, v_connectionContext_2366_);
lean_closure_set(v___x_2392_, 2, v___x_2391_);
v___x_2393_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_toFunctor_2372_);
v___f_2394_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2394_, 0, v_toFunctor_2372_);
lean_closure_set(v___f_2394_, 1, v_response_2378_);
lean_closure_set(v___f_2394_, 2, v___x_2393_);
lean_closure_set(v___f_2394_, 3, v___f_2389_);
v___x_2395_ = 0;
v___x_2396_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2396_, 0, lean_box(0));
lean_closure_set(v___x_2396_, 1, lean_box(0));
lean_closure_set(v___x_2396_, 2, v___x_2392_);
v___x_2397_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2397_, 0, lean_box(0));
lean_closure_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_io_as_task(v___x_2397_, v___x_2393_);
v___x_2399_ = 1;
v___x_2400_ = lean_task_bind(v___x_2398_, v___f_2387_, v___x_2393_, v___x_2399_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v___x_2400_);
v___x_2402_ = v___x_2384_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
v___x_2404_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2393_, v___x_2395_, v___x_2403_, v___f_2394_);
return v___x_2404_;
}
}
}
else
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
lean_dec(v_pendingHead_2371_);
lean_dec_ref(v_connectionContext_2366_);
lean_dec(v_extensions_2365_);
lean_dec(v_handler_2364_);
lean_dec_ref(v_inst_2363_);
v___x_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2407_, 0, v_state_2367_);
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
return v___x_2408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object* v_inst_2409_, lean_object* v_handler_2410_, lean_object* v_extensions_2411_, lean_object* v_connectionContext_2412_, lean_object* v_state_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2409_, v_handler_2410_, v_extensions_2411_, v_connectionContext_2412_, v_state_2413_);
return v_res_2415_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object* v_00_u03c3_2416_, lean_object* v_inst_2417_, lean_object* v_handler_2418_, lean_object* v_extensions_2419_, lean_object* v_connectionContext_2420_, lean_object* v_state_2421_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2417_, v_handler_2418_, v_extensions_2419_, v_connectionContext_2420_, v_state_2421_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object* v_00_u03c3_2424_, lean_object* v_inst_2425_, lean_object* v_handler_2426_, lean_object* v_extensions_2427_, lean_object* v_connectionContext_2428_, lean_object* v_state_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(v_00_u03c3_2424_, v_inst_2425_, v_handler_2426_, v_extensions_2427_, v_connectionContext_2428_, v_state_2429_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object* v_machine_2432_, lean_object* v_____r_2433_){
_start:
{
lean_object* v_writer_2435_; lean_object* v_reader_2436_; lean_object* v_config_2437_; lean_object* v_events_2438_; lean_object* v_error_2439_; lean_object* v_instant_2440_; uint8_t v_keepAlive_2441_; uint8_t v_forcedFlush_2442_; uint8_t v_pullBodyStalled_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2470_; 
v_writer_2435_ = lean_ctor_get(v_machine_2432_, 1);
v_reader_2436_ = lean_ctor_get(v_machine_2432_, 0);
v_config_2437_ = lean_ctor_get(v_machine_2432_, 2);
v_events_2438_ = lean_ctor_get(v_machine_2432_, 3);
v_error_2439_ = lean_ctor_get(v_machine_2432_, 4);
v_instant_2440_ = lean_ctor_get(v_machine_2432_, 5);
v_keepAlive_2441_ = lean_ctor_get_uint8(v_machine_2432_, sizeof(void*)*6);
v_forcedFlush_2442_ = lean_ctor_get_uint8(v_machine_2432_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2443_ = lean_ctor_get_uint8(v_machine_2432_, sizeof(void*)*6 + 2);
v_isSharedCheck_2470_ = !lean_is_exclusive(v_machine_2432_);
if (v_isSharedCheck_2470_ == 0)
{
v___x_2445_ = v_machine_2432_;
v_isShared_2446_ = v_isSharedCheck_2470_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_instant_2440_);
lean_inc(v_error_2439_);
lean_inc(v_events_2438_);
lean_inc(v_config_2437_);
lean_inc(v_writer_2435_);
lean_inc(v_reader_2436_);
lean_dec(v_machine_2432_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2470_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v_userData_2447_; lean_object* v_outputData_2448_; lean_object* v_state_2449_; lean_object* v_knownSize_2450_; lean_object* v_messageHead_2451_; uint8_t v_sentMessage_2452_; uint8_t v_omitBody_2453_; lean_object* v_userDataBytes_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2469_; 
v_userData_2447_ = lean_ctor_get(v_writer_2435_, 0);
v_outputData_2448_ = lean_ctor_get(v_writer_2435_, 1);
v_state_2449_ = lean_ctor_get(v_writer_2435_, 2);
v_knownSize_2450_ = lean_ctor_get(v_writer_2435_, 3);
v_messageHead_2451_ = lean_ctor_get(v_writer_2435_, 4);
v_sentMessage_2452_ = lean_ctor_get_uint8(v_writer_2435_, sizeof(void*)*6);
v_omitBody_2453_ = lean_ctor_get_uint8(v_writer_2435_, sizeof(void*)*6 + 2);
v_userDataBytes_2454_ = lean_ctor_get(v_writer_2435_, 5);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_writer_2435_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2456_ = v_writer_2435_;
v_isShared_2457_ = v_isSharedCheck_2469_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_userDataBytes_2454_);
lean_inc(v_messageHead_2451_);
lean_inc(v_knownSize_2450_);
lean_inc(v_state_2449_);
lean_inc(v_outputData_2448_);
lean_inc(v_userData_2447_);
lean_dec(v_writer_2435_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2469_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
uint8_t v___x_2458_; lean_object* v___x_2460_; 
v___x_2458_ = 1;
if (v_isShared_2457_ == 0)
{
v___x_2460_ = v___x_2456_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_userData_2447_);
lean_ctor_set(v_reuseFailAlloc_2468_, 1, v_outputData_2448_);
lean_ctor_set(v_reuseFailAlloc_2468_, 2, v_state_2449_);
lean_ctor_set(v_reuseFailAlloc_2468_, 3, v_knownSize_2450_);
lean_ctor_set(v_reuseFailAlloc_2468_, 4, v_messageHead_2451_);
lean_ctor_set(v_reuseFailAlloc_2468_, 5, v_userDataBytes_2454_);
lean_ctor_set_uint8(v_reuseFailAlloc_2468_, sizeof(void*)*6, v_sentMessage_2452_);
lean_ctor_set_uint8(v_reuseFailAlloc_2468_, sizeof(void*)*6 + 2, v_omitBody_2453_);
v___x_2460_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2462_; 
lean_ctor_set_uint8(v___x_2460_, sizeof(void*)*6 + 1, v___x_2458_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 1, v___x_2460_);
v___x_2462_ = v___x_2445_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_reader_2436_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v___x_2460_);
lean_ctor_set(v_reuseFailAlloc_2467_, 2, v_config_2437_);
lean_ctor_set(v_reuseFailAlloc_2467_, 3, v_events_2438_);
lean_ctor_set(v_reuseFailAlloc_2467_, 4, v_error_2439_);
lean_ctor_set(v_reuseFailAlloc_2467_, 5, v_instant_2440_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, sizeof(void*)*6, v_keepAlive_2441_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, sizeof(void*)*6 + 1, v_forcedFlush_2442_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, sizeof(void*)*6 + 2, v_pullBodyStalled_2443_);
v___x_2462_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2463_ = lean_box(0);
v___x_2464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2462_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
v___x_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2465_);
return v___x_2466_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object* v_machine_2471_, lean_object* v_____r_2472_, lean_object* v___y_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(v_machine_2471_, v_____r_2472_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object* v_x1_2475_, lean_object* v_x2_2476_){
_start:
{
lean_object* v_data_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v_data_2477_ = lean_ctor_get(v_x2_2476_, 0);
v___x_2478_ = lean_byte_array_size(v_data_2477_);
v___x_2479_ = lean_nat_add(v_x1_2475_, v___x_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object* v_x1_2480_, lean_object* v_x2_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(v_x1_2480_, v_x2_2481_);
lean_dec_ref(v_x2_2481_);
lean_dec(v_x1_2480_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object* v_body_2483_, lean_object* v_machine_2484_, lean_object* v_isClosed_2485_, lean_object* v___f_2486_, lean_object* v___f_2487_, lean_object* v_x_2488_){
_start:
{
lean_object* v___y_2491_; 
if (lean_obj_tag(v_x_2488_) == 0)
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2504_; 
lean_dec_ref(v___f_2487_);
lean_dec_ref(v___f_2486_);
lean_dec_ref(v_isClosed_2485_);
lean_dec_ref(v_machine_2484_);
lean_dec(v_body_2483_);
v_a_2496_ = lean_ctor_get(v_x_2488_, 0);
v_isSharedCheck_2504_ = !lean_is_exclusive(v_x_2488_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2498_ = v_x_2488_;
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v_x_2488_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
return v___x_2502_;
}
}
}
else
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2568_; 
v_a_2505_ = lean_ctor_get(v_x_2488_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v_x_2488_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2507_ = v_x_2488_;
v_isShared_2508_ = v_isSharedCheck_2568_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v_x_2488_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2568_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
if (lean_obj_tag(v_a_2505_) == 0)
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2512_; 
lean_dec_ref(v___f_2487_);
lean_dec_ref(v___f_2486_);
lean_dec_ref(v_isClosed_2485_);
v___x_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_body_2483_);
v___x_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2510_, 0, v_machine_2484_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2510_);
v___x_2512_ = v___x_2507_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
return v___x_2513_;
}
}
else
{
lean_object* v_val_2515_; 
lean_del_object(v___x_2507_);
v_val_2515_ = lean_ctor_get(v_a_2505_, 0);
lean_inc(v_val_2515_);
lean_dec_ref_known(v_a_2505_, 1);
if (lean_obj_tag(v_val_2515_) == 0)
{
lean_object* v___x_2516_; uint8_t v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
lean_dec_ref(v___f_2487_);
lean_dec_ref(v_machine_2484_);
v___x_2516_ = lean_unsigned_to_nat(0u);
v___x_2517_ = 0;
v___x_2518_ = lean_apply_2(v_isClosed_2485_, v_body_2483_, lean_box(0));
v___x_2519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2516_, v___x_2517_, v___x_2518_, v___f_2486_);
return v___x_2519_;
}
else
{
lean_object* v_val_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; uint8_t v___x_2526_; 
lean_dec_ref(v___f_2486_);
lean_dec_ref(v_isClosed_2485_);
v_val_2520_ = lean_ctor_get(v_val_2515_, 0);
lean_inc(v_val_2520_);
lean_dec_ref_known(v_val_2515_, 1);
v___x_2521_ = lean_unsigned_to_nat(1u);
v___x_2522_ = lean_mk_empty_array_with_capacity(v___x_2521_);
v___x_2523_ = lean_array_push(v___x_2522_, v_val_2520_);
v___x_2524_ = lean_array_get_size(v___x_2523_);
v___x_2525_ = lean_unsigned_to_nat(0u);
v___x_2526_ = lean_nat_dec_eq(v___x_2524_, v___x_2525_);
if (v___x_2526_ == 0)
{
lean_object* v_reader_2527_; lean_object* v_writer_2528_; lean_object* v_config_2529_; lean_object* v_events_2530_; lean_object* v_error_2531_; lean_object* v_instant_2532_; uint8_t v_keepAlive_2533_; uint8_t v_forcedFlush_2534_; uint8_t v_pullBodyStalled_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2567_; 
v_reader_2527_ = lean_ctor_get(v_machine_2484_, 0);
v_writer_2528_ = lean_ctor_get(v_machine_2484_, 1);
v_config_2529_ = lean_ctor_get(v_machine_2484_, 2);
v_events_2530_ = lean_ctor_get(v_machine_2484_, 3);
v_error_2531_ = lean_ctor_get(v_machine_2484_, 4);
v_instant_2532_ = lean_ctor_get(v_machine_2484_, 5);
v_keepAlive_2533_ = lean_ctor_get_uint8(v_machine_2484_, sizeof(void*)*6);
v_forcedFlush_2534_ = lean_ctor_get_uint8(v_machine_2484_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2535_ = lean_ctor_get_uint8(v_machine_2484_, sizeof(void*)*6 + 2);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_machine_2484_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2537_ = v_machine_2484_;
v_isShared_2538_ = v_isSharedCheck_2567_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_instant_2532_);
lean_inc(v_error_2531_);
lean_inc(v_events_2530_);
lean_inc(v_config_2529_);
lean_inc(v_writer_2528_);
lean_inc(v_reader_2527_);
lean_dec(v_machine_2484_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2567_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___y_2540_; lean_object* v___x_2562_; uint8_t v___x_2563_; 
v___x_2562_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_2563_ = lean_nat_dec_lt(v___x_2525_, v___x_2524_);
if (v___x_2563_ == 0)
{
lean_dec_ref(v___f_2487_);
v___y_2540_ = v___x_2525_;
goto v___jp_2539_;
}
else
{
size_t v___x_2564_; size_t v___x_2565_; lean_object* v___x_2566_; 
v___x_2564_ = ((size_t)0ULL);
v___x_2565_ = lean_usize_of_nat(v___x_2524_);
lean_inc_ref(v___x_2523_);
v___x_2566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2562_, v___f_2487_, v___x_2523_, v___x_2564_, v___x_2565_, v___x_2525_);
v___y_2540_ = v___x_2566_;
goto v___jp_2539_;
}
v___jp_2539_:
{
lean_object* v_userData_2541_; lean_object* v_outputData_2542_; lean_object* v_state_2543_; lean_object* v_knownSize_2544_; lean_object* v_messageHead_2545_; uint8_t v_sentMessage_2546_; uint8_t v_userClosedBody_2547_; uint8_t v_omitBody_2548_; lean_object* v_userDataBytes_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2561_; 
v_userData_2541_ = lean_ctor_get(v_writer_2528_, 0);
v_outputData_2542_ = lean_ctor_get(v_writer_2528_, 1);
v_state_2543_ = lean_ctor_get(v_writer_2528_, 2);
v_knownSize_2544_ = lean_ctor_get(v_writer_2528_, 3);
v_messageHead_2545_ = lean_ctor_get(v_writer_2528_, 4);
v_sentMessage_2546_ = lean_ctor_get_uint8(v_writer_2528_, sizeof(void*)*6);
v_userClosedBody_2547_ = lean_ctor_get_uint8(v_writer_2528_, sizeof(void*)*6 + 1);
v_omitBody_2548_ = lean_ctor_get_uint8(v_writer_2528_, sizeof(void*)*6 + 2);
v_userDataBytes_2549_ = lean_ctor_get(v_writer_2528_, 5);
v_isSharedCheck_2561_ = !lean_is_exclusive(v_writer_2528_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2551_ = v_writer_2528_;
v_isShared_2552_ = v_isSharedCheck_2561_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_userDataBytes_2549_);
lean_inc(v_messageHead_2545_);
lean_inc(v_knownSize_2544_);
lean_inc(v_state_2543_);
lean_inc(v_outputData_2542_);
lean_inc(v_userData_2541_);
lean_dec(v_writer_2528_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2561_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; 
v___x_2553_ = l_Array_append___redArg(v_userData_2541_, v___x_2523_);
lean_dec_ref(v___x_2523_);
v___x_2554_ = lean_nat_add(v_userDataBytes_2549_, v___y_2540_);
lean_dec(v___y_2540_);
lean_dec(v_userDataBytes_2549_);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 5, v___x_2554_);
lean_ctor_set(v___x_2551_, 0, v___x_2553_);
v___x_2556_ = v___x_2551_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_outputData_2542_);
lean_ctor_set(v_reuseFailAlloc_2560_, 2, v_state_2543_);
lean_ctor_set(v_reuseFailAlloc_2560_, 3, v_knownSize_2544_);
lean_ctor_set(v_reuseFailAlloc_2560_, 4, v_messageHead_2545_);
lean_ctor_set(v_reuseFailAlloc_2560_, 5, v___x_2554_);
lean_ctor_set_uint8(v_reuseFailAlloc_2560_, sizeof(void*)*6, v_sentMessage_2546_);
lean_ctor_set_uint8(v_reuseFailAlloc_2560_, sizeof(void*)*6 + 1, v_userClosedBody_2547_);
lean_ctor_set_uint8(v_reuseFailAlloc_2560_, sizeof(void*)*6 + 2, v_omitBody_2548_);
v___x_2556_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2558_; 
if (v_isShared_2538_ == 0)
{
lean_ctor_set(v___x_2537_, 1, v___x_2556_);
v___x_2558_ = v___x_2537_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_reader_2527_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v___x_2556_);
lean_ctor_set(v_reuseFailAlloc_2559_, 2, v_config_2529_);
lean_ctor_set(v_reuseFailAlloc_2559_, 3, v_events_2530_);
lean_ctor_set(v_reuseFailAlloc_2559_, 4, v_error_2531_);
lean_ctor_set(v_reuseFailAlloc_2559_, 5, v_instant_2532_);
lean_ctor_set_uint8(v_reuseFailAlloc_2559_, sizeof(void*)*6, v_keepAlive_2533_);
lean_ctor_set_uint8(v_reuseFailAlloc_2559_, sizeof(void*)*6 + 1, v_forcedFlush_2534_);
lean_ctor_set_uint8(v_reuseFailAlloc_2559_, sizeof(void*)*6 + 2, v_pullBodyStalled_2535_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
v___y_2491_ = v___x_2558_;
goto v___jp_2490_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2523_);
lean_dec_ref(v___f_2487_);
v___y_2491_ = v_machine_2484_;
goto v___jp_2490_;
}
}
}
}
}
v___jp_2490_:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_body_2483_);
v___x_2493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2493_, 0, v___y_2491_);
lean_ctor_set(v___x_2493_, 1, v___x_2492_);
v___x_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
return v___x_2495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object* v_body_2569_, lean_object* v_machine_2570_, lean_object* v_isClosed_2571_, lean_object* v___f_2572_, lean_object* v___f_2573_, lean_object* v_x_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(v_body_2569_, v_machine_2570_, v_isClosed_2571_, v___f_2572_, v___f_2573_, v_x_2574_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object* v_inst_2578_, lean_object* v_machine_2579_, lean_object* v_body_2580_){
_start:
{
lean_object* v_close_2582_; lean_object* v_isClosed_2583_; lean_object* v_tryRecv_2584_; lean_object* v___f_2585_; lean_object* v___f_2586_; lean_object* v___f_2587_; lean_object* v___f_2588_; lean_object* v___f_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_close_2582_ = lean_ctor_get(v_inst_2578_, 1);
lean_inc_ref(v_close_2582_);
v_isClosed_2583_ = lean_ctor_get(v_inst_2578_, 2);
lean_inc_ref(v_isClosed_2583_);
v_tryRecv_2584_ = lean_ctor_get(v_inst_2578_, 4);
lean_inc_ref(v_tryRecv_2584_);
lean_dec_ref(v_inst_2578_);
lean_inc_ref(v_machine_2579_);
v___f_2585_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2585_, 0, v_machine_2579_);
lean_inc_ref(v___f_2585_);
v___f_2586_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2586_, 0, v___f_2585_);
lean_inc_n(v_body_2580_, 2);
v___f_2587_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2587_, 0, v_close_2582_);
lean_closure_set(v___f_2587_, 1, v_body_2580_);
lean_closure_set(v___f_2587_, 2, v___f_2586_);
lean_closure_set(v___f_2587_, 3, v___f_2585_);
v___f_2588_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___f_2589_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2589_, 0, v_body_2580_);
lean_closure_set(v___f_2589_, 1, v_machine_2579_);
lean_closure_set(v___f_2589_, 2, v_isClosed_2583_);
lean_closure_set(v___f_2589_, 3, v___f_2587_);
lean_closure_set(v___f_2589_, 4, v___f_2588_);
v___x_2590_ = lean_unsigned_to_nat(0u);
v___x_2591_ = 0;
v___x_2592_ = lean_apply_2(v_tryRecv_2584_, v_body_2580_, lean_box(0));
v___x_2593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2590_, v___x_2591_, v___x_2592_, v___f_2589_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object* v_inst_2594_, lean_object* v_machine_2595_, lean_object* v_body_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2594_, v_machine_2595_, v_body_2596_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object* v_00_u03b2_2599_, lean_object* v_inst_2600_, lean_object* v_machine_2601_, lean_object* v_body_2602_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2600_, v_machine_2601_, v_body_2602_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object* v_00_u03b2_2605_, lean_object* v_inst_2606_, lean_object* v_machine_2607_, lean_object* v_body_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(v_00_u03b2_2605_, v_inst_2606_, v_machine_2607_, v_body_2608_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object* v_val_2617_, lean_object* v_____r_2618_, lean_object* v_st_2619_){
_start:
{
lean_object* v_machine_2621_; lean_object* v_requestStream_2622_; lean_object* v_keepAliveTimeout_2623_; lean_object* v_currentTimeout_2624_; lean_object* v_headerTimeout_2625_; lean_object* v_response_2626_; lean_object* v_respStream_2627_; uint8_t v_requiresData_2628_; lean_object* v_expectData_2629_; uint8_t v_handlerDispatched_2630_; lean_object* v_pendingHead_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2716_; 
v_machine_2621_ = lean_ctor_get(v_st_2619_, 0);
v_requestStream_2622_ = lean_ctor_get(v_st_2619_, 1);
v_keepAliveTimeout_2623_ = lean_ctor_get(v_st_2619_, 2);
v_currentTimeout_2624_ = lean_ctor_get(v_st_2619_, 3);
v_headerTimeout_2625_ = lean_ctor_get(v_st_2619_, 4);
v_response_2626_ = lean_ctor_get(v_st_2619_, 5);
v_respStream_2627_ = lean_ctor_get(v_st_2619_, 6);
v_requiresData_2628_ = lean_ctor_get_uint8(v_st_2619_, sizeof(void*)*9);
v_expectData_2629_ = lean_ctor_get(v_st_2619_, 7);
v_handlerDispatched_2630_ = lean_ctor_get_uint8(v_st_2619_, sizeof(void*)*9 + 1);
v_pendingHead_2631_ = lean_ctor_get(v_st_2619_, 8);
v_isSharedCheck_2716_ = !lean_is_exclusive(v_st_2619_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2633_ = v_st_2619_;
v_isShared_2634_ = v_isSharedCheck_2716_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_pendingHead_2631_);
lean_inc(v_expectData_2629_);
lean_inc(v_respStream_2627_);
lean_inc(v_response_2626_);
lean_inc(v_headerTimeout_2625_);
lean_inc(v_currentTimeout_2624_);
lean_inc(v_keepAliveTimeout_2623_);
lean_inc(v_requestStream_2622_);
lean_inc(v_machine_2621_);
lean_dec(v_st_2619_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2716_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___y_2636_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; uint8_t v___y_2653_; uint8_t v___y_2654_; uint8_t v___y_2655_; lean_object* v___y_2656_; uint8_t v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v_reader_2681_; lean_object* v_writer_2682_; lean_object* v_config_2683_; lean_object* v_events_2684_; lean_object* v_error_2685_; lean_object* v_instant_2686_; uint8_t v_keepAlive_2687_; uint8_t v_forcedFlush_2688_; lean_object* v_state_2689_; lean_object* v_input_2690_; lean_object* v_messageHead_2691_; lean_object* v_messageCount_2692_; lean_object* v_bodyBytesRead_2693_; lean_object* v_headerBytesRead_2694_; uint8_t v_noMoreInput_2695_; uint8_t v___y_2697_; uint8_t v___y_2698_; uint8_t v___y_2711_; 
v_reader_2681_ = lean_ctor_get(v_machine_2621_, 0);
v_writer_2682_ = lean_ctor_get(v_machine_2621_, 1);
v_config_2683_ = lean_ctor_get(v_machine_2621_, 2);
v_events_2684_ = lean_ctor_get(v_machine_2621_, 3);
v_error_2685_ = lean_ctor_get(v_machine_2621_, 4);
v_instant_2686_ = lean_ctor_get(v_machine_2621_, 5);
v_keepAlive_2687_ = lean_ctor_get_uint8(v_machine_2621_, sizeof(void*)*6);
v_forcedFlush_2688_ = lean_ctor_get_uint8(v_machine_2621_, sizeof(void*)*6 + 1);
v_state_2689_ = lean_ctor_get(v_reader_2681_, 0);
v_input_2690_ = lean_ctor_get(v_reader_2681_, 1);
v_messageHead_2691_ = lean_ctor_get(v_reader_2681_, 2);
v_messageCount_2692_ = lean_ctor_get(v_reader_2681_, 3);
v_bodyBytesRead_2693_ = lean_ctor_get(v_reader_2681_, 4);
v_headerBytesRead_2694_ = lean_ctor_get(v_reader_2681_, 5);
v_noMoreInput_2695_ = lean_ctor_get_uint8(v_reader_2681_, sizeof(void*)*6);
if (lean_obj_tag(v_state_2689_) == 6)
{
uint8_t v___x_2714_; 
v___x_2714_ = 1;
v___y_2711_ = v___x_2714_;
goto v___jp_2710_;
}
else
{
uint8_t v___x_2715_; 
v___x_2715_ = 0;
v___y_2711_ = v___x_2715_;
goto v___jp_2710_;
}
v___jp_2635_:
{
lean_object* v___x_2638_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___y_2636_);
v___x_2638_ = v___x_2633_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___y_2636_);
lean_ctor_set(v_reuseFailAlloc_2644_, 1, v_requestStream_2622_);
lean_ctor_set(v_reuseFailAlloc_2644_, 2, v_keepAliveTimeout_2623_);
lean_ctor_set(v_reuseFailAlloc_2644_, 3, v_currentTimeout_2624_);
lean_ctor_set(v_reuseFailAlloc_2644_, 4, v_headerTimeout_2625_);
lean_ctor_set(v_reuseFailAlloc_2644_, 5, v_response_2626_);
lean_ctor_set(v_reuseFailAlloc_2644_, 6, v_respStream_2627_);
lean_ctor_set(v_reuseFailAlloc_2644_, 7, v_expectData_2629_);
lean_ctor_set(v_reuseFailAlloc_2644_, 8, v_pendingHead_2631_);
lean_ctor_set_uint8(v_reuseFailAlloc_2644_, sizeof(void*)*9, v_requiresData_2628_);
lean_ctor_set_uint8(v_reuseFailAlloc_2644_, sizeof(void*)*9 + 1, v_handlerDispatched_2630_);
v___x_2638_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
uint8_t v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2639_ = 0;
v___x_2640_ = lean_box(v___x_2639_);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2638_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
v___x_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2642_);
return v___x_2643_;
}
}
v___jp_2645_:
{
lean_object* v_maxHeaderBytes_2661_; lean_object* v_maxStartLineLength_2662_; lean_object* v_maxChunkLineLength_2663_; lean_object* v_maxBodySize_2664_; lean_object* v_array_2665_; lean_object* v_idx_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; uint8_t v___x_2672_; 
v_maxHeaderBytes_2661_ = lean_ctor_get(v___y_2646_, 2);
v_maxStartLineLength_2662_ = lean_ctor_get(v___y_2646_, 5);
v_maxChunkLineLength_2663_ = lean_ctor_get(v___y_2646_, 13);
v_maxBodySize_2664_ = lean_ctor_get(v___y_2646_, 15);
v_array_2665_ = lean_ctor_get(v___y_2660_, 0);
v_idx_2666_ = lean_ctor_get(v___y_2660_, 1);
v___x_2667_ = lean_nat_add(v_maxBodySize_2664_, v_maxHeaderBytes_2661_);
v___x_2668_ = lean_nat_add(v___x_2667_, v_maxStartLineLength_2662_);
lean_dec(v___x_2667_);
v___x_2669_ = lean_nat_add(v___x_2668_, v_maxChunkLineLength_2663_);
lean_dec(v___x_2668_);
v___x_2670_ = lean_byte_array_size(v_array_2665_);
v___x_2671_ = lean_nat_sub(v___x_2670_, v_idx_2666_);
v___x_2672_ = lean_nat_dec_lt(v___x_2669_, v___x_2671_);
lean_dec(v___x_2671_);
lean_dec(v___x_2669_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2673_; lean_object* v_machine_2674_; 
v___x_2673_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2673_, 0, v___y_2651_);
lean_ctor_set(v___x_2673_, 1, v___y_2660_);
lean_ctor_set(v___x_2673_, 2, v___y_2652_);
lean_ctor_set(v___x_2673_, 3, v___y_2659_);
lean_ctor_set(v___x_2673_, 4, v___y_2658_);
lean_ctor_set(v___x_2673_, 5, v___y_2647_);
lean_ctor_set_uint8(v___x_2673_, sizeof(void*)*6, v___y_2657_);
v_machine_2674_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_machine_2674_, 0, v___x_2673_);
lean_ctor_set(v_machine_2674_, 1, v___y_2648_);
lean_ctor_set(v_machine_2674_, 2, v___y_2646_);
lean_ctor_set(v_machine_2674_, 3, v___y_2649_);
lean_ctor_set(v_machine_2674_, 4, v___y_2650_);
lean_ctor_set(v_machine_2674_, 5, v___y_2656_);
lean_ctor_set_uint8(v_machine_2674_, sizeof(void*)*6, v___y_2654_);
lean_ctor_set_uint8(v_machine_2674_, sizeof(void*)*6 + 1, v___y_2653_);
lean_ctor_set_uint8(v_machine_2674_, sizeof(void*)*6 + 2, v___y_2655_);
v___y_2636_ = v_machine_2674_;
goto v___jp_2635_;
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
lean_dec(v___y_2651_);
lean_dec(v___y_2650_);
v___x_2675_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0));
v___x_2676_ = lean_array_push(v___y_2649_, v___x_2675_);
v___x_2677_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1));
v___x_2678_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
lean_ctor_set(v___x_2678_, 1, v___y_2660_);
lean_ctor_set(v___x_2678_, 2, v___y_2652_);
lean_ctor_set(v___x_2678_, 3, v___y_2659_);
lean_ctor_set(v___x_2678_, 4, v___y_2658_);
lean_ctor_set(v___x_2678_, 5, v___y_2647_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*6, v___y_2657_);
v___x_2679_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2));
v___x_2680_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
lean_ctor_set(v___x_2680_, 1, v___y_2648_);
lean_ctor_set(v___x_2680_, 2, v___y_2646_);
lean_ctor_set(v___x_2680_, 3, v___x_2676_);
lean_ctor_set(v___x_2680_, 4, v___x_2679_);
lean_ctor_set(v___x_2680_, 5, v___y_2656_);
lean_ctor_set_uint8(v___x_2680_, sizeof(void*)*6, v___y_2654_);
lean_ctor_set_uint8(v___x_2680_, sizeof(void*)*6 + 1, v___y_2653_);
lean_ctor_set_uint8(v___x_2680_, sizeof(void*)*6 + 2, v___y_2655_);
v___y_2636_ = v___x_2680_;
goto v___jp_2635_;
}
}
v___jp_2696_:
{
if (v___y_2697_ == 0)
{
if (v___y_2698_ == 0)
{
lean_object* v_array_2699_; lean_object* v_idx_2700_; lean_object* v___x_2701_; uint8_t v___x_2702_; 
lean_inc(v_headerBytesRead_2694_);
lean_inc(v_bodyBytesRead_2693_);
lean_inc(v_messageCount_2692_);
lean_inc(v_messageHead_2691_);
lean_inc_ref(v_input_2690_);
lean_inc(v_state_2689_);
lean_inc(v_instant_2686_);
lean_inc(v_error_2685_);
lean_inc_ref(v_events_2684_);
lean_inc_ref(v_config_2683_);
lean_inc_ref(v_writer_2682_);
lean_dec_ref(v_machine_2621_);
v_array_2699_ = lean_ctor_get(v_input_2690_, 0);
lean_inc_ref(v_array_2699_);
v_idx_2700_ = lean_ctor_get(v_input_2690_, 1);
lean_inc(v_idx_2700_);
lean_dec_ref(v_input_2690_);
v___x_2701_ = lean_byte_array_size(v_array_2699_);
v___x_2702_ = lean_nat_dec_le(v___x_2701_, v_idx_2700_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2703_ = l_ByteArray_extract(v_array_2699_, v_idx_2700_, v___x_2701_);
lean_dec_ref(v_array_2699_);
v___x_2704_ = lean_unsigned_to_nat(0u);
v___x_2705_ = lean_byte_array_size(v___x_2703_);
v___x_2706_ = lean_byte_array_size(v_val_2617_);
v___x_2707_ = lean_byte_array_copy_slice(v_val_2617_, v___x_2704_, v___x_2703_, v___x_2705_, v___x_2706_, v___x_2702_);
lean_dec_ref(v_val_2617_);
v___x_2708_ = l_ByteArray_mkIterator(v___x_2707_);
v___y_2646_ = v_config_2683_;
v___y_2647_ = v_headerBytesRead_2694_;
v___y_2648_ = v_writer_2682_;
v___y_2649_ = v_events_2684_;
v___y_2650_ = v_error_2685_;
v___y_2651_ = v_state_2689_;
v___y_2652_ = v_messageHead_2691_;
v___y_2653_ = v_forcedFlush_2688_;
v___y_2654_ = v_keepAlive_2687_;
v___y_2655_ = v___y_2698_;
v___y_2656_ = v_instant_2686_;
v___y_2657_ = v_noMoreInput_2695_;
v___y_2658_ = v_bodyBytesRead_2693_;
v___y_2659_ = v_messageCount_2692_;
v___y_2660_ = v___x_2708_;
goto v___jp_2645_;
}
else
{
lean_object* v___x_2709_; 
lean_dec(v_idx_2700_);
lean_dec_ref(v_array_2699_);
v___x_2709_ = l_ByteArray_mkIterator(v_val_2617_);
v___y_2646_ = v_config_2683_;
v___y_2647_ = v_headerBytesRead_2694_;
v___y_2648_ = v_writer_2682_;
v___y_2649_ = v_events_2684_;
v___y_2650_ = v_error_2685_;
v___y_2651_ = v_state_2689_;
v___y_2652_ = v_messageHead_2691_;
v___y_2653_ = v_forcedFlush_2688_;
v___y_2654_ = v_keepAlive_2687_;
v___y_2655_ = v___y_2698_;
v___y_2656_ = v_instant_2686_;
v___y_2657_ = v_noMoreInput_2695_;
v___y_2658_ = v_bodyBytesRead_2693_;
v___y_2659_ = v_messageCount_2692_;
v___y_2660_ = v___x_2709_;
goto v___jp_2645_;
}
}
else
{
lean_dec_ref(v_val_2617_);
v___y_2636_ = v_machine_2621_;
goto v___jp_2635_;
}
}
else
{
lean_dec_ref(v_val_2617_);
v___y_2636_ = v_machine_2621_;
goto v___jp_2635_;
}
}
v___jp_2710_:
{
if (lean_obj_tag(v_state_2689_) == 7)
{
uint8_t v___x_2712_; 
v___x_2712_ = 1;
v___y_2697_ = v___y_2711_;
v___y_2698_ = v___x_2712_;
goto v___jp_2696_;
}
else
{
uint8_t v___x_2713_; 
v___x_2713_ = 0;
v___y_2697_ = v___y_2711_;
v___y_2698_ = v___x_2713_;
goto v___jp_2696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object* v_val_2717_, lean_object* v_____r_2718_, lean_object* v_st_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_2717_, v_____r_2718_, v_st_2719_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object* v_config_2722_, lean_object* v_machine_2723_, lean_object* v_requestStream_2724_, lean_object* v_currentTimeout_2725_, lean_object* v_response_2726_, lean_object* v_respStream_2727_, uint8_t v_requiresData_2728_, lean_object* v_expectData_2729_, uint8_t v_handlerDispatched_2730_, lean_object* v_pendingHead_2731_, lean_object* v___f_2732_, lean_object* v_x_2733_){
_start:
{
if (lean_obj_tag(v_x_2733_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2743_; 
lean_dec_ref(v___f_2732_);
lean_dec(v_pendingHead_2731_);
lean_dec(v_expectData_2729_);
lean_dec(v_respStream_2727_);
lean_dec_ref(v_response_2726_);
lean_dec(v_currentTimeout_2725_);
lean_dec_ref(v_requestStream_2724_);
lean_dec_ref(v_machine_2723_);
v_a_2735_ = lean_ctor_get(v_x_2733_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_x_2733_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2737_ = v_x_2733_;
v_isShared_2738_ = v_isSharedCheck_2743_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v_x_2733_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2743_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2741_; 
v___x_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2740_);
return v___x_2741_;
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v_headerTimeout_2745_; lean_object* v_second_2746_; lean_object* v_nano_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v_second_2751_; lean_object* v_nano_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v_a_2744_ = lean_ctor_get(v_x_2733_, 0);
lean_inc(v_a_2744_);
lean_dec_ref_known(v_x_2733_, 1);
v_headerTimeout_2745_ = lean_ctor_get(v_config_2722_, 6);
v_second_2746_ = lean_ctor_get(v_a_2744_, 0);
lean_inc(v_second_2746_);
v_nano_2747_ = lean_ctor_get(v_a_2744_, 1);
lean_inc(v_nano_2747_);
lean_dec(v_a_2744_);
v___x_2748_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_2749_ = lean_int_mul(v_headerTimeout_2745_, v___x_2748_);
v___x_2750_ = l_Std_Time_Duration_ofNanoseconds(v___x_2749_);
lean_dec(v___x_2749_);
v_second_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_second_2751_);
v_nano_2752_ = lean_ctor_get(v___x_2750_, 1);
lean_inc(v_nano_2752_);
lean_dec_ref(v___x_2750_);
v___x_2753_ = lean_box(0);
v___x_2754_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_2755_ = lean_int_mul(v_second_2746_, v___x_2754_);
lean_dec(v_second_2746_);
v___x_2756_ = lean_int_add(v___x_2755_, v_nano_2747_);
lean_dec(v_nano_2747_);
lean_dec(v___x_2755_);
v___x_2757_ = lean_int_mul(v_second_2751_, v___x_2754_);
lean_dec(v_second_2751_);
v___x_2758_ = lean_int_add(v___x_2757_, v_nano_2752_);
lean_dec(v_nano_2752_);
lean_dec(v___x_2757_);
v___x_2759_ = lean_int_add(v___x_2756_, v___x_2758_);
lean_dec(v___x_2758_);
lean_dec(v___x_2756_);
v___x_2760_ = l_Std_Time_Duration_ofNanoseconds(v___x_2759_);
lean_dec(v___x_2759_);
v___x_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2760_);
v___x_2762_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2762_, 0, v_machine_2723_);
lean_ctor_set(v___x_2762_, 1, v_requestStream_2724_);
lean_ctor_set(v___x_2762_, 2, v___x_2753_);
lean_ctor_set(v___x_2762_, 3, v_currentTimeout_2725_);
lean_ctor_set(v___x_2762_, 4, v___x_2761_);
lean_ctor_set(v___x_2762_, 5, v_response_2726_);
lean_ctor_set(v___x_2762_, 6, v_respStream_2727_);
lean_ctor_set(v___x_2762_, 7, v_expectData_2729_);
lean_ctor_set(v___x_2762_, 8, v_pendingHead_2731_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*9, v_requiresData_2728_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*9 + 1, v_handlerDispatched_2730_);
v___x_2763_ = lean_box(0);
v___x_2764_ = lean_apply_3(v___f_2732_, v___x_2763_, v___x_2762_, lean_box(0));
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object* v_config_2765_, lean_object* v_machine_2766_, lean_object* v_requestStream_2767_, lean_object* v_currentTimeout_2768_, lean_object* v_response_2769_, lean_object* v_respStream_2770_, lean_object* v_requiresData_2771_, lean_object* v_expectData_2772_, lean_object* v_handlerDispatched_2773_, lean_object* v_pendingHead_2774_, lean_object* v___f_2775_, lean_object* v_x_2776_, lean_object* v___y_2777_){
_start:
{
uint8_t v_requiresData_boxed_2778_; uint8_t v_handlerDispatched_boxed_2779_; lean_object* v_res_2780_; 
v_requiresData_boxed_2778_ = lean_unbox(v_requiresData_2771_);
v_handlerDispatched_boxed_2779_ = lean_unbox(v_handlerDispatched_2773_);
v_res_2780_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(v_config_2765_, v_machine_2766_, v_requestStream_2767_, v_currentTimeout_2768_, v_response_2769_, v_respStream_2770_, v_requiresData_boxed_2778_, v_expectData_2772_, v_handlerDispatched_boxed_2779_, v_pendingHead_2774_, v___f_2775_, v_x_2776_);
lean_dec_ref(v_config_2765_);
return v_res_2780_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object* v_machine_2781_, lean_object* v_requestStream_2782_, lean_object* v_keepAliveTimeout_2783_, lean_object* v_currentTimeout_2784_, lean_object* v_headerTimeout_2785_, lean_object* v_response_2786_, uint8_t v_requiresData_2787_, lean_object* v_expectData_2788_, uint8_t v_handlerDispatched_2789_, lean_object* v_pendingHead_2790_, lean_object* v_____r_2791_){
_start:
{
lean_object* v_writer_2793_; lean_object* v_reader_2794_; lean_object* v_config_2795_; lean_object* v_events_2796_; lean_object* v_error_2797_; lean_object* v_instant_2798_; uint8_t v_keepAlive_2799_; uint8_t v_forcedFlush_2800_; uint8_t v_pullBodyStalled_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2831_; 
v_writer_2793_ = lean_ctor_get(v_machine_2781_, 1);
v_reader_2794_ = lean_ctor_get(v_machine_2781_, 0);
v_config_2795_ = lean_ctor_get(v_machine_2781_, 2);
v_events_2796_ = lean_ctor_get(v_machine_2781_, 3);
v_error_2797_ = lean_ctor_get(v_machine_2781_, 4);
v_instant_2798_ = lean_ctor_get(v_machine_2781_, 5);
v_keepAlive_2799_ = lean_ctor_get_uint8(v_machine_2781_, sizeof(void*)*6);
v_forcedFlush_2800_ = lean_ctor_get_uint8(v_machine_2781_, sizeof(void*)*6 + 1);
v_pullBodyStalled_2801_ = lean_ctor_get_uint8(v_machine_2781_, sizeof(void*)*6 + 2);
v_isSharedCheck_2831_ = !lean_is_exclusive(v_machine_2781_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2803_ = v_machine_2781_;
v_isShared_2804_ = v_isSharedCheck_2831_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_instant_2798_);
lean_inc(v_error_2797_);
lean_inc(v_events_2796_);
lean_inc(v_config_2795_);
lean_inc(v_writer_2793_);
lean_inc(v_reader_2794_);
lean_dec(v_machine_2781_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2831_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v_userData_2805_; lean_object* v_outputData_2806_; lean_object* v_state_2807_; lean_object* v_knownSize_2808_; lean_object* v_messageHead_2809_; uint8_t v_sentMessage_2810_; uint8_t v_omitBody_2811_; lean_object* v_userDataBytes_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2830_; 
v_userData_2805_ = lean_ctor_get(v_writer_2793_, 0);
v_outputData_2806_ = lean_ctor_get(v_writer_2793_, 1);
v_state_2807_ = lean_ctor_get(v_writer_2793_, 2);
v_knownSize_2808_ = lean_ctor_get(v_writer_2793_, 3);
v_messageHead_2809_ = lean_ctor_get(v_writer_2793_, 4);
v_sentMessage_2810_ = lean_ctor_get_uint8(v_writer_2793_, sizeof(void*)*6);
v_omitBody_2811_ = lean_ctor_get_uint8(v_writer_2793_, sizeof(void*)*6 + 2);
v_userDataBytes_2812_ = lean_ctor_get(v_writer_2793_, 5);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_writer_2793_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2814_ = v_writer_2793_;
v_isShared_2815_ = v_isSharedCheck_2830_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_userDataBytes_2812_);
lean_inc(v_messageHead_2809_);
lean_inc(v_knownSize_2808_);
lean_inc(v_state_2807_);
lean_inc(v_outputData_2806_);
lean_inc(v_userData_2805_);
lean_dec(v_writer_2793_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2830_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
uint8_t v___x_2816_; lean_object* v___x_2818_; 
v___x_2816_ = 1;
if (v_isShared_2815_ == 0)
{
v___x_2818_ = v___x_2814_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_userData_2805_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_outputData_2806_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v_state_2807_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v_knownSize_2808_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v_messageHead_2809_);
lean_ctor_set(v_reuseFailAlloc_2829_, 5, v_userDataBytes_2812_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*6, v_sentMessage_2810_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*6 + 2, v_omitBody_2811_);
v___x_2818_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2820_; 
lean_ctor_set_uint8(v___x_2818_, sizeof(void*)*6 + 1, v___x_2816_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 1, v___x_2818_);
v___x_2820_ = v___x_2803_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_reader_2794_);
lean_ctor_set(v_reuseFailAlloc_2828_, 1, v___x_2818_);
lean_ctor_set(v_reuseFailAlloc_2828_, 2, v_config_2795_);
lean_ctor_set(v_reuseFailAlloc_2828_, 3, v_events_2796_);
lean_ctor_set(v_reuseFailAlloc_2828_, 4, v_error_2797_);
lean_ctor_set(v_reuseFailAlloc_2828_, 5, v_instant_2798_);
lean_ctor_set_uint8(v_reuseFailAlloc_2828_, sizeof(void*)*6, v_keepAlive_2799_);
lean_ctor_set_uint8(v_reuseFailAlloc_2828_, sizeof(void*)*6 + 1, v_forcedFlush_2800_);
lean_ctor_set_uint8(v_reuseFailAlloc_2828_, sizeof(void*)*6 + 2, v_pullBodyStalled_2801_);
v___x_2820_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; uint8_t v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2821_ = lean_box(0);
v___x_2822_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2822_, 0, v___x_2820_);
lean_ctor_set(v___x_2822_, 1, v_requestStream_2782_);
lean_ctor_set(v___x_2822_, 2, v_keepAliveTimeout_2783_);
lean_ctor_set(v___x_2822_, 3, v_currentTimeout_2784_);
lean_ctor_set(v___x_2822_, 4, v_headerTimeout_2785_);
lean_ctor_set(v___x_2822_, 5, v_response_2786_);
lean_ctor_set(v___x_2822_, 6, v___x_2821_);
lean_ctor_set(v___x_2822_, 7, v_expectData_2788_);
lean_ctor_set(v___x_2822_, 8, v_pendingHead_2790_);
lean_ctor_set_uint8(v___x_2822_, sizeof(void*)*9, v_requiresData_2787_);
lean_ctor_set_uint8(v___x_2822_, sizeof(void*)*9 + 1, v_handlerDispatched_2789_);
v___x_2823_ = 0;
v___x_2824_ = lean_box(v___x_2823_);
v___x_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2822_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
v___x_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object* v_machine_2832_, lean_object* v_requestStream_2833_, lean_object* v_keepAliveTimeout_2834_, lean_object* v_currentTimeout_2835_, lean_object* v_headerTimeout_2836_, lean_object* v_response_2837_, lean_object* v_requiresData_2838_, lean_object* v_expectData_2839_, lean_object* v_handlerDispatched_2840_, lean_object* v_pendingHead_2841_, lean_object* v_____r_2842_, lean_object* v___y_2843_){
_start:
{
uint8_t v_requiresData_boxed_2844_; uint8_t v_handlerDispatched_boxed_2845_; lean_object* v_res_2846_; 
v_requiresData_boxed_2844_ = lean_unbox(v_requiresData_2838_);
v_handlerDispatched_boxed_2845_ = lean_unbox(v_handlerDispatched_2840_);
v_res_2846_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_2832_, v_requestStream_2833_, v_keepAliveTimeout_2834_, v_currentTimeout_2835_, v_headerTimeout_2836_, v_response_2837_, v_requiresData_boxed_2844_, v_expectData_2839_, v_handlerDispatched_boxed_2845_, v_pendingHead_2841_, v_____r_2842_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object* v___f_2847_, lean_object* v_x_2848_){
_start:
{
if (lean_obj_tag(v_x_2848_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2858_; 
lean_dec_ref(v___f_2847_);
v_a_2850_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2852_ = v_x_2848_;
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v_x_2848_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; 
v___x_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
return v___x_2856_;
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2860_; 
v_a_2859_ = lean_ctor_get(v_x_2848_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v_x_2848_, 1);
v___x_2860_ = lean_apply_2(v___f_2847_, v_a_2859_, lean_box(0));
return v___x_2860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object* v___f_2861_, lean_object* v_x_2862_, lean_object* v___y_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(v___f_2861_, v_x_2862_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object* v_close_2865_, lean_object* v_val_2866_, lean_object* v___f_2867_, lean_object* v___f_2868_, lean_object* v_x_2869_){
_start:
{
if (lean_obj_tag(v_x_2869_) == 0)
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2879_; 
lean_dec_ref(v___f_2868_);
lean_dec_ref(v___f_2867_);
lean_dec(v_val_2866_);
lean_dec_ref(v_close_2865_);
v_a_2871_ = lean_ctor_get(v_x_2869_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v_x_2869_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2873_ = v_x_2869_;
v_isShared_2874_ = v_isSharedCheck_2879_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v_x_2869_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2879_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2871_);
v___x_2876_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
lean_object* v___x_2877_; 
v___x_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2876_);
return v___x_2877_;
}
}
}
else
{
lean_object* v_a_2880_; uint8_t v___x_2881_; 
v_a_2880_ = lean_ctor_get(v_x_2869_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v_x_2869_, 1);
v___x_2881_ = lean_unbox(v_a_2880_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; lean_object* v___x_2883_; uint8_t v___x_2884_; lean_object* v___x_2885_; 
lean_dec_ref(v___f_2868_);
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_apply_2(v_close_2865_, v_val_2866_, lean_box(0));
v___x_2884_ = lean_unbox(v_a_2880_);
lean_dec(v_a_2880_);
v___x_2885_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2882_, v___x_2884_, v___x_2883_, v___f_2867_);
return v___x_2885_;
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
lean_dec(v_a_2880_);
lean_dec_ref(v___f_2867_);
lean_dec(v_val_2866_);
lean_dec_ref(v_close_2865_);
v___x_2886_ = lean_box(0);
v___x_2887_ = lean_apply_2(v___f_2868_, v___x_2886_, lean_box(0));
return v___x_2887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object* v_close_2888_, lean_object* v_val_2889_, lean_object* v___f_2890_, lean_object* v___f_2891_, lean_object* v_x_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(v_close_2888_, v_val_2889_, v___f_2890_, v___f_2891_, v_x_2892_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object* v_inst_2895_, lean_object* v_handler_2896_, lean_object* v_x_2897_){
_start:
{
if (lean_obj_tag(v_x_2897_) == 0)
{
lean_object* v_a_2899_; lean_object* v_onFailure_2900_; lean_object* v___x_2901_; 
v_a_2899_ = lean_ctor_get(v_x_2897_, 0);
lean_inc(v_a_2899_);
lean_dec_ref_known(v_x_2897_, 1);
v_onFailure_2900_ = lean_ctor_get(v_inst_2895_, 2);
lean_inc_ref(v_onFailure_2900_);
lean_dec_ref(v_inst_2895_);
v___x_2901_ = lean_apply_3(v_onFailure_2900_, v_handler_2896_, v_a_2899_, lean_box(0));
return v___x_2901_;
}
else
{
lean_object* v___x_2902_; 
lean_dec(v_handler_2896_);
lean_dec_ref(v_inst_2895_);
v___x_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2902_, 0, v_x_2897_);
return v___x_2902_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object* v_inst_2903_, lean_object* v_handler_2904_, lean_object* v_x_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(v_inst_2903_, v_handler_2904_, v_x_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object* v_st_2908_, lean_object* v_____r_2909_){
_start:
{
uint8_t v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2911_ = 0;
v___x_2912_ = lean_box(v___x_2911_);
v___x_2913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2913_, 0, v_st_2908_);
lean_ctor_set(v___x_2913_, 1, v___x_2912_);
v___x_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
v___x_2915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2914_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object* v_st_2916_, lean_object* v_____r_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_2916_, v_____r_2917_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object* v_requestStream_2920_, lean_object* v___f_2921_, lean_object* v___f_2922_, lean_object* v_x_2923_){
_start:
{
if (lean_obj_tag(v_x_2923_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2933_; 
lean_dec_ref(v___f_2922_);
lean_dec_ref(v___f_2921_);
lean_dec_ref(v_requestStream_2920_);
v_a_2925_ = lean_ctor_get(v_x_2923_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v_x_2923_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2927_ = v_x_2923_;
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v_x_2923_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; 
v___x_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2930_);
return v___x_2931_;
}
}
}
else
{
lean_object* v_a_2934_; uint8_t v___x_2935_; 
v_a_2934_ = lean_ctor_get(v_x_2923_, 0);
lean_inc(v_a_2934_);
lean_dec_ref_known(v_x_2923_, 1);
v___x_2935_ = lean_unbox(v_a_2934_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; uint8_t v___x_2938_; lean_object* v___x_2939_; 
lean_dec_ref(v___f_2922_);
v___x_2936_ = lean_unsigned_to_nat(0u);
v___x_2937_ = l_Std_Http_Body_Stream_close(v_requestStream_2920_);
v___x_2938_ = lean_unbox(v_a_2934_);
lean_dec(v_a_2934_);
v___x_2939_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2936_, v___x_2938_, v___x_2937_, v___f_2921_);
return v___x_2939_;
}
else
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
lean_dec(v_a_2934_);
lean_dec_ref(v___f_2921_);
lean_dec_ref(v_requestStream_2920_);
v___x_2940_ = lean_box(0);
v___x_2941_ = lean_apply_2(v___f_2922_, v___x_2940_, lean_box(0));
return v___x_2941_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object* v_requestStream_2942_, lean_object* v___f_2943_, lean_object* v___f_2944_, lean_object* v_x_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(v_requestStream_2942_, v___f_2943_, v___f_2944_, v_x_2945_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t v_final_2948_, lean_object* v___f_2949_, lean_object* v___f_2950_, lean_object* v_requestStream_2951_, lean_object* v___f_2952_, lean_object* v_x_2953_){
_start:
{
if (lean_obj_tag(v_x_2953_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2963_; 
lean_dec_ref(v___f_2952_);
lean_dec_ref(v_requestStream_2951_);
lean_dec_ref(v___f_2950_);
lean_dec_ref(v___f_2949_);
v_a_2955_ = lean_ctor_get(v_x_2953_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_x_2953_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2957_ = v_x_2953_;
v_isShared_2958_ = v_isSharedCheck_2963_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v_x_2953_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2963_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2960_; 
if (v_isShared_2958_ == 0)
{
v___x_2960_ = v___x_2957_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2955_);
v___x_2960_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
lean_object* v___x_2961_; 
v___x_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2960_);
return v___x_2961_;
}
}
}
else
{
lean_dec_ref_known(v_x_2953_, 1);
if (v_final_2948_ == 0)
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
lean_dec_ref(v___f_2952_);
lean_dec_ref(v_requestStream_2951_);
lean_dec_ref(v___f_2950_);
v___x_2964_ = lean_box(0);
v___x_2965_ = lean_apply_2(v___f_2949_, v___x_2964_, lean_box(0));
return v___x_2965_;
}
else
{
lean_object* v___x_2966_; uint8_t v___x_2967_; lean_object* v___x_2968_; lean_object* v___f_2969_; lean_object* v___f_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_6780__overap_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
lean_dec_ref(v___f_2949_);
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = 0;
v___x_2968_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2969_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2970_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2971_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2972_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2972_, 0, lean_box(0));
lean_closure_set(v___x_2972_, 1, lean_box(0));
lean_closure_set(v___x_2972_, 2, v___x_2968_);
lean_closure_set(v___x_2972_, 3, lean_box(0));
lean_closure_set(v___x_2972_, 4, lean_box(0));
lean_closure_set(v___x_2972_, 5, v___x_2971_);
lean_closure_set(v___x_2972_, 6, v___f_2950_);
v___x_6780__overap_2973_ = l_Std_Mutex_atomically___redArg(v___x_2968_, v___f_2969_, v___f_2970_, v_requestStream_2951_, v___x_2972_);
v___x_2974_ = lean_apply_1(v___x_6780__overap_2973_, lean_box(0));
v___x_2975_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2966_, v___x_2967_, v___x_2974_, v___f_2952_);
return v___x_2975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object* v_final_2976_, lean_object* v___f_2977_, lean_object* v___f_2978_, lean_object* v_requestStream_2979_, lean_object* v___f_2980_, lean_object* v_x_2981_, lean_object* v___y_2982_){
_start:
{
uint8_t v_final_boxed_2983_; lean_object* v_res_2984_; 
v_final_boxed_2983_ = lean_unbox(v_final_2976_);
v_res_2984_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(v_final_boxed_2983_, v___f_2977_, v___f_2978_, v_requestStream_2979_, v___f_2980_, v_x_2981_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object* v_state_2985_, lean_object* v_x_2986_){
_start:
{
if (lean_obj_tag(v_x_2986_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2996_; 
lean_dec_ref(v_state_2985_);
v_a_2988_ = lean_ctor_get(v_x_2986_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_x_2986_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2990_ = v_x_2986_;
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v_x_2986_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
lean_object* v___x_2994_; 
v___x_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
return v___x_2994_;
}
}
}
else
{
lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3026_; 
v_isSharedCheck_3026_ = !lean_is_exclusive(v_x_2986_);
if (v_isSharedCheck_3026_ == 0)
{
lean_object* v_unused_3027_; 
v_unused_3027_ = lean_ctor_get(v_x_2986_, 0);
lean_dec(v_unused_3027_);
v___x_2998_ = v_x_2986_;
v_isShared_2999_ = v_isSharedCheck_3026_;
goto v_resetjp_2997_;
}
else
{
lean_dec(v_x_2986_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3026_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v_machine_3000_; lean_object* v_requestStream_3001_; lean_object* v_keepAliveTimeout_3002_; lean_object* v_currentTimeout_3003_; lean_object* v_headerTimeout_3004_; lean_object* v_response_3005_; lean_object* v_respStream_3006_; uint8_t v_requiresData_3007_; lean_object* v_expectData_3008_; lean_object* v_pendingHead_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3025_; 
v_machine_3000_ = lean_ctor_get(v_state_2985_, 0);
v_requestStream_3001_ = lean_ctor_get(v_state_2985_, 1);
v_keepAliveTimeout_3002_ = lean_ctor_get(v_state_2985_, 2);
v_currentTimeout_3003_ = lean_ctor_get(v_state_2985_, 3);
v_headerTimeout_3004_ = lean_ctor_get(v_state_2985_, 4);
v_response_3005_ = lean_ctor_get(v_state_2985_, 5);
v_respStream_3006_ = lean_ctor_get(v_state_2985_, 6);
v_requiresData_3007_ = lean_ctor_get_uint8(v_state_2985_, sizeof(void*)*9);
v_expectData_3008_ = lean_ctor_get(v_state_2985_, 7);
v_pendingHead_3009_ = lean_ctor_get(v_state_2985_, 8);
v_isSharedCheck_3025_ = !lean_is_exclusive(v_state_2985_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3011_ = v_state_2985_;
v_isShared_3012_ = v_isSharedCheck_3025_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_pendingHead_3009_);
lean_inc(v_expectData_3008_);
lean_inc(v_respStream_3006_);
lean_inc(v_response_3005_);
lean_inc(v_headerTimeout_3004_);
lean_inc(v_currentTimeout_3003_);
lean_inc(v_keepAliveTimeout_3002_);
lean_inc(v_requestStream_3001_);
lean_inc(v_machine_3000_);
lean_dec(v_state_2985_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3025_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; uint8_t v___x_3015_; lean_object* v___x_3017_; 
v___x_3013_ = lean_box(52);
v___x_3014_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3000_, v___x_3013_);
v___x_3015_ = 0;
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3014_);
v___x_3017_ = v___x_3011_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3014_);
lean_ctor_set(v_reuseFailAlloc_3024_, 1, v_requestStream_3001_);
lean_ctor_set(v_reuseFailAlloc_3024_, 2, v_keepAliveTimeout_3002_);
lean_ctor_set(v_reuseFailAlloc_3024_, 3, v_currentTimeout_3003_);
lean_ctor_set(v_reuseFailAlloc_3024_, 4, v_headerTimeout_3004_);
lean_ctor_set(v_reuseFailAlloc_3024_, 5, v_response_3005_);
lean_ctor_set(v_reuseFailAlloc_3024_, 6, v_respStream_3006_);
lean_ctor_set(v_reuseFailAlloc_3024_, 7, v_expectData_3008_);
lean_ctor_set(v_reuseFailAlloc_3024_, 8, v_pendingHead_3009_);
lean_ctor_set_uint8(v_reuseFailAlloc_3024_, sizeof(void*)*9, v_requiresData_3007_);
v___x_3017_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
lean_ctor_set_uint8(v___x_3017_, sizeof(void*)*9 + 1, v___x_3015_);
v___x_3018_ = lean_box(v___x_3015_);
v___x_3019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3017_);
lean_ctor_set(v___x_3019_, 1, v___x_3018_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v___x_3019_);
v___x_3021_ = v___x_2998_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3019_);
v___x_3021_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
lean_object* v___x_3022_; 
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
return v___x_3022_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object* v_state_3028_, lean_object* v_x_3029_, lean_object* v___y_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(v_state_3028_, v_x_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object* v_machine_3032_, lean_object* v_requestStream_3033_, lean_object* v_keepAliveTimeout_3034_, lean_object* v_currentTimeout_3035_, lean_object* v_headerTimeout_3036_, lean_object* v_response_3037_, lean_object* v_respStream_3038_, uint8_t v_requiresData_3039_, lean_object* v_expectData_3040_, lean_object* v_pendingHead_3041_, lean_object* v_____r_3042_){
_start:
{
uint8_t v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3044_ = 0;
v___x_3045_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3045_, 0, v_machine_3032_);
lean_ctor_set(v___x_3045_, 1, v_requestStream_3033_);
lean_ctor_set(v___x_3045_, 2, v_keepAliveTimeout_3034_);
lean_ctor_set(v___x_3045_, 3, v_currentTimeout_3035_);
lean_ctor_set(v___x_3045_, 4, v_headerTimeout_3036_);
lean_ctor_set(v___x_3045_, 5, v_response_3037_);
lean_ctor_set(v___x_3045_, 6, v_respStream_3038_);
lean_ctor_set(v___x_3045_, 7, v_expectData_3040_);
lean_ctor_set(v___x_3045_, 8, v_pendingHead_3041_);
lean_ctor_set_uint8(v___x_3045_, sizeof(void*)*9, v_requiresData_3039_);
lean_ctor_set_uint8(v___x_3045_, sizeof(void*)*9 + 1, v___x_3044_);
v___x_3046_ = lean_box(v___x_3044_);
v___x_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3045_);
lean_ctor_set(v___x_3047_, 1, v___x_3046_);
v___x_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
v___x_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3048_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object* v_machine_3050_, lean_object* v_requestStream_3051_, lean_object* v_keepAliveTimeout_3052_, lean_object* v_currentTimeout_3053_, lean_object* v_headerTimeout_3054_, lean_object* v_response_3055_, lean_object* v_respStream_3056_, lean_object* v_requiresData_3057_, lean_object* v_expectData_3058_, lean_object* v_pendingHead_3059_, lean_object* v_____r_3060_, lean_object* v___y_3061_){
_start:
{
uint8_t v_requiresData_boxed_3062_; lean_object* v_res_3063_; 
v_requiresData_boxed_3062_ = lean_unbox(v_requiresData_3057_);
v_res_3063_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(v_machine_3050_, v_requestStream_3051_, v_keepAliveTimeout_3052_, v_currentTimeout_3053_, v_headerTimeout_3054_, v_response_3055_, v_respStream_3056_, v_requiresData_boxed_3062_, v_expectData_3058_, v_pendingHead_3059_, v_____r_3060_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object* v_close_3064_, lean_object* v_body_3065_, lean_object* v___f_3066_, lean_object* v___f_3067_, lean_object* v_x_3068_){
_start:
{
if (lean_obj_tag(v_x_3068_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3078_; 
lean_dec_ref(v___f_3067_);
lean_dec_ref(v___f_3066_);
lean_dec(v_body_3065_);
lean_dec_ref(v_close_3064_);
v_a_3070_ = lean_ctor_get(v_x_3068_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v_x_3068_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3072_ = v_x_3068_;
v_isShared_3073_ = v_isSharedCheck_3078_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v_x_3068_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3078_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
lean_object* v___x_3076_; 
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
return v___x_3076_;
}
}
}
else
{
lean_object* v_a_3079_; uint8_t v___x_3080_; 
v_a_3079_ = lean_ctor_get(v_x_3068_, 0);
lean_inc(v_a_3079_);
lean_dec_ref_known(v_x_3068_, 1);
v___x_3080_ = lean_unbox(v_a_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; lean_object* v___x_3084_; 
lean_dec_ref(v___f_3067_);
v___x_3081_ = lean_unsigned_to_nat(0u);
v___x_3082_ = lean_apply_2(v_close_3064_, v_body_3065_, lean_box(0));
v___x_3083_ = lean_unbox(v_a_3079_);
lean_dec(v_a_3079_);
v___x_3084_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3081_, v___x_3083_, v___x_3082_, v___f_3066_);
return v___x_3084_;
}
else
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
lean_dec(v_a_3079_);
lean_dec_ref(v___f_3066_);
lean_dec(v_body_3065_);
lean_dec_ref(v_close_3064_);
v___x_3085_ = lean_box(0);
v___x_3086_ = lean_apply_2(v___f_3067_, v___x_3085_, lean_box(0));
return v___x_3086_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object* v_close_3087_, lean_object* v_body_3088_, lean_object* v___f_3089_, lean_object* v___f_3090_, lean_object* v_x_3091_, lean_object* v___y_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(v_close_3087_, v_body_3088_, v___f_3089_, v___f_3090_, v_x_3091_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object* v_requestStream_3094_, lean_object* v_keepAliveTimeout_3095_, lean_object* v_currentTimeout_3096_, lean_object* v_headerTimeout_3097_, lean_object* v_response_3098_, uint8_t v_requiresData_3099_, lean_object* v_expectData_3100_, uint8_t v___x_3101_, lean_object* v_pendingHead_3102_, lean_object* v_____x_3103_){
_start:
{
lean_object* v_snd_3105_; lean_object* v_fst_3106_; lean_object* v_fst_3107_; lean_object* v_snd_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3118_; 
v_snd_3105_ = lean_ctor_get(v_____x_3103_, 1);
lean_inc(v_snd_3105_);
v_fst_3106_ = lean_ctor_get(v_____x_3103_, 0);
lean_inc(v_fst_3106_);
lean_dec_ref(v_____x_3103_);
v_fst_3107_ = lean_ctor_get(v_snd_3105_, 0);
v_snd_3108_ = lean_ctor_get(v_snd_3105_, 1);
v_isSharedCheck_3118_ = !lean_is_exclusive(v_snd_3105_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3110_ = v_snd_3105_;
v_isShared_3111_ = v_isSharedCheck_3118_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_snd_3108_);
lean_inc(v_fst_3107_);
lean_dec(v_snd_3105_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3118_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3112_; lean_object* v___x_3114_; 
v___x_3112_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_3112_, 0, v_fst_3106_);
lean_ctor_set(v___x_3112_, 1, v_requestStream_3094_);
lean_ctor_set(v___x_3112_, 2, v_keepAliveTimeout_3095_);
lean_ctor_set(v___x_3112_, 3, v_currentTimeout_3096_);
lean_ctor_set(v___x_3112_, 4, v_headerTimeout_3097_);
lean_ctor_set(v___x_3112_, 5, v_response_3098_);
lean_ctor_set(v___x_3112_, 6, v_fst_3107_);
lean_ctor_set(v___x_3112_, 7, v_expectData_3100_);
lean_ctor_set(v___x_3112_, 8, v_pendingHead_3102_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*9, v_requiresData_3099_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*9 + 1, v___x_3101_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 0, v___x_3112_);
v___x_3114_ = v___x_3110_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v___x_3112_);
lean_ctor_set(v_reuseFailAlloc_3117_, 1, v_snd_3108_);
v___x_3114_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
return v___x_3116_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object* v_requestStream_3119_, lean_object* v_keepAliveTimeout_3120_, lean_object* v_currentTimeout_3121_, lean_object* v_headerTimeout_3122_, lean_object* v_response_3123_, lean_object* v_requiresData_3124_, lean_object* v_expectData_3125_, lean_object* v___x_3126_, lean_object* v_pendingHead_3127_, lean_object* v_____x_3128_, lean_object* v___y_3129_){
_start:
{
uint8_t v_requiresData_boxed_3130_; uint8_t v___x_7600__boxed_3131_; lean_object* v_res_3132_; 
v_requiresData_boxed_3130_ = lean_unbox(v_requiresData_3124_);
v___x_7600__boxed_3131_ = lean_unbox(v___x_3126_);
v_res_3132_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(v_requestStream_3119_, v_keepAliveTimeout_3120_, v_currentTimeout_3121_, v_headerTimeout_3122_, v_response_3123_, v_requiresData_boxed_3130_, v_expectData_3125_, v___x_7600__boxed_3131_, v_pendingHead_3127_, v_____x_3128_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object* v___f_3133_, lean_object* v_x_3134_){
_start:
{
if (lean_obj_tag(v_x_3134_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v___f_3133_);
v_a_3136_ = lean_ctor_get(v_x_3134_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v_x_3134_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3138_ = v_x_3134_;
v_isShared_3139_ = v_isSharedCheck_3144_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v_x_3134_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3144_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
lean_object* v___x_3142_; 
v___x_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3146_; 
v_a_3145_ = lean_ctor_get(v_x_3134_, 0);
lean_inc(v_a_3145_);
lean_dec_ref_known(v_x_3134_, 1);
v___x_3146_ = lean_apply_2(v___f_3133_, v_a_3145_, lean_box(0));
return v___x_3146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object* v___f_3147_, lean_object* v_x_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(v___f_3147_, v_x_3148_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(uint8_t v___x_3151_, lean_object* v_x_3152_){
_start:
{
if (lean_obj_tag(v_x_3152_) == 0)
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3162_; 
v_a_3154_ = lean_ctor_get(v_x_3152_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v_x_3152_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3156_ = v_x_3152_;
v_isShared_3157_ = v_isSharedCheck_3162_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v_x_3152_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3162_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
lean_object* v___x_3160_; 
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3159_);
return v___x_3160_;
}
}
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3182_; 
v_a_3163_ = lean_ctor_get(v_x_3152_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v_x_3152_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3165_ = v_x_3152_;
v_isShared_3166_ = v_isSharedCheck_3182_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v_x_3152_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3182_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v_fst_3167_; lean_object* v_snd_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3181_; 
v_fst_3167_ = lean_ctor_get(v_a_3163_, 0);
v_snd_3168_ = lean_ctor_get(v_a_3163_, 1);
v_isSharedCheck_3181_ = !lean_is_exclusive(v_a_3163_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3170_ = v_a_3163_;
v_isShared_3171_ = v_isSharedCheck_3181_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_snd_3168_);
lean_inc(v_fst_3167_);
lean_dec(v_a_3163_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3181_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3172_ = lean_box(v___x_3151_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 1, v___x_3172_);
lean_ctor_set(v___x_3170_, 0, v_snd_3168_);
v___x_3174_ = v___x_3170_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_snd_3168_);
lean_ctor_set(v_reuseFailAlloc_3180_, 1, v___x_3172_);
v___x_3174_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
lean_object* v___x_3175_; lean_object* v___x_3177_; 
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v_fst_3167_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
if (v_isShared_3166_ == 0)
{
lean_ctor_set(v___x_3165_, 0, v___x_3175_);
v___x_3177_ = v___x_3165_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3175_);
v___x_3177_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; 
v___x_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
return v___x_3178_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object* v___x_3183_, lean_object* v_x_3184_, lean_object* v___y_3185_){
_start:
{
uint8_t v___x_7668__boxed_3186_; lean_object* v_res_3187_; 
v___x_7668__boxed_3186_ = lean_unbox(v___x_3183_);
v_res_3187_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(v___x_7668__boxed_3186_, v_x_3184_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object* v_snd_3188_, uint8_t v___x_3189_, lean_object* v_fst_3190_, lean_object* v_x_3191_){
_start:
{
if (lean_obj_tag(v_x_3191_) == 0)
{
lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3201_; 
lean_dec_ref(v_fst_3190_);
lean_dec(v_snd_3188_);
v_a_3193_ = lean_ctor_get(v_x_3191_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v_x_3191_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3195_ = v_x_3191_;
v_isShared_3196_ = v_isSharedCheck_3201_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v_x_3191_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3201_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3193_);
v___x_3198_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
lean_object* v___x_3199_; 
v___x_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
return v___x_3199_;
}
}
}
else
{
lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3212_; 
v_isSharedCheck_3212_ = !lean_is_exclusive(v_x_3191_);
if (v_isSharedCheck_3212_ == 0)
{
lean_object* v_unused_3213_; 
v_unused_3213_ = lean_ctor_get(v_x_3191_, 0);
lean_dec(v_unused_3213_);
v___x_3203_ = v_x_3191_;
v_isShared_3204_ = v_isSharedCheck_3212_;
goto v_resetjp_3202_;
}
else
{
lean_dec(v_x_3191_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3212_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3209_; 
v___x_3205_ = lean_box(v___x_3189_);
v___x_3206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3206_, 0, v_snd_3188_);
lean_ctor_set(v___x_3206_, 1, v___x_3205_);
v___x_3207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3207_, 0, v_fst_3190_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v___x_3207_);
v___x_3209_ = v___x_3203_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3207_);
v___x_3209_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
lean_object* v___x_3210_; 
v___x_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
return v___x_3210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object* v_snd_3214_, lean_object* v___x_3215_, lean_object* v_fst_3216_, lean_object* v_x_3217_, lean_object* v___y_3218_){
_start:
{
uint8_t v___x_7736__boxed_3219_; lean_object* v_res_3220_; 
v___x_7736__boxed_3219_ = lean_unbox(v___x_3215_);
v_res_3220_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(v_snd_3214_, v___x_7736__boxed_3219_, v_fst_3216_, v_x_3217_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object* v_inst_3221_, lean_object* v_handler_3222_, uint8_t v___x_3223_, lean_object* v___f_3224_, lean_object* v_x_3225_){
_start:
{
if (lean_obj_tag(v_x_3225_) == 0)
{
lean_object* v_a_3227_; lean_object* v_onFailure_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
v_a_3227_ = lean_ctor_get(v_x_3225_, 0);
lean_inc(v_a_3227_);
lean_dec_ref_known(v_x_3225_, 1);
v_onFailure_3228_ = lean_ctor_get(v_inst_3221_, 2);
lean_inc_ref(v_onFailure_3228_);
lean_dec_ref(v_inst_3221_);
v___x_3229_ = lean_unsigned_to_nat(0u);
v___x_3230_ = lean_apply_3(v_onFailure_3228_, v_handler_3222_, v_a_3227_, lean_box(0));
v___x_3231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3229_, v___x_3223_, v___x_3230_, v___f_3224_);
return v___x_3231_;
}
else
{
lean_object* v___x_3232_; 
lean_dec_ref(v___f_3224_);
lean_dec(v_handler_3222_);
lean_dec_ref(v_inst_3221_);
v___x_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3232_, 0, v_x_3225_);
return v___x_3232_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object* v_inst_3233_, lean_object* v_handler_3234_, lean_object* v___x_3235_, lean_object* v___f_3236_, lean_object* v_x_3237_, lean_object* v___y_3238_){
_start:
{
uint8_t v___x_7794__boxed_3239_; lean_object* v_res_3240_; 
v___x_7794__boxed_3239_ = lean_unbox(v___x_3235_);
v_res_3240_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(v_inst_3233_, v_handler_3234_, v___x_7794__boxed_3239_, v___f_3236_, v_x_3237_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t v___x_3241_, lean_object* v___f_3242_, uint8_t v___x_3243_, lean_object* v_inst_3244_, lean_object* v_handler_3245_, lean_object* v_inst_3246_, lean_object* v___f_3247_, lean_object* v___f_3248_, lean_object* v_x_3249_){
_start:
{
if (lean_obj_tag(v_x_3249_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3259_; 
lean_dec_ref(v___f_3248_);
lean_dec_ref(v___f_3247_);
lean_dec_ref(v_inst_3246_);
lean_dec(v_handler_3245_);
lean_dec_ref(v_inst_3244_);
lean_dec_ref(v___f_3242_);
v_a_3251_ = lean_ctor_get(v_x_3249_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v_x_3249_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3253_ = v_x_3249_;
v_isShared_3254_ = v_isSharedCheck_3259_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v_x_3249_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3259_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3257_; 
v___x_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3256_);
return v___x_3257_;
}
}
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3293_; 
v_a_3260_ = lean_ctor_get(v_x_3249_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v_x_3249_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3262_ = v_x_3249_;
v_isShared_3263_ = v_isSharedCheck_3293_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v_x_3249_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3293_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v_snd_3264_; 
v_snd_3264_ = lean_ctor_get(v_a_3260_, 1);
lean_inc(v_snd_3264_);
if (lean_obj_tag(v_snd_3264_) == 0)
{
lean_object* v_fst_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3280_; 
lean_dec_ref(v___f_3248_);
lean_dec_ref(v___f_3247_);
lean_dec_ref(v_inst_3246_);
lean_dec(v_handler_3245_);
lean_dec_ref(v_inst_3244_);
v_fst_3265_ = lean_ctor_get(v_a_3260_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_a_3260_);
if (v_isSharedCheck_3280_ == 0)
{
lean_object* v_unused_3281_; 
v_unused_3281_ = lean_ctor_get(v_a_3260_, 1);
lean_dec(v_unused_3281_);
v___x_3267_ = v_a_3260_;
v_isShared_3268_ = v_isSharedCheck_3280_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_fst_3265_);
lean_dec(v_a_3260_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3280_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3269_; lean_object* v___x_3271_; 
v___x_3269_ = lean_box(v___x_3241_);
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 1, v___x_3269_);
lean_ctor_set(v___x_3267_, 0, v_snd_3264_);
v___x_3271_ = v___x_3267_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_snd_3264_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v___x_3269_);
v___x_3271_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3275_; 
v___x_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3272_, 0, v_fst_3265_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_unsigned_to_nat(0u);
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 0, v___x_3272_);
v___x_3275_ = v___x_3262_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3272_);
v___x_3275_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
v___x_3277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3273_, v___x_3241_, v___x_3276_, v___f_3242_);
return v___x_3277_;
}
}
}
}
else
{
lean_object* v_fst_3282_; lean_object* v_val_3283_; lean_object* v___x_3284_; lean_object* v___f_3285_; lean_object* v___x_3286_; lean_object* v___f_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
lean_del_object(v___x_3262_);
lean_dec_ref(v___f_3242_);
v_fst_3282_ = lean_ctor_get(v_a_3260_, 0);
lean_inc_n(v_fst_3282_, 2);
lean_dec(v_a_3260_);
v_val_3283_ = lean_ctor_get(v_snd_3264_, 0);
lean_inc(v_val_3283_);
v___x_3284_ = lean_box(v___x_3243_);
v___f_3285_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed), 5, 3);
lean_closure_set(v___f_3285_, 0, v_snd_3264_);
lean_closure_set(v___f_3285_, 1, v___x_3284_);
lean_closure_set(v___f_3285_, 2, v_fst_3282_);
v___x_3286_ = lean_box(v___x_3241_);
v___f_3287_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed), 6, 4);
lean_closure_set(v___f_3287_, 0, v_inst_3244_);
lean_closure_set(v___f_3287_, 1, v_handler_3245_);
lean_closure_set(v___f_3287_, 2, v___x_3286_);
lean_closure_set(v___f_3287_, 3, v___f_3285_);
v___x_3288_ = lean_unsigned_to_nat(0u);
v___x_3289_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_3246_, v_fst_3282_, v_val_3283_);
v___x_3290_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3288_, v___x_3241_, v___x_3289_, v___f_3247_);
v___x_3291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3288_, v___x_3241_, v___x_3290_, v___f_3287_);
v___x_3292_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3288_, v___x_3241_, v___x_3291_, v___f_3248_);
return v___x_3292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object* v___x_3294_, lean_object* v___f_3295_, lean_object* v___x_3296_, lean_object* v_inst_3297_, lean_object* v_handler_3298_, lean_object* v_inst_3299_, lean_object* v___f_3300_, lean_object* v___f_3301_, lean_object* v_x_3302_, lean_object* v___y_3303_){
_start:
{
uint8_t v___x_7819__boxed_3304_; uint8_t v___x_7821__boxed_3305_; lean_object* v_res_3306_; 
v___x_7819__boxed_3304_ = lean_unbox(v___x_3294_);
v___x_7821__boxed_3305_ = lean_unbox(v___x_3296_);
v_res_3306_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(v___x_7819__boxed_3304_, v___f_3295_, v___x_7821__boxed_3305_, v_inst_3297_, v_handler_3298_, v_inst_3299_, v___f_3300_, v___f_3301_, v_x_3302_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object* v_state_3307_, lean_object* v_x_3308_){
_start:
{
if (lean_obj_tag(v_x_3308_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3318_; 
lean_dec_ref(v_state_3307_);
v_a_3310_ = lean_ctor_get(v_x_3308_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v_x_3308_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3312_ = v_x_3308_;
v_isShared_3313_ = v_isSharedCheck_3318_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v_x_3308_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3318_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
lean_object* v___x_3316_; 
v___x_3316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3315_);
return v___x_3316_;
}
}
}
else
{
lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3348_; 
v_isSharedCheck_3348_ = !lean_is_exclusive(v_x_3308_);
if (v_isSharedCheck_3348_ == 0)
{
lean_object* v_unused_3349_; 
v_unused_3349_ = lean_ctor_get(v_x_3308_, 0);
lean_dec(v_unused_3349_);
v___x_3320_ = v_x_3308_;
v_isShared_3321_ = v_isSharedCheck_3348_;
goto v_resetjp_3319_;
}
else
{
lean_dec(v_x_3308_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3348_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v_machine_3322_; lean_object* v_requestStream_3323_; lean_object* v_keepAliveTimeout_3324_; lean_object* v_currentTimeout_3325_; lean_object* v_headerTimeout_3326_; lean_object* v_response_3327_; lean_object* v_respStream_3328_; uint8_t v_requiresData_3329_; lean_object* v_expectData_3330_; lean_object* v_pendingHead_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3347_; 
v_machine_3322_ = lean_ctor_get(v_state_3307_, 0);
v_requestStream_3323_ = lean_ctor_get(v_state_3307_, 1);
v_keepAliveTimeout_3324_ = lean_ctor_get(v_state_3307_, 2);
v_currentTimeout_3325_ = lean_ctor_get(v_state_3307_, 3);
v_headerTimeout_3326_ = lean_ctor_get(v_state_3307_, 4);
v_response_3327_ = lean_ctor_get(v_state_3307_, 5);
v_respStream_3328_ = lean_ctor_get(v_state_3307_, 6);
v_requiresData_3329_ = lean_ctor_get_uint8(v_state_3307_, sizeof(void*)*9);
v_expectData_3330_ = lean_ctor_get(v_state_3307_, 7);
v_pendingHead_3331_ = lean_ctor_get(v_state_3307_, 8);
v_isSharedCheck_3347_ = !lean_is_exclusive(v_state_3307_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3333_ = v_state_3307_;
v_isShared_3334_ = v_isSharedCheck_3347_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_pendingHead_3331_);
lean_inc(v_expectData_3330_);
lean_inc(v_respStream_3328_);
lean_inc(v_response_3327_);
lean_inc(v_headerTimeout_3326_);
lean_inc(v_currentTimeout_3325_);
lean_inc(v_keepAliveTimeout_3324_);
lean_inc(v_requestStream_3323_);
lean_inc(v_machine_3322_);
lean_dec(v_state_3307_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3347_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; uint8_t v___x_3337_; lean_object* v___x_3339_; 
v___x_3335_ = lean_box(31);
v___x_3336_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3322_, v___x_3335_);
v___x_3337_ = 0;
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 0, v___x_3336_);
v___x_3339_ = v___x_3333_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3346_, 1, v_requestStream_3323_);
lean_ctor_set(v_reuseFailAlloc_3346_, 2, v_keepAliveTimeout_3324_);
lean_ctor_set(v_reuseFailAlloc_3346_, 3, v_currentTimeout_3325_);
lean_ctor_set(v_reuseFailAlloc_3346_, 4, v_headerTimeout_3326_);
lean_ctor_set(v_reuseFailAlloc_3346_, 5, v_response_3327_);
lean_ctor_set(v_reuseFailAlloc_3346_, 6, v_respStream_3328_);
lean_ctor_set(v_reuseFailAlloc_3346_, 7, v_expectData_3330_);
lean_ctor_set(v_reuseFailAlloc_3346_, 8, v_pendingHead_3331_);
lean_ctor_set_uint8(v_reuseFailAlloc_3346_, sizeof(void*)*9, v_requiresData_3329_);
v___x_3339_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3343_; 
lean_ctor_set_uint8(v___x_3339_, sizeof(void*)*9 + 1, v___x_3337_);
v___x_3340_ = lean_box(v___x_3337_);
v___x_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 0, v___x_3341_);
v___x_3343_ = v___x_3320_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v___x_3341_);
v___x_3343_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
lean_object* v___x_3344_; 
v___x_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3343_);
return v___x_3344_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object* v_state_3350_, lean_object* v_x_3351_, lean_object* v___y_3352_){
_start:
{
lean_object* v_res_3353_; 
v_res_3353_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(v_state_3350_, v_x_3351_);
return v_res_3353_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2(void){
_start:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3358_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1));
v___x_3359_ = lean_mk_io_user_error(v___x_3358_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object* v_inst_3360_, lean_object* v_inst_3361_, lean_object* v_handler_3362_, lean_object* v_config_3363_, lean_object* v_event_3364_, lean_object* v_state_3365_){
_start:
{
switch(lean_obj_tag(v_event_3364_))
{
case 0:
{
lean_object* v_x_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3474_; 
lean_dec(v_handler_3362_);
lean_dec_ref(v_inst_3361_);
lean_dec_ref(v_inst_3360_);
v_x_3367_ = lean_ctor_get(v_event_3364_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v_event_3364_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3369_ = v_event_3364_;
v_isShared_3370_ = v_isSharedCheck_3474_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_x_3367_);
lean_dec(v_event_3364_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3474_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
if (lean_obj_tag(v_x_3367_) == 0)
{
lean_object* v_machine_3371_; lean_object* v_reader_3372_; lean_object* v_requestStream_3373_; lean_object* v_keepAliveTimeout_3374_; lean_object* v_currentTimeout_3375_; lean_object* v_headerTimeout_3376_; lean_object* v_response_3377_; lean_object* v_respStream_3378_; uint8_t v_requiresData_3379_; lean_object* v_expectData_3380_; uint8_t v_handlerDispatched_3381_; lean_object* v_pendingHead_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3425_; 
lean_dec_ref(v_config_3363_);
v_machine_3371_ = lean_ctor_get(v_state_3365_, 0);
lean_inc_ref(v_machine_3371_);
v_reader_3372_ = lean_ctor_get(v_machine_3371_, 0);
lean_inc_ref(v_reader_3372_);
v_requestStream_3373_ = lean_ctor_get(v_state_3365_, 1);
v_keepAliveTimeout_3374_ = lean_ctor_get(v_state_3365_, 2);
v_currentTimeout_3375_ = lean_ctor_get(v_state_3365_, 3);
v_headerTimeout_3376_ = lean_ctor_get(v_state_3365_, 4);
v_response_3377_ = lean_ctor_get(v_state_3365_, 5);
v_respStream_3378_ = lean_ctor_get(v_state_3365_, 6);
v_requiresData_3379_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3380_ = lean_ctor_get(v_state_3365_, 7);
v_handlerDispatched_3381_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9 + 1);
v_pendingHead_3382_ = lean_ctor_get(v_state_3365_, 8);
v_isSharedCheck_3425_ = !lean_is_exclusive(v_state_3365_);
if (v_isSharedCheck_3425_ == 0)
{
lean_object* v_unused_3426_; 
v_unused_3426_ = lean_ctor_get(v_state_3365_, 0);
lean_dec(v_unused_3426_);
v___x_3384_ = v_state_3365_;
v_isShared_3385_ = v_isSharedCheck_3425_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_pendingHead_3382_);
lean_inc(v_expectData_3380_);
lean_inc(v_respStream_3378_);
lean_inc(v_response_3377_);
lean_inc(v_headerTimeout_3376_);
lean_inc(v_currentTimeout_3375_);
lean_inc(v_keepAliveTimeout_3374_);
lean_inc(v_requestStream_3373_);
lean_dec(v_state_3365_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3425_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v_writer_3386_; lean_object* v_config_3387_; lean_object* v_events_3388_; lean_object* v_error_3389_; lean_object* v_instant_3390_; uint8_t v_keepAlive_3391_; uint8_t v_forcedFlush_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3423_; 
v_writer_3386_ = lean_ctor_get(v_machine_3371_, 1);
v_config_3387_ = lean_ctor_get(v_machine_3371_, 2);
v_events_3388_ = lean_ctor_get(v_machine_3371_, 3);
v_error_3389_ = lean_ctor_get(v_machine_3371_, 4);
v_instant_3390_ = lean_ctor_get(v_machine_3371_, 5);
v_keepAlive_3391_ = lean_ctor_get_uint8(v_machine_3371_, sizeof(void*)*6);
v_forcedFlush_3392_ = lean_ctor_get_uint8(v_machine_3371_, sizeof(void*)*6 + 1);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_machine_3371_);
if (v_isSharedCheck_3423_ == 0)
{
lean_object* v_unused_3424_; 
v_unused_3424_ = lean_ctor_get(v_machine_3371_, 0);
lean_dec(v_unused_3424_);
v___x_3394_ = v_machine_3371_;
v_isShared_3395_ = v_isSharedCheck_3423_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_instant_3390_);
lean_inc(v_error_3389_);
lean_inc(v_events_3388_);
lean_inc(v_config_3387_);
lean_inc(v_writer_3386_);
lean_dec(v_machine_3371_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3423_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v_state_3396_; lean_object* v_input_3397_; lean_object* v_messageHead_3398_; lean_object* v_messageCount_3399_; lean_object* v_bodyBytesRead_3400_; lean_object* v_headerBytesRead_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3422_; 
v_state_3396_ = lean_ctor_get(v_reader_3372_, 0);
v_input_3397_ = lean_ctor_get(v_reader_3372_, 1);
v_messageHead_3398_ = lean_ctor_get(v_reader_3372_, 2);
v_messageCount_3399_ = lean_ctor_get(v_reader_3372_, 3);
v_bodyBytesRead_3400_ = lean_ctor_get(v_reader_3372_, 4);
v_headerBytesRead_3401_ = lean_ctor_get(v_reader_3372_, 5);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_reader_3372_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3403_ = v_reader_3372_;
v_isShared_3404_ = v_isSharedCheck_3422_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_headerBytesRead_3401_);
lean_inc(v_bodyBytesRead_3400_);
lean_inc(v_messageCount_3399_);
lean_inc(v_messageHead_3398_);
lean_inc(v_input_3397_);
lean_inc(v_state_3396_);
lean_dec(v_reader_3372_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3422_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
uint8_t v___x_3405_; lean_object* v___x_3407_; 
v___x_3405_ = 1;
if (v_isShared_3404_ == 0)
{
v___x_3407_ = v___x_3403_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_state_3396_);
lean_ctor_set(v_reuseFailAlloc_3421_, 1, v_input_3397_);
lean_ctor_set(v_reuseFailAlloc_3421_, 2, v_messageHead_3398_);
lean_ctor_set(v_reuseFailAlloc_3421_, 3, v_messageCount_3399_);
lean_ctor_set(v_reuseFailAlloc_3421_, 4, v_bodyBytesRead_3400_);
lean_ctor_set(v_reuseFailAlloc_3421_, 5, v_headerBytesRead_3401_);
v___x_3407_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
uint8_t v___x_3408_; lean_object* v___x_3410_; 
lean_ctor_set_uint8(v___x_3407_, sizeof(void*)*6, v___x_3405_);
v___x_3408_ = 0;
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 0, v___x_3407_);
v___x_3410_ = v___x_3394_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3407_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v_writer_3386_);
lean_ctor_set(v_reuseFailAlloc_3420_, 2, v_config_3387_);
lean_ctor_set(v_reuseFailAlloc_3420_, 3, v_events_3388_);
lean_ctor_set(v_reuseFailAlloc_3420_, 4, v_error_3389_);
lean_ctor_set(v_reuseFailAlloc_3420_, 5, v_instant_3390_);
lean_ctor_set_uint8(v_reuseFailAlloc_3420_, sizeof(void*)*6, v_keepAlive_3391_);
lean_ctor_set_uint8(v_reuseFailAlloc_3420_, sizeof(void*)*6 + 1, v_forcedFlush_3392_);
v___x_3410_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3412_; 
lean_ctor_set_uint8(v___x_3410_, sizeof(void*)*6 + 2, v___x_3408_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3410_);
v___x_3412_ = v___x_3384_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v_requestStream_3373_);
lean_ctor_set(v_reuseFailAlloc_3419_, 2, v_keepAliveTimeout_3374_);
lean_ctor_set(v_reuseFailAlloc_3419_, 3, v_currentTimeout_3375_);
lean_ctor_set(v_reuseFailAlloc_3419_, 4, v_headerTimeout_3376_);
lean_ctor_set(v_reuseFailAlloc_3419_, 5, v_response_3377_);
lean_ctor_set(v_reuseFailAlloc_3419_, 6, v_respStream_3378_);
lean_ctor_set(v_reuseFailAlloc_3419_, 7, v_expectData_3380_);
lean_ctor_set(v_reuseFailAlloc_3419_, 8, v_pendingHead_3382_);
lean_ctor_set_uint8(v_reuseFailAlloc_3419_, sizeof(void*)*9, v_requiresData_3379_);
lean_ctor_set_uint8(v_reuseFailAlloc_3419_, sizeof(void*)*9 + 1, v_handlerDispatched_3381_);
v___x_3412_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3413_ = lean_box(v___x_3408_);
v___x_3414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3412_);
lean_ctor_set(v___x_3414_, 1, v___x_3413_);
if (v_isShared_3370_ == 0)
{
lean_ctor_set_tag(v___x_3369_, 1);
lean_ctor_set(v___x_3369_, 0, v___x_3414_);
v___x_3416_ = v___x_3369_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; 
v___x_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
return v___x_3417_;
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
lean_object* v_val_3427_; lean_object* v_machine_3428_; lean_object* v_requestStream_3429_; lean_object* v_keepAliveTimeout_3430_; lean_object* v_currentTimeout_3431_; lean_object* v_response_3432_; lean_object* v_respStream_3433_; uint8_t v_requiresData_3434_; lean_object* v_expectData_3435_; uint8_t v_handlerDispatched_3436_; lean_object* v_pendingHead_3437_; lean_object* v___f_3438_; 
lean_del_object(v___x_3369_);
v_val_3427_ = lean_ctor_get(v_x_3367_, 0);
lean_inc_n(v_val_3427_, 2);
lean_dec_ref_known(v_x_3367_, 1);
v_machine_3428_ = lean_ctor_get(v_state_3365_, 0);
v_requestStream_3429_ = lean_ctor_get(v_state_3365_, 1);
v_keepAliveTimeout_3430_ = lean_ctor_get(v_state_3365_, 2);
lean_inc(v_keepAliveTimeout_3430_);
v_currentTimeout_3431_ = lean_ctor_get(v_state_3365_, 3);
v_response_3432_ = lean_ctor_get(v_state_3365_, 5);
v_respStream_3433_ = lean_ctor_get(v_state_3365_, 6);
v_requiresData_3434_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3435_ = lean_ctor_get(v_state_3365_, 7);
v_handlerDispatched_3436_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9 + 1);
v_pendingHead_3437_ = lean_ctor_get(v_state_3365_, 8);
v___f_3438_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3438_, 0, v_val_3427_);
if (lean_obj_tag(v_keepAliveTimeout_3430_) == 0)
{
lean_object* v___x_3439_; lean_object* v___x_3440_; 
lean_dec_ref(v___f_3438_);
lean_dec_ref(v_config_3363_);
v___x_3439_ = lean_box(0);
v___x_3440_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_3427_, v___x_3439_, v_state_3365_);
return v___x_3440_;
}
else
{
lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3472_; 
lean_inc(v_pendingHead_3437_);
lean_inc(v_expectData_3435_);
lean_inc(v_respStream_3433_);
lean_inc_ref(v_response_3432_);
lean_inc(v_currentTimeout_3431_);
lean_inc_ref(v_requestStream_3429_);
lean_inc_ref(v_machine_3428_);
lean_dec(v_val_3427_);
lean_dec_ref(v_state_3365_);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_keepAliveTimeout_3430_);
if (v_isSharedCheck_3472_ == 0)
{
lean_object* v_unused_3473_; 
v_unused_3473_ = lean_ctor_get(v_keepAliveTimeout_3430_, 0);
lean_dec(v_unused_3473_);
v___x_3442_ = v_keepAliveTimeout_3430_;
v_isShared_3443_ = v_isSharedCheck_3472_;
goto v_resetjp_3441_;
}
else
{
lean_dec(v_keepAliveTimeout_3430_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3472_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___f_3446_; lean_object* v___x_3447_; uint8_t v___x_3448_; lean_object* v_val_3450_; lean_object* v___x_3455_; 
v___x_3444_ = lean_box(v_requiresData_3434_);
v___x_3445_ = lean_box(v_handlerDispatched_3436_);
v___f_3446_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3446_, 0, v_config_3363_);
lean_closure_set(v___f_3446_, 1, v_machine_3428_);
lean_closure_set(v___f_3446_, 2, v_requestStream_3429_);
lean_closure_set(v___f_3446_, 3, v_currentTimeout_3431_);
lean_closure_set(v___f_3446_, 4, v_response_3432_);
lean_closure_set(v___f_3446_, 5, v_respStream_3433_);
lean_closure_set(v___f_3446_, 6, v___x_3444_);
lean_closure_set(v___f_3446_, 7, v_expectData_3435_);
lean_closure_set(v___f_3446_, 8, v___x_3445_);
lean_closure_set(v___f_3446_, 9, v_pendingHead_3437_);
lean_closure_set(v___f_3446_, 10, v___f_3438_);
v___x_3447_ = lean_unsigned_to_nat(0u);
v___x_3448_ = 0;
v___x_3455_ = lean_get_current_time();
if (lean_obj_tag(v___x_3455_) == 0)
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3455_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3455_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
lean_ctor_set_tag(v___x_3458_, 1);
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
v_val_3450_ = v___x_3461_;
goto v___jp_3449_;
}
}
}
else
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
v_a_3464_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3455_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3455_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
lean_ctor_set_tag(v___x_3466_, 0);
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
v_val_3450_ = v___x_3469_;
goto v___jp_3449_;
}
}
}
v___jp_3449_:
{
lean_object* v___x_3452_; 
if (v_isShared_3443_ == 0)
{
lean_ctor_set_tag(v___x_3442_, 0);
lean_ctor_set(v___x_3442_, 0, v_val_3450_);
v___x_3452_ = v___x_3442_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_val_3450_);
v___x_3452_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
lean_object* v___x_3453_; 
v___x_3453_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3447_, v___x_3448_, v___x_3452_, v___f_3446_);
return v___x_3453_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_x_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3586_; 
lean_dec_ref(v_config_3363_);
lean_dec(v_handler_3362_);
lean_dec_ref(v_inst_3360_);
v_x_3475_ = lean_ctor_get(v_event_3364_, 0);
v_isSharedCheck_3586_ = !lean_is_exclusive(v_event_3364_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3477_ = v_event_3364_;
v_isShared_3478_ = v_isSharedCheck_3586_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_x_3475_);
lean_dec(v_event_3364_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3586_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
if (lean_obj_tag(v_x_3475_) == 0)
{
lean_object* v_machine_3479_; lean_object* v_requestStream_3480_; lean_object* v_keepAliveTimeout_3481_; lean_object* v_currentTimeout_3482_; lean_object* v_headerTimeout_3483_; lean_object* v_response_3484_; lean_object* v_respStream_3485_; uint8_t v_requiresData_3486_; lean_object* v_expectData_3487_; uint8_t v_handlerDispatched_3488_; lean_object* v_pendingHead_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___f_3492_; 
lean_del_object(v___x_3477_);
v_machine_3479_ = lean_ctor_get(v_state_3365_, 0);
lean_inc_ref_n(v_machine_3479_, 2);
v_requestStream_3480_ = lean_ctor_get(v_state_3365_, 1);
lean_inc_ref_n(v_requestStream_3480_, 2);
v_keepAliveTimeout_3481_ = lean_ctor_get(v_state_3365_, 2);
lean_inc_n(v_keepAliveTimeout_3481_, 2);
v_currentTimeout_3482_ = lean_ctor_get(v_state_3365_, 3);
lean_inc_n(v_currentTimeout_3482_, 2);
v_headerTimeout_3483_ = lean_ctor_get(v_state_3365_, 4);
lean_inc_n(v_headerTimeout_3483_, 2);
v_response_3484_ = lean_ctor_get(v_state_3365_, 5);
lean_inc_ref_n(v_response_3484_, 2);
v_respStream_3485_ = lean_ctor_get(v_state_3365_, 6);
lean_inc(v_respStream_3485_);
v_requiresData_3486_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3487_ = lean_ctor_get(v_state_3365_, 7);
lean_inc_n(v_expectData_3487_, 2);
v_handlerDispatched_3488_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9 + 1);
v_pendingHead_3489_ = lean_ctor_get(v_state_3365_, 8);
lean_inc_n(v_pendingHead_3489_, 2);
lean_dec_ref(v_state_3365_);
v___x_3490_ = lean_box(v_requiresData_3486_);
v___x_3491_ = lean_box(v_handlerDispatched_3488_);
v___f_3492_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_3492_, 0, v_machine_3479_);
lean_closure_set(v___f_3492_, 1, v_requestStream_3480_);
lean_closure_set(v___f_3492_, 2, v_keepAliveTimeout_3481_);
lean_closure_set(v___f_3492_, 3, v_currentTimeout_3482_);
lean_closure_set(v___f_3492_, 4, v_headerTimeout_3483_);
lean_closure_set(v___f_3492_, 5, v_response_3484_);
lean_closure_set(v___f_3492_, 6, v___x_3490_);
lean_closure_set(v___f_3492_, 7, v_expectData_3487_);
lean_closure_set(v___f_3492_, 8, v___x_3491_);
lean_closure_set(v___f_3492_, 9, v_pendingHead_3489_);
if (lean_obj_tag(v_respStream_3485_) == 1)
{
lean_object* v_val_3493_; lean_object* v_close_3494_; lean_object* v_isClosed_3495_; lean_object* v___f_3496_; lean_object* v___f_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
lean_dec(v_pendingHead_3489_);
lean_dec(v_expectData_3487_);
lean_dec_ref(v_response_3484_);
lean_dec(v_headerTimeout_3483_);
lean_dec(v_currentTimeout_3482_);
lean_dec(v_keepAliveTimeout_3481_);
lean_dec_ref(v_requestStream_3480_);
lean_dec_ref(v_machine_3479_);
v_val_3493_ = lean_ctor_get(v_respStream_3485_, 0);
lean_inc_n(v_val_3493_, 2);
lean_dec_ref_known(v_respStream_3485_, 1);
v_close_3494_ = lean_ctor_get(v_inst_3361_, 1);
lean_inc_ref(v_close_3494_);
v_isClosed_3495_ = lean_ctor_get(v_inst_3361_, 2);
lean_inc_ref(v_isClosed_3495_);
lean_dec_ref(v_inst_3361_);
lean_inc_ref(v___f_3492_);
v___f_3496_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3496_, 0, v___f_3492_);
v___f_3497_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3497_, 0, v_close_3494_);
lean_closure_set(v___f_3497_, 1, v_val_3493_);
lean_closure_set(v___f_3497_, 2, v___f_3496_);
lean_closure_set(v___f_3497_, 3, v___f_3492_);
v___x_3498_ = lean_unsigned_to_nat(0u);
v___x_3499_ = 0;
v___x_3500_ = lean_apply_2(v_isClosed_3495_, v_val_3493_, lean_box(0));
v___x_3501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3498_, v___x_3499_, v___x_3500_, v___f_3497_);
return v___x_3501_;
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
lean_dec_ref(v___f_3492_);
lean_dec(v_respStream_3485_);
lean_dec_ref(v_inst_3361_);
v___x_3502_ = lean_box(0);
v___x_3503_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_3479_, v_requestStream_3480_, v_keepAliveTimeout_3481_, v_currentTimeout_3482_, v_headerTimeout_3483_, v_response_3484_, v_requiresData_3486_, v_expectData_3487_, v_handlerDispatched_3488_, v_pendingHead_3489_, v___x_3502_);
return v___x_3503_;
}
}
else
{
lean_object* v_val_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3585_; 
lean_dec_ref(v_inst_3361_);
v_val_3504_ = lean_ctor_get(v_x_3475_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_x_3475_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3506_ = v_x_3475_;
v_isShared_3507_ = v_isSharedCheck_3585_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_val_3504_);
lean_dec(v_x_3475_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3585_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v_machine_3508_; lean_object* v_requestStream_3509_; lean_object* v_keepAliveTimeout_3510_; lean_object* v_currentTimeout_3511_; lean_object* v_headerTimeout_3512_; lean_object* v_response_3513_; lean_object* v_respStream_3514_; uint8_t v_requiresData_3515_; lean_object* v_expectData_3516_; uint8_t v_handlerDispatched_3517_; lean_object* v_pendingHead_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3584_; 
v_machine_3508_ = lean_ctor_get(v_state_3365_, 0);
v_requestStream_3509_ = lean_ctor_get(v_state_3365_, 1);
v_keepAliveTimeout_3510_ = lean_ctor_get(v_state_3365_, 2);
v_currentTimeout_3511_ = lean_ctor_get(v_state_3365_, 3);
v_headerTimeout_3512_ = lean_ctor_get(v_state_3365_, 4);
v_response_3513_ = lean_ctor_get(v_state_3365_, 5);
v_respStream_3514_ = lean_ctor_get(v_state_3365_, 6);
v_requiresData_3515_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3516_ = lean_ctor_get(v_state_3365_, 7);
v_handlerDispatched_3517_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9 + 1);
v_pendingHead_3518_ = lean_ctor_get(v_state_3365_, 8);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_state_3365_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3520_ = v_state_3365_;
v_isShared_3521_ = v_isSharedCheck_3584_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_pendingHead_3518_);
lean_inc(v_expectData_3516_);
lean_inc(v_respStream_3514_);
lean_inc(v_response_3513_);
lean_inc(v_headerTimeout_3512_);
lean_inc(v_currentTimeout_3511_);
lean_inc(v_keepAliveTimeout_3510_);
lean_inc(v_requestStream_3509_);
lean_inc(v_machine_3508_);
lean_dec(v_state_3365_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3584_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___y_3523_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; uint8_t v___x_3541_; 
v___x_3536_ = lean_unsigned_to_nat(1u);
v___x_3537_ = lean_mk_empty_array_with_capacity(v___x_3536_);
v___x_3538_ = lean_array_push(v___x_3537_, v_val_3504_);
v___x_3539_ = lean_array_get_size(v___x_3538_);
v___x_3540_ = lean_unsigned_to_nat(0u);
v___x_3541_ = lean_nat_dec_eq(v___x_3539_, v___x_3540_);
if (v___x_3541_ == 0)
{
lean_object* v_reader_3542_; lean_object* v_writer_3543_; lean_object* v_config_3544_; lean_object* v_events_3545_; lean_object* v_error_3546_; lean_object* v_instant_3547_; uint8_t v_keepAlive_3548_; uint8_t v_forcedFlush_3549_; uint8_t v_pullBodyStalled_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3583_; 
v_reader_3542_ = lean_ctor_get(v_machine_3508_, 0);
v_writer_3543_ = lean_ctor_get(v_machine_3508_, 1);
v_config_3544_ = lean_ctor_get(v_machine_3508_, 2);
v_events_3545_ = lean_ctor_get(v_machine_3508_, 3);
v_error_3546_ = lean_ctor_get(v_machine_3508_, 4);
v_instant_3547_ = lean_ctor_get(v_machine_3508_, 5);
v_keepAlive_3548_ = lean_ctor_get_uint8(v_machine_3508_, sizeof(void*)*6);
v_forcedFlush_3549_ = lean_ctor_get_uint8(v_machine_3508_, sizeof(void*)*6 + 1);
v_pullBodyStalled_3550_ = lean_ctor_get_uint8(v_machine_3508_, sizeof(void*)*6 + 2);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_machine_3508_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3552_ = v_machine_3508_;
v_isShared_3553_ = v_isSharedCheck_3583_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_instant_3547_);
lean_inc(v_error_3546_);
lean_inc(v_events_3545_);
lean_inc(v_config_3544_);
lean_inc(v_writer_3543_);
lean_inc(v_reader_3542_);
lean_dec(v_machine_3508_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3583_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___y_3555_; lean_object* v___x_3577_; uint8_t v___x_3578_; 
v___x_3577_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___closed__12));
v___x_3578_ = lean_nat_dec_lt(v___x_3540_, v___x_3539_);
if (v___x_3578_ == 0)
{
v___y_3555_ = v___x_3540_;
goto v___jp_3554_;
}
else
{
lean_object* v___f_3579_; size_t v___x_3580_; size_t v___x_3581_; lean_object* v___x_3582_; 
v___f_3579_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___x_3580_ = ((size_t)0ULL);
v___x_3581_ = lean_usize_of_nat(v___x_3539_);
lean_inc_ref(v___x_3538_);
v___x_3582_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3577_, v___f_3579_, v___x_3538_, v___x_3580_, v___x_3581_, v___x_3540_);
v___y_3555_ = v___x_3582_;
goto v___jp_3554_;
}
v___jp_3554_:
{
lean_object* v_userData_3556_; lean_object* v_outputData_3557_; lean_object* v_state_3558_; lean_object* v_knownSize_3559_; lean_object* v_messageHead_3560_; uint8_t v_sentMessage_3561_; uint8_t v_userClosedBody_3562_; uint8_t v_omitBody_3563_; lean_object* v_userDataBytes_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3576_; 
v_userData_3556_ = lean_ctor_get(v_writer_3543_, 0);
v_outputData_3557_ = lean_ctor_get(v_writer_3543_, 1);
v_state_3558_ = lean_ctor_get(v_writer_3543_, 2);
v_knownSize_3559_ = lean_ctor_get(v_writer_3543_, 3);
v_messageHead_3560_ = lean_ctor_get(v_writer_3543_, 4);
v_sentMessage_3561_ = lean_ctor_get_uint8(v_writer_3543_, sizeof(void*)*6);
v_userClosedBody_3562_ = lean_ctor_get_uint8(v_writer_3543_, sizeof(void*)*6 + 1);
v_omitBody_3563_ = lean_ctor_get_uint8(v_writer_3543_, sizeof(void*)*6 + 2);
v_userDataBytes_3564_ = lean_ctor_get(v_writer_3543_, 5);
v_isSharedCheck_3576_ = !lean_is_exclusive(v_writer_3543_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3566_ = v_writer_3543_;
v_isShared_3567_ = v_isSharedCheck_3576_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_userDataBytes_3564_);
lean_inc(v_messageHead_3560_);
lean_inc(v_knownSize_3559_);
lean_inc(v_state_3558_);
lean_inc(v_outputData_3557_);
lean_inc(v_userData_3556_);
lean_dec(v_writer_3543_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3576_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3571_; 
v___x_3568_ = l_Array_append___redArg(v_userData_3556_, v___x_3538_);
lean_dec_ref(v___x_3538_);
v___x_3569_ = lean_nat_add(v_userDataBytes_3564_, v___y_3555_);
lean_dec(v___y_3555_);
lean_dec(v_userDataBytes_3564_);
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 5, v___x_3569_);
lean_ctor_set(v___x_3566_, 0, v___x_3568_);
v___x_3571_ = v___x_3566_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v___x_3568_);
lean_ctor_set(v_reuseFailAlloc_3575_, 1, v_outputData_3557_);
lean_ctor_set(v_reuseFailAlloc_3575_, 2, v_state_3558_);
lean_ctor_set(v_reuseFailAlloc_3575_, 3, v_knownSize_3559_);
lean_ctor_set(v_reuseFailAlloc_3575_, 4, v_messageHead_3560_);
lean_ctor_set(v_reuseFailAlloc_3575_, 5, v___x_3569_);
lean_ctor_set_uint8(v_reuseFailAlloc_3575_, sizeof(void*)*6, v_sentMessage_3561_);
lean_ctor_set_uint8(v_reuseFailAlloc_3575_, sizeof(void*)*6 + 1, v_userClosedBody_3562_);
lean_ctor_set_uint8(v_reuseFailAlloc_3575_, sizeof(void*)*6 + 2, v_omitBody_3563_);
v___x_3571_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
lean_object* v___x_3573_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 1, v___x_3571_);
v___x_3573_ = v___x_3552_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_reader_3542_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v___x_3571_);
lean_ctor_set(v_reuseFailAlloc_3574_, 2, v_config_3544_);
lean_ctor_set(v_reuseFailAlloc_3574_, 3, v_events_3545_);
lean_ctor_set(v_reuseFailAlloc_3574_, 4, v_error_3546_);
lean_ctor_set(v_reuseFailAlloc_3574_, 5, v_instant_3547_);
lean_ctor_set_uint8(v_reuseFailAlloc_3574_, sizeof(void*)*6, v_keepAlive_3548_);
lean_ctor_set_uint8(v_reuseFailAlloc_3574_, sizeof(void*)*6 + 1, v_forcedFlush_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3574_, sizeof(void*)*6 + 2, v_pullBodyStalled_3550_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
v___y_3523_ = v___x_3573_;
goto v___jp_3522_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3538_);
v___y_3523_ = v_machine_3508_;
goto v___jp_3522_;
}
v___jp_3522_:
{
lean_object* v___x_3525_; 
if (v_isShared_3521_ == 0)
{
lean_ctor_set(v___x_3520_, 0, v___y_3523_);
v___x_3525_ = v___x_3520_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___y_3523_);
lean_ctor_set(v_reuseFailAlloc_3535_, 1, v_requestStream_3509_);
lean_ctor_set(v_reuseFailAlloc_3535_, 2, v_keepAliveTimeout_3510_);
lean_ctor_set(v_reuseFailAlloc_3535_, 3, v_currentTimeout_3511_);
lean_ctor_set(v_reuseFailAlloc_3535_, 4, v_headerTimeout_3512_);
lean_ctor_set(v_reuseFailAlloc_3535_, 5, v_response_3513_);
lean_ctor_set(v_reuseFailAlloc_3535_, 6, v_respStream_3514_);
lean_ctor_set(v_reuseFailAlloc_3535_, 7, v_expectData_3516_);
lean_ctor_set(v_reuseFailAlloc_3535_, 8, v_pendingHead_3518_);
lean_ctor_set_uint8(v_reuseFailAlloc_3535_, sizeof(void*)*9, v_requiresData_3515_);
lean_ctor_set_uint8(v_reuseFailAlloc_3535_, sizeof(void*)*9 + 1, v_handlerDispatched_3517_);
v___x_3525_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
uint8_t v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3526_ = 0;
v___x_3527_ = lean_box(v___x_3526_);
v___x_3528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3525_);
lean_ctor_set(v___x_3528_, 1, v___x_3527_);
if (v_isShared_3507_ == 0)
{
lean_ctor_set(v___x_3506_, 0, v___x_3528_);
v___x_3530_ = v___x_3506_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3532_; 
if (v_isShared_3478_ == 0)
{
lean_ctor_set_tag(v___x_3477_, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3530_);
v___x_3532_ = v___x_3477_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
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
uint8_t v_x_3587_; 
lean_dec_ref(v_config_3363_);
lean_dec_ref(v_inst_3361_);
v_x_3587_ = lean_ctor_get_uint8(v_event_3364_, 0);
lean_dec_ref_known(v_event_3364_, 0);
if (v_x_3587_ == 0)
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
lean_dec(v_handler_3362_);
lean_dec_ref(v_inst_3360_);
v___x_3588_ = lean_box(v_x_3587_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v_state_3365_);
lean_ctor_set(v___x_3589_, 1, v___x_3588_);
v___x_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3589_);
v___x_3591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
return v___x_3591_;
}
else
{
lean_object* v_machine_3592_; lean_object* v_requestStream_3593_; lean_object* v_keepAliveTimeout_3594_; lean_object* v_currentTimeout_3595_; lean_object* v_headerTimeout_3596_; lean_object* v_response_3597_; lean_object* v_respStream_3598_; uint8_t v_requiresData_3599_; lean_object* v_expectData_3600_; uint8_t v_handlerDispatched_3601_; lean_object* v_pendingHead_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3652_; 
v_machine_3592_ = lean_ctor_get(v_state_3365_, 0);
v_requestStream_3593_ = lean_ctor_get(v_state_3365_, 1);
v_keepAliveTimeout_3594_ = lean_ctor_get(v_state_3365_, 2);
v_currentTimeout_3595_ = lean_ctor_get(v_state_3365_, 3);
v_headerTimeout_3596_ = lean_ctor_get(v_state_3365_, 4);
v_response_3597_ = lean_ctor_get(v_state_3365_, 5);
v_respStream_3598_ = lean_ctor_get(v_state_3365_, 6);
v_requiresData_3599_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3600_ = lean_ctor_get(v_state_3365_, 7);
v_handlerDispatched_3601_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9 + 1);
v_pendingHead_3602_ = lean_ctor_get(v_state_3365_, 8);
v_isSharedCheck_3652_ = !lean_is_exclusive(v_state_3365_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3604_ = v_state_3365_;
v_isShared_3605_ = v_isSharedCheck_3652_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_pendingHead_3602_);
lean_inc(v_expectData_3600_);
lean_inc(v_respStream_3598_);
lean_inc(v_response_3597_);
lean_inc(v_headerTimeout_3596_);
lean_inc(v_currentTimeout_3595_);
lean_inc(v_keepAliveTimeout_3594_);
lean_inc(v_requestStream_3593_);
lean_inc(v_machine_3592_);
lean_dec(v_state_3365_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3652_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
uint8_t v___x_3606_; lean_object* v___x_3607_; lean_object* v_fst_3608_; lean_object* v_snd_3609_; lean_object* v_reader_3610_; lean_object* v_writer_3611_; lean_object* v_config_3612_; lean_object* v_events_3613_; lean_object* v_error_3614_; lean_object* v_instant_3615_; uint8_t v_keepAlive_3616_; uint8_t v_forcedFlush_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3651_; 
v___x_3606_ = 0;
v___x_3607_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(v___x_3606_, v_machine_3592_);
v_fst_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_fst_3608_);
v_snd_3609_ = lean_ctor_get(v___x_3607_, 1);
lean_inc(v_snd_3609_);
lean_dec_ref(v___x_3607_);
v_reader_3610_ = lean_ctor_get(v_fst_3608_, 0);
v_writer_3611_ = lean_ctor_get(v_fst_3608_, 1);
v_config_3612_ = lean_ctor_get(v_fst_3608_, 2);
v_events_3613_ = lean_ctor_get(v_fst_3608_, 3);
v_error_3614_ = lean_ctor_get(v_fst_3608_, 4);
v_instant_3615_ = lean_ctor_get(v_fst_3608_, 5);
v_keepAlive_3616_ = lean_ctor_get_uint8(v_fst_3608_, sizeof(void*)*6);
v_forcedFlush_3617_ = lean_ctor_get_uint8(v_fst_3608_, sizeof(void*)*6 + 1);
v_isSharedCheck_3651_ = !lean_is_exclusive(v_fst_3608_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3619_ = v_fst_3608_;
v_isShared_3620_ = v_isSharedCheck_3651_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_instant_3615_);
lean_inc(v_error_3614_);
lean_inc(v_events_3613_);
lean_inc(v_config_3612_);
lean_inc(v_writer_3611_);
lean_inc(v_reader_3610_);
lean_dec(v_fst_3608_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3651_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___f_3621_; lean_object* v___f_3622_; uint8_t v___y_3624_; 
v___f_3621_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_3622_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3622_, 0, v_inst_3360_);
lean_closure_set(v___f_3622_, 1, v_handler_3362_);
if (lean_obj_tag(v_snd_3609_) == 0)
{
uint8_t v_sentMessage_3647_; 
v_sentMessage_3647_ = lean_ctor_get_uint8(v_writer_3611_, sizeof(void*)*6);
if (v_sentMessage_3647_ == 0)
{
lean_object* v_state_3648_; 
v_state_3648_ = lean_ctor_get(v_reader_3610_, 0);
if (lean_obj_tag(v_state_3648_) == 2)
{
v___y_3624_ = v_x_3587_;
goto v___jp_3623_;
}
else
{
v___y_3624_ = v_sentMessage_3647_;
goto v___jp_3623_;
}
}
else
{
uint8_t v___x_3649_; 
v___x_3649_ = 0;
v___y_3624_ = v___x_3649_;
goto v___jp_3623_;
}
}
else
{
uint8_t v___x_3650_; 
v___x_3650_ = 0;
v___y_3624_ = v___x_3650_;
goto v___jp_3623_;
}
v___jp_3623_:
{
lean_object* v___x_3626_; 
if (v_isShared_3620_ == 0)
{
v___x_3626_ = v___x_3619_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_reader_3610_);
lean_ctor_set(v_reuseFailAlloc_3646_, 1, v_writer_3611_);
lean_ctor_set(v_reuseFailAlloc_3646_, 2, v_config_3612_);
lean_ctor_set(v_reuseFailAlloc_3646_, 3, v_events_3613_);
lean_ctor_set(v_reuseFailAlloc_3646_, 4, v_error_3614_);
lean_ctor_set(v_reuseFailAlloc_3646_, 5, v_instant_3615_);
lean_ctor_set_uint8(v_reuseFailAlloc_3646_, sizeof(void*)*6, v_keepAlive_3616_);
lean_ctor_set_uint8(v_reuseFailAlloc_3646_, sizeof(void*)*6 + 1, v_forcedFlush_3617_);
v___x_3626_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
lean_object* v_st_3628_; 
lean_ctor_set_uint8(v___x_3626_, sizeof(void*)*6 + 2, v___y_3624_);
lean_inc_ref(v_requestStream_3593_);
if (v_isShared_3605_ == 0)
{
lean_ctor_set(v___x_3604_, 0, v___x_3626_);
v_st_3628_ = v___x_3604_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3645_, 1, v_requestStream_3593_);
lean_ctor_set(v_reuseFailAlloc_3645_, 2, v_keepAliveTimeout_3594_);
lean_ctor_set(v_reuseFailAlloc_3645_, 3, v_currentTimeout_3595_);
lean_ctor_set(v_reuseFailAlloc_3645_, 4, v_headerTimeout_3596_);
lean_ctor_set(v_reuseFailAlloc_3645_, 5, v_response_3597_);
lean_ctor_set(v_reuseFailAlloc_3645_, 6, v_respStream_3598_);
lean_ctor_set(v_reuseFailAlloc_3645_, 7, v_expectData_3600_);
lean_ctor_set(v_reuseFailAlloc_3645_, 8, v_pendingHead_3602_);
lean_ctor_set_uint8(v_reuseFailAlloc_3645_, sizeof(void*)*9, v_requiresData_3599_);
lean_ctor_set_uint8(v_reuseFailAlloc_3645_, sizeof(void*)*9 + 1, v_handlerDispatched_3601_);
v_st_3628_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___f_3629_; 
lean_inc_ref(v_st_3628_);
v___f_3629_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3629_, 0, v_st_3628_);
if (lean_obj_tag(v_snd_3609_) == 1)
{
lean_object* v_val_3630_; uint8_t v_final_3631_; uint8_t v_incomplete_3632_; lean_object* v_chunk_3633_; lean_object* v___f_3634_; lean_object* v___f_3635_; lean_object* v___x_3636_; lean_object* v___f_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
lean_dec_ref(v_st_3628_);
v_val_3630_ = lean_ctor_get(v_snd_3609_, 0);
lean_inc(v_val_3630_);
lean_dec_ref_known(v_snd_3609_, 1);
v_final_3631_ = lean_ctor_get_uint8(v_val_3630_, sizeof(void*)*1);
v_incomplete_3632_ = lean_ctor_get_uint8(v_val_3630_, sizeof(void*)*1 + 1);
v_chunk_3633_ = lean_ctor_get(v_val_3630_, 0);
lean_inc_ref(v_chunk_3633_);
lean_dec(v_val_3630_);
lean_inc_ref_n(v___f_3629_, 2);
v___f_3634_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3634_, 0, v___f_3629_);
lean_inc_ref_n(v_requestStream_3593_, 2);
v___f_3635_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3635_, 0, v_requestStream_3593_);
lean_closure_set(v___f_3635_, 1, v___f_3634_);
lean_closure_set(v___f_3635_, 2, v___f_3629_);
v___x_3636_ = lean_box(v_final_3631_);
v___f_3637_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed), 7, 5);
lean_closure_set(v___f_3637_, 0, v___x_3636_);
lean_closure_set(v___f_3637_, 1, v___f_3629_);
lean_closure_set(v___f_3637_, 2, v___f_3621_);
lean_closure_set(v___f_3637_, 3, v_requestStream_3593_);
lean_closure_set(v___f_3637_, 4, v___f_3635_);
v___x_3638_ = lean_unsigned_to_nat(0u);
v___x_3639_ = 0;
v___x_3640_ = l_Std_Http_Body_Stream_send(v_requestStream_3593_, v_chunk_3633_, v_incomplete_3632_);
v___x_3641_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3638_, v___x_3639_, v___x_3640_, v___f_3622_);
v___x_3642_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3638_, v___x_3639_, v___x_3641_, v___f_3637_);
return v___x_3642_;
}
else
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
lean_dec_ref(v___f_3629_);
lean_dec_ref(v___f_3622_);
lean_dec(v_snd_3609_);
lean_dec_ref(v_requestStream_3593_);
v___x_3643_ = lean_box(0);
v___x_3644_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_3628_, v___x_3643_);
return v___x_3644_;
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
lean_object* v_x_3653_; 
v_x_3653_ = lean_ctor_get(v_event_3364_, 0);
lean_inc_ref(v_x_3653_);
lean_dec_ref_known(v_event_3364_, 1);
if (lean_obj_tag(v_x_3653_) == 0)
{
lean_object* v_a_3654_; lean_object* v_onFailure_3655_; lean_object* v___f_3656_; lean_object* v___x_3657_; uint8_t v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
lean_dec_ref(v_config_3363_);
lean_dec_ref(v_inst_3361_);
v_a_3654_ = lean_ctor_get(v_x_3653_, 0);
lean_inc(v_a_3654_);
lean_dec_ref_known(v_x_3653_, 1);
v_onFailure_3655_ = lean_ctor_get(v_inst_3360_, 2);
lean_inc_ref(v_onFailure_3655_);
lean_dec_ref(v_inst_3360_);
v___f_3656_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_3656_, 0, v_state_3365_);
v___x_3657_ = lean_unsigned_to_nat(0u);
v___x_3658_ = 0;
v___x_3659_ = lean_apply_3(v_onFailure_3655_, v_handler_3362_, v_a_3654_, lean_box(0));
v___x_3660_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3657_, v___x_3658_, v___x_3659_, v___f_3656_);
return v___x_3660_;
}
else
{
lean_object* v_machine_3661_; lean_object* v_reader_3662_; lean_object* v_state_3663_; 
v_machine_3661_ = lean_ctor_get(v_state_3365_, 0);
lean_inc_ref(v_machine_3661_);
v_reader_3662_ = lean_ctor_get(v_machine_3661_, 0);
v_state_3663_ = lean_ctor_get(v_reader_3662_, 0);
if (lean_obj_tag(v_state_3663_) == 7)
{
lean_object* v_a_3664_; lean_object* v_requestStream_3665_; lean_object* v_keepAliveTimeout_3666_; lean_object* v_currentTimeout_3667_; lean_object* v_headerTimeout_3668_; lean_object* v_response_3669_; lean_object* v_respStream_3670_; uint8_t v_requiresData_3671_; lean_object* v_expectData_3672_; lean_object* v_pendingHead_3673_; lean_object* v_close_3674_; lean_object* v_isClosed_3675_; lean_object* v_body_3676_; lean_object* v___x_3677_; lean_object* v___f_3678_; lean_object* v___f_3679_; lean_object* v___f_3680_; lean_object* v___x_3681_; uint8_t v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; 
lean_dec_ref(v_config_3363_);
lean_dec(v_handler_3362_);
lean_dec_ref(v_inst_3360_);
v_a_3664_ = lean_ctor_get(v_x_3653_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v_x_3653_, 1);
v_requestStream_3665_ = lean_ctor_get(v_state_3365_, 1);
lean_inc_ref(v_requestStream_3665_);
v_keepAliveTimeout_3666_ = lean_ctor_get(v_state_3365_, 2);
lean_inc(v_keepAliveTimeout_3666_);
v_currentTimeout_3667_ = lean_ctor_get(v_state_3365_, 3);
lean_inc(v_currentTimeout_3667_);
v_headerTimeout_3668_ = lean_ctor_get(v_state_3365_, 4);
lean_inc(v_headerTimeout_3668_);
v_response_3669_ = lean_ctor_get(v_state_3365_, 5);
lean_inc_ref(v_response_3669_);
v_respStream_3670_ = lean_ctor_get(v_state_3365_, 6);
lean_inc(v_respStream_3670_);
v_requiresData_3671_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3672_ = lean_ctor_get(v_state_3365_, 7);
lean_inc(v_expectData_3672_);
v_pendingHead_3673_ = lean_ctor_get(v_state_3365_, 8);
lean_inc(v_pendingHead_3673_);
lean_dec_ref(v_state_3365_);
v_close_3674_ = lean_ctor_get(v_inst_3361_, 1);
lean_inc_ref(v_close_3674_);
v_isClosed_3675_ = lean_ctor_get(v_inst_3361_, 2);
lean_inc_ref(v_isClosed_3675_);
lean_dec_ref(v_inst_3361_);
v_body_3676_ = lean_ctor_get(v_a_3664_, 1);
lean_inc_n(v_body_3676_, 2);
lean_dec(v_a_3664_);
v___x_3677_ = lean_box(v_requiresData_3671_);
v___f_3678_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_3678_, 0, v_machine_3661_);
lean_closure_set(v___f_3678_, 1, v_requestStream_3665_);
lean_closure_set(v___f_3678_, 2, v_keepAliveTimeout_3666_);
lean_closure_set(v___f_3678_, 3, v_currentTimeout_3667_);
lean_closure_set(v___f_3678_, 4, v_headerTimeout_3668_);
lean_closure_set(v___f_3678_, 5, v_response_3669_);
lean_closure_set(v___f_3678_, 6, v_respStream_3670_);
lean_closure_set(v___f_3678_, 7, v___x_3677_);
lean_closure_set(v___f_3678_, 8, v_expectData_3672_);
lean_closure_set(v___f_3678_, 9, v_pendingHead_3673_);
lean_inc_ref(v___f_3678_);
v___f_3679_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3679_, 0, v___f_3678_);
v___f_3680_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_3680_, 0, v_close_3674_);
lean_closure_set(v___f_3680_, 1, v_body_3676_);
lean_closure_set(v___f_3680_, 2, v___f_3679_);
lean_closure_set(v___f_3680_, 3, v___f_3678_);
v___x_3681_ = lean_unsigned_to_nat(0u);
v___x_3682_ = 0;
v___x_3683_ = lean_apply_2(v_isClosed_3675_, v_body_3676_, lean_box(0));
v___x_3684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3681_, v___x_3682_, v___x_3683_, v___f_3680_);
return v___x_3684_;
}
else
{
lean_object* v_a_3685_; lean_object* v_requestStream_3686_; lean_object* v_keepAliveTimeout_3687_; lean_object* v_currentTimeout_3688_; lean_object* v_headerTimeout_3689_; lean_object* v_response_3690_; uint8_t v_requiresData_3691_; lean_object* v_expectData_3692_; lean_object* v_pendingHead_3693_; uint8_t v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___f_3697_; lean_object* v___f_3698_; lean_object* v___f_3699_; uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___f_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v_a_3685_ = lean_ctor_get(v_x_3653_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v_x_3653_, 1);
v_requestStream_3686_ = lean_ctor_get(v_state_3365_, 1);
lean_inc_ref(v_requestStream_3686_);
v_keepAliveTimeout_3687_ = lean_ctor_get(v_state_3365_, 2);
lean_inc(v_keepAliveTimeout_3687_);
v_currentTimeout_3688_ = lean_ctor_get(v_state_3365_, 3);
lean_inc(v_currentTimeout_3688_);
v_headerTimeout_3689_ = lean_ctor_get(v_state_3365_, 4);
lean_inc(v_headerTimeout_3689_);
v_response_3690_ = lean_ctor_get(v_state_3365_, 5);
lean_inc_ref(v_response_3690_);
v_requiresData_3691_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3692_ = lean_ctor_get(v_state_3365_, 7);
lean_inc(v_expectData_3692_);
v_pendingHead_3693_ = lean_ctor_get(v_state_3365_, 8);
lean_inc(v_pendingHead_3693_);
lean_dec_ref(v_state_3365_);
v___x_3694_ = 0;
v___x_3695_ = lean_box(v_requiresData_3691_);
v___x_3696_ = lean_box(v___x_3694_);
v___f_3697_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed), 11, 9);
lean_closure_set(v___f_3697_, 0, v_requestStream_3686_);
lean_closure_set(v___f_3697_, 1, v_keepAliveTimeout_3687_);
lean_closure_set(v___f_3697_, 2, v_currentTimeout_3688_);
lean_closure_set(v___f_3697_, 3, v_headerTimeout_3689_);
lean_closure_set(v___f_3697_, 4, v_response_3690_);
lean_closure_set(v___f_3697_, 5, v___x_3695_);
lean_closure_set(v___f_3697_, 6, v_expectData_3692_);
lean_closure_set(v___f_3697_, 7, v___x_3696_);
lean_closure_set(v___f_3697_, 8, v_pendingHead_3693_);
v___f_3698_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed), 3, 1);
lean_closure_set(v___f_3698_, 0, v___f_3697_);
v___f_3699_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0));
v___x_3700_ = 1;
v___x_3701_ = lean_box(v___x_3694_);
v___x_3702_ = lean_box(v___x_3700_);
lean_inc_ref(v_inst_3361_);
lean_inc_ref(v___f_3698_);
v___f_3703_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed), 10, 8);
lean_closure_set(v___f_3703_, 0, v___x_3701_);
lean_closure_set(v___f_3703_, 1, v___f_3698_);
lean_closure_set(v___f_3703_, 2, v___x_3702_);
lean_closure_set(v___f_3703_, 3, v_inst_3360_);
lean_closure_set(v___f_3703_, 4, v_handler_3362_);
lean_closure_set(v___f_3703_, 5, v_inst_3361_);
lean_closure_set(v___f_3703_, 6, v___f_3699_);
lean_closure_set(v___f_3703_, 7, v___f_3698_);
v___x_3704_ = lean_unsigned_to_nat(0u);
v___x_3705_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_3361_, v_config_3363_, v_machine_3661_, v_a_3685_);
v___x_3706_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3704_, v___x_3694_, v___x_3705_, v___f_3703_);
return v___x_3706_;
}
}
}
case 4:
{
lean_object* v_onFailure_3707_; lean_object* v___f_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; uint8_t v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
lean_dec_ref(v_config_3363_);
lean_dec_ref(v_inst_3361_);
v_onFailure_3707_ = lean_ctor_get(v_inst_3360_, 2);
lean_inc_ref(v_onFailure_3707_);
lean_dec_ref(v_inst_3360_);
v___f_3708_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed), 3, 1);
lean_closure_set(v___f_3708_, 0, v_state_3365_);
v___x_3709_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2);
v___x_3710_ = lean_unsigned_to_nat(0u);
v___x_3711_ = 0;
v___x_3712_ = lean_apply_3(v_onFailure_3707_, v_handler_3362_, v___x_3709_, lean_box(0));
v___x_3713_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3710_, v___x_3711_, v___x_3712_, v___f_3708_);
return v___x_3713_;
}
case 5:
{
lean_object* v_machine_3714_; lean_object* v_requestStream_3715_; lean_object* v_keepAliveTimeout_3716_; lean_object* v_currentTimeout_3717_; lean_object* v_headerTimeout_3718_; lean_object* v_response_3719_; lean_object* v_respStream_3720_; uint8_t v_requiresData_3721_; lean_object* v_expectData_3722_; lean_object* v_pendingHead_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3737_; 
lean_dec_ref(v_config_3363_);
lean_dec(v_handler_3362_);
lean_dec_ref(v_inst_3361_);
lean_dec_ref(v_inst_3360_);
v_machine_3714_ = lean_ctor_get(v_state_3365_, 0);
v_requestStream_3715_ = lean_ctor_get(v_state_3365_, 1);
v_keepAliveTimeout_3716_ = lean_ctor_get(v_state_3365_, 2);
v_currentTimeout_3717_ = lean_ctor_get(v_state_3365_, 3);
v_headerTimeout_3718_ = lean_ctor_get(v_state_3365_, 4);
v_response_3719_ = lean_ctor_get(v_state_3365_, 5);
v_respStream_3720_ = lean_ctor_get(v_state_3365_, 6);
v_requiresData_3721_ = lean_ctor_get_uint8(v_state_3365_, sizeof(void*)*9);
v_expectData_3722_ = lean_ctor_get(v_state_3365_, 7);
v_pendingHead_3723_ = lean_ctor_get(v_state_3365_, 8);
v_isSharedCheck_3737_ = !lean_is_exclusive(v_state_3365_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3725_ = v_state_3365_;
v_isShared_3726_ = v_isSharedCheck_3737_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_pendingHead_3723_);
lean_inc(v_expectData_3722_);
lean_inc(v_respStream_3720_);
lean_inc(v_response_3719_);
lean_inc(v_headerTimeout_3718_);
lean_inc(v_currentTimeout_3717_);
lean_inc(v_keepAliveTimeout_3716_);
lean_inc(v_requestStream_3715_);
lean_inc(v_machine_3714_);
lean_dec(v_state_3365_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3737_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; uint8_t v___x_3729_; lean_object* v___x_3731_; 
v___x_3727_ = lean_box(55);
v___x_3728_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3714_, v___x_3727_);
v___x_3729_ = 0;
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v___x_3728_);
v___x_3731_ = v___x_3725_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3728_);
lean_ctor_set(v_reuseFailAlloc_3736_, 1, v_requestStream_3715_);
lean_ctor_set(v_reuseFailAlloc_3736_, 2, v_keepAliveTimeout_3716_);
lean_ctor_set(v_reuseFailAlloc_3736_, 3, v_currentTimeout_3717_);
lean_ctor_set(v_reuseFailAlloc_3736_, 4, v_headerTimeout_3718_);
lean_ctor_set(v_reuseFailAlloc_3736_, 5, v_response_3719_);
lean_ctor_set(v_reuseFailAlloc_3736_, 6, v_respStream_3720_);
lean_ctor_set(v_reuseFailAlloc_3736_, 7, v_expectData_3722_);
lean_ctor_set(v_reuseFailAlloc_3736_, 8, v_pendingHead_3723_);
lean_ctor_set_uint8(v_reuseFailAlloc_3736_, sizeof(void*)*9, v_requiresData_3721_);
v___x_3731_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; 
lean_ctor_set_uint8(v___x_3731_, sizeof(void*)*9 + 1, v___x_3729_);
v___x_3732_ = lean_box(v___x_3729_);
v___x_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3731_);
lean_ctor_set(v___x_3733_, 1, v___x_3732_);
v___x_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3733_);
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
}
}
default: 
{
uint8_t v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
lean_dec_ref(v_config_3363_);
lean_dec(v_handler_3362_);
lean_dec_ref(v_inst_3361_);
lean_dec_ref(v_inst_3360_);
v___x_3738_ = 1;
v___x_3739_ = lean_box(v___x_3738_);
v___x_3740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3740_, 0, v_state_3365_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3740_);
v___x_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
return v___x_3742_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object* v_inst_3743_, lean_object* v_inst_3744_, lean_object* v_handler_3745_, lean_object* v_config_3746_, lean_object* v_event_3747_, lean_object* v_state_3748_, lean_object* v___y_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3743_, v_inst_3744_, v_handler_3745_, v_config_3746_, v_event_3747_, v_state_3748_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object* v_00_u03c3_3751_, lean_object* v_00_u03b2_3752_, lean_object* v_inst_3753_, lean_object* v_inst_3754_, lean_object* v_handler_3755_, lean_object* v_config_3756_, lean_object* v_event_3757_, lean_object* v_state_3758_){
_start:
{
lean_object* v___x_3760_; 
v___x_3760_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3753_, v_inst_3754_, v_handler_3755_, v_config_3756_, v_event_3757_, v_state_3758_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object* v_00_u03c3_3761_, lean_object* v_00_u03b2_3762_, lean_object* v_inst_3763_, lean_object* v_inst_3764_, lean_object* v_handler_3765_, lean_object* v_config_3766_, lean_object* v_event_3767_, lean_object* v_state_3768_, lean_object* v___y_3769_){
_start:
{
lean_object* v_res_3770_; 
v_res_3770_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(v_00_u03c3_3761_, v_00_u03b2_3762_, v_inst_3763_, v_inst_3764_, v_handler_3765_, v_config_3766_, v_event_3767_, v_state_3768_);
return v_res_3770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object* v_expectData_3771_, lean_object* v_respStream_3772_, lean_object* v_currentTimeout_3773_, lean_object* v_keepAliveTimeout_3774_, lean_object* v_headerTimeout_3775_, lean_object* v_connectionContext_3776_, uint8_t v_handlerDispatched_3777_, lean_object* v_response_3778_, lean_object* v_socket_3779_, uint8_t v_requiresData_3780_, uint8_t v_sentMessage_3781_, lean_object* v_reader_3782_, uint8_t v_requestBodyInterested_3783_, lean_object* v_requestBody_3784_){
_start:
{
lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3793_; uint8_t v___y_3799_; uint8_t v___y_3802_; uint8_t v___y_3803_; uint8_t v___y_3805_; uint8_t v___y_3806_; uint8_t v___y_3807_; uint8_t v___y_3809_; uint8_t v___y_3810_; uint8_t v___y_3813_; 
if (v_handlerDispatched_3777_ == 0)
{
uint8_t v___x_3816_; 
v___x_3816_ = 1;
v___y_3813_ = v___x_3816_;
goto v___jp_3812_;
}
else
{
uint8_t v___x_3817_; 
v___x_3817_ = 0;
v___y_3813_ = v___x_3817_;
goto v___jp_3812_;
}
v___jp_3786_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3789_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3789_, 0, v___y_3787_);
lean_ctor_set(v___x_3789_, 1, v_expectData_3771_);
lean_ctor_set(v___x_3789_, 2, v___y_3788_);
lean_ctor_set(v___x_3789_, 3, v_respStream_3772_);
lean_ctor_set(v___x_3789_, 4, v_requestBody_3784_);
lean_ctor_set(v___x_3789_, 5, v_currentTimeout_3773_);
lean_ctor_set(v___x_3789_, 6, v_keepAliveTimeout_3774_);
lean_ctor_set(v___x_3789_, 7, v_headerTimeout_3775_);
lean_ctor_set(v___x_3789_, 8, v_connectionContext_3776_);
v___x_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
v___x_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3790_);
return v___x_3791_;
}
v___jp_3792_:
{
if (v_handlerDispatched_3777_ == 0)
{
lean_object* v___x_3794_; 
lean_dec_ref(v_response_3778_);
v___x_3794_ = lean_box(0);
v___y_3787_ = v___y_3793_;
v___y_3788_ = v___x_3794_;
goto v___jp_3786_;
}
else
{
lean_object* v___x_3795_; 
v___x_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3795_, 0, v_response_3778_);
v___y_3787_ = v___y_3793_;
v___y_3788_ = v___x_3795_;
goto v___jp_3786_;
}
}
v___jp_3796_:
{
lean_object* v___x_3797_; 
v___x_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3797_, 0, v_socket_3779_);
v___y_3793_ = v___x_3797_;
goto v___jp_3792_;
}
v___jp_3798_:
{
if (v_requiresData_3780_ == 0)
{
if (v___y_3799_ == 0)
{
lean_object* v___x_3800_; 
lean_dec(v_socket_3779_);
v___x_3800_ = lean_box(0);
v___y_3793_ = v___x_3800_;
goto v___jp_3792_;
}
else
{
goto v___jp_3796_;
}
}
else
{
goto v___jp_3796_;
}
}
v___jp_3801_:
{
if (v___y_3802_ == 0)
{
v___y_3799_ = v___y_3803_;
goto v___jp_3798_;
}
else
{
v___y_3799_ = v___y_3802_;
goto v___jp_3798_;
}
}
v___jp_3804_:
{
if (v___y_3806_ == 0)
{
v___y_3802_ = v___y_3805_;
v___y_3803_ = v___y_3807_;
goto v___jp_3801_;
}
else
{
v___y_3802_ = v___y_3805_;
v___y_3803_ = v___y_3806_;
goto v___jp_3801_;
}
}
v___jp_3808_:
{
if (v_sentMessage_3781_ == 0)
{
lean_object* v_state_3811_; 
v_state_3811_ = lean_ctor_get(v_reader_3782_, 0);
if (lean_obj_tag(v_state_3811_) == 2)
{
v___y_3805_ = v___y_3809_;
v___y_3806_ = v___y_3810_;
v___y_3807_ = v_requestBodyInterested_3783_;
goto v___jp_3804_;
}
else
{
v___y_3805_ = v___y_3809_;
v___y_3806_ = v___y_3810_;
v___y_3807_ = v_sentMessage_3781_;
goto v___jp_3804_;
}
}
else
{
v___y_3805_ = v___y_3809_;
v___y_3806_ = v___y_3810_;
v___y_3807_ = v_sentMessage_3781_;
goto v___jp_3804_;
}
}
v___jp_3812_:
{
if (lean_obj_tag(v_respStream_3772_) == 0)
{
uint8_t v___x_3814_; 
v___x_3814_ = 0;
v___y_3809_ = v___y_3813_;
v___y_3810_ = v___x_3814_;
goto v___jp_3808_;
}
else
{
uint8_t v___x_3815_; 
v___x_3815_ = 1;
v___y_3809_ = v___y_3813_;
v___y_3810_ = v___x_3815_;
goto v___jp_3808_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object* v_expectData_3818_, lean_object* v_respStream_3819_, lean_object* v_currentTimeout_3820_, lean_object* v_keepAliveTimeout_3821_, lean_object* v_headerTimeout_3822_, lean_object* v_connectionContext_3823_, lean_object* v_handlerDispatched_3824_, lean_object* v_response_3825_, lean_object* v_socket_3826_, lean_object* v_requiresData_3827_, lean_object* v_sentMessage_3828_, lean_object* v_reader_3829_, lean_object* v_requestBodyInterested_3830_, lean_object* v_requestBody_3831_, lean_object* v___y_3832_){
_start:
{
uint8_t v_handlerDispatched_boxed_3833_; uint8_t v_requiresData_boxed_3834_; uint8_t v_sentMessage_boxed_3835_; uint8_t v_requestBodyInterested_boxed_3836_; lean_object* v_res_3837_; 
v_handlerDispatched_boxed_3833_ = lean_unbox(v_handlerDispatched_3824_);
v_requiresData_boxed_3834_ = lean_unbox(v_requiresData_3827_);
v_sentMessage_boxed_3835_ = lean_unbox(v_sentMessage_3828_);
v_requestBodyInterested_boxed_3836_ = lean_unbox(v_requestBodyInterested_3830_);
v_res_3837_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(v_expectData_3818_, v_respStream_3819_, v_currentTimeout_3820_, v_keepAliveTimeout_3821_, v_headerTimeout_3822_, v_connectionContext_3823_, v_handlerDispatched_boxed_3833_, v_response_3825_, v_socket_3826_, v_requiresData_boxed_3834_, v_sentMessage_boxed_3835_, v_reader_3829_, v_requestBodyInterested_boxed_3836_, v_requestBody_3831_);
lean_dec_ref(v_reader_3829_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object* v___f_3838_, lean_object* v_x_3839_){
_start:
{
if (lean_obj_tag(v_x_3839_) == 0)
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3849_; 
lean_dec_ref(v___f_3838_);
v_a_3841_ = lean_ctor_get(v_x_3839_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_x_3839_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3843_ = v_x_3839_;
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v_x_3839_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
lean_object* v___x_3847_; 
v___x_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3846_);
return v___x_3847_;
}
}
}
else
{
lean_object* v_a_3850_; lean_object* v___x_3851_; 
v_a_3850_ = lean_ctor_get(v_x_3839_, 0);
lean_inc(v_a_3850_);
lean_dec_ref_known(v_x_3839_, 1);
v___x_3851_ = lean_apply_2(v___f_3838_, v_a_3850_, lean_box(0));
return v___x_3851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object* v___f_3852_, lean_object* v_x_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(v___f_3852_, v_x_3853_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object* v_expectData_3860_, lean_object* v_respStream_3861_, lean_object* v_currentTimeout_3862_, lean_object* v_keepAliveTimeout_3863_, lean_object* v_headerTimeout_3864_, lean_object* v_connectionContext_3865_, uint8_t v_handlerDispatched_3866_, lean_object* v_response_3867_, lean_object* v_socket_3868_, uint8_t v_requiresData_3869_, uint8_t v_sentMessage_3870_, lean_object* v_reader_3871_, uint8_t v_pullBodyStalled_3872_, uint8_t v_requestBodyOpen_3873_, lean_object* v_requestStream_3874_, uint8_t v_requestBodyInterested_3875_){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___f_3881_; lean_object* v___f_3882_; uint8_t v___y_3884_; 
v___x_3877_ = lean_box(v_handlerDispatched_3866_);
v___x_3878_ = lean_box(v_requiresData_3869_);
v___x_3879_ = lean_box(v_sentMessage_3870_);
v___x_3880_ = lean_box(v_requestBodyInterested_3875_);
lean_inc_ref(v_reader_3871_);
v___f_3881_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed), 15, 13);
lean_closure_set(v___f_3881_, 0, v_expectData_3860_);
lean_closure_set(v___f_3881_, 1, v_respStream_3861_);
lean_closure_set(v___f_3881_, 2, v_currentTimeout_3862_);
lean_closure_set(v___f_3881_, 3, v_keepAliveTimeout_3863_);
lean_closure_set(v___f_3881_, 4, v_headerTimeout_3864_);
lean_closure_set(v___f_3881_, 5, v_connectionContext_3865_);
lean_closure_set(v___f_3881_, 6, v___x_3877_);
lean_closure_set(v___f_3881_, 7, v_response_3867_);
lean_closure_set(v___f_3881_, 8, v_socket_3868_);
lean_closure_set(v___f_3881_, 9, v___x_3878_);
lean_closure_set(v___f_3881_, 10, v___x_3879_);
lean_closure_set(v___f_3881_, 11, v_reader_3871_);
lean_closure_set(v___f_3881_, 12, v___x_3880_);
v___f_3882_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3882_, 0, v___f_3881_);
if (v_sentMessage_3870_ == 0)
{
lean_object* v_state_3888_; 
v_state_3888_ = lean_ctor_get(v_reader_3871_, 0);
lean_inc(v_state_3888_);
lean_dec_ref(v_reader_3871_);
if (lean_obj_tag(v_state_3888_) == 2)
{
lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3899_; 
v_isSharedCheck_3899_ = !lean_is_exclusive(v_state_3888_);
if (v_isSharedCheck_3899_ == 0)
{
lean_object* v_unused_3900_; 
v_unused_3900_ = lean_ctor_get(v_state_3888_, 0);
lean_dec(v_unused_3900_);
v___x_3890_ = v_state_3888_;
v_isShared_3891_ = v_isSharedCheck_3899_;
goto v_resetjp_3889_;
}
else
{
lean_dec(v_state_3888_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3899_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
if (v_pullBodyStalled_3872_ == 0)
{
if (v_requestBodyOpen_3873_ == 0)
{
lean_del_object(v___x_3890_);
lean_dec_ref(v_requestStream_3874_);
v___y_3884_ = v_requestBodyOpen_3873_;
goto v___jp_3883_;
}
else
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
lean_ctor_set_tag(v___x_3890_, 1);
lean_ctor_set(v___x_3890_, 0, v_requestStream_3874_);
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_requestStream_3874_);
v___x_3893_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3894_ = lean_unsigned_to_nat(0u);
v___x_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3893_);
v___x_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3895_);
v___x_3897_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3894_, v_pullBodyStalled_3872_, v___x_3896_, v___f_3882_);
return v___x_3897_;
}
}
}
else
{
lean_del_object(v___x_3890_);
lean_dec_ref(v_requestStream_3874_);
v___y_3884_ = v_sentMessage_3870_;
goto v___jp_3883_;
}
}
}
else
{
lean_dec(v_state_3888_);
lean_dec_ref(v_requestStream_3874_);
v___y_3884_ = v_sentMessage_3870_;
goto v___jp_3883_;
}
}
else
{
uint8_t v___x_3901_; 
lean_dec_ref(v_requestStream_3874_);
lean_dec_ref(v_reader_3871_);
v___x_3901_ = 0;
v___y_3884_ = v___x_3901_;
goto v___jp_3883_;
}
v___jp_3883_:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3885_ = lean_unsigned_to_nat(0u);
v___x_3886_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1));
v___x_3887_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3885_, v___y_3884_, v___x_3886_, v___f_3882_);
return v___x_3887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_expectData_3902_ = _args[0];
lean_object* v_respStream_3903_ = _args[1];
lean_object* v_currentTimeout_3904_ = _args[2];
lean_object* v_keepAliveTimeout_3905_ = _args[3];
lean_object* v_headerTimeout_3906_ = _args[4];
lean_object* v_connectionContext_3907_ = _args[5];
lean_object* v_handlerDispatched_3908_ = _args[6];
lean_object* v_response_3909_ = _args[7];
lean_object* v_socket_3910_ = _args[8];
lean_object* v_requiresData_3911_ = _args[9];
lean_object* v_sentMessage_3912_ = _args[10];
lean_object* v_reader_3913_ = _args[11];
lean_object* v_pullBodyStalled_3914_ = _args[12];
lean_object* v_requestBodyOpen_3915_ = _args[13];
lean_object* v_requestStream_3916_ = _args[14];
lean_object* v_requestBodyInterested_3917_ = _args[15];
lean_object* v___y_3918_ = _args[16];
_start:
{
uint8_t v_handlerDispatched_boxed_3919_; uint8_t v_requiresData_boxed_3920_; uint8_t v_sentMessage_boxed_3921_; uint8_t v_pullBodyStalled_boxed_3922_; uint8_t v_requestBodyOpen_boxed_3923_; uint8_t v_requestBodyInterested_boxed_3924_; lean_object* v_res_3925_; 
v_handlerDispatched_boxed_3919_ = lean_unbox(v_handlerDispatched_3908_);
v_requiresData_boxed_3920_ = lean_unbox(v_requiresData_3911_);
v_sentMessage_boxed_3921_ = lean_unbox(v_sentMessage_3912_);
v_pullBodyStalled_boxed_3922_ = lean_unbox(v_pullBodyStalled_3914_);
v_requestBodyOpen_boxed_3923_ = lean_unbox(v_requestBodyOpen_3915_);
v_requestBodyInterested_boxed_3924_ = lean_unbox(v_requestBodyInterested_3917_);
v_res_3925_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(v_expectData_3902_, v_respStream_3903_, v_currentTimeout_3904_, v_keepAliveTimeout_3905_, v_headerTimeout_3906_, v_connectionContext_3907_, v_handlerDispatched_boxed_3919_, v_response_3909_, v_socket_3910_, v_requiresData_boxed_3920_, v_sentMessage_boxed_3921_, v_reader_3913_, v_pullBodyStalled_boxed_3922_, v_requestBodyOpen_boxed_3923_, v_requestStream_3916_, v_requestBodyInterested_boxed_3924_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object* v___f_3926_, lean_object* v_x_3927_){
_start:
{
if (lean_obj_tag(v_x_3927_) == 0)
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3937_; 
lean_dec_ref(v___f_3926_);
v_a_3929_ = lean_ctor_get(v_x_3927_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v_x_3927_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3931_ = v_x_3927_;
v_isShared_3932_ = v_isSharedCheck_3937_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v_x_3927_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3937_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3929_);
v___x_3934_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
lean_object* v___x_3935_; 
v___x_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3934_);
return v___x_3935_;
}
}
}
else
{
lean_object* v_a_3938_; lean_object* v___x_3939_; 
v_a_3938_ = lean_ctor_get(v_x_3927_, 0);
lean_inc(v_a_3938_);
lean_dec_ref_known(v_x_3927_, 1);
v___x_3939_ = lean_apply_2(v___f_3926_, v_a_3938_, lean_box(0));
return v___x_3939_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object* v___f_3940_, lean_object* v_x_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(v___f_3940_, v_x_3941_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object* v_expectData_3944_, lean_object* v_respStream_3945_, lean_object* v_currentTimeout_3946_, lean_object* v_keepAliveTimeout_3947_, lean_object* v_headerTimeout_3948_, lean_object* v_connectionContext_3949_, uint8_t v_handlerDispatched_3950_, lean_object* v_response_3951_, lean_object* v_socket_3952_, uint8_t v_requiresData_3953_, uint8_t v_sentMessage_3954_, lean_object* v_reader_3955_, uint8_t v_pullBodyStalled_3956_, lean_object* v_requestStream_3957_, uint8_t v_requestBodyOpen_3958_){
_start:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___f_3965_; lean_object* v___f_3966_; uint8_t v___y_3968_; 
v___x_3960_ = lean_box(v_handlerDispatched_3950_);
v___x_3961_ = lean_box(v_requiresData_3953_);
v___x_3962_ = lean_box(v_sentMessage_3954_);
v___x_3963_ = lean_box(v_pullBodyStalled_3956_);
v___x_3964_ = lean_box(v_requestBodyOpen_3958_);
lean_inc_ref(v_requestStream_3957_);
lean_inc_ref(v_reader_3955_);
v___f_3965_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed), 17, 15);
lean_closure_set(v___f_3965_, 0, v_expectData_3944_);
lean_closure_set(v___f_3965_, 1, v_respStream_3945_);
lean_closure_set(v___f_3965_, 2, v_currentTimeout_3946_);
lean_closure_set(v___f_3965_, 3, v_keepAliveTimeout_3947_);
lean_closure_set(v___f_3965_, 4, v_headerTimeout_3948_);
lean_closure_set(v___f_3965_, 5, v_connectionContext_3949_);
lean_closure_set(v___f_3965_, 6, v___x_3960_);
lean_closure_set(v___f_3965_, 7, v_response_3951_);
lean_closure_set(v___f_3965_, 8, v_socket_3952_);
lean_closure_set(v___f_3965_, 9, v___x_3961_);
lean_closure_set(v___f_3965_, 10, v___x_3962_);
lean_closure_set(v___f_3965_, 11, v_reader_3955_);
lean_closure_set(v___f_3965_, 12, v___x_3963_);
lean_closure_set(v___f_3965_, 13, v___x_3964_);
lean_closure_set(v___f_3965_, 14, v_requestStream_3957_);
v___f_3966_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3966_, 0, v___f_3965_);
if (v_sentMessage_3954_ == 0)
{
lean_object* v_state_3974_; 
v_state_3974_ = lean_ctor_get(v_reader_3955_, 0);
lean_inc(v_state_3974_);
lean_dec_ref(v_reader_3955_);
if (lean_obj_tag(v_state_3974_) == 2)
{
lean_dec_ref_known(v_state_3974_, 1);
if (v_requestBodyOpen_3958_ == 0)
{
lean_dec_ref(v_requestStream_3957_);
v___y_3968_ = v_requestBodyOpen_3958_;
goto v___jp_3967_;
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3975_ = lean_unsigned_to_nat(0u);
v___x_3976_ = l_Std_Http_Body_Stream_hasInterest(v_requestStream_3957_);
v___x_3977_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3975_, v_sentMessage_3954_, v___x_3976_, v___f_3966_);
return v___x_3977_;
}
}
else
{
lean_dec(v_state_3974_);
lean_dec_ref(v_requestStream_3957_);
v___y_3968_ = v_sentMessage_3954_;
goto v___jp_3967_;
}
}
else
{
uint8_t v___x_3978_; 
lean_dec_ref(v_requestStream_3957_);
lean_dec_ref(v_reader_3955_);
v___x_3978_ = 0;
v___y_3968_ = v___x_3978_;
goto v___jp_3967_;
}
v___jp_3967_:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3969_ = lean_unsigned_to_nat(0u);
v___x_3970_ = lean_box(v___y_3968_);
v___x_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
v___x_3972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3971_);
v___x_3973_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3969_, v___y_3968_, v___x_3972_, v___f_3966_);
return v___x_3973_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object* v_expectData_3979_, lean_object* v_respStream_3980_, lean_object* v_currentTimeout_3981_, lean_object* v_keepAliveTimeout_3982_, lean_object* v_headerTimeout_3983_, lean_object* v_connectionContext_3984_, lean_object* v_handlerDispatched_3985_, lean_object* v_response_3986_, lean_object* v_socket_3987_, lean_object* v_requiresData_3988_, lean_object* v_sentMessage_3989_, lean_object* v_reader_3990_, lean_object* v_pullBodyStalled_3991_, lean_object* v_requestStream_3992_, lean_object* v_requestBodyOpen_3993_, lean_object* v___y_3994_){
_start:
{
uint8_t v_handlerDispatched_boxed_3995_; uint8_t v_requiresData_boxed_3996_; uint8_t v_sentMessage_boxed_3997_; uint8_t v_pullBodyStalled_boxed_3998_; uint8_t v_requestBodyOpen_boxed_3999_; lean_object* v_res_4000_; 
v_handlerDispatched_boxed_3995_ = lean_unbox(v_handlerDispatched_3985_);
v_requiresData_boxed_3996_ = lean_unbox(v_requiresData_3988_);
v_sentMessage_boxed_3997_ = lean_unbox(v_sentMessage_3989_);
v_pullBodyStalled_boxed_3998_ = lean_unbox(v_pullBodyStalled_3991_);
v_requestBodyOpen_boxed_3999_ = lean_unbox(v_requestBodyOpen_3993_);
v_res_4000_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(v_expectData_3979_, v_respStream_3980_, v_currentTimeout_3981_, v_keepAliveTimeout_3982_, v_headerTimeout_3983_, v_connectionContext_3984_, v_handlerDispatched_boxed_3995_, v_response_3986_, v_socket_3987_, v_requiresData_boxed_3996_, v_sentMessage_boxed_3997_, v_reader_3990_, v_pullBodyStalled_boxed_3998_, v_requestStream_3992_, v_requestBodyOpen_boxed_3999_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t v_sentMessage_4001_, lean_object* v___f_4002_, uint8_t v___x_4003_, lean_object* v_x_4004_){
_start:
{
uint8_t v___y_4007_; 
if (lean_obj_tag(v_x_4004_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4021_; 
lean_dec_ref(v___f_4002_);
v_a_4013_ = lean_ctor_get(v_x_4004_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v_x_4004_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_4015_ = v_x_4004_;
v_isShared_4016_ = v_isSharedCheck_4021_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v_x_4004_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4021_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
lean_object* v___x_4019_; 
v___x_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4018_);
return v___x_4019_;
}
}
}
else
{
lean_object* v_a_4022_; uint8_t v___x_4023_; 
v_a_4022_ = lean_ctor_get(v_x_4004_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v_x_4004_, 1);
v___x_4023_ = lean_unbox(v_a_4022_);
lean_dec(v_a_4022_);
if (v___x_4023_ == 0)
{
v___y_4007_ = v___x_4003_;
goto v___jp_4006_;
}
else
{
v___y_4007_ = v_sentMessage_4001_;
goto v___jp_4006_;
}
}
v___jp_4006_:
{
lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = lean_box(v___y_4007_);
v___x_4010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4009_);
v___x_4011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4010_);
v___x_4012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4008_, v_sentMessage_4001_, v___x_4011_, v___f_4002_);
return v___x_4012_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object* v_sentMessage_4024_, lean_object* v___f_4025_, lean_object* v___x_4026_, lean_object* v_x_4027_, lean_object* v___y_4028_){
_start:
{
uint8_t v_sentMessage_boxed_4029_; uint8_t v___x_2541__boxed_4030_; lean_object* v_res_4031_; 
v_sentMessage_boxed_4029_ = lean_unbox(v_sentMessage_4024_);
v___x_2541__boxed_4030_ = lean_unbox(v___x_4026_);
v_res_4031_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(v_sentMessage_boxed_4029_, v___f_4025_, v___x_2541__boxed_4030_, v_x_4027_);
return v_res_4031_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0(void){
_start:
{
lean_object* v___f_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___f_4032_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___x_4033_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4034_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___x_4035_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4035_, 0, lean_box(0));
lean_closure_set(v___x_4035_, 1, lean_box(0));
lean_closure_set(v___x_4035_, 2, v___x_4034_);
lean_closure_set(v___x_4035_, 3, lean_box(0));
lean_closure_set(v___x_4035_, 4, lean_box(0));
lean_closure_set(v___x_4035_, 5, v___x_4033_);
lean_closure_set(v___x_4035_, 6, v___f_4032_);
return v___x_4035_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object* v_socket_4036_, lean_object* v_connectionContext_4037_, lean_object* v_state_4038_){
_start:
{
lean_object* v_machine_4040_; lean_object* v_writer_4041_; lean_object* v_requestStream_4042_; lean_object* v_keepAliveTimeout_4043_; lean_object* v_currentTimeout_4044_; lean_object* v_headerTimeout_4045_; lean_object* v_response_4046_; lean_object* v_respStream_4047_; uint8_t v_requiresData_4048_; lean_object* v_expectData_4049_; uint8_t v_handlerDispatched_4050_; lean_object* v_reader_4051_; uint8_t v_pullBodyStalled_4052_; uint8_t v_sentMessage_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___f_4058_; lean_object* v___f_4059_; uint8_t v___y_4061_; 
v_machine_4040_ = lean_ctor_get(v_state_4038_, 0);
lean_inc_ref(v_machine_4040_);
v_writer_4041_ = lean_ctor_get(v_machine_4040_, 1);
lean_inc_ref(v_writer_4041_);
v_requestStream_4042_ = lean_ctor_get(v_state_4038_, 1);
lean_inc_ref_n(v_requestStream_4042_, 2);
v_keepAliveTimeout_4043_ = lean_ctor_get(v_state_4038_, 2);
lean_inc(v_keepAliveTimeout_4043_);
v_currentTimeout_4044_ = lean_ctor_get(v_state_4038_, 3);
lean_inc(v_currentTimeout_4044_);
v_headerTimeout_4045_ = lean_ctor_get(v_state_4038_, 4);
lean_inc(v_headerTimeout_4045_);
v_response_4046_ = lean_ctor_get(v_state_4038_, 5);
lean_inc_ref(v_response_4046_);
v_respStream_4047_ = lean_ctor_get(v_state_4038_, 6);
lean_inc(v_respStream_4047_);
v_requiresData_4048_ = lean_ctor_get_uint8(v_state_4038_, sizeof(void*)*9);
v_expectData_4049_ = lean_ctor_get(v_state_4038_, 7);
lean_inc(v_expectData_4049_);
v_handlerDispatched_4050_ = lean_ctor_get_uint8(v_state_4038_, sizeof(void*)*9 + 1);
lean_dec_ref(v_state_4038_);
v_reader_4051_ = lean_ctor_get(v_machine_4040_, 0);
lean_inc_ref_n(v_reader_4051_, 2);
v_pullBodyStalled_4052_ = lean_ctor_get_uint8(v_machine_4040_, sizeof(void*)*6 + 2);
lean_dec_ref(v_machine_4040_);
v_sentMessage_4053_ = lean_ctor_get_uint8(v_writer_4041_, sizeof(void*)*6);
lean_dec_ref(v_writer_4041_);
v___x_4054_ = lean_box(v_handlerDispatched_4050_);
v___x_4055_ = lean_box(v_requiresData_4048_);
v___x_4056_ = lean_box(v_sentMessage_4053_);
v___x_4057_ = lean_box(v_pullBodyStalled_4052_);
v___f_4058_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed), 16, 14);
lean_closure_set(v___f_4058_, 0, v_expectData_4049_);
lean_closure_set(v___f_4058_, 1, v_respStream_4047_);
lean_closure_set(v___f_4058_, 2, v_currentTimeout_4044_);
lean_closure_set(v___f_4058_, 3, v_keepAliveTimeout_4043_);
lean_closure_set(v___f_4058_, 4, v_headerTimeout_4045_);
lean_closure_set(v___f_4058_, 5, v_connectionContext_4037_);
lean_closure_set(v___f_4058_, 6, v___x_4054_);
lean_closure_set(v___f_4058_, 7, v_response_4046_);
lean_closure_set(v___f_4058_, 8, v_socket_4036_);
lean_closure_set(v___f_4058_, 9, v___x_4055_);
lean_closure_set(v___f_4058_, 10, v___x_4056_);
lean_closure_set(v___f_4058_, 11, v_reader_4051_);
lean_closure_set(v___f_4058_, 12, v___x_4057_);
lean_closure_set(v___f_4058_, 13, v_requestStream_4042_);
v___f_4059_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4059_, 0, v___f_4058_);
if (v_sentMessage_4053_ == 0)
{
lean_object* v_state_4067_; 
v_state_4067_ = lean_ctor_get(v_reader_4051_, 0);
lean_inc(v_state_4067_);
lean_dec_ref(v_reader_4051_);
if (lean_obj_tag(v_state_4067_) == 2)
{
uint8_t v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___f_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___f_4074_; lean_object* v___f_4075_; lean_object* v___x_4076_; lean_object* v___x_2071__overap_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; 
lean_dec_ref_known(v_state_4067_, 1);
v___x_4068_ = 1;
v___x_4069_ = lean_box(v_sentMessage_4053_);
v___x_4070_ = lean_box(v___x_4068_);
v___f_4071_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4071_, 0, v___x_4069_);
lean_closure_set(v___f_4071_, 1, v___f_4059_);
lean_closure_set(v___f_4071_, 2, v___x_4070_);
v___x_4072_ = lean_unsigned_to_nat(0u);
v___x_4073_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4074_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4075_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4076_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0);
v___x_2071__overap_4077_ = l_Std_Mutex_atomically___redArg(v___x_4073_, v___f_4074_, v___f_4075_, v_requestStream_4042_, v___x_4076_);
v___x_4078_ = lean_apply_1(v___x_2071__overap_4077_, lean_box(0));
v___x_4079_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4072_, v_sentMessage_4053_, v___x_4078_, v___f_4071_);
return v___x_4079_;
}
else
{
lean_dec(v_state_4067_);
lean_dec_ref(v_requestStream_4042_);
v___y_4061_ = v_sentMessage_4053_;
goto v___jp_4060_;
}
}
else
{
uint8_t v___x_4080_; 
lean_dec_ref(v_reader_4051_);
lean_dec_ref(v_requestStream_4042_);
v___x_4080_ = 0;
v___y_4061_ = v___x_4080_;
goto v___jp_4060_;
}
v___jp_4060_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4062_ = lean_unsigned_to_nat(0u);
v___x_4063_ = lean_box(v___y_4061_);
v___x_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4063_);
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
v___x_4066_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4062_, v___y_4061_, v___x_4065_, v___f_4059_);
return v___x_4066_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object* v_socket_4081_, lean_object* v_connectionContext_4082_, lean_object* v_state_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4081_, v_connectionContext_4082_, v_state_4083_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object* v_00_u03b1_4086_, lean_object* v_00_u03b2_4087_, lean_object* v_inst_4088_, lean_object* v_socket_4089_, lean_object* v_connectionContext_4090_, lean_object* v_state_4091_){
_start:
{
lean_object* v___x_4093_; 
v___x_4093_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4089_, v_connectionContext_4090_, v_state_4091_);
return v___x_4093_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object* v_00_u03b1_4094_, lean_object* v_00_u03b2_4095_, lean_object* v_inst_4096_, lean_object* v_socket_4097_, lean_object* v_connectionContext_4098_, lean_object* v_state_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v_res_4101_; 
v_res_4101_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(v_00_u03b1_4094_, v_00_u03b2_4095_, v_inst_4096_, v_socket_4097_, v_connectionContext_4098_, v_state_4099_);
lean_dec_ref(v_inst_4096_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object* v_x_4102_){
_start:
{
if (lean_obj_tag(v_x_4102_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4112_; 
v_a_4104_ = lean_ctor_get(v_x_4102_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v_x_4102_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4106_ = v_x_4102_;
v_isShared_4107_ = v_isSharedCheck_4112_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v_x_4102_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4112_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4109_; 
if (v_isShared_4107_ == 0)
{
v___x_4109_ = v___x_4106_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4104_);
v___x_4109_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4110_; 
v___x_4110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4109_);
return v___x_4110_;
}
}
}
else
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4122_; 
v_a_4113_ = lean_ctor_get(v_x_4102_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v_x_4102_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4115_ = v_x_4102_;
v_isShared_4116_ = v_isSharedCheck_4122_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v_x_4102_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4122_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v___x_4117_; lean_object* v___x_4119_; 
v___x_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4117_, 0, v_a_4113_);
if (v_isShared_4116_ == 0)
{
lean_ctor_set(v___x_4115_, 0, v___x_4117_);
v___x_4119_ = v___x_4115_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4117_);
v___x_4119_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
lean_object* v___x_4120_; 
v___x_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
return v___x_4120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object* v_x_4123_, lean_object* v___y_4124_){
_start:
{
lean_object* v_res_4125_; 
v_res_4125_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(v_x_4123_);
return v_res_4125_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object* v_x_4130_){
_start:
{
if (lean_obj_tag(v_x_4130_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4134_; uint8_t v_isShared_4135_; uint8_t v_isSharedCheck_4140_; 
v_a_4132_ = lean_ctor_get(v_x_4130_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v_x_4130_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4134_ = v_x_4130_;
v_isShared_4135_ = v_isSharedCheck_4140_;
goto v_resetjp_4133_;
}
else
{
lean_inc(v_a_4132_);
lean_dec(v_x_4130_);
v___x_4134_ = lean_box(0);
v_isShared_4135_ = v_isSharedCheck_4140_;
goto v_resetjp_4133_;
}
v_resetjp_4133_:
{
lean_object* v___x_4137_; 
if (v_isShared_4135_ == 0)
{
v___x_4137_ = v___x_4134_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_a_4132_);
v___x_4137_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
lean_object* v___x_4138_; 
v___x_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4138_, 0, v___x_4137_);
return v___x_4138_;
}
}
}
else
{
lean_object* v___x_4141_; 
lean_dec_ref_known(v_x_4130_, 1);
v___x_4141_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___closed__1));
return v___x_4141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object* v_x_4142_, lean_object* v___y_4143_){
_start:
{
lean_object* v_res_4144_; 
v_res_4144_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(v_x_4142_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object* v_onFailure_4145_, lean_object* v_handler_4146_, lean_object* v___f_4147_, lean_object* v_x_4148_){
_start:
{
if (lean_obj_tag(v_x_4148_) == 0)
{
lean_object* v_a_4150_; lean_object* v___x_4151_; uint8_t v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v_a_4150_ = lean_ctor_get(v_x_4148_, 0);
lean_inc(v_a_4150_);
lean_dec_ref_known(v_x_4148_, 1);
v___x_4151_ = lean_unsigned_to_nat(0u);
v___x_4152_ = 0;
v___x_4153_ = lean_apply_3(v_onFailure_4145_, v_handler_4146_, v_a_4150_, lean_box(0));
v___x_4154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4151_, v___x_4152_, v___x_4153_, v___f_4147_);
return v___x_4154_;
}
else
{
lean_object* v___x_4155_; 
lean_dec_ref(v___f_4147_);
lean_dec(v_handler_4146_);
lean_dec_ref(v_onFailure_4145_);
v___x_4155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4155_, 0, v_x_4148_);
return v___x_4155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object* v_onFailure_4156_, lean_object* v_handler_4157_, lean_object* v___f_4158_, lean_object* v_x_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v_res_4161_; 
v_res_4161_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(v_onFailure_4156_, v_handler_4157_, v___f_4158_, v_x_4159_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object* v_x_4162_){
_start:
{
if (lean_obj_tag(v_x_4162_) == 0)
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4172_; 
v_a_4164_ = lean_ctor_get(v_x_4162_, 0);
v_isSharedCheck_4172_ = !lean_is_exclusive(v_x_4162_);
if (v_isSharedCheck_4172_ == 0)
{
v___x_4166_ = v_x_4162_;
v_isShared_4167_ = v_isSharedCheck_4172_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v_x_4162_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4172_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4171_; 
v_reuseFailAlloc_4171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4171_, 0, v_a_4164_);
v___x_4169_ = v_reuseFailAlloc_4171_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
lean_object* v___x_4170_; 
v___x_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
return v___x_4170_;
}
}
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4191_; 
v_a_4173_ = lean_ctor_get(v_x_4162_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_x_4162_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4175_ = v_x_4162_;
v_isShared_4176_ = v_isSharedCheck_4191_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v_x_4162_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4191_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v_snd_4177_; uint8_t v___x_4178_; 
v_snd_4177_ = lean_ctor_get(v_a_4173_, 1);
v___x_4178_ = lean_unbox(v_snd_4177_);
if (v___x_4178_ == 0)
{
lean_object* v_fst_4179_; lean_object* v___x_4180_; lean_object* v___x_4182_; 
v_fst_4179_ = lean_ctor_get(v_a_4173_, 0);
lean_inc(v_fst_4179_);
lean_dec(v_a_4173_);
v___x_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4180_, 0, v_fst_4179_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 0, v___x_4180_);
v___x_4182_ = v___x_4175_;
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
else
{
lean_object* v_fst_4185_; lean_object* v___x_4186_; lean_object* v___x_4188_; 
v_fst_4185_ = lean_ctor_get(v_a_4173_, 0);
lean_inc(v_fst_4185_);
lean_dec(v_a_4173_);
v___x_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4186_, 0, v_fst_4185_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 0, v___x_4186_);
v___x_4188_ = v___x_4175_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v___x_4186_);
v___x_4188_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
lean_object* v___x_4189_; 
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
return v___x_4189_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object* v_x_4192_, lean_object* v___y_4193_){
_start:
{
lean_object* v_res_4194_; 
v_res_4194_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_x_4192_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object* v_inst_4195_, lean_object* v_socket_4196_, lean_object* v_____r_4197_){
_start:
{
lean_object* v_val_4200_; lean_object* v_close_4202_; lean_object* v___x_4203_; 
v_close_4202_ = lean_ctor_get(v_inst_4195_, 3);
lean_inc_ref(v_close_4202_);
lean_dec_ref(v_inst_4195_);
v___x_4203_ = lean_apply_2(v_close_4202_, v_socket_4196_, lean_box(0));
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4211_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4206_ = v___x_4203_;
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_dec(v___x_4203_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___x_4209_; 
if (v_isShared_4207_ == 0)
{
lean_ctor_set_tag(v___x_4206_, 1);
v___x_4209_ = v___x_4206_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4204_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
v_val_4200_ = v___x_4209_;
goto v___jp_4199_;
}
}
}
else
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4219_; 
v_a_4212_ = lean_ctor_get(v___x_4203_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4214_ = v___x_4203_;
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_4203_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4217_; 
if (v_isShared_4215_ == 0)
{
lean_ctor_set_tag(v___x_4214_, 0);
v___x_4217_ = v___x_4214_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_a_4212_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
v_val_4200_ = v___x_4217_;
goto v___jp_4199_;
}
}
}
v___jp_4199_:
{
lean_object* v___x_4201_; 
v___x_4201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4201_, 0, v_val_4200_);
return v___x_4201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object* v_inst_4220_, lean_object* v_socket_4221_, lean_object* v_____r_4222_, lean_object* v___y_4223_){
_start:
{
lean_object* v_res_4224_; 
v_res_4224_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(v_inst_4220_, v_socket_4221_, v_____r_4222_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object* v___f_4225_, lean_object* v_x_4226_){
_start:
{
if (lean_obj_tag(v_x_4226_) == 0)
{
lean_object* v___x_4228_; 
lean_dec_ref(v___f_4225_);
v___x_4228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4228_, 0, v_x_4226_);
return v___x_4228_;
}
else
{
lean_object* v_a_4229_; lean_object* v___x_4230_; 
v_a_4229_ = lean_ctor_get(v_x_4226_, 0);
lean_inc(v_a_4229_);
lean_dec_ref_known(v_x_4226_, 1);
v___x_4230_ = lean_apply_2(v___f_4225_, v_a_4229_, lean_box(0));
return v___x_4230_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object* v___f_4231_, lean_object* v_x_4232_, lean_object* v___y_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(v___f_4231_, v_x_4232_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(lean_object* v_close_4235_, lean_object* v_val_4236_, lean_object* v___f_4237_, lean_object* v___f_4238_, lean_object* v_x_4239_){
_start:
{
if (lean_obj_tag(v_x_4239_) == 0)
{
lean_object* v_a_4241_; lean_object* v___x_4243_; uint8_t v_isShared_4244_; uint8_t v_isSharedCheck_4249_; 
lean_dec_ref(v___f_4238_);
lean_dec_ref(v___f_4237_);
lean_dec(v_val_4236_);
lean_dec_ref(v_close_4235_);
v_a_4241_ = lean_ctor_get(v_x_4239_, 0);
v_isSharedCheck_4249_ = !lean_is_exclusive(v_x_4239_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4243_ = v_x_4239_;
v_isShared_4244_ = v_isSharedCheck_4249_;
goto v_resetjp_4242_;
}
else
{
lean_inc(v_a_4241_);
lean_dec(v_x_4239_);
v___x_4243_ = lean_box(0);
v_isShared_4244_ = v_isSharedCheck_4249_;
goto v_resetjp_4242_;
}
v_resetjp_4242_:
{
lean_object* v___x_4246_; 
if (v_isShared_4244_ == 0)
{
v___x_4246_ = v___x_4243_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_a_4241_);
v___x_4246_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
lean_object* v___x_4247_; 
v___x_4247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4246_);
return v___x_4247_;
}
}
}
else
{
lean_object* v_a_4250_; uint8_t v___x_4251_; 
v_a_4250_ = lean_ctor_get(v_x_4239_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v_x_4239_, 1);
v___x_4251_ = lean_unbox(v_a_4250_);
if (v___x_4251_ == 0)
{
lean_object* v___x_4252_; lean_object* v___x_4253_; uint8_t v___x_4254_; lean_object* v___x_4255_; 
lean_dec_ref(v___f_4238_);
v___x_4252_ = lean_unsigned_to_nat(0u);
v___x_4253_ = lean_apply_2(v_close_4235_, v_val_4236_, lean_box(0));
v___x_4254_ = lean_unbox(v_a_4250_);
lean_dec(v_a_4250_);
v___x_4255_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4252_, v___x_4254_, v___x_4253_, v___f_4237_);
return v___x_4255_;
}
else
{
lean_object* v___x_4256_; lean_object* v___x_4257_; 
lean_dec(v_a_4250_);
lean_dec_ref(v___f_4237_);
lean_dec(v_val_4236_);
lean_dec_ref(v_close_4235_);
v___x_4256_ = lean_box(0);
v___x_4257_ = lean_apply_2(v___f_4238_, v___x_4256_, lean_box(0));
return v___x_4257_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object* v_close_4258_, lean_object* v_val_4259_, lean_object* v___f_4260_, lean_object* v___f_4261_, lean_object* v_x_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(v_close_4258_, v_val_4259_, v___f_4260_, v___f_4261_, v_x_4262_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object* v_respStream_4265_, lean_object* v_responseBodyInstance_4266_, lean_object* v___f_4267_, lean_object* v___f_4268_, lean_object* v_____r_4269_){
_start:
{
if (lean_obj_tag(v_respStream_4265_) == 1)
{
lean_object* v_val_4271_; lean_object* v_close_4272_; lean_object* v_isClosed_4273_; lean_object* v___f_4274_; lean_object* v___x_4275_; uint8_t v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; 
v_val_4271_ = lean_ctor_get(v_respStream_4265_, 0);
lean_inc_n(v_val_4271_, 2);
lean_dec_ref_known(v_respStream_4265_, 1);
v_close_4272_ = lean_ctor_get(v_responseBodyInstance_4266_, 1);
lean_inc_ref(v_close_4272_);
v_isClosed_4273_ = lean_ctor_get(v_responseBodyInstance_4266_, 2);
lean_inc_ref(v_isClosed_4273_);
lean_dec_ref(v_responseBodyInstance_4266_);
v___f_4274_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_4274_, 0, v_close_4272_);
lean_closure_set(v___f_4274_, 1, v_val_4271_);
lean_closure_set(v___f_4274_, 2, v___f_4267_);
lean_closure_set(v___f_4274_, 3, v___f_4268_);
v___x_4275_ = lean_unsigned_to_nat(0u);
v___x_4276_ = 0;
v___x_4277_ = lean_apply_2(v_isClosed_4273_, v_val_4271_, lean_box(0));
v___x_4278_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4275_, v___x_4276_, v___x_4277_, v___f_4274_);
return v___x_4278_;
}
else
{
lean_object* v___x_4279_; lean_object* v___x_4280_; 
lean_dec_ref(v___f_4267_);
lean_dec_ref(v_responseBodyInstance_4266_);
lean_dec(v_respStream_4265_);
v___x_4279_ = lean_box(0);
v___x_4280_ = lean_apply_2(v___f_4268_, v___x_4279_, lean_box(0));
return v___x_4280_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object* v_respStream_4281_, lean_object* v_responseBodyInstance_4282_, lean_object* v___f_4283_, lean_object* v___f_4284_, lean_object* v_____r_4285_, lean_object* v___y_4286_){
_start:
{
lean_object* v_res_4287_; 
v_res_4287_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(v_respStream_4281_, v_responseBodyInstance_4282_, v___f_4283_, v___f_4284_, v_____r_4285_);
return v_res_4287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object* v_requestStream_4288_, lean_object* v___f_4289_, lean_object* v___f_4290_, lean_object* v_x_4291_){
_start:
{
if (lean_obj_tag(v_x_4291_) == 0)
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4301_; 
lean_dec_ref(v___f_4290_);
lean_dec_ref(v___f_4289_);
lean_dec_ref(v_requestStream_4288_);
v_a_4293_ = lean_ctor_get(v_x_4291_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v_x_4291_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4295_ = v_x_4291_;
v_isShared_4296_ = v_isSharedCheck_4301_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v_x_4291_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4301_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
lean_object* v___x_4299_; 
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4298_);
return v___x_4299_;
}
}
}
else
{
lean_object* v_a_4302_; uint8_t v___x_4303_; 
v_a_4302_ = lean_ctor_get(v_x_4291_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v_x_4291_, 1);
v___x_4303_ = lean_unbox(v_a_4302_);
if (v___x_4303_ == 0)
{
lean_object* v___x_4304_; lean_object* v___x_4305_; uint8_t v___x_4306_; lean_object* v___x_4307_; 
lean_dec_ref(v___f_4290_);
v___x_4304_ = lean_unsigned_to_nat(0u);
v___x_4305_ = l_Std_Http_Body_Stream_close(v_requestStream_4288_);
v___x_4306_ = lean_unbox(v_a_4302_);
lean_dec(v_a_4302_);
v___x_4307_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4304_, v___x_4306_, v___x_4305_, v___f_4289_);
return v___x_4307_;
}
else
{
lean_object* v___x_4308_; lean_object* v___x_4309_; 
lean_dec(v_a_4302_);
lean_dec_ref(v___f_4289_);
lean_dec_ref(v_requestStream_4288_);
v___x_4308_ = lean_box(0);
v___x_4309_ = lean_apply_2(v___f_4290_, v___x_4308_, lean_box(0));
return v___x_4309_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object* v_requestStream_4310_, lean_object* v___f_4311_, lean_object* v___f_4312_, lean_object* v_x_4313_, lean_object* v___y_4314_){
_start:
{
lean_object* v_res_4315_; 
v_res_4315_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(v_requestStream_4310_, v___f_4311_, v___f_4312_, v_x_4313_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object* v_responseBodyInstance_4316_, lean_object* v___f_4317_, lean_object* v___f_4318_, lean_object* v___f_4319_, lean_object* v_x_4320_){
_start:
{
if (lean_obj_tag(v_x_4320_) == 0)
{
lean_object* v_a_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4330_; 
lean_dec_ref(v___f_4319_);
lean_dec_ref(v___f_4318_);
lean_dec_ref(v___f_4317_);
lean_dec_ref(v_responseBodyInstance_4316_);
v_a_4322_ = lean_ctor_get(v_x_4320_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v_x_4320_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4324_ = v_x_4320_;
v_isShared_4325_ = v_isSharedCheck_4330_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_a_4322_);
lean_dec(v_x_4320_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4330_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v___x_4327_; 
if (v_isShared_4325_ == 0)
{
v___x_4327_ = v___x_4324_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4322_);
v___x_4327_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
lean_object* v___x_4328_; 
v___x_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
return v___x_4328_;
}
}
}
else
{
lean_object* v_a_4331_; lean_object* v_requestStream_4332_; lean_object* v_respStream_4333_; lean_object* v___f_4334_; lean_object* v___f_4335_; lean_object* v___f_4336_; lean_object* v___x_4337_; uint8_t v___x_4338_; lean_object* v___x_4339_; lean_object* v___f_4340_; lean_object* v___f_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4428__overap_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
v_a_4331_ = lean_ctor_get(v_x_4320_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v_x_4320_, 1);
v_requestStream_4332_ = lean_ctor_get(v_a_4331_, 1);
lean_inc_ref_n(v_requestStream_4332_, 2);
v_respStream_4333_ = lean_ctor_get(v_a_4331_, 6);
lean_inc(v_respStream_4333_);
lean_dec(v_a_4331_);
v___f_4334_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed), 6, 4);
lean_closure_set(v___f_4334_, 0, v_respStream_4333_);
lean_closure_set(v___f_4334_, 1, v_responseBodyInstance_4316_);
lean_closure_set(v___f_4334_, 2, v___f_4317_);
lean_closure_set(v___f_4334_, 3, v___f_4318_);
lean_inc_ref(v___f_4334_);
v___f_4335_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4335_, 0, v___f_4334_);
v___f_4336_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4336_, 0, v_requestStream_4332_);
lean_closure_set(v___f_4336_, 1, v___f_4335_);
lean_closure_set(v___f_4336_, 2, v___f_4334_);
v___x_4337_ = lean_unsigned_to_nat(0u);
v___x_4338_ = 0;
v___x_4339_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4340_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4341_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4342_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4343_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4343_, 0, lean_box(0));
lean_closure_set(v___x_4343_, 1, lean_box(0));
lean_closure_set(v___x_4343_, 2, v___x_4339_);
lean_closure_set(v___x_4343_, 3, lean_box(0));
lean_closure_set(v___x_4343_, 4, lean_box(0));
lean_closure_set(v___x_4343_, 5, v___x_4342_);
lean_closure_set(v___x_4343_, 6, v___f_4319_);
v___x_4428__overap_4344_ = l_Std_Mutex_atomically___redArg(v___x_4339_, v___f_4340_, v___f_4341_, v_requestStream_4332_, v___x_4343_);
v___x_4345_ = lean_apply_1(v___x_4428__overap_4344_, lean_box(0));
v___x_4346_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4337_, v___x_4338_, v___x_4345_, v___f_4336_);
return v___x_4346_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object* v_responseBodyInstance_4347_, lean_object* v___f_4348_, lean_object* v___f_4349_, lean_object* v___f_4350_, lean_object* v_x_4351_, lean_object* v___y_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(v_responseBodyInstance_4347_, v___f_4348_, v___f_4349_, v___f_4350_, v_x_4351_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object* v_h_4354_, lean_object* v_responseBodyInstance_4355_, lean_object* v_handler_4356_, lean_object* v_config_4357_, lean_object* v___x_4358_, uint8_t v___x_4359_, lean_object* v___f_4360_, lean_object* v_x_4361_){
_start:
{
if (lean_obj_tag(v_x_4361_) == 0)
{
lean_object* v_a_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4371_; 
lean_dec_ref(v___f_4360_);
lean_dec_ref(v___x_4358_);
lean_dec_ref(v_config_4357_);
lean_dec(v_handler_4356_);
lean_dec_ref(v_responseBodyInstance_4355_);
lean_dec_ref(v_h_4354_);
v_a_4363_ = lean_ctor_get(v_x_4361_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v_x_4361_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4365_ = v_x_4361_;
v_isShared_4366_ = v_isSharedCheck_4371_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_a_4363_);
lean_dec(v_x_4361_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4371_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4368_; 
if (v_isShared_4366_ == 0)
{
v___x_4368_ = v___x_4365_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v_a_4363_);
v___x_4368_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
lean_object* v___x_4369_; 
v___x_4369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4369_, 0, v___x_4368_);
return v___x_4369_;
}
}
}
else
{
lean_object* v_a_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; 
v_a_4372_ = lean_ctor_get(v_x_4361_, 0);
lean_inc(v_a_4372_);
lean_dec_ref_known(v_x_4361_, 1);
v___x_4373_ = lean_unsigned_to_nat(0u);
v___x_4374_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_h_4354_, v_responseBodyInstance_4355_, v_handler_4356_, v_config_4357_, v_a_4372_, v___x_4358_);
v___x_4375_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4373_, v___x_4359_, v___x_4374_, v___f_4360_);
return v___x_4375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object* v_h_4376_, lean_object* v_responseBodyInstance_4377_, lean_object* v_handler_4378_, lean_object* v_config_4379_, lean_object* v___x_4380_, lean_object* v___x_4381_, lean_object* v___f_4382_, lean_object* v_x_4383_, lean_object* v___y_4384_){
_start:
{
uint8_t v___x_5104__boxed_4385_; lean_object* v_res_4386_; 
v___x_5104__boxed_4385_ = lean_unbox(v___x_4381_);
v_res_4386_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(v_h_4376_, v_responseBodyInstance_4377_, v_handler_4378_, v_config_4379_, v___x_4380_, v___x_5104__boxed_4385_, v___f_4382_, v_x_4383_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object* v_inst_4387_, lean_object* v_h_4388_, lean_object* v_responseBodyInstance_4389_, lean_object* v_config_4390_, lean_object* v_handler_4391_, uint8_t v___x_4392_, lean_object* v___f_4393_, lean_object* v_x_4394_){
_start:
{
if (lean_obj_tag(v_x_4394_) == 0)
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4404_; 
lean_dec_ref(v___f_4393_);
lean_dec(v_handler_4391_);
lean_dec_ref(v_config_4390_);
lean_dec_ref(v_responseBodyInstance_4389_);
lean_dec_ref(v_h_4388_);
lean_dec_ref(v_inst_4387_);
v_a_4396_ = lean_ctor_get(v_x_4394_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v_x_4394_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4398_ = v_x_4394_;
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v_x_4394_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
lean_object* v___x_4402_; 
v___x_4402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4401_);
return v___x_4402_;
}
}
}
else
{
lean_object* v_a_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v_a_4405_ = lean_ctor_get(v_x_4394_, 0);
lean_inc(v_a_4405_);
lean_dec_ref_known(v_x_4394_, 1);
v___x_4406_ = lean_unsigned_to_nat(0u);
v___x_4407_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_4387_, v_h_4388_, v_responseBodyInstance_4389_, v_config_4390_, v_handler_4391_, v_a_4405_);
v___x_4408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4406_, v___x_4392_, v___x_4407_, v___f_4393_);
return v___x_4408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object* v_inst_4409_, lean_object* v_h_4410_, lean_object* v_responseBodyInstance_4411_, lean_object* v_config_4412_, lean_object* v_handler_4413_, lean_object* v___x_4414_, lean_object* v___f_4415_, lean_object* v_x_4416_, lean_object* v___y_4417_){
_start:
{
uint8_t v___x_5145__boxed_4418_; lean_object* v_res_4419_; 
v___x_5145__boxed_4418_ = lean_unbox(v___x_4414_);
v_res_4419_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(v_inst_4409_, v_h_4410_, v_responseBodyInstance_4411_, v_config_4412_, v_handler_4413_, v___x_5145__boxed_4418_, v___f_4415_, v_x_4416_);
return v_res_4419_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t v___x_4420_, lean_object* v_h_4421_, lean_object* v_responseBodyInstance_4422_, lean_object* v_handler_4423_, lean_object* v_config_4424_, lean_object* v___f_4425_, lean_object* v_inst_4426_, lean_object* v_socket_4427_, lean_object* v_connectionContext_4428_, uint8_t v___x_4429_, lean_object* v_x_4430_){
_start:
{
if (lean_obj_tag(v_x_4430_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4440_; 
lean_dec_ref(v_connectionContext_4428_);
lean_dec(v_socket_4427_);
lean_dec_ref(v_inst_4426_);
lean_dec_ref(v___f_4425_);
lean_dec_ref(v_config_4424_);
lean_dec(v_handler_4423_);
lean_dec_ref(v_responseBodyInstance_4422_);
lean_dec_ref(v_h_4421_);
v_a_4432_ = lean_ctor_get(v_x_4430_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v_x_4430_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4434_ = v_x_4430_;
v_isShared_4435_ = v_isSharedCheck_4440_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_a_4432_);
lean_dec(v_x_4430_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4440_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4437_; 
if (v_isShared_4435_ == 0)
{
v___x_4437_ = v___x_4434_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v_a_4432_);
v___x_4437_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
lean_object* v___x_4438_; 
v___x_4438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4437_);
return v___x_4438_;
}
}
}
else
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4483_; 
v_a_4441_ = lean_ctor_get(v_x_4430_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v_x_4430_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4443_ = v_x_4430_;
v_isShared_4444_ = v_isSharedCheck_4483_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v_x_4430_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4483_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v_machine_4445_; lean_object* v_requestStream_4446_; lean_object* v_keepAliveTimeout_4447_; lean_object* v_currentTimeout_4448_; lean_object* v_headerTimeout_4449_; lean_object* v_response_4450_; lean_object* v_respStream_4451_; uint8_t v_requiresData_4452_; lean_object* v_expectData_4453_; uint8_t v_handlerDispatched_4454_; lean_object* v_pendingHead_4455_; uint8_t v___y_4466_; uint8_t v___y_4473_; uint8_t v___y_4475_; uint8_t v___y_4476_; uint8_t v___y_4478_; 
v_machine_4445_ = lean_ctor_get(v_a_4441_, 0);
v_requestStream_4446_ = lean_ctor_get(v_a_4441_, 1);
v_keepAliveTimeout_4447_ = lean_ctor_get(v_a_4441_, 2);
v_currentTimeout_4448_ = lean_ctor_get(v_a_4441_, 3);
v_headerTimeout_4449_ = lean_ctor_get(v_a_4441_, 4);
v_response_4450_ = lean_ctor_get(v_a_4441_, 5);
v_respStream_4451_ = lean_ctor_get(v_a_4441_, 6);
v_requiresData_4452_ = lean_ctor_get_uint8(v_a_4441_, sizeof(void*)*9);
v_expectData_4453_ = lean_ctor_get(v_a_4441_, 7);
v_handlerDispatched_4454_ = lean_ctor_get_uint8(v_a_4441_, sizeof(void*)*9 + 1);
v_pendingHead_4455_ = lean_ctor_get(v_a_4441_, 8);
if (lean_obj_tag(v_respStream_4451_) == 0)
{
v___y_4478_ = v___x_4420_;
goto v___jp_4477_;
}
else
{
v___y_4478_ = v___x_4429_;
goto v___jp_4477_;
}
v___jp_4456_:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___f_4459_; lean_object* v___x_4460_; lean_object* v___f_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4457_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4457_, 0, v_machine_4445_);
lean_ctor_set(v___x_4457_, 1, v_requestStream_4446_);
lean_ctor_set(v___x_4457_, 2, v_keepAliveTimeout_4447_);
lean_ctor_set(v___x_4457_, 3, v_currentTimeout_4448_);
lean_ctor_set(v___x_4457_, 4, v_headerTimeout_4449_);
lean_ctor_set(v___x_4457_, 5, v_response_4450_);
lean_ctor_set(v___x_4457_, 6, v_respStream_4451_);
lean_ctor_set(v___x_4457_, 7, v_expectData_4453_);
lean_ctor_set(v___x_4457_, 8, v_pendingHead_4455_);
lean_ctor_set_uint8(v___x_4457_, sizeof(void*)*9, v___x_4420_);
lean_ctor_set_uint8(v___x_4457_, sizeof(void*)*9 + 1, v_handlerDispatched_4454_);
v___x_4458_ = lean_box(v___x_4420_);
lean_inc_ref(v___x_4457_);
lean_inc_ref(v_config_4424_);
lean_inc(v_handler_4423_);
lean_inc_ref(v_responseBodyInstance_4422_);
lean_inc_ref(v_h_4421_);
v___f_4459_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed), 9, 7);
lean_closure_set(v___f_4459_, 0, v_h_4421_);
lean_closure_set(v___f_4459_, 1, v_responseBodyInstance_4422_);
lean_closure_set(v___f_4459_, 2, v_handler_4423_);
lean_closure_set(v___f_4459_, 3, v_config_4424_);
lean_closure_set(v___f_4459_, 4, v___x_4457_);
lean_closure_set(v___f_4459_, 5, v___x_4458_);
lean_closure_set(v___f_4459_, 6, v___f_4425_);
v___x_4460_ = lean_box(v___x_4420_);
v___f_4461_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed), 9, 7);
lean_closure_set(v___f_4461_, 0, v_inst_4426_);
lean_closure_set(v___f_4461_, 1, v_h_4421_);
lean_closure_set(v___f_4461_, 2, v_responseBodyInstance_4422_);
lean_closure_set(v___f_4461_, 3, v_config_4424_);
lean_closure_set(v___f_4461_, 4, v_handler_4423_);
lean_closure_set(v___f_4461_, 5, v___x_4460_);
lean_closure_set(v___f_4461_, 6, v___f_4459_);
v___x_4462_ = lean_unsigned_to_nat(0u);
v___x_4463_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4427_, v_connectionContext_4428_, v___x_4457_);
v___x_4464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4462_, v___x_4420_, v___x_4463_, v___f_4461_);
return v___x_4464_;
}
v___jp_4465_:
{
if (v_requiresData_4452_ == 0)
{
if (v___y_4466_ == 0)
{
lean_object* v___x_4467_; lean_object* v___x_4469_; 
lean_dec_ref(v_connectionContext_4428_);
lean_dec(v_socket_4427_);
lean_dec_ref(v_inst_4426_);
lean_dec_ref(v___f_4425_);
lean_dec_ref(v_config_4424_);
lean_dec(v_handler_4423_);
lean_dec_ref(v_responseBodyInstance_4422_);
lean_dec_ref(v_h_4421_);
v___x_4467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4467_, 0, v_a_4441_);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 0, v___x_4467_);
v___x_4469_ = v___x_4443_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v___x_4467_);
v___x_4469_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
lean_object* v___x_4470_; 
v___x_4470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4469_);
return v___x_4470_;
}
}
else
{
lean_inc(v_pendingHead_4455_);
lean_inc(v_expectData_4453_);
lean_inc(v_respStream_4451_);
lean_inc_ref(v_response_4450_);
lean_inc(v_headerTimeout_4449_);
lean_inc(v_currentTimeout_4448_);
lean_inc(v_keepAliveTimeout_4447_);
lean_inc_ref(v_requestStream_4446_);
lean_inc_ref(v_machine_4445_);
lean_del_object(v___x_4443_);
lean_dec(v_a_4441_);
goto v___jp_4456_;
}
}
else
{
lean_inc(v_pendingHead_4455_);
lean_inc(v_expectData_4453_);
lean_inc(v_respStream_4451_);
lean_inc_ref(v_response_4450_);
lean_inc(v_headerTimeout_4449_);
lean_inc(v_currentTimeout_4448_);
lean_inc(v_keepAliveTimeout_4447_);
lean_inc_ref(v_requestStream_4446_);
lean_inc_ref(v_machine_4445_);
lean_del_object(v___x_4443_);
lean_dec(v_a_4441_);
goto v___jp_4456_;
}
}
v___jp_4472_:
{
if (v_handlerDispatched_4454_ == 0)
{
v___y_4466_ = v___y_4473_;
goto v___jp_4465_;
}
else
{
v___y_4466_ = v_handlerDispatched_4454_;
goto v___jp_4465_;
}
}
v___jp_4474_:
{
if (v___y_4475_ == 0)
{
v___y_4473_ = v___y_4476_;
goto v___jp_4472_;
}
else
{
v___y_4473_ = v___y_4475_;
goto v___jp_4472_;
}
}
v___jp_4477_:
{
lean_object* v_writer_4479_; uint8_t v_sentMessage_4480_; 
v_writer_4479_ = lean_ctor_get(v_machine_4445_, 1);
v_sentMessage_4480_ = lean_ctor_get_uint8(v_writer_4479_, sizeof(void*)*6);
if (v_sentMessage_4480_ == 0)
{
lean_object* v_reader_4481_; lean_object* v_state_4482_; 
v_reader_4481_ = lean_ctor_get(v_machine_4445_, 0);
v_state_4482_ = lean_ctor_get(v_reader_4481_, 0);
if (lean_obj_tag(v_state_4482_) == 2)
{
v___y_4475_ = v___y_4478_;
v___y_4476_ = v___x_4429_;
goto v___jp_4474_;
}
else
{
v___y_4475_ = v___y_4478_;
v___y_4476_ = v_sentMessage_4480_;
goto v___jp_4474_;
}
}
else
{
v___y_4475_ = v___y_4478_;
v___y_4476_ = v___x_4420_;
goto v___jp_4474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object* v___x_4484_, lean_object* v_h_4485_, lean_object* v_responseBodyInstance_4486_, lean_object* v_handler_4487_, lean_object* v_config_4488_, lean_object* v___f_4489_, lean_object* v_inst_4490_, lean_object* v_socket_4491_, lean_object* v_connectionContext_4492_, lean_object* v___x_4493_, lean_object* v_x_4494_, lean_object* v___y_4495_){
_start:
{
uint8_t v___x_5185__boxed_4496_; uint8_t v___x_5188__boxed_4497_; lean_object* v_res_4498_; 
v___x_5185__boxed_4496_ = lean_unbox(v___x_4484_);
v___x_5188__boxed_4497_ = lean_unbox(v___x_4493_);
v_res_4498_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(v___x_5185__boxed_4496_, v_h_4485_, v_responseBodyInstance_4486_, v_handler_4487_, v_config_4488_, v___f_4489_, v_inst_4490_, v_socket_4491_, v_connectionContext_4492_, v___x_5188__boxed_4497_, v_x_4494_);
return v_res_4498_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object* v_h_4499_, lean_object* v_handler_4500_, lean_object* v_extensions_4501_, lean_object* v_connectionContext_4502_, uint8_t v___x_4503_, lean_object* v___f_4504_, lean_object* v_x_4505_){
_start:
{
if (lean_obj_tag(v_x_4505_) == 0)
{
lean_object* v_a_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4515_; 
lean_dec_ref(v___f_4504_);
lean_dec_ref(v_connectionContext_4502_);
lean_dec(v_extensions_4501_);
lean_dec(v_handler_4500_);
lean_dec_ref(v_h_4499_);
v_a_4507_ = lean_ctor_get(v_x_4505_, 0);
v_isSharedCheck_4515_ = !lean_is_exclusive(v_x_4505_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4509_ = v_x_4505_;
v_isShared_4510_ = v_isSharedCheck_4515_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_a_4507_);
lean_dec(v_x_4505_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4515_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4512_; 
if (v_isShared_4510_ == 0)
{
v___x_4512_ = v___x_4509_;
goto v_reusejp_4511_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_a_4507_);
v___x_4512_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4511_;
}
v_reusejp_4511_:
{
lean_object* v___x_4513_; 
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4512_);
return v___x_4513_;
}
}
}
else
{
lean_object* v_a_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v_a_4516_ = lean_ctor_get(v_x_4505_, 0);
lean_inc(v_a_4516_);
lean_dec_ref_known(v_x_4505_, 1);
v___x_4517_ = lean_unsigned_to_nat(0u);
v___x_4518_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_h_4499_, v_handler_4500_, v_extensions_4501_, v_connectionContext_4502_, v_a_4516_);
v___x_4519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4517_, v___x_4503_, v___x_4518_, v___f_4504_);
return v___x_4519_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object* v_h_4520_, lean_object* v_handler_4521_, lean_object* v_extensions_4522_, lean_object* v_connectionContext_4523_, lean_object* v___x_4524_, lean_object* v___f_4525_, lean_object* v_x_4526_, lean_object* v___y_4527_){
_start:
{
uint8_t v___x_5279__boxed_4528_; lean_object* v_res_4529_; 
v___x_5279__boxed_4528_ = lean_unbox(v___x_4524_);
v_res_4529_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(v_h_4520_, v_handler_4521_, v_extensions_4522_, v_connectionContext_4523_, v___x_5279__boxed_4528_, v___f_4525_, v_x_4526_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object* v_h_4530_, lean_object* v_responseBodyInstance_4531_, lean_object* v_handler_4532_, lean_object* v_config_4533_, lean_object* v_connectionContext_4534_, lean_object* v_events_4535_, lean_object* v___x_4536_, uint8_t v___x_4537_, lean_object* v___f_4538_, lean_object* v_____r_4539_){
_start:
{
lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; 
v___x_4541_ = lean_unsigned_to_nat(0u);
v___x_4542_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_h_4530_, v_responseBodyInstance_4531_, v_handler_4532_, v_config_4533_, v_connectionContext_4534_, v_events_4535_, v___x_4536_);
v___x_4543_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4541_, v___x_4537_, v___x_4542_, v___f_4538_);
return v___x_4543_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object* v_h_4544_, lean_object* v_responseBodyInstance_4545_, lean_object* v_handler_4546_, lean_object* v_config_4547_, lean_object* v_connectionContext_4548_, lean_object* v_events_4549_, lean_object* v___x_4550_, lean_object* v___x_4551_, lean_object* v___f_4552_, lean_object* v_____r_4553_, lean_object* v___y_4554_){
_start:
{
uint8_t v___x_5318__boxed_4555_; lean_object* v_res_4556_; 
v___x_5318__boxed_4555_ = lean_unbox(v___x_4551_);
v_res_4556_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4544_, v_responseBodyInstance_4545_, v_handler_4546_, v_config_4547_, v_connectionContext_4548_, v_events_4549_, v___x_4550_, v___x_5318__boxed_4555_, v___f_4552_, v_____r_4553_);
return v_res_4556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object* v___x_4557_, lean_object* v___f_4558_, lean_object* v_x_4559_){
_start:
{
if (lean_obj_tag(v_x_4559_) == 0)
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4569_; 
lean_dec_ref(v___f_4558_);
lean_dec_ref(v___x_4557_);
v_a_4561_ = lean_ctor_get(v_x_4559_, 0);
v_isSharedCheck_4569_ = !lean_is_exclusive(v_x_4559_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4563_ = v_x_4559_;
v_isShared_4564_ = v_isSharedCheck_4569_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v_x_4559_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4569_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
lean_object* v___x_4567_; 
v___x_4567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4566_);
return v___x_4567_;
}
}
}
else
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4581_; 
v_a_4570_ = lean_ctor_get(v_x_4559_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v_x_4559_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4572_ = v_x_4559_;
v_isShared_4573_ = v_isSharedCheck_4581_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v_x_4559_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4581_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
if (lean_obj_tag(v_a_4570_) == 0)
{
lean_object* v___x_4574_; lean_object* v___x_4576_; 
lean_dec_ref(v___f_4558_);
v___x_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4574_, 0, v___x_4557_);
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4574_);
v___x_4576_ = v___x_4572_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v___x_4574_);
v___x_4576_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
lean_object* v___x_4577_; 
v___x_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4576_);
return v___x_4577_;
}
}
else
{
lean_object* v_val_4579_; lean_object* v___x_4580_; 
lean_del_object(v___x_4572_);
lean_dec_ref(v___x_4557_);
v_val_4579_ = lean_ctor_get(v_a_4570_, 0);
lean_inc(v_val_4579_);
lean_dec_ref_known(v_a_4570_, 1);
v___x_4580_ = lean_apply_2(v___f_4558_, v_val_4579_, lean_box(0));
return v___x_4580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object* v___x_4582_, lean_object* v___f_4583_, lean_object* v_x_4584_, lean_object* v___y_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(v___x_4582_, v___f_4583_, v_x_4584_);
return v_res_4586_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(uint8_t v___x_4587_, lean_object* v_h_4588_, lean_object* v_responseBodyInstance_4589_, lean_object* v_handler_4590_, lean_object* v_config_4591_, lean_object* v___f_4592_, lean_object* v_inst_4593_, lean_object* v_socket_4594_, lean_object* v_connectionContext_4595_, lean_object* v_extensions_4596_, lean_object* v___f_4597_, lean_object* v___f_4598_, lean_object* v_x_4599_, lean_object* v_____s_4600_){
_start:
{
lean_object* v_machine_4602_; lean_object* v_reader_4603_; lean_object* v_requestStream_4604_; lean_object* v_keepAliveTimeout_4605_; lean_object* v_currentTimeout_4606_; lean_object* v_headerTimeout_4607_; lean_object* v_response_4608_; lean_object* v_respStream_4609_; uint8_t v_requiresData_4610_; lean_object* v_expectData_4611_; uint8_t v_handlerDispatched_4612_; lean_object* v_pendingHead_4613_; lean_object* v_writer_4614_; lean_object* v_state_4615_; uint8_t v___x_4616_; 
v_machine_4602_ = lean_ctor_get(v_____s_4600_, 0);
v_reader_4603_ = lean_ctor_get(v_machine_4602_, 0);
v_requestStream_4604_ = lean_ctor_get(v_____s_4600_, 1);
v_keepAliveTimeout_4605_ = lean_ctor_get(v_____s_4600_, 2);
v_currentTimeout_4606_ = lean_ctor_get(v_____s_4600_, 3);
v_headerTimeout_4607_ = lean_ctor_get(v_____s_4600_, 4);
v_response_4608_ = lean_ctor_get(v_____s_4600_, 5);
v_respStream_4609_ = lean_ctor_get(v_____s_4600_, 6);
v_requiresData_4610_ = lean_ctor_get_uint8(v_____s_4600_, sizeof(void*)*9);
v_expectData_4611_ = lean_ctor_get(v_____s_4600_, 7);
v_handlerDispatched_4612_ = lean_ctor_get_uint8(v_____s_4600_, sizeof(void*)*9 + 1);
v_pendingHead_4613_ = lean_ctor_get(v_____s_4600_, 8);
v_writer_4614_ = lean_ctor_get(v_machine_4602_, 1);
v_state_4615_ = lean_ctor_get(v_reader_4603_, 0);
v___x_4616_ = 0;
if (lean_obj_tag(v_state_4615_) == 6)
{
lean_object* v_state_4644_; 
v_state_4644_ = lean_ctor_get(v_writer_4614_, 2);
if (lean_obj_tag(v_state_4644_) == 7)
{
lean_object* v_outputData_4645_; lean_object* v_size_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; 
v_outputData_4645_ = lean_ctor_get(v_writer_4614_, 1);
v_size_4646_ = lean_ctor_get(v_outputData_4645_, 1);
v___x_4647_ = lean_unsigned_to_nat(0u);
v___x_4648_ = lean_nat_dec_eq(v_size_4646_, v___x_4647_);
if (v___x_4648_ == 0)
{
lean_inc(v_pendingHead_4613_);
lean_inc(v_expectData_4611_);
lean_inc(v_respStream_4609_);
lean_inc_ref(v_response_4608_);
lean_inc(v_headerTimeout_4607_);
lean_inc(v_currentTimeout_4606_);
lean_inc(v_keepAliveTimeout_4605_);
lean_inc_ref(v_requestStream_4604_);
lean_inc_ref(v_machine_4602_);
lean_dec_ref(v_____s_4600_);
goto v___jp_4617_;
}
else
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; 
lean_dec_ref(v___f_4598_);
lean_dec_ref(v___f_4597_);
lean_dec(v_extensions_4596_);
lean_dec_ref(v_connectionContext_4595_);
lean_dec(v_socket_4594_);
lean_dec_ref(v_inst_4593_);
lean_dec_ref(v___f_4592_);
lean_dec_ref(v_config_4591_);
lean_dec(v_handler_4590_);
lean_dec_ref(v_responseBodyInstance_4589_);
lean_dec_ref(v_h_4588_);
v___x_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4649_, 0, v_____s_4600_);
v___x_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4649_);
v___x_4651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4651_, 0, v___x_4650_);
return v___x_4651_;
}
}
else
{
lean_inc(v_pendingHead_4613_);
lean_inc(v_expectData_4611_);
lean_inc(v_respStream_4609_);
lean_inc_ref(v_response_4608_);
lean_inc(v_headerTimeout_4607_);
lean_inc(v_currentTimeout_4606_);
lean_inc(v_keepAliveTimeout_4605_);
lean_inc_ref(v_requestStream_4604_);
lean_inc_ref(v_machine_4602_);
lean_dec_ref(v_____s_4600_);
goto v___jp_4617_;
}
}
else
{
lean_inc(v_pendingHead_4613_);
lean_inc(v_expectData_4611_);
lean_inc(v_respStream_4609_);
lean_inc_ref(v_response_4608_);
lean_inc(v_headerTimeout_4607_);
lean_inc(v_currentTimeout_4606_);
lean_inc(v_keepAliveTimeout_4605_);
lean_inc_ref(v_requestStream_4604_);
lean_inc_ref(v_machine_4602_);
lean_dec_ref(v_____s_4600_);
goto v___jp_4617_;
}
v___jp_4617_:
{
lean_object* v___x_4618_; lean_object* v_snd_4619_; lean_object* v_output_4620_; lean_object* v_fst_4621_; lean_object* v_events_4622_; lean_object* v_data_4623_; lean_object* v_size_4624_; uint8_t v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___f_4628_; lean_object* v___x_4629_; lean_object* v___f_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___f_4633_; lean_object* v___x_4634_; uint8_t v___x_4635_; 
v___x_4618_ = l_Std_Http_Protocol_H1_Machine_step(v___x_4616_, v_machine_4602_);
v_snd_4619_ = lean_ctor_get(v___x_4618_, 1);
lean_inc(v_snd_4619_);
v_output_4620_ = lean_ctor_get(v_snd_4619_, 1);
lean_inc_ref(v_output_4620_);
v_fst_4621_ = lean_ctor_get(v___x_4618_, 0);
lean_inc(v_fst_4621_);
lean_dec_ref(v___x_4618_);
v_events_4622_ = lean_ctor_get(v_snd_4619_, 0);
lean_inc_ref_n(v_events_4622_, 2);
lean_dec(v_snd_4619_);
v_data_4623_ = lean_ctor_get(v_output_4620_, 0);
lean_inc_ref(v_data_4623_);
v_size_4624_ = lean_ctor_get(v_output_4620_, 1);
lean_inc(v_size_4624_);
lean_dec_ref(v_output_4620_);
v___x_4625_ = 1;
v___x_4626_ = lean_box(v___x_4587_);
v___x_4627_ = lean_box(v___x_4625_);
lean_inc_ref_n(v_connectionContext_4595_, 3);
lean_inc(v_socket_4594_);
lean_inc_ref(v_inst_4593_);
lean_inc_ref_n(v_config_4591_, 2);
lean_inc_n(v_handler_4590_, 3);
lean_inc_ref_n(v_responseBodyInstance_4589_, 2);
lean_inc_ref_n(v_h_4588_, 3);
v___f_4628_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed), 12, 10);
lean_closure_set(v___f_4628_, 0, v___x_4626_);
lean_closure_set(v___f_4628_, 1, v_h_4588_);
lean_closure_set(v___f_4628_, 2, v_responseBodyInstance_4589_);
lean_closure_set(v___f_4628_, 3, v_handler_4590_);
lean_closure_set(v___f_4628_, 4, v_config_4591_);
lean_closure_set(v___f_4628_, 5, v___f_4592_);
lean_closure_set(v___f_4628_, 6, v_inst_4593_);
lean_closure_set(v___f_4628_, 7, v_socket_4594_);
lean_closure_set(v___f_4628_, 8, v_connectionContext_4595_);
lean_closure_set(v___f_4628_, 9, v___x_4627_);
v___x_4629_ = lean_box(v___x_4587_);
v___f_4630_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed), 8, 6);
lean_closure_set(v___f_4630_, 0, v_h_4588_);
lean_closure_set(v___f_4630_, 1, v_handler_4590_);
lean_closure_set(v___f_4630_, 2, v_extensions_4596_);
lean_closure_set(v___f_4630_, 3, v_connectionContext_4595_);
lean_closure_set(v___f_4630_, 4, v___x_4629_);
lean_closure_set(v___f_4630_, 5, v___f_4628_);
v___x_4631_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4631_, 0, v_fst_4621_);
lean_ctor_set(v___x_4631_, 1, v_requestStream_4604_);
lean_ctor_set(v___x_4631_, 2, v_keepAliveTimeout_4605_);
lean_ctor_set(v___x_4631_, 3, v_currentTimeout_4606_);
lean_ctor_set(v___x_4631_, 4, v_headerTimeout_4607_);
lean_ctor_set(v___x_4631_, 5, v_response_4608_);
lean_ctor_set(v___x_4631_, 6, v_respStream_4609_);
lean_ctor_set(v___x_4631_, 7, v_expectData_4611_);
lean_ctor_set(v___x_4631_, 8, v_pendingHead_4613_);
lean_ctor_set_uint8(v___x_4631_, sizeof(void*)*9, v_requiresData_4610_);
lean_ctor_set_uint8(v___x_4631_, sizeof(void*)*9 + 1, v_handlerDispatched_4612_);
v___x_4632_ = lean_box(v___x_4587_);
lean_inc_ref(v___f_4630_);
lean_inc_ref(v___x_4631_);
v___f_4633_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed), 11, 9);
lean_closure_set(v___f_4633_, 0, v_h_4588_);
lean_closure_set(v___f_4633_, 1, v_responseBodyInstance_4589_);
lean_closure_set(v___f_4633_, 2, v_handler_4590_);
lean_closure_set(v___f_4633_, 3, v_config_4591_);
lean_closure_set(v___f_4633_, 4, v_connectionContext_4595_);
lean_closure_set(v___f_4633_, 5, v_events_4622_);
lean_closure_set(v___f_4633_, 6, v___x_4631_);
lean_closure_set(v___f_4633_, 7, v___x_4632_);
lean_closure_set(v___f_4633_, 8, v___f_4630_);
v___x_4634_ = lean_unsigned_to_nat(0u);
v___x_4635_ = lean_nat_dec_lt(v___x_4634_, v_size_4624_);
lean_dec(v_size_4624_);
if (v___x_4635_ == 0)
{
lean_object* v___x_4636_; lean_object* v___x_4637_; 
lean_dec_ref(v___f_4633_);
lean_dec_ref(v_data_4623_);
lean_dec_ref(v___f_4598_);
lean_dec_ref(v___f_4597_);
lean_dec(v_socket_4594_);
lean_dec_ref(v_inst_4593_);
v___x_4636_ = lean_box(0);
v___x_4637_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4588_, v_responseBodyInstance_4589_, v_handler_4590_, v_config_4591_, v_connectionContext_4595_, v_events_4622_, v___x_4631_, v___x_4587_, v___f_4630_, v___x_4636_);
return v___x_4637_;
}
else
{
lean_object* v_sendAll_4638_; lean_object* v___f_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; 
lean_dec_ref(v___f_4630_);
lean_dec_ref(v_events_4622_);
lean_dec_ref(v_connectionContext_4595_);
lean_dec_ref(v_config_4591_);
lean_dec(v_handler_4590_);
lean_dec_ref(v_responseBodyInstance_4589_);
lean_dec_ref(v_h_4588_);
v_sendAll_4638_ = lean_ctor_get(v_inst_4593_, 1);
lean_inc_ref(v_sendAll_4638_);
lean_dec_ref(v_inst_4593_);
v___f_4639_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 4, 2);
lean_closure_set(v___f_4639_, 0, v___x_4631_);
lean_closure_set(v___f_4639_, 1, v___f_4633_);
v___x_4640_ = lean_apply_3(v_sendAll_4638_, v_socket_4594_, v_data_4623_, lean_box(0));
v___x_4641_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4634_, v___x_4587_, v___x_4640_, v___f_4597_);
v___x_4642_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4634_, v___x_4587_, v___x_4641_, v___f_4598_);
v___x_4643_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4634_, v___x_4587_, v___x_4642_, v___f_4639_);
return v___x_4643_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object* v___x_4652_, lean_object* v_h_4653_, lean_object* v_responseBodyInstance_4654_, lean_object* v_handler_4655_, lean_object* v_config_4656_, lean_object* v___f_4657_, lean_object* v_inst_4658_, lean_object* v_socket_4659_, lean_object* v_connectionContext_4660_, lean_object* v_extensions_4661_, lean_object* v___f_4662_, lean_object* v___f_4663_, lean_object* v_x_4664_, lean_object* v_____s_4665_, lean_object* v___y_4666_){
_start:
{
uint8_t v___x_5392__boxed_4667_; lean_object* v_res_4668_; 
v___x_5392__boxed_4667_ = lean_unbox(v___x_4652_);
v_res_4668_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(v___x_5392__boxed_4667_, v_h_4653_, v_responseBodyInstance_4654_, v_handler_4655_, v_config_4656_, v___f_4657_, v_inst_4658_, v_socket_4659_, v_connectionContext_4660_, v_extensions_4661_, v___f_4662_, v___f_4663_, v_x_4664_, v_____s_4665_);
return v_res_4668_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object* v_a_4669_, lean_object* v_x_4670_){
_start:
{
if (lean_obj_tag(v_x_4670_) == 0)
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4680_; 
v_a_4672_ = lean_ctor_get(v_x_4670_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v_x_4670_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4674_ = v_x_4670_;
v_isShared_4675_ = v_isSharedCheck_4680_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v_x_4670_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4680_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___x_4677_; 
if (v_isShared_4675_ == 0)
{
v___x_4677_ = v___x_4674_;
goto v_reusejp_4676_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4672_);
v___x_4677_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4676_;
}
v_reusejp_4676_:
{
lean_object* v___x_4678_; 
v___x_4678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4678_, 0, v___x_4677_);
return v___x_4678_;
}
}
}
else
{
lean_object* v___x_4681_; lean_object* v___x_4682_; 
lean_dec_ref_known(v_x_4670_, 1);
v___x_4681_ = l_IO_Promise_result_x21___redArg(v_a_4669_);
v___x_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4682_, 0, v___x_4681_);
return v___x_4682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object* v_a_4683_, lean_object* v_x_4684_, lean_object* v___y_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(v_a_4683_, v_x_4684_);
lean_dec(v_a_4683_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object* v___f_4687_, lean_object* v___x_4688_, lean_object* v___x_4689_, uint8_t v___x_4690_, lean_object* v_x_4691_){
_start:
{
if (lean_obj_tag(v_x_4691_) == 0)
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4701_; 
lean_dec_ref(v___x_4689_);
lean_dec(v___x_4688_);
lean_dec_ref(v___f_4687_);
v_a_4693_ = lean_ctor_get(v_x_4691_, 0);
v_isSharedCheck_4701_ = !lean_is_exclusive(v_x_4691_);
if (v_isSharedCheck_4701_ == 0)
{
v___x_4695_ = v_x_4691_;
v_isShared_4696_ = v_isSharedCheck_4701_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v_x_4691_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4701_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v_a_4693_);
v___x_4698_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4699_; 
v___x_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4698_);
return v___x_4699_;
}
}
}
else
{
lean_object* v_a_4702_; lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4713_; 
v_a_4702_ = lean_ctor_get(v_x_4691_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v_x_4691_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4704_ = v_x_4691_;
v_isShared_4705_ = v_isSharedCheck_4713_;
goto v_resetjp_4703_;
}
else
{
lean_inc(v_a_4702_);
lean_dec(v_x_4691_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4713_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v___f_4706_; lean_object* v___x_4707_; lean_object* v___x_4709_; 
lean_inc(v_a_4702_);
v___f_4706_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_4706_, 0, v_a_4702_);
lean_inc(v___x_4688_);
v___x_4707_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_4687_, v___x_4688_, v_a_4702_, v___x_4689_);
if (v_isShared_4705_ == 0)
{
lean_ctor_set(v___x_4704_, 0, v___x_4707_);
v___x_4709_ = v___x_4704_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v___x_4707_);
v___x_4709_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; 
v___x_4710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4709_);
v___x_4711_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4688_, v___x_4690_, v___x_4710_, v___f_4706_);
return v___x_4711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object* v___f_4714_, lean_object* v___x_4715_, lean_object* v___x_4716_, lean_object* v___x_4717_, lean_object* v_x_4718_, lean_object* v___y_4719_){
_start:
{
uint8_t v___x_5507__boxed_4720_; lean_object* v_res_4721_; 
v___x_5507__boxed_4720_ = lean_unbox(v___x_4717_);
v_res_4721_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(v___f_4714_, v___x_4715_, v___x_4716_, v___x_5507__boxed_4720_, v_x_4718_);
return v_res_4721_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object* v_config_4722_, lean_object* v_h_4723_, lean_object* v_responseBodyInstance_4724_, lean_object* v_handler_4725_, lean_object* v___f_4726_, lean_object* v_inst_4727_, lean_object* v_socket_4728_, lean_object* v_connectionContext_4729_, lean_object* v_extensions_4730_, lean_object* v___f_4731_, lean_object* v___f_4732_, lean_object* v_machine_4733_, lean_object* v_a_4734_, lean_object* v___x_4735_, lean_object* v___f_4736_, lean_object* v_x_4737_){
_start:
{
if (lean_obj_tag(v_x_4737_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4747_; 
lean_dec_ref(v___f_4736_);
lean_dec(v___x_4735_);
lean_dec_ref(v_a_4734_);
lean_dec_ref(v_machine_4733_);
lean_dec_ref(v___f_4732_);
lean_dec_ref(v___f_4731_);
lean_dec(v_extensions_4730_);
lean_dec_ref(v_connectionContext_4729_);
lean_dec(v_socket_4728_);
lean_dec_ref(v_inst_4727_);
lean_dec_ref(v___f_4726_);
lean_dec(v_handler_4725_);
lean_dec_ref(v_responseBodyInstance_4724_);
lean_dec_ref(v_h_4723_);
lean_dec_ref(v_config_4722_);
v_a_4739_ = lean_ctor_get(v_x_4737_, 0);
v_isSharedCheck_4747_ = !lean_is_exclusive(v_x_4737_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4741_ = v_x_4737_;
v_isShared_4742_ = v_isSharedCheck_4747_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v_x_4737_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4747_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4744_; 
if (v_isShared_4742_ == 0)
{
v___x_4744_ = v___x_4741_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v_a_4739_);
v___x_4744_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
lean_object* v___x_4745_; 
v___x_4745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4745_, 0, v___x_4744_);
return v___x_4745_;
}
}
}
else
{
lean_object* v_a_4748_; lean_object* v___x_4750_; uint8_t v_isShared_4751_; uint8_t v_isSharedCheck_4769_; 
v_a_4748_ = lean_ctor_get(v_x_4737_, 0);
v_isSharedCheck_4769_ = !lean_is_exclusive(v_x_4737_);
if (v_isSharedCheck_4769_ == 0)
{
v___x_4750_ = v_x_4737_;
v_isShared_4751_ = v_isSharedCheck_4769_;
goto v_resetjp_4749_;
}
else
{
lean_inc(v_a_4748_);
lean_dec(v_x_4737_);
v___x_4750_ = lean_box(0);
v_isShared_4751_ = v_isSharedCheck_4769_;
goto v_resetjp_4749_;
}
v_resetjp_4749_:
{
lean_object* v_keepAliveTimeout_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; uint8_t v___x_4755_; lean_object* v___x_4756_; lean_object* v___f_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___f_4761_; lean_object* v___x_4762_; lean_object* v___x_4764_; 
v_keepAliveTimeout_4752_ = lean_ctor_get(v_config_4722_, 5);
lean_inc_n(v_keepAliveTimeout_4752_, 2);
v___x_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4753_, 0, v_keepAliveTimeout_4752_);
v___x_4754_ = lean_box(0);
v___x_4755_ = 0;
v___x_4756_ = lean_box(v___x_4755_);
v___f_4757_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 15, 12);
lean_closure_set(v___f_4757_, 0, v___x_4756_);
lean_closure_set(v___f_4757_, 1, v_h_4723_);
lean_closure_set(v___f_4757_, 2, v_responseBodyInstance_4724_);
lean_closure_set(v___f_4757_, 3, v_handler_4725_);
lean_closure_set(v___f_4757_, 4, v_config_4722_);
lean_closure_set(v___f_4757_, 5, v___f_4726_);
lean_closure_set(v___f_4757_, 6, v_inst_4727_);
lean_closure_set(v___f_4757_, 7, v_socket_4728_);
lean_closure_set(v___f_4757_, 8, v_connectionContext_4729_);
lean_closure_set(v___f_4757_, 9, v_extensions_4730_);
lean_closure_set(v___f_4757_, 10, v___f_4731_);
lean_closure_set(v___f_4757_, 11, v___f_4732_);
v___x_4758_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4758_, 0, v_machine_4733_);
lean_ctor_set(v___x_4758_, 1, v_a_4734_);
lean_ctor_set(v___x_4758_, 2, v___x_4753_);
lean_ctor_set(v___x_4758_, 3, v_keepAliveTimeout_4752_);
lean_ctor_set(v___x_4758_, 4, v___x_4754_);
lean_ctor_set(v___x_4758_, 5, v_a_4748_);
lean_ctor_set(v___x_4758_, 6, v___x_4754_);
lean_ctor_set(v___x_4758_, 7, v___x_4735_);
lean_ctor_set(v___x_4758_, 8, v___x_4754_);
lean_ctor_set_uint8(v___x_4758_, sizeof(void*)*9, v___x_4755_);
lean_ctor_set_uint8(v___x_4758_, sizeof(void*)*9 + 1, v___x_4755_);
v___x_4759_ = lean_unsigned_to_nat(0u);
v___x_4760_ = lean_box(v___x_4755_);
v___f_4761_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed), 6, 4);
lean_closure_set(v___f_4761_, 0, v___f_4757_);
lean_closure_set(v___f_4761_, 1, v___x_4759_);
lean_closure_set(v___f_4761_, 2, v___x_4758_);
lean_closure_set(v___f_4761_, 3, v___x_4760_);
v___x_4762_ = lean_io_promise_new();
if (v_isShared_4751_ == 0)
{
lean_ctor_set(v___x_4750_, 0, v___x_4762_);
v___x_4764_ = v___x_4750_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4768_; 
v_reuseFailAlloc_4768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4768_, 0, v___x_4762_);
v___x_4764_ = v_reuseFailAlloc_4768_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4764_);
v___x_4766_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4759_, v___x_4755_, v___x_4765_, v___f_4761_);
v___x_4767_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4759_, v___x_4755_, v___x_4766_, v___f_4736_);
return v___x_4767_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_config_4770_ = _args[0];
lean_object* v_h_4771_ = _args[1];
lean_object* v_responseBodyInstance_4772_ = _args[2];
lean_object* v_handler_4773_ = _args[3];
lean_object* v___f_4774_ = _args[4];
lean_object* v_inst_4775_ = _args[5];
lean_object* v_socket_4776_ = _args[6];
lean_object* v_connectionContext_4777_ = _args[7];
lean_object* v_extensions_4778_ = _args[8];
lean_object* v___f_4779_ = _args[9];
lean_object* v___f_4780_ = _args[10];
lean_object* v_machine_4781_ = _args[11];
lean_object* v_a_4782_ = _args[12];
lean_object* v___x_4783_ = _args[13];
lean_object* v___f_4784_ = _args[14];
lean_object* v_x_4785_ = _args[15];
lean_object* v___y_4786_ = _args[16];
_start:
{
lean_object* v_res_4787_; 
v_res_4787_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(v_config_4770_, v_h_4771_, v_responseBodyInstance_4772_, v_handler_4773_, v___f_4774_, v_inst_4775_, v_socket_4776_, v_connectionContext_4777_, v_extensions_4778_, v___f_4779_, v___f_4780_, v_machine_4781_, v_a_4782_, v___x_4783_, v___f_4784_, v_x_4785_);
return v_res_4787_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object* v_config_4788_, lean_object* v_h_4789_, lean_object* v_responseBodyInstance_4790_, lean_object* v_handler_4791_, lean_object* v___f_4792_, lean_object* v_inst_4793_, lean_object* v_socket_4794_, lean_object* v_connectionContext_4795_, lean_object* v_extensions_4796_, lean_object* v___f_4797_, lean_object* v___f_4798_, lean_object* v_machine_4799_, lean_object* v___f_4800_, lean_object* v_x_4801_){
_start:
{
if (lean_obj_tag(v_x_4801_) == 0)
{
lean_object* v_a_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4811_; 
lean_dec_ref(v___f_4800_);
lean_dec_ref(v_machine_4799_);
lean_dec_ref(v___f_4798_);
lean_dec_ref(v___f_4797_);
lean_dec(v_extensions_4796_);
lean_dec_ref(v_connectionContext_4795_);
lean_dec(v_socket_4794_);
lean_dec_ref(v_inst_4793_);
lean_dec_ref(v___f_4792_);
lean_dec(v_handler_4791_);
lean_dec_ref(v_responseBodyInstance_4790_);
lean_dec_ref(v_h_4789_);
lean_dec_ref(v_config_4788_);
v_a_4803_ = lean_ctor_get(v_x_4801_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v_x_4801_);
if (v_isSharedCheck_4811_ == 0)
{
v___x_4805_ = v_x_4801_;
v_isShared_4806_ = v_isSharedCheck_4811_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_a_4803_);
lean_dec(v_x_4801_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4811_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v___x_4808_; 
if (v_isShared_4806_ == 0)
{
v___x_4808_ = v___x_4805_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_a_4803_);
v___x_4808_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
lean_object* v___x_4809_; 
v___x_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4808_);
return v___x_4809_;
}
}
}
else
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4826_; 
v_a_4812_ = lean_ctor_get(v_x_4801_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v_x_4801_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4814_ = v_x_4801_;
v_isShared_4815_ = v_isSharedCheck_4826_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v_x_4801_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4826_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4816_; lean_object* v___f_4817_; lean_object* v___x_4818_; uint8_t v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4822_; 
v___x_4816_ = lean_box(0);
v___f_4817_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed), 17, 15);
lean_closure_set(v___f_4817_, 0, v_config_4788_);
lean_closure_set(v___f_4817_, 1, v_h_4789_);
lean_closure_set(v___f_4817_, 2, v_responseBodyInstance_4790_);
lean_closure_set(v___f_4817_, 3, v_handler_4791_);
lean_closure_set(v___f_4817_, 4, v___f_4792_);
lean_closure_set(v___f_4817_, 5, v_inst_4793_);
lean_closure_set(v___f_4817_, 6, v_socket_4794_);
lean_closure_set(v___f_4817_, 7, v_connectionContext_4795_);
lean_closure_set(v___f_4817_, 8, v_extensions_4796_);
lean_closure_set(v___f_4817_, 9, v___f_4797_);
lean_closure_set(v___f_4817_, 10, v___f_4798_);
lean_closure_set(v___f_4817_, 11, v_machine_4799_);
lean_closure_set(v___f_4817_, 12, v_a_4812_);
lean_closure_set(v___f_4817_, 13, v___x_4816_);
lean_closure_set(v___f_4817_, 14, v___f_4800_);
v___x_4818_ = lean_unsigned_to_nat(0u);
v___x_4819_ = 0;
v___x_4820_ = l_Std_CloseableChannel_new___redArg(v___x_4816_);
if (v_isShared_4815_ == 0)
{
lean_ctor_set(v___x_4814_, 0, v___x_4820_);
v___x_4822_ = v___x_4814_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v___x_4820_);
v___x_4822_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; 
v___x_4823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4823_, 0, v___x_4822_);
v___x_4824_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4818_, v___x_4819_, v___x_4823_, v___f_4817_);
return v___x_4824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object* v_config_4827_, lean_object* v_h_4828_, lean_object* v_responseBodyInstance_4829_, lean_object* v_handler_4830_, lean_object* v___f_4831_, lean_object* v_inst_4832_, lean_object* v_socket_4833_, lean_object* v_connectionContext_4834_, lean_object* v_extensions_4835_, lean_object* v___f_4836_, lean_object* v___f_4837_, lean_object* v_machine_4838_, lean_object* v___f_4839_, lean_object* v_x_4840_, lean_object* v___y_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(v_config_4827_, v_h_4828_, v_responseBodyInstance_4829_, v_handler_4830_, v___f_4831_, v_inst_4832_, v_socket_4833_, v_connectionContext_4834_, v_extensions_4835_, v___f_4836_, v___f_4837_, v_machine_4838_, v___f_4839_, v_x_4840_);
return v_res_4842_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object* v_inst_4846_, lean_object* v_h_4847_, lean_object* v_connection_4848_, lean_object* v_config_4849_, lean_object* v_connectionContext_4850_, lean_object* v_handler_4851_){
_start:
{
lean_object* v_responseBodyInstance_4853_; lean_object* v_onFailure_4854_; lean_object* v_socket_4855_; lean_object* v_machine_4856_; lean_object* v_extensions_4857_; lean_object* v___f_4858_; lean_object* v___f_4859_; lean_object* v___f_4860_; lean_object* v___f_4861_; lean_object* v___f_4862_; lean_object* v___f_4863_; lean_object* v___f_4864_; lean_object* v___f_4865_; lean_object* v___f_4866_; lean_object* v___x_4867_; uint8_t v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v_responseBodyInstance_4853_ = lean_ctor_get(v_h_4847_, 0);
lean_inc_ref_n(v_responseBodyInstance_4853_, 2);
v_onFailure_4854_ = lean_ctor_get(v_h_4847_, 2);
v_socket_4855_ = lean_ctor_get(v_connection_4848_, 0);
lean_inc_n(v_socket_4855_, 2);
v_machine_4856_ = lean_ctor_get(v_connection_4848_, 1);
lean_inc_ref(v_machine_4856_);
v_extensions_4857_ = lean_ctor_get(v_connection_4848_, 2);
lean_inc(v_extensions_4857_);
lean_dec_ref(v_connection_4848_);
v___f_4858_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_4859_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0));
v___f_4860_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1));
lean_inc(v_handler_4851_);
lean_inc_ref(v_onFailure_4854_);
v___f_4861_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4861_, 0, v_onFailure_4854_);
lean_closure_set(v___f_4861_, 1, v_handler_4851_);
lean_closure_set(v___f_4861_, 2, v___f_4860_);
v___f_4862_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__2));
lean_inc_ref(v_inst_4846_);
v___f_4863_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4863_, 0, v_inst_4846_);
lean_closure_set(v___f_4863_, 1, v_socket_4855_);
lean_inc_ref(v___f_4863_);
v___f_4864_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4864_, 0, v___f_4863_);
v___f_4865_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4865_, 0, v_responseBodyInstance_4853_);
lean_closure_set(v___f_4865_, 1, v___f_4864_);
lean_closure_set(v___f_4865_, 2, v___f_4863_);
lean_closure_set(v___f_4865_, 3, v___f_4858_);
v___f_4866_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed), 15, 13);
lean_closure_set(v___f_4866_, 0, v_config_4849_);
lean_closure_set(v___f_4866_, 1, v_h_4847_);
lean_closure_set(v___f_4866_, 2, v_responseBodyInstance_4853_);
lean_closure_set(v___f_4866_, 3, v_handler_4851_);
lean_closure_set(v___f_4866_, 4, v___f_4862_);
lean_closure_set(v___f_4866_, 5, v_inst_4846_);
lean_closure_set(v___f_4866_, 6, v_socket_4855_);
lean_closure_set(v___f_4866_, 7, v_connectionContext_4850_);
lean_closure_set(v___f_4866_, 8, v_extensions_4857_);
lean_closure_set(v___f_4866_, 9, v___f_4859_);
lean_closure_set(v___f_4866_, 10, v___f_4861_);
lean_closure_set(v___f_4866_, 11, v_machine_4856_);
lean_closure_set(v___f_4866_, 12, v___f_4865_);
v___x_4867_ = lean_unsigned_to_nat(0u);
v___x_4868_ = 0;
v___x_4869_ = l_Std_Http_Body_mkStream();
v___x_4870_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4867_, v___x_4868_, v___x_4869_, v___f_4866_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object* v_inst_4871_, lean_object* v_h_4872_, lean_object* v_connection_4873_, lean_object* v_config_4874_, lean_object* v_connectionContext_4875_, lean_object* v_handler_4876_, lean_object* v___y_4877_){
_start:
{
lean_object* v_res_4878_; 
v_res_4878_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4871_, v_h_4872_, v_connection_4873_, v_config_4874_, v_connectionContext_4875_, v_handler_4876_);
return v_res_4878_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object* v_00_u03b1_4879_, lean_object* v_00_u03c3_4880_, lean_object* v_inst_4881_, lean_object* v_h_4882_, lean_object* v_connection_4883_, lean_object* v_config_4884_, lean_object* v_connectionContext_4885_, lean_object* v_handler_4886_){
_start:
{
lean_object* v___x_4888_; 
v___x_4888_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4881_, v_h_4882_, v_connection_4883_, v_config_4884_, v_connectionContext_4885_, v_handler_4886_);
return v___x_4888_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object* v_00_u03b1_4889_, lean_object* v_00_u03c3_4890_, lean_object* v_inst_4891_, lean_object* v_h_4892_, lean_object* v_connection_4893_, lean_object* v_config_4894_, lean_object* v_connectionContext_4895_, lean_object* v_handler_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(v_00_u03b1_4889_, v_00_u03c3_4890_, v_inst_4891_, v_h_4892_, v_connection_4893_, v_config_4894_, v_connectionContext_4895_, v_handler_4896_);
return v_res_4898_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_4899_; lean_object* v___x_4900_; 
v___x_4899_ = 0;
v___x_4900_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4899_);
return v___x_4900_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4901_ = lean_unsigned_to_nat(4096u);
v___x_4902_ = lean_mk_empty_byte_array(v___x_4901_);
return v___x_4902_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; 
v___x_4903_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1);
v___x_4904_ = l_ByteArray_mkIterator(v___x_4903_);
return v___x_4904_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3(void){
_start:
{
uint8_t v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v___x_4905_ = 0;
v___x_4906_ = lean_unsigned_to_nat(0u);
v___x_4907_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0);
v___x_4908_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2);
v___x_4909_ = lean_box(0);
v___x_4910_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_4910_, 0, v___x_4909_);
lean_ctor_set(v___x_4910_, 1, v___x_4908_);
lean_ctor_set(v___x_4910_, 2, v___x_4907_);
lean_ctor_set(v___x_4910_, 3, v___x_4906_);
lean_ctor_set(v___x_4910_, 4, v___x_4906_);
lean_ctor_set(v___x_4910_, 5, v___x_4906_);
lean_ctor_set_uint8(v___x_4910_, sizeof(void*)*6, v___x_4905_);
return v___x_4910_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7(void){
_start:
{
uint8_t v___x_4918_; lean_object* v___x_4919_; 
v___x_4918_ = 1;
v___x_4919_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4918_);
return v___x_4919_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_4920_; uint8_t v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; 
v___x_4920_ = lean_unsigned_to_nat(0u);
v___x_4921_ = 0;
v___x_4922_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7);
v___x_4923_ = lean_box(0);
v___x_4924_ = lean_box(0);
v___x_4925_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6));
v___x_4926_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4));
v___x_4927_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
lean_ctor_set(v___x_4927_, 1, v___x_4925_);
lean_ctor_set(v___x_4927_, 2, v___x_4924_);
lean_ctor_set(v___x_4927_, 3, v___x_4923_);
lean_ctor_set(v___x_4927_, 4, v___x_4922_);
lean_ctor_set(v___x_4927_, 5, v___x_4920_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*6, v___x_4921_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*6 + 1, v___x_4921_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*6 + 2, v___x_4921_);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object* v_config_4928_, lean_object* v_client_4929_, lean_object* v_extensions_4930_, lean_object* v_inst_4931_, lean_object* v_inst_4932_, lean_object* v_handler_4933_, lean_object* v_x_4934_){
_start:
{
if (lean_obj_tag(v_x_4934_) == 0)
{
lean_object* v_a_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4944_; 
lean_dec(v_handler_4933_);
lean_dec_ref(v_inst_4932_);
lean_dec_ref(v_inst_4931_);
lean_dec(v_extensions_4930_);
lean_dec(v_client_4929_);
lean_dec_ref(v_config_4928_);
v_a_4936_ = lean_ctor_get(v_x_4934_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v_x_4934_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4938_ = v_x_4934_;
v_isShared_4939_ = v_isSharedCheck_4944_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_a_4936_);
lean_dec(v_x_4934_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4944_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
lean_object* v___x_4941_; 
if (v_isShared_4939_ == 0)
{
v___x_4941_ = v___x_4938_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4936_);
v___x_4941_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
lean_object* v___x_4942_; 
v___x_4942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4942_, 0, v___x_4941_);
return v___x_4942_;
}
}
}
else
{
lean_object* v_a_4945_; uint8_t v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; uint8_t v_enableKeepAlive_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; 
v_a_4945_ = lean_ctor_get(v_x_4934_, 0);
lean_inc(v_a_4945_);
lean_dec_ref_known(v_x_4934_, 1);
v___x_4946_ = 0;
v___x_4947_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3);
v___x_4948_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5));
v___x_4949_ = lean_box(0);
v___x_4950_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8);
v___x_4951_ = l_Std_Http_Config_toH1Config(v_config_4928_);
v_enableKeepAlive_4952_ = lean_ctor_get_uint8(v___x_4951_, sizeof(void*)*18);
v___x_4953_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4953_, 0, v___x_4947_);
lean_ctor_set(v___x_4953_, 1, v___x_4950_);
lean_ctor_set(v___x_4953_, 2, v___x_4951_);
lean_ctor_set(v___x_4953_, 3, v___x_4948_);
lean_ctor_set(v___x_4953_, 4, v___x_4949_);
lean_ctor_set(v___x_4953_, 5, v___x_4949_);
lean_ctor_set_uint8(v___x_4953_, sizeof(void*)*6, v_enableKeepAlive_4952_);
lean_ctor_set_uint8(v___x_4953_, sizeof(void*)*6 + 1, v___x_4946_);
lean_ctor_set_uint8(v___x_4953_, sizeof(void*)*6 + 2, v___x_4946_);
v___x_4954_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4954_, 0, v_client_4929_);
lean_ctor_set(v___x_4954_, 1, v___x_4953_);
lean_ctor_set(v___x_4954_, 2, v_extensions_4930_);
v___x_4955_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4931_, v_inst_4932_, v___x_4954_, v_config_4928_, v_a_4945_, v_handler_4933_);
return v___x_4955_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object* v_config_4956_, lean_object* v_client_4957_, lean_object* v_extensions_4958_, lean_object* v_inst_4959_, lean_object* v_inst_4960_, lean_object* v_handler_4961_, lean_object* v_x_4962_, lean_object* v___y_4963_){
_start:
{
lean_object* v_res_4964_; 
v_res_4964_ = l_Std_Http_Server_serveConnection___redArg___lam__0(v_config_4956_, v_client_4957_, v_extensions_4958_, v_inst_4959_, v_inst_4960_, v_handler_4961_, v_x_4962_);
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object* v_inst_4965_, lean_object* v_inst_4966_, lean_object* v_client_4967_, lean_object* v_handler_4968_, lean_object* v_config_4969_, lean_object* v_extensions_4970_, lean_object* v___y_4971_){
_start:
{
lean_object* v___f_4973_; lean_object* v___x_4974_; uint8_t v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___f_4973_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_4973_, 0, v_config_4969_);
lean_closure_set(v___f_4973_, 1, v_client_4967_);
lean_closure_set(v___f_4973_, 2, v_extensions_4970_);
lean_closure_set(v___f_4973_, 3, v_inst_4965_);
lean_closure_set(v___f_4973_, 4, v_inst_4966_);
lean_closure_set(v___f_4973_, 5, v_handler_4968_);
v___x_4974_ = lean_unsigned_to_nat(0u);
v___x_4975_ = 0;
lean_inc_ref(v___y_4971_);
v___x_4976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4976_, 0, v___y_4971_);
v___x_4977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4976_);
v___x_4978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4974_, v___x_4975_, v___x_4977_, v___f_4973_);
return v___x_4978_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object* v_inst_4979_, lean_object* v_inst_4980_, lean_object* v_client_4981_, lean_object* v_handler_4982_, lean_object* v_config_4983_, lean_object* v_extensions_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_){
_start:
{
lean_object* v_res_4987_; 
v_res_4987_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4979_, v_inst_4980_, v_client_4981_, v_handler_4982_, v_config_4983_, v_extensions_4984_, v___y_4985_);
lean_dec_ref(v___y_4985_);
return v_res_4987_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object* v_t_4988_, lean_object* v_00_u03c3_4989_, lean_object* v_inst_4990_, lean_object* v_inst_4991_, lean_object* v_client_4992_, lean_object* v_handler_4993_, lean_object* v_config_4994_, lean_object* v_extensions_4995_, lean_object* v___y_4996_){
_start:
{
lean_object* v___x_4998_; 
v___x_4998_ = l_Std_Http_Server_serveConnection___redArg(v_inst_4990_, v_inst_4991_, v_client_4992_, v_handler_4993_, v_config_4994_, v_extensions_4995_, v___y_4996_);
return v___x_4998_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object* v_t_4999_, lean_object* v_00_u03c3_5000_, lean_object* v_inst_5001_, lean_object* v_inst_5002_, lean_object* v_client_5003_, lean_object* v_handler_5004_, lean_object* v_config_5005_, lean_object* v_extensions_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_){
_start:
{
lean_object* v_res_5009_; 
v_res_5009_ = l_Std_Http_Server_serveConnection(v_t_4999_, v_00_u03c3_5000_, v_inst_5001_, v_inst_5002_, v_client_5003_, v_handler_5004_, v_config_5005_, v_extensions_5006_, v___y_5007_);
lean_dec_ref(v___y_5007_);
return v_res_5009_;
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
